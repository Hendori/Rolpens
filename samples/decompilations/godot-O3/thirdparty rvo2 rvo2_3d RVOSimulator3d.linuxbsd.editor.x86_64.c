
/* RVO3D::RVOSimulator3D::RVOSimulator3D() */

void __thiscall RVO3D::RVOSimulator3D::RVOSimulator3D(RVOSimulator3D *this)

{
  KdTree3D *this_00;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  this_00 = (KdTree3D *)operator_new(0x38);
  RVO3D::KdTree3D::KdTree3D(this_00,this);
  *(KdTree3D **)(this + 8) = this_00;
  return;
}



/* RVO3D::RVOSimulator3D::RVOSimulator3D(float, float, unsigned long, float, float, float,
   RVO3D::Vector3 const&) */

void __thiscall
RVO3D::RVOSimulator3D::RVOSimulator3D
          (RVOSimulator3D *this,float param_1,float param_2,ulong param_3,float param_4,
          float param_5,float param_6,Vector3 *param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  KdTree3D *this_00;
  Agent3D *this_01;
  
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(float *)(this + 0x14) = param_1;
  this_00 = (KdTree3D *)operator_new(0x38);
  RVO3D::KdTree3D::KdTree3D(this_00,this);
  *(KdTree3D **)(this + 8) = this_00;
  this_01 = (Agent3D *)operator_new(0xa0);
  RVO3D::Agent3D::Agent3D(this_01);
  uVar2 = *(undefined8 *)param_7;
  *(Agent3D **)this = this_01;
  uVar1 = *(undefined4 *)(param_7 + 8);
  *(ulong *)(this_01 + 0x40) = param_3;
  *(undefined8 *)(this_01 + 0x24) = uVar2;
  *(ulong *)(this_01 + 0x48) = CONCAT44(param_2,param_6);
  *(ulong *)(this_01 + 0x50) = CONCAT44(param_4,param_5);
  *(undefined4 *)(this_01 + 0x2c) = uVar1;
  return;
}



/* RVO3D::RVOSimulator3D::~RVOSimulator3D() */

void __thiscall RVO3D::RVOSimulator3D::~RVOSimulator3D(RVOSimulator3D *this)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)((long)pvVar1 + 0x78);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2,*(long *)((long)pvVar1 + 0x88) - (long)pvVar2);
    }
    pvVar2 = *(void **)((long)pvVar1 + 0x60);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2,*(long *)((long)pvVar1 + 0x70) - (long)pvVar2);
    }
    operator_delete(pvVar1,0xa0);
  }
  lVar4 = *(long *)(this + 0x18);
  if (*(long *)(this + 0x20) != lVar4) {
    uVar5 = 0;
    do {
      pvVar1 = *(void **)(lVar4 + uVar5 * 8);
      if (pvVar1 != (void *)0x0) {
        pvVar2 = *(void **)((long)pvVar1 + 0x78);
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2,*(long *)((long)pvVar1 + 0x88) - (long)pvVar2);
        }
        pvVar2 = *(void **)((long)pvVar1 + 0x60);
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2,*(long *)((long)pvVar1 + 0x70) - (long)pvVar2);
        }
        operator_delete(pvVar1,0xa0);
        lVar4 = *(long *)(this + 0x18);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulong)(*(long *)(this + 0x20) - lVar4 >> 3));
  }
  puVar3 = *(undefined8 **)(this + 8);
  if (puVar3 != (undefined8 *)0x0) {
    pvVar1 = (void *)puVar3[3];
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1,puVar3[5] - (long)pvVar1);
    }
    pvVar1 = (void *)*puVar3;
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1,puVar3[2] - (long)pvVar1);
    }
    operator_delete(puVar3,0x38);
  }
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1,*(long *)(this + 0x28) - (long)pvVar1);
    return;
  }
  return;
}



/* RVO3D::RVOSimulator3D::getAgentNumAgentNeighbors(unsigned long) const */

long __thiscall RVO3D::RVOSimulator3D::getAgentNumAgentNeighbors(RVOSimulator3D *this,ulong param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(this + 0x18) + param_1 * 8);
  return *(long *)(lVar1 + 0x68) - *(long *)(lVar1 + 0x60) >> 4;
}



/* RVO3D::RVOSimulator3D::getAgentAgentNeighbor(unsigned long, unsigned long) const */

undefined8 __thiscall
RVO3D::RVOSimulator3D::getAgentAgentNeighbor(RVOSimulator3D *this,ulong param_1,ulong param_2)

{
  return *(undefined8 *)
          (*(long *)(param_2 * 0x10 +
                     *(long *)(*(long *)(*(long *)(this + 0x18) + param_1 * 8) + 0x60) + 8) + 0x38);
}



/* RVO3D::RVOSimulator3D::getAgentNumORCAPlanes(unsigned long) const */

long __thiscall RVO3D::RVOSimulator3D::getAgentNumORCAPlanes(RVOSimulator3D *this,ulong param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(this + 0x18) + param_1 * 8);
  return (*(long *)(lVar1 + 0x80) - *(long *)(lVar1 + 0x78) >> 3) * -0x5555555555555555;
}



/* RVO3D::RVOSimulator3D::getAgentORCAPlane(unsigned long, unsigned long) const */

long __thiscall
RVO3D::RVOSimulator3D::getAgentORCAPlane(RVOSimulator3D *this,ulong param_1,ulong param_2)

{
  return *(long *)(*(long *)(*(long *)(this + 0x18) + param_1 * 8) + 0x78) + param_2 * 0x18;
}



/* RVO3D::RVOSimulator3D::removeAgent(unsigned long) */

void __thiscall RVO3D::RVOSimulator3D::removeAgent(RVOSimulator3D *this,ulong param_1)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(*(long *)(this + 0x18) + param_1 * 8);
  pvVar1 = (void *)*puVar4;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)((long)pvVar1 + 0x78);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2,*(long *)((long)pvVar1 + 0x88) - (long)pvVar2);
    }
    pvVar2 = *(void **)((long)pvVar1 + 0x60);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2,*(long *)((long)pvVar1 + 0x70) - (long)pvVar2);
    }
    operator_delete(pvVar1,0xa0);
    puVar4 = (undefined8 *)(*(long *)(this + 0x18) + param_1 * 8);
  }
  lVar3 = *(long *)(this + 0x20);
  *puVar4 = *(undefined8 *)(lVar3 + -8);
  *(long *)(this + 0x20) = lVar3 + -8;
  return;
}



/* RVO3D::RVOSimulator3D::doStep() */

void RVO3D::RVOSimulator3D::doStep(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *in_RCX;
  int iVar6;
  long lVar7;
  undefined8 *in_RSI;
  long in_RDI;
  size_t unaff_R13;
  long in_FS_OFFSET;
  undefined1 uVar8;
  undefined1 local_48 [16];
  long local_38;
  long local_30;
  
  uVar2 = *(undefined8 *)(in_RDI + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (undefined1  [16])0x0;
  local_48._0_8_ = (undefined8 *)0x0;
  local_38 = 0;
  uVar4 = *(long *)(in_RDI + 0x20) - *(long *)(in_RDI + 0x18);
  if (uVar4 == 0) {
    local_38 = 0;
    unaff_R13 = 0;
    in_RCX = (undefined8 *)0x0;
  }
  else {
    uVar8 = uVar4 == 0x7ffffffffffffff8;
    if (uVar4 < 0x7ffffffffffffff9) {
      in_RCX = (undefined8 *)operator_new(uVar4);
      in_RSI = *(undefined8 **)(in_RDI + 0x18);
      local_38 = (long)in_RCX + uVar4;
      unaff_R13 = *(long *)(in_RDI + 0x20) - (long)in_RSI;
      local_48._8_8_ = in_RCX;
      local_48._0_8_ = in_RCX;
      uVar8 = unaff_R13 == 8;
      puVar3 = in_RCX;
      if (8 < (long)unaff_R13) {
        in_RCX = (undefined8 *)memmove(in_RCX,in_RSI,unaff_R13);
        goto LAB_001003de;
      }
    }
    else {
      std::__throw_bad_array_new_length();
      puVar3 = (undefined8 *)local_48._0_8_;
    }
    local_48._0_8_ = puVar3;
    if ((bool)uVar8) {
      *in_RCX = *in_RSI;
    }
  }
LAB_001003de:
  local_48._8_8_ = (long)in_RCX + unaff_R13;
  RVO3D::KdTree3D::buildAgentTree(uVar2,local_48);
  if ((void *)local_48._0_8_ != (void *)0x0) {
    operator_delete((void *)local_48._0_8_,local_38 - local_48._0_8_);
  }
  lVar5 = *(long *)(in_RDI + 0x18);
  lVar7 = 0;
  if (0 < (int)(*(long *)(in_RDI + 0x20) - lVar5 >> 3)) {
    do {
      RVO3D::Agent3D::computeNeighbors(*(RVOSimulator3D **)(lVar5 + lVar7 * 8));
      lVar5 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      RVO3D::Agent3D::computeNewVelocity(*(RVOSimulator3D **)(*(long *)(in_RDI + 0x18) + lVar5));
      lVar5 = *(long *)(in_RDI + 0x18);
      iVar6 = (int)(*(long *)(in_RDI + 0x20) - lVar5 >> 3);
    } while ((int)lVar7 < iVar6);
    if (0 < iVar6) {
      lVar7 = 0;
      do {
        lVar1 = lVar7 * 8;
        lVar7 = lVar7 + 1;
        RVO3D::Agent3D::update(*(RVOSimulator3D **)(lVar5 + lVar1));
        lVar5 = *(long *)(in_RDI + 0x18);
      } while ((int)lVar7 < (int)(*(long *)(in_RDI + 0x20) - lVar5 >> 3));
    }
  }
  *(float *)(in_RDI + 0x10) = *(float *)(in_RDI + 0x10) + *(float *)(in_RDI + 0x14);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RVO3D::RVOSimulator3D::getAgentMaxNeighbors(unsigned long) const */

undefined8 __thiscall
RVO3D::RVOSimulator3D::getAgentMaxNeighbors(RVOSimulator3D *this,ulong param_1)

{
  return *(undefined8 *)(*(long *)(*(long *)(this + 0x18) + param_1 * 8) + 0x40);
}



/* RVO3D::RVOSimulator3D::getAgentMaxSpeed(unsigned long) const */

undefined4 __thiscall RVO3D::RVOSimulator3D::getAgentMaxSpeed(RVOSimulator3D *this,ulong param_1)

{
  return *(undefined4 *)(*(long *)(*(long *)(this + 0x18) + param_1 * 8) + 0x48);
}



/* RVO3D::RVOSimulator3D::getAgentNeighborDist(unsigned long) const */

undefined4 __thiscall
RVO3D::RVOSimulator3D::getAgentNeighborDist(RVOSimulator3D *this,ulong param_1)

{
  return *(undefined4 *)(*(long *)(*(long *)(this + 0x18) + param_1 * 8) + 0x4c);
}



/* RVO3D::RVOSimulator3D::getAgentPosition(unsigned long) const */

long __thiscall RVO3D::RVOSimulator3D::getAgentPosition(RVOSimulator3D *this,ulong param_1)

{
  return *(long *)(*(long *)(this + 0x18) + param_1 * 8) + 0xc;
}



/* RVO3D::RVOSimulator3D::getAgentPrefVelocity(unsigned long) const */

long __thiscall RVO3D::RVOSimulator3D::getAgentPrefVelocity(RVOSimulator3D *this,ulong param_1)

{
  return *(long *)(*(long *)(this + 0x18) + param_1 * 8) + 0x18;
}



/* RVO3D::RVOSimulator3D::getAgentRadius(unsigned long) const */

undefined4 __thiscall RVO3D::RVOSimulator3D::getAgentRadius(RVOSimulator3D *this,ulong param_1)

{
  return *(undefined4 *)(*(long *)(*(long *)(this + 0x18) + param_1 * 8) + 0x50);
}



/* RVO3D::RVOSimulator3D::getAgentTimeHorizon(unsigned long) const */

undefined4 __thiscall RVO3D::RVOSimulator3D::getAgentTimeHorizon(RVOSimulator3D *this,ulong param_1)

{
  return *(undefined4 *)(*(long *)(*(long *)(this + 0x18) + param_1 * 8) + 0x54);
}



/* RVO3D::RVOSimulator3D::getAgentVelocity(unsigned long) const */

long __thiscall RVO3D::RVOSimulator3D::getAgentVelocity(RVOSimulator3D *this,ulong param_1)

{
  return *(long *)(*(long *)(this + 0x18) + param_1 * 8) + 0x24;
}



/* RVO3D::RVOSimulator3D::getGlobalTime() const */

undefined4 __thiscall RVO3D::RVOSimulator3D::getGlobalTime(RVOSimulator3D *this)

{
  return *(undefined4 *)(this + 0x10);
}



/* RVO3D::RVOSimulator3D::getNumAgents() const */

long __thiscall RVO3D::RVOSimulator3D::getNumAgents(RVOSimulator3D *this)

{
  return *(long *)(this + 0x20) - *(long *)(this + 0x18) >> 3;
}



/* RVO3D::RVOSimulator3D::getTimeStep() const */

undefined4 __thiscall RVO3D::RVOSimulator3D::getTimeStep(RVOSimulator3D *this)

{
  return *(undefined4 *)(this + 0x14);
}



/* RVO3D::RVOSimulator3D::setAgentDefaults(float, unsigned long, float, float, float, RVO3D::Vector3
   const&) */

void __thiscall
RVO3D::RVOSimulator3D::setAgentDefaults
          (RVOSimulator3D *this,float param_1,ulong param_2,float param_3,float param_4,
          float param_5,Vector3 *param_6)

{
  undefined8 uVar1;
  Agent3D *this_00;
  
  this_00 = *(Agent3D **)this;
  if (this_00 == (Agent3D *)0x0) {
    this_00 = (Agent3D *)operator_new(0xa0);
    RVO3D::Agent3D::Agent3D(this_00);
    *(Agent3D **)this = this_00;
  }
  *(float *)(this_00 + 0x48) = param_5;
  *(float *)(this_00 + 0x4c) = param_1;
  *(float *)(this_00 + 0x50) = param_4;
  *(float *)(this_00 + 0x54) = param_3;
  uVar1 = *(undefined8 *)param_6;
  *(ulong *)(this_00 + 0x40) = param_2;
  *(undefined8 *)(this_00 + 0x24) = uVar1;
  *(undefined4 *)(this_00 + 0x2c) = *(undefined4 *)(param_6 + 8);
  return;
}



/* RVO3D::RVOSimulator3D::setAgentMaxNeighbors(unsigned long, unsigned long) */

void __thiscall
RVO3D::RVOSimulator3D::setAgentMaxNeighbors(RVOSimulator3D *this,ulong param_1,ulong param_2)

{
  *(ulong *)(*(long *)(*(long *)(this + 0x18) + param_1 * 8) + 0x40) = param_2;
  return;
}



/* RVO3D::RVOSimulator3D::setAgentMaxSpeed(unsigned long, float) */

void __thiscall
RVO3D::RVOSimulator3D::setAgentMaxSpeed(RVOSimulator3D *this,ulong param_1,float param_2)

{
  *(float *)(*(long *)(*(long *)(this + 0x18) + param_1 * 8) + 0x48) = param_2;
  return;
}



/* RVO3D::RVOSimulator3D::setAgentNeighborDist(unsigned long, float) */

void __thiscall
RVO3D::RVOSimulator3D::setAgentNeighborDist(RVOSimulator3D *this,ulong param_1,float param_2)

{
  *(float *)(*(long *)(*(long *)(this + 0x18) + param_1 * 8) + 0x4c) = param_2;
  return;
}



/* RVO3D::RVOSimulator3D::setAgentPosition(unsigned long, RVO3D::Vector3 const&) */

void __thiscall
RVO3D::RVOSimulator3D::setAgentPosition(RVOSimulator3D *this,ulong param_1,Vector3 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(this + 0x18) + param_1 * 8);
  *(undefined8 *)(lVar1 + 0xc) = *(undefined8 *)param_2;
  *(undefined4 *)(lVar1 + 0x14) = *(undefined4 *)(param_2 + 8);
  return;
}



/* RVO3D::RVOSimulator3D::setAgentPrefVelocity(unsigned long, RVO3D::Vector3 const&) */

void __thiscall
RVO3D::RVOSimulator3D::setAgentPrefVelocity(RVOSimulator3D *this,ulong param_1,Vector3 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(this + 0x18) + param_1 * 8);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)param_2;
  *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(param_2 + 8);
  return;
}



/* RVO3D::RVOSimulator3D::setAgentRadius(unsigned long, float) */

void __thiscall
RVO3D::RVOSimulator3D::setAgentRadius(RVOSimulator3D *this,ulong param_1,float param_2)

{
  *(float *)(*(long *)(*(long *)(this + 0x18) + param_1 * 8) + 0x50) = param_2;
  return;
}



/* RVO3D::RVOSimulator3D::setAgentTimeHorizon(unsigned long, float) */

void __thiscall
RVO3D::RVOSimulator3D::setAgentTimeHorizon(RVOSimulator3D *this,ulong param_1,float param_2)

{
  *(float *)(*(long *)(*(long *)(this + 0x18) + param_1 * 8) + 0x54) = param_2;
  return;
}



/* RVO3D::RVOSimulator3D::setAgentVelocity(unsigned long, RVO3D::Vector3 const&) */

void __thiscall
RVO3D::RVOSimulator3D::setAgentVelocity(RVOSimulator3D *this,ulong param_1,Vector3 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(this + 0x18) + param_1 * 8);
  *(undefined8 *)(lVar1 + 0x24) = *(undefined8 *)param_2;
  *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(param_2 + 8);
  return;
}



/* RVO3D::RVOSimulator3D::setTimeStep(float) */

void __thiscall RVO3D::RVOSimulator3D::setTimeStep(RVOSimulator3D *this,float param_1)

{
  *(float *)(this + 0x14) = param_1;
  return;
}



/* RVO3D::RVOSimulator3D::addAgent(RVO3D::Vector3 const&) */

long __thiscall RVO3D::RVOSimulator3D::addAgent(RVOSimulator3D *this,Vector3 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Agent3D *this_00;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  Agent3D *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)this == 0) {
    lVar5 = -1;
  }
  else {
    this_00 = (Agent3D *)operator_new(0xa0);
    RVO3D::Agent3D::Agent3D(this_00);
    uVar1 = *(undefined4 *)(param_1 + 8);
    puVar7 = *(undefined8 **)(this + 0x20);
    *(undefined8 *)(this_00 + 0xc) = *(undefined8 *)param_1;
    lVar5 = *(long *)this;
    *(undefined4 *)(this_00 + 0x14) = uVar1;
    uVar1 = *(undefined4 *)(lVar5 + 0x4c);
    uVar3 = *(undefined4 *)(lVar5 + 0x50);
    uVar4 = *(undefined4 *)(lVar5 + 0x54);
    uVar2 = *(undefined8 *)(lVar5 + 0x40);
    *(undefined4 *)(this_00 + 0x48) = *(undefined4 *)(lVar5 + 0x48);
    *(undefined4 *)(this_00 + 0x4c) = uVar1;
    *(undefined4 *)(this_00 + 0x50) = uVar3;
    *(undefined4 *)(this_00 + 0x54) = uVar4;
    *(undefined8 *)(this_00 + 0x24) = *(undefined8 *)(lVar5 + 0x24);
    lVar6 = *(long *)(this + 0x18);
    *(undefined4 *)(this_00 + 0x2c) = *(undefined4 *)(lVar5 + 0x2c);
    *(long *)(this_00 + 0x38) = (long)puVar7 - lVar6 >> 3;
    *(undefined8 *)(this_00 + 0x40) = uVar2;
    local_28 = this_00;
    if (puVar7 == *(undefined8 **)(this + 0x28)) {
      std::vector<RVO3D::Agent3D*,std::allocator<RVO3D::Agent3D*>>::
      _M_realloc_insert<RVO3D::Agent3D*const&>
                ((vector<RVO3D::Agent3D*,std::allocator<RVO3D::Agent3D*>> *)(this + 0x18),puVar7,
                 &local_28);
      lVar6 = *(long *)(this + 0x18);
      puVar7 = *(undefined8 **)(this + 0x20);
    }
    else {
      *puVar7 = this_00;
      puVar7 = puVar7 + 1;
      *(undefined8 **)(this + 0x20) = puVar7;
    }
    lVar5 = ((long)puVar7 - lVar6 >> 3) + -1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RVO3D::RVOSimulator3D::addAgent(RVO3D::Vector3 const&, float, unsigned long, float, float, float,
   RVO3D::Vector3 const&) */

long __thiscall
RVO3D::RVOSimulator3D::addAgent
          (RVOSimulator3D *this,Vector3 *param_1,float param_2,ulong param_3,float param_4,
          float param_5,float param_6,Vector3 *param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Agent3D *this_00;
  long lVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  Agent3D *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (Agent3D *)operator_new(0xa0);
  RVO3D::Agent3D::Agent3D(this_00);
  uVar2 = *(undefined8 *)param_1;
  puVar4 = *(undefined8 **)(this + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 8);
  lVar3 = *(long *)(this + 0x18);
  *(ulong *)(this_00 + 0x40) = param_3;
  *(undefined8 *)(this_00 + 0xc) = uVar2;
  uVar2 = *(undefined8 *)param_7;
  *(undefined4 *)(this_00 + 0x14) = uVar1;
  uVar1 = *(undefined4 *)(param_7 + 8);
  *(undefined8 *)(this_00 + 0x24) = uVar2;
  *(float *)(this_00 + 0x48) = param_6;
  *(float *)(this_00 + 0x4c) = param_2;
  *(float *)(this_00 + 0x50) = param_5;
  *(float *)(this_00 + 0x54) = param_4;
  *(undefined4 *)(this_00 + 0x2c) = uVar1;
  *(long *)(this_00 + 0x38) = (long)puVar4 - lVar3 >> 3;
  local_38 = this_00;
  if (puVar4 == *(undefined8 **)(this + 0x28)) {
    std::vector<RVO3D::Agent3D*,std::allocator<RVO3D::Agent3D*>>::
    _M_realloc_insert<RVO3D::Agent3D*const&>
              ((vector<RVO3D::Agent3D*,std::allocator<RVO3D::Agent3D*>> *)(this + 0x18),puVar4,
               &local_38);
    lVar3 = *(long *)(this + 0x18);
    puVar4 = *(undefined8 **)(this + 0x20);
  }
  else {
    *puVar4 = this_00;
    puVar4 = puVar4 + 1;
    *(undefined8 **)(this + 0x20) = puVar4;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ((long)puVar4 - lVar3 >> 3) + -1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* void std::vector<RVO3D::Agent3D*, std::allocator<RVO3D::Agent3D*>
   >::_M_realloc_insert<RVO3D::Agent3D* const&>(__gnu_cxx::__normal_iterator<RVO3D::Agent3D**,
   std::vector<RVO3D::Agent3D*, std::allocator<RVO3D::Agent3D*> > >, RVO3D::Agent3D* const&) */

void __thiscall
std::vector<RVO3D::Agent3D*,std::allocator<RVO3D::Agent3D*>>::
_M_realloc_insert<RVO3D::Agent3D*const&>
          (vector<RVO3D::Agent3D*,std::allocator<RVO3D::Agent3D*>> *this,void *param_2,
          undefined8 *param_3)

{
  void *__dest;
  void *pvVar1;
  void *__src;
  ulong uVar2;
  void *__dest_00;
  ulong uVar3;
  size_t __n;
  long lVar4;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar2 = (long)pvVar1 - (long)__src >> 3;
  if (uVar2 == 0xfffffffffffffff) {
    std::__throw_length_error("vector::_M_realloc_insert");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_00100a80;
    uVar3 = 0xfffffffffffffff;
    if (uVar2 + 1 < 0x1000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 3;
LAB_00100a8a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_00100a80:
      uVar3 = 0x7ffffffffffffff8;
      goto LAB_00100a8a;
    }
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_00100a8a;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 8);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined8 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_00100a5c;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_00100a5c:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}


