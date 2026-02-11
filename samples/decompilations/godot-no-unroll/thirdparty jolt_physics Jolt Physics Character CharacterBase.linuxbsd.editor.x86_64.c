
/* JPH::CharacterBase::SaveState(JPH::StateRecorder&) const */

void __thiscall JPH::CharacterBase::SaveState(CharacterBase *this,StateRecorder *param_1)

{
  StateRecorder *pSVar1;
  
  pSVar1 = param_1 + 8;
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x44,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x48,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x4c,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x50,0xc);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x60,0xc);
                    /* WARNING: Could not recover jumptable at 0x00100089. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x70,0xc);
  return;
}



/* JPH::CharacterBase::RestoreState(JPH::StateRecorder&) */

void __thiscall JPH::CharacterBase::RestoreState(CharacterBase *this,StateRecorder *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x44,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x48,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x4c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x60,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x70,0xc);
  plVar3 = PhysicsMaterial::sDefault;
  plVar2 = *(long **)(this + 0x80);
  *(undefined8 *)(this + 0x88) = 0;
  if (plVar2 != plVar3) {
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plVar3 = PhysicsMaterial::sDefault;
      if ((int)*plVar1 == 0) {
        if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
          (*Free)();
          plVar3 = PhysicsMaterial::sDefault;
        }
        else {
          (**(code **)(*plVar2 + 0x18))();
          plVar3 = PhysicsMaterial::sDefault;
        }
      }
    }
    *(long **)(this + 0x80) = plVar3;
    if (plVar3 != (long *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CharacterBase::CharacterBase(JPH::CharacterBaseSettings const*, JPH::PhysicsSystem*) */

void __thiscall
JPH::CharacterBase::CharacterBase
          (CharacterBase *this,CharacterBaseSettings *param_1,PhysicsSystem *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__CharacterBase_001005f0;
  lVar2 = *(long *)(param_1 + 0x38);
  *(PhysicsSystem **)(this + 0x10) = param_2;
  *(long *)(this + 0x18) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  lVar2 = PhysicsMaterial::sDefault;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x44) = 3;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x20) = uVar3;
  *(undefined8 *)(this + 0x28) = uVar4;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x48) = 0xffffffffffffffff;
  *(long *)(this + 0x80) = lVar2;
  *(undefined8 *)(this + 0x30) = uVar3;
  *(undefined8 *)(this + 0x38) = uVar4;
  *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  uVar5 = _LC2;
  uVar1 = *(uint *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x88) = 0;
  iVar7 = (int)(_LC4 * (float)(~uVar5 & uVar1) + _LC6);
  fVar6 = (float)iVar7;
  uVar8 = (iVar7 << 0x1f) >> 0x1f;
  fVar6 = (((float)(~uVar5 & uVar1) - _LC8 * fVar6) - _LC10 * fVar6) - fVar6 * _LC12;
  fVar9 = fVar6 * fVar6;
  *(uint *)(this + 0x40) =
       ((uint)(((_LC22 * fVar9 + _LC24) * fVar9 + _LC26) * fVar9 * fVar6 + fVar6) & uVar8 |
       ~uVar8 & (uint)((((_LC14 * fVar9 + _LC16) * fVar9 + _LC18) * fVar9 * fVar9 - _LC6 * fVar9) +
                      _LC20)) ^ iVar7 << 0x1e & _LC2 ^ iVar7 << 0x1f;
  return;
}



/* JPH::CharacterBase::sToString(JPH::CharacterBase::EGroundState) */

char * JPH::CharacterBase::sToString(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "NotSupported";
  if (param_1 != 2) {
    if (param_1 < 3) {
      pcVar1 = "OnGround";
      if (param_1 != 0) {
        pcVar1 = "Unknown";
        if (param_1 == 1) {
          pcVar1 = "OnSteepGround";
        }
        return pcVar1;
      }
    }
    else {
      pcVar1 = "Unknown";
      if (param_1 == 3) {
        pcVar1 = "InAir";
      }
    }
  }
  return pcVar1;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x001003a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::CharacterBase::~CharacterBase() */

void __thiscall JPH::CharacterBase::~CharacterBase(CharacterBase *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__CharacterBase_001005f0;
  plVar2 = *(long **)(this + 0x80);
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
                    /* WARNING: Could not recover jumptable at 0x001003f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  return;
}



/* JPH::CharacterBase::~CharacterBase() */

void __thiscall JPH::CharacterBase::~CharacterBase(CharacterBase *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__CharacterBase_001005f0;
  plVar2 = *(long **)(this + 0x80);
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
                    /* WARNING: Could not recover jumptable at 0x0010047a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)(this);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00100469. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
  return;
}



/* JPH::CharacterBase::CharacterBase(JPH::CharacterBaseSettings const*, JPH::PhysicsSystem*) */

void JPH::CharacterBase::_GLOBAL__sub_I_CharacterBase(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC34;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::CharacterBase::~CharacterBase() */

void __thiscall JPH::CharacterBase::~CharacterBase(CharacterBase *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


