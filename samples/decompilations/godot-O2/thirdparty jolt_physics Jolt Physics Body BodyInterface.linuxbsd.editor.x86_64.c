
/* JPH::BodyInterface::CreateBody(JPH::BodyCreationSettings const&) */

undefined8 JPH::BodyInterface::CreateBody(BodyCreationSettings *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = JPH::BodyManager::AllocateBody(*(BodyCreationSettings **)(param_1 + 8));
  cVar1 = JPH::BodyManager::AddBody(*(Body **)(param_1 + 8));
  if (cVar1 == '\0') {
    uVar2 = 0;
    JPH::BodyManager::FreeBody(*(Body **)(param_1 + 8));
  }
  return uVar2;
}



/* JPH::BodyInterface::CreateSoftBody(JPH::SoftBodyCreationSettings const&) */

undefined8 JPH::BodyInterface::CreateSoftBody(SoftBodyCreationSettings *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = JPH::BodyManager::AllocateSoftBody(*(SoftBodyCreationSettings **)(param_1 + 8));
  cVar1 = JPH::BodyManager::AddBody(*(Body **)(param_1 + 8));
  if (cVar1 == '\0') {
    uVar2 = 0;
    JPH::BodyManager::FreeBody(*(Body **)(param_1 + 8));
  }
  return uVar2;
}



/* JPH::BodyInterface::CreateBodyWithID(JPH::BodyID const&, JPH::BodyCreationSettings const&) */

BodyID * JPH::BodyInterface::CreateBodyWithID(BodyID *param_1,BodyCreationSettings *param_2)

{
  char cVar1;
  BodyID *pBVar2;
  
  pBVar2 = (BodyID *)JPH::BodyManager::AllocateBody(*(BodyCreationSettings **)(param_1 + 8));
  cVar1 = JPH::BodyManager::AddBodyWithCustomID(*(Body **)(param_1 + 8),pBVar2);
  if (cVar1 == '\0') {
    pBVar2 = (BodyID *)0x0;
    JPH::BodyManager::FreeBody(*(Body **)(param_1 + 8));
  }
  return pBVar2;
}



/* JPH::BodyInterface::CreateSoftBodyWithID(JPH::BodyID const&, JPH::SoftBodyCreationSettings
   const&) */

BodyID * JPH::BodyInterface::CreateSoftBodyWithID(BodyID *param_1,SoftBodyCreationSettings *param_2)

{
  char cVar1;
  BodyID *pBVar2;
  
  pBVar2 = (BodyID *)JPH::BodyManager::AllocateSoftBody(*(SoftBodyCreationSettings **)(param_1 + 8))
  ;
  cVar1 = JPH::BodyManager::AddBodyWithCustomID(*(Body **)(param_1 + 8),pBVar2);
  if (cVar1 == '\0') {
    pBVar2 = (BodyID *)0x0;
    JPH::BodyManager::FreeBody(*(Body **)(param_1 + 8));
  }
  return pBVar2;
}



/* JPH::BodyInterface::CreateBodyWithoutID(JPH::BodyCreationSettings const&) const */

void JPH::BodyInterface::CreateBodyWithoutID(BodyCreationSettings *param_1)

{
  JPH::BodyManager::AllocateBody(*(BodyCreationSettings **)(param_1 + 8));
  return;
}



/* JPH::BodyInterface::CreateSoftBodyWithoutID(JPH::SoftBodyCreationSettings const&) const */

void JPH::BodyInterface::CreateSoftBodyWithoutID(SoftBodyCreationSettings *param_1)

{
  JPH::BodyManager::AllocateSoftBody(*(SoftBodyCreationSettings **)(param_1 + 8));
  return;
}



/* JPH::BodyInterface::DestroyBodyWithoutID(JPH::Body*) const */

void JPH::BodyInterface::DestroyBodyWithoutID(Body *param_1)

{
  JPH::BodyManager::FreeBody(*(Body **)(param_1 + 8));
  return;
}



/* JPH::BodyInterface::AssignBodyID(JPH::Body*) */

void JPH::BodyInterface::AssignBodyID(Body *param_1)

{
  JPH::BodyManager::AddBody(*(Body **)(param_1 + 8));
  return;
}



/* JPH::BodyInterface::AssignBodyID(JPH::Body*, JPH::BodyID const&) */

void JPH::BodyInterface::AssignBodyID(Body *param_1,BodyID *param_2)

{
  JPH::BodyManager::AddBodyWithCustomID(*(Body **)(param_1 + 8),param_2);
  return;
}



/* JPH::BodyInterface::UnassignBodyID(JPH::BodyID const&) */

undefined8 __thiscall JPH::BodyInterface::UnassignBodyID(BodyInterface *this,BodyID *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::BodyManager::RemoveBodies(*(BodyID **)(this + 8),(int)param_1,(Body **)0x1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::BodyInterface::UnassignBodyIDs(JPH::BodyID const*, int, JPH::Body**) */

void JPH::BodyInterface::UnassignBodyIDs(BodyID *param_1,int param_2,Body **param_3)

{
  JPH::BodyManager::RemoveBodies(*(BodyID **)(param_1 + 8),param_2,param_3);
  return;
}



/* JPH::BodyInterface::DestroyBody(JPH::BodyID const&) */

void __thiscall JPH::BodyInterface::DestroyBody(BodyInterface *this,BodyID *param_1)

{
  JPH::BodyManager::DestroyBodies(*(BodyID **)(this + 8),(int)param_1);
  return;
}



/* JPH::BodyInterface::DestroyBodies(JPH::BodyID const*, int) */

void JPH::BodyInterface::DestroyBodies(BodyID *param_1,int param_2)

{
  JPH::BodyManager::DestroyBodies(*(BodyID **)(param_1 + 8),param_2);
  return;
}



/* JPH::BodyInterface::AddBody(JPH::BodyID const&, JPH::EActivation) */

void __thiscall JPH::BodyInterface::AddBody(BodyInterface *this,uint *param_1,int param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  plVar2 = *(long **)this;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 != 0xffffffff) {
    lVar4 = (**(code **)(*plVar2 + 0x20))(plVar2);
    uVar1 = *param_1;
    if ((((ulong)(uVar1 & 0x7fffff) < *(ulong *)plVar2[1]) &&
        (uVar3 = *(ulong *)(((ulong *)plVar2[1])[2] + (ulong)(uVar1 & 0x7fffff) * 8),
        (uVar3 & 1) == 0)) && (uVar1 == *(uint *)(uVar3 + 0x70))) {
      plVar6 = *(long **)(this + 0x10);
      uVar5 = 0;
      lVar7 = *plVar6;
      local_44 = uVar1;
      if (*(code **)(lVar7 + 0x78) != BroadPhase::AddBodiesPrepare) {
        uVar5 = (**(code **)(lVar7 + 0x78))(plVar6,&local_44,1,0);
        plVar6 = *(long **)(this + 0x10);
        lVar7 = *plVar6;
      }
      (**(code **)(lVar7 + 0x80))(plVar6,&local_44,1,uVar5);
      if ((param_3 == 0) && (*(char *)(uVar3 + 0x78) != '\0')) {
        JPH::BodyManager::ActivateBodies(*(BodyID **)(this + 8),(int)param_1);
      }
    }
    if (lVar4 != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001002c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x28))(plVar2,lVar4);
        return;
      }
      goto LAB_0010035d;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010035d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::BodyInterface::RemoveBody(JPH::BodyID const&) */

void __thiscall JPH::BodyInterface::RemoveBody(BodyInterface *this,BodyID *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  plVar1 = *(long **)this;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_1 != -1) {
    lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar3 = (ulong)(*(uint *)param_1 & 0x7fffff);
    if (uVar3 < *(ulong *)plVar1[1]) {
      uVar3 = *(ulong *)(((ulong *)plVar1[1])[2] + uVar3 * 8);
      if (((uVar3 & 1) == 0) && (*(uint *)param_1 == *(uint *)(uVar3 + 0x70))) {
        if ((*(long *)(uVar3 + 0x48) != 0) && (*(int *)(*(long *)(uVar3 + 0x48) + 0x70) != -1)) {
          JPH::BodyManager::DeactivateBodies(*(BodyID **)(this + 8),(int)param_1);
        }
        local_34 = *(undefined4 *)param_1;
        (**(code **)(**(long **)(this + 0x10) + 0x90))(*(long **)(this + 0x10),&local_34,1);
      }
    }
    if (lVar2 != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100405. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x28))(plVar1,lVar2);
        return;
      }
      goto LAB_0010046b;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010046b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::BodyInterface::IsAdded(JPH::BodyID const&) const */

uint __thiscall JPH::BodyInterface::IsAdded(BodyInterface *this,BodyID *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar5 = 0;
  plVar1 = *(long **)this;
  if (*(int *)param_1 != -1) {
    lVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
    uVar4 = (ulong)(*(uint *)param_1 & 0x7fffff);
    if (uVar4 < *(ulong *)plVar1[1]) {
      lVar2 = *(long *)(((ulong *)plVar1[1])[2] + uVar4 * 8);
      uVar5 = ~(uint)lVar2 & 1;
      if ((uVar5 != 0) && (uVar5 = 0, *(uint *)param_1 == *(uint *)(lVar2 + 0x70))) {
        uVar5 = *(byte *)(lVar2 + 0x79) >> 2 & 1;
      }
    }
    if (lVar3 != 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  return uVar5;
}



/* JPH::BodyInterface::CreateAndAddBody(JPH::BodyCreationSettings const&, JPH::EActivation) */

undefined4 __thiscall
JPH::BodyInterface::CreateAndAddBody(BodyInterface *this,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  long lVar2;
  
  lVar2 = JPH::BodyManager::AllocateBody(*(BodyCreationSettings **)(this + 8));
  cVar1 = JPH::BodyManager::AddBody(*(Body **)(this + 8));
  if (cVar1 == '\0') {
    JPH::BodyManager::FreeBody(*(Body **)(this + 8));
  }
  else if (lVar2 != 0) {
    AddBody(this,lVar2 + 0x70,param_3);
    return *(undefined4 *)(lVar2 + 0x70);
  }
  return 0xffffffff;
}



/* JPH::BodyInterface::CreateAndAddSoftBody(JPH::SoftBodyCreationSettings const&, JPH::EActivation)
    */

undefined4 __thiscall
JPH::BodyInterface::CreateAndAddSoftBody(BodyInterface *this,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  long lVar2;
  
  lVar2 = JPH::BodyManager::AllocateSoftBody(*(SoftBodyCreationSettings **)(this + 8));
  cVar1 = JPH::BodyManager::AddBody(*(Body **)(this + 8));
  if (cVar1 == '\0') {
    JPH::BodyManager::FreeBody(*(Body **)(this + 8));
  }
  else if (lVar2 != 0) {
    AddBody(this,lVar2 + 0x70,param_3);
    return *(undefined4 *)(lVar2 + 0x70);
  }
  return 0xffffffff;
}



/* JPH::BodyInterface::AddBodiesPrepare(JPH::BodyID*, int) */

undefined8 JPH::BodyInterface::AddBodiesPrepare(BodyID *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(code **)(**(long **)(param_1 + 0x10) + 0x78) == BroadPhase::AddBodiesPrepare) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x001005f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x78))();
  return uVar1;
}



/* JPH::BodyInterface::AddBodiesFinalize(JPH::BodyID*, int, void*, JPH::EActivation) */

void __thiscall
JPH::BodyInterface::AddBodiesFinalize
          (BodyInterface *this,undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_5)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)this;
  lVar2 = (**(code **)(*plVar1 + 0x30))(plVar1);
  if (lVar2 != 0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,lVar2);
    (**(code **)(**(long **)(this + 0x10) + 0x80))(*(long **)(this + 0x10),param_1,param_2,param_3);
    if (param_5 == 0) {
      JPH::BodyManager::ActivateBodies(*(BodyID **)(this + 8),(int)param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00100681. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))(plVar1,lVar2,*(code **)(*plVar1 + 0x50));
    return;
  }
  (**(code **)(**(long **)(this + 0x10) + 0x80))(*(long **)(this + 0x10),param_1,param_2,param_3);
  if (param_5 != 0) {
    return;
  }
  JPH::BodyManager::ActivateBodies(*(BodyID **)(this + 8),(int)param_1);
  return;
}



/* JPH::BodyInterface::AddBodiesAbort(JPH::BodyID*, int, void*) */

void JPH::BodyInterface::AddBodiesAbort(BodyID *param_1,int param_2,void *param_3)

{
  if (*(code **)(**(long **)(param_1 + 0x10) + 0x88) == BroadPhase::AddBodiesAbort) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00100720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x88))();
  return;
}



/* JPH::BodyInterface::RemoveBodies(JPH::BodyID*, int) */

void __thiscall JPH::BodyInterface::RemoveBodies(BodyInterface *this,BodyID *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)this;
  lVar2 = (**(code **)(*plVar1 + 0x30))(plVar1);
  if (lVar2 != 0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,lVar2);
    JPH::BodyManager::DeactivateBodies(*(BodyID **)(this + 8),(int)param_1);
    (**(code **)(**(long **)(this + 0x10) + 0x90))(*(long **)(this + 0x10),param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0010079e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))(plVar1,lVar2);
    return;
  }
  JPH::BodyManager::DeactivateBodies(*(BodyID **)(this + 8),(int)param_1);
                    /* WARNING: Could not recover jumptable at 0x001007cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x10) + 0x90))(*(long **)(this + 0x10),param_1,param_2);
  return;
}



/* JPH::BodyInterface::ActivateBody(JPH::BodyID const&) */

void __thiscall JPH::BodyInterface::ActivateBody(BodyInterface *this,BodyID *param_1)

{
  long *plVar1;
  Body *this_00;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  plVar1 = *(long **)this;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_1 != -1) {
    lVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar4 = (ulong)(*(uint *)param_1 & 0x7fffff);
    if (uVar4 < *(ulong *)plVar1[1]) {
      this_00 = *(Body **)(((ulong *)plVar1[1])[2] + uVar4 * 8);
      if ((((ulong)this_00 & 1) == 0) && (*(uint *)param_1 == *(uint *)(this_00 + 0x70))) {
        if ((*(long *)(this_00 + 0x48) == 0) || (*(int *)(*(long *)(this_00 + 0x48) + 0x70) == -1))
        {
          JPH::BodyManager::ActivateBodies(*(BodyID **)(this + 8),(int)this_00 + 0x70);
        }
        else {
          Body::GetSleepTestPoints(this_00,(Vec3 *)&local_68);
          lVar2 = *(long *)(this_00 + 0x48);
          *(undefined8 *)(lVar2 + 0x80) = local_68;
          *(undefined4 *)(lVar2 + 0x88) = local_60;
          *(undefined8 *)(lVar2 + 0x90) = local_58;
          *(undefined4 *)(lVar2 + 0x98) = local_50;
          *(undefined4 *)(lVar2 + 0x8c) = 0;
          *(undefined4 *)(lVar2 + 0x9c) = 0;
          *(undefined8 *)(lVar2 + 0xa0) = local_48;
          *(undefined8 *)(lVar2 + 0xac) = 0;
          *(undefined4 *)(lVar2 + 0xa8) = local_40;
        }
      }
    }
    if (lVar3 != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010086d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x28))(plVar1,lVar3);
        return;
      }
      goto LAB_0010094b;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010094b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::BodyInterface::ActivateBodies(JPH::BodyID const*, int) */

void JPH::BodyInterface::ActivateBodies(BodyID *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)param_1;
  lVar2 = (**(code **)(*plVar1 + 0x30))(plVar1);
  if (lVar2 == 0) {
    JPH::BodyManager::ActivateBodies(*(BodyID **)(param_1 + 8),param_2);
    return;
  }
  (**(code **)(*plVar1 + 0x48))(plVar1,lVar2);
  JPH::BodyManager::ActivateBodies(*(BodyID **)(param_1 + 8),param_2);
                    /* WARNING: Could not recover jumptable at 0x001009c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x50))(plVar1,lVar2);
  return;
}



/* JPH::BodyInterface::ActivateBodiesInAABox(JPH::AABox const&, JPH::BroadPhaseLayerFilter const&,
   JPH::ObjectLayerFilter const&) */

void __thiscall
JPH::BodyInterface::ActivateBodiesInAABox
          (BodyInterface *this,AABox *param_1,BroadPhaseLayerFilter *param_2,
          ObjectLayerFilter *param_3)

{
  long in_FS_OFFSET;
  undefined **local_58;
  undefined4 local_50;
  undefined1 local_4c [12];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  int iStack_30;
  undefined4 local_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = SUB1612((undefined1  [16])0x0,0);
  uStack_40 = 0;
  local_58 = &PTR__AllHitCollisionCollector_00106180;
  uStack_3c = 0;
  uStack_38 = 0;
  iStack_30 = 0;
  local_2c = 0;
  local_50 = 0x7f7fffff;
  (**(code **)(**(long **)(this + 0x10) + 0x18))
            (*(long **)(this + 0x10),param_1,&local_58,param_2,param_3);
  ActivateBodies((BodyID *)this,iStack_30);
  local_58 = &PTR__AllHitCollisionCollector_00106180;
  if (CONCAT44(local_2c,iStack_30) != 0) {
    uStack_40 = 0;
    uStack_3c = 0;
    (*Free)();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::BodyInterface::DeactivateBody(JPH::BodyID const&) */

void __thiscall JPH::BodyInterface::DeactivateBody(BodyInterface *this,BodyID *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  plVar1 = *(long **)this;
  if (*(int *)param_1 != -1) {
    lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar3 = (ulong)(*(uint *)param_1 & 0x7fffff);
    if (uVar3 < *(ulong *)plVar1[1]) {
      uVar3 = *(ulong *)(((ulong *)plVar1[1])[2] + uVar3 * 8);
      if (((((uVar3 & 1) == 0) && (*(uint *)param_1 == *(uint *)(uVar3 + 0x70))) &&
          (*(long *)(uVar3 + 0x48) != 0)) && (*(int *)(*(long *)(uVar3 + 0x48) + 0x70) != -1)) {
        JPH::BodyManager::DeactivateBodies(*(BodyID **)(this + 8),(int)param_1);
      }
    }
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00100af5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x28))(plVar1,lVar2);
      return;
    }
  }
  return;
}



/* JPH::BodyInterface::DeactivateBodies(JPH::BodyID const*, int) */

void JPH::BodyInterface::DeactivateBodies(BodyID *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)param_1;
  lVar2 = (**(code **)(*plVar1 + 0x30))(plVar1);
  if (lVar2 == 0) {
    JPH::BodyManager::DeactivateBodies(*(BodyID **)(param_1 + 8),param_2);
    return;
  }
  (**(code **)(*plVar1 + 0x48))(plVar1,lVar2);
  JPH::BodyManager::DeactivateBodies(*(BodyID **)(param_1 + 8),param_2);
                    /* WARNING: Could not recover jumptable at 0x00100bb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x50))(plVar1,lVar2);
  return;
}



/* JPH::BodyInterface::IsActive(JPH::BodyID const&) const */

uint __thiscall JPH::BodyInterface::IsActive(BodyInterface *this,BodyID *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar5 = 0;
  plVar1 = *(long **)this;
  if (*(int *)param_1 != -1) {
    lVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
    uVar4 = (ulong)(*(uint *)param_1 & 0x7fffff);
    if (uVar4 < *(ulong *)plVar1[1]) {
      lVar2 = *(long *)(((ulong *)plVar1[1])[2] + uVar4 * 8);
      uVar5 = ~(uint)lVar2 & 1;
      if (((uVar5 != 0) && (uVar5 = 0, *(uint *)param_1 == *(uint *)(lVar2 + 0x70))) &&
         (*(long *)(lVar2 + 0x48) != 0)) {
        uVar5 = (uint)(*(int *)(*(long *)(lVar2 + 0x48) + 0x70) != -1);
      }
    }
    if (lVar3 != 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  return uVar5;
}



/* JPH::BodyInterface::ResetSleepTimer(JPH::BodyID const&) */

void __thiscall JPH::BodyInterface::ResetSleepTimer(BodyInterface *this,BodyID *param_1)

{
  long *plVar1;
  Body *this_00;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_20;
  
  plVar1 = *(long **)this;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_1 != -1) {
    lVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar4 = (ulong)(*(uint *)param_1 & 0x7fffff);
    if (uVar4 < *(ulong *)plVar1[1]) {
      this_00 = *(Body **)(((ulong *)plVar1[1])[2] + uVar4 * 8);
      if ((((ulong)this_00 & 1) == 0) && (*(uint *)param_1 == *(uint *)(this_00 + 0x70))) {
        Body::GetSleepTestPoints(this_00,(Vec3 *)&local_58);
        lVar2 = *(long *)(this_00 + 0x48);
        *(undefined8 *)(lVar2 + 0x80) = local_58;
        *(undefined4 *)(lVar2 + 0x88) = local_50;
        *(undefined8 *)(lVar2 + 0x90) = local_48;
        *(undefined4 *)(lVar2 + 0x98) = local_40;
        *(undefined4 *)(lVar2 + 0x8c) = 0;
        *(undefined4 *)(lVar2 + 0x9c) = 0;
        *(undefined8 *)(lVar2 + 0xa0) = local_38;
        *(undefined8 *)(lVar2 + 0xac) = 0;
        *(undefined4 *)(lVar2 + 0xa8) = local_30;
      }
    }
    if (lVar3 != 0) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100cdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x28))(plVar1,lVar3);
        return;
      }
      goto LAB_00100d89;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100d89:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::BodyInterface::CreateConstraint(JPH::TwoBodyConstraintSettings const*, JPH::BodyID const&,
   JPH::BodyID const&) */

undefined8 __thiscall
JPH::BodyInterface::CreateConstraint
          (BodyInterface *this,TwoBodyConstraintSettings *param_1,BodyID *param_2,BodyID *param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  long in_FS_OFFSET;
  uint local_28;
  uint local_24;
  long local_20;
  
  plVar1 = *(long **)this;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = *(uint *)param_2;
  local_24 = *(uint *)param_3;
  lVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,&local_28,2);
  if (lVar3 != 0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,lVar3);
  }
  if (local_28 == 0xffffffff) {
    puVar6 = &Body::sFixedToWorld;
    if (local_24 != 0xffffffff) {
      puVar8 = (ulong *)plVar1[1];
      uVar4 = (ulong)(local_24 & 0x7fffff);
      if (uVar4 < *puVar8) goto LAB_00100e41;
    }
  }
  else {
    puVar8 = (ulong *)plVar1[1];
    uVar2 = *puVar8;
    if ((local_28 & 0x7fffff) < uVar2) {
      puVar7 = *(undefined8 **)(puVar8[2] + (ulong)(local_28 & 0x7fffff) * 8);
      if ((((ulong)puVar7 & 1) == 0) &&
         (puVar6 = &Body::sFixedToWorld, local_28 == *(uint *)(puVar7 + 0xe))) {
        if (((local_24 != 0xffffffff) && ((local_24 & 0x7fffff) < uVar2)) &&
           ((puVar6 = *(undefined8 **)(puVar8[2] + (ulong)(local_24 & 0x7fffff) * 8),
            ((ulong)puVar6 & 1) != 0 || (*(uint *)(puVar6 + 0xe) != local_24)))) {
          puVar6 = &Body::sFixedToWorld;
        }
        goto LAB_00100e61;
      }
    }
    puVar6 = &Body::sFixedToWorld;
    if (local_24 != 0xffffffff) {
      puVar6 = &Body::sFixedToWorld;
      uVar4 = (ulong)(local_24 & 0x7fffff);
      if (uVar4 < uVar2) {
LAB_00100e41:
        puVar6 = *(undefined8 **)(puVar8[2] + uVar4 * 8);
        if ((((ulong)puVar6 & 1) != 0) || (*(uint *)(puVar6 + 0xe) != local_24)) {
          puVar6 = &Body::sFixedToWorld;
        }
      }
    }
  }
  puVar7 = &Body::sFixedToWorld;
LAB_00100e61:
  uVar5 = (**(code **)(*(long *)param_1 + 0x30))(param_1,puVar7,puVar6);
  if (lVar3 != 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,lVar3);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* JPH::BodyInterface::ActivateConstraint(JPH::TwoBodyConstraint const*) */

void __thiscall
JPH::BodyInterface::ActivateConstraint(BodyInterface *this,TwoBodyConstraint *param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x70);
  local_14 = *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x70);
  ActivateBodies((BodyID *)this,(int)&local_18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::BodyInterface::GetShape(JPH::BodyID const&) const */

BodyID * JPH::BodyInterface::GetShape(BodyID *param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  uint *in_RDX;
  long *in_RSI;
  
  uVar2 = *in_RDX;
  *(undefined8 *)param_1 = 0;
  plVar3 = (long *)*in_RSI;
  if (uVar2 != 0xffffffff) {
    lVar6 = (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar7 = (ulong)(*in_RDX & 0x7fffff);
    if (uVar7 < *(ulong *)plVar3[1]) {
      uVar7 = *(ulong *)(((ulong *)plVar3[1])[2] + uVar7 * 8);
      if (((uVar7 & 1) == 0) && (*in_RDX == *(uint *)(uVar7 + 0x70))) {
        plVar4 = *(long **)(uVar7 + 0x40);
        plVar5 = *(long **)param_1;
        if (plVar4 != plVar5) {
          if (plVar5 != (long *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
          *(long **)param_1 = plVar4;
          if (plVar4 != (long *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
        }
      }
    }
    if (lVar6 != 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  return param_1;
}



/* JPH::BodyInterface::SetShape(JPH::BodyID const&, JPH::Shape const*, bool, JPH::EActivation) const
    */

void __thiscall
JPH::BodyInterface::SetShape
          (BodyInterface *this,uint *param_1,long param_2,undefined8 param_4,int param_5)

{
  long *plVar1;
  Shape *this_00;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  plVar1 = *(long **)this;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 != 0xffffffff) {
    lVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar4 = (ulong)(*param_1 & 0x7fffff);
    if ((((uVar4 < *(ulong *)plVar1[1]) &&
         (this_00 = *(Shape **)(((ulong *)plVar1[1])[2] + uVar4 * 8), ((ulong)this_00 & 1) == 0)) &&
        (*param_1 == *(uint *)(this_00 + 0x70))) && (param_2 != *(long *)(this_00 + 0x40))) {
      JPH::Body::SetShapeInternal(this_00,SUB81(param_2,0));
      JPH::BodyManager::InvalidateContactCacheForBody(*(Body **)(this + 8));
      if (((byte)this_00[0x79] & 4) != 0) {
        local_7c = *(undefined4 *)(this_00 + 0x70);
        (**(code **)(**(long **)(this + 0x10) + 0x98))(*(long **)(this + 0x10),&local_7c,1,1);
      }
      if ((param_5 == 0) && (this_00[0x78] != (Shape)0x0)) {
        if ((*(long *)(this_00 + 0x48) == 0) || (*(int *)(*(long *)(this_00 + 0x48) + 0x70) == -1))
        {
          JPH::BodyManager::ActivateBodies(*(BodyID **)(this + 8),(int)this_00 + 0x70);
        }
        else {
          Body::GetSleepTestPoints((Body *)this_00,(Vec3 *)&local_78);
          lVar2 = *(long *)(this_00 + 0x48);
          *(undefined8 *)(lVar2 + 0x80) = local_78;
          *(undefined4 *)(lVar2 + 0x88) = local_70;
          *(undefined8 *)(lVar2 + 0x90) = local_68;
          *(undefined4 *)(lVar2 + 0x98) = local_60;
          *(undefined4 *)(lVar2 + 0x8c) = 0;
          *(undefined4 *)(lVar2 + 0x9c) = 0;
          *(undefined8 *)(lVar2 + 0xa0) = local_58;
          *(undefined8 *)(lVar2 + 0xac) = 0;
          *(undefined4 *)(lVar2 + 0xa8) = local_50;
        }
      }
    }
    if (lVar3 != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001010e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x28))(plVar1,lVar3,*(code **)(*plVar1 + 0x28));
        return;
      }
      goto LAB_00101251;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101251:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::BodyInterface::NotifyShapeChanged(JPH::BodyID const&, JPH::Vec3, bool, JPH::EActivation)
   const */

void JPH::BodyInterface::NotifyShapeChanged
               (undefined8 param_1_00,undefined8 param_2,long *param_1,uint *param_4,
               undefined1 param_5,int param_6)

{
  long *plVar1;
  Body *this;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  plVar1 = (long *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_4 != 0xffffffff) {
    lVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar4 = (ulong)(*param_4 & 0x7fffff);
    if (uVar4 < *(ulong *)plVar1[1]) {
      this = *(Body **)(((ulong *)plVar1[1])[2] + uVar4 * 8);
      if ((((ulong)this & 1) == 0) && (*param_4 == *(uint *)(this + 0x70))) {
        JPH::Body::UpdateCenterOfMassInternal(param_1_00,param_2,this,param_5);
        JPH::Body::CalculateWorldSpaceBoundsInternal();
        JPH::BodyManager::InvalidateContactCacheForBody((Body *)param_1[1]);
        if (((byte)this[0x79] & 4) != 0) {
          local_7c = *(undefined4 *)(this + 0x70);
          (**(code **)(*(long *)param_1[2] + 0x98))((long *)param_1[2],&local_7c,1,1);
        }
        if ((param_6 == 0) && (this[0x78] != (Body)0x0)) {
          if ((*(long *)(this + 0x48) == 0) || (*(int *)(*(long *)(this + 0x48) + 0x70) == -1)) {
            JPH::BodyManager::ActivateBodies((BodyID *)param_1[1],(int)this + 0x70);
          }
          else {
            Body::GetSleepTestPoints(this,(Vec3 *)&local_78);
            lVar2 = *(long *)(this + 0x48);
            *(undefined8 *)(lVar2 + 0x80) = local_78;
            *(undefined4 *)(lVar2 + 0x88) = local_70;
            *(undefined8 *)(lVar2 + 0x90) = local_68;
            *(undefined4 *)(lVar2 + 0x98) = local_60;
            *(undefined4 *)(lVar2 + 0x8c) = 0;
            *(undefined4 *)(lVar2 + 0x9c) = 0;
            *(undefined8 *)(lVar2 + 0xa0) = local_58;
            *(undefined8 *)(lVar2 + 0xac) = 0;
            *(undefined4 *)(lVar2 + 0xa8) = local_50;
          }
        }
      }
    }
    if (lVar3 != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010130d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x28))(plVar1,lVar3);
        return;
      }
      goto LAB_00101457;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101457:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::BodyInterface::SetObjectLayer(JPH::BodyID const&, unsigned short) */

void __thiscall
JPH::BodyInterface::SetObjectLayer(BodyInterface *this,BodyID *param_1,ushort param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  plVar1 = *(long **)this;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_1 != -1) {
    lVar4 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar5 = (ulong)(*(uint *)param_1 & 0x7fffff);
    if ((((uVar5 < *(ulong *)plVar1[1]) &&
         (uVar5 = *(ulong *)(((ulong *)plVar1[1])[2] + uVar5 * 8), (uVar5 & 1) == 0)) &&
        (*(uint *)param_1 == *(uint *)(uVar5 + 0x70))) && (*(ushort *)(uVar5 + 0x74) != param_2)) {
      lVar2 = *(long *)(this + 8);
      *(ushort *)(uVar5 + 0x74) = param_2;
      uVar3 = (**(code **)(**(long **)(lVar2 + 0x108) + 0x18))(*(long **)(lVar2 + 0x108),param_2);
      *(undefined1 *)(uVar5 + 0x77) = uVar3;
      if ((*(byte *)(uVar5 + 0x79) & 4) != 0) {
        local_34 = *(undefined4 *)(uVar5 + 0x70);
        (**(code **)(**(long **)(this + 0x10) + 0xa0))(*(long **)(this + 0x10),&local_34,1);
      }
    }
    if (lVar4 != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101507. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x28))(plVar1,lVar4);
        return;
      }
      goto LAB_0010157d;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010157d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::BodyInterface::GetObjectLayer(JPH::BodyID const&) const */

ulong __thiscall JPH::BodyInterface::GetObjectLayer(BodyInterface *this,BodyID *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0xffffffff;
  plVar1 = *(long **)this;
  if (*(int *)param_1 != -1) {
    lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
    uVar3 = (ulong)(*(uint *)param_1 & 0x7fffff);
    if (uVar3 < *(ulong *)plVar1[1]) {
      uVar3 = *(ulong *)(((ulong *)plVar1[1])[2] + uVar3 * 8);
      if (((uVar3 & 1) == 0) && (*(uint *)param_1 == *(uint *)(uVar3 + 0x70))) {
        uVar4 = (ulong)*(ushort *)(uVar3 + 0x74);
      }
    }
    if (lVar2 != 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  return uVar4;
}



/* JPH::BodyInterface::SetPositionAndRotation(JPH::BodyID const&, JPH::Vec3, JPH::Quat,
   JPH::EActivation) */

void JPH::BodyInterface::SetPositionAndRotation
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long *param_1,uint *param_6,int param_7)

{
  long *plVar1;
  Body *this;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  plVar1 = (long *)*param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_6 != 0xffffffff) {
    lVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar4 = (ulong)(*param_6 & 0x7fffff);
    if (uVar4 < *(ulong *)plVar1[1]) {
      this = *(Body **)(((ulong *)plVar1[1])[2] + uVar4 * 8);
      if ((((ulong)this & 1) == 0) && (*param_6 == *(uint *)(this + 0x70))) {
        JPH::Body::SetPositionAndRotationInternal(param_1_00,param_2,param_3,param_4,this,1);
        if (((byte)this[0x79] & 4) != 0) {
          local_6c = *(undefined4 *)(this + 0x70);
          (**(code **)(*(long *)param_1[2] + 0x98))((long *)param_1[2],&local_6c,1,1);
        }
        if ((param_7 == 0) && (this[0x78] != (Body)0x0)) {
          if ((*(long *)(this + 0x48) == 0) || (*(int *)(*(long *)(this + 0x48) + 0x70) == -1)) {
            JPH::BodyManager::ActivateBodies((BodyID *)param_1[1],(int)this + 0x70);
          }
          else {
            Body::GetSleepTestPoints(this,(Vec3 *)&local_68);
            lVar2 = *(long *)(this + 0x48);
            *(undefined8 *)(lVar2 + 0x80) = local_68;
            *(undefined4 *)(lVar2 + 0x88) = local_60;
            *(undefined8 *)(lVar2 + 0x90) = local_58;
            *(undefined4 *)(lVar2 + 0x98) = local_50;
            *(undefined4 *)(lVar2 + 0x8c) = 0;
            *(undefined4 *)(lVar2 + 0x9c) = 0;
            *(undefined8 *)(lVar2 + 0xa0) = local_48;
            *(undefined8 *)(lVar2 + 0xac) = 0;
            *(undefined4 *)(lVar2 + 0xa8) = local_40;
          }
        }
      }
    }
    if (lVar3 != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001016c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x28))(plVar1,lVar3);
        return;
      }
      goto LAB_00101807;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101807:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::BodyInterface::SetPositionAndRotationWhenChanged(JPH::BodyID const&, JPH::Vec3, JPH::Quat,
   JPH::EActivation) */

void JPH::BodyInterface::SetPositionAndRotationWhenChanged
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long *param_1,uint *param_6,int param_7)

{
  long *plVar1;
  Body *this;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [12];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  plVar1 = (long *)*param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_6 != 0xffffffff) {
    lVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar4 = (ulong)(*param_6 & 0x7fffff);
    if (uVar4 < *(ulong *)plVar1[1]) {
      this = *(Body **)(((ulong *)plVar1[1])[2] + uVar4 * 8);
      if ((((ulong)this & 1) == 0) && (*param_6 == *(uint *)(this + 0x70))) {
        auVar5 = Body::GetPosition(this);
        local_a8 = (float)param_1_00;
        fStack_a4 = (float)((ulong)param_1_00 >> 0x20);
        fStack_a0 = (float)param_2;
        local_88 = auVar5._0_4_;
        fStack_84 = auVar5._4_4_;
        fStack_a0 = fStack_a0 - auVar5._8_4_;
        if (fStack_a0 * fStack_a0 +
            (fStack_a4 - fStack_84) * (fStack_a4 - fStack_84) +
            (local_a8 - local_88) * (local_a8 - local_88) + 0.0 <= _LC11) {
          local_98 = (float)param_3;
          fStack_94 = (float)((ulong)param_3 >> 0x20);
          fStack_90 = (float)param_4;
          fStack_8c = (float)((ulong)param_4 >> 0x20);
          if ((local_98 - *(float *)(this + 0x10)) * (local_98 - *(float *)(this + 0x10)) +
              (fStack_94 - *(float *)(this + 0x14)) * (fStack_94 - *(float *)(this + 0x14)) +
              (fStack_90 - *(float *)(this + 0x18)) * (fStack_90 - *(float *)(this + 0x18)) +
              (fStack_8c - *(float *)(this + 0x1c)) * (fStack_8c - *(float *)(this + 0x1c)) <= _LC11
             ) goto LAB_0010188e;
        }
        JPH::Body::SetPositionAndRotationInternal(param_1_00,param_2,param_3,param_4,this,1);
        if (((byte)this[0x79] & 4) != 0) {
          local_6c = *(undefined4 *)(this + 0x70);
          (**(code **)(*(long *)param_1[2] + 0x98))((long *)param_1[2],&local_6c,1,1);
        }
        if ((param_7 == 0) && (this[0x78] != (Body)0x0)) {
          if ((*(long *)(this + 0x48) == 0) || (*(int *)(*(long *)(this + 0x48) + 0x70) == -1)) {
            JPH::BodyManager::ActivateBodies((BodyID *)param_1[1],(int)this + 0x70);
          }
          else {
            Body::GetSleepTestPoints(this,(Vec3 *)&local_68);
            lVar2 = *(long *)(this + 0x48);
            *(undefined8 *)(lVar2 + 0x80) = local_68;
            *(undefined4 *)(lVar2 + 0x88) = local_60;
            *(undefined8 *)(lVar2 + 0x90) = local_58;
            *(undefined4 *)(lVar2 + 0x98) = local_50;
            *(undefined4 *)(lVar2 + 0x8c) = 0;
            *(undefined4 *)(lVar2 + 0x9c) = 0;
            *(undefined8 *)(lVar2 + 0xa0) = local_48;
            *(undefined8 *)(lVar2 + 0xac) = 0;
            *(undefined4 *)(lVar2 + 0xa8) = local_40;
          }
        }
      }
    }
LAB_0010188e:
    if (lVar3 != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001018c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x28))(plVar1,lVar3);
        return;
      }
      goto LAB_00101a97;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101a97:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::BodyInterface::GetPositionAndRotation(JPH::BodyID const&, JPH::Vec3&, JPH::Quat&) const */

void JPH::BodyInterface::GetPositionAndRotation(BodyID *param_1,Vec3 *param_2,Quat *param_3)

{
  long *plVar1;
  Body *this;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *in_RCX;
  undefined8 uVar6;
  undefined8 in_XMM1_Qa;
  
  plVar1 = *(long **)param_1;
  if (*(int *)param_2 == -1) {
    *(undefined1 (*) [16])param_3 = (undefined1  [16])0x0;
    uVar2 = _UNK_001061f8;
    *in_RCX = __LC12;
    in_RCX[1] = uVar2;
    return;
  }
  lVar4 = (**(code **)(*plVar1 + 0x10))(plVar1);
  uVar5 = (ulong)(*(uint *)param_2 & 0x7fffff);
  if (((uVar5 < *(ulong *)plVar1[1]) &&
      (this = *(Body **)(((ulong *)plVar1[1])[2] + uVar5 * 8), ((ulong)this & 1) == 0)) &&
     (*(uint *)param_2 == *(uint *)(this + 0x70))) {
    uVar6 = Body::GetPosition(this);
    uVar2 = *(undefined8 *)(this + 0x10);
    uVar3 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)param_3 = uVar6;
    *(undefined8 *)(param_3 + 8) = in_XMM1_Qa;
    *in_RCX = uVar2;
    in_RCX[1] = uVar3;
  }
  else {
    *(undefined1 (*) [16])param_3 = (undefined1  [16])0x0;
    uVar2 = _UNK_001061f8;
    *in_RCX = __LC12;
    in_RCX[1] = uVar2;
  }
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00101b2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
  return;
}



/* JPH::BodyInterface::SetPosition(JPH::BodyID const&, JPH::Vec3, JPH::EActivation) */

void JPH::BodyInterface::SetPosition
               (undefined8 param_1_00,undefined8 param_2,long *param_1,uint *param_4,int param_5)

{
  long *plVar1;
  Body *this;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  plVar1 = (long *)*param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_4 != 0xffffffff) {
    lVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar4 = (ulong)(*param_4 & 0x7fffff);
    if (uVar4 < *(ulong *)plVar1[1]) {
      this = *(Body **)(((ulong *)plVar1[1])[2] + uVar4 * 8);
      if ((((ulong)this & 1) == 0) && (*param_4 == *(uint *)(this + 0x70))) {
        JPH::Body::SetPositionAndRotationInternal
                  (param_1_00,param_2,*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18),this
                   ,1);
        if (((byte)this[0x79] & 4) != 0) {
          local_6c = *(undefined4 *)(this + 0x70);
          (**(code **)(*(long *)param_1[2] + 0x98))((long *)param_1[2],&local_6c,1,1);
        }
        if ((param_5 == 0) && (this[0x78] != (Body)0x0)) {
          if ((*(long *)(this + 0x48) == 0) || (*(int *)(*(long *)(this + 0x48) + 0x70) == -1)) {
            JPH::BodyManager::ActivateBodies((BodyID *)param_1[1],(int)this + 0x70);
          }
          else {
            Body::GetSleepTestPoints(this,(Vec3 *)&local_68);
            lVar2 = *(long *)(this + 0x48);
            *(undefined8 *)(lVar2 + 0x80) = local_68;
            *(undefined4 *)(lVar2 + 0x88) = local_60;
            *(undefined8 *)(lVar2 + 0x90) = local_58;
            *(undefined4 *)(lVar2 + 0x98) = local_50;
            *(undefined4 *)(lVar2 + 0x8c) = 0;
            *(undefined4 *)(lVar2 + 0x9c) = 0;
            *(undefined8 *)(lVar2 + 0xa0) = local_48;
            *(undefined8 *)(lVar2 + 0xac) = 0;
            *(undefined4 *)(lVar2 + 0xa8) = local_40;
          }
        }
      }
    }
    if (lVar3 != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x28))(plVar1,lVar3);
        return;
      }
      goto LAB_00101d58;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101d58:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::BodyInterface::GetPosition(JPH::BodyID const&) const */

undefined8 __thiscall JPH::BodyInterface::GetPosition(BodyInterface *this,BodyID *param_1)

{
  long *plVar1;
  Body *this_00;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  plVar1 = *(long **)this;
  if (*(int *)param_1 == -1) {
    return 0;
  }
  lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
  uVar3 = (ulong)(*(uint *)param_1 & 0x7fffff);
  if (uVar3 < *(ulong *)plVar1[1]) {
    this_00 = *(Body **)(((ulong *)plVar1[1])[2] + uVar3 * 8);
    if ((((ulong)this_00 & 1) == 0) && (*(uint *)param_1 == *(uint *)(this_00 + 0x70))) {
      uVar4 = Body::GetPosition(this_00);
      goto LAB_00101db8;
    }
  }
  uVar4 = 0;
LAB_00101db8:
  if (lVar2 != 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  return uVar4;
}



/* JPH::BodyInterface::GetCenterOfMassPosition(JPH::BodyID const&) const */

undefined1  [16] __thiscall
JPH::BodyInterface::GetCenterOfMassPosition(BodyInterface *this,BodyID *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  uVar6 = 0;
  uVar5 = 0;
  plVar1 = *(long **)this;
  if (*(int *)param_1 == -1) goto LAB_00101e8e;
  lVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
  uVar4 = (ulong)(*(uint *)param_1 & 0x7fffff);
  if (uVar4 < *(ulong *)plVar1[1]) {
    puVar2 = *(undefined8 **)(((ulong *)plVar1[1])[2] + uVar4 * 8);
    if ((((ulong)puVar2 & 1) != 0) || (*(uint *)param_1 != *(uint *)(puVar2 + 0xe)))
    goto LAB_00101e6e;
    uVar6 = *puVar2;
    uVar5 = puVar2[1];
  }
  else {
LAB_00101e6e:
    uVar6 = 0;
    uVar5 = 0;
  }
  if (lVar3 != 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
LAB_00101e8e:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = uVar6;
  return auVar7;
}



/* JPH::BodyInterface::SetRotation(JPH::BodyID const&, JPH::Quat, JPH::EActivation) */

void JPH::BodyInterface::SetRotation(long *param_1,uint *param_2,int param_3)

{
  long *plVar1;
  Body *this;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  plVar1 = (long *)*param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 != 0xffffffff) {
    lVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar4 = (ulong)(*param_2 & 0x7fffff);
    if (uVar4 < *(ulong *)plVar1[1]) {
      this = *(Body **)(((ulong *)plVar1[1])[2] + uVar4 * 8);
      if ((((ulong)this & 1) == 0) && (*param_2 == *(uint *)(this + 0x70))) {
        Body::GetPosition(this);
        JPH::Body::SetPositionAndRotationInternal(this,1);
        if (((byte)this[0x79] & 4) != 0) {
          local_6c = *(undefined4 *)(this + 0x70);
          (**(code **)(*(long *)param_1[2] + 0x98))((long *)param_1[2],&local_6c,1,1);
        }
        if ((param_3 == 0) && (this[0x78] != (Body)0x0)) {
          if ((*(long *)(this + 0x48) == 0) || (*(int *)(*(long *)(this + 0x48) + 0x70) == -1)) {
            JPH::BodyManager::ActivateBodies((BodyID *)param_1[1],(int)this + 0x70);
          }
          else {
            Body::GetSleepTestPoints(this,(Vec3 *)&local_68);
            lVar2 = *(long *)(this + 0x48);
            *(undefined8 *)(lVar2 + 0x80) = local_68;
            *(undefined4 *)(lVar2 + 0x88) = local_60;
            *(undefined8 *)(lVar2 + 0x90) = local_58;
            *(undefined4 *)(lVar2 + 0x98) = local_50;
            *(undefined4 *)(lVar2 + 0x8c) = 0;
            *(undefined4 *)(lVar2 + 0x9c) = 0;
            *(undefined8 *)(lVar2 + 0xa0) = local_48;
            *(undefined8 *)(lVar2 + 0xac) = 0;
            *(undefined4 *)(lVar2 + 0xa8) = local_40;
          }
        }
      }
    }
    if (lVar3 != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x28))(plVar1,lVar3);
        return;
      }
      goto LAB_00102098;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102098:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::BodyInterface::GetRotation(JPH::BodyID const&) const */

undefined1  [16] __thiscall JPH::BodyInterface::GetRotation(BodyInterface *this,BodyID *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = 0;
  uVar4 = 0x3f80000000000000;
  plVar1 = *(long **)this;
  if (*(int *)param_1 == -1) goto LAB_00102117;
  lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
  uVar3 = (ulong)(*(uint *)param_1 & 0x7fffff);
  if (uVar3 < *(ulong *)plVar1[1]) {
    uVar3 = *(ulong *)(((ulong *)plVar1[1])[2] + uVar3 * 8);
    if (((uVar3 & 1) != 0) || (*(uint *)param_1 != *(uint *)(uVar3 + 0x70))) goto LAB_001020f0;
    uVar5 = *(undefined8 *)(uVar3 + 0x10);
    uVar4 = *(undefined8 *)(uVar3 + 0x18);
  }
  else {
LAB_001020f0:
    uVar5 = 0;
    uVar4 = 0x3f80000000000000;
  }
  if (lVar2 != 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
LAB_00102117:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::BodyInterface::GetWorldTransform(JPH::BodyID const&) const */

BodyID * JPH::BodyInterface::GetWorldTransform(BodyID *param_1)

{
  float fVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  float fVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  uint *in_RDX;
  long *in_RSI;
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
  float local_78;
  float fStack_74;
  
  plVar2 = (long *)*in_RSI;
  if (*in_RDX == 0xffffffff) {
    *(undefined1 (*) [16])param_1 = ZEXT416(_LC14);
    uVar4 = _UNK_00106218;
    *(undefined8 *)(param_1 + 0x10) = __LC15;
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    uVar4 = _UNK_00106228;
    *(undefined8 *)(param_1 + 0x20) = __LC16;
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    uVar4 = CONCAT44(_LC7,_UNK_001061f8);
    *(undefined8 *)(param_1 + 0x30) = __LC12;
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    return param_1;
  }
  lVar6 = (**(code **)(*plVar2 + 0x10))(plVar2);
  uVar7 = (ulong)(*in_RDX & 0x7fffff);
  if (uVar7 < *(ulong *)plVar2[1]) {
    puVar3 = *(undefined8 **)(((ulong *)plVar2[1])[2] + uVar7 * 8);
    if ((((ulong)puVar3 & 1) == 0) && (*in_RDX == *(uint *)(puVar3 + 0xe))) {
      fVar21 = (float)puVar3[2];
      fVar8 = (float)puVar3[3];
      fVar5 = (float)((ulong)puVar3[2] >> 0x20);
      fVar13 = fVar21 + fVar21;
      fVar18 = fVar5 + fVar5;
      fVar9 = (float)((ulong)puVar3[3] >> 0x20);
      fVar1 = *(float *)(puVar3 + 1);
      fVar11 = fVar9 * (fVar8 + fVar8);
      fVar19 = fVar8 * (fVar8 + fVar8);
      fVar20 = fVar8 * fVar18 - fVar13 * fVar9;
      fVar14 = fVar13 * fVar9 + fVar8 * fVar18;
      fVar15 = fVar8 * fVar13 + fVar18 * fVar9;
      fVar17 = fVar8 * fVar13 - fVar18 * fVar9;
      fVar16 = (_LC7 - fVar21 * fVar13) - fVar5 * fVar18;
      fVar10 = fVar5 * fVar13 + fVar11;
      fVar11 = fVar5 * fVar13 - fVar11;
      local_78 = (float)*puVar3;
      fVar8 = local_78;
      fStack_74 = (float)((ulong)*puVar3 >> 0x20);
      fVar9 = fStack_74;
      fVar21 = (_LC7 - fVar19) - fVar21 * fVar13;
      fVar19 = (_LC7 - fVar5 * fVar18) - fVar19;
      if (*(code **)(*(long *)puVar3[8] + 0x18) == Shape::GetCenterOfMass) {
        auVar12 = SUB1612((undefined1  [16])0x0,0);
        fStack_74 = 0.0;
        auVar22 = ZEXT812(0);
      }
      else {
        auVar22 = (**(code **)(*(long *)puVar3[8] + 0x18))();
        local_78 = auVar22._0_4_;
        fStack_74 = auVar22._4_4_;
        local_78 = 0.0 - local_78;
        fStack_74 = 0.0 - fStack_74;
        auVar12._8_4_ = 0.0 - auVar22._8_4_;
        auVar22._4_4_ = local_78;
        auVar22._0_4_ = local_78;
        auVar22._8_4_ = local_78;
        auVar12._4_4_ = auVar12._8_4_;
        auVar12._0_4_ = auVar12._8_4_;
      }
      fVar5 = _LC7;
      *(float *)param_1 = fVar19;
      *(float *)(param_1 + 4) = fVar10;
      *(float *)(param_1 + 8) = fVar17;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(float *)(param_1 + 0x10) = fVar11;
      *(float *)(param_1 + 0x14) = fVar21;
      *(float *)(param_1 + 0x18) = fVar14;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(float *)(param_1 + 0x20) = fVar15;
      *(float *)(param_1 + 0x24) = fVar20;
      *(float *)(param_1 + 0x28) = fVar16;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(float *)(param_1 + 0x3c) = fVar5;
      *(ulong *)(param_1 + 0x30) =
           CONCAT44(auVar22._4_4_ * fVar10 + fStack_74 * fVar21 + auVar12._4_4_ * fVar20 + fVar9,
                    auVar22._0_4_ * fVar19 + fStack_74 * fVar11 + auVar12._0_4_ * fVar15 + fVar8);
      *(float *)(param_1 + 0x38) =
           auVar22._8_4_ * fVar17 + fStack_74 * fVar14 + auVar12._8_4_ * fVar16 + fVar1;
      goto LAB_001021b0;
    }
  }
  *(undefined1 (*) [16])param_1 = ZEXT416(_LC14);
  uVar4 = _UNK_00106218;
  *(undefined8 *)(param_1 + 0x10) = __LC15;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  uVar4 = _UNK_00106228;
  *(undefined8 *)(param_1 + 0x20) = __LC16;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  uVar4 = CONCAT44(_LC7,_UNK_001061f8);
  *(undefined8 *)(param_1 + 0x30) = __LC12;
  *(undefined8 *)(param_1 + 0x38) = uVar4;
LAB_001021b0:
  if (lVar6 != 0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::BodyInterface::GetCenterOfMassTransform(JPH::BodyID const&) const */

BodyID * JPH::BodyInterface::GetCenterOfMassTransform(BodyID *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  long lVar8;
  ulong uVar9;
  uint *in_RDX;
  long *in_RSI;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  plVar2 = (long *)*in_RSI;
  if (*in_RDX != 0xffffffff) {
    lVar8 = (**(code **)(*plVar2 + 0x10))(plVar2);
    fVar5 = _LC7;
    uVar9 = (ulong)(*in_RDX & 0x7fffff);
    if (((uVar9 < *(ulong *)plVar2[1]) &&
        (puVar3 = *(undefined8 **)(((ulong *)plVar2[1])[2] + uVar9 * 8), ((ulong)puVar3 & 1) == 0))
       && (*in_RDX == *(uint *)(puVar3 + 0xe))) {
      uVar4 = puVar3[3];
      fVar6 = (float)puVar3[2];
      fVar10 = (float)uVar4;
      uVar1 = *(undefined4 *)(puVar3 + 1);
      fVar7 = (float)((ulong)puVar3[2] >> 0x20);
      fVar15 = fVar6 + fVar6;
      *(undefined8 *)(param_1 + 0x30) = *puVar3;
      fVar11 = (float)((ulong)uVar4 >> 0x20);
      *(float *)(param_1 + 0x3c) = fVar5;
      fVar16 = fVar7 + fVar7;
      *(undefined4 *)(param_1 + 0x38) = uVar1;
      fVar17 = fVar10 * (fVar10 + fVar10);
      fVar14 = (fVar10 + fVar10) * fVar11;
      auVar13._0_4_ = (fVar5 - fVar7 * fVar16) - fVar17;
      auVar13._4_4_ = fVar7 * fVar15 + fVar14;
      auVar13._8_4_ = fVar10 * fVar15 - fVar16 * fVar11;
      auVar13._12_4_ = 0;
      *(undefined1 (*) [16])param_1 = auVar13;
      *(ulong *)(param_1 + 0x10) =
           CONCAT44((fVar5 - fVar17) - fVar6 * fVar15,fVar7 * fVar15 - fVar14);
      *(ulong *)(param_1 + 0x18) = (ulong)(uint)(fVar15 * fVar11 + fVar10 * fVar16);
      auVar12._4_4_ = fVar10 * fVar16 - fVar15 * fVar11;
      auVar12._0_4_ = fVar10 * fVar15 + fVar16 * fVar11;
      auVar12._8_4_ = (fVar5 - fVar6 * fVar15) - fVar7 * fVar16;
      auVar12._12_4_ = 0;
      *(undefined1 (*) [16])(param_1 + 0x20) = auVar12;
    }
    else {
      *(undefined1 (*) [16])param_1 = ZEXT416(_LC14);
      uVar4 = _UNK_00106218;
      *(undefined8 *)(param_1 + 0x10) = __LC15;
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      uVar4 = _UNK_00106228;
      *(undefined8 *)(param_1 + 0x20) = __LC16;
      *(undefined8 *)(param_1 + 0x28) = uVar4;
      uVar4 = CONCAT44(_LC7,_UNK_001061f8);
      *(undefined8 *)(param_1 + 0x30) = __LC12;
      *(undefined8 *)(param_1 + 0x38) = uVar4;
    }
    if (lVar8 != 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    return param_1;
  }
  *(undefined1 (*) [16])param_1 = ZEXT416(_LC14);
  uVar4 = _UNK_00106218;
  *(undefined8 *)(param_1 + 0x10) = __LC15;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  uVar4 = _UNK_00106228;
  *(undefined8 *)(param_1 + 0x20) = __LC16;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  uVar4 = CONCAT44(_LC7,_UNK_001061f8);
  *(undefined8 *)(param_1 + 0x30) = __LC12;
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  return param_1;
}



/* JPH::BodyInterface::MoveKinematic(JPH::BodyID const&, JPH::Vec3, JPH::Quat, float) */

void JPH::BodyInterface::MoveKinematic
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long *param_1,uint *param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  float fVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  
  plVar1 = (long *)*param_1;
  if (*param_6 == 0xffffffff) {
    return;
  }
  lVar4 = (**(code **)(*plVar1 + 0x20))(plVar1);
  uVar5 = (ulong)(*param_6 & 0x7fffff);
  if (((uVar5 < *(ulong *)plVar1[1]) &&
      (uVar5 = *(ulong *)(((ulong *)plVar1[1])[2] + uVar5 * 8), (uVar5 & 1) == 0)) &&
     (*param_6 == *(uint *)(uVar5 + 0x70))) {
    JPH::Body::MoveKinematic(param_1_00,param_2,param_3,param_4,uVar5);
    puVar2 = *(undefined8 **)(uVar5 + 0x48);
    if (((puVar2 == (undefined8 *)0x0) || (*(int *)(puVar2 + 0xe) == -1)) &&
       ((*(char *)(uVar5 + 0x78) != '\0' &&
        ((fVar3 = (float)*puVar2, fVar6 = (float)((ulong)*puVar2 >> 0x20),
         _LC11 < (float)puVar2[1] * (float)puVar2[1] + fVar6 * fVar6 + fVar3 * fVar3 + 0.0 ||
         (fVar6 = (float)puVar2[2], fVar3 = (float)((ulong)puVar2[2] >> 0x20),
         _LC11 < (float)puVar2[3] * (float)puVar2[3] + fVar3 * fVar3 + fVar6 * fVar6 + 0.0)))))) {
      JPH::BodyManager::ActivateBodies((BodyID *)param_1[1],(int)param_6);
    }
  }
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0010268c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,lVar4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::BodyInterface::SetLinearAndAngularVelocity(JPH::BodyID const&, JPH::Vec3, JPH::Vec3) */

void JPH::BodyInterface::SetLinearAndAngularVelocity
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long *param_1,uint *param_6)

{
  byte bVar1;
  long *plVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 auVar11 [16];
  float fVar14;
  float local_48;
  float fStack_44;
  float fStack_40;
  uint uStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  uint uStack_2c;
  
  plVar2 = (long *)*param_1;
  if (*param_6 != 0xffffffff) {
    lVar5 = (**(code **)(*plVar2 + 0x20))(plVar2);
    uVar6 = (ulong)(*param_6 & 0x7fffff);
    if ((((uVar6 < *(ulong *)plVar2[1]) &&
         (uVar6 = *(ulong *)(((ulong *)plVar2[1])[2] + uVar6 * 8), (uVar6 & 1) == 0)) &&
        (*param_6 == *(uint *)(uVar6 + 0x70))) && (*(char *)(uVar6 + 0x78) != '\0')) {
      pfVar3 = *(float **)(uVar6 + 0x48);
      auVar11._4_4_ = _UNK_001061d4;
      auVar11._0_4_ = __LC4;
      auVar11._8_4_ = _UNK_001061d8;
      auVar11._12_4_ = _UNK_001061dc;
      bVar1 = *(byte *)((long)pfVar3 + 0x7a);
      auVar7._1_3_ = 0;
      auVar7[0] = bVar1;
      auVar7[4] = bVar1;
      auVar7._5_3_ = 0;
      auVar7[8] = bVar1;
      auVar7._9_3_ = 0;
      auVar7[0xc] = bVar1;
      auVar7._13_3_ = 0;
      auVar11 = auVar11 & auVar7;
      local_48 = (float)param_1_00;
      fStack_44 = (float)((ulong)param_1_00 >> 0x20);
      fStack_40 = (float)param_2;
      uStack_3c = (uint)((ulong)param_2 >> 0x20);
      fVar10 = (float)(-(uint)(auVar11._0_4_ == __LC4) & (uint)local_48);
      fVar12 = (float)(-(uint)(auVar11._4_4_ == _UNK_001061d4) & (uint)fStack_44);
      fVar13 = (float)(-(uint)(auVar11._8_4_ == _UNK_001061d8) & (uint)fStack_40);
      fVar14 = (float)(-(uint)(auVar11._12_4_ == _UNK_001061dc) & uStack_3c);
      *pfVar3 = fVar10;
      pfVar3[1] = fVar12;
      pfVar3[2] = fVar13;
      pfVar3[3] = fVar14;
      fVar8 = fVar13 * fVar13 + fVar10 * fVar10 + 0.0 + fVar12 * fVar12;
      fVar9 = pfVar3[0x19];
      if (fVar9 * fVar9 < fVar8) {
        fVar9 = fVar9 / SQRT(fVar8);
        *pfVar3 = fVar9 * fVar10;
        pfVar3[1] = fVar9 * fVar12;
        pfVar3[2] = fVar9 * fVar13;
        pfVar3[3] = fVar9 * fVar14;
      }
      auVar4._4_4_ = _UNK_001061e4;
      auVar4._0_4_ = __LC6;
      auVar4._8_4_ = _UNK_001061e8;
      auVar4._12_4_ = _UNK_001061ec;
      auVar7 = auVar7 & auVar4;
      local_38 = (float)param_3;
      fStack_34 = (float)((ulong)param_3 >> 0x20);
      fStack_30 = (float)param_4;
      uStack_2c = (uint)((ulong)param_4 >> 0x20);
      fVar8 = (float)(-(uint)(auVar7._0_4_ == __LC6) & (uint)local_38);
      fVar10 = (float)(-(uint)(auVar7._4_4_ == _UNK_001061e4) & (uint)fStack_34);
      fVar12 = (float)(-(uint)(auVar7._8_4_ == _UNK_001061e8) & (uint)fStack_30);
      fVar13 = (float)(-(uint)(auVar7._12_4_ == _UNK_001061ec) & uStack_2c);
      pfVar3[4] = fVar8;
      pfVar3[5] = fVar10;
      pfVar3[6] = fVar12;
      pfVar3[7] = fVar13;
      fVar14 = fVar12 * fVar12 + fVar8 * fVar8 + 0.0 + fVar10 * fVar10;
      fVar9 = pfVar3[0x1a];
      if (fVar9 * fVar9 < fVar14) {
        fVar9 = fVar9 / SQRT(fVar14);
        pfVar3[4] = fVar9 * fVar8;
        pfVar3[5] = fVar9 * fVar10;
        pfVar3[6] = fVar9 * fVar12;
        pfVar3[7] = fVar9 * fVar13;
      }
      if ((pfVar3[0x1c] == -NAN) &&
         ((_LC11 < fStack_40 * fStack_40 + fStack_44 * fStack_44 + local_48 * local_48 + 0.0 ||
          (_LC11 < fStack_30 * fStack_30 + fStack_34 * fStack_34 + local_38 * local_38 + 0.0)))) {
        JPH::BodyManager::ActivateBodies((BodyID *)param_1[1],(int)param_6);
      }
    }
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00102801. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x28))(plVar2,lVar5);
      return;
    }
  }
  return;
}



/* JPH::BodyInterface::GetLinearAndAngularVelocity(JPH::BodyID const&, JPH::Vec3&, JPH::Vec3&) const
    */

void __thiscall
JPH::BodyInterface::GetLinearAndAngularVelocity
          (BodyInterface *this,BodyID *param_1,Vec3 *param_2,Vec3 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  plVar1 = *(long **)this;
  if (*(int *)param_1 == -1) {
    *(undefined1 (*) [16])param_3 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])param_2 = (undefined1  [16])0x0;
  }
  else {
    lVar4 = (**(code **)(*plVar1 + 0x10))(plVar1);
    uVar5 = (ulong)(*(uint *)param_1 & 0x7fffff);
    if ((((uVar5 < *(ulong *)plVar1[1]) &&
         (uVar5 = *(ulong *)(((ulong *)plVar1[1])[2] + uVar5 * 8), (uVar5 & 1) == 0)) &&
        (*(uint *)param_1 == *(uint *)(uVar5 + 0x70))) && (*(char *)(uVar5 + 0x78) != '\0')) {
      puVar2 = *(undefined8 **)(uVar5 + 0x48);
      uVar3 = puVar2[1];
      *(undefined8 *)param_2 = *puVar2;
      *(undefined8 *)(param_2 + 8) = uVar3;
      uVar3 = puVar2[3];
      *(undefined8 *)param_3 = puVar2[2];
      *(undefined8 *)(param_3 + 8) = uVar3;
    }
    else {
      *(undefined1 (*) [16])param_3 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])param_2 = (undefined1  [16])0x0;
    }
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00102a4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::BodyInterface::SetLinearVelocity(JPH::BodyID const&, JPH::Vec3) */

void JPH::BodyInterface::SetLinearVelocity
               (undefined8 param_1_00,undefined8 param_2,long *param_1,uint *param_4)

{
  byte bVar1;
  long *plVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar9;
  float fVar10;
  undefined1 auVar8 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float local_38;
  float fStack_34;
  float fStack_30;
  uint uStack_2c;
  
  plVar2 = (long *)*param_1;
  if (*param_4 != 0xffffffff) {
    lVar5 = (**(code **)(*plVar2 + 0x20))(plVar2);
    uVar6 = (ulong)(*param_4 & 0x7fffff);
    if ((((uVar6 < *(ulong *)plVar2[1]) &&
         (uVar6 = *(ulong *)(((ulong *)plVar2[1])[2] + uVar6 * 8), (uVar6 & 1) == 0)) &&
        (*param_4 == *(uint *)(uVar6 + 0x70))) && (*(char *)(uVar6 + 0x78) != '\0')) {
      pfVar3 = *(float **)(uVar6 + 0x48);
      bVar1 = *(byte *)((long)pfVar3 + 0x7a);
      auVar8._1_3_ = 0;
      auVar8[0] = bVar1;
      auVar8[4] = bVar1;
      auVar8._5_3_ = 0;
      auVar8[8] = bVar1;
      auVar8._9_3_ = 0;
      auVar8[0xc] = bVar1;
      auVar8._13_3_ = 0;
      auVar4._4_4_ = _UNK_001061d4;
      auVar4._0_4_ = __LC4;
      auVar4._8_4_ = _UNK_001061d8;
      auVar4._12_4_ = _UNK_001061dc;
      auVar8 = auVar8 & auVar4;
      local_38 = (float)param_1_00;
      fStack_34 = (float)((ulong)param_1_00 >> 0x20);
      fStack_30 = (float)param_2;
      uStack_2c = (uint)((ulong)param_2 >> 0x20);
      fVar7 = (float)(-(uint)(auVar8._0_4_ == __LC4) & (uint)local_38);
      fVar9 = (float)(-(uint)(auVar8._4_4_ == _UNK_001061d4) & (uint)fStack_34);
      fVar10 = (float)(-(uint)(auVar8._8_4_ == _UNK_001061d8) & (uint)fStack_30);
      fVar11 = (float)(-(uint)(auVar8._12_4_ == _UNK_001061dc) & uStack_2c);
      *pfVar3 = fVar7;
      pfVar3[1] = fVar9;
      pfVar3[2] = fVar10;
      pfVar3[3] = fVar11;
      fVar12 = fVar10 * fVar10 + fVar7 * fVar7 + 0.0 + fVar9 * fVar9;
      fVar13 = pfVar3[0x19];
      if (fVar13 * fVar13 < fVar12) {
        fVar13 = fVar13 / SQRT(fVar12);
        *pfVar3 = fVar13 * fVar7;
        pfVar3[1] = fVar13 * fVar9;
        pfVar3[2] = fVar13 * fVar10;
        pfVar3[3] = fVar13 * fVar11;
      }
      if ((pfVar3[0x1c] == -NAN) &&
         (_LC11 < fStack_30 * fStack_30 + fStack_34 * fStack_34 + local_38 * local_38 + 0.0)) {
        JPH::BodyManager::ActivateBodies((BodyID *)param_1[1],(int)param_4);
      }
    }
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00102b21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x28))(plVar2,lVar5);
      return;
    }
  }
  return;
}



/* JPH::BodyInterface::GetLinearVelocity(JPH::BodyID const&) const */

undefined1  [16] __thiscall
JPH::BodyInterface::GetLinearVelocity(BodyInterface *this,BodyID *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = 0;
  uVar4 = 0;
  plVar1 = *(long **)this;
  if (*(int *)param_1 == -1) goto LAB_00102c92;
  lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
  uVar3 = (ulong)(*(uint *)param_1 & 0x7fffff);
  if (uVar3 < *(ulong *)plVar1[1]) {
    uVar3 = *(ulong *)(((ulong *)plVar1[1])[2] + uVar3 * 8);
    if ((((uVar3 & 1) != 0) || (*(uint *)param_1 != *(uint *)(uVar3 + 0x70))) ||
       (*(char *)(uVar3 + 0x78) == '\0')) goto LAB_00102c7e;
    uVar5 = **(undefined8 **)(uVar3 + 0x48);
    uVar4 = (*(undefined8 **)(uVar3 + 0x48))[1];
  }
  else {
LAB_00102c7e:
    uVar5 = 0;
    uVar4 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
LAB_00102c92:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::BodyInterface::AddLinearVelocity(JPH::BodyID const&, JPH::Vec3) */

void JPH::BodyInterface::AddLinearVelocity
               (undefined8 param_1_00,undefined8 param_2,long *param_1,uint *param_4)

{
  byte bVar1;
  long *plVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  plVar2 = (long *)*param_1;
  if (*param_4 != 0xffffffff) {
    lVar5 = (**(code **)(*plVar2 + 0x20))(plVar2);
    uVar6 = (ulong)(*param_4 & 0x7fffff);
    if ((((uVar6 < *(ulong *)plVar2[1]) &&
         (uVar6 = *(ulong *)(((ulong *)plVar2[1])[2] + uVar6 * 8), (uVar6 & 1) == 0)) &&
        (*param_4 == *(uint *)(uVar6 + 0x70))) && (*(char *)(uVar6 + 0x78) != '\0')) {
      pfVar3 = *(float **)(uVar6 + 0x48);
      local_38 = (float)param_1_00;
      fStack_34 = (float)((ulong)param_1_00 >> 0x20);
      fStack_30 = (float)param_2;
      fStack_2c = (float)((ulong)param_2 >> 0x20);
      bVar1 = *(byte *)((long)pfVar3 + 0x7a);
      auVar12._1_3_ = 0;
      auVar12[0] = bVar1;
      auVar12[4] = bVar1;
      auVar12._5_3_ = 0;
      auVar12[8] = bVar1;
      auVar12._9_3_ = 0;
      auVar12[0xc] = bVar1;
      auVar12._13_3_ = 0;
      auVar4._4_4_ = _UNK_001061d4;
      auVar4._0_4_ = __LC4;
      auVar4._8_4_ = _UNK_001061d8;
      auVar4._12_4_ = _UNK_001061dc;
      auVar12 = auVar12 & auVar4;
      fVar7 = (float)((uint)(local_38 + *pfVar3) & -(uint)(auVar12._0_4_ == __LC4));
      fVar8 = (float)((uint)(fStack_34 + pfVar3[1]) & -(uint)(auVar12._4_4_ == _UNK_001061d4));
      fVar9 = (float)((uint)(fStack_30 + pfVar3[2]) & -(uint)(auVar12._8_4_ == _UNK_001061d8));
      fVar10 = (float)((uint)(fStack_2c + pfVar3[3]) & -(uint)(auVar12._12_4_ == _UNK_001061dc));
      *pfVar3 = fVar7;
      pfVar3[1] = fVar8;
      pfVar3[2] = fVar9;
      pfVar3[3] = fVar10;
      fVar11 = fVar9 * fVar9 + fVar7 * fVar7 + 0.0 + fVar8 * fVar8;
      fVar13 = pfVar3[0x19];
      if (fVar13 * fVar13 < fVar11) {
        fVar13 = fVar13 / SQRT(fVar11);
        *pfVar3 = fVar13 * fVar7;
        pfVar3[1] = fVar13 * fVar8;
        pfVar3[2] = fVar13 * fVar9;
        pfVar3[3] = fVar13 * fVar10;
      }
      if ((pfVar3[0x1c] == -NAN) &&
         (fVar7 = (float)*(undefined8 *)pfVar3,
         fVar13 = (float)((ulong)*(undefined8 *)pfVar3 >> 0x20),
         _LC11 < (float)*(undefined8 *)(pfVar3 + 2) * (float)*(undefined8 *)(pfVar3 + 2) +
                 fVar13 * fVar13 + fVar7 * fVar7 + 0.0)) {
        JPH::BodyManager::ActivateBodies((BodyID *)param_1[1],(int)param_4);
      }
    }
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00102d51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x28))(plVar2,lVar5);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::BodyInterface::AddLinearAndAngularVelocity(JPH::BodyID const&, JPH::Vec3, JPH::Vec3) */

void JPH::BodyInterface::AddLinearAndAngularVelocity
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long *param_1,uint *param_6)

{
  byte bVar1;
  long *plVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  plVar2 = (long *)*param_1;
  if (*param_6 != 0xffffffff) {
    lVar5 = (**(code **)(*plVar2 + 0x20))(plVar2);
    uVar6 = (ulong)(*param_6 & 0x7fffff);
    if ((((uVar6 < *(ulong *)plVar2[1]) &&
         (uVar6 = *(ulong *)(((ulong *)plVar2[1])[2] + uVar6 * 8), (uVar6 & 1) == 0)) &&
        (*param_6 == *(uint *)(uVar6 + 0x70))) && (*(char *)(uVar6 + 0x78) != '\0')) {
      pfVar3 = *(float **)(uVar6 + 0x48);
      auVar12._4_4_ = _UNK_001061d4;
      auVar12._0_4_ = __LC4;
      auVar12._8_4_ = _UNK_001061d8;
      auVar12._12_4_ = _UNK_001061dc;
      local_48 = (float)param_1_00;
      fStack_44 = (float)((ulong)param_1_00 >> 0x20);
      fStack_40 = (float)param_2;
      fStack_3c = (float)((ulong)param_2 >> 0x20);
      bVar1 = *(byte *)((long)pfVar3 + 0x7a);
      auVar14._1_3_ = 0;
      auVar14[0] = bVar1;
      auVar14[4] = bVar1;
      auVar14._5_3_ = 0;
      auVar14[8] = bVar1;
      auVar14._9_3_ = 0;
      auVar14[0xc] = bVar1;
      auVar14._13_3_ = 0;
      auVar12 = auVar12 & auVar14;
      fVar7 = (float)((uint)(local_48 + *pfVar3) & -(uint)(auVar12._0_4_ == __LC4));
      fVar8 = (float)((uint)(fStack_44 + pfVar3[1]) & -(uint)(auVar12._4_4_ == _UNK_001061d4));
      fVar9 = (float)((uint)(fStack_40 + pfVar3[2]) & -(uint)(auVar12._8_4_ == _UNK_001061d8));
      fVar10 = (float)((uint)(fStack_3c + pfVar3[3]) & -(uint)(auVar12._12_4_ == _UNK_001061dc));
      *pfVar3 = fVar7;
      pfVar3[1] = fVar8;
      pfVar3[2] = fVar9;
      pfVar3[3] = fVar10;
      fVar11 = fVar9 * fVar9 + fVar7 * fVar7 + 0.0 + fVar8 * fVar8;
      fVar13 = pfVar3[0x19];
      if (fVar13 * fVar13 < fVar11) {
        fVar13 = fVar13 / SQRT(fVar11);
        *pfVar3 = fVar13 * fVar7;
        pfVar3[1] = fVar13 * fVar8;
        pfVar3[2] = fVar13 * fVar9;
        pfVar3[3] = fVar13 * fVar10;
      }
      auVar4._4_4_ = _UNK_001061e4;
      auVar4._0_4_ = __LC6;
      auVar4._8_4_ = _UNK_001061e8;
      auVar4._12_4_ = _UNK_001061ec;
      auVar14 = auVar14 & auVar4;
      local_38 = (float)param_3;
      fStack_34 = (float)((ulong)param_3 >> 0x20);
      fStack_30 = (float)param_4;
      fStack_2c = (float)((ulong)param_4 >> 0x20);
      fVar7 = (float)((uint)(local_38 + pfVar3[4]) & -(uint)(auVar14._0_4_ == __LC6));
      fVar8 = (float)((uint)(fStack_34 + pfVar3[5]) & -(uint)(auVar14._4_4_ == _UNK_001061e4));
      fVar9 = (float)((uint)(fStack_30 + pfVar3[6]) & -(uint)(auVar14._8_4_ == _UNK_001061e8));
      fVar10 = (float)((uint)(fStack_2c + pfVar3[7]) & -(uint)(auVar14._12_4_ == _UNK_001061ec));
      pfVar3[4] = fVar7;
      pfVar3[5] = fVar8;
      pfVar3[6] = fVar9;
      pfVar3[7] = fVar10;
      fVar11 = fVar9 * fVar9 + fVar7 * fVar7 + 0.0 + fVar8 * fVar8;
      fVar13 = pfVar3[0x1a];
      if (fVar13 * fVar13 < fVar11) {
        fVar13 = fVar13 / SQRT(fVar11);
        pfVar3[4] = fVar13 * fVar7;
        pfVar3[5] = fVar13 * fVar8;
        pfVar3[6] = fVar13 * fVar9;
        pfVar3[7] = fVar13 * fVar10;
      }
      if ((pfVar3[0x1c] == -NAN) &&
         ((fVar13 = (float)*(undefined8 *)pfVar3,
          fVar7 = (float)((ulong)*(undefined8 *)pfVar3 >> 0x20),
          _LC11 < (float)*(undefined8 *)(pfVar3 + 2) * (float)*(undefined8 *)(pfVar3 + 2) +
                  fVar7 * fVar7 + fVar13 * fVar13 + 0.0 ||
          (fVar7 = (float)*(undefined8 *)(pfVar3 + 4),
          fVar13 = (float)((ulong)*(undefined8 *)(pfVar3 + 4) >> 0x20),
          _LC11 < (float)*(undefined8 *)(pfVar3 + 6) * (float)*(undefined8 *)(pfVar3 + 6) +
                  fVar13 * fVar13 + fVar7 * fVar7 + 0.0)))) {
        JPH::BodyManager::ActivateBodies((BodyID *)param_1[1],(int)param_6);
      }
    }
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00102ef1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x28))(plVar2,lVar5);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::BodyInterface::SetAngularVelocity(JPH::BodyID const&, JPH::Vec3) */

void JPH::BodyInterface::SetAngularVelocity
               (undefined8 param_1_00,undefined8 param_2,long *param_1,uint *param_4)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar9;
  float fVar10;
  undefined1 auVar8 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float local_38;
  float fStack_34;
  float fStack_30;
  uint uStack_2c;
  
  plVar2 = (long *)*param_1;
  if (*param_4 != 0xffffffff) {
    lVar5 = (**(code **)(*plVar2 + 0x20))(plVar2);
    uVar6 = (ulong)(*param_4 & 0x7fffff);
    if ((((uVar6 < *(ulong *)plVar2[1]) &&
         (uVar6 = *(ulong *)(((ulong *)plVar2[1])[2] + uVar6 * 8), (uVar6 & 1) == 0)) &&
        (*param_4 == *(uint *)(uVar6 + 0x70))) && (*(char *)(uVar6 + 0x78) != '\0')) {
      lVar3 = *(long *)(uVar6 + 0x48);
      bVar1 = *(byte *)(lVar3 + 0x7a);
      auVar8._1_3_ = 0;
      auVar8[0] = bVar1;
      auVar8[4] = bVar1;
      auVar8._5_3_ = 0;
      auVar8[8] = bVar1;
      auVar8._9_3_ = 0;
      auVar8[0xc] = bVar1;
      auVar8._13_3_ = 0;
      auVar4._4_4_ = _UNK_001061e4;
      auVar4._0_4_ = __LC6;
      auVar4._8_4_ = _UNK_001061e8;
      auVar4._12_4_ = _UNK_001061ec;
      auVar8 = auVar8 & auVar4;
      local_38 = (float)param_1_00;
      fStack_34 = (float)((ulong)param_1_00 >> 0x20);
      fStack_30 = (float)param_2;
      uStack_2c = (uint)((ulong)param_2 >> 0x20);
      fVar7 = (float)(-(uint)(auVar8._0_4_ == __LC6) & (uint)local_38);
      fVar9 = (float)(-(uint)(auVar8._4_4_ == _UNK_001061e4) & (uint)fStack_34);
      fVar10 = (float)(-(uint)(auVar8._8_4_ == _UNK_001061e8) & (uint)fStack_30);
      fVar11 = (float)(-(uint)(auVar8._12_4_ == _UNK_001061ec) & uStack_2c);
      *(float *)(lVar3 + 0x10) = fVar7;
      *(float *)(lVar3 + 0x14) = fVar9;
      *(float *)(lVar3 + 0x18) = fVar10;
      *(float *)(lVar3 + 0x1c) = fVar11;
      fVar12 = fVar10 * fVar10 + fVar7 * fVar7 + 0.0 + fVar9 * fVar9;
      fVar13 = *(float *)(lVar3 + 0x68);
      if (fVar13 * fVar13 < fVar12) {
        fVar13 = fVar13 / SQRT(fVar12);
        *(float *)(lVar3 + 0x10) = fVar13 * fVar7;
        *(float *)(lVar3 + 0x14) = fVar13 * fVar9;
        *(float *)(lVar3 + 0x18) = fVar13 * fVar10;
        *(float *)(lVar3 + 0x1c) = fVar13 * fVar11;
      }
      if ((*(int *)(lVar3 + 0x70) == -1) &&
         (_LC11 < fStack_30 * fStack_30 + fStack_34 * fStack_34 + local_38 * local_38 + 0.0)) {
        JPH::BodyManager::ActivateBodies((BodyID *)param_1[1],(int)param_4);
      }
    }
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00103141. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x28))(plVar2,lVar5);
      return;
    }
  }
  return;
}



/* JPH::BodyInterface::GetAngularVelocity(JPH::BodyID const&) const */

undefined1  [16] __thiscall
JPH::BodyInterface::GetAngularVelocity(BodyInterface *this,BodyID *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = 0;
  uVar4 = 0;
  plVar1 = *(long **)this;
  if (*(int *)param_1 == -1) goto LAB_001032b2;
  lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
  uVar3 = (ulong)(*(uint *)param_1 & 0x7fffff);
  if (uVar3 < *(ulong *)plVar1[1]) {
    uVar3 = *(ulong *)(((ulong *)plVar1[1])[2] + uVar3 * 8);
    if ((((uVar3 & 1) != 0) || (*(uint *)param_1 != *(uint *)(uVar3 + 0x70))) ||
       (*(char *)(uVar3 + 0x78) == '\0')) goto LAB_0010329e;
    uVar5 = *(undefined8 *)(*(long *)(uVar3 + 0x48) + 0x10);
    uVar4 = *(undefined8 *)(*(long *)(uVar3 + 0x48) + 0x18);
  }
  else {
LAB_0010329e:
    uVar5 = 0;
    uVar4 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
LAB_001032b2:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* JPH::BodyInterface::GetPointVelocity(JPH::BodyID const&, JPH::Vec3) const */

undefined1  [16]
JPH::BodyInterface::GetPointVelocity
          (undefined8 param_1_00,float param_2,long *param_1,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  long lVar4;
  ulong uVar5;
  float fVar6;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  param_1 = (long *)*param_1;
  local_28 = (float)param_1_00;
  fStack_24 = (float)((ulong)param_1_00 >> 0x20);
  if (*param_4 == -NAN) {
    local_28 = 0.0;
    fStack_24 = 0.0;
    fStack_20 = 0.0;
    fStack_1c = 0.0;
    goto LAB_00103364;
  }
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  uVar5 = (ulong)((uint)*param_4 & 0x7fffff);
  if (uVar5 < *(ulong *)param_1[1]) {
    pfVar1 = *(float **)(((ulong *)param_1[1])[2] + uVar5 * 8);
    if (((((ulong)pfVar1 & 1) != 0) || (*param_4 != pfVar1[0x1c])) ||
       (*(char *)(pfVar1 + 0x1e) == '\0')) goto LAB_00103344;
    fVar6 = local_28 - *pfVar1;
    pfVar2 = *(float **)(pfVar1 + 0x12);
    fStack_1c = (fStack_24 - pfVar1[1]) * pfVar2[4] - pfVar2[5] * fVar6;
    local_28 = ((param_2 - pfVar1[2]) * pfVar2[5] - pfVar2[6] * (fStack_24 - pfVar1[1])) + *pfVar2;
    fStack_24 = (fVar6 * pfVar2[6] - pfVar2[4] * (param_2 - pfVar1[2])) + pfVar2[1];
    fStack_20 = fStack_1c + pfVar2[2];
    fStack_1c = fStack_1c + pfVar2[3];
  }
  else {
LAB_00103344:
    local_28 = 0.0;
    fStack_24 = 0.0;
    fStack_20 = 0.0;
    fStack_1c = 0.0;
  }
  if (lVar4 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
LAB_00103364:
  auVar3._4_4_ = fStack_24;
  auVar3._0_4_ = local_28;
  auVar3._8_4_ = fStack_20;
  auVar3._12_4_ = fStack_1c;
  return auVar3;
}



/* JPH::BodyInterface::AddForce(JPH::BodyID const&, JPH::Vec3, JPH::EActivation) */

void JPH::BodyInterface::AddForce
               (undefined8 param_1_00,float param_2,long *param_1,uint *param_4,int param_5)

{
  long *plVar1;
  Body *this;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  float fVar5;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  fVar5 = (float)((ulong)param_1_00 >> 0x20);
  plVar1 = (long *)*param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_4 != 0xffffffff) {
    lVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar4 = (ulong)(*param_4 & 0x7fffff);
    if (uVar4 < *(ulong *)plVar1[1]) {
      this = *(Body **)(((ulong *)plVar1[1])[2] + uVar4 * 8);
      if (((((ulong)this & 1) == 0) && (*param_4 == *(uint *)(this + 0x70))) &&
         (this[0x78] == (Body)0x2)) {
        lVar2 = *(long *)(this + 0x48);
        if (param_5 == 0) {
          *(ulong *)(lVar2 + 0x40) =
               CONCAT44(*(float *)(lVar2 + 0x44) + fVar5,
                        *(float *)(lVar2 + 0x40) + (float)param_1_00);
          *(float *)(lVar2 + 0x48) = *(float *)(lVar2 + 0x48) + param_2;
          if (*(int *)(lVar2 + 0x70) == -1) {
            JPH::BodyManager::ActivateBodies((BodyID *)param_1[1],(int)this + 0x70);
          }
          else {
            Body::GetSleepTestPoints(this,(Vec3 *)&local_68);
            lVar2 = *(long *)(this + 0x48);
            *(undefined8 *)(lVar2 + 0x80) = local_68;
            *(undefined4 *)(lVar2 + 0x88) = local_60;
            *(undefined8 *)(lVar2 + 0x90) = local_58;
            *(undefined4 *)(lVar2 + 0x98) = local_50;
            *(undefined4 *)(lVar2 + 0x8c) = 0;
            *(undefined4 *)(lVar2 + 0x9c) = 0;
            *(undefined8 *)(lVar2 + 0xa0) = local_48;
            *(undefined8 *)(lVar2 + 0xac) = 0;
            *(undefined4 *)(lVar2 + 0xa8) = local_40;
          }
        }
        else if ((lVar2 != 0) && (*(int *)(lVar2 + 0x70) != -1)) {
          *(ulong *)(lVar2 + 0x40) =
               CONCAT44(*(float *)(lVar2 + 0x44) + fVar5,
                        *(float *)(lVar2 + 0x40) + (float)param_1_00);
          *(float *)(lVar2 + 0x48) = *(float *)(lVar2 + 0x48) + param_2;
        }
      }
    }
    if (lVar3 != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010348b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x28))(plVar1,lVar3);
        return;
      }
      goto LAB_001035a8;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001035a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::BodyInterface::AddForce(JPH::BodyID const&, JPH::Vec3, JPH::Vec3, JPH::EActivation) */

void JPH::BodyInterface::AddForce
               (undefined8 param_1_00,float param_2,undefined8 param_3,float param_4,long *param_1,
               uint *param_6,int param_7)

{
  long *plVar1;
  Body *this;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  float fVar8;
  float fVar9;
  float local_78;
  float fStack_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  fVar9 = (float)((ulong)param_1_00 >> 0x20);
  fVar8 = (float)param_1_00;
  plVar1 = (long *)*param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_6 != 0xffffffff) {
    lVar6 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar7 = (ulong)(*param_6 & 0x7fffff);
    if (uVar7 < *(ulong *)plVar1[1]) {
      this = *(Body **)(((ulong *)plVar1[1])[2] + uVar7 * 8);
      if (((((ulong)this & 1) == 0) && (*param_6 == *(uint *)(this + 0x70))) &&
         (this[0x78] == (Body)0x2)) {
        lVar2 = *(long *)(this + 0x48);
        if ((param_7 == 0) || ((lVar2 != 0 && (*(int *)(lVar2 + 0x70) != -1)))) {
          *(float *)(lVar2 + 0x40) = *(float *)(lVar2 + 0x40) + fVar8;
          *(float *)(lVar2 + 0x44) = *(float *)(lVar2 + 0x44) + fVar9;
          *(float *)(lVar2 + 0x48) = *(float *)(lVar2 + 0x48) + param_2;
          local_78 = (float)param_3;
          fStack_74 = (float)((ulong)param_3 >> 0x20);
          fVar3 = *(float *)this;
          fVar4 = *(float *)(this + 4);
          fVar5 = *(float *)(this + 8);
          *(float *)(lVar2 + 0x4c) =
               (param_2 * (fStack_74 - fVar4) - (param_4 - fVar5) * fVar9) +
               *(float *)(lVar2 + 0x4c);
          *(ulong *)(lVar2 + 0x50) =
               CONCAT44((fVar9 * (local_78 - fVar3) - (fStack_74 - fVar4) * fVar8) +
                        *(float *)(lVar2 + 0x54),
                        (fVar8 * (param_4 - fVar5) - (local_78 - fVar3) * param_2) +
                        *(float *)(lVar2 + 0x50));
          if (param_7 == 0) {
            if (*(int *)(lVar2 + 0x70) == -1) {
              JPH::BodyManager::ActivateBodies((BodyID *)param_1[1],(int)this + 0x70);
            }
            else {
              Body::GetSleepTestPoints(this,(Vec3 *)&local_68);
              lVar2 = *(long *)(this + 0x48);
              *(undefined8 *)(lVar2 + 0x80) = local_68;
              *(undefined4 *)(lVar2 + 0x88) = local_60;
              *(undefined8 *)(lVar2 + 0x90) = local_58;
              *(undefined4 *)(lVar2 + 0x98) = local_50;
              *(undefined4 *)(lVar2 + 0x8c) = 0;
              *(undefined4 *)(lVar2 + 0x9c) = 0;
              *(undefined8 *)(lVar2 + 0xa0) = local_48;
              *(undefined8 *)(lVar2 + 0xac) = 0;
              *(undefined4 *)(lVar2 + 0xa8) = local_40;
            }
          }
        }
      }
    }
    if (lVar6 != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00103667. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x28))(plVar1,lVar6);
        return;
      }
      goto LAB_001037b7;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001037b7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::BodyInterface::AddTorque(JPH::BodyID const&, JPH::Vec3, JPH::EActivation) */

void JPH::BodyInterface::AddTorque
               (undefined8 param_1_00,float param_2,long *param_1,uint *param_4,int param_5)

{
  long *plVar1;
  Body *this;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  float fVar5;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  fVar5 = (float)((ulong)param_1_00 >> 0x20);
  plVar1 = (long *)*param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_4 != 0xffffffff) {
    lVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar4 = (ulong)(*param_4 & 0x7fffff);
    if (uVar4 < *(ulong *)plVar1[1]) {
      this = *(Body **)(((ulong *)plVar1[1])[2] + uVar4 * 8);
      if (((((ulong)this & 1) == 0) && (*param_4 == *(uint *)(this + 0x70))) &&
         (this[0x78] == (Body)0x2)) {
        lVar2 = *(long *)(this + 0x48);
        if (param_5 == 0) {
          *(ulong *)(lVar2 + 0x4c) =
               CONCAT44(*(float *)(lVar2 + 0x50) + fVar5,
                        *(float *)(lVar2 + 0x4c) + (float)param_1_00);
          *(float *)(lVar2 + 0x54) = *(float *)(lVar2 + 0x54) + param_2;
          if (*(int *)(lVar2 + 0x70) == -1) {
            JPH::BodyManager::ActivateBodies((BodyID *)param_1[1],(int)this + 0x70);
          }
          else {
            Body::GetSleepTestPoints(this,(Vec3 *)&local_68);
            lVar2 = *(long *)(this + 0x48);
            *(undefined8 *)(lVar2 + 0x80) = local_68;
            *(undefined4 *)(lVar2 + 0x88) = local_60;
            *(undefined8 *)(lVar2 + 0x90) = local_58;
            *(undefined4 *)(lVar2 + 0x98) = local_50;
            *(undefined4 *)(lVar2 + 0x8c) = 0;
            *(undefined4 *)(lVar2 + 0x9c) = 0;
            *(undefined8 *)(lVar2 + 0xa0) = local_48;
            *(undefined8 *)(lVar2 + 0xac) = 0;
            *(undefined4 *)(lVar2 + 0xa8) = local_40;
          }
        }
        else if ((lVar2 != 0) && (*(int *)(lVar2 + 0x70) != -1)) {
          *(ulong *)(lVar2 + 0x4c) =
               CONCAT44(*(float *)(lVar2 + 0x50) + fVar5,
                        *(float *)(lVar2 + 0x4c) + (float)param_1_00);
          *(float *)(lVar2 + 0x54) = *(float *)(lVar2 + 0x54) + param_2;
        }
      }
    }
    if (lVar3 != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010386b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x28))(plVar1,lVar3);
        return;
      }
      goto LAB_00103988;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103988:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::BodyInterface::AddForceAndTorque(JPH::BodyID const&, JPH::Vec3, JPH::Vec3, JPH::EActivation)
    */

void JPH::BodyInterface::AddForceAndTorque
               (undefined8 param_1_00,float param_2,undefined8 param_3,float param_4,long *param_1,
               uint *param_6,int param_7)

{
  long *plVar1;
  Body *this;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  plVar1 = (long *)*param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_6 != 0xffffffff) {
    lVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar4 = (ulong)(*param_6 & 0x7fffff);
    if (((((uVar4 < *(ulong *)plVar1[1]) &&
          (this = *(Body **)(((ulong *)plVar1[1])[2] + uVar4 * 8), ((ulong)this & 1) == 0)) &&
         (*param_6 == *(uint *)(this + 0x70))) && (this[0x78] == (Body)0x2)) &&
       ((lVar2 = *(long *)(this + 0x48), param_7 == 0 ||
        ((lVar2 != 0 && (*(int *)(lVar2 + 0x70) != -1)))))) {
      *(ulong *)(lVar2 + 0x50) =
           CONCAT44(*(float *)(lVar2 + 0x54) + param_4,
                    *(float *)(lVar2 + 0x50) + (float)((ulong)param_3 >> 0x20));
      *(float *)(lVar2 + 0x40) = *(float *)(lVar2 + 0x40) + (float)param_1_00;
      *(float *)(lVar2 + 0x44) = *(float *)(lVar2 + 0x44) + (float)((ulong)param_1_00 >> 0x20);
      *(float *)(lVar2 + 0x48) = *(float *)(lVar2 + 0x48) + param_2;
      *(float *)(lVar2 + 0x4c) = *(float *)(lVar2 + 0x4c) + (float)param_3;
      if (param_7 == 0) {
        if (*(int *)(lVar2 + 0x70) == -1) {
          JPH::BodyManager::ActivateBodies((BodyID *)param_1[1],(int)this + 0x70);
        }
        else {
          Body::GetSleepTestPoints(this,(Vec3 *)&local_68);
          lVar2 = *(long *)(this + 0x48);
          *(undefined8 *)(lVar2 + 0x80) = local_68;
          *(undefined4 *)(lVar2 + 0x88) = local_60;
          *(undefined8 *)(lVar2 + 0x90) = local_58;
          *(undefined4 *)(lVar2 + 0x98) = local_50;
          *(undefined4 *)(lVar2 + 0x8c) = 0;
          *(undefined4 *)(lVar2 + 0x9c) = 0;
          *(undefined8 *)(lVar2 + 0xa0) = local_48;
          *(undefined8 *)(lVar2 + 0xac) = 0;
          *(undefined4 *)(lVar2 + 0xa8) = local_40;
        }
      }
    }
    if (lVar3 != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00103a47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x28))(plVar1,lVar3);
        return;
      }
      goto LAB_00103b78;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103b78:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::BodyInterface::AddImpulse(JPH::BodyID const&, JPH::Vec3) */

void JPH::BodyInterface::AddImpulse
               (undefined8 param_1_00,undefined8 param_2,long *param_1,uint *param_4)

{
  byte bVar1;
  long *plVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fStack_30;
  float fStack_2c;
  
  plVar2 = (long *)*param_1;
  if (*param_4 != 0xffffffff) {
    lVar5 = (**(code **)(*plVar2 + 0x20))(plVar2);
    uVar6 = (ulong)(*param_4 & 0x7fffff);
    if (uVar6 < *(ulong *)plVar2[1]) {
      uVar6 = *(ulong *)(((ulong *)plVar2[1])[2] + uVar6 * 8);
      if ((((uVar6 & 1) == 0) && (*param_4 == *(uint *)(uVar6 + 0x70))) &&
         (*(char *)(uVar6 + 0x78) == '\x02')) {
        pfVar3 = *(float **)(uVar6 + 0x48);
        bVar1 = *(byte *)((long)pfVar3 + 0x7a);
        fVar13 = pfVar3[0x16];
        auVar12._1_3_ = 0;
        auVar12[0] = bVar1;
        fStack_30 = (float)param_2;
        fStack_2c = (float)((ulong)param_2 >> 0x20);
        auVar12[4] = bVar1;
        auVar12._5_3_ = 0;
        auVar12[8] = bVar1;
        auVar12._9_3_ = 0;
        auVar12[0xc] = bVar1;
        auVar12._13_3_ = 0;
        auVar4._4_4_ = _UNK_001061d4;
        auVar4._0_4_ = __LC4;
        auVar4._8_4_ = _UNK_001061d8;
        auVar4._12_4_ = _UNK_001061dc;
        auVar12 = auVar12 & auVar4;
        fVar7 = (float)((uint)(fVar13 * (float)param_1_00 + *pfVar3) &
                       -(uint)(auVar12._0_4_ == __LC4));
        fVar8 = (float)((uint)(fVar13 * (float)((ulong)param_1_00 >> 0x20) + pfVar3[1]) &
                       -(uint)(auVar12._4_4_ == _UNK_001061d4));
        fVar9 = (float)((uint)(fVar13 * fStack_30 + pfVar3[2]) &
                       -(uint)(auVar12._8_4_ == _UNK_001061d8));
        fVar10 = (float)((uint)(fVar13 * fStack_2c + pfVar3[3]) &
                        -(uint)(auVar12._12_4_ == _UNK_001061dc));
        *pfVar3 = fVar7;
        pfVar3[1] = fVar8;
        pfVar3[2] = fVar9;
        pfVar3[3] = fVar10;
        fVar11 = fVar9 * fVar9 + fVar7 * fVar7 + 0.0 + fVar8 * fVar8;
        fVar13 = pfVar3[0x19];
        if (fVar13 * fVar13 < fVar11) {
          fVar13 = fVar13 / SQRT(fVar11);
          *pfVar3 = fVar13 * fVar7;
          pfVar3[1] = fVar13 * fVar8;
          pfVar3[2] = fVar13 * fVar9;
          pfVar3[3] = fVar13 * fVar10;
        }
        if (pfVar3[0x1c] == -NAN) {
          JPH::BodyManager::ActivateBodies((BodyID *)param_1[1],(int)param_4);
        }
      }
    }
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00103c01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x28))(plVar2,lVar5);
      return;
    }
  }
  return;
}



/* JPH::BodyInterface::AddImpulse(JPH::BodyID const&, JPH::Vec3, JPH::Vec3) */

void JPH::BodyInterface::AddImpulse
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long *param_1,uint *param_6)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  plVar1 = (long *)*param_1;
  if (*param_6 != 0xffffffff) {
    lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar3 = (ulong)(*param_6 & 0x7fffff);
    if ((((uVar3 < *(ulong *)plVar1[1]) &&
         (uVar3 = *(ulong *)(((ulong *)plVar1[1])[2] + uVar3 * 8), (uVar3 & 1) == 0)) &&
        (*param_6 == *(uint *)(uVar3 + 0x70))) && (*(char *)(uVar3 + 0x78) == '\x02')) {
      Body::AddImpulse(param_1_00,param_2,param_3,param_4,uVar3);
      if ((*(long *)(uVar3 + 0x48) == 0) || (*(int *)(*(long *)(uVar3 + 0x48) + 0x70) == -1)) {
        JPH::BodyManager::ActivateBodies((BodyID *)param_1[1],(int)param_6);
      }
    }
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00103d65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x28))(plVar1,lVar2,*(code **)(*plVar1 + 0x28));
      return;
    }
  }
  return;
}



/* JPH::BodyInterface::AddAngularImpulse(JPH::BodyID const&, JPH::Vec3) */

void JPH::BodyInterface::AddAngularImpulse
               (undefined8 param_1_00,undefined8 param_2,long *param_1,uint *param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  plVar1 = (long *)*param_1;
  if (*param_4 != 0xffffffff) {
    lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar3 = (ulong)(*param_4 & 0x7fffff);
    if ((((uVar3 < *(ulong *)plVar1[1]) &&
         (uVar3 = *(ulong *)(((ulong *)plVar1[1])[2] + uVar3 * 8), (uVar3 & 1) == 0)) &&
        (*param_4 == *(uint *)(uVar3 + 0x70))) && (*(char *)(uVar3 + 0x78) == '\x02')) {
      Body::AddAngularImpulse(param_1_00,param_2,uVar3);
      if ((*(long *)(uVar3 + 0x48) == 0) || (*(int *)(*(long *)(uVar3 + 0x48) + 0x70) == -1)) {
        JPH::BodyManager::ActivateBodies((BodyID *)param_1[1],(int)param_4);
      }
    }
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00103e79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x28))(plVar1,lVar2);
      return;
    }
  }
  return;
}



/* JPH::BodyInterface::ApplyBuoyancyImpulse(JPH::BodyID const&, JPH::Vec3, JPH::Vec3, float, float,
   float, JPH::Vec3, JPH::Vec3, float) */

undefined4 __thiscall
JPH::BodyInterface::ApplyBuoyancyImpulse
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          BodyInterface *this,uint *param_1)

{
  long *plVar1;
  Body *this_00;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  uVar3 = 0;
  plVar1 = *(long **)this;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 == 0xffffffff) goto LAB_00103f8f;
  lVar4 = (**(code **)(*plVar1 + 0x20))(plVar1);
  uVar5 = (ulong)(*param_1 & 0x7fffff);
  if (uVar5 < *(ulong *)plVar1[1]) {
    this_00 = *(Body **)(((ulong *)plVar1[1])[2] + uVar5 * 8);
    if (((((ulong)this_00 & 1) != 0) || (*param_1 != *(uint *)(this_00 + 0x70))) ||
       (this_00[0x78] != (Body)0x2)) goto LAB_00103f7a;
    uVar3 = JPH::Body::ApplyBuoyancyImpulse
                      (param_1_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,this_00);
    if ((char)uVar3 == '\0') goto LAB_00103f7a;
    if ((*(long *)(this_00 + 0x48) == 0) || (*(int *)(*(long *)(this_00 + 0x48) + 0x70) == -1)) {
      JPH::BodyManager::ActivateBodies(*(BodyID **)(this + 8),(int)this_00 + 0x70);
    }
    else {
      Body::GetSleepTestPoints(this_00,(Vec3 *)&local_78);
      lVar2 = *(long *)(this_00 + 0x48);
      *(undefined8 *)(lVar2 + 0x80) = local_78;
      *(undefined4 *)(lVar2 + 0x88) = local_70;
      *(undefined8 *)(lVar2 + 0x90) = local_68;
      *(undefined4 *)(lVar2 + 0x98) = local_60;
      *(undefined4 *)(lVar2 + 0x8c) = 0;
      *(undefined4 *)(lVar2 + 0x9c) = 0;
      *(undefined8 *)(lVar2 + 0xa0) = local_58;
      *(undefined8 *)(lVar2 + 0xac) = 0;
      *(undefined4 *)(lVar2 + 0xa8) = local_50;
    }
  }
  else {
LAB_00103f7a:
    uVar3 = 0;
  }
  if (lVar4 != 0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,lVar4);
  }
LAB_00103f8f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::BodyInterface::SetPositionRotationAndVelocity(JPH::BodyID const&, JPH::Vec3, JPH::Quat,
   JPH::Vec3, JPH::Vec3) */

void JPH::BodyInterface::SetPositionRotationAndVelocity
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_1,uint *param_10)

{
  byte bVar1;
  long *plVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  long lVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 auVar11 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack_70;
  uint uStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  undefined4 local_34;
  long local_30;
  
  fVar16 = (float)((ulong)param_5 >> 0x20);
  fVar15 = (float)param_5;
  plVar2 = (long *)*param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_10 != 0xffffffff) {
    lVar5 = (**(code **)(*plVar2 + 0x20))(plVar2);
    uVar6 = (ulong)(*param_10 & 0x7fffff);
    if (uVar6 < *(ulong *)plVar2[1]) {
      uVar6 = *(ulong *)(((ulong *)plVar2[1])[2] + uVar6 * 8);
      if (((uVar6 & 1) == 0) && (*param_10 == *(uint *)(uVar6 + 0x70))) {
        JPH::Body::SetPositionAndRotationInternal(param_1_00,param_2,param_3,param_4,uVar6,1);
        if ((*(byte *)(uVar6 + 0x79) & 4) != 0) {
          local_34 = *(undefined4 *)(uVar6 + 0x70);
          (**(code **)(*(long *)param_1[2] + 0x98))((long *)param_1[2],&local_34,1,1);
        }
        if (*(char *)(uVar6 + 0x78) != '\0') {
          pfVar3 = *(float **)(uVar6 + 0x48);
          auVar11._4_4_ = _UNK_001061d4;
          auVar11._0_4_ = __LC4;
          auVar11._8_4_ = _UNK_001061d8;
          auVar11._12_4_ = _UNK_001061dc;
          bVar1 = *(byte *)((long)pfVar3 + 0x7a);
          auVar7._1_3_ = 0;
          auVar7[0] = bVar1;
          auVar7[4] = bVar1;
          auVar7._5_3_ = 0;
          auVar7[8] = bVar1;
          auVar7._9_3_ = 0;
          auVar7[0xc] = bVar1;
          auVar7._13_3_ = 0;
          auVar11 = auVar11 & auVar7;
          fStack_70 = (float)param_6;
          uStack_6c = (uint)((ulong)param_6 >> 0x20);
          fVar10 = (float)(-(uint)(auVar11._0_4_ == __LC4) & (uint)fVar15);
          fVar12 = (float)(-(uint)(auVar11._4_4_ == _UNK_001061d4) & (uint)fVar16);
          fVar13 = (float)(-(uint)(auVar11._8_4_ == _UNK_001061d8) & (uint)fStack_70);
          fVar14 = (float)(-(uint)(auVar11._12_4_ == _UNK_001061dc) & uStack_6c);
          *pfVar3 = fVar10;
          pfVar3[1] = fVar12;
          pfVar3[2] = fVar13;
          pfVar3[3] = fVar14;
          fVar8 = fVar13 * fVar13 + fVar10 * fVar10 + 0.0 + fVar12 * fVar12;
          fVar9 = pfVar3[0x19];
          if (fVar9 * fVar9 < fVar8) {
            fVar9 = fVar9 / SQRT(fVar8);
            *pfVar3 = fVar9 * fVar10;
            pfVar3[1] = fVar9 * fVar12;
            pfVar3[2] = fVar9 * fVar13;
            pfVar3[3] = fVar9 * fVar14;
          }
          auVar4._4_4_ = _UNK_001061e4;
          auVar4._0_4_ = __LC6;
          auVar4._8_4_ = _UNK_001061e8;
          auVar4._12_4_ = _UNK_001061ec;
          auVar7 = auVar7 & auVar4;
          local_68 = (float)param_7;
          fStack_64 = (float)((ulong)param_7 >> 0x20);
          fStack_60 = (float)param_8;
          uStack_5c = (uint)((ulong)param_8 >> 0x20);
          fVar8 = (float)(-(uint)(auVar7._0_4_ == __LC6) & (uint)local_68);
          fVar10 = (float)(-(uint)(auVar7._4_4_ == _UNK_001061e4) & (uint)fStack_64);
          fVar12 = (float)(-(uint)(auVar7._8_4_ == _UNK_001061e8) & (uint)fStack_60);
          fVar13 = (float)(-(uint)(auVar7._12_4_ == _UNK_001061ec) & uStack_5c);
          pfVar3[4] = fVar8;
          pfVar3[5] = fVar10;
          pfVar3[6] = fVar12;
          pfVar3[7] = fVar13;
          fVar14 = fVar12 * fVar12 + fVar8 * fVar8 + 0.0 + fVar10 * fVar10;
          fVar9 = pfVar3[0x1a];
          if (fVar9 * fVar9 < fVar14) {
            fVar9 = fVar9 / SQRT(fVar14);
            pfVar3[4] = fVar9 * fVar8;
            pfVar3[5] = fVar9 * fVar10;
            pfVar3[6] = fVar9 * fVar12;
            pfVar3[7] = fVar9 * fVar13;
          }
          if ((pfVar3[0x1c] == -NAN) &&
             ((_LC11 < fStack_70 * fStack_70 + fVar16 * fVar16 + fVar15 * fVar15 + 0.0 ||
              (_LC11 < fStack_60 * fStack_60 + fStack_64 * fStack_64 + local_68 * local_68 + 0.0))))
          {
            JPH::BodyManager::ActivateBodies((BodyID *)param_1[1],(int)param_10);
          }
        }
      }
    }
    if (lVar5 != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001041bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x28))(plVar2,lVar5);
        return;
      }
      goto LAB_001043e8;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001043e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::BodyInterface::SetMotionType(JPH::BodyID const&, JPH::EMotionType, JPH::EActivation) */

void __thiscall
JPH::BodyInterface::SetMotionType(BodyInterface *this,uint *param_1,char param_3,int param_4)

{
  long *plVar1;
  Body *this_00;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  plVar1 = *(long **)this;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 != 0xffffffff) {
    lVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar4 = (ulong)(*param_1 & 0x7fffff);
    if (((uVar4 < *(ulong *)plVar1[1]) &&
        (this_00 = *(Body **)(((ulong *)plVar1[1])[2] + uVar4 * 8), ((ulong)this_00 & 1) == 0)) &&
       (*param_1 == *(uint *)(this_00 + 0x70))) {
      if (((*(long *)(this_00 + 0x48) == 0) || (*(int *)(*(long *)(this_00 + 0x48) + 0x70) == -1))
         || (param_3 != '\0')) {
        JPH::Body::SetMotionType(this_00,param_3);
        if ((param_3 != '\0') && (param_4 == 0)) {
          if ((*(long *)(this_00 + 0x48) == 0) || (*(int *)(*(long *)(this_00 + 0x48) + 0x70) == -1)
             ) {
            JPH::BodyManager::ActivateBodies(*(BodyID **)(this + 8),(int)this_00 + 0x70);
          }
          else {
            Body::GetSleepTestPoints(this_00,(Vec3 *)&local_78);
            lVar2 = *(long *)(this_00 + 0x48);
            *(undefined8 *)(lVar2 + 0x80) = local_78;
            *(undefined4 *)(lVar2 + 0x88) = local_70;
            *(undefined8 *)(lVar2 + 0x90) = local_68;
            *(undefined4 *)(lVar2 + 0x98) = local_60;
            *(undefined4 *)(lVar2 + 0x8c) = 0;
            *(undefined4 *)(lVar2 + 0x9c) = 0;
            *(undefined8 *)(lVar2 + 0xa0) = local_58;
            *(undefined8 *)(lVar2 + 0xac) = 0;
            *(undefined4 *)(lVar2 + 0xa8) = local_50;
          }
        }
      }
      else {
        JPH::BodyManager::DeactivateBodies(*(BodyID **)(this + 8),(int)param_1);
        JPH::Body::SetMotionType(this_00,0);
      }
    }
    if (lVar3 != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001044a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x28))(plVar1,lVar3);
        return;
      }
      goto LAB_001045d7;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001045d7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::BodyInterface::GetBodyType(JPH::BodyID const&) const */

undefined1 __thiscall JPH::BodyInterface::GetBodyType(BodyInterface *this,BodyID *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 uVar4;
  
  uVar4 = 0;
  plVar1 = *(long **)this;
  if (*(int *)param_1 != -1) {
    lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
    uVar3 = (ulong)(*(uint *)param_1 & 0x7fffff);
    if (((uVar3 < *(ulong *)plVar1[1]) &&
        (uVar3 = *(ulong *)(((ulong *)plVar1[1])[2] + uVar3 * 8), (uVar3 & 1) == 0)) &&
       (*(uint *)param_1 == *(uint *)(uVar3 + 0x70))) {
      uVar4 = *(undefined1 *)(uVar3 + 0x76);
    }
    if (lVar2 != 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  return uVar4;
}



/* JPH::BodyInterface::GetMotionType(JPH::BodyID const&) const */

undefined1 __thiscall JPH::BodyInterface::GetMotionType(BodyInterface *this,BodyID *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 uVar4;
  
  uVar4 = 0;
  plVar1 = *(long **)this;
  if (*(int *)param_1 != -1) {
    lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
    uVar3 = (ulong)(*(uint *)param_1 & 0x7fffff);
    if (((uVar3 < *(ulong *)plVar1[1]) &&
        (uVar3 = *(ulong *)(((ulong *)plVar1[1])[2] + uVar3 * 8), (uVar3 & 1) == 0)) &&
       (*(uint *)param_1 == *(uint *)(uVar3 + 0x70))) {
      uVar4 = *(undefined1 *)(uVar3 + 0x78);
    }
    if (lVar2 != 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  return uVar4;
}



/* JPH::BodyInterface::SetMotionQuality(JPH::BodyID const&, JPH::EMotionQuality) */

void __thiscall
JPH::BodyInterface::SetMotionQuality(BodyInterface *this,uint *param_1,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  plVar1 = *(long **)this;
  if (*param_1 != 0xffffffff) {
    lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar3 = (ulong)(*param_1 & 0x7fffff);
    if (uVar3 < *(ulong *)plVar1[1]) {
      uVar3 = *(ulong *)(((ulong *)plVar1[1])[2] + uVar3 * 8);
      if (((uVar3 & 1) == 0) && (*param_1 == *(uint *)(uVar3 + 0x70))) {
        JPH::BodyManager::SetMotionQuality(*(undefined8 *)(this + 8),uVar3,param_3);
      }
    }
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0010474b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x28))(plVar1,lVar2);
      return;
    }
  }
  return;
}



/* JPH::BodyInterface::GetMotionQuality(JPH::BodyID const&) const */

char __thiscall JPH::BodyInterface::GetMotionQuality(BodyInterface *this,BodyID *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  
  cVar4 = '\0';
  plVar1 = *(long **)this;
  if (*(int *)param_1 != -1) {
    lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
    uVar3 = (ulong)(*(uint *)param_1 & 0x7fffff);
    if ((((uVar3 < *(ulong *)plVar1[1]) &&
         (uVar3 = *(ulong *)(((ulong *)plVar1[1])[2] + uVar3 * 8), (uVar3 & 1) == 0)) &&
        (*(uint *)param_1 == *(uint *)(uVar3 + 0x70))) &&
       (cVar4 = *(char *)(uVar3 + 0x78), cVar4 != '\0')) {
      cVar4 = *(char *)(*(long *)(uVar3 + 0x48) + 0x78);
    }
    if (lVar2 != 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  return cVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::BodyInterface::GetInverseInertia(JPH::BodyID const&) const */

BodyID * JPH::BodyInterface::GetInverseInertia(BodyID *param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint *in_RDX;
  long *in_RSI;
  long in_FS_OFFSET;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  float fVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auVar18 [16];
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_a8 [16];
  undefined8 local_68;
  ulong uStack_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  ulong uStack_40;
  long local_20;
  
  plVar2 = (long *)*in_RSI;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*in_RDX == 0xffffffff) {
    *(undefined1 (*) [16])param_1 = ZEXT416(_LC14);
    uVar5 = _UNK_00106218;
    *(undefined8 *)(param_1 + 0x10) = __LC15;
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    uVar5 = _UNK_00106228;
    *(undefined8 *)(param_1 + 0x20) = __LC16;
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    uVar5 = CONCAT44(_LC7,_UNK_001061f8);
    *(undefined8 *)(param_1 + 0x30) = __LC12;
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    goto LAB_001048af;
  }
  lVar6 = (**(code **)(*plVar2 + 0x10))(plVar2);
  uVar7 = (ulong)(*in_RDX & 0x7fffff);
  if (uVar7 < *(ulong *)plVar2[1]) {
    uVar7 = *(ulong *)(((ulong *)plVar2[1])[2] + uVar7 * 8);
    if (((uVar7 & 1) != 0) || (*in_RDX != *(uint *)(uVar7 + 0x70))) goto LAB_0010486a;
    lVar3 = *(long *)(uVar7 + 0x48);
    fVar12 = (float)*(undefined8 *)(uVar7 + 0x10);
    fVar15 = (float)((ulong)*(undefined8 *)(uVar7 + 0x10) >> 0x20);
    fVar11 = (float)*(undefined8 *)(uVar7 + 0x18);
    fVar24 = fVar12 + fVar12;
    fVar25 = fVar15 + fVar15;
    fVar13 = (float)((ulong)*(undefined8 *)(uVar7 + 0x18) >> 0x20);
    fVar26 = fVar11 * (fVar11 + fVar11);
    fVar16 = fVar13 * (fVar11 + fVar11);
    fVar14 = (float)*(undefined8 *)(lVar3 + 0x38);
    fVar23 = (float)*(undefined8 *)(lVar3 + 0x30);
    fVar27 = fVar23 + fVar23;
    fVar10 = (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
    fVar28 = fVar10 + fVar10;
    fVar19 = (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
    fVar29 = fVar14 * (fVar14 + fVar14);
    fVar9 = fVar19 * (fVar14 + fVar14);
    lVar8 = 0;
    local_68 = CONCAT44(fVar10 * fVar27 + fVar9,(_LC7 - fVar10 * fVar28) - fVar29);
    uStack_60 = (ulong)(uint)(fVar14 * fVar27 - fVar28 * fVar19);
    local_58._4_4_ = (_LC7 - fVar29) - fVar23 * fVar27;
    local_58._0_4_ = fVar10 * fVar27 - fVar9;
    local_58._8_4_ = fVar27 * fVar19 + fVar14 * fVar28;
    local_58._12_4_ = 0;
    local_48 = CONCAT44(fVar14 * fVar28 - fVar27 * fVar19,fVar14 * fVar27 + fVar28 * fVar19);
    uStack_40 = (ulong)(uint)((_LC7 - fVar23 * fVar27) - fVar10 * fVar28);
    do {
      fVar23 = *(float *)((long)&local_68 + lVar8);
      fVar10 = *(float *)((long)&local_68 + lVar8 + 4);
      fVar14 = *(float *)(local_58 + lVar8 + -8);
      *(float *)((long)local_a8 + lVar8) =
           fVar14 * (fVar11 * fVar24 + fVar25 * fVar13) +
           fVar23 * ((_LC7 - fVar15 * fVar25) - fVar26) + fVar10 * (fVar15 * fVar24 - fVar16);
      *(float *)((long)local_a8 + lVar8 + 4) =
           fVar14 * (fVar11 * fVar25 - fVar24 * fVar13) +
           fVar23 * (fVar15 * fVar24 + fVar16) + fVar10 * ((_LC7 - fVar26) - fVar12 * fVar24);
      *(float *)((long)local_a8 + lVar8 + 8) =
           fVar14 * ((_LC7 - fVar12 * fVar24) - fVar15 * fVar25) +
           fVar23 * (fVar11 * fVar24 - fVar25 * fVar13) +
           fVar10 * (fVar24 * fVar13 + fVar11 * fVar25);
      *(float *)((long)local_a8 + lVar8 + 0xc) = fVar14 * 0.0 + fVar23 * 0.0 + fVar10 * 0.0;
      lVar8 = lVar8 + 0x10;
    } while (lVar8 != 0x30);
    fVar12 = *(float *)(lVar3 + 0x20);
    fVar15 = *(float *)(lVar3 + 0x24);
    fVar23 = *(float *)(lVar3 + 0x28);
    bVar1 = *(byte *)(lVar3 + 0x7a);
    fVar13 = fVar15 * local_a8[4];
    fVar14 = fVar15 * local_a8[5];
    fVar15 = fVar15 * local_a8[6];
    uVar5 = CONCAT44(_LC7,_UNK_001061f8);
    fVar10 = fVar12 * local_a8[0];
    fVar11 = fVar12 * local_a8[1];
    fVar12 = fVar12 * local_a8[2];
    fVar9 = fVar23 * local_a8[8];
    fVar16 = fVar23 * local_a8[9];
    fVar23 = fVar23 * local_a8[10];
    *(undefined8 *)(param_1 + 0x30) = __LC12;
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    auVar18._1_3_ = 0;
    auVar18[0] = bVar1;
    auVar18[4] = bVar1;
    auVar18._5_3_ = 0;
    auVar18[8] = bVar1;
    auVar18._9_3_ = 0;
    auVar18[0xc] = bVar1;
    auVar18._13_3_ = 0;
    auVar4._4_4_ = _UNK_001061e4;
    auVar4._0_4_ = __LC6;
    auVar4._8_4_ = _UNK_001061e8;
    auVar4._12_4_ = _UNK_001061ec;
    auVar18 = auVar18 & auVar4;
    uVar17 = -(uint)(auVar18._0_4_ == __LC6);
    uVar20 = -(uint)(auVar18._4_4_ == _UNK_001061e4);
    uVar21 = -(uint)(auVar18._8_4_ == _UNK_001061e8);
    uVar22 = -(uint)(auVar18._12_4_ == _UNK_001061ec);
    *(uint *)param_1 =
         (uint)(fVar13 * local_a8[4] + fVar10 * local_a8[0] + fVar9 * local_a8[8]) & uVar17;
    *(uint *)(param_1 + 4) =
         (uint)(fVar13 * local_a8[5] + fVar10 * local_a8[1] + fVar9 * local_a8[9]) & uVar17 & uVar20
    ;
    *(uint *)(param_1 + 8) =
         (uint)(fVar13 * local_a8[6] + fVar10 * local_a8[2] + fVar9 * local_a8[10]) &
         uVar17 & uVar21;
    *(uint *)(param_1 + 0xc) =
         (uint)(fVar13 * local_a8[7] + fVar10 * local_a8[3] + fVar9 * local_a8[0xb]) &
         uVar17 & uVar22;
    *(uint *)(param_1 + 0x10) =
         (uint)(fVar14 * local_a8[4] + fVar11 * local_a8[0] + fVar16 * local_a8[8]) &
         uVar20 & uVar17;
    *(uint *)(param_1 + 0x14) =
         (uint)(fVar14 * local_a8[5] + fVar11 * local_a8[1] + fVar16 * local_a8[9]) & uVar20;
    *(uint *)(param_1 + 0x18) =
         (uint)(fVar14 * local_a8[6] + fVar11 * local_a8[2] + fVar16 * local_a8[10]) &
         uVar20 & uVar21;
    *(uint *)(param_1 + 0x1c) =
         (uint)(fVar14 * local_a8[7] + fVar11 * local_a8[3] + fVar16 * local_a8[0xb]) &
         uVar20 & uVar22;
    *(uint *)(param_1 + 0x20) =
         (uint)(fVar15 * local_a8[4] + fVar12 * local_a8[0] + fVar23 * local_a8[8]) &
         uVar21 & uVar17;
    *(uint *)(param_1 + 0x24) =
         (uint)(fVar15 * local_a8[5] + fVar12 * local_a8[1] + fVar23 * local_a8[9]) &
         uVar21 & uVar20;
    *(uint *)(param_1 + 0x28) =
         (uint)(fVar15 * local_a8[6] + fVar12 * local_a8[2] + fVar23 * local_a8[10]) & uVar21;
    *(uint *)(param_1 + 0x2c) =
         (uint)(fVar15 * local_a8[7] + fVar12 * local_a8[3] + fVar23 * local_a8[0xb]) &
         uVar21 & uVar22;
  }
  else {
LAB_0010486a:
    *(undefined1 (*) [16])param_1 = ZEXT416(_LC14);
    uVar5 = _UNK_00106218;
    *(undefined8 *)(param_1 + 0x10) = __LC15;
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    uVar5 = _UNK_00106228;
    *(undefined8 *)(param_1 + 0x20) = __LC16;
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    uVar5 = CONCAT44(_LC7,_UNK_001061f8);
    *(undefined8 *)(param_1 + 0x30) = __LC12;
    *(undefined8 *)(param_1 + 0x38) = uVar5;
  }
  if (lVar6 != 0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
LAB_001048af:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::BodyInterface::SetRestitution(JPH::BodyID const&, float) */

void __thiscall
JPH::BodyInterface::SetRestitution(BodyInterface *this,BodyID *param_1,float param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  plVar1 = *(long **)this;
  if (*(int *)param_1 != -1) {
    lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar3 = (ulong)(*(uint *)param_1 & 0x7fffff);
    if (uVar3 < *(ulong *)plVar1[1]) {
      uVar3 = *(ulong *)(((ulong *)plVar1[1])[2] + uVar3 * 8);
      if (((uVar3 & 1) == 0) && (*(uint *)param_1 == *(uint *)(uVar3 + 0x70))) {
        *(float *)(uVar3 + 0x6c) = param_2;
      }
    }
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00104cde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x28))(plVar1);
      return;
    }
  }
  return;
}



/* JPH::BodyInterface::GetRestitution(JPH::BodyID const&) const */

void __thiscall JPH::BodyInterface::GetRestitution(BodyInterface *this,BodyID *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)this;
  if ((*(int *)param_1 != -1) && (lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1), lVar2 != 0)) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  return;
}



/* JPH::BodyInterface::SetFriction(JPH::BodyID const&, float) */

void __thiscall JPH::BodyInterface::SetFriction(BodyInterface *this,BodyID *param_1,float param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  plVar1 = *(long **)this;
  if (*(int *)param_1 != -1) {
    lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar3 = (ulong)(*(uint *)param_1 & 0x7fffff);
    if (uVar3 < *(ulong *)plVar1[1]) {
      uVar3 = *(ulong *)(((ulong *)plVar1[1])[2] + uVar3 * 8);
      if (((uVar3 & 1) == 0) && (*(uint *)param_1 == *(uint *)(uVar3 + 0x70))) {
        *(float *)(uVar3 + 0x68) = param_2;
      }
    }
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00104dfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x28))(plVar1);
      return;
    }
  }
  return;
}



/* JPH::BodyInterface::GetFriction(JPH::BodyID const&) const */

void __thiscall JPH::BodyInterface::GetFriction(BodyInterface *this,BodyID *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)this;
  if ((*(int *)param_1 != -1) && (lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1), lVar2 != 0)) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  return;
}



/* JPH::BodyInterface::SetGravityFactor(JPH::BodyID const&, float) */

void __thiscall
JPH::BodyInterface::SetGravityFactor(BodyInterface *this,BodyID *param_1,float param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  plVar1 = *(long **)this;
  if (*(int *)param_1 != -1) {
    lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar3 = (ulong)(*(uint *)param_1 & 0x7fffff);
    if (uVar3 < *(ulong *)plVar1[1]) {
      uVar3 = *(ulong *)(((ulong *)plVar1[1])[2] + uVar3 * 8);
      if ((((uVar3 & 1) == 0) && (*(uint *)param_1 == *(uint *)(uVar3 + 0x70))) &&
         (*(long *)(uVar3 + 0x48) != 0)) {
        *(float *)(*(long *)(uVar3 + 0x48) + 0x6c) = param_2;
      }
    }
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00104f1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x28))(plVar1);
      return;
    }
  }
  return;
}



/* JPH::BodyInterface::GetGravityFactor(JPH::BodyID const&) const */

undefined4 __thiscall JPH::BodyInterface::GetGravityFactor(BodyInterface *this,BodyID *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  plVar1 = *(long **)this;
  if (*(int *)param_1 == -1) {
    return _LC7;
  }
  lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
  uVar3 = (ulong)(*(uint *)param_1 & 0x7fffff);
  uVar4 = _LC7;
  if ((((uVar3 < *(ulong *)plVar1[1]) &&
       (uVar3 = *(ulong *)(((ulong *)plVar1[1])[2] + uVar3 * 8), (uVar3 & 1) == 0)) &&
      (*(uint *)param_1 == *(uint *)(uVar3 + 0x70))) && (*(long *)(uVar3 + 0x48) != 0)) {
    uVar4 = *(undefined4 *)(*(long *)(uVar3 + 0x48) + 0x6c);
  }
  if (lVar2 != 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  return uVar4;
}



/* JPH::BodyInterface::SetUseManifoldReduction(JPH::BodyID const&, bool) */

void __thiscall
JPH::BodyInterface::SetUseManifoldReduction(BodyInterface *this,BodyID *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  plVar1 = *(long **)this;
  if (*(int *)param_1 != -1) {
    lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar3 = (ulong)(*(uint *)param_1 & 0x7fffff);
    if (uVar3 < *(ulong *)plVar1[1]) {
      uVar3 = *(ulong *)(((ulong *)plVar1[1])[2] + uVar3 * 8);
      if ((((uVar3 & 1) == 0) && (*(uint *)param_1 == *(uint *)(uVar3 + 0x70))) &&
         (param_2 != (bool)(*(byte *)(uVar3 + 0x79) >> 4 & 1))) {
        if (param_2) {
          LOCK();
          *(byte *)(uVar3 + 0x79) = *(byte *)(uVar3 + 0x79) | 0x10;
          UNLOCK();
        }
        else {
          LOCK();
          *(byte *)(uVar3 + 0x79) = *(byte *)(uVar3 + 0x79) & 0xef;
          UNLOCK();
        }
        JPH::BodyManager::InvalidateContactCacheForBody(*(Body **)(this + 8));
      }
    }
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0010505e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x28))(plVar1,lVar2);
      return;
    }
  }
  return;
}



/* JPH::BodyInterface::GetUseManifoldReduction(JPH::BodyID const&) const */

uint __thiscall JPH::BodyInterface::GetUseManifoldReduction(BodyInterface *this,BodyID *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar5 = 1;
  plVar1 = *(long **)this;
  if (*(int *)param_1 != -1) {
    lVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
    uVar4 = (ulong)(*(uint *)param_1 & 0x7fffff);
    if (uVar4 < *(ulong *)plVar1[1]) {
      lVar2 = *(long *)(((ulong *)plVar1[1])[2] + uVar4 * 8);
      uVar5 = ~(uint)lVar2 & 1;
      if (uVar5 == 0) {
        uVar5 = 1;
      }
      else if (*(uint *)param_1 == *(uint *)(lVar2 + 0x70)) {
        uVar5 = *(byte *)(lVar2 + 0x79) >> 4 & 1;
      }
    }
    if (lVar3 != 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  return uVar5;
}



/* JPH::BodyInterface::GetTransformedShape(JPH::BodyID const&) const */

BodyID * JPH::BodyInterface::GetTransformedShape(BodyID *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  uint *in_RDX;
  long *in_RSI;
  
  plVar2 = (long *)*in_RSI;
  if (*in_RDX == 0xffffffff) {
    lVar9 = 0;
  }
  else {
    lVar9 = (**(code **)(*plVar2 + 0x10))(plVar2);
    uVar10 = (ulong)(*in_RDX & 0x7fffff);
    if (((uVar10 < *(ulong *)plVar2[1]) &&
        (puVar3 = *(undefined8 **)(((ulong *)plVar2[1])[2] + uVar10 * 8), ((ulong)puVar3 & 1) == 0))
       && (*in_RDX == *(uint *)(puVar3 + 0xe))) {
      lVar4 = puVar3[8];
      uVar5 = puVar3[2];
      uVar6 = puVar3[3];
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      *(long *)(param_1 + 0x20) = lVar4;
      *(undefined8 *)param_1 = uVar7;
      *(undefined8 *)(param_1 + 8) = uVar8;
      *(undefined8 *)(param_1 + 0x10) = uVar5;
      *(undefined8 *)(param_1 + 0x18) = uVar6;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      uVar5 = _LC17;
      uVar1 = *(undefined4 *)(puVar3 + 0xe);
      *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x34) = uVar1;
      uVar6 = _LC18;
      *(undefined8 *)(param_1 + 0x28) = uVar5;
      *(undefined8 *)(param_1 + 0x38) = uVar6;
      goto LAB_001051ac;
    }
  }
  uVar5 = _LC17;
  *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  *(undefined8 *)(param_1 + 0x34) = 0xffffffffffffffff;
  *(undefined1 (*) [16])param_1 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
LAB_001051ac:
  if (lVar9 != 0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  return param_1;
}



/* JPH::BodyInterface::GetUserData(JPH::BodyID const&) const */

undefined8 __thiscall JPH::BodyInterface::GetUserData(BodyInterface *this,BodyID *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  plVar1 = *(long **)this;
  if (*(int *)param_1 != -1) {
    lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
    uVar3 = (ulong)(*(uint *)param_1 & 0x7fffff);
    if (((uVar3 < *(ulong *)plVar1[1]) &&
        (uVar3 = *(ulong *)(((ulong *)plVar1[1])[2] + uVar3 * 8), (uVar3 & 1) == 0)) &&
       (*(uint *)param_1 == *(uint *)(uVar3 + 0x70))) {
      uVar4 = *(undefined8 *)(uVar3 + 0x50);
    }
    if (lVar2 != 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  return uVar4;
}



/* JPH::BodyInterface::SetUserData(JPH::BodyID const&, unsigned long) const */

void __thiscall JPH::BodyInterface::SetUserData(BodyInterface *this,BodyID *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  plVar1 = *(long **)this;
  if (*(int *)param_1 != -1) {
    lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar3 = (ulong)(*(uint *)param_1 & 0x7fffff);
    if (((uVar3 < *(ulong *)plVar1[1]) &&
        (uVar3 = *(ulong *)(((ulong *)plVar1[1])[2] + uVar3 * 8), (uVar3 & 1) == 0)) &&
       (*(uint *)param_1 == *(uint *)(uVar3 + 0x70))) {
      *(ulong *)(uVar3 + 0x50) = param_2;
    }
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00105304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x28))(plVar1);
      return;
    }
  }
  return;
}



/* JPH::BodyInterface::GetMaterial(JPH::BodyID const&, JPH::SubShapeID const&) const */

undefined8 __thiscall
JPH::BodyInterface::GetMaterial(BodyInterface *this,BodyID *param_1,SubShapeID *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  plVar1 = *(long **)this;
  if (*(int *)param_1 != -1) {
    lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
    uVar3 = (ulong)(*(uint *)param_1 & 0x7fffff);
    uVar4 = PhysicsMaterial::sDefault;
    if (((uVar3 < *(ulong *)plVar1[1]) &&
        (uVar3 = *(ulong *)(((ulong *)plVar1[1])[2] + uVar3 * 8), (uVar3 & 1) == 0)) &&
       (*(uint *)param_1 == *(uint *)(uVar3 + 0x70))) {
      uVar4 = (**(code **)(**(long **)(uVar3 + 0x40) + 0x50))(*(long **)(uVar3 + 0x40),param_2);
    }
    if (lVar2 != 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    }
    return uVar4;
  }
  return PhysicsMaterial::sDefault;
}



/* JPH::BodyInterface::InvalidateContactCache(JPH::BodyID const&) */

void __thiscall JPH::BodyInterface::InvalidateContactCache(BodyInterface *this,BodyID *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  plVar1 = *(long **)this;
  if (*(int *)param_1 != -1) {
    lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar3 = (ulong)(*(uint *)param_1 & 0x7fffff);
    if (uVar3 < *(ulong *)plVar1[1]) {
      uVar3 = *(ulong *)(((ulong *)plVar1[1])[2] + uVar3 * 8);
      if (((uVar3 & 1) == 0) && (*(uint *)param_1 == *(uint *)(uVar3 + 0x70))) {
        JPH::BodyManager::InvalidateContactCacheForBody(*(Body **)(this + 8));
      }
    }
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0010544c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x28))(plVar1,lVar2);
      return;
    }
  }
  return;
}



/* JPH::BroadPhase::AddBodiesPrepare(JPH::BodyID*, int) */

undefined8 JPH::BroadPhase::AddBodiesPrepare(BodyID *param_1,int param_2)

{
  return 0;
}



/* JPH::BroadPhase::AddBodiesAbort(JPH::BodyID*, int, void*) */

void JPH::BroadPhase::AddBodiesAbort(BodyID *param_1,int param_2,void *param_3)

{
  return;
}



/* JPH::Shape::GetCenterOfMass() const */

undefined1  [16] JPH::Shape::GetCenterOfMass(void)

{
  return ZEXT816(0);
}



/* JPH::AllHitCollisionCollector<JPH::CollisionCollector<JPH::BodyID,
   JPH::CollisionCollectorTraitsCollideShape> >::Reset() */

void __thiscall
JPH::
AllHitCollisionCollector<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>>
::Reset(AllHitCollisionCollector<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>>
        *this)

{
  *(undefined4 *)(this + 8) = 0x7f7fffff;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}



/* JPH::CollisionCollector<JPH::BodyID, JPH::CollisionCollectorTraitsCollideShape>::OnBody(JPH::Body
   const&) */

void JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>::OnBody
               (Body *param_1)

{
  return;
}



/* JPH::CollisionCollector<JPH::BodyID,
   JPH::CollisionCollectorTraitsCollideShape>::SetUserData(unsigned long) */

void JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>::SetUserData
               (ulong param_1)

{
  return;
}



/* JPH::AllHitCollisionCollector<JPH::CollisionCollector<JPH::BodyID,
   JPH::CollisionCollectorTraitsCollideShape> >::AddHit(JPH::BodyID const&) */

void __thiscall
JPH::
AllHitCollisionCollector<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>>
::AddHit(AllHitCollisionCollector<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>>
         *this,BodyID *param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *(long *)(this + 0x18);
  uVar2 = *(ulong *)(this + 0x20);
  lVar3 = *(long *)(this + 0x28);
  uVar4 = lVar5 + 1;
  if (uVar2 < uVar4) {
    uVar6 = uVar2 * 2;
    if (uVar2 * 2 < uVar4) {
      uVar6 = uVar4;
    }
    lVar3 = (*Reallocate)(lVar3,uVar2 << 2,uVar6 * 4);
    lVar5 = *(long *)(this + 0x18);
    *(ulong *)(this + 0x20) = uVar6;
    *(long *)(this + 0x28) = lVar3;
    uVar4 = lVar5 + 1;
  }
  *(ulong *)(this + 0x18) = uVar4;
  puVar1 = (undefined4 *)(lVar3 + lVar5 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)param_1;
  }
  return;
}



/* JPH::AllHitCollisionCollector<JPH::CollisionCollector<JPH::BodyID,
   JPH::CollisionCollectorTraitsCollideShape> >::~AllHitCollisionCollector() */

void __thiscall
JPH::
AllHitCollisionCollector<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>>
::~AllHitCollisionCollector
          (AllHitCollisionCollector<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>>
           *this)

{
  *(undefined ***)this = &PTR__AllHitCollisionCollector_00106180;
  if (*(long *)(this + 0x28) != 0) {
    *(undefined8 *)(this + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00105572. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(*(long *)(this + 0x28));
    return;
  }
  return;
}



/* JPH::AllHitCollisionCollector<JPH::CollisionCollector<JPH::BodyID,
   JPH::CollisionCollectorTraitsCollideShape> >::~AllHitCollisionCollector() */

void __thiscall
JPH::
AllHitCollisionCollector<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>>
::~AllHitCollisionCollector
          (AllHitCollisionCollector<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>>
           *this)

{
  *(undefined ***)this = &PTR__AllHitCollisionCollector_00106180;
  if (*(long *)(this + 0x28) != 0) {
    *(undefined8 *)(this + 0x18) = 0;
    (*Free)();
  }
  operator_delete(this,0x30);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Body::GetPosition() const */

undefined1  [16] __thiscall JPH::Body::GetPosition(Body *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
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
  undefined1 auVar16 [12];
  
  auVar16 = ZEXT812(0);
  if (*(code **)(**(long **)(this + 0x40) + 0x18) != Shape::GetCenterOfMass) {
    auVar16 = (**(code **)(**(long **)(this + 0x40) + 0x18))();
  }
  fVar7 = auVar16._8_4_;
  fVar8 = *(float *)(this + 0x1c);
  fVar1 = *(float *)(this + 0x10);
  fVar5 = auVar16._0_4_;
  fVar15 = auVar16._4_4_;
  fVar2 = *(float *)(this + 0x14);
  fVar3 = *(float *)(this + 0x18);
  fVar10 = (float)(*(uint *)(this + 0x10) ^ __LC2);
  fVar11 = (float)(*(uint *)(this + 0x14) ^ _UNK_001061c4);
  fVar12 = (float)(*(uint *)(this + 0x18) ^ _UNK_001061c8);
  fVar13 = (float)(*(uint *)(this + 0x1c) ^ _UNK_001061cc);
  fVar14 = (fVar8 * fVar5 + fVar1 * 0.0 + fVar2 * fVar7) - fVar3 * fVar15;
  fVar9 = (fVar8 * fVar15 - fVar1 * fVar7) + fVar2 * 0.0 + fVar3 * fVar5;
  fVar6 = ((fVar8 * fVar7 + fVar1 * fVar15) - fVar2 * fVar5) + fVar3 * 0.0;
  fVar8 = ((fVar8 * 0.0 - fVar1 * fVar5) - fVar2 * fVar15) - fVar3 * fVar7;
  auVar4._4_4_ = *(float *)(this + 4) -
                 (fVar6 * fVar10 + fVar9 * fVar13 + (fVar11 * fVar8 - fVar14 * fVar12));
  auVar4._0_4_ = *(float *)this -
                 ((fVar9 * fVar12 + fVar14 * fVar13 + fVar10 * fVar8) - fVar6 * fVar11);
  auVar4._8_4_ = *(float *)(this + 8) -
                 (fVar6 * fVar13 + ((fVar14 * fVar11 + fVar12 * fVar8) - fVar9 * fVar10));
  auVar4._12_4_ =
       *(float *)(this + 0xc) -
       (((fVar13 * fVar8 - fVar14 * fVar10) - fVar9 * fVar11) - fVar6 * fVar12);
  return auVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Body::AddImpulse(JPH::Vec3, JPH::Vec3) */

void JPH::Body::AddImpulse
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,
               float *param_5)

{
  byte bVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  uint uVar12;
  uint uVar14;
  uint uVar15;
  undefined1 auVar13 [16];
  uint uVar16;
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
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  
  pfVar2 = *(float **)(param_5 + 0x12);
  auVar10._4_4_ = _UNK_001061d4;
  auVar10._0_4_ = __LC4;
  auVar10._8_4_ = _UNK_001061d8;
  auVar10._12_4_ = _UNK_001061dc;
  local_28 = (float)param_1;
  fStack_24 = (float)((ulong)param_1 >> 0x20);
  fStack_20 = (float)param_2;
  fStack_1c = (float)((ulong)param_2 >> 0x20);
  bVar1 = *(byte *)((long)pfVar2 + 0x7a);
  fVar5 = pfVar2[0x16];
  auVar13._1_3_ = 0;
  auVar13[0] = bVar1;
  auVar13[4] = bVar1;
  auVar13._5_3_ = 0;
  auVar13[8] = bVar1;
  auVar13._9_3_ = 0;
  auVar13[0xc] = bVar1;
  auVar13._13_3_ = 0;
  auVar10 = auVar10 & auVar13;
  fVar4 = (float)((uint)(fVar5 * local_28 + *pfVar2) & -(uint)(auVar10._0_4_ == __LC4));
  fVar6 = (float)((uint)(fVar5 * fStack_24 + pfVar2[1]) & -(uint)(auVar10._4_4_ == _UNK_001061d4));
  fVar7 = (float)((uint)(fVar5 * fStack_20 + pfVar2[2]) & -(uint)(auVar10._8_4_ == _UNK_001061d8));
  fVar8 = (float)((uint)(fVar5 * fStack_1c + pfVar2[3]) & -(uint)(auVar10._12_4_ == _UNK_001061dc));
  *pfVar2 = fVar4;
  pfVar2[1] = fVar6;
  pfVar2[2] = fVar7;
  pfVar2[3] = fVar8;
  fVar9 = fVar7 * fVar7 + fVar4 * fVar4 + 0.0 + fVar6 * fVar6;
  fVar5 = pfVar2[0x19];
  if (fVar5 * fVar5 < fVar9) {
    fVar5 = fVar5 / SQRT(fVar9);
    *pfVar2 = fVar5 * fVar4;
    pfVar2[1] = fVar5 * fVar6;
    pfVar2[2] = fVar5 * fVar7;
    pfVar2[3] = fVar5 * fVar8;
  }
  local_18 = (float)param_3;
  fStack_14 = (float)((ulong)param_3 >> 0x20);
  fVar8 = (float)*(undefined8 *)(param_5 + 6);
  fVar6 = (float)*(undefined8 *)(pfVar2 + 0xe);
  fVar21 = (float)*(undefined8 *)(param_5 + 4);
  fVar7 = (float)((ulong)*(undefined8 *)(pfVar2 + 0xe) >> 0x20);
  fVar5 = (float)*(undefined8 *)(pfVar2 + 0xc);
  fVar4 = (float)((ulong)*(undefined8 *)(pfVar2 + 0xc) >> 0x20);
  auVar3._4_4_ = _UNK_001061e4;
  auVar3._0_4_ = __LC6;
  auVar3._8_4_ = _UNK_001061e8;
  auVar3._12_4_ = _UNK_001061ec;
  auVar13 = auVar13 & auVar3;
  fVar9 = (float)((ulong)*(undefined8 *)(param_5 + 6) >> 0x20);
  uVar12 = -(uint)(auVar13._0_4_ == __LC6);
  uVar14 = -(uint)(auVar13._4_4_ == _UNK_001061e4);
  uVar15 = -(uint)(auVar13._8_4_ == _UNK_001061e8);
  uVar16 = -(uint)(auVar13._12_4_ == _UNK_001061ec);
  fVar23 = (float)((ulong)*(undefined8 *)(param_5 + 4) >> 0x20);
  fVar17 = (float)((uint)(fStack_20 * (fStack_14 - param_5[1]) - (param_4 - param_5[2]) * fStack_24)
                  & uVar12);
  fVar18 = (float)((uint)(local_28 * (param_4 - param_5[2]) - (local_18 - *param_5) * fStack_20) &
                  uVar14);
  fVar19 = (float)((uint)(fStack_24 * (local_18 - *param_5) - (fStack_14 - param_5[1]) * local_28) &
                  uVar15);
  fVar24 = (fVar9 * fVar5 + fVar21 * fVar7 + fVar23 * fVar6) - fVar8 * fVar4;
  fVar11 = (fVar9 * fVar4 - fVar21 * fVar6) + fVar23 * fVar7 + fVar8 * fVar5;
  fVar25 = fVar11 + fVar11;
  fVar22 = fVar24 + fVar24;
  fVar20 = ((fVar9 * fVar6 + fVar21 * fVar4) - fVar23 * fVar5) + fVar8 * fVar7;
  fVar5 = ((fVar9 * fVar7 - fVar21 * fVar5) - fVar23 * fVar4) - fVar8 * fVar6;
  fVar8 = fVar20 * (fVar20 + fVar20);
  fVar6 = (fVar20 + fVar20) * fVar5;
  fVar21 = fVar20 * fVar25 - fVar22 * fVar5;
  fVar7 = fVar20 * fVar22 + fVar25 * fVar5;
  fVar23 = fVar22 * fVar5 + fVar20 * fVar25;
  fVar4 = (_LC7 - fVar11 * fVar25) - fVar8;
  fVar26 = fVar11 * fVar22 - fVar6;
  fVar6 = fVar11 * fVar22 + fVar6;
  fVar27 = (_LC7 - fVar8) - fVar24 * fVar22;
  fVar20 = fVar20 * fVar22 - fVar25 * fVar5;
  fVar11 = (_LC7 - fVar24 * fVar22) - fVar11 * fVar25;
  fVar5 = (fVar17 * fVar4 + fVar18 * fVar6 + fVar19 * fVar20) * pfVar2[8];
  fVar8 = (fVar17 * fVar26 + fVar18 * fVar27 + fVar19 * fVar23) * pfVar2[9];
  fVar9 = (fVar17 * fVar7 + fVar18 * fVar21 + fVar19 * fVar11) * pfVar2[10];
  fVar4 = (float)((uint)((float)((uint)(fVar4 * fVar5 + fVar8 * fVar26 + fVar9 * fVar7) & uVar12) +
                        pfVar2[4]) & uVar12);
  fVar6 = (float)((uint)((float)((uint)(fVar6 * fVar5 + fVar8 * fVar27 + fVar9 * fVar21) & uVar14) +
                        pfVar2[5]) & uVar14);
  fVar7 = (float)((uint)((float)((uint)(fVar20 * fVar5 + fVar8 * fVar23 + fVar9 * fVar11) & uVar15)
                        + pfVar2[6]) & uVar15);
  fVar8 = (float)((uint)((float)((uint)(fVar5 * 0.0 + fVar8 * 0.0 + fVar9 * 0.0) & uVar16) +
                        pfVar2[7]) & uVar16);
  pfVar2[4] = fVar4;
  pfVar2[5] = fVar6;
  pfVar2[6] = fVar7;
  pfVar2[7] = fVar8;
  fVar9 = fVar7 * fVar7 + fVar4 * fVar4 + 0.0 + fVar6 * fVar6;
  fVar5 = pfVar2[0x1a];
  if (fVar9 <= fVar5 * fVar5) {
    return;
  }
  fVar5 = fVar5 / SQRT(fVar9);
  pfVar2[4] = fVar5 * fVar4;
  pfVar2[5] = fVar5 * fVar6;
  pfVar2[6] = fVar5 * fVar7;
  pfVar2[7] = fVar5 * fVar8;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Body::AddAngularImpulse(JPH::Vec3) */

void JPH::Body::AddAngularImpulse(undefined8 param_1,uint param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar11;
  uint uVar12;
  undefined1 auVar10 [16];
  uint uVar13;
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
  undefined4 local_18;
  undefined4 uStack_14;
  
  lVar2 = *(long *)(param_3 + 0x48);
  local_18 = (uint)param_1;
  uStack_14 = (uint)((ulong)param_1 >> 0x20);
  bVar1 = *(byte *)(lVar2 + 0x7a);
  fVar23 = (float)*(undefined8 *)(param_3 + 0x18);
  fVar8 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar7 = (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
  auVar10._1_3_ = 0;
  auVar10[0] = bVar1;
  fVar4 = (float)*(undefined8 *)(lVar2 + 0x30);
  fVar15 = (float)*(undefined8 *)(lVar2 + 0x38);
  fVar21 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  fVar5 = (float)((ulong)*(undefined8 *)(lVar2 + 0x30) >> 0x20);
  fVar16 = (float)((ulong)*(undefined8 *)(lVar2 + 0x38) >> 0x20);
  auVar10[4] = bVar1;
  auVar10._5_3_ = 0;
  auVar10[8] = bVar1;
  auVar10._9_3_ = 0;
  auVar10[0xc] = bVar1;
  auVar10._13_3_ = 0;
  auVar3._4_4_ = _UNK_001061e4;
  auVar3._0_4_ = __LC6;
  auVar3._8_4_ = _UNK_001061e8;
  auVar3._12_4_ = _UNK_001061ec;
  auVar10 = auVar10 & auVar3;
  uVar9 = -(uint)(auVar10._0_4_ == __LC6);
  uVar11 = -(uint)(auVar10._4_4_ == _UNK_001061e4);
  uVar12 = -(uint)(auVar10._8_4_ == _UNK_001061e8);
  uVar13 = -(uint)(auVar10._12_4_ == _UNK_001061ec);
  fVar17 = (float)(local_18 & uVar9);
  fVar18 = (float)(uStack_14 & uVar11);
  fVar19 = (float)(param_2 & uVar12);
  fVar22 = (fVar7 * fVar4 + fVar8 * fVar16 + fVar21 * fVar15) - fVar23 * fVar5;
  fVar14 = (fVar7 * fVar5 - fVar8 * fVar15) + fVar21 * fVar16 + fVar23 * fVar4;
  fVar20 = fVar22 + fVar22;
  fVar6 = ((fVar7 * fVar15 + fVar8 * fVar5) - fVar21 * fVar4) + fVar23 * fVar16;
  fVar24 = fVar14 + fVar14;
  fVar4 = ((fVar7 * fVar16 - fVar8 * fVar4) - fVar21 * fVar5) - fVar23 * fVar15;
  fVar5 = fVar4 * (fVar6 + fVar6);
  fVar23 = fVar6 * (fVar6 + fVar6);
  fVar16 = fVar6 * fVar24 - fVar20 * fVar4;
  fVar15 = fVar6 * fVar20 + fVar24 * fVar4;
  fVar21 = fVar20 * fVar4 + fVar6 * fVar24;
  fVar25 = fVar14 * fVar20 - fVar5;
  fVar5 = fVar14 * fVar20 + fVar5;
  fVar6 = fVar6 * fVar20 - fVar24 * fVar4;
  fVar4 = (_LC7 - fVar14 * fVar24) - fVar23;
  fVar26 = (_LC7 - fVar23) - fVar22 * fVar20;
  fVar14 = (_LC7 - fVar22 * fVar20) - fVar14 * fVar24;
  fVar23 = (fVar17 * fVar4 + fVar18 * fVar5 + fVar19 * fVar6) * *(float *)(lVar2 + 0x20);
  fVar7 = (fVar17 * fVar25 + fVar18 * fVar26 + fVar19 * fVar21) * *(float *)(lVar2 + 0x24);
  fVar8 = (fVar17 * fVar15 + fVar18 * fVar16 + fVar19 * fVar14) * *(float *)(lVar2 + 0x28);
  fVar15 = (float)((uint)((float)((uint)(fVar4 * fVar23 + fVar7 * fVar25 + fVar8 * fVar15) & uVar9)
                         + *(float *)(lVar2 + 0x10)) & uVar9);
  fVar5 = (float)((uint)((float)((uint)(fVar5 * fVar23 + fVar7 * fVar26 + fVar8 * fVar16) & uVar11)
                        + *(float *)(lVar2 + 0x14)) & uVar11);
  fVar16 = (float)((uint)((float)((uint)(fVar6 * fVar23 + fVar7 * fVar21 + fVar8 * fVar14) & uVar12)
                         + *(float *)(lVar2 + 0x18)) & uVar12);
  fVar23 = (float)((uint)((float)((uint)(fVar23 * 0.0 + fVar7 * 0.0 + fVar8 * 0.0) & uVar13) +
                         *(float *)(lVar2 + 0x1c)) & uVar13);
  *(float *)(lVar2 + 0x10) = fVar15;
  *(float *)(lVar2 + 0x14) = fVar5;
  *(float *)(lVar2 + 0x18) = fVar16;
  *(float *)(lVar2 + 0x1c) = fVar23;
  fVar7 = fVar16 * fVar16 + fVar15 * fVar15 + 0.0 + fVar5 * fVar5;
  fVar4 = *(float *)(lVar2 + 0x68);
  if (fVar7 <= fVar4 * fVar4) {
    return;
  }
  fVar4 = fVar4 / SQRT(fVar7);
  *(float *)(lVar2 + 0x10) = fVar4 * fVar15;
  *(float *)(lVar2 + 0x14) = fVar4 * fVar5;
  *(float *)(lVar2 + 0x18) = fVar4 * fVar16;
  *(float *)(lVar2 + 0x1c) = fVar4 * fVar23;
  return;
}



/* JPH::Body::GetSleepTestPoints(JPH::Vec3*) const */

void __thiscall JPH::Body::GetSleepTestPoints(Body *this,Vec3 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  long in_FS_OFFSET;
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
  float local_48;
  float fStack_44;
  float fStack_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  long local_20;
  
  uVar1 = *(undefined8 *)(this + 8);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = *(undefined8 *)this;
  *(undefined8 *)(param_1 + 8) = uVar1;
  (**(code **)(**(long **)(this + 0x40) + 0x20))(&local_48);
  fVar7 = (local_38 - local_48) * _LC9;
  fVar8 = (fStack_34 - fStack_44) * _LC9;
  fVar9 = (fStack_30 - fStack_40) * _LC9;
  if (fVar8 <= fVar7) {
    cVar6 = (fVar9 < fVar8) + '\x01';
  }
  else {
    cVar6 = (fVar9 < fVar7) * '\x02';
  }
  fVar12 = (float)*(undefined8 *)(this + 0x10);
  fVar4 = (float)*(undefined8 *)(this + 0x18);
  fVar14 = (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20);
  fVar13 = fVar12 + fVar12;
  fVar21 = fVar14 + fVar14;
  fVar5 = (float)((ulong)*(undefined8 *)(this + 0x18) >> 0x20);
  fVar19 = (fVar4 + fVar4) * fVar4;
  fVar20 = (fVar4 + fVar4) * fVar5;
  fVar23 = fVar4 * fVar21 - fVar13 * fVar5;
  fVar18 = fVar4 * fVar13 + fVar21 * fVar5;
  fVar17 = fVar4 * fVar13 - fVar21 * fVar5;
  fVar15 = (_LC7 - fVar12 * fVar13) - fVar21 * fVar14;
  fVar22 = fVar14 * fVar13 + fVar20;
  fVar16 = (_LC7 - fVar21 * fVar14) - fVar19;
  fVar10 = *(float *)this;
  fVar11 = *(float *)(this + 4);
  fVar2 = *(float *)(this + 8);
  fVar3 = *(float *)(this + 0xc);
  if (cVar6 == '\x01') {
    *(float *)(param_1 + 0x10) = fVar7 * fVar16 + fVar10;
    *(float *)(param_1 + 0x14) = fVar7 * fVar22 + fVar11;
    *(float *)(param_1 + 0x18) = fVar7 * fVar17 + fVar2;
    *(float *)(param_1 + 0x1c) = fVar7 * 0.0 + fVar3;
    fVar7 = fVar9 * fVar18 + *(float *)this;
    fVar10 = fVar9 * fVar23 + *(float *)(this + 4);
    fVar11 = fVar9 * fVar15 + *(float *)(this + 8);
    fVar8 = fVar9 * 0.0 + *(float *)(this + 0xc);
  }
  else {
    fVar20 = fVar14 * fVar13 - fVar20;
    fVar14 = fVar13 * fVar5 + fVar4 * fVar21;
    fVar12 = (_LC7 - fVar19) - fVar12 * fVar13;
    if (cVar6 == '\x02') {
      *(float *)(param_1 + 0x10) = fVar7 * fVar16 + fVar10;
      *(float *)(param_1 + 0x14) = fVar7 * fVar22 + fVar11;
      *(float *)(param_1 + 0x18) = fVar7 * fVar17 + fVar2;
      *(float *)(param_1 + 0x1c) = fVar7 * 0.0 + fVar3;
      fVar7 = *(float *)this + fVar8 * fVar20;
      fVar10 = *(float *)(this + 4) + fVar8 * fVar12;
      fVar11 = *(float *)(this + 8) + fVar8 * fVar14;
      fVar8 = *(float *)(this + 0xc) + fVar8 * 0.0;
    }
    else {
      *(float *)(param_1 + 0x10) = fVar20 * fVar8 + fVar10;
      *(float *)(param_1 + 0x14) = fVar12 * fVar8 + fVar11;
      *(float *)(param_1 + 0x18) = fVar14 * fVar8 + fVar2;
      *(float *)(param_1 + 0x1c) = fVar8 * 0.0 + fVar3;
      fVar7 = fVar9 * fVar18 + *(float *)this;
      fVar10 = fVar9 * fVar23 + *(float *)(this + 4);
      fVar11 = fVar9 * fVar15 + *(float *)(this + 8);
      fVar8 = fVar9 * 0.0 + *(float *)(this + 0xc);
    }
  }
  *(float *)(param_1 + 0x20) = fVar7;
  *(float *)(param_1 + 0x24) = fVar10;
  *(float *)(param_1 + 0x28) = fVar11;
  *(float *)(param_1 + 0x2c) = fVar8;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::BodyInterface::CreateBody(JPH::BodyCreationSettings const&) */

void JPH::BodyInterface::_GLOBAL__sub_I_CreateBody(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC20;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::AllHitCollisionCollector<JPH::CollisionCollector<JPH::BodyID,
   JPH::CollisionCollectorTraitsCollideShape> >::~AllHitCollisionCollector() */

void __thiscall
JPH::
AllHitCollisionCollector<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>>
::~AllHitCollisionCollector
          (AllHitCollisionCollector<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


