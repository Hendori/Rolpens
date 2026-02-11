
/* ~MyCollector() */

void __thiscall
JPH::Character::PostSimulation(float,bool)::MyCollector::~MyCollector(MyCollector *this)

{
  return;
}



/* JPH::Character::SetShape(JPH::Shape const*, float,
   bool)::MyCollector::AddHit(JPH::CollideShapeResult const&) */

void JPH::Character::SetShape(JPH::Shape_const*,float,bool)::MyCollector::AddHit(JPH::
     CollideShapeResult_const__(long param_1,long param_2)

{
  if (*(float *)(param_1 + 0x18) <= *(float *)(param_2 + 0x30) &&
      *(float *)(param_2 + 0x30) != *(float *)(param_1 + 0x18)) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 8) = 0xff7fffff;
  }
  return;
}



/* ~MyCollector() */

void __thiscall
JPH::Character::SetShape(JPH::Shape_const*,float,bool)::MyCollector::~MyCollector(MyCollector *this)

{
  return;
}



/* ~MyCollector() */

void __thiscall
JPH::Character::PostSimulation(float,bool)::MyCollector::~MyCollector(MyCollector *this)

{
  operator_delete(this,0x70);
  return;
}



/* ~MyCollector() */

void __thiscall
JPH::Character::SetShape(JPH::Shape_const*,float,bool)::MyCollector::~MyCollector(MyCollector *this)

{
  operator_delete(this,0x20);
  return;
}



/* JPH::Character::PostSimulation(float, bool)::MyCollector::AddHit(JPH::CollideShapeResult const&)
    */

void JPH::Character::PostSimulation(float,bool)::MyCollector::AddHit(JPH::CollideShapeResult_const__
               (long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  
  fVar5 = SQRT(*(float *)(param_2 + 0x28) * *(float *)(param_2 + 0x28) +
               *(float *)(param_2 + 0x20) * *(float *)(param_2 + 0x20) + 0.0 +
               *(float *)(param_2 + 0x24) * *(float *)(param_2 + 0x24));
  auVar9._4_4_ = fVar5;
  auVar9._0_4_ = fVar5;
  auVar9._8_4_ = fVar5;
  auVar9._12_4_ = fVar5;
  auVar9 = divps(*(undefined1 (*) [16])(param_2 + 0x20),auVar9);
  fVar6 = 0.0 - auVar9._0_4_;
  fVar7 = 0.0 - auVar9._4_4_;
  fVar8 = 0.0 - auVar9._8_4_;
  fVar5 = fVar8 * *(float *)(param_1 + 0x58) +
          fVar7 * *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x50) * fVar6 + 0.0;
  if (*(float *)(param_1 + 0x60) <= fVar5 && fVar5 != *(float *)(param_1 + 0x60)) {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x38);
    fVar1 = *(float *)(param_2 + 0x10);
    fVar2 = *(float *)(param_2 + 0x14);
    fVar3 = *(float *)(param_2 + 0x18);
    fVar4 = *(float *)(param_2 + 0x1c);
    *(float *)(param_1 + 0x30) = fVar6;
    *(float *)(param_1 + 0x34) = fVar7;
    *(float *)(param_1 + 0x38) = fVar8;
    *(float *)(param_1 + 0x3c) = 0.0 - auVar9._12_4_;
    *(float *)(param_1 + 0x60) = fVar5;
    *(float *)(param_1 + 0x20) = fVar1 + *(float *)(param_1 + 0x40);
    *(float *)(param_1 + 0x24) = fVar2 + *(float *)(param_1 + 0x44);
    *(float *)(param_1 + 0x28) = fVar3 + *(float *)(param_1 + 0x48);
    *(float *)(param_1 + 0x2c) = fVar4 + *(float *)(param_1 + 0x4c);
  }
  return;
}



/* JPH::Character::~Character() */

void __thiscall JPH::Character::~Character(Character *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__Character_001020d8;
  JPH::BodyInterface::DestroyBody((BodyID *)(*(long *)(this + 0x10) + 0x158));
  plVar2 = *(long **)(this + 0x80);
  *(code **)this = JPH::BodyInterface::CreateBody;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
        (*Free)();
      }
      else {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
  }
  plVar2 = *(long **)(this + 0x18);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00100168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  return;
}



/* JPH::Character::~Character() */

void __thiscall JPH::Character::~Character(Character *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__Character_001020d8;
  JPH::BodyInterface::DestroyBody((BodyID *)(*(long *)(this + 0x10) + 0x158));
  plVar2 = *(long **)(this + 0x80);
  *(code **)this = JPH::BodyInterface::CreateBody;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
        (*Free)();
      }
      else {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
  }
  plVar2 = *(long **)(this + 0x18);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0010020a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)(this);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001001fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00100428) */
/* WARNING: Removing unreachable block (ram,0x00100480) */
/* WARNING: Removing unreachable block (ram,0x00100439) */
/* WARNING: Removing unreachable block (ram,0x00100468) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Character::Character(JPH::CharacterSettings const*, JPH::Vec3, JPH::Quat, unsigned long,
   JPH::PhysicsSystem*) */

void __thiscall
JPH::Character::Character
          (Character *this,CharacterBaseSettings *param_1,undefined8 param_3,PhysicsSystem *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::CharacterBase::CharacterBase((CharacterBase *)this,param_1,param_4);
  *(undefined2 *)(this + 0x94) = *(undefined2 *)(param_1 + 0x40);
  *(undefined ***)this = &PTR__Character_001020d8;
  plVar3 = *(long **)(this + 0x18);
  *(undefined4 *)(this + 0x90) = 0xffffffff;
  if (plVar3 != (long *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  lVar4 = JPH::BodyInterface::CreateBody((BodyCreationSettings *)(*(long *)(this + 0x10) + 0x158));
  if (lVar4 != 0) {
    *(undefined4 *)(this + 0x90) = *(undefined4 *)(lVar4 + 0x70);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::Character::AddToPhysicsSystem(JPH::EActivation, bool) */

void __thiscall JPH::Character::AddToPhysicsSystem(Character *this,undefined4 param_2,char param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10) + 0x158;
  if (param_3 == '\0') {
    lVar1 = *(long *)(this + 0x10) + 0x140;
  }
  JPH::BodyInterface::AddBody(lVar1,this + 0x90,param_2);
  return;
}



/* JPH::Character::RemoveFromPhysicsSystem(bool) */

void __thiscall JPH::Character::RemoveFromPhysicsSystem(Character *this,bool param_1)

{
  BodyID *pBVar1;
  
  pBVar1 = (BodyID *)(*(long *)(this + 0x10) + 0x158);
  if (!param_1) {
    pBVar1 = (BodyID *)(*(long *)(this + 0x10) + 0x140);
  }
  JPH::BodyInterface::RemoveBody(pBVar1);
  return;
}



/* JPH::Character::Activate(bool) */

void __thiscall JPH::Character::Activate(Character *this,bool param_1)

{
  BodyID *pBVar1;
  
  pBVar1 = (BodyID *)(*(long *)(this + 0x10) + 0x158);
  if (!param_1) {
    pBVar1 = (BodyID *)(*(long *)(this + 0x10) + 0x140);
  }
  JPH::BodyInterface::ActivateBody(pBVar1);
  return;
}



/* JPH::Character::CheckCollision(JPH::Mat44 const&, JPH::Vec3, float, JPH::Shape const*, JPH::Vec3,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   bool) const */

void __thiscall
JPH::Character::CheckCollision
          (undefined8 param_1_00,undefined8 param_2,undefined4 param_3,Character *this,
          undefined8 param_1,undefined8 param_6,undefined8 param_7,char param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined **local_a8;
  undefined4 local_a0;
  undefined **local_98;
  undefined4 local_90;
  undefined **local_88;
  undefined8 local_80;
  undefined2 local_78;
  undefined **local_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined2 local_48 [2];
  undefined8 local_44;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = *(undefined8 **)(this + 0x10);
  local_78 = *(undefined2 *)(this + 0x94);
  local_80 = *puVar1;
  local_88 = &PTR__DefaultBroadPhaseLayerFilter_00102080;
  local_60 = puVar1[1];
  local_a0 = *(undefined4 *)(this + 0x90);
  local_a8 = &PTR__IgnoreSingleBodyFilter_001020a8;
  local_44 = _LC10;
  local_48[0] = 0x100;
  local_68 = &PTR__DefaultObjectLayerFilter_00102058;
  puVar2 = puVar1 + 0x30;
  if (param_8 == '\0') {
    puVar2 = puVar1 + 0x2e;
  }
  local_98 = &PTR__ShapeFilter_00102028;
  local_24 = 0;
  local_90 = 0xffffffff;
  local_58 = local_78;
  local_38 = param_1_00;
  local_30 = param_2;
  local_28 = param_3;
  JPH::NarrowPhaseQuery::CollideShape
            (0x3f8000003f800000,puVar2,param_6,param_1,local_48,param_7,&local_88,&local_68,
             &local_a8,&local_98);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::Character::CheckCollision(JPH::Vec3, JPH::Quat, JPH::Vec3, float, JPH::Shape const*,
   JPH::Vec3, JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>&, bool) const */

void JPH::Character::CheckCollision
               (undefined8 param_1,float param_2,undefined8 param_3,undefined8 param_4,
               Character *param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
               long *param_9,undefined8 param_10,undefined1 param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  float fVar1;
  float fVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [12];
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [12];
  float fVar16;
  float fVar17;
  undefined1 auVar18 [12];
  float local_e8;
  float fStack_e4;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  undefined8 local_48;
  float local_40;
  float local_3c;
  long local_30;
  
  fVar4 = (float)((ulong)param_3 >> 0x20);
  fVar9 = (float)param_3;
  fVar1 = (float)param_4;
  fVar13 = fVar9 + fVar9;
  fVar16 = fVar4 + fVar4;
  fVar2 = (float)((ulong)param_4 >> 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  fVar5 = fVar2 * (fVar1 + fVar1);
  fVar17 = fVar1 * (fVar1 + fVar1);
  fVar14 = fVar1 * fVar16 + fVar13 * fVar2;
  fVar8 = fVar1 * fVar13 + fVar16 * fVar2;
  fVar11 = fVar1 * fVar16 - fVar13 * fVar2;
  fVar10 = fVar1 * fVar13 - fVar16 * fVar2;
  fVar6 = (_LC8 - fVar9 * fVar13) - fVar4 * fVar16;
  auVar7._4_4_ = fVar11;
  auVar7._0_4_ = fVar8;
  auVar7._8_4_ = fVar6;
  auVar7._12_4_ = 0;
  fVar12 = fVar4 * fVar13 - fVar5;
  fVar5 = fVar4 * fVar13 + fVar5;
  fVar9 = (_LC8 - fVar17) - fVar9 * fVar13;
  fVar17 = (_LC8 - fVar4 * fVar16) - fVar17;
  local_e8 = (float)param_1;
  fVar1 = local_e8;
  fStack_e4 = (float)((ulong)param_1 >> 0x20);
  fVar2 = fStack_e4;
  if (*(code **)(*param_9 + 0x18) == Shape::GetCenterOfMass) {
    auVar3 = SUB1612((undefined1  [16])0x0,0);
    auVar15 = ZEXT812(0);
    auVar18 = ZEXT812(0);
  }
  else {
    auVar18 = (**(code **)(*param_9 + 0x18))(param_9);
    auVar3._0_4_ = auVar18._8_4_;
    local_e8 = auVar18._0_4_;
    fStack_e4 = auVar18._4_4_;
    auVar18._4_4_ = local_e8;
    auVar18._0_4_ = local_e8;
    auVar18._8_4_ = local_e8;
    auVar15._4_4_ = fStack_e4;
    auVar15._0_4_ = fStack_e4;
    auVar15._8_4_ = fStack_e4;
    auVar3._4_4_ = auVar3._0_4_;
    auVar3._8_4_ = auVar3._0_4_;
  }
  uStack_6c = 0;
  uStack_5c = 0;
  local_48 = CONCAT44(auVar18._4_4_ * fVar5 + auVar15._4_4_ * fVar9 + auVar3._4_4_ * fVar11 + fVar2,
                      auVar18._0_4_ * fVar17 + auVar15._0_4_ * fVar12 + auVar3._0_4_ * fVar8 + fVar1
                     );
  local_40 = auVar18._8_4_ * fVar10 + auVar15._8_4_ * fVar14 + auVar3._8_4_ * fVar6 + param_2;
  local_78 = fVar17;
  fStack_74 = fVar5;
  fStack_70 = fVar10;
  local_68 = fVar12;
  fStack_64 = fVar9;
  fStack_60 = fVar14;
  local_58 = auVar7;
  local_3c = _LC8;
  CheckCollision(param_5,param_6,param_7,param_14,param_15,param_8,&local_78,param_9,param_10,
                 param_11);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::Character::CheckCollision(JPH::Shape const*, float, JPH::Vec3,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   bool) const */

void JPH::Character::CheckCollision(long param_1,long *param_2,undefined8 param_3,char param_4)

{
  float fVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long in_FS_OFFSET;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [12];
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 local_108 [8];
  undefined8 uStack_100;
  float local_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  float local_50;
  float local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar8 = (long *)(*(long *)(param_1 + 0x10) + 0x120);
  if (param_4 != '\0') {
    plVar8 = (long *)(*(long *)(param_1 + 0x10) + 0x130);
  }
  if (*(int *)(param_1 + 0x90) != -1) {
    lVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,param_1 + 0x90);
    uVar7 = (ulong)(*(uint *)(param_1 + 0x90) & 0x7fffff);
    if (uVar7 < *(ulong *)plVar8[1]) {
      puVar2 = *(undefined8 **)(((ulong *)plVar8[1])[2] + uVar7 * 8);
      if ((((ulong)puVar2 & 1) == 0) && (*(uint *)(param_1 + 0x90) == *(uint *)(puVar2 + 0xe))) {
        fVar22 = (float)puVar2[2];
        fVar13 = (float)puVar2[3];
        fVar10 = (float)((ulong)puVar2[2] >> 0x20);
        fVar15 = fVar22 + fVar22;
        fVar18 = fVar10 + fVar10;
        fVar16 = (float)((ulong)puVar2[3] >> 0x20);
        fVar1 = *(float *)(puVar2 + 1);
        fVar9 = fVar16 * (fVar13 + fVar13);
        fVar20 = fVar13 * (fVar13 + fVar13);
        pcVar3 = *(code **)(**(long **)(param_1 + 0x18) + 0x18);
        auVar12._0_4_ = fVar13 * fVar15 + fVar18 * fVar16;
        fVar17 = fVar13 * fVar15 - fVar18 * fVar16;
        fVar21 = fVar13 * fVar18 - fVar15 * fVar16;
        fVar16 = fVar15 * fVar16 + fVar13 * fVar18;
        fVar13 = (_LC8 - fVar22 * fVar15) - fVar10 * fVar18;
        auVar12._4_4_ = fVar21;
        auVar12._8_4_ = fVar13;
        auVar12._12_4_ = 0;
        fVar22 = (_LC8 - fVar20) - fVar22 * fVar15;
        auVar14._0_4_ = fVar10 * fVar15 - fVar9;
        fVar9 = fVar10 * fVar15 + fVar9;
        local_108._0_4_ = (undefined4)*puVar2;
        uVar4 = local_108._0_4_;
        local_108._4_4_ = (undefined4)((ulong)*puVar2 >> 0x20);
        uVar5 = local_108._4_4_;
        auVar14._4_4_ = fVar22;
        auVar14._8_4_ = fVar16;
        auVar14._12_4_ = 0;
        fVar20 = (_LC8 - fVar10 * fVar18) - fVar20;
        auVar19 = SUB1612((undefined1  [16])0x0,0);
        if (pcVar3 != Shape::GetCenterOfMass) {
          _local_108 = (*pcVar3)();
          auVar19 = _local_108;
        }
        auVar11 = SUB1612((undefined1  [16])0x0,0);
        if (*(code **)(*param_2 + 0x18) != Shape::GetCenterOfMass) {
          _local_108 = (**(code **)(*param_2 + 0x18))(param_2);
          auVar11 = SUB1612(_local_108,0);
        }
        uStack_7c = 0;
        fVar10 = auVar11._0_4_ - auVar19._0_4_;
        fVar15 = auVar11._4_4_ - auVar19._4_4_;
        fVar18 = auVar11._8_4_ - auVar19._8_4_;
        _local_108 = (undefined1  [16])0x0;
        local_58 = CONCAT44(fVar10 * fVar9 + fVar15 * fVar22 + fVar18 * fVar21 + (float)uVar5,
                            fVar10 * fVar20 + fVar15 * auVar14._0_4_ + fVar18 * auVar12._0_4_ +
                            (float)uVar4);
        local_50 = fVar10 * fVar17 + fVar15 * fVar16 + fVar18 * fVar13 + fVar1;
        if (*(char *)(puVar2 + 0xf) != '\0') {
          _local_108 = *(undefined1 (*) [16])puVar2[9];
        }
        local_88 = fVar20;
        fStack_84 = fVar9;
        fStack_80 = fVar17;
        local_78 = auVar14;
        local_68 = auVar12;
        local_4c = _LC8;
        if (lVar6 != 0) {
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
        CheckCollision((Character *)local_108,uStack_100,param_1,&local_88,param_2,param_3,param_4);
        goto LAB_00100c88;
      }
    }
    if (lVar6 != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x18))(plVar8);
        return;
      }
      goto LAB_00100d6e;
    }
  }
LAB_00100c88:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100d6e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Character::PostSimulation(float, bool) */

void JPH::Character::PostSimulation(float param_1,bool param_2)

{
  Body *this;
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  char in_SIL;
  undefined7 in_register_00000039;
  long lVar11;
  long *plVar12;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
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
  undefined1 auVar27 [16];
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined1 local_c8 [8];
  undefined8 uStack_c0;
  undefined **local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long local_30;
  
  lVar11 = CONCAT71(in_register_00000039,param_2);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar9 = (long *)(*(long *)(lVar11 + 0x10) + 0x120);
  if (in_SIL != '\0') {
    plVar9 = (long *)(*(long *)(lVar11 + 0x10) + 0x130);
  }
  if (*(int *)(lVar11 + 0x90) != -1) {
    lVar5 = (**(code **)(*plVar9 + 0x10))(plVar9,lVar11 + 0x90);
    uVar6 = (ulong)(*(uint *)(lVar11 + 0x90) & 0x7fffff);
    if (((uVar6 < *(ulong *)plVar9[1]) &&
        (this = *(Body **)(((ulong *)plVar9[1])[2] + uVar6 * 8), ((ulong)this & 1) == 0)) &&
       (*(uint *)(lVar11 + 0x90) == *(uint *)(this + 0x70))) {
      auVar27 = Body::GetPosition(this);
      uVar8 = *(undefined8 *)(this + 0x10);
      uVar3 = *(undefined8 *)(this + 0x18);
      if (this[0x78] == (Body)0x0) {
        _local_c8 = (undefined1  [16])0x0;
      }
      else {
        _local_c8 = **(undefined1 (**) [16])(this + 0x48);
      }
      if (lVar5 != 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar5);
      }
      local_58 = *(undefined8 *)(lVar11 + 0x20);
      uStack_50 = *(undefined8 *)(lVar11 + 0x28);
      local_a8 = &PTR__MyCollector_00102108;
      local_88 = (undefined1  [16])0x0;
      local_78 = (undefined1  [16])0x0;
      local_a0 = 0x7f7fffff;
      local_98 = 0;
      local_90 = 0xffffffffffffffff;
      local_48 = 0xff7fffff;
      local_68 = auVar27;
      CheckCollision(auVar27._0_8_,auVar27._8_8_,uVar8,uVar3,local_c8,uStack_c0,param_1,lVar11,
                     *(undefined8 *)(lVar11 + 0x18),&local_a8,in_SIL,in_R8,in_R9,auVar27._0_8_);
      *(int *)(lVar11 + 0x48) = (int)local_90;
      *(undefined4 *)(lVar11 + 0x4c) = local_90._4_4_;
      *(undefined8 *)(lVar11 + 0x50) = local_88._0_8_;
      *(undefined8 *)(lVar11 + 0x58) = local_88._8_8_;
      *(undefined8 *)(lVar11 + 0x60) = local_78._0_8_;
      *(undefined8 *)(lVar11 + 0x68) = local_78._8_8_;
      plVar9 = (long *)(*(long *)(lVar11 + 0x10) + 0x130);
      plVar10 = (long *)(*(long *)(lVar11 + 0x10) + 0x120);
      if (in_SIL != '\0') {
        plVar10 = plVar9;
      }
      if ((int)local_90 == -1) {
        lVar5 = 0;
LAB_001012db:
        plVar7 = PhysicsMaterial::sDefault;
        plVar9 = *(long **)(lVar11 + 0x80);
        *(undefined4 *)(lVar11 + 0x44) = 3;
        if (plVar9 != plVar7) {
          if (plVar9 != (long *)0x0) {
            LOCK();
            plVar12 = plVar9 + 1;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            plVar7 = PhysicsMaterial::sDefault;
            if ((int)*plVar12 == 0) {
              if (*(code **)(*plVar9 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
                (*Free)();
                plVar7 = PhysicsMaterial::sDefault;
              }
              else {
                (**(code **)(*plVar9 + 0x18))();
                plVar7 = PhysicsMaterial::sDefault;
              }
            }
          }
          *(long **)(lVar11 + 0x80) = plVar7;
          if (plVar7 != (long *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
          }
        }
        uVar8 = 0;
        *(undefined1 (*) [16])(lVar11 + 0x70) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = (**(code **)(*plVar10 + 0x10))(plVar10,lVar11 + 0x48,plVar9,auVar27._8_8_);
        uVar6 = (ulong)((uint)*(float *)(lVar11 + 0x48) & 0x7fffff);
        if ((*(ulong *)plVar10[1] <= uVar6) ||
           (pfVar1 = *(float **)(((ulong *)plVar10[1])[2] + uVar6 * 8), ((ulong)pfVar1 & 1) != 0))
        goto LAB_001012db;
        local_c8._0_4_ = auVar27._0_4_;
        local_c8._4_4_ = auVar27._4_4_;
        uStack_c0._0_4_ = auVar27._8_4_;
        if (*(float *)(lVar11 + 0x48) != pfVar1[0x1c]) goto LAB_001012db;
        local_d8 = (uint)uVar8;
        uStack_d4 = (uint)((ulong)uVar8 >> 0x20);
        uStack_d0 = (uint)uVar3;
        uStack_cc = (uint)((ulong)uVar3 >> 0x20);
        fVar13 = (float)(local_d8 ^ __LC3);
        fVar15 = (float)(uStack_d4 ^ _UNK_00102194);
        fVar16 = (float)(uStack_d0 ^ _UNK_00102198);
        fVar17 = (float)(uStack_cc ^ _UNK_0010219c);
        fVar22 = fVar13 + fVar13;
        fVar24 = fVar15 + fVar15;
        fVar25 = (fVar16 + fVar16) * fVar16;
        fVar14 = fVar17 * (fVar16 + fVar16);
        fVar19 = fVar22 * fVar16 + fVar24 * fVar17;
        fVar26 = fVar16 * fVar24 - fVar22 * fVar17;
        fVar23 = fVar22 * fVar17 + fVar16 * fVar24;
        fVar20 = (_LC8 - fVar13 * fVar22) - fVar24 * fVar15;
        fVar21 = fVar15 * fVar22 - fVar14;
        fVar14 = fVar15 * fVar22 + fVar14;
        fVar18 = (_LC8 - fVar24 * fVar15) - fVar25;
        fVar17 = fVar22 * fVar16 - fVar24 * fVar17;
        fVar22 = (_LC8 - fVar25) - fVar13 * fVar22;
        fVar13 = *(float *)(lVar11 + 0x50);
        fVar15 = *(float *)(lVar11 + 0x54);
        fVar16 = *(float *)(lVar11 + 0x58);
        uVar4 = 2;
        if ((fVar15 * fVar23 + fVar17 * fVar13 + fVar16 * fVar20 +
            (0.0 - ((float)local_c8._0_4_ * fVar17 + (float)local_c8._4_4_ * fVar23 +
                   (float)uStack_c0 * fVar20))) * *(float *)(lVar11 + 0x38) +
            (fVar15 * fVar22 + fVar14 * fVar13 + fVar16 * fVar26 +
            (0.0 - ((float)local_c8._0_4_ * fVar14 + (float)local_c8._4_4_ * fVar22 +
                   (float)uStack_c0 * fVar26))) * *(float *)(lVar11 + 0x34) +
            *(float *)(lVar11 + 0x30) *
            (fVar15 * fVar21 + fVar18 * fVar13 + fVar16 * fVar19 +
            (0.0 - ((float)local_c8._0_4_ * fVar18 + (float)local_c8._4_4_ * fVar21 +
                   (float)uStack_c0 * fVar19))) + 0.0 + *(float *)(lVar11 + 0x3c) <= 0.0) {
          if ((_LC11 <= *(float *)(lVar11 + 0x40)) ||
             (uVar4 = 1,
             *(float *)(lVar11 + 0x40) <=
             (float)((ulong)*(undefined8 *)(lVar11 + 0x60) >> 0x20) * *(float *)(lVar11 + 0x24) +
             (float)*(undefined8 *)(lVar11 + 0x60) * *(float *)(lVar11 + 0x20) + 0.0 +
             (float)*(undefined8 *)(lVar11 + 0x68) * *(float *)(lVar11 + 0x28))) {
            uVar4 = 0;
          }
        }
        plVar9 = *(long **)(pfVar1 + 0x10);
        *(undefined4 *)(lVar11 + 0x44) = uVar4;
        if (*(code **)(*plVar9 + 0x50) == ConvexShape::GetMaterial) {
          plVar7 = (long *)plVar9[4];
          plVar9 = PhysicsMaterial::sDefault;
          if (plVar7 == (long *)0x0) goto LAB_001013d7;
          plVar12 = *(long **)(lVar11 + 0x80);
          if (plVar12 != plVar7) {
            plVar9 = plVar7;
            if (plVar12 != (long *)0x0) goto LAB_00101219;
            *(long **)(lVar11 + 0x80) = plVar7;
            goto LAB_00101397;
          }
        }
        else {
          plVar9 = (long *)(**(code **)(*plVar9 + 0x50))(plVar9,lVar11 + 0x4c);
LAB_001013d7:
          plVar12 = *(long **)(lVar11 + 0x80);
          if (plVar9 != plVar12) {
            if (plVar12 != (long *)0x0) {
LAB_00101219:
              LOCK();
              plVar7 = plVar12 + 1;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)*plVar7 == 0) {
                if (*(code **)(*plVar12 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
                  (*Free)();
                }
                else {
                  (**(code **)(*plVar12 + 0x18))();
                }
              }
            }
            *(long **)(lVar11 + 0x80) = plVar9;
            plVar7 = plVar9;
            if (plVar9 != (long *)0x0) {
LAB_00101397:
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
            }
          }
          fVar13 = *(float *)(lVar11 + 0x50);
          fVar15 = *(float *)(lVar11 + 0x54);
          fVar16 = *(float *)(lVar11 + 0x58);
        }
        fVar14 = 0.0;
        fVar17 = 0.0;
        fVar18 = 0.0;
        fVar19 = 0.0;
        pfVar2 = *(float **)(pfVar1 + 0x12);
        if (*(char *)(pfVar1 + 0x1e) != '\0') {
          fVar19 = (fVar15 - pfVar1[1]) * pfVar2[4] - pfVar2[5] * (fVar13 - *pfVar1);
          fVar14 = ((fVar16 - pfVar1[2]) * pfVar2[5] - pfVar2[6] * (fVar15 - pfVar1[1])) + *pfVar2;
          fVar17 = ((fVar13 - *pfVar1) * pfVar2[6] - pfVar2[4] * (fVar16 - pfVar1[2])) + pfVar2[1];
          fVar18 = fVar19 + pfVar2[2];
          fVar19 = fVar19 + pfVar2[3];
        }
        uVar8 = *(undefined8 *)(pfVar1 + 0x14);
        *(float *)(lVar11 + 0x70) = fVar14;
        *(float *)(lVar11 + 0x74) = fVar17;
        *(float *)(lVar11 + 0x78) = fVar18;
        *(float *)(lVar11 + 0x7c) = fVar19;
      }
      *(undefined8 *)(lVar11 + 0x88) = uVar8;
      if (lVar5 != 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar5);
      }
    }
    else if (lVar5 != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100e57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar5);
        return;
      }
      goto LAB_00101436;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101436:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::Character::SetLinearAndAngularVelocity(JPH::Vec3, JPH::Vec3, bool) */

void JPH::Character::SetLinearAndAngularVelocity(long param_1,char param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10) + 0x158;
  if (param_2 == '\0') {
    lVar1 = *(long *)(param_1 + 0x10) + 0x140;
  }
  JPH::BodyInterface::SetLinearAndAngularVelocity(lVar1,param_1 + 0x90);
  return;
}



/* JPH::Character::GetLinearVelocity(bool) const */

void __thiscall JPH::Character::GetLinearVelocity(Character *this,bool param_1)

{
  BodyID *pBVar1;
  
  pBVar1 = (BodyID *)(*(long *)(this + 0x10) + 0x158);
  if (!param_1) {
    pBVar1 = (BodyID *)(*(long *)(this + 0x10) + 0x140);
  }
  JPH::BodyInterface::GetLinearVelocity(pBVar1);
  return;
}



/* JPH::Character::SetLinearVelocity(JPH::Vec3, bool) */

void JPH::Character::SetLinearVelocity(long param_1,char param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10) + 0x158;
  if (param_2 == '\0') {
    lVar1 = *(long *)(param_1 + 0x10) + 0x140;
  }
  JPH::BodyInterface::SetLinearVelocity(lVar1,param_1 + 0x90);
  return;
}



/* JPH::Character::AddLinearVelocity(JPH::Vec3, bool) */

void JPH::Character::AddLinearVelocity(long param_1,char param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10) + 0x158;
  if (param_2 == '\0') {
    lVar1 = *(long *)(param_1 + 0x10) + 0x140;
  }
  JPH::BodyInterface::AddLinearVelocity(lVar1,param_1 + 0x90);
  return;
}



/* JPH::Character::AddImpulse(JPH::Vec3, bool) */

void JPH::Character::AddImpulse(long param_1,char param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10) + 0x158;
  if (param_2 == '\0') {
    lVar1 = *(long *)(param_1 + 0x10) + 0x140;
  }
  JPH::BodyInterface::AddImpulse(lVar1,param_1 + 0x90);
  return;
}



/* JPH::Character::GetPositionAndRotation(JPH::Vec3&, JPH::Quat&, bool) const */

void __thiscall
JPH::Character::GetPositionAndRotation(Character *this,Vec3 *param_1,Quat *param_2,bool param_3)

{
  BodyID *pBVar1;
  
  pBVar1 = (BodyID *)(*(long *)(this + 0x10) + 0x158);
  if (!param_3) {
    pBVar1 = (BodyID *)(*(long *)(this + 0x10) + 0x140);
  }
  JPH::BodyInterface::GetPositionAndRotation(pBVar1,this + 0x90,param_1);
  return;
}



/* JPH::Character::SetPositionAndRotation(JPH::Vec3, JPH::Quat, JPH::EActivation, bool) const */

void JPH::Character::SetPositionAndRotation(long param_1,undefined4 param_2,char param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10) + 0x158;
  if (param_3 == '\0') {
    lVar1 = *(long *)(param_1 + 0x10) + 0x140;
  }
  JPH::BodyInterface::SetPositionAndRotation(lVar1,param_1 + 0x90,param_2);
  return;
}



/* JPH::Character::GetPosition(bool) const */

void __thiscall JPH::Character::GetPosition(Character *this,bool param_1)

{
  BodyID *pBVar1;
  
  pBVar1 = (BodyID *)(*(long *)(this + 0x10) + 0x158);
  if (!param_1) {
    pBVar1 = (BodyID *)(*(long *)(this + 0x10) + 0x140);
  }
  JPH::BodyInterface::GetPosition(pBVar1);
  return;
}



/* JPH::Character::SetPosition(JPH::Vec3, JPH::EActivation, bool) */

void JPH::Character::SetPosition(long param_1,undefined4 param_2,char param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10) + 0x158;
  if (param_3 == '\0') {
    lVar1 = *(long *)(param_1 + 0x10) + 0x140;
  }
  JPH::BodyInterface::SetPosition(lVar1,param_1 + 0x90,param_2);
  return;
}



/* JPH::Character::GetRotation(bool) const */

void __thiscall JPH::Character::GetRotation(Character *this,bool param_1)

{
  BodyID *pBVar1;
  
  pBVar1 = (BodyID *)(*(long *)(this + 0x10) + 0x158);
  if (!param_1) {
    pBVar1 = (BodyID *)(*(long *)(this + 0x10) + 0x140);
  }
  JPH::BodyInterface::GetRotation(pBVar1);
  return;
}



/* JPH::Character::SetRotation(JPH::Quat, JPH::EActivation, bool) */

void JPH::Character::SetRotation(long param_1,undefined4 param_2,char param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10) + 0x158;
  if (param_3 == '\0') {
    lVar1 = *(long *)(param_1 + 0x10) + 0x140;
  }
  JPH::BodyInterface::SetRotation(lVar1,param_1 + 0x90,param_2);
  return;
}



/* JPH::Character::GetCenterOfMassPosition(bool) const */

void __thiscall JPH::Character::GetCenterOfMassPosition(Character *this,bool param_1)

{
  BodyID *pBVar1;
  
  pBVar1 = (BodyID *)(*(long *)(this + 0x10) + 0x158);
  if (!param_1) {
    pBVar1 = (BodyID *)(*(long *)(this + 0x10) + 0x140);
  }
  JPH::BodyInterface::GetCenterOfMassPosition(pBVar1);
  return;
}



/* JPH::Character::GetWorldTransform(bool) const */

undefined8 JPH::Character::GetWorldTransform(bool param_1)

{
  long lVar1;
  undefined7 in_register_00000039;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::BodyInterface::GetWorldTransform((BodyID *)CONCAT71(in_register_00000039,param_1));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT71(in_register_00000039,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::Character::SetLayer(unsigned short, bool) */

void __thiscall JPH::Character::SetLayer(Character *this,ushort param_1,bool param_2)

{
  BodyID *pBVar1;
  
  *(ushort *)(this + 0x94) = param_1;
  pBVar1 = (BodyID *)(*(long *)(this + 0x10) + 0x140);
  if (param_2) {
    pBVar1 = (BodyID *)(*(long *)(this + 0x10) + 0x158);
  }
  JPH::BodyInterface::SetObjectLayer(pBVar1,(short)this + 0x90);
  return;
}



/* JPH::Character::SetShape(JPH::Shape const*, float, bool) */

undefined8 __thiscall
JPH::Character::SetShape(Character *this,Shape *param_1,float param_2,bool param_3)

{
  Shape *pSVar1;
  Shape *pSVar2;
  undefined8 uVar3;
  BodyID *pBVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined1 auVar6 [16];
  undefined **local_58;
  undefined4 local_50;
  undefined8 local_48;
  float local_40;
  char local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < _LC1) {
    pBVar4 = (BodyID *)(*(long *)(this + 0x10) + 0x140);
    if (param_3) {
      pBVar4 = (BodyID *)(*(long *)(this + 0x10) + 0x158);
    }
    auVar6 = JPH::BodyInterface::GetPosition(pBVar4);
    local_58 = &PTR__MyCollector_00102148;
    local_50 = 0x7f7fffff;
    local_48 = 0;
    local_3c = '\0';
    local_40 = param_2;
    CheckCollision(0,auVar6._0_8_,auVar6._8_8_,this,param_1,&local_58,param_3);
    uVar3 = 0;
    if (local_3c != '\0') goto LAB_00101888;
  }
  pSVar2 = *(Shape **)(this + 0x18);
  if (param_1 != pSVar2) {
    if (pSVar2 != (Shape *)0x0) {
      LOCK();
      pSVar1 = pSVar2 + 8;
      *(int *)pSVar1 = *(int *)pSVar1 + -1;
      UNLOCK();
      if (*(int *)pSVar1 == 0) {
        (**(code **)(*(long *)pSVar2 + 8))();
      }
    }
    *(Shape **)(this + 0x18) = param_1;
    if (param_1 != (Shape *)0x0) {
      LOCK();
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      UNLOCK();
      param_1 = *(Shape **)(this + 0x18);
    }
  }
  lVar5 = *(long *)(this + 0x10) + 0x140;
  if (param_3) {
    lVar5 = *(long *)(this + 0x10) + 0x158;
  }
  JPH::BodyInterface::SetShape(lVar5,this + 0x90,param_1,0,0);
  uVar3 = 1;
LAB_00101888:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::Character::GetTransformedShape(bool) const */

undefined8 JPH::Character::GetTransformedShape(bool param_1)

{
  long lVar1;
  undefined7 in_register_00000039;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::BodyInterface::GetTransformedShape((BodyID *)CONCAT71(in_register_00000039,param_1));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT71(in_register_00000039,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::ShapeFilter::ShouldCollide(JPH::Shape const*, JPH::SubShapeID const&) const */

undefined8 JPH::ShapeFilter::ShouldCollide(Shape *param_1,SubShapeID *param_2)

{
  return 1;
}



/* JPH::ShapeFilter::ShouldCollide(JPH::Shape const*, JPH::SubShapeID const&, JPH::Shape const*,
   JPH::SubShapeID const&) const */

undefined8
JPH::ShapeFilter::ShouldCollide
          (Shape *param_1,SubShapeID *param_2,Shape *param_3,SubShapeID *param_4)

{
  return 1;
}



/* JPH::ShapeFilter::~ShapeFilter() */

void __thiscall JPH::ShapeFilter::~ShapeFilter(ShapeFilter *this)

{
  return;
}



/* JPH::Shape::GetCenterOfMass() const */

undefined1  [16] JPH::Shape::GetCenterOfMass(void)

{
  return ZEXT816(0);
}



/* JPH::ObjectLayerPairFilter::ShouldCollide(unsigned short, unsigned short) const */

undefined8 JPH::ObjectLayerPairFilter::ShouldCollide(ushort param_1,ushort param_2)

{
  return 1;
}



/* JPH::ObjectVsBroadPhaseLayerFilter::ShouldCollide(unsigned short, JPH::BroadPhaseLayer) const */

undefined8 JPH::ObjectVsBroadPhaseLayerFilter::ShouldCollide(void)

{
  return 1;
}



/* JPH::BodyFilter::ShouldCollideLocked(JPH::Body const&) const */

undefined8 JPH::BodyFilter::ShouldCollideLocked(Body *param_1)

{
  return 1;
}



/* JPH::IgnoreSingleBodyFilter::ShouldCollide(JPH::BodyID const&) const */

undefined4 __thiscall
JPH::IgnoreSingleBodyFilter::ShouldCollide(IgnoreSingleBodyFilter *this,BodyID *param_1)

{
  return CONCAT31((int3)((uint)*(int *)param_1 >> 8),*(int *)(this + 8) != *(int *)param_1);
}



/* JPH::ConvexShape::GetMaterial(JPH::SubShapeID const&) const */

long JPH::ConvexShape::GetMaterial(SubShapeID *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar1 = PhysicsMaterial::sDefault;
  }
  return lVar1;
}



/* JPH::DefaultBroadPhaseLayerFilter::~DefaultBroadPhaseLayerFilter() */

void __thiscall
JPH::DefaultBroadPhaseLayerFilter::~DefaultBroadPhaseLayerFilter(DefaultBroadPhaseLayerFilter *this)

{
  return;
}



/* JPH::DefaultObjectLayerFilter::~DefaultObjectLayerFilter() */

void __thiscall
JPH::DefaultObjectLayerFilter::~DefaultObjectLayerFilter(DefaultObjectLayerFilter *this)

{
  return;
}



/* JPH::IgnoreSingleBodyFilter::~IgnoreSingleBodyFilter() */

void __thiscall JPH::IgnoreSingleBodyFilter::~IgnoreSingleBodyFilter(IgnoreSingleBodyFilter *this)

{
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x00101a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>::Reset() */

void __thiscall
JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>::Reset
          (CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>
           *this)

{
  *(undefined4 *)(this + 8) = 0x7f7fffff;
  return;
}



/* JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>::OnBody(JPH::Body const&) */

void JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>::
     OnBody(Body *param_1)

{
  return;
}



/* JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>::SetUserData(unsigned long) */

void JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>::
     SetUserData(ulong param_1)

{
  return;
}



/* JPH::DefaultBroadPhaseLayerFilter::~DefaultBroadPhaseLayerFilter() */

void __thiscall
JPH::DefaultBroadPhaseLayerFilter::~DefaultBroadPhaseLayerFilter(DefaultBroadPhaseLayerFilter *this)

{
  operator_delete(this,0x18);
  return;
}



/* JPH::DefaultObjectLayerFilter::~DefaultObjectLayerFilter() */

void __thiscall
JPH::DefaultObjectLayerFilter::~DefaultObjectLayerFilter(DefaultObjectLayerFilter *this)

{
  operator_delete(this,0x18);
  return;
}



/* JPH::IgnoreSingleBodyFilter::~IgnoreSingleBodyFilter() */

void __thiscall JPH::IgnoreSingleBodyFilter::~IgnoreSingleBodyFilter(IgnoreSingleBodyFilter *this)

{
  operator_delete(this,0x10);
  return;
}



/* JPH::ShapeFilter::~ShapeFilter() */

void __thiscall JPH::ShapeFilter::~ShapeFilter(ShapeFilter *this)

{
  operator_delete(this,0x10);
  return;
}



/* JPH::DefaultBroadPhaseLayerFilter::ShouldCollide(JPH::BroadPhaseLayer) const */

undefined8 __thiscall
JPH::DefaultBroadPhaseLayerFilter::ShouldCollide
          (DefaultBroadPhaseLayerFilter *this,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(this + 8) + 0x10);
  if (UNRECOVERED_JUMPTABLE == ObjectVsBroadPhaseLayerFilter::ShouldCollide) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00101ab3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(*(long **)(this + 8),*(undefined2 *)(this + 0x10),param_2);
  return uVar1;
}



/* JPH::DefaultObjectLayerFilter::ShouldCollide(unsigned short) const */

undefined8 __thiscall
JPH::DefaultObjectLayerFilter::ShouldCollide(DefaultObjectLayerFilter *this,ushort param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(this + 8) + 0x10);
  if (UNRECOVERED_JUMPTABLE == ObjectLayerPairFilter::ShouldCollide) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00101af2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(*(long **)(this + 8),*(undefined2 *)(this + 0x10),param_1);
  return uVar1;
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
  fVar10 = (float)(*(uint *)(this + 0x10) ^ __LC3);
  fVar11 = (float)(*(uint *)(this + 0x14) ^ _UNK_00102194);
  fVar12 = (float)(*(uint *)(this + 0x18) ^ _UNK_00102198);
  fVar13 = (float)(*(uint *)(this + 0x1c) ^ _UNK_0010219c);
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



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
  return;
}



/* JPH::Character::Character(JPH::CharacterSettings const*, JPH::Vec3, JPH::Quat, unsigned long,
   JPH::PhysicsSystem*) */

void JPH::Character::_GLOBAL__sub_I_Character(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC12;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::IgnoreSingleBodyFilter::~IgnoreSingleBodyFilter() */

void __thiscall JPH::IgnoreSingleBodyFilter::~IgnoreSingleBodyFilter(IgnoreSingleBodyFilter *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::DefaultObjectLayerFilter::~DefaultObjectLayerFilter() */

void __thiscall
JPH::DefaultObjectLayerFilter::~DefaultObjectLayerFilter(DefaultObjectLayerFilter *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::DefaultBroadPhaseLayerFilter::~DefaultBroadPhaseLayerFilter() */

void __thiscall
JPH::DefaultBroadPhaseLayerFilter::~DefaultBroadPhaseLayerFilter(DefaultBroadPhaseLayerFilter *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::ShapeFilter::~ShapeFilter() */

void __thiscall JPH::ShapeFilter::~ShapeFilter(ShapeFilter *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


