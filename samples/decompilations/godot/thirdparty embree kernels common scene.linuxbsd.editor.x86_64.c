
/* embree::Scene::clear() */

void embree::Scene::clear(void)

{
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::ostream& std::endl<char, std::char_traits<char> >(std::ostream&) [clone .isra.0] */

ostream * std::endl<char,std::char_traits<char>>(ostream *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  ostream *poVar10;
  void *pvVar11;
  ostream *poVar12;
  ostream *extraout_RAX;
  
  plVar1 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0xf0);
  if (plVar1 == (long *)0x0) {
    poVar12 = (ostream *)std::__throw_bad_cast();
    while (param_1 != (ostream *)0x0) {
      pvVar11 = *(void **)(param_1 + 0x18);
      while (pvVar11 != (void *)0x0) {
        pvVar9 = *(void **)((long)pvVar11 + 0x18);
        while (pvVar9 != (void *)0x0) {
          pvVar8 = *(void **)((long)pvVar9 + 0x18);
          while (pvVar8 != (void *)0x0) {
            pvVar6 = *(void **)((long)pvVar8 + 0x18);
            while (pvVar6 != (void *)0x0) {
              pvVar4 = *(void **)((long)pvVar6 + 0x18);
              while (pvVar4 != (void *)0x0) {
                pvVar5 = *(void **)((long)pvVar4 + 0x18);
                while (pvVar5 != (void *)0x0) {
                  pvVar7 = *(void **)((long)pvVar5 + 0x18);
                  while (pvVar7 != (void *)0x0) {
                    pvVar3 = *(void **)((long)pvVar7 + 0x18);
                    while (pvVar3 != (void *)0x0) {
                      _Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
                      ::_M_erase(*(_Rb_tree_node **)((long)pvVar3 + 0x18));
                      pvVar2 = *(void **)((long)pvVar3 + 0x10);
                      operator_delete(pvVar3,0x28);
                      pvVar3 = pvVar2;
                    }
                    pvVar3 = *(void **)((long)pvVar7 + 0x10);
                    operator_delete(pvVar7,0x28);
                    pvVar7 = pvVar3;
                  }
                  pvVar7 = *(void **)((long)pvVar5 + 0x10);
                  operator_delete(pvVar5,0x28);
                  pvVar5 = pvVar7;
                }
                pvVar5 = *(void **)((long)pvVar4 + 0x10);
                operator_delete(pvVar4,0x28);
                pvVar4 = pvVar5;
              }
              pvVar4 = *(void **)((long)pvVar6 + 0x10);
              operator_delete(pvVar6,0x28);
              pvVar6 = pvVar4;
            }
            pvVar6 = *(void **)((long)pvVar8 + 0x10);
            operator_delete(pvVar8,0x28);
            pvVar8 = pvVar6;
          }
          pvVar8 = *(void **)((long)pvVar9 + 0x10);
          operator_delete(pvVar9,0x28);
          pvVar9 = pvVar8;
        }
        pvVar9 = *(void **)((long)pvVar11 + 0x10);
        operator_delete(pvVar11,0x28);
        pvVar11 = pvVar9;
      }
      poVar10 = *(ostream **)(param_1 + 0x10);
      operator_delete(param_1,0x28);
      poVar12 = extraout_RAX;
      param_1 = poVar10;
    }
    return poVar12;
  }
  if ((char)plVar1[7] == '\0') {
    std::ctype<char>::_M_widen_init();
    if (*(code **)(*plVar1 + 0x30) != ctype<char>::do_widen) {
      (**(code **)(*plVar1 + 0x30))(plVar1,10);
    }
  }
  std::ostream::put((char)param_1);
  poVar12 = (ostream *)std::ostream::flush();
  return poVar12;
}



/* std::_Rb_tree<unsigned int, unsigned int, std::_Identity<unsigned int>, std::less<unsigned int>,
   std::allocator<unsigned int> >::_M_erase(std::_Rb_tree_node<unsigned int>*) [clone .isra.0] */

void std::
     _Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
     ::_M_erase(_Rb_tree_node *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  _Rb_tree_node *p_Var9;
  void *pvVar10;
  _Rb_tree_node *local_48;
  
  local_48 = param_1;
  if (param_1 != (_Rb_tree_node *)0x0) {
    do {
      pvVar10 = *(void **)(local_48 + 0x18);
      while (pvVar10 != (void *)0x0) {
        pvVar8 = *(void **)((long)pvVar10 + 0x18);
        while (pvVar8 != (void *)0x0) {
          pvVar7 = *(void **)((long)pvVar8 + 0x18);
          while (pvVar7 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar7 + 0x18);
            while (pvVar5 != (void *)0x0) {
              pvVar3 = *(void **)((long)pvVar5 + 0x18);
              while (pvVar3 != (void *)0x0) {
                pvVar4 = *(void **)((long)pvVar3 + 0x18);
                while (pvVar4 != (void *)0x0) {
                  pvVar6 = *(void **)((long)pvVar4 + 0x18);
                  while (pvVar6 != (void *)0x0) {
                    pvVar2 = *(void **)((long)pvVar6 + 0x18);
                    while (pvVar2 != (void *)0x0) {
                      _M_erase(*(_Rb_tree_node **)((long)pvVar2 + 0x18));
                      pvVar1 = *(void **)((long)pvVar2 + 0x10);
                      operator_delete(pvVar2,0x28);
                      pvVar2 = pvVar1;
                    }
                    pvVar2 = *(void **)((long)pvVar6 + 0x10);
                    operator_delete(pvVar6,0x28);
                    pvVar6 = pvVar2;
                  }
                  pvVar6 = *(void **)((long)pvVar4 + 0x10);
                  operator_delete(pvVar4,0x28);
                  pvVar4 = pvVar6;
                }
                pvVar4 = *(void **)((long)pvVar3 + 0x10);
                operator_delete(pvVar3,0x28);
                pvVar3 = pvVar4;
              }
              pvVar3 = *(void **)((long)pvVar5 + 0x10);
              operator_delete(pvVar5,0x28);
              pvVar5 = pvVar3;
            }
            pvVar5 = *(void **)((long)pvVar7 + 0x10);
            operator_delete(pvVar7,0x28);
            pvVar7 = pvVar5;
          }
          pvVar7 = *(void **)((long)pvVar8 + 0x10);
          operator_delete(pvVar8,0x28);
          pvVar8 = pvVar7;
        }
        pvVar8 = *(void **)((long)pvVar10 + 0x10);
        operator_delete(pvVar10,0x28);
        pvVar10 = pvVar8;
      }
      p_Var9 = *(_Rb_tree_node **)(local_48 + 0x10);
      operator_delete(local_48,0x28);
      local_48 = p_Var9;
    } while (p_Var9 != (_Rb_tree_node *)0x0);
  }
  return;
}



/* embree::Scene::~Scene() */

void __thiscall embree::Scene::~Scene(Scene *this)

{
  long *plVar1;
  long *plVar2;
  MutexSys *this_00;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  
  *(undefined ***)this = &PTR__Scene_00106248;
  plVar2 = *(long **)(this + 0x188);
  if (*(code **)(*plVar2 + 0x18) == RefCount::refDec) {
    LOCK();
    plVar1 = plVar2 + 1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if ((plVar2 != (long *)0x0) && (*plVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  else {
    (**(code **)(*plVar2 + 0x18))();
  }
  this_00 = *(MutexSys **)(this + 0x250);
  if (this_00 != (MutexSys *)0x0) {
    plVar2 = *(long **)(this_00 + 8);
    if (plVar2 != (long *)0x0) {
      if (*(code **)(*plVar2 + 0x18) == RefCount::refDec) {
        LOCK();
        plVar1 = plVar2 + 1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
      }
      else {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
    embree::MutexSys::~MutexSys(this_00);
    operator_delete(this_00,0x10);
  }
  embree::MutexSys::~MutexSys((MutexSys *)(this + 0x240));
  embree::MutexSys::~MutexSys((MutexSys *)(this + 0x238));
  plVar2 = *(long **)(this + 0x208);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))(plVar2,*(undefined8 *)(this + 0x220));
  }
  embree::alignedFree(*(void **)(this + 0x200));
  if (*(long *)(this + 0x1d0) != 0) {
    uVar5 = 0;
LAB_0010034b:
    do {
      plVar2 = *(long **)(*(long *)(this + 0x1e0) + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        if (*(code **)(*plVar2 + 0x18) != RefCount::refDec) {
          (**(code **)(*plVar2 + 0x18))();
          uVar5 = uVar5 + 1;
          if (*(ulong *)(this + 0x1d0) <= uVar5) break;
          goto LAB_0010034b;
        }
        LOCK();
        plVar1 = plVar2 + 1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ulong *)(this + 0x1d0));
  }
  plVar2 = *(long **)(this + 0x1c8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))(plVar2,*(undefined8 *)(this + 0x1e0));
  }
  pvVar4 = *(void **)(this + 0x1a0);
  while (pvVar4 != (void *)0x0) {
    std::
    _Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
    ::_M_erase(*(_Rb_tree_node **)((long)pvVar4 + 0x18));
    pvVar3 = *(void **)((long)pvVar4 + 0x10);
    operator_delete(pvVar4,0x28);
    pvVar4 = pvVar3;
  }
  embree::AccelN::~AccelN((AccelN *)this);
  return;
}



/* embree::Scene::~Scene() */

void __thiscall embree::Scene::~Scene(Scene *this)

{
  ~Scene(this);
  embree::alignedUSMFree(this);
  return;
}



/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, embree::parallel_for<unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) [clone .constprop.0] */

void embree::TaskScheduler::
     spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
               (_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,bool param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  long lVar11;
  Thread *pTVar12;
  Thread *pTVar13;
  Thread *pTVar14;
  long lVar15;
  _lambda___1_ *p_Var16;
  undefined7 in_register_00000009;
  ulong uVar17;
  undefined8 extraout_RDX;
  Thread **ppTVar18;
  Thread *pTVar19;
  long in_FS_OFFSET;
  Thread *pTStack_c0;
  Thread **ppTStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  Thread *pTStack_a0;
  long lStack_98;
  Thread *pTStack_88;
  _lambda___1_ *p_Stack_80;
  TaskGroupContext *local_70;
  undefined8 local_68;
  TaskGroupContext *local_60;
  long local_50;
  Thread *local_48;
  long local_40;
  
  local_68 = CONCAT71(in_register_00000009,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  p_Stack_80 = (_lambda___1_ *)0x100453;
  local_70 = param_2;
  embree::TaskScheduler::startThreads();
  p_Stack_80 = (_lambda___1_ *)0x10045b;
  lVar11 = embree::TaskScheduler::allocThreadIndex();
  p_Stack_80 = (_lambda___1_ *)0x10046d;
  pTVar12 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
  if (param_1 != (_lambda___1_ *)0x0) {
    if (*(code **)(*(long *)param_1 + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      UNLOCK();
    }
    else {
      p_Stack_80 = (_lambda___1_ *)0x1008b6;
      (**(code **)(*(long *)param_1 + 0x10))(param_1);
    }
  }
  *(long *)pTVar12 = lVar11;
  pTVar19 = pTVar12 + 0x40;
  pTVar13 = pTVar19;
  do {
    *(undefined4 *)pTVar13 = 0;
    pTVar14 = pTVar13 + 0x80;
    *(undefined4 *)(pTVar13 + 0x40) = 0;
    pTVar13 = pTVar14;
  } while (pTVar12 + 0x40040 != pTVar14);
  *(undefined8 *)(pTVar12 + 0x40040) = 0;
  *(undefined8 *)(pTVar12 + 0x40080) = 0;
  *(undefined8 *)(pTVar12 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar12 + 0xc0100) = 0;
  *(_lambda___1_ **)(pTVar12 + 0xc0108) = param_1;
  if (param_1 != (_lambda___1_ *)0x0) {
    if (*(code **)(*(long *)param_1 + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      UNLOCK();
    }
    else {
      p_Stack_80 = (_lambda___1_ *)0x1008ca;
      (**(code **)(*(long *)param_1 + 0x10))(param_1);
    }
    if (*(code **)(*(long *)param_1 + 0x18) == RefCount::refDec) {
      LOCK();
      p_Var16 = param_1 + 8;
      *(long *)p_Var16 = *(long *)p_Var16 + -1;
      UNLOCK();
      if (*(long *)p_Var16 == 0) {
        p_Stack_80 = (_lambda___1_ *)0x100887;
        (**(code **)(*(long *)param_1 + 8))(param_1);
      }
    }
    else {
      p_Stack_80 = (_lambda___1_ *)0x1008a2;
      (**(code **)(*(long *)param_1 + 0x18))(param_1);
    }
  }
  LOCK();
  *(Thread **)(*(long *)(param_1 + 0x10) + lVar11 * 8) = pTVar12;
  UNLOCK();
  p_Stack_80 = (_lambda___1_ *)0x100565;
  local_60 = local_70;
  local_48 = pTVar12;
  local_70 = (TaskGroupContext *)embree::TaskScheduler::swapThread(pTVar12);
  if (*(ulong *)(pTVar12 + 0x40080) < 0x1000) {
    lVar3 = *(long *)(pTVar12 + 0xc00c0);
    uVar17 = lVar3 + 0x30 + (ulong)(-(int)lVar3 & 0x3f);
    if (uVar17 < 0x80001) {
      *(ulong *)(pTVar12 + 0xc00c0) = uVar17;
      pTVar14 = pTVar12 + uVar17 + 0x40090;
      uVar6 = *(undefined8 *)local_60;
      uVar7 = *(undefined8 *)(local_60 + 8);
      *(undefined ***)pTVar14 = &PTR_execute_001062b0;
      uVar4 = *(undefined8 *)(local_60 + 0x20);
      uVar8 = *(undefined8 *)(local_60 + 0x10);
      uVar9 = *(undefined8 *)(local_60 + 0x18);
      *(undefined8 *)(pTVar14 + 8) = uVar6;
      *(undefined8 *)(pTVar14 + 0x10) = uVar7;
      *(undefined8 *)(pTVar14 + 0x28) = uVar4;
      *(undefined8 *)(pTVar14 + 0x18) = uVar8;
      *(undefined8 *)(pTVar14 + 0x20) = uVar9;
      lVar15 = *(long *)(pTVar12 + 0x40080) * 0x40;
      pTVar13 = pTVar19 + lVar15;
      lVar5 = *(long *)(pTVar12 + 0xc0100);
      *(undefined4 *)(pTVar12 + lVar15 + 0x44) = 1;
      pTVar12[lVar15 + 0x48] = (Thread)0x1;
      *(Thread **)(pTVar12 + lVar15 + 0x50) = pTVar14;
      *(long *)(pTVar12 + lVar15 + 0x58) = lVar5;
      *(ulong *)(pTVar12 + lVar15 + 0x60) = param_3;
      *(long *)(pTVar12 + lVar15 + 0x68) = lVar3;
      *(undefined8 *)(pTVar12 + lVar15 + 0x70) = local_68;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)pTVar13 == 0) {
        *(undefined4 *)pTVar13 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar12 + 0x40080) = *(long *)(pTVar12 + 0x40080) + 1;
      UNLOCK();
      uVar17 = *(ulong *)(pTVar12 + 0x40040);
      if (*(long *)(pTVar12 + 0x40080) - 1U <= uVar17) {
        LOCK();
        *(long *)(pTVar12 + 0x40040) = *(long *)(pTVar12 + 0x40080) + -1;
        UNLOCK();
      }
      p_Stack_80 = (_lambda___1_ *)0x10065e;
      embree::MutexSys::lock();
      LOCK();
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
      UNLOCK();
      LOCK();
      param_1[0x38] = (_lambda___1_)0x1;
      UNLOCK();
      p_Stack_80 = (_lambda___1_ *)0x100675;
      embree::ConditionSys::notify_all();
      p_Stack_80 = (_lambda___1_ *)0x10067d;
      embree::MutexSys::unlock();
      local_48 = (Thread *)param_1;
      if (param_1 != (_lambda___1_ *)0x0) {
        if (*(code **)(*(long *)param_1 + 0x10) == RefCount::refInc) {
          LOCK();
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
          UNLOCK();
        }
        else {
          p_Stack_80 = (_lambda___1_ *)0x1008ea;
          (**(code **)(*(long *)param_1 + 0x10))(param_1);
        }
      }
      ppTVar18 = &local_48;
      p_Stack_80 = (_lambda___1_ *)0x1006b2;
      embree::TaskScheduler::addScheduler((Ref *)ppTVar18);
      if (local_48 != (Thread *)0x0) {
        if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
          LOCK();
          p_Var16 = (_lambda___1_ *)(local_48 + 8);
          *(long *)p_Var16 = *(long *)p_Var16 + -1;
          UNLOCK();
          if (*(long *)p_Var16 == 0) {
            p_Stack_80 = (_lambda___1_ *)0x1006e1;
            (**(code **)(*(long *)local_48 + 8))();
          }
        }
        else {
          p_Stack_80 = (_lambda___1_ *)0x100893;
          (**(code **)(*(long *)local_48 + 0x18))();
        }
      }
      do {
        p_Stack_80 = (_lambda___1_ *)0x1006f5;
        pTVar14 = pTVar12;
        cVar10 = embree::TaskScheduler::TaskQueue::execute_local(pTVar19,(Task *)pTVar12);
      } while (cVar10 != '\0');
      LOCK();
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
      UNLOCK();
      local_48 = (Thread *)param_1;
      if (param_1 != (_lambda___1_ *)0x0) {
        if (*(code **)(*(long *)param_1 + 0x10) == RefCount::refInc) {
          LOCK();
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
          UNLOCK();
        }
        else {
          p_Stack_80 = (_lambda___1_ *)0x1008d9;
          (**(code **)(*(long *)param_1 + 0x10))(param_1);
        }
      }
      p_Stack_80 = (_lambda___1_ *)0x10072f;
      embree::TaskScheduler::removeScheduler((Ref *)ppTVar18);
      if (local_48 != (Thread *)0x0) {
        if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
          LOCK();
          p_Var16 = (_lambda___1_ *)(local_48 + 8);
          *(long *)p_Var16 = *(long *)p_Var16 + -1;
          UNLOCK();
          if (*(long *)p_Var16 == 0) {
            p_Stack_80 = (_lambda___1_ *)0x100873;
            (**(code **)(*(long *)local_48 + 8))();
          }
        }
        else {
          p_Stack_80 = (_lambda___1_ *)0x1008e0;
          (**(code **)(*(long *)local_48 + 0x18))();
        }
      }
      local_48 = (Thread *)0x0;
      LOCK();
      *(undefined8 *)(lVar11 * 8 + *(long *)(param_1 + 0x10)) = 0;
      UNLOCK();
      p_Stack_80 = (_lambda___1_ *)0x10077c;
      embree::TaskScheduler::swapThread((Thread *)local_70);
      pTVar19 = *(Thread **)param_3;
      if (pTVar19 != (Thread *)0x0) {
        p_Stack_80 = (_lambda___1_ *)0x100791;
        local_48 = pTVar19;
        std::__exception_ptr::exception_ptr::_M_addref();
        pTVar19 = local_48;
      }
      LOCK();
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
      UNLOCK();
      while (*(long *)(param_1 + 0x28) != 0) {
        p_Stack_80 = (_lambda___1_ *)0x1007ad;
        embree::yield();
      }
      local_48 = (Thread *)0x0;
      local_50 = *(long *)param_3;
      *(undefined8 *)param_3 = 0;
      if (local_50 != 0) {
        p_Stack_80 = (_lambda___1_ *)0x1007dd;
        std::__exception_ptr::exception_ptr::_M_release();
        if (local_48 != (Thread *)0x0) {
          p_Stack_80 = (_lambda___1_ *)0x1007ed;
          std::__exception_ptr::exception_ptr::_M_release();
        }
      }
      if (pTVar19 == (Thread *)0x0) {
        if (pTVar12 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          if (*(long **)(pTVar12 + 0xc0108) != (long *)0x0) {
            p_Stack_80 = (_lambda___1_ *)0x10080d;
            (**(code **)(**(long **)(pTVar12 + 0xc0108) + 0x18))();
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            embree::alignedFree(pTVar12);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        p_Stack_80 = (_lambda___1_ *)0x1008f4;
        __stack_chk_fail();
      }
      p_Stack_80 = (_lambda___1_ *)0x100901;
      local_48 = pTVar19;
      std::__exception_ptr::exception_ptr::_M_addref();
      p_Stack_80 = (_lambda___1_ *)0x100909;
      std::rethrow_exception();
      lStack_98 = *(long *)(in_FS_OFFSET + 0x28);
      pTStack_c0 = pTVar14;
      ppTStack_b8 = ppTVar18;
      uStack_b0 = extraout_RDX;
      uStack_a8 = uVar17;
      pTStack_a0 = pTVar13;
      pTStack_88 = pTVar12;
      p_Stack_80 = param_1;
      lVar11 = embree::TaskScheduler::thread();
      if (lVar11 == 0) {
        p_Var16 = (_lambda___1_ *)embree::TaskScheduler::instance();
        spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                  (p_Var16,(TaskGroupContext *)&pTStack_c0,(ulong)pTVar13,
                   SUB81((long)pTVar14 - (long)ppTVar18,0));
LAB_00100a3c:
        if (lStack_98 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      if (*(ulong *)(lVar11 + 0x40080) < 0x1000) {
        lVar3 = *(long *)(lVar11 + 0xc00c0);
        uVar17 = lVar3 + 0x30 + (ulong)(-(int)lVar3 & 0x3f);
        if (uVar17 < 0x80001) {
          *(ulong *)(lVar11 + 0xc00c0) = uVar17;
          puVar2 = (undefined8 *)(lVar11 + 0x40090 + uVar17);
          *puVar2 = &PTR_execute_001062b0;
          puVar2[1] = pTStack_c0;
          puVar2[2] = ppTStack_b8;
          puVar2[5] = pTStack_a0;
          puVar2[3] = uStack_b0;
          puVar2[4] = uStack_a8;
          lVar15 = *(long *)(lVar11 + 0x40080) * 0x40;
          piVar1 = (int *)(lVar11 + 0x40 + lVar15);
          lVar5 = *(long *)(lVar11 + 0xc0100);
          *(undefined4 *)(lVar11 + 0x44 + lVar15) = 1;
          *(undefined1 *)(lVar11 + 0x48 + lVar15) = 1;
          lVar15 = lVar15 + lVar11;
          *(undefined8 **)(lVar15 + 0x50) = puVar2;
          *(long *)(lVar15 + 0x58) = lVar5;
          *(Thread **)(lVar15 + 0x60) = pTVar13;
          *(long *)(lVar15 + 0x68) = lVar3;
          *(long *)(lVar15 + 0x70) = (long)pTVar14 - (long)ppTVar18;
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
            UNLOCK();
          }
          LOCK();
          if (*piVar1 == 0) {
            *piVar1 = 1;
          }
          UNLOCK();
          LOCK();
          *(long *)(lVar11 + 0x40080) = *(long *)(lVar11 + 0x40080) + 1;
          UNLOCK();
          if (*(long *)(lVar11 + 0x40080) - 1U <= *(ulong *)(lVar11 + 0x40040)) {
            LOCK();
            *(long *)(lVar11 + 0x40040) = *(long *)(lVar11 + 0x40080) + -1;
            UNLOCK();
          }
          goto LAB_00100a3c;
        }
      }
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
                    /* WARNING: Subroutine does not return */
  p_Stack_80 = (_lambda___1_ *)
               spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
  ;
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long, embree::parallel_for<unsigned long,
   embree::Scene::build_cpu_accels()::{lambda(unsigned long)#1}>(unsigned long,
   embree::Scene::build_cpu_accels()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  _lambda___1_ *p_Var8;
  long in_FS_OFFSET;
  ulong local_48;
  ulong uStack_40;
  ulong local_38;
  _lambda_embree__range<unsigned_long>_const___1_ *p_Stack_30;
  TaskGroupContext *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  uStack_40 = param_1;
  local_38 = param_3;
  p_Stack_30 = param_4;
  local_28 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    p_Var8 = (_lambda___1_ *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (p_Var8,(TaskGroupContext *)&local_48,(ulong)param_5,SUB81(param_2 - param_1,0));
LAB_00100a3c:
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (*(ulong *)(lVar6 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(lVar6 + 0xc00c0);
    uVar2 = lVar4 + 0x30 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar2 < 0x80001) {
      *(ulong *)(lVar6 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar6 + 0x40090 + uVar2);
      *puVar3 = &PTR_execute_001062b0;
      puVar3[1] = local_48;
      puVar3[2] = uStack_40;
      puVar3[5] = local_28;
      puVar3[3] = local_38;
      puVar3[4] = p_Stack_30;
      lVar7 = *(long *)(lVar6 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar6 + 0x40 + lVar7);
      lVar5 = *(long *)(lVar6 + 0xc0100);
      *(undefined4 *)(lVar6 + 0x44 + lVar7) = 1;
      *(undefined1 *)(lVar6 + 0x48 + lVar7) = 1;
      lVar7 = lVar7 + lVar6;
      *(undefined8 **)(lVar7 + 0x50) = puVar3;
      *(long *)(lVar7 + 0x58) = lVar5;
      *(TaskGroupContext **)(lVar7 + 0x60) = param_5;
      *(long *)(lVar7 + 0x68) = lVar4;
      *(ulong *)(lVar7 + 0x70) = param_2 - param_1;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar6 + 0x40080) = *(long *)(lVar6 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar6 + 0x40080) - 1U <= *(ulong *)(lVar6 + 0x40040)) {
        LOCK();
        *(long *)(lVar6 + 0x40040) = *(long *)(lVar6 + 0x40080) + -1;
        UNLOCK();
      }
      goto LAB_00100a3c;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::{lambda(unsigned_long)#1}>(unsigned_long,embree::Scene::build_cpu_accels()::{lambda(unsigned_long)#1}const&)::{lambda(embree::range<unsigned_long>const&)#1}>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::{lambda(unsigned_long)#1}>(unsigned_long,embree::Scene::build_cpu_accels()::{lambda(unsigned_long)#1}const&)::{lambda(embree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  _lambda___1_ *p_Var10;
  ulong uVar11;
  long in_FS_OFFSET;
  ulong local_58;
  long lStack_50;
  ulong local_48;
  long *plStack_40;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *(long *)(this + 0x10);
  if (*(ulong *)(this + 0x18) < (ulong)(*(long *)(this + 8) - lVar4)) {
    uVar5 = *(ulong *)(this + 0x28);
    uVar11 = (ulong)(*(long *)(this + 8) + lVar4) >> 1;
    local_58 = uVar11;
    lStack_50 = lVar4;
    local_48 = *(ulong *)(this + 0x18);
    plStack_40 = *(long **)(this + 0x20);
    local_38 = uVar5;
    lVar8 = embree::TaskScheduler::thread();
    if (lVar8 == 0) {
      p_Var10 = (_lambda___1_ *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (p_Var10,(TaskGroupContext *)&local_58,uVar5,SUB81(uVar11 - lVar4,0));
    }
    else {
      if (0xfff < *(ulong *)(lVar8 + 0x40080)) {

        embree_TaskScheduler_ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>_execute
        :
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = *(long *)(lVar8 + 0xc00c0);
      uVar2 = lVar6 + 0x30 + (ulong)(-(int)lVar6 & 0x3f);
      if (0x80000 < uVar2)
      goto 
      embree_TaskScheduler_ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>_execute
      ;
      *(ulong *)(lVar8 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar8 + 0x40090 + uVar2);
      *puVar3 = &PTR_execute_001062b0;
      puVar3[1] = local_58;
      puVar3[2] = lStack_50;
      puVar3[5] = local_38;
      puVar3[3] = local_48;
      puVar3[4] = plStack_40;
      lVar9 = *(long *)(lVar8 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar8 + 0x40 + lVar9);
      lVar7 = *(long *)(lVar8 + 0xc0100);
      *(undefined4 *)(lVar8 + 0x44 + lVar9) = 1;
      *(undefined1 *)(lVar8 + 0x48 + lVar9) = 1;
      lVar9 = lVar9 + lVar8;
      *(undefined8 **)(lVar9 + 0x50) = puVar3;
      *(long *)(lVar9 + 0x58) = lVar7;
      *(ulong *)(lVar9 + 0x60) = uVar5;
      *(long *)(lVar9 + 0x68) = lVar6;
      *(ulong *)(lVar9 + 0x70) = uVar11 - lVar4;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar8 + 0x40080) = *(long *)(lVar8 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar8 + 0x40080) - 1U <= *(ulong *)(lVar8 + 0x40040)) {
        LOCK();
        *(long *)(lVar8 + 0x40040) = *(long *)(lVar8 + 0x40080) + -1;
        UNLOCK();
      }
    }
    spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar11,*(ulong *)(this + 8),*(ulong *)(this + 0x18),
               *(_lambda_embree__range<unsigned_long>_const___1_ **)(this + 0x20),
               *(TaskGroupContext **)(this + 0x28));
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else {
    *(undefined4 *)(*(long *)(**(long **)(this + 0x20) + 0x200) + lVar4 * 4) = 0;
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long, embree::Scene::commit_task()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::commit_task()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::Scene::commit_task()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::commit_task()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, embree::parallel_for<unsigned long, embree::Scene::commit_task()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::commit_task()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::Scene::commit_task()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::commit_task()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) [clone .constprop.0] */

void embree::TaskScheduler::
     spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
               (_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,bool param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  long lVar11;
  Thread *pTVar12;
  Thread *pTVar13;
  Thread *pTVar14;
  long lVar15;
  _lambda___1_ *p_Var16;
  undefined7 in_register_00000009;
  ulong uVar17;
  undefined8 extraout_RDX;
  Thread **ppTVar18;
  Thread *pTVar19;
  long in_FS_OFFSET;
  Thread *pTStack_c0;
  Thread **ppTStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  Thread *pTStack_a0;
  long lStack_98;
  Thread *pTStack_88;
  _lambda___1_ *p_Stack_80;
  TaskGroupContext *local_70;
  undefined8 local_68;
  TaskGroupContext *local_60;
  long local_50;
  Thread *local_48;
  long local_40;
  
  local_68 = CONCAT71(in_register_00000009,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  p_Stack_80 = (_lambda___1_ *)0x100cc3;
  local_70 = param_2;
  embree::TaskScheduler::startThreads();
  p_Stack_80 = (_lambda___1_ *)0x100ccb;
  lVar11 = embree::TaskScheduler::allocThreadIndex();
  p_Stack_80 = (_lambda___1_ *)0x100cdd;
  pTVar12 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
  if (param_1 != (_lambda___1_ *)0x0) {
    if (*(code **)(*(long *)param_1 + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      UNLOCK();
    }
    else {
      p_Stack_80 = (_lambda___1_ *)0x101126;
      (**(code **)(*(long *)param_1 + 0x10))(param_1);
    }
  }
  *(long *)pTVar12 = lVar11;
  pTVar19 = pTVar12 + 0x40;
  pTVar13 = pTVar19;
  do {
    *(undefined4 *)pTVar13 = 0;
    pTVar14 = pTVar13 + 0x80;
    *(undefined4 *)(pTVar13 + 0x40) = 0;
    pTVar13 = pTVar14;
  } while (pTVar12 + 0x40040 != pTVar14);
  *(undefined8 *)(pTVar12 + 0x40040) = 0;
  *(undefined8 *)(pTVar12 + 0x40080) = 0;
  *(undefined8 *)(pTVar12 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar12 + 0xc0100) = 0;
  *(_lambda___1_ **)(pTVar12 + 0xc0108) = param_1;
  if (param_1 != (_lambda___1_ *)0x0) {
    if (*(code **)(*(long *)param_1 + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      UNLOCK();
    }
    else {
      p_Stack_80 = (_lambda___1_ *)0x10113a;
      (**(code **)(*(long *)param_1 + 0x10))(param_1);
    }
    if (*(code **)(*(long *)param_1 + 0x18) == RefCount::refDec) {
      LOCK();
      p_Var16 = param_1 + 8;
      *(long *)p_Var16 = *(long *)p_Var16 + -1;
      UNLOCK();
      if (*(long *)p_Var16 == 0) {
        p_Stack_80 = (_lambda___1_ *)0x1010f7;
        (**(code **)(*(long *)param_1 + 8))(param_1);
      }
    }
    else {
      p_Stack_80 = (_lambda___1_ *)0x101112;
      (**(code **)(*(long *)param_1 + 0x18))(param_1);
    }
  }
  LOCK();
  *(Thread **)(*(long *)(param_1 + 0x10) + lVar11 * 8) = pTVar12;
  UNLOCK();
  p_Stack_80 = (_lambda___1_ *)0x100dd5;
  local_60 = local_70;
  local_48 = pTVar12;
  local_70 = (TaskGroupContext *)embree::TaskScheduler::swapThread(pTVar12);
  if (*(ulong *)(pTVar12 + 0x40080) < 0x1000) {
    lVar3 = *(long *)(pTVar12 + 0xc00c0);
    uVar17 = lVar3 + 0x30 + (ulong)(-(int)lVar3 & 0x3f);
    if (uVar17 < 0x80001) {
      *(ulong *)(pTVar12 + 0xc00c0) = uVar17;
      pTVar14 = pTVar12 + uVar17 + 0x40090;
      uVar6 = *(undefined8 *)local_60;
      uVar7 = *(undefined8 *)(local_60 + 8);
      *(undefined ***)pTVar14 = &PTR_execute_001062c8;
      uVar4 = *(undefined8 *)(local_60 + 0x20);
      uVar8 = *(undefined8 *)(local_60 + 0x10);
      uVar9 = *(undefined8 *)(local_60 + 0x18);
      *(undefined8 *)(pTVar14 + 8) = uVar6;
      *(undefined8 *)(pTVar14 + 0x10) = uVar7;
      *(undefined8 *)(pTVar14 + 0x28) = uVar4;
      *(undefined8 *)(pTVar14 + 0x18) = uVar8;
      *(undefined8 *)(pTVar14 + 0x20) = uVar9;
      lVar15 = *(long *)(pTVar12 + 0x40080) * 0x40;
      pTVar13 = pTVar19 + lVar15;
      lVar5 = *(long *)(pTVar12 + 0xc0100);
      *(undefined4 *)(pTVar12 + lVar15 + 0x44) = 1;
      pTVar12[lVar15 + 0x48] = (Thread)0x1;
      *(Thread **)(pTVar12 + lVar15 + 0x50) = pTVar14;
      *(long *)(pTVar12 + lVar15 + 0x58) = lVar5;
      *(ulong *)(pTVar12 + lVar15 + 0x60) = param_3;
      *(long *)(pTVar12 + lVar15 + 0x68) = lVar3;
      *(undefined8 *)(pTVar12 + lVar15 + 0x70) = local_68;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)pTVar13 == 0) {
        *(undefined4 *)pTVar13 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar12 + 0x40080) = *(long *)(pTVar12 + 0x40080) + 1;
      UNLOCK();
      uVar17 = *(ulong *)(pTVar12 + 0x40040);
      if (*(long *)(pTVar12 + 0x40080) - 1U <= uVar17) {
        LOCK();
        *(long *)(pTVar12 + 0x40040) = *(long *)(pTVar12 + 0x40080) + -1;
        UNLOCK();
      }
      p_Stack_80 = (_lambda___1_ *)0x100ece;
      embree::MutexSys::lock();
      LOCK();
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
      UNLOCK();
      LOCK();
      param_1[0x38] = (_lambda___1_)0x1;
      UNLOCK();
      p_Stack_80 = (_lambda___1_ *)0x100ee5;
      embree::ConditionSys::notify_all();
      p_Stack_80 = (_lambda___1_ *)0x100eed;
      embree::MutexSys::unlock();
      local_48 = (Thread *)param_1;
      if (param_1 != (_lambda___1_ *)0x0) {
        if (*(code **)(*(long *)param_1 + 0x10) == RefCount::refInc) {
          LOCK();
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
          UNLOCK();
        }
        else {
          p_Stack_80 = (_lambda___1_ *)0x10115a;
          (**(code **)(*(long *)param_1 + 0x10))(param_1);
        }
      }
      ppTVar18 = &local_48;
      p_Stack_80 = (_lambda___1_ *)0x100f22;
      embree::TaskScheduler::addScheduler((Ref *)ppTVar18);
      if (local_48 != (Thread *)0x0) {
        if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
          LOCK();
          p_Var16 = (_lambda___1_ *)(local_48 + 8);
          *(long *)p_Var16 = *(long *)p_Var16 + -1;
          UNLOCK();
          if (*(long *)p_Var16 == 0) {
            p_Stack_80 = (_lambda___1_ *)0x100f51;
            (**(code **)(*(long *)local_48 + 8))();
          }
        }
        else {
          p_Stack_80 = (_lambda___1_ *)0x101103;
          (**(code **)(*(long *)local_48 + 0x18))();
        }
      }
      do {
        p_Stack_80 = (_lambda___1_ *)0x100f65;
        pTVar14 = pTVar12;
        cVar10 = embree::TaskScheduler::TaskQueue::execute_local(pTVar19,(Task *)pTVar12);
      } while (cVar10 != '\0');
      LOCK();
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
      UNLOCK();
      local_48 = (Thread *)param_1;
      if (param_1 != (_lambda___1_ *)0x0) {
        if (*(code **)(*(long *)param_1 + 0x10) == RefCount::refInc) {
          LOCK();
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
          UNLOCK();
        }
        else {
          p_Stack_80 = (_lambda___1_ *)0x101149;
          (**(code **)(*(long *)param_1 + 0x10))(param_1);
        }
      }
      p_Stack_80 = (_lambda___1_ *)0x100f9f;
      embree::TaskScheduler::removeScheduler((Ref *)ppTVar18);
      if (local_48 != (Thread *)0x0) {
        if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
          LOCK();
          p_Var16 = (_lambda___1_ *)(local_48 + 8);
          *(long *)p_Var16 = *(long *)p_Var16 + -1;
          UNLOCK();
          if (*(long *)p_Var16 == 0) {
            p_Stack_80 = (_lambda___1_ *)0x1010e3;
            (**(code **)(*(long *)local_48 + 8))();
          }
        }
        else {
          p_Stack_80 = (_lambda___1_ *)0x101150;
          (**(code **)(*(long *)local_48 + 0x18))();
        }
      }
      local_48 = (Thread *)0x0;
      LOCK();
      *(undefined8 *)(lVar11 * 8 + *(long *)(param_1 + 0x10)) = 0;
      UNLOCK();
      p_Stack_80 = (_lambda___1_ *)0x100fec;
      embree::TaskScheduler::swapThread((Thread *)local_70);
      pTVar19 = *(Thread **)param_3;
      if (pTVar19 != (Thread *)0x0) {
        p_Stack_80 = (_lambda___1_ *)0x101001;
        local_48 = pTVar19;
        std::__exception_ptr::exception_ptr::_M_addref();
        pTVar19 = local_48;
      }
      LOCK();
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
      UNLOCK();
      while (*(long *)(param_1 + 0x28) != 0) {
        p_Stack_80 = (_lambda___1_ *)0x10101d;
        embree::yield();
      }
      local_48 = (Thread *)0x0;
      local_50 = *(long *)param_3;
      *(undefined8 *)param_3 = 0;
      if (local_50 != 0) {
        p_Stack_80 = (_lambda___1_ *)0x10104d;
        std::__exception_ptr::exception_ptr::_M_release();
        if (local_48 != (Thread *)0x0) {
          p_Stack_80 = (_lambda___1_ *)0x10105d;
          std::__exception_ptr::exception_ptr::_M_release();
        }
      }
      if (pTVar19 == (Thread *)0x0) {
        if (pTVar12 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          if (*(long **)(pTVar12 + 0xc0108) != (long *)0x0) {
            p_Stack_80 = (_lambda___1_ *)0x10107d;
            (**(code **)(**(long **)(pTVar12 + 0xc0108) + 0x18))();
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            embree::alignedFree(pTVar12);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        p_Stack_80 = (_lambda___1_ *)0x101164;
        __stack_chk_fail();
      }
      p_Stack_80 = (_lambda___1_ *)0x101171;
      local_48 = pTVar19;
      std::__exception_ptr::exception_ptr::_M_addref();
      p_Stack_80 = (_lambda___1_ *)0x101179;
      std::rethrow_exception();
      lStack_98 = *(long *)(in_FS_OFFSET + 0x28);
      pTStack_c0 = pTVar14;
      ppTStack_b8 = ppTVar18;
      uStack_b0 = extraout_RDX;
      uStack_a8 = uVar17;
      pTStack_a0 = pTVar13;
      pTStack_88 = pTVar12;
      p_Stack_80 = param_1;
      lVar11 = embree::TaskScheduler::thread();
      if (lVar11 == 0) {
        p_Var16 = (_lambda___1_ *)embree::TaskScheduler::instance();
        spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                  (p_Var16,(TaskGroupContext *)&pTStack_c0,(ulong)pTVar13,
                   SUB81((long)pTVar14 - (long)ppTVar18,0));
LAB_001012ac:
        if (lStack_98 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      if (*(ulong *)(lVar11 + 0x40080) < 0x1000) {
        lVar3 = *(long *)(lVar11 + 0xc00c0);
        uVar17 = lVar3 + 0x30 + (ulong)(-(int)lVar3 & 0x3f);
        if (uVar17 < 0x80001) {
          *(ulong *)(lVar11 + 0xc00c0) = uVar17;
          puVar2 = (undefined8 *)(lVar11 + 0x40090 + uVar17);
          *puVar2 = &PTR_execute_001062c8;
          puVar2[1] = pTStack_c0;
          puVar2[2] = ppTStack_b8;
          puVar2[5] = pTStack_a0;
          puVar2[3] = uStack_b0;
          puVar2[4] = uStack_a8;
          lVar15 = *(long *)(lVar11 + 0x40080) * 0x40;
          piVar1 = (int *)(lVar11 + 0x40 + lVar15);
          lVar5 = *(long *)(lVar11 + 0xc0100);
          *(undefined4 *)(lVar11 + 0x44 + lVar15) = 1;
          *(undefined1 *)(lVar11 + 0x48 + lVar15) = 1;
          lVar15 = lVar15 + lVar11;
          *(undefined8 **)(lVar15 + 0x50) = puVar2;
          *(long *)(lVar15 + 0x58) = lVar5;
          *(Thread **)(lVar15 + 0x60) = pTVar13;
          *(long *)(lVar15 + 0x68) = lVar3;
          *(long *)(lVar15 + 0x70) = (long)pTVar14 - (long)ppTVar18;
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
            UNLOCK();
          }
          LOCK();
          if (*piVar1 == 0) {
            *piVar1 = 1;
          }
          UNLOCK();
          LOCK();
          *(long *)(lVar11 + 0x40080) = *(long *)(lVar11 + 0x40080) + 1;
          UNLOCK();
          if (*(long *)(lVar11 + 0x40080) - 1U <= *(ulong *)(lVar11 + 0x40040)) {
            LOCK();
            *(long *)(lVar11 + 0x40040) = *(long *)(lVar11 + 0x40080) + -1;
            UNLOCK();
          }
          goto LAB_001012ac;
        }
      }
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
                    /* WARNING: Subroutine does not return */
  p_Stack_80 = (_lambda___1_ *)
               spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
  ;
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long, embree::parallel_for<unsigned long,
   embree::Scene::commit_task()::{lambda(unsigned long)#1}>(unsigned long,
   embree::Scene::commit_task()::{lambda(unsigned long)#1} const&)::{lambda(embree::range<unsigned
   long> const&)#1}>(unsigned long, unsigned long, unsigned long, embree::parallel_for<unsigned
   long, embree::Scene::commit_task()::{lambda(unsigned long)#1}>(unsigned long,
   embree::Scene::commit_task()::{lambda(unsigned long)#1} const&)::{lambda(embree::range<unsigned
   long> const&)#1} const&, embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  _lambda___1_ *p_Var8;
  long in_FS_OFFSET;
  ulong local_48;
  ulong uStack_40;
  ulong local_38;
  _lambda_embree__range<unsigned_long>_const___1_ *p_Stack_30;
  TaskGroupContext *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  uStack_40 = param_1;
  local_38 = param_3;
  p_Stack_30 = param_4;
  local_28 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    p_Var8 = (_lambda___1_ *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (p_Var8,(TaskGroupContext *)&local_48,(ulong)param_5,SUB81(param_2 - param_1,0));
LAB_001012ac:
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (*(ulong *)(lVar6 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(lVar6 + 0xc00c0);
    uVar2 = lVar4 + 0x30 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar2 < 0x80001) {
      *(ulong *)(lVar6 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar6 + 0x40090 + uVar2);
      *puVar3 = &PTR_execute_001062c8;
      puVar3[1] = local_48;
      puVar3[2] = uStack_40;
      puVar3[5] = local_28;
      puVar3[3] = local_38;
      puVar3[4] = p_Stack_30;
      lVar7 = *(long *)(lVar6 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar6 + 0x40 + lVar7);
      lVar5 = *(long *)(lVar6 + 0xc0100);
      *(undefined4 *)(lVar6 + 0x44 + lVar7) = 1;
      *(undefined1 *)(lVar6 + 0x48 + lVar7) = 1;
      lVar7 = lVar7 + lVar6;
      *(undefined8 **)(lVar7 + 0x50) = puVar3;
      *(long *)(lVar7 + 0x58) = lVar5;
      *(TaskGroupContext **)(lVar7 + 0x60) = param_5;
      *(long *)(lVar7 + 0x68) = lVar4;
      *(ulong *)(lVar7 + 0x70) = param_2 - param_1;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar6 + 0x40080) = *(long *)(lVar6 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar6 + 0x40080) - 1U <= *(ulong *)(lVar6 + 0x40040)) {
        LOCK();
        *(long *)(lVar6 + 0x40040) = *(long *)(lVar6 + 0x40080) + -1;
        UNLOCK();
      }
      goto LAB_001012ac;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long, embree::Scene::commit_task()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::commit_task()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::Scene::commit_task()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::commit_task()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::{lambda(unsigned_long)#1}>(unsigned_long,embree::Scene::commit_task()::{lambda(unsigned_long)#1}const&)::{lambda(embree::range<unsigned_long>const&)#1}>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::{lambda(unsigned_long)#1}>(unsigned_long,embree::Scene::commit_task()::{lambda(unsigned_long)#1}const&)::{lambda(embree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  int *piVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  _lambda___1_ *p_Var12;
  ulong uVar13;
  long in_FS_OFFSET;
  long local_48;
  ulong uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulong local_28;
  long local_20;
  
  uVar3 = *(ulong *)(this + 0x10);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(ulong *)(this + 0x18) < *(long *)(this + 8) - uVar3) {
    uVar13 = *(long *)(this + 8) + uVar3 >> 1;
    spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar3,uVar13,*(ulong *)(this + 0x18),
               *(_lambda_embree__range<unsigned_long>_const___1_ **)(this + 0x20),
               *(TaskGroupContext **)(this + 0x28));
    local_48 = *(long *)(this + 8);
    uStack_30 = *(undefined8 *)(this + 0x20);
    uVar3 = *(ulong *)(this + 0x28);
    local_38 = *(undefined8 *)(this + 0x18);
    lVar8 = local_48 - uVar13;
    uStack_40 = uVar13;
    local_28 = uVar3;
    lVar9 = embree::TaskScheduler::thread();
    if (lVar9 == 0) {
      p_Var12 = (_lambda___1_ *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (p_Var12,(TaskGroupContext *)&local_48,uVar3,SUB81(lVar8,0));
    }
    else {
      if (0xfff < *(ulong *)(lVar9 + 0x40080)) {

        embree_TaskScheduler_ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>_execute
        :
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = *(long *)(lVar9 + 0xc00c0);
      uVar13 = lVar4 + 0x30 + (ulong)(-(int)lVar4 & 0x3f);
      if (0x80000 < uVar13)
      goto 
      embree_TaskScheduler_ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>_execute
      ;
      *(ulong *)(lVar9 + 0xc00c0) = uVar13;
      puVar2 = (undefined8 *)(lVar9 + 0x40090 + uVar13);
      *puVar2 = &PTR_execute_001062c8;
      puVar2[1] = local_48;
      puVar2[2] = uStack_40;
      puVar2[5] = local_28;
      puVar2[3] = local_38;
      puVar2[4] = uStack_30;
      lVar10 = *(long *)(lVar9 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar9 + 0x40 + lVar10);
      lVar5 = *(long *)(lVar9 + 0xc0100);
      *(undefined4 *)(lVar9 + 0x44 + lVar10) = 1;
      *(undefined1 *)(lVar9 + 0x48 + lVar10) = 1;
      lVar10 = lVar10 + lVar9;
      *(undefined8 **)(lVar10 + 0x50) = puVar2;
      *(long *)(lVar10 + 0x58) = lVar5;
      *(ulong *)(lVar10 + 0x60) = uVar3;
      *(long *)(lVar10 + 0x68) = lVar4;
      *(long *)(lVar10 + 0x70) = lVar8;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar9 + 0x40080) = *(long *)(lVar9 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar9 + 0x40080) - 1U <= *(ulong *)(lVar9 + 0x40040)) {
        LOCK();
        *(long *)(lVar9 + 0x40040) = *(long *)(lVar9 + 0x40080) + -1;
        UNLOCK();
      }
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else {
    plVar6 = *(long **)(this + 0x20);
    plVar7 = *(long **)(*(long *)(*plVar6 + 0x1e0) + uVar3 * 8);
    if ((plVar7 != (long *)0x0) && ((*(byte *)((long)plVar7 + 0x3e) & 0x20) != 0)) {
      (**(code **)(*plVar7 + 0x70))();
      uVar11 = (**(code **)(**(long **)(*(long *)(*plVar6 + 0x1e0) + uVar3 * 8) + 0xe8))();
      *(undefined8 *)(*(long *)(*plVar6 + 0x220) + uVar3 * 8) = uVar11;
      *(undefined4 *)(*(long *)(*plVar6 + 0x200) + uVar3 * 4) =
           *(undefined4 *)(*(long *)(*(long *)(*plVar6 + 0x1e0) + uVar3 * 8) + 0x38);
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::GeometryCounts embree::parallel_reduce_internal<unsigned long, embree::GeometryCounts,
   embree::parallel_reduce<unsigned long, embree::GeometryCounts,
   embree::Scene::commit_task()::{lambda(embree::range<unsigned long> const&)#1},
   std::plus<embree::GeometryCounts> >(unsigned long, unsigned long, embree::GeometryCounts const&,
   embree::Scene::commit_task()::{lambda(embree::range<unsigned long> const&)#1} const&,
   std::plus<embree::GeometryCounts> const&)::{lambda(embree::range<unsigned long>)#1},
   std::plus<embree::GeometryCounts> >(unsigned long, unsigned long, unsigned long, unsigned long,
   embree::GeometryCounts const&, embree::parallel_reduce<unsigned long, embree::GeometryCounts,
   embree::Scene::commit_task()::{lambda(embree::range<unsigned long> const&)#1},
   std::plus<embree::GeometryCounts> >(unsigned long, unsigned long, embree::GeometryCounts const&,
   embree::Scene::commit_task()::{lambda(embree::range<unsigned long> const&)#1} const&,
   std::plus<embree::GeometryCounts> const&)::{lambda(embree::range<unsigned long>)#1} const&,
   std::plus<embree::GeometryCounts> const&) [clone .constprop.0] [clone .isra.0] */

ulong embree::
      parallel_reduce_internal<unsigned_long,embree::GeometryCounts,embree::parallel_reduce<unsigned_long,embree::GeometryCounts,embree::Scene::commit_task()::_lambda(embree::range<unsigned_long>const&)_1_,std::plus<embree::GeometryCounts>>(unsigned_long,unsigned_long,embree::GeometryCounts_const&,embree::Scene::commit_task()::_lambda(embree::range<unsigned_long>const&)_1_const&,std::plus<embree::GeometryCounts>const&)::_lambda(embree::range<unsigned_long>)_1_,std::plus<embree::GeometryCounts>>
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4,
                GeometryCounts_conflict *param_5,_lambda_embree__range<unsigned_long>__1_ *param_6,
                plus *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  ulong uVar17;
  long ***ppplVar18;
  long ***ppplVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long in_FS_OFFSET;
  long local_20d0;
  long local_20c8;
  long local_20c0;
  long local_20b8;
  long local_20b0;
  long local_20a8;
  long local_20a0;
  long local_2098;
  long local_2090;
  long local_2088;
  long local_2080;
  long local_2078;
  long local_2070;
  long local_2068;
  ulong local_2060;
  ulong local_2058 [2];
  undefined8 local_2048;
  long local_2040;
  long local_2038;
  undefined8 *local_2030;
  ulong *local_2028;
  ulong *local_2020;
  long **local_2018;
  GeometryCounts_conflict *local_2010;
  long *local_2000 [1000];
  long **local_c0;
  ulong local_b8;
  long local_48;
  
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_2048 = 0;
  local_2060 = param_3;
  local_2058[0] = param_2;
  uVar17 = embree::TaskScheduler::threadCount();
  if (0x200 < local_2058[0]) {
    local_2058[0] = 0x200;
  }
  if (uVar17 < local_2058[0]) {
    local_2058[0] = uVar17;
  }
  ppplVar19 = (long ***)local_2000;
  do {
    *ppplVar19 = (long **)0x0;
    ppplVar18 = ppplVar19 + 0x19;
    ppplVar19[1] = (long **)0x0;
    ppplVar19[2] = (long **)0x0;
    ppplVar19[3] = (long **)0x0;
    ppplVar19[4] = (long **)0x0;
    ppplVar19[5] = (long **)0x0;
    ppplVar19[6] = (long **)0x0;
    ppplVar19[7] = (long **)0x0;
    ppplVar19[8] = (long **)0x0;
    ppplVar19[9] = (long **)0x0;
    ppplVar19[10] = (long **)0x0;
    ppplVar19[0xb] = (long **)0x0;
    ppplVar19[0xc] = (long **)0x0;
    ppplVar19[0xd] = (long **)0x0;
    ppplVar19[0xe] = (long **)0x0;
    ppplVar19[0xf] = (long **)0x0;
    ppplVar19[0x10] = (long **)0x0;
    ppplVar19[0x11] = (long **)0x0;
    ppplVar19[0x12] = (long **)0x0;
    ppplVar19[0x13] = (long **)0x0;
    ppplVar19[0x14] = (long **)0x0;
    ppplVar19[0x15] = (long **)0x0;
    ppplVar19[0x16] = (long **)0x0;
    ppplVar19[0x17] = (long **)0x0;
    ppplVar19[0x18] = (long **)0x0;
    ppplVar19 = ppplVar18;
  } while (&local_c0 != ppplVar18);
  local_c0 = local_2000;
  local_b8 = local_2058[0];
  if (0x2000 < local_2058[0] * 200) {
    local_c0 = (long **)embree::alignedMalloc(local_2058[0] * 200,0x40);
  }
  local_2030 = &local_2048;
  local_2028 = &local_2060;
  local_2020 = local_2058;
  local_2018 = local_2000;
  local_2010 = param_5;
  if (local_2058[0] == 0) {
    uVar2 = *(undefined8 *)(param_4 + 8);
    uVar3 = *(undefined8 *)(param_4 + 0x10);
    uVar4 = *(undefined8 *)(param_4 + 0x18);
    uVar5 = *(undefined8 *)(param_4 + 0x20);
    uVar6 = *(undefined8 *)(param_4 + 0x28);
    uVar7 = *(undefined8 *)(param_4 + 0x30);
    uVar8 = *(undefined8 *)(param_4 + 0x38);
    uVar1 = *(undefined8 *)(param_4 + 0xc0);
    *(undefined8 *)param_1 = *(undefined8 *)param_4;
    *(undefined8 *)(param_1 + 8) = uVar2;
    uVar2 = *(undefined8 *)(param_4 + 0x40);
    uVar9 = *(undefined8 *)(param_4 + 0x48);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    uVar3 = *(undefined8 *)(param_4 + 0x50);
    uVar4 = *(undefined8 *)(param_4 + 0x58);
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    uVar5 = *(undefined8 *)(param_4 + 0x60);
    uVar6 = *(undefined8 *)(param_4 + 0x68);
    *(undefined8 *)(param_1 + 0x30) = uVar7;
    *(undefined8 *)(param_1 + 0x38) = uVar8;
    uVar7 = *(undefined8 *)(param_4 + 0x70);
    uVar8 = *(undefined8 *)(param_4 + 0x78);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    *(undefined8 *)(param_1 + 0x48) = uVar9;
    uVar2 = *(undefined8 *)(param_4 + 0x80);
    uVar9 = *(undefined8 *)(param_4 + 0x88);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    *(undefined8 *)(param_1 + 0x58) = uVar4;
    uVar3 = *(undefined8 *)(param_4 + 0x90);
    uVar4 = *(undefined8 *)(param_4 + 0x98);
    *(undefined8 *)(param_1 + 0x60) = uVar5;
    *(undefined8 *)(param_1 + 0x68) = uVar6;
    uVar5 = *(undefined8 *)(param_4 + 0xa0);
    uVar6 = *(undefined8 *)(param_4 + 0xa8);
    *(undefined8 *)(param_1 + 0x70) = uVar7;
    *(undefined8 *)(param_1 + 0x78) = uVar8;
    uVar7 = *(undefined8 *)(param_4 + 0xb0);
    uVar8 = *(undefined8 *)(param_4 + 0xb8);
    *(undefined8 *)(param_1 + 0xc0) = uVar1;
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    *(undefined8 *)(param_1 + 0x88) = uVar9;
    *(undefined8 *)(param_1 + 0x90) = uVar3;
    *(undefined8 *)(param_1 + 0x98) = uVar4;
    *(undefined8 *)(param_1 + 0xa0) = uVar5;
    *(undefined8 *)(param_1 + 0xa8) = uVar6;
    *(undefined8 *)(param_1 + 0xb0) = uVar7;
    *(undefined8 *)(param_1 + 0xb8) = uVar8;
  }
  else {
    local_2040 = 0;
    _ZN6embree13TaskScheduler5spawnImZNS_12parallel_forImZNS_24parallel_reduce_internalImNS_14GeometryCountsEZNS_15parallel_reduceImS4_ZNS_5Scene11commit_taskEvEUlRKNS_5rangeImEEE_St4plusIS4_EEET0_T_SF_RKSE_RKT1_RKT2_EUlS8_E_SD_EESE_SF_SF_SF_SF_SH_SK_SN_EUlmE_EEvSF_SH_EUlSA_E_EEvSF_SF_SF_SH_PNS0_16TaskGroupContextE_isra_0
              (0,local_2058[0],1,&local_2030,&local_2040);
    embree::TaskScheduler::wait();
    if (local_2040 != 0) {
      local_2038 = local_2040;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_2038);
      goto LAB_0010226b;
    }
    uVar1 = *(undefined8 *)(param_4 + 8);
    uVar2 = *(undefined8 *)(param_4 + 0x10);
    uVar3 = *(undefined8 *)(param_4 + 0x18);
    uVar4 = *(undefined8 *)(param_4 + 0x20);
    uVar5 = *(undefined8 *)(param_4 + 0x28);
    uVar6 = *(undefined8 *)(param_4 + 0x30);
    uVar7 = *(undefined8 *)(param_4 + 0x38);
    uVar8 = *(undefined8 *)(param_4 + 0x40);
    uVar9 = *(undefined8 *)(param_4 + 0x48);
    uVar10 = *(undefined8 *)(param_4 + 0x50);
    uVar11 = *(undefined8 *)(param_4 + 0x58);
    *(undefined8 *)param_1 = *(undefined8 *)param_4;
    *(undefined8 *)(param_1 + 8) = uVar1;
    uVar12 = *(undefined8 *)(param_4 + 0x60);
    uVar13 = *(undefined8 *)(param_4 + 0x68);
    uVar14 = *(undefined8 *)(param_4 + 0x70);
    uVar15 = *(undefined8 *)(param_4 + 0x78);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    uVar1 = *(undefined8 *)(param_4 + 0x80);
    uVar2 = *(undefined8 *)(param_4 + 0x88);
    local_20c8 = *(long *)(param_4 + 0xc0);
    *(undefined8 *)(param_1 + 0x30) = uVar6;
    *(undefined8 *)(param_1 + 0x38) = uVar7;
    uVar3 = *(undefined8 *)(param_4 + 0x90);
    uVar4 = *(undefined8 *)(param_4 + 0x98);
    uVar5 = *(undefined8 *)(param_4 + 0xa0);
    uVar6 = *(undefined8 *)(param_4 + 0xa8);
    *(long *)(param_1 + 0xc0) = local_20c8;
    uVar7 = *(undefined8 *)(param_4 + 0xb0);
    uVar16 = *(undefined8 *)(param_4 + 0xb8);
    *(undefined8 *)(param_1 + 0x40) = uVar8;
    *(undefined8 *)(param_1 + 0x48) = uVar9;
    *(undefined8 *)(param_1 + 0x50) = uVar10;
    *(undefined8 *)(param_1 + 0x58) = uVar11;
    *(undefined8 *)(param_1 + 0x60) = uVar12;
    *(undefined8 *)(param_1 + 0x68) = uVar13;
    *(undefined8 *)(param_1 + 0x70) = uVar14;
    *(undefined8 *)(param_1 + 0x78) = uVar15;
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    *(undefined8 *)(param_1 + 0x88) = uVar2;
    *(undefined8 *)(param_1 + 0x90) = uVar3;
    *(undefined8 *)(param_1 + 0x98) = uVar4;
    *(undefined8 *)(param_1 + 0xa0) = uVar5;
    *(undefined8 *)(param_1 + 0xa8) = uVar6;
    *(undefined8 *)(param_1 + 0xb0) = uVar7;
    *(undefined8 *)(param_1 + 0xb8) = uVar16;
    if (local_2058[0] != 0) {
      local_2068 = *(long *)param_1;
      local_2088 = *(long *)(param_1 + 0x20);
      lVar29 = *(long *)(param_1 + 0x68);
      lVar30 = *(long *)(param_1 + 0x70);
      lVar28 = *(long *)(param_1 + 0x78);
      local_2070 = *(long *)(param_1 + 8);
      local_2098 = *(long *)(param_1 + 0x30);
      lVar27 = *(long *)(param_1 + 0x80);
      local_2078 = *(long *)(param_1 + 0x10);
      local_20a8 = *(long *)(param_1 + 0x40);
      local_2080 = *(long *)(param_1 + 0x18);
      local_20b8 = *(long *)(param_1 + 0x50);
      local_2090 = *(long *)(param_1 + 0x28);
      lVar20 = *(long *)(param_1 + 0x60);
      local_20a0 = *(long *)(param_1 + 0x38);
      lVar26 = *(long *)(param_1 + 0x88);
      local_20b0 = *(long *)(param_1 + 0x48);
      lVar25 = *(long *)(param_1 + 0x90);
      local_20c0 = *(long *)(param_1 + 0x58);
      lVar24 = *(long *)(param_1 + 0x98);
      local_20d0 = *(long *)(param_1 + 0xb8);
      lVar23 = *(long *)(param_1 + 0xa0);
      lVar22 = *(long *)(param_1 + 0xa8);
      lVar21 = *(long *)(param_1 + 0xb0);
      ppplVar19 = (long ***)local_c0;
      do {
        ppplVar18 = ppplVar19 + 0x19;
        local_2068 = local_2068 + (long)*ppplVar19;
        local_2070 = local_2070 + (long)ppplVar19[1];
        local_2078 = local_2078 + (long)ppplVar19[2];
        local_2080 = local_2080 + (long)ppplVar19[3];
        local_2088 = local_2088 + (long)ppplVar19[4];
        local_2090 = local_2090 + (long)ppplVar19[5];
        local_2098 = local_2098 + (long)ppplVar19[6];
        local_20a0 = local_20a0 + (long)ppplVar19[7];
        local_20a8 = local_20a8 + (long)ppplVar19[8];
        local_20b0 = local_20b0 + (long)ppplVar19[9];
        local_20b8 = local_20b8 + (long)ppplVar19[10];
        local_20d0 = local_20d0 + (long)ppplVar19[0x17];
        lVar20 = lVar20 + (long)ppplVar19[0xc];
        lVar29 = lVar29 + (long)ppplVar19[0xd];
        lVar30 = lVar30 + (long)ppplVar19[0xe];
        lVar28 = lVar28 + (long)ppplVar19[0xf];
        lVar27 = lVar27 + (long)ppplVar19[0x10];
        lVar26 = lVar26 + (long)ppplVar19[0x11];
        lVar25 = lVar25 + (long)ppplVar19[0x12];
        lVar24 = lVar24 + (long)ppplVar19[0x13];
        lVar23 = lVar23 + (long)ppplVar19[0x14];
        lVar22 = lVar22 + (long)ppplVar19[0x15];
        lVar21 = lVar21 + (long)ppplVar19[0x16];
        local_20c0 = local_20c0 + (long)ppplVar19[0xb];
        local_20c8 = local_20c8 + (long)ppplVar19[0x18];
        ppplVar19 = ppplVar18;
      } while ((long ***)(local_c0 + local_2058[0] * 0x19) != ppplVar18);
      *(long *)param_1 = local_2068;
      *(long *)(param_1 + 0x60) = lVar20;
      *(long *)(param_1 + 8) = local_2070;
      *(long *)(param_1 + 0x68) = lVar29;
      *(long *)(param_1 + 0x10) = local_2078;
      *(long *)(param_1 + 0x70) = lVar30;
      *(long *)(param_1 + 0x18) = local_2080;
      *(long *)(param_1 + 0x78) = lVar28;
      *(long *)(param_1 + 0x20) = local_2088;
      *(long *)(param_1 + 0x80) = lVar27;
      *(long *)(param_1 + 0x28) = local_2090;
      *(long *)(param_1 + 0x88) = lVar26;
      *(long *)(param_1 + 0x30) = local_2098;
      *(long *)(param_1 + 0x38) = local_20a0;
      *(long *)(param_1 + 0x40) = local_20a8;
      *(long *)(param_1 + 0x48) = local_20b0;
      *(long *)(param_1 + 0x50) = local_20b8;
      *(long *)(param_1 + 0x58) = local_20c0;
      *(long *)(param_1 + 0x90) = lVar25;
      *(long *)(param_1 + 0x98) = lVar24;
      *(long *)(param_1 + 0xa0) = lVar23;
      *(long *)(param_1 + 0xa8) = lVar22;
      *(long *)(param_1 + 0xb0) = lVar21;
      *(long *)(param_1 + 0xb8) = local_20d0;
      *(long *)(param_1 + 0xc0) = local_20c8;
    }
  }
  if (local_c0 != local_2000) {
    embree::alignedFree(local_c0);
  }
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
LAB_0010226b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::Scene::Scene(embree::Device*) */

void __thiscall embree::Scene::Scene(Scene *this,Device *param_1)

{
  int iVar1;
  MutexSys *this_00;
  
  embree::AccelN::AccelN((AccelN *)this);
  *(Device **)(this + 0x188) = param_1;
  *(undefined ***)this = &PTR__Scene_00106248;
  *(Scene **)(this + 0x1a8) = this + 0x198;
  *(Scene **)(this + 0x1b0) = this + 0x198;
  *(undefined8 *)(this + 0x230) = 0x100000000;
  *(undefined4 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1c0) = 0;
  *(Device **)(this + 0x1c8) = param_1;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(Device **)(this + 0x208) = param_1;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  this[0x228] = (Scene)0x1;
  *(undefined4 *)(this + 0x22c) = 0;
  embree::MutexSys::MutexSys((MutexSys *)(this + 0x238));
  embree::MutexSys::MutexSys((MutexSys *)(this + 0x240));
  this[0x248] = (Scene)0x1;
  this_00 = (MutexSys *)operator_new(0x10);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  embree::MutexSys::MutexSys(this_00);
  *(undefined8 *)(this_00 + 8) = 0;
  *(MutexSys **)(this + 0x250) = this_00;
  *(undefined ***)(this + 600) = &PTR_operator___00106230;
  *(Scene **)(this + 0x260) = this;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x2f0) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  if (*(code **)(*(long *)param_1 + 0x10) == RefCount::refInc) {
    LOCK();
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    UNLOCK();
  }
  else {
    (**(code **)(*(long *)param_1 + 0x10))(param_1);
  }
  *(undefined8 *)(this + 0x58) = 0;
  *(code **)(this + 0x68) = missing_rtcCommit;
  *(code **)(this + 0x78) = missing_rtcCommit;
  *(code **)(this + 0x80) = missing_rtcCommit;
  *(code **)(this + 0x98) = missing_rtcCommit;
  *(code **)(this + 0xa0) = missing_rtcCommit;
  *(code **)(this + 0xe0) = missing_rtcCommit;
  *(code **)(this + 0xe8) = missing_rtcCommit;
  *(code **)(this + 0x128) = missing_rtcCommit;
  *(code **)(this + 0x130) = missing_rtcCommit;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  iVar1 = *(int *)(param_1 + 0x49c);
  *(undefined8 *)(this + 0x168) = 0;
  if (iVar1 != -1) {
    *(int *)(this + 0x234) = iVar1;
  }
  if (*(int *)(param_1 + 0x4a0) != -1) {
    *(int *)(this + 0x230) = *(int *)(param_1 + 0x4a0);
  }
  return;
}



/* embree::Scene::createTriangleAccel() */

void __thiscall embree::Scene::createTriangleAccel(Scene *this)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = *(long *)(this + 0x188);
  lVar2 = *(long *)(lVar1 + 0x18);
  if (lVar2 == 7) {
    if ((**(int **)(lVar1 + 0x10) != 0x61666564) ||
       (*(int *)((long)*(int **)(lVar1 + 0x10) + 3) != 0x746c7561))
    goto embree_Scene_createTriangleAccel;
    uVar7 = *(undefined8 *)(lVar1 + 0x558);
    iVar4 = (*(uint *)(this + 0x230) & 2) + (*(uint *)(this + 0x230) >> 2 & 1);
    if (*(int *)(this + 0x234) == 0) {
      if (iVar4 != 2) {
        if (iVar4 == 3) {
          uVar5 = 1;
          uVar6 = 1;
          goto LAB_00102e24;
        }
        if (iVar4 != 1) {
          uVar5 = 1;
          goto LAB_00102db9;
        }
        uVar5 = 1;
        goto LAB_00102f47;
      }
      uVar5 = 0;
      uVar6 = 1;
      goto LAB_00102e24;
    }
    if (iVar4 == 2) goto LAB_00102e20;
    if (iVar4 != 3) {
      if (iVar4 == 1) goto LAB_00102f40;
      uVar5 = 2;
      if (*(int *)(this + 0x234) == 2) goto LAB_00102db9;
      goto LAB_00102db7;
    }
    uVar5 = 1;
  }
  else {
    if (lVar2 == 0xe) {
      if ((**(long **)(lVar1 + 0x10) != 0x6972742e34687662) ||
         (*(long *)((long)*(long **)(lVar1 + 0x10) + 6) != 0x34656c676e616972))
      goto embree_Scene_createTriangleAccel;
      uVar7 = *(undefined8 *)(lVar1 + 0x558);
LAB_00102db7:
      uVar5 = 0;
LAB_00102db9:
      embree::BVH4Factory::BVH4Triangle4(uVar7,this,uVar5,0);
      embree::AccelN::accels_add((Accel *)this);
      return;
    }
    if (lVar2 != 0xf) {
      if ((lVar2 == 0x10) &&
         (**(long **)(lVar1 + 0x10) == 0x72742e3468766271 &&
          (*(long **)(lVar1 + 0x10))[1] == 0x6934656c676e6169)) {
        embree::BVH4Factory::BVH4QuantizedTriangle4i(*(Scene **)(lVar1 + 0x558));
        embree::AccelN::accels_add((Accel *)this);
        return;
      }
embree_Scene_createTriangleAccel:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar3 = *(long **)(lVar1 + 0x10);
    if ((*plVar3 == 0x6972742e34687662) && (*(long *)((long)plVar3 + 7) == 0x7634656c676e6169)) {
      uVar7 = *(undefined8 *)(lVar1 + 0x558);
LAB_00102f40:
      uVar5 = 0;
LAB_00102f47:
      embree::BVH4Factory::BVH4Triangle4v(uVar7,this,uVar5,1);
      embree::AccelN::accels_add((Accel *)this);
      return;
    }
    if ((*plVar3 != 0x6972742e34687662) || (*(long *)((long)plVar3 + 7) != 0x6934656c676e6169))
    goto embree_Scene_createTriangleAccel;
    uVar7 = *(undefined8 *)(lVar1 + 0x558);
LAB_00102e20:
    uVar5 = 0;
  }
  uVar6 = 0;
LAB_00102e24:
  embree::BVH4Factory::BVH4Triangle4i(uVar7,this,uVar6,uVar5);
  embree::AccelN::accels_add((Accel *)this);
  return;
}



/* embree::Scene::createTriangleMBAccel() */

void __thiscall embree::Scene::createTriangleMBAccel(Scene *this)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(this + 0x188);
  if (*(long *)(lVar1 + 0x78) == 7) {
    if ((**(int **)(lVar1 + 0x70) != 0x61666564) ||
       (*(int *)((long)*(int **)(lVar1 + 0x70) + 3) != 0x746c7561)) goto code_r0x001056c8;
    uVar4 = *(undefined8 *)(lVar1 + 0x558);
    if (((*(uint *)(this + 0x230) >> 2 & 1) + (*(uint *)(this + 0x230) & 2) & 5) != 0) {
      uVar3 = 1;
      goto LAB_00103085;
    }
  }
  else {
    if (*(long *)(lVar1 + 0x78) != 0x11) {
      createTriangleMBAccel();
      return;
    }
    plVar2 = *(long **)(lVar1 + 0x70);
    if ((*plVar2 != 0x6972742e34687662 || plVar2[1] != 0x6d6934656c676e61) ||
       ((char)plVar2[2] != 'b')) {
      if ((*plVar2 == 0x6972742e34687662 && plVar2[1] == 0x6d7634656c676e61) &&
         ((char)plVar2[2] == 'b')) {
        embree::BVH4Factory::BVH4Triangle4vMB(*(undefined8 *)(lVar1 + 0x558),this,0,0);
        embree::AccelN::accels_add((Accel *)this);
        return;
      }
code_r0x001056c8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar4 = *(undefined8 *)(lVar1 + 0x558);
  }
  uVar3 = 0;
LAB_00103085:
  embree::BVH4Factory::BVH4Triangle4iMB(uVar4,this,0,uVar3);
  embree::AccelN::accels_add((Accel *)this);
  return;
}



/* embree::Scene::createQuadMBAccel() */

void embree::Scene::createQuadMBAccel(void)

{
  return;
}



/* embree::Scene::createHairAccel() */

void embree::Scene::createHairAccel(void)

{
  return;
}



/* embree::Scene::createHairMBAccel() */

void embree::Scene::createHairMBAccel(void)

{
  return;
}



/* embree::Scene::createSubdivAccel() */

void embree::Scene::createSubdivAccel(void)

{
  return;
}



/* embree::Scene::createSubdivMBAccel() */

void embree::Scene::createSubdivMBAccel(void)

{
  return;
}



/* embree::Scene::createUserGeometryAccel() */

void embree::Scene::createUserGeometryAccel(void)

{
  return;
}



/* embree::Scene::createUserGeometryMBAccel() */

void embree::Scene::createUserGeometryMBAccel(void)

{
  return;
}



/* embree::Scene::createInstanceAccel() */

void embree::Scene::createInstanceAccel(void)

{
  return;
}



/* embree::Scene::createInstanceMBAccel() */

void embree::Scene::createInstanceMBAccel(void)

{
  return;
}



/* embree::Scene::createInstanceExpensiveAccel() */

void embree::Scene::createInstanceExpensiveAccel(void)

{
  return;
}



/* embree::Scene::createInstanceExpensiveMBAccel() */

void embree::Scene::createInstanceExpensiveMBAccel(void)

{
  return;
}



/* embree::Scene::createInstanceArrayAccel() */

void embree::Scene::createInstanceArrayAccel(void)

{
  return;
}



/* embree::Scene::createInstanceArrayMBAccel() */

void embree::Scene::createInstanceArrayMBAccel(void)

{
  return;
}



/* embree::Scene::createGridAccel() */

void embree::Scene::createGridAccel(void)

{
  return;
}



/* embree::Scene::createGridMBAccel() */

void embree::Scene::createGridMBAccel(void)

{
  return;
}



/* embree::Scene::build_cpu_accels() */

void __thiscall embree::Scene::build_cpu_accels(Scene *this)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  size_t sVar5;
  uint uVar6;
  int iVar7;
  long in_FS_OFFSET;
  Scene *local_38;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = (uint)(*(long *)(this + 0x288) != 0);
  if (*(long *)(this + 0x298) != 0) {
    uVar4 = uVar4 | 2;
  }
  if (*(long *)(this + 0x2a8) + *(long *)(this + 0x2b8) != 0) {
    uVar4 = uVar4 | 4;
  }
  if (*(long *)(this + 0x2c8) != 0) {
    uVar4 = uVar4 | 8;
  }
  if (*(long *)(this + 0x2d8) != 0) {
    uVar4 = uVar4 | 0x10;
  }
  if (*(long *)(this + 0x2e8) != 0) {
    uVar4 = uVar4 | 0x20;
  }
  if (*(long *)(this + 0x2f8) != 0) {
    uVar4 = uVar4 | 0x40;
  }
  if (*(long *)(this + 0x308) != 0) {
    uVar4 = uVar4 | 0x80;
  }
  if (*(long *)(this + 0x318) != 0) {
    uVar4 = uVar4 | 0x100;
  }
  if (*(long *)(this + 0x338) != 0) {
    uVar4 = uVar4 | 0x200;
  }
  uVar6 = (uint)(*(long *)(this + 0x290) != 0);
  if (*(long *)(this + 0x2a0) != 0) {
    uVar6 = uVar6 | 2;
  }
  if (*(long *)(this + 0x2b0) + *(long *)(this + 0x2c0) != 0) {
    uVar6 = uVar6 | 4;
  }
  if (*(long *)(this + 0x2d0) != 0) {
    uVar6 = uVar6 | 8;
  }
  if (*(long *)(this + 0x2e0) != 0) {
    uVar6 = uVar6 | 0x10;
  }
  if (*(long *)(this + 0x2f0) != 0) {
    uVar6 = uVar6 | 0x20;
  }
  if (*(long *)(this + 0x300) != 0) {
    uVar6 = uVar6 | 0x40;
  }
  if (*(long *)(this + 0x310) != 0) {
    uVar6 = uVar6 | 0x80;
  }
  if (*(long *)(this + 800) != 0) {
    uVar6 = uVar6 | 0x100;
  }
  if (*(long *)(this + 0x340) != 0) {
    uVar6 = uVar6 | 0x200;
  }
  iVar7 = uVar4 * 0x100 + uVar6;
  if ((this[0x228] != (Scene)0x0) || (*(int *)(this + 0x22c) != iVar7)) {
    embree::AccelN::accels_init();
    local_38 = this;
    if (*(ulong *)(this + 0x1f0) == 0) {
LAB_00103317:
      if (*(long *)(this + 0x288) != 0) {
        createTriangleAccel(this);
      }
      if (*(long *)(this + 0x290) != 0) goto LAB_00103730;
    }
    else {
      local_30 = 0;
      TaskScheduler::
      spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
                (0,*(ulong *)(this + 0x1f0),1,
                 (_lambda_embree__range<unsigned_long>_const___1_ *)&local_38,
                 (TaskGroupContext *)&local_30);
      embree::TaskScheduler::wait();
      if (local_30 == 0) goto LAB_00103317;
      this = (Scene *)&local_28;
      local_28 = local_30;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(this);
LAB_00103730:
      createTriangleMBAccel(this);
    }
    this[0x228] = (Scene)0x0;
    *(int *)(this + 0x22c) = iVar7;
  }
  embree::AccelN::accels_select(SUB81(this,0));
  embree::AccelN::accels_build();
  if (((byte)this[0x230] & 1) == 0) {
    embree::AccelN::accels_immutable();
    this[0x228] = (Scene)0x1;
  }
  cVar3 = embree::State::verbosity(*(ulong *)(this + 0x188));
  if (cVar3 != '\0') {
    std::__ostream_insert<char,std::char_traits<char>>
              ((ostream *)&std::cout,"created scene intersector",0x19);
    plVar1 = *(long **)(*(long *)(std::cout + -0x18) + 0x107250);
    if (plVar1 == (long *)0x0) {
LAB_00103863:
      std::__throw_bad_cast();
      return;
    }
    if ((char)plVar1[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
        (**(code **)(*plVar1 + 0x30))(plVar1,10);
      }
    }
    std::ostream::put('`');
    std::ostream::flush();
    embree::AccelN::accels_print((ulong)this);
    std::__ostream_insert<char,std::char_traits<char>>
              ((ostream *)&std::cout,"selected scene intersector",0x1a);
    plVar1 = *(long **)(*(long *)(std::cout + -0x18) + 0x107250);
    if (plVar1 == (long *)0x0) goto LAB_00103863;
    if ((char)plVar1[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
        (**(code **)(*plVar1 + 0x30))(plVar1,10);
      }
    }
    std::ostream::put('`');
    std::ostream::flush();
    if (*(long *)(this + 0x70) != 0) {
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"collider  = ",0xc);
      pcVar2 = *(char **)(this + 0x70);
      if (pcVar2 == (char *)0x0) {
        std::ios::clear((long)&std::cout + *(long *)(std::cout + -0x18),
                        *(uint *)(embree::AccelN::accels_immutable + *(long *)(std::cout + -0x18)) |
                        1);
      }
      else {
        sVar5 = strlen(pcVar2);
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar2,sVar5);
      }
      std::endl<char,std::char_traits<char>>((ostream *)&std::cout);
    }
    if (*(long *)(this + 0x90) != 0) {
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&std::cout,"intersector1  = ",0x10);
      pcVar2 = *(char **)(this + 0x90);
      if (pcVar2 == (char *)0x0) {
        std::ios::clear((long)&std::cout + *(long *)(std::cout + -0x18),
                        *(uint *)(embree::AccelN::accels_immutable + *(long *)(std::cout + -0x18)) |
                        1);
      }
      else {
        sVar5 = strlen(pcVar2);
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar2,sVar5);
      }
      std::endl<char,std::char_traits<char>>((ostream *)&std::cout);
    }
    if (*(long *)(this + 0xa8) != 0) {
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&std::cout,"intersector4  = ",0x10);
      pcVar2 = *(char **)(this + 0xa8);
      if (pcVar2 == (char *)0x0) {
        std::ios::clear((long)&std::cout + *(long *)(std::cout + -0x18),
                        *(uint *)(embree::AccelN::accels_immutable + *(long *)(std::cout + -0x18)) |
                        1);
      }
      else {
        sVar5 = strlen(pcVar2);
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar2,sVar5);
      }
      std::endl<char,std::char_traits<char>>((ostream *)&std::cout);
    }
    if (*(long *)(this + 0xf0) != 0) {
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&std::cout,"intersector8  = ",0x10);
      pcVar2 = *(char **)(this + 0xf0);
      if (pcVar2 == (char *)0x0) {
        std::ios::clear((long)&std::cout + *(long *)(std::cout + -0x18),
                        *(uint *)(embree::AccelN::accels_immutable + *(long *)(std::cout + -0x18)) |
                        1);
      }
      else {
        sVar5 = strlen(pcVar2);
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar2,sVar5);
      }
      std::endl<char,std::char_traits<char>>((ostream *)&std::cout);
    }
    if (*(long *)(this + 0x138) != 0) {
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&std::cout,"intersector16 = ",0x10);
      pcVar2 = *(char **)(this + 0x138);
      if (pcVar2 == (char *)0x0) {
        std::ios::clear((long)&std::cout + *(long *)(std::cout + -0x18),
                        *(uint *)(embree::AccelN::accels_immutable + *(long *)(std::cout + -0x18)) |
                        1);
      }
      else {
        sVar5 = strlen(pcVar2);
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar2,sVar5);
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        std::endl<char,std::char_traits<char>>((ostream *)&std::cout);
        return;
      }
      goto LAB_0010385e;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010385e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::Scene::build_gpu_accels() */

void embree::Scene::build_gpu_accels(void)

{
  return;
}



/* embree::Scene::setBuildQuality(RTCBuildQuality) */

void __thiscall embree::Scene::setBuildQuality(Scene *this,int param_2)

{
  if (*(int *)(this + 0x234) != param_2) {
    *(int *)(this + 0x234) = param_2;
    this[0x228] = (Scene)0x1;
  }
  return;
}



/* embree::Scene::getBuildQuality() const */

undefined4 __thiscall embree::Scene::getBuildQuality(Scene *this)

{
  return *(undefined4 *)(this + 0x234);
}



/* embree::Scene::setSceneFlags(RTCSceneFlags) */

void __thiscall embree::Scene::setSceneFlags(Scene *this,int param_2)

{
  if (*(int *)(this + 0x230) != param_2) {
    *(int *)(this + 0x230) = param_2;
    this[0x228] = (Scene)0x1;
  }
  return;
}



/* embree::Scene::getSceneFlags() const */

undefined4 __thiscall embree::Scene::getSceneFlags(Scene *this)

{
  return *(undefined4 *)(this + 0x230);
}



/* embree::Scene::commit(bool) */

void __thiscall embree::Scene::commit(Scene *this,bool param_1)

{
  long *plVar1;
  Thread *pTVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  TaskScheduler *pTVar7;
  char cVar8;
  TaskScheduler *this_00;
  long lVar9;
  Thread *pTVar10;
  Thread *pTVar11;
  Thread *pTVar12;
  long lVar13;
  bool bVar14;
  TaskScheduler *pTVar15;
  long in_FS_OFFSET;
  TaskScheduler *local_58;
  long local_50;
  TaskScheduler *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  embree::MutexSys::lock();
  lVar9 = *(long *)(this + 0x250);
  plVar4 = *(long **)(lVar9 + 8);
  if (plVar4 != (long *)0x0) {
    if (*(code **)(*plVar4 + 0x10) == RefCount::refInc) {
      LOCK();
      plVar4[1] = plVar4[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar4 + 0x10))();
    }
    plVar4 = *(long **)(lVar9 + 8);
    if (plVar4 != (long *)0x0) {
      embree::MutexSys::unlock();
      if (param_1) {
        embree::TaskScheduler::join();
        if (*(code **)(*plVar4 + 0x18) == RefCount::refDec) {
          LOCK();
          plVar1 = plVar4 + 1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001039b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar4 + 8))(plVar4);
              return;
            }
          }
          else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00103ec1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x18))(plVar4);
          return;
        }
        goto LAB_00103f72;
      }
      goto embree_Scene_commit;
    }
  }
  embree::MutexSys::lock();
  this_00 = (TaskScheduler *)embree::alignedMalloc(0x50,0x40);
  embree::TaskScheduler::TaskScheduler(this_00);
  if (this_00 == (TaskScheduler *)0x0) {
    lVar9 = *(long *)(this + 0x250);
  }
  else {
    LOCK();
    *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 1;
    UNLOCK();
    lVar9 = *(long *)(this + 0x250);
    if (*(code **)(*(long *)this_00 + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
    }
  }
  if (*(long **)(lVar9 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(lVar9 + 8) + 0x18))();
  }
  *(TaskScheduler **)(lVar9 + 8) = this_00;
  embree::MutexSys::unlock();
  local_58 = (TaskScheduler *)0x0;
  bVar14 = !param_1;
  if (bVar14) {
    embree::TaskScheduler::startThreads();
  }
  lVar9 = embree::TaskScheduler::allocThreadIndex();
  pTVar10 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
  if (this_00 != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this_00 + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
    }
  }
  *(long *)pTVar10 = lVar9;
  pTVar2 = pTVar10 + 0x40;
  pTVar12 = pTVar2;
  do {
    *(undefined4 *)pTVar12 = 0;
    pTVar11 = pTVar12 + 0x80;
    *(undefined4 *)(pTVar12 + 0x40) = 0;
    pTVar12 = pTVar11;
  } while (pTVar10 + 0x40040 != pTVar11);
  *(undefined8 *)(pTVar10 + 0x40040) = 0;
  *(undefined8 *)(pTVar10 + 0x40080) = 0;
  *(undefined8 *)(pTVar10 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar10 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar10 + 0xc0108) = this_00;
  if (this_00 != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this_00 + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
    }
    if (*(code **)(*(long *)this_00 + 0x18) == RefCount::refDec) {
      LOCK();
      pTVar15 = this_00 + 8;
      *(long *)pTVar15 = *(long *)pTVar15 + -1;
      UNLOCK();
      if (*(long *)pTVar15 == 0) {
        (**(code **)(*(long *)this_00 + 8))(this_00);
      }
    }
    else {
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
    }
  }
  LOCK();
  *(Thread **)(*(long *)(this_00 + 0x10) + lVar9 * 8) = pTVar10;
  UNLOCK();
  local_48 = (TaskScheduler *)pTVar10;
  pTVar12 = (Thread *)embree::TaskScheduler::swapThread(pTVar10);
  if (*(ulong *)(pTVar10 + 0x40080) < 0x1000) {
    lVar5 = *(long *)(pTVar10 + 0xc00c0);
    uVar3 = lVar5 + 0x10 + (ulong)(-(int)lVar5 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar10 + 0xc00c0) = uVar3;
      pTVar11 = pTVar10 + uVar3 + 0x400b0;
      *(Scene **)(pTVar11 + 8) = this;
      *(undefined ***)pTVar11 = &PTR_execute_00106298;
      lVar13 = *(long *)(pTVar10 + 0x40080) * 0x40;
      lVar6 = *(long *)(pTVar10 + 0xc0100);
      pTVar10[lVar13 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar10 + lVar13 + 0x44) = 1;
      *(Thread **)(pTVar10 + lVar13 + 0x50) = pTVar11;
      *(long *)(pTVar10 + lVar13 + 0x58) = lVar6;
      *(TaskScheduler ***)(pTVar10 + lVar13 + 0x60) = &local_58;
      *(long *)(pTVar10 + lVar13 + 0x68) = lVar5;
      *(undefined8 *)(pTVar10 + lVar13 + 0x70) = 1;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar2 + lVar13) == 0) {
        *(undefined4 *)(pTVar2 + lVar13) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar10 + 0x40080) = *(long *)(pTVar10 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar10 + 0x40080) - 1U <= *(ulong *)(pTVar10 + 0x40040)) {
        LOCK();
        *(long *)(pTVar10 + 0x40040) = *(long *)(pTVar10 + 0x40080) + -1;
        UNLOCK();
      }
      embree::MutexSys::lock();
      LOCK();
      *(long *)(this_00 + 0x30) = *(long *)(this_00 + 0x30) + 1;
      UNLOCK();
      LOCK();
      this_00[0x38] = (TaskScheduler)0x1;
      UNLOCK();
      embree::ConditionSys::notify_all();
      embree::MutexSys::unlock();
      if (bVar14) {
        local_48 = this_00;
        if (this_00 != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this_00 + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this_00 + 0x10))(this_00);
          }
        }
        embree::TaskScheduler::addScheduler((Ref *)&local_48);
        if (local_48 != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar15 = local_48 + 8;
            *(long *)pTVar15 = *(long *)pTVar15 + -1;
            UNLOCK();
            if (*(long *)pTVar15 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      do {
        cVar8 = embree::TaskScheduler::TaskQueue::execute_local(pTVar2,(Task *)pTVar10);
      } while (cVar8 != '\0');
      LOCK();
      *(long *)(this_00 + 0x30) = *(long *)(this_00 + 0x30) + -1;
      UNLOCK();
      if (bVar14) {
        local_48 = this_00;
        if (this_00 != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this_00 + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this_00 + 0x10))(this_00);
          }
        }
        embree::TaskScheduler::removeScheduler((Ref *)&local_48);
        if (local_48 != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar15 = local_48 + 8;
            *(long *)pTVar15 = *(long *)pTVar15 + -1;
            UNLOCK();
            if (*(long *)pTVar15 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      local_48 = (TaskScheduler *)0x0;
      LOCK();
      *(undefined8 *)(lVar9 * 8 + *(long *)(this_00 + 0x10)) = 0;
      UNLOCK();
      embree::TaskScheduler::swapThread(pTVar12);
      pTVar15 = local_58;
      if (local_58 != (TaskScheduler *)0x0) {
        local_48 = local_58;
        std::__exception_ptr::exception_ptr::_M_addref();
        pTVar15 = local_48;
      }
      LOCK();
      *(long *)(this_00 + 0x28) = *(long *)(this_00 + 0x28) + -1;
      UNLOCK();
      while (pTVar7 = local_58, *(long *)(this_00 + 0x28) != 0) {
        embree::yield();
      }
      local_50 = 0;
      local_58 = (TaskScheduler *)0x0;
      local_48 = pTVar7;
      if ((pTVar7 != (TaskScheduler *)0x0) &&
         (std::__exception_ptr::exception_ptr::_M_release(), local_50 != 0)) {
        std::__exception_ptr::exception_ptr::_M_release();
      }
      if (pTVar15 == (TaskScheduler *)0x0) {
        if (pTVar10 != (Thread *)0x0) {
          if (*(long **)(pTVar10 + 0xc0108) != (long *)0x0) {
            (**(code **)(**(long **)(pTVar10 + 0xc0108) + 0x18))();
          }
          embree::alignedFree(pTVar10);
        }
        if (local_58 != (TaskScheduler *)0x0) {
          std::__exception_ptr::exception_ptr::_M_release();
        }
        if (this_00 != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this_00 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar15 = this_00 + 8;
            *(long *)pTVar15 = *(long *)pTVar15 + -1;
            UNLOCK();
            if (*(long *)pTVar15 == 0) {
              (**(code **)(*(long *)this_00 + 8))(this_00);
            }
          }
          else {
            (**(code **)(*(long *)this_00 + 0x18))(this_00);
          }
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          embree::MutexSys::unlock();
          return;
        }
      }
      else {
        local_48 = pTVar15;
        std::__exception_ptr::exception_ptr::_M_addref();
        std::rethrow_exception(&local_48);
      }
LAB_00103f72:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
embree_Scene_commit:
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Scene::setProgressMonitorFunction(bool (*)(void*, double), void*) */

void __thiscall
embree::Scene::setProgressMonitorFunction
          (Scene *this,_func_bool_void_ptr_double *param_1,void *param_2)

{
  *(_func_bool_void_ptr_double **)(this + 0x268) = param_1;
  *(void **)(this + 0x270) = param_2;
  return;
}



/* embree::Scene::progressMonitor(double) */

void __thiscall embree::Scene::progressMonitor(Scene *this,double param_1)

{
  Scene *pSVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  
  if (*(long *)(this + 0x268) == 0) {
    return;
  }
  if (_LC0 <= param_1) {
    uVar4 = (long)(param_1 - _LC0) ^ 0x8000000000000000;
  }
  else {
    uVar4 = (ulong)param_1;
  }
  LOCK();
  pSVar1 = this + 0x278;
  lVar2 = *(long *)pSVar1;
  *(ulong *)pSVar1 = *(long *)pSVar1 + uVar4;
  UNLOCK();
  cVar3 = (**(code **)(this + 0x268))
                    ((double)(lVar2 + uVar4) /
                     (double)(ulong)(*(long *)(this + 0x298) + *(long *)(this + 0x288) +
                                     *(long *)(this + 0x2a8) + *(long *)(this + 0x2b8) +
                                     *(long *)(this + 0x2c8) + *(long *)(this + 0x2d8) +
                                     *(long *)(this + 0x2e8) + *(long *)(this + 0x2f8) +
                                     *(long *)(this + 0x308) + *(long *)(this + 0x318) +
                                     *(long *)(this + 0x338) + *(long *)(this + 0x290) +
                                     *(long *)(this + 0x2a0) + *(long *)(this + 0x2b0) +
                                     *(long *)(this + 0x2c0) + *(long *)(this + 0x2d0) +
                                     *(long *)(this + 0x2e0) + *(long *)(this + 0x2f0) +
                                     *(long *)(this + 0x300) + *(long *)(this + 0x310) +
                                     *(long *)(this + 800) + *(long *)(this + 0x340)),
                     *(undefined8 *)(this + 0x270));
  if (cVar3 != '\0') {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Scene::printStatistics() */

void __thiscall embree::Scene::printStatistics(Scene *this)

{
  uint uVar1;
  long *plVar2;
  char *pcVar3;
  void *pvVar4;
  long *plVar5;
  vector<unsigned_long,std::allocator<unsigned_long>> *pvVar6;
  ulong uVar7;
  size_t sVar8;
  ulong uVar9;
  long lVar10;
  size_t *psVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  vector<unsigned_long,std::allocator<unsigned_long>> *this_00;
  vector<unsigned_long,std::allocator<unsigned_long>> *pvVar15;
  long in_FS_OFFSET;
  size_t local_370;
  size_t *local_368;
  size_t local_360;
  size_t local_358 [2];
  vector<unsigned_long,std::allocator<unsigned_long>> local_348 [744];
  vector<unsigned_long,std::allocator<unsigned_long>> local_60 [24];
  vector<unsigned_long,std::allocator<unsigned_long>> local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x1d0) == 0) {
    lVar14 = 0;
    uVar12 = 0;
  }
  else {
    plVar5 = *(long **)(this + 0x1e0);
    plVar2 = plVar5 + *(long *)(this + 0x1d0);
    uVar12 = 0;
    do {
      if ((*plVar5 != 0) && (uVar1 = *(uint *)(*plVar5 + 0x24), (uint)uVar12 < uVar1)) {
        uVar12 = (ulong)uVar1;
      }
      plVar5 = plVar5 + 1;
    } while (plVar2 != plVar5);
    lVar14 = uVar12 * 8;
  }
  pvVar15 = local_348;
  do {
    *(undefined8 *)pvVar15 = 0;
    pvVar6 = pvVar15 + 0x18;
    *(undefined8 *)(pvVar15 + 8) = 0;
    *(undefined8 *)(pvVar15 + 0x10) = 0;
    pvVar15 = pvVar6;
    this_00 = local_348;
  } while (local_48 != pvVar6);
  do {
    while( true ) {
      uVar7 = *(long *)(this_00 + 8) - *(long *)this_00 >> 3;
      if (uVar12 <= uVar7) break;
      pvVar15 = this_00 + 0x18;
      std::vector<unsigned_long,std::allocator<unsigned_long>>::_M_default_append
                (this_00,uVar12 - uVar7);
      this_00 = pvVar15;
      if (local_48 == pvVar15) goto LAB_0010422c;
    }
    if ((uVar12 < uVar7) && (lVar10 = *(long *)this_00 + lVar14, *(long *)(this_00 + 8) != lVar10))
    {
      *(long *)(this_00 + 8) = lVar10;
    }
    this_00 = this_00 + 0x18;
  } while (local_48 != this_00);
LAB_0010422c:
  uVar7 = *(ulong *)(this + 0x1d0);
  uVar9 = 0;
  if (uVar7 != 0) {
    do {
      while (lVar14 = *(long *)(*(long *)(this + 0x1e0) + uVar9 * 8), lVar14 == 0) {
        uVar9 = uVar9 + 1;
        if (uVar7 <= uVar9) goto LAB_00104288;
      }
      uVar9 = uVar9 + 1;
      plVar2 = (long *)(*(long *)(local_348 + (ulong)*(byte *)(lVar14 + 0x3c) * 0x18) +
                       (long)(*(int *)(lVar14 + 0x24) + -1) * 8);
      *plVar2 = *plVar2 + (ulong)*(uint *)(lVar14 + 0x20);
      uVar7 = *(ulong *)(this + 0x1d0);
    } while (uVar9 < uVar7);
  }
LAB_00104288:
  uVar7 = 0;
  *(undefined8 *)(embree::AccelN::accels_print + *(long *)(std::cout + -0x18)) = 0x17;
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"segments",8);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,": ",2);
  if (uVar12 != 0) {
    do {
      uVar7 = uVar7 + 1;
      *(undefined8 *)(embree::AccelN::accels_print + *(long *)(std::cout + -0x18)) = 10;
      std::ostream::_M_insert<unsigned_long>(0x107160);
    } while (uVar12 != uVar7);
  }
  plVar2 = *(long **)(*(long *)(std::cout + -0x18) + 0x107250);
  if (plVar2 != (long *)0x0) {
    if ((char)plVar2[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
        (**(code **)(*plVar2 + 0x30))(plVar2,10);
      }
    }
    uVar7 = 0;
    std::ostream::put('`');
    std::ostream::flush();
    std::__ostream_insert<char,std::char_traits<char>>
              ((ostream *)&std::cout,"-------------------------",0x19);
    if (uVar12 != 0) {
      do {
        uVar7 = uVar7 + 1;
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"----------",10);
      } while (uVar12 != uVar7);
    }
    plVar2 = *(long **)(*(long *)(std::cout + -0x18) + 0x107250);
    if (plVar2 != (long *)0x0) {
      if ((char)plVar2[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar2 + 0x30))(plVar2,10);
        }
      }
      puVar13 = &Geometry::gtype_names;
      std::ostream::put('`');
      std::ostream::flush();
      pvVar15 = local_348;
      do {
        pcVar3 = (char *)*puVar13;
        local_368 = local_358;
        if (pcVar3 == (char *)0x0) {
          std::__throw_logic_error("basic_string: construction from null is not valid");
          goto LAB_001046c7;
        }
        sVar8 = strlen(pcVar3);
        local_370 = sVar8;
        if (sVar8 < 0x10) {
          psVar11 = local_358;
          if (sVar8 == 1) {
            local_358[0] = CONCAT71(local_358[0]._1_7_,*pcVar3);
          }
          else if (sVar8 != 0) goto LAB_001045e3;
        }
        else {
          local_368 = (size_t *)
                      std::__cxx11::string::_M_create((ulong *)&local_368,(ulong)&local_370);
          local_358[0] = local_370;
          psVar11 = local_368;
LAB_001045e3:
          memcpy(psVar11,pcVar3,sVar8);
          psVar11 = local_368;
        }
        *(undefined1 *)((long)psVar11 + local_370) = 0;
        local_360 = local_370;
        if (local_370 == 0) {
          if (local_368 != local_358) {
            operator_delete(local_368,local_358[0] + 1);
          }
        }
        else {
          if (local_368 != local_358) {
            operator_delete(local_368,local_358[0] + 1);
          }
          lVar14 = std::cout;
          pcVar3 = (char *)*puVar13;
          *(undefined8 *)(embree::AccelN::accels_print + *(long *)(std::cout + -0x18)) = 0x17;
          if (pcVar3 == (char *)0x0) {
            std::ios::clear((long)&std::cout + *(long *)(lVar14 + -0x18),
                            *(uint *)(embree::AccelN::accels_immutable + *(long *)(lVar14 + -0x18))
                            | 1);
          }
          else {
            sVar8 = strlen(pcVar3);
            std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar3,sVar8);
          }
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,": ",2);
          if (uVar12 != 0) {
            uVar7 = 0;
            do {
              *(undefined8 *)(embree::AccelN::accels_print + *(long *)(std::cout + -0x18)) = 10;
              uVar7 = uVar7 + 1;
              std::ostream::_M_insert<unsigned_long>(0x107160);
            } while (uVar12 != uVar7);
          }
          plVar2 = *(long **)(*(long *)(std::cout + -0x18) + 0x107250);
          if (plVar2 == (long *)0x0) goto LAB_001046c7;
          if ((char)plVar2[7] == '\0') {
            std::ctype<char>::_M_widen_init();
            if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
              (**(code **)(*plVar2 + 0x30))(plVar2,10);
            }
          }
          std::ostream::put('`');
          std::ostream::flush();
        }
        puVar13 = puVar13 + 1;
        pvVar15 = pvVar15 + 0x18;
      } while (local_48 != pvVar15);
      pvVar15 = local_60;
      while( true ) {
        pvVar4 = *(void **)pvVar15;
        if (pvVar4 != (void *)0x0) {
          operator_delete(pvVar4,*(long *)(pvVar15 + 0x10) - (long)pvVar4);
        }
        if (local_348 == pvVar15) break;
        pvVar15 = pvVar15 + -0x18;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001046cc;
    }
  }
LAB_001046c7:
  std::__throw_bad_cast();
LAB_001046cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::Scene::commit_task() [clone .part.0] */

void __thiscall embree::Scene::commit_task(Scene *this)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  _lambda_embree__range<unsigned_long>__1_ *in_R9;
  long in_FS_OFFSET;
  plus *in_stack_fffffffffffffd88;
  undefined1 local_201;
  _lambda_embree__range<unsigned_long>_const___1_ *local_200;
  _lambda_embree__range<unsigned_long>_const___1_ *local_1f8;
  undefined1 *local_1f0;
  TaskGroupContext *local_1e8;
  Scene *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  long local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  _lambda_embree__range<unsigned_long>__1_ *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = embree::State::verbosity(*(ulong *)(this + 0x188));
  if (cVar3 != '\0') {
    printStatistics(this);
  }
  LOCK();
  *(undefined8 *)(this + 0x278) = 0;
  UNLOCK();
  uVar4 = *(ulong *)(this + 0x1d0);
  local_1f0 = &local_201;
  local_1d8 = (Scene *)0x0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_200 = (_lambda_embree__range<unsigned_long>_const___1_ *)this;
  local_1f8 = (_lambda_embree__range<unsigned_long>_const___1_ *)&local_1d8;
  local_1e8 = (TaskGroupContext *)&local_200;
  if (uVar4 != 1) goto LAB_00104d08;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = (_lambda_embree__range<unsigned_long>__1_ *)0x0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  plVar1 = (long *)**(long **)(this + 0x1e0);
  if ((plVar1 != (long *)0x0) && ((*(byte *)((long)plVar1 + 0x3e) & 0x20) != 0)) {
    (**(code **)(*plVar1 + 0x68))();
    (**(code **)(*(long *)**(undefined8 **)(local_200 + 0x1e0) + 0x78))
              ((long *)**(undefined8 **)(local_200 + 0x1e0),&local_108);
    lVar2 = **(long **)(local_200 + 0x1e0);
    uVar4 = 1;
    if (*(long *)(lVar2 + 0x40) == 0) {
      uVar4 = (ulong)(*(long *)(lVar2 + 0x48) != 0);
    }
    local_108 = (ulong)(*(byte *)(**(long **)(local_200 + 0x1e0) + 0x3e) >> 6 & 1) + local_108 +
                uVar4;
  }
  while( true ) {
    *(long *)(this + 0x280) = local_108;
    *(undefined8 *)(this + 0x288) = local_100;
    *(undefined8 *)(this + 0x2a8) = local_e0;
    *(undefined8 *)(this + 0x290) = local_f8;
    *(undefined8 *)(this + 0x2b0) = local_d8;
    *(undefined8 *)(this + 0x298) = local_f0;
    *(undefined8 *)(this + 0x2b8) = local_d0;
    *(undefined8 *)(this + 0x2a0) = local_e8;
    *(undefined8 *)(this + 0x2c0) = local_c8;
    *(undefined8 *)(this + 0x2c8) = local_c0;
    *(undefined8 *)(this + 0x2d0) = local_b8;
    *(undefined8 *)(this + 0x2d8) = local_b0;
    *(undefined8 *)(this + 0x2e0) = local_a8;
    *(undefined8 *)(this + 0x2e8) = local_a0;
    *(undefined8 *)(this + 0x328) = local_60;
    *(undefined8 *)(this + 0x2f0) = local_98;
    *(undefined8 *)(this + 0x330) = local_58;
    *(undefined8 *)(this + 0x2f8) = local_90;
    *(undefined8 *)(this + 0x300) = local_88;
    *(undefined8 *)(this + 0x308) = local_80;
    *(undefined8 *)(this + 0x310) = local_78;
    *(_lambda_embree__range<unsigned_long>__1_ **)(this + 0x318) = local_70;
    *(undefined8 *)(this + 800) = local_68;
    *(undefined8 *)(this + 0x338) = local_50;
    *(undefined8 *)(this + 0x340) = local_48;
    in_R9 = local_70;
    build_cpu_accels(this);
    uVar4 = *(ulong *)(this + 0x1d0);
    local_1d8 = this;
    if (uVar4 == 0) break;
    local_200 = (_lambda_embree__range<unsigned_long>_const___1_ *)0x0;
    TaskScheduler::
    spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
              (0,uVar4,1,(_lambda_embree__range<unsigned_long>_const___1_ *)&local_1d8,
               (TaskGroupContext *)&local_200);
    embree::TaskScheduler::wait();
    if (local_200 == (_lambda_embree__range<unsigned_long>_const___1_ *)0x0) break;
    this = (Scene *)&local_1f8;
    local_1f8 = local_200;
    std::__exception_ptr::exception_ptr::_M_addref();
    std::rethrow_exception(this);
LAB_00104d08:
    parallel_reduce_internal<unsigned_long,embree::GeometryCounts,embree::parallel_reduce<unsigned_long,embree::GeometryCounts,embree::Scene::commit_task()::_lambda(embree::range<unsigned_long>const&)_1_,std::plus<embree::GeometryCounts>>(unsigned_long,unsigned_long,embree::GeometryCounts_const&,embree::Scene::commit_task()::_lambda(embree::range<unsigned_long>const&)_1_const&,std::plus<embree::GeometryCounts>const&)::_lambda(embree::range<unsigned_long>)_1_,std::plus<embree::GeometryCounts>>
              ((ulong)&local_108,uVar4,uVar4,(ulong)&local_1d8,(GeometryCounts_conflict *)&local_1f8
               ,in_R9,in_stack_fffffffffffffd88);
  }
  this[0x248] = (Scene)0x0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::Scene::commit_task() */

void __thiscall embree::Scene::commit_task(Scene *this)

{
  embree::Scene::checkIfModifiedAndSet();
  if (this[0x248] == (Scene)0x0) {
    return;
  }
  commit_task(this);
  return;
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::Scene::commit(bool)::{lambda()#1}>::execute()
    */

void __thiscall
embree::TaskScheduler::ClosureTaskFunction<embree::Scene::commit(bool)::{lambda()#1}>::execute
          (ClosureTaskFunction<embree::Scene::commit(bool)::_lambda()_1_> *this)

{
  long *plVar1;
  Scene *this_00;
  long lVar2;
  long *plVar3;
  
  this_00 = *(Scene **)(this + 8);
  embree::Scene::checkIfModifiedAndSet();
  if (this_00[0x248] != (Scene)0x0) {
    Scene::commit_task(this_00);
  }
  embree::MutexSys::lock();
  lVar2 = *(long *)(*(long *)(this + 8) + 0x250);
  plVar3 = *(long **)(lVar2 + 8);
  if (plVar3 != (long *)0x0) {
    if (*(code **)(*plVar3 + 0x18) == RefCount::refDec) {
      LOCK();
      plVar1 = plVar3 + 1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      (**(code **)(*plVar3 + 0x18))();
    }
  }
  *(undefined8 *)(lVar2 + 8) = 0;
  embree::MutexSys::unlock();
  return;
}



/* embree::Scene::bind(unsigned int, embree::Ref<embree::Geometry>) */

ulong __thiscall embree::Scene::bind(Scene *this,uint param_1,long *param_3)

{
  long *plVar1;
  _Rb_tree_node_base *p_Var2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  long *plVar9;
  uint uVar10;
  _Rb_tree_node_base *p_Var11;
  _Rb_tree_node_base *p_Var12;
  _Rb_tree_node_base *p_Var13;
  _Rb_tree_node_base *p_Var14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  void *pvVar18;
  ulong uVar19;
  _Rb_tree_node_base *p_Var20;
  undefined8 *puVar21;
  undefined4 *puVar22;
  ulong uVar23;
  ulong uVar24;
  _Rb_tree_node_base *p_Var25;
  ulong uVar26;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  uVar19 = (ulong)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  embree::MutexSys::lock();
  if (param_1 == 0xffffffff) {
    if (*(long *)(this + 0x1b8) != 0) {
      uVar3 = *(uint *)(*(_Rb_tree_node_base **)(this + 0x1a8) + 0x20);
      uVar19 = (ulong)uVar3;
      pvVar18 = (void *)std::_Rb_tree_rebalance_for_erase
                                  (*(_Rb_tree_node_base **)(this + 0x1a8),
                                   (_Rb_tree_node_base *)(this + 0x198));
      operator_delete(pvVar18,0x28);
      *(long *)(this + 0x1b8) = *(long *)(this + 0x1b8) + -1;
      if (uVar3 == 0xffffffff) {
        uVar19 = bind();
        return uVar19;
      }
      goto LAB_0010537f;
    }
    param_1 = *(uint *)(this + 0x1c0);
    uVar19 = (ulong)param_1;
    if (0xfffffffe < uVar19 + 1) goto code_r0x001056da;
    *(uint *)(this + 0x1c0) = param_1 + 1;
  }
  else {
    uVar3 = *(uint *)(this + 0x1c0);
    if (param_1 < uVar3) {
      p_Var25 = *(_Rb_tree_node_base **)(this + 0x1a0);
      p_Var2 = (_Rb_tree_node_base *)(this + 0x198);
      p_Var20 = p_Var2;
      if (p_Var25 == (_Rb_tree_node_base *)0x0) {
code_r0x001056da:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      do {
        uVar3 = *(uint *)(p_Var25 + 0x20);
        p_Var13 = *(_Rb_tree_node_base **)(p_Var25 + 0x10);
        p_Var14 = *(_Rb_tree_node_base **)(p_Var25 + 0x18);
        p_Var12 = p_Var25;
        while (p_Var11 = p_Var14, p_Var25 = p_Var13, uVar3 < param_1) {
          if (p_Var11 == (_Rb_tree_node_base *)0x0) goto LAB_00105353;
          p_Var13 = *(_Rb_tree_node_base **)(p_Var11 + 0x10);
          p_Var14 = *(_Rb_tree_node_base **)(p_Var11 + 0x18);
          p_Var12 = p_Var11;
          uVar3 = *(uint *)(p_Var11 + 0x20);
        }
        p_Var20 = p_Var12;
      } while (p_Var25 != (_Rb_tree_node_base *)0x0);
LAB_00105353:
      if ((p_Var20 == p_Var2) || (param_1 < *(uint *)(p_Var20 + 0x20))) goto code_r0x001056da;
      pvVar18 = (void *)std::_Rb_tree_rebalance_for_erase(p_Var20,p_Var2);
      operator_delete(pvVar18,0x28);
      *(long *)(this + 0x1b8) = *(long *)(this + 0x1b8) + -1;
LAB_0010537f:
      param_1 = (uint)uVar19;
    }
    else {
      local_44 = uVar3;
      if (uVar3 < param_1) {
        do {
          uVar10 = uVar3 + 1;
          local_44 = uVar3;
          std::
          _Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
          ::_M_insert_unique<unsigned_int_const&>
                    ((_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
                      *)(this + 400),&local_44);
          uVar3 = uVar10;
          local_44 = uVar10;
        } while (param_1 != uVar10);
      }
      uVar19 = (ulong)param_1;
      *(uint *)(this + 0x1c0) = param_1 + 1;
    }
  }
  uVar23 = *(ulong *)(this + 0x1d0);
  if (uVar19 < uVar23) goto LAB_00105293;
  uVar24 = *(ulong *)(this + 0x1d8);
  uVar26 = (ulong)(param_1 + 1);
  uVar16 = uVar26;
  if (uVar24 < uVar26) {
    uVar15 = uVar26;
    if (uVar24 != 0) {
      do {
        uVar24 = uVar24 * 2;
        uVar15 = uVar24;
      } while (uVar24 < uVar26);
    }
    uVar24 = uVar15;
    if (uVar26 < uVar23) {
LAB_00105024:
      do {
        plVar5 = *(long **)(*(long *)(this + 0x1e0) + uVar16 * 8);
        if (plVar5 != (long *)0x0) {
          if (*(code **)(*plVar5 + 0x18) != RefCount::refDec) {
            (**(code **)(*plVar5 + 0x18))();
            uVar16 = uVar16 + 1;
            if (*(ulong *)(this + 0x1d0) <= uVar16) break;
            goto LAB_00105024;
          }
          LOCK();
          plVar9 = plVar5 + 1;
          *plVar9 = *plVar9 + -1;
          UNLOCK();
          if (*plVar9 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < *(ulong *)(this + 0x1d0));
      *(ulong *)(this + 0x1d0) = uVar26;
      if (*(ulong *)(this + 0x1d8) == uVar24) goto LAB_00105428;
    }
    puVar6 = *(undefined8 **)(this + 0x1e0);
    lVar17 = (**(code **)(**(long **)(this + 0x1c8) + 0x38))(*(long **)(this + 0x1c8),uVar24 * 8,8);
    uVar23 = *(ulong *)(this + 0x1d0);
    *(long *)(this + 0x1e0) = lVar17;
    if (uVar23 == 0) goto LAB_001050f7;
    uVar16 = 0;
    puVar21 = puVar6;
    while( true ) {
      uVar7 = *puVar21;
      puVar21 = puVar21 + 1;
      *(undefined8 *)(lVar17 + uVar16 * 8) = uVar7;
      uVar23 = *(ulong *)(this + 0x1d0);
      uVar16 = uVar16 + 1;
      if (uVar23 <= uVar16) break;
      lVar17 = *(long *)(this + 0x1e0);
    }
    for (; uVar23 < uVar26; uVar23 = uVar23 + 1) {
      lVar17 = *(long *)(this + 0x1e0);
LAB_001050f7:
      *(undefined8 *)(lVar17 + uVar23 * 8) = 0;
    }
    plVar5 = *(long **)(this + 0x1c8);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x40))(plVar5,puVar6);
    }
    *(ulong *)(this + 0x1d8) = uVar24;
    uVar23 = *(ulong *)(this + 0x218);
    *(ulong *)(this + 0x1d0) = uVar26;
    if (uVar23 < uVar26) goto LAB_0010513b;
LAB_0010543f:
    uVar23 = *(ulong *)(this + 0x1f8);
    *(ulong *)(this + 0x210) = uVar26;
  }
  else {
    if (uVar26 < uVar23) goto LAB_00105024;
    if (uVar23 < uVar26) {
      do {
        *(undefined8 *)(*(long *)(this + 0x1e0) + uVar23 * 8) = 0;
        uVar23 = uVar23 + 1;
      } while (uVar26 != uVar23);
    }
LAB_00105428:
    uVar23 = *(ulong *)(this + 0x218);
    *(ulong *)(this + 0x1d0) = uVar26;
    if (uVar26 <= uVar23) goto LAB_0010543f;
LAB_0010513b:
    if (uVar23 == 0) {
      uVar23 = uVar26;
      if (uVar26 < *(ulong *)(this + 0x210)) {
        *(ulong *)(this + 0x210) = uVar26;
      }
    }
    else {
      do {
        uVar23 = uVar23 * 2;
      } while (uVar23 < uVar26);
      if (uVar26 < *(ulong *)(this + 0x210)) {
        *(ulong *)(this + 0x210) = uVar26;
      }
    }
    puVar6 = *(undefined8 **)(this + 0x220);
    lVar17 = (**(code **)(**(long **)(this + 0x208) + 0x38))(*(long **)(this + 0x208),uVar23 * 8,8);
    *(long *)(this + 0x220) = lVar17;
    if (*(long *)(this + 0x210) != 0) {
      uVar24 = 0;
      puVar21 = puVar6;
      while( true ) {
        uVar7 = *puVar21;
        puVar21 = puVar21 + 1;
        *(undefined8 *)(lVar17 + uVar24 * 8) = uVar7;
        uVar24 = uVar24 + 1;
        if (*(ulong *)(this + 0x210) <= uVar24) break;
        lVar17 = *(long *)(this + 0x220);
      }
    }
    plVar5 = *(long **)(this + 0x208);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x40))(plVar5,puVar6);
    }
    *(ulong *)(this + 0x218) = uVar23;
    uVar23 = *(ulong *)(this + 0x1f8);
    *(ulong *)(this + 0x210) = uVar26;
  }
  if (uVar23 < uVar26) {
    if (uVar23 == 0) {
      uVar23 = uVar26;
      if (uVar26 < *(ulong *)(this + 0x1f0)) {
        *(ulong *)(this + 0x1f0) = uVar26;
      }
    }
    else {
      do {
        uVar23 = uVar23 * 2;
      } while (uVar23 < uVar26);
      if (uVar26 < *(ulong *)(this + 0x1f0)) {
        *(ulong *)(this + 0x1f0) = uVar26;
      }
    }
    puVar8 = *(undefined4 **)(this + 0x200);
    lVar17 = embree::alignedMalloc(uVar23 * 4,4);
    *(long *)(this + 0x200) = lVar17;
    if (*(long *)(this + 0x1f0) != 0) {
      uVar24 = 0;
      puVar22 = puVar8;
      while( true ) {
        uVar4 = *puVar22;
        puVar22 = puVar22 + 1;
        *(undefined4 *)(lVar17 + uVar24 * 4) = uVar4;
        uVar24 = uVar24 + 1;
        if (*(ulong *)(this + 0x1f0) <= uVar24) break;
        lVar17 = *(long *)(this + 0x200);
      }
    }
    embree::alignedFree(puVar8);
    *(ulong *)(this + 0x1f0) = uVar26;
    *(ulong *)(this + 0x1f8) = uVar23;
  }
  else {
    *(ulong *)(this + 0x1f0) = uVar26;
  }
LAB_00105293:
  plVar9 = (long *)*param_3;
  plVar5 = (long *)(*(long *)(this + 0x1e0) + uVar19 * 8);
  if (plVar9 != (long *)0x0) {
    if (*(code **)(*plVar9 + 0x10) == RefCount::refInc) {
      LOCK();
      plVar9[1] = plVar9[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  plVar9 = (long *)*plVar5;
  if (plVar9 != (long *)0x0) {
    if (*(code **)(*plVar9 + 0x18) == RefCount::refDec) {
      LOCK();
      plVar1 = plVar9 + 1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    else {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  *plVar5 = *param_3;
  *(undefined4 *)(*(long *)(this + 0x200) + uVar19 * 4) = 0;
  if ((*(byte *)(*param_3 + 0x3e) & 0x20) != 0) {
    this[0x248] = (Scene)0x1;
  }
  embree::MutexSys::unlock();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::Scene::detachGeometry(unsigned long) */

void __thiscall embree::Scene::detachGeometry(Scene *this,ulong param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long in_FS_OFFSET;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  embree::MutexSys::lock();
  if ((*(ulong *)(this + 0x1d0) <= param_1) ||
     (*(long *)(*(long *)(this + 0x1e0) + param_1 * 8) == 0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  this[0x248] = (Scene)0x1;
  embree::AccelN::accels_deleteGeometry((ulong)this);
  local_34 = (uint)param_1;
  std::
  _Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
  ::_M_insert_unique<unsigned_int_const&>
            ((_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
              *)(this + 400),&local_34);
  plVar3 = (long *)(param_1 * 8 + *(long *)(this + 0x1e0));
  plVar2 = (long *)*plVar3;
  if (plVar2 != (long *)0x0) {
    if (*(code **)(*plVar2 + 0x18) == RefCount::refDec) {
      LOCK();
      plVar1 = plVar2 + 1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
    else {
      (**(code **)(*plVar2 + 0x18))();
    }
  }
  *plVar3 = 0;
  *(undefined8 *)(*(long *)(this + 0x220) + param_1 * 8) = 0;
  *(undefined4 *)(*(long *)(this + 0x200) + param_1 * 4) = 0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    embree::MutexSys::unlock();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::ctype<char>::do_widen(char) const */

undefined4 __thiscall std::ctype<char>::do_widen(ctype<char> *this,char param_1)

{
  undefined3 in_register_00000031;
  
  return CONCAT31(in_register_00000031,param_1);
}



/* embree::AccelData::deleteGeometry(unsigned long) */

void embree::AccelData::deleteGeometry(ulong param_1)

{
  return;
}



/* embree::Accel::immutable() */

void embree::Accel::immutable(void)

{
  return;
}



/* embree::Scene::build() */

void embree::Scene::build(void)

{
  return;
}



/* embree::missing_rtcCommit() */

void embree::missing_rtcCommit(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, embree::parallel_for<unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) [clone .constprop.0] [clone .cold]
    */

void embree::TaskScheduler::
     spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
               (_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,bool param_4)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long, embree::parallel_for<unsigned long,
   embree::Scene::build_cpu_accels()::{lambda(unsigned long)#1}>(unsigned long,
   embree::Scene::build_cpu_accels()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] [clone .cold] */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::build_cpu_accels()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::build_cpu_accels()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() [clone .cold] */

void embree::TaskScheduler::
     ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::{lambda(unsigned_long)#1}>(unsigned_long,embree::Scene::build_cpu_accels()::{lambda(unsigned_long)#1}const&)::{lambda(embree::range<unsigned_long>const&)#1}>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::build_cpu_accels()::{lambda(unsigned_long)#1}>(unsigned_long,embree::Scene::build_cpu_accels()::{lambda(unsigned_long)#1}const&)::{lambda(embree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
     ::execute(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long, embree::Scene::commit_task()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::commit_task()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::Scene::commit_task()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::commit_task()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, embree::parallel_for<unsigned long, embree::Scene::commit_task()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::commit_task()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::Scene::commit_task()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::commit_task()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) [clone .constprop.0] [clone .cold]
    */

void embree::TaskScheduler::
     spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
               (_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,bool param_4)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long, embree::parallel_for<unsigned long,
   embree::Scene::commit_task()::{lambda(unsigned long)#1}>(unsigned long,
   embree::Scene::commit_task()::{lambda(unsigned long)#1} const&)::{lambda(embree::range<unsigned
   long> const&)#1}>(unsigned long, unsigned long, unsigned long, embree::parallel_for<unsigned
   long, embree::Scene::commit_task()::{lambda(unsigned long)#1}>(unsigned long,
   embree::Scene::commit_task()::{lambda(unsigned long)#1} const&)::{lambda(embree::range<unsigned
   long> const&)#1} const&, embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] [clone .cold]
    */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_>(unsigned_long,embree::Scene::commit_task()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long, embree::Scene::commit_task()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::commit_task()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::Scene::commit_task()::{lambda(unsigned
   long)#1}>(unsigned long, embree::Scene::commit_task()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() [clone .cold] */

void embree::TaskScheduler::
     ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::{lambda(unsigned_long)#1}>(unsigned_long,embree::Scene::commit_task()::{lambda(unsigned_long)#1}const&)::{lambda(embree::range<unsigned_long>const&)#1}>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::Scene::commit_task()::{lambda(unsigned_long)#1}>(unsigned_long,embree::Scene::commit_task()::{lambda(unsigned_long)#1}const&)::{lambda(embree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
     ::execute(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::invalid_rtcIntersect1() */

void embree::invalid_rtcIntersect1(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::invalid_rtcIntersect4() */

void embree::invalid_rtcIntersect4(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::invalid_rtcIntersect8() */

void embree::invalid_rtcIntersect8(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::invalid_rtcIntersect16() */

void embree::invalid_rtcIntersect16(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::invalid_rtcIntersectN() */

void embree::invalid_rtcIntersectN(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Scene::createTriangleAccel() [clone .cold] */

void embree::Scene::createTriangleAccel(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Scene::createTriangleMBAccel() [clone .cold] */

void embree::Scene::createTriangleMBAccel(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Scene::commit(bool) [clone .cold] */

void embree::Scene::commit(bool param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Scene::progressMonitor(double) [clone .cold] */

void embree::Scene::progressMonitor(double param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Scene::bind(unsigned int, embree::Ref<embree::Geometry>) [clone .cold] */

void embree::Scene::bind(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Scene::detachGeometry(unsigned long) [clone .cold] */

void embree::Scene::detachGeometry(ulong param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::RefCount::refInc() */

RefCount * __thiscall embree::RefCount::refInc(RefCount *this)

{
  LOCK();
  *(long *)(this + 8) = *(long *)(this + 8) + 1;
  UNLOCK();
  return this;
}



/* embree::Scene::BuildProgressMonitorInterface::TEMPNAMEPLACEHOLDERVALUE(unsigned long) const */

void __thiscall
embree::Scene::BuildProgressMonitorInterface::operator()
          (BuildProgressMonitorInterface *this,ulong param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  char cVar5;
  ulong uVar6;
  
  lVar3 = *(long *)(this + 8);
  if (*(long *)(lVar3 + 0x268) == 0) {
    return;
  }
  dVar4 = (double)param_1;
  if (_LC0 <= dVar4) {
    uVar6 = (long)(dVar4 - _LC0) ^ 0x8000000000000000;
  }
  else {
    uVar6 = (ulong)dVar4;
  }
  LOCK();
  plVar1 = (long *)(lVar3 + 0x278);
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + uVar6;
  UNLOCK();
  cVar5 = (**(code **)(lVar3 + 0x268))
                    ((double)(lVar2 + uVar6) /
                     (double)(ulong)(*(long *)(lVar3 + 0x298) + *(long *)(lVar3 + 0x288) +
                                     *(long *)(lVar3 + 0x2a8) + *(long *)(lVar3 + 0x2b8) +
                                     *(long *)(lVar3 + 0x2c8) + *(long *)(lVar3 + 0x2d8) +
                                     *(long *)(lVar3 + 0x2e8) + *(long *)(lVar3 + 0x2f8) +
                                     *(long *)(lVar3 + 0x308) + *(long *)(lVar3 + 0x318) +
                                     *(long *)(lVar3 + 0x338) + *(long *)(lVar3 + 0x290) +
                                     *(long *)(lVar3 + 0x2a0) + *(long *)(lVar3 + 0x2b0) +
                                     *(long *)(lVar3 + 0x2c0) + *(long *)(lVar3 + 0x2d0) +
                                     *(long *)(lVar3 + 0x2e0) + *(long *)(lVar3 + 0x2f0) +
                                     *(long *)(lVar3 + 0x300) + *(long *)(lVar3 + 0x310) +
                                     *(long *)(lVar3 + 800) + *(long *)(lVar3 + 0x340)),
                     *(undefined8 *)(lVar3 + 0x270));
  if (cVar5 == '\0') {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
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
                    /* WARNING: Could not recover jumptable at 0x001058e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::vector<unsigned long, std::allocator<unsigned long> >::_M_default_append(unsigned long) */

void __thiscall
std::vector<unsigned_long,std::allocator<unsigned_long>>::_M_default_append
          (vector<unsigned_long,std::allocator<unsigned_long>> *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  void *__dest;
  void *pvVar3;
  undefined8 *__s;
  size_t sVar4;
  undefined8 *puVar5;
  
  if (param_1 == 0) {
    return;
  }
  puVar5 = *(undefined8 **)(this + 8);
  pvVar3 = *(void **)this;
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar5 >> 3)) {
    *puVar5 = 0;
    __s = puVar5 + 1;
    if (param_1 - 1 != 0) {
      sVar4 = (long)__s + ((param_1 - 1) * 8 - (long)puVar5) + -8;
      pvVar3 = memset(__s,0,sVar4);
      __s = (undefined8 *)((long)pvVar3 + sVar4);
    }
    *(undefined8 **)(this + 8) = __s;
    return;
  }
  sVar4 = (long)puVar5 - (long)pvVar3;
  uVar2 = (long)sVar4 >> 3;
  if (0xfffffffffffffff - uVar2 < param_1) {
    std::__throw_length_error("vector::_M_default_append");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = param_1 + uVar2;
  if (uVar2 < param_1) {
    uVar2 = 0xfffffffffffffff;
    if (uVar1 < 0x1000000000000000) {
      uVar2 = uVar1;
    }
    uVar2 = uVar2 * 8;
    __dest = operator_new(uVar2);
    puVar5 = (undefined8 *)((long)__dest + sVar4);
    *puVar5 = 0;
    if (param_1 - 1 != 0) goto LAB_00105ae5;
LAB_00105af9:
    if (sVar4 == 0) goto LAB_00105b02;
  }
  else {
    uVar2 = uVar2 * 2;
    if (0xfffffffffffffff < uVar2) {
      uVar2 = 0xfffffffffffffff;
    }
    uVar2 = uVar2 * 8;
    __dest = operator_new(uVar2);
    puVar5 = (undefined8 *)((long)__dest + sVar4);
    *puVar5 = 0;
    if (param_1 != 1) {
LAB_00105ae5:
      memset(puVar5 + 1,0,(param_1 - 1) * 8);
      goto LAB_00105af9;
    }
  }
  memmove(__dest,pvVar3,sVar4);
LAB_00105b02:
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3,*(long *)(this + 0x10) - (long)pvVar3);
  }
  *(void **)this = __dest;
  *(void **)(this + 8) = (void *)((long)__dest + uVar1 * 8);
  *(ulong *)(this + 0x10) = (long)__dest + uVar2;
  return;
}



/* std::pair<std::_Rb_tree_iterator<unsigned int>, bool> std::_Rb_tree<unsigned int, unsigned int,
   std::_Identity<unsigned int>, std::less<unsigned int>, std::allocator<unsigned int>
   >::_M_insert_unique<unsigned int const&>(unsigned int const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
::_M_insert_unique<unsigned_int_const&>
          (_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
           *this,uint *param_1)

{
  _Rb_tree_node_base *p_Var1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  bool bVar7;
  undefined1 auVar8 [16];
  
  p_Var1 = (_Rb_tree_node_base *)(this + 8);
  p_Var5 = *(_Rb_tree_node_base **)(this + 0x10);
  uVar2 = *param_1;
  if (p_Var5 == (_Rb_tree_node_base *)0x0) {
    p_Var6 = p_Var1;
    if (p_Var1 == *(_Rb_tree_node_base **)(this + 0x18)) {
      if (p_Var1 != (_Rb_tree_node_base *)0x0) {
        bVar7 = true;
        goto LAB_00105c8c;
      }
    }
    else {
      p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var1);
      if ((*(uint *)(p_Var5 + 0x20) < uVar2) &&
         (p_Var5 = (_Rb_tree_node_base *)0x0, p_Var1 != (_Rb_tree_node_base *)0x0))
      goto LAB_00105c81;
    }
  }
  else {
    do {
      p_Var6 = p_Var5;
      uVar3 = *(uint *)(p_Var6 + 0x20);
      p_Var5 = *(_Rb_tree_node_base **)(p_Var6 + 0x18);
      if (uVar2 < uVar3) {
        p_Var5 = *(_Rb_tree_node_base **)(p_Var6 + 0x10);
      }
    } while (p_Var5 != (_Rb_tree_node_base *)0x0);
    p_Var5 = p_Var6;
    if (uVar2 < uVar3) {
      if (*(_Rb_tree_node_base **)(this + 0x18) == p_Var6) goto LAB_00105c81;
      p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var6);
      uVar3 = *(uint *)(p_Var5 + 0x20);
    }
    if (uVar3 < uVar2) {
LAB_00105c81:
      bVar7 = true;
      if (p_Var6 != p_Var1) {
        bVar7 = uVar2 < *(uint *)(p_Var6 + 0x20);
      }
LAB_00105c8c:
      p_Var5 = (_Rb_tree_node_base *)operator_new(0x28);
      *(uint *)(p_Var5 + 0x20) = *param_1;
      std::_Rb_tree_insert_and_rebalance(bVar7,p_Var5,p_Var6,p_Var1);
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
      uVar4 = 1;
      goto LAB_00105cbc;
    }
  }
  uVar4 = 0;
LAB_00105cbc:
  auVar8[8] = uVar4;
  auVar8._0_8_ = p_Var5;
  auVar8._9_7_ = 0;
  return auVar8;
}


