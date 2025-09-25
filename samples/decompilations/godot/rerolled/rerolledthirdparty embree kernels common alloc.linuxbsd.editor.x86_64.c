/* std::vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> >,
   std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> > > >::~vector() */void std::vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>::~vector(vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>> *this) {
   undefined8 *puVar1;
   MutexSys *this_00;
   undefined8 *puVar2;
   puVar1 = *(undefined8**)( this + 8 );
   puVar2 = *(undefined8**)this;
   if (puVar1 != puVar2) {
      do {
         while (this_00 = (MutexSys*)*puVar2,this_00 == (MutexSys*)0x0) {
            puVar2 = puVar2 + 1;
            if (puVar1 == puVar2) goto LAB_001000a1;
         }
;
         puVar2 = puVar2 + 1;
         embree::MutexSys::~MutexSys(this_00);
         embree::alignedFree(this_00);
      }
 while ( puVar1 != puVar2 );
      LAB_001000a1:puVar2 = *(undefined8**)this;
   }

   if (puVar2 == (undefined8*)0x0) {
      return;
   }

   operator_delete(puVar2, *(long*)( this + 0x10 ) - (long)puVar2);
   return;
}
/* embree::FastAllocator::malloc(unsigned long&, unsigned long, bool) [clone .constprop.0] */void embree::FastAllocator::malloc(ulong *param_1, ulong param_2, bool param_3) {
   ulong *puVar1;
   ulong *puVar2;
   long *plVar3;
   ulong uVar4;
   ulong uVar5;
   undefined8 *puVar6;
   ulong uVar7;
   ulong uVar8;
   ulong uVar9;
   void *pvVar10;
   long in_FS_OFFSET;
   bool local_41;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3) {
      LAB_00100138:uVar4 = embree::TaskScheduler::threadID();
      uVar7 = param_1[1];
      puVar1 = param_1 + ( uVar4 & uVar7 ) + 0xf;
      puVar2 = (ulong*)*puVar1;
      if (puVar2 != (ulong*)0x0) {
         puVar6 = (undefined8*)*param_1;
         if (puVar6 != (undefined8*)0x0) {
            puVar6 = puVar6 + 0xa9;
         }

         uVar9 = *(long*)param_2 + 0x3fU & 0xffffffffffffffc0;
         LOCK();
         uVar5 = *puVar2;
         *puVar2 = *puVar2 + uVar9;
         UNLOCK();
         if (uVar5 <= puVar2[2]) {
            uVar8 = puVar2[2] - uVar5;
            if (uVar9 < puVar2[2] - uVar5) {
               uVar8 = uVar9;
            }

            *(ulong*)param_2 = uVar8;
            if (( puVar6 != (undefined8*)0x0 ) && ( puVar2[1] < uVar8 + uVar5 )) {
               uVar9 = puVar2[1];
               if (puVar2[1] <= uVar5) {
                  uVar9 = uVar5;
               }

               ( **(code**)*puVar6 )(puVar6, ( uVar8 + uVar5 ) - uVar9, 1);
            }

            if ((long)puVar2 + uVar5 + 0x40 != 0) goto LAB_00100448;
         }

         if (*(char*)( (long)param_1 + 0x109 ) == '\0') goto LAB_00100d45;
      }

      if (0x1fffc0 < *(ulong*)param_2) goto LAB_00100d45;
      if (param_1[0x20] == 0) {
         embree::MutexSys::lock();
         if (puVar2 == (ulong*)*puVar1) {
            uVar9 = *(long*)param_2 + 0x3fU & 0xffffffffffffffc0;
            uVar5 = param_1[5];
            if (param_1[4] < param_1[5]) {
               uVar5 = param_1[4];
            }

            if (uVar9 < uVar5) {
               uVar9 = uVar5;
            }

            uVar5 = param_1[( uVar4 & uVar7 ) + 0x17];
            uVar8 = param_1[0x21];
            plVar3 = (long*)*param_1;
            if ((int)param_1[0x29] == 1) {
               if (uVar9 < 0x1fffc0) {
                  LAB_00100289:if (plVar3 != (long*)0x0) {
                     ( **(code**)( *plVar3 + 0x20 ) )(plVar3, uVar9 + 0x80, 0);
                  }

                  if ((char)uVar8 == '\0') {
                     puVar6 = (undefined8*)embree::alignedMalloc(uVar9 + 0x40, 0x40);
                  }
 else {
                     puVar6 = (undefined8*)( **(code**)( *plVar3 + 0x38 ) )(plVar3, uVar9 + 0x40, 0x40);
                  }

                  *puVar6 = 0;
                  puVar6[1] = uVar9;
                  puVar6[2] = uVar9;
                  LAB_001002dd:puVar6[4] = 0x40;
                  *(undefined4*)( puVar6 + 5 ) = 0;
                  puVar6[3] = uVar5;
                  *(undefined1*)( (long)puVar6 + 0x2c ) = 0;
               }
 else {
                  uVar9 = uVar9 + 0x103f & 0xfffffffffffff000;
                  if (plVar3 != (long*)0x0) {
                     ( **(code**)( *plVar3 + 0x20 ) )(plVar3, uVar9, 0);
                  }

                  puVar6 = (undefined8*)embree::os_malloc(uVar9, &local_41);
                  *puVar6 = 0;
                  puVar6[1] = uVar9 - 0x40;
                  puVar6[2] = uVar9 - 0x40;
                  puVar6[3] = uVar5;
                  puVar6[4] = 0;
                  *(undefined4*)( puVar6 + 5 ) = 1;
                  *(bool*)( (long)puVar6 + 0x2c ) = local_41;
               }

            }
 else {
               puVar6 = (undefined8*)0x0;
               if ((int)param_1[0x29] == 0) {
                  if (uVar9 != 0x3fffc0) goto LAB_00100289;
                  if (plVar3 != (long*)0x0) {
                     ( **(code**)( *plVar3 + 0x20 ) )(plVar3, 0x400040);
                  }

                  if ((char)uVar8 == '\0') {
                     puVar6 = (undefined8*)embree::alignedMalloc(0x400000, 0x40);
                  }
 else {
                     puVar6 = (undefined8*)( **(code**)( *plVar3 + 0x38 ) )(plVar3, 0x400000, 0x40);
                  }

                  pvVar10 = (void*)( (ulong)puVar6 & 0xffffffffffe00000 );
                  embree::os_advise(pvVar10, 0x200000);
                  embree::os_advise((void*)( (long)pvVar10 + 0x200000 ), 0x200000);
                  embree::os_advise((void*)( (long)pvVar10 + 0x400000 ), 0x200000);
                  *puVar6 = 0;
                  puVar6[1] = 0x3fffc0;
                  puVar6[2] = 0x3fffc0;
                  goto LAB_001002dd;
               }

            }

            LOCK();
            *puVar1 = (ulong)puVar6;
            UNLOCK();
            LOCK();
            param_1[( uVar4 & uVar7 ) + 0x17] = (ulong)puVar6;
            UNLOCK();
         }

         embree::MutexSys::unlock();
      }
 else {
         embree::MutexSys::lock();
         if (puVar2 == (ulong*)*puVar1) {
            if (param_1[0x20] == 0) {
               LOCK();
               puVar2 = param_1 + 0x22;
               uVar7 = *puVar2;
               *puVar2 = *puVar2 + 1;
               UNLOCK();
               uVar4 = 0x10;
               if (uVar7 + 1 < 0x11) {
                  uVar4 = uVar7 + 1;
               }

               uVar4 = param_1[4] << ( (byte)uVar4 & 0x3f );
               uVar7 = param_1[0x1f];
               if (param_1[5] < uVar4) {
                  uVar4 = param_1[5];
               }

               uVar5 = param_1[0x21];
               plVar3 = (long*)*param_1;
               if ((int)param_1[0x29] == 1) {
                  if (uVar4 < 0x1fffc0) {
                     LAB_00100639:if (plVar3 != (long*)0x0) {
                        ( **(code**)( *plVar3 + 0x20 ) )(plVar3, uVar4 + 0x80, 0);
                     }

                     if ((char)uVar5 == '\0') {
                        puVar6 = (undefined8*)embree::alignedMalloc(uVar4 + 0x40, 0x40);
                     }
 else {
                        puVar6 = (undefined8*)( **(code**)( *plVar3 + 0x38 ) )(plVar3, uVar4 + 0x40, 0x40);
                     }

                     *puVar6 = 0;
                     puVar6[1] = uVar4;
                     puVar6[2] = uVar4;
                     puVar6[3] = uVar7;
                     puVar6[4] = 0x40;
                     *(undefined4*)( puVar6 + 5 ) = 0;
                     *(undefined1*)( (long)puVar6 + 0x2c ) = 0;
                  }
 else {
                     uVar4 = uVar4 + 0x103f & 0xfffffffffffff000;
                     if (plVar3 != (long*)0x0) {
                        ( **(code**)( *plVar3 + 0x20 ) )(plVar3, uVar4, 0);
                     }

                     puVar6 = (undefined8*)embree::os_malloc(uVar4, &local_41);
                     *puVar6 = 0;
                     puVar6[1] = uVar4 - 0x40;
                     puVar6[2] = uVar4 - 0x40;
                     puVar6[3] = uVar7;
                     puVar6[4] = 0;
                     *(undefined4*)( puVar6 + 5 ) = 1;
                     *(bool*)( (long)puVar6 + 0x2c ) = local_41;
                  }

               }
 else {
                  puVar6 = (undefined8*)0x0;
                  if ((int)param_1[0x29] == 0) {
                     if (uVar4 != 0x3fffc0) goto LAB_00100639;
                     if (plVar3 != (long*)0x0) {
                        ( **(code**)( *plVar3 + 0x20 ) )(plVar3, 0x400040);
                     }

                     if ((char)uVar5 == '\0') {
                        puVar6 = (undefined8*)embree::alignedMalloc(0x400000, 0x40);
                     }
 else {
                        puVar6 = (undefined8*)( **(code**)( *plVar3 + 0x38 ) )(plVar3, 0x400000, 0x40);
                     }

                     pvVar10 = (void*)( (ulong)puVar6 & 0xffffffffffe00000 );
                     embree::os_advise(pvVar10, 0x200000);
                     embree::os_advise((void*)( (long)pvVar10 + 0x200000 ), 0x200000);
                     embree::os_advise((void*)( (long)pvVar10 + 0x400000 ), 0x200000);
                     *puVar6 = 0;
                     puVar6[1] = 0x3fffc0;
                     puVar6[2] = 0x3fffc0;
                     puVar6[3] = uVar7;
                     puVar6[4] = 0x40;
                     *(undefined4*)( puVar6 + 5 ) = 0;
                     *(undefined1*)( (long)puVar6 + 0x2c ) = 0;
                  }

               }

               LOCK();
               *puVar1 = (ulong)puVar6;
               UNLOCK();
               LOCK();
               param_1[0x1f] = (ulong)puVar6;
               UNLOCK();
            }
 else {
               uVar7 = *(ulong*)( param_1[0x20] + 0x18 );
               *(ulong*)( param_1[0x20] + 0x18 ) = param_1[0x1f];
               LOCK();
               param_1[0x1f] = param_1[0x20];
               UNLOCK();
               LOCK();
               *puVar1 = param_1[0x20];
               UNLOCK();
               LOCK();
               param_1[0x20] = uVar7;
               UNLOCK();
            }

         }

         embree::MutexSys::unlock();
      }

      goto LAB_00100138;
   }

   do {
      uVar4 = embree::TaskScheduler::threadID();
      uVar7 = param_1[1];
      puVar1 = param_1 + ( uVar4 & uVar7 ) + 0xf;
      puVar2 = (ulong*)*puVar1;
      if (puVar2 != (ulong*)0x0) {
         puVar6 = (undefined8*)*param_1;
         if (puVar6 != (undefined8*)0x0) {
            puVar6 = puVar6 + 0xa9;
         }

         uVar5 = *(long*)param_2 + 0x3fU & 0xffffffffffffffc0;
         if (*puVar2 + uVar5 <= puVar2[2]) {
            LOCK();
            uVar9 = *puVar2;
            *puVar2 = *puVar2 + uVar5;
            UNLOCK();
            if (( uVar5 + uVar9 <= puVar2[2] ) && ( uVar9 <= puVar2[2] )) {
               if (puVar2[2] - uVar9 <= uVar5) {
                  uVar5 = puVar2[2] - uVar9;
               }

               *(ulong*)param_2 = uVar5;
               if (puVar6 != (undefined8*)0x0) {
                  if (uVar5 + uVar9 <= puVar2[1]) {
                     if ((long)puVar2 + uVar9 + 0x40 == 0) goto LAB_0010033c;
                     goto LAB_00100448;
                  }

                  uVar8 = puVar2[1];
                  if (puVar2[1] < uVar9) {
                     uVar8 = uVar9;
                  }

                  ( **(code**)*puVar6 )(puVar6, ( uVar5 + uVar9 ) - uVar8, 1);
               }

               if ((long)puVar2 + uVar9 + 0x40 != 0) {
                  LAB_00100448:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return;
                  }

                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

            }

         }

         LAB_0010033c:if (*(char*)( (long)param_1 + 0x109 ) == '\0') {
            LAB_00100d45:/* WARNING: Subroutine does not return */abort();
         }

      }

      if (0x1fffc0 < *(ulong*)param_2) goto LAB_00100d45;
      if (param_1[0x20] == 0) {
         embree::MutexSys::lock();
         if (puVar2 == (ulong*)*puVar1) {
            uVar9 = *(long*)param_2 + 0x3fU & 0xffffffffffffffc0;
            uVar5 = param_1[5];
            if (param_1[4] < param_1[5]) {
               uVar5 = param_1[4];
            }

            if (uVar9 < uVar5) {
               uVar9 = uVar5;
            }

            uVar5 = param_1[( uVar4 & uVar7 ) + 0x17];
            uVar8 = param_1[0x21];
            plVar3 = (long*)*param_1;
            if ((int)param_1[0x29] == 1) {
               if (uVar9 < 0x1fffc0) {
                  LAB_0010070e:if (plVar3 != (long*)0x0) {
                     ( **(code**)( *plVar3 + 0x20 ) )(plVar3, uVar9 + 0x80, 0);
                  }

                  if ((char)uVar8 == '\0') {
                     puVar6 = (undefined8*)embree::alignedMalloc(uVar9 + 0x40, 0x40);
                  }
 else {
                     puVar6 = (undefined8*)( **(code**)( *plVar3 + 0x38 ) )(plVar3, uVar9 + 0x40, 0x40);
                  }

                  *puVar6 = 0;
                  puVar6[1] = uVar9;
                  puVar6[2] = uVar9;
                  LAB_00100762:puVar6[4] = 0x40;
                  *(undefined4*)( puVar6 + 5 ) = 0;
                  puVar6[3] = uVar5;
                  *(undefined1*)( (long)puVar6 + 0x2c ) = 0;
               }
 else {
                  uVar9 = uVar9 + 0x103f & 0xfffffffffffff000;
                  if (plVar3 != (long*)0x0) {
                     ( **(code**)( *plVar3 + 0x20 ) )(plVar3, uVar9, 0);
                  }

                  puVar6 = (undefined8*)embree::os_malloc(uVar9, &local_41);
                  *puVar6 = 0;
                  puVar6[1] = uVar9 - 0x40;
                  puVar6[2] = uVar9 - 0x40;
                  puVar6[3] = uVar5;
                  puVar6[4] = 0;
                  *(undefined4*)( puVar6 + 5 ) = 1;
                  *(bool*)( (long)puVar6 + 0x2c ) = local_41;
               }

            }
 else {
               puVar6 = (undefined8*)0x0;
               if ((int)param_1[0x29] == 0) {
                  if (uVar9 != 0x3fffc0) goto LAB_0010070e;
                  if (plVar3 != (long*)0x0) {
                     ( **(code**)( *plVar3 + 0x20 ) )(plVar3, 0x400040, 0);
                  }

                  if ((char)uVar8 == '\0') {
                     puVar6 = (undefined8*)embree::alignedMalloc(0x400000, 0x40);
                  }
 else {
                     puVar6 = (undefined8*)( **(code**)( *plVar3 + 0x38 ) )(plVar3, 0x400000, 0x40);
                  }

                  pvVar10 = (void*)( (ulong)puVar6 & 0xffffffffffe00000 );
                  embree::os_advise(pvVar10, 0x200000);
                  embree::os_advise((void*)( (long)pvVar10 + 0x200000 ), 0x200000);
                  embree::os_advise((void*)( (long)pvVar10 + 0x400000 ), 0x200000);
                  *puVar6 = 0;
                  puVar6[1] = 0x3fffc0;
                  puVar6[2] = 0x3fffc0;
                  goto LAB_00100762;
               }

            }

            LOCK();
            *puVar1 = (ulong)puVar6;
            UNLOCK();
            LOCK();
            param_1[( uVar4 & uVar7 ) + 0x17] = (ulong)puVar6;
            UNLOCK();
         }

         embree::MutexSys::unlock();
      }
 else {
         embree::MutexSys::lock();
         if (puVar2 == (ulong*)*puVar1) {
            if (param_1[0x20] == 0) {
               LOCK();
               puVar2 = param_1 + 0x22;
               uVar7 = *puVar2;
               *puVar2 = *puVar2 + 1;
               UNLOCK();
               uVar4 = 0x10;
               if (uVar7 + 1 < 0x11) {
                  uVar4 = uVar7 + 1;
               }

               uVar4 = param_1[4] << ( (byte)uVar4 & 0x3f );
               uVar7 = param_1[5];
               if (uVar4 <= param_1[5]) {
                  uVar7 = uVar4;
               }

               uVar4 = param_1[0x1f];
               uVar5 = param_1[0x21];
               plVar3 = (long*)*param_1;
               if ((int)param_1[0x29] == 1) {
                  if (uVar7 < 0x1fffc0) {
                     LAB_00100b01:if (plVar3 != (long*)0x0) {
                        ( **(code**)( *plVar3 + 0x20 ) )(plVar3, uVar7 + 0x80, 0);
                     }

                     if ((char)uVar5 == '\0') {
                        puVar6 = (undefined8*)embree::alignedMalloc(uVar7 + 0x40, 0x40);
                     }
 else {
                        puVar6 = (undefined8*)( **(code**)( *plVar3 + 0x38 ) )(plVar3, uVar7 + 0x40, 0x40);
                     }

                     *puVar6 = 0;
                     puVar6[1] = uVar7;
                     puVar6[2] = uVar7;
                     puVar6[3] = uVar4;
                     puVar6[4] = 0x40;
                     *(undefined4*)( puVar6 + 5 ) = 0;
                     *(undefined1*)( (long)puVar6 + 0x2c ) = 0;
                  }
 else {
                     uVar7 = uVar7 + 0x103f & 0xfffffffffffff000;
                     if (plVar3 != (long*)0x0) {
                        ( **(code**)( *plVar3 + 0x20 ) )(plVar3, uVar7, 0);
                     }

                     puVar6 = (undefined8*)embree::os_malloc(uVar7, &local_41);
                     *puVar6 = 0;
                     puVar6[1] = uVar7 - 0x40;
                     puVar6[2] = uVar7 - 0x40;
                     puVar6[3] = uVar4;
                     puVar6[4] = 0;
                     *(undefined4*)( puVar6 + 5 ) = 1;
                     *(bool*)( (long)puVar6 + 0x2c ) = local_41;
                  }

               }
 else {
                  puVar6 = (undefined8*)0x0;
                  if ((int)param_1[0x29] == 0) {
                     if (uVar7 != 0x3fffc0) goto LAB_00100b01;
                     if (plVar3 != (long*)0x0) {
                        ( **(code**)( *plVar3 + 0x20 ) )(plVar3, 0x400040, 0);
                     }

                     if ((char)uVar5 == '\0') {
                        puVar6 = (undefined8*)embree::alignedMalloc(0x400000, 0x40);
                     }
 else {
                        puVar6 = (undefined8*)( **(code**)( *plVar3 + 0x38 ) )(plVar3, 0x400000, 0x40);
                     }

                     pvVar10 = (void*)( (ulong)puVar6 & 0xffffffffffe00000 );
                     embree::os_advise(pvVar10, 0x200000);
                     embree::os_advise((void*)( (long)pvVar10 + 0x200000 ), 0x200000);
                     embree::os_advise((void*)( (long)pvVar10 + 0x400000 ), 0x200000);
                     *puVar6 = 0;
                     puVar6[1] = 0x3fffc0;
                     puVar6[2] = 0x3fffc0;
                     puVar6[3] = uVar4;
                     puVar6[4] = 0x40;
                     *(undefined4*)( puVar6 + 5 ) = 0;
                     *(undefined1*)( (long)puVar6 + 0x2c ) = 0;
                  }

               }

               LOCK();
               *puVar1 = (ulong)puVar6;
               UNLOCK();
               LOCK();
               param_1[0x1f] = (ulong)puVar6;
               UNLOCK();
            }
 else {
               uVar7 = *(ulong*)( param_1[0x20] + 0x18 );
               *(ulong*)( param_1[0x20] + 0x18 ) = param_1[0x1f];
               LOCK();
               param_1[0x1f] = param_1[0x20];
               UNLOCK();
               LOCK();
               *puVar1 = param_1[0x20];
               UNLOCK();
               LOCK();
               param_1[0x20] = uVar7;
               UNLOCK();
            }

         }

         embree::MutexSys::unlock();
      }

   }
 while ( true );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* embree::FastAllocator::~FastAllocator() */void embree::FastAllocator::~FastAllocator(FastAllocator *this) {
   long *plVar1;
   FastAllocator FVar2;
   long *plVar3;
   long lVar4;
   void *pvVar5;
   ulong *puVar6;
   FastAllocator *pFVar7;
   ulong uVar8;
   FastAllocator *pFVar9;
   MutexSys *this_00;
   MutexSys *pMVar10;
   ulong *puVar11;
   long *plVar12;
   pFVar9 = this + 0xf8;
   pFVar7 = this + 0xb8;
   do {
      while (*(long*)pFVar7 != 0) {
         lVar4 = *(long*)( *(long*)pFVar7 + 0x18 );
         *(long*)( *(long*)pFVar7 + 0x18 ) = *(long*)pFVar9;
         LOCK();
         *(long*)pFVar9 = *(long*)pFVar7;
         UNLOCK();
         LOCK();
         *(long*)pFVar7 = lVar4;
         UNLOCK();
      }
;
      LOCK();
      *(long*)pFVar7 = 0;
      UNLOCK();
      pFVar7 = pFVar7 + 8;
   }
 while ( pFVar7 != pFVar9 );
   plVar12 = *(long**)( this + 0x130 );
   plVar3 = *(long**)( this + 0x138 );
   if (plVar3 != plVar12) {
      do {
         while (true) {
            lVar4 = *plVar12;
            if (this != *(FastAllocator**)( lVar4 + 8 )) break;
            embree::MutexSys::lock();
            if (this == *(FastAllocator**)( lVar4 + 8 )) {
               LOCK();
               plVar1 = (long*)( *(long*)( lVar4 + 8 ) + 0x118 );
               *plVar1 = *plVar1 + *(long*)( lVar4 + 0xa8 ) + *(long*)( lVar4 + 0x68 );
               UNLOCK();
               LOCK();
               plVar1 = (long*)( *(long*)( lVar4 + 8 ) + 0x120 );
               *plVar1 = *plVar1 + ( ( ( *(long*)( lVar4 + 0x98 ) + *(long*)( lVar4 + 0x58 ) ) - *(long*)( lVar4 + 0x50 ) ) - *(long*)( lVar4 + 0x90 ) );
               UNLOCK();
               LOCK();
               plVar1 = (long*)( *(long*)( lVar4 + 8 ) + 0x128 );
               *plVar1 = *plVar1 + *(long*)( lVar4 + 0xb0 ) + *(long*)( lVar4 + 0x70 );
               UNLOCK();
               *(undefined8*)( lVar4 + 0x48 ) = 0;
               *(undefined8*)( lVar4 + 0x58 ) = 0;
               *(undefined8*)( lVar4 + 0x50 ) = 0;
               *(undefined8*)( lVar4 + 0x68 ) = 0;
               *(undefined8*)( lVar4 + 0x70 ) = 0;
               *(undefined8*)( lVar4 + 0x60 ) = 0;
               *(undefined8*)( lVar4 + 0x88 ) = 0;
               *(undefined8*)( lVar4 + 0x98 ) = 0;
               *(undefined8*)( lVar4 + 0x90 ) = 0;
               *(undefined8*)( lVar4 + 0xa8 ) = 0;
               *(undefined8*)( lVar4 + 0xb0 ) = 0;
               *(undefined8*)( lVar4 + 0xa0 ) = 0;
               LOCK();
               *(undefined8*)( lVar4 + 8 ) = 0;
               UNLOCK();
            }

            plVar12 = plVar12 + 1;
            embree::MutexSys::unlock();
            if (plVar3 == plVar12) goto LAB_00100ee8;
         }
;
         plVar12 = plVar12 + 1;
      }
 while ( plVar3 != plVar12 );
      LAB_00100ee8:if (*(long*)( this + 0x138 ) != *(long*)( this + 0x130 )) {
         *(long*)( this + 0x138 ) = *(long*)( this + 0x130 );
      }

   }

   for (int i = 0; i < 3; i++) {
      LOCK();
      *(undefined8*)( this + ( 8*i + 280 ) ) = 0;
      UNLOCK();
   }

   if (*(long*)( this + 0xf8 ) != 0) {
      puVar11 = *(ulong**)( this + 0xf8 );
      FVar2 = this[0x108];
      plVar12 = *(long**)this;
      if (puVar11 != (ulong*)0x0) {
         if (plVar12 == (long*)0x0) {
            if (FVar2 == (FastAllocator)0x0) {
               do {
                  puVar6 = (ulong*)puVar11[3];
                  if ((int)puVar11[5] == 0) {
                     embree::alignedFree(puVar11);
                  }
 else if ((int)puVar11[5] == 1) {
                     embree::os_free(puVar11, puVar11[2] + 0x40, *(bool*)( (long)puVar11 + 0x2c ));
                  }

                  puVar11 = puVar6;
               }
 while ( puVar6 != (ulong*)0x0 );
            }
 else {
               do {
                  puVar6 = (ulong*)puVar11[3];
                  if ((int)puVar11[5] == 0) {
                     ( **(code**)( _DAT_00000000 + 0x40 ) )(0, puVar11);
                  }
 else if ((int)puVar11[5] == 1) {
                     embree::os_free(puVar11, puVar11[2] + 0x40, *(bool*)( (long)puVar11 + 0x2c ));
                  }

                  puVar11 = puVar6;
               }
 while ( puVar6 != (ulong*)0x0 );
            }

         }
 else {
            do {
               while (true) {
                  puVar6 = (ulong*)puVar11[3];
                  uVar8 = *puVar11;
                  if (*puVar11 < puVar11[1]) {
                     uVar8 = puVar11[1];
                  }

                  if (puVar11[2] < uVar8) {
                     uVar8 = puVar11[2];
                  }

                  lVar4 = puVar11[4] + 0x40 + uVar8;
                  if ((int)puVar11[5] != 0) break;
                  if (FVar2 == (FastAllocator)0x0) {
                     embree::alignedFree(puVar11);
                  }
 else {
                     ( **(code**)( *plVar12 + 0x40 ) )(plVar12, puVar11);
                  }

                  ( **(code**)( *plVar12 + 0x20 ) )(plVar12, -lVar4, 1);
                  LAB_00100f8b:puVar11 = puVar6;
                  if (puVar6 == (ulong*)0x0) goto LAB_00100ff0;
               }
;
               if ((int)puVar11[5] != 1) goto LAB_00100f8b;
               embree::os_free(puVar11, puVar11[2] + 0x40, *(bool*)( (long)puVar11 + 0x2c ));
               ( **(code**)( *plVar12 + 0x20 ) )(plVar12, -lVar4, 1);
               puVar11 = puVar6;
            }
 while ( puVar6 != (ulong*)0x0 );
         }

      }

   }

   LAB_00100ff0:LOCK();
   *(long*)pFVar9 = 0;
   UNLOCK();
   if (*(long*)( this + 0x100 ) != 0) {
      puVar11 = *(ulong**)( this + 0x100 );
      FVar2 = this[0x108];
      plVar12 = *(long**)this;
      if (puVar11 != (ulong*)0x0) {
         if (plVar12 == (long*)0x0) {
            if (FVar2 == (FastAllocator)0x0) {
               do {
                  puVar6 = (ulong*)puVar11[3];
                  if ((int)puVar11[5] == 0) {
                     embree::alignedFree(puVar11);
                  }
 else if ((int)puVar11[5] == 1) {
                     embree::os_free(puVar11, puVar11[2] + 0x40, *(bool*)( (long)puVar11 + 0x2c ));
                  }

                  puVar11 = puVar6;
               }
 while ( puVar6 != (ulong*)0x0 );
            }
 else {
               do {
                  puVar6 = (ulong*)puVar11[3];
                  if ((int)puVar11[5] == 0) {
                     ( **(code**)( _DAT_00000000 + 0x40 ) )(0, puVar11);
                  }
 else if ((int)puVar11[5] == 1) {
                     embree::os_free(puVar11, puVar11[2] + 0x40, *(bool*)( (long)puVar11 + 0x2c ));
                  }

                  puVar11 = puVar6;
               }
 while ( puVar6 != (ulong*)0x0 );
            }

         }
 else {
            do {
               while (true) {
                  puVar6 = (ulong*)puVar11[3];
                  uVar8 = *puVar11;
                  if (*puVar11 < puVar11[1]) {
                     uVar8 = puVar11[1];
                  }

                  if (puVar11[2] < uVar8) {
                     uVar8 = puVar11[2];
                  }

                  lVar4 = puVar11[4] + 0x40 + uVar8;
                  if ((int)puVar11[5] != 0) break;
                  if (FVar2 == (FastAllocator)0x0) {
                     embree::alignedFree(puVar11);
                  }
 else {
                     ( **(code**)( *plVar12 + 0x40 ) )(plVar12, puVar11);
                  }

                  ( **(code**)( *plVar12 + 0x20 ) )(plVar12, -lVar4, 1);
                  LAB_00101069:puVar11 = puVar6;
                  if (puVar6 == (ulong*)0x0) goto LAB_001010d0;
               }
;
               if ((int)puVar11[5] != 1) goto LAB_00101069;
               embree::os_free(puVar11, puVar11[2] + 0x40, *(bool*)( (long)puVar11 + 0x2c ));
               ( **(code**)( *plVar12 + 0x20 ) )(plVar12, -lVar4, 1);
               puVar11 = puVar6;
            }
 while ( puVar6 != (ulong*)0x0 );
         }

      }

   }

   LAB_001010d0:LOCK();
   *(undefined8*)( this + 0x100 ) = 0;
   UNLOCK();
   pFVar9 = this + 0x78;
   do {
      LOCK();
      *(long*)pFVar9 = 0;
      UNLOCK();
      LOCK();
      *(long*)( pFVar9 + 0x40 ) = 0;
      UNLOCK();
      pFVar9 = pFVar9 + 8;
   }
 while ( pFVar9 != this + 0xb8 );
   pvVar5 = *(void**)( this + 0x170 );
   lVar4 = *(long*)( this + 0x168 );
   if (pvVar5 != (void*)0x0) {
      if (( ulong )(lVar4 << 5) < 0x1c00000) {
         embree::alignedFree(pvVar5);
      }
 else {
         embree::os_free(pvVar5, lVar4 << 5, (bool)this[0x158]);
      }

   }

   if (lVar4 != 0) {
      ( **(code**)**(undefined8**)( this + 0x150 ) )(*(undefined8**)( this + 0x150 ), lVar4 * -0x20, 1);
   }

   pvVar5 = *(void**)( this + 0x130 );
   if (pvVar5 != (void*)0x0) {
      operator_delete(pvVar5, *(long*)( this + 0x140 ) - (long)pvVar5);
   }

   this_00 = (MutexSys*)( this + 0x70 );
   if (this != (FastAllocator*)0xffffffffffffffc8) {
      do {
         pMVar10 = this_00 + -8;
         embree::MutexSys::~MutexSys(this_00);
         this_00 = pMVar10;
      }
 while ( pMVar10 != (MutexSys*)( this + 0x30 ) );
   }

   embree::MutexSys::~MutexSys((MutexSys*)( this + 0x30 ));
   return;
}
/* embree::fast_allocator_regression_test::~fast_allocator_regression_test() */void embree::fast_allocator_regression_test::~fast_allocator_regression_test(fast_allocator_regression_test *this) {
   FastAllocator *this_00;
   this_00 = *(FastAllocator**)( this + 0x38 );
   *(undefined***)this = &PTR_run_001028d0;
   if (this_00 != (FastAllocator*)0x0) {
      FastAllocator::~FastAllocator(this_00);
      operator_delete(this_00, 0x178);
   }

   embree::BarrierSys::~BarrierSys((BarrierSys*)( this + 0x28 ));
   *(undefined***)this = &PTR___cxa_pure_virtual_001028b8;
   if (*(fast_allocator_regression_test**)( this + 8 ) != this + 0x18) {
      operator_delete(*(fast_allocator_regression_test**)( this + 8 ), *(long*)( this + 0x18 ) + 1);
      return;
   }

   return;
}
/* WARNING: Control flow encountered bad instruction data *//* void std::vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> >,
   std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> > >
   >::_M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> >
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> >*,
   std::vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> >,
   std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> > > > >,
   std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> >&&) */void std::vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>::_M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>(vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>> *this, undefined8 *param_2, undefined8 *param_3) {
   undefined8 *puVar1;
   undefined8 uVar2;
   ulong uVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   ulong uVar8;
   undefined8 *puVar9;
   long lVar10;
   puVar5 = *(undefined8**)( this + 8 );
   puVar1 = *(undefined8**)this;
   uVar3 = (long)puVar5 - (long)puVar1 >> 3;
   if (uVar3 == 0xfffffffffffffff) {
      std::__throw_length_error("vector::_M_realloc_insert");
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   if (puVar1 == puVar5) {
      if (0xfffffffffffffffe < uVar3) goto LAB_001014b0;
      uVar8 = 0xfffffffffffffff;
      if (uVar3 + 1 < 0x1000000000000000) {
         uVar8 = uVar3 + 1;
      }

      uVar8 = uVar8 << 3;
      LAB_001014ba:puVar7 = (undefined8*)operator_new(uVar8);
      lVar10 = uVar8 + (long)puVar7;
      *(undefined8*)( (long)puVar7 + ( (long)param_2 - (long)puVar1 ) ) = *param_3;
      puVar4 = puVar7 + 1;
      *param_3 = 0;
      if (param_2 != puVar1) {
         LAB_00101421:puVar4 = puVar1;
         puVar9 = puVar7;
         do {
            uVar2 = *puVar4;
            puVar4 = puVar4 + 1;
            *puVar9 = uVar2;
            puVar9 = puVar9 + 1;
         }
 while ( puVar4 != param_2 );
         puVar4 = (undefined8*)( (long)puVar7 + (long)param_2 + ( 8 - (long)puVar1 ) );
      }

      if (param_2 == puVar5) goto LAB_00101474;
   }
 else {
      uVar8 = uVar3 * 2;
      if (uVar8 < uVar3) {
         LAB_001014b0:uVar8 = 0x7ffffffffffffff8;
         goto LAB_001014ba;
      }

      if (uVar8 != 0) {
         if (0xfffffffffffffff < uVar8) {
            uVar8 = 0xfffffffffffffff;
         }

         uVar8 = uVar8 * 8;
         goto LAB_001014ba;
      }

      lVar10 = 0;
      puVar7 = (undefined8*)0x0;
      *(undefined8*)( (long)param_2 - (long)puVar1 ) = *param_3;
      puVar4 = (undefined8*)&DAT_00000008;
      *param_3 = 0;
      if (param_2 != puVar1) goto LAB_00101421;
   }

   puVar9 = (undefined8*)( ( (long)puVar5 - (long)param_2 ) + (long)puVar4 );
   puVar5 = puVar4;
   do {
      uVar2 = *param_2;
      puVar6 = puVar5 + 1;
      param_2 = param_2 + 1;
      *puVar5 = uVar2;
      puVar5 = puVar6;
      puVar4 = puVar9;
   }
 while ( puVar9 != puVar6 );
   LAB_00101474:if (puVar1 != (undefined8*)0x0) {
      operator_delete(puVar1, *(long*)( this + 0x10 ) - (long)puVar1);
   }

   *(undefined8**)this = puVar7;
   *(undefined8**)( this + 8 ) = puVar4;
   *(long*)( this + 0x10 ) = lVar10;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* embree::fast_allocator_regression_test::thread_alloc(embree::fast_allocator_regression_test*) */void embree::fast_allocator_regression_test::thread_alloc(fast_allocator_regression_test *param_1) {
   MutexSys *pMVar1;
   long *plVar2;
   ulong *puVar3;
   long lVar4;
   long *plVar5;
   MutexSys *pMVar6;
   void *__dest;
   undefined8 *puVar7;
   long *__dest_00;
   ulong uVar8;
   MutexSys *this;
   ulong uVar9;
   long *plVar10;
   MutexSys *pMVar11;
   size_t sVar12;
   long lVar13;
   long *in_FS_OFFSET;
   long local_1fa0;
   MutexSys *local_1f98;
   MutexSys *local_1f90;
   undefined8 local_1f88[1000];
   undefined8 local_48;
   long local_40;
   puVar3 = *(ulong**)( param_1 + 0x38 );
   local_40 = in_FS_OFFSET[5];
   this(MutexSys * ) * in_FS_OFFSET;
   if (this == (MutexSys*)0x0) {
      this(MutexSys * embree::alignedMalloc(0xc0, 0x40));
      embree::MutexSys::MutexSys(this);
      *(undefined8*)( this + 8 ) = 0;
      *(MutexSys**)( this + 0x40 ) = this;
      for (int i = 0; i < 6; i++) {
         *(undefined8*)( this + ( 8*i + 72 ) ) = 0;
      }

      *(MutexSys**)( this + 0x80 ) = this;
      for (int i = 0; i < 6; i++) {
         *(undefined8*)( this + ( 8*i + 136 ) ) = 0;
      }

      *in_FS_OFFSET = (long)this;
      embree::MutexSys::lock();
      local_1f90 = this;
      if (FastAllocator::s_thread_local_allocators._8_8_ == FastAllocator::s_thread_local_allocators._16_8_) {
         std::vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>::_M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>((vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>*)FastAllocator::s_thread_local_allocators, FastAllocator::s_thread_local_allocators._8_8_, &local_1f90);
         pMVar1 = local_1f90;
         if (local_1f90 != (MutexSys*)0x0) {
            embree::MutexSys::~MutexSys(local_1f90);
            embree::alignedFree(pMVar1);
         }

      }
 else {
         *(MutexSys**)FastAllocator::s_thread_local_allocators._8_8_ = this;
         FastAllocator::s_thread_local_allocators._8_8_ = FastAllocator::s_thread_local_allocators._8_8_ + 8;
      }

      embree::MutexSys::unlock();
   }

   pMVar1 = this + 0x40;
   local_1fa0 = 1000;
   do {
      lVar13 = 0;
      embree::BarrierSys::wait();
      if (puVar3 == (ulong*)0x0) {
         do {
            lVar4 = *(long*)( this + 0x40 );
            local_1f98 = (MutexSys*)( ( ulong )((uint)lVar13 & 0x1f) + 8 );
            if (*(long*)( lVar4 + 8 ) != 0) {
               embree::MutexSys::lock();
               if (*(long*)( lVar4 + 8 ) != 0) {
                  LOCK();
                  plVar2 = (long*)( *(long*)( lVar4 + 8 ) + 0x118 );
                  *plVar2 = *plVar2 + *(long*)( lVar4 + 0xa8 ) + *(long*)( lVar4 + 0x68 );
                  UNLOCK();
                  LOCK();
                  plVar2 = (long*)( *(long*)( lVar4 + 8 ) + 0x120 );
                  *plVar2 = *plVar2 + ( ( ( *(long*)( lVar4 + 0x98 ) + *(long*)( lVar4 + 0x58 ) ) - *(long*)( lVar4 + 0x50 ) ) - *(long*)( lVar4 + 0x90 ) );
                  UNLOCK();
                  LOCK();
                  plVar2 = (long*)( *(long*)( lVar4 + 8 ) + 0x128 );
                  *plVar2 = *plVar2 + *(long*)( lVar4 + 0xb0 ) + *(long*)( lVar4 + 0x70 );
                  UNLOCK();
               }

               *(undefined8*)( lVar4 + 0x48 ) = 0;
               *(undefined8*)( lVar4 + 0x58 ) = 0;
               *(undefined8*)( lVar4 + 0x50 ) = 0;
               *(undefined8*)( lVar4 + 0x68 ) = 0;
               *(undefined8*)( lVar4 + 0x70 ) = 0;
               *(undefined8*)( lVar4 + 0x60 ) = 0;
               *(undefined8*)( lVar4 + 0x88 ) = 0;
               *(undefined8*)( lVar4 + 0x98 ) = 0;
               *(undefined8*)( lVar4 + 0x90 ) = 0;
               *(undefined8*)( lVar4 + 0xa8 ) = 0;
               *(undefined8*)( lVar4 + 0xb0 ) = 0;
               *(undefined8*)( lVar4 + 0xa0 ) = 0;
               LOCK();
               *(undefined8*)( lVar4 + 8 ) = 0;
               UNLOCK();
               embree::MutexSys::lock();
               plVar2 = _DAT_00000130;
               if (_DAT_00000138 == _DAT_00000140) {
                  sVar12 = (long)_DAT_00000138 - (long)_DAT_00000130;
                  uVar9 = (long)sVar12 >> 3;
                  if (uVar9 == 0xfffffffffffffff) goto LAB_00101f0d;
                  if (_DAT_00000138 == _DAT_00000130) {
                     uVar8 = uVar9 + 1;
                     if (0xfffffffffffffffe < uVar9) goto LAB_00101db4;
                     if (0xfffffffffffffff < uVar8) {
                        uVar8 = 0xfffffffffffffff;
                     }

                     uVar8 = uVar8 * 8;
                     LAB_00101d8f:__dest_00 = (long*)operator_new(uVar8);
                     plVar10 = (long*)( uVar8 + (long)__dest_00 );
                  }
 else {
                     uVar8 = uVar9 * 2;
                     if (uVar8 < uVar9) {
                        LAB_00101db4:uVar8 = 0x7ffffffffffffff8;
                        goto LAB_00101d8f;
                     }

                     plVar10 = (long*)0x0;
                     __dest_00 = (long*)0x0;
                     if (uVar8 != 0) {
                        if (0xfffffffffffffff < uVar8) {
                           uVar8 = 0xfffffffffffffff;
                        }

                        uVar8 = uVar8 * 8;
                        goto LAB_00101d8f;
                     }

                  }

                  *(long*)( (long)__dest_00 + sVar12 ) = lVar4;
                  if (0 < (long)sVar12) {
                     __dest_00 = (long*)memmove(__dest_00, plVar2, sVar12);
                  }

                  plVar5 = (long*)( (long)__dest_00 + sVar12 + 8 );
                  if (plVar2 != (long*)0x0) {
                     operator_delete(plVar2, (long)_DAT_00000140 - (long)plVar2);
                  }

               }
 else {
                  *_DAT_00000138 = lVar4;
                  _DAT_00000138 = _DAT_00000138 + 1;
                  __dest_00 = _DAT_00000130;
                  plVar5 = _DAT_00000138;
                  plVar10 = _DAT_00000140;
               }

               _DAT_00000140 = plVar10;
               _DAT_00000138 = plVar5;
               _DAT_00000130 = __dest_00;
               embree::MutexSys::unlock();
               embree::MutexSys::unlock();
            }

            pMVar11 = local_1f98;
            lVar4 = *(long*)( this + 0x50 );
            *(MutexSys**)( this + 0x68 ) = local_1f98 + *(long*)( this + 0x68 );
            uVar9 = ( ulong )(-(int)lVar4 & 0xf);
            pMVar6 = local_1f98 + uVar9 + lVar4;
            *(MutexSys**)( this + 0x50 ) = pMVar6;
            if (*(MutexSys**)( this + 0x58 ) < pMVar6) {
               *(long*)( this + 0x50 ) = lVar4;
               if (*(MutexSys**)( this + 0x60 ) < (MutexSys*)( (long)local_1f98 * 4 )) {
                  pMVar6 = (MutexSys*)FastAllocator::malloc((ulong*)0x0, ( ulong ) & local_1f98, false);
               }
 else {
                  local_1f90 = *(MutexSys**)( this + 0x60 );
                  pMVar6 = (MutexSys*)FastAllocator::malloc((ulong*)0x0, ( ulong ) & local_1f90, true);
                  *(MutexSys**)( this + 0x48 ) = pMVar6;
                  *(long*)( this + 0x70 ) = ( *(long*)( this + 0x58 ) + *(long*)( this + 0x70 ) ) - *(long*)( this + 0x50 );
                  *(MutexSys**)( this + 0x50 ) = pMVar11;
                  *(MutexSys**)( this + 0x58 ) = local_1f90;
                  if (local_1f90 < pMVar11) {
                     *(undefined8*)( this + 0x50 ) = 0;
                     local_1f90 = *(MutexSys**)( this + 0x60 );
                     pMVar6 = (MutexSys*)FastAllocator::malloc((ulong*)0x0, ( ulong ) & local_1f90, false);
                     *(MutexSys**)( this + 0x48 ) = pMVar6;
                     *(long*)( this + 0x70 ) = ( *(long*)( this + 0x58 ) + *(long*)( this + 0x70 ) ) - *(long*)( this + 0x50 );
                     *(MutexSys**)( this + 0x50 ) = pMVar11;
                     *(MutexSys**)( this + 0x58 ) = local_1f90;
                     if (local_1f90 < pMVar11) {
                        *(undefined8*)( this + 0x50 ) = 0;
                        pMVar6 = (MutexSys*)0x0;
                     }

                  }

               }

            }
 else {
               *(ulong*)( this + 0x70 ) = *(long*)( this + 0x70 ) + uVar9;
               pMVar6 = pMVar6 + ( *(long*)( this + 0x48 ) - (long)local_1f98 );
            }

            pMVar11 = pMVar1 + lVar13;
            local_1f88[lVar13] = pMVar6;
            lVar13 = lVar13 + 1;
            *(MutexSys**)pMVar6 = pMVar11;
         }
 while ( lVar13 != 1000 );
      }
 else {
         do {
            lVar4 = *(long*)( this + 0x40 );
            local_1f98 = (MutexSys*)( ( ulong )((uint)lVar13 & 0x1f) + 8 );
            if (puVar3 != *(ulong**)( lVar4 + 8 )) {
               embree::MutexSys::lock();
               if (*(long*)( lVar4 + 8 ) != 0) {
                  LOCK();
                  plVar2 = (long*)( *(long*)( lVar4 + 8 ) + 0x118 );
                  *plVar2 = *plVar2 + *(long*)( lVar4 + 0xa8 ) + *(long*)( lVar4 + 0x68 );
                  UNLOCK();
                  LOCK();
                  plVar2 = (long*)( *(long*)( lVar4 + 8 ) + 0x120 );
                  *plVar2 = *plVar2 + ( ( ( *(long*)( lVar4 + 0x98 ) + *(long*)( lVar4 + 0x58 ) ) - *(long*)( lVar4 + 0x50 ) ) - *(long*)( lVar4 + 0x90 ) );
                  UNLOCK();
                  LOCK();
                  plVar2 = (long*)( *(long*)( lVar4 + 8 ) + 0x128 );
                  *plVar2 = *plVar2 + *(long*)( lVar4 + 0xb0 ) + *(long*)( lVar4 + 0x70 );
                  UNLOCK();
               }

               *(undefined8*)( lVar4 + 0x60 ) = 0;
               *(undefined8*)( lVar4 + 0x48 ) = 0;
               *(undefined8*)( lVar4 + 0x58 ) = 0;
               *(undefined8*)( lVar4 + 0x50 ) = 0;
               *(undefined8*)( lVar4 + 0x68 ) = 0;
               *(undefined8*)( lVar4 + 0x70 ) = 0;
               uVar9 = puVar3[2];
               *(undefined8*)( lVar4 + 0xa0 ) = 0;
               *(ulong*)( lVar4 + 0x60 ) = uVar9;
               *(undefined8*)( lVar4 + 0x88 ) = 0;
               *(undefined8*)( lVar4 + 0x98 ) = 0;
               *(undefined8*)( lVar4 + 0x90 ) = 0;
               *(undefined8*)( lVar4 + 0xa8 ) = 0;
               *(undefined8*)( lVar4 + 0xb0 ) = 0;
               *(ulong*)( lVar4 + 0xa0 ) = puVar3[2];
               LOCK();
               *(ulong**)( lVar4 + 8 ) = puVar3;
               UNLOCK();
               embree::MutexSys::lock();
               plVar2 = (long*)puVar3[0x27];
               if (plVar2 == (long*)puVar3[0x28]) {
                  plVar5 = (long*)puVar3[0x26];
                  sVar12 = (long)plVar2 - (long)plVar5;
                  uVar9 = (long)sVar12 >> 3;
                  if (uVar9 == 0xfffffffffffffff) goto LAB_00101f0d;
                  if (plVar2 == plVar5) {
                     if (0xfffffffffffffffe < uVar9) goto LAB_00101970;
                     uVar8 = 0xfffffffffffffff;
                     if (uVar9 + 1 < 0x1000000000000000) {
                        uVar8 = uVar9 + 1;
                     }

                     uVar8 = uVar8 << 3;
                     LAB_00101946:__dest = operator_new(uVar8);
                     uVar9 = uVar8 + (long)__dest;
                  }
 else {
                     uVar8 = uVar9 * 2;
                     if (uVar8 < uVar9) {
                        LAB_00101970:uVar8 = 0x7ffffffffffffff8;
                        goto LAB_00101946;
                     }

                     uVar9 = 0;
                     __dest = (void*)0x0;
                     if (uVar8 != 0) {
                        if (0xfffffffffffffff < uVar8) {
                           uVar8 = 0xfffffffffffffff;
                        }

                        uVar8 = uVar8 * 8;
                        goto LAB_00101946;
                     }

                  }

                  *(long*)( (long)__dest + sVar12 ) = lVar4;
                  if (0 < (long)sVar12) {
                     __dest = memmove(__dest, plVar5, sVar12);
                  }

                  if (plVar5 != (long*)0x0) {
                     operator_delete(plVar5, puVar3[0x28] - (long)plVar5);
                  }

                  puVar3[0x26] = (ulong)__dest;
                  puVar3[0x27] = (long)__dest + sVar12 + 8;
                  puVar3[0x28] = uVar9;
               }
 else {
                  *plVar2 = lVar4;
                  puVar3[0x27] = puVar3[0x27] + 8;
               }

               embree::MutexSys::unlock();
               embree::MutexSys::unlock();
            }

            pMVar11 = local_1f98;
            lVar4 = *(long*)( this + 0x50 );
            *(MutexSys**)( this + 0x68 ) = local_1f98 + *(long*)( this + 0x68 );
            uVar9 = ( ulong )(-(int)lVar4 & 0xf);
            pMVar6 = local_1f98 + uVar9 + lVar4;
            *(MutexSys**)( this + 0x50 ) = pMVar6;
            if (*(MutexSys**)( this + 0x58 ) < pMVar6) {
               *(long*)( this + 0x50 ) = lVar4;
               if (*(MutexSys**)( this + 0x60 ) < (MutexSys*)( (long)local_1f98 * 4 )) {
                  pMVar6 = (MutexSys*)FastAllocator::malloc(puVar3, ( ulong ) & local_1f98, false);
               }
 else {
                  local_1f90 = *(MutexSys**)( this + 0x60 );
                  pMVar6 = (MutexSys*)FastAllocator::malloc(puVar3, ( ulong ) & local_1f90, true);
                  *(MutexSys**)( this + 0x48 ) = pMVar6;
                  *(long*)( this + 0x70 ) = ( *(long*)( this + 0x58 ) + *(long*)( this + 0x70 ) ) - *(long*)( this + 0x50 );
                  *(MutexSys**)( this + 0x50 ) = pMVar11;
                  *(MutexSys**)( this + 0x58 ) = local_1f90;
                  if (local_1f90 < pMVar11) {
                     *(undefined8*)( this + 0x50 ) = 0;
                     local_1f90 = *(MutexSys**)( this + 0x60 );
                     pMVar6 = (MutexSys*)FastAllocator::malloc(puVar3, ( ulong ) & local_1f90, false);
                     *(MutexSys**)( this + 0x48 ) = pMVar6;
                     *(long*)( this + 0x70 ) = ( *(long*)( this + 0x58 ) + *(long*)( this + 0x70 ) ) - *(long*)( this + 0x50 );
                     *(MutexSys**)( this + 0x50 ) = pMVar11;
                     *(MutexSys**)( this + 0x58 ) = local_1f90;
                     if (local_1f90 < pMVar11) {
                        *(undefined8*)( this + 0x50 ) = 0;
                        pMVar6 = (MutexSys*)0x0;
                     }

                  }

               }

            }
 else {
               *(ulong*)( this + 0x70 ) = *(long*)( this + 0x70 ) + uVar9;
               pMVar6 = pMVar6 + ( *(long*)( this + 0x48 ) - (long)local_1f98 );
            }

            pMVar11 = pMVar1 + lVar13;
            local_1f88[lVar13] = pMVar6;
            lVar13 = lVar13 + 1;
            *(MutexSys**)pMVar6 = pMVar11;
         }
 while ( lVar13 != 1000 );
      }

      puVar7 = local_1f88;
      pMVar11 = pMVar1;
      do {
         while (*(MutexSys**)*puVar7 == pMVar11) {
            puVar7 = puVar7 + 1;
            pMVar11 = pMVar11 + 1;
            if (&local_48 == puVar7) goto LAB_001019bb;
         }
;
         LOCK();
         *(long*)( param_1 + 0x30 ) = *(long*)( param_1 + 0x30 ) + 1;
         UNLOCK();
         puVar7 = puVar7 + 1;
         pMVar11 = pMVar11 + 1;
      }
 while ( &local_48 != puVar7 );
      LAB_001019bb:embree::BarrierSys::wait();
      local_1fa0 = local_1fa0 + -1;
   }
 while ( local_1fa0 != 0 );
   if (local_40 == in_FS_OFFSET[5]) {
      return;
   }

   LAB_00101f19:/* WARNING: Subroutine does not return */__stack_chk_fail();
   LAB_00101f0d:std::__throw_length_error("vector::_M_realloc_insert");
   goto LAB_00101f19;
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
      if (0xfffffffffffffffe < uVar1) goto LAB_00102000;
      uVar4 = 0xfffffffffffffff;
      if (uVar1 + 1 < 0x1000000000000000) {
         uVar4 = uVar1 + 1;
      }

      uVar4 = uVar4 << 3;
   }
 else {
      uVar4 = uVar1 * 2;
      if (uVar4 < uVar1) {
         LAB_00102000:uVar4 = 0x7ffffffffffffff8;
      }
 else {
         if (uVar4 == 0) {
            lVar3 = 0;
            __dest = (void*)0x0;
            goto LAB_00101f89;
         }

         if (0xfffffffffffffff < uVar4) {
            uVar4 = 0xfffffffffffffff;
         }

         uVar4 = uVar4 * 8;
      }

   }

   __dest = operator_new(uVar4);
   lVar3 = uVar4 + (long)__dest;
   LAB_00101f89:*(undefined8*)( (long)__dest + __n ) = *param_3;
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
/* embree::fast_allocator_regression_test::run() */ulong embree::fast_allocator_regression_test::run(fast_allocator_regression_test *this) {
   long *plVar1;
   FastAllocator *pFVar2;
   ulong *puVar3;
   void *pvVar4;
   uint uVar5;
   undefined8 *puVar6;
   ulong uVar7;
   long *plVar8;
   long lVar9;
   long *plVar10;
   MutexSys *this_00;
   MutexSys *pMVar11;
   long lVar12;
   ulong uVar13;
   long in_FS_OFFSET;
   long local_78;
   long local_60;
   void *local_58;
   long *local_50;
   long *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar6 = (undefined8*)operator_new(0x178);
   *puVar6 = 0;
   puVar6[1] = 0;
   puVar6[2] = 0x1000;
   puVar6[3] = 0;
   puVar6[4] = 0x1000;
   puVar6[5] = 0x1fffc0;
   embree::MutexSys::MutexSys((MutexSys*)( puVar6 + 6 ));
   this_00 = (MutexSys*)( puVar6 + 7 );
   do {
      pMVar11 = this_00 + 8;
      embree::MutexSys::MutexSys(this_00);
      this_00 = pMVar11;
   }
 while ( pMVar11 != (MutexSys*)( puVar6 + 0xf ) );
   *(undefined1*)( (long)puVar6 + 0x10a ) = 0;
   puVar6[0x1f] = 0;
   puVar6[0x20] = 0;
   puVar6[0x22] = 0;
   puVar6[0x23] = 0;
   puVar6[0x24] = 0;
   puVar6[0x25] = 0;
   puVar6[0x26] = 0;
   puVar6[0x27] = 0;
   puVar6[0x28] = 0;
   *(undefined4*)( puVar6 + 0x29 ) = 0;
   puVar6[0x2a] = 0;
   *(undefined1*)( puVar6 + 0x2b ) = 0;
   for (int i = 0; i < 3; i++) {
      puVar6[( i + 44 )] = 0;
   }

   *(undefined2*)( puVar6 + 0x21 ) = 0x100;
   do {
      LOCK();
      *(undefined8*)pMVar11 = 0;
      UNLOCK();
      LOCK();
      *(undefined8*)( pMVar11 + 0x40 ) = 0;
      UNLOCK();
      pMVar11 = pMVar11 + 8;
   }
 while ( pMVar11 != (MutexSys*)( puVar6 + 0x17 ) );
   pFVar2 = *(FastAllocator**)( this + 0x38 );
   *(undefined8**)( this + 0x38 ) = puVar6;
   if (pFVar2 != (FastAllocator*)0x0) {
      FastAllocator::~FastAllocator(pFVar2);
      operator_delete(pFVar2, 0x178);
   }

   LOCK();
   *(undefined8*)( this + 0x30 ) = 0;
   UNLOCK();
   uVar5 = embree::getNumberOfLogicalThreads();
   uVar7 = (ulong)uVar5;
   embree::BarrierSys::init(( ulong )(this + 0x28));
   local_58 = (void*)0x0;
   local_50 = (long*)0x0;
   local_48 = (long*)0x0;
   if (uVar7 != 0) {
      lVar12 = 0;
      while (true) {
         plVar8 = local_48;
         plVar10 = local_50;
         local_60 = embree::createThread(thread_alloc, this, 0, -1);
         if (plVar10 == plVar8) {
            std::vector<embree::opaque_thread_t*,std::allocator<embree::opaque_thread_t*>>::_M_realloc_insert<embree::opaque_thread_t*>((vector<embree::opaque_thread_t*,std::allocator<embree::opaque_thread_t*>>*)&local_58, plVar10, &local_60);
         }
 else {
            *plVar10 = local_60;
            local_50 = plVar10 + 1;
         }

         if (uVar7 == lVar12 + 1U) break;
         lVar12 = lVar12 + 1;
      }
;
   }

   local_78 = 1000;
   do {
      lVar12 = *(long*)( this + 0x38 );
      plVar10 = (long*)( lVar12 + 0xf8 );
      plVar8 = (long*)( lVar12 + 0xb8 );
      do {
         while (*plVar8 != 0) {
            lVar9 = *(long*)( *plVar8 + 0x18 );
            *(long*)( *plVar8 + 0x18 ) = *plVar10;
            LOCK();
            *plVar10 = *plVar8;
            UNLOCK();
            LOCK();
            *plVar8 = lVar9;
            UNLOCK();
         }
;
         LOCK();
         *plVar8 = 0;
         UNLOCK();
         plVar8 = plVar8 + 1;
      }
 while ( plVar8 != plVar10 );
      for (int i = 0; i < 3; i++) {
         LOCK();
         *(undefined8*)( lVar12 + ( 8*i + 280 ) ) = 0;
         UNLOCK();
      }

      plVar8 = (long*)( lVar12 + 0x100 );
      while (*plVar10 != 0) {
         puVar3 = (ulong*)*plVar10;
         uVar13 = *puVar3;
         if (*puVar3 < puVar3[1]) {
            uVar13 = puVar3[1];
         }

         LOCK();
         puVar3[1] = uVar13;
         UNLOCK();
         LOCK();
         *puVar3 = 0;
         UNLOCK();
         lVar9 = *(long*)( *plVar10 + 0x18 );
         *(long*)( *plVar10 + 0x18 ) = *plVar8;
         LOCK();
         *plVar8 = *plVar10;
         UNLOCK();
         LOCK();
         *plVar10 = lVar9;
         UNLOCK();
      }
;
      lVar9 = *(long*)( lVar12 + 0x100 );
      local_60 = lVar9;
      if (lVar9 != 0) {
         plVar10 = &local_60;
         do {
            while (*(int*)( lVar9 + 0x28 ) != 2) {
               plVar10 = (long*)( lVar9 + 0x18 );
               lVar9 = *(long*)( lVar9 + 0x18 );
               if (lVar9 == 0) goto LAB_001023c4;
            }
;
            lVar9 = *(long*)( lVar9 + 0x18 );
            *plVar10 = lVar9;
         }
 while ( lVar9 != 0 );
      }

      LAB_001023c4:LOCK();
      *plVar8 = local_60;
      UNLOCK();
      plVar10 = (long*)( lVar12 + 0x78 );
      do {
         LOCK();
         *plVar10 = 0;
         UNLOCK();
         LOCK();
         plVar10[8] = 0;
         UNLOCK();
         plVar10 = plVar10 + 1;
      }
 while ( (long*)( lVar12 + 0xb8 ) != plVar10 );
      plVar10 = *(long**)( lVar12 + 0x130 );
      plVar8 = *(long**)( lVar12 + 0x138 );
      if (plVar10 != plVar8) {
         do {
            while (true) {
               lVar9 = *plVar10;
               if (lVar12 != *(long*)( lVar9 + 8 )) break;
               embree::MutexSys::lock();
               if (lVar12 == *(long*)( lVar9 + 8 )) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar9 + 8 ) + 0x118 );
                  *plVar1 = *plVar1 + *(long*)( lVar9 + 0xa8 ) + *(long*)( lVar9 + 0x68 );
                  UNLOCK();
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar9 + 8 ) + 0x120 );
                  *plVar1 = *plVar1 + ( ( ( *(long*)( lVar9 + 0x98 ) + *(long*)( lVar9 + 0x58 ) ) - *(long*)( lVar9 + 0x50 ) ) - *(long*)( lVar9 + 0x90 ) );
                  UNLOCK();
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar9 + 8 ) + 0x128 );
                  *plVar1 = *plVar1 + *(long*)( lVar9 + 0xb0 ) + *(long*)( lVar9 + 0x70 );
                  UNLOCK();
                  *(undefined8*)( lVar9 + 0x48 ) = 0;
                  *(undefined8*)( lVar9 + 0x58 ) = 0;
                  *(undefined8*)( lVar9 + 0x50 ) = 0;
                  *(undefined8*)( lVar9 + 0x68 ) = 0;
                  *(undefined8*)( lVar9 + 0x70 ) = 0;
                  *(undefined8*)( lVar9 + 0x60 ) = 0;
                  *(undefined8*)( lVar9 + 0x88 ) = 0;
                  *(undefined8*)( lVar9 + 0x98 ) = 0;
                  *(undefined8*)( lVar9 + 0x90 ) = 0;
                  *(undefined8*)( lVar9 + 0xa8 ) = 0;
                  *(undefined8*)( lVar9 + 0xb0 ) = 0;
                  *(undefined8*)( lVar9 + 0xa0 ) = 0;
                  LOCK();
                  *(undefined8*)( lVar9 + 8 ) = 0;
                  UNLOCK();
               }

               plVar10 = plVar10 + 1;
               embree::MutexSys::unlock();
               if (plVar8 == plVar10) goto LAB_00102522;
            }
;
            plVar10 = plVar10 + 1;
         }
 while ( plVar8 != plVar10 );
         LAB_00102522:if (*(long*)( lVar12 + 0x130 ) != *(long*)( lVar12 + 0x138 )) {
            *(long*)( lVar12 + 0x138 ) = *(long*)( lVar12 + 0x130 );
         }

      }

      embree::BarrierSys::wait();
      embree::BarrierSys::wait();
      pvVar4 = local_58;
      local_78 = local_78 + -1;
      if (local_78 == 0) {
         uVar13 = 0;
         if (uVar7 != 0) {
            do {
               lVar12 = uVar13 * 8;
               uVar13 = uVar13 + 1;
               embree::join(*(opaque_thread_t**)( (long)pvVar4 + lVar12 ));
            }
 while ( uVar7 != uVar13 );
         }

         pFVar2 = *(FastAllocator**)( this + 0x38 );
         *(undefined8*)( this + 0x38 ) = 0;
         if (pFVar2 != (FastAllocator*)0x0) {
            FastAllocator::~FastAllocator(pFVar2);
            operator_delete(pFVar2, 0x178);
         }

         lVar12 = *(long*)( this + 0x30 );
         if (local_58 != (void*)0x0) {
            operator_delete(local_58, (long)local_48 - (long)local_58);
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return CONCAT71(( int7 )((ulong)pFVar2 >> 8), lVar12 == 0) & 0xffffffff;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

   }
 while ( true );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* embree::FastAllocator::thread_local_allocator2 */void embree::FastAllocator::_GLOBAL__sub_I_thread_local_allocator2(void) {
   ulong uVar1;
   undefined8 uVar2;
   ulong __n;
   ulong *__src;
   long in_FS_OFFSET;
   ulong local_60;
   ulong *local_58;
   ulong local_50;
   ulong local_48[3];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   embree::MutexSys::MutexSys((MutexSys*)&s_thread_local_allocators_lock);
   __cxa_atexit(embree::MutexSys::~MutexSys, &s_thread_local_allocators_lock, &__dso_handle);
   s_thread_local_allocators._0_8_ = 0;
   s_thread_local_allocators._8_8_ = 0;
   s_thread_local_allocators._16_8_ = 0;
   __cxa_atexit(std::vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>::~vector, s_thread_local_allocators, &__dso_handle);
   local_60 = 0x1e;
   local_58 = local_48;
   __src = (ulong*)std::__cxx11::string::_M_create((ulong*)&local_58, ( ulong ) & local_60);
   __n = local_60;
   uVar1 = _UNK_001028e8;
   local_48[0] = local_60;
   *__src = __LC1;
   __src[1] = uVar1;
   uVar2 = _UNK_001028f8;
   *(undefined8*)( (long)__src + 0xe ) = __LC2;
   *(undefined8*)( (long)__src + 0x16 ) = uVar2;
   local_50 = local_60;
   *(undefined1*)( (long)__src + local_60 ) = 0;
   fast_allocator_regression._0_8_ = &PTR___cxa_pure_virtual_001028b8;
   fast_allocator_regression._8_8_ = 0x100018;
   local_58 = __src;
   if (local_60 < 0x10) {
      if (local_60 == 1) {
         fast_allocator_regression[0x18] = (char)*__src;
         goto LAB_00102738;
      }

      if (local_60 == 0) goto LAB_00102738;
   }
 else {
      fast_allocator_regression._8_8_ = std::__cxx11::string::_M_create((ulong*)( fast_allocator_regression + 8 ), ( ulong ) & local_60);
      fast_allocator_regression._24_8_ = local_60;
   }

   memcpy((void*)fast_allocator_regression._8_8_, __src, __n);
   LAB_00102738:fast_allocator_regression._16_8_ = local_60;
   *(undefined1*)( fast_allocator_regression._8_8_ + local_60 ) = 0;
   if (local_58 != local_48) {
      operator_delete(local_58, local_48[0] + 1);
   }

   fast_allocator_regression._0_8_ = &PTR_run_001028d0;
   embree::BarrierSys::BarrierSys((BarrierSys*)( fast_allocator_regression + 0x28 ), 0);
   fast_allocator_regression._48_8_ = 0;
   fast_allocator_regression._56_8_ = 0;
   embree::registerRegressionTest((RegressionTest*)fast_allocator_regression);
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   __cxa_atexit(fast_allocator_regression_test::~fast_allocator_regression_test, 0x100000, &__dso_handle);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* embree::fast_allocator_regression_test::~fast_allocator_regression_test() */void embree::fast_allocator_regression_test::~fast_allocator_regression_test(fast_allocator_regression_test *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* embree::FastAllocator::~FastAllocator() */void embree::FastAllocator::~FastAllocator(FastAllocator *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* std::vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> >,
   std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> > > >::~vector() */void std::vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>::~vector(vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

