
/* _FUN() */

void JPH::GetRTTIOfType(JPH::LinearCurve::Point*)::{lambda()#1}::_FUN(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*Allocate)(8);
  *puVar1 = 0;
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::LinearCurve::Point*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100029. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::LinearCurve*)::{lambda()#1}::_FUN(void)

{
  undefined1 (*pauVar1) [16];
  
  pauVar1 = (undefined1 (*) [16])(*Allocate)(0x18);
  *(undefined8 *)pauVar1[1] = 0;
  *pauVar1 = (undefined1  [16])0x0;
  return;
}



/* JPH::LinearCurve::sCreateRTTI(JPH::RTTI&) */

void JPH::LinearCurve::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::LinearCurve*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = Free;
  if (param_1 != (void *)0x0) {
    if (*(long *)((long)param_1 + 0x10) != 0) {
      *(undefined8 *)param_1 = 0;
      (*pcVar1)();
    }
                    /* WARNING: Could not recover jumptable at 0x001000aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* JPH::LinearCurve::Point::sCreateRTTI(JPH::RTTI&) */

void JPH::LinearCurve::Point::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* JPH::GetRTTIOfType(JPH::LinearCurve::Point*) */

undefined1 * JPH::GetRTTIOfType(Point *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::LinearCurve::Point*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::LinearCurve::Point*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::LinearCurve::Point*)::rtti,"LinearCurve::Point",8,
                      GetRTTIOfType(JPH::LinearCurve::Point*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::LinearCurve::Point*)::{lambda(void*)#1}::_FUN,
                      LinearCurve::Point::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::LinearCurve::Point*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::LinearCurve::Point*)::rtti);
      return GetRTTIOfType(JPH::LinearCurve::Point*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::LinearCurve::Point*)::rtti;
}



/* JPH::GetRTTIOfType(JPH::LinearCurve*) */

undefined1 * JPH::GetRTTIOfType(LinearCurve *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::LinearCurve*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::LinearCurve*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::LinearCurve*)::rtti,"LinearCurve",0x18,
                      GetRTTIOfType(JPH::LinearCurve*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::LinearCurve*)::{lambda(void*)#1}::_FUN,
                      LinearCurve::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::LinearCurve*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::LinearCurve*)::rtti);
      return GetRTTIOfType(JPH::LinearCurve*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::LinearCurve*)::rtti;
}



/* JPH::LinearCurve::GetValue(float) const */

ulong JPH::LinearCurve::GetValue(float param_1)

{
  float *pfVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  long *in_RDI;
  undefined1 in_register_00001204 [12];
  undefined1 auVar7 [16];
  
  lVar2 = *in_RDI;
  if (lVar2 == 0) {
    return 0;
  }
  pfVar3 = (float *)in_RDI[2];
  lVar4 = lVar2 * 8 >> 3;
  pfVar6 = pfVar3;
  while (lVar5 = lVar4, 0 < lVar4) {
    while( true ) {
      lVar4 = lVar5 >> 1;
      pfVar1 = pfVar6 + lVar4 * 2;
      if (param_1 < *pfVar1 || param_1 == *pfVar1) break;
      pfVar6 = pfVar1 + 2;
      lVar5 = (lVar5 - lVar4) + -1;
      if (lVar5 < 1) goto LAB_00100264;
    }
  }
LAB_00100264:
  if (pfVar3 == pfVar6) {
    return (ulong)(uint)pfVar3[1];
  }
  if (pfVar6 == pfVar3 + lVar2 * 2) {
    return (ulong)(uint)pfVar3[lVar2 * 2 + -1];
  }
  auVar7._0_4_ = ((param_1 - pfVar6[-2]) * (pfVar6[1] - pfVar6[-1])) / (*pfVar6 - pfVar6[-2]) +
                 pfVar6[-1];
  auVar7._4_12_ = in_register_00001204;
  return auVar7._0_8_;
}



/* JPH::LinearCurve::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall JPH::LinearCurve::SaveBinaryState(LinearCurve *this,StreamOut *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = (uint)*(undefined8 *)this;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_24,4);
  cVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1 + 0x10))
              (param_1,*(undefined8 *)(this + 0x10),(ulong)local_24 << 3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::LinearCurve::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall JPH::LinearCurve::RestoreBinaryState(LinearCurve *this,StreamIn *param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = (uint)*(undefined8 *)this;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_34,4);
  cVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
    if (cVar2 == '\0') {
      uVar6 = (ulong)local_34;
      lVar3 = *(long *)(this + 0x10);
      lVar1 = uVar6 * 8;
      lVar4 = lVar1;
      if (*(ulong *)(this + 8) < uVar6) {
        lVar3 = (*_Reallocate)(lVar3,*(ulong *)(this + 8) << 3,lVar1);
        *(ulong *)(this + 8) = uVar6;
        *(long *)(this + 0x10) = lVar3;
        lVar4 = (ulong)local_34 << 3;
      }
      puVar5 = (undefined8 *)(lVar3 + *(long *)this * 8);
      if (puVar5 < (undefined8 *)(lVar3 + lVar1)) {
        if (puVar5 == (undefined8 *)0x0) goto LAB_001003ff;
        do {
          *puVar5 = 0;
LAB_001003ff:
          puVar5 = puVar5 + 1;
        } while (puVar5 < (undefined8 *)(lVar3 + lVar1));
      }
      lVar1 = *(long *)param_1;
      *(ulong *)this = uVar6;
      (**(code **)(lVar1 + 0x10))(param_1,lVar3,lVar4);
      goto LAB_0010039e;
    }
  }
  *(undefined8 *)this = 0;
LAB_0010039e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::GetRTTIOfType(JPH::LinearCurve::Point*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC3;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


