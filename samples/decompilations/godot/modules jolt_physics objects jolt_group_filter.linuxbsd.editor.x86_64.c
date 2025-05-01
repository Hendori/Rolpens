
/* JoltGroupFilter::CanCollide(JPH::CollisionGroup const&, JPH::CollisionGroup const&) const */

void JoltGroupFilter::CanCollide(CollisionGroup *param_1,CollisionGroup *param_2)

{
  JoltObject3D::can_interact_with
            ((JoltObject3D *)CONCAT44(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc)));
  return;
}



/* JoltGroupFilter::encode_object(JoltObject3D const*, unsigned int&, unsigned int&) */

void JoltGroupFilter::encode_object(JoltObject3D *param_1,uint *param_2,uint *param_3)

{
  *param_2 = (uint)((ulong)param_1 >> 0x20);
  *param_3 = (uint)param_1;
  return;
}



/* JoltGroupFilter::decode_object(unsigned int, unsigned int) */

undefined8 JoltGroupFilter::decode_object(uint param_1,uint param_2)

{
  return CONCAT44(param_1,param_2);
}



/* JoltGroupFilter::~JoltGroupFilter() */

void __thiscall JoltGroupFilter::~JoltGroupFilter(JoltGroupFilter *this)

{
  return;
}



/* JoltGroupFilter::~JoltGroupFilter() */

void __thiscall JoltGroupFilter::~JoltGroupFilter(JoltGroupFilter *this)

{
                    /* WARNING: Could not recover jumptable at 0x00100074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*JPH::Free)();
  return;
}



/* JoltGroupFilter::CanCollide(JPH::CollisionGroup const&, JPH::CollisionGroup const&) const */

void JoltGroupFilter::_GLOBAL__sub_I_CanCollide(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC0;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltGroupFilter::~JoltGroupFilter() */

void __thiscall JoltGroupFilter::~JoltGroupFilter(JoltGroupFilter *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


