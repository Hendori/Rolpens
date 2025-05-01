
/* RVO2D::RVOSimulator2D::RVOSimulator2D() */

void __thiscall RVO2D::RVOSimulator2D::RVOSimulator2D(RVOSimulator2D *this)

{
  KdTree2D *this_00;
  
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  this_00 = (KdTree2D *)operator_new(0x40);
  RVO2D::KdTree2D::KdTree2D(this_00,this);
  *(KdTree2D **)(this + 0x28) = this_00;
  return;
}



/* RVO2D::RVOSimulator2D::RVOSimulator2D(float, float, unsigned long, float, float, float, float,
   RVO2D::Vector2 const&) */

void __thiscall
RVO2D::RVOSimulator2D::RVOSimulator2D
          (RVOSimulator2D *this,float param_1,float param_2,ulong param_3,float param_4,
          float param_5,float param_6,float param_7,Vector2 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  KdTree2D *this_00;
  Agent2D *this_01;
  
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(float *)(this + 0x48) = param_1;
  this_00 = (KdTree2D *)operator_new(0x40);
  RVO2D::KdTree2D::KdTree2D(this_00,this);
  *(KdTree2D **)(this + 0x28) = this_00;
  this_01 = (Agent2D *)operator_new(0xa0);
  RVO2D::Agent2D::Agent2D(this_01);
  uVar1 = *(undefined4 *)param_8;
  *(Agent2D **)(this + 0x18) = this_01;
  *(ulong *)(this_01 + 0x18) = param_3;
  uVar2 = *(undefined4 *)(param_8 + 4);
  *(ulong *)(this_01 + 0x20) = CONCAT44(param_2,param_7);
  *(undefined4 *)(this_01 + 0x80) = uVar2;
  *(float *)(this_01 + 0x70) = param_6;
  *(float *)(this_01 + 0x74) = param_4;
  *(float *)(this_01 + 0x78) = param_5;
  *(undefined4 *)(this_01 + 0x7c) = uVar1;
  return;
}



/* RVO2D::RVOSimulator2D::~RVOSimulator2D() */

void __thiscall RVO2D::RVOSimulator2D::~RVOSimulator2D(RVOSimulator2D *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  KdTree2D *this_00;
  long lVar3;
  ulong uVar4;
  
  puVar1 = *(undefined8 **)(this + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)puVar1[9];
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2,puVar1[0xb] - (long)pvVar2);
    }
    pvVar2 = (void *)puVar1[6];
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2,puVar1[8] - (long)pvVar2);
    }
    pvVar2 = (void *)*puVar1;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2,puVar1[2] - (long)pvVar2);
    }
    operator_delete(puVar1,0xa0);
  }
  lVar3 = *(long *)this;
  if (*(long *)(this + 8) != lVar3) {
    uVar4 = 0;
    do {
      puVar1 = *(undefined8 **)(lVar3 + uVar4 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        pvVar2 = (void *)puVar1[9];
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2,puVar1[0xb] - (long)pvVar2);
        }
        pvVar2 = (void *)puVar1[6];
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2,puVar1[8] - (long)pvVar2);
        }
        pvVar2 = (void *)*puVar1;
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2,puVar1[2] - (long)pvVar2);
        }
        operator_delete(puVar1,0xa0);
        lVar3 = *(long *)this;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)(*(long *)(this + 8) - lVar3 >> 3));
  }
  lVar3 = *(long *)(this + 0x30);
  if (*(long *)(this + 0x38) != lVar3) {
    uVar4 = 0;
    do {
      pvVar2 = *(void **)(lVar3 + uVar4 * 8);
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2,0x40);
        lVar3 = *(long *)(this + 0x30);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)(*(long *)(this + 0x38) - lVar3 >> 3));
  }
  this_00 = *(KdTree2D **)(this + 0x28);
  if (this_00 != (KdTree2D *)0x0) {
    RVO2D::KdTree2D::~KdTree2D(this_00);
    operator_delete(this_00,0x40);
  }
  pvVar2 = *(void **)(this + 0x30);
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2,*(long *)(this + 0x40) - (long)pvVar2);
  }
  pvVar2 = *(void **)this;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2,*(long *)(this + 0x10) - (long)pvVar2);
    return;
  }
  return;
}



/* RVO2D::RVOSimulator2D::doStep() */

void RVO2D::RVOSimulator2D::doStep(void)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *in_RCX;
  int iVar5;
  long lVar6;
  undefined8 *in_RSI;
  long *in_RDI;
  size_t unaff_R13;
  long in_FS_OFFSET;
  undefined1 uVar7;
  undefined1 local_48 [16];
  long local_38;
  long local_30;
  
  lVar4 = in_RDI[5];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (undefined1  [16])0x0;
  local_48._0_8_ = (undefined8 *)0x0;
  local_38 = 0;
  uVar3 = in_RDI[1] - *in_RDI;
  if (uVar3 == 0) {
    local_38 = 0;
    unaff_R13 = 0;
    in_RCX = (undefined8 *)0x0;
  }
  else {
    uVar7 = uVar3 == 0x7ffffffffffffff8;
    if (uVar3 < 0x7ffffffffffffff9) {
      in_RCX = (undefined8 *)operator_new(uVar3);
      in_RSI = (undefined8 *)*in_RDI;
      local_38 = (long)in_RCX + uVar3;
      unaff_R13 = in_RDI[1] - (long)in_RSI;
      local_48._8_8_ = in_RCX;
      local_48._0_8_ = in_RCX;
      uVar7 = unaff_R13 == 8;
      puVar2 = in_RCX;
      if (8 < (long)unaff_R13) {
        in_RCX = (undefined8 *)memmove(in_RCX,in_RSI,unaff_R13);
        goto LAB_0010035c;
      }
    }
    else {
      std::__throw_bad_array_new_length();
      puVar2 = (undefined8 *)local_48._0_8_;
    }
    local_48._0_8_ = puVar2;
    if ((bool)uVar7) {
      *in_RCX = *in_RSI;
    }
  }
LAB_0010035c:
  local_48._8_8_ = (long)in_RCX + unaff_R13;
  RVO2D::KdTree2D::buildAgentTree(lVar4,local_48);
  if ((void *)local_48._0_8_ != (void *)0x0) {
    operator_delete((void *)local_48._0_8_,local_38 - local_48._0_8_);
  }
  lVar4 = *in_RDI;
  lVar6 = 0;
  if (0 < (int)(in_RDI[1] - lVar4 >> 3)) {
    do {
      RVO2D::Agent2D::computeNeighbors(*(RVOSimulator2D **)(lVar4 + lVar6 * 8));
      lVar4 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      RVO2D::Agent2D::computeNewVelocity(*(RVOSimulator2D **)(*in_RDI + lVar4));
      lVar4 = *in_RDI;
      iVar5 = (int)(in_RDI[1] - lVar4 >> 3);
    } while ((int)lVar6 < iVar5);
    if (0 < iVar5) {
      lVar6 = 0;
      do {
        lVar1 = lVar6 * 8;
        lVar6 = lVar6 + 1;
        RVO2D::Agent2D::update(*(RVOSimulator2D **)(lVar4 + lVar1));
        lVar4 = *in_RDI;
      } while ((int)lVar6 < (int)(in_RDI[1] - lVar4 >> 3));
    }
  }
  *(float *)(in_RDI + 4) = *(float *)(in_RDI + 4) + *(float *)(in_RDI + 9);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RVO2D::RVOSimulator2D::getAgentAgentNeighbor(unsigned long, unsigned long) const */

undefined8 __thiscall
RVO2D::RVOSimulator2D::getAgentAgentNeighbor(RVOSimulator2D *this,ulong param_1,ulong param_2)

{
  return *(undefined8 *)
          (*(long *)(param_2 * 0x10 + **(long **)(*(long *)this + param_1 * 8) + 8) + 0x98);
}



/* RVO2D::RVOSimulator2D::getAgentMaxNeighbors(unsigned long) const */

undefined8 __thiscall
RVO2D::RVOSimulator2D::getAgentMaxNeighbors(RVOSimulator2D *this,ulong param_1)

{
  return *(undefined8 *)(*(long *)(*(long *)this + param_1 * 8) + 0x18);
}



/* RVO2D::RVOSimulator2D::getAgentMaxSpeed(unsigned long) const */

undefined4 __thiscall RVO2D::RVOSimulator2D::getAgentMaxSpeed(RVOSimulator2D *this,ulong param_1)

{
  return *(undefined4 *)(*(long *)(*(long *)this + param_1 * 8) + 0x20);
}



/* RVO2D::RVOSimulator2D::getAgentNeighborDist(unsigned long) const */

undefined4 __thiscall
RVO2D::RVOSimulator2D::getAgentNeighborDist(RVOSimulator2D *this,ulong param_1)

{
  return *(undefined4 *)(*(long *)(*(long *)this + param_1 * 8) + 0x24);
}



/* RVO2D::RVOSimulator2D::getAgentNumAgentNeighbors(unsigned long) const */

long __thiscall RVO2D::RVOSimulator2D::getAgentNumAgentNeighbors(RVOSimulator2D *this,ulong param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)this + param_1 * 8);
  return plVar1[1] - *plVar1 >> 4;
}



/* RVO2D::RVOSimulator2D::getAgentNumObstacleNeighbors(unsigned long) const */

long __thiscall
RVO2D::RVOSimulator2D::getAgentNumObstacleNeighbors(RVOSimulator2D *this,ulong param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)this + param_1 * 8);
  return *(long *)(lVar1 + 0x38) - *(long *)(lVar1 + 0x30) >> 4;
}



/* RVO2D::RVOSimulator2D::getAgentNumORCALines(unsigned long) const */

long __thiscall RVO2D::RVOSimulator2D::getAgentNumORCALines(RVOSimulator2D *this,ulong param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)this + param_1 * 8);
  return *(long *)(lVar1 + 0x50) - *(long *)(lVar1 + 0x48) >> 4;
}



/* RVO2D::RVOSimulator2D::getAgentObstacleNeighbor(unsigned long, unsigned long) const */

undefined8 __thiscall
RVO2D::RVOSimulator2D::getAgentObstacleNeighbor(RVOSimulator2D *this,ulong param_1,ulong param_2)

{
  return *(undefined8 *)
          (*(long *)(param_2 * 0x10 + *(long *)(*(long *)(*(long *)this + param_1 * 8) + 0x30) + 8)
          + 0x38);
}



/* RVO2D::RVOSimulator2D::getAgentORCALine(unsigned long, unsigned long) const */

long __thiscall
RVO2D::RVOSimulator2D::getAgentORCALine(RVOSimulator2D *this,ulong param_1,ulong param_2)

{
  return param_2 * 0x10 + *(long *)(*(long *)(*(long *)this + param_1 * 8) + 0x48);
}



/* RVO2D::RVOSimulator2D::getAgentPosition(unsigned long) const */

long __thiscall RVO2D::RVOSimulator2D::getAgentPosition(RVOSimulator2D *this,ulong param_1)

{
  return *(long *)(*(long *)this + param_1 * 8) + 0x60;
}



/* RVO2D::RVOSimulator2D::getAgentPrefVelocity(unsigned long) const */

long __thiscall RVO2D::RVOSimulator2D::getAgentPrefVelocity(RVOSimulator2D *this,ulong param_1)

{
  return *(long *)(*(long *)this + param_1 * 8) + 0x68;
}



/* RVO2D::RVOSimulator2D::getAgentRadius(unsigned long) const */

undefined4 __thiscall RVO2D::RVOSimulator2D::getAgentRadius(RVOSimulator2D *this,ulong param_1)

{
  return *(undefined4 *)(*(long *)(*(long *)this + param_1 * 8) + 0x70);
}



/* RVO2D::RVOSimulator2D::getAgentTimeHorizon(unsigned long) const */

undefined4 __thiscall RVO2D::RVOSimulator2D::getAgentTimeHorizon(RVOSimulator2D *this,ulong param_1)

{
  return *(undefined4 *)(*(long *)(*(long *)this + param_1 * 8) + 0x74);
}



/* RVO2D::RVOSimulator2D::getAgentTimeHorizonObst(unsigned long) const */

undefined4 __thiscall
RVO2D::RVOSimulator2D::getAgentTimeHorizonObst(RVOSimulator2D *this,ulong param_1)

{
  return *(undefined4 *)(*(long *)(*(long *)this + param_1 * 8) + 0x78);
}



/* RVO2D::RVOSimulator2D::getAgentVelocity(unsigned long) const */

long __thiscall RVO2D::RVOSimulator2D::getAgentVelocity(RVOSimulator2D *this,ulong param_1)

{
  return *(long *)(*(long *)this + param_1 * 8) + 0x7c;
}



/* RVO2D::RVOSimulator2D::getGlobalTime() const */

undefined4 __thiscall RVO2D::RVOSimulator2D::getGlobalTime(RVOSimulator2D *this)

{
  return *(undefined4 *)(this + 0x20);
}



/* RVO2D::RVOSimulator2D::getNumAgents() const */

long __thiscall RVO2D::RVOSimulator2D::getNumAgents(RVOSimulator2D *this)

{
  return *(long *)(this + 8) - *(long *)this >> 3;
}



/* RVO2D::RVOSimulator2D::getNumObstacleVertices() const */

long __thiscall RVO2D::RVOSimulator2D::getNumObstacleVertices(RVOSimulator2D *this)

{
  return *(long *)(this + 0x38) - *(long *)(this + 0x30) >> 3;
}



/* RVO2D::RVOSimulator2D::getObstacleVertex(unsigned long) const */

long __thiscall RVO2D::RVOSimulator2D::getObstacleVertex(RVOSimulator2D *this,ulong param_1)

{
  return *(long *)(*(long *)(this + 0x30) + param_1 * 8) + 0x10;
}



/* RVO2D::RVOSimulator2D::getNextObstacleVertexNo(unsigned long) const */

undefined8 __thiscall
RVO2D::RVOSimulator2D::getNextObstacleVertexNo(RVOSimulator2D *this,ulong param_1)

{
  return *(undefined8 *)(*(long *)(*(long *)(*(long *)(this + 0x30) + param_1 * 8) + 8) + 0x38);
}



/* RVO2D::RVOSimulator2D::getPrevObstacleVertexNo(unsigned long) const */

undefined8 __thiscall
RVO2D::RVOSimulator2D::getPrevObstacleVertexNo(RVOSimulator2D *this,ulong param_1)

{
  return *(undefined8 *)(*(long *)(*(long *)(*(long *)(this + 0x30) + param_1 * 8) + 0x18) + 0x38);
}



/* RVO2D::RVOSimulator2D::getTimeStep() const */

undefined4 __thiscall RVO2D::RVOSimulator2D::getTimeStep(RVOSimulator2D *this)

{
  return *(undefined4 *)(this + 0x48);
}



/* RVO2D::RVOSimulator2D::processObstacles() */

void RVO2D::RVOSimulator2D::processObstacles(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *in_RCX;
  size_t unaff_RBX;
  undefined8 *in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  undefined1 uVar4;
  undefined1 local_38 [16];
  long local_28;
  long local_20;
  
  uVar1 = *(undefined8 *)(in_RDI + 0x28);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (undefined1  [16])0x0;
  local_38._0_8_ = (undefined8 *)0x0;
  local_28 = 0;
  uVar3 = *(long *)(in_RDI + 0x38) - *(long *)(in_RDI + 0x30);
  if (uVar3 == 0) {
    local_28 = 0;
    unaff_RBX = 0;
    in_RCX = (undefined8 *)0x0;
  }
  else {
    uVar4 = uVar3 == 0x7ffffffffffffff8;
    if (uVar3 < 0x7ffffffffffffff9) {
      in_RCX = (undefined8 *)operator_new(uVar3);
      in_RSI = *(undefined8 **)(in_RDI + 0x30);
      local_28 = (long)in_RCX + uVar3;
      unaff_RBX = *(long *)(in_RDI + 0x38) - (long)in_RSI;
      local_38._8_8_ = in_RCX;
      local_38._0_8_ = in_RCX;
      uVar4 = unaff_RBX == 8;
      puVar2 = in_RCX;
      if (8 < (long)unaff_RBX) {
        in_RCX = (undefined8 *)memmove(in_RCX,in_RSI,unaff_RBX);
        goto LAB_00100748;
      }
    }
    else {
      std::__throw_bad_array_new_length();
      puVar2 = (undefined8 *)local_38._0_8_;
    }
    local_38._0_8_ = puVar2;
    if ((bool)uVar4) {
      *in_RCX = *in_RSI;
    }
  }
LAB_00100748:
  local_38._8_8_ = (long)in_RCX + unaff_RBX;
  RVO2D::KdTree2D::buildObstacleTree(uVar1,local_38);
  if ((void *)local_38._0_8_ != (void *)0x0) {
    operator_delete((void *)local_38._0_8_,local_28 - local_38._0_8_);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RVO2D::RVOSimulator2D::queryVisibility(RVO2D::Vector2 const&, RVO2D::Vector2 const&, float) const
    */

void RVO2D::RVOSimulator2D::queryVisibility(Vector2 *param_1,Vector2 *param_2,float param_3)

{
  RVO2D::KdTree2D::queryVisibility(*(Vector2 **)(param_1 + 0x28),param_2,param_3);
  return;
}



/* RVO2D::RVOSimulator2D::setAgentDefaults(float, unsigned long, float, float, float, float,
   RVO2D::Vector2 const&) */

void __thiscall
RVO2D::RVOSimulator2D::setAgentDefaults
          (RVOSimulator2D *this,float param_1,ulong param_2,float param_3,float param_4,
          float param_5,float param_6,Vector2 *param_7)

{
  undefined4 uVar1;
  Agent2D *this_00;
  
  this_00 = *(Agent2D **)(this + 0x18);
  if (this_00 == (Agent2D *)0x0) {
    this_00 = (Agent2D *)operator_new(0xa0);
    RVO2D::Agent2D::Agent2D(this_00);
    *(Agent2D **)(this + 0x18) = this_00;
  }
  *(ulong *)(this_00 + 0x20) = CONCAT44(param_1,param_6);
  uVar1 = *(undefined4 *)param_7;
  *(ulong *)(this_00 + 0x18) = param_2;
  *(float *)(this_00 + 0x70) = param_5;
  *(float *)(this_00 + 0x74) = param_3;
  *(float *)(this_00 + 0x78) = param_4;
  *(undefined4 *)(this_00 + 0x7c) = uVar1;
  *(undefined4 *)(this_00 + 0x80) = *(undefined4 *)(param_7 + 4);
  return;
}



/* RVO2D::RVOSimulator2D::setAgentMaxNeighbors(unsigned long, unsigned long) */

void __thiscall
RVO2D::RVOSimulator2D::setAgentMaxNeighbors(RVOSimulator2D *this,ulong param_1,ulong param_2)

{
  *(ulong *)(*(long *)(*(long *)this + param_1 * 8) + 0x18) = param_2;
  return;
}



/* RVO2D::RVOSimulator2D::setAgentMaxSpeed(unsigned long, float) */

void __thiscall
RVO2D::RVOSimulator2D::setAgentMaxSpeed(RVOSimulator2D *this,ulong param_1,float param_2)

{
  *(float *)(*(long *)(*(long *)this + param_1 * 8) + 0x20) = param_2;
  return;
}



/* RVO2D::RVOSimulator2D::setAgentNeighborDist(unsigned long, float) */

void __thiscall
RVO2D::RVOSimulator2D::setAgentNeighborDist(RVOSimulator2D *this,ulong param_1,float param_2)

{
  *(float *)(*(long *)(*(long *)this + param_1 * 8) + 0x24) = param_2;
  return;
}



/* RVO2D::RVOSimulator2D::setAgentPosition(unsigned long, RVO2D::Vector2 const&) */

void __thiscall
RVO2D::RVOSimulator2D::setAgentPosition(RVOSimulator2D *this,ulong param_1,Vector2 *param_2)

{
  *(undefined8 *)(*(long *)(*(long *)this + param_1 * 8) + 0x60) = *(undefined8 *)param_2;
  return;
}



/* RVO2D::RVOSimulator2D::setAgentPrefVelocity(unsigned long, RVO2D::Vector2 const&) */

void __thiscall
RVO2D::RVOSimulator2D::setAgentPrefVelocity(RVOSimulator2D *this,ulong param_1,Vector2 *param_2)

{
  *(undefined8 *)(*(long *)(*(long *)this + param_1 * 8) + 0x68) = *(undefined8 *)param_2;
  return;
}



/* RVO2D::RVOSimulator2D::setAgentRadius(unsigned long, float) */

void __thiscall
RVO2D::RVOSimulator2D::setAgentRadius(RVOSimulator2D *this,ulong param_1,float param_2)

{
  *(float *)(*(long *)(*(long *)this + param_1 * 8) + 0x70) = param_2;
  return;
}



/* RVO2D::RVOSimulator2D::setAgentTimeHorizon(unsigned long, float) */

void __thiscall
RVO2D::RVOSimulator2D::setAgentTimeHorizon(RVOSimulator2D *this,ulong param_1,float param_2)

{
  *(float *)(*(long *)(*(long *)this + param_1 * 8) + 0x74) = param_2;
  return;
}



/* RVO2D::RVOSimulator2D::setAgentTimeHorizonObst(unsigned long, float) */

void __thiscall
RVO2D::RVOSimulator2D::setAgentTimeHorizonObst(RVOSimulator2D *this,ulong param_1,float param_2)

{
  *(float *)(*(long *)(*(long *)this + param_1 * 8) + 0x78) = param_2;
  return;
}



/* RVO2D::RVOSimulator2D::setAgentVelocity(unsigned long, RVO2D::Vector2 const&) */

void __thiscall
RVO2D::RVOSimulator2D::setAgentVelocity(RVOSimulator2D *this,ulong param_1,Vector2 *param_2)

{
  *(undefined8 *)(*(long *)(*(long *)this + param_1 * 8) + 0x7c) = *(undefined8 *)param_2;
  return;
}



/* RVO2D::RVOSimulator2D::setTimeStep(float) */

void __thiscall RVO2D::RVOSimulator2D::setTimeStep(RVOSimulator2D *this,float param_1)

{
  *(float *)(this + 0x48) = param_1;
  return;
}



/* RVO2D::RVOSimulator2D::addAgent(RVO2D::Vector2 const&) */

long __thiscall RVO2D::RVOSimulator2D::addAgent(RVOSimulator2D *this,Vector2 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Agent2D *this_00;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  Agent2D *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x18) == 0) {
    lVar4 = -1;
  }
  else {
    this_00 = (Agent2D *)operator_new(0xa0);
    RVO2D::Agent2D::Agent2D(this_00);
    puVar6 = *(undefined8 **)(this + 8);
    *(undefined8 *)(this_00 + 0x60) = *(undefined8 *)param_1;
    lVar4 = *(long *)(this + 0x18);
    *(undefined8 *)(this_00 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
    *(undefined8 *)(this_00 + 0x20) = *(undefined8 *)(lVar4 + 0x20);
    uVar1 = *(undefined4 *)(lVar4 + 0x74);
    uVar2 = *(undefined4 *)(lVar4 + 0x78);
    uVar3 = *(undefined4 *)(lVar4 + 0x7c);
    lVar5 = *(long *)this;
    *(undefined4 *)(this_00 + 0x70) = *(undefined4 *)(lVar4 + 0x70);
    *(undefined4 *)(this_00 + 0x74) = uVar1;
    *(undefined4 *)(this_00 + 0x78) = uVar2;
    *(undefined4 *)(this_00 + 0x7c) = uVar3;
    *(undefined4 *)(this_00 + 0x80) = *(undefined4 *)(lVar4 + 0x80);
    *(long *)(this_00 + 0x98) = (long)puVar6 - lVar5 >> 3;
    local_28 = this_00;
    if (puVar6 == *(undefined8 **)(this + 0x10)) {
      std::vector<RVO2D::Agent2D*,std::allocator<RVO2D::Agent2D*>>::
      _M_realloc_insert<RVO2D::Agent2D*const&>
                ((vector<RVO2D::Agent2D*,std::allocator<RVO2D::Agent2D*>> *)this,puVar6,&local_28);
      lVar5 = *(long *)this;
      puVar6 = *(undefined8 **)(this + 8);
    }
    else {
      *puVar6 = this_00;
      puVar6 = puVar6 + 1;
      *(undefined8 **)(this + 8) = puVar6;
    }
    lVar4 = ((long)puVar6 - lVar5 >> 3) + -1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RVO2D::RVOSimulator2D::addAgent(RVO2D::Vector2 const&, float, unsigned long, float, float, float,
   float, RVO2D::Vector2 const&) */

long __thiscall
RVO2D::RVOSimulator2D::addAgent
          (RVOSimulator2D *this,Vector2 *param_1,float param_2,ulong param_3,float param_4,
          float param_5,float param_6,float param_7,Vector2 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  Agent2D *this_00;
  long lVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  Agent2D *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (Agent2D *)operator_new(0xa0);
  RVO2D::Agent2D::Agent2D(this_00);
  uVar3 = *(undefined8 *)param_1;
  puVar5 = *(undefined8 **)(this + 8);
  uVar1 = *(undefined4 *)param_8;
  *(ulong *)(this_00 + 0x18) = param_3;
  *(undefined8 *)(this_00 + 0x60) = uVar3;
  lVar4 = *(long *)this;
  uVar2 = *(undefined4 *)(param_8 + 4);
  *(ulong *)(this_00 + 0x20) = CONCAT44(param_2,param_7);
  *(float *)(this_00 + 0x70) = param_6;
  *(float *)(this_00 + 0x74) = param_4;
  *(float *)(this_00 + 0x78) = param_5;
  *(undefined4 *)(this_00 + 0x7c) = uVar1;
  *(long *)(this_00 + 0x98) = (long)puVar5 - lVar4 >> 3;
  *(undefined4 *)(this_00 + 0x80) = uVar2;
  local_38 = this_00;
  if (puVar5 == *(undefined8 **)(this + 0x10)) {
    std::vector<RVO2D::Agent2D*,std::allocator<RVO2D::Agent2D*>>::
    _M_realloc_insert<RVO2D::Agent2D*const&>
              ((vector<RVO2D::Agent2D*,std::allocator<RVO2D::Agent2D*>> *)this,puVar5,&local_38);
    lVar4 = *(long *)this;
    puVar5 = *(undefined8 **)(this + 8);
  }
  else {
    *puVar5 = this_00;
    puVar5 = puVar5 + 1;
    *(undefined8 **)(this + 8) = puVar5;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ((long)puVar5 - lVar4 >> 3) + -1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RVO2D::RVOSimulator2D::addObstacle(std::vector<RVO2D::Vector2, std::allocator<RVO2D::Vector2> >
   const&) */

long __thiscall RVO2D::RVOSimulator2D::addObstacle(RVOSimulator2D *this,vector *param_1)

{
  ulong uVar1;
  float *pfVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  Obstacle2D *this_00;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  float *pfVar14;
  Obstacle2D OVar15;
  long lVar16;
  long in_FS_OFFSET;
  float fVar17;
  float fVar18;
  float fVar19;
  Obstacle2D *local_48;
  long local_40;
  
  lVar16 = -1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (8 < (ulong)(*(long *)(param_1 + 8) - *(long *)param_1)) {
    lVar4 = *(long *)(this + 0x38);
    lVar5 = *(long *)(this + 0x30);
    lVar16 = lVar4 - lVar5 >> 3;
    if (*(long *)(param_1 + 8) != *(long *)param_1) {
      uVar12 = 0;
      do {
        while( true ) {
          this_00 = (Obstacle2D *)operator_new(0x40);
          RVO2D::Obstacle2D::Obstacle2D(this_00);
          pfVar6 = *(float **)param_1;
          pfVar2 = pfVar6 + uVar12 * 2;
          uVar3 = *(undefined8 *)pfVar2;
          *(undefined8 *)(this_00 + 0x10) = uVar3;
          if (uVar12 != 0) {
            lVar7 = *(long *)(*(long *)(this + 0x38) + -8);
            *(long *)(this_00 + 0x18) = lVar7;
            *(Obstacle2D **)(lVar7 + 8) = this_00;
          }
          lVar7 = *(long *)(param_1 + 8);
          lVar8 = *(long *)(this + 0x30);
          uVar13 = lVar7 - (long)pfVar6 >> 3;
          uVar1 = uVar13 - 1;
          pfVar14 = pfVar6 + uVar12 * 2 + 2;
          if (uVar1 == uVar12) {
            lVar9 = *(long *)(lVar8 + (lVar4 - lVar5));
            *(long *)(this_00 + 8) = lVar9;
            *(Obstacle2D **)(lVar9 + 0x18) = this_00;
            pfVar14 = pfVar6;
          }
          OVar15 = (Obstacle2D)0x1;
          fVar18 = (float)*(undefined8 *)pfVar14 - (float)uVar3;
          fVar19 = (float)((ulong)*(undefined8 *)pfVar14 >> 0x20) - (float)((ulong)uVar3 >> 0x20);
          fVar17 = _LC3 / SQRT(fVar18 * fVar18 + fVar19 * fVar19);
          *(ulong *)(this_00 + 0x20) = CONCAT44(fVar17 * fVar19,fVar17 * fVar18);
          if (lVar7 - (long)pfVar6 != 0x10) {
            uVar11 = uVar12 - 1;
            if (uVar12 == 0) {
              uVar11 = uVar1;
            }
            fVar17 = (pfVar6 + uVar11 * 2)[1];
            fVar18 = pfVar6[uVar11 * 2];
            OVar15 = (Obstacle2D)
                     (0.0 <= (pfVar2[1] - fVar17) * (fVar18 - *pfVar14) -
                             (*pfVar2 - fVar18) * (fVar17 - pfVar14[1]));
          }
          puVar10 = *(undefined8 **)(this + 0x38);
          *this_00 = OVar15;
          *(long *)(this_00 + 0x38) = (long)puVar10 - lVar8 >> 3;
          local_48 = this_00;
          if (puVar10 != *(undefined8 **)(this + 0x40)) break;
          uVar12 = uVar12 + 1;
          std::vector<RVO2D::Obstacle2D*,std::allocator<RVO2D::Obstacle2D*>>::
          _M_realloc_insert<RVO2D::Obstacle2D*const&>
                    ((vector<RVO2D::Obstacle2D*,std::allocator<RVO2D::Obstacle2D*>> *)(this + 0x30),
                     puVar10,&local_48);
          if ((ulong)(*(long *)(param_1 + 8) - *(long *)param_1 >> 3) <= uVar12) goto LAB_00100d90;
        }
        *puVar10 = this_00;
        uVar12 = uVar12 + 1;
        *(undefined8 **)(this + 0x38) = puVar10 + 1;
      } while (uVar12 < uVar13);
    }
  }
LAB_00100d90:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* void std::vector<RVO2D::Agent2D*, std::allocator<RVO2D::Agent2D*>
   >::_M_realloc_insert<RVO2D::Agent2D* const&>(__gnu_cxx::__normal_iterator<RVO2D::Agent2D**,
   std::vector<RVO2D::Agent2D*, std::allocator<RVO2D::Agent2D*> > >, RVO2D::Agent2D* const&) */

void __thiscall
std::vector<RVO2D::Agent2D*,std::allocator<RVO2D::Agent2D*>>::
_M_realloc_insert<RVO2D::Agent2D*const&>
          (vector<RVO2D::Agent2D*,std::allocator<RVO2D::Agent2D*>> *this,void *param_2,
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
    if (0xfffffffffffffffe < uVar2) goto LAB_00100ea0;
    uVar3 = 0xfffffffffffffff;
    if (uVar2 + 1 < 0x1000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 3;
LAB_00100eaa:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_00100ea0:
      uVar3 = 0x7ffffffffffffff8;
      goto LAB_00100eaa;
    }
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_00100eaa;
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
    if (__src == (void *)0x0) goto LAB_00100e7c;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_00100e7c:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* void std::vector<RVO2D::Obstacle2D*, std::allocator<RVO2D::Obstacle2D*>
   >::_M_realloc_insert<RVO2D::Obstacle2D* const&>(__gnu_cxx::__normal_iterator<RVO2D::Obstacle2D**,
   std::vector<RVO2D::Obstacle2D*, std::allocator<RVO2D::Obstacle2D*> > >, RVO2D::Obstacle2D*
   const&) */

void __thiscall
std::vector<RVO2D::Obstacle2D*,std::allocator<RVO2D::Obstacle2D*>>::
_M_realloc_insert<RVO2D::Obstacle2D*const&>
          (vector<RVO2D::Obstacle2D*,std::allocator<RVO2D::Obstacle2D*>> *this,void *param_2,
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
    if (0xfffffffffffffffe < uVar2) goto LAB_00101030;
    uVar3 = 0xfffffffffffffff;
    if (uVar2 + 1 < 0x1000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 3;
LAB_0010103a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_00101030:
      uVar3 = 0x7ffffffffffffff8;
      goto LAB_0010103a;
    }
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_0010103a;
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
    if (__src == (void *)0x0) goto LAB_0010100c;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010100c:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}


