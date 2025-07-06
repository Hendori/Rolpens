/* embree::TaskScheduler::~TaskScheduler() */void embree::TaskScheduler::~TaskScheduler(TaskScheduler *this) {
   void *pvVar1;
   *(undefined***)this = &PTR__TaskScheduler_00101f78;
   embree::ConditionSys::~ConditionSys((ConditionSys*)( this + 0x48 ));
   embree::MutexSys::~MutexSys((MutexSys*)( this + 0x40 ));
   pvVar1 = *(void**)( this + 0x10 );
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, *(long*)( this + 0x20 ) - (long)pvVar1);
      return;
   }

   return;
}
/* embree::TaskScheduler::~TaskScheduler() */void embree::TaskScheduler::~TaskScheduler(TaskScheduler *this) {
   void *pvVar1;
   *(undefined***)this = &PTR__TaskScheduler_00101f78;
   embree::ConditionSys::~ConditionSys((ConditionSys*)( this + 0x48 ));
   embree::MutexSys::~MutexSys((MutexSys*)( this + 0x40 ));
   pvVar1 = *(void**)( this + 0x10 );
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, *(long*)( this + 0x20 ) - (long)pvVar1);
   }

   embree::alignedFree(this);
   return;
}
/* embree::TaskScheduler::TaskQueue::steal(embree::TaskScheduler::Thread&) */undefined8 embree::TaskScheduler::TaskQueue::steal(TaskQueue *this, Thread *param_1) {
   int iVar1;
   ulong uVar2;
   long lVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   Thread *pTVar6;
   TaskQueue *pTVar7;
   pTVar7 = this + 0x40000;
   if (*(ulong*)( this + 0x40000 ) < *(ulong*)( this + 0x40040 )) {
      LOCK();
      uVar2 = *(ulong*)pTVar7;
      *(ulong*)pTVar7 = *(ulong*)pTVar7 + 1;
      UNLOCK();
      if (uVar2 < *(ulong*)( this + 0x40040 )) {
         pTVar7 = this + uVar2 * 0x40;
         lVar3 = *(long*)( param_1 + 0x40080 );
         if (pTVar7[8] != (TaskQueue)0x0) {
            LOCK();
            iVar1 = *(int*)pTVar7;
            if (iVar1 == 1) {
               *(int*)pTVar7 = 0;
            }

            UNLOCK();
            if (iVar1 == 1) {
               uVar4 = *(undefined8*)( pTVar7 + 0x20 );
               uVar5 = *(undefined8*)( pTVar7 + 0x10 );
               pTVar6 = param_1 + ( lVar3 + 1 ) * 0x40;
               *(int*)( pTVar6 + 4 ) = 1;
               pTVar6[8] = (Thread)0x0;
               *(undefined8*)( param_1 + lVar3 * 0x40 + 0x50 ) = uVar5;
               *(TaskQueue**)( param_1 + lVar3 * 0x40 + 0x58 ) = pTVar7;
               *(undefined8*)( param_1 + lVar3 * 0x40 + 0x60 ) = uVar4;
               *(undefined8*)( param_1 + lVar3 * 0x40 + 0x68 ) = 0xffffffffffffffff;
               *(undefined8*)( param_1 + lVar3 * 0x40 + 0x70 ) = 1;
               LOCK();
               if (*(int*)pTVar6 == 0) {
                  *(int*)pTVar6 = 1;
               }

               UNLOCK();
               LOCK();
               *(long*)( param_1 + 0x40080 ) = *(long*)( param_1 + 0x40080 ) + 1;
               UNLOCK();
               return 1;
            }

         }

      }

   }

   return 0;
}
/* embree::TaskScheduler::Task::run_internal(embree::TaskScheduler::Thread&) */void embree::TaskScheduler::Task::run_internal(Task *this, Thread *param_1) {
   int *piVar1;
   int iVar2;
   undefined8 uVar3;
   ulong uVar4;
   long lVar5;
   ulong uVar6;
   char cVar7;
   long lVar8;
   ulong uVar9;
   ulong uVar10;
   ulong uVar11;
   ulong uVar12;
   LOCK();
   iVar2 = *(int*)this;
   if (iVar2 == 1) {
      *(undefined4*)this = 0;
   }

   UNLOCK();
   if (iVar2 == 1) {
      uVar3 = *(undefined8*)( param_1 + 0xc0100 );
      *(Task**)( param_1 + 0xc0100 ) = this;
      ( **(code**)**(undefined8**)( this + 0x10 ) )();
      *(undefined8*)( param_1 + 0xc0100 ) = uVar3;
      LOCK();
      *(int*)( this + 4 ) = *(int*)( this + 4 ) + -1;
      UNLOCK();
   }

   LAB_001001b0:uVar11 = 0;
   uVar4 = *(ulong*)( *(long*)( param_1 + 0xc0108 ) + 0x28 );
   LAB_001001c8:if (*(int*)( this + 4 ) < 1) {
      if (*(long*)( this + 0x18 ) != 0) {
         LOCK();
         piVar1 = (int*)( *(long*)( this + 0x18 ) + 4 );
         *piVar1 = *piVar1 + -1;
         UNLOCK();
      }

      return;
   }

   lVar5 = *(long*)( param_1 + 0xc0108 );
   uVar12 = *(long*)param_1 + 1;
   uVar6 = *(ulong*)( lVar5 + 0x28 );
   uVar10 = *(long*)param_1 + uVar6;
   if (1 < uVar6) {
      do {
         lVar8 = 0x20;
         do {
            lVar8 = lVar8 + -2;
         }
 while ( lVar8 != 0 );
         uVar9 = uVar12 - uVar6;
         if (uVar12 < uVar6) {
            uVar9 = uVar12;
         }

         lVar8 = *(long*)( *(long*)( lVar5 + 0x10 ) + uVar9 * 8 );
         if (( lVar8 != 0 ) && ( cVar7 = TaskQueue::steal((TaskQueue*)( lVar8 + 0x40 ), param_1) ),cVar7 != '\0') goto LAB_00100250;
         uVar12 = uVar12 + 1;
      }
 while ( uVar10 != uVar12 );
   }

   uVar11 = uVar11 + uVar4;
   goto LAB_0010023b;
   LAB_00100250:do {
      cVar7 = TaskQueue::execute_local_internal((TaskQueue*)( param_1 + 0x40 ), param_1, this);
      uVar11 = uVar4;
   }
 while ( cVar7 != '\0' );
   LAB_0010023b:if (0x3ff < uVar11) goto code_r0x00100244;
   goto LAB_001001c8;
   code_r0x00100244:embree::yield();
   goto LAB_001001b0;
}
/* embree::TaskScheduler::Task::run(embree::TaskScheduler::Thread&) */void embree::TaskScheduler::Task::run(Task *this, Thread *param_1) {
   run_internal(this, param_1);
   return;
}
/* embree::TaskScheduler::TaskQueue::execute_local_internal(embree::TaskScheduler::Thread&,
   embree::TaskScheduler::Task*) */undefined8 embree::TaskScheduler::TaskQueue::execute_local_internal(TaskQueue *this, Thread *param_1, Task *param_2) {
   long lVar1;
   if (*(long*)( this + 0x40040 ) == 0) {
      return 0;
   }

   if (param_2 != (Task*)( this + ( *(long*)( this + 0x40040 ) + -1 ) * 0x40 )) {
      lVar1 = *(long*)( this + 0x40040 );
      Task::run_internal((Task*)( this + ( *(long*)( this + 0x40040 ) + -1 ) * 0x40 ), param_1);
      if (*(long*)( this + 0x40040 ) == lVar1) {
         LOCK();
         *(long*)( this + 0x40040 ) = *(long*)( this + 0x40040 ) + -1;
         UNLOCK();
         if (*(long*)( this + *(long*)( this + 0x40040 ) * 0x40 + 0x28 ) != -1) {
            *(undefined8*)( this + 0xc0080 ) = *(undefined8*)( this + *(long*)( this + 0x40040 ) * 0x40 + 0x28 );
         }

         if (*(ulong*)( this + 0x40040 ) <= *(ulong*)( this + 0x40000 )) {
            LOCK();
            *(undefined8*)( this + 0x40000 ) = *(undefined8*)( this + 0x40040 );
            UNLOCK();
         }

         return CONCAT71(( int7 )(( ulong ) * (long*)( this + 0x40040 ) >> 8), *(long*)( this + 0x40040 ) != 0);
      }

      /* WARNING: Subroutine does not return */
      abort();
   }

   return 0;
}
/* embree::TaskScheduler::TaskQueue::execute_local(embree::TaskScheduler::Thread&,
   embree::TaskScheduler::Task*) */undefined8 embree::TaskScheduler::TaskQueue::execute_local(TaskQueue *this, Thread *param_1, Task *param_2) {
   long lVar1;
   if (*(long*)( this + 0x40040 ) == 0) {
      return 0;
   }

   if (param_2 != (Task*)( this + ( *(long*)( this + 0x40040 ) + -1 ) * 0x40 )) {
      lVar1 = *(long*)( this + 0x40040 );
      Task::run_internal((Task*)( this + ( *(long*)( this + 0x40040 ) + -1 ) * 0x40 ), param_1);
      if (lVar1 == *(long*)( this + 0x40040 )) {
         LOCK();
         *(long*)( this + 0x40040 ) = *(long*)( this + 0x40040 ) + -1;
         UNLOCK();
         if (*(long*)( this + *(long*)( this + 0x40040 ) * 0x40 + 0x28 ) != -1) {
            *(undefined8*)( this + 0xc0080 ) = *(undefined8*)( this + *(long*)( this + 0x40040 ) * 0x40 + 0x28 );
         }

         if (*(ulong*)( this + 0x40040 ) <= *(ulong*)( this + 0x40000 )) {
            LOCK();
            *(undefined8*)( this + 0x40000 ) = *(undefined8*)( this + 0x40040 );
            UNLOCK();
         }

         return CONCAT71(( int7 )(( ulong ) * (long*)( this + 0x40040 ) >> 8), *(long*)( this + 0x40040 ) != 0);
      }

      /* WARNING: Subroutine does not return */
      abort();
   }

   return 0;
}
/* embree::TaskScheduler::TaskQueue::getTaskSizeAtLeft() */undefined8 embree::TaskScheduler::TaskQueue::getTaskSizeAtLeft(TaskQueue *this) {
   if (*(ulong*)( this + 0x40040 ) <= *(ulong*)( this + 0x40000 )) {
      return 0;
   }

   return *(undefined8*)( this + *(long*)( this + 0x40000 ) * 0x40 + 0x30 );
}
/* embree::TaskScheduler::ThreadPool::ThreadPool(bool) */void embree::TaskScheduler::ThreadPool::ThreadPool(ThreadPool *this, bool param_1) {
   this[0x10] = (ThreadPool)param_1;
   *(undefined8*)this = 0;
   *(undefined8*)( this + 8 ) = 0;
   this[0x11] = (ThreadPool)0x0;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 8*i + 24 ) ) = 0;
   }

   embree::MutexSys::MutexSys((MutexSys*)( this + 0x30 ));
   embree::ConditionSys::ConditionSys((ConditionSys*)( this + 0x38 ));
   *(undefined8*)( this + 0x50 ) = 0;
   *(ThreadPool**)( this + 0x48 ) = this + 0x40;
   *(ThreadPool**)( this + 0x40 ) = this + 0x40;
   return;
}
/* embree::TaskScheduler::ThreadPool::~ThreadPool() */void embree::TaskScheduler::ThreadPool::~ThreadPool(ThreadPool *this) {
   long *plVar1;
   long lVar2;
   ThreadPool *pTVar3;
   long *plVar4;
   void *pvVar5;
   ThreadPool *pTVar6;
   long lVar7;
   ulong uVar8;
   embree::MutexSys::lock();
   LOCK();
   *(undefined8*)( this + 8 ) = 0;
   UNLOCK();
   embree::MutexSys::unlock();
   embree::ConditionSys::notify_all();
   lVar7 = *(long*)( this + 0x18 );
   if (*(long*)( this + 0x20 ) != lVar7) {
      uVar8 = 0;
      do {
         lVar2 = uVar8 * 8;
         uVar8 = uVar8 + 1;
         embree::join(*(opaque_thread_t**)( lVar7 + lVar2 ));
         lVar7 = *(long*)( this + 0x18 );
      }
 while ( uVar8 < ( ulong )(*(long*)( this + 0x20 ) - lVar7 >> 3) );
   }

   pTVar6 = *(ThreadPool**)( this + 0x40 );
   while (this + 0x40 != pTVar6) {
      pTVar3 = *(ThreadPool**)pTVar6;
      plVar4 = *(long**)( pTVar6 + 0x10 );
      if (plVar4 != (long*)0x0) {
         if (*(code**)( *plVar4 + 0x18 ) == RefCount::refDec) {
            LOCK();
            plVar1 = plVar4 + 1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               if (*(code**)( *plVar4 + 8 ) == ~TaskScheduler) {
                  *plVar4 = (long)&PTR__TaskScheduler_00101f78;
                  embree::ConditionSys::~ConditionSys((ConditionSys*)( plVar4 + 9 ));
                  embree::MutexSys::~MutexSys((MutexSys*)( plVar4 + 8 ));
                  pvVar5 = (void*)plVar4[2];
                  if (pvVar5 != (void*)0x0) {
                     operator_delete(pvVar5, plVar4[4] - (long)pvVar5);
                  }

                  embree::alignedFree(plVar4);
               }
 else {
                  ( **(code**)( *plVar4 + 8 ) )(plVar4);
               }

            }

         }
 else {
            ( **(code**)( *plVar4 + 0x18 ) )(plVar4);
         }

      }

      operator_delete(pTVar6, 0x18);
      pTVar6 = pTVar3;
   }
;
   embree::ConditionSys::~ConditionSys((ConditionSys*)( this + 0x38 ));
   embree::MutexSys::~MutexSys((MutexSys*)( this + 0x30 ));
   pvVar5 = *(void**)( this + 0x18 );
   if (pvVar5 != (void*)0x0) {
      operator_delete(pvVar5, *(long*)( this + 0x28 ) - (long)pvVar5);
      return;
   }

   return;
}
/* embree::TaskScheduler::ThreadPool::add(embree::Ref<embree::TaskScheduler> const&) */void embree::TaskScheduler::ThreadPool::add(ThreadPool *this, Ref *param_1) {
   long *plVar1;
   _List_node_base *p_Var2;
   embree::MutexSys::lock();
   p_Var2 = (_List_node_base*)operator_new(0x18);
   plVar1 = *(long**)param_1;
   *(long**)( p_Var2 + 0x10 ) = plVar1;
   if (plVar1 != (long*)0x0) {
      if (*(code**)( *plVar1 + 0x10 ) == RefCount::refInc) {
         LOCK();
         plVar1[1] = plVar1[1] + 1;
         UNLOCK();
      }
 else {
         ( **(code**)( *plVar1 + 0x10 ) )();
      }

   }

   std::__detail::_List_node_base::_M_hook(p_Var2);
   *(long*)( this + 0x50 ) = *(long*)( this + 0x50 ) + 1;
   embree::MutexSys::unlock();
   embree::ConditionSys::notify_all();
   return;
}
/* embree::TaskScheduler::ThreadPool::remove(embree::Ref<embree::TaskScheduler> const&) */void embree::TaskScheduler::ThreadPool::remove(ThreadPool *this, Ref *param_1) {
   long *plVar1;
   long *plVar2;
   void *pvVar3;
   ThreadPool *pTVar4;
   embree::MutexSys::lock();
   pTVar4 = *(ThreadPool**)( this + 0x40 );
   if (pTVar4 != this + 0x40) {
      do {
         if (*(long*)param_1 == *(long*)( pTVar4 + 0x10 )) {
            *(long*)( this + 0x50 ) = *(long*)( this + 0x50 ) + -1;
            std::__detail::_List_node_base::_M_unhook();
            plVar2 = *(long**)( pTVar4 + 0x10 );
            if (plVar2 != (long*)0x0) {
               if (*(code**)( *plVar2 + 0x18 ) == RefCount::refDec) {
                  LOCK();
                  plVar1 = plVar2 + 1;
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     if (*(code**)( *plVar2 + 8 ) == ~TaskScheduler) {
                        *plVar2 = (long)&PTR__TaskScheduler_00101f78;
                        embree::ConditionSys::~ConditionSys((ConditionSys*)( plVar2 + 9 ));
                        embree::MutexSys::~MutexSys((MutexSys*)( plVar2 + 8 ));
                        pvVar3 = (void*)plVar2[2];
                        if (pvVar3 != (void*)0x0) {
                           operator_delete(pvVar3, plVar2[4] - (long)pvVar3);
                        }

                        embree::alignedFree(plVar2);
                     }
 else {
                        ( **(code**)( *plVar2 + 8 ) )(plVar2);
                     }

                  }

               }
 else {
                  ( **(code**)( *plVar2 + 0x18 ) )(plVar2);
               }

            }

            operator_delete(pTVar4, 0x18);
            break;
         }

         pTVar4 = *(ThreadPool**)pTVar4;
      }
 while ( pTVar4 != this + 0x40 );
   }

   embree::MutexSys::unlock();
   return;
}
/* embree::TaskScheduler::threadID() */undefined8 embree::TaskScheduler::threadID(void) {
   undefined8 uVar1;
   long *in_FS_OFFSET;
   uVar1 = 0;
   if ((undefined8*)*in_FS_OFFSET != (undefined8*)0x0) {
      uVar1 = *(undefined8*)*in_FS_OFFSET;
   }

   return uVar1;
}
/* embree::TaskScheduler::threadIndex() */undefined8 embree::TaskScheduler::threadIndex(void) {
   undefined8 uVar1;
   long *in_FS_OFFSET;
   uVar1 = 0;
   if ((undefined8*)*in_FS_OFFSET != (undefined8*)0x0) {
      uVar1 = *(undefined8*)*in_FS_OFFSET;
   }

   return uVar1;
}
/* embree::TaskScheduler::threadCount() */undefined8 embree::TaskScheduler::threadCount(void) {
   return *threadPool;
}
/* embree::TaskScheduler::destroy() */void embree::TaskScheduler::destroy(void) {
   ThreadPool *pTVar1;
   pTVar1 = threadPool;
   if (threadPool != (ThreadPool*)0x0) {
      ThreadPool::~ThreadPool(threadPool);
      operator_delete(pTVar1, 0x58);
   }

   threadPool = (ThreadPool*)0x0;
   return;
}
/* embree::TaskScheduler::allocThreadIndex() */long embree::TaskScheduler::allocThreadIndex(TaskScheduler *this) {
   TaskScheduler *pTVar1;
   long lVar2;
   LOCK();
   pTVar1 = this + 0x28;
   lVar2 = *(long*)pTVar1;
   *(long*)pTVar1 = *(long*)pTVar1 + 1;
   UNLOCK();
   return lVar2;
}
/* embree::TaskScheduler::reset() */TaskScheduler embree::TaskScheduler::reset(TaskScheduler *this) {
   TaskScheduler TVar1;
   LOCK();
   TVar1 = this[0x38];
   this[0x38] = (TaskScheduler)0x0;
   UNLOCK();
   return TVar1;
}
/* embree::TaskScheduler::wait_for_threads(unsigned long) */void embree::TaskScheduler::wait_for_threads(TaskScheduler *this, ulong param_1) {
   do {} while ( *(ulong*)( this + 0x28 ) < param_1 - 1 );
   return;
}
/* embree::TaskScheduler::thread() */undefined8 embree::TaskScheduler::thread(void) {
   undefined8 *in_FS_OFFSET;
   return *in_FS_OFFSET;
}
/* embree::TaskScheduler::swapThread(embree::TaskScheduler::Thread*) */undefined8 embree::TaskScheduler::swapThread(Thread *param_1) {
   undefined8 uVar1;
   undefined8 *in_FS_OFFSET;
   uVar1 = *in_FS_OFFSET;
   *in_FS_OFFSET = param_1;
   return uVar1;
}
/* embree::TaskScheduler::wait() */void embree::TaskScheduler::wait(void) {
   Thread *pTVar1;
   Thread *pTVar2;
   long lVar3;
   Thread *pTVar4;
   undefined8 *in_FS_OFFSET;
   pTVar2 = (Thread*)*in_FS_OFFSET;
   pTVar1 = pTVar2 + 0x40080;
   pTVar4 = pTVar2;
   while (( ( pTVar4 != (Thread*)0x0 && ( *(long*)pTVar1 != 0 ) ) && ( *(Thread**)( pTVar2 + 0xc0100 ) != pTVar2 + ( *(long*)pTVar1 + -1 ) * 0x40 + 0x40 ) )) {
      lVar3 = *(long*)pTVar1;
      Task::run_internal((Task*)( pTVar2 + ( *(long*)pTVar1 + -1 ) * 0x40 + 0x40 ), pTVar2);
      if (lVar3 != *(long*)pTVar1) {
         /* WARNING: Subroutine does not return */
         abort();
      }

      LOCK();
      *(long*)pTVar1 = *(long*)pTVar1 + -1;
      UNLOCK();
      if (*(long*)( pTVar2 + *(long*)pTVar1 * 0x40 + 0x68 ) != -1) {
         *(undefined8*)( pTVar2 + 0xc00c0 ) = *(undefined8*)( pTVar2 + *(long*)pTVar1 * 0x40 + 0x68 );
      }

      if (*(ulong*)pTVar1 <= *(ulong*)( pTVar2 + 0x40040 )) {
         LOCK();
         *(long*)( pTVar2 + 0x40040 ) = *(long*)pTVar1;
         UNLOCK();
      }

      pTVar4 = *(Thread**)pTVar1;
   }
;
   return;
}
/* embree::TaskScheduler::thread_loop(unsigned long) */void embree::TaskScheduler::thread_loop(TaskScheduler *this, ulong param_1) {
   long *plVar1;
   TaskScheduler *pTVar2;
   undefined8 uVar3;
   ulong uVar4;
   long lVar5;
   long lVar6;
   ulong uVar7;
   long *plVar8;
   void *pvVar9;
   char cVar10;
   Thread *pTVar11;
   TaskQueue *pTVar12;
   TaskQueue *pTVar13;
   long lVar14;
   ulong uVar15;
   ulong uVar16;
   ulong uVar17;
   undefined8 *in_FS_OFFSET;
   pTVar11 = (Thread*)embree::alignedMalloc(0xc0140, 0x40);
   if (this != (TaskScheduler*)0x0) {
      if (*(code**)( *(long*)this + 0x10 ) == RefCount::refInc) {
         LOCK();
         *(long*)( this + 8 ) = *(long*)( this + 8 ) + 1;
         UNLOCK();
      }
 else {
         ( **(code**)( *(long*)this + 0x10 ) )(this);
      }

   }

   *(ulong*)pTVar11 = param_1;
   pTVar12 = (TaskQueue*)( pTVar11 + 0x40 );
   do {
      *(undefined4*)pTVar12 = 0;
      pTVar13 = pTVar12 + 0x80;
      *(undefined4*)( pTVar12 + 0x40 ) = 0;
      pTVar12 = pTVar13;
   }
 while ( (TaskQueue*)( pTVar11 + 0x40040 ) != pTVar13 );
   *(undefined8*)( pTVar11 + 0x40040 ) = 0;
   *(undefined8*)( pTVar11 + 0x40080 ) = 0;
   *(undefined8*)( pTVar11 + 0xc00c0 ) = 0;
   *(undefined8*)( pTVar11 + 0xc0100 ) = 0;
   *(TaskScheduler**)( pTVar11 + 0xc0108 ) = this;
   if (this != (TaskScheduler*)0x0) {
      if (*(code**)( *(long*)this + 0x10 ) == RefCount::refInc) {
         LOCK();
         *(long*)( this + 8 ) = *(long*)( this + 8 ) + 1;
         UNLOCK();
      }
 else {
         ( **(code**)( *(long*)this + 0x10 ) )(this);
      }

      if (*(code**)( *(long*)this + 0x18 ) == RefCount::refDec) {
         LOCK();
         pTVar2 = this + 8;
         *(long*)pTVar2 = *(long*)pTVar2 + -1;
         UNLOCK();
         if (*(long*)pTVar2 == 0) {
            ( **(code**)( *(long*)this + 8 ) )(this);
         }

      }
 else {
         ( **(code**)( *(long*)this + 0x18 ) )(this);
      }

   }

   LOCK();
   *(Thread**)( *(long*)( this + 0x10 ) + param_1 * 8 ) = pTVar11;
   UNLOCK();
   uVar3 = *in_FS_OFFSET;
   pTVar2 = this + 0x30;
   *in_FS_OFFSET = pTVar11;
   LAB_00100b70:if (*(long*)pTVar2 == 0) {
      LOCK();
      *(undefined8*)( *(long*)( this + 0x10 ) + param_1 * 8 ) = 0;
      UNLOCK();
      *in_FS_OFFSET = uVar3;
      LOCK();
      *(long*)( this + 0x28 ) = *(long*)( this + 0x28 ) + -1;
      UNLOCK();
      while (*(long*)( this + 0x28 ) != 0) {
         embree::yield();
      }
;
      if (pTVar11 != (Thread*)0x0) {
         plVar8 = *(long**)( pTVar11 + 0xc0108 );
         if (plVar8 != (long*)0x0) {
            if (*(code**)( *plVar8 + 0x18 ) == RefCount::refDec) {
               LOCK();
               plVar1 = plVar8 + 1;
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  if (*(code**)( *plVar8 + 8 ) == ~TaskScheduler) {
                     *plVar8 = (long)&PTR__TaskScheduler_00101f78;
                     embree::ConditionSys::~ConditionSys((ConditionSys*)( plVar8 + 9 ));
                     embree::MutexSys::~MutexSys((MutexSys*)( plVar8 + 8 ));
                     pvVar9 = (void*)plVar8[2];
                     if (pvVar9 != (void*)0x0) {
                        operator_delete(pvVar9, plVar8[4] - (long)pvVar9);
                     }

                     embree::alignedFree(plVar8);
                  }
 else {
                     ( **(code**)( *plVar8 + 8 ) )(plVar8);
                  }

               }

            }
 else {
               ( **(code**)( *plVar8 + 0x18 ) )(plVar8);
            }

         }

         embree::alignedFree(pTVar11);
         return;
      }

      return;
   }

   do {
      uVar16 = 0;
      uVar4 = *(ulong*)( *(long*)( pTVar11 + 0xc0108 ) + 0x28 );
      do {
         if (*(long*)pTVar2 == 0) goto LAB_00100b70;
         lVar5 = *(long*)pTVar11;
         lVar6 = *(long*)( pTVar11 + 0xc0108 );
         uVar17 = lVar5 + 1;
         uVar7 = *(ulong*)( lVar6 + 0x28 );
         if (1 < uVar7) {
            LAB_00100bc8:lVar14 = 0x20;
            do {
               lVar14 = lVar14 + -2;
            }
 while ( lVar14 != 0 );
            uVar15 = uVar17 - uVar7;
            if (uVar17 < uVar7) {
               uVar15 = uVar17;
            }

            lVar14 = *(long*)( *(long*)( lVar6 + 0x10 ) + uVar15 * 8 );
            if (lVar14 == 0) goto LAB_00100c01;
            cVar10 = TaskQueue::steal((TaskQueue*)( lVar14 + 0x40 ), pTVar11);
            if (cVar10 == '\0') goto LAB_00100c01;
            LOCK();
            *(long*)pTVar2 = *(long*)pTVar2 + 1;
            UNLOCK();
            do {
               cVar10 = TaskQueue::execute_local_internal((TaskQueue*)( pTVar11 + 0x40 ), pTVar11, (Task*)0x0);
            }
 while ( cVar10 != '\0' );
            LOCK();
            *(long*)pTVar2 = *(long*)pTVar2 + -1;
            UNLOCK();
            uVar16 = uVar4;
            goto LAB_00100c12;
         }

         LAB_00100c0a:uVar16 = uVar16 + uVar4;
         LAB_00100c12:;
      }
 while ( uVar16 < 0x400 );
      embree::yield();
   }
 while ( true );
   LAB_00100c01:uVar17 = uVar17 + 1;
   if (uVar17 == lVar5 + uVar7) goto LAB_00100c0a;
   goto LAB_00100bc8;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* embree::TaskScheduler::ThreadPool::thread_loop(unsigned long) */void embree::TaskScheduler::ThreadPool::thread_loop(ThreadPool *this, ulong param_1) {
   ThreadPool *pTVar1;
   TaskScheduler *pTVar2;
   ulong uVar3;
   long lVar4;
   long *plVar5;
   void *pvVar6;
   TaskScheduler *this_00;
   pTVar1 = this + 8;
   LAB_00100dac:do {
      uVar3 = *(ulong*)pTVar1;
      while (true) {
         if (uVar3 <= param_1) {
            return;
         }

         embree::MutexSys::lock();
         while (( uVar3 = _DAT_00000028 ),param_1 < *(ulong*)pTVar1 && ( *(ThreadPool**)( this + 0x40 ) == this + 0x40 )) {
            embree::ConditionSys::wait((MutexSys*)( this + 0x38 ));
         }
;
         if (*(ulong*)pTVar1 <= param_1) {
            embree::MutexSys::unlock();
            return;
         }

         lVar4 = *(long*)( this + 0x40 );
         plVar5 = *(long**)( lVar4 + 0x10 );
         if (plVar5 == (long*)0x0) {
            LOCK();
            _DAT_00000028 = _DAT_00000028 + 1;
            UNLOCK();
            embree::MutexSys::unlock();
            TaskScheduler::thread_loop((TaskScheduler*)0x0, uVar3);
            goto LAB_00100dac;
         }

         if (*(code**)( *plVar5 + 0x10 ) == RefCount::refInc) {
            LOCK();
            plVar5[1] = plVar5[1] + 1;
            UNLOCK();
            this_00 = *(TaskScheduler**)( lVar4 + 0x10 );
         }
 else {
            ( **(code**)( *plVar5 + 0x10 ) )();
            this_00 = *(TaskScheduler**)( lVar4 + 0x10 );
         }

         LOCK();
         pTVar2 = this_00 + 0x28;
         uVar3 = *(ulong*)pTVar2;
         *(ulong*)pTVar2 = *(ulong*)pTVar2 + 1;
         UNLOCK();
         embree::MutexSys::unlock();
         TaskScheduler::thread_loop(this_00, uVar3);
         if (this_00 == (TaskScheduler*)0x0) goto LAB_00100dac;
         if (*(code**)( *(long*)this_00 + 0x18 ) != RefCount::refDec) {
            ( **(code**)( *(long*)this_00 + 0x18 ) )(this_00);
            goto LAB_00100dac;
         }

         LOCK();
         pTVar2 = this_00 + 8;
         *(long*)pTVar2 = *(long*)pTVar2 + -1;
         UNLOCK();
         if (*(long*)pTVar2 != 0) goto LAB_00100dac;
         if (*(code**)( *(long*)this_00 + 8 ) != ~TaskScheduler) break;
         *(undefined***)this_00 = &PTR__TaskScheduler_00101f78;
         embree::ConditionSys::~ConditionSys((ConditionSys*)( this_00 + 0x48 ));
         embree::MutexSys::~MutexSys((MutexSys*)( this_00 + 0x40 ));
         pvVar6 = *(void**)( this_00 + 0x10 );
         if (pvVar6 != (void*)0x0) {
            operator_delete(pvVar6, *(long*)( this_00 + 0x20 ) - (long)pvVar6);
         }

         embree::alignedFree(this_00);
         uVar3 = *(ulong*)pTVar1;
      }
;
      ( **(code**)( *(long*)this_00 + 8 ) )(this_00);
   }
 while ( true );
}
/* embree::threadPoolFunction(std::pair<embree::TaskScheduler::ThreadPool*, unsigned long>*) */void embree::threadPoolFunction(pair *param_1) {
   ThreadPool *this;
   ulong uVar1;
   this * (ThreadPool**)param_1;
   uVar1 = *(ulong*)( param_1 + 8 );
   if (param_1 != (pair*)0x0) {
      operator_delete(param_1, 0x10);
   }

   TaskScheduler::ThreadPool::thread_loop(this, uVar1);
   return;
}
/* embree::TaskScheduler::join() */void embree::TaskScheduler::join(TaskScheduler *this) {
   TaskScheduler *pTVar1;
   ulong uVar2;
   embree::MutexSys::lock();
   LOCK();
   pTVar1 = this + 0x28;
   uVar2 = *(ulong*)pTVar1;
   *(ulong*)pTVar1 = *(ulong*)pTVar1 + 1;
   UNLOCK();
   while (this[0x38] == (TaskScheduler)0x0) {
      embree::ConditionSys::wait((MutexSys*)( this + 0x48 ));
   }
;
   embree::MutexSys::unlock();
   thread_loop(this, uVar2);
   return;
}
/* embree::TaskScheduler::steal_from_other_threads(embree::TaskScheduler::Thread&) */undefined8 embree::TaskScheduler::steal_from_other_threads(TaskScheduler *this, Thread *param_1) {
   long lVar1;
   ulong uVar2;
   long lVar3;
   ulong uVar4;
   undefined8 uVar5;
   ulong uVar6;
   lVar1 = *(long*)param_1;
   uVar6 = lVar1 + 1;
   uVar2 = *(ulong*)( this + 0x28 );
   if (1 < uVar2) {
      do {
         lVar3 = 0x20;
         do {
            lVar3 = lVar3 + -2;
         }
 while ( lVar3 != 0 );
         uVar4 = uVar6 - uVar2;
         if (uVar6 < uVar2) {
            uVar4 = uVar6;
         }

         lVar3 = *(long*)( *(long*)( this + 0x10 ) + uVar4 * 8 );
         if (( lVar3 != 0 ) && ( uVar5 = TaskQueue::steal((TaskQueue*)( lVar3 + 0x40 ), param_1) ),(char)uVar5 != '\0') {
            return uVar5;
         }

         uVar6 = uVar6 + 1;
      }
 while ( uVar6 != lVar1 + uVar2 );
   }

   return 0;
}
/* embree::TaskScheduler::addScheduler(embree::Ref<embree::TaskScheduler> const&) */void embree::TaskScheduler::addScheduler(Ref *param_1) {
   long *plVar1;
   long lVar2;
   _List_node_base *p_Var3;
   lVar2 = threadPool;
   embree::MutexSys::lock();
   p_Var3 = (_List_node_base*)operator_new(0x18);
   plVar1 = *(long**)param_1;
   *(long**)( p_Var3 + 0x10 ) = plVar1;
   if (plVar1 != (long*)0x0) {
      if (*(code**)( *plVar1 + 0x10 ) == RefCount::refInc) {
         LOCK();
         plVar1[1] = plVar1[1] + 1;
         UNLOCK();
      }
 else {
         ( **(code**)( *plVar1 + 0x10 ) )();
      }

   }

   std::__detail::_List_node_base::_M_hook(p_Var3);
   *(long*)( lVar2 + 0x50 ) = *(long*)( lVar2 + 0x50 ) + 1;
   embree::MutexSys::unlock();
   embree::ConditionSys::notify_all();
   return;
}
/* embree::TaskScheduler::removeScheduler(embree::Ref<embree::TaskScheduler> const&) */void embree::TaskScheduler::removeScheduler(Ref *param_1) {
   long *plVar1;
   long *plVar2;
   void *pvVar3;
   long lVar4;
   long *plVar5;
   lVar4 = threadPool;
   embree::MutexSys::lock();
   plVar5 = *(long**)( lVar4 + 0x40 );
   if (plVar5 != (long*)( lVar4 + 0x40 )) {
      do {
         if (*(long*)param_1 == plVar5[2]) {
            *(long*)( lVar4 + 0x50 ) = *(long*)( lVar4 + 0x50 ) + -1;
            std::__detail::_List_node_base::_M_unhook();
            plVar2 = (long*)plVar5[2];
            if (plVar2 != (long*)0x0) {
               if (*(code**)( *plVar2 + 0x18 ) == RefCount::refDec) {
                  LOCK();
                  plVar1 = plVar2 + 1;
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     if (*(code**)( *plVar2 + 8 ) == ~TaskScheduler) {
                        *plVar2 = (long)&PTR__TaskScheduler_00101f78;
                        embree::ConditionSys::~ConditionSys((ConditionSys*)( plVar2 + 9 ));
                        embree::MutexSys::~MutexSys((MutexSys*)( plVar2 + 8 ));
                        pvVar3 = (void*)plVar2[2];
                        if (pvVar3 != (void*)0x0) {
                           operator_delete(pvVar3, plVar2[4] - (long)pvVar3);
                        }

                        embree::alignedFree(plVar2);
                     }
 else {
                        ( **(code**)( *plVar2 + 8 ) )(plVar2);
                     }

                  }

               }
 else {
                  ( **(code**)( *plVar2 + 0x18 ) )(plVar2);
               }

            }

            operator_delete(plVar5, 0x18);
            break;
         }

         plVar5 = (long*)*plVar5;
      }
 while ( plVar5 != (long*)( lVar4 + 0x40 ) );
   }

   embree::MutexSys::unlock();
   return;
}
/* embree::TaskScheduler::TaskScheduler() */void embree::TaskScheduler::TaskScheduler(TaskScheduler *this) {
   long lVar1;
   ulong uVar2;
   long lVar3;
   ulong uVar4;
   long lVar5;
   *(undefined***)this = &PTR__TaskScheduler_00101f78;
   for (int i = 0; i < 6; i++) {
      *(undefined8*)( this + ( 8*i + 8 ) ) = 0;
   }

   this[0x38] = (TaskScheduler)0x0;
   embree::MutexSys::MutexSys((MutexSys*)( this + 0x40 ));
   embree::ConditionSys::ConditionSys((ConditionSys*)( this + 0x48 ));
   uVar4 = *threadPool * 2;
   lVar1 = *(long*)( this + 0x18 );
   lVar3 = *(long*)( this + 0x10 );
   uVar2 = lVar1 - lVar3 >> 3;
   if (uVar2 < uVar4) {
      std::vector<embree::atomic<embree::TaskScheduler::Thread*>,std::allocator<embree::atomic<embree::TaskScheduler::Thread*>>>::_M_default_append(( ulong )(this + 0x10));
      lVar5 = *(long*)( this + 0x18 );
      lVar3 = *(long*)( this + 0x10 );
   }
 else {
      lVar5 = lVar1;
      if (( uVar4 < uVar2 ) && ( lVar5 = lVar1 != lVar5 )) {
         *(long*)( this + 0x18 ) = lVar5;
      }

   }

   uVar4 = 0;
   if (lVar5 != lVar3) {
      do {
         LOCK();
         *(undefined8*)( lVar3 + uVar4 * 8 ) = 0;
         UNLOCK();
         lVar3 = *(long*)( this + 0x10 );
         uVar4 = uVar4 + 1;
      }
 while ( uVar4 < ( ulong )(*(long*)( this + 0x18 ) - lVar3 >> 3) );
   }

   return;
}
/* embree::TaskScheduler::ThreadPool::setNumThreads(unsigned long, bool) */void embree::TaskScheduler::ThreadPool::setNumThreads(ThreadPool *this, ulong param_1, bool param_2) {
   ThreadPool *pTVar1;
   ThreadPool TVar2;
   uint uVar3;
   undefined8 *puVar4;
   ulong uVar5;
   ulong uVar6;
   ulong uVar7;
   long in_FS_OFFSET;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   embree::MutexSys::lock();
   if (param_1 == 0xffffffffffffffff) {
      uVar3 = embree::getNumberOfLogicalThreads();
      param_1 = (ulong)uVar3;
   }

   LOCK();
   *(ulong*)this = param_1;
   UNLOCK();
   if (( param_2 ) || ( this[0x11] != (ThreadPool)0x0 )) {
      LOCK();
      this[0x11] = (ThreadPool)0x1;
      UNLOCK();
      pTVar1 = this + 8;
      uVar7 = *(ulong*)( this + 8 );
      embree::MutexSys::lock();
      LOCK();
      *(ulong*)pTVar1 = param_1;
      UNLOCK();
      embree::MutexSys::unlock();
      embree::ConditionSys::notify_all();
      for (uVar6 = uVar7; uVar6 < *(ulong*)this; uVar6 = uVar6 + 1) {
         if (uVar6 != 0) {
            puVar4 = (undefined8*)operator_new(0x10);
            TVar2 = this[0x10];
            *puVar4 = this;
            puVar4[1] = uVar6;
            uVar5 = 0xffffffffffffffff;
            if (TVar2 != (ThreadPool)0x0) {
               uVar5 = uVar6;
            }

            local_48 = embree::createThread(threadPoolFunction, puVar4, 0x400000, uVar5);
            puVar4 = *(undefined8**)( this + 0x20 );
            if (puVar4 == *(undefined8**)( this + 0x28 )) {
               std::vector<embree::opaque_thread_t*,std::allocator<embree::opaque_thread_t*>>::_M_realloc_insert<embree::opaque_thread_t*>((vector<embree::opaque_thread_t*,std::allocator<embree::opaque_thread_t*>>*)( this + 0x18 ), puVar4, &local_48);
            }
 else {
               *puVar4 = local_48;
               *(long*)( this + 0x20 ) = *(long*)( this + 0x20 ) + 8;
            }

         }

      }

      while (uVar7 = uVar7 - 1,(long)*(ulong*)pTVar1 <= (long)uVar7) {
         while (uVar7 != 0) {
            uVar7 = uVar7 - 1;
            embree::join(*(opaque_thread_t**)( *(long*)( this + 0x20 ) + -8 ));
            *(long*)( this + 0x20 ) = *(long*)( this + 0x20 ) + -8;
            if ((long)uVar7 < (long)*(ulong*)pTVar1) goto LAB_00101461;
         }
;
      }
;
   }

   LAB_00101461:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   embree::MutexSys::unlock();
   return;
}
/* embree::TaskScheduler::ThreadPool::startThreads() */void embree::TaskScheduler::ThreadPool::startThreads(ThreadPool *this) {
   if (this[0x11] != (ThreadPool)0x0) {
      return;
   }

   setNumThreads(this, *(ulong*)this, true);
   return;
}
/* embree::TaskScheduler::create(unsigned long, bool, bool) */void embree::TaskScheduler::create(ulong param_1, bool param_2, bool param_3) {
   ThreadPool *this;
   this =
   threadPool;
   if (threadPool == (ThreadPool*)0x0) {
      this(ThreadPool * operator_new(0x58));
      *(undefined8*)this = 0;
      *(undefined8*)( this + 8 ) = 0;
      this[0x10] = (ThreadPool)param_2;
      this[0x11] = (ThreadPool)0x0;
      for (int i = 0; i < 3; i++) {
         *(undefined8*)( this + ( 8*i + 24 ) ) = 0;
      }

      embree::MutexSys::MutexSys((MutexSys*)( this + 0x30 ));
      embree::ConditionSys::ConditionSys((ConditionSys*)( this + 0x38 ));
      threadPool = this;
      *(ThreadPool**)( this + 0x48 ) = this + 0x40;
      *(ThreadPool**)( this + 0x40 ) = this + 0x40;
      *(undefined8*)( this + 0x50 ) = 0;
   }

   ThreadPool::setNumThreads(this, param_1, param_3);
   return;
}
/* embree::TaskScheduler::startThreads() */void embree::TaskScheduler::startThreads(void) {
   if (threadPool[0x11] != (ThreadPool)0x0) {
      return;
   }

   ThreadPool::setNumThreads(threadPool, *(ulong*)threadPool, true);
   return;
}
/* embree::TaskScheduler::instance() */long embree::TaskScheduler::instance(void) {
   TaskScheduler *pTVar1;
   void *pvVar2;
   long lVar3;
   TaskScheduler *pTVar4;
   long *in_FS_OFFSET;
   TaskScheduler *local_28;
   long local_20;
   local_20 = in_FS_OFFSET[5];
   lVar3 = *in_FS_OFFSET;
   if (lVar3 == 0) {
      embree::MutexSys::lock();
      pTVar4 = (TaskScheduler*)embree::alignedMalloc(0x50, 0x40);
      TaskScheduler(pTVar4);
      *in_FS_OFFSET = (long)pTVar4;
      if (pTVar4 != (TaskScheduler*)0x0) {
         LOCK();
         *(long*)( pTVar4 + 8 ) = *(long*)( pTVar4 + 8 ) + 1;
         UNLOCK();
      }

      local_28 = pTVar4;
      if (g_instance_vector._8_8_ == g_instance_vector._16_8_) {
         std::vector<embree::Ref<embree::TaskScheduler>,std::allocator<embree::Ref<embree::TaskScheduler>>>::_M_realloc_insert<embree::Ref<embree::TaskScheduler>>((vector<embree::Ref<embree::TaskScheduler>,std::allocator<embree::Ref<embree::TaskScheduler>>>*)g_instance_vector, g_instance_vector._8_8_, &local_28);
         pTVar4 = local_28;
         if (local_28 != (TaskScheduler*)0x0) {
            if (*(code**)( *(long*)local_28 + 0x18 ) == RefCount::refDec) {
               LOCK();
               pTVar1 = local_28 + 8;
               *(long*)pTVar1 = *(long*)pTVar1 + -1;
               UNLOCK();
               if (*(long*)pTVar1 == 0) {
                  if (*(code**)( *(long*)local_28 + 8 ) == ~TaskScheduler) {
                     *(undefined***)local_28 = &PTR__TaskScheduler_00101f78;
                     embree::ConditionSys::~ConditionSys((ConditionSys*)( local_28 + 0x48 ));
                     embree::MutexSys::~MutexSys((MutexSys*)( pTVar4 + 0x40 ));
                     pvVar2 = *(void**)( pTVar4 + 0x10 );
                     if (pvVar2 != (void*)0x0) {
                        operator_delete(pvVar2, *(long*)( pTVar4 + 0x20 ) - (long)pvVar2);
                     }

                     embree::alignedFree(pTVar4);
                  }
 else {
                     ( **(code**)( *(long*)local_28 + 8 ) )(local_28);
                  }

               }

            }
 else {
               ( **(code**)( *(long*)local_28 + 0x18 ) )(local_28);
            }

         }

      }
 else {
         *(TaskScheduler**)g_instance_vector._8_8_ = pTVar4;
         g_instance_vector._8_8_ = g_instance_vector._8_8_ + 8;
      }

      embree::MutexSys::unlock();
      lVar3 = *in_FS_OFFSET;
   }

   if (local_20 == in_FS_OFFSET[5]) {
      return lVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* embree::RefCount::refInc() */RefCount * __thiscall embree::RefCount::refInc(RefCount *this){
   LOCK();
   *(long*)( this + 8 ) = *(long*)( this + 8 ) + 1;
   UNLOCK();
   return this;
}
/* embree::RefCount::refDec() */void embree::RefCount::refDec(RefCount *this) {
   RefCount *pRVar1;
   LOCK();
   pRVar1 = this + 8;
   *(long*)pRVar1 = *(long*)pRVar1 + -1;
   UNLOCK();
   if (( this != (RefCount*)0x0 ) && ( *(long*)pRVar1 == 0 )) {
      /* WARNING: Could not recover jumptable at 0x00101799. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *(long*)this + 8 ) )();
      return;
   }

   return;
}
/* std::vector<embree::Ref<embree::TaskScheduler>, std::allocator<embree::Ref<embree::TaskScheduler>
   > >::~vector() */void std::vector<embree::Ref<embree::TaskScheduler>,std::allocator<embree::Ref<embree::TaskScheduler>>>::~vector(vector<embree::Ref<embree::TaskScheduler>,std::allocator<embree::Ref<embree::TaskScheduler>>> *this) {
   long *plVar1;
   undefined8 *puVar2;
   void *pvVar3;
   long *plVar4;
   undefined8 *puVar5;
   puVar2 = *(undefined8**)( this + 8 );
   puVar5 = *(undefined8**)this;
   if (puVar2 != puVar5) {
      do {
         while (plVar4 = (long*)*puVar5,plVar4 == (long*)0x0) {
            LAB_00101839:puVar5 = puVar5 + 1;
            if (puVar2 == puVar5) goto LAB_00101868;
         }
;
         if (*(code**)( *plVar4 + 0x18 ) == embree::RefCount::refDec) {
            LOCK();
            plVar1 = plVar4 + 1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               if (*(code**)( *plVar4 + 8 ) == embree::TaskScheduler::~TaskScheduler) {
                  *plVar4 = (long)&PTR__TaskScheduler_00101f78;
                  embree::ConditionSys::~ConditionSys((ConditionSys*)( plVar4 + 9 ));
                  embree::MutexSys::~MutexSys((MutexSys*)( plVar4 + 8 ));
                  pvVar3 = (void*)plVar4[2];
                  if (pvVar3 != (void*)0x0) {
                     operator_delete(pvVar3, plVar4[4] - (long)pvVar3);
                  }

                  embree::alignedFree(plVar4);
               }
 else {
                  ( **(code**)( *plVar4 + 8 ) )(plVar4);
               }

            }

            goto LAB_00101839;
         }

         puVar5 = puVar5 + 1;
         ( **(code**)( *plVar4 + 0x18 ) )(plVar4);
      }
 while ( puVar2 != puVar5 );
      LAB_00101868:puVar5 = *(undefined8**)this;
   }

   if (puVar5 == (undefined8*)0x0) {
      return;
   }

   operator_delete(puVar5, *(long*)( this + 0x10 ) - (long)puVar5);
   return;
}
/* embree::TaskScheduler::TaskQueue::execute_local_internal(embree::TaskScheduler::Thread&,
   embree::TaskScheduler::Task*) [clone .cold] */void embree::TaskScheduler::TaskQueue::execute_local_internal(Thread *param_1, Task *param_2) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::TaskScheduler::TaskQueue::execute_local(embree::TaskScheduler::Thread&,
   embree::TaskScheduler::Task*) [clone .cold] */void embree::TaskScheduler::TaskQueue::execute_local(Thread *param_1, Task *param_2) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::TaskScheduler::wait() [clone .cold] */void embree::TaskScheduler::wait(void) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* WARNING: Control flow encountered bad instruction data *//* std::vector<embree::atomic<embree::TaskScheduler::Thread*>,
   std::allocator<embree::atomic<embree::TaskScheduler::Thread*> > >::_M_default_append(unsigned
   long) */void std::vector<embree::atomic<embree::TaskScheduler::Thread*>,std::allocator<embree::atomic<embree::TaskScheduler::Thread*>>>::_M_default_append(ulong param_1) {
   undefined8 *puVar1;
   undefined8 *__src;
   long lVar2;
   ulong uVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   byte *pbVar6;
   void *__dest;
   undefined8 *in_RCX;
   undefined8 *puVar7;
   long lVar8;
   undefined1 *puVar9;
   ulong in_RSI;
   ulong uVar10;
   undefined8 *unaff_R12;
   ulong uVar11;
   size_t __n;
   void *unaff_R14;
   bool bVar12;
   bool bVar13;
   undefined1 auVar14[16];
   undefined1 auStack_38[8];
   if (in_RSI == 0) {
      return;
   }

   puVar4 = (undefined8*)auStack_38;
   puVar9 = auStack_38;
   puVar1 = *(undefined8**)( param_1 + 8 );
   __src = *(undefined8**)param_1;
   if (in_RSI <= ( ulong )(*(long*)( param_1 + 0x10 ) - (long)puVar1 >> 3)) {
      *(undefined8**)( param_1 + 8 ) = puVar1 + in_RSI;
      return;
   }

   uVar3 = (long)puVar1 - (long)__src >> 3;
   bVar12 = 0xfffffffffffffff - uVar3 < in_RSI;
   bVar13 = 0xfffffffffffffff - uVar3 == in_RSI;
   if (!bVar12) {
      uVar10 = in_RSI + uVar3;
      uVar11 = 0xfffffffffffffff;
      if (uVar10 < 0x1000000000000000) {
         uVar11 = uVar10;
      }

      if (( in_RSI <= uVar3 ) && ( uVar11 = 0xfffffffffffffff < uVar11 )) {
         uVar11 = 0xfffffffffffffff;
      }

      puVar4 = (undefined8*)operator_new(uVar11 * 8);
      if (__src != puVar1) {
         puVar5 = puVar4;
         puVar7 = __src;
         do {
            LOCK();
            *puVar5 = *puVar7;
            UNLOCK();
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
         }
 while ( (undefined8*)( ( (long)puVar1 - (long)__src ) + (long)puVar4 ) != puVar5 );
      }

      if (__src != (undefined8*)0x0) {
         operator_delete(__src, *(long*)( param_1 + 0x10 ) - (long)__src);
      }

      *(undefined8**)param_1 = puVar4;
      *(undefined8**)( param_1 + 8 ) = puVar4 + uVar10;
      *(undefined8**)( param_1 + 0x10 ) = puVar4 + uVar11;
      return;
   }

   auVar14 = std::__throw_length_error("vector::_M_default_append");
   pbVar6 = auVar14._8_8_;
   uVar3 = auVar14._0_8_;
   if (bVar12 || bVar13) {
      pbVar6 = (byte*)( ulong )(uint)(auVar14._8_4_ - (int)puVar1);
      if (__src != unaff_R12) goto LAB_00101a6e;
      if (0xfffffffffffffffe < uVar3) goto LAB_00101b00;
      uVar10 = 0xfffffffffffffff;
      if (uVar3 + 1 < 0x1000000000000000) {
         uVar10 = uVar3 + 1;
      }

      uVar10 = uVar10 << 3;
      puVar4 = (undefined8*)auStack_38;
   }
 else {
      puVar4 = (undefined8*)&stack0xffffffffffffffd8;
      if (*pbVar6 <= ( byte )(param_1 >> 8)) {
         /* WARNING: Bad instruction - Truncating control flow here */
         halt_baddata();
      }

      LAB_00101a6e:uVar10 = uVar3 * 2;
      puVar9 = (undefined1*)puVar4;
      if (uVar10 < uVar3) {
         LAB_00101b00:uVar10 = 0x7ffffffffffffff8;
         puVar4 = (undefined8*)puVar9;
      }
 else {
         if (uVar10 == 0) {
            lVar8 = 0;
            __dest = (void*)0x0;
            goto LAB_00101a89;
         }

         if (0xfffffffffffffff < uVar10) {
            uVar10 = 0xfffffffffffffff;
         }

         uVar10 = uVar10 * 8;
      }

   }

   puVar4[1] = in_RCX;
   *puVar4 = pbVar6;
   puVar4[-1] = 0x101b1b;
   __dest = operator_new(uVar10);
   pbVar6 = (byte*)*puVar4;
   in_RCX = (undefined8*)puVar4[1];
   lVar8 = uVar10 + (long)__dest;
   LAB_00101a89:*(undefined8*)( (long)__dest + (long)pbVar6 ) = *in_RCX;
   if (0 < (long)pbVar6) {
      *puVar4 = pbVar6;
      puVar4[-1] = 0x101aa4;
      memmove(__dest, __src, (size_t)pbVar6);
      pbVar6 = (byte*)*puVar4;
   }

   __n = (long)unaff_R12 - (long)unaff_R14;
   pbVar6 = pbVar6 + (long)__dest + 8;
   if (0 < (long)__n) {
      puVar4[-1] = 0x101ac3;
      pbVar6 = (byte*)memmove(pbVar6, unaff_R14, __n);
   }

   if (__src != (undefined8*)0x0) {
      lVar2 = puVar1[2];
      puVar4[-1] = 0x101add;
      operator_delete(__src, lVar2 - (long)__src);
   }

   *puVar1 = __dest;
   puVar1[1] = pbVar6 + __n;
   puVar1[2] = lVar8;
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* void std::vector<embree::opaque_thread_t*, std::allocator<embree::opaque_thread_t*>
   >::_M_realloc_insert<embree::opaque_thread_t*>(__gnu_cxx::__normal_iterator<embree::opaque_thread_t**,
   std::vector<embree::opaque_thread_t*, std::allocator<embree::opaque_thread_t*> > >,
   embree::opaque_thread_t*&&) */void std::vector<embree::opaque_thread_t*,std::allocator<embree::opaque_thread_t*>>::_M_realloc_insert<embree::opaque_thread_t*>(vector<embree::opaque_thread_t*,std::allocator<embree::opaque_thread_t*>> *this, void *param_2, undefined8 *param_3) {
   void *__src;
   ulong uVar1;
   void *pvVar2;
   void *__dest;
   size_t __n;
   long lVar3;
   ulong uVar4;
   size_t __n_00;
   pvVar2 = *(void**)( this + 8 );
   __src = *(void**)this;
   uVar1 = (long)pvVar2 - (long)__src >> 3;
   if (uVar1 == 0xfffffffffffffff) {
      std::__throw_length_error("vector::_M_realloc_insert");
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   __n = (long)param_2 - (long)__src;
   if (__src == pvVar2) {
      if (0xfffffffffffffffe < uVar1) goto LAB_00101b00;
      uVar4 = 0xfffffffffffffff;
      if (uVar1 + 1 < 0x1000000000000000) {
         uVar4 = uVar1 + 1;
      }

      uVar4 = uVar4 << 3;
   }
 else {
      uVar4 = uVar1 * 2;
      if (uVar4 < uVar1) {
         LAB_00101b00:uVar4 = 0x7ffffffffffffff8;
      }
 else {
         if (uVar4 == 0) {
            lVar3 = 0;
            __dest = (void*)0x0;
            goto LAB_00101a89;
         }

         if (0xfffffffffffffff < uVar4) {
            uVar4 = 0xfffffffffffffff;
         }

         uVar4 = uVar4 * 8;
      }

   }

   __dest = operator_new(uVar4);
   lVar3 = uVar4 + (long)__dest;
   LAB_00101a89:*(undefined8*)( (long)__dest + __n ) = *param_3;
   if (0 < (long)__n) {
      memmove(__dest, __src, __n);
   }

   __n_00 = (long)pvVar2 - (long)param_2;
   pvVar2 = (void*)( (long)__dest + __n + 8 );
   if (0 < (long)__n_00) {
      pvVar2 = memmove(pvVar2, param_2, __n_00);
   }

   if (__src != (void*)0x0) {
      operator_delete(__src, *(long*)( this + 0x10 ) - (long)__src);
   }

   *(void**)this = __dest;
   *(size_t*)( this + 8 ) = __n_00 + (long)pvVar2;
   *(long*)( this + 0x10 ) = lVar3;
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* void std::vector<embree::Ref<embree::TaskScheduler>,
   std::allocator<embree::Ref<embree::TaskScheduler> >
   >::_M_realloc_insert<embree::Ref<embree::TaskScheduler>
   >(__gnu_cxx::__normal_iterator<embree::Ref<embree::TaskScheduler>*,
   std::vector<embree::Ref<embree::TaskScheduler>, std::allocator<embree::Ref<embree::TaskScheduler>
   > > >, embree::Ref<embree::TaskScheduler>&&) */void std::vector<embree::Ref<embree::TaskScheduler>,std::allocator<embree::Ref<embree::TaskScheduler>>>::_M_realloc_insert<embree::Ref<embree::TaskScheduler>>(vector<embree::Ref<embree::TaskScheduler>,std::allocator<embree::Ref<embree::TaskScheduler>>> *this, long *param_2, undefined8 *param_3) {
   long *plVar1;
   long *plVar2;
   undefined8 uVar3;
   void *pvVar4;
   ulong uVar5;
   long *plVar6;
   ulong uVar7;
   long *plVar8;
   long *plVar9;
   long *plVar10;
   long *local_58;
   long local_48;
   plVar1 = *(long**)( this + 8 );
   plVar2 = *(long**)this;
   uVar5 = (long)plVar1 - (long)plVar2 >> 3;
   if (uVar5 == 0xfffffffffffffff) {
      std::__throw_length_error("vector::_M_realloc_insert");
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   plVar8 = plVar2;
   plVar9 = plVar2;
   if (plVar2 == plVar1) {
      uVar7 = uVar5 + 1;
      if (0xfffffffffffffffe < uVar5) goto LAB_00101dc0;
      if (0xfffffffffffffff < uVar7) {
         uVar7 = 0xfffffffffffffff;
      }

      uVar7 = uVar7 * 8;
      LAB_00101dca:plVar6 = (long*)operator_new(uVar7);
      local_48 = (long)plVar6 + uVar7;
      uVar3 = *param_3;
      *param_3 = 0;
      *(undefined8*)( (long)plVar6 + ( (long)param_2 - (long)plVar2 ) ) = uVar3;
      local_58 = plVar6;
      if (param_2 == plVar2) {
         plVar10 = plVar6 + 1;
         if (plVar2 == plVar1) {
            LAB_00101d80:if (plVar2 != (long*)0x0) {
               operator_delete(plVar2, *(long*)( this + 0x10 ) - (long)plVar2);
            }

            *(long**)( this + 8 ) = plVar10;
            *(long**)this = local_58;
            *(long*)( this + 0x10 ) = local_48;
            return;
         }

         goto LAB_00101c9b;
      }

   }
 else {
      uVar7 = uVar5 * 2;
      if (uVar7 < uVar5) {
         LAB_00101dc0:uVar7 = 0x7ffffffffffffff8;
         goto LAB_00101dca;
      }

      if (uVar7 != 0) {
         if (0xfffffffffffffff < uVar7) {
            uVar7 = 0xfffffffffffffff;
         }

         uVar7 = uVar7 * 8;
         goto LAB_00101dca;
      }

      uVar3 = *param_3;
      local_58 = (long*)0x0;
      *param_3 = 0;
      *(undefined8*)( (long)param_2 - (long)plVar2 ) = uVar3;
      local_48 = 0;
      plVar10 = (long*)0x8;
      plVar6 = local_58;
      if (param_2 == plVar2) goto LAB_00101c9b;
   }

   while (true) {
      plVar10 = (long*)*plVar8;
      *plVar6 = (long)plVar10;
      if (plVar10 != (long*)0x0) {
         if (*(code**)( *plVar10 + 0x10 ) == embree::RefCount::refInc) {
            LOCK();
            plVar10[1] = plVar10[1] + 1;
            UNLOCK();
         }
 else {
            ( **(code**)( *plVar10 + 0x10 ) )();
         }

      }

      if (plVar8 + 1 == param_2) break;
      plVar8 = plVar8 + 1;
      plVar6 = plVar6 + 1;
   }
;
   plVar10 = plVar6 + 2;
   if (plVar8 + 1 == plVar1) goto LAB_00101d55;
   LAB_00101c9b:do {
      while (true) {
         plVar6 = plVar10;
         plVar8 = (long*)*param_2;
         *plVar6 = (long)plVar8;
         if (plVar8 != (long*)0x0) break;
         LAB_00101c8e:param_2 = param_2 + 1;
         plVar10 = plVar6 + 1;
         if (param_2 == plVar1) goto LAB_00101cc8;
      }
;
      if (*(code**)( *plVar8 + 0x10 ) == embree::RefCount::refInc) {
         LOCK();
         plVar8[1] = plVar8[1] + 1;
         UNLOCK();
         goto LAB_00101c8e;
      }

      ( **(code**)( *plVar8 + 0x10 ) )();
      param_2 = param_2 + 1;
      plVar10 = plVar6 + 1;
   }
 while ( param_2 != plVar1 );
   LAB_00101cc8:plVar10 = plVar6 + 1;
   joined_r0x00101ccb:if (plVar9 != plVar1) {
      LAB_00101d55:do {
         plVar8 = (long*)*plVar9;
         if (plVar8 != (long*)0x0) {
            if (*(code**)( *plVar8 + 0x18 ) != embree::RefCount::refDec) goto code_r0x00101d6d;
            LOCK();
            plVar6 = plVar8 + 1;
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
               if (*(code**)( *plVar8 + 8 ) == embree::TaskScheduler::~TaskScheduler) {
                  *plVar8 = (long)&PTR__TaskScheduler_00101f78;
                  embree::ConditionSys::~ConditionSys((ConditionSys*)( plVar8 + 9 ));
                  embree::MutexSys::~MutexSys((MutexSys*)( plVar8 + 8 ));
                  pvVar4 = (void*)plVar8[2];
                  if (pvVar4 != (void*)0x0) {
                     operator_delete(pvVar4, plVar8[4] - (long)pvVar4);
                  }

                  embree::alignedFree(plVar8);
               }
 else {
                  ( **(code**)( *plVar8 + 8 ) )(plVar8);
               }

            }

         }

         plVar9 = plVar9 + 1;
         if (plVar9 == plVar1) break;
      }
 while ( true );
   }

   goto LAB_00101d80;
   code_r0x00101d6d:plVar9 = plVar9 + 1;
   ( **(code**)( *plVar8 + 0x18 ) )(plVar8);
   goto joined_r0x00101ccb;
}
/* embree::TaskScheduler::g_numThreads */void embree::TaskScheduler::_GLOBAL__sub_I_g_numThreads(void) {
   embree::MutexSys::MutexSys((MutexSys*)&g_mutex);
   __cxa_atexit(embree::MutexSys::~MutexSys, &g_mutex, &__dso_handle);
   g_instance_vector._0_8_ = 0;
   g_instance_vector._8_8_ = 0;
   g_instance_vector._16_8_ = 0;
   __cxa_atexit(std::vector<embree::Ref<embree::TaskScheduler>,std::allocator<embree::Ref<embree::TaskScheduler>>>::~vector, g_instance_vector, &__dso_handle);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* std::vector<embree::Ref<embree::TaskScheduler>, std::allocator<embree::Ref<embree::TaskScheduler>
   > >::~vector() */void std::vector<embree::Ref<embree::TaskScheduler>,std::allocator<embree::Ref<embree::TaskScheduler>>>::~vector(vector<embree::Ref<embree::TaskScheduler>,std::allocator<embree::Ref<embree::TaskScheduler>>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

