
/* void std::__cxx11::string::_M_construct<char const*>(char const*, char const*,
   std::forward_iterator_tag) [clone .isra.0] */

void std::__cxx11::string::_M_construct<char_const*>
               (ulong *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *__dest;
  ulong __n;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  __n = param_3 - (long)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = __n;
  if (__n < 0x10) {
    __dest = (undefined1 *)*param_1;
    if (__n == 1) {
      *__dest = *param_2;
      __dest = (undefined1 *)*param_1;
      goto LAB_00100044;
    }
    if (__n == 0) goto LAB_00100044;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
  }
  memcpy(__dest,param_2,__n);
  __dest = (undefined1 *)*param_1;
LAB_00100044:
  param_1[1] = local_28;
  __dest[local_28] = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VHACD::CreateVHACD_ASYNC() */

undefined8 * VHACD::CreateVHACD_ASYNC(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x108);
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[2] = &PTR__MyHACD_API_00102a68;
  *(undefined2 *)(puVar1 + 0xb) = 0;
  puVar1[0x15] = puVar1 + 0x17;
  puVar1[0x19] = puVar1 + 0x1b;
  *puVar1 = &PTR_Cancel_001029a8;
  puVar1[1] = &PTR__MyHACD_API_00102a40;
  *(undefined1 (*) [16])(puVar1 + 3) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 8) = (undefined1  [16])0x0;
  puVar1[10] = 0;
  puVar1[0x10] = 0;
  *(undefined2 *)(puVar1 + 0x11) = 0;
  puVar1[0x14] = 0;
  puVar1[0x16] = 0;
  *(undefined1 *)(puVar1 + 0x17) = 0;
  puVar1[0x1a] = 0;
  *(undefined1 *)(puVar1 + 0x1b) = 0;
  puVar1[0x1d] = puVar1 + 0x1f;
  puVar1[0x1e] = 0;
  *(undefined1 *)(puVar1 + 0x1f) = 0;
  *(undefined1 (*) [16])(puVar1 + 0xc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0xe) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0x12) = (undefined1  [16])0x0;
  uVar2 = VHACD::CreateVHACD();
  puVar1[9] = uVar2;
  return puVar1;
}



/* std::thread::_M_thread_deps_never_run() */

void std::thread::_M_thread_deps_never_run(void)

{
  return;
}



/* VHACD::MyHACD_API::getHullCount() */

undefined4 __thiscall VHACD::MyHACD_API::getHullCount(MyHACD_API *this)

{
  return *(undefined4 *)(this + 0x28);
}



/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<VHACD::MyHACD_API::Compute(double
   const*, unsigned int, unsigned int const*, unsigned int, VHACD::IVHACD::Parameters
   const&)::{lambda()#1}> > >::~_State_impl() */

void __thiscall
std::thread::
_State_impl<std::thread::_Invoker<std::tuple<VHACD::MyHACD_API::Compute(double_const*,unsigned_int,unsigned_int_const*,unsigned_int,VHACD::IVHACD::Parameters_const&)::{lambda()#1}>>>
::~_State_impl(_State_impl<std::thread::_Invoker<std::tuple<VHACD::MyHACD_API::Compute(double_const*,unsigned_int,unsigned_int_const*,unsigned_int,VHACD::IVHACD::Parameters_const&)::_lambda()_1_>>>
               *this)

{
  *(undefined ***)this = &PTR___State_impl_00102a90;
  std::thread::_State::~_State((_State *)this);
  return;
}



/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<VHACD::MyHACD_API::Compute(double
   const*, unsigned int, unsigned int const*, unsigned int, VHACD::IVHACD::Parameters
   const&)::{lambda()#1}> > >::~_State_impl() */

void __thiscall
std::thread::
_State_impl<std::thread::_Invoker<std::tuple<VHACD::MyHACD_API::Compute(double_const*,unsigned_int,unsigned_int_const*,unsigned_int,VHACD::IVHACD::Parameters_const&)::{lambda()#1}>>>
::~_State_impl(_State_impl<std::thread::_Invoker<std::tuple<VHACD::MyHACD_API::Compute(double_const*,unsigned_int,unsigned_int_const*,unsigned_int,VHACD::IVHACD::Parameters_const&)::_lambda()_1_>>>
               *this)

{
  *(undefined ***)this = &PTR___State_impl_00102a90;
  std::thread::_State::~_State((_State *)this);
  operator_delete(this,0x70);
  return;
}



/* VHACD::MyHACD_API::GetConvexHull(unsigned int, VHACD::IVHACD::ConvexHull&) const */

void __thiscall VHACD::MyHACD_API::GetConvexHull(MyHACD_API *this,uint param_1,ConvexHull *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 < *(uint *)(this + 0x28)) {
    puVar1 = (undefined8 *)(*(long *)(this + 0x30) + (ulong)param_1 * 0x38);
    uVar2 = puVar1[1];
    *(undefined8 *)param_2 = *puVar1;
    *(undefined8 *)(param_2 + 8) = uVar2;
    uVar2 = puVar1[3];
    *(undefined8 *)(param_2 + 0x10) = puVar1[2];
    *(undefined8 *)(param_2 + 0x18) = uVar2;
    uVar2 = puVar1[5];
    *(undefined8 *)(param_2 + 0x20) = puVar1[4];
    *(undefined8 *)(param_2 + 0x28) = uVar2;
    *(undefined8 *)(param_2 + 0x30) = puVar1[6];
  }
  return;
}



/* VHACD::MyHACD_API::OCLRelease(VHACD::IVHACD::IUserLogger*) */

void VHACD::MyHACD_API::OCLRelease(IUserLogger *param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(param_1 + 0x48) + 0x40);
  if (UNRECOVERED_JUMPTABLE_00 == OCLRelease) {
    plVar1 = (long *)(*(long **)(param_1 + 0x48))[9];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x40);
    if (UNRECOVERED_JUMPTABLE_00 == OCLRelease) {
      plVar1 = (long *)plVar1[9];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x40);
      if (UNRECOVERED_JUMPTABLE_00 != OCLRelease) goto LAB_00100328;
      plVar1 = (long *)plVar1[9];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x40);
      if (UNRECOVERED_JUMPTABLE_00 == OCLRelease) {
        plVar1 = (long *)plVar1[9];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x40);
        if (UNRECOVERED_JUMPTABLE_00 != OCLRelease) goto LAB_00100328;
        plVar1 = (long *)plVar1[9];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x40);
        if (UNRECOVERED_JUMPTABLE_00 == OCLRelease) {
          plVar1 = (long *)plVar1[9];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x40);
          if (UNRECOVERED_JUMPTABLE_00 != OCLRelease) goto LAB_00100328;
          plVar1 = (long *)plVar1[9];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x40);
          if (UNRECOVERED_JUMPTABLE_00 == OCLRelease) {
                    /* WARNING: Could not recover jumptable at 0x00100316. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[9] + 0x40))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00100320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00100328:
                    /* WARNING: Could not recover jumptable at 0x00100328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* VHACD::MyHACD_API::OCLInit(void*, VHACD::IVHACD::IUserLogger*) */

void __thiscall VHACD::MyHACD_API::OCLInit(MyHACD_API *this,void *param_1,IUserLogger *param_2)

{
  code *UNRECOVERED_JUMPTABLE_00;
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x48);
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
  if (UNRECOVERED_JUMPTABLE_00 == OCLInit) {
    plVar1 = (long *)plVar1[9];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
    if (UNRECOVERED_JUMPTABLE_00 == OCLInit) {
      plVar1 = (long *)plVar1[9];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
      if (UNRECOVERED_JUMPTABLE_00 != OCLInit) goto LAB_001003f0;
      plVar1 = (long *)plVar1[9];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
      if (UNRECOVERED_JUMPTABLE_00 == OCLInit) {
        plVar1 = (long *)plVar1[9];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
        if (UNRECOVERED_JUMPTABLE_00 != OCLInit) goto LAB_001003f0;
        plVar1 = (long *)plVar1[9];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
        if (UNRECOVERED_JUMPTABLE_00 == OCLInit) {
          plVar1 = (long *)plVar1[9];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
          if (UNRECOVERED_JUMPTABLE_00 != OCLInit) goto LAB_001003f0;
          plVar1 = (long *)plVar1[9];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
          if (UNRECOVERED_JUMPTABLE_00 == OCLInit) {
                    /* WARNING: Could not recover jumptable at 0x001003d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[9] + 0x38))((long *)plVar1[9],param_1,param_2);
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x001003e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_1,param_2);
    return;
  }
LAB_001003f0:
                    /* WARNING: Could not recover jumptable at 0x001003f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_1,param_2);
  return;
}



/* VHACD::MyHACD_API::Cancel() */

void __thiscall VHACD::MyHACD_API::Cancel(MyHACD_API *this)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  MyHACD_API *pMVar5;
  long lVar6;
  uint uVar7;
  long in_FS_OFFSET;
  MyHACD_API *local_48;
  undefined8 local_40;
  long alStack_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x58] != (MyHACD_API)0x0) {
    (**(code **)**(undefined8 **)(this + 0x48))();
  }
  if (*(long *)(this + 0x50) == 0) goto LAB_0010053d;
  std::thread::join();
  plVar1 = *(long **)(this + 0x50);
  if (plVar1 != (long *)0x0) {
    if (*plVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    operator_delete(plVar1,8);
  }
  *(undefined8 *)(this + 0x50) = 0;
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x60));
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar2);
  }
  LOCK();
  this[0x89] = (MyHACD_API)0x1;
  UNLOCK();
  local_48 = (MyHACD_API *)alStack_38;
  std::__cxx11::string::_M_construct<char_const*>
            (&local_48,"Convex Decomposition thread canceled\n");
  pMVar5 = *(MyHACD_API **)(this + 0xe8);
  if (pMVar5 == this + 0xf8) {
    if (local_48 == (MyHACD_API *)alStack_38) goto LAB_00100560;
    *(MyHACD_API **)(this + 0xe8) = local_48;
    *(ulong *)(this + 0xf0) = local_40;
    *(long *)(this + 0xf8) = alStack_38[0];
    local_48 = (MyHACD_API *)alStack_38;
  }
  else if (local_48 == (MyHACD_API *)alStack_38) {
LAB_00100560:
    if (local_40 != 0) {
      if (local_40 == 1) {
        *pMVar5 = alStack_38[0]._0_1_;
        pMVar5 = *(MyHACD_API **)(this + 0xe8);
      }
      else {
        uVar3 = (uint)local_40;
        uVar4 = local_40 & 0xffffffff;
        if (uVar3 < 8) {
          if ((local_40 & 4) == 0) {
            if (uVar3 != 0) {
              *pMVar5 = alStack_38[0]._0_1_;
              if ((local_40 & 2) == 0) goto LAB_0010059a;
              *(undefined2 *)(pMVar5 + (uVar4 - 2)) =
                   *(undefined2 *)((long)alStack_38 + (uVar4 - 2));
              pMVar5 = *(MyHACD_API **)(this + 0xe8);
            }
          }
          else {
            *(undefined4 *)pMVar5 = (undefined4)alStack_38[0];
            *(undefined4 *)(pMVar5 + (uVar4 - 4)) = *(undefined4 *)((long)alStack_38 + (uVar4 - 4));
            pMVar5 = *(MyHACD_API **)(this + 0xe8);
          }
        }
        else {
          *(long *)pMVar5 = alStack_38[0];
          *(undefined8 *)(pMVar5 + ((local_40 & 0xffffffff) - 8)) =
               *(undefined8 *)((long)alStack_38 + ((local_40 & 0xffffffff) - 8));
          lVar6 = (long)pMVar5 - ((ulong)(pMVar5 + 8) & 0xfffffffffffffff8);
          uVar3 = (int)lVar6 + uVar3 & 0xfffffff8;
          if (7 < uVar3) {
            uVar4 = 0;
            do {
              uVar7 = (int)uVar4 + 8;
              *(undefined8 *)(((ulong)(pMVar5 + 8) & 0xfffffffffffffff8) + uVar4) =
                   *(undefined8 *)((MyHACD_API *)alStack_38 + (uVar4 - lVar6));
              uVar4 = (ulong)uVar7;
            } while (uVar7 < uVar3);
          }
LAB_0010059a:
          pMVar5 = *(MyHACD_API **)(this + 0xe8);
        }
      }
    }
    *(ulong *)(this + 0xf0) = local_40;
    pMVar5[local_40] = (MyHACD_API)0x0;
  }
  else {
    lVar6 = *(long *)(this + 0xf8);
    *(MyHACD_API **)(this + 0xe8) = local_48;
    *(ulong *)(this + 0xf0) = local_40;
    *(long *)(this + 0xf8) = alStack_38[0];
    local_48 = (MyHACD_API *)alStack_38;
    if (pMVar5 != (MyHACD_API *)0x0) {
      local_48 = pMVar5;
      alStack_38[0] = lVar6;
    }
  }
  local_40 = 0;
  *local_48 = (MyHACD_API)0x0;
  if (local_48 != (MyHACD_API *)alStack_38) {
    operator_delete(local_48,alStack_38[0] + 1);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x60));
LAB_0010053d:
  LOCK();
  this[0x59] = (MyHACD_API)0x0;
  UNLOCK();
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VHACD::MyHACD_API::~MyHACD_API() */

void __thiscall VHACD::MyHACD_API::~MyHACD_API(MyHACD_API *this)

{
  undefined1 (*pauVar1) [16];
  MyHACD_API *this_00;
  code *pcVar2;
  ulong uVar3;
  
  *(undefined ***)(this + 0x10) = &PTR__MyHACD_API_00102a68;
  *(undefined ***)this = &PTR_Cancel_001029a8;
  *(undefined ***)(this + 8) = &PTR__MyHACD_API_00102a40;
  for (uVar3 = 0; (uint)uVar3 < *(uint *)(this + 0x28); uVar3 = (ulong)((uint)uVar3 + 1)) {
    pauVar1 = (undefined1 (*) [16])(*(long *)(this + 0x30) + uVar3 * 0x38);
    free(*(void **)(*pauVar1 + 8));
    free(*(void **)*pauVar1);
    *pauVar1 = (undefined1  [16])0x0;
  }
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x30));
  }
  *(undefined8 *)(this + 0x30) = 0;
  LOCK();
  *(uint *)(this + 0x28) = 0;
  UNLOCK();
  free(*(void **)(this + 0x18));
  *(undefined8 *)(this + 0x18) = 0;
  free(*(void **)(this + 0x20));
  *(undefined8 *)(this + 0x20) = 0;
  Cancel(this);
  this_00 = *(MyHACD_API **)(this + 0x48);
  pcVar2 = *(code **)(*(long *)this_00 + 0x30);
  if (pcVar2 == Release) {
    pcVar2 = *(code **)(*(long *)this_00 + 0x60);
    if (pcVar2 == ~MyHACD_API) {
      ~MyHACD_API(this_00);
      operator_delete(this_00,0x108);
    }
    else {
      (*pcVar2)();
    }
  }
  else {
    (*pcVar2)(this_00);
  }
  if (*(MyHACD_API **)(this + 0xe8) != this + 0xf8) {
    operator_delete(*(MyHACD_API **)(this + 0xe8),*(long *)(this + 0xf8) + 1);
  }
  if (*(MyHACD_API **)(this + 200) != this + 0xd8) {
    operator_delete(*(MyHACD_API **)(this + 200),*(long *)(this + 0xd8) + 1);
  }
  if (*(MyHACD_API **)(this + 0xa8) != this + 0xb8) {
    operator_delete(*(MyHACD_API **)(this + 0xa8),*(long *)(this + 0xb8) + 1);
    return;
  }
  return;
}



/* non-virtual thunk to VHACD::MyHACD_API::~MyHACD_API() */

void __thiscall VHACD::MyHACD_API::~MyHACD_API(MyHACD_API *this)

{
  ~MyHACD_API(this + -8);
  return;
}



/* non-virtual thunk to VHACD::MyHACD_API::~MyHACD_API() */

void __thiscall VHACD::MyHACD_API::~MyHACD_API(MyHACD_API *this)

{
  ~MyHACD_API(this + -0x10);
  return;
}



/* VHACD::MyHACD_API::~MyHACD_API() */

void __thiscall VHACD::MyHACD_API::~MyHACD_API(MyHACD_API *this)

{
  ~MyHACD_API(this);
  operator_delete(this,0x108);
  return;
}



/* non-virtual thunk to VHACD::MyHACD_API::~MyHACD_API() */

void __thiscall VHACD::MyHACD_API::~MyHACD_API(MyHACD_API *this)

{
  ~MyHACD_API(this + -0x10);
  operator_delete(this + -0x10,0x108);
  return;
}



/* non-virtual thunk to VHACD::MyHACD_API::~MyHACD_API() */

void __thiscall VHACD::MyHACD_API::~MyHACD_API(MyHACD_API *this)

{
  ~MyHACD_API(this + -8);
  operator_delete(this + -8,0x108);
  return;
}



/* VHACD::MyHACD_API::release() */

void __thiscall VHACD::MyHACD_API::release(MyHACD_API *this)

{
  if (*(code **)(*(long *)this + 0x60) == ~MyHACD_API) {
    ~MyHACD_API(this);
    operator_delete(this,0x108);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00100921. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x60))();
  return;
}



/* VHACD::MyHACD_API::Release() */

void __thiscall VHACD::MyHACD_API::Release(MyHACD_API *this)

{
  if (*(code **)(*(long *)this + 0x60) == ~MyHACD_API) {
    ~MyHACD_API(this);
    operator_delete(this,0x108);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00100961. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x60))();
  return;
}



/* VHACD::MyHACD_API::Compute(double const*, unsigned int, unsigned int const*, unsigned int,
   VHACD::IVHACD::Parameters const&) */

undefined8 __thiscall
VHACD::MyHACD_API::Compute
          (MyHACD_API *this,double *param_1,uint param_2,uint *param_3,uint param_4,
          Parameters *param_5)

{
  undefined1 (*pauVar1) [16];
  Parameters PVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  void *pvVar14;
  void *pvVar15;
  undefined8 *puVar16;
  size_t __size;
  size_t __size_00;
  ulong uVar17;
  long in_FS_OFFSET;
  long *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Cancel(this);
  for (uVar17 = 0; (uint)uVar17 < *(uint *)(this + 0x28); uVar17 = (ulong)((uint)uVar17 + 1)) {
    pauVar1 = (undefined1 (*) [16])(*(long *)(this + 0x30) + uVar17 * 0x38);
    free(*(void **)(*pauVar1 + 8));
    free(*(void **)*pauVar1);
    *pauVar1 = (undefined1  [16])0x0;
  }
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x30));
  }
  *(undefined8 *)(this + 0x30) = 0;
  LOCK();
  *(uint *)(this + 0x28) = 0;
  UNLOCK();
  free(*(void **)(this + 0x18));
  free(*(void **)(this + 0x20));
  __size = (ulong)param_2 * 0x18;
  pvVar14 = malloc(__size);
  *(void **)(this + 0x18) = pvVar14;
  __size_00 = (ulong)param_4 * 0xc;
  pvVar15 = malloc(__size_00);
  *(void **)(this + 0x20) = pvVar15;
  __memcpy_chk(pvVar14,param_1,__size,__size);
  __memcpy_chk(pvVar15,param_3,__size_00,__size_00);
  LOCK();
  this[0x58] = (MyHACD_API)0x1;
  UNLOCK();
  puVar16 = (undefined8 *)operator_new(8);
  lVar4 = *(long *)param_5;
  lVar5 = *(long *)(param_5 + 8);
  lVar6 = *(long *)(param_5 + 0x10);
  lVar7 = *(long *)(param_5 + 0x18);
  *puVar16 = 0;
  uVar3 = *(undefined4 *)(param_5 + 0x50);
  lVar8 = *(long *)(param_5 + 0x20);
  lVar9 = *(long *)(param_5 + 0x28);
  lVar10 = *(long *)(param_5 + 0x30);
  lVar11 = *(long *)(param_5 + 0x38);
  lVar12 = *(long *)(param_5 + 0x40);
  lVar13 = *(long *)(param_5 + 0x48);
  PVar2 = param_5[0x54];
  local_48 = (long *)operator_new(0x70);
  *local_48 = (long)&PTR___State_impl_00102a90;
  local_48[1] = (long)this;
  *(uint *)(local_48 + 2) = param_2;
  *(uint *)((long)local_48 + 0x14) = param_4;
  *(undefined4 *)(local_48 + 0xd) = uVar3;
  *(Parameters *)((long)local_48 + 0x6c) = PVar2;
  local_48[3] = lVar4;
  local_48[4] = lVar5;
  local_48[5] = lVar6;
  local_48[6] = lVar7;
  local_48[7] = lVar8;
  local_48[8] = lVar9;
  local_48[9] = lVar10;
  local_48[10] = lVar11;
  local_48[0xb] = lVar12;
  local_48[0xc] = lVar13;
  std::thread::_M_start_thread(puVar16,&local_48,std::thread::_M_thread_deps_never_run);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 8))();
  }
  *(undefined8 **)(this + 0x50) = puVar16;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VHACD::MyHACD_API::Compute(float const*, unsigned int, unsigned int const*, unsigned int,
   VHACD::IVHACD::Parameters const&) */

undefined4 __thiscall
VHACD::MyHACD_API::Compute
          (MyHACD_API *this,float *param_1,uint param_2,uint *param_3,uint param_4,
          Parameters *param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  double *__ptr;
  double *pdVar3;
  float *pfVar4;
  float *pfVar5;
  
  __ptr = (double *)malloc((ulong)param_2 * 0x18);
  if (param_2 != 0) {
    pdVar3 = __ptr;
    pfVar4 = param_1;
    do {
      uVar1 = *(undefined8 *)pfVar4;
      *pdVar3 = (double)(float)uVar1;
      pdVar3[1] = (double)(float)((ulong)uVar1 >> 0x20);
      pfVar5 = pfVar4 + 3;
      pdVar3[2] = (double)pfVar4[2];
      pdVar3 = pdVar3 + 3;
      pfVar4 = pfVar5;
    } while (param_1 + (ulong)param_2 * 3 != pfVar5);
  }
  uVar2 = Compute(this,__ptr,param_2,param_3,param_4,param_5);
  free(__ptr);
  return uVar2;
}



/* WARNING: Control flow encountered bad instruction data */
/* VHACD::MyHACD_API::Log(char const*) */

void __thiscall VHACD::MyHACD_API::Log(MyHACD_API *this,char *param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  uint uVar2;
  size_t sVar3;
  ulong uVar4;
  MyHACD_API *pMVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  char *__s;
  char *pcVar9;
  long in_FS_OFFSET;
  long *plStack_b0;
  undefined8 uStack_a8;
  long alStack_a0 [4];
  MyHACD_API *pMStack_80;
  char *pcStack_78;
  MyHACD_API *pMStack_70;
  pthread_mutex_t *ppStack_68;
  undefined1 *puStack_60;
  MyHACD_API *local_58;
  undefined8 local_50;
  long alStack_48 [3];
  long local_30;
  
  __mutex = (pthread_mutex_t *)(this + 0x60);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_60 = (undefined1 *)0x100cc2;
  __s = param_1;
  iVar1 = pthread_mutex_lock(__mutex);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    puStack_60 = (undefined1 *)0x100ed8;
    std::__throw_system_error(iVar1);
  }
  LOCK();
  this[0x89] = (MyHACD_API)0x1;
  UNLOCK();
  local_58 = (MyHACD_API *)alStack_48;
  if (param_1 == (char *)0x0) {
    pcVar9 = "basic_string: construction from null is not valid";
    puStack_60 = (undefined1 *)0x100ee9;
    std::__throw_logic_error("basic_string: construction from null is not valid");
    alStack_a0[3] = *(long *)(in_FS_OFFSET + 0x28);
    pMStack_80 = this;
    pcStack_78 = param_1;
    pMStack_70 = (MyHACD_API *)alStack_48;
    ppStack_68 = __mutex;
    puStack_60 = (undefined1 *)&local_58;
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)(pcVar9 + 0x50));
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar1);
    }
    LOCK();
    pcVar9[0x79] = '\x01';
    UNLOCK();
    plStack_b0 = alStack_a0;
    if (__s == (char *)0x0) {
      std::__throw_logic_error("basic_string: construction from null is not valid");
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar3 = strlen(__s);
    std::__cxx11::string::_M_construct<char_const*>(&plStack_b0,__s,__s + sVar3);
    plVar7 = *(long **)(pcVar9 + 0xd8);
    if (plVar7 == (long *)(pcVar9 + 0xe8)) {
      if (plStack_b0 == alStack_a0) goto LAB_00101030;
      *(long **)(pcVar9 + 0xd8) = plStack_b0;
      *(ulong *)(pcVar9 + 0xe0) = uStack_a8;
      *(long *)(pcVar9 + 0xe8) = alStack_a0[0];
    }
    else {
      if (plStack_b0 == alStack_a0) {
LAB_00101030:
        if (uStack_a8 != 0) {
          if (uStack_a8 == 1) {
            *(undefined1 *)plVar7 = (undefined1)alStack_a0[0];
            plVar7 = *(long **)(pcVar9 + 0xd8);
          }
          else {
            uVar2 = (uint)uStack_a8;
            uVar4 = uStack_a8 & 0xffffffff;
            if (uVar2 < 8) {
              if ((uStack_a8 & 4) == 0) {
                if (uVar2 != 0) {
                  *(undefined1 *)plVar7 = (undefined1)alStack_a0[0];
                  if ((uStack_a8 & 2) == 0) goto LAB_0010106a;
                  *(undefined2 *)((long)plVar7 + (uVar4 - 2)) =
                       *(undefined2 *)((long)alStack_a0 + (uVar4 - 2));
                  plVar7 = *(long **)(pcVar9 + 0xd8);
                }
              }
              else {
                *(undefined4 *)plVar7 = (undefined4)alStack_a0[0];
                *(undefined4 *)((long)plVar7 + (uVar4 - 4)) =
                     *(undefined4 *)((long)alStack_a0 + (uVar4 - 4));
                plVar7 = *(long **)(pcVar9 + 0xd8);
              }
            }
            else {
              *plVar7 = alStack_a0[0];
              *(undefined8 *)((long)plVar7 + ((uStack_a8 & 0xffffffff) - 8)) =
                   *(undefined8 *)((long)alStack_a0 + ((uStack_a8 & 0xffffffff) - 8));
              lVar6 = (long)plVar7 - ((ulong)(plVar7 + 1) & 0xfffffffffffffff8);
              uVar2 = (int)lVar6 + uVar2 & 0xfffffff8;
              if (7 < uVar2) {
                uVar4 = 0;
                do {
                  uVar8 = (int)uVar4 + 8;
                  *(undefined8 *)(((ulong)(plVar7 + 1) & 0xfffffffffffffff8) + uVar4) =
                       *(undefined8 *)((long)alStack_a0 + (uVar4 - lVar6));
                  uVar4 = (ulong)uVar8;
                } while (uVar8 < uVar2);
              }
LAB_0010106a:
              plVar7 = *(long **)(pcVar9 + 0xd8);
            }
          }
        }
        *(ulong *)(pcVar9 + 0xe0) = uStack_a8;
        *(undefined1 *)((long)plVar7 + uStack_a8) = 0;
        lVar6 = alStack_a0[0];
        goto LAB_00100faf;
      }
      lVar6 = *(long *)(pcVar9 + 0xe8);
      *(long **)(pcVar9 + 0xd8) = plStack_b0;
      *(ulong *)(pcVar9 + 0xe0) = uStack_a8;
      *(long *)(pcVar9 + 0xe8) = alStack_a0[0];
      plStack_b0 = plVar7;
      if (plVar7 != (long *)0x0) goto LAB_00100faf;
    }
    plStack_b0 = alStack_a0;
    lVar6 = alStack_a0[0];
LAB_00100faf:
    alStack_a0[0] = lVar6;
    uStack_a8 = 0;
    *(undefined1 *)plStack_b0 = 0;
    if (plStack_b0 != alStack_a0) {
      operator_delete(plStack_b0,alStack_a0[0] + 1);
    }
    if (alStack_a0[3] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pthread_mutex_unlock((pthread_mutex_t *)(pcVar9 + 0x50));
    return;
  }
  puStack_60 = (undefined1 *)0x100cf2;
  sVar3 = strlen(param_1);
  puStack_60 = (undefined1 *)0x100d02;
  std::__cxx11::string::_M_construct<char_const*>(&local_58,param_1,param_1 + sVar3);
  pMVar5 = *(MyHACD_API **)(this + 0xe8);
  if (pMVar5 == this + 0xf8) {
    if (local_58 == (MyHACD_API *)alStack_48) goto LAB_00100dd0;
    *(MyHACD_API **)(this + 0xe8) = local_58;
    *(ulong *)(this + 0xf0) = local_50;
    *(long *)(this + 0xf8) = alStack_48[0];
  }
  else {
    if (local_58 == (MyHACD_API *)alStack_48) {
LAB_00100dd0:
      if (local_50 != 0) {
        if (local_50 == 1) {
          *pMVar5 = alStack_48[0]._0_1_;
          pMVar5 = *(MyHACD_API **)(this + 0xe8);
        }
        else {
          uVar2 = (uint)local_50;
          uVar4 = local_50 & 0xffffffff;
          if (uVar2 < 8) {
            if ((local_50 & 4) == 0) {
              if (uVar2 != 0) {
                *pMVar5 = alStack_48[0]._0_1_;
                if ((local_50 & 2) == 0) goto LAB_00100e0a;
                *(undefined2 *)(pMVar5 + (uVar4 - 2)) =
                     *(undefined2 *)((long)alStack_48 + (uVar4 - 2));
                pMVar5 = *(MyHACD_API **)(this + 0xe8);
              }
            }
            else {
              *(undefined4 *)pMVar5 = (undefined4)alStack_48[0];
              *(undefined4 *)(pMVar5 + (uVar4 - 4)) =
                   *(undefined4 *)((long)alStack_48 + (uVar4 - 4));
              pMVar5 = *(MyHACD_API **)(this + 0xe8);
            }
          }
          else {
            *(long *)pMVar5 = alStack_48[0];
            *(undefined8 *)(pMVar5 + ((local_50 & 0xffffffff) - 8)) =
                 *(undefined8 *)((long)alStack_48 + ((local_50 & 0xffffffff) - 8));
            lVar6 = (long)pMVar5 - ((ulong)(pMVar5 + 8) & 0xfffffffffffffff8);
            uVar2 = (int)lVar6 + uVar2 & 0xfffffff8;
            if (7 < uVar2) {
              uVar4 = 0;
              do {
                uVar8 = (int)uVar4 + 8;
                *(undefined8 *)(((ulong)(pMVar5 + 8) & 0xfffffffffffffff8) + uVar4) =
                     *(undefined8 *)((MyHACD_API *)alStack_48 + (uVar4 - lVar6));
                uVar4 = (ulong)uVar8;
              } while (uVar8 < uVar2);
            }
LAB_00100e0a:
            pMVar5 = *(MyHACD_API **)(this + 0xe8);
          }
        }
      }
      *(ulong *)(this + 0xf0) = local_50;
      pMVar5[local_50] = (MyHACD_API)0x0;
      lVar6 = alStack_48[0];
      goto LAB_00100d52;
    }
    lVar6 = *(long *)(this + 0xf8);
    *(MyHACD_API **)(this + 0xe8) = local_58;
    *(ulong *)(this + 0xf0) = local_50;
    *(long *)(this + 0xf8) = alStack_48[0];
    local_58 = pMVar5;
    if (pMVar5 != (MyHACD_API *)0x0) goto LAB_00100d52;
  }
  local_58 = (MyHACD_API *)alStack_48;
  lVar6 = alStack_48[0];
LAB_00100d52:
  alStack_48[0] = lVar6;
  local_50 = 0;
  *local_58 = (MyHACD_API)0x0;
  if (local_58 != (MyHACD_API *)alStack_48) {
    puStack_60 = (undefined1 *)0x100d75;
    operator_delete(local_58,alStack_48[0] + 1);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    puStack_60 = (undefined1 *)0x100edd;
    __stack_chk_fail();
  }
  pthread_mutex_unlock(__mutex);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* non-virtual thunk to VHACD::MyHACD_API::Log(char const*) */

void __thiscall VHACD::MyHACD_API::Log(MyHACD_API *this,char *param_1)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  ulong uVar4;
  MyHACD_API *pMVar5;
  long lVar6;
  uint uVar7;
  long in_FS_OFFSET;
  MyHACD_API *local_58;
  undefined8 local_50;
  long alStack_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x50));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  LOCK();
  this[0x79] = (MyHACD_API)0x1;
  UNLOCK();
  local_58 = (MyHACD_API *)alStack_48;
  if (param_1 == (char *)0x0) {
    std::__throw_logic_error("basic_string: construction from null is not valid");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar3 = strlen(param_1);
  std::__cxx11::string::_M_construct<char_const*>(&local_58,param_1,param_1 + sVar3);
  pMVar5 = *(MyHACD_API **)(this + 0xd8);
  if (pMVar5 == this + 0xe8) {
    if (local_58 == (MyHACD_API *)alStack_48) goto LAB_00101030;
    *(MyHACD_API **)(this + 0xd8) = local_58;
    *(ulong *)(this + 0xe0) = local_50;
    *(long *)(this + 0xe8) = alStack_48[0];
  }
  else {
    if (local_58 == (MyHACD_API *)alStack_48) {
LAB_00101030:
      if (local_50 != 0) {
        if (local_50 == 1) {
          *pMVar5 = alStack_48[0]._0_1_;
          pMVar5 = *(MyHACD_API **)(this + 0xd8);
        }
        else {
          uVar2 = (uint)local_50;
          uVar4 = local_50 & 0xffffffff;
          if (uVar2 < 8) {
            if ((local_50 & 4) == 0) {
              if (uVar2 != 0) {
                *pMVar5 = alStack_48[0]._0_1_;
                if ((local_50 & 2) == 0) goto LAB_0010106a;
                *(undefined2 *)(pMVar5 + (uVar4 - 2)) =
                     *(undefined2 *)((long)alStack_48 + (uVar4 - 2));
                pMVar5 = *(MyHACD_API **)(this + 0xd8);
              }
            }
            else {
              *(undefined4 *)pMVar5 = (undefined4)alStack_48[0];
              *(undefined4 *)(pMVar5 + (uVar4 - 4)) =
                   *(undefined4 *)((long)alStack_48 + (uVar4 - 4));
              pMVar5 = *(MyHACD_API **)(this + 0xd8);
            }
          }
          else {
            *(long *)pMVar5 = alStack_48[0];
            *(undefined8 *)(pMVar5 + ((local_50 & 0xffffffff) - 8)) =
                 *(undefined8 *)((long)alStack_48 + ((local_50 & 0xffffffff) - 8));
            lVar6 = (long)pMVar5 - ((ulong)(pMVar5 + 8) & 0xfffffffffffffff8);
            uVar2 = (int)lVar6 + uVar2 & 0xfffffff8;
            if (7 < uVar2) {
              uVar4 = 0;
              do {
                uVar7 = (int)uVar4 + 8;
                *(undefined8 *)(((ulong)(pMVar5 + 8) & 0xfffffffffffffff8) + uVar4) =
                     *(undefined8 *)((MyHACD_API *)alStack_48 + (uVar4 - lVar6));
                uVar4 = (ulong)uVar7;
              } while (uVar7 < uVar2);
            }
LAB_0010106a:
            pMVar5 = *(MyHACD_API **)(this + 0xd8);
          }
        }
      }
      *(ulong *)(this + 0xe0) = local_50;
      pMVar5[local_50] = (MyHACD_API)0x0;
      lVar6 = alStack_48[0];
      goto LAB_00100faf;
    }
    lVar6 = *(long *)(this + 0xe8);
    *(MyHACD_API **)(this + 0xd8) = local_58;
    *(ulong *)(this + 0xe0) = local_50;
    *(long *)(this + 0xe8) = alStack_48[0];
    local_58 = pMVar5;
    if (pMVar5 != (MyHACD_API *)0x0) goto LAB_00100faf;
  }
  local_58 = (MyHACD_API *)alStack_48;
  lVar6 = alStack_48[0];
LAB_00100faf:
  alStack_48[0] = lVar6;
  local_50 = 0;
  *local_58 = (MyHACD_API)0x0;
  if (local_58 != (MyHACD_API *)alStack_48) {
    operator_delete(local_58,alStack_48[0] + 1);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x50));
  return;
}



/* non-virtual thunk to VHACD::MyHACD_API::Update(double, double, double, char const*, char const*)
    */

void __thiscall
VHACD::MyHACD_API::Update
          (MyHACD_API *this,double param_1,double param_2,double param_3,char *param_4,char *param_5
          )

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  ulong uVar4;
  MyHACD_API *pMVar5;
  long lVar6;
  uint uVar7;
  long in_FS_OFFSET;
  MyHACD_API *local_88;
  undefined8 local_80;
  long alStack_78 [2];
  MyHACD_API *local_68;
  undefined8 local_60;
  long alStack_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x58));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  LOCK();
  this[0x80] = (MyHACD_API)0x1;
  UNLOCK();
  *(double *)(this + 0x98) = param_3;
  *(double *)(this + 0x88) = param_1;
  *(double *)(this + 0x90) = param_2;
  local_68 = (MyHACD_API *)alStack_58;
  if (param_4 != (char *)0x0) {
    sVar3 = strlen(param_4);
    std::__cxx11::string::_M_construct<char_const*>(&local_68,param_4,param_4 + sVar3);
    pMVar5 = *(MyHACD_API **)(this + 0xa0);
    if (pMVar5 == this + 0xb0) {
      if (local_68 == (MyHACD_API *)alStack_58) goto LAB_001013a0;
      *(MyHACD_API **)(this + 0xa0) = local_68;
      *(ulong *)(this + 0xa8) = local_60;
      *(long *)(this + 0xb0) = alStack_58[0];
      local_68 = (MyHACD_API *)alStack_58;
    }
    else if (local_68 == (MyHACD_API *)alStack_58) {
LAB_001013a0:
      if (local_60 != 0) {
        if (local_60 == 1) {
          *pMVar5 = alStack_58[0]._0_1_;
          pMVar5 = *(MyHACD_API **)(this + 0xa0);
        }
        else {
          uVar2 = (uint)local_60;
          uVar4 = local_60 & 0xffffffff;
          if (uVar2 < 8) {
            if ((local_60 & 4) == 0) {
              if (uVar2 != 0) {
                *pMVar5 = alStack_58[0]._0_1_;
                if ((local_60 & 2) == 0) goto LAB_001013de;
                *(undefined2 *)(pMVar5 + (uVar4 - 2)) =
                     *(undefined2 *)((long)alStack_58 + (uVar4 - 2));
                pMVar5 = *(MyHACD_API **)(this + 0xa0);
              }
            }
            else {
              *(undefined4 *)pMVar5 = (undefined4)alStack_58[0];
              *(undefined4 *)(pMVar5 + (uVar4 - 4)) =
                   *(undefined4 *)((long)alStack_58 + (uVar4 - 4));
              pMVar5 = *(MyHACD_API **)(this + 0xa0);
            }
          }
          else {
            *(long *)pMVar5 = alStack_58[0];
            *(undefined8 *)(pMVar5 + ((local_60 & 0xffffffff) - 8)) =
                 *(undefined8 *)((long)alStack_58 + ((local_60 & 0xffffffff) - 8));
            lVar6 = (long)pMVar5 - ((ulong)(pMVar5 + 8) & 0xfffffffffffffff8);
            uVar2 = (int)lVar6 + uVar2 & 0xfffffff8;
            if (7 < uVar2) {
              uVar4 = 0;
              do {
                uVar7 = (int)uVar4 + 8;
                *(undefined8 *)(((ulong)(pMVar5 + 8) & 0xfffffffffffffff8) + uVar4) =
                     *(undefined8 *)((MyHACD_API *)alStack_58 + (uVar4 - lVar6));
                uVar4 = (ulong)uVar7;
              } while (uVar7 < uVar2);
            }
LAB_001013de:
            pMVar5 = *(MyHACD_API **)(this + 0xa0);
          }
        }
      }
      *(ulong *)(this + 0xa8) = local_60;
      pMVar5[local_60] = (MyHACD_API)0x0;
    }
    else {
      lVar6 = *(long *)(this + 0xb0);
      *(MyHACD_API **)(this + 0xa0) = local_68;
      *(ulong *)(this + 0xa8) = local_60;
      *(long *)(this + 0xb0) = alStack_58[0];
      local_68 = (MyHACD_API *)alStack_58;
      if (pMVar5 != (MyHACD_API *)0x0) {
        local_68 = pMVar5;
        alStack_58[0] = lVar6;
      }
    }
    local_60 = 0;
    *local_68 = (MyHACD_API)0x0;
    if (local_68 != (MyHACD_API *)alStack_58) {
      operator_delete(local_68,alStack_58[0] + 1);
    }
    local_88 = (MyHACD_API *)alStack_78;
    if (param_5 != (char *)0x0) {
      sVar3 = strlen(param_5);
      std::__cxx11::string::_M_construct<char_const*>(&local_88,param_5,param_5 + sVar3);
      pMVar5 = *(MyHACD_API **)(this + 0xc0);
      if (pMVar5 == this + 0xd0) {
        if (local_88 == (MyHACD_API *)alStack_78) goto LAB_00101408;
        *(MyHACD_API **)(this + 0xc0) = local_88;
        *(ulong *)(this + 200) = local_80;
        *(long *)(this + 0xd0) = alStack_78[0];
        local_88 = (MyHACD_API *)alStack_78;
      }
      else if (local_88 == (MyHACD_API *)alStack_78) {
LAB_00101408:
        if (local_80 != 0) {
          if (local_80 == 1) {
            *pMVar5 = alStack_78[0]._0_1_;
            pMVar5 = *(MyHACD_API **)(this + 0xc0);
          }
          else {
            uVar2 = (uint)local_80;
            uVar4 = local_80 & 0xffffffff;
            if (uVar2 < 8) {
              if ((local_80 & 4) == 0) {
                if (uVar2 != 0) {
                  *pMVar5 = alStack_78[0]._0_1_;
                  if ((local_80 & 2) == 0) goto LAB_00101442;
                  *(undefined2 *)(pMVar5 + (uVar4 - 2)) =
                       *(undefined2 *)((long)alStack_78 + (uVar4 - 2));
                  pMVar5 = *(MyHACD_API **)(this + 0xc0);
                }
              }
              else {
                *(undefined4 *)pMVar5 = (undefined4)alStack_78[0];
                *(undefined4 *)(pMVar5 + (uVar4 - 4)) =
                     *(undefined4 *)((long)alStack_78 + (uVar4 - 4));
                pMVar5 = *(MyHACD_API **)(this + 0xc0);
              }
            }
            else {
              *(long *)pMVar5 = alStack_78[0];
              *(undefined8 *)(pMVar5 + ((local_80 & 0xffffffff) - 8)) =
                   *(undefined8 *)((long)alStack_78 + ((local_80 & 0xffffffff) - 8));
              lVar6 = (long)pMVar5 - ((ulong)(pMVar5 + 8) & 0xfffffffffffffff8);
              uVar2 = (int)lVar6 + uVar2 & 0xfffffff8;
              if (7 < uVar2) {
                uVar4 = 0;
                do {
                  uVar7 = (int)uVar4 + 8;
                  *(undefined8 *)(((ulong)(pMVar5 + 8) & 0xfffffffffffffff8) + uVar4) =
                       *(undefined8 *)((MyHACD_API *)alStack_78 + (uVar4 - lVar6));
                  uVar4 = (ulong)uVar7;
                } while (uVar7 < uVar2);
              }
LAB_00101442:
              pMVar5 = *(MyHACD_API **)(this + 0xc0);
            }
          }
        }
        *(ulong *)(this + 200) = local_80;
        pMVar5[local_80] = (MyHACD_API)0x0;
      }
      else {
        lVar6 = *(long *)(this + 0xd0);
        *(MyHACD_API **)(this + 0xc0) = local_88;
        *(ulong *)(this + 200) = local_80;
        *(long *)(this + 0xd0) = alStack_78[0];
        local_88 = (MyHACD_API *)alStack_78;
        if (pMVar5 != (MyHACD_API *)0x0) {
          local_88 = pMVar5;
          alStack_78[0] = lVar6;
        }
      }
      local_80 = 0;
      *local_88 = (MyHACD_API)0x0;
      if (local_88 != (MyHACD_API *)alStack_78) {
        operator_delete(local_88,alStack_78[0] + 1);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        pthread_mutex_unlock((pthread_mutex_t *)(this + 0x58));
        return;
      }
      goto LAB_001015ca;
    }
  }
  std::__throw_logic_error("basic_string: construction from null is not valid");
LAB_001015ca:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VHACD::MyHACD_API::Update(double, double, double, char const*, char const*) */

void __thiscall
VHACD::MyHACD_API::Update
          (MyHACD_API *this,double param_1,double param_2,double param_3,char *param_4,char *param_5
          )

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  ulong uVar4;
  MyHACD_API *pMVar5;
  long lVar6;
  uint uVar7;
  long in_FS_OFFSET;
  MyHACD_API *local_88;
  undefined8 local_80;
  long alStack_78 [2];
  MyHACD_API *local_68;
  undefined8 local_60;
  long alStack_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x60));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  LOCK();
  this[0x88] = (MyHACD_API)0x1;
  UNLOCK();
  *(double *)(this + 0xa0) = param_3;
  *(double *)(this + 0x90) = param_1;
  *(double *)(this + 0x98) = param_2;
  local_88 = (MyHACD_API *)alStack_78;
  if (param_4 != (char *)0x0) {
    sVar3 = strlen(param_4);
    std::__cxx11::string::_M_construct<char_const*>(&local_88,param_4,param_4 + sVar3);
    pMVar5 = *(MyHACD_API **)(this + 0xa8);
    if (pMVar5 == this + 0xb8) {
      if (local_88 == (MyHACD_API *)alStack_78) goto LAB_00101830;
      *(MyHACD_API **)(this + 0xa8) = local_88;
      *(ulong *)(this + 0xb0) = local_80;
      *(long *)(this + 0xb8) = alStack_78[0];
      local_88 = (MyHACD_API *)alStack_78;
    }
    else if (local_88 == (MyHACD_API *)alStack_78) {
LAB_00101830:
      if (local_80 != 0) {
        if (local_80 == 1) {
          *pMVar5 = alStack_78[0]._0_1_;
          pMVar5 = *(MyHACD_API **)(this + 0xa8);
        }
        else {
          uVar2 = (uint)local_80;
          uVar4 = local_80 & 0xffffffff;
          if (uVar2 < 8) {
            if ((local_80 & 4) == 0) {
              if (uVar2 != 0) {
                *pMVar5 = alStack_78[0]._0_1_;
                if ((local_80 & 2) == 0) goto LAB_0010186e;
                *(undefined2 *)(pMVar5 + (uVar4 - 2)) =
                     *(undefined2 *)((long)alStack_78 + (uVar4 - 2));
                pMVar5 = *(MyHACD_API **)(this + 0xa8);
              }
            }
            else {
              *(undefined4 *)pMVar5 = (undefined4)alStack_78[0];
              *(undefined4 *)(pMVar5 + (uVar4 - 4)) =
                   *(undefined4 *)((long)alStack_78 + (uVar4 - 4));
              pMVar5 = *(MyHACD_API **)(this + 0xa8);
            }
          }
          else {
            *(long *)pMVar5 = alStack_78[0];
            *(undefined8 *)(pMVar5 + ((local_80 & 0xffffffff) - 8)) =
                 *(undefined8 *)((long)alStack_78 + ((local_80 & 0xffffffff) - 8));
            lVar6 = (long)pMVar5 - ((ulong)(pMVar5 + 8) & 0xfffffffffffffff8);
            uVar2 = (int)lVar6 + uVar2 & 0xfffffff8;
            if (7 < uVar2) {
              uVar4 = 0;
              do {
                uVar7 = (int)uVar4 + 8;
                *(undefined8 *)(((ulong)(pMVar5 + 8) & 0xfffffffffffffff8) + uVar4) =
                     *(undefined8 *)((MyHACD_API *)alStack_78 + (uVar4 - lVar6));
                uVar4 = (ulong)uVar7;
              } while (uVar7 < uVar2);
            }
LAB_0010186e:
            pMVar5 = *(MyHACD_API **)(this + 0xa8);
          }
        }
      }
      *(ulong *)(this + 0xb0) = local_80;
      pMVar5[local_80] = (MyHACD_API)0x0;
    }
    else {
      lVar6 = *(long *)(this + 0xb8);
      *(MyHACD_API **)(this + 0xa8) = local_88;
      *(ulong *)(this + 0xb0) = local_80;
      *(long *)(this + 0xb8) = alStack_78[0];
      local_88 = (MyHACD_API *)alStack_78;
      if (pMVar5 != (MyHACD_API *)0x0) {
        local_88 = pMVar5;
        alStack_78[0] = lVar6;
      }
    }
    local_80 = 0;
    *local_88 = (MyHACD_API)0x0;
    if (local_88 != (MyHACD_API *)alStack_78) {
      operator_delete(local_88,alStack_78[0] + 1);
    }
    local_68 = (MyHACD_API *)alStack_58;
    if (param_5 != (char *)0x0) {
      sVar3 = strlen(param_5);
      std::__cxx11::string::_M_construct<char_const*>(&local_68,param_5,param_5 + sVar3);
      pMVar5 = *(MyHACD_API **)(this + 200);
      if (pMVar5 == this + 0xd8) {
        if (local_68 == (MyHACD_API *)alStack_58) goto LAB_00101898;
        *(MyHACD_API **)(this + 200) = local_68;
        *(ulong *)(this + 0xd0) = local_60;
        *(long *)(this + 0xd8) = alStack_58[0];
        local_68 = (MyHACD_API *)alStack_58;
      }
      else if (local_68 == (MyHACD_API *)alStack_58) {
LAB_00101898:
        if (local_60 != 0) {
          if (local_60 == 1) {
            *pMVar5 = alStack_58[0]._0_1_;
            pMVar5 = *(MyHACD_API **)(this + 200);
          }
          else {
            uVar2 = (uint)local_60;
            uVar4 = local_60 & 0xffffffff;
            if (uVar2 < 8) {
              if ((local_60 & 4) == 0) {
                if (uVar2 != 0) {
                  *pMVar5 = alStack_58[0]._0_1_;
                  if ((local_60 & 2) == 0) goto LAB_001018d2;
                  *(undefined2 *)(pMVar5 + (uVar4 - 2)) =
                       *(undefined2 *)((long)alStack_58 + (uVar4 - 2));
                  pMVar5 = *(MyHACD_API **)(this + 200);
                }
              }
              else {
                *(undefined4 *)pMVar5 = (undefined4)alStack_58[0];
                *(undefined4 *)(pMVar5 + (uVar4 - 4)) =
                     *(undefined4 *)((long)alStack_58 + (uVar4 - 4));
                pMVar5 = *(MyHACD_API **)(this + 200);
              }
            }
            else {
              *(long *)pMVar5 = alStack_58[0];
              *(undefined8 *)(pMVar5 + ((local_60 & 0xffffffff) - 8)) =
                   *(undefined8 *)((long)alStack_58 + ((local_60 & 0xffffffff) - 8));
              lVar6 = (long)pMVar5 - ((ulong)(pMVar5 + 8) & 0xfffffffffffffff8);
              uVar2 = (int)lVar6 + uVar2 & 0xfffffff8;
              if (7 < uVar2) {
                uVar4 = 0;
                do {
                  uVar7 = (int)uVar4 + 8;
                  *(undefined8 *)(((ulong)(pMVar5 + 8) & 0xfffffffffffffff8) + uVar4) =
                       *(undefined8 *)((MyHACD_API *)alStack_58 + (uVar4 - lVar6));
                  uVar4 = (ulong)uVar7;
                } while (uVar7 < uVar2);
              }
LAB_001018d2:
              pMVar5 = *(MyHACD_API **)(this + 200);
            }
          }
        }
        *(ulong *)(this + 0xd0) = local_60;
        pMVar5[local_60] = (MyHACD_API)0x0;
      }
      else {
        lVar6 = *(long *)(this + 0xd8);
        *(MyHACD_API **)(this + 200) = local_68;
        *(ulong *)(this + 0xd0) = local_60;
        *(long *)(this + 0xd8) = alStack_58[0];
        local_68 = (MyHACD_API *)alStack_58;
        if (pMVar5 != (MyHACD_API *)0x0) {
          local_68 = pMVar5;
          alStack_58[0] = lVar6;
        }
      }
      local_60 = 0;
      *local_68 = (MyHACD_API)0x0;
      if (local_68 != (MyHACD_API *)alStack_58) {
        operator_delete(local_68,alStack_58[0] + 1);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        pthread_mutex_unlock((pthread_mutex_t *)(this + 0x60));
        return;
      }
      goto LAB_00101a5a;
    }
  }
  std::__throw_logic_error("basic_string: construction from null is not valid");
LAB_00101a5a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VHACD::MyHACD_API::GetNConvexHulls() const */

undefined4 __thiscall VHACD::MyHACD_API::GetNConvexHulls(MyHACD_API *this)

{
  int iVar1;
  
  if ((this[0x88] != (MyHACD_API)0x0) && (*(long *)(this + 0x38) != 0)) {
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x60));
    if (iVar1 != 0) goto LAB_00101b42;
    (**(code **)(**(long **)(this + 0x38) + 0x10))
              (*(undefined8 *)(this + 0x90),*(undefined8 *)(this + 0x98),
               *(undefined8 *)(this + 0xa0),*(long **)(this + 0x38),*(undefined8 *)(this + 0xa8),
               *(undefined8 *)(this + 200));
    LOCK();
    this[0x88] = (MyHACD_API)0x0;
    UNLOCK();
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x60));
  }
  if ((this[0x89] != (MyHACD_API)0x0) && (*(long *)(this + 0x40) != 0)) {
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x60));
    if (iVar1 != 0) {
LAB_00101b42:
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar1);
    }
    (**(code **)(**(long **)(this + 0x40) + 0x10))
              (*(long **)(this + 0x40),*(undefined8 *)(this + 0xe8));
    LOCK();
    this[0x89] = (MyHACD_API)0x0;
    UNLOCK();
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x60));
  }
  return *(undefined4 *)(this + 0x28);
}



/* VHACD::MyHACD_API::IsReady() const */

bool __thiscall VHACD::MyHACD_API::IsReady(MyHACD_API *this)

{
  int iVar1;
  
  if ((this[0x88] != (MyHACD_API)0x0) && (*(long *)(this + 0x38) != 0)) {
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x60));
    if (iVar1 != 0) goto LAB_00101c28;
    (**(code **)(**(long **)(this + 0x38) + 0x10))
              (*(undefined8 *)(this + 0x90),*(undefined8 *)(this + 0x98),
               *(undefined8 *)(this + 0xa0),*(long **)(this + 0x38),*(undefined8 *)(this + 0xa8),
               *(undefined8 *)(this + 200));
    LOCK();
    this[0x88] = (MyHACD_API)0x0;
    UNLOCK();
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x60));
  }
  if ((this[0x89] != (MyHACD_API)0x0) && (*(long *)(this + 0x40) != 0)) {
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x60));
    if (iVar1 != 0) {
LAB_00101c28:
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar1);
    }
    (**(code **)(**(long **)(this + 0x40) + 0x10))
              (*(long **)(this + 0x40),*(undefined8 *)(this + 0xe8));
    LOCK();
    this[0x89] = (MyHACD_API)0x0;
    UNLOCK();
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x60));
  }
  return this[0x58] == (MyHACD_API)0x0;
}



/* VHACD::MyHACD_API::ComputeCenterOfMass(double*) const */

undefined8 __thiscall VHACD::MyHACD_API::ComputeCenterOfMass(MyHACD_API *this,double *param_1)

{
  long lVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  long *plVar4;
  
  lVar1 = *(long *)(this + 0x48);
  param_1[2] = 0.0;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  if (lVar1 == 0) {
    return 0;
  }
  if ((this[0x88] != (MyHACD_API)0x0) && (*(long *)(this + 0x38) != 0)) {
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x60));
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar2);
    }
    (**(code **)(**(long **)(this + 0x38) + 0x10))
              (*(undefined8 *)(this + 0x90),*(undefined8 *)(this + 0x98),
               *(undefined8 *)(this + 0xa0),*(long **)(this + 0x38),*(undefined8 *)(this + 0xa8),
               *(undefined8 *)(this + 200));
    LOCK();
    this[0x88] = (MyHACD_API)0x0;
    UNLOCK();
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x60));
  }
  if ((this[0x89] != (MyHACD_API)0x0) && (*(long *)(this + 0x40) != 0)) {
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x60));
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar2);
    }
    (**(code **)(**(long **)(this + 0x40) + 0x10))
              (*(long **)(this + 0x40),*(undefined8 *)(this + 0xe8));
    LOCK();
    this[0x89] = (MyHACD_API)0x0;
    UNLOCK();
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x60));
  }
  if (this[0x58] == (MyHACD_API)0x0) {
    plVar4 = *(long **)(this + 0x48);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x48);
    if (UNRECOVERED_JUMPTABLE != ComputeCenterOfMass) {
LAB_00101e1e:
                    /* WARNING: Could not recover jumptable at 0x00101e26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)(plVar4,param_1);
      return uVar3;
    }
    lVar1 = plVar4[9];
    param_1[2] = 0.0;
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    if (lVar1 != 0) {
      if (((char)plVar4[0x11] != '\0') && (plVar4[7] != 0)) {
        iVar2 = pthread_mutex_lock((pthread_mutex_t *)(plVar4 + 0xc));
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          std::__throw_system_error(iVar2);
        }
        (**(code **)(*(long *)plVar4[7] + 0x10))
                  (plVar4[0x12],plVar4[0x13],plVar4[0x14],(long *)plVar4[7],plVar4[0x15],
                   plVar4[0x19]);
        LOCK();
        *(undefined1 *)(plVar4 + 0x11) = 0;
        UNLOCK();
        pthread_mutex_unlock((pthread_mutex_t *)(plVar4 + 0xc));
      }
      if ((*(char *)((long)plVar4 + 0x89) != '\0') && (plVar4[8] != 0)) {
        iVar2 = pthread_mutex_lock((pthread_mutex_t *)(plVar4 + 0xc));
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          std::__throw_system_error(iVar2);
        }
        (**(code **)(*(long *)plVar4[8] + 0x10))((long *)plVar4[8],plVar4[0x1d]);
        LOCK();
        *(undefined1 *)((long)plVar4 + 0x89) = 0;
        UNLOCK();
        pthread_mutex_unlock((pthread_mutex_t *)(plVar4 + 0xc));
      }
      if ((char)plVar4[0xb] == '\0') {
        plVar4 = (long *)plVar4[9];
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x48);
        goto LAB_00101e1e;
      }
    }
  }
  return 0;
}



/* VHACD::MyHACD_API::Clean() */

void __thiscall VHACD::MyHACD_API::Clean(MyHACD_API *this)

{
  undefined1 (*pauVar1) [16];
  MyHACD_API *pMVar2;
  MyHACD_API *this_00;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar3;
  
  Cancel(this);
  for (uVar3 = 0; (uint)uVar3 < *(uint *)(this + 0x28); uVar3 = (ulong)((uint)uVar3 + 1)) {
    pauVar1 = (undefined1 (*) [16])(*(long *)(this + 0x30) + uVar3 * 0x38);
    free(*(void **)(*pauVar1 + 8));
    free(*(void **)*pauVar1);
    *pauVar1 = (undefined1  [16])0x0;
  }
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x30));
  }
  *(undefined8 *)(this + 0x30) = 0;
  LOCK();
  *(uint *)(this + 0x28) = 0;
  UNLOCK();
  free(*(void **)(this + 0x18));
  *(undefined8 *)(this + 0x18) = 0;
  free(*(void **)(this + 0x20));
  pMVar2 = *(MyHACD_API **)(this + 0x48);
  *(undefined8 *)(this + 0x20) = 0;
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pMVar2 + 0x28);
  if (UNRECOVERED_JUMPTABLE == Clean) {
    Cancel(pMVar2);
    for (uVar3 = 0; (uint)uVar3 < *(uint *)(pMVar2 + 0x28); uVar3 = (ulong)((uint)uVar3 + 1)) {
      pauVar1 = (undefined1 (*) [16])(*(long *)(pMVar2 + 0x30) + uVar3 * 0x38);
      free(*(void **)(*pauVar1 + 8));
      free(*(void **)*pauVar1);
      *pauVar1 = (undefined1  [16])0x0;
    }
    if (*(void **)(pMVar2 + 0x30) != (void *)0x0) {
      operator_delete__(*(void **)(pMVar2 + 0x30));
    }
    *(undefined8 *)(pMVar2 + 0x30) = 0;
    LOCK();
    *(uint *)(pMVar2 + 0x28) = 0;
    UNLOCK();
    free(*(void **)(pMVar2 + 0x18));
    *(undefined8 *)(pMVar2 + 0x18) = 0;
    free(*(void **)(pMVar2 + 0x20));
    *(undefined8 *)(pMVar2 + 0x20) = 0;
    pMVar2 = *(MyHACD_API **)(pMVar2 + 0x48);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pMVar2 + 0x28);
    if (UNRECOVERED_JUMPTABLE == Clean) {
      Cancel(pMVar2);
      for (uVar3 = 0; (uint)uVar3 < *(uint *)(pMVar2 + 0x28); uVar3 = (ulong)((uint)uVar3 + 1)) {
        pauVar1 = (undefined1 (*) [16])(*(long *)(pMVar2 + 0x30) + uVar3 * 0x38);
        free(*(void **)(*pauVar1 + 8));
        free(*(void **)*pauVar1);
        *pauVar1 = (undefined1  [16])0x0;
      }
      if (*(void **)(pMVar2 + 0x30) != (void *)0x0) {
        operator_delete__(*(void **)(pMVar2 + 0x30));
      }
      *(undefined8 *)(pMVar2 + 0x30) = 0;
      LOCK();
      *(uint *)(pMVar2 + 0x28) = 0;
      UNLOCK();
      free(*(void **)(pMVar2 + 0x18));
      *(undefined8 *)(pMVar2 + 0x18) = 0;
      free(*(void **)(pMVar2 + 0x20));
      *(undefined8 *)(pMVar2 + 0x20) = 0;
      pMVar2 = *(MyHACD_API **)(pMVar2 + 0x48);
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pMVar2 + 0x28);
      if (UNRECOVERED_JUMPTABLE == Clean) {
        Cancel(pMVar2);
        for (uVar3 = 0; (uint)uVar3 < *(uint *)(pMVar2 + 0x28); uVar3 = (ulong)((uint)uVar3 + 1)) {
          pauVar1 = (undefined1 (*) [16])(*(long *)(pMVar2 + 0x30) + uVar3 * 0x38);
          free(*(void **)(*pauVar1 + 8));
          free(*(void **)*pauVar1);
          *pauVar1 = (undefined1  [16])0x0;
        }
        if (*(void **)(pMVar2 + 0x30) != (void *)0x0) {
          operator_delete__(*(void **)(pMVar2 + 0x30));
        }
        *(undefined8 *)(pMVar2 + 0x30) = 0;
        LOCK();
        *(uint *)(pMVar2 + 0x28) = 0;
        UNLOCK();
        free(*(void **)(pMVar2 + 0x18));
        *(undefined8 *)(pMVar2 + 0x18) = 0;
        free(*(void **)(pMVar2 + 0x20));
        *(undefined8 *)(pMVar2 + 0x20) = 0;
        pMVar2 = *(MyHACD_API **)(pMVar2 + 0x48);
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pMVar2 + 0x28);
        if (UNRECOVERED_JUMPTABLE == Clean) {
          Cancel(pMVar2);
          for (uVar3 = 0; (uint)uVar3 < *(uint *)(pMVar2 + 0x28); uVar3 = (ulong)((uint)uVar3 + 1))
          {
            pauVar1 = (undefined1 (*) [16])(*(long *)(pMVar2 + 0x30) + uVar3 * 0x38);
            free(*(void **)(*pauVar1 + 8));
            free(*(void **)*pauVar1);
            *pauVar1 = (undefined1  [16])0x0;
          }
          if (*(void **)(pMVar2 + 0x30) != (void *)0x0) {
            operator_delete__(*(void **)(pMVar2 + 0x30));
          }
          *(undefined8 *)(pMVar2 + 0x30) = 0;
          LOCK();
          *(uint *)(pMVar2 + 0x28) = 0;
          UNLOCK();
          free(*(void **)(pMVar2 + 0x18));
          *(undefined8 *)(pMVar2 + 0x18) = 0;
          free(*(void **)(pMVar2 + 0x20));
          *(undefined8 *)(pMVar2 + 0x20) = 0;
          pMVar2 = *(MyHACD_API **)(pMVar2 + 0x48);
          UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pMVar2 + 0x28);
          if (UNRECOVERED_JUMPTABLE == Clean) {
            Cancel(pMVar2);
            for (uVar3 = 0; (uint)uVar3 < *(uint *)(pMVar2 + 0x28); uVar3 = (ulong)((uint)uVar3 + 1)
                ) {
              pauVar1 = (undefined1 (*) [16])(*(long *)(pMVar2 + 0x30) + uVar3 * 0x38);
              free(*(void **)(*pauVar1 + 8));
              free(*(void **)*pauVar1);
              *pauVar1 = (undefined1  [16])0x0;
            }
            if (*(void **)(pMVar2 + 0x30) != (void *)0x0) {
              operator_delete__(*(void **)(pMVar2 + 0x30));
            }
            *(undefined8 *)(pMVar2 + 0x30) = 0;
            LOCK();
            *(uint *)(pMVar2 + 0x28) = 0;
            UNLOCK();
            free(*(void **)(pMVar2 + 0x18));
            *(undefined8 *)(pMVar2 + 0x18) = 0;
            free(*(void **)(pMVar2 + 0x20));
            *(undefined8 *)(pMVar2 + 0x20) = 0;
            pMVar2 = *(MyHACD_API **)(pMVar2 + 0x48);
            UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pMVar2 + 0x28);
            if (UNRECOVERED_JUMPTABLE == Clean) {
              Cancel(pMVar2);
              for (uVar3 = 0; (uint)uVar3 < *(uint *)(pMVar2 + 0x28);
                  uVar3 = (ulong)((uint)uVar3 + 1)) {
                pauVar1 = (undefined1 (*) [16])(*(long *)(pMVar2 + 0x30) + uVar3 * 0x38);
                free(*(void **)(*pauVar1 + 8));
                free(*(void **)*pauVar1);
                *pauVar1 = (undefined1  [16])0x0;
              }
              if (*(void **)(pMVar2 + 0x30) != (void *)0x0) {
                operator_delete__(*(void **)(pMVar2 + 0x30));
              }
              *(undefined8 *)(pMVar2 + 0x30) = 0;
              LOCK();
              *(uint *)(pMVar2 + 0x28) = 0;
              UNLOCK();
              free(*(void **)(pMVar2 + 0x18));
              *(undefined8 *)(pMVar2 + 0x18) = 0;
              free(*(void **)(pMVar2 + 0x20));
              *(undefined8 *)(pMVar2 + 0x20) = 0;
              pMVar2 = *(MyHACD_API **)(pMVar2 + 0x48);
              UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pMVar2 + 0x28);
              if (UNRECOVERED_JUMPTABLE == Clean) {
                Cancel(pMVar2);
                for (uVar3 = 0; (uint)uVar3 < *(uint *)(pMVar2 + 0x28);
                    uVar3 = (ulong)((uint)uVar3 + 1)) {
                  pauVar1 = (undefined1 (*) [16])(*(long *)(pMVar2 + 0x30) + uVar3 * 0x38);
                  free(*(void **)(*pauVar1 + 8));
                  free(*(void **)*pauVar1);
                  *pauVar1 = (undefined1  [16])0x0;
                }
                if (*(void **)(pMVar2 + 0x30) != (void *)0x0) {
                  operator_delete__(*(void **)(pMVar2 + 0x30));
                }
                *(undefined8 *)(pMVar2 + 0x30) = 0;
                LOCK();
                *(uint *)(pMVar2 + 0x28) = 0;
                UNLOCK();
                free(*(void **)(pMVar2 + 0x18));
                *(undefined8 *)(pMVar2 + 0x18) = 0;
                free(*(void **)(pMVar2 + 0x20));
                this_00 = *(MyHACD_API **)(pMVar2 + 0x48);
                *(undefined8 *)(pMVar2 + 0x20) = 0;
                UNRECOVERED_JUMPTABLE = *(code **)(*(long *)this_00 + 0x28);
                if (UNRECOVERED_JUMPTABLE == Clean) {
                  Cancel(this_00);
                  for (uVar3 = 0; (uint)uVar3 < *(uint *)(this_00 + 0x28);
                      uVar3 = (ulong)((uint)uVar3 + 1)) {
                    pauVar1 = (undefined1 (*) [16])(*(long *)(this_00 + 0x30) + uVar3 * 0x38);
                    free(*(void **)(*pauVar1 + 8));
                    free(*(void **)*pauVar1);
                    *pauVar1 = (undefined1  [16])0x0;
                  }
                  if (*(void **)(this_00 + 0x30) != (void *)0x0) {
                    operator_delete__(*(void **)(this_00 + 0x30));
                  }
                  *(undefined8 *)(this_00 + 0x30) = 0;
                  LOCK();
                  *(uint *)(this_00 + 0x28) = 0;
                  UNLOCK();
                  free(*(void **)(this_00 + 0x18));
                  *(undefined8 *)(this_00 + 0x18) = 0;
                  free(*(void **)(this_00 + 0x20));
                  *(undefined8 *)(this_00 + 0x20) = 0;
                  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(this_00 + 0x48) + 0x28);
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00102423. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<VHACD::MyHACD_API::Compute(double
   const*, unsigned int, unsigned int const*, unsigned int, VHACD::IVHACD::Parameters
   const&)::{lambda()#1}> > >::_M_run() */

void __thiscall
std::thread::
_State_impl<std::thread::_Invoker<std::tuple<VHACD::MyHACD_API::Compute(double_const*,unsigned_int,unsigned_int_const*,unsigned_int,VHACD::IVHACD::Parameters_const&)::{lambda()#1}>>>
::_M_run(_State_impl<std::thread::_Invoker<std::tuple<VHACD::MyHACD_API::Compute(double_const*,unsigned_int,unsigned_int_const*,unsigned_int,VHACD::IVHACD::Parameters_const&)::_lambda()_1_>>>
         *this)

{
  ulong *puVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  void *pvVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  uint uVar14;
  long lVar15;
  size_t sVar16;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_40;
  
  lVar3 = *(long *)(this + 8);
  uVar2 = *(undefined4 *)(this + 0x14);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = *(int *)(this + 0x10);
  LOCK();
  *(uint *)(lVar3 + 0x28) = 0;
  UNLOCK();
  uVar12 = *(undefined8 *)(this + 0x40);
  *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(this + 0x38);
  *(undefined8 *)(lVar3 + 0x40) = uVar12;
  local_88 = *(undefined8 *)(this + 0x68);
  local_d8 = *(undefined8 *)(this + 0x18);
  uStack_d0 = *(undefined8 *)(this + 0x20);
  local_c8 = *(undefined8 *)(this + 0x28);
  uStack_c0 = *(undefined8 *)(this + 0x30);
  local_a8 = *(undefined8 *)(this + 0x48);
  uStack_a0 = *(undefined8 *)(this + 0x50);
  local_b8 = *(long *)(this + 0x38);
  if (*(long *)(this + 0x38) != 0) {
    local_b8 = lVar3 + 8;
  }
  local_98 = *(undefined8 *)(this + 0x58);
  uStack_90 = *(undefined8 *)(this + 0x60);
  lStack_b0 = *(long *)(this + 0x40);
  if (*(long *)(this + 0x40) != 0) {
    lStack_b0 = lVar3 + 0x10;
  }
  if ((iVar8 != 0) &&
     (cVar7 = (**(code **)(**(long **)(lVar3 + 0x48) + 0x10))
                        (*(long **)(lVar3 + 0x48),*(undefined8 *)(lVar3 + 0x18),iVar8,
                         *(undefined8 *)(lVar3 + 0x20),uVar2,&local_d8), cVar7 != '\0')) {
    plVar4 = *(long **)(lVar3 + 0x48);
    if (*(code **)(*plVar4 + 0x18) == VHACD::MyHACD_API::GetNConvexHulls) {
      if (((char)plVar4[0x11] != '\0') && (plVar4[7] != 0)) {
        iVar8 = pthread_mutex_lock((pthread_mutex_t *)(plVar4 + 0xc));
        if (iVar8 != 0) goto LAB_00102809;
        (**(code **)(*(long *)plVar4[7] + 0x10))
                  (plVar4[0x12],plVar4[0x13],plVar4[0x14],(long *)plVar4[7],plVar4[0x15],
                   plVar4[0x19]);
        LOCK();
        *(undefined1 *)(plVar4 + 0x11) = 0;
        UNLOCK();
        pthread_mutex_unlock((pthread_mutex_t *)(plVar4 + 0xc));
      }
      if ((*(char *)((long)plVar4 + 0x89) != '\0') && (plVar4[8] != 0)) {
        iVar8 = pthread_mutex_lock((pthread_mutex_t *)(plVar4 + 0xc));
        if (iVar8 != 0) {
LAB_00102809:
                    /* WARNING: Subroutine does not return */
          std::__throw_system_error(iVar8);
        }
        (**(code **)(*(long *)plVar4[8] + 0x10))((long *)plVar4[8],plVar4[0x1d]);
        LOCK();
        *(undefined1 *)((long)plVar4 + 0x89) = 0;
        UNLOCK();
        pthread_mutex_unlock((pthread_mutex_t *)(plVar4 + 0xc));
      }
      uVar9 = *(uint *)(plVar4 + 5);
    }
    else {
      uVar9 = (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    pvVar10 = operator_new__((ulong)uVar9 * 0x38);
    *(void **)(lVar3 + 0x30) = pvVar10;
    if (uVar9 != 0) {
      lVar15 = 0;
      uVar14 = 0;
      do {
        plVar4 = *(long **)(lVar3 + 0x48);
        if (*(code **)(*plVar4 + 0x20) == VHACD::MyHACD_API::GetConvexHull) {
          if (uVar14 < *(uint *)(plVar4 + 5)) {
            lVar5 = plVar4[6];
            local_78 = *(undefined8 *)(lVar5 + lVar15);
            uStack_70 = ((undefined8 *)(lVar5 + lVar15))[1];
            puVar1 = (ulong *)(lVar5 + 0x10 + lVar15);
            local_68 = *puVar1;
            uStack_60 = puVar1[1];
            puVar13 = (undefined8 *)(lVar5 + 0x20 + lVar15);
            uStack_58 = *puVar13;
            uStack_50 = puVar13[1];
            uStack_48 = *(undefined8 *)(lVar5 + 0x30 + lVar15);
          }
        }
        else {
          (**(code **)(*plVar4 + 0x20))(plVar4,uVar14,&local_78);
        }
        uVar2 = (undefined4)local_68;
        sVar16 = (local_68 & 0xffffffff) * 0x18;
        pvVar10 = malloc(sVar16);
        __memcpy_chk(pvVar10,local_78,sVar16,sVar16);
        uVar6 = local_68._4_4_;
        sVar16 = (ulong)local_68._4_4_ * 0xc;
        pvVar11 = malloc(sVar16);
        uVar12 = __memcpy_chk(pvVar11,uStack_70,sVar16,sVar16);
        puVar13 = (undefined8 *)(*(long *)(lVar3 + 0x30) + lVar15);
        *puVar13 = pvVar10;
        puVar13[1] = uVar12;
        puVar13[2] = CONCAT44(uVar6,uVar2);
        puVar13[3] = uStack_60;
        puVar13[4] = uStack_58;
        puVar13[5] = uStack_50;
        puVar13[6] = uStack_48;
        if (*(char *)(lVar3 + 0x59) != '\0') goto LAB_001024ea;
        uVar14 = uVar14 + 1;
        lVar15 = lVar15 + 0x38;
      } while (uVar9 != uVar14);
      goto LAB_001024ec;
    }
  }
LAB_001024ea:
  uVar9 = 0;
LAB_001024ec:
  LOCK();
  *(uint *)(lVar3 + 0x28) = uVar9;
  UNLOCK();
  LOCK();
  *(undefined1 *)(*(long *)(this + 8) + 0x58) = 0;
  UNLOCK();
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* VHACD::MyHACD_API::~MyHACD_API() */

void __thiscall VHACD::MyHACD_API::~MyHACD_API(MyHACD_API *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<VHACD::MyHACD_API::Compute(double
   const*, unsigned int, unsigned int const*, unsigned int, VHACD::IVHACD::Parameters
   const&)::{lambda()#1}> > >::~_State_impl() */

void __thiscall
std::thread::
_State_impl<std::thread::_Invoker<std::tuple<VHACD::MyHACD_API::Compute(double_const*,unsigned_int,unsigned_int_const*,unsigned_int,VHACD::IVHACD::Parameters_const&)::{lambda()#1}>>>
::~_State_impl(_State_impl<std::thread::_Invoker<std::tuple<VHACD::MyHACD_API::Compute(double_const*,unsigned_int,unsigned_int_const*,unsigned_int,VHACD::IVHACD::Parameters_const&)::_lambda()_1_>>>
               *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


