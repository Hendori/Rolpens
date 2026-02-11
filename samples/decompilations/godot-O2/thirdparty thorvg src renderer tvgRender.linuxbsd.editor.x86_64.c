
/* tvg::RenderMethod::ref() */

int __thiscall tvg::RenderMethod::ref(RenderMethod *this)

{
  int iVar1;
  int unaff_EBP;
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)0x0;
  iVar1 = tvg::TaskScheduler::threads();
  if (iVar1 != 0) {
    __mutex = (pthread_mutex_t *)(this + 0x10);
    iVar1 = pthread_mutex_lock(__mutex);
    if (iVar1 != 0) {
      std::__throw_system_error(iVar1);
      goto LAB_00100050;
    }
  }
  unaff_EBP = *(int *)(this + 8) + 1;
  *(int *)(this + 8) = unaff_EBP;
  iVar1 = tvg::TaskScheduler::threads();
  if (iVar1 == 0) {
    return unaff_EBP;
  }
LAB_00100050:
  pthread_mutex_unlock(__mutex);
  return unaff_EBP;
}



/* tvg::RenderMethod::unref() */

int __thiscall tvg::RenderMethod::unref(RenderMethod *this)

{
  int iVar1;
  int unaff_EBP;
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)0x0;
  iVar1 = tvg::TaskScheduler::threads();
  if (iVar1 != 0) {
    __mutex = (pthread_mutex_t *)(this + 0x10);
    iVar1 = pthread_mutex_lock(__mutex);
    if (iVar1 != 0) {
      std::__throw_system_error(iVar1);
      goto LAB_001000b0;
    }
  }
  unaff_EBP = *(int *)(this + 8) + -1;
  *(int *)(this + 8) = unaff_EBP;
  iVar1 = tvg::TaskScheduler::threads();
  if (iVar1 == 0) {
    return unaff_EBP;
  }
LAB_001000b0:
  pthread_mutex_unlock(__mutex);
  return unaff_EBP;
}



/* tvg::RenderRegion::intersect(tvg::RenderRegion const&) */

void __thiscall tvg::RenderRegion::intersect(RenderRegion *this,RenderRegion *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)this;
  iVar1 = *(int *)param_1;
  iVar2 = *(int *)(this + 4);
  iVar3 = *(int *)(param_1 + 4);
  iVar4 = iVar1;
  if (iVar1 <= iVar7) {
    iVar4 = iVar7;
  }
  iVar5 = iVar3;
  if (iVar3 <= iVar2) {
    iVar5 = iVar2;
  }
  iVar6 = iVar7 + *(int *)(this + 8);
  if (iVar1 + *(int *)(param_1 + 8) < iVar7 + *(int *)(this + 8)) {
    iVar6 = iVar1 + *(int *)(param_1 + 8);
  }
  iVar6 = iVar6 - iVar4;
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  iVar7 = iVar2 + *(int *)(this + 0xc);
  if (iVar3 + *(int *)(param_1 + 0xc) < iVar2 + *(int *)(this + 0xc)) {
    iVar7 = iVar3 + *(int *)(param_1 + 0xc);
  }
  iVar7 = iVar7 - iVar5;
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  *(ulong *)this = CONCAT44(iVar5,iVar4);
  *(ulong *)(this + 8) = CONCAT44(iVar7,iVar6);
  return;
}



/* tvg::RenderRegion::add(tvg::RenderRegion const&) */

void __thiscall tvg::RenderRegion::add(RenderRegion *this,RenderRegion *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = *(int *)param_1;
  iVar6 = *(int *)this;
  iVar7 = *(int *)(this + 8);
  iVar2 = iVar1;
  if (iVar1 < iVar6) {
    *(int *)this = iVar1;
    iVar7 = iVar7 + (iVar6 - iVar1);
    iVar2 = *(int *)param_1;
    *(int *)(this + 8) = iVar7;
    iVar6 = iVar1;
  }
  iVar1 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(this + 4);
  iVar5 = *(int *)(this + 0xc);
  iVar3 = iVar1;
  if (iVar1 < iVar4) {
    *(int *)(this + 4) = iVar1;
    iVar5 = iVar5 + (iVar4 - iVar1);
    iVar3 = *(int *)(param_1 + 4);
    *(int *)(this + 0xc) = iVar5;
    iVar4 = iVar1;
  }
  if (iVar7 + iVar6 < iVar2 + *(int *)(param_1 + 8)) {
    *(int *)(this + 8) = (iVar2 + *(int *)(param_1 + 8)) - iVar6;
  }
  if (iVar5 + iVar4 < iVar3 + *(int *)(param_1 + 0xc)) {
    *(int *)(this + 0xc) = (iVar3 + *(int *)(param_1 + 0xc)) - iVar4;
  }
  return;
}


