
Device * rtcNewDevice(char *param_1)

{
  Device *this;
  
  embree::MutexSys::lock();
  this = (Device *)embree::alignedMalloc(0x560,0x10);
  embree::Device::Device(this,param_1);
  LOCK();
  *(long *)(this + 8) = *(long *)(this + 8) + 1;
  UNLOCK();
  embree::MutexSys::unlock();
  return this;
}



void rtcRetainDevice(long *param_1)

{
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::MutexSys::lock();
  if (*(code **)(*param_1 + 0x10) == embree::RefCount::refInc) {
    LOCK();
    param_1[1] = param_1[1] + 1;
    UNLOCK();
    embree::MutexSys::unlock();
    return;
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  embree::MutexSys::unlock();
  return;
}



void rtcReleaseDevice(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::MutexSys::lock();
  if (*(code **)(*param_1 + 0x18) == embree::RefCount::refDec) {
    LOCK();
    plVar1 = param_1 + 1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
    embree::MutexSys::unlock();
    return;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  embree::MutexSys::unlock();
  return;
}



undefined8 rtcGetDeviceProperty(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    embree::MutexSys::lock();
    uVar1 = embree::Device::getProperty(param_1,param_2);
    embree::MutexSys::unlock();
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



void rtcSetDeviceProperty(long param_1,int param_2,undefined8 param_3)

{
  if ((3 < param_2 - 1000000U) && (param_1 == 0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::MutexSys::lock();
  embree::Device::setProperty(param_1,param_2,param_3);
  embree::MutexSys::unlock();
  return;
}



void rtcGetDeviceError(long param_1)

{
  if (param_1 != 0) {
    embree::Device::getDeviceErrorCode();
    return;
  }
  embree::Device::getThreadErrorCode();
  return;
}



void rtcSetDeviceErrorFunction(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x528) = param_2;
    *(undefined8 *)(param_1 + 0x530) = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



void rtcSetDeviceMemoryMonitorFunction(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x538) = param_2;
  *(undefined8 *)(param_1 + 0x540) = param_3;
  return;
}



undefined8 * rtcNewBuffer(RTCDeviceTy *param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCDeviceTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_38,param_1);
  puVar3 = (undefined8 *)operator_new(0x30);
  puVar3[1] = 0;
  *puVar3 = &PTR__Buffer_00106130;
  lVar1 = *(long *)param_1;
  puVar3[2] = param_1;
  pcVar2 = *(code **)(lVar1 + 0x10);
  puVar3[4] = param_2;
  if (pcVar2 == embree::RefCount::refInc) {
    LOCK();
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    UNLOCK();
  }
  else {
    (*pcVar2)(param_1);
  }
  *(undefined1 *)(puVar3 + 5) = 0;
  (**(code **)(*(long *)puVar3[2] + 0x20))((long *)puVar3[2],puVar3[4],0);
  uVar4 = (**(code **)(*(long *)puVar3[2] + 0x38))
                    ((long *)puVar3[2],puVar3[4] + 0xf & 0xfffffffffffffff0,0x10);
  puVar3[3] = uVar4;
  LOCK();
  puVar3[1] = puVar3[1] + 1;
  UNLOCK();
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 * rtcNewSharedBuffer(RTCDeviceTy *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCDeviceTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_38,param_1);
  puVar3 = (undefined8 *)operator_new(0x30);
  puVar3[1] = 0;
  *puVar3 = &PTR__Buffer_00106130;
  lVar1 = *(long *)param_1;
  puVar3[2] = param_1;
  pcVar2 = *(code **)(lVar1 + 0x10);
  puVar3[4] = param_3;
  if (pcVar2 == embree::RefCount::refInc) {
    LOCK();
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    UNLOCK();
  }
  else {
    (*pcVar2)(param_1);
  }
  if (param_2 == 0) {
    *(undefined1 *)(puVar3 + 5) = 0;
    (**(code **)(*(long *)puVar3[2] + 0x20))((long *)puVar3[2],puVar3[4],0);
    uVar4 = (**(code **)(*(long *)puVar3[2] + 0x38))
                      ((long *)puVar3[2],puVar3[4] + 0xf & 0xfffffffffffffff0,0x10);
    puVar3[3] = uVar4;
  }
  else {
    *(undefined1 *)(puVar3 + 5) = 1;
    puVar3[3] = param_2;
  }
  LOCK();
  puVar3[1] = puVar3[1] + 1;
  UNLOCK();
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar3;
}



undefined8 rtcGetBufferData(RTCBufferTy *param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (RTCBufferTy *)0x0) {
    embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



void rtcRetainBuffer(RTCBufferTy *param_1)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCBufferTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
  if (*(code **)(*(long *)param_1 + 0x10) == embree::RefCount::refInc) {
    LOCK();
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    UNLOCK();
  }
  else {
    (**(code **)(*(long *)param_1 + 0x10))(param_1);
  }
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcReleaseBuffer(RTCBufferTy *param_1)

{
  RTCBufferTy *pRVar1;
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCBufferTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
  if (*(code **)(*(long *)param_1 + 0x18) == embree::RefCount::refDec) {
    LOCK();
    pRVar1 = param_1 + 8;
    *(long *)pRVar1 = *(long *)pRVar1 + -1;
    UNLOCK();
    if (*(long *)pRVar1 == 0) {
      (**(code **)(*(long *)param_1 + 8))(param_1);
    }
  }
  else {
    (**(code **)(*(long *)param_1 + 0x18))(param_1);
  }
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



Scene * rtcNewScene(RTCDeviceTy *param_1)

{
  Scene *this;
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCDeviceTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
  this = (Scene *)embree::alignedUSMMalloc(0x350,0x10,1);
  embree::Scene::Scene(this,(Device *)param_1);
  LOCK();
  *(long *)(this + 8) = *(long *)(this + 8) + 1;
  UNLOCK();
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcGetSceneDevice(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar1 = *(long **)(param_1 + 0x188);
  if (*(code **)(*plVar1 + 0x10) == embree::RefCount::refInc) {
    LOCK();
    plVar1[1] = plVar1[1] + 1;
    UNLOCK();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00100693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1);
  return;
}



void rtcSetSceneProgressMonitorFunction(RTCSceneTy *param_1,void *param_2)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCSceneTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_38,param_1);
  embree::MutexSys::lock();
  embree::Scene::setProgressMonitorFunction((_func_bool_void_ptr_double *)param_1,param_2);
  embree::MutexSys::unlock();
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcSetSceneBuildQuality(RTCSceneTy *param_1,uint param_2)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (RTCSceneTy *)0x0) {
    embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
    if (param_2 < 3) {
      embree::Scene::setBuildQuality(param_1,param_2);
      embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



void rtcSetSceneFlags(RTCSceneTy *param_1,undefined4 param_2)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCSceneTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
  embree::Scene::setSceneFlags(param_1,param_2);
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 rtcGetSceneFlags(RTCSceneTy *param_1)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCSceneTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
  uVar1 = embree::Scene::getSceneFlags();
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcCommitScene(RTCSceneTy *param_1)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCSceneTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
  embree::Scene::commit(SUB81(param_1,0));
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcJoinCommitScene(RTCSceneTy *param_1)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCSceneTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
  embree::Scene::commit(SUB81(param_1,0));
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcGetSceneBounds(RTCSceneTy *param_1,undefined4 *param_2)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (RTCSceneTy *)0x0) {
    embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
    if (param_1[0x248] == (RTCSceneTy)0x0) {
      auVar2 = minps(*(undefined1 (*) [16])(param_1 + 0x10),*(undefined1 (*) [16])(param_1 + 0x30));
      auVar1 = maxps(*(undefined1 (*) [16])(param_1 + 0x20),*(undefined1 (*) [16])(param_1 + 0x40));
      param_2[3] = 0;
      param_2[7] = 0;
      *param_2 = auVar2._0_4_;
      param_2[4] = auVar1._0_4_;
      param_2[2] = auVar2._8_4_;
      param_2[1] = auVar2._4_4_;
      param_2[5] = auVar1._4_4_;
      param_2[6] = auVar1._8_4_;
      embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



void rtcGetSceneLinearBounds(RTCSceneTy *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (RTCSceneTy *)0x0) {
    embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
    if ((param_2 != (undefined4 *)0x0) && (param_1[0x248] == (RTCSceneTy)0x0)) {
      *param_2 = *(undefined4 *)(param_1 + 0x10);
      param_2[1] = *(undefined4 *)(param_1 + 0x14);
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      param_2[3] = 0;
      param_2[2] = uVar1;
      param_2[4] = *(undefined4 *)(param_1 + 0x20);
      param_2[5] = *(undefined4 *)(param_1 + 0x24);
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      param_2[7] = 0;
      param_2[6] = uVar1;
      param_2[8] = *(undefined4 *)(param_1 + 0x30);
      param_2[9] = *(undefined4 *)(param_1 + 0x34);
      uVar1 = *(undefined4 *)(param_1 + 0x38);
      param_2[0xb] = 0;
      param_2[10] = uVar1;
      param_2[0xc] = *(undefined4 *)(param_1 + 0x40);
      param_2[0xd] = *(undefined4 *)(param_1 + 0x44);
      uVar1 = *(undefined4 *)(param_1 + 0x48);
      param_2[0xf] = 0;
      param_2[0xe] = uVar1;
      embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



void rtcCollide(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00100b53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_2 + 0x58));
  return;
}



void rtcPointQuery(Scene *param_1,RTCPointQuery *param_2,RTCPointQueryContext *param_3,
                  _func_bool_RTCPointQueryFunctionArguments_ptr *param_4,void *param_5)

{
  pointQuery(param_1,param_2,param_3,param_4,param_5);
  return;
}



uint rtcPointQuery4(long param_1,Scene *param_2,undefined4 *param_3,RTCPointQueryContext *param_4,
                   _func_bool_RTCPointQueryFunctionArguments_ptr *param_5,long param_6)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  uint uVar4;
  long in_FS_OFFSET;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  long local_40;
  
  uVar4 = 0;
  lVar2 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (*(int *)(param_1 + lVar2 * 4) != 0) {
      local_68 = *param_3;
      pvVar3 = (void *)0x0;
      local_64 = param_3[4];
      local_60 = param_3[8];
      local_58 = param_3[0x10];
      local_5c = param_3[0xc];
      if (param_6 != 0) {
        pvVar3 = *(void **)(param_6 + lVar2 * 8);
      }
      uVar1 = pointQuery(param_2,(RTCPointQuery *)&local_68,param_4,param_5,pvVar3);
      uVar4 = uVar4 | uVar1;
      *param_3 = local_68;
      param_3[4] = local_64;
      param_3[8] = local_60;
      param_3[0x10] = local_58;
      param_3[0xc] = local_5c;
    }
    lVar2 = lVar2 + 1;
    param_3 = param_3 + 1;
  } while (lVar2 != 4);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint rtcPointQuery8(long param_1,Scene *param_2,undefined4 *param_3,RTCPointQueryContext *param_4,
                   _func_bool_RTCPointQueryFunctionArguments_ptr *param_5,long param_6)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  long local_40;
  
  lVar4 = 0;
  uVar2 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (*(int *)(param_1 + lVar4 * 4) != 0) {
      local_68 = *param_3;
      pvVar3 = (void *)0x0;
      local_64 = param_3[8];
      local_60 = param_3[0x10];
      local_58 = param_3[0x20];
      local_5c = param_3[0x18];
      if (param_6 != 0) {
        pvVar3 = *(void **)(param_6 + lVar4 * 8);
      }
      uVar1 = pointQuery(param_2,(RTCPointQuery *)&local_68,param_4,param_5,pvVar3);
      uVar2 = uVar2 | uVar1;
      *param_3 = local_68;
      param_3[8] = local_64;
      param_3[0x10] = local_60;
      param_3[0x20] = local_58;
      param_3[0x18] = local_5c;
    }
    lVar4 = lVar4 + 1;
    param_3 = param_3 + 1;
  } while (lVar4 != 8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint rtcPointQuery16(long param_1,Scene *param_2,undefined4 *param_3,RTCPointQueryContext *param_4,
                    _func_bool_RTCPointQueryFunctionArguments_ptr *param_5,long param_6)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  long local_40;
  
  lVar4 = 0;
  uVar2 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (*(int *)(param_1 + lVar4 * 4) != 0) {
      local_68 = *param_3;
      pvVar3 = (void *)0x0;
      local_64 = param_3[0x10];
      local_60 = param_3[0x20];
      local_58 = param_3[0x40];
      local_5c = param_3[0x30];
      if (param_6 != 0) {
        pvVar3 = *(void **)(param_6 + lVar4 * 8);
      }
      uVar1 = pointQuery(param_2,(RTCPointQuery *)&local_68,param_4,param_5,pvVar3);
      uVar2 = uVar2 | uVar1;
      *param_3 = local_68;
      param_3[0x10] = local_64;
      param_3[0x20] = local_60;
      param_3[0x40] = local_58;
      param_3[0x30] = local_5c;
    }
    lVar4 = lVar4 + 1;
    param_3 = param_3 + 1;
  } while (lVar4 != 0x10);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcIntersect1(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long in_FS_OFFSET;
  long local_58;
  undefined4 *local_50;
  undefined8 *local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (undefined8 *)0x0) {
    param_3 = &local_38;
    local_30 = 0;
    local_38 = 0xffffffff00000000;
    local_28 = 0;
    local_20 = 0;
  }
  else {
    local_50 = (undefined4 *)param_3[1];
    if (local_50 != (undefined4 *)0x0) goto LAB_00100f29;
  }
  local_14 = 0xffffffff;
  local_50 = &local_14;
LAB_00100f29:
  local_58 = param_1;
  local_48 = param_3;
  (**(code **)(param_1 + 0x78))(param_1 + 0x58,param_2,&local_58);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcForwardIntersect1(long param_1,long param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long in_FS_OFFSET;
  long local_38;
  int *local_30;
  undefined8 local_28;
  long local_20;
  
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = *(int **)(param_1 + 0x18);
  uVar6 = *puVar1;
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  uVar9 = puVar1[3];
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  uVar3 = param_3[5];
  uVar4 = param_3[6];
  uVar5 = param_3[7];
  uVar10 = puVar1[4];
  uVar11 = puVar1[5];
  uVar12 = puVar1[6];
  uVar13 = puVar1[7];
  puVar1[4] = param_3[4];
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  puVar1[7] = uVar5;
  local_28 = *(undefined8 *)(param_1 + 0x40);
  if (*piVar2 == -1) {
    *piVar2 = param_4;
  }
  local_38 = param_2;
  local_30 = piVar2;
  (**(code **)(param_2 + 0x78))(param_2 + 0x58,puVar1,&local_38);
  *piVar2 = -1;
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  puVar1[4] = uVar10;
  puVar1[5] = uVar11;
  puVar1[6] = uVar12;
  puVar1[7] = uVar13;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcForwardIntersect1Ex(long param_1,long param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long in_FS_OFFSET;
  long local_38;
  int *local_30;
  undefined8 local_28;
  long local_20;
  
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = *(int **)(param_1 + 0x18);
  uVar6 = *puVar1;
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  uVar9 = puVar1[3];
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  uVar3 = param_3[5];
  uVar4 = param_3[6];
  uVar5 = param_3[7];
  uVar10 = puVar1[4];
  uVar11 = puVar1[5];
  uVar12 = puVar1[6];
  uVar13 = puVar1[7];
  puVar1[4] = param_3[4];
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  puVar1[7] = uVar5;
  local_28 = *(undefined8 *)(param_1 + 0x40);
  if (*piVar2 == -1) {
    *piVar2 = param_4;
  }
  local_38 = param_2;
  local_30 = piVar2;
  (**(code **)(param_2 + 0x78))(param_2 + 0x58,puVar1,&local_38);
  *piVar2 = -1;
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  puVar1[4] = uVar10;
  puVar1[5] = uVar11;
  puVar1[6] = uVar12;
  puVar1[7] = uVar13;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcIntersect4(long param_1,long param_2,undefined4 *param_3,undefined8 *param_4)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_d8;
  undefined4 *local_d0;
  undefined8 *local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == (undefined8 *)0x0) {
    param_4 = &local_b8;
    local_b0 = 0;
    local_b8 = 0xffffffff00000000;
    local_a8 = 0;
    local_a0 = 0;
  }
  else {
    local_d0 = (undefined4 *)param_4[1];
    if (local_d0 != (undefined4 *)0x0) goto LAB_0010114e;
  }
  local_8c = 0xffffffff;
  local_d0 = &local_8c;
LAB_0010114e:
  local_d8 = param_2;
  local_c8 = param_4;
  if (*(long *)(param_2 + 0xa8) == 0) {
    lVar1 = 0;
    do {
      if (*(int *)(param_1 + lVar1 * 4) != 0) {
        local_88 = *param_3;
        local_64 = param_3[0x24];
        local_84 = param_3[4];
        local_60 = param_3[0x28];
        local_80 = param_3[8];
        local_5c = param_3[0x2c];
        local_7c = param_3[0xc];
        local_78 = param_3[0x10];
        local_74 = param_3[0x14];
        local_70 = param_3[0x18];
        local_68 = param_3[0x20];
        local_6c = param_3[0x1c];
        local_58 = param_3[0x30];
        local_54 = param_3[0x34];
        local_50 = param_3[0x38];
        local_4c = param_3[0x3c];
        local_48 = param_3[0x40];
        local_44 = param_3[0x44];
        local_40 = param_3[0x48];
        local_3c = param_3[0x4c];
        (**(code **)(param_2 + 0x78))(param_2 + 0x58,&local_88,&local_d8);
        *param_3 = local_88;
        param_3[0x24] = local_64;
        param_3[4] = local_84;
        param_3[0x28] = local_60;
        param_3[8] = local_80;
        param_3[0x2c] = local_5c;
        param_3[0xc] = local_7c;
        param_3[0x10] = local_78;
        param_3[0x14] = local_74;
        param_3[0x18] = local_70;
        param_3[0x1c] = local_6c;
        param_3[0x20] = local_68;
        param_3[0x30] = local_58;
        param_3[0x34] = local_54;
        param_3[0x38] = local_50;
        param_3[0x3c] = local_4c;
        param_3[0x44] = local_44;
        param_3[0x40] = local_48;
        param_3[0x48] = local_40;
        param_3[0x4c] = local_3c;
      }
      lVar1 = lVar1 + 1;
      param_3 = param_3 + 1;
    } while (lVar1 != 4);
  }
  else {
    (**(code **)(param_2 + 0x98))(param_1,param_2 + 0x58,param_3,&local_d8);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void rtcForwardIntersect4Ex
               (undefined8 param_1,long param_2,long param_3,undefined8 *param_4,int param_5)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  long in_FS_OFFSET;
  long local_38;
  int *local_30;
  undefined8 local_28;
  long local_20;
  
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  uVar30 = param_4[1];
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = *(int **)(param_2 + 0x18);
  uVar3 = *(undefined4 *)puVar1;
  uVar4 = *(undefined4 *)((long)puVar1 + 4);
  uVar5 = *(undefined4 *)(puVar1 + 1);
  uVar6 = *(undefined4 *)((long)puVar1 + 0xc);
  *puVar1 = *param_4;
  puVar1[1] = uVar30;
  uVar30 = param_4[3];
  uVar7 = *(undefined4 *)(puVar1 + 2);
  uVar8 = *(undefined4 *)((long)puVar1 + 0x14);
  uVar9 = *(undefined4 *)(puVar1 + 3);
  uVar10 = *(undefined4 *)((long)puVar1 + 0x1c);
  uVar11 = *(undefined4 *)(puVar1 + 4);
  uVar12 = *(undefined4 *)((long)puVar1 + 0x24);
  uVar13 = *(undefined4 *)(puVar1 + 5);
  uVar14 = *(undefined4 *)((long)puVar1 + 0x2c);
  puVar1[2] = param_4[2];
  puVar1[3] = uVar30;
  uVar30 = param_4[5];
  uVar15 = *(undefined4 *)(puVar1 + 8);
  uVar16 = *(undefined4 *)((long)puVar1 + 0x44);
  uVar17 = *(undefined4 *)(puVar1 + 9);
  uVar18 = *(undefined4 *)((long)puVar1 + 0x4c);
  uVar19 = *(undefined4 *)(puVar1 + 10);
  uVar20 = *(undefined4 *)((long)puVar1 + 0x54);
  uVar21 = *(undefined4 *)(puVar1 + 0xb);
  uVar22 = *(undefined4 *)((long)puVar1 + 0x5c);
  uVar23 = *(undefined4 *)(puVar1 + 0xc);
  uVar24 = *(undefined4 *)((long)puVar1 + 100);
  uVar25 = *(undefined4 *)(puVar1 + 0xd);
  uVar26 = *(undefined4 *)((long)puVar1 + 0x6c);
  puVar1[4] = param_4[4];
  puVar1[5] = uVar30;
  uVar30 = param_4[9];
  puVar1[8] = param_4[8];
  puVar1[9] = uVar30;
  uVar27 = *(undefined4 *)((long)param_4 + 0x54);
  uVar28 = *(undefined4 *)(param_4 + 0xb);
  uVar29 = *(undefined4 *)((long)param_4 + 0x5c);
  *(undefined4 *)(puVar1 + 10) = *(undefined4 *)(param_4 + 10);
  *(undefined4 *)((long)puVar1 + 0x54) = uVar27;
  *(undefined4 *)(puVar1 + 0xb) = uVar28;
  *(undefined4 *)((long)puVar1 + 0x5c) = uVar29;
  uVar27 = *(undefined4 *)((long)param_4 + 100);
  uVar28 = *(undefined4 *)(param_4 + 0xd);
  uVar29 = *(undefined4 *)((long)param_4 + 0x6c);
  *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(param_4 + 0xc);
  *(undefined4 *)((long)puVar1 + 100) = uVar27;
  *(undefined4 *)(puVar1 + 0xd) = uVar28;
  *(undefined4 *)((long)puVar1 + 0x6c) = uVar29;
  local_28 = *(undefined8 *)(param_2 + 0x40);
  if (*piVar2 == -1) {
    *piVar2 = param_5;
  }
  local_38 = param_3;
  local_30 = piVar2;
  (**(code **)(param_3 + 0x98))(param_1,param_3 + 0x58,puVar1,&local_38);
  *piVar2 = -1;
  *(undefined4 *)puVar1 = uVar3;
  *(undefined4 *)((long)puVar1 + 4) = uVar4;
  *(undefined4 *)(puVar1 + 1) = uVar5;
  *(undefined4 *)((long)puVar1 + 0xc) = uVar6;
  *(undefined4 *)(puVar1 + 2) = uVar7;
  *(undefined4 *)((long)puVar1 + 0x14) = uVar8;
  *(undefined4 *)(puVar1 + 3) = uVar9;
  *(undefined4 *)((long)puVar1 + 0x1c) = uVar10;
  *(undefined4 *)(puVar1 + 4) = uVar11;
  *(undefined4 *)((long)puVar1 + 0x24) = uVar12;
  *(undefined4 *)(puVar1 + 5) = uVar13;
  *(undefined4 *)((long)puVar1 + 0x2c) = uVar14;
  *(undefined4 *)(puVar1 + 8) = uVar15;
  *(undefined4 *)((long)puVar1 + 0x44) = uVar16;
  *(undefined4 *)(puVar1 + 9) = uVar17;
  *(undefined4 *)((long)puVar1 + 0x4c) = uVar18;
  *(undefined4 *)(puVar1 + 10) = uVar19;
  *(undefined4 *)((long)puVar1 + 0x54) = uVar20;
  *(undefined4 *)(puVar1 + 0xb) = uVar21;
  *(undefined4 *)((long)puVar1 + 0x5c) = uVar22;
  *(undefined4 *)(puVar1 + 0xc) = uVar23;
  *(undefined4 *)((long)puVar1 + 100) = uVar24;
  *(undefined4 *)(puVar1 + 0xd) = uVar25;
  *(undefined4 *)((long)puVar1 + 0x6c) = uVar26;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcForwardIntersect4(void)

{
  rtcForwardIntersect4Ex();
  return;
}



void rtcIntersect8(int *param_1,long param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_d8;
  undefined4 *local_d0;
  undefined8 *local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == (undefined8 *)0x0) {
    param_4 = &local_b8;
    local_b0 = 0;
    local_b8 = 0xffffffff00000000;
    local_a8 = 0;
    local_a0 = 0;
  }
  else {
    local_d0 = (undefined4 *)param_4[1];
    if (local_d0 != (undefined4 *)0x0) goto LAB_0010159b;
  }
  local_8c = 0xffffffff;
  local_d0 = &local_8c;
LAB_0010159b:
  local_d8 = param_2;
  local_c8 = param_4;
  if (*(long *)(param_2 + 0xf0) == 0) {
    puVar1 = param_3 + 8;
    do {
      if (*param_1 != 0) {
        local_88 = *param_3;
        local_64 = param_3[0x48];
        local_84 = param_3[8];
        local_60 = param_3[0x50];
        local_80 = param_3[0x10];
        local_5c = param_3[0x58];
        local_7c = param_3[0x18];
        local_78 = param_3[0x20];
        local_74 = param_3[0x28];
        local_70 = param_3[0x30];
        local_68 = param_3[0x40];
        local_6c = param_3[0x38];
        local_58 = param_3[0x60];
        local_54 = param_3[0x68];
        local_50 = param_3[0x70];
        local_4c = param_3[0x78];
        local_48 = param_3[0x80];
        local_44 = param_3[0x88];
        local_40 = param_3[0x90];
        local_3c = param_3[0x98];
        (**(code **)(param_2 + 0x78))(param_2 + 0x58,&local_88,&local_d8);
        *param_3 = local_88;
        param_3[0x48] = local_64;
        param_3[8] = local_84;
        param_3[0x50] = local_60;
        param_3[0x10] = local_80;
        param_3[0x58] = local_5c;
        param_3[0x18] = local_7c;
        param_3[0x20] = local_78;
        param_3[0x28] = local_74;
        param_3[0x30] = local_70;
        param_3[0x38] = local_6c;
        param_3[0x40] = local_68;
        param_3[0x60] = local_58;
        param_3[0x68] = local_54;
        param_3[0x70] = local_50;
        param_3[0x78] = local_4c;
        param_3[0x88] = local_44;
        param_3[0x80] = local_48;
        param_3[0x90] = local_40;
        param_3[0x98] = local_3c;
      }
      param_3 = param_3 + 1;
      param_1 = param_1 + 1;
    } while (param_3 != puVar1);
  }
  else {
    (**(code **)(param_2 + 0xe0))(param_1,param_2 + 0x58,param_3,&local_d8);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void rtcForwardIntersect8Ex
               (undefined8 param_1,long param_2,long param_3,undefined8 *param_4,int param_5)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  long in_FS_OFFSET;
  long local_38;
  int *local_30;
  undefined8 local_28;
  long local_20;
  
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  uVar35 = param_4[1];
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = *(int **)(param_2 + 0x18);
  uVar36 = *puVar1;
  uVar37 = puVar1[1];
  *puVar1 = *param_4;
  puVar1[1] = uVar35;
  uVar35 = param_4[3];
  uVar38 = puVar1[2];
  uVar39 = puVar1[3];
  uVar40 = puVar1[4];
  uVar41 = puVar1[5];
  puVar1[2] = param_4[2];
  puVar1[3] = uVar35;
  uVar35 = param_4[5];
  uVar42 = puVar1[6];
  uVar43 = puVar1[7];
  uVar3 = *(undefined4 *)(puVar1 + 8);
  uVar4 = *(undefined4 *)((long)puVar1 + 0x44);
  uVar5 = *(undefined4 *)(puVar1 + 9);
  uVar6 = *(undefined4 *)((long)puVar1 + 0x4c);
  uVar7 = *(undefined4 *)(puVar1 + 10);
  uVar8 = *(undefined4 *)((long)puVar1 + 0x54);
  uVar9 = *(undefined4 *)(puVar1 + 0xb);
  uVar10 = *(undefined4 *)((long)puVar1 + 0x5c);
  puVar1[4] = param_4[4];
  puVar1[5] = uVar35;
  uVar35 = param_4[7];
  uVar11 = *(undefined4 *)(puVar1 + 0x10);
  uVar12 = *(undefined4 *)((long)puVar1 + 0x84);
  uVar13 = *(undefined4 *)(puVar1 + 0x11);
  uVar14 = *(undefined4 *)((long)puVar1 + 0x8c);
  uVar15 = *(undefined4 *)(puVar1 + 0x12);
  uVar16 = *(undefined4 *)((long)puVar1 + 0x94);
  uVar17 = *(undefined4 *)(puVar1 + 0x13);
  uVar18 = *(undefined4 *)((long)puVar1 + 0x9c);
  uVar19 = *(undefined4 *)(puVar1 + 0x14);
  uVar20 = *(undefined4 *)((long)puVar1 + 0xa4);
  uVar21 = *(undefined4 *)(puVar1 + 0x15);
  uVar22 = *(undefined4 *)((long)puVar1 + 0xac);
  puVar1[6] = param_4[6];
  puVar1[7] = uVar35;
  uVar35 = param_4[9];
  uVar23 = *(undefined4 *)(puVar1 + 0x16);
  uVar24 = *(undefined4 *)((long)puVar1 + 0xb4);
  uVar25 = *(undefined4 *)(puVar1 + 0x17);
  uVar26 = *(undefined4 *)((long)puVar1 + 0xbc);
  uVar27 = *(undefined4 *)(puVar1 + 0x18);
  uVar28 = *(undefined4 *)((long)puVar1 + 0xc4);
  uVar29 = *(undefined4 *)(puVar1 + 0x19);
  uVar30 = *(undefined4 *)((long)puVar1 + 0xcc);
  uVar31 = *(undefined4 *)(puVar1 + 0x1a);
  uVar32 = *(undefined4 *)((long)puVar1 + 0xd4);
  uVar33 = *(undefined4 *)(puVar1 + 0x1b);
  uVar34 = *(undefined4 *)((long)puVar1 + 0xdc);
  puVar1[8] = param_4[8];
  puVar1[9] = uVar35;
  uVar35 = param_4[0xb];
  puVar1[10] = param_4[10];
  puVar1[0xb] = uVar35;
  uVar35 = param_4[0x11];
  puVar1[0x10] = param_4[0x10];
  puVar1[0x11] = uVar35;
  uVar35 = param_4[0x13];
  puVar1[0x12] = param_4[0x12];
  puVar1[0x13] = uVar35;
  uVar35 = param_4[0x15];
  puVar1[0x14] = param_4[0x14];
  puVar1[0x15] = uVar35;
  uVar35 = param_4[0x17];
  puVar1[0x16] = param_4[0x16];
  puVar1[0x17] = uVar35;
  uVar35 = param_4[0x19];
  puVar1[0x18] = param_4[0x18];
  puVar1[0x19] = uVar35;
  uVar35 = param_4[0x1b];
  puVar1[0x1a] = param_4[0x1a];
  puVar1[0x1b] = uVar35;
  local_28 = *(undefined8 *)(param_2 + 0x40);
  if (*piVar2 == -1) {
    *piVar2 = param_5;
  }
  local_38 = param_3;
  local_30 = piVar2;
  (**(code **)(param_3 + 0xe0))(param_1,param_3 + 0x58,puVar1,&local_38);
  *piVar2 = -1;
  *puVar1 = uVar36;
  puVar1[1] = uVar37;
  puVar1[2] = uVar38;
  puVar1[3] = uVar39;
  puVar1[4] = uVar40;
  puVar1[5] = uVar41;
  puVar1[6] = uVar42;
  puVar1[7] = uVar43;
  *(undefined4 *)(puVar1 + 8) = uVar3;
  *(undefined4 *)((long)puVar1 + 0x44) = uVar4;
  *(undefined4 *)(puVar1 + 9) = uVar5;
  *(undefined4 *)((long)puVar1 + 0x4c) = uVar6;
  *(undefined4 *)(puVar1 + 10) = uVar7;
  *(undefined4 *)((long)puVar1 + 0x54) = uVar8;
  *(undefined4 *)(puVar1 + 0xb) = uVar9;
  *(undefined4 *)((long)puVar1 + 0x5c) = uVar10;
  *(undefined4 *)(puVar1 + 0x10) = uVar11;
  *(undefined4 *)((long)puVar1 + 0x84) = uVar12;
  *(undefined4 *)(puVar1 + 0x11) = uVar13;
  *(undefined4 *)((long)puVar1 + 0x8c) = uVar14;
  *(undefined4 *)(puVar1 + 0x12) = uVar15;
  *(undefined4 *)((long)puVar1 + 0x94) = uVar16;
  *(undefined4 *)(puVar1 + 0x13) = uVar17;
  *(undefined4 *)((long)puVar1 + 0x9c) = uVar18;
  *(undefined4 *)(puVar1 + 0x14) = uVar19;
  *(undefined4 *)((long)puVar1 + 0xa4) = uVar20;
  *(undefined4 *)(puVar1 + 0x15) = uVar21;
  *(undefined4 *)((long)puVar1 + 0xac) = uVar22;
  *(undefined4 *)(puVar1 + 0x16) = uVar23;
  *(undefined4 *)((long)puVar1 + 0xb4) = uVar24;
  *(undefined4 *)(puVar1 + 0x17) = uVar25;
  *(undefined4 *)((long)puVar1 + 0xbc) = uVar26;
  *(undefined4 *)(puVar1 + 0x18) = uVar27;
  *(undefined4 *)((long)puVar1 + 0xc4) = uVar28;
  *(undefined4 *)(puVar1 + 0x19) = uVar29;
  *(undefined4 *)((long)puVar1 + 0xcc) = uVar30;
  *(undefined4 *)(puVar1 + 0x1a) = uVar31;
  *(undefined4 *)((long)puVar1 + 0xd4) = uVar32;
  *(undefined4 *)(puVar1 + 0x1b) = uVar33;
  *(undefined4 *)((long)puVar1 + 0xdc) = uVar34;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcForwardIntersect8(void)

{
  rtcForwardIntersect8Ex();
  return;
}



void rtcIntersect16(int *param_1,long param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_d8;
  undefined4 *local_d0;
  undefined8 *local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == (undefined8 *)0x0) {
    param_4 = &local_b8;
    local_b0 = 0;
    local_b8 = 0xffffffff00000000;
    local_a8 = 0;
    local_a0 = 0;
  }
  else {
    local_d0 = (undefined4 *)param_4[1];
    if (local_d0 != (undefined4 *)0x0) goto LAB_00101b3b;
  }
  local_8c = 0xffffffff;
  local_d0 = &local_8c;
LAB_00101b3b:
  local_d8 = param_2;
  local_c8 = param_4;
  if (*(long *)(param_2 + 0x138) == 0) {
    puVar1 = param_3 + 0x10;
    do {
      if (*param_1 != 0) {
        local_88 = *param_3;
        local_64 = param_3[0x90];
        local_84 = param_3[0x10];
        local_60 = param_3[0xa0];
        local_80 = param_3[0x20];
        local_5c = param_3[0xb0];
        local_7c = param_3[0x30];
        local_78 = param_3[0x40];
        local_74 = param_3[0x50];
        local_70 = param_3[0x60];
        local_68 = param_3[0x80];
        local_6c = param_3[0x70];
        local_58 = param_3[0xc0];
        local_54 = param_3[0xd0];
        local_50 = param_3[0xe0];
        local_4c = param_3[0xf0];
        local_48 = param_3[0x100];
        local_44 = param_3[0x110];
        local_40 = param_3[0x120];
        local_3c = param_3[0x130];
        (**(code **)(param_2 + 0x78))(param_2 + 0x58,&local_88,&local_d8);
        *param_3 = local_88;
        param_3[0x90] = local_64;
        param_3[0x10] = local_84;
        param_3[0xa0] = local_60;
        param_3[0x20] = local_80;
        param_3[0xb0] = local_5c;
        param_3[0x30] = local_7c;
        param_3[0x40] = local_78;
        param_3[0x50] = local_74;
        param_3[0x60] = local_70;
        param_3[0x70] = local_6c;
        param_3[0x80] = local_68;
        param_3[0xc0] = local_58;
        param_3[0xd0] = local_54;
        param_3[0xe0] = local_50;
        param_3[0xf0] = local_4c;
        param_3[0x110] = local_44;
        param_3[0x100] = local_48;
        param_3[0x120] = local_40;
        param_3[0x130] = local_3c;
      }
      param_3 = param_3 + 1;
      param_1 = param_1 + 1;
    } while (param_3 != puVar1);
  }
  else {
    (**(code **)(param_2 + 0x128))(param_1,param_2 + 0x58,param_3,&local_d8);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void rtcForwardIntersect16Ex
               (undefined8 param_1,long param_2,long param_3,undefined8 *param_4,int param_5)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  long in_FS_OFFSET;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  long local_38;
  int *local_30;
  undefined8 local_28;
  long local_20;
  
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  piVar2 = *(int **)(param_2 + 0x18);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = puVar1[0x26];
  uVar7 = puVar1[0x27];
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  uVar12 = puVar1[4];
  uVar13 = puVar1[5];
  uVar14 = puVar1[6];
  uVar15 = puVar1[7];
  uVar16 = puVar1[8];
  uVar17 = puVar1[9];
  uVar18 = puVar1[0x28];
  uVar19 = puVar1[0x29];
  uVar20 = puVar1[10];
  uVar21 = puVar1[0xb];
  uVar22 = puVar1[0xc];
  uVar23 = puVar1[0xd];
  uVar24 = puVar1[0xe];
  uVar25 = puVar1[0xf];
  uVar26 = puVar1[0x2a];
  uVar27 = puVar1[0x2b];
  uVar43 = puVar1[0x10];
  uVar44 = puVar1[0x11];
  uVar45 = puVar1[0x12];
  uVar46 = puVar1[0x13];
  uVar47 = puVar1[0x14];
  uVar48 = puVar1[0x15];
  uVar28 = puVar1[0x2c];
  uVar29 = puVar1[0x2d];
  uVar49 = puVar1[0x16];
  uVar50 = puVar1[0x17];
  uVar51 = puVar1[0x20];
  uVar52 = puVar1[0x21];
  uVar41 = puVar1[0x22];
  uVar42 = puVar1[0x23];
  uVar53 = puVar1[0x24];
  uVar54 = puVar1[0x25];
  uVar30 = puVar1[0x2e];
  uVar31 = puVar1[0x2f];
  uVar32 = puVar1[0x30];
  uVar33 = puVar1[0x31];
  uVar34 = puVar1[0x32];
  uVar35 = puVar1[0x33];
  uVar36 = puVar1[0x34];
  uVar37 = puVar1[0x35];
  uVar38 = puVar1[0x36];
  uVar39 = puVar1[0x37];
  uVar40 = param_4[1];
  *puVar1 = *param_4;
  puVar1[1] = uVar40;
  uVar40 = param_4[3];
  puVar1[2] = param_4[2];
  puVar1[3] = uVar40;
  uVar40 = param_4[5];
  puVar1[4] = param_4[4];
  puVar1[5] = uVar40;
  uVar40 = param_4[7];
  puVar1[6] = param_4[6];
  puVar1[7] = uVar40;
  uVar40 = param_4[9];
  puVar1[8] = param_4[8];
  puVar1[9] = uVar40;
  uVar40 = param_4[0xb];
  puVar1[10] = param_4[10];
  puVar1[0xb] = uVar40;
  uVar40 = param_4[0xd];
  puVar1[0xc] = param_4[0xc];
  puVar1[0xd] = uVar40;
  uVar40 = param_4[0xf];
  puVar1[0xe] = param_4[0xe];
  puVar1[0xf] = uVar40;
  uVar40 = param_4[0x11];
  puVar1[0x10] = param_4[0x10];
  puVar1[0x11] = uVar40;
  uVar40 = param_4[0x13];
  puVar1[0x12] = param_4[0x12];
  puVar1[0x13] = uVar40;
  uVar40 = param_4[0x15];
  puVar1[0x14] = param_4[0x14];
  puVar1[0x15] = uVar40;
  uVar40 = param_4[0x17];
  puVar1[0x16] = param_4[0x16];
  puVar1[0x17] = uVar40;
  uVar40 = param_4[0x21];
  puVar1[0x20] = param_4[0x20];
  puVar1[0x21] = uVar40;
  uVar40 = param_4[0x23];
  puVar1[0x22] = param_4[0x22];
  puVar1[0x23] = uVar40;
  uVar40 = param_4[0x25];
  puVar1[0x24] = param_4[0x24];
  puVar1[0x25] = uVar40;
  uVar40 = param_4[0x27];
  puVar1[0x26] = param_4[0x26];
  puVar1[0x27] = uVar40;
  uVar40 = param_4[0x29];
  puVar1[0x28] = param_4[0x28];
  puVar1[0x29] = uVar40;
  uVar40 = param_4[0x2b];
  puVar1[0x2a] = param_4[0x2a];
  puVar1[0x2b] = uVar40;
  uVar40 = param_4[0x2d];
  puVar1[0x2c] = param_4[0x2c];
  puVar1[0x2d] = uVar40;
  uVar40 = param_4[0x2f];
  puVar1[0x2e] = param_4[0x2e];
  puVar1[0x2f] = uVar40;
  uVar40 = param_4[0x31];
  puVar1[0x30] = param_4[0x30];
  puVar1[0x31] = uVar40;
  uVar40 = param_4[0x33];
  puVar1[0x32] = param_4[0x32];
  puVar1[0x33] = uVar40;
  uVar40 = param_4[0x35];
  puVar1[0x34] = param_4[0x34];
  puVar1[0x35] = uVar40;
  uVar3 = *(undefined4 *)((long)param_4 + 0x1b4);
  uVar4 = *(undefined4 *)(param_4 + 0x37);
  uVar5 = *(undefined4 *)((long)param_4 + 0x1bc);
  *(undefined4 *)(puVar1 + 0x36) = *(undefined4 *)(param_4 + 0x36);
  *(undefined4 *)((long)puVar1 + 0x1b4) = uVar3;
  *(undefined4 *)(puVar1 + 0x37) = uVar4;
  *(undefined4 *)((long)puVar1 + 0x1bc) = uVar5;
  local_28 = *(undefined8 *)(param_2 + 0x40);
  if (*piVar2 == -1) {
    *piVar2 = param_5;
  }
  local_38 = param_3;
  local_30 = piVar2;
  (**(code **)(param_3 + 0x128))(param_1,param_3 + 0x58,puVar1,&local_38);
  *piVar2 = -1;
  puVar1[0x22] = uVar41;
  puVar1[0x23] = uVar42;
  puVar1[0x10] = uVar43;
  puVar1[0x11] = uVar44;
  puVar1[0x12] = uVar45;
  puVar1[0x13] = uVar46;
  puVar1[0x14] = uVar47;
  puVar1[0x15] = uVar48;
  puVar1[0x16] = uVar49;
  puVar1[0x17] = uVar50;
  puVar1[0x20] = uVar51;
  puVar1[0x21] = uVar52;
  puVar1[0x24] = uVar53;
  puVar1[0x25] = uVar54;
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  puVar1[4] = uVar12;
  puVar1[5] = uVar13;
  puVar1[6] = uVar14;
  puVar1[7] = uVar15;
  puVar1[8] = uVar16;
  puVar1[9] = uVar17;
  puVar1[10] = uVar20;
  puVar1[0xb] = uVar21;
  puVar1[0xc] = uVar22;
  puVar1[0xd] = uVar23;
  puVar1[0xe] = uVar24;
  puVar1[0xf] = uVar25;
  puVar1[0x26] = uVar6;
  puVar1[0x27] = uVar7;
  local_198 = (undefined4)uVar26;
  uStack_194 = (undefined4)((ulong)uVar26 >> 0x20);
  uStack_190 = (undefined4)uVar27;
  uStack_18c = (undefined4)((ulong)uVar27 >> 0x20);
  local_188 = (undefined4)uVar28;
  uStack_184 = (undefined4)((ulong)uVar28 >> 0x20);
  uStack_180 = (undefined4)uVar29;
  uStack_17c = (undefined4)((ulong)uVar29 >> 0x20);
  local_178 = (undefined4)uVar30;
  uStack_174 = (undefined4)((ulong)uVar30 >> 0x20);
  uStack_170 = (undefined4)uVar31;
  uStack_16c = (undefined4)((ulong)uVar31 >> 0x20);
  local_168 = (undefined4)uVar32;
  uStack_164 = (undefined4)((ulong)uVar32 >> 0x20);
  uStack_160 = (undefined4)uVar33;
  uStack_15c = (undefined4)((ulong)uVar33 >> 0x20);
  local_158 = (undefined4)uVar34;
  uStack_154 = (undefined4)((ulong)uVar34 >> 0x20);
  uStack_150 = (undefined4)uVar35;
  uStack_14c = (undefined4)((ulong)uVar35 >> 0x20);
  puVar1[0x28] = uVar18;
  puVar1[0x29] = uVar19;
  local_148 = (undefined4)uVar36;
  uStack_144 = (undefined4)((ulong)uVar36 >> 0x20);
  uStack_140 = (undefined4)uVar37;
  uStack_13c = (undefined4)((ulong)uVar37 >> 0x20);
  local_138 = (undefined4)uVar38;
  uStack_134 = (undefined4)((ulong)uVar38 >> 0x20);
  uStack_130 = (undefined4)uVar39;
  uStack_12c = (undefined4)((ulong)uVar39 >> 0x20);
  *(undefined4 *)(puVar1 + 0x2a) = local_198;
  *(undefined4 *)((long)puVar1 + 0x154) = uStack_194;
  *(undefined4 *)(puVar1 + 0x2b) = uStack_190;
  *(undefined4 *)((long)puVar1 + 0x15c) = uStack_18c;
  *(undefined4 *)(puVar1 + 0x2c) = local_188;
  *(undefined4 *)((long)puVar1 + 0x164) = uStack_184;
  *(undefined4 *)(puVar1 + 0x2d) = uStack_180;
  *(undefined4 *)((long)puVar1 + 0x16c) = uStack_17c;
  *(undefined4 *)(puVar1 + 0x2e) = local_178;
  *(undefined4 *)((long)puVar1 + 0x174) = uStack_174;
  *(undefined4 *)(puVar1 + 0x2f) = uStack_170;
  *(undefined4 *)((long)puVar1 + 0x17c) = uStack_16c;
  *(undefined4 *)(puVar1 + 0x30) = local_168;
  *(undefined4 *)((long)puVar1 + 0x184) = uStack_164;
  *(undefined4 *)(puVar1 + 0x31) = uStack_160;
  *(undefined4 *)((long)puVar1 + 0x18c) = uStack_15c;
  *(undefined4 *)(puVar1 + 0x32) = local_158;
  *(undefined4 *)((long)puVar1 + 0x194) = uStack_154;
  *(undefined4 *)(puVar1 + 0x33) = uStack_150;
  *(undefined4 *)((long)puVar1 + 0x19c) = uStack_14c;
  *(undefined4 *)(puVar1 + 0x34) = local_148;
  *(undefined4 *)((long)puVar1 + 0x1a4) = uStack_144;
  *(undefined4 *)(puVar1 + 0x35) = uStack_140;
  *(undefined4 *)((long)puVar1 + 0x1ac) = uStack_13c;
  *(undefined4 *)(puVar1 + 0x36) = local_138;
  *(undefined4 *)((long)puVar1 + 0x1b4) = uStack_134;
  *(undefined4 *)(puVar1 + 0x37) = uStack_130;
  *(undefined4 *)((long)puVar1 + 0x1bc) = uStack_12c;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcForwardIntersect16(void)

{
  rtcForwardIntersect16Ex();
  return;
}



void rtcOccluded1(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long in_FS_OFFSET;
  long local_58;
  undefined4 *local_50;
  undefined8 *local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (undefined8 *)0x0) {
    param_3 = &local_38;
    local_30 = 0;
    local_38 = 0xffffffff00000000;
    local_28 = 0;
    local_20 = 0;
  }
  else {
    local_50 = (undefined4 *)param_3[1];
    if (local_50 != (undefined4 *)0x0) goto LAB_001022b9;
  }
  local_14 = 0xffffffff;
  local_50 = &local_14;
LAB_001022b9:
  local_58 = param_1;
  local_48 = param_3;
  (**(code **)(param_1 + 0x80))(param_1 + 0x58,param_2,&local_58);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcForwardOccluded1(long param_1,long param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long in_FS_OFFSET;
  long local_38;
  int *local_30;
  undefined8 local_28;
  long local_20;
  
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = *(int **)(param_1 + 0x18);
  uVar6 = *puVar1;
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  uVar9 = puVar1[3];
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  uVar3 = param_3[5];
  uVar4 = param_3[6];
  uVar5 = param_3[7];
  uVar10 = puVar1[4];
  uVar11 = puVar1[5];
  uVar12 = puVar1[6];
  uVar13 = puVar1[7];
  puVar1[4] = param_3[4];
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  puVar1[7] = uVar5;
  local_28 = *(undefined8 *)(param_1 + 0x40);
  if (*piVar2 == -1) {
    *piVar2 = param_4;
  }
  local_38 = param_2;
  local_30 = piVar2;
  (**(code **)(param_2 + 0x80))(param_2 + 0x58,puVar1,&local_38);
  *piVar2 = -1;
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  puVar1[4] = uVar10;
  puVar1[5] = uVar11;
  puVar1[6] = uVar12;
  puVar1[7] = uVar13;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcForwardOccluded1Ex(long param_1,long param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long in_FS_OFFSET;
  long local_38;
  int *local_30;
  undefined8 local_28;
  long local_20;
  
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = *(int **)(param_1 + 0x18);
  uVar6 = *puVar1;
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  uVar9 = puVar1[3];
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  uVar3 = param_3[5];
  uVar4 = param_3[6];
  uVar5 = param_3[7];
  uVar10 = puVar1[4];
  uVar11 = puVar1[5];
  uVar12 = puVar1[6];
  uVar13 = puVar1[7];
  puVar1[4] = param_3[4];
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  puVar1[7] = uVar5;
  local_28 = *(undefined8 *)(param_1 + 0x40);
  if (*piVar2 == -1) {
    *piVar2 = param_4;
  }
  local_38 = param_2;
  local_30 = piVar2;
  (**(code **)(param_2 + 0x80))(param_2 + 0x58,puVar1,&local_38);
  *piVar2 = -1;
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  puVar1[4] = uVar10;
  puVar1[5] = uVar11;
  puVar1[6] = uVar12;
  puVar1[7] = uVar13;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcOccluded4(long param_1,long param_2,undefined4 *param_3,undefined8 *param_4)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_d8;
  undefined4 *local_d0;
  undefined8 *local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == (undefined8 *)0x0) {
    param_4 = &local_b8;
    local_b0 = 0;
    local_b8 = 0xffffffff00000000;
    local_a8 = 0;
    local_a0 = 0;
  }
  else {
    local_d0 = (undefined4 *)param_4[1];
    if (local_d0 != (undefined4 *)0x0) goto LAB_001024de;
  }
  local_8c = 0xffffffff;
  local_d0 = &local_8c;
LAB_001024de:
  local_d8 = param_2;
  local_c8 = param_4;
  if (*(long *)(param_2 + 0xa8) == 0) {
    lVar1 = 0;
    do {
      if (*(int *)(param_1 + lVar1 * 4) != 0) {
        local_88 = *param_3;
        local_64 = param_3[0x24];
        local_84 = param_3[4];
        local_60 = param_3[0x28];
        local_80 = param_3[8];
        local_5c = param_3[0x2c];
        local_7c = param_3[0xc];
        local_78 = param_3[0x10];
        local_74 = param_3[0x14];
        local_70 = param_3[0x18];
        local_68 = param_3[0x20];
        local_6c = param_3[0x1c];
        local_58 = param_3[0x30];
        local_54 = param_3[0x34];
        local_50 = param_3[0x38];
        local_4c = param_3[0x3c];
        local_48 = param_3[0x40];
        local_44 = param_3[0x44];
        local_40 = param_3[0x48];
        local_3c = param_3[0x4c];
        (**(code **)(param_2 + 0x80))(param_2 + 0x58,&local_88,&local_d8);
        param_3[0x48] = local_40;
      }
      lVar1 = lVar1 + 1;
      param_3 = param_3 + 1;
    } while (lVar1 != 4);
  }
  else {
    (**(code **)(param_2 + 0xa0))(param_1,param_2 + 0x58,param_3,&local_d8);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void rtcForwardOccluded4Ex
               (undefined8 param_1,long param_2,long param_3,undefined8 *param_4,int param_5)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  long in_FS_OFFSET;
  long local_38;
  int *local_30;
  undefined8 local_28;
  long local_20;
  
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  uVar30 = param_4[1];
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = *(int **)(param_2 + 0x18);
  uVar3 = *(undefined4 *)puVar1;
  uVar4 = *(undefined4 *)((long)puVar1 + 4);
  uVar5 = *(undefined4 *)(puVar1 + 1);
  uVar6 = *(undefined4 *)((long)puVar1 + 0xc);
  *puVar1 = *param_4;
  puVar1[1] = uVar30;
  uVar30 = param_4[3];
  uVar7 = *(undefined4 *)(puVar1 + 2);
  uVar8 = *(undefined4 *)((long)puVar1 + 0x14);
  uVar9 = *(undefined4 *)(puVar1 + 3);
  uVar10 = *(undefined4 *)((long)puVar1 + 0x1c);
  uVar11 = *(undefined4 *)(puVar1 + 4);
  uVar12 = *(undefined4 *)((long)puVar1 + 0x24);
  uVar13 = *(undefined4 *)(puVar1 + 5);
  uVar14 = *(undefined4 *)((long)puVar1 + 0x2c);
  puVar1[2] = param_4[2];
  puVar1[3] = uVar30;
  uVar30 = param_4[5];
  uVar15 = *(undefined4 *)(puVar1 + 8);
  uVar16 = *(undefined4 *)((long)puVar1 + 0x44);
  uVar17 = *(undefined4 *)(puVar1 + 9);
  uVar18 = *(undefined4 *)((long)puVar1 + 0x4c);
  uVar19 = *(undefined4 *)(puVar1 + 10);
  uVar20 = *(undefined4 *)((long)puVar1 + 0x54);
  uVar21 = *(undefined4 *)(puVar1 + 0xb);
  uVar22 = *(undefined4 *)((long)puVar1 + 0x5c);
  uVar23 = *(undefined4 *)(puVar1 + 0xc);
  uVar24 = *(undefined4 *)((long)puVar1 + 100);
  uVar25 = *(undefined4 *)(puVar1 + 0xd);
  uVar26 = *(undefined4 *)((long)puVar1 + 0x6c);
  puVar1[4] = param_4[4];
  puVar1[5] = uVar30;
  uVar30 = param_4[9];
  puVar1[8] = param_4[8];
  puVar1[9] = uVar30;
  uVar27 = *(undefined4 *)((long)param_4 + 0x54);
  uVar28 = *(undefined4 *)(param_4 + 0xb);
  uVar29 = *(undefined4 *)((long)param_4 + 0x5c);
  *(undefined4 *)(puVar1 + 10) = *(undefined4 *)(param_4 + 10);
  *(undefined4 *)((long)puVar1 + 0x54) = uVar27;
  *(undefined4 *)(puVar1 + 0xb) = uVar28;
  *(undefined4 *)((long)puVar1 + 0x5c) = uVar29;
  uVar27 = *(undefined4 *)((long)param_4 + 100);
  uVar28 = *(undefined4 *)(param_4 + 0xd);
  uVar29 = *(undefined4 *)((long)param_4 + 0x6c);
  *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(param_4 + 0xc);
  *(undefined4 *)((long)puVar1 + 100) = uVar27;
  *(undefined4 *)(puVar1 + 0xd) = uVar28;
  *(undefined4 *)((long)puVar1 + 0x6c) = uVar29;
  local_28 = *(undefined8 *)(param_2 + 0x40);
  if (*piVar2 == -1) {
    *piVar2 = param_5;
  }
  local_38 = param_3;
  local_30 = piVar2;
  (**(code **)(param_3 + 0xa0))(param_1,param_3 + 0x58,puVar1,&local_38);
  *piVar2 = -1;
  *(undefined4 *)puVar1 = uVar3;
  *(undefined4 *)((long)puVar1 + 4) = uVar4;
  *(undefined4 *)(puVar1 + 1) = uVar5;
  *(undefined4 *)((long)puVar1 + 0xc) = uVar6;
  *(undefined4 *)(puVar1 + 2) = uVar7;
  *(undefined4 *)((long)puVar1 + 0x14) = uVar8;
  *(undefined4 *)(puVar1 + 3) = uVar9;
  *(undefined4 *)((long)puVar1 + 0x1c) = uVar10;
  *(undefined4 *)(puVar1 + 4) = uVar11;
  *(undefined4 *)((long)puVar1 + 0x24) = uVar12;
  *(undefined4 *)(puVar1 + 5) = uVar13;
  *(undefined4 *)((long)puVar1 + 0x2c) = uVar14;
  *(undefined4 *)(puVar1 + 8) = uVar15;
  *(undefined4 *)((long)puVar1 + 0x44) = uVar16;
  *(undefined4 *)(puVar1 + 9) = uVar17;
  *(undefined4 *)((long)puVar1 + 0x4c) = uVar18;
  *(undefined4 *)(puVar1 + 10) = uVar19;
  *(undefined4 *)((long)puVar1 + 0x54) = uVar20;
  *(undefined4 *)(puVar1 + 0xb) = uVar21;
  *(undefined4 *)((long)puVar1 + 0x5c) = uVar22;
  *(undefined4 *)(puVar1 + 0xc) = uVar23;
  *(undefined4 *)((long)puVar1 + 100) = uVar24;
  *(undefined4 *)(puVar1 + 0xd) = uVar25;
  *(undefined4 *)((long)puVar1 + 0x6c) = uVar26;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcForwardOccluded4(void)

{
  rtcForwardOccluded4Ex();
  return;
}



void rtcOccluded8(int *param_1,long param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_d8;
  undefined4 *local_d0;
  undefined8 *local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == (undefined8 *)0x0) {
    param_4 = &local_b8;
    local_b0 = 0;
    local_b8 = 0xffffffff00000000;
    local_a8 = 0;
    local_a0 = 0;
  }
  else {
    local_d0 = (undefined4 *)param_4[1];
    if (local_d0 != (undefined4 *)0x0) goto LAB_0010283b;
  }
  local_8c = 0xffffffff;
  local_d0 = &local_8c;
LAB_0010283b:
  local_d8 = param_2;
  local_c8 = param_4;
  if (*(long *)(param_2 + 0xf0) == 0) {
    puVar1 = param_3 + 8;
    do {
      if (*param_1 != 0) {
        local_88 = *param_3;
        local_64 = param_3[0x48];
        local_84 = param_3[8];
        local_60 = param_3[0x50];
        local_80 = param_3[0x10];
        local_5c = param_3[0x58];
        local_7c = param_3[0x18];
        local_78 = param_3[0x20];
        local_74 = param_3[0x28];
        local_70 = param_3[0x30];
        local_68 = param_3[0x40];
        local_6c = param_3[0x38];
        local_58 = param_3[0x60];
        local_54 = param_3[0x68];
        local_50 = param_3[0x70];
        local_4c = param_3[0x78];
        local_48 = param_3[0x80];
        local_44 = param_3[0x88];
        local_40 = param_3[0x90];
        local_3c = param_3[0x98];
        (**(code **)(param_2 + 0x80))(param_2 + 0x58,&local_88,&local_d8);
        *param_3 = local_88;
        param_3[0x48] = local_64;
        param_3[8] = local_84;
        param_3[0x50] = local_60;
        param_3[0x10] = local_80;
        param_3[0x58] = local_5c;
        param_3[0x18] = local_7c;
        param_3[0x20] = local_78;
        param_3[0x28] = local_74;
        param_3[0x30] = local_70;
        param_3[0x38] = local_6c;
        param_3[0x40] = local_68;
        param_3[0x60] = local_58;
        param_3[0x68] = local_54;
        param_3[0x70] = local_50;
        param_3[0x78] = local_4c;
        param_3[0x88] = local_44;
        param_3[0x80] = local_48;
        param_3[0x90] = local_40;
        param_3[0x98] = local_3c;
      }
      param_3 = param_3 + 1;
      param_1 = param_1 + 1;
    } while (param_3 != puVar1);
  }
  else {
    (**(code **)(param_2 + 0xe8))(param_1,param_2 + 0x58,param_3,&local_d8);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void rtcForwardOccluded8Ex
               (undefined8 param_1,long param_2,long param_3,undefined8 *param_4,int param_5)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  long in_FS_OFFSET;
  long local_38;
  int *local_30;
  undefined8 local_28;
  long local_20;
  
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  uVar35 = param_4[1];
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = *(int **)(param_2 + 0x18);
  uVar36 = *puVar1;
  uVar37 = puVar1[1];
  *puVar1 = *param_4;
  puVar1[1] = uVar35;
  uVar35 = param_4[3];
  uVar38 = puVar1[2];
  uVar39 = puVar1[3];
  uVar40 = puVar1[4];
  uVar41 = puVar1[5];
  puVar1[2] = param_4[2];
  puVar1[3] = uVar35;
  uVar35 = param_4[5];
  uVar42 = puVar1[6];
  uVar43 = puVar1[7];
  uVar3 = *(undefined4 *)(puVar1 + 8);
  uVar4 = *(undefined4 *)((long)puVar1 + 0x44);
  uVar5 = *(undefined4 *)(puVar1 + 9);
  uVar6 = *(undefined4 *)((long)puVar1 + 0x4c);
  uVar7 = *(undefined4 *)(puVar1 + 10);
  uVar8 = *(undefined4 *)((long)puVar1 + 0x54);
  uVar9 = *(undefined4 *)(puVar1 + 0xb);
  uVar10 = *(undefined4 *)((long)puVar1 + 0x5c);
  puVar1[4] = param_4[4];
  puVar1[5] = uVar35;
  uVar35 = param_4[7];
  uVar11 = *(undefined4 *)(puVar1 + 0x10);
  uVar12 = *(undefined4 *)((long)puVar1 + 0x84);
  uVar13 = *(undefined4 *)(puVar1 + 0x11);
  uVar14 = *(undefined4 *)((long)puVar1 + 0x8c);
  uVar15 = *(undefined4 *)(puVar1 + 0x12);
  uVar16 = *(undefined4 *)((long)puVar1 + 0x94);
  uVar17 = *(undefined4 *)(puVar1 + 0x13);
  uVar18 = *(undefined4 *)((long)puVar1 + 0x9c);
  uVar19 = *(undefined4 *)(puVar1 + 0x14);
  uVar20 = *(undefined4 *)((long)puVar1 + 0xa4);
  uVar21 = *(undefined4 *)(puVar1 + 0x15);
  uVar22 = *(undefined4 *)((long)puVar1 + 0xac);
  puVar1[6] = param_4[6];
  puVar1[7] = uVar35;
  uVar35 = param_4[9];
  uVar23 = *(undefined4 *)(puVar1 + 0x16);
  uVar24 = *(undefined4 *)((long)puVar1 + 0xb4);
  uVar25 = *(undefined4 *)(puVar1 + 0x17);
  uVar26 = *(undefined4 *)((long)puVar1 + 0xbc);
  uVar27 = *(undefined4 *)(puVar1 + 0x18);
  uVar28 = *(undefined4 *)((long)puVar1 + 0xc4);
  uVar29 = *(undefined4 *)(puVar1 + 0x19);
  uVar30 = *(undefined4 *)((long)puVar1 + 0xcc);
  uVar31 = *(undefined4 *)(puVar1 + 0x1a);
  uVar32 = *(undefined4 *)((long)puVar1 + 0xd4);
  uVar33 = *(undefined4 *)(puVar1 + 0x1b);
  uVar34 = *(undefined4 *)((long)puVar1 + 0xdc);
  puVar1[8] = param_4[8];
  puVar1[9] = uVar35;
  uVar35 = param_4[0xb];
  puVar1[10] = param_4[10];
  puVar1[0xb] = uVar35;
  uVar35 = param_4[0x11];
  puVar1[0x10] = param_4[0x10];
  puVar1[0x11] = uVar35;
  uVar35 = param_4[0x13];
  puVar1[0x12] = param_4[0x12];
  puVar1[0x13] = uVar35;
  uVar35 = param_4[0x15];
  puVar1[0x14] = param_4[0x14];
  puVar1[0x15] = uVar35;
  uVar35 = param_4[0x17];
  puVar1[0x16] = param_4[0x16];
  puVar1[0x17] = uVar35;
  uVar35 = param_4[0x19];
  puVar1[0x18] = param_4[0x18];
  puVar1[0x19] = uVar35;
  uVar35 = param_4[0x1b];
  puVar1[0x1a] = param_4[0x1a];
  puVar1[0x1b] = uVar35;
  local_28 = *(undefined8 *)(param_2 + 0x40);
  if (*piVar2 == -1) {
    *piVar2 = param_5;
  }
  local_38 = param_3;
  local_30 = piVar2;
  (**(code **)(param_3 + 0xe8))(param_1,param_3 + 0x58,puVar1,&local_38);
  *piVar2 = -1;
  *puVar1 = uVar36;
  puVar1[1] = uVar37;
  puVar1[2] = uVar38;
  puVar1[3] = uVar39;
  puVar1[4] = uVar40;
  puVar1[5] = uVar41;
  puVar1[6] = uVar42;
  puVar1[7] = uVar43;
  *(undefined4 *)(puVar1 + 8) = uVar3;
  *(undefined4 *)((long)puVar1 + 0x44) = uVar4;
  *(undefined4 *)(puVar1 + 9) = uVar5;
  *(undefined4 *)((long)puVar1 + 0x4c) = uVar6;
  *(undefined4 *)(puVar1 + 10) = uVar7;
  *(undefined4 *)((long)puVar1 + 0x54) = uVar8;
  *(undefined4 *)(puVar1 + 0xb) = uVar9;
  *(undefined4 *)((long)puVar1 + 0x5c) = uVar10;
  *(undefined4 *)(puVar1 + 0x10) = uVar11;
  *(undefined4 *)((long)puVar1 + 0x84) = uVar12;
  *(undefined4 *)(puVar1 + 0x11) = uVar13;
  *(undefined4 *)((long)puVar1 + 0x8c) = uVar14;
  *(undefined4 *)(puVar1 + 0x12) = uVar15;
  *(undefined4 *)((long)puVar1 + 0x94) = uVar16;
  *(undefined4 *)(puVar1 + 0x13) = uVar17;
  *(undefined4 *)((long)puVar1 + 0x9c) = uVar18;
  *(undefined4 *)(puVar1 + 0x14) = uVar19;
  *(undefined4 *)((long)puVar1 + 0xa4) = uVar20;
  *(undefined4 *)(puVar1 + 0x15) = uVar21;
  *(undefined4 *)((long)puVar1 + 0xac) = uVar22;
  *(undefined4 *)(puVar1 + 0x16) = uVar23;
  *(undefined4 *)((long)puVar1 + 0xb4) = uVar24;
  *(undefined4 *)(puVar1 + 0x17) = uVar25;
  *(undefined4 *)((long)puVar1 + 0xbc) = uVar26;
  *(undefined4 *)(puVar1 + 0x18) = uVar27;
  *(undefined4 *)((long)puVar1 + 0xc4) = uVar28;
  *(undefined4 *)(puVar1 + 0x19) = uVar29;
  *(undefined4 *)((long)puVar1 + 0xcc) = uVar30;
  *(undefined4 *)(puVar1 + 0x1a) = uVar31;
  *(undefined4 *)((long)puVar1 + 0xd4) = uVar32;
  *(undefined4 *)(puVar1 + 0x1b) = uVar33;
  *(undefined4 *)((long)puVar1 + 0xdc) = uVar34;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcForwardOccluded8(void)

{
  rtcForwardOccluded8Ex();
  return;
}



void rtcOccluded16(int *param_1,long param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_d8;
  undefined4 *local_d0;
  undefined8 *local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == (undefined8 *)0x0) {
    param_4 = &local_b8;
    local_b0 = 0;
    local_b8 = 0xffffffff00000000;
    local_a8 = 0;
    local_a0 = 0;
  }
  else {
    local_d0 = (undefined4 *)param_4[1];
    if (local_d0 != (undefined4 *)0x0) goto LAB_00102ddb;
  }
  local_8c = 0xffffffff;
  local_d0 = &local_8c;
LAB_00102ddb:
  local_d8 = param_2;
  local_c8 = param_4;
  if (*(long *)(param_2 + 0x138) == 0) {
    puVar1 = param_3 + 0x10;
    do {
      if (*param_1 != 0) {
        local_88 = *param_3;
        local_64 = param_3[0x90];
        local_84 = param_3[0x10];
        local_60 = param_3[0xa0];
        local_80 = param_3[0x20];
        local_5c = param_3[0xb0];
        local_7c = param_3[0x30];
        local_78 = param_3[0x40];
        local_74 = param_3[0x50];
        local_70 = param_3[0x60];
        local_68 = param_3[0x80];
        local_6c = param_3[0x70];
        local_58 = param_3[0xc0];
        local_54 = param_3[0xd0];
        local_50 = param_3[0xe0];
        local_4c = param_3[0xf0];
        local_48 = param_3[0x100];
        local_44 = param_3[0x110];
        local_40 = param_3[0x120];
        local_3c = param_3[0x130];
        (**(code **)(param_2 + 0x80))(param_2 + 0x58,&local_88,&local_d8);
        *param_3 = local_88;
        param_3[0x90] = local_64;
        param_3[0x10] = local_84;
        param_3[0xa0] = local_60;
        param_3[0x20] = local_80;
        param_3[0xb0] = local_5c;
        param_3[0x30] = local_7c;
        param_3[0x40] = local_78;
        param_3[0x50] = local_74;
        param_3[0x60] = local_70;
        param_3[0x70] = local_6c;
        param_3[0x80] = local_68;
        param_3[0xc0] = local_58;
        param_3[0xd0] = local_54;
        param_3[0xe0] = local_50;
        param_3[0xf0] = local_4c;
        param_3[0x110] = local_44;
        param_3[0x100] = local_48;
        param_3[0x120] = local_40;
        param_3[0x130] = local_3c;
      }
      param_3 = param_3 + 1;
      param_1 = param_1 + 1;
    } while (param_3 != puVar1);
  }
  else {
    (**(code **)(param_2 + 0x130))(param_1,param_2 + 0x58,param_3,&local_d8);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void rtcForwardOccluded16Ex
               (undefined8 param_1,long param_2,long param_3,undefined8 *param_4,int param_5)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  long in_FS_OFFSET;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  long local_38;
  int *local_30;
  undefined8 local_28;
  long local_20;
  
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  piVar2 = *(int **)(param_2 + 0x18);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = puVar1[0x26];
  uVar7 = puVar1[0x27];
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  uVar12 = puVar1[4];
  uVar13 = puVar1[5];
  uVar14 = puVar1[6];
  uVar15 = puVar1[7];
  uVar16 = puVar1[8];
  uVar17 = puVar1[9];
  uVar18 = puVar1[0x28];
  uVar19 = puVar1[0x29];
  uVar20 = puVar1[10];
  uVar21 = puVar1[0xb];
  uVar22 = puVar1[0xc];
  uVar23 = puVar1[0xd];
  uVar24 = puVar1[0xe];
  uVar25 = puVar1[0xf];
  uVar26 = puVar1[0x2a];
  uVar27 = puVar1[0x2b];
  uVar43 = puVar1[0x10];
  uVar44 = puVar1[0x11];
  uVar45 = puVar1[0x12];
  uVar46 = puVar1[0x13];
  uVar47 = puVar1[0x14];
  uVar48 = puVar1[0x15];
  uVar28 = puVar1[0x2c];
  uVar29 = puVar1[0x2d];
  uVar49 = puVar1[0x16];
  uVar50 = puVar1[0x17];
  uVar51 = puVar1[0x20];
  uVar52 = puVar1[0x21];
  uVar41 = puVar1[0x22];
  uVar42 = puVar1[0x23];
  uVar53 = puVar1[0x24];
  uVar54 = puVar1[0x25];
  uVar30 = puVar1[0x2e];
  uVar31 = puVar1[0x2f];
  uVar32 = puVar1[0x30];
  uVar33 = puVar1[0x31];
  uVar34 = puVar1[0x32];
  uVar35 = puVar1[0x33];
  uVar36 = puVar1[0x34];
  uVar37 = puVar1[0x35];
  uVar38 = puVar1[0x36];
  uVar39 = puVar1[0x37];
  uVar40 = param_4[1];
  *puVar1 = *param_4;
  puVar1[1] = uVar40;
  uVar40 = param_4[3];
  puVar1[2] = param_4[2];
  puVar1[3] = uVar40;
  uVar40 = param_4[5];
  puVar1[4] = param_4[4];
  puVar1[5] = uVar40;
  uVar40 = param_4[7];
  puVar1[6] = param_4[6];
  puVar1[7] = uVar40;
  uVar40 = param_4[9];
  puVar1[8] = param_4[8];
  puVar1[9] = uVar40;
  uVar40 = param_4[0xb];
  puVar1[10] = param_4[10];
  puVar1[0xb] = uVar40;
  uVar40 = param_4[0xd];
  puVar1[0xc] = param_4[0xc];
  puVar1[0xd] = uVar40;
  uVar40 = param_4[0xf];
  puVar1[0xe] = param_4[0xe];
  puVar1[0xf] = uVar40;
  uVar40 = param_4[0x11];
  puVar1[0x10] = param_4[0x10];
  puVar1[0x11] = uVar40;
  uVar40 = param_4[0x13];
  puVar1[0x12] = param_4[0x12];
  puVar1[0x13] = uVar40;
  uVar40 = param_4[0x15];
  puVar1[0x14] = param_4[0x14];
  puVar1[0x15] = uVar40;
  uVar40 = param_4[0x17];
  puVar1[0x16] = param_4[0x16];
  puVar1[0x17] = uVar40;
  uVar40 = param_4[0x21];
  puVar1[0x20] = param_4[0x20];
  puVar1[0x21] = uVar40;
  uVar40 = param_4[0x23];
  puVar1[0x22] = param_4[0x22];
  puVar1[0x23] = uVar40;
  uVar40 = param_4[0x25];
  puVar1[0x24] = param_4[0x24];
  puVar1[0x25] = uVar40;
  uVar40 = param_4[0x27];
  puVar1[0x26] = param_4[0x26];
  puVar1[0x27] = uVar40;
  uVar40 = param_4[0x29];
  puVar1[0x28] = param_4[0x28];
  puVar1[0x29] = uVar40;
  uVar40 = param_4[0x2b];
  puVar1[0x2a] = param_4[0x2a];
  puVar1[0x2b] = uVar40;
  uVar40 = param_4[0x2d];
  puVar1[0x2c] = param_4[0x2c];
  puVar1[0x2d] = uVar40;
  uVar40 = param_4[0x2f];
  puVar1[0x2e] = param_4[0x2e];
  puVar1[0x2f] = uVar40;
  uVar40 = param_4[0x31];
  puVar1[0x30] = param_4[0x30];
  puVar1[0x31] = uVar40;
  uVar40 = param_4[0x33];
  puVar1[0x32] = param_4[0x32];
  puVar1[0x33] = uVar40;
  uVar40 = param_4[0x35];
  puVar1[0x34] = param_4[0x34];
  puVar1[0x35] = uVar40;
  uVar3 = *(undefined4 *)((long)param_4 + 0x1b4);
  uVar4 = *(undefined4 *)(param_4 + 0x37);
  uVar5 = *(undefined4 *)((long)param_4 + 0x1bc);
  *(undefined4 *)(puVar1 + 0x36) = *(undefined4 *)(param_4 + 0x36);
  *(undefined4 *)((long)puVar1 + 0x1b4) = uVar3;
  *(undefined4 *)(puVar1 + 0x37) = uVar4;
  *(undefined4 *)((long)puVar1 + 0x1bc) = uVar5;
  local_28 = *(undefined8 *)(param_2 + 0x40);
  if (*piVar2 == -1) {
    *piVar2 = param_5;
  }
  local_38 = param_3;
  local_30 = piVar2;
  (**(code **)(param_3 + 0x130))(param_1,param_3 + 0x58,puVar1,&local_38);
  *piVar2 = -1;
  puVar1[0x22] = uVar41;
  puVar1[0x23] = uVar42;
  puVar1[0x10] = uVar43;
  puVar1[0x11] = uVar44;
  puVar1[0x12] = uVar45;
  puVar1[0x13] = uVar46;
  puVar1[0x14] = uVar47;
  puVar1[0x15] = uVar48;
  puVar1[0x16] = uVar49;
  puVar1[0x17] = uVar50;
  puVar1[0x20] = uVar51;
  puVar1[0x21] = uVar52;
  puVar1[0x24] = uVar53;
  puVar1[0x25] = uVar54;
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  puVar1[4] = uVar12;
  puVar1[5] = uVar13;
  puVar1[6] = uVar14;
  puVar1[7] = uVar15;
  puVar1[8] = uVar16;
  puVar1[9] = uVar17;
  puVar1[10] = uVar20;
  puVar1[0xb] = uVar21;
  puVar1[0xc] = uVar22;
  puVar1[0xd] = uVar23;
  puVar1[0xe] = uVar24;
  puVar1[0xf] = uVar25;
  puVar1[0x26] = uVar6;
  puVar1[0x27] = uVar7;
  local_198 = (undefined4)uVar26;
  uStack_194 = (undefined4)((ulong)uVar26 >> 0x20);
  uStack_190 = (undefined4)uVar27;
  uStack_18c = (undefined4)((ulong)uVar27 >> 0x20);
  local_188 = (undefined4)uVar28;
  uStack_184 = (undefined4)((ulong)uVar28 >> 0x20);
  uStack_180 = (undefined4)uVar29;
  uStack_17c = (undefined4)((ulong)uVar29 >> 0x20);
  local_178 = (undefined4)uVar30;
  uStack_174 = (undefined4)((ulong)uVar30 >> 0x20);
  uStack_170 = (undefined4)uVar31;
  uStack_16c = (undefined4)((ulong)uVar31 >> 0x20);
  local_168 = (undefined4)uVar32;
  uStack_164 = (undefined4)((ulong)uVar32 >> 0x20);
  uStack_160 = (undefined4)uVar33;
  uStack_15c = (undefined4)((ulong)uVar33 >> 0x20);
  local_158 = (undefined4)uVar34;
  uStack_154 = (undefined4)((ulong)uVar34 >> 0x20);
  uStack_150 = (undefined4)uVar35;
  uStack_14c = (undefined4)((ulong)uVar35 >> 0x20);
  puVar1[0x28] = uVar18;
  puVar1[0x29] = uVar19;
  local_148 = (undefined4)uVar36;
  uStack_144 = (undefined4)((ulong)uVar36 >> 0x20);
  uStack_140 = (undefined4)uVar37;
  uStack_13c = (undefined4)((ulong)uVar37 >> 0x20);
  local_138 = (undefined4)uVar38;
  uStack_134 = (undefined4)((ulong)uVar38 >> 0x20);
  uStack_130 = (undefined4)uVar39;
  uStack_12c = (undefined4)((ulong)uVar39 >> 0x20);
  *(undefined4 *)(puVar1 + 0x2a) = local_198;
  *(undefined4 *)((long)puVar1 + 0x154) = uStack_194;
  *(undefined4 *)(puVar1 + 0x2b) = uStack_190;
  *(undefined4 *)((long)puVar1 + 0x15c) = uStack_18c;
  *(undefined4 *)(puVar1 + 0x2c) = local_188;
  *(undefined4 *)((long)puVar1 + 0x164) = uStack_184;
  *(undefined4 *)(puVar1 + 0x2d) = uStack_180;
  *(undefined4 *)((long)puVar1 + 0x16c) = uStack_17c;
  *(undefined4 *)(puVar1 + 0x2e) = local_178;
  *(undefined4 *)((long)puVar1 + 0x174) = uStack_174;
  *(undefined4 *)(puVar1 + 0x2f) = uStack_170;
  *(undefined4 *)((long)puVar1 + 0x17c) = uStack_16c;
  *(undefined4 *)(puVar1 + 0x30) = local_168;
  *(undefined4 *)((long)puVar1 + 0x184) = uStack_164;
  *(undefined4 *)(puVar1 + 0x31) = uStack_160;
  *(undefined4 *)((long)puVar1 + 0x18c) = uStack_15c;
  *(undefined4 *)(puVar1 + 0x32) = local_158;
  *(undefined4 *)((long)puVar1 + 0x194) = uStack_154;
  *(undefined4 *)(puVar1 + 0x33) = uStack_150;
  *(undefined4 *)((long)puVar1 + 0x19c) = uStack_14c;
  *(undefined4 *)(puVar1 + 0x34) = local_148;
  *(undefined4 *)((long)puVar1 + 0x1a4) = uStack_144;
  *(undefined4 *)(puVar1 + 0x35) = uStack_140;
  *(undefined4 *)((long)puVar1 + 0x1ac) = uStack_13c;
  *(undefined4 *)(puVar1 + 0x36) = local_138;
  *(undefined4 *)((long)puVar1 + 0x1b4) = uStack_134;
  *(undefined4 *)(puVar1 + 0x37) = uStack_130;
  *(undefined4 *)((long)puVar1 + 0x1bc) = uStack_12c;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcForwardOccluded16(void)

{
  rtcForwardOccluded16Ex();
  return;
}



void rtcRetainScene(RTCSceneTy *param_1)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCSceneTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
  if (*(code **)(*(long *)param_1 + 0x10) == embree::RefCount::refInc) {
    LOCK();
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    UNLOCK();
  }
  else {
    (**(code **)(*(long *)param_1 + 0x10))(param_1);
  }
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcReleaseScene(RTCSceneTy *param_1)

{
  RTCSceneTy *pRVar1;
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCSceneTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
  if (*(code **)(*(long *)param_1 + 0x18) == embree::RefCount::refDec) {
    LOCK();
    pRVar1 = param_1 + 8;
    *(long *)pRVar1 = *(long *)pRVar1 + -1;
    UNLOCK();
    if (*(long *)pRVar1 == 0) {
      (**(code **)(*(long *)param_1 + 8))(param_1);
    }
  }
  else {
    (**(code **)(*(long *)param_1 + 0x18))(param_1);
  }
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcSetGeometryInstancedScene(RTCGeometryTy *param_1,long *param_2)

{
  long *plVar1;
  long in_FS_OFFSET;
  long *local_30;
  DeviceEnterLeave local_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = param_2;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(code **)(*param_2 + 0x10) == embree::RefCount::refInc) {
    LOCK();
    param_2[1] = param_2[1] + 1;
    UNLOCK();
    if (param_1 == (RTCGeometryTy *)0x0) {
                    /* WARNING: Subroutine does not return */
      rtcSetGeometryInstancedScene_cold();
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    if (param_1 == (RTCGeometryTy *)0x0) {
                    /* WARNING: Subroutine does not return */
      rtcSetGeometryInstancedScene_cold();
    }
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(local_28,param_1);
  (**(code **)(*(long *)param_1 + 0x120))(param_1,&local_30);
  embree::DeviceEnterLeave::~DeviceEnterLeave(local_28);
  if (local_30 != (long *)0x0) {
    if (*(code **)(*local_30 + 0x18) == embree::RefCount::refDec) {
      LOCK();
      plVar1 = local_30 + 1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (**(code **)(*local_30 + 8))();
      }
    }
    else {
      (**(code **)(*local_30 + 0x18))();
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcSetGeometryInstancedScenes(RTCGeometryTy *param_1,long param_2,undefined8 param_3)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != (RTCGeometryTy *)0x0) && (param_2 != 0)) {
    embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_38,param_1);
    (**(code **)(*(long *)param_1 + 0x128))(param_1,param_2,param_3);
    embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_38);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* loadTransform(RTCFormat, float const*) */

undefined1 (*) [16] loadTransform(undefined1 (*param_1) [16],int param_2,undefined4 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  *param_1 = ZEXT416(_LC35);
  uVar5 = _UNK_00106188;
  *(undefined8 *)param_1[1] = __LC36;
  *(undefined8 *)(param_1[1] + 8) = uVar5;
  uVar5 = _UNK_00106198;
  *(undefined8 *)param_1[2] = __LC37;
  *(undefined8 *)(param_1[2] + 8) = uVar5;
  param_1[3] = (undefined1  [16])0x0;
  if (param_2 == 0x9234) {
    uVar11 = param_3[10];
    uVar10 = param_3[9];
    uVar12 = param_3[0xb];
    uVar13 = param_3[6];
    uVar14 = param_3[7];
    uVar8 = param_3[4];
    uVar15 = param_3[8];
    uVar7 = param_3[5];
    uVar9 = param_3[3];
  }
  else {
    if (param_2 != 0x9244) {
      if (param_2 != 0x9134) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar11 = param_3[7];
      uVar10 = param_3[3];
      uVar12 = param_3[0xb];
      uVar13 = param_3[2];
      uVar14 = param_3[6];
      uVar15 = param_3[10];
      uVar8 = param_3[4];
      auVar4._4_4_ = param_3[5];
      auVar4._0_4_ = param_3[1];
      uVar9 = param_3[8];
      auVar4._8_4_ = param_3[9];
      uVar7 = *param_3;
      goto LAB_00103877;
    }
    uVar11 = param_3[0xd];
    uVar10 = param_3[0xc];
    uVar12 = param_3[0xe];
    uVar13 = param_3[8];
    uVar14 = param_3[9];
    uVar8 = param_3[5];
    uVar15 = param_3[10];
    uVar7 = param_3[6];
    uVar9 = param_3[4];
  }
  auVar4._4_4_ = uVar8;
  auVar4._0_4_ = uVar9;
  uVar8 = param_3[1];
  uVar9 = param_3[2];
  auVar4._8_4_ = uVar7;
  uVar7 = *param_3;
LAB_00103877:
  auVar6._12_4_ = 0;
  auVar6._0_12_ = auVar4;
  auVar1._4_4_ = uVar8;
  auVar1._0_4_ = uVar7;
  auVar1._8_4_ = uVar9;
  auVar1._12_4_ = 0;
  *param_1 = auVar1;
  param_1[1] = auVar6;
  auVar3._4_4_ = uVar14;
  auVar3._0_4_ = uVar13;
  auVar3._8_4_ = uVar15;
  auVar3._12_4_ = 0;
  param_1[2] = auVar3;
  auVar2._4_4_ = uVar11;
  auVar2._0_4_ = uVar10;
  auVar2._8_4_ = uVar12;
  auVar2._12_4_ = 0;
  param_1[3] = auVar2;
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rtcSetGeometryTransform
               (RTCGeometryTy *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined1 auVar1 [12];
  long in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  DeviceEnterLeave local_80 [8];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (RTCGeometryTy *)0x0) || (param_4 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(local_80,param_1);
  local_78 = ZEXT416(_LC35);
  local_68._8_8_ = _UNK_00106188;
  local_68._0_8_ = __LC36;
  local_58._8_8_ = _UNK_00106198;
  local_58._0_8_ = __LC37;
  local_48 = (undefined1  [16])0x0;
  if (param_3 == 0x9234) {
    uVar7 = param_4[10];
    uVar6 = param_4[9];
    uVar8 = param_4[0xb];
    uVar3 = param_4[4];
    auVar1 = *(undefined1 (*) [12])(param_4 + 6);
    uVar4 = param_4[5];
    uVar2 = param_4[3];
  }
  else {
    if (param_3 != 0x9244) {
      if (param_3 != 0x9134) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar7 = param_4[7];
      uVar6 = param_4[3];
      uVar8 = param_4[0xb];
      uVar3 = param_4[5];
      uVar10 = param_4[4];
      auVar1._4_4_ = param_4[6];
      auVar1._0_4_ = param_4[2];
      uVar4 = param_4[9];
      auVar1._8_4_ = param_4[10];
      uVar2 = param_4[1];
      uVar9 = param_4[8];
      uVar5 = *param_4;
      goto LAB_00103a29;
    }
    uVar7 = param_4[0xd];
    uVar6 = param_4[0xc];
    uVar8 = param_4[0xe];
    uVar3 = param_4[5];
    auVar1 = *(undefined1 (*) [12])(param_4 + 8);
    uVar4 = param_4[6];
    uVar2 = param_4[4];
  }
  uVar10 = param_4[1];
  uVar9 = param_4[2];
  uVar5 = *param_4;
LAB_00103a29:
  local_58._12_4_ = 0;
  local_58._0_12_ = auVar1;
  local_78._4_4_ = uVar10;
  local_78._0_4_ = uVar5;
  local_78._8_4_ = uVar9;
  local_78._12_4_ = 0;
  local_68._4_4_ = uVar3;
  local_68._0_4_ = uVar2;
  local_68._8_4_ = uVar4;
  local_68._12_4_ = 0;
  local_48._4_4_ = uVar7;
  local_48._0_4_ = uVar6;
  local_48._8_4_ = uVar8;
  local_48._12_4_ = 0;
  (**(code **)(*(long *)param_1 + 0x130))(param_1,local_78,param_2);
  embree::DeviceEnterLeave::~DeviceEnterLeave(local_80);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rtcSetGeometryTransformQuaternion
               (RTCGeometryTy *param_1,undefined4 param_2,undefined4 *param_3)

{
  float fVar1;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  DeviceEnterLeave local_80 [8];
  undefined4 local_78;
  undefined8 local_74;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  float local_5c;
  undefined8 local_58;
  undefined4 local_50;
  float local_4c;
  undefined8 local_48;
  undefined4 local_40;
  float local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != (RTCGeometryTy *)0x0) && (param_3 != (undefined4 *)0x0)) {
    embree::DeviceEnterLeave::DeviceEnterLeave(local_80,param_1);
    local_78 = *param_3;
    fVar1 = (float)param_3[9];
    local_6c = (float)param_3[10];
    local_58 = *(undefined8 *)(param_3 + 4);
    local_64 = param_3[1];
    local_5c = (float)param_3[0xb];
    local_4c = (float)param_3[0xc];
    local_50 = param_3[2];
    local_74 = *(undefined8 *)(param_3 + 0xd);
    local_68 = param_3[3];
    local_48 = *(undefined8 *)(param_3 + 6);
    local_60 = param_3[0xf];
    local_40 = param_3[8];
    fVar2 = fVar1 * fVar1 + local_6c * local_6c + local_5c * local_5c + local_4c * local_4c;
    auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
    fVar3 = auVar4._0_4_;
    local_3c = _LC42 * fVar3 + fVar2 * __LC41 * fVar3 * fVar3 * fVar3;
    local_6c = local_6c * local_3c;
    local_5c = local_5c * local_3c;
    local_4c = local_4c * local_3c;
    local_3c = local_3c * fVar1;
    (**(code **)(*(long *)param_1 + 0x138))(param_1,&local_78,param_2);
    embree::DeviceEnterLeave::~DeviceEnterLeave(local_80);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



void rtcGetGeometryTransform(long *param_1,int param_2,undefined8 *param_3)

{
  long in_FS_OFFSET;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*param_1 + 0x140))(&local_68,param_1);
  if (param_2 == 0x9234) {
    *param_3 = CONCAT44(uStack_64,local_68);
    *(undefined4 *)(param_3 + 1) = local_60;
    *(ulong *)((long)param_3 + 0xc) = CONCAT44(uStack_54,local_58);
    *(undefined4 *)((long)param_3 + 0x14) = local_50;
    param_3[3] = CONCAT44(uStack_44,local_48);
    *(undefined4 *)(param_3 + 4) = local_40;
    *(ulong *)((long)param_3 + 0x24) = CONCAT44(uStack_34,local_38);
    *(undefined4 *)((long)param_3 + 0x2c) = local_30;
  }
  else if (param_2 == 0x9244) {
    *(undefined4 *)((long)param_3 + 0xc) = 0;
    *(undefined4 *)((long)param_3 + 0x1c) = 0;
    *param_3 = CONCAT44(uStack_64,local_68);
    *(undefined4 *)(param_3 + 1) = local_60;
    param_3[2] = CONCAT44(uStack_54,local_58);
    *(undefined4 *)(param_3 + 3) = local_50;
    param_3[4] = CONCAT44(uStack_44,local_48);
    *(undefined4 *)(param_3 + 5) = local_40;
    *(undefined4 *)((long)param_3 + 0x2c) = 0;
    param_3[6] = CONCAT44(uStack_34,local_38);
    *(undefined4 *)((long)param_3 + 0x3c) = 0x3f800000;
    *(undefined4 *)(param_3 + 7) = local_30;
  }
  else {
    if (param_2 != 0x9134) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)param_3 = local_68;
    *(undefined4 *)((long)param_3 + 4) = local_58;
    *(undefined4 *)(param_3 + 1) = local_48;
    *(undefined4 *)((long)param_3 + 0xc) = local_38;
    *(undefined4 *)(param_3 + 2) = uStack_64;
    *(undefined4 *)((long)param_3 + 0x14) = uStack_54;
    *(undefined4 *)(param_3 + 3) = uStack_44;
    *(undefined4 *)((long)param_3 + 0x1c) = uStack_34;
    *(undefined4 *)(param_3 + 4) = local_60;
    *(undefined4 *)((long)param_3 + 0x24) = local_50;
    *(undefined4 *)(param_3 + 5) = local_40;
    *(undefined4 *)((long)param_3 + 0x2c) = local_30;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcGetGeometryTransformEx(long *param_1,undefined4 param_2,int param_3,undefined8 *param_4)

{
  long in_FS_OFFSET;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*param_1 + 0x148))(&local_68,param_1,param_2);
  if (param_3 == 0x9234) {
    *param_4 = CONCAT44(uStack_64,local_68);
    *(undefined4 *)(param_4 + 1) = local_60;
    *(ulong *)((long)param_4 + 0xc) = CONCAT44(uStack_54,local_58);
    *(undefined4 *)((long)param_4 + 0x14) = local_50;
    param_4[3] = CONCAT44(uStack_44,local_48);
    *(undefined4 *)(param_4 + 4) = local_40;
    *(ulong *)((long)param_4 + 0x24) = CONCAT44(uStack_34,local_38);
    *(undefined4 *)((long)param_4 + 0x2c) = local_30;
  }
  else if (param_3 == 0x9244) {
    *(undefined4 *)((long)param_4 + 0xc) = 0;
    *(undefined4 *)((long)param_4 + 0x1c) = 0;
    *param_4 = CONCAT44(uStack_64,local_68);
    *(undefined4 *)(param_4 + 1) = local_60;
    param_4[2] = CONCAT44(uStack_54,local_58);
    *(undefined4 *)(param_4 + 3) = local_50;
    param_4[4] = CONCAT44(uStack_44,local_48);
    *(undefined4 *)(param_4 + 5) = local_40;
    *(undefined4 *)((long)param_4 + 0x2c) = 0;
    param_4[6] = CONCAT44(uStack_34,local_38);
    *(undefined4 *)((long)param_4 + 0x3c) = 0x3f800000;
    *(undefined4 *)(param_4 + 7) = local_30;
  }
  else {
    if (param_3 != 0x9134) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)param_4 = local_68;
    *(undefined4 *)((long)param_4 + 4) = local_58;
    *(undefined4 *)(param_4 + 1) = local_48;
    *(undefined4 *)((long)param_4 + 0xc) = local_38;
    *(undefined4 *)(param_4 + 2) = uStack_64;
    *(undefined4 *)((long)param_4 + 0x14) = uStack_54;
    *(undefined4 *)(param_4 + 3) = uStack_44;
    *(undefined4 *)((long)param_4 + 0x1c) = uStack_34;
    *(undefined4 *)(param_4 + 4) = local_60;
    *(undefined4 *)((long)param_4 + 0x24) = local_50;
    *(undefined4 *)(param_4 + 5) = local_40;
    *(undefined4 *)((long)param_4 + 0x2c) = local_30;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcGetGeometryTransformFromScene(long param_1,uint param_2,int param_3,undefined8 *param_4)

{
  long in_FS_OFFSET;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(**(long **)(*(long *)(param_1 + 0x1e0) + (ulong)param_2 * 8) + 0x140))(&local_68);
  if (param_3 == 0x9234) {
    *param_4 = CONCAT44(uStack_64,local_68);
    *(undefined4 *)(param_4 + 1) = local_60;
    *(ulong *)((long)param_4 + 0xc) = CONCAT44(uStack_54,local_58);
    *(undefined4 *)((long)param_4 + 0x14) = local_50;
    param_4[3] = CONCAT44(uStack_44,local_48);
    *(undefined4 *)(param_4 + 4) = local_40;
    *(ulong *)((long)param_4 + 0x24) = CONCAT44(uStack_34,local_38);
    *(undefined4 *)((long)param_4 + 0x2c) = local_30;
  }
  else if (param_3 == 0x9244) {
    *(undefined4 *)((long)param_4 + 0xc) = 0;
    *(undefined4 *)((long)param_4 + 0x1c) = 0;
    *param_4 = CONCAT44(uStack_64,local_68);
    *(undefined4 *)(param_4 + 1) = local_60;
    param_4[2] = CONCAT44(uStack_54,local_58);
    *(undefined4 *)(param_4 + 3) = local_50;
    param_4[4] = CONCAT44(uStack_44,local_48);
    *(undefined4 *)(param_4 + 5) = local_40;
    *(undefined4 *)((long)param_4 + 0x2c) = 0;
    param_4[6] = CONCAT44(uStack_34,local_38);
    *(undefined4 *)((long)param_4 + 0x3c) = 0x3f800000;
    *(undefined4 *)(param_4 + 7) = local_30;
  }
  else {
    if (param_3 != 0x9134) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)param_4 = local_68;
    *(undefined4 *)((long)param_4 + 4) = local_58;
    *(undefined4 *)(param_4 + 1) = local_48;
    *(undefined4 *)((long)param_4 + 0xc) = local_38;
    *(undefined4 *)(param_4 + 2) = uStack_64;
    *(undefined4 *)((long)param_4 + 0x14) = uStack_54;
    *(undefined4 *)(param_4 + 3) = uStack_44;
    *(undefined4 *)((long)param_4 + 0x1c) = uStack_34;
    *(undefined4 *)(param_4 + 4) = local_60;
    *(undefined4 *)((long)param_4 + 0x24) = local_50;
    *(undefined4 *)(param_4 + 5) = local_40;
    *(undefined4 *)((long)param_4 + 0x2c) = local_30;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcInvokeIntersectFilterFromGeometry(long param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x30) + 0x40);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00104217. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_2);
    return;
  }
  return;
}



void rtcInvokeOccludedFilterFromGeometry(long param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x30) + 0x48);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00104247. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_2);
    return;
  }
  return;
}



long * rtcNewGeometry(Device *param_1,int param_2)

{
  long *plVar1;
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,(RTCDeviceTy *)param_1);
  if (param_1 == (Device *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_2 == 0) {
    plVar1 = (long *)embree::sse2::createTriangleMesh(param_1);
    if (*(code **)(*plVar1 + 0x10) == embree::RefCount::refInc) {
      LOCK();
      plVar1[1] = plVar1[1] + 1;
      UNLOCK();
    }
    else {
      plVar1 = (long *)(**(code **)(*plVar1 + 0x10))(plVar1);
    }
    embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return plVar1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



void rtcSetGeometryUserPrimitiveCount(RTCGeometryTy *param_1,undefined4 param_2)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (RTCGeometryTy *)0x0) {
    embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
    if (param_1[0x3c] == (RTCGeometryTy)0x1d) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,param_2);
      embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



void rtcSetGeometryTimeStepCount(RTCGeometryTy *param_1,uint param_2)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (RTCGeometryTy *)0x0) {
    embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
    if (param_2 < 0x82) {
      (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2);
      embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



void rtcSetGeometryTimeRange(float param_1,float param_2,RTCGeometryTy *param_3)

{
  RTCGeometryTy *pRVar1;
  long in_FS_OFFSET;
  DeviceEnterLeave local_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != (RTCGeometryTy *)0x0) {
    if (*(code **)(*(long *)param_3 + 0x10) == embree::RefCount::refInc) {
      LOCK();
      *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)param_3 + 0x10))();
    }
    embree::DeviceEnterLeave::DeviceEnterLeave(local_28,param_3);
    if (param_1 <= param_2) {
      embree::Geometry::setTimeRange(CONCAT44(param_2,param_1),param_3);
      embree::DeviceEnterLeave::~DeviceEnterLeave(local_28);
      if (*(code **)(*(long *)param_3 + 0x18) == embree::RefCount::refDec) {
        LOCK();
        pRVar1 = param_3 + 8;
        *(long *)pRVar1 = *(long *)pRVar1 + -1;
        UNLOCK();
        if (*(long *)pRVar1 == 0) {
          (**(code **)(*(long *)param_3 + 8))(param_3);
        }
      }
      else {
        (**(code **)(*(long *)param_3 + 0x18))(param_3);
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



void rtcSetGeometryVertexAttributeCount(RTCGeometryTy *param_1,undefined4 param_2)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCGeometryTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1,param_2);
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcSetGeometryTopologyCount(RTCGeometryTy *param_1,undefined4 param_2)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCGeometryTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
  (**(code **)(*(long *)param_1 + 0x38))(param_1,param_2);
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcSetGeometryBuildQuality(RTCGeometryTy *param_1,uint param_2)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (RTCGeometryTy *)0x0) {
    embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
    if (param_2 < 4) {
      param_1[0x3e] = (RTCGeometryTy)((byte)param_1[0x3e] & 0xf8 | (byte)param_2 & 7);
      embree::Geometry::update();
      embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



void rtcSetGeometryMask(RTCGeometryTy *param_1,undefined4 param_2)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCGeometryTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
  (**(code **)(*(long *)param_1 + 0xf0))(param_1,param_2);
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcSetGeometrySubdivisionMode(RTCGeometryTy *param_1,undefined4 param_2,undefined4 param_3)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCGeometryTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_38,param_1);
  (**(code **)(*(long *)param_1 + 0xa8))(param_1,param_2,param_3);
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcSetGeometryVertexAttributeTopology
               (RTCGeometryTy *param_1,undefined4 param_2,undefined4 param_3)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCGeometryTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_38,param_1);
  (**(code **)(*(long *)param_1 + 0xb0))(param_1,param_2,param_3);
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcSetGeometryBuffer
               (RTCGeometryTy *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long in_FS_OFFSET;
  long *local_50;
  DeviceEnterLeave local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = param_5;
  if (param_5 != (long *)0x0) {
    if (*(code **)(*param_5 + 0x10) == embree::RefCount::refInc) {
      LOCK();
      param_5[1] = param_5[1] + 1;
      UNLOCK();
      if (param_1 == (RTCGeometryTy *)0x0) {
                    /* WARNING: Subroutine does not return */
        rtcSetGeometryBuffer_cold();
      }
    }
    else {
      (**(code **)(*param_5 + 0x10))(param_5);
      if (param_1 == (RTCGeometryTy *)0x0) {
                    /* WARNING: Subroutine does not return */
        rtcSetGeometryBuffer_cold();
      }
    }
    embree::DeviceEnterLeave::DeviceEnterLeave(local_48,param_1);
    if ((*(long *)(param_1 + 0x10) == local_50[2]) && (param_8._4_4_ == 0)) {
      (**(code **)(*(long *)param_1 + 0xf8))
                (param_1,param_2,param_3,param_4,&local_50,param_6,param_7);
      embree::DeviceEnterLeave::~DeviceEnterLeave(local_48);
      if (local_50 != (long *)0x0) {
        if (*(code **)(*local_50 + 0x18) == embree::RefCount::refDec) {
          LOCK();
          plVar1 = local_50 + 1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            (**(code **)(*local_50 + 8))();
          }
        }
        else {
          (**(code **)(*local_50 + 0x18))();
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



void rtcSetSharedGeometryBuffer
               (RTCGeometryTy *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,long param_6,long param_7,ulong param_8)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long in_FS_OFFSET;
  DeviceEnterLeave local_50 [8];
  long *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (RTCGeometryTy *)0x0) {
    embree::DeviceEnterLeave::DeviceEnterLeave(local_50,param_1);
    if (param_8 >> 0x20 == 0) {
      plVar2 = (long *)operator_new(0x30);
      plVar1 = *(long **)(param_1 + 0x10);
      plVar2[1] = 0;
      *plVar2 = (long)&PTR__Buffer_00106130;
      plVar2[2] = (long)plVar1;
      plVar2[4] = param_7 * param_8;
      if (*(code **)(*plVar1 + 0x10) == embree::RefCount::refInc) {
        LOCK();
        plVar1[1] = plVar1[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*plVar1 + 0x10))();
      }
      if (param_6 + param_5 == 0) {
        *(undefined1 *)(plVar2 + 5) = 0;
        (**(code **)(*(long *)plVar2[2] + 0x20))((long *)plVar2[2],plVar2[4],0);
        lVar3 = (**(code **)(*(long *)plVar2[2] + 0x38))
                          ((long *)plVar2[2],plVar2[4] + 0xfU & 0xfffffffffffffff0,0x10);
        plVar2[3] = lVar3;
      }
      else {
        *(undefined1 *)(plVar2 + 5) = 1;
        plVar2[3] = param_6 + param_5;
      }
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar2[1] = plVar2[1] + 1;
        UNLOCK();
      }
      local_48 = plVar2;
      (**(code **)(*(long *)param_1 + 0xf8))
                (param_1,param_2,param_3,param_4,&local_48,0,param_7,param_8);
      if (local_48 != (long *)0x0) {
        if (*(code **)(*local_48 + 0x18) == embree::RefCount::refDec) {
          LOCK();
          plVar1 = local_48 + 1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            (**(code **)(*local_48 + 8))();
          }
        }
        else {
          (**(code **)(*local_48 + 0x18))();
        }
      }
      embree::DeviceEnterLeave::~DeviceEnterLeave(local_50);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



long rtcSetNewGeometryBuffer
               (RTCGeometryTy *param_1,int param_2,undefined4 param_3,undefined4 param_4,
               long param_5,ulong param_6)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long in_FS_OFFSET;
  DeviceEnterLeave local_50 [8];
  long *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (RTCGeometryTy *)0x0) {
    embree::DeviceEnterLeave::DeviceEnterLeave(local_50,param_1);
    if (param_6 >> 0x20 == 0) {
      lVar5 = param_6 * param_5;
      if (param_2 - 1U < 2) {
        lVar5 = lVar5 + (ulong)(-(int)param_5 & 0xf);
      }
      plVar4 = (long *)operator_new(0x30);
      plVar1 = *(long **)(param_1 + 0x10);
      plVar4[1] = 0;
      *plVar4 = (long)&PTR__Buffer_00106130;
      lVar2 = *plVar1;
      plVar4[4] = lVar5;
      pcVar3 = *(code **)(lVar2 + 0x10);
      plVar4[2] = (long)plVar1;
      if (pcVar3 == embree::RefCount::refInc) {
        LOCK();
        plVar1[1] = plVar1[1] + 1;
        UNLOCK();
      }
      else {
        (*pcVar3)();
      }
      *(undefined1 *)(plVar4 + 5) = 0;
      (**(code **)(*(long *)plVar4[2] + 0x20))((long *)plVar4[2],plVar4[4],0);
      lVar5 = (**(code **)(*(long *)plVar4[2] + 0x38))
                        ((long *)plVar4[2],plVar4[4] + 0xfU & 0xfffffffffffffff0,0x10);
      plVar4[3] = lVar5;
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar4[1] = plVar4[1] + 1;
        UNLOCK();
      }
      local_48 = plVar4;
      (**(code **)(*(long *)param_1 + 0xf8))
                (param_1,param_2,param_3,param_4,&local_48,0,param_5,param_6);
      if (local_48[2] != 0) {
        lVar5 = local_48[3];
        if (local_48 != (long *)0x0) {
          if (*(code **)(*local_48 + 0x18) == embree::RefCount::refDec) {
            LOCK();
            plVar1 = local_48 + 1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              (**(code **)(*local_48 + 8))();
            }
          }
          else {
            (**(code **)(*local_48 + 0x18))();
          }
        }
        embree::DeviceEnterLeave::~DeviceEnterLeave(local_50);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return lVar5;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



undefined8 rtcGetGeometryBufferData(RTCGeometryTy *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCGeometryTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_38,param_1);
  uVar1 = (**(code **)(*(long *)param_1 + 0x100))(param_1,param_2,param_3);
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcEnableGeometry(RTCGeometryTy *param_1)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCGeometryTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
  (**(code **)(*(long *)param_1 + 0x40))(param_1);
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcUpdateGeometryBuffer(RTCGeometryTy *param_1,undefined4 param_2,undefined4 param_3)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCGeometryTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_38,param_1);
  (**(code **)(*(long *)param_1 + 0x50))(param_1,param_2,param_3);
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcDisableGeometry(RTCGeometryTy *param_1)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCGeometryTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
  (**(code **)(*(long *)param_1 + 0x58))(param_1);
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcSetGeometryTessellationRate(undefined4 param_1,RTCGeometryTy *param_2)

{
  long in_FS_OFFSET;
  DeviceEnterLeave local_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (RTCGeometryTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(local_28,param_2);
  (**(code **)(*(long *)param_2 + 0x80))(param_1,param_2);
  embree::DeviceEnterLeave::~DeviceEnterLeave(local_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcSetGeometryUserData(RTCGeometryTy *param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCGeometryTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
  (**(code **)(*(long *)param_1 + 0x90))(param_1,param_2);
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 rtcGetGeometryUserData(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



undefined8 rtcGetGeometryUserDataFromScene(long param_1,uint param_2)

{
  return *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1e0) + (ulong)param_2 * 8) + 0x18);
}



void rtcSetGeometryBoundsFunction(RTCGeometryTy *param_1,undefined8 param_2,undefined8 param_3)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCGeometryTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_38,param_1);
  (**(code **)(*(long *)param_1 + 0x150))(param_1,param_2,param_3);
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcSetGeometryDisplacementFunction(RTCGeometryTy *param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCGeometryTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
  (**(code **)(*(long *)param_1 + 0xb8))(param_1,param_2);
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcSetGeometryIntersectFunction(RTCGeometryTy *param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCGeometryTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
  (**(code **)(*(long *)param_1 + 0x158))(param_1,param_2);
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcSetGeometryPointQueryFunction(RTCGeometryTy *param_1)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCGeometryTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
  embree::Geometry::setPointQueryFunction((_func_bool_RTCPointQueryFunctionArguments_ptr *)param_1);
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcGetGeometryFirstHalfEdge(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001051c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc0))();
  return;
}



void rtcGetGeometryFace(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001051d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 200))();
  return;
}



void rtcGetGeometryNextHalfEdge(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001051e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd0))();
  return;
}



void rtcGetGeometryPreviousHalfEdge(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001051f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd8))();
  return;
}



void rtcGetGeometryOppositeHalfEdge(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00105207. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe0))();
  return;
}



void rtcSetGeometryOccludedFunction(RTCGeometryTy *param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCGeometryTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
  (**(code **)(*(long *)param_1 + 0x160))(param_1,param_2);
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcSetGeometryIntersectFilterFunction(RTCGeometryTy *param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCGeometryTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
  (**(code **)(*(long *)param_1 + 0x108))(param_1,param_2);
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcSetGeometryOccludedFilterFunction(RTCGeometryTy *param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCGeometryTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
  (**(code **)(*(long *)param_1 + 0x110))(param_1,param_2);
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcSetGeometryEnableFilterFunctionFromArguments(RTCGeometryTy *param_1,uint param_2)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCGeometryTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
  if (*(code **)(*(long *)param_1 + 0x118) == embree::Geometry::enableFilterFunctionFromArguments) {
    param_1[0x3e] = (RTCGeometryTy)((byte)param_1[0x3e] & 0xbf | (byte)((param_2 & 1) << 6));
  }
  else {
    (**(code **)(*(long *)param_1 + 0x118))(param_1,param_2 & 0xff);
  }
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcInterpolate(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010540d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x98))((long *)*param_1,param_1);
  return;
}



void rtcInterpolateN(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010542d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0xa0))((long *)*param_1,param_1);
  return;
}



void rtcCommitGeometry(RTCGeometryTy *param_1)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCGeometryTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 rtcAttachGeometry(long param_1,RTCGeometryTy *param_2)

{
  RTCGeometryTy *pRVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  DeviceEnterLeave local_30 [8];
  RTCGeometryTy *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != 0) && (param_2 != (RTCGeometryTy *)0x0)) {
    embree::DeviceEnterLeave::DeviceEnterLeave(local_30,param_2);
    if (*(long *)(param_1 + 0x188) == *(long *)(param_2 + 0x10)) {
      local_28 = param_2;
      if (*(code **)(*(long *)param_2 + 0x10) == embree::RefCount::refInc) {
        LOCK();
        *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*(long *)param_2 + 0x10))(param_2);
      }
      uVar2 = embree::Scene::bind(param_1,0xffffffff,&local_28);
      if (local_28 != (RTCGeometryTy *)0x0) {
        if (*(code **)(*(long *)local_28 + 0x18) == embree::RefCount::refDec) {
          LOCK();
          pRVar1 = local_28 + 8;
          *(long *)pRVar1 = *(long *)pRVar1 + -1;
          UNLOCK();
          if (*(long *)pRVar1 == 0) {
            (**(code **)(*(long *)local_28 + 8))();
          }
        }
        else {
          (**(code **)(*(long *)local_28 + 0x18))();
        }
      }
      embree::DeviceEnterLeave::~DeviceEnterLeave(local_30);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



void rtcAttachGeometryByID(RTCSceneTy *param_1,long *param_2,int param_3)

{
  long *plVar1;
  long in_FS_OFFSET;
  DeviceEnterLeave local_40 [8];
  long *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (RTCSceneTy *)0x0) && (param_2 != (long *)0x0)) && (param_3 != -1)) {
    embree::DeviceEnterLeave::DeviceEnterLeave(local_40,param_1);
    if (*(long *)(param_1 + 0x188) == param_2[2]) {
      local_38 = param_2;
      if (*(code **)(*param_2 + 0x10) == embree::RefCount::refInc) {
        LOCK();
        param_2[1] = param_2[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*param_2 + 0x10))(param_2);
      }
      embree::Scene::bind(param_1,param_3,&local_38);
      if (local_38 != (long *)0x0) {
        if (*(code **)(*local_38 + 0x18) == embree::RefCount::refDec) {
          LOCK();
          plVar1 = local_38 + 1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            (**(code **)(*local_38 + 8))();
          }
        }
        else {
          (**(code **)(*local_38 + 0x18))();
        }
      }
      embree::DeviceEnterLeave::~DeviceEnterLeave(local_40);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



void rtcDetachGeometry(RTCSceneTy *param_1,int param_2)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != (RTCSceneTy *)0x0) && (param_2 != -1)) {
    embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
    embree::Scene::detachGeometry((ulong)param_1);
    embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



void rtcRetainGeometry(RTCGeometryTy *param_1)

{
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCGeometryTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
  if (*(code **)(*(long *)param_1 + 0x10) == embree::RefCount::refInc) {
    LOCK();
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    UNLOCK();
  }
  else {
    (**(code **)(*(long *)param_1 + 0x10))(param_1);
  }
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rtcReleaseGeometry(RTCGeometryTy *param_1)

{
  RTCGeometryTy *pRVar1;
  long in_FS_OFFSET;
  DeviceEnterLeave aDStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (RTCGeometryTy *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  embree::DeviceEnterLeave::DeviceEnterLeave(aDStack_28,param_1);
  if (*(code **)(*(long *)param_1 + 0x18) == embree::RefCount::refDec) {
    LOCK();
    pRVar1 = param_1 + 8;
    *(long *)pRVar1 = *(long *)pRVar1 + -1;
    UNLOCK();
    if (*(long *)pRVar1 == 0) {
      (**(code **)(*(long *)param_1 + 8))(param_1);
    }
  }
  else {
    (**(code **)(*(long *)param_1 + 0x18))(param_1);
  }
  embree::DeviceEnterLeave::~DeviceEnterLeave(aDStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 rtcGetGeometry(long param_1,uint param_2)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x1e0) + (ulong)param_2 * 8);
}



long * rtcGetGeometryThreadSafe(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  
  embree::MutexSys::lock();
  plVar2 = *(long **)(*(long *)(param_1 + 0x1e0) + (ulong)param_2 * 8);
  if (plVar2 == (long *)0x0) {
    embree::MutexSys::unlock();
    return (long *)0x0;
  }
  if (*(code **)(*plVar2 + 0x10) == embree::RefCount::refInc) {
    LOCK();
    plVar2[1] = plVar2[1] + 1;
    UNLOCK();
    embree::MutexSys::unlock();
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    embree::MutexSys::unlock();
  }
  if (*(code **)(*plVar2 + 0x18) == embree::RefCount::refDec) {
    LOCK();
    plVar1 = plVar2 + 1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    return plVar2;
  }
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return plVar2;
}



/* embree::Geometry::enableFilterFunctionFromArguments(bool) */

void __thiscall embree::Geometry::enableFilterFunctionFromArguments(Geometry *this,bool param_1)

{
  this[0x3e] = (Geometry)((byte)this[0x3e] & 0xbf | (byte)((param_1 & 1) << 6));
  return;
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
                    /* WARNING: Could not recover jumptable at 0x00105979. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}



/* embree::Buffer::~Buffer() */

void __thiscall embree::Buffer::~Buffer(Buffer *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__Buffer_00106130;
  if (this[0x28] == (Buffer)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 0x40))
              (*(long **)(this + 0x10),*(undefined8 *)(this + 0x18));
    (**(code **)(**(long **)(this + 0x10) + 0x20))
              (*(long **)(this + 0x10),-*(long *)(this + 0x20),1);
    *(undefined8 *)(this + 0x18) = 0;
  }
  plVar2 = *(long **)(this + 0x10);
  if (*(code **)(*plVar2 + 0x18) == RefCount::refDec) {
    LOCK();
    plVar1 = plVar2 + 1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if ((plVar2 != (long *)0x0) && (*plVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00105a05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00105a19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))();
  return;
}



/* embree::Buffer::~Buffer() */

void __thiscall embree::Buffer::~Buffer(Buffer *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__Buffer_00106130;
  if (this[0x28] == (Buffer)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 0x40))
              (*(long **)(this + 0x10),*(undefined8 *)(this + 0x18));
    (**(code **)(**(long **)(this + 0x10) + 0x20))
              (*(long **)(this + 0x10),-*(long *)(this + 0x20),1);
    *(undefined8 *)(this + 0x18) = 0;
  }
  plVar2 = *(long **)(this + 0x10);
  if (*(code **)(*plVar2 + 0x18) == RefCount::refDec) {
    LOCK();
    plVar1 = plVar2 + 1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if ((plVar2 != (long *)0x0) && (*plVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
    operator_delete(this,0x30);
    return;
  }
  (**(code **)(*plVar2 + 0x18))();
  operator_delete(this,0x30);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcRetainDevice_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcReleaseDevice_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcGetDeviceProperty_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetDeviceProperty_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



void rtcSetDeviceErrorFunction_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcNewBuffer_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcNewSharedBuffer_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcGetBufferData_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcRetainBuffer_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcReleaseBuffer_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcNewScene_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



void rtcGetSceneDevice_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetSceneProgressMonitorFunction_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetSceneBuildQuality_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetSceneFlags_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcGetSceneFlags_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcCommitScene_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcJoinCommitScene_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcGetSceneBounds_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcGetSceneLinearBounds_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcRetainScene_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcReleaseScene_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetGeometryInstancedScene_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetGeometryInstancedScenes_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* loadTransform(RTCFormat, float const*) [clone .cold] */

void loadTransform(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetGeometryTransform_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetGeometryTransformQuaternion_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcGetGeometryTransform_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcGetGeometryTransformEx_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcGetGeometryTransformFromScene_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcNewGeometry_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetGeometryUserPrimitiveCount_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetGeometryTimeStepCount_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetGeometryTimeRange_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetGeometryVertexAttributeCount_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetGeometryTopologyCount_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetGeometryBuildQuality_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



void rtcSetGeometryMaxRadiusScale(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetGeometryMask_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetGeometrySubdivisionMode_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetGeometryVertexAttributeTopology_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetGeometryBuffer_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetSharedGeometryBuffer_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetNewGeometryBuffer_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcGetGeometryBufferData_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcEnableGeometry_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcUpdateGeometryBuffer_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcDisableGeometry_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetGeometryTessellationRate_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetGeometryUserData_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



void rtcGetGeometryUserData_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetGeometryBoundsFunction_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetGeometryDisplacementFunction_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetGeometryIntersectFunction_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetGeometryPointQueryFunction_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetGeometryOccludedFunction_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetGeometryIntersectFilterFunction_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetGeometryOccludedFilterFunction_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcSetGeometryEnableFilterFunctionFromArguments_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcCommitGeometry_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcAttachGeometry_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcAttachGeometryByID_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcDetachGeometry_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcRetainGeometry_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rtcReleaseGeometry_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pointQuery(embree::Scene*, RTCPointQuery*, RTCPointQueryContext*, bool
   (*)(RTCPointQueryFunctionArguments*), void*) */

void pointQuery(Scene *param_1,RTCPointQuery *param_2,RTCPointQueryContext *param_3,
               _func_bool_RTCPointQueryFunctionArguments_ptr *param_4,void *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  RTCPointQueryContext *pRVar14;
  long in_FS_OFFSET;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar23;
  undefined1 auVar22 [16];
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
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  Scene *local_98;
  undefined8 local_90;
  RTCPointQuery *local_88;
  int local_80;
  _func_bool_RTCPointQueryFunctionArguments_ptr *local_78;
  RTCPointQueryContext *local_70;
  float local_68;
  void *local_60;
  undefined8 local_58;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  float local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = param_1;
  local_88 = param_2;
  local_78 = param_4;
  local_70 = param_3;
  local_60 = param_5;
  if (*(int *)(param_3 + 0x84) == 0) {
    local_48 = *(float *)(param_2 + 0x10);
    local_90 = 0;
    local_80 = 1;
    local_68 = 1.0;
    local_58 = 0xffffffffffffffff;
    fStack_44 = local_48;
    fStack_40 = local_48;
    fStack_3c = local_48;
    (**(code **)(param_1 + 0x88))(param_1 + 0x58,param_2,&local_98);
    goto LAB_00105dfa;
  }
  pRVar14 = param_3 + (ulong)(*(int *)(param_3 + 0x84) - 1) * 0x40;
  fVar18 = *(float *)pRVar14;
  fVar19 = *(float *)(pRVar14 + 4);
  fVar20 = *(float *)(pRVar14 + 8);
  fVar21 = *(float *)(pRVar14 + 0xc);
  fVar33 = *(float *)(pRVar14 + 0x10);
  fVar35 = *(float *)(pRVar14 + 0x14);
  fVar37 = *(float *)(pRVar14 + 0x18);
  fVar23 = *(float *)(pRVar14 + 0x1c);
  fVar27 = *(float *)(pRVar14 + 0x20);
  fVar28 = *(float *)(pRVar14 + 0x24);
  fVar29 = *(float *)(pRVar14 + 0x28);
  fVar30 = *(float *)(pRVar14 + 0x2c);
  fVar53 = *(float *)(pRVar14 + 0x30);
  fVar54 = *(float *)(pRVar14 + 0x34);
  fVar55 = *(float *)(pRVar14 + 0x38);
  fVar56 = *(float *)(pRVar14 + 0x3c);
  if (((__LC22 < (float)((uint)(fVar18 * fVar33 + fVar19 * fVar35 + fVar20 * fVar37) & _LC21)) ||
      (__LC22 < (float)((uint)(fVar18 * fVar27 + fVar19 * fVar28 + fVar20 * fVar29) & _LC21))) ||
     (__LC22 < (float)((uint)(fVar33 * fVar27 + fVar35 * fVar28 + fVar37 * fVar29) & _LC21))) {
LAB_00105e20:
    local_80 = 2;
    local_68 = 0.0;
  }
  else {
    local_68 = fVar18 * fVar18 + fVar19 * fVar19 + fVar20 * fVar20;
    fVar15 = fVar33 * fVar33 + fVar35 * fVar35 + fVar37 * fVar37;
    if (((__LC22 < (float)((uint)(local_68 - fVar15) & _LC21)) ||
        (fVar39 = fVar27 * fVar27 + fVar28 * fVar28 + fVar29 * fVar29,
        __LC22 < (float)((uint)(local_68 - fVar39) & _LC21))) ||
       (__LC22 < (float)((uint)(fVar15 - fVar39) & _LC21))) goto LAB_00105e20;
    if (local_68 < 0.0) {
      local_68 = sqrtf(local_68);
      local_80 = 1;
    }
    else {
      local_68 = SQRT(local_68);
      local_80 = 1;
    }
  }
  fVar15 = *(float *)(param_2 + 8);
  fVar39 = *(float *)(param_2 + 4);
  local_2c = *(undefined4 *)(param_2 + 0xc);
  local_90 = 0;
  local_58 = 0xffffffffffffffff;
  fVar24 = *(float *)param_2;
  local_38 = fVar15 * fVar27 + fVar53 + fVar39 * fVar33 + fVar24 * fVar18;
  local_34 = fVar15 * fVar28 + fVar54 + fVar39 * fVar35 + fVar24 * fVar19;
  local_30 = fVar15 * fVar29 + fVar55 + fVar39 * fVar37 + fVar24 * fVar20;
  fVar15 = *(float *)(param_2 + 0x10);
  local_28 = fVar15 * local_68;
  local_48 = local_28;
  fStack_44 = local_28;
  fStack_40 = local_28;
  fStack_3c = local_28;
  if ((local_80 == 2) &&
     (local_48 = fVar15, fStack_44 = fVar15, fStack_40 = fVar15, fStack_3c = fVar15, fVar15 != _LC23
     )) {
    fVar31 = (float)((uint)fVar15 ^ __LC24);
    auVar51._4_4_ = _LC23;
    auVar51._0_4_ = _LC23;
    auVar51._8_4_ = _LC23;
    auVar51._12_4_ = _LC23;
    fVar50 = fVar23 * fVar31;
    auVar16._4_4_ = _LC27;
    auVar16._0_4_ = _LC27;
    auVar16._8_4_ = _LC27;
    auVar16._12_4_ = _LC27;
    fVar32 = fVar31 * fVar18;
    fVar34 = fVar31 * fVar19;
    fVar36 = fVar31 * fVar20;
    fVar38 = fVar31 * fVar21;
    fVar23 = fVar23 * fVar15;
    fVar39 = fVar27 * fVar15 + fVar53;
    fVar24 = fVar28 * fVar15 + fVar54;
    fVar25 = fVar29 * fVar15 + fVar55;
    fVar26 = fVar30 * fVar15 + fVar56;
    fVar18 = fVar18 * fVar15;
    fVar19 = fVar19 * fVar15;
    fVar20 = fVar20 * fVar15;
    fVar21 = fVar21 * fVar15;
    fVar53 = fVar27 * fVar31 + fVar53;
    fVar54 = fVar28 * fVar31 + fVar54;
    fVar55 = fVar29 * fVar31 + fVar55;
    fVar56 = fVar30 * fVar31 + fVar56;
    fVar40 = fVar53 + fVar33 * fVar31;
    fVar41 = fVar54 + fVar35 * fVar31;
    fVar43 = fVar55 + fVar37 * fVar31;
    fVar45 = fVar56 + fVar50;
    fVar47 = fVar33 * fVar31 + fVar39;
    fVar48 = fVar35 * fVar31 + fVar24;
    fVar49 = fVar37 * fVar31 + fVar25;
    fVar50 = fVar50 + fVar26;
    fVar39 = fVar39 + fVar33 * fVar15;
    fVar24 = fVar24 + fVar35 * fVar15;
    fVar25 = fVar25 + fVar37 * fVar15;
    fVar26 = fVar26 + fVar23;
    fVar27 = fVar32 + fVar47;
    fVar28 = fVar34 + fVar48;
    fVar29 = fVar36 + fVar49;
    fVar30 = fVar38 + fVar50;
    fVar31 = fVar40 + fVar18;
    fVar42 = fVar41 + fVar19;
    fVar44 = fVar43 + fVar20;
    fVar46 = fVar45 + fVar21;
    fVar40 = fVar40 + fVar32;
    fVar41 = fVar41 + fVar34;
    fVar43 = fVar43 + fVar36;
    fVar45 = fVar45 + fVar38;
    fVar47 = fVar47 + fVar18;
    fVar48 = fVar48 + fVar19;
    fVar49 = fVar49 + fVar20;
    fVar50 = fVar50 + fVar21;
    auVar12._4_4_ = fVar41;
    auVar12._0_4_ = fVar40;
    auVar12._8_4_ = fVar43;
    auVar12._12_4_ = fVar45;
    auVar52 = minps(auVar51,auVar12);
    auVar13._4_4_ = fVar41;
    auVar13._0_4_ = fVar40;
    auVar13._8_4_ = fVar43;
    auVar13._12_4_ = fVar45;
    auVar17 = maxps(auVar16,auVar13);
    auVar22._4_4_ = fVar28;
    auVar22._0_4_ = fVar27;
    auVar22._8_4_ = fVar29;
    auVar22._12_4_ = fVar30;
    auVar52 = minps(auVar52,auVar22);
    auVar1._4_4_ = fVar28;
    auVar1._0_4_ = fVar27;
    auVar1._8_4_ = fVar29;
    auVar1._12_4_ = fVar30;
    auVar17 = maxps(auVar17,auVar1);
    fVar53 = fVar53 + fVar33 * fVar15;
    fVar54 = fVar54 + fVar35 * fVar15;
    fVar55 = fVar55 + fVar37 * fVar15;
    fVar56 = fVar56 + fVar23;
    fVar33 = fVar32 + fVar39;
    fVar35 = fVar34 + fVar24;
    fVar37 = fVar36 + fVar25;
    fVar23 = fVar38 + fVar26;
    fVar39 = fVar39 + fVar18;
    fVar24 = fVar24 + fVar19;
    fVar25 = fVar25 + fVar20;
    fVar26 = fVar26 + fVar21;
    fVar32 = fVar32 + fVar53;
    fVar34 = fVar34 + fVar54;
    fVar36 = fVar36 + fVar55;
    fVar38 = fVar38 + fVar56;
    fVar53 = fVar53 + fVar18;
    fVar54 = fVar54 + fVar19;
    fVar55 = fVar55 + fVar20;
    fVar56 = fVar56 + fVar21;
    auVar10._4_4_ = fVar34;
    auVar10._0_4_ = fVar32;
    auVar10._8_4_ = fVar36;
    auVar10._12_4_ = fVar38;
    auVar52 = minps(auVar52,auVar10);
    auVar11._4_4_ = fVar34;
    auVar11._0_4_ = fVar32;
    auVar11._8_4_ = fVar36;
    auVar11._12_4_ = fVar38;
    auVar17 = maxps(auVar17,auVar11);
    auVar4._4_4_ = fVar35;
    auVar4._0_4_ = fVar33;
    auVar4._8_4_ = fVar37;
    auVar4._12_4_ = fVar23;
    auVar17 = maxps(auVar17,auVar4);
    auVar5._4_4_ = fVar35;
    auVar5._0_4_ = fVar33;
    auVar5._8_4_ = fVar37;
    auVar5._12_4_ = fVar23;
    auVar52 = minps(auVar52,auVar5);
    auVar6._4_4_ = fVar42;
    auVar6._0_4_ = fVar31;
    auVar6._8_4_ = fVar44;
    auVar6._12_4_ = fVar46;
    auVar17 = maxps(auVar17,auVar6);
    auVar7._4_4_ = fVar42;
    auVar7._0_4_ = fVar31;
    auVar7._8_4_ = fVar44;
    auVar7._12_4_ = fVar46;
    auVar52 = minps(auVar52,auVar7);
    auVar8._4_4_ = fVar48;
    auVar8._0_4_ = fVar47;
    auVar8._8_4_ = fVar49;
    auVar8._12_4_ = fVar50;
    auVar17 = maxps(auVar17,auVar8);
    auVar9._4_4_ = fVar48;
    auVar9._0_4_ = fVar47;
    auVar9._8_4_ = fVar49;
    auVar9._12_4_ = fVar50;
    auVar22 = minps(auVar52,auVar9);
    auVar2._4_4_ = fVar54;
    auVar2._0_4_ = fVar53;
    auVar2._8_4_ = fVar55;
    auVar2._12_4_ = fVar56;
    auVar52 = maxps(auVar17,auVar2);
    auVar3._4_4_ = fVar54;
    auVar3._0_4_ = fVar53;
    auVar3._8_4_ = fVar55;
    auVar3._12_4_ = fVar56;
    auVar22 = minps(auVar22,auVar3);
    auVar17._4_4_ = fVar24;
    auVar17._0_4_ = fVar39;
    auVar17._8_4_ = fVar25;
    auVar17._12_4_ = fVar26;
    auVar17 = maxps(auVar52,auVar17);
    auVar52._4_4_ = fVar24;
    auVar52._0_4_ = fVar39;
    auVar52._8_4_ = fVar25;
    auVar52._12_4_ = fVar26;
    auVar52 = minps(auVar22,auVar52);
    local_48 = (auVar17._0_4_ - auVar52._0_4_) * _LC29;
    fStack_44 = (auVar17._4_4_ - auVar52._4_4_) * _LC29;
    fStack_40 = (auVar17._8_4_ - auVar52._8_4_) * _LC29;
    fStack_3c = (auVar17._12_4_ - auVar52._12_4_) * _LC29;
  }
  (**(code **)(param_1 + 0x88))(param_1 + 0x58,&local_38,&local_98);
LAB_00105dfa:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::Buffer::~Buffer() */

void __thiscall embree::Buffer::~Buffer(Buffer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


