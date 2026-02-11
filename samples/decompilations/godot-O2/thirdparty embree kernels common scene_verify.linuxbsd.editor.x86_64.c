
/* bool embree::parallel_reduce_internal<unsigned long, bool, embree::parallel_reduce<unsigned long,
   bool, embree::parallel_any_of<unsigned long,
   embree::Scene::checkIfModifiedAndSet()::{lambda(unsigned long)#1}>(unsigned long, unsigned long,
   embree::Scene::checkIfModifiedAndSet()::{lambda(unsigned
   long)#1})::{lambda(embree::range<unsigned long> const&)#1}, std::bit_or<bool> >(unsigned long,
   unsigned long, bool const&, embree::parallel_any_of<unsigned long,
   embree::Scene::checkIfModifiedAndSet()::{lambda(unsigned long)#1}>(unsigned long, unsigned long,
   embree::Scene::checkIfModifiedAndSet()::{lambda(unsigned
   long)#1})::{lambda(embree::range<unsigned long> const&)#1} const&, std::bit_or<bool>
   const&)::{lambda(embree::range<unsigned long>)#1}, std::bit_or<bool> >(unsigned long, unsigned
   long, unsigned long, unsigned long, bool const&, embree::parallel_reduce<unsigned long, bool,
   embree::parallel_any_of<unsigned long, embree::Scene::checkIfModifiedAndSet()::{lambda(unsigned
   long)#1}>(unsigned long, unsigned long, embree::Scene::checkIfModifiedAndSet()::{lambda(unsigned
   long)#1})::{lambda(embree::range<unsigned long> const&)#1}, std::bit_or<bool> >(unsigned long,
   unsigned long, bool const&, embree::parallel_any_of<unsigned long,
   embree::Scene::checkIfModifiedAndSet()::{lambda(unsigned long)#1}>(unsigned long, unsigned long,
   embree::Scene::checkIfModifiedAndSet()::{lambda(unsigned
   long)#1})::{lambda(embree::range<unsigned long> const&)#1} const&, std::bit_or<bool>
   const&)::{lambda(embree::range<unsigned long>)#1} const&, std::bit_or<bool> const&) [clone
   .constprop.0] */

bool embree::
     parallel_reduce_internal<unsigned_long,bool,embree::parallel_reduce<unsigned_long,bool,embree::parallel_any_of<unsigned_long,embree::Scene::checkIfModifiedAndSet()::_lambda(unsigned_long)_1_>(unsigned_long,unsigned_long,embree::Scene::checkIfModifiedAndSet()::_lambda(unsigned_long)_1_)::_lambda(embree::range<unsigned_long>const&)_1_,std::bit_or<bool>>(unsigned_long,unsigned_long,bool_const&,embree::parallel_any_of<unsigned_long,embree::Scene::checkIfModifiedAndSet()::_lambda(unsigned_long)_1_>(unsigned_long,unsigned_long,embree::Scene::checkIfModifiedAndSet()::_lambda(unsigned_long)_1_)::_lambda(embree::range<unsigned_long>const&)_1_const&,std::bit_or<bool>const&)::_lambda(embree::range<unsigned_long>)_1_,std::bit_or<bool>>
               (ulong param_1,ulong param_2,ulong param_3,ulong param_4,bool *param_5,
               _lambda_embree__range<unsigned_long>__1_ *param_6,bit_or *param_7)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  long in_FS_OFFSET;
  ulong local_2120;
  ulong local_2118 [2];
  undefined8 local_2108;
  long local_2100;
  long local_20f8;
  undefined8 *local_20f0;
  ulong *local_20e8;
  ulong *local_20e0;
  byte *local_20d8;
  ulong local_20d0;
  byte local_20c0 [8192];
  byte *local_c0;
  ulong local_b8;
  long local_48;
  
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_2108 = 0;
  local_2120 = param_2;
  local_2118[0] = param_1;
  uVar1 = embree::TaskScheduler::threadCount();
  if (local_2118[0] < uVar1) {
    uVar1 = local_2118[0];
  }
  local_20f0 = &local_2108;
  local_20e8 = &local_2120;
  local_20e0 = local_2118;
  local_2118[0] = 0x200;
  if (uVar1 < 0x201) {
    local_2118[0] = uVar1;
  }
  local_20d8 = local_20c0;
  local_20d0 = param_4;
  local_c0 = local_20c0;
  local_b8 = local_2118[0];
  if (uVar1 == 0) {
    bVar4 = *(byte *)param_3;
  }
  else {
    local_2100 = 0;
    _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_24parallel_reduce_internalImbZNS_15parallel_reduceImbZNS_15parallel_any_ofImZNS_5Scene21checkIfModifiedAndSetEvEUlmE_EEbT_S8_T0_EUlRKNS_5rangeImEEE_St6bit_orIbEEES9_S8_S8_RKS9_RKT1_RKT2_EUlSB_E_SG_EES9_S8_S8_S8_S8_SI_SL_SO_EUlmE_EEvS8_SI_EUlSD_E_EEvS8_S8_S8_SI_PNS0_16TaskGroupContextE_isra_0
              (0,local_2118[0],1,&local_20f0,&local_2100);
    embree::TaskScheduler::wait();
    if (local_2100 != 0) {
      local_20f8 = local_2100;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_20f8);
      goto LAB_0010082d;
    }
    bVar4 = *(byte *)param_3;
    if (local_2118[0] != 0) {
      pbVar2 = local_c0;
      if ((local_2118[0] & 1) != 0) {
        bVar4 = bVar4 | *local_c0;
        pbVar2 = local_c0 + 1;
        if (local_c0 + local_2118[0] == local_c0 + 1) goto LAB_00100768;
      }
      do {
        pbVar3 = pbVar2 + 2;
        bVar4 = bVar4 | *pbVar2 | pbVar2[1];
        pbVar2 = pbVar3;
      } while (local_c0 + local_2118[0] != pbVar3);
    }
  }
LAB_00100768:
  if (local_c0 != local_20c0) {
    embree::alignedFree(local_c0);
  }
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (bool)bVar4;
  }
LAB_0010082d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::Scene::checkIfModifiedAndSet() */

void __thiscall embree::Scene::checkIfModifiedAndSet(Scene *this)

{
  ulong uVar1;
  bool *in_R8;
  _lambda_embree__range<unsigned_long>__1_ *in_R9;
  long in_FS_OFFSET;
  bool bVar2;
  uint5 in_stack_ffffffffffffffc8;
  undefined1 in_stack_ffffffffffffffcf;
  Scene *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  Scene **local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x248] == (Scene)0x0) {
    uVar1 = *(ulong *)(this + 0x1d0);
    LOCK();
    UNLOCK();
    local_20 = &stack0xffffffffffffffcf;
    local_28 = &stack0xffffffffffffffce;
    local_18 = &local_30;
    local_30 = this;
    if (uVar1 == 1) {
      if (**(long **)(this + 0x1e0) == 0) {
        bVar2 = false;
      }
      else {
        bVar2 = **(uint **)(this + 0x200) < *(uint *)(**(long **)(this + 0x1e0) + 0x38);
      }
    }
    else {
      bVar2 = parallel_reduce_internal<unsigned_long,bool,embree::parallel_reduce<unsigned_long,bool,embree::parallel_any_of<unsigned_long,embree::Scene::checkIfModifiedAndSet()::_lambda(unsigned_long)_1_>(unsigned_long,unsigned_long,embree::Scene::checkIfModifiedAndSet()::_lambda(unsigned_long)_1_)::_lambda(embree::range<unsigned_long>const&)_1_,std::bit_or<bool>>(unsigned_long,unsigned_long,bool_const&,embree::parallel_any_of<unsigned_long,embree::Scene::checkIfModifiedAndSet()::_lambda(unsigned_long)_1_>(unsigned_long,unsigned_long,embree::Scene::checkIfModifiedAndSet()::_lambda(unsigned_long)_1_)::_lambda(embree::range<unsigned_long>const&)_1_const&,std::bit_or<bool>const&)::_lambda(embree::range<unsigned_long>)_1_,std::bit_or<bool>>
                        (uVar1,uVar1,(ulong)local_28,(ulong)&local_28,in_R8,in_R9,
                         (bit_or *)
                         CONCAT17(in_stack_ffffffffffffffcf,(uint7)in_stack_ffffffffffffffc8));
    }
    LOCK();
    UNLOCK();
    if (bVar2 != false) {
      this[0x248] = (Scene)0x1;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::RefCount::refInc() */

RefCount * __thiscall embree::RefCount::refInc(RefCount *this)

{
  LOCK();
  *(long *)(this + 8) = *(long *)(this + 8) + 1;
  UNLOCK();
  return this;
}



/* embree::RefCount::refDec() */

void __thiscall embree::RefCount::refDec(RefCount *this)

{
  RefCount *pRVar1;
  
  LOCK();
  pRVar1 = this + 8;
  *(long *)pRVar1 = *(long *)pRVar1 + -1;
  UNLOCK();
  if ((this != (RefCount *)0x0) && (*(long *)pRVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00100bd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}


