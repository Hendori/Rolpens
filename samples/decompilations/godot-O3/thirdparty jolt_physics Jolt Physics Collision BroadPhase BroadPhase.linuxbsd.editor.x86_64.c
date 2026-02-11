
/* JPH::BroadPhase::Init(JPH::BodyManager*, JPH::BroadPhaseLayerInterface const&) */

void JPH::BroadPhase::Init(BodyManager *param_1,BroadPhaseLayerInterface *param_2)

{
  *(BroadPhaseLayerInterface **)(param_1 + 8) = param_2;
  return;
}



/* JPH::BroadPhase::Optimize() */

void JPH::BroadPhase::Optimize(void)

{
  return;
}



/* JPH::BroadPhase::FrameSync() */

void JPH::BroadPhase::FrameSync(void)

{
  return;
}



/* JPH::BroadPhase::LockModifications() */

void JPH::BroadPhase::LockModifications(void)

{
  return;
}



/* JPH::BroadPhase::UpdatePrepare() */

BroadPhase * __thiscall JPH::BroadPhase::UpdatePrepare(BroadPhase *this)

{
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  return this;
}



/* JPH::BroadPhase::UpdateFinalize(JPH::BroadPhase::UpdateState const&) */

void JPH::BroadPhase::UpdateFinalize(UpdateState *param_1)

{
  return;
}



/* JPH::BroadPhase::UnlockModifications() */

void JPH::BroadPhase::UnlockModifications(void)

{
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



/* JPH::BroadPhase::Init(JPH::BodyManager*, JPH::BroadPhaseLayerInterface const&) */

void JPH::BroadPhase::_GLOBAL__sub_I_Init(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC0;
  }
  return;
}


