/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::VehicleConstraintSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

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



/* JPH::VehicleConstraint::ResetWarmStart() */

void __thiscall JPH::VehicleConstraint::ResetWarmStart(VehicleConstraint *this)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0xa0);
  plVar1 = plVar3 + *(long *)(this + 0x90);
  for (; plVar1 != plVar3; plVar3 = plVar3 + 1) {
    lVar2 = *plVar3;
    *(undefined4 *)(lVar2 + 0xc4) = 0;
    *(undefined4 *)(lVar2 + 0xd0) = 0;
    *(undefined4 *)(lVar2 + 0x104) = 0;
    *(undefined4 *)(lVar2 + 0x110) = 0;
    *(undefined4 *)(lVar2 + 0x144) = 0;
    *(undefined4 *)(lVar2 + 0x150) = 0;
    *(undefined4 *)(lVar2 + 0x184) = 0;
    *(undefined4 *)(lVar2 + 400) = 0;
  }
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  return;
}



/* JPH::VehicleConstraint::DrawConstraint(JPH::DebugRenderer*) const */

void JPH::VehicleConstraint::DrawConstraint(DebugRenderer *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001000ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xc0) + 0x48))();
  return;
}



/* JPH::VehicleConstraint::DrawConstraintLimits(JPH::DebugRenderer*) const */

void JPH::VehicleConstraint::DrawConstraintLimits(DebugRenderer *param_1)

{
  return;
}



/* JPH::VehicleConstraintSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::VehicleConstraintSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((ConstraintSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::VehicleConstraintSettings::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::VehicleConstraintSettings::SaveBinaryState(VehicleConstraintSettings *this,StreamOut *param_1)

{
  StreamOut *pSVar1;
  undefined8 *puVar2;
  StreamOut *pSVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::ConstraintSettings::SaveBinaryState((StreamOut *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,4);
  local_3c = (undefined4)*(undefined8 *)(this + 0x70);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_3c,4);
  pSVar3 = *(StreamOut **)(this + 0x80);
  pSVar1 = pSVar3 + *(long *)(this + 0x70) * 0xc;
  for (; pSVar3 != pSVar1; pSVar3 = pSVar3 + 0xc) {
    JPH::VehicleAntiRollBar::SaveBinaryState(pSVar3);
  }
  local_38 = (undefined4)*(undefined8 *)(this + 0x58);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_38,4);
  puVar4 = *(undefined8 **)(this + 0x68);
  puVar2 = puVar4 + *(long *)(this + 0x58);
  for (; puVar2 != puVar4; puVar4 = puVar4 + 1) {
    (**(code **)(*(long *)*puVar4 + 0x20))((long *)*puVar4,param_1);
  }
  (**(code **)**(undefined8 **)(this + 0x88))();
  local_34 = JPH::RTTI::GetHash();
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_34,4);
  (**(code **)(**(long **)(this + 0x88) + 0x20))(*(long **)(this + 0x88),param_1);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::VehicleConstraint::BuildIslands(unsigned int, JPH::IslandBuilder&, JPH::BodyManager&) */

void __thiscall
JPH::VehicleConstraint::BuildIslands
          (VehicleConstraint *this,uint param_1,IslandBuilder *param_2,BodyManager *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  undefined1 *puVar5;
  uint *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  uint *puVar10;
  undefined1 *puVar11;
  uint uVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  long in_FS_OFFSET;
  undefined1 auStack_58 [4];
  uint local_54;
  IslandBuilder *local_50;
  long local_40;
  undefined1 *puVar12;
  
  puVar11 = auStack_58;
  lVar9 = *(long *)(this + 0x90);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = lVar9 * 4 + 0x1b;
  puVar12 = auStack_58;
  puVar5 = auStack_58;
  while (puVar12 != auStack_58 + -(uVar7 & 0xfffffffffffff000)) {
    puVar11 = puVar5 + -0x1000;
    *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
    puVar12 = puVar5 + -0x1000;
    puVar5 = puVar5 + -0x1000;
  }
  uVar7 = (ulong)((uint)uVar7 & 0xff0);
  lVar3 = -uVar7;
  if (uVar7 != 0) {
    *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
  }
  plVar8 = *(long **)(this + 0xa0);
  bVar4 = false;
  lVar16 = 0;
  puVar10 = (uint *)((ulong)(puVar11 + lVar3 + 0xf) & 0xfffffffffffffff0);
  plVar1 = plVar8 + lVar9;
  for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
    while (lVar9 = *(long *)(*plVar8 + 0x18), lVar9 != 0) {
      iVar15 = (int)lVar16;
      if (0 < iVar15) {
        puVar6 = puVar10;
        do {
          if (*puVar6 == *(uint *)(lVar9 + 0x70)) goto LAB_00100310;
          puVar6 = puVar6 + 1;
        } while (puVar10 + iVar15 != puVar6);
      }
      if (*(char *)(lVar9 + 0x78) != '\x02') break;
      lVar2 = *(long *)(lVar9 + 0x48);
      puVar10[lVar16] = *(uint *)(lVar9 + 0x70);
      if (lVar2 == 0) {
        bVar4 = true;
      }
      else {
        bVar4 = (bool)(bVar4 | *(int *)(lVar2 + 0x70) == -1);
      }
      plVar8 = plVar8 + 1;
      lVar16 = (long)(iVar15 + 1);
      if (plVar1 == plVar8) goto LAB_00100380;
    }
LAB_00100310:
  }
LAB_00100380:
  lVar9 = *(long *)(*(long *)(this + 0x50) + 0x48);
  iVar15 = (int)lVar16;
  local_54 = param_1;
  local_50 = param_2;
  if ((lVar9 == 0) || (*(int *)(lVar9 + 0x70) == -1)) {
    puVar10[iVar15] = *(uint *)(*(long *)(this + 0x50) + 0x70);
LAB_0010042d:
    *(undefined8 *)(puVar11 + lVar3 + -8) = 0x100438;
    JPH::BodyManager::ActivateBodies((BodyID *)param_3,(int)puVar10);
    lVar9 = *(long *)(*(long *)(this + 0x50) + 0x48);
    if (0 < iVar15) {
LAB_001003b3:
      puVar6 = puVar10 + lVar16;
      uVar14 = 0xffffffff;
      do {
        lVar16 = *(long *)(*(long *)(*(long *)(param_3 + 0x10) + (ulong)(*puVar10 & 0x7fffff) * 8) +
                          0x48);
        if (lVar16 == 0) {
          if (lVar9 != 0) goto LAB_001003cf;
LAB_00100410:
          uVar13 = 0xffffffff;
        }
        else {
          uVar13 = *(uint *)(lVar16 + 0x70);
          if (uVar13 < uVar14) {
            uVar14 = uVar13;
          }
          if (lVar9 == 0) goto LAB_00100410;
LAB_001003cf:
          uVar13 = *(uint *)(lVar9 + 0x70);
        }
        puVar10 = puVar10 + 1;
        *(undefined8 *)(puVar11 + lVar3 + -8) = 0x1003df;
        JPH::IslandBuilder::LinkBodies((uint)local_50,uVar13);
        lVar9 = *(long *)(*(long *)(this + 0x50) + 0x48);
      } while (puVar10 != puVar6);
    }
    if (lVar9 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_00100458;
    }
  }
  else {
    if (bVar4) goto LAB_0010042d;
    if (0 < iVar15) goto LAB_001003b3;
  }
  uVar14 = *(uint *)(lVar9 + 0x70);
LAB_00100458:
  *(undefined8 *)(puVar11 + lVar3 + -8) = 0x100467;
  JPH::IslandBuilder::LinkConstraint((uint)local_50,local_54,uVar14);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar11 + lVar3 + -8) = &UNK_001004ac;
    __stack_chk_fail();
  }
  return;
}



/* JPH::VehicleConstraint::BuildIslandSplits(JPH::LargeIslandSplitter&) const */

void __thiscall
JPH::VehicleConstraint::BuildIslandSplits(VehicleConstraint *this,LargeIslandSplitter *param_1)

{
  JPH::LargeIslandSplitter::AssignToNonParallelSplit((Body *)param_1);
  return;
}



/* JPH::VehicleConstraint::SaveState(JPH::StateRecorder&) const */

void __thiscall JPH::VehicleConstraint::SaveState(VehicleConstraint *this,StateRecorder *param_1)

{
  StateRecorder *pSVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  pSVar1 = param_1 + 8;
  JPH::Constraint::SaveState((StateRecorder *)this);
  (**(code **)(**(long **)(this + 0xc0) + 0x38))(*(long **)(this + 0xc0),param_1);
  plVar4 = *(long **)(this + 0xa0);
  plVar2 = plVar4 + *(long *)(this + 0x90);
  for (; plVar2 != plVar4; plVar4 = plVar4 + 1) {
    lVar3 = *plVar4;
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,lVar3 + 0x8c,4);
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,lVar3 + 0x90,4);
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,lVar3 + 0x10,4);
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,lVar3 + 0x30,0xc);
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,lVar3 + 0x50,0xc);
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,lVar3 + 0x70,0xc);
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,lVar3 + 0x20,4);
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,lVar3 + 0xd0,4);
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,lVar3 + 0x110,4);
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,lVar3 + 0x150,4);
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,lVar3 + 400,4);
  }
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0xe0,0xc);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x11c,4);
                    /* WARNING: Could not recover jumptable at 0x00100664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0xd4,4);
  return;
}



/* JPH::VehicleConstraint::RestoreState(JPH::StateRecorder&) */

void __thiscall JPH::VehicleConstraint::RestoreState(VehicleConstraint *this,StateRecorder *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  JPH::Constraint::RestoreState((StateRecorder *)this);
  (**(code **)(**(long **)(this + 0xc0) + 0x40))(*(long **)(this + 0xc0),param_1);
  plVar4 = *(long **)(this + 0xa0);
  plVar1 = plVar4 + *(long *)(this + 0x90);
  for (; plVar1 != plVar4; plVar4 = plVar4 + 1) {
    lVar2 = *plVar4;
    (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar2 + 0x8c,4);
    (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar2 + 0x90,4);
    (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar2 + 0x10,4);
    (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar2 + 0x30,0xc);
    (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar2 + 0x50,0xc);
    (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar2 + 0x70,0xc);
    (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar2 + 0x20,4);
    lVar3 = *(long *)param_1;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    (**(code **)(lVar3 + 0x10))(param_1,lVar2 + 0xd0,4);
    (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar2 + 0x110,4);
    (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar2 + 0x150,4);
    (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar2 + 400,4);
  }
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xe0,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x11c,4);
                    /* WARNING: Could not recover jumptable at 0x001007f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xd4,4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _FUN() */

void JPH::GetRTTIOfType(JPH::VehicleConstraintSettings*)::{lambda()#1}::_FUN(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(*Allocate)(0x90);
  uVar2 = _UNK_00107a58;
  uVar1 = __LC1;
  *(undefined4 *)(puVar3 + 1) = 0;
  puVar3[6] = uVar1;
  puVar3[7] = uVar2;
  uVar2 = _UNK_00107a68;
  uVar1 = __LC2;
  *(undefined1 *)((long)puVar3 + 0xc) = 1;
  puVar3[8] = uVar1;
  puVar3[9] = uVar2;
  puVar3[2] = 0;
  puVar3[3] = 0x3f80000000000000;
  puVar3[4] = 0;
  *puVar3 = &PTR_GetRTTI_00107938;
  *(undefined4 *)(puVar3 + 10) = 0x40490fdb;
  puVar3[0xd] = 0;
  *(undefined1 (*) [16])(puVar3 + 0xb) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0xe) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0x10) = (undefined1  [16])0x0;
  return;
}



/* JPH::VehicleConstraintSettings::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::VehicleConstraintSettings::RestoreBinaryState
          (VehicleConstraintSettings *this,StreamIn *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  StreamIn *pSVar9;
  undefined8 *puVar10;
  StreamIn *pSVar11;
  StreamIn *pSVar12;
  ulong uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::ConstraintSettings::RestoreBinaryState((StreamIn *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,4);
  local_4c = 0;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_4c,4);
  uVar13 = (ulong)local_4c;
  if (*(ulong *)(this + 0x78) < uVar13) {
    pSVar11 = (StreamIn *)
              (*Reallocate)(*(undefined8 *)(this + 0x80),*(ulong *)(this + 0x78) * 0xc,uVar13 * 0xc)
    ;
    *(ulong *)(this + 0x78) = uVar13;
    *(StreamIn **)(this + 0x80) = pSVar11;
  }
  else {
    pSVar11 = *(StreamIn **)(this + 0x80);
  }
  pSVar12 = pSVar11 + uVar13 * 0xc;
  pSVar9 = pSVar11 + *(long *)(this + 0x70) * 0xc;
  if (pSVar9 < pSVar12) {
    if (pSVar9 == (StreamIn *)0x0) goto LAB_00100969;
    do {
      uVar4 = _LC5;
      *(undefined4 *)(pSVar9 + 8) = 0x447a0000;
      *(undefined8 *)pSVar9 = uVar4;
LAB_00100969:
      pSVar9 = pSVar9 + 0xc;
    } while (pSVar9 < pSVar12);
  }
  *(ulong *)(this + 0x70) = uVar13;
  for (; pSVar11 != pSVar12; pSVar11 = pSVar11 + 0xc) {
    JPH::VehicleAntiRollBar::RestoreBinaryState(pSVar11);
  }
  local_48 = 0;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_48,4);
  uVar14 = (ulong)local_48;
  uVar13 = *(ulong *)(this + 0x58);
  if (uVar14 < uVar13) {
    lVar2 = *(long *)(this + 0x68);
    for (puVar6 = (undefined8 *)(lVar2 + uVar14 * 8); puVar6 < (undefined8 *)(lVar2 + uVar13 * 8);
        puVar6 = puVar6 + 1) {
      plVar3 = (long *)*puVar6;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar5 = plVar3 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)(*plVar3 + 0x18))();
        }
      }
    }
    if (*(ulong *)(this + 0x60) < uVar14) goto LAB_00100b23;
LAB_001009f3:
    puVar6 = *(undefined8 **)(this + 0x68);
  }
  else {
    if (uVar14 <= *(ulong *)(this + 0x60)) goto LAB_001009f3;
LAB_00100b23:
    puVar6 = (undefined8 *)(*Allocate)(uVar14 * 8);
    puVar10 = *(undefined8 **)(this + 0x68);
    if (puVar10 != (undefined8 *)0x0) {
      lVar2 = *(long *)(this + 0x58);
      if (puVar6 < puVar10) {
        for (puVar7 = puVar6; puVar7 < puVar6 + lVar2; puVar7 = puVar7 + 1) {
          uVar4 = *puVar10;
          puVar10 = puVar10 + 1;
          *puVar7 = uVar4;
        }
      }
      else {
        puVar10 = puVar10 + lVar2 + -1;
        puVar7 = puVar6 + lVar2 + -1;
        if (!CARRY8(lVar2 * 8 - 8,(ulong)puVar6)) {
          do {
            uVar4 = *puVar10;
            puVar8 = puVar7 + -1;
            puVar10 = puVar10 + -1;
            *puVar7 = uVar4;
            puVar7 = puVar8;
          } while (puVar6 <= puVar8);
        }
      }
      (*Free)();
    }
    *(undefined8 **)(this + 0x68) = puVar6;
    *(ulong *)(this + 0x60) = uVar14;
  }
  puVar7 = puVar6 + uVar14;
  puVar10 = puVar6 + *(long *)(this + 0x58);
  if (puVar10 < puVar7) {
    memset(puVar10,0,((long)puVar7 + (-1 - (long)puVar10) & 0xfffffffffffffff8U) + 8);
  }
  *(ulong *)(this + 0x58) = uVar14;
  for (; puVar7 != puVar6; puVar6 = puVar6 + 1) {
    (**(code **)(*(long *)*puVar6 + 0x28))((long *)*puVar6,param_1);
  }
  local_44 = 0;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_44,4);
  JPH::Factory::Find((uint)Factory::sInstance);
  plVar5 = (long *)JPH::RTTI::CreateObject();
  plVar3 = *(long **)(this + 0x88);
  if (plVar5 == plVar3) goto LAB_00100ab3;
  if (plVar3 == (long *)0x0) {
LAB_00100a99:
    *(long **)(this + 0x88) = plVar5;
  }
  else {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_00100a99;
    (**(code **)(*plVar3 + 0x18))();
    *(long **)(this + 0x88) = plVar5;
  }
  if (plVar5 != (long *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    plVar5 = *(long **)(this + 0x88);
  }
LAB_00100ab3:
  (**(code **)(*plVar5 + 0x28))(plVar5,param_1);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::AxisConstraintPart::SolveVelocityConstraint(JPH::Body&, JPH::Body&, JPH::Vec3, float, float)
   [clone .isra.0] */

undefined8
JPH::AxisConstraintPart::SolveVelocityConstraint
          (undefined8 param_1_00,undefined8 param_2_00,float param_3,float param_4,float *param_1,
          float *param_2,char param_7,float *param_8,char param_9)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float local_18;
  float fStack_14;
  
  fVar23 = (float)((ulong)param_2_00 >> 0x20);
  fVar19 = (float)param_2_00;
  local_18 = (float)param_1_00;
  fStack_14 = (float)((ulong)param_1_00 >> 0x20);
  if (param_7 == '\x01') {
    fVar14 = *param_8;
    fVar16 = param_8[1];
    fVar17 = param_8[2];
    fVar18 = param_8[3];
    fVar26 = param_8[0x16];
    fVar27 = param_1[0xf];
    fVar13 = ((((float)*(undefined8 *)(param_2 + 6) * param_1[2] +
                (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) * param_1[1] +
                (float)*(undefined8 *)(param_2 + 4) * *param_1 + 0.0 +
               (param_2[2] - fVar17) * fVar19 +
               (param_2[1] - fVar16) * fStack_14 + (*param_2 - fVar14) * local_18 + 0.0) -
              ((float)((ulong)*(undefined8 *)(param_8 + 4) >> 0x20) * param_1[4] +
               (float)*(undefined8 *)(param_8 + 4) * param_1[3] + 0.0 +
              (float)*(undefined8 *)(param_8 + 6) * param_1[5])) -
             (param_1[0xe] * fVar27 + param_1[0xd])) * param_1[0xc] + fVar27;
    if (param_3 <= fVar13) {
      param_3 = fVar13;
    }
    if (param_3 <= param_4) {
      param_4 = param_3;
    }
    param_1[0xf] = param_4;
    param_4 = param_4 - fVar27;
    if (param_4 == 0.0) {
      return 0;
    }
    fVar26 = fVar26 * param_4;
    bVar1 = *(byte *)((long)param_8 + 0x7a);
    fVar14 = fVar26 * local_18 + fVar14;
    fVar16 = fVar26 * fStack_14 + fVar16;
    fVar17 = fVar26 * fVar19 + fVar17;
    fVar18 = fVar26 * fVar23 + fVar18;
  }
  else {
    if (param_7 == '\x02') {
      if (param_9 == '\x01') {
        fVar14 = *param_2;
        fVar16 = param_2[1];
        fVar17 = param_2[2];
        fVar18 = param_2[3];
        fVar26 = param_2[0x16];
        fVar27 = param_1[0xf];
        fVar13 = ((((float)*(undefined8 *)(param_2 + 6) * param_1[2] +
                    (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) * param_1[1] +
                    (float)*(undefined8 *)(param_2 + 4) * *param_1 + 0.0 +
                   (fVar17 - param_8[2]) * fVar19 +
                   (fVar16 - param_8[1]) * fStack_14 + (fVar14 - *param_8) * local_18 + 0.0) -
                  ((float)((ulong)*(undefined8 *)(param_8 + 4) >> 0x20) * param_1[4] +
                   (float)*(undefined8 *)(param_8 + 4) * param_1[3] + 0.0 +
                  (float)*(undefined8 *)(param_8 + 6) * param_1[5])) -
                 (param_1[0xe] * fVar27 + param_1[0xd])) * param_1[0xc] + fVar27;
        if (param_3 <= fVar13) {
          param_3 = fVar13;
        }
        if (param_3 <= param_4) {
          param_4 = param_3;
        }
        param_1[0xf] = param_4;
        param_4 = param_4 - fVar27;
        if (param_4 == 0.0) {
          return 0;
        }
        fVar26 = fVar26 * param_4;
        bVar1 = *(byte *)((long)param_2 + 0x7a);
        auVar21._1_3_ = 0;
        auVar21[0] = bVar1;
        auVar21[4] = bVar1;
        auVar21._5_3_ = 0;
        auVar21[8] = bVar1;
        auVar21._9_3_ = 0;
        auVar21[0xc] = bVar1;
        auVar21._13_3_ = 0;
        auVar8._4_4_ = _UNK_00107a74;
        auVar8._0_4_ = __LC8;
        auVar8._8_4_ = _UNK_00107a78;
        auVar8._12_4_ = _UNK_00107a7c;
        auVar21 = auVar21 & auVar8;
        bVar2 = auVar21._4_4_ == _UNK_00107a74;
        bVar3 = auVar21._8_4_ == _UNK_00107a78;
        bVar4 = auVar21._12_4_ == _UNK_00107a7c;
        *param_2 = (float)((uint)(fVar14 - fVar26 * local_18) & -(uint)(auVar21._0_4_ == __LC8));
        param_2[1] = (float)((uint)(fVar16 - fVar26 * fStack_14) & -(uint)bVar2);
        param_2[2] = (float)((uint)(fVar17 - fVar26 * fVar19) & -(uint)bVar3);
        param_2[3] = (float)((uint)(fVar18 - fVar26 * fVar23) & -(uint)bVar4);
      }
      else {
        if (param_9 == '\x02') {
          fVar16 = *param_2;
          fVar17 = param_2[1];
          fVar18 = param_2[2];
          fVar13 = param_2[3];
          fVar26 = param_8[0x16];
          fVar27 = param_2[0x16];
          fVar14 = param_1[0xf];
          fVar15 = ((((float)*(undefined8 *)(param_2 + 6) * param_1[2] +
                      (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) * param_1[1] +
                      (float)*(undefined8 *)(param_2 + 4) * *param_1 + 0.0 +
                     (fVar18 - param_8[2]) * fVar19 +
                     (fVar17 - param_8[1]) * fStack_14 + (fVar16 - *param_8) * local_18 + 0.0) -
                    ((float)((ulong)*(undefined8 *)(param_8 + 4) >> 0x20) * param_1[4] +
                     (float)*(undefined8 *)(param_8 + 4) * param_1[3] + 0.0 +
                    (float)*(undefined8 *)(param_8 + 6) * param_1[5])) -
                   (param_1[0xe] * fVar14 + param_1[0xd])) * param_1[0xc] + fVar14;
          if (param_3 <= fVar15) {
            param_3 = fVar15;
          }
          if (param_3 <= param_4) {
            param_4 = param_3;
          }
          param_1[0xf] = param_4;
          iVar12 = _UNK_00107a7c;
          iVar11 = _UNK_00107a78;
          iVar10 = _UNK_00107a74;
          iVar9 = __LC8;
          param_4 = param_4 - fVar14;
          if (param_4 != 0.0) {
            bVar1 = *(byte *)((long)param_2 + 0x7a);
            fVar27 = fVar27 * param_4;
            auVar7._4_4_ = _UNK_00107a74;
            auVar7._0_4_ = __LC8;
            auVar7._8_4_ = _UNK_00107a78;
            auVar7._12_4_ = _UNK_00107a7c;
            fVar26 = fVar26 * param_4;
            auVar25._1_3_ = 0;
            auVar25[0] = bVar1;
            auVar25[4] = bVar1;
            auVar25._5_3_ = 0;
            auVar25[8] = bVar1;
            auVar25._9_3_ = 0;
            auVar25[0xc] = bVar1;
            auVar25._13_3_ = 0;
            auVar25 = auVar25 & auVar7;
            bVar2 = auVar25._4_4_ == _UNK_00107a74;
            bVar3 = auVar25._8_4_ == _UNK_00107a78;
            bVar4 = auVar25._12_4_ == _UNK_00107a7c;
            *param_2 = (float)((uint)(fVar16 - fVar27 * local_18) & -(uint)(auVar25._0_4_ == __LC8))
            ;
            param_2[1] = (float)((uint)(fVar17 - fVar27 * fStack_14) & -(uint)bVar2);
            param_2[2] = (float)((uint)(fVar18 - fVar27 * fVar19) & -(uint)bVar3);
            param_2[3] = (float)((uint)(fVar13 - fVar27 * fVar23) & -(uint)bVar4);
            fVar27 = param_1[7];
            fVar14 = param_1[8];
            fVar16 = param_1[9];
            param_2[4] = param_2[4] - param_1[6] * param_4;
            param_2[5] = param_2[5] - fVar27 * param_4;
            param_2[6] = param_2[6] - fVar14 * param_4;
            param_2[7] = param_2[7] - fVar16 * param_4;
            bVar1 = *(byte *)((long)param_8 + 0x7a);
            auVar22._1_3_ = 0;
            auVar22[0] = bVar1;
            auVar22[4] = bVar1;
            auVar22._5_3_ = 0;
            auVar22[8] = bVar1;
            auVar22._9_3_ = 0;
            auVar22[0xc] = bVar1;
            auVar22._13_3_ = 0;
            auVar22 = auVar22 & auVar7;
            *param_8 = (float)((uint)(local_18 * fVar26 + *param_8) &
                              -(uint)(auVar22._0_4_ == iVar9));
            param_8[1] = (float)((uint)(fStack_14 * fVar26 + param_8[1]) &
                                -(uint)(auVar22._4_4_ == iVar10));
            param_8[2] = (float)((uint)(fVar19 * fVar26 + param_8[2]) &
                                -(uint)(auVar22._8_4_ == iVar11));
            param_8[3] = (float)((uint)(fVar23 * fVar26 + param_8[3]) &
                                -(uint)(auVar22._12_4_ == iVar12));
            fVar19 = param_1[10];
            fVar23 = param_1[0xb];
            fVar26 = param_1[0xc];
            param_8[4] = param_1[9] * param_4 + param_8[4];
            param_8[5] = fVar19 * param_4 + param_8[5];
            param_8[6] = fVar23 * param_4 + param_8[6];
            param_8[7] = fVar26 * param_4 + param_8[7];
            return 1;
          }
          return 0;
        }
        if (param_9 != '\0') {
          return 0;
        }
        fVar26 = param_2[0x16];
        fVar27 = param_1[0xf];
        fVar14 = (((float)*(undefined8 *)(param_2 + 6) * param_1[2] +
                   (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) * param_1[1] +
                   (float)*(undefined8 *)(param_2 + 4) * *param_1 + 0.0 +
                  fVar19 * (float)*(undefined8 *)(param_2 + 2) +
                  fStack_14 * (float)((ulong)*(undefined8 *)param_2 >> 0x20) +
                  local_18 * (float)*(undefined8 *)param_2 + 0.0) -
                 (param_1[0xe] * fVar27 + param_1[0xd])) * param_1[0xc] + fVar27;
        if (param_3 <= fVar14) {
          param_3 = fVar14;
        }
        if (param_3 <= param_4) {
          param_4 = param_3;
        }
        param_1[0xf] = param_4;
        param_4 = param_4 - fVar27;
        if (param_4 == 0.0) {
          return 0;
        }
        fVar26 = fVar26 * param_4;
        bVar1 = *(byte *)((long)param_2 + 0x7a);
        auVar20._1_3_ = 0;
        auVar20[0] = bVar1;
        auVar20[4] = bVar1;
        auVar20._5_3_ = 0;
        auVar20[8] = bVar1;
        auVar20._9_3_ = 0;
        auVar20[0xc] = bVar1;
        auVar20._13_3_ = 0;
        auVar6._4_4_ = _UNK_00107a74;
        auVar6._0_4_ = __LC8;
        auVar6._8_4_ = _UNK_00107a78;
        auVar6._12_4_ = _UNK_00107a7c;
        auVar20 = auVar20 & auVar6;
        bVar2 = auVar20._4_4_ == _UNK_00107a74;
        bVar3 = auVar20._8_4_ == _UNK_00107a78;
        bVar4 = auVar20._12_4_ == _UNK_00107a7c;
        *param_2 = (float)(-(uint)(auVar20._0_4_ == __LC8) & (uint)(*param_2 - fVar26 * local_18));
        param_2[1] = (float)(-(uint)bVar2 & (uint)(param_2[1] - fVar26 * fStack_14));
        param_2[2] = (float)(-(uint)bVar3 & (uint)(param_2[2] - fVar26 * fVar19));
        param_2[3] = (float)(-(uint)bVar4 & (uint)(param_2[3] - fVar26 * fVar23));
      }
      fVar19 = param_1[7];
      fVar23 = param_1[8];
      fVar26 = param_1[9];
      param_2[4] = param_2[4] - param_1[6] * param_4;
      param_2[5] = param_2[5] - fVar19 * param_4;
      param_2[6] = param_2[6] - fVar23 * param_4;
      param_2[7] = param_2[7] - fVar26 * param_4;
      return 1;
    }
    if (param_7 != '\0') {
      return 0;
    }
    fVar14 = *param_8;
    fVar16 = param_8[1];
    fVar17 = param_8[2];
    fVar18 = param_8[3];
    fVar26 = param_1[0xf];
    fVar27 = param_8[0x16];
    fVar13 = ((((0.0 - fVar17) * fVar19 +
               (0.0 - fVar16) * fStack_14 + (0.0 - fVar14) * local_18 + 0.0) -
              ((float)((ulong)*(undefined8 *)(param_8 + 4) >> 0x20) * param_1[4] +
               (float)*(undefined8 *)(param_8 + 4) * param_1[3] + 0.0 +
              (float)*(undefined8 *)(param_8 + 6) * param_1[5])) -
             (param_1[0xe] * fVar26 + param_1[0xd])) * param_1[0xc] + fVar26;
    if (param_3 <= fVar13) {
      param_3 = fVar13;
    }
    if (param_3 <= param_4) {
      param_4 = param_3;
    }
    param_1[0xf] = param_4;
    param_4 = param_4 - fVar26;
    if (param_4 == 0.0) {
      return 0;
    }
    fVar27 = fVar27 * param_4;
    bVar1 = *(byte *)((long)param_8 + 0x7a);
    fVar14 = fVar27 * local_18 + fVar14;
    fVar16 = fVar27 * fStack_14 + fVar16;
    fVar17 = fVar27 * fVar19 + fVar17;
    fVar18 = fVar27 * fVar23 + fVar18;
  }
  auVar24._1_3_ = 0;
  auVar24[0] = bVar1;
  auVar24[4] = bVar1;
  auVar24._5_3_ = 0;
  auVar24[8] = bVar1;
  auVar24._9_3_ = 0;
  auVar24[0xc] = bVar1;
  auVar24._13_3_ = 0;
  auVar5._4_4_ = _UNK_00107a74;
  auVar5._0_4_ = __LC8;
  auVar5._8_4_ = _UNK_00107a78;
  auVar5._12_4_ = _UNK_00107a7c;
  auVar24 = auVar24 & auVar5;
  bVar2 = auVar24._4_4_ == _UNK_00107a74;
  bVar3 = auVar24._8_4_ == _UNK_00107a78;
  bVar4 = auVar24._12_4_ == _UNK_00107a7c;
  *param_8 = (float)((uint)fVar14 & -(uint)(auVar24._0_4_ == __LC8));
  param_8[1] = (float)((uint)fVar16 & -(uint)bVar2);
  param_8[2] = (float)((uint)fVar17 & -(uint)bVar3);
  param_8[3] = (float)((uint)fVar18 & -(uint)bVar4);
  fVar19 = param_1[10];
  fVar23 = param_1[0xb];
  fVar26 = param_1[0xc];
  param_8[4] = param_1[9] * param_4 + param_8[4];
  param_8[5] = fVar19 * param_4 + param_8[5];
  param_8[6] = fVar23 * param_4 + param_8[6];
  param_8[7] = fVar26 * param_4 + param_8[7];
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MotionProperties::GetInverseInertiaForRotation(JPH::Mat44 const&) const [clone .isra.0] */

Mat44 * JPH::MotionProperties::GetInverseInertiaForRotation(Mat44 *param_1)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  long in_RSI;
  long in_FS_OFFSET;
  float in_XMM0_Da;
  float fVar5;
  float in_XMM0_Db;
  float in_XMM0_Dc;
  float fVar6;
  float in_XMM0_Dd;
  float in_XMM1_Da;
  float in_XMM1_Db;
  float in_XMM1_Dc;
  float fVar7;
  float in_XMM1_Dd;
  float in_XMM2_Da;
  uint uVar8;
  float in_XMM2_Db;
  uint uVar10;
  float in_XMM2_Dc;
  uint uVar11;
  float in_XMM2_Dd;
  undefined1 auVar9 [16];
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_98 [16];
  undefined1 local_58 [4];
  float afStack_54 [3];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_10;
  
  uVar3 = _UNK_00107a88;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar14 = (float)*(undefined8 *)(in_RSI + 0x38);
  fVar5 = (float)((ulong)*(undefined8 *)(in_RSI + 0x38) >> 0x20);
  fVar6 = (float)*(undefined8 *)(in_RSI + 0x30);
  fVar18 = fVar14 * (fVar14 + fVar14);
  fVar7 = (float)((ulong)*(undefined8 *)(in_RSI + 0x30) >> 0x20);
  fVar16 = fVar6 + fVar6;
  fVar17 = fVar7 + fVar7;
  fVar15 = (fVar14 + fVar14) * fVar5;
  local_58 = (_LC9 - fVar7 * fVar17) - fVar18;
  lVar4 = 0;
  register0x00001304 = fVar7 * fVar16 + fVar15;
  register0x00001308 = fVar14 * fVar16 - fVar17 * fVar5;
  register0x0000130c = 0;
  local_48._4_4_ = (_LC9 - fVar18) - fVar6 * fVar16;
  local_48._0_4_ = fVar7 * fVar16 - fVar15;
  local_48._8_4_ = fVar16 * fVar5 + fVar14 * fVar17;
  local_48._12_4_ = 0;
  local_38._4_4_ = fVar14 * fVar17 - fVar16 * fVar5;
  local_38._0_4_ = fVar14 * fVar16 + fVar17 * fVar5;
  local_38._8_4_ = (_LC9 - fVar6 * fVar16) - fVar7 * fVar17;
  local_38._12_4_ = 0;
  do {
    fVar6 = *(float *)(local_58 + lVar4);
    fVar7 = *(float *)(local_58 + lVar4 + 4);
    fVar14 = *(float *)(local_58 + lVar4 + 8);
    *(float *)((long)local_98 + lVar4) =
         fVar14 * in_XMM2_Da + fVar6 * in_XMM0_Da + fVar7 * in_XMM1_Da;
    *(float *)((long)local_98 + lVar4 + 4) =
         fVar14 * in_XMM2_Db + fVar6 * in_XMM0_Db + fVar7 * in_XMM1_Db;
    *(float *)((long)local_98 + lVar4 + 8) =
         fVar14 * in_XMM2_Dc + fVar6 * in_XMM0_Dc + fVar7 * in_XMM1_Dc;
    *(float *)((long)local_98 + lVar4 + 0xc) =
         fVar14 * in_XMM2_Dd + fVar6 * in_XMM0_Dd + fVar7 * in_XMM1_Dd;
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x30);
  fVar6 = *(float *)(in_RSI + 0x20);
  fVar7 = *(float *)(in_RSI + 0x24);
  fVar14 = *(float *)(in_RSI + 0x28);
  bVar1 = *(byte *)(in_RSI + 0x7a);
  fVar16 = fVar7 * local_98[4];
  fVar17 = fVar7 * local_98[5];
  fVar7 = fVar7 * local_98[6];
  fVar5 = fVar6 * local_98[0];
  fVar15 = fVar6 * local_98[1];
  fVar6 = fVar6 * local_98[2];
  fVar18 = fVar14 * local_98[8];
  fVar13 = fVar14 * local_98[9];
  fVar14 = fVar14 * local_98[10];
  *(undefined8 *)(param_1 + 0x30) = __LC10;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  auVar9._1_3_ = 0;
  auVar9[0] = bVar1;
  auVar9[4] = bVar1;
  auVar9._5_3_ = 0;
  auVar9[8] = bVar1;
  auVar9._9_3_ = 0;
  auVar9[0xc] = bVar1;
  auVar9._13_3_ = 0;
  auVar2._4_4_ = _UNK_00107a94;
  auVar2._0_4_ = __LC12;
  auVar2._8_4_ = _UNK_00107a98;
  auVar2._12_4_ = _UNK_00107a9c;
  auVar9 = auVar9 & auVar2;
  uVar8 = -(uint)(auVar9._0_4_ == __LC12);
  uVar10 = -(uint)(auVar9._4_4_ == _UNK_00107a94);
  uVar11 = -(uint)(auVar9._8_4_ == _UNK_00107a98);
  uVar12 = -(uint)(auVar9._12_4_ == _UNK_00107a9c);
  *(uint *)param_1 =
       (uint)(fVar16 * local_98[4] + fVar5 * local_98[0] + fVar18 * local_98[8]) & uVar8;
  *(uint *)(param_1 + 4) =
       (uint)(fVar16 * local_98[5] + fVar5 * local_98[1] + fVar18 * local_98[9]) & uVar8 & uVar10;
  *(uint *)(param_1 + 8) =
       (uint)(fVar16 * local_98[6] + fVar5 * local_98[2] + fVar18 * local_98[10]) & uVar8 & uVar11;
  *(uint *)(param_1 + 0xc) =
       (uint)(fVar16 * local_98[7] + fVar5 * local_98[3] + fVar18 * local_98[0xb]) & uVar8 & uVar12;
  *(uint *)(param_1 + 0x10) =
       (uint)(fVar17 * local_98[4] + fVar15 * local_98[0] + fVar13 * local_98[8]) & uVar10 & uVar8;
  *(uint *)(param_1 + 0x14) =
       (uint)(fVar17 * local_98[5] + fVar15 * local_98[1] + fVar13 * local_98[9]) & uVar10;
  *(uint *)(param_1 + 0x18) =
       (uint)(fVar17 * local_98[6] + fVar15 * local_98[2] + fVar13 * local_98[10]) & uVar10 & uVar11
  ;
  *(uint *)(param_1 + 0x1c) =
       (uint)(fVar17 * local_98[7] + fVar15 * local_98[3] + fVar13 * local_98[0xb]) &
       uVar10 & uVar12;
  *(uint *)(param_1 + 0x20) =
       (uint)(fVar7 * local_98[4] + fVar6 * local_98[0] + fVar14 * local_98[8]) & uVar11 & uVar8;
  *(uint *)(param_1 + 0x24) =
       (uint)(fVar7 * local_98[5] + fVar6 * local_98[1] + fVar14 * local_98[9]) & uVar11 & uVar10;
  *(uint *)(param_1 + 0x28) =
       (uint)(fVar7 * local_98[6] + fVar6 * local_98[2] + fVar14 * local_98[10]) & uVar11;
  *(uint *)(param_1 + 0x2c) =
       (uint)(fVar7 * local_98[7] + fVar6 * local_98[3] + fVar14 * local_98[0xb]) & uVar11 & uVar12;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::VehicleConstraint::GetConstraintSettings() const */

VehicleConstraint * __thiscall
JPH::VehicleConstraint::GetConstraintSettings(VehicleConstraint *this)

{
  *(undefined8 *)this = 0;
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::VehicleConstraint::SolveVelocityConstraint(float) */

uint __thiscall
JPH::VehicleConstraint::SolveVelocityConstraint(VehicleConstraint *this,float param_1)

{
  long *plVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar5 = 0;
  plVar7 = *(long **)(this + 0xa0);
  plVar1 = plVar7 + *(long *)(this + 0x90);
  if (plVar1 != plVar7) {
    fVar10 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar9 = 0.0;
    fVar11 = 0.0;
    do {
      while( true ) {
        lVar6 = *plVar7;
        lVar8 = *(long *)(lVar6 + 0x18);
        if (lVar8 != 0) break;
LAB_001015cc:
        plVar7 = plVar7 + 1;
        if (plVar1 == plVar7) goto LAB_00101687;
      }
      fVar14 = fVar10 - *(float *)(lVar6 + 0x50);
      fVar15 = fVar12 - *(float *)(lVar6 + 0x54);
      fVar16 = fVar13 - *(float *)(lVar6 + 0x58);
      fVar17 = fVar9 - *(float *)(lVar6 + 0x5c);
      if (fVar11 != *(float *)(lVar6 + 0xc4)) {
        uVar4 = AxisConstraintPart::SolveVelocityConstraint
                          (CONCAT44(fVar15,fVar14),CONCAT44(fVar17,fVar16),0,_LC13,lVar6 + 0x94,
                           *(undefined8 *)(*(long *)(this + 0x50) + 0x48),
                           *(undefined1 *)(*(long *)(this + 0x50) + 0x78),
                           *(undefined8 *)(lVar8 + 0x48),*(undefined1 *)(lVar8 + 0x78));
        uVar5 = uVar5 | uVar4;
      }
      if (fVar11 == *(float *)(lVar6 + 0x104)) goto LAB_001015cc;
      plVar7 = plVar7 + 1;
      uVar4 = AxisConstraintPart::SolveVelocityConstraint
                        (CONCAT44(fVar15,fVar14),CONCAT44(fVar17,fVar16),0,_LC13,lVar6 + 0xd4,
                         *(undefined8 *)(*(long *)(this + 0x50) + 0x48),
                         *(undefined1 *)(*(long *)(this + 0x50) + 0x78),
                         *(undefined8 *)(lVar8 + 0x48),*(undefined1 *)(lVar8 + 0x78));
      uVar5 = uVar5 | uVar4;
    } while (plVar1 != plVar7);
  }
LAB_00101687:
  uVar4 = (**(code **)(**(long **)(this + 0xc0) + 0x30))(param_1);
  cVar3 = DAT_00109128;
  lVar6 = _vtable;
  uVar4 = uVar4 | uVar5;
  if (*(float *)(this + 0x110) != 0.0) {
    fVar10 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    if (DAT_00109128 != '\0') {
      fVar10 = *(float *)(_vtable + 0x10);
      fVar12 = *(float *)(_vtable + 0x14);
      fVar13 = *(float *)(_vtable + 0x18);
    }
    cVar2 = *(char *)(*(long *)(this + 0x50) + 0x78);
    fVar9 = 0.0;
    fVar11 = 0.0;
    fVar14 = 0.0;
    lVar8 = *(long *)(*(long *)(this + 0x50) + 0x48);
    if (cVar2 != '\0') {
      fVar9 = *(float *)(lVar8 + 0x10);
      fVar11 = *(float *)(lVar8 + 0x14);
      fVar14 = *(float *)(lVar8 + 0x18);
    }
    fVar15 = *(float *)(this + 0x11c);
    fVar10 = (((fVar14 - fVar13) * (float)*(undefined8 *)(this + 0xe8) +
              (fVar11 - fVar12) * (float)((ulong)*(undefined8 *)(this + 0xe0) >> 0x20) +
              (fVar9 - fVar10) * (float)*(undefined8 *)(this + 0xe0) + 0.0) -
             (*(float *)(this + 0x118) * fVar15 + *(float *)(this + 0x114))) *
             *(float *)(this + 0x110) + fVar15;
    if (fVar10 < 0.0) {
      fVar10 = 0.0;
    }
    else if (_LC13 < fVar10) {
      fVar10 = _LC13;
    }
    *(float *)(this + 0x11c) = fVar10;
    fVar10 = fVar10 - fVar15;
    if (fVar10 != 0.0) {
      if (cVar2 == '\x02') {
        fVar12 = *(float *)(this + 0xf4);
        fVar13 = *(float *)(this + 0xf8);
        fVar9 = *(float *)(this + 0xfc);
        *(float *)(lVar8 + 0x10) = *(float *)(lVar8 + 0x10) - fVar10 * *(float *)(this + 0xf0);
        *(float *)(lVar8 + 0x14) = *(float *)(lVar8 + 0x14) - fVar10 * fVar12;
        *(float *)(lVar8 + 0x18) = *(float *)(lVar8 + 0x18) - fVar10 * fVar13;
        *(float *)(lVar8 + 0x1c) = *(float *)(lVar8 + 0x1c) - fVar10 * fVar9;
      }
      if (cVar3 == '\x02') {
        fVar12 = *(float *)(this + 0x104);
        fVar13 = *(float *)(this + 0x108);
        fVar9 = *(float *)(this + 0x10c);
        *(float *)(lVar6 + 0x10) = fVar10 * *(float *)(this + 0x100) + *(float *)(lVar6 + 0x10);
        *(float *)(lVar6 + 0x14) = fVar10 * fVar12 + *(float *)(lVar6 + 0x14);
        *(float *)(lVar6 + 0x18) = fVar10 * fVar13 + *(float *)(lVar6 + 0x18);
        *(float *)(lVar6 + 0x1c) = fVar10 * fVar9 + *(float *)(lVar6 + 0x1c);
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}



/* JPH::VehicleConstraint::~VehicleConstraint() */

void __thiscall JPH::VehicleConstraint::~VehicleConstraint(VehicleConstraint *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  *(undefined ***)this = &PTR__VehicleConstraint_00107978;
  *(undefined ***)(this + 0x28) = &PTR__VehicleConstraint_00107a28;
  if (*(long **)(this + 0xc0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xc0) + 8))();
  }
  plVar5 = *(long **)(this + 0xa0);
  plVar4 = plVar5 + *(long *)(this + 0x90);
  do {
    while( true ) {
      if (plVar4 == plVar5) {
        if (*(code **)(this + 0x198) != (code *)0x0) {
          (**(code **)(this + 0x198))(this + 0x188,this + 0x188,3);
        }
        if (*(code **)(this + 0x178) != (code *)0x0) {
          (**(code **)(this + 0x178))(this + 0x168,this + 0x168,3);
        }
        if (*(code **)(this + 0x158) != (code *)0x0) {
          (**(code **)(this + 0x158))(this + 0x148,this + 0x148,3);
        }
        if (*(code **)(this + 0x138) != (code *)0x0) {
          (**(code **)(this + 0x138))(this + 0x128,this + 0x128,3);
        }
        plVar4 = *(long **)(this + 0x120);
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar5 = plVar4 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)(*plVar4 + 8))();
          }
        }
        if (*(long *)(this + 0xb8) != 0) {
          *(undefined8 *)(this + 0xa8) = 0;
          (*Free)();
        }
        if (*(long *)(this + 0xa0) != 0) {
          *(undefined8 *)(this + 0x90) = 0;
                    /* WARNING: Could not recover jumptable at 0x0010199e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*Free)();
          return;
        }
        return;
      }
      plVar3 = (long *)*plVar5;
      if (plVar3 != (long *)0x0) break;
LAB_00101899:
      plVar5 = plVar5 + 1;
    }
    if (*(code **)(*plVar3 + 8) == Wheel::~Wheel) {
      plVar2 = (long *)plVar3[1];
      *plVar3 = (long)&PTR__Wheel_00107918;
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 0x18))();
        }
      }
      (*Free)(plVar3);
      goto LAB_00101899;
    }
    plVar5 = plVar5 + 1;
    (**(code **)(*plVar3 + 8))(plVar3);
  } while( true );
}



/* non-virtual thunk to JPH::VehicleConstraint::~VehicleConstraint() */

void __thiscall JPH::VehicleConstraint::~VehicleConstraint(VehicleConstraint *this)

{
  ~VehicleConstraint(this + -0x28);
  return;
}



/* JPH::VehicleConstraint::~VehicleConstraint() */

void __thiscall JPH::VehicleConstraint::~VehicleConstraint(VehicleConstraint *this)

{
  ~VehicleConstraint(this);
                    /* WARNING: Could not recover jumptable at 0x00101a01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* non-virtual thunk to JPH::VehicleConstraint::~VehicleConstraint() */

void __thiscall JPH::VehicleConstraint::~VehicleConstraint(VehicleConstraint *this)

{
  ~VehicleConstraint(this + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00101a25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this + -0x28);
  return;
}



/* JPH::VehicleConstraintSettings::GetRTTI() const */

undefined1 * JPH::VehicleConstraintSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::VehicleConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::VehicleConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::VehicleConstraintSettings*)::rtti,
                      "VehicleConstraintSettings",0x90,
                      GetRTTIOfType(JPH::VehicleConstraintSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::VehicleConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::VehicleConstraintSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::VehicleConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::VehicleConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::VehicleConstraintSettings*)::rtti;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::VehicleConstraint::WarmStartVelocityConstraint(float) */

void __thiscall
JPH::VehicleConstraint::WarmStartVelocityConstraint(VehicleConstraint *this,float param_1)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  long *plVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar52 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  
  iVar32 = _UNK_00107a7c;
  iVar30 = _UNK_00107a78;
  iVar28 = _UNK_00107a74;
  iVar26 = __LC8;
  plVar34 = *(long **)(this + 0xa0);
  lVar4 = *(long *)(this + 0x50);
  plVar1 = plVar34 + *(long *)(this + 0x90);
  if (plVar1 != plVar34) {
    auVar14._4_4_ = _UNK_00107a74;
    auVar14._0_4_ = __LC8;
    auVar14._8_4_ = _UNK_00107a78;
    auVar14._12_4_ = _UNK_00107a7c;
    do {
      while( true ) {
        lVar5 = *plVar34;
        lVar6 = *(long *)(lVar5 + 0x18);
        if (lVar6 != 0) break;
LAB_00101bc0:
        plVar34 = plVar34 + 1;
        if (plVar34 == plVar1) goto LAB_00101cf0;
      }
      pfVar7 = *(float **)(lVar6 + 0x48);
      fVar50 = 0.0 - *(float *)(lVar5 + 0x50);
      fVar53 = 0.0 - *(float *)(lVar5 + 0x54);
      fVar54 = 0.0 - *(float *)(lVar5 + 0x58);
      fVar55 = 0.0 - *(float *)(lVar5 + 0x5c);
      fVar35 = *(float *)(lVar5 + 0xd0) * param_1;
      pfVar8 = *(float **)(lVar4 + 0x48);
      if (*(char *)(lVar4 + 0x78) == '\x02') {
        fVar37 = pfVar8[0x16];
        if (*(char *)(lVar6 + 0x78) == '\x02') {
          fVar51 = pfVar7[0x16];
          *(float *)(lVar5 + 0xd0) = fVar35;
          if (fVar35 != 0.0) {
            bVar2 = *(byte *)((long)pfVar8 + 0x7a);
            fVar59 = fVar35 * fVar37;
            auVar40._1_3_ = 0;
            auVar40[0] = bVar2;
            bVar3 = *(byte *)((long)pfVar7 + 0x7a);
            auVar40[4] = bVar2;
            auVar40._5_3_ = 0;
            auVar40[8] = bVar2;
            auVar40._9_3_ = 0;
            auVar40[0xc] = bVar2;
            auVar40._13_3_ = 0;
            auVar40 = auVar40 & auVar14;
            *pfVar8 = (float)(-(uint)(auVar40._0_4_ == iVar26) & (uint)(*pfVar8 - fVar59 * fVar50));
            pfVar8[1] = (float)(-(uint)(auVar40._4_4_ == iVar28) &
                               (uint)(pfVar8[1] - fVar59 * fVar53));
            pfVar8[2] = (float)(-(uint)(auVar40._8_4_ == iVar30) &
                               (uint)(pfVar8[2] - fVar59 * fVar54));
            pfVar8[3] = (float)(-(uint)(auVar40._12_4_ == iVar32) &
                               (uint)(pfVar8[3] - fVar59 * fVar55));
            fVar36 = fVar35 * fVar51;
            fVar59 = *(float *)(lVar5 + 0xb0);
            fVar12 = *(float *)(lVar5 + 0xb4);
            fVar13 = *(float *)(lVar5 + 0xb8);
            pfVar8[4] = pfVar8[4] - *(float *)(lVar5 + 0xac) * fVar35;
            pfVar8[5] = pfVar8[5] - fVar59 * fVar35;
            pfVar8[6] = pfVar8[6] - fVar12 * fVar35;
            pfVar8[7] = pfVar8[7] - fVar13 * fVar35;
            auVar41._1_3_ = 0;
            auVar41[0] = bVar3;
            auVar41[4] = bVar3;
            auVar41._5_3_ = 0;
            auVar41[8] = bVar3;
            auVar41._9_3_ = 0;
            auVar41[0xc] = bVar3;
            auVar41._13_3_ = 0;
            auVar41 = auVar41 & auVar14;
            *pfVar7 = (float)((uint)(fVar36 * fVar50 + *pfVar7) & -(uint)(auVar41._0_4_ == iVar26));
            pfVar7[1] = (float)((uint)(fVar36 * fVar53 + pfVar7[1]) &
                               -(uint)(auVar41._4_4_ == iVar28));
            pfVar7[2] = (float)((uint)(fVar36 * fVar54 + pfVar7[2]) &
                               -(uint)(auVar41._8_4_ == iVar30));
            pfVar7[3] = (float)((uint)(fVar36 * fVar55 + pfVar7[3]) &
                               -(uint)(auVar41._12_4_ == iVar32));
            fVar59 = *(float *)(lVar5 + 0xbc);
            fVar12 = *(float *)(lVar5 + 0xc0);
            fVar13 = *(float *)(lVar5 + 0xc4);
            pfVar7[4] = *(float *)(lVar5 + 0xb8) * fVar35 + pfVar7[4];
            pfVar7[5] = fVar59 * fVar35 + pfVar7[5];
            pfVar7[6] = fVar12 * fVar35 + pfVar7[6];
            pfVar7[7] = fVar13 * fVar35 + pfVar7[7];
          }
          fVar35 = *(float *)(lVar5 + 0x110) * param_1;
          *(float *)(lVar5 + 0x110) = fVar35;
          iVar33 = _UNK_00107a7c;
          iVar31 = _UNK_00107a78;
          iVar29 = _UNK_00107a74;
          iVar27 = __LC8;
          if (fVar35 == 0.0) {
            fVar35 = *(float *)(lVar5 + 0x60);
            fVar50 = *(float *)(lVar5 + 100);
            fVar53 = *(float *)(lVar5 + 0x68);
            fVar54 = *(float *)(lVar5 + 0x6c);
          }
          else {
            bVar2 = *(byte *)((long)pfVar8 + 0x7a);
            auVar25._4_4_ = _UNK_00107a74;
            auVar25._0_4_ = __LC8;
            auVar25._8_4_ = _UNK_00107a78;
            auVar25._12_4_ = _UNK_00107a7c;
            fVar59 = fVar35 * fVar37;
            auVar46._1_3_ = 0;
            auVar46[0] = bVar2;
            bVar3 = *(byte *)((long)pfVar7 + 0x7a);
            auVar46[4] = bVar2;
            auVar46._5_3_ = 0;
            auVar46[8] = bVar2;
            auVar46._9_3_ = 0;
            auVar46[0xc] = bVar2;
            auVar46._13_3_ = 0;
            auVar46 = auVar46 & auVar25;
            bVar9 = auVar46._4_4_ == _UNK_00107a74;
            bVar10 = auVar46._8_4_ == _UNK_00107a78;
            bVar11 = auVar46._12_4_ == _UNK_00107a7c;
            *pfVar8 = (float)((uint)(*pfVar8 - fVar59 * fVar50) & -(uint)(auVar46._0_4_ == __LC8));
            pfVar8[1] = (float)((uint)(pfVar8[1] - fVar59 * fVar53) & -(uint)bVar9);
            pfVar8[2] = (float)((uint)(pfVar8[2] - fVar59 * fVar54) & -(uint)bVar10);
            pfVar8[3] = (float)((uint)(pfVar8[3] - fVar59 * fVar55) & -(uint)bVar11);
            fVar59 = *(float *)(lVar5 + 0xf0);
            fVar12 = *(float *)(lVar5 + 0xf4);
            fVar13 = *(float *)(lVar5 + 0xf8);
            fVar36 = fVar35 * fVar51;
            pfVar8[4] = pfVar8[4] - *(float *)(lVar5 + 0xec) * fVar35;
            pfVar8[5] = pfVar8[5] - fVar59 * fVar35;
            pfVar8[6] = pfVar8[6] - fVar12 * fVar35;
            pfVar8[7] = pfVar8[7] - fVar13 * fVar35;
            auVar47._1_3_ = 0;
            auVar47[0] = bVar3;
            auVar47[4] = bVar3;
            auVar47._5_3_ = 0;
            auVar47[8] = bVar3;
            auVar47._9_3_ = 0;
            auVar47[0xc] = bVar3;
            auVar47._13_3_ = 0;
            auVar47 = auVar47 & auVar25;
            *pfVar7 = (float)((uint)(fVar36 * fVar50 + *pfVar7) & -(uint)(auVar47._0_4_ == iVar27));
            pfVar7[1] = (float)((uint)(fVar36 * fVar53 + pfVar7[1]) &
                               -(uint)(auVar47._4_4_ == iVar29));
            pfVar7[2] = (float)((uint)(fVar36 * fVar54 + pfVar7[2]) &
                               -(uint)(auVar47._8_4_ == iVar31));
            pfVar7[3] = (float)((uint)(fVar36 * fVar55 + pfVar7[3]) &
                               -(uint)(auVar47._12_4_ == iVar33));
            fVar50 = *(float *)(lVar5 + 0xfc);
            fVar53 = *(float *)(lVar5 + 0x100);
            fVar54 = *(float *)(lVar5 + 0x104);
            pfVar7[4] = *(float *)(lVar5 + 0xf8) * fVar35 + pfVar7[4];
            pfVar7[5] = fVar50 * fVar35 + pfVar7[5];
            pfVar7[6] = fVar53 * fVar35 + pfVar7[6];
            pfVar7[7] = fVar54 * fVar35 + pfVar7[7];
            fVar35 = *(float *)(lVar5 + 0x60);
            fVar50 = *(float *)(lVar5 + 100);
            fVar53 = *(float *)(lVar5 + 0x68);
            fVar54 = *(float *)(lVar5 + 0x6c);
          }
          fVar55 = *(float *)(lVar5 + 0x150) * 0.0;
          *(float *)(lVar5 + 0x150) = fVar55;
          iVar33 = _UNK_00107a7c;
          iVar31 = _UNK_00107a78;
          iVar29 = _UNK_00107a74;
          iVar27 = __LC8;
          if (fVar55 == 0.0) {
            fVar35 = *(float *)(lVar5 + 0x70);
            fVar50 = *(float *)(lVar5 + 0x74);
            fVar53 = *(float *)(lVar5 + 0x78);
            fVar54 = *(float *)(lVar5 + 0x7c);
          }
          else {
            bVar2 = *(byte *)((long)pfVar8 + 0x7a);
            auVar24._4_4_ = _UNK_00107a74;
            auVar24._0_4_ = __LC8;
            auVar24._8_4_ = _UNK_00107a78;
            auVar24._12_4_ = _UNK_00107a7c;
            fVar59 = fVar55 * fVar37;
            auVar48._1_3_ = 0;
            auVar48[0] = bVar2;
            bVar3 = *(byte *)((long)pfVar7 + 0x7a);
            auVar48[4] = bVar2;
            auVar48._5_3_ = 0;
            auVar48[8] = bVar2;
            auVar48._9_3_ = 0;
            auVar48[0xc] = bVar2;
            auVar48._13_3_ = 0;
            auVar48 = auVar48 & auVar24;
            bVar9 = auVar48._4_4_ == _UNK_00107a74;
            bVar10 = auVar48._8_4_ == _UNK_00107a78;
            bVar11 = auVar48._12_4_ == _UNK_00107a7c;
            *pfVar8 = (float)((uint)(*pfVar8 - fVar59 * (0.0 - fVar35)) &
                             -(uint)(auVar48._0_4_ == __LC8));
            pfVar8[1] = (float)((uint)(pfVar8[1] - fVar59 * (0.0 - fVar50)) & -(uint)bVar9);
            pfVar8[2] = (float)((uint)(pfVar8[2] - fVar59 * (0.0 - fVar53)) & -(uint)bVar10);
            pfVar8[3] = (float)((uint)(pfVar8[3] - fVar59 * (0.0 - fVar54)) & -(uint)bVar11);
            fVar59 = *(float *)(lVar5 + 0x130);
            fVar12 = *(float *)(lVar5 + 0x134);
            fVar13 = *(float *)(lVar5 + 0x138);
            fVar36 = fVar55 * fVar51;
            pfVar8[4] = pfVar8[4] - *(float *)(lVar5 + 300) * fVar55;
            pfVar8[5] = pfVar8[5] - fVar59 * fVar55;
            pfVar8[6] = pfVar8[6] - fVar12 * fVar55;
            pfVar8[7] = pfVar8[7] - fVar13 * fVar55;
            auVar49._1_3_ = 0;
            auVar49[0] = bVar3;
            auVar49[4] = bVar3;
            auVar49._5_3_ = 0;
            auVar49[8] = bVar3;
            auVar49._9_3_ = 0;
            auVar49[0xc] = bVar3;
            auVar49._13_3_ = 0;
            auVar49 = auVar49 & auVar24;
            *pfVar7 = (float)((uint)(fVar36 * (0.0 - fVar35) + *pfVar7) &
                             -(uint)(auVar49._0_4_ == iVar27));
            pfVar7[1] = (float)((uint)(fVar36 * (0.0 - fVar50) + pfVar7[1]) &
                               -(uint)(auVar49._4_4_ == iVar29));
            pfVar7[2] = (float)((uint)(fVar36 * (0.0 - fVar53) + pfVar7[2]) &
                               -(uint)(auVar49._8_4_ == iVar31));
            pfVar7[3] = (float)((uint)(fVar36 * (0.0 - fVar54) + pfVar7[3]) &
                               -(uint)(auVar49._12_4_ == iVar33));
            fVar35 = *(float *)(lVar5 + 0x13c);
            fVar50 = *(float *)(lVar5 + 0x140);
            fVar53 = *(float *)(lVar5 + 0x144);
            pfVar7[4] = *(float *)(lVar5 + 0x138) * fVar55 + pfVar7[4];
            pfVar7[5] = fVar35 * fVar55 + pfVar7[5];
            pfVar7[6] = fVar50 * fVar55 + pfVar7[6];
            pfVar7[7] = fVar53 * fVar55 + pfVar7[7];
            fVar35 = *(float *)(lVar5 + 0x70);
            fVar50 = *(float *)(lVar5 + 0x74);
            fVar53 = *(float *)(lVar5 + 0x78);
            fVar54 = *(float *)(lVar5 + 0x7c);
          }
          fVar55 = *(float *)(lVar5 + 400) * param_1;
          *(float *)(lVar5 + 400) = fVar55;
          iVar33 = _UNK_00107a7c;
          iVar31 = _UNK_00107a78;
          iVar29 = _UNK_00107a74;
          iVar27 = __LC8;
          if (fVar55 != 0.0) {
            fVar37 = fVar37 * fVar55;
            bVar2 = *(byte *)((long)pfVar8 + 0x7a);
            auVar23._4_4_ = _UNK_00107a74;
            auVar23._0_4_ = __LC8;
            auVar23._8_4_ = _UNK_00107a78;
            auVar23._12_4_ = _UNK_00107a7c;
            auVar52._1_3_ = 0;
            auVar52[0] = bVar2;
            bVar3 = *(byte *)((long)pfVar7 + 0x7a);
            auVar52[4] = bVar2;
            auVar52._5_3_ = 0;
            auVar52[8] = bVar2;
            auVar52._9_3_ = 0;
            auVar52[0xc] = bVar2;
            auVar52._13_3_ = 0;
            auVar52 = auVar52 & auVar23;
            bVar9 = auVar52._4_4_ == _UNK_00107a74;
            bVar10 = auVar52._8_4_ == _UNK_00107a78;
            bVar11 = auVar52._12_4_ == _UNK_00107a7c;
            *pfVar8 = (float)(-(uint)(auVar52._0_4_ == __LC8) &
                             (uint)(*pfVar8 - fVar37 * (0.0 - fVar35)));
            pfVar8[1] = (float)(-(uint)bVar9 & (uint)(pfVar8[1] - fVar37 * (0.0 - fVar50)));
            pfVar8[2] = (float)(-(uint)bVar10 & (uint)(pfVar8[2] - fVar37 * (0.0 - fVar53)));
            pfVar8[3] = (float)(-(uint)bVar11 & (uint)(pfVar8[3] - fVar37 * (0.0 - fVar54)));
            fVar37 = *(float *)(lVar5 + 0x170);
            fVar59 = *(float *)(lVar5 + 0x174);
            fVar12 = *(float *)(lVar5 + 0x178);
            fVar51 = fVar55 * fVar51;
            auVar39._1_3_ = 0;
            auVar39[0] = bVar3;
            auVar39[4] = bVar3;
            auVar39._5_3_ = 0;
            auVar39[8] = bVar3;
            auVar39._9_3_ = 0;
            auVar39[0xc] = bVar3;
            auVar39._13_3_ = 0;
            auVar39 = auVar39 & auVar23;
            pfVar8[4] = pfVar8[4] - *(float *)(lVar5 + 0x16c) * fVar55;
            pfVar8[5] = pfVar8[5] - fVar37 * fVar55;
            pfVar8[6] = pfVar8[6] - fVar59 * fVar55;
            pfVar8[7] = pfVar8[7] - fVar12 * fVar55;
            *pfVar7 = (float)((uint)(fVar51 * (0.0 - fVar35) + *pfVar7) &
                             -(uint)(auVar39._0_4_ == iVar27));
            pfVar7[1] = (float)((uint)(fVar51 * (0.0 - fVar50) + pfVar7[1]) &
                               -(uint)(auVar39._4_4_ == iVar29));
            pfVar7[2] = (float)((uint)(fVar51 * (0.0 - fVar53) + pfVar7[2]) &
                               -(uint)(auVar39._8_4_ == iVar31));
            pfVar7[3] = (float)((uint)(fVar51 * (0.0 - fVar54) + pfVar7[3]) &
                               -(uint)(auVar39._12_4_ == iVar33));
            fVar35 = *(float *)(lVar5 + 0x17c);
            fVar50 = *(float *)(lVar5 + 0x180);
            fVar53 = *(float *)(lVar5 + 0x184);
            pfVar7[4] = *(float *)(lVar5 + 0x178) * fVar55 + pfVar7[4];
            pfVar7[5] = fVar35 * fVar55 + pfVar7[5];
            pfVar7[6] = fVar50 * fVar55 + pfVar7[6];
            pfVar7[7] = fVar53 * fVar55 + pfVar7[7];
          }
        }
        else {
          *(float *)(lVar5 + 0xd0) = fVar35;
          if (fVar35 != 0.0) {
            bVar2 = *(byte *)((long)pfVar8 + 0x7a);
            fVar51 = fVar35 * fVar37;
            auVar45._1_3_ = 0;
            auVar45[0] = bVar2;
            auVar45[4] = bVar2;
            auVar45._5_3_ = 0;
            auVar45[8] = bVar2;
            auVar45._9_3_ = 0;
            auVar45[0xc] = bVar2;
            auVar45._13_3_ = 0;
            auVar22._4_4_ = _UNK_00107a74;
            auVar22._0_4_ = __LC8;
            auVar22._8_4_ = _UNK_00107a78;
            auVar22._12_4_ = _UNK_00107a7c;
            auVar45 = auVar45 & auVar22;
            bVar9 = auVar45._4_4_ == _UNK_00107a74;
            bVar10 = auVar45._8_4_ == _UNK_00107a78;
            bVar11 = auVar45._12_4_ == _UNK_00107a7c;
            *pfVar8 = (float)(-(uint)(auVar45._0_4_ == __LC8) & (uint)(*pfVar8 - fVar51 * fVar50));
            pfVar8[1] = (float)(-(uint)bVar9 & (uint)(pfVar8[1] - fVar51 * fVar53));
            pfVar8[2] = (float)(-(uint)bVar10 & (uint)(pfVar8[2] - fVar51 * fVar54));
            pfVar8[3] = (float)(-(uint)bVar11 & (uint)(pfVar8[3] - fVar51 * fVar55));
            fVar51 = *(float *)(lVar5 + 0xb0);
            fVar59 = *(float *)(lVar5 + 0xb4);
            fVar12 = *(float *)(lVar5 + 0xb8);
            pfVar8[4] = pfVar8[4] - fVar35 * *(float *)(lVar5 + 0xac);
            pfVar8[5] = pfVar8[5] - fVar35 * fVar51;
            pfVar8[6] = pfVar8[6] - fVar35 * fVar59;
            pfVar8[7] = pfVar8[7] - fVar35 * fVar12;
          }
          fVar35 = *(float *)(lVar5 + 0x110) * param_1;
          *(float *)(lVar5 + 0x110) = fVar35;
          if (fVar35 == 0.0) {
            fVar35 = *(float *)(lVar5 + 0x60);
            fVar50 = *(float *)(lVar5 + 100);
            fVar53 = *(float *)(lVar5 + 0x68);
            fVar54 = *(float *)(lVar5 + 0x6c);
          }
          else {
            bVar2 = *(byte *)((long)pfVar8 + 0x7a);
            fVar51 = fVar35 * fVar37;
            auVar44._1_3_ = 0;
            auVar44[0] = bVar2;
            auVar44[4] = bVar2;
            auVar44._5_3_ = 0;
            auVar44[8] = bVar2;
            auVar44._9_3_ = 0;
            auVar44[0xc] = bVar2;
            auVar44._13_3_ = 0;
            auVar21._4_4_ = _UNK_00107a74;
            auVar21._0_4_ = __LC8;
            auVar21._8_4_ = _UNK_00107a78;
            auVar21._12_4_ = _UNK_00107a7c;
            auVar44 = auVar44 & auVar21;
            bVar9 = auVar44._4_4_ == _UNK_00107a74;
            bVar10 = auVar44._8_4_ == _UNK_00107a78;
            bVar11 = auVar44._12_4_ == _UNK_00107a7c;
            *pfVar8 = (float)(-(uint)(auVar44._0_4_ == __LC8) & (uint)(*pfVar8 - fVar51 * fVar50));
            pfVar8[1] = (float)(-(uint)bVar9 & (uint)(pfVar8[1] - fVar51 * fVar53));
            pfVar8[2] = (float)(-(uint)bVar10 & (uint)(pfVar8[2] - fVar51 * fVar54));
            pfVar8[3] = (float)(-(uint)bVar11 & (uint)(pfVar8[3] - fVar51 * fVar55));
            fVar50 = *(float *)(lVar5 + 0xf0);
            fVar53 = *(float *)(lVar5 + 0xf4);
            fVar54 = *(float *)(lVar5 + 0xf8);
            pfVar8[4] = pfVar8[4] - *(float *)(lVar5 + 0xec) * fVar35;
            pfVar8[5] = pfVar8[5] - fVar50 * fVar35;
            pfVar8[6] = pfVar8[6] - fVar53 * fVar35;
            pfVar8[7] = pfVar8[7] - fVar54 * fVar35;
            fVar35 = *(float *)(lVar5 + 0x60);
            fVar50 = *(float *)(lVar5 + 100);
            fVar53 = *(float *)(lVar5 + 0x68);
            fVar54 = *(float *)(lVar5 + 0x6c);
          }
          fVar55 = *(float *)(lVar5 + 0x150) * 0.0;
          *(float *)(lVar5 + 0x150) = fVar55;
          if (fVar55 == 0.0) {
            fVar35 = *(float *)(lVar5 + 0x70);
            fVar50 = *(float *)(lVar5 + 0x74);
            fVar53 = *(float *)(lVar5 + 0x78);
            fVar54 = *(float *)(lVar5 + 0x7c);
          }
          else {
            bVar2 = *(byte *)((long)pfVar8 + 0x7a);
            fVar51 = fVar55 * fVar37;
            auVar43._1_3_ = 0;
            auVar43[0] = bVar2;
            auVar43[4] = bVar2;
            auVar43._5_3_ = 0;
            auVar43[8] = bVar2;
            auVar43._9_3_ = 0;
            auVar43[0xc] = bVar2;
            auVar43._13_3_ = 0;
            auVar20._4_4_ = _UNK_00107a74;
            auVar20._0_4_ = __LC8;
            auVar20._8_4_ = _UNK_00107a78;
            auVar20._12_4_ = _UNK_00107a7c;
            auVar43 = auVar43 & auVar20;
            bVar9 = auVar43._4_4_ == _UNK_00107a74;
            bVar10 = auVar43._8_4_ == _UNK_00107a78;
            bVar11 = auVar43._12_4_ == _UNK_00107a7c;
            *pfVar8 = (float)(-(uint)(auVar43._0_4_ == __LC8) &
                             (uint)(*pfVar8 - fVar51 * (0.0 - fVar35)));
            pfVar8[1] = (float)(-(uint)bVar9 & (uint)(pfVar8[1] - fVar51 * (0.0 - fVar50)));
            pfVar8[2] = (float)(-(uint)bVar10 & (uint)(pfVar8[2] - fVar51 * (0.0 - fVar53)));
            pfVar8[3] = (float)(-(uint)bVar11 & (uint)(pfVar8[3] - fVar51 * (0.0 - fVar54)));
            fVar35 = *(float *)(lVar5 + 0x130);
            fVar50 = *(float *)(lVar5 + 0x134);
            fVar53 = *(float *)(lVar5 + 0x138);
            pfVar8[4] = pfVar8[4] - *(float *)(lVar5 + 300) * fVar55;
            pfVar8[5] = pfVar8[5] - fVar35 * fVar55;
            pfVar8[6] = pfVar8[6] - fVar50 * fVar55;
            pfVar8[7] = pfVar8[7] - fVar53 * fVar55;
            fVar35 = *(float *)(lVar5 + 0x70);
            fVar50 = *(float *)(lVar5 + 0x74);
            fVar53 = *(float *)(lVar5 + 0x78);
            fVar54 = *(float *)(lVar5 + 0x7c);
          }
          fVar55 = *(float *)(lVar5 + 400) * param_1;
          *(float *)(lVar5 + 400) = fVar55;
          if (fVar55 != 0.0) {
            fVar37 = fVar37 * fVar55;
            bVar2 = *(byte *)((long)pfVar8 + 0x7a);
            auVar42._1_3_ = 0;
            auVar42[0] = bVar2;
            auVar42[4] = bVar2;
            auVar42._5_3_ = 0;
            auVar42[8] = bVar2;
            auVar42._9_3_ = 0;
            auVar42[0xc] = bVar2;
            auVar42._13_3_ = 0;
            auVar19._4_4_ = _UNK_00107a74;
            auVar19._0_4_ = __LC8;
            auVar19._8_4_ = _UNK_00107a78;
            auVar19._12_4_ = _UNK_00107a7c;
            auVar42 = auVar42 & auVar19;
            bVar9 = auVar42._4_4_ == _UNK_00107a74;
            bVar10 = auVar42._8_4_ == _UNK_00107a78;
            bVar11 = auVar42._12_4_ == _UNK_00107a7c;
            *pfVar8 = (float)(-(uint)(auVar42._0_4_ == __LC8) &
                             (uint)(*pfVar8 - fVar37 * (0.0 - fVar35)));
            pfVar8[1] = (float)(-(uint)bVar9 & (uint)(pfVar8[1] - fVar37 * (0.0 - fVar50)));
            pfVar8[2] = (float)(-(uint)bVar10 & (uint)(pfVar8[2] - fVar37 * (0.0 - fVar53)));
            pfVar8[3] = (float)(-(uint)bVar11 & (uint)(pfVar8[3] - fVar37 * (0.0 - fVar54)));
            fVar35 = *(float *)(lVar5 + 0x170);
            fVar50 = *(float *)(lVar5 + 0x174);
            fVar53 = *(float *)(lVar5 + 0x178);
            pfVar8[4] = pfVar8[4] - *(float *)(lVar5 + 0x16c) * fVar55;
            pfVar8[5] = pfVar8[5] - fVar35 * fVar55;
            pfVar8[6] = pfVar8[6] - fVar50 * fVar55;
            pfVar8[7] = pfVar8[7] - fVar53 * fVar55;
          }
        }
        goto LAB_00101bc0;
      }
      fVar37 = pfVar7[0x16];
      *(float *)(lVar5 + 0xd0) = fVar35;
      if (fVar35 != 0.0) {
        bVar2 = *(byte *)((long)pfVar7 + 0x7a);
        fVar51 = fVar35 * fVar37;
        auVar58._1_3_ = 0;
        auVar58[0] = bVar2;
        auVar58[4] = bVar2;
        auVar58._5_3_ = 0;
        auVar58[8] = bVar2;
        auVar58._9_3_ = 0;
        auVar58[0xc] = bVar2;
        auVar58._13_3_ = 0;
        auVar18._4_4_ = _UNK_00107a74;
        auVar18._0_4_ = __LC8;
        auVar18._8_4_ = _UNK_00107a78;
        auVar18._12_4_ = _UNK_00107a7c;
        auVar58 = auVar58 & auVar18;
        bVar9 = auVar58._4_4_ == _UNK_00107a74;
        bVar10 = auVar58._8_4_ == _UNK_00107a78;
        bVar11 = auVar58._12_4_ == _UNK_00107a7c;
        *pfVar7 = (float)((uint)(fVar51 * fVar50 + *pfVar7) & -(uint)(auVar58._0_4_ == __LC8));
        pfVar7[1] = (float)((uint)(fVar51 * fVar53 + pfVar7[1]) & -(uint)bVar9);
        pfVar7[2] = (float)((uint)(fVar51 * fVar54 + pfVar7[2]) & -(uint)bVar10);
        pfVar7[3] = (float)((uint)(fVar51 * fVar55 + pfVar7[3]) & -(uint)bVar11);
        fVar51 = *(float *)(lVar5 + 0xbc);
        fVar59 = *(float *)(lVar5 + 0xc0);
        fVar12 = *(float *)(lVar5 + 0xc4);
        pfVar7[4] = fVar35 * *(float *)(lVar5 + 0xb8) + pfVar7[4];
        pfVar7[5] = fVar35 * fVar51 + pfVar7[5];
        pfVar7[6] = fVar35 * fVar59 + pfVar7[6];
        pfVar7[7] = fVar35 * fVar12 + pfVar7[7];
      }
      fVar35 = *(float *)(lVar5 + 0x110) * param_1;
      *(float *)(lVar5 + 0x110) = fVar35;
      if (fVar35 == 0.0) {
        fVar35 = *(float *)(lVar5 + 0x60);
        fVar50 = *(float *)(lVar5 + 100);
        fVar53 = *(float *)(lVar5 + 0x68);
        fVar54 = *(float *)(lVar5 + 0x6c);
      }
      else {
        bVar2 = *(byte *)((long)pfVar7 + 0x7a);
        fVar51 = fVar37 * fVar35;
        auVar56._1_3_ = 0;
        auVar56[0] = bVar2;
        auVar56[4] = bVar2;
        auVar56._5_3_ = 0;
        auVar56[8] = bVar2;
        auVar56._9_3_ = 0;
        auVar56[0xc] = bVar2;
        auVar56._13_3_ = 0;
        auVar17._4_4_ = _UNK_00107a74;
        auVar17._0_4_ = __LC8;
        auVar17._8_4_ = _UNK_00107a78;
        auVar17._12_4_ = _UNK_00107a7c;
        auVar56 = auVar56 & auVar17;
        bVar9 = auVar56._4_4_ == _UNK_00107a74;
        bVar10 = auVar56._8_4_ == _UNK_00107a78;
        bVar11 = auVar56._12_4_ == _UNK_00107a7c;
        *pfVar7 = (float)((uint)(fVar50 * fVar51 + *pfVar7) & -(uint)(auVar56._0_4_ == __LC8));
        pfVar7[1] = (float)((uint)(fVar53 * fVar51 + pfVar7[1]) & -(uint)bVar9);
        pfVar7[2] = (float)((uint)(fVar54 * fVar51 + pfVar7[2]) & -(uint)bVar10);
        pfVar7[3] = (float)((uint)(fVar55 * fVar51 + pfVar7[3]) & -(uint)bVar11);
        fVar50 = *(float *)(lVar5 + 0xfc);
        fVar53 = *(float *)(lVar5 + 0x100);
        fVar54 = *(float *)(lVar5 + 0x104);
        pfVar7[4] = fVar35 * *(float *)(lVar5 + 0xf8) + pfVar7[4];
        pfVar7[5] = fVar35 * fVar50 + pfVar7[5];
        pfVar7[6] = fVar35 * fVar53 + pfVar7[6];
        pfVar7[7] = fVar35 * fVar54 + pfVar7[7];
        fVar35 = *(float *)(lVar5 + 0x60);
        fVar50 = *(float *)(lVar5 + 100);
        fVar53 = *(float *)(lVar5 + 0x68);
        fVar54 = *(float *)(lVar5 + 0x6c);
      }
      fVar55 = *(float *)(lVar5 + 0x150) * 0.0;
      *(float *)(lVar5 + 0x150) = fVar55;
      if (fVar55 == 0.0) {
        fVar35 = *(float *)(lVar5 + 0x70);
        fVar50 = *(float *)(lVar5 + 0x74);
        fVar53 = *(float *)(lVar5 + 0x78);
        fVar54 = *(float *)(lVar5 + 0x7c);
      }
      else {
        bVar2 = *(byte *)((long)pfVar7 + 0x7a);
        fVar51 = fVar37 * fVar55;
        auVar57._1_3_ = 0;
        auVar57[0] = bVar2;
        auVar57[4] = bVar2;
        auVar57._5_3_ = 0;
        auVar57[8] = bVar2;
        auVar57._9_3_ = 0;
        auVar57[0xc] = bVar2;
        auVar57._13_3_ = 0;
        auVar16._4_4_ = _UNK_00107a74;
        auVar16._0_4_ = __LC8;
        auVar16._8_4_ = _UNK_00107a78;
        auVar16._12_4_ = _UNK_00107a7c;
        auVar57 = auVar57 & auVar16;
        bVar9 = auVar57._4_4_ == _UNK_00107a74;
        bVar10 = auVar57._8_4_ == _UNK_00107a78;
        bVar11 = auVar57._12_4_ == _UNK_00107a7c;
        *pfVar7 = (float)((uint)(fVar51 * (0.0 - fVar35) + *pfVar7) &
                         -(uint)(auVar57._0_4_ == __LC8));
        pfVar7[1] = (float)((uint)(fVar51 * (0.0 - fVar50) + pfVar7[1]) & -(uint)bVar9);
        pfVar7[2] = (float)((uint)(fVar51 * (0.0 - fVar53) + pfVar7[2]) & -(uint)bVar10);
        pfVar7[3] = (float)((uint)(fVar51 * (0.0 - fVar54) + pfVar7[3]) & -(uint)bVar11);
        fVar35 = *(float *)(lVar5 + 0x13c);
        fVar50 = *(float *)(lVar5 + 0x140);
        fVar53 = *(float *)(lVar5 + 0x144);
        pfVar7[4] = fVar55 * *(float *)(lVar5 + 0x138) + pfVar7[4];
        pfVar7[5] = fVar55 * fVar35 + pfVar7[5];
        pfVar7[6] = fVar55 * fVar50 + pfVar7[6];
        pfVar7[7] = fVar55 * fVar53 + pfVar7[7];
        fVar35 = *(float *)(lVar5 + 0x70);
        fVar50 = *(float *)(lVar5 + 0x74);
        fVar53 = *(float *)(lVar5 + 0x78);
        fVar54 = *(float *)(lVar5 + 0x7c);
      }
      fVar55 = *(float *)(lVar5 + 400) * param_1;
      *(float *)(lVar5 + 400) = fVar55;
      if (fVar55 == 0.0) goto LAB_00101bc0;
      fVar37 = fVar37 * fVar55;
      bVar2 = *(byte *)((long)pfVar7 + 0x7a);
      plVar34 = plVar34 + 1;
      auVar38._1_3_ = 0;
      auVar38[0] = bVar2;
      auVar38[4] = bVar2;
      auVar38._5_3_ = 0;
      auVar38[8] = bVar2;
      auVar38._9_3_ = 0;
      auVar38[0xc] = bVar2;
      auVar38._13_3_ = 0;
      auVar15._4_4_ = _UNK_00107a74;
      auVar15._0_4_ = __LC8;
      auVar15._8_4_ = _UNK_00107a78;
      auVar15._12_4_ = _UNK_00107a7c;
      auVar38 = auVar38 & auVar15;
      bVar9 = auVar38._4_4_ == _UNK_00107a74;
      bVar10 = auVar38._8_4_ == _UNK_00107a78;
      bVar11 = auVar38._12_4_ == _UNK_00107a7c;
      *pfVar7 = (float)((uint)(fVar37 * (0.0 - fVar35) + *pfVar7) & -(uint)(auVar38._0_4_ == __LC8))
      ;
      pfVar7[1] = (float)((uint)(fVar37 * (0.0 - fVar50) + pfVar7[1]) & -(uint)bVar9);
      pfVar7[2] = (float)((uint)(fVar37 * (0.0 - fVar53) + pfVar7[2]) & -(uint)bVar10);
      pfVar7[3] = (float)((uint)(fVar37 * (0.0 - fVar54) + pfVar7[3]) & -(uint)bVar11);
      fVar35 = *(float *)(lVar5 + 0x17c);
      fVar50 = *(float *)(lVar5 + 0x180);
      fVar53 = *(float *)(lVar5 + 0x184);
      pfVar7[4] = *(float *)(lVar5 + 0x178) * fVar55 + pfVar7[4];
      pfVar7[5] = fVar35 * fVar55 + pfVar7[5];
      pfVar7[6] = fVar50 * fVar55 + pfVar7[6];
      pfVar7[7] = fVar53 * fVar55 + pfVar7[7];
    } while (plVar34 != plVar1);
  }
LAB_00101cf0:
  fVar35 = param_1 * *(float *)(this + 0x11c);
  *(float *)(this + 0x11c) = fVar35;
  if (fVar35 != 0.0) {
    if (*(char *)(lVar4 + 0x78) == '\x02') {
      lVar4 = *(long *)(lVar4 + 0x48);
      fVar50 = *(float *)(this + 0xf4);
      fVar53 = *(float *)(this + 0xf8);
      fVar54 = *(float *)(this + 0xfc);
      *(float *)(lVar4 + 0x10) = *(float *)(lVar4 + 0x10) - fVar35 * *(float *)(this + 0xf0);
      *(float *)(lVar4 + 0x14) = *(float *)(lVar4 + 0x14) - fVar35 * fVar50;
      *(float *)(lVar4 + 0x18) = *(float *)(lVar4 + 0x18) - fVar35 * fVar53;
      *(float *)(lVar4 + 0x1c) = *(float *)(lVar4 + 0x1c) - fVar35 * fVar54;
    }
    lVar4 = _vtable;
    if (DAT_00109128 == '\x02') {
      fVar50 = *(float *)(this + 0x104);
      fVar53 = *(float *)(this + 0x108);
      fVar54 = *(float *)(this + 0x10c);
      pfVar7 = (float *)(_vtable + 0x14);
      fVar55 = *(float *)(_vtable + 0x18);
      fVar37 = *(float *)(_vtable + 0x1c);
      *(float *)(_vtable + 0x10) = fVar35 * *(float *)(this + 0x100) + *(float *)(_vtable + 0x10);
      *(float *)(lVar4 + 0x14) = fVar35 * fVar50 + *pfVar7;
      *(float *)(lVar4 + 0x18) = fVar35 * fVar53 + fVar55;
      *(float *)(lVar4 + 0x1c) = fVar35 * fVar54 + fVar37;
      return;
    }
  }
  return;
}



/* JPH::GetRTTIOfType(JPH::VehicleConstraintSettings*) */

undefined1 * JPH::GetRTTIOfType(VehicleConstraintSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::VehicleConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::VehicleConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::VehicleConstraintSettings*)::rtti,
                      "VehicleConstraintSettings",0x90,
                      GetRTTIOfType(JPH::VehicleConstraintSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::VehicleConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      VehicleConstraintSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::VehicleConstraintSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::VehicleConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::VehicleConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::VehicleConstraintSettings*)::rtti;
}



/* JPH::VehicleConstraintSettings::CastTo(JPH::RTTI const*) const */

void JPH::VehicleConstraintSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((VehicleConstraintSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::VehicleConstraint::VehicleConstraint(JPH::Body&, JPH::VehicleConstraintSettings const&) */

void __thiscall
JPH::VehicleConstraint::VehicleConstraint
          (VehicleConstraint *this,Body *param_1,VehicleConstraintSettings *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  float fVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  float fVar17;
  int iVar18;
  uint uVar19;
  float fVar20;
  
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x14) = uVar4;
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(this + 0xc) = uVar2;
  this[0x18] = SUB41(uVar4,0);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  this[0x19] = SUB41(uVar2,0);
  uVar6 = *(undefined8 *)(param_2 + 0x40);
  uVar7 = *(undefined8 *)(param_2 + 0x48);
  uVar8 = *(undefined8 *)(param_2 + 0x30);
  uVar9 = *(undefined8 *)(param_2 + 0x38);
  *(VehicleConstraintSettings *)(this + 0x1a) = param_2[0xc];
  uVar12 = *(undefined8 *)(param_2 + 0x20);
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x20) = uVar12;
  *(undefined ***)this = &PTR__VehicleConstraint_00107978;
  *(undefined ***)(this + 0x28) = &PTR__VehicleConstraint_00107a28;
  *(undefined8 *)(this + 0x60) = uVar6;
  *(undefined8 *)(this + 0x68) = uVar7;
  this[0x30] = (VehicleConstraint)0x0;
  *(Body **)(this + 0x50) = param_1;
  *(undefined8 *)(this + 0x70) = uVar8;
  *(undefined8 *)(this + 0x78) = uVar9;
  uVar7 = _LC43;
  uVar10 = _LC45;
  *(undefined8 *)(this + 0x80) = uVar8;
  *(undefined8 *)(this + 0x88) = uVar9;
  fVar20 = _LC22;
  fVar11 = _LC16;
  *(undefined1 (*) [16])(this + 0x90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
  uVar6 = _UNK_00107a58;
  uVar12 = CONCAT44(_LC9,__LC1);
  *(undefined8 *)(this + 0xcc) = uVar7;
  *(undefined8 *)(this + 0xe0) = uVar12;
  *(undefined8 *)(this + 0xe8) = uVar6;
  *(undefined1 (*) [16])(this + 0x110) = (undefined1  [16])0x0;
  *(code **)(this + 0x138) =
       std::
       _Function_handler<void(unsigned_int,float&,float&,JPH::Body_const&,JPH::SubShapeID_const&),JPH::VehicleConstraint::mCombineFriction::{lambda(unsigned_int,float&,float&,JPH::Body_const&,JPH::SubShapeID_const&)#1}>
       ::_M_manager;
  *(code **)(this + 0x140) =
       std::
       _Function_handler<void(unsigned_int,float&,float&,JPH::Body_const&,JPH::SubShapeID_const&),JPH::VehicleConstraint::mCombineFriction::{lambda(unsigned_int,float&,float&,JPH::Body_const&,JPH::SubShapeID_const&)#1}>
       ::_M_invoke;
  fVar17 = _LC19;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined1 (*) [16])(this + 0x128) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x148) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x168) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x188) = (undefined1  [16])0x0;
  uVar3 = *(uint *)(param_2 + 0x50);
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  this[200] = (VehicleConstraint)0x0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  iVar18 = (int)(fVar17 * (float)(~uVar10 & uVar3) + fVar11);
  fVar17 = (float)iVar18;
  uVar19 = (iVar18 << 0x1f) >> 0x1f;
  fVar17 = (((float)(~uVar10 & uVar3) - fVar20 * fVar17) - _LC24 * fVar17) - fVar17 * _LC26;
  uVar13 = *(ulong *)(param_2 + 0x70);
  fVar20 = fVar17 * fVar17;
  *(uint *)(this + 0xd8) =
       ((uint)(((_LC35 * fVar20 + _LC37) * fVar20 + _LC39) * fVar20 * fVar17 + fVar17) & uVar19 |
       ~uVar19 & (uint)((((_LC28 * fVar20 + _LC30) * fVar20 + _LC32) * fVar20 * fVar20 -
                        fVar11 * fVar20) + _LC9)) ^ iVar18 << 0x1e & _LC45 ^ iVar18 << 0x1f;
  if (uVar13 == 0) {
    *(undefined8 *)(this + 0xa8) = 0;
  }
  else {
    lVar14 = (*Reallocate)(0,0,uVar13 * 0xc);
    *(ulong *)(this + 0xb0) = uVar13;
    *(long *)(this + 0xb8) = lVar14;
    puVar1 = (undefined8 *)(lVar14 + uVar13 * 0xc);
    puVar15 = (undefined8 *)(lVar14 + *(long *)(this + 0xa8) * 0xc);
    if (puVar15 < puVar1) {
      if (puVar15 == (undefined8 *)0x0) goto LAB_00102841;
      do {
        uVar12 = _LC5;
        *(undefined4 *)(puVar15 + 1) = 0x447a0000;
        *puVar15 = uVar12;
LAB_00102841:
        puVar15 = (undefined8 *)((long)puVar15 + 0xc);
      } while (puVar15 < puVar1);
    }
    *(ulong *)(this + 0xa8) = uVar13;
    lVar5 = *(long *)(param_2 + 0x80);
    uVar16 = 0;
    do {
      *(undefined8 *)(lVar14 + uVar16 * 0xc) = *(undefined8 *)(lVar5 + uVar16 * 0xc);
      *(undefined4 *)(lVar14 + 8 + uVar16 * 0xc) = *(undefined4 *)(lVar5 + 8 + uVar16 * 0xc);
      uVar16 = (ulong)((int)uVar16 + 1);
    } while (uVar16 < uVar13);
  }
  uVar12 = (**(code **)(**(long **)(param_2 + 0x88) + 0x30))(*(long **)(param_2 + 0x88),this);
  uVar13 = *(ulong *)(param_2 + 0x58);
  *(undefined8 *)(this + 0xc0) = uVar12;
  if (*(ulong *)(this + 0x98) < uVar13) {
    uVar12 = (*Reallocate)(*(undefined8 *)(this + 0xa0),*(ulong *)(this + 0x98) << 3,uVar13 * 8);
    *(ulong *)(this + 0x98) = uVar13;
    *(undefined8 *)(this + 0xa0) = uVar12;
    *(ulong *)(this + 0x90) = uVar13;
  }
  else {
    *(ulong *)(this + 0x90) = uVar13;
    if (uVar13 == 0) goto LAB_00102778;
  }
  uVar13 = 0;
  do {
    uVar12 = (**(code **)(**(long **)(this + 0xc0) + 0x10))
                       (*(long **)(this + 0xc0),
                        *(undefined8 *)(*(long *)(param_2 + 0x68) + uVar13 * 8));
    *(undefined8 *)(*(long *)(this + 0xa0) + uVar13 * 8) = uVar12;
    uVar13 = (ulong)((int)uVar13 + 1);
  } while (uVar13 < *(ulong *)(this + 0x90));
LAB_00102778:
  uVar13 = (ulong)(*(uint *)(param_1 + 0x70) & 0x7fffff) * 0x1fffff - 1;
  uVar13 = (uVar13 ^ uVar13 >> 0x18) * 0x109;
  uVar13 = (uVar13 ^ uVar13 >> 0xe) * 0x15;
  uVar13 = uVar13 ^ uVar13 >> 0x1c;
  *(int *)(this + 0xd4) = (int)uVar13 + (int)(uVar13 << 0x1f);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::VehicleConstraint::GetWheelLocalBasis(JPH::Wheel const*, JPH::Vec3&, JPH::Vec3&, JPH::Vec3&)
   const */

void __thiscall
JPH::VehicleConstraint::GetWheelLocalBasis
          (VehicleConstraint *this,Wheel *param_1,Vec3 *param_2,Vec3 *param_3,Vec3 *param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  uint uVar27;
  
  fVar8 = _LC16 * *(float *)(param_1 + 0x88);
  lVar1 = *(long *)(param_1 + 8);
  fVar16 = (float)(_LC45 & (uint)fVar8 ^ (uint)fVar8);
  fVar17 = (float)(_UNK_00107aa4 & (uint)fVar8 ^ (uint)fVar8);
  fVar18 = (float)(_UNK_00107aa8 & (uint)fVar8 ^ (uint)fVar8);
  fVar19 = (float)(_UNK_00107aac & (uint)fVar8 ^ (uint)fVar8);
  fVar21 = *(float *)(lVar1 + 0x54);
  iVar12 = (int)(_LC19 * fVar16 + _LC16);
  iVar13 = (int)(_LC19 * fVar17 + _LC16);
  iVar14 = (int)(_LC19 * fVar18 + _LC16);
  iVar15 = (int)(_LC19 * fVar19 + _LC16);
  fVar3 = (float)iVar12;
  fVar4 = (float)iVar13;
  fVar5 = (float)iVar14;
  fVar6 = (float)iVar15;
  fVar16 = ((fVar16 - _LC22 * fVar3) - _LC24 * fVar3) - fVar3 * _LC26;
  fVar4 = ((fVar17 - _LC22 * fVar4) - _LC24 * fVar4) - fVar4 * _LC26;
  fVar5 = ((fVar18 - _LC22 * fVar5) - _LC24 * fVar5) - fVar5 * _LC26;
  fVar6 = ((fVar19 - _LC22 * fVar6) - _LC24 * fVar6) - fVar6 * _LC26;
  fVar3 = fVar16 * fVar16;
  fVar22 = fVar4 * fVar4;
  fVar24 = fVar5 * fVar5;
  fVar26 = fVar6 * fVar6;
  fVar17 = (((_LC28 * fVar3 + _LC30) * fVar3 + _LC32) * fVar3 * fVar3 - _LC16 * fVar3) + _LC9;
  fVar18 = (((_LC28 * fVar22 + _LC30) * fVar22 + _LC32) * fVar22 * fVar22 - _LC16 * fVar22) + _LC9;
  fVar19 = (((_LC28 * fVar24 + _LC30) * fVar24 + _LC32) * fVar24 * fVar24 - _LC16 * fVar24) + _LC9;
  fVar7 = (((_LC28 * fVar26 + _LC30) * fVar26 + _LC32) * fVar26 * fVar26 - _LC16 * fVar26) + _LC9;
  uVar20 = (iVar12 << 0x1f) >> 0x1f;
  uVar23 = (iVar13 << 0x1f) >> 0x1f;
  uVar25 = (iVar14 << 0x1f) >> 0x1f;
  uVar27 = (iVar15 << 0x1f) >> 0x1f;
  fVar16 = ((_LC35 * fVar3 + _LC37) * fVar3 + _LC39) * fVar3 * fVar16 + fVar16;
  fVar4 = ((_LC35 * fVar22 + _LC37) * fVar22 + _LC39) * fVar22 * fVar4 + fVar4;
  fVar5 = ((_LC35 * fVar24 + _LC37) * fVar24 + _LC39) * fVar24 * fVar5 + fVar5;
  fVar6 = ((_LC35 * fVar26 + _LC37) * fVar26 + _LC39) * fVar26 * fVar6 + fVar6;
  fVar3 = (float)*(undefined8 *)(lVar1 + 0x50);
  fVar16 = (float)((((uint)fVar16 & uVar20 | ~uVar20 & (uint)fVar17) ^
                   _LC45 & iVar12 << 0x1e ^ iVar12 << 0x1f) & __LC40 |
                  ~__LC40 & (uint)((float)(((uint)fVar8 ^ iVar12 << 0x1e) & _LC45 ^
                                          ((uint)fVar17 & uVar20 | ~uVar20 & (uint)fVar16)) *
                                  *(float *)(lVar1 + 0x40)));
  fVar4 = (float)((((uint)fVar4 & uVar23 | ~uVar23 & (uint)fVar18) ^
                  _UNK_00107aa4 & iVar13 << 0x1e ^ iVar13 << 0x1f) & _UNK_00107ab4 |
                 ~_UNK_00107ab4 &
                 (uint)((float)(((uint)fVar8 ^ iVar13 << 0x1e) & _UNK_00107aa4 ^
                               ((uint)fVar18 & uVar23 | ~uVar23 & (uint)fVar4)) *
                       *(float *)(lVar1 + 0x44)));
  fVar5 = (float)((((uint)fVar5 & uVar25 | ~uVar25 & (uint)fVar19) ^
                  _UNK_00107aa8 & iVar14 << 0x1e ^ iVar14 << 0x1f) & _UNK_00107ab8 |
                 ~_UNK_00107ab8 &
                 (uint)((float)(((uint)fVar8 ^ iVar14 << 0x1e) & _UNK_00107aa8 ^
                               ((uint)fVar19 & uVar25 | ~uVar25 & (uint)fVar5)) *
                       *(float *)(lVar1 + 0x48)));
  fVar6 = (float)((((uint)fVar6 & uVar27 | ~uVar27 & (uint)fVar7) ^
                  _UNK_00107aac & iVar15 << 0x1e ^ iVar15 << 0x1f) & _UNK_00107abc |
                 ~_UNK_00107abc &
                 (uint)((float)(((uint)fVar8 ^ iVar15 << 0x1e) & _UNK_00107aac ^
                               ((uint)fVar7 & uVar27 | ~uVar27 & (uint)fVar6)) *
                       *(float *)(lVar1 + 0x4c)));
  fVar17 = (float)(__LC48 ^ (uint)fVar16);
  fVar18 = (float)(_UNK_00107ad4 ^ (uint)fVar4);
  fVar19 = (float)(_UNK_00107ad8 ^ (uint)fVar5);
  fVar7 = (float)(_UNK_00107adc ^ (uint)fVar6);
  fVar24 = (fVar3 * fVar6 + fVar16 * 0.0 + *(float *)(lVar1 + 0x58) * fVar4) - fVar5 * fVar21;
  fVar22 = (fVar6 * fVar21 - *(float *)(lVar1 + 0x58) * fVar16) + fVar4 * 0.0 + fVar3 * fVar5;
  fVar8 = ((*(float *)(lVar1 + 0x58) * fVar6 + fVar16 * fVar21) - fVar3 * fVar4) + fVar5 * 0.0;
  fVar21 = ((fVar6 * 0.0 - fVar3 * fVar16) - fVar21 * fVar4) - *(float *)(lVar1 + 0x58) * fVar5;
  *(float *)param_3 = (fVar22 * fVar19 + fVar24 * fVar7 + fVar21 * fVar17) - fVar8 * fVar18;
  *(float *)(param_3 + 4) = fVar22 * fVar7 + (fVar21 * fVar18 - fVar24 * fVar19) + fVar8 * fVar17;
  *(float *)(param_3 + 8) = ((fVar24 * fVar18 + fVar21 * fVar19) - fVar22 * fVar17) + fVar8 * fVar7;
  *(float *)(param_3 + 0xc) =
       ((fVar21 * fVar7 - fVar24 * fVar17) - fVar22 * fVar18) - fVar8 * fVar19;
  fVar21 = *(float *)(lVar1 + 0x68);
  fVar8 = (float)*(undefined8 *)(lVar1 + 0x60);
  fVar22 = (float)((ulong)*(undefined8 *)(lVar1 + 0x60) >> 0x20);
  fVar26 = (fVar8 * fVar6 + fVar16 * 0.0 + fVar4 * fVar21) - fVar22 * fVar5;
  fVar24 = (fVar22 * fVar6 - fVar16 * fVar21) + fVar4 * 0.0 + fVar8 * fVar5;
  fVar3 = ((fVar6 * fVar21 + fVar16 * fVar22) - fVar8 * fVar4) + fVar5 * 0.0;
  fVar5 = ((fVar6 * 0.0 - fVar8 * fVar16) - fVar22 * fVar4) - fVar5 * fVar21;
  fVar16 = (fVar5 * fVar17 + fVar26 * fVar7 + fVar24 * fVar19) - fVar3 * fVar18;
  fVar21 = fVar3 * fVar17 + (fVar5 * fVar18 - fVar26 * fVar19) + fVar24 * fVar7;
  fVar4 = fVar3 * fVar7 + ((fVar5 * fVar19 + fVar26 * fVar18) - fVar24 * fVar17);
  *(float *)param_2 = fVar16;
  *(float *)(param_2 + 4) = fVar21;
  *(float *)(param_2 + 8) = fVar4;
  *(float *)(param_2 + 0xc) = ((fVar5 * fVar7 - fVar26 * fVar17) - fVar24 * fVar18) - fVar3 * fVar19
  ;
  fVar16 = *(float *)(param_3 + 4) * fVar16 -
           (fVar17 * fVar3 + fVar7 * fVar24 + (fVar18 * fVar5 - fVar19 * fVar26)) *
           *(float *)param_3;
  fVar21 = *(float *)(param_3 + 8) * fVar21 -
           (fVar7 * fVar3 + ((fVar18 * fVar26 + fVar19 * fVar5) - fVar17 * fVar24)) *
           *(float *)(param_3 + 4);
  fVar3 = *(float *)param_3 * fVar4 -
          ((fVar19 * fVar24 + fVar7 * fVar26 + fVar17 * fVar5) - fVar18 * fVar3) *
          *(float *)(param_3 + 8);
  auVar9._4_4_ = fVar3;
  auVar9._0_4_ = fVar21;
  auVar9._8_4_ = fVar16;
  auVar9._12_4_ = fVar16;
  auVar10._0_4_ = SQRT(fVar16 * fVar16 + fVar3 * fVar3 + fVar21 * fVar21 + 0.0);
  auVar10._4_4_ = auVar10._0_4_;
  auVar10._8_4_ = auVar10._0_4_;
  auVar10._12_4_ = auVar10._0_4_;
  auVar10 = divps(auVar9,auVar10);
  *(undefined1 (*) [16])param_4 = auVar10;
  fVar21 = auVar10._4_4_ * *(float *)param_3 - *(float *)(param_3 + 4) * auVar10._0_4_;
  fVar3 = auVar10._8_4_ * *(float *)(param_3 + 4) - *(float *)(param_3 + 8) * auVar10._4_4_;
  fVar16 = auVar10._0_4_ * *(float *)(param_3 + 8) - *(float *)param_3 * auVar10._8_4_;
  auVar11._4_4_ = fVar16;
  auVar11._0_4_ = fVar3;
  auVar11._8_4_ = fVar21;
  auVar11._12_4_ = fVar21;
  auVar2._0_4_ = SQRT(fVar21 * fVar21 + fVar16 * fVar16 + fVar3 * fVar3 + 0.0);
  auVar2._4_4_ = auVar2._0_4_;
  auVar2._8_4_ = auVar2._0_4_;
  auVar2._12_4_ = auVar2._0_4_;
  auVar10 = divps(auVar11,auVar2);
  *(undefined1 (*) [16])param_2 = auVar10;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::VehicleConstraint::OnStep(JPH::PhysicsStepListenerContext const&) */

void __thiscall
JPH::VehicleConstraint::OnStep(VehicleConstraint *this,PhysicsStepListenerContext *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  float *pfVar8;
  Wheel *pWVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  undefined8 uVar16;
  VehicleConstraint VVar17;
  char cVar18;
  float fVar19;
  ulong uVar20;
  int *piVar21;
  int *piVar22;
  float *pfVar23;
  long *plVar24;
  uint uVar25;
  int iVar26;
  long in_FS_OFFSET;
  bool bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar33 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar61 [12];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  Vec3 local_68 [16];
  float local_58;
  float fStack_54;
  float fStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x158) != 0) {
    (**(code **)(this + 0x160))(this + 0x148,this,param_1);
  }
  lVar4 = *(long *)(param_1 + 8);
  if (this[0x30] == (VehicleConstraint)0x0) {
    auVar50._0_4_ = 0.0 - *(float *)(lVar4 + 0x400);
    auVar50._4_4_ = 0.0 - *(float *)(lVar4 + 0x404);
    auVar50._8_4_ = 0.0 - *(float *)(lVar4 + 0x408);
    auVar50._12_4_ = 0.0 - *(float *)(lVar4 + 0x40c);
    fVar38 = auVar50._8_4_ * auVar50._8_4_ +
             auVar50._0_4_ * auVar50._0_4_ + 0.0 + auVar50._4_4_ * auVar50._4_4_;
    if (_LC49 < fVar38) {
LAB_001036da:
      auVar42._0_4_ = SQRT(fVar38);
      auVar42._4_4_ = auVar42._0_4_;
      auVar42._8_4_ = auVar42._0_4_;
      auVar42._12_4_ = auVar42._0_4_;
      auVar50 = divps(auVar50,auVar42);
      local_7c = _LC49;
      goto LAB_00102e72;
    }
  }
  else {
    lVar4 = *(long *)(*(long *)(this + 0x50) + 0x48);
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x70) != -1)) {
      auVar50 = *(undefined1 (*) [16])(this + 0x40);
      uVar2 = *(undefined4 *)(lVar4 + 0x58);
      *(undefined4 *)(lVar4 + 0x6c) = 0;
      auVar41._4_4_ = uVar2;
      auVar41._0_4_ = uVar2;
      auVar41._8_4_ = uVar2;
      auVar41._12_4_ = uVar2;
      auVar50 = divps(auVar50,auVar41);
      *(ulong *)(lVar4 + 0x40) =
           CONCAT44(auVar50._4_4_ + *(float *)(lVar4 + 0x44),
                    auVar50._0_4_ + *(float *)(lVar4 + 0x40));
      *(float *)(lVar4 + 0x48) = auVar50._8_4_ + *(float *)(lVar4 + 0x48);
    }
    auVar50._0_4_ = 0.0 - *(float *)(this + 0x40);
    auVar50._4_4_ = 0.0 - *(float *)(this + 0x44);
    auVar50._8_4_ = 0.0 - *(float *)(this + 0x48);
    auVar50._12_4_ = 0.0 - *(float *)(this + 0x4c);
    fVar38 = auVar50._8_4_ * auVar50._8_4_ +
             auVar50._0_4_ * auVar50._0_4_ + 0.0 + auVar50._4_4_ * auVar50._4_4_;
    if (_LC49 < fVar38) goto LAB_001036da;
  }
  auVar50 = *(undefined1 (*) [16])(this + 0x80);
  local_7c = _LC49;
LAB_00102e72:
  _LC49 = local_7c;
  *(undefined1 (*) [16])(this + 0x80) = auVar50;
  (**(code **)(**(long **)(this + 0xc0) + 0x20))();
  puVar5 = *(undefined8 **)(this + 0x50);
  if ((puVar5[9] == 0) || (*(int *)(puVar5[9] + 0x70) == -1)) {
    uVar25 = *(uint *)(this + 0xd0);
    VVar17 = (VehicleConstraint)0x0;
  }
  else {
    uVar25 = *(uint *)(this + 0xcc);
    VVar17 = (VehicleConstraint)0x1;
  }
  this[200] = VVar17;
  fVar32 = (float)puVar5[2];
  fVar19 = (float)((ulong)puVar5[2] >> 0x20);
  fVar28 = (float)puVar5[3];
  fVar47 = fVar32 + fVar32;
  fVar58 = fVar19 + fVar19;
  fVar53 = (float)((ulong)puVar5[3] >> 0x20);
  fVar38 = *(float *)(puVar5 + 1);
  fVar39 = fVar53 * (fVar28 + fVar28);
  fVar59 = fVar28 * (fVar28 + fVar28);
  fVar60 = fVar28 * fVar58 - fVar47 * fVar53;
  fVar48 = fVar47 * fVar53 + fVar28 * fVar58;
  fVar56 = fVar28 * fVar47 + fVar58 * fVar53;
  fVar53 = fVar28 * fVar47 - fVar58 * fVar53;
  fVar57 = (_LC9 - fVar32 * fVar47) - fVar19 * fVar58;
  fVar28 = fVar19 * fVar47 + fVar39;
  fVar39 = fVar19 * fVar47 - fVar39;
  fVar58 = (_LC9 - fVar19 * fVar58) - fVar59;
  fVar47 = (_LC9 - fVar59) - fVar32 * fVar47;
  local_e8._0_4_ = (float)*puVar5;
  fVar32 = (float)local_e8;
  local_e8._4_4_ = (float)((ulong)*puVar5 >> 0x20);
  fVar19 = local_e8._4_4_;
  if (*(code **)(*(long *)puVar5[8] + 0x18) == Shape::GetCenterOfMass) {
    fVar46 = 0.0;
    fVar44 = 0.0;
    fVar59 = 0.0;
  }
  else {
    auVar61 = (**(code **)(*(long *)puVar5[8] + 0x18))();
    local_e8._0_4_ = auVar61._0_4_;
    local_e8._4_4_ = auVar61._4_4_;
    fVar59 = 0.0 - (float)local_e8;
    fVar44 = 0.0 - local_e8._4_4_;
    fVar46 = 0.0 - auVar61._8_4_;
  }
  uVar16 = _LC57;
  uVar20 = 0;
  if (*(long *)(this + 0x90) != 0) {
    do {
      while( true ) {
        pWVar9 = *(Wheel **)(*(long *)(this + 0xa0) + uVar20 * 8);
        lVar4 = *(long *)(pWVar9 + 8);
        fVar29 = *(float *)(lVar4 + 0x10);
        fVar30 = *(float *)(lVar4 + 0x14);
        fVar34 = *(float *)(lVar4 + 0x18);
        fVar31 = fVar34 * fVar56 + fVar29 * fVar58 + fVar30 * fVar39 +
                 fVar59 * fVar58 + fVar44 * fVar39 + fVar46 * fVar56 + fVar32;
        fVar35 = fVar34 * fVar60 + fVar29 * fVar28 + fVar30 * fVar47 +
                 fVar59 * fVar28 + fVar44 * fVar47 + fVar46 * fVar60 + fVar19;
        fVar37 = fVar34 * fVar57 + fVar29 * fVar53 + fVar30 * fVar48 +
                 fVar59 * fVar53 + fVar44 * fVar48 + fVar46 * fVar57 + fVar38;
        local_d8 = CONCAT44(fVar35,fVar31);
        uStack_d0._0_4_ = fVar37;
        uStack_d0._4_4_ = fVar34 * 0.0 + fVar29 * 0.0 + fVar30 * 0.0 + 1.0;
        fVar29 = *(float *)(lVar4 + 0x30);
        fVar30 = *(float *)(lVar4 + 0x34);
        fVar34 = *(float *)(lVar4 + 0x38);
        fVar40 = fVar29 * fVar58 + fVar30 * fVar39 + fVar34 * fVar56;
        fVar43 = fVar29 * fVar28 + fVar30 * fVar47 + fVar34 * fVar60;
        fVar45 = fVar29 * fVar53 + fVar30 * fVar48 + fVar34 * fVar57;
        local_e8 = CONCAT44(fVar43,fVar40);
        uStack_e0 = CONCAT44(fVar29 * 0.0 + fVar30 * 0.0 + fVar34 * 0.0,fVar45);
        iVar26 = (int)uVar20;
        if ((uVar25 == 0) || ((uint)(*(int *)(this + 0xd4) + iVar26) % uVar25 != 0)) break;
        plVar14 = *(long **)(this + 0x120);
        uVar2 = *(undefined4 *)(lVar4 + 0x74);
        uVar6 = *(undefined8 *)(param_1 + 8);
        lVar4 = *plVar14;
        *(undefined8 *)(pWVar9 + 0x18) = 0;
        lVar10 = *(long *)(this + 0x50);
        *(undefined4 *)(pWVar9 + 0x20) = uVar2;
        pcVar7 = *(code **)(lVar4 + 0x10);
        *(undefined8 *)(pWVar9 + 0x10) = 0xffffffffffffffff;
        cVar18 = (*pcVar7)(local_d8,uStack_d0,local_e8,uStack_e0,plVar14,uVar6,this,uVar20,
                           lVar10 + 0x70,pWVar9 + 0x18,pWVar9 + 0x14,pWVar9 + 0x30,pWVar9 + 0x50,
                           pWVar9 + 0x20);
        pfVar23 = *(float **)(pWVar9 + 0x18);
        if (cVar18 == '\0') {
LAB_00103768:
          if (pfVar23 != (float *)0x0) goto LAB_00103137;
        }
        else {
          *(float *)(pWVar9 + 0x10) = pfVar23[0x1c];
LAB_00103137:
          fVar30 = 0.0;
          fVar34 = 0.0;
          fVar36 = 0.0;
          fVar29 = 0.0;
          pfVar8 = *(float **)(pfVar23 + 0x12);
          if (*(char *)(pfVar23 + 0x1e) != '\0') {
            fVar29 = (*(float *)(pWVar9 + 0x34) - pfVar23[1]) * pfVar8[4] -
                     pfVar8[5] * (*(float *)(pWVar9 + 0x30) - *pfVar23);
            fVar30 = ((*(float *)(pWVar9 + 0x38) - pfVar23[2]) * pfVar8[5] -
                     pfVar8[6] * (*(float *)(pWVar9 + 0x34) - pfVar23[1])) + *pfVar8;
            fVar34 = ((*(float *)(pWVar9 + 0x30) - *pfVar23) * pfVar8[6] -
                     pfVar8[4] * (*(float *)(pWVar9 + 0x38) - pfVar23[2])) + pfVar8[1];
            fVar36 = fVar29 + pfVar8[2];
            fVar29 = fVar29 + pfVar8[3];
          }
          *(float *)(pWVar9 + 0x40) = fVar30;
          *(float *)(pWVar9 + 0x44) = fVar34;
          *(float *)(pWVar9 + 0x48) = fVar36;
          *(float *)(pWVar9 + 0x4c) = fVar29;
          fVar29 = *(float *)(pWVar9 + 0x20);
          bVar27 = false;
          *(float *)(pWVar9 + 0x80) =
               (fVar29 * fVar45 + fVar37) * *(float *)(pWVar9 + 0x58) +
               (fVar29 * fVar43 + fVar35) * *(float *)(pWVar9 + 0x54) +
               *(float *)(pWVar9 + 0x50) * (fVar29 * fVar40 + fVar31) + 0.0;
          if (pfVar8 != (float *)0x0) {
            bVar27 = pfVar8[0x1c] != -NAN;
          }
          this[200] = (VehicleConstraint)((byte)this[200] | bVar27);
          GetWheelLocalBasis(this,pWVar9,(Vec3 *)&local_78,local_68,(Vec3 *)&local_58);
          fVar29 = *(float *)(pWVar9 + 0x50);
          fVar30 = *(float *)(pWVar9 + 0x54);
          fVar34 = *(float *)(pWVar9 + 0x58);
          fVar37 = local_58 * fVar58 + fStack_54 * fVar39 + fStack_50 * fVar56;
          fVar35 = local_58 * fVar28 + fStack_54 * fVar47 + fStack_50 * fVar60;
          fVar40 = local_58 * fVar53 + fStack_54 * fVar48 + fStack_50 * fVar57;
          fVar31 = fVar35 * fVar29 - fVar37 * fVar30;
          fVar35 = fVar40 * fVar30 - fVar35 * fVar34;
          fVar37 = fVar37 * fVar34 - fVar40 * fVar29;
          *(float *)(pWVar9 + 0x60) = fVar35;
          *(float *)(pWVar9 + 100) = fVar37;
          *(float *)(pWVar9 + 0x68) = fVar31;
          *(float *)(pWVar9 + 0x6c) = fVar31;
          if ((local_78 * fVar53 + fStack_74 * fVar48 + fStack_70 * fVar57) * fVar31 +
              (local_78 * fVar28 + fStack_74 * fVar47 + fStack_70 * fVar60) * fVar37 +
              (local_78 * fVar58 + fStack_74 * fVar39 + fStack_70 * fVar56) * fVar35 + 0.0 < 0.0) {
            *(float *)(pWVar9 + 0x60) = 0.0 - fVar35;
            *(float *)(pWVar9 + 100) = 0.0 - fVar37;
            *(float *)(pWVar9 + 0x68) = 0.0 - fVar31;
            *(float *)(pWVar9 + 0x6c) = 0.0 - fVar31;
          }
          fVar31 = *(float *)(pWVar9 + 0x50);
          fVar35 = *(float *)(pWVar9 + 0x54);
          fVar37 = *(float *)(pWVar9 + 0x58);
          if ((float)((uint)fVar31 & _LC51) <= (float)((uint)fVar35 & _LC51)) {
            fVar31 = SQRT(fVar35 * fVar35 + fVar37 * fVar37);
            auVar15._4_4_ = (uint)fVar35 ^ _LC41;
            auVar15._0_4_ = fVar37;
            auVar15._8_4_ = (uint)fVar35 ^ _LC41;
            auVar15._12_4_ = 0;
            auVar51._4_4_ = fVar31;
            auVar51._0_4_ = fVar31;
            auVar51._8_4_ = fVar31;
            auVar51._12_4_ = fVar31;
            auVar50 = divps(auVar15 << 0x20,auVar51);
          }
          else {
            auVar49._4_4_ = 0;
            auVar49._0_4_ = fVar37;
            auVar49._12_4_ = (uint)fVar31 ^ _LC41;
            auVar49._8_4_ = (uint)fVar31 ^ _LC41;
            fVar31 = SQRT(fVar31 * fVar31 + fVar37 * fVar37);
            auVar54._4_4_ = fVar31;
            auVar54._0_4_ = fVar31;
            auVar54._8_4_ = fVar31;
            auVar54._12_4_ = fVar31;
            auVar50 = divps(auVar49,auVar54);
          }
          fVar31 = *(float *)(pWVar9 + 0x68) * *(float *)(pWVar9 + 0x68) +
                   *(float *)(pWVar9 + 0x60) * *(float *)(pWVar9 + 0x60) + 0.0 +
                   *(float *)(pWVar9 + 100) * *(float *)(pWVar9 + 100);
          if (local_7c < fVar31) {
            auVar52._0_4_ = SQRT(fVar31);
            auVar52._4_4_ = auVar52._0_4_;
            auVar52._8_4_ = auVar52._0_4_;
            auVar52._12_4_ = auVar52._0_4_;
            auVar50 = divps(*(undefined1 (*) [16])(pWVar9 + 0x60),auVar52);
          }
          *(undefined1 (*) [16])(pWVar9 + 0x60) = auVar50;
          fVar31 = fVar30 * auVar50._0_4_ - auVar50._4_4_ * fVar29;
          fVar30 = fVar34 * auVar50._4_4_ - auVar50._8_4_ * fVar30;
          fVar29 = fVar29 * auVar50._8_4_ - auVar50._0_4_ * fVar34;
          auVar55._4_4_ = fVar29;
          auVar55._0_4_ = fVar30;
          auVar55._8_4_ = fVar31;
          auVar55._12_4_ = fVar31;
          auVar33._0_4_ = SQRT(fVar31 * fVar31 + fVar29 * fVar29 + fVar30 * fVar30 + 0.0);
          auVar33._4_4_ = auVar33._0_4_;
          auVar33._8_4_ = auVar33._0_4_;
          auVar33._12_4_ = auVar33._0_4_;
          auVar50 = divps(auVar55,auVar33);
          *(undefined1 (*) [16])(pWVar9 + 0x70) = auVar50;
        }
LAB_001033c9:
        uVar20 = (ulong)(iVar26 + 1);
        if (*(ulong *)(this + 0x90) <= uVar20) goto LAB_001034b8;
      }
      uVar3 = *(uint *)(pWVar9 + 0x10);
      if (uVar3 == 0xffffffff) {
        pfVar23 = *(float **)(pWVar9 + 0x18);
        if (pfVar23 == (float *)0x0) goto LAB_001033c9;
        goto LAB_00103137;
      }
      lVar10 = *(long *)(param_1 + 8);
      puVar11 = *(ulong **)(lVar10 + 0x128);
      if ((((ulong)(uVar3 & 0x7fffff) < *puVar11) &&
          (uVar12 = *(ulong *)(puVar11[2] + (ulong)(uVar3 & 0x7fffff) * 8), (uVar12 & 1) == 0)) &&
         (uVar3 == *(uint *)(uVar12 + 0x70))) {
        plVar14 = *(long **)(this + 0x120);
        lVar4 = *plVar14;
        *(ulong *)(pWVar9 + 0x18) = uVar12;
        (**(code **)(lVar4 + 0x18))
                  (local_d8,uStack_d0,local_e8,uStack_e0,plVar14,lVar10,this,uVar20,
                   *(long *)(this + 0x50) + 0x70,pWVar9 + 0x18,pWVar9 + 0x14,pWVar9 + 0x30,
                   pWVar9 + 0x50,pWVar9 + 0x20);
        pfVar23 = *(float **)(pWVar9 + 0x18);
        goto LAB_00103768;
      }
      uVar2 = *(undefined4 *)(lVar4 + 0x74);
      uVar20 = (ulong)(iVar26 + 1);
      *(undefined8 *)(pWVar9 + 0x18) = 0;
      *(undefined8 *)(pWVar9 + 0x10) = uVar16;
      *(undefined4 *)(pWVar9 + 0x20) = uVar2;
    } while (uVar20 < *(ulong *)(this + 0x90));
  }
LAB_001034b8:
  if (*(long *)(this + 0x178) != 0) {
    (**(code **)(this + 0x180))(this + 0x168,this,param_1);
  }
  uVar25 = _LC41;
  piVar22 = *(int **)(this + 0xb8);
  fVar38 = *(float *)param_1;
  piVar1 = piVar22 + *(long *)(this + 0xa8) * 3;
  if (piVar1 != piVar22) {
    lVar4 = *(long *)(this + 0xa0);
    do {
      while( true ) {
        lVar10 = *(long *)(lVar4 + (long)*piVar22 * 8);
        lVar13 = *(long *)(lVar4 + (long)piVar22[1] * 8);
        if ((*(long *)(lVar10 + 0x18) != 0) && (*(long *)(lVar13 + 0x18) != 0)) break;
        *(undefined4 *)(lVar13 + 0x84) = 0;
        piVar22 = piVar22 + 3;
        *(undefined4 *)(lVar10 + 0x84) = 0;
        if (piVar1 == piVar22) goto LAB_0010357c;
      }
      piVar21 = piVar22 + 3;
      fVar32 = (*(float *)(lVar13 + 0x20) - *(float *)(lVar10 + 0x20)) * (float)piVar22[2] * fVar38;
      *(uint *)(lVar10 + 0x84) = (uint)fVar32 ^ uVar25;
      *(float *)(lVar13 + 0x84) = fVar32;
      piVar22 = piVar21;
    } while (piVar1 != piVar21);
  }
LAB_0010357c:
  (**(code **)(**(long **)(this + 0xc0) + 0x28))
            (*(long **)(this + 0xc0),*(undefined8 *)(param_1 + 8));
  if (*(long *)(this + 0x198) != 0) {
    (**(code **)(this + 0x1a0))(this + 0x188,this,param_1);
  }
  cVar18 = (**(code **)(**(long **)(this + 0xc0) + 0x18))();
  if (cVar18 != '\0') {
    plVar24 = *(long **)(this + 0xa0);
    plVar14 = plVar24 + *(long *)(this + 0x90);
    for (; plVar14 != plVar24; plVar24 = plVar24 + 1) {
      if (__LC52 < (float)(*(uint *)(*plVar24 + 0x8c) & _LC51)) {
        cVar18 = '\0';
        break;
      }
    }
  }
  if (cVar18 != *(char *)(*(long *)(*(long *)(this + 0x50) + 0x48) + 0x79)) {
    JPH::Body::SetAllowSleeping(SUB81(*(long *)(this + 0x50),0));
  }
  *(int *)(this + 0xd4) = *(int *)(this + 0xd4) + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* non-virtual thunk to JPH::VehicleConstraint::OnStep(JPH::PhysicsStepListenerContext const&) */

void __thiscall
JPH::VehicleConstraint::OnStep(VehicleConstraint *this,PhysicsStepListenerContext *param_1)

{
  OnStep(this + -0x28,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::VehicleConstraint::GetWheelLocalTransform(unsigned int, JPH::Vec3, JPH::Vec3) const */

long JPH::VehicleConstraint::GetWheelLocalTransform
               (undefined8 param_1,float param_2,undefined8 param_3,float param_4,long param_5,
               VehicleConstraint *param_6,uint param_7)

{
  float *pfVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
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
  long lVar16;
  long lVar17;
  Wheel *pWVar18;
  long in_FS_OFFSET;
  float fVar19;
  float fVar20;
  int iVar21;
  float fVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  float local_138;
  float fStack_134;
  float local_128;
  float fStack_124;
  Vec3 local_108 [8];
  float local_100;
  Vec3 local_f8 [8];
  float local_f0;
  Vec3 local_e8 [8];
  float local_e0;
  float local_d8 [16];
  undefined1 local_98 [4];
  float afStack_94 [3];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58 [18];
  long local_10;
  
  local_128 = (float)param_1;
  fStack_124 = (float)((ulong)param_1 >> 0x20);
  local_138 = (float)param_3;
  fStack_134 = (float)((ulong)param_3 >> 0x20);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pWVar18 = *(Wheel **)(*(long *)(param_6 + 0xa0) + (ulong)param_7 * 8);
  lVar16 = *(long *)(pWVar18 + 8);
  local_d8[10] = fStack_124 * local_138 - fStack_134 * local_128;
  local_d8[2] = param_2 * fStack_134 - param_4 * fStack_124;
  local_d8[6] = local_128 * param_4 - local_138 * param_2;
  local_d8[4] = fStack_124;
  local_d8[7] = (float)_UNK_00107a84;
  local_d8[0] = local_128;
  local_d8[3] = (float)__LC10;
  local_d8[0xb] = (float)_UNK_00107a88;
  local_d8[0xc] = 0.0;
  local_d8[0xd] = fStack_134;
  local_d8[0xe] = 0.0;
  local_d8[0xf] = (float)_UNK_00107a8c;
  local_d8[1] = local_138;
  local_d8[5] = fStack_134;
  local_d8[8] = param_2;
  local_d8[9] = param_4;
  GetWheelLocalBasis(param_6,pWVar18,local_108,local_f8,local_e8);
  fVar2 = *(float *)(pWVar18 + 0x20);
  fVar5 = *(float *)(lVar16 + 0x30);
  fVar6 = *(float *)(lVar16 + 0x34);
  fVar7 = *(float *)(lVar16 + 0x38);
  fVar8 = *(float *)(lVar16 + 0x10);
  fVar9 = *(float *)(lVar16 + 0x14);
  fVar10 = *(float *)(lVar16 + 0x18);
  uVar23 = *(uint *)(pWVar18 + 0x90);
  fVar20 = (float)(_LC45 & uVar23 ^ uVar23);
  local_138 = local_e8._0_4_;
  fVar12 = local_138;
  fStack_134 = local_e8._4_4_;
  fVar14 = fStack_134;
  local_138 = local_f8._0_4_;
  fVar13 = local_138;
  fStack_134 = local_f8._4_4_;
  fVar15 = fStack_134;
  local_138 = local_108._0_4_;
  fStack_134 = local_108._4_4_;
  lVar16 = 0;
  local_68 = CONCAT44(_UNK_00107a84,__LC10);
  uStack_60 = CONCAT44(_UNK_00107a8c,_UNK_00107a88);
  iVar21 = (int)(_LC19 * fVar20 + _LC16);
  fVar19 = (float)iVar21;
  fVar20 = ((fVar20 - _LC22 * fVar19) - _LC24 * fVar19) - fVar19 * _LC26;
  fVar22 = fVar20 * fVar20;
  fVar19 = (((_LC28 * fVar22 + _LC30) * fVar22 + _LC32) * fVar22 * fVar22 - _LC16 * fVar22) + _LC9;
  uVar25 = (iVar21 << 0x1f) >> 0x1f;
  fVar20 = fVar20 + fVar22 * ((_LC35 * fVar22 + _LC37) * fVar22 + _LC39) * fVar20;
  uVar24 = (uVar23 ^ iVar21 << 0x1e) & _LC45 ^ ((uint)fVar19 & uVar25 | ~uVar25 & (uint)fVar20);
  _local_98 = ZEXT416(_LC53);
  uVar23 = _LC45 & iVar21 << 0x1e ^ iVar21 << 0x1f ^
           ((uint)fVar20 & uVar25 | ~uVar25 & (uint)fVar19);
  auVar4._4_4_ = uVar24;
  auVar4._0_4_ = uVar23;
  auVar4._8_8_ = 0;
  auVar3._4_4_ = uVar23;
  auVar3._0_4_ = uVar24 ^ _LC41;
  auVar3._8_8_ = 0;
  local_88 = auVar4 << 0x20;
  local_78 = auVar3 << 0x20;
  do {
    fVar19 = *(float *)(local_98 + lVar16);
    fVar20 = *(float *)(local_98 + lVar16 + 4);
    fVar22 = *(float *)(local_98 + lVar16 + 8);
    fVar11 = *(float *)(local_98 + lVar16 + 0xc);
    *(float *)((long)local_58 + lVar16) =
         fVar11 * (fVar2 * fVar5 + fVar8) + fVar19 * fVar12 + fVar20 * fVar13 + fVar22 * local_138;
    *(float *)((long)local_58 + lVar16 + 4) =
         fVar11 * (fVar2 * fVar6 + fVar9) + fVar19 * fVar14 + fVar20 * fVar15 + fVar22 * fStack_134;
    *(float *)((long)local_58 + lVar16 + 8) =
         fVar11 * (fVar2 * fVar7 + fVar10) +
         fVar19 * local_e0 + fVar20 * local_f0 + fVar22 * local_100;
    *(float *)((long)local_58 + lVar16 + 0xc) =
         fVar11 * 1.0 + fVar19 * 0.0 + fVar20 * 0.0 + fVar22 * 0.0;
    lVar16 = lVar16 + 0x10;
  } while (lVar16 != 0x40);
  lVar16 = 0;
  do {
    fVar2 = *(float *)((long)local_d8 + lVar16);
    fVar5 = *(float *)((long)local_d8 + lVar16 + 4);
    fVar6 = *(float *)((long)local_d8 + lVar16 + 8);
    fVar7 = *(float *)((long)local_d8 + lVar16 + 0xc);
    lVar17 = lVar16 + 0x10;
    pfVar1 = (float *)(lVar16 + param_5);
    *pfVar1 = fVar7 * local_58[0xc] +
              fVar2 * local_58[0] + fVar5 * local_58[4] + fVar6 * local_58[8];
    pfVar1[1] = fVar7 * local_58[0xd] +
                fVar2 * local_58[1] + fVar5 * local_58[5] + fVar6 * local_58[9];
    pfVar1[2] = fVar7 * local_58[0xe] +
                fVar2 * local_58[2] + fVar5 * local_58[6] + fVar6 * local_58[10];
    pfVar1[3] = fVar7 * local_58[0xf] +
                fVar2 * local_58[3] + fVar5 * local_58[7] + fVar6 * local_58[0xb];
    lVar16 = lVar17;
  } while (lVar17 != 0x40);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::VehicleConstraint::GetWheelWorldTransform(unsigned int, JPH::Vec3, JPH::Vec3) const */

long JPH::VehicleConstraint::GetWheelWorldTransform(long param_1,long param_2)

{
  float *pfVar1;
  float fVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [12];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [12];
  float local_b8;
  float fStack_b4;
  float local_68 [18];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  GetWheelLocalTransform(local_68);
  puVar3 = *(undefined8 **)(param_2 + 0x50);
  fVar6 = (float)puVar3[2];
  fVar10 = (float)puVar3[3];
  fVar7 = (float)((ulong)puVar3[2] >> 0x20);
  fVar16 = fVar6 + fVar6;
  fVar19 = fVar7 + fVar7;
  fVar13 = (float)((ulong)puVar3[3] >> 0x20);
  fVar2 = *(float *)(puVar3 + 1);
  fVar11 = fVar13 * (fVar10 + fVar10);
  fVar20 = fVar10 * (fVar10 + fVar10);
  fVar21 = fVar10 * fVar19 - fVar16 * fVar13;
  fVar17 = fVar16 * fVar13 + fVar10 * fVar19;
  fVar14 = fVar10 * fVar16 + fVar19 * fVar13;
  fVar18 = fVar10 * fVar16 - fVar19 * fVar13;
  fVar15 = (_LC9 - fVar6 * fVar16) - fVar7 * fVar19;
  fVar10 = fVar7 * fVar16 + fVar11;
  fVar11 = fVar7 * fVar16 - fVar11;
  fVar13 = (_LC9 - fVar7 * fVar19) - fVar20;
  fVar16 = (_LC9 - fVar20) - fVar6 * fVar16;
  local_b8 = (float)*puVar3;
  fVar6 = local_b8;
  fStack_b4 = (float)((ulong)*puVar3 >> 0x20);
  fVar7 = fStack_b4;
  if (*(code **)(*(long *)puVar3[8] + 0x18) == Shape::GetCenterOfMass) {
    auVar12 = SUB1612((undefined1  [16])0x0,0);
    fStack_b4 = 0.0;
    auVar22 = ZEXT812(0);
  }
  else {
    auVar22 = (**(code **)(*(long *)puVar3[8] + 0x18))();
    local_b8 = auVar22._0_4_;
    fStack_b4 = auVar22._4_4_;
    local_b8 = 0.0 - local_b8;
    fStack_b4 = 0.0 - fStack_b4;
    auVar12._8_4_ = 0.0 - auVar22._8_4_;
    auVar22._4_4_ = local_b8;
    auVar22._0_4_ = local_b8;
    auVar22._8_4_ = local_b8;
    auVar12._4_4_ = auVar12._8_4_;
    auVar12._0_4_ = auVar12._8_4_;
  }
  lVar8 = 0;
  do {
    fVar19 = *(float *)((long)local_68 + lVar8);
    fVar20 = *(float *)((long)local_68 + lVar8 + 4);
    fVar4 = *(float *)((long)local_68 + lVar8 + 8);
    fVar5 = *(float *)((long)local_68 + lVar8 + 0xc);
    lVar9 = lVar8 + 0x10;
    pfVar1 = (float *)(lVar8 + param_1);
    *pfVar1 = fVar5 * (auVar22._0_4_ * fVar13 + fStack_b4 * fVar11 + auVar12._0_4_ * fVar14 + fVar6)
              + fVar19 * fVar13 + fVar20 * fVar11 + fVar4 * fVar14;
    pfVar1[1] = fVar5 * (auVar22._4_4_ * fVar10 + fStack_b4 * fVar16 + auVar12._4_4_ * fVar21 +
                        fVar7) + fVar19 * fVar10 + fVar20 * fVar16 + fVar4 * fVar21;
    pfVar1[2] = fVar5 * (auVar22._8_4_ * fVar18 + fStack_b4 * fVar17 + auVar12._8_4_ * fVar15 +
                        fVar2) + fVar19 * fVar18 + fVar20 * fVar17 + fVar4 * fVar15;
    pfVar1[3] = fVar5 * 1.0 + fVar19 * 0.0 + fVar20 * 0.0 + fVar4 * 0.0;
    lVar8 = lVar9;
  } while (lVar9 != 0x40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::VehicleConstraint::CalculateSuspensionForcePoint(JPH::Wheel const&, JPH::Vec3&, JPH::Vec3&)
   const */

void __thiscall
JPH::VehicleConstraint::CalculateSuspensionForcePoint
          (VehicleConstraint *this,Wheel *param_1,Vec3 *param_2,Vec3 *param_3)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [12];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [12];
  float local_78;
  float fStack_74;
  
  lVar1 = *(long *)(param_1 + 8);
  pfVar4 = *(float **)(this + 0x50);
  if (*(char *)(lVar1 + 0x90) == '\0') {
    fVar6 = *(float *)(param_1 + 0x30);
    fVar7 = *(float *)(param_1 + 0x34);
    fVar8 = *(float *)(param_1 + 0x38);
    fVar5 = *(float *)(param_1 + 0x3c);
  }
  else {
    fVar6 = (float)*(undefined8 *)(pfVar4 + 4);
    fVar5 = (float)*(undefined8 *)(pfVar4 + 6);
    fVar7 = (float)((ulong)*(undefined8 *)(pfVar4 + 4) >> 0x20);
    fVar14 = fVar6 + fVar6;
    fVar17 = fVar7 + fVar7;
    fVar11 = (float)((ulong)*(undefined8 *)(pfVar4 + 6) >> 0x20);
    fVar8 = pfVar4[2];
    fVar9 = fVar11 * (fVar5 + fVar5);
    fVar18 = fVar5 * (fVar5 + fVar5);
    fVar19 = fVar5 * fVar17 - fVar14 * fVar11;
    fVar15 = fVar14 * fVar11 + fVar5 * fVar17;
    fVar12 = fVar5 * fVar14 + fVar17 * fVar11;
    fVar16 = fVar5 * fVar14 - fVar17 * fVar11;
    fVar13 = (_LC9 - fVar6 * fVar14) - fVar7 * fVar17;
    fVar5 = fVar7 * fVar14 + fVar9;
    fVar9 = fVar7 * fVar14 - fVar9;
    fVar11 = (_LC9 - fVar7 * fVar17) - fVar18;
    fVar14 = (_LC9 - fVar18) - fVar6 * fVar14;
    local_78 = (float)*(undefined8 *)pfVar4;
    fVar6 = local_78;
    fStack_74 = (float)((ulong)*(undefined8 *)pfVar4 >> 0x20);
    fVar7 = fStack_74;
    if (*(code **)(**(long **)(pfVar4 + 0x10) + 0x18) == Shape::GetCenterOfMass) {
      auVar10 = SUB1612((undefined1  [16])0x0,0);
      fStack_74 = 0.0;
      auVar20 = ZEXT812(0);
    }
    else {
      auVar20 = (**(code **)(**(long **)(pfVar4 + 0x10) + 0x18))();
      pfVar4 = *(float **)(this + 0x50);
      local_78 = auVar20._0_4_;
      fStack_74 = auVar20._4_4_;
      local_78 = 0.0 - local_78;
      fStack_74 = 0.0 - fStack_74;
      auVar10._8_4_ = 0.0 - auVar20._8_4_;
      auVar20._4_4_ = local_78;
      auVar20._0_4_ = local_78;
      auVar20._8_4_ = local_78;
      auVar10._4_4_ = auVar10._8_4_;
      auVar10._0_4_ = auVar10._8_4_;
    }
    fVar17 = *(float *)(lVar1 + 0x20);
    fVar18 = *(float *)(lVar1 + 0x24);
    fVar3 = *(float *)(lVar1 + 0x28);
    fVar6 = fVar17 * fVar11 + fVar18 * fVar9 + fVar3 * fVar12 +
            auVar20._0_4_ * fVar11 + fStack_74 * fVar9 + auVar10._0_4_ * fVar12 + fVar6;
    fVar7 = fVar17 * fVar5 + fVar18 * fVar14 + fVar3 * fVar19 +
            auVar20._4_4_ * fVar5 + fStack_74 * fVar14 + auVar10._4_4_ * fVar19 + fVar7;
    fVar8 = fVar17 * fVar16 + fVar18 * fVar15 + fVar3 * fVar13 +
            auVar20._8_4_ * fVar16 + fStack_74 * fVar15 + auVar10._8_4_ * fVar13 + fVar8;
    fVar5 = fVar17 * 0.0 + fVar18 * 0.0 + fVar3 * 0.0 + 1.0;
  }
  fVar11 = pfVar4[1];
  fVar9 = pfVar4[2];
  fVar12 = pfVar4[3];
  pfVar2 = *(float **)(param_1 + 0x18);
  *(float *)param_2 = fVar6 - *pfVar4;
  *(float *)(param_2 + 4) = fVar7 - fVar11;
  *(float *)(param_2 + 8) = fVar8 - fVar9;
  *(float *)(param_2 + 0xc) = fVar5 - fVar12;
  fVar11 = pfVar2[1];
  fVar9 = pfVar2[2];
  fVar12 = pfVar2[3];
  *(float *)param_3 = fVar6 - *pfVar2;
  *(float *)(param_3 + 4) = fVar7 - fVar11;
  *(float *)(param_3 + 8) = fVar8 - fVar9;
  *(float *)(param_3 + 0xc) = fVar5 - fVar12;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::VehicleConstraint::CalculatePitchRollConstraintProperties(JPH::Mat44 const&) */

void __thiscall
JPH::VehicleConstraint::CalculatePitchRollConstraintProperties
          (VehicleConstraint *this,Mat44 *param_1)

{
  float fVar1;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar7;
  
  if (__LC54 < *(float *)(this + 0xd8)) {
    fVar6 = *(float *)(this + 0x70);
    fVar7 = *(float *)(this + 0x74);
    fVar5 = *(float *)(this + 0x78);
    fVar1 = fVar6 * *(float *)param_1 + fVar7 * *(float *)(param_1 + 0x10) +
            fVar5 * *(float *)(param_1 + 0x20);
    fVar4 = fVar6 * *(float *)(param_1 + 4) + fVar7 * *(float *)(param_1 + 0x14) +
            fVar5 * *(float *)(param_1 + 0x24);
    fVar6 = fVar6 * *(float *)(param_1 + 8) + fVar7 * *(float *)(param_1 + 0x18) +
            fVar5 * *(float *)(param_1 + 0x28);
    fVar7 = fVar6 * *(float *)(this + 0x88) +
            fVar4 * *(float *)(this + 0x84) + *(float *)(this + 0x80) * fVar1 + 0.0;
    *(float *)(this + 0xdc) = fVar7;
    if (fVar7 < *(float *)(this + 0xd8)) {
      fVar7 = fVar4 * *(float *)(this + 0x80) - *(float *)(this + 0x84) * fVar1;
      fVar5 = fVar6 * *(float *)(this + 0x84) - *(float *)(this + 0x88) * fVar4;
      fVar6 = fVar1 * *(float *)(this + 0x88) - *(float *)(this + 0x80) * fVar6;
      auVar3._0_4_ = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + 0.0 + fVar6 * fVar6);
      if (0.0 < auVar3._0_4_) {
        auVar2._4_4_ = fVar6;
        auVar2._0_4_ = fVar5;
        auVar2._8_4_ = fVar7;
        auVar2._12_4_ = fVar7;
        auVar3._4_4_ = auVar3._0_4_;
        auVar3._8_4_ = auVar3._0_4_;
        auVar3._12_4_ = auVar3._0_4_;
        auVar3 = divps(auVar2,auVar3);
        *(undefined1 (*) [16])(this + 0xe0) = auVar3;
      }
      AngleConstraintPart::CalculateConstraintProperties
                (*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8),0,this + 0xf0,
                 *(undefined8 *)(this + 0x50),&Body::sFixedToWorld);
      return;
    }
  }
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::VehicleConstraint::SetupVelocityConstraint(float) */

void JPH::VehicleConstraint::SetupVelocityConstraint(float param_1)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [12];
  code *pcVar3;
  long lVar4;
  Wheel *pWVar5;
  undefined1 auVar6 [12];
  float fVar7;
  VehicleConstraint *in_RDI;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [12];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [12];
  float local_118;
  float fStack_114;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  float local_50;
  undefined4 local_4c;
  long local_40;
  
  pauVar2 = *(undefined1 (**) [12])(in_RDI + 0x50);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar22 = (float)*(undefined8 *)(pauVar2[1] + 4);
  fVar11 = (float)*(undefined8 *)pauVar2[2];
  fVar7 = (float)((ulong)*(undefined8 *)(pauVar2[1] + 4) >> 0x20);
  fVar14 = fVar22 + fVar22;
  fVar19 = fVar7 + fVar7;
  fVar16 = (float)((ulong)*(undefined8 *)pauVar2[2] >> 0x20);
  auVar6 = *pauVar2;
  fVar20 = fVar11 * (fVar11 + fVar11);
  fVar12 = fVar16 * (fVar11 + fVar11);
  fVar23 = fVar11 * fVar19 - fVar14 * fVar16;
  fVar15 = fVar14 * fVar16 + fVar11 * fVar19;
  fVar21 = fVar11 * fVar14 + fVar19 * fVar16;
  fVar17 = (_LC9 - fVar22 * fVar14) - fVar7 * fVar19;
  fVar16 = fVar11 * fVar14 - fVar19 * fVar16;
  fVar11 = fVar7 * fVar14 + fVar12;
  auVar18._0_4_ = fVar7 * fVar14 - fVar12;
  fVar22 = (_LC9 - fVar20) - fVar22 * fVar14;
  auVar18._4_4_ = fVar22;
  auVar18._8_4_ = fVar15;
  auVar18._12_4_ = 0;
  fVar20 = (_LC9 - fVar7 * fVar19) - fVar20;
  pcVar3 = *(code **)(**(long **)(pauVar2[5] + 4) + 0x18);
  if (pcVar3 == Shape::GetCenterOfMass) {
    auVar13 = SUB1612((undefined1  [16])0x0,0);
    fStack_114 = 0.0;
    auVar24 = ZEXT812(0);
  }
  else {
    auVar24 = (*pcVar3)();
    local_118 = auVar24._0_4_;
    fStack_114 = auVar24._4_4_;
    local_118 = 0.0 - local_118;
    fStack_114 = 0.0 - fStack_114;
    auVar13._8_4_ = 0.0 - auVar24._8_4_;
    auVar24._4_4_ = local_118;
    auVar24._0_4_ = local_118;
    auVar24._8_4_ = local_118;
    auVar13._4_4_ = auVar13._8_4_;
    auVar13._0_4_ = auVar13._8_4_;
  }
  local_68._4_4_ = fVar23;
  local_68._0_4_ = fVar21;
  local_68._8_4_ = fVar17;
  local_68._12_4_ = 0;
  local_4c = 0x3f800000;
  puVar10 = *(undefined8 **)(in_RDI + 0xa0);
  uStack_7c = 0;
  puVar1 = puVar10 + *(long *)(in_RDI + 0x90);
  local_58 = CONCAT44(auVar24._4_4_ * fVar11 + fStack_114 * fVar22 + auVar13._4_4_ * fVar23 +
                      auVar6._4_4_,
                      auVar24._0_4_ * fVar20 + fStack_114 * auVar18._0_4_ + auVar13._0_4_ * fVar21 +
                      auVar6._0_4_);
  local_50 = auVar24._8_4_ * fVar16 + fStack_114 * fVar15 + auVar13._8_4_ * fVar17 + auVar6._8_4_;
  fStack_80 = fVar16;
  fStack_84 = fVar11;
  local_88 = fVar20;
  local_78 = auVar18;
  for (; puVar1 != puVar10; puVar10 = puVar10 + 1) {
    while (pWVar5 = (Wheel *)*puVar10, *(long *)(pWVar5 + 0x18) == 0) {
      *(undefined4 *)(pWVar5 + 0xc4) = 0;
      puVar10 = puVar10 + 1;
      *(undefined4 *)(pWVar5 + 0xd0) = 0;
      *(undefined4 *)(pWVar5 + 0x104) = 0;
      *(undefined4 *)(pWVar5 + 0x110) = 0;
      *(undefined4 *)(pWVar5 + 0x144) = 0;
      *(undefined4 *)(pWVar5 + 0x150) = 0;
      *(undefined4 *)(pWVar5 + 0x184) = 0;
      *(undefined4 *)(pWVar5 + 400) = 0;
      if (puVar1 == puVar10) goto LAB_00104786;
    }
    fVar7 = *(float *)(pWVar5 + 0x50);
    fVar11 = *(float *)(pWVar5 + 0x54);
    fVar16 = *(float *)(pWVar5 + 0x58);
    fVar12 = *(float *)(pWVar5 + 0x5c);
    lVar4 = *(long *)(pWVar5 + 8);
    CalculateSuspensionForcePoint(in_RDI,pWVar5,(Vec3 *)&local_a8,(Vec3 *)&local_98);
    fVar22 = *(float *)(lVar4 + 0x70);
    if (fVar22 < *(float *)(lVar4 + 0x74)) {
      uVar8 = *(undefined8 *)(in_RDI + 0x50);
      uVar9 = *(undefined8 *)(pWVar5 + 0x18);
      fVar14 = *(float *)(pWVar5 + 0x20);
      AxisConstraintPart::CalculateConstraintPropertiesWithStiffnessAndDamping
                ((AxisConstraintPart *)(pWVar5 + 0x94),uVar8,uVar9);
      fVar22 = *(float *)(lVar4 + 0x70);
    }
    else {
      *(undefined4 *)(pWVar5 + 0xc4) = 0;
      uVar8 = *(undefined8 *)(in_RDI + 0x50);
      *(undefined4 *)(pWVar5 + 0xd0) = 0;
      fVar14 = *(float *)(pWVar5 + 0x20);
      uVar9 = *(undefined8 *)(pWVar5 + 0x18);
    }
    if (fVar14 < fVar22) {
      AxisConstraintPart::CalculateConstraintProperties
                (local_a8,local_a0,local_98,local_90,CONCAT44(0.0 - fVar11,0.0 - fVar7),
                 CONCAT44(0.0 - fVar12,0.0 - fVar16),pWVar5 + 0xd4,uVar8,uVar9);
    }
    else {
      *(undefined4 *)(pWVar5 + 0x104) = 0;
      *(undefined4 *)(pWVar5 + 0x110) = 0;
    }
    AxisConstraintPart::CalculateConstraintProperties
              (local_a8,local_a0,local_98,local_90,
               CONCAT44(0.0 - *(float *)(pWVar5 + 100),0.0 - *(float *)(pWVar5 + 0x60)),
               CONCAT44(0.0 - *(float *)(pWVar5 + 0x6c),0.0 - *(float *)(pWVar5 + 0x68)),
               pWVar5 + 0x114,uVar8,uVar9);
    AxisConstraintPart::CalculateConstraintProperties
              (local_a8,local_a0,local_98,local_90,
               CONCAT44(0.0 - *(float *)(pWVar5 + 0x74),0.0 - *(float *)(pWVar5 + 0x70)),
               CONCAT44(0.0 - *(float *)(pWVar5 + 0x7c),0.0 - *(float *)(pWVar5 + 0x78)),
               pWVar5 + 0x154,uVar8,uVar9);
  }
LAB_00104786:
  CalculatePitchRollConstraintProperties(in_RDI,(Mat44 *)&local_88);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::VehicleConstraint::SolvePositionConstraint(float, float) */

undefined1 __thiscall
JPH::VehicleConstraint::SolvePositionConstraint(VehicleConstraint *this,float param_1,float param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined1 (*pauVar3) [12];
  code *pcVar4;
  Wheel *pWVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  undefined8 *puVar17;
  long in_FS_OFFSET;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
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
  float fVar34;
  undefined1 auVar35 [12];
  float local_118;
  float fStack_114;
  undefined1 local_108 [4];
  undefined1 auStack_104 [4];
  undefined8 uStack_100;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  long local_40;
  
  pauVar3 = *(undefined1 (**) [12])(this + 0x50);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar29 = (float)*(undefined8 *)(pauVar3[1] + 4);
  fVar26 = (float)*(undefined8 *)pauVar3[2];
  fVar31 = (float)((ulong)*(undefined8 *)(pauVar3[1] + 4) >> 0x20);
  fVar24 = fVar29 + fVar29;
  fVar27 = fVar31 + fVar31;
  fVar32 = (float)((ulong)*(undefined8 *)pauVar3[2] >> 0x20);
  auVar16 = *pauVar3;
  fVar21 = fVar32 * (fVar26 + fVar26);
  fVar30 = fVar26 * (fVar26 + fVar26);
  pcVar4 = *(code **)(**(long **)(pauVar3[5] + 4) + 0x18);
  fVar34 = fVar26 * fVar27 - fVar24 * fVar32;
  fVar25 = fVar24 * fVar32 + fVar26 * fVar27;
  fVar33 = fVar26 * fVar24 + fVar27 * fVar32;
  fVar28 = (_LC9 - fVar29 * fVar24) - fVar31 * fVar27;
  fVar26 = fVar26 * fVar24 - fVar27 * fVar32;
  fVar32 = (_LC9 - fVar31 * fVar27) - fVar30;
  fVar27 = fVar31 * fVar24 - fVar21;
  fVar21 = fVar31 * fVar24 + fVar21;
  fVar29 = (_LC9 - fVar30) - fVar29 * fVar24;
  if (pcVar4 == Shape::GetCenterOfMass) {
    fVar31 = 0.0;
    fStack_114 = 0.0;
    local_118 = 0.0;
  }
  else {
    auVar35._4_4_ = fVar34;
    auVar35._0_4_ = fVar33;
    auVar35._8_4_ = fVar28;
    uStack_100._4_4_ = 0;
    unique0x10000156 = auVar35._1_11_;
    auVar35 = (*pcVar4)();
    local_118 = auVar35._0_4_;
    fStack_114 = auVar35._4_4_;
    local_118 = 0.0 - local_118;
    fStack_114 = 0.0 - fStack_114;
    fVar31 = 0.0 - auVar35._8_4_;
  }
  uStack_6c = 0;
  uStack_5c = 0;
  uStack_7c = 0;
  puVar17 = *(undefined8 **)(this + 0xa0);
  auVar15[0xf] = 0;
  auVar15._0_15_ = stack0xfffffffffffffef9;
  _local_108 = auVar15 << 8;
  puVar1 = puVar17 + *(long *)(this + 0x90);
  local_58 = local_118 * fVar32 + fStack_114 * fVar27 + fVar31 * fVar33 + auVar16._0_4_;
  fStack_54 = local_118 * fVar21 + fStack_114 * fVar29 + fVar31 * fVar34 + auVar16._4_4_;
  fStack_50 = local_118 * fVar26 + fStack_114 * fVar25 + fVar31 * fVar28 + auVar16._8_4_;
  fStack_64 = fVar34;
  fStack_70 = fVar25;
  local_68 = fVar33;
  fStack_60 = fVar28;
  fStack_80 = fVar26;
  local_88 = fVar32;
  local_78 = fVar27;
  fStack_84 = fVar21;
  fStack_74 = fVar29;
  fStack_4c = _LC9;
joined_r0x00104e42:
  do {
    if (puVar1 == puVar17) {
      CalculatePitchRollConstraintProperties(this,(Mat44 *)&local_88);
      if (((*(float *)(this + 0x110) != 0.0) &&
          (*(float *)(this + 0xdc) - *(float *)(this + 0xd8) != 0.0)) &&
         (*(float *)(this + 0x118) == 0.0)) {
        fVar29 = (float)((uint)*(float *)(this + 0x110) ^ _LC41) * param_2 *
                 (*(float *)(this + 0xdc) - *(float *)(this + 0xd8));
        if (*(char *)(*(long *)(this + 0x50) + 0x78) == '\x02') {
          local_108 = (undefined1  [4])fVar29;
          Body::SubRotationStep
                    (CONCAT44(fVar29 * *(float *)(this + 0xf4),fVar29 * *(float *)(this + 0xf0)),
                     CONCAT44(fVar29 * *(float *)(this + 0xfc),fVar29 * *(float *)(this + 0xf8)));
        }
        if (DAT_00109128 == '\x02') {
          Body::AddRotationStep
                    (CONCAT44(fVar29 * *(float *)(this + 0x104),fVar29 * *(float *)(this + 0x100)),
                     CONCAT44(fVar29 * *(float *)(this + 0x10c),fVar29 * *(float *)(this + 0x108)),
                     &Body::sFixedToWorld);
        }
        local_108[0] = 1;
      }
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return local_108[0];
    }
    pWVar5 = (Wheel *)*puVar17;
    if (*(long *)(pWVar5 + 0x18) != 0) {
      lVar6 = *(long *)(pWVar5 + 8);
      fVar24 = *(float *)(lVar6 + 0x10);
      fVar30 = *(float *)(lVar6 + 0x14);
      fVar19 = *(float *)(lVar6 + 0x18);
      fVar20 = *(float *)(lVar6 + 0x30);
      fVar18 = *(float *)(lVar6 + 0x34);
      fVar12 = *(float *)(lVar6 + 0x38);
      fVar31 = *(float *)(lVar6 + 0x70);
      fVar31 = (*(float *)(pWVar5 + 0x58) *
                (fVar24 * fVar26 + fVar30 * fVar25 + fVar19 * fVar28 + fStack_50 +
                (fVar12 * fVar28 + fVar20 * fVar26 + fVar18 * fVar25) * fVar31) +
               (fVar24 * fVar21 + fVar30 * fVar29 + fVar19 * fVar34 + fStack_54 +
               (fVar12 * fVar34 + fVar20 * fVar21 + fVar18 * fVar29) * fVar31) *
               *(float *)(pWVar5 + 0x54) +
               *(float *)(pWVar5 + 0x50) *
               (fVar24 * fVar32 + fVar30 * fVar27 + fVar19 * fVar33 + local_58 +
               (fVar12 * fVar33 + fVar20 * fVar32 + fVar18 * fVar27) * fVar31) + 0.0) -
               *(float *)(pWVar5 + 0x80);
      if (fVar31 < 0.0) {
        fVar24 = 0.0 - *(float *)(pWVar5 + 0x50);
        fVar30 = 0.0 - *(float *)(pWVar5 + 0x54);
        fVar19 = 0.0 - *(float *)(pWVar5 + 0x58);
        fVar20 = 0.0 - *(float *)(pWVar5 + 0x5c);
        CalculateSuspensionForcePoint(this,pWVar5,(Vec3 *)&local_a8,(Vec3 *)&local_98);
        pfVar7 = *(float **)(pWVar5 + 0x18);
        pfVar8 = *(float **)(this + 0x50);
        AxisConstraintPart::CalculateConstraintProperties
                  (local_a8,local_a0,local_98,local_90,CONCAT44(fVar30,fVar24),
                   CONCAT44(fVar20,fVar19),0,pWVar5 + 0xd4,pfVar8,pfVar7);
        if (*(float *)(pWVar5 + 0x10c) == 0.0) {
          fVar31 = fVar31 * (float)(*(uint *)(pWVar5 + 0x104) ^ _LC41) * param_2;
          if (*(char *)(pfVar8 + 0x1e) == '\x02') {
            bVar2 = *(byte *)(*(long *)(pfVar8 + 0x12) + 0x7a);
            fVar18 = *(float *)(*(long *)(pfVar8 + 0x12) + 0x58) * fVar31;
            auVar23._1_3_ = 0;
            auVar23[0] = bVar2;
            auVar23[4] = bVar2;
            auVar23._5_3_ = 0;
            auVar23[8] = bVar2;
            auVar23._9_3_ = 0;
            auVar23[0xc] = bVar2;
            auVar23._13_3_ = 0;
            auVar14._4_4_ = _UNK_00107a74;
            auVar14._0_4_ = __LC8;
            auVar14._8_4_ = _UNK_00107a78;
            auVar14._12_4_ = _UNK_00107a7c;
            auVar23 = auVar23 & auVar14;
            bVar9 = auVar23._4_4_ == _UNK_00107a74;
            bVar10 = auVar23._8_4_ == _UNK_00107a78;
            bVar11 = auVar23._12_4_ == _UNK_00107a7c;
            *pfVar8 = *pfVar8 - (float)((uint)(fVar18 * fVar24) & -(uint)(auVar23._0_4_ == __LC8));
            pfVar8[1] = pfVar8[1] - (float)((uint)(fVar18 * fVar30) & -(uint)bVar9);
            pfVar8[2] = pfVar8[2] - (float)((uint)(fVar18 * fVar19) & -(uint)bVar10);
            pfVar8[3] = pfVar8[3] - (float)((uint)(fVar18 * fVar20) & -(uint)bVar11);
            _local_108 = CONCAT44(fVar31 * *(float *)(pWVar5 + 0xf0),
                                  fVar31 * *(float *)(pWVar5 + 0xec));
            uStack_100._0_4_ = fVar31 * *(float *)(pWVar5 + 0xf4);
            uStack_100._4_4_ = fVar31 * *(float *)(pWVar5 + 0xf8);
            Body::SubRotationStep(_local_108,uStack_100,pfVar8);
          }
          if (*(char *)(pfVar7 + 0x1e) == '\x02') {
            bVar2 = *(byte *)(*(long *)(pfVar7 + 0x12) + 0x7a);
            auStack_104 = (undefined1  [4])fVar34;
            local_108 = (undefined1  [4])fVar33;
            uStack_100._0_4_ = fVar28;
            uStack_100._4_4_ = 0;
            stack0xfffffffffffffef9 = SUB1211(_local_108,1);
            fVar18 = *(float *)(*(long *)(pfVar7 + 0x12) + 0x58) * fVar31;
            auVar22._1_3_ = 0;
            auVar22[0] = bVar2;
            auVar22[4] = bVar2;
            auVar22._5_3_ = 0;
            auVar22[8] = bVar2;
            auVar22._9_3_ = 0;
            auVar22[0xc] = bVar2;
            auVar22._13_3_ = 0;
            auVar13._4_4_ = _UNK_00107a74;
            auVar13._0_4_ = __LC8;
            auVar13._8_4_ = _UNK_00107a78;
            auVar13._12_4_ = _UNK_00107a7c;
            auVar22 = auVar22 & auVar13;
            bVar9 = auVar22._4_4_ == _UNK_00107a74;
            bVar10 = auVar22._8_4_ == _UNK_00107a78;
            bVar11 = auVar22._12_4_ == _UNK_00107a7c;
            *pfVar7 = (float)((uint)(fVar18 * fVar24) & -(uint)(auVar22._0_4_ == __LC8)) + *pfVar7;
            pfVar7[1] = (float)((uint)(fVar18 * fVar30) & -(uint)bVar9) + pfVar7[1];
            pfVar7[2] = (float)((uint)(fVar18 * fVar19) & -(uint)bVar10) + pfVar7[2];
            pfVar7[3] = (float)((uint)(fVar18 * fVar20) & -(uint)bVar11) + pfVar7[3];
            Body::AddRotationStep
                      (CONCAT44(*(float *)(pWVar5 + 0xfc) * fVar31,
                                *(float *)(pWVar5 + 0xf8) * fVar31),
                       CONCAT44(*(float *)(pWVar5 + 0x104) * fVar31,
                                *(float *)(pWVar5 + 0x100) * fVar31),pfVar7);
          }
          puVar17 = puVar17 + 1;
          local_108[0] = 1;
          goto joined_r0x00104e42;
        }
      }
    }
    puVar17 = puVar17 + 1;
  } while( true );
}



/* JPH::Constraint::GetType() const */

undefined8 JPH::Constraint::GetType(void)

{
  return 0;
}



/* JPH::Constraint::DrawConstraintReferenceFrame(JPH::DebugRenderer*) const */

void JPH::Constraint::DrawConstraintReferenceFrame(DebugRenderer *param_1)

{
  return;
}



/* JPH::Shape::GetCenterOfMass() const */

undefined1  [16] JPH::Shape::GetCenterOfMass(void)

{
  return ZEXT816(0);
}



/* JPH::VehicleConstraint::GetSubType() const */

undefined8 JPH::VehicleConstraint::GetSubType(void)

{
  return 9;
}



/* JPH::VehicleConstraint::IsActive() const */

VehicleConstraint __thiscall JPH::VehicleConstraint::IsActive(VehicleConstraint *this)

{
  VehicleConstraint VVar1;
  
  VVar1 = this[200];
  if (VVar1 != (VehicleConstraint)0x0) {
    VVar1 = this[0x1a];
  }
  return VVar1;
}



/* JPH::VehicleConstraint::NotifyShapeChanged(JPH::BodyID const&, JPH::Vec3) */

void JPH::VehicleConstraint::NotifyShapeChanged(void)

{
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* std::_Function_handler<void (unsigned int, float&, float&, JPH::Body const&, JPH::SubShapeID
   const&), JPH::VehicleConstraint::mCombineFriction::{lambda(unsigned int, float&, float&,
   JPH::Body const&, JPH::SubShapeID const&)#1}>::_M_manager(std::_Any_data&,
   std::_Function_handler<void (unsigned int, float&, float&, JPH::Body const&, JPH::SubShapeID
   const&), JPH::VehicleConstraint::mCombineFriction::{lambda(unsigned int, float&, float&,
   JPH::Body const&, JPH::SubShapeID const&)#1}> const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(unsigned_int,float&,float&,JPH::Body_const&,JPH::SubShapeID_const&),JPH::VehicleConstraint::mCombineFriction::{lambda(unsigned_int,float&,float&,JPH::Body_const&,JPH::SubShapeID_const&)#1}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &JPH::VehicleConstraint::mCombineFriction::
                {lambda(unsigned_int,float&,float&,JPH::Body_const&,JPH::SubShapeID_const&)#1}::
                typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (unsigned int, float&, float&, JPH::Body const&, JPH::SubShapeID
   const&), JPH::VehicleConstraint::mCombineFriction::{lambda(unsigned int, float&, float&,
   JPH::Body const&, JPH::SubShapeID const&)#1}>::_M_invoke(std::_Any_data const&, unsigned int&&,
   float&, float&, JPH::Body const&, JPH::SubShapeID const&) */

void std::
     _Function_handler<void(unsigned_int,float&,float&,JPH::Body_const&,JPH::SubShapeID_const&),JPH::VehicleConstraint::mCombineFriction::{lambda(unsigned_int,float&,float&,JPH::Body_const&,JPH::SubShapeID_const&)#1}>
     ::_M_invoke(_Any_data *param_1,uint *param_2,float *param_3,float *param_4,Body *param_5,
                SubShapeID *param_6)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_5 + 0x68);
  fVar1 = *param_3 * fVar2;
  if (fVar1 < 0.0) {
    fVar1 = sqrtf(fVar1);
  }
  else {
    fVar1 = SQRT(fVar1);
  }
  *param_3 = fVar1;
  fVar2 = fVar2 * *param_4;
  if (fVar2 < 0.0) {
    fVar2 = sqrtf(fVar2);
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  *param_4 = fVar2;
  return;
}



/* JPH::Wheel::~Wheel() */

void __thiscall JPH::Wheel::~Wheel(Wheel *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__Wheel_00107918;
  plVar2 = *(long **)(this + 8);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x001054a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  return;
}



/* JPH::Wheel::~Wheel() */

void __thiscall JPH::Wheel::~Wheel(Wheel *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__Wheel_00107918;
  plVar2 = *(long **)(this + 8);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x001054ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)(this);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001054d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::VehicleConstraintSettings::~VehicleConstraintSettings() */

void __thiscall
JPH::VehicleConstraintSettings::~VehicleConstraintSettings(VehicleConstraintSettings *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  *(undefined ***)this = &PTR_GetRTTI_00107938;
  plVar4 = *(long **)(this + 0x88);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  if (*(long *)(this + 0x80) != 0) {
    *(undefined8 *)(this + 0x70) = 0;
    (*Free)();
  }
  plVar4 = *(long **)(this + 0x68);
  if (plVar4 == (long *)0x0) {
    return;
  }
  if ((*(long *)(this + 0x58) != 0) && (plVar1 = plVar4 + *(long *)(this + 0x58), plVar4 < plVar1))
  {
    do {
      while (plVar3 = (long *)*plVar4, plVar3 == (long *)0x0) {
LAB_00105558:
        plVar4 = plVar4 + 1;
        if (plVar1 <= plVar4) goto LAB_00105580;
      }
      LOCK();
      plVar2 = plVar3 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 != 0) goto LAB_00105558;
      plVar4 = plVar4 + 1;
      (**(code **)(*plVar3 + 0x18))();
    } while (plVar4 < plVar1);
LAB_00105580:
    plVar4 = *(long **)(this + 0x68);
  }
  *(undefined8 *)(this + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00105593. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(plVar4);
  return;
}



/* JPH::VehicleConstraintSettings::~VehicleConstraintSettings() */

void __thiscall
JPH::VehicleConstraintSettings::~VehicleConstraintSettings(VehicleConstraintSettings *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  *(undefined ***)this = &PTR_GetRTTI_00107938;
  plVar4 = *(long **)(this + 0x88);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  if (*(long *)(this + 0x80) != 0) {
    *(undefined8 *)(this + 0x70) = 0;
    (*Free)();
  }
  plVar4 = *(long **)(this + 0x68);
  if (plVar4 != (long *)0x0) {
    if ((*(long *)(this + 0x58) != 0) && (plVar1 = plVar4 + *(long *)(this + 0x58), plVar4 < plVar1)
       ) {
      do {
        while (plVar3 = (long *)*plVar4, plVar3 == (long *)0x0) {
LAB_00105628:
          plVar4 = plVar4 + 1;
          if (plVar1 <= plVar4) goto LAB_00105650;
        }
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 != 0) goto LAB_00105628;
        plVar4 = plVar4 + 1;
        (**(code **)(*plVar3 + 0x18))();
      } while (plVar4 < plVar1);
LAB_00105650:
      plVar4 = *(long **)(this + 0x68);
    }
    *(undefined8 *)(this + 0x58) = 0;
    (*Free)(plVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0010566c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Body::AddRotationStep(JPH::Vec3) */

void JPH::Body::AddRotationStep(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar5 [16];
  float fVar11;
  undefined1 auVar12 [16];
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  uint uVar27;
  
  fVar2 = (float)param_2;
  fVar4 = (float)((ulong)param_1 >> 0x20);
  auVar5._0_4_ = SQRT(fVar2 * fVar2 + (float)param_1 * (float)param_1 + 0.0 + fVar4 * fVar4);
  if (auVar5._0_4_ <= __LC15) {
    return;
  }
  fVar11 = _LC16 * auVar5._0_4_;
  auVar5._4_4_ = auVar5._0_4_;
  auVar5._8_4_ = auVar5._0_4_;
  auVar5._12_4_ = auVar5._0_4_;
  fVar17 = (float)(_LC45 & (uint)fVar11 ^ (uint)fVar11);
  fVar18 = (float)(_UNK_00107aa4 & (uint)fVar11 ^ (uint)fVar11);
  fVar19 = (float)(_UNK_00107aa8 & (uint)fVar11 ^ (uint)fVar11);
  fVar20 = (float)(_UNK_00107aac & (uint)fVar11 ^ (uint)fVar11);
  iVar13 = (int)(_LC19 * fVar17 + _LC16);
  iVar14 = (int)(_LC19 * fVar18 + _LC16);
  iVar15 = (int)(_LC19 * fVar19 + _LC16);
  iVar16 = (int)(_LC19 * fVar20 + _LC16);
  fVar4 = (float)iVar13;
  fVar6 = (float)iVar14;
  fVar7 = (float)iVar15;
  fVar9 = (float)iVar16;
  fVar17 = ((fVar17 - _LC22 * fVar4) - _LC24 * fVar4) - fVar4 * _LC26;
  fVar18 = ((fVar18 - _LC22 * fVar6) - _LC24 * fVar6) - fVar6 * _LC26;
  fVar7 = ((fVar19 - _LC22 * fVar7) - _LC24 * fVar7) - fVar7 * _LC26;
  fVar9 = ((fVar20 - _LC22 * fVar9) - _LC24 * fVar9) - fVar9 * _LC26;
  fVar4 = fVar17 * fVar17;
  fVar22 = fVar18 * fVar18;
  fVar24 = fVar7 * fVar7;
  fVar26 = fVar9 * fVar9;
  fVar19 = (((_LC28 * fVar4 + _LC30) * fVar4 + _LC32) * fVar4 * fVar4 - _LC16 * fVar4) + _LC9;
  fVar20 = (((_LC28 * fVar22 + _LC30) * fVar22 + _LC32) * fVar22 * fVar22 - _LC16 * fVar22) + _LC9;
  fVar8 = (((_LC28 * fVar24 + _LC30) * fVar24 + _LC32) * fVar24 * fVar24 - _LC16 * fVar24) + _LC9;
  fVar10 = (((_LC28 * fVar26 + _LC30) * fVar26 + _LC32) * fVar26 * fVar26 - _LC16 * fVar26) + _LC9;
  uVar21 = (iVar13 << 0x1f) >> 0x1f;
  uVar23 = (iVar14 << 0x1f) >> 0x1f;
  uVar25 = (iVar15 << 0x1f) >> 0x1f;
  uVar27 = (iVar16 << 0x1f) >> 0x1f;
  fVar6 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar17 = ((_LC35 * fVar4 + _LC37) * fVar4 + _LC39) * fVar4 * fVar17 + fVar17;
  fVar18 = ((_LC35 * fVar22 + _LC37) * fVar22 + _LC39) * fVar22 * fVar18 + fVar18;
  fVar7 = ((_LC35 * fVar24 + _LC37) * fVar24 + _LC39) * fVar24 * fVar7 + fVar7;
  fVar9 = ((_LC35 * fVar26 + _LC37) * fVar26 + _LC39) * fVar26 * fVar9 + fVar9;
  auVar1._8_4_ = fVar2;
  auVar1._0_8_ = param_1;
  auVar1._12_4_ = (int)((ulong)param_2 >> 0x20);
  fVar22 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  auVar5 = divps(auVar1,auVar5);
  fVar4 = (float)*(undefined8 *)(param_3 + 0x18);
  fVar2 = (float)(__LC40 & (((uint)fVar17 & uVar21 | ~uVar21 & (uint)fVar19) ^
                           _LC45 & iVar13 << 0x1e ^ iVar13 << 0x1f) |
                 ~__LC40 & (uint)(auVar5._0_4_ *
                                 (float)(((uint)fVar11 ^ iVar13 << 0x1e) & _LC45 ^
                                        ((uint)fVar19 & uVar21 | ~uVar21 & (uint)fVar17))));
  fVar18 = (float)(_UNK_00107ab4 &
                   (((uint)fVar18 & uVar23 | ~uVar23 & (uint)fVar20) ^
                   _UNK_00107aa4 & iVar14 << 0x1e ^ iVar14 << 0x1f) |
                  ~_UNK_00107ab4 &
                  (uint)(auVar5._4_4_ *
                        (float)(((uint)fVar11 ^ iVar14 << 0x1e) & _UNK_00107aa4 ^
                               ((uint)fVar20 & uVar23 | ~uVar23 & (uint)fVar18))));
  fVar7 = (float)(_UNK_00107ab8 &
                  (((uint)fVar7 & uVar25 | ~uVar25 & (uint)fVar8) ^
                  _UNK_00107aa8 & iVar15 << 0x1e ^ iVar15 << 0x1f) |
                 ~_UNK_00107ab8 &
                 (uint)(auVar5._8_4_ *
                       (float)(((uint)fVar11 ^ iVar15 << 0x1e) & _UNK_00107aa8 ^
                              ((uint)fVar8 & uVar25 | ~uVar25 & (uint)fVar7))));
  fVar9 = (float)(_UNK_00107abc &
                  (((uint)fVar9 & uVar27 | ~uVar27 & (uint)fVar10) ^
                  _UNK_00107aac & iVar16 << 0x1e ^ iVar16 << 0x1f) |
                 ~_UNK_00107abc &
                 (uint)(auVar5._12_4_ *
                       (float)(((uint)fVar11 ^ iVar16 << 0x1e) & _UNK_00107aac ^
                              ((uint)fVar10 & uVar27 | ~uVar27 & (uint)fVar9))));
  fVar8 = (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
  fVar19 = fVar8 * fVar18 + (fVar22 * fVar9 - fVar2 * fVar4) + fVar6 * fVar7;
  fVar20 = ((fVar2 * fVar22 + fVar4 * fVar9) - fVar6 * fVar18) + fVar8 * fVar7;
  fVar17 = (fVar4 * fVar18 + fVar2 * fVar8 + fVar6 * fVar9) - fVar22 * fVar7;
  fVar4 = ((fVar9 * fVar8 - fVar2 * fVar6) - fVar18 * fVar22) - fVar4 * fVar7;
  auVar12._4_4_ = fVar19;
  auVar12._0_4_ = fVar17;
  auVar12._8_4_ = fVar20;
  auVar12._12_4_ = fVar4;
  auVar3._0_4_ = SQRT(fVar17 * fVar17 + fVar19 * fVar19 + fVar20 * fVar20 + fVar4 * fVar4);
  auVar3._4_4_ = auVar3._0_4_;
  auVar3._8_4_ = auVar3._0_4_;
  auVar3._12_4_ = auVar3._0_4_;
  auVar5 = divps(auVar12,auVar3);
  *(undefined1 (*) [16])(param_3 + 0x10) = auVar5;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Body::SubRotationStep(JPH::Vec3) */

void JPH::Body::SubRotationStep(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar5 [16];
  float fVar11;
  undefined1 auVar12 [16];
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  uint uVar27;
  
  fVar2 = (float)param_2;
  fVar4 = (float)((ulong)param_1 >> 0x20);
  auVar5._0_4_ = SQRT(fVar2 * fVar2 + (float)param_1 * (float)param_1 + 0.0 + fVar4 * fVar4);
  if (auVar5._0_4_ <= __LC15) {
    return;
  }
  fVar11 = _LC42 * auVar5._0_4_;
  auVar5._4_4_ = auVar5._0_4_;
  auVar5._8_4_ = auVar5._0_4_;
  auVar5._12_4_ = auVar5._0_4_;
  fVar17 = (float)(_LC45 & (uint)fVar11 ^ (uint)fVar11);
  fVar18 = (float)(_UNK_00107aa4 & (uint)fVar11 ^ (uint)fVar11);
  fVar19 = (float)(_UNK_00107aa8 & (uint)fVar11 ^ (uint)fVar11);
  fVar20 = (float)(_UNK_00107aac & (uint)fVar11 ^ (uint)fVar11);
  iVar13 = (int)(_LC19 * fVar17 + _LC16);
  iVar14 = (int)(_LC19 * fVar18 + _LC16);
  iVar15 = (int)(_LC19 * fVar19 + _LC16);
  iVar16 = (int)(_LC19 * fVar20 + _LC16);
  fVar4 = (float)iVar13;
  fVar6 = (float)iVar14;
  fVar7 = (float)iVar15;
  fVar9 = (float)iVar16;
  fVar17 = ((fVar17 - _LC22 * fVar4) - _LC24 * fVar4) - fVar4 * _LC26;
  fVar18 = ((fVar18 - _LC22 * fVar6) - _LC24 * fVar6) - fVar6 * _LC26;
  fVar7 = ((fVar19 - _LC22 * fVar7) - _LC24 * fVar7) - fVar7 * _LC26;
  fVar9 = ((fVar20 - _LC22 * fVar9) - _LC24 * fVar9) - fVar9 * _LC26;
  fVar4 = fVar17 * fVar17;
  fVar22 = fVar18 * fVar18;
  fVar24 = fVar7 * fVar7;
  fVar26 = fVar9 * fVar9;
  fVar19 = (((_LC28 * fVar4 + _LC30) * fVar4 + _LC32) * fVar4 * fVar4 - _LC16 * fVar4) + _LC9;
  fVar20 = (((_LC28 * fVar22 + _LC30) * fVar22 + _LC32) * fVar22 * fVar22 - _LC16 * fVar22) + _LC9;
  fVar8 = (((_LC28 * fVar24 + _LC30) * fVar24 + _LC32) * fVar24 * fVar24 - _LC16 * fVar24) + _LC9;
  fVar10 = (((_LC28 * fVar26 + _LC30) * fVar26 + _LC32) * fVar26 * fVar26 - _LC16 * fVar26) + _LC9;
  uVar21 = (iVar13 << 0x1f) >> 0x1f;
  uVar23 = (iVar14 << 0x1f) >> 0x1f;
  uVar25 = (iVar15 << 0x1f) >> 0x1f;
  uVar27 = (iVar16 << 0x1f) >> 0x1f;
  fVar6 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar17 = ((_LC35 * fVar4 + _LC37) * fVar4 + _LC39) * fVar4 * fVar17 + fVar17;
  fVar18 = ((_LC35 * fVar22 + _LC37) * fVar22 + _LC39) * fVar22 * fVar18 + fVar18;
  fVar7 = ((_LC35 * fVar24 + _LC37) * fVar24 + _LC39) * fVar24 * fVar7 + fVar7;
  fVar9 = ((_LC35 * fVar26 + _LC37) * fVar26 + _LC39) * fVar26 * fVar9 + fVar9;
  auVar1._8_4_ = fVar2;
  auVar1._0_8_ = param_1;
  auVar1._12_4_ = (int)((ulong)param_2 >> 0x20);
  fVar22 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  auVar5 = divps(auVar1,auVar5);
  fVar4 = (float)*(undefined8 *)(param_3 + 0x18);
  fVar2 = (float)(__LC40 & (((uint)fVar17 & uVar21 | ~uVar21 & (uint)fVar19) ^
                           _LC45 & iVar13 << 0x1e ^ iVar13 << 0x1f) |
                 ~__LC40 & (uint)(auVar5._0_4_ *
                                 (float)(((uint)fVar11 ^ iVar13 << 0x1e) & _LC45 ^
                                        ((uint)fVar19 & uVar21 | ~uVar21 & (uint)fVar17))));
  fVar18 = (float)(_UNK_00107ab4 &
                   (((uint)fVar18 & uVar23 | ~uVar23 & (uint)fVar20) ^
                   _UNK_00107aa4 & iVar14 << 0x1e ^ iVar14 << 0x1f) |
                  ~_UNK_00107ab4 &
                  (uint)(auVar5._4_4_ *
                        (float)(((uint)fVar11 ^ iVar14 << 0x1e) & _UNK_00107aa4 ^
                               ((uint)fVar20 & uVar23 | ~uVar23 & (uint)fVar18))));
  fVar7 = (float)(_UNK_00107ab8 &
                  (((uint)fVar7 & uVar25 | ~uVar25 & (uint)fVar8) ^
                  _UNK_00107aa8 & iVar15 << 0x1e ^ iVar15 << 0x1f) |
                 ~_UNK_00107ab8 &
                 (uint)(auVar5._8_4_ *
                       (float)(((uint)fVar11 ^ iVar15 << 0x1e) & _UNK_00107aa8 ^
                              ((uint)fVar8 & uVar25 | ~uVar25 & (uint)fVar7))));
  fVar9 = (float)(_UNK_00107abc &
                  (((uint)fVar9 & uVar27 | ~uVar27 & (uint)fVar10) ^
                  _UNK_00107aac & iVar16 << 0x1e ^ iVar16 << 0x1f) |
                 ~_UNK_00107abc &
                 (uint)(auVar5._12_4_ *
                       (float)(((uint)fVar11 ^ iVar16 << 0x1e) & _UNK_00107aac ^
                              ((uint)fVar10 & uVar27 | ~uVar27 & (uint)fVar9))));
  fVar8 = (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
  fVar19 = fVar8 * fVar18 + (fVar22 * fVar9 - fVar2 * fVar4) + fVar6 * fVar7;
  fVar20 = ((fVar2 * fVar22 + fVar4 * fVar9) - fVar6 * fVar18) + fVar8 * fVar7;
  fVar17 = (fVar4 * fVar18 + fVar2 * fVar8 + fVar6 * fVar9) - fVar22 * fVar7;
  fVar4 = ((fVar9 * fVar8 - fVar2 * fVar6) - fVar18 * fVar22) - fVar4 * fVar7;
  auVar12._4_4_ = fVar19;
  auVar12._0_4_ = fVar17;
  auVar12._8_4_ = fVar20;
  auVar12._12_4_ = fVar4;
  auVar3._0_4_ = SQRT(fVar17 * fVar17 + fVar19 * fVar19 + fVar20 * fVar20 + fVar4 * fVar4);
  auVar3._4_4_ = auVar3._0_4_;
  auVar3._8_4_ = auVar3._0_4_;
  auVar3._12_4_ = auVar3._0_4_;
  auVar5 = divps(auVar12,auVar3);
  *(undefined1 (*) [16])(param_3 + 0x10) = auVar5;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::AngleConstraintPart::CalculateConstraintProperties(JPH::Body const&, JPH::Body const&,
   JPH::Vec3, float) */

void JPH::AngleConstraintPart::CalculateConstraintProperties
               (undefined8 param_1_00,float param_2_00,undefined4 param_3,undefined1 (*param_1) [16]
               ,long param_2,long param_6)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
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
  uint uVar23;
  uint uVar26;
  uint uVar27;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float local_28;
  float fStack_24;
  
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar11 = 0.0;
  local_28 = (float)param_1_00;
  fStack_24 = (float)((ulong)param_1_00 >> 0x20);
  if (*(char *)(param_2 + 0x78) == '\x02') {
    lVar3 = *(long *)(param_2 + 0x48);
    fVar7 = (float)*(undefined8 *)(param_2 + 0x18);
    fVar11 = (float)*(undefined8 *)(param_2 + 0x10);
    fVar9 = (float)*(undefined8 *)(lVar3 + 0x38);
    fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
    fVar12 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    bVar2 = *(byte *)(lVar3 + 0x7a);
    fVar13 = (float)*(undefined8 *)(lVar3 + 0x30);
    fVar10 = (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
    fVar15 = (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
    cVar1 = *(char *)(param_6 + 0x78);
    auVar24._1_3_ = 0;
    auVar24[0] = bVar2;
    auVar24[4] = bVar2;
    auVar24._5_3_ = 0;
    auVar24[8] = bVar2;
    auVar24._9_3_ = 0;
    auVar24[0xc] = bVar2;
    auVar24._13_3_ = 0;
    auVar6._4_4_ = _UNK_00107a94;
    auVar6._0_4_ = __LC12;
    auVar6._8_4_ = _UNK_00107a98;
    auVar6._12_4_ = _UNK_00107a9c;
    auVar24 = auVar24 & auVar6;
    uVar23 = -(uint)(auVar24._0_4_ == __LC12);
    uVar26 = -(uint)(auVar24._4_4_ == _UNK_00107a94);
    uVar27 = -(uint)(auVar24._8_4_ == _UNK_00107a98);
    bVar4 = auVar24._12_4_ == _UNK_00107a9c;
    fVar14 = (float)((uint)local_28 & uVar23);
    fVar16 = (float)((uint)fStack_24 & uVar26);
    fVar17 = (float)((uint)param_2_00 & uVar27);
    fVar22 = (fVar8 * fVar13 + fVar11 * fVar10 + fVar12 * fVar9) - fVar7 * fVar15;
    fVar20 = (fVar8 * fVar15 - fVar11 * fVar9) + fVar12 * fVar10 + fVar7 * fVar13;
    fVar21 = fVar20 + fVar20;
    fVar33 = fVar7 * fVar10 + ((fVar8 * fVar9 + fVar11 * fVar15) - fVar12 * fVar13);
    fVar18 = fVar22 + fVar22;
    fVar19 = fVar33 * (fVar33 + fVar33);
    fVar7 = ((fVar8 * fVar10 - fVar11 * fVar13) - fVar12 * fVar15) - fVar7 * fVar9;
    fVar8 = fVar7 * (fVar33 + fVar33);
    fVar11 = (_LC9 - fVar20 * fVar21) - fVar19;
    fVar15 = fVar33 * fVar21 + fVar18 * fVar7;
    fVar12 = fVar33 * fVar21 - fVar18 * fVar7;
    fVar19 = (_LC9 - fVar19) - fVar22 * fVar18;
    fVar28 = fVar20 * fVar18 - fVar8;
    fVar8 = fVar8 + fVar20 * fVar18;
    fVar22 = (_LC9 - fVar22 * fVar18) - fVar20 * fVar21;
    fVar20 = fVar33 * fVar18 - fVar21 * fVar7;
    fVar7 = fVar33 * fVar18 + fVar21 * fVar7;
    fVar9 = (fVar14 * fVar11 + fVar16 * fVar8 + fVar17 * fVar20) * *(float *)(lVar3 + 0x20);
    fVar10 = (fVar14 * fVar28 + fVar16 * fVar19 + fVar17 * fVar15) * *(float *)(lVar3 + 0x24);
    fVar13 = (fVar14 * fVar7 + fVar16 * fVar12 + fVar17 * fVar22) * *(float *)(lVar3 + 0x28);
    fVar7 = (float)((uint)(fVar9 * fVar11 + fVar10 * fVar28 + fVar13 * fVar7) & uVar23);
    fVar8 = (float)((uint)(fVar9 * fVar8 + fVar10 * fVar19 + fVar13 * fVar12) & uVar26);
    fVar11 = (float)((uint)(fVar9 * fVar20 + fVar10 * fVar15 + fVar13 * fVar22) & uVar27);
    *(float *)*param_1 = fVar7;
    *(float *)(*param_1 + 4) = fVar8;
    *(float *)(*param_1 + 8) = fVar11;
    *(uint *)(*param_1 + 0xc) = (uint)(fVar9 * 0.0 + fVar10 * 0.0 + fVar13 * 0.0) & -(uint)bVar4;
  }
  else {
    cVar1 = *(char *)(param_6 + 0x78);
    *param_1 = (undefined1  [16])0x0;
  }
  uVar23 = 0;
  fVar13 = 0.0;
  fVar10 = 0.0;
  fVar9 = 0.0;
  if (cVar1 == '\x02') {
    lVar3 = *(long *)(param_6 + 0x48);
    bVar2 = *(byte *)(lVar3 + 0x7a);
    fVar13 = (float)*(undefined8 *)(param_6 + 0x10);
    fVar9 = (float)*(undefined8 *)(param_6 + 0x18);
    auVar25._1_3_ = 0;
    auVar25[0] = bVar2;
    fVar10 = (float)((ulong)*(undefined8 *)(param_6 + 0x18) >> 0x20);
    fVar20 = (float)*(undefined8 *)(lVar3 + 0x30);
    fVar15 = (float)((ulong)*(undefined8 *)(param_6 + 0x10) >> 0x20);
    fVar33 = (float)*(undefined8 *)(lVar3 + 0x38);
    fVar22 = (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
    auVar25[4] = bVar2;
    auVar25._5_3_ = 0;
    auVar25[8] = bVar2;
    auVar25._9_3_ = 0;
    auVar25[0xc] = bVar2;
    auVar25._13_3_ = 0;
    fVar18 = (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
    auVar5._4_4_ = _UNK_00107a94;
    auVar5._0_4_ = __LC12;
    auVar5._8_4_ = _UNK_00107a98;
    auVar5._12_4_ = _UNK_00107a9c;
    auVar25 = auVar25 & auVar5;
    uVar23 = -(uint)(auVar25._0_4_ == __LC12);
    uVar26 = -(uint)(auVar25._4_4_ == _UNK_00107a94);
    uVar27 = -(uint)(auVar25._8_4_ == _UNK_00107a98);
    fVar17 = (float)((uint)local_28 & uVar23);
    fVar19 = (float)((uint)fStack_24 & uVar26);
    fVar21 = (float)((uint)param_2_00 & uVar27);
    fVar16 = (fVar10 * fVar20 + fVar13 * fVar18 + fVar15 * fVar33) - fVar9 * fVar22;
    fVar14 = (fVar10 * fVar22 - fVar13 * fVar33) + fVar15 * fVar18 + fVar9 * fVar20;
    fVar28 = fVar16 + fVar16;
    fVar30 = fVar14 + fVar14;
    fVar12 = ((fVar10 * fVar33 + fVar13 * fVar22) - fVar15 * fVar20) + fVar9 * fVar18;
    fVar9 = ((fVar10 * fVar18 - fVar13 * fVar20) - fVar15 * fVar22) - fVar9 * fVar33;
    fVar33 = fVar12 * (fVar12 + fVar12);
    fVar10 = fVar9 * (fVar12 + fVar12);
    fVar31 = fVar12 * fVar30 - fVar28 * fVar9;
    fVar13 = fVar12 * fVar30 + fVar28 * fVar9;
    fVar29 = (_LC9 - fVar16 * fVar28) - fVar14 * fVar30;
    fVar15 = (_LC9 - fVar14 * fVar30) - fVar33;
    fVar32 = (_LC9 - fVar33) - fVar16 * fVar28;
    fVar16 = fVar12 * fVar28 + fVar30 * fVar9;
    fVar33 = fVar14 * fVar28 - fVar10;
    fVar10 = fVar10 + fVar14 * fVar28;
    fVar12 = fVar12 * fVar28 - fVar30 * fVar9;
    fVar18 = (fVar21 * fVar12 + fVar17 * fVar15 + fVar19 * fVar10) * *(float *)(lVar3 + 0x20);
    fVar20 = (fVar21 * fVar13 + fVar17 * fVar33 + fVar19 * fVar32) * *(float *)(lVar3 + 0x24);
    fVar22 = (fVar21 * fVar29 + fVar17 * fVar16 + fVar19 * fVar31) * *(float *)(lVar3 + 0x28);
    fVar9 = (float)((uint)(fVar18 * fVar15 + fVar20 * fVar33 + fVar16 * fVar22) & uVar23);
    fVar10 = (float)((uint)(fVar18 * fVar10 + fVar20 * fVar32 + fVar31 * fVar22) & uVar26);
    fVar13 = (float)((uint)(fVar18 * fVar12 + fVar20 * fVar13 + fVar29 * fVar22) & uVar27);
    uVar23 = (uint)(fVar18 * 0.0 + fVar20 * 0.0 + fVar22 * 0.0) &
             -(uint)(auVar25._12_4_ == _UNK_00107a9c);
  }
  *(float *)param_1[1] = fVar9;
  *(float *)(param_1[1] + 4) = fVar10;
  *(float *)(param_1[1] + 8) = fVar13;
  *(uint *)(param_1[1] + 0xc) = uVar23;
  fVar15 = _LC9;
  fVar7 = (fVar11 + fVar13) * param_2_00 +
          (fVar8 + fVar10) * fStack_24 + (fVar7 + fVar9) * local_28 + 0.0;
  if (fVar7 == 0.0) {
    *(undefined4 *)(param_1[2] + 0xc) = 0;
    *(undefined4 *)param_1[2] = 0;
    return;
  }
  *(undefined4 *)(param_1[2] + 8) = 0;
  *(undefined4 *)(param_1[2] + 4) = param_3;
  *(float *)param_1[2] = fVar15 / fVar7;
  return;
}



/* JPH::AxisConstraintPart::CalculateConstraintProperties(JPH::Body const&, JPH::Vec3, JPH::Body
   const&, JPH::Vec3, JPH::Vec3, float) */

void JPH::AxisConstraintPart::CalculateConstraintProperties
               (undefined8 param_1_00,float param_2,undefined8 param_3,float param_4,
               undefined8 param_5,float param_6,float param_7,float *param_1,long param_9,
               long param_10)

{
  char cVar1;
  long lVar2;
  long in_FS_OFFSET;
  float fVar3;
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
  float local_138;
  float fStack_134;
  float local_118;
  float fStack_114;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float local_78;
  float fStack_74;
  float fStack_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  long local_30;
  
  fVar7 = _LC9;
  fStack_134 = (float)((ulong)param_5 >> 0x20);
  fVar4 = fStack_134;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *(char *)(param_9 + 0x78);
  local_138 = (float)param_1_00;
  fVar6 = local_138;
  fStack_134 = (float)((ulong)param_1_00 >> 0x20);
  fStack_114 = (float)((ulong)param_3 >> 0x20);
  local_118 = (float)param_3;
  local_138 = (float)param_5;
  if (cVar1 == '\x01') {
    lVar2 = *(long *)(param_10 + 0x48);
    MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_78);
    fVar3 = *(float *)(lVar2 + 0x58);
    fVar5 = local_118 * fVar4 - fStack_114 * local_138;
    fVar9 = fStack_114 * param_6 - param_4 * fVar4;
    fVar11 = param_4 * local_138 - local_118 * param_6;
    *param_1 = param_6 * fStack_134 - param_2 * fVar4;
    param_1[1] = local_138 * param_2 - fVar6 * param_6;
    param_1[2] = fVar4 * fVar6 - fStack_134 * local_138;
    param_1[3] = fVar9;
    *(ulong *)(param_1 + 4) = CONCAT44(fVar5,fVar11);
    fVar6 = local_78 * fVar9 + fVar11 * local_68 + fVar5 * local_58;
    fVar4 = fStack_74 * fVar9 + fVar11 * fStack_64 + fVar5 * fStack_54;
    fVar13 = fStack_70 * fVar9 + fVar11 * fStack_60 + fVar5 * fStack_50;
    *(ulong *)(param_1 + 9) = CONCAT44(fVar4,fVar6);
    param_1[0xb] = fVar13;
    fVar3 = fVar5 * fVar13 + fVar4 * fVar11 + fVar9 * fVar6 + 0.0 + fVar3 + 0.0;
LAB_00106553:
    if (fVar3 != 0.0) {
      param_1[0xe] = 0.0;
      fVar7 = fVar7 / fVar3;
      param_1[0xd] = param_7;
      goto LAB_00106576;
    }
  }
  else {
    if (cVar1 == '\x02') {
      fVar3 = *(float *)(*(long *)(param_9 + 0x48) + 0x58);
      MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_b8);
      cVar1 = *(char *)(param_10 + 0x78);
      if (cVar1 == '\x01') {
        fVar5 = fVar6 * fVar4 - fStack_134 * local_138;
        fVar9 = fStack_134 * param_6 - param_2 * fVar4;
        fVar6 = param_2 * local_138 - fVar6 * param_6;
        fVar11 = local_b8 * fVar9 + fVar6 * local_a8 + fVar5 * local_98;
        fVar13 = fStack_b4 * fVar9 + fVar6 * fStack_a4 + fVar5 * fStack_94;
        fVar8 = fStack_b0 * fVar9 + fVar6 * fStack_a0 + fVar5 * fStack_90;
        *param_1 = fVar9;
        param_1[1] = fVar6;
        param_1[2] = fVar5;
        param_1[3] = param_6 * fStack_114 - param_4 * fVar4;
        param_1[4] = local_138 * param_4 - local_118 * param_6;
        param_1[5] = fVar4 * local_118 - fStack_114 * local_138;
        param_1[6] = fVar11;
        param_1[7] = fVar13;
        param_1[8] = fVar8;
        fVar3 = fVar5 * fVar8 + fVar13 * fVar6 + fVar11 * fVar9 + 0.0 + fVar3;
      }
      else if (cVar1 == '\x02') {
        lVar2 = *(long *)(param_10 + 0x48);
        MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_78);
        fVar5 = *(float *)(lVar2 + 0x58);
        fVar9 = fVar6 * fVar4 - fStack_134 * local_138;
        fVar11 = fStack_134 * param_6 - param_2 * fVar4;
        fVar6 = param_2 * local_138 - fVar6 * param_6;
        fVar10 = fVar4 * local_118 - fStack_114 * local_138;
        fVar12 = param_6 * fStack_114 - param_4 * fVar4;
        fVar14 = local_138 * param_4 - local_118 * param_6;
        fVar15 = local_b8 * fVar11 + fVar6 * local_a8 + fVar9 * local_98;
        fVar16 = fStack_b4 * fVar11 + fVar6 * fStack_a4 + fVar9 * fStack_94;
        fVar17 = fStack_b0 * fVar11 + fVar6 * fStack_a0 + fVar9 * fStack_90;
        fVar4 = local_78 * fVar12 + fVar14 * local_68 + fVar10 * local_58;
        fVar13 = fStack_74 * fVar12 + fVar14 * fStack_64 + fVar10 * fStack_54;
        fVar8 = fStack_70 * fVar12 + fVar14 * fStack_60 + fVar10 * fStack_50;
        *param_1 = fVar11;
        param_1[1] = fVar6;
        param_1[2] = fVar9;
        param_1[3] = fVar12;
        param_1[4] = fVar14;
        param_1[5] = fVar10;
        param_1[6] = fVar15;
        param_1[7] = fVar16;
        param_1[8] = fVar17;
        param_1[9] = fVar4;
        param_1[10] = fVar13;
        param_1[0xb] = fVar8;
        fVar3 = fVar8 * fVar10 + fVar13 * fVar14 + fVar4 * fVar12 + 0.0 + fVar5 +
                fVar17 * fVar9 + fVar16 * fVar6 + fVar15 * fVar11 + 0.0 + fVar3;
      }
      else {
        if (cVar1 != '\0') goto LAB_001067a0;
        fVar5 = fVar4 * fVar6 - fStack_134 * local_138;
        fVar4 = param_6 * fStack_134 - param_2 * fVar4;
        fVar6 = local_138 * param_2 - fVar6 * param_6;
        param_1[2] = fVar5;
        *(ulong *)param_1 = CONCAT44(fVar6,fVar4);
        fVar9 = local_b8 * fVar4 + fVar6 * local_a8 + fVar5 * local_98;
        fVar11 = fStack_b4 * fVar4 + fVar6 * fStack_a4 + fVar5 * fStack_94;
        fVar13 = fStack_b0 * fVar4 + fVar6 * fStack_a0 + fVar5 * fStack_90;
        *(ulong *)(param_1 + 6) = CONCAT44(fVar11,fVar9);
        param_1[8] = fVar13;
        fVar3 = fVar3 + fVar5 * fVar13 + fVar6 * fVar11 + fVar4 * fVar9 + 0.0;
      }
      goto LAB_00106553;
    }
    if (cVar1 == '\0') {
      lVar2 = *(long *)(param_10 + 0x48);
      MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_78);
      fVar6 = *(float *)(lVar2 + 0x58);
      fVar3 = fVar4 * local_118 - fStack_114 * local_138;
      fVar4 = param_6 * fStack_114 - param_4 * fVar4;
      fVar5 = local_138 * param_4 - local_118 * param_6;
      param_1[5] = fVar3;
      *(ulong *)(param_1 + 3) = CONCAT44(fVar5,fVar4);
      fVar9 = local_78 * fVar4 + fVar5 * local_68 + fVar3 * local_58;
      fVar11 = fStack_74 * fVar4 + fVar5 * fStack_64 + fVar3 * fStack_54;
      fVar13 = fStack_70 * fVar4 + fVar5 * fStack_60 + fVar3 * fStack_50;
      *(ulong *)(param_1 + 9) = CONCAT44(fVar11,fVar9);
      param_1[0xb] = fVar13;
      fVar3 = fVar3 * fVar13 + fVar11 * fVar5 + fVar9 * fVar4 + 0.0 + fVar6 + 0.0;
      goto LAB_00106553;
    }
  }
LAB_001067a0:
  param_1[0xf] = 0.0;
  fVar7 = 0.0;
LAB_00106576:
  param_1[0xc] = fVar7;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::AxisConstraintPart::CalculateConstraintPropertiesWithStiffnessAndDamping(float, JPH::Body
   const&, JPH::Vec3, JPH::Body const&, JPH::Vec3, JPH::Vec3, float, float, float, float) */

void __thiscall
JPH::AxisConstraintPart::CalculateConstraintPropertiesWithStiffnessAndDamping
          (float param_1,undefined8 param_2_00,float param_3,undefined8 param_4,float param_5,
          undefined8 param_6,float param_7,float param_8,AxisConstraintPart *this,long param_2,
          long param_11)

{
  char cVar1;
  long lVar2;
  float fVar3;
  long in_FS_OFFSET;
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
  float in_stack_00000008;
  float in_stack_00000010;
  float in_stack_00000018;
  float local_128;
  float fStack_124;
  float local_118;
  float fStack_114;
  float local_108;
  float fStack_104;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float local_68;
  float fStack_64;
  float fStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  long local_20;
  
  fVar3 = _LC9;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *(char *)(param_2 + 0x78);
  fStack_124 = (float)((ulong)param_6 >> 0x20);
  local_118 = (float)param_2_00;
  fStack_114 = (float)((ulong)param_2_00 >> 0x20);
  fStack_104 = (float)((ulong)param_4 >> 0x20);
  local_128 = (float)param_6;
  local_108 = (float)param_4;
  if (cVar1 == '\x01') {
    lVar2 = *(long *)(param_11 + 0x48);
    MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_68);
    fVar5 = *(float *)(lVar2 + 0x58);
    fVar4 = local_108 * fStack_124 - fStack_104 * local_128;
    fVar6 = fStack_104 * param_7 - param_5 * fStack_124;
    fVar7 = param_5 * local_128 - local_108 * param_7;
    *(float *)this = param_7 * fStack_114 - param_3 * fStack_124;
    *(float *)(this + 4) = local_128 * param_3 - local_118 * param_7;
    *(float *)(this + 8) = fStack_124 * local_118 - fStack_114 * local_128;
    *(float *)(this + 0xc) = fVar6;
    *(ulong *)(this + 0x10) = CONCAT44(fVar4,fVar7);
    fVar9 = local_68 * fVar6 + fVar7 * local_58 + fVar4 * local_48;
    fVar11 = fStack_64 * fVar6 + fVar7 * fStack_54 + fVar4 * fStack_44;
    fVar13 = fStack_60 * fVar6 + fVar7 * fStack_50 + fVar4 * fStack_40;
    *(ulong *)(this + 0x24) = CONCAT44(fVar11,fVar9);
    *(float *)(this + 0x2c) = fVar13;
    fVar5 = fVar4 * fVar13 + fVar11 * fVar7 + fVar6 * fVar9 + 0.0 + fVar5 + 0.0;
LAB_00106f2a:
    if (fVar5 != 0.0) {
      if (in_stack_00000010 <= 0.0) {
        *(undefined4 *)(this + 0x38) = 0;
        *(ulong *)(this + 0x30) = CONCAT44(param_8,fVar3 / fVar5);
      }
      else {
        fVar4 = fVar3 / ((in_stack_00000018 + param_1 * in_stack_00000010) * param_1);
        *(float *)(this + 0x38) = fVar4;
        *(ulong *)(this + 0x30) =
             CONCAT44(param_1 * in_stack_00000010 * fVar4 * in_stack_00000008 + param_8,
                      fVar3 / (fVar5 + fVar4));
      }
      goto LAB_00106f4b;
    }
  }
  else {
    if (cVar1 == '\x02') {
      fVar5 = *(float *)(*(long *)(param_2 + 0x48) + 0x58);
      MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_a8);
      cVar1 = *(char *)(param_11 + 0x78);
      if (cVar1 == '\x01') {
        fVar4 = local_118 * fStack_124 - fStack_114 * local_128;
        fVar6 = fStack_114 * param_7 - param_3 * fStack_124;
        fVar7 = param_3 * local_128 - local_118 * param_7;
        fVar9 = local_a8 * fVar6 + fVar7 * local_98 + fVar4 * local_88;
        fVar11 = fStack_a4 * fVar6 + fVar7 * fStack_94 + fVar4 * fStack_84;
        fVar13 = fStack_a0 * fVar6 + fVar7 * fStack_90 + fVar4 * fStack_80;
        *(float *)this = fVar6;
        *(float *)(this + 4) = fVar7;
        *(float *)(this + 8) = fVar4;
        *(float *)(this + 0xc) = param_7 * fStack_104 - param_5 * fStack_124;
        *(float *)(this + 0x10) = local_128 * param_5 - local_108 * param_7;
        *(float *)(this + 0x14) = fStack_124 * local_108 - fStack_104 * local_128;
        *(float *)(this + 0x18) = fVar9;
        *(float *)(this + 0x1c) = fVar11;
        *(float *)(this + 0x20) = fVar13;
        fVar5 = fVar4 * fVar13 + fVar11 * fVar7 + fVar9 * fVar6 + 0.0 + fVar5;
      }
      else if (cVar1 == '\x02') {
        lVar2 = *(long *)(param_11 + 0x48);
        MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_68);
        fVar4 = *(float *)(lVar2 + 0x58);
        fVar6 = local_118 * fStack_124 - fStack_114 * local_128;
        fVar7 = fStack_114 * param_7 - param_3 * fStack_124;
        fVar9 = param_3 * local_128 - local_118 * param_7;
        fVar10 = fStack_124 * local_108 - fStack_104 * local_128;
        fVar12 = param_7 * fStack_104 - param_5 * fStack_124;
        fVar14 = local_128 * param_5 - local_108 * param_7;
        fVar15 = local_a8 * fVar7 + fVar9 * local_98 + fVar6 * local_88;
        fVar16 = fStack_a4 * fVar7 + fVar9 * fStack_94 + fVar6 * fStack_84;
        fVar17 = fStack_a0 * fVar7 + fVar9 * fStack_90 + fVar6 * fStack_80;
        fVar11 = local_68 * fVar12 + fVar14 * local_58 + fVar10 * local_48;
        fVar13 = fStack_64 * fVar12 + fVar14 * fStack_54 + fVar10 * fStack_44;
        fVar8 = fStack_60 * fVar12 + fVar14 * fStack_50 + fVar10 * fStack_40;
        *(float *)this = fVar7;
        *(float *)(this + 4) = fVar9;
        *(float *)(this + 8) = fVar6;
        *(float *)(this + 0xc) = fVar12;
        *(float *)(this + 0x10) = fVar14;
        *(float *)(this + 0x14) = fVar10;
        *(float *)(this + 0x18) = fVar15;
        *(float *)(this + 0x1c) = fVar16;
        *(float *)(this + 0x20) = fVar17;
        *(float *)(this + 0x24) = fVar11;
        *(float *)(this + 0x28) = fVar13;
        *(float *)(this + 0x2c) = fVar8;
        fVar5 = fVar8 * fVar10 + fVar13 * fVar14 + fVar11 * fVar12 + 0.0 + fVar4 +
                fVar17 * fVar6 + fVar16 * fVar9 + fVar15 * fVar7 + 0.0 + fVar5;
      }
      else {
        if (cVar1 != '\0') goto LAB_00106f3d;
        fVar4 = fStack_124 * local_118 - fStack_114 * local_128;
        fVar6 = param_7 * fStack_114 - param_3 * fStack_124;
        fVar7 = local_128 * param_3 - local_118 * param_7;
        *(float *)(this + 8) = fVar4;
        *(ulong *)this = CONCAT44(fVar7,fVar6);
        fVar9 = local_a8 * fVar6 + fVar7 * local_98 + fVar4 * local_88;
        fVar11 = fStack_a4 * fVar6 + fVar7 * fStack_94 + fVar4 * fStack_84;
        fVar13 = fStack_a0 * fVar6 + fVar7 * fStack_90 + fVar4 * fStack_80;
        *(ulong *)(this + 0x18) = CONCAT44(fVar11,fVar9);
        *(float *)(this + 0x20) = fVar13;
        fVar5 = fVar5 + fVar4 * fVar13 + fVar7 * fVar11 + fVar6 * fVar9 + 0.0;
      }
      goto LAB_00106f2a;
    }
    if (cVar1 == '\0') {
      lVar2 = *(long *)(param_11 + 0x48);
      MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_68);
      fVar5 = *(float *)(lVar2 + 0x58);
      fVar4 = fStack_124 * local_108 - fStack_104 * local_128;
      fVar6 = param_7 * fStack_104 - param_5 * fStack_124;
      fVar7 = local_128 * param_5 - local_108 * param_7;
      *(float *)(this + 0x14) = fVar4;
      *(ulong *)(this + 0xc) = CONCAT44(fVar7,fVar6);
      fVar9 = local_68 * fVar6 + fVar7 * local_58 + fVar4 * local_48;
      fVar11 = fStack_64 * fVar6 + fVar7 * fStack_54 + fVar4 * fStack_44;
      fVar13 = fStack_60 * fVar6 + fVar7 * fStack_50 + fVar4 * fStack_40;
      *(ulong *)(this + 0x24) = CONCAT44(fVar11,fVar9);
      *(float *)(this + 0x2c) = fVar13;
      fVar5 = fVar4 * fVar13 + fVar11 * fVar7 + fVar9 * fVar6 + 0.0 + fVar5 + 0.0;
      goto LAB_00106f2a;
    }
  }
LAB_00106f3d:
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
LAB_00106f4b:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::GetRTTIOfType(JPH::VehicleConstraintSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC57;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::VehicleConstraintSettings::~VehicleConstraintSettings() */

void __thiscall
JPH::VehicleConstraintSettings::~VehicleConstraintSettings(VehicleConstraintSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::Wheel::~Wheel() */

void __thiscall JPH::Wheel::~Wheel(Wheel *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



