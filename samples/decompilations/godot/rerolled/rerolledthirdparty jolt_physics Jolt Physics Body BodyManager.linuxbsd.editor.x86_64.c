/* JPH::BodyManager::Init(unsigned int, unsigned int, JPH::BroadPhaseLayerInterface const&) */void JPH::BodyManager::Init(BodyManager *this, uint param_1, uint param_2, BroadPhaseLayerInterface *param_3) {
   ulong uVar1;
   int iVar2;
   undefined1(*pauVar3)[16];
   void *pvVar4;
   undefined8 uVar5;
   undefined1(*pauVar6)[16];
   undefined1(*pauVar7)[16];
   long lVar8;
   long lVar9;
   uint uVar10;
   uVar1 = (ulong)param_1;
   iVar2 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x28 ));
   if (iVar2 == 0) {
      if (param_2 == 0) {
         iVar2 = std::thread::hardware_concurrency();
         param_2 = iVar2 * 2;
      }

      if (param_2 < 2) {
         lVar9 = 0;
         lVar8 = 0x40;
         uVar10 = 1;
      }
 else {
         iVar2 = 0x1f;
         if (param_2 - 1 != 0) {
            for (; param_2 - 1 >> iVar2 == 0; iVar2 = iVar2 + -1) {}
         }

         uVar10 = 1 << ( (char)iVar2 + 1U & 0x1f );
         if (0x40 < uVar10) {
            uVar10 = 0x40;
         }

         lVar9 = (ulong)uVar10 - 1;
         lVar8 = (ulong)uVar10 << 6;
      }

      pauVar3 = (undefined1(*) [16])( *AlignedAllocate )(lVar8, 0x40);
      pauVar6 = pauVar3;
      do {
         *(undefined8*)pauVar6[3] = 0;
         pauVar7 = pauVar6 + 4;
         *pauVar6 = (undefined1[16])0x0;
         pauVar6[1] = (undefined1[16])0x0;
         pauVar6[2] = (undefined1[16])0x0;
         pauVar6 = pauVar7;
      }
 while ( pauVar3 + lVar9 * 4 + 4 != pauVar7 );
      *(undefined1(**) [16])( this + 0x50 ) = pauVar3;
      *(uint*)( this + 0x58 ) = uVar10;
      if (*(ulong*)( this + 8 ) < uVar1) {
         uVar5 = ( *Reallocate )(*(undefined8*)( this + 0x10 ), *(ulong*)( this + 8 ) << 3, uVar1 * 8);
         *(ulong*)( this + 8 ) = uVar1;
         *(undefined8*)( this + 0x10 ) = uVar5;
      }

      lVar8 = 0;
      while (true) {
         pvVar4 = (void*)( *Allocate )(uVar1 * 4);
         if (param_1 != 0) {
            pvVar4 = memset(pvVar4, 0xff, uVar1 * 4);
         }

         *(void**)( this + lVar8 + 0xa0 ) = pvVar4;
         if (lVar8 == 8) break;
         lVar8 = 8;
      }
;
      lVar8 = *(long*)( this + 0x70 );
      if (*(ulong*)( this + 0x68 ) < uVar1) {
         lVar8 = ( *Reallocate )(lVar8, *(ulong*)( this + 0x68 ), uVar1);
         *(ulong*)( this + 0x68 ) = uVar1;
         *(long*)( this + 0x70 ) = lVar8;
      }

      pvVar4 = (void*)( lVar8 + *(long*)( this + 0x60 ) );
      if (pvVar4 < (void*)( lVar8 + uVar1 )) {
         memset(pvVar4, 0, uVar1 - *(long*)( this + 0x60 ));
      }

      *(ulong*)( this + 0x60 ) = uVar1;
      *(BroadPhaseLayerInterface**)( this + 0x108 ) = param_3;
      pthread_mutex_unlock((pthread_mutex_t*)( this + 0x28 ));
      return;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar2);
}
/* JPH::BodyManager::GetNumBodies() const */undefined4 JPH::BodyManager::GetNumBodies(BodyManager *this) {
   undefined4 uVar1;
   int iVar2;
   iVar2 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x28 ));
   if (iVar2 == 0) {
      uVar1 = *(undefined4*)( this + 0x18 );
      pthread_mutex_unlock((pthread_mutex_t*)( this + 0x28 ));
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar2);
}
/* JPH::BodyManager::GetBodyStats() const */void JPH::BodyManager::GetBodyStats(void) {
   long *plVar1;
   char cVar2;
   long lVar3;
   long lVar4;
   int iVar5;
   long *plVar6;
   uint uVar7;
   long *in_RSI;
   undefined8 *in_RDI;
   char cVar8;
   uint uVar9;
   iVar5 = pthread_mutex_lock((pthread_mutex_t*)( in_RSI + 5 ));
   if (iVar5 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar5);
   }

   lVar4 = in_RSI[1];
   plVar6 = (long*)in_RSI[2];
   *(undefined1(*) [16])( in_RDI + 1 ) = (undefined1[16])0x0;
   lVar3 = *in_RSI;
   iVar5 = 0;
   *(undefined1(*) [16])( (long)in_RDI + 0x14 ) = (undefined1[16])0x0;
   plVar1 = plVar6 + lVar3;
   *in_RDI = CONCAT44((int)lVar4, (int)in_RSI[3]);
   uVar9 = 0;
   if (plVar6 != plVar1) {
      do {
         while (true) {
            cVar8 = (char)uVar9;
            lVar3 = *plVar6;
            uVar7 = ~(uint)lVar3 & 1;
            if (uVar7 != 0) break;
            LAB_001002a0:plVar6 = plVar6 + 1;
            if (plVar1 == plVar6) goto LAB_001002e0;
         }
;
         if (*(char*)( lVar3 + 0x76 ) != '\x01') {
            cVar2 = *(char*)( lVar3 + 0x78 );
            if (cVar2 == '\x01') {
               lVar3 = *(long*)( lVar3 + 0x48 );
               *(int*)( (long)in_RDI + 0x14 ) = *(int*)( (long)in_RDI + 0x14 ) + 1;
               if (( lVar3 != 0 ) && ( *(int*)( lVar3 + 0x70 ) != -1 )) {
                  *(int*)( in_RDI + 3 ) = *(int*)( in_RDI + 3 ) + 1;
               }

            }
 else if (cVar2 == '\x02') {
               lVar3 = *(long*)( lVar3 + 0x48 );
               *(int*)( (long)in_RDI + 0xc ) = *(int*)( (long)in_RDI + 0xc ) + 1;
               if (( lVar3 != 0 ) && ( *(int*)( lVar3 + 0x70 ) != -1 )) {
                  *(int*)( in_RDI + 2 ) = *(int*)( in_RDI + 2 ) + 1;
               }

            }
 else if (cVar2 == '\0') {
               *(int*)( in_RDI + 1 ) = *(int*)( in_RDI + 1 ) + 1;
            }

            goto LAB_001002a0;
         }

         if (( *(long*)( lVar3 + 0x48 ) != 0 ) && ( *(int*)( *(long*)( lVar3 + 0x48 ) + 0x70 ) != -1 )) {
            *(int*)( in_RDI + 4 ) = *(int*)( in_RDI + 4 ) + 1;
         }

         plVar6 = plVar6 + 1;
         iVar5 = iVar5 + 1;
         uVar9 = uVar7;
         cVar8 = (char)uVar7;
      }
 while ( plVar1 != plVar6 );
      LAB_001002e0:if (cVar8 != '\0') {
         *(int*)( (long)in_RDI + 0x1c ) = iVar5;
      }

   }

   pthread_mutex_unlock((pthread_mutex_t*)( in_RSI + 5 ));
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::BodyManager::AllocateBody(JPH::BodyCreationSettings const&) const */long JPH::BodyManager::AllocateBody(BodyManager *this, BodyCreationSettings *param_1) {
   long *plVar1;
   uint uVar2;
   BodyCreationSettings BVar3;
   byte bVar4;
   undefined4 uVar5;
   long *plVar6;
   long lVar7;
   uint *puVar8;
   bool bVar9;
   bool bVar10;
   bool bVar11;
   bool bVar12;
   bool bVar13;
   bool bVar14;
   bool bVar15;
   uint uVar16;
   uint uVar17;
   uint uVar18;
   uint uVar19;
   uint uVar20;
   uint uVar21;
   undefined8 uVar22;
   undefined1 auVar23[16];
   undefined1 uVar24;
   long lVar25;
   long *plVar26;
   long in_FS_OFFSET;
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined1 auStack_88[88];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1[0x62] == (BodyCreationSettings)0x0 ) && ( param_1[0x60] == (BodyCreationSettings)0x0 )) {
      lVar25 = ( *Allocate )(0x80);
      uVar5 = _LC5;
      *(undefined8*)( lVar25 + 0x50 ) = 0;
      for (int i = 0; i < 4; i++) {
         *(undefined4*)( lVar25 + ( 4*i + 32 ) ) = uVar5;
      }

      uVar5 = _LC7;
      *(undefined8*)( lVar25 + 0x58 ) = 0;
      for (int i = 0; i < 4; i++) {
         *(undefined4*)( lVar25 + ( 4*i + 48 ) ) = uVar5;
      }

      *(undefined8*)( lVar25 + 0x60 ) = 0xffffffffffffffff;
      *(undefined4*)( lVar25 + 0x70 ) = 0xffffffff;
      *(undefined1*)( lVar25 + 0x79 ) = 0;
      *(undefined1(*) [16])( lVar25 + 0x40 ) = (undefined1[16])0x0;
   }
 else {
      lVar25 = ( *Allocate )(0x140);
      uVar5 = _LC5;
      *(undefined8*)( lVar25 + 0x40 ) = 0;
      for (int i = 0; i < 4; i++) {
         *(undefined4*)( lVar25 + ( 4*i + 32 ) ) = uVar5;
      }

      uVar5 = _LC7;
      *(undefined8*)( lVar25 + 0x50 ) = 0;
      *(undefined8*)( lVar25 + 0x58 ) = 0;
      for (int i = 0; i < 4; i++) {
         *(undefined4*)( lVar25 + ( 4*i + 48 ) ) = uVar5;
      }

      uVar22 = _LC31;
      *(undefined4*)( lVar25 + 0x70 ) = 0xffffffff;
      *(undefined8*)( lVar25 + 0x60 ) = uVar22;
      *(undefined8*)( lVar25 + 0xf0 ) = uVar22;
      *(undefined2*)( lVar25 + 0xfa ) = 0x3f;
      *(undefined1*)( lVar25 + 0x79 ) = 0;
      *(undefined8*)( lVar25 + 0xd0 ) = 0;
      *(undefined1*)( lVar25 + 0xfc ) = 0;
      *(long*)( lVar25 + 0x48 ) = lVar25 + 0x80;
      *(undefined1(*) [16])( lVar25 + 0x80 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( lVar25 + 0x90 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( lVar25 + 0xc0 ) = (undefined1[16])0x0;
   }

   *(undefined1*)( lVar25 + 0x76 ) = 0;
   plVar26 = (long*)JPH::BodyCreationSettings::GetShape();
   plVar6 = *(long**)( lVar25 + 0x40 );
   if (plVar26 == plVar6) goto LAB_00100462;
   if (plVar6 == (long*)0x0) {
      LAB_00100452:*(long**)( lVar25 + 0x40 ) = plVar26;
   }
 else {
      LOCK();
      plVar1 = plVar6 + 1;
      *(int*)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) goto LAB_00100452;
      ( **(code**)( *plVar6 + 8 ) )();
      *(long**)( lVar25 + 0x40 ) = plVar26;
   }

   if (plVar26 != (long*)0x0) {
      LOCK();
      *(int*)( plVar26 + 1 ) = (int)plVar26[1] + 1;
      UNLOCK();
   }

   LAB_00100462:BVar3 = param_1[99];
   *(undefined8*)( lVar25 + 0x50 ) = *(undefined8*)( param_1 + 0x40 );
   *(undefined8*)( lVar25 + 0x68 ) = *(undefined8*)( param_1 + 0x6c );
   *(BodyCreationSettings*)( lVar25 + 0x78 ) = param_1[0x60];
   if (BVar3 != (BodyCreationSettings)0x0) {
      LOCK();
      *(byte*)( lVar25 + 0x79 ) = *(byte*)( lVar25 + 0x79 ) | 1;
      UNLOCK();
   }

   if (param_1[100] != (BodyCreationSettings)0x0) {
      LOCK();
      *(byte*)( lVar25 + 0x79 ) = *(byte*)( lVar25 + 0x79 ) | 2;
      UNLOCK();
   }

   if (param_1[0x65] != (BodyCreationSettings)0x0) {
      LOCK();
      *(byte*)( lVar25 + 0x79 ) = *(byte*)( lVar25 + 0x79 ) | 0x10;
      UNLOCK();
   }

   if (param_1[0x66] != (BodyCreationSettings)0x0) {
      LOCK();
      *(byte*)( lVar25 + 0x79 ) = *(byte*)( lVar25 + 0x79 ) | 0x20;
      UNLOCK();
   }

   if (param_1[0x68] != (BodyCreationSettings)0x0) {
      LOCK();
      *(byte*)( lVar25 + 0x79 ) = *(byte*)( lVar25 + 0x79 ) | 0x40;
      UNLOCK();
   }

   lVar7 = **(long**)( this + 0x108 );
   *(undefined2*)( lVar25 + 0x74 ) = *(undefined2*)( param_1 + 0x48 );
   uVar24 = ( **(code**)( lVar7 + 0x18 ) )();
   plVar6 = *(long**)( lVar25 + 0x58 );
   *(undefined1*)( lVar25 + 0x77 ) = uVar24;
   *(undefined2*)( lVar25 + 0x74 ) = *(undefined2*)( param_1 + 0x48 );
   plVar26 = *(long**)( param_1 + 0x50 );
   if (plVar6 != plVar26) {
      if (plVar6 != (long*)0x0) {
         LOCK();
         plVar26 = plVar6 + 1;
         *(int*)plVar26 = (int)*plVar26 + -1;
         UNLOCK();
         if ((int)*plVar26 == 0) {
            ( **(code**)( *plVar6 + 0x18 ) )();
         }

         plVar26 = *(long**)( param_1 + 0x50 );
      }

      *(long**)( lVar25 + 0x58 ) = plVar26;
      if (plVar26 != (long*)0x0) {
         LOCK();
         *(int*)( plVar26 + 1 ) = (int)plVar26[1] + 1;
         UNLOCK();
      }

   }

   BVar3 = param_1[0x62];
   *(undefined8*)( lVar25 + 0x60 ) = *(undefined8*)( param_1 + 0x58 );
   if (( BVar3 != (BodyCreationSettings)0x0 ) || ( param_1[0x60] != (BodyCreationSettings)0x0 )) {
      puVar8 = *(uint**)( lVar25 + 0x48 );
      uVar22 = *(undefined8*)( param_1 + 0x7c );
      *(undefined8*)( puVar8 + 0x17 ) = *(undefined8*)( param_1 + 0x74 );
      *(undefined8*)( puVar8 + 0x19 ) = uVar22;
      JPH::BodyCreationSettings::GetMassProperties();
      JPH::MotionProperties::SetMassProperties(puVar8, param_1[0x61], auStack_88);
      bVar4 = *(byte*)( (long)puVar8 + 0x7a );
      auVar28._4_4_ = _UNK_001042a4;
      auVar28._0_4_ = __LC11;
      auVar28._8_4_ = _UNK_001042a8;
      auVar28._12_4_ = _UNK_001042ac;
      auVar27._1_3_ = 0;
      auVar27[0] = bVar4;
      uVar5 = *(undefined4*)( param_1 + 0x88 );
      auVar27[4] = bVar4;
      auVar27._5_3_ = 0;
      auVar27[8] = bVar4;
      auVar27._9_3_ = 0;
      auVar27[0xc] = bVar4;
      auVar27._13_3_ = 0;
      auVar28 = auVar28 & auVar27;
      auVar23._4_4_ = _UNK_001042b4;
      auVar23._0_4_ = __LC13;
      auVar23._8_4_ = _UNK_001042b8;
      auVar23._12_4_ = _UNK_001042bc;
      auVar27 = auVar27 & auVar23;
      bVar10 = auVar28._4_4_ == _UNK_001042a4;
      bVar12 = auVar28._8_4_ == _UNK_001042a8;
      bVar14 = auVar28._12_4_ == _UNK_001042ac;
      uVar2 = *(uint*)( param_1 + 0x24 );
      uVar16 = *(uint*)( param_1 + 0x28 );
      uVar17 = *(uint*)( param_1 + 0x2c );
      bVar9 = auVar27._0_4_ == __LC13;
      bVar11 = auVar27._4_4_ == _UNK_001042b4;
      bVar13 = auVar27._8_4_ == _UNK_001042b8;
      bVar15 = auVar27._12_4_ == _UNK_001042bc;
      uVar18 = *(uint*)( param_1 + 0x30 );
      uVar19 = *(uint*)( param_1 + 0x34 );
      uVar20 = *(uint*)( param_1 + 0x38 );
      uVar21 = *(uint*)( param_1 + 0x3c );
      *puVar8 = -(uint)(auVar28._0_4_ == __LC11) & *(uint*)( param_1 + 0x20 );
      puVar8[1] = -(uint)bVar10 & uVar2;
      puVar8[2] = -(uint)bVar12 & uVar16;
      puVar8[3] = -(uint)bVar14 & uVar17;
      puVar8[4] = -(uint)bVar9 & uVar18;
      puVar8[5] = -(uint)bVar11 & uVar19;
      puVar8[6] = -(uint)bVar13 & uVar20;
      puVar8[7] = -(uint)bVar15 & uVar21;
      uVar2 = *(uint*)( param_1 + 0x84 );
      *(char*)( (long)puVar8 + 0x7b ) = (char)uVar5;
      uVar5 = *(undefined4*)( param_1 + 0x8c );
      puVar8[0x1b] = uVar2;
      *(char*)( puVar8 + 0x1f ) = (char)uVar5;
      *(BodyCreationSettings*)( puVar8 + 0x1e ) = param_1[0x67];
      *(BodyCreationSettings*)( (long)puVar8 + 0x79 ) = param_1[0x69];
   }

   JPH::Body::SetPositionAndRotationInternal(*(undefined8*)param_1, *(undefined8*)( param_1 + 8 ), *(undefined8*)( param_1 + 0x10 ), *(undefined8*)( param_1 + 0x18 ), lVar25, 1);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar25;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::BodyManager::AllocateSoftBody(JPH::SoftBodyCreationSettings const&) const */long JPH::BodyManager::AllocateSoftBody(BodyManager *this, SoftBodyCreationSettings *param_1) {
   SoftBodyCreationSettings *pSVar1;
   undefined4 uVar2;
   SoftBodyCreationSettings SVar3;
   undefined2 uVar4;
   long *plVar5;
   long lVar6;
   undefined4 uVar7;
   undefined8 uVar8;
   undefined1 uVar9;
   long lVar10;
   long *plVar11;
   undefined8 uVar12;
   undefined8 uVar13;
   lVar10 = ( *Allocate )(0x270);
   uVar7 = _LC7;
   uVar2 = _LC5;
   *(undefined1(*) [16])( lVar10 + 0x40 ) = (undefined1[16])0x0;
   *(undefined8*)( lVar10 + 0x50 ) = 0;
   for (int i = 0; i < 4; i++) {
      *(undefined4*)( lVar10 + ( 4*i + 32 ) ) = uVar2;
   }

   *(undefined8*)( lVar10 + 0x58 ) = 0;
   for (int i = 0; i < 4; i++) {
      *(undefined4*)( lVar10 + ( 4*i + 48 ) ) = uVar7;
   }

   uVar13 = _LC31;
   *(undefined1(*) [16])( lVar10 + 0x80 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( lVar10 + 0x90 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( lVar10 + 0xc0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( lVar10 + 0x140 ) = ZEXT416(_LC2);
   uVar8 = _UNK_001042d8;
   uVar12 = __LC17;
   *(undefined8*)( lVar10 + 0x60 ) = uVar13;
   *(undefined8*)( lVar10 + 0x150 ) = uVar12;
   *(undefined8*)( lVar10 + 0x158 ) = uVar8;
   uVar8 = _UNK_001042e8;
   uVar12 = __LC18;
   *(undefined8*)( lVar10 + 0xf0 ) = uVar13;
   *(undefined8*)( lVar10 + 0x160 ) = uVar12;
   *(undefined8*)( lVar10 + 0x168 ) = uVar8;
   uVar12 = _UNK_001042f8;
   uVar13 = __LC19;
   *(undefined2*)( lVar10 + 0xfa ) = 0x3f;
   *(undefined4*)( lVar10 + 0x70 ) = 0xffffffff;
   *(undefined1*)( lVar10 + 0x79 ) = 0;
   *(undefined8*)( lVar10 + 0xd0 ) = 0;
   *(undefined1*)( lVar10 + 0xfc ) = 0;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( lVar10 + ( 24*i + 384 ) ) = 0;
   }

   *(undefined8*)( lVar10 + 0x170 ) = uVar13;
   *(undefined8*)( lVar10 + 0x178 ) = uVar12;
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( lVar10 + ( 24*i + 392 ) ) = (undefined1[16])0;
   }

   *(undefined8*)( lVar10 + 0x1c8 ) = 0;
   *(undefined8*)( lVar10 + 0x1e0 ) = 0;
   *(undefined4*)( lVar10 + 0x238 ) = 0x3f800000;
   *(undefined2*)( lVar10 + 0x23d ) = 0x100;
   *(undefined1*)( lVar10 + 0x23f ) = 0;
   *(undefined4*)( lVar10 + 0x248 ) = 0;
   *(undefined8*)( lVar10 + 0x250 ) = 0;
   *(undefined2*)( lVar10 + 600 ) = 0xe05;
   *(code**)( lVar10 + 0x240 ) = pthread_rwlock_rdlock;
   *(undefined1(*) [16])( lVar10 + 0x1d0 ) = (undefined1[16])0x0;
   for (int i = 0; i < 4; i++) {
      *(undefined4*)( lVar10 + ( 4*i + 496 ) ) = uVar2;
   }

   for (int i = 0; i < 4; i++) {
      *(undefined4*)( lVar10 + ( 4*i + 512 ) ) = uVar7;
   }

   for (int i = 0; i < 4; i++) {
      *(undefined4*)( lVar10 + ( 4*i + 528 ) ) = uVar2;
   }

   for (int i = 0; i < 4; i++) {
      *(undefined4*)( lVar10 + ( 4*i + 544 ) ) = uVar7;
   }

   LOCK();
   *(int*)( lVar10 + 0x248 ) = *(int*)( lVar10 + 0x248 ) + 0xebedded;
   UNLOCK();
   plVar5 = *(long**)( lVar10 + 0x40 );
   pSVar1 = (SoftBodyCreationSettings*)( lVar10 + 0x80 );
   *(undefined1*)( lVar10 + 0x76 ) = 1;
   *(SoftBodyCreationSettings**)( lVar10 + 0x260 ) = pSVar1;
   *(SoftBodyCreationSettings**)( lVar10 + 0x48 ) = pSVar1;
   if ((long*)( lVar10 + 0x240 ) != plVar5) {
      if (plVar5 != (long*)0x0) {
         LOCK();
         plVar11 = plVar5 + 1;
         *(int*)plVar11 = (int)*plVar11 + -1;
         UNLOCK();
         if ((int)*plVar11 == 0) {
            ( **(code**)( *plVar5 + 8 ) )();
         }

      }

      *(long**)( lVar10 + 0x40 ) = (long*)( lVar10 + 0x240 );
      LOCK();
      *(int*)( lVar10 + 0x248 ) = *(int*)( lVar10 + 0x248 ) + 1;
      UNLOCK();
   }

   uVar12 = *(undefined8*)( param_1 + 0x30 );
   plVar5 = *(long**)( this + 0x108 );
   uVar13 = *(undefined8*)( param_1 + 0x5c );
   uVar4 = *(undefined2*)( param_1 + 0x38 );
   *(undefined1*)( lVar10 + 0x78 ) = 2;
   *(undefined8*)( lVar10 + 0x50 ) = uVar12;
   lVar6 = *plVar5;
   *(undefined2*)( lVar10 + 0x74 ) = uVar4;
   *(ulong*)( lVar10 + 0x68 ) = CONCAT44((int)uVar13, (int)( (ulong)uVar13 >> 0x20 ));
   uVar9 = ( **(code**)( lVar6 + 0x18 ) )();
   plVar5 = *(long**)( lVar10 + 0x58 );
   *(undefined1*)( lVar10 + 0x77 ) = uVar9;
   *(undefined2*)( lVar10 + 0x74 ) = *(undefined2*)( param_1 + 0x38 );
   plVar11 = *(long**)( param_1 + 0x40 );
   if (plVar5 != plVar11) {
      if (plVar5 != (long*)0x0) {
         LOCK();
         plVar11 = plVar5 + 1;
         *(int*)plVar11 = (int)*plVar11 + -1;
         UNLOCK();
         if ((int)*plVar11 == 0) {
            ( **(code**)( *plVar5 + 0x18 ) )();
         }

         plVar11 = *(long**)( param_1 + 0x40 );
      }

      *(long**)( lVar10 + 0x58 ) = plVar11;
      if (plVar11 != (long*)0x0) {
         LOCK();
         *(int*)( plVar11 + 1 ) = (int)plVar11[1] + 1;
         UNLOCK();
      }

   }

   uVar2 = *(undefined4*)( param_1 + 0x54 );
   uVar13 = *(undefined8*)( param_1 + 0x48 );
   *(undefined4*)( lVar10 + 0xe0 ) = 0;
   *(undefined4*)( lVar10 + 0xdc ) = uVar2;
   uVar2 = *(undefined4*)( param_1 + 0x58 );
   *(undefined8*)( lVar10 + 0x60 ) = uVar13;
   SVar3 = param_1[0x6e];
   *(undefined4*)( lVar10 + 0xe4 ) = uVar2;
   *(undefined1(*) [16])( lVar10 + 0x80 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( lVar10 + 0x90 ) = (undefined1[16])0x0;
   uVar2 = *(undefined4*)( param_1 + 0x68 );
   *(undefined4*)( lVar10 + 0xe8 ) = 0x7f7fffff;
   *(SoftBodyCreationSettings*)( lVar10 + 0xf9 ) = SVar3;
   *(undefined1*)( lVar10 + 0xf8 ) = 0;
   *(undefined4*)( lVar10 + 0xec ) = uVar2;
   JPH::SoftBodyMotionProperties::Initialize(pSVar1);
   uVar13 = 0;
   uVar12 = 0x3f80000000000000;
   if (param_1[0x6d] == (SoftBodyCreationSettings)0x0) {
      uVar13 = *(undefined8*)( param_1 + 0x20 );
      uVar12 = *(undefined8*)( param_1 + 0x28 );
   }

   JPH::Body::SetPositionAndRotationInternal(*(undefined8*)( param_1 + 0x10 ), *(undefined8*)( param_1 + 0x18 ), uVar13, uVar12, lVar10, 1);
   return lVar10;
}
/* JPH::BodyManager::AddBody(JPH::Body*) */undefined8 JPH::BodyManager::AddBody(BodyManager *this, Body *param_1) {
   pthread_mutex_t *__mutex;
   undefined8 *puVar1;
   ulong uVar2;
   int iVar3;
   ulong uVar4;
   long lVar5;
   ulong uVar6;
   uint uVar7;
   ulong uVar8;
   if (*(int*)( param_1 + 0x70 ) != -1) {
      return 0;
   }

   __mutex = (pthread_mutex_t*)( this + 0x28 );
   iVar3 = pthread_mutex_lock(__mutex);
   if (iVar3 == 0) {
      if (*(ulong*)( this + 0x20 ) == 0xffffffffffffffff) {
         uVar4 = *(ulong*)this;
         uVar2 = *(ulong*)( this + 8 );
         if (uVar2 <= uVar4) {
            pthread_mutex_unlock(__mutex);
            return 0;
         }

         uVar6 = uVar4 + 1;
         lVar5 = *(long*)( this + 0x10 );
         uVar7 = (uint)uVar4;
         if (uVar2 < uVar6) {
            uVar8 = uVar2 * 2;
            if (uVar2 * 2 < uVar6) {
               uVar8 = uVar6;
            }

            lVar5 = ( *Reallocate )(lVar5, uVar2 << 3, uVar8 * 8);
            uVar4 = *(ulong*)this;
            *(ulong*)( this + 8 ) = uVar8;
            *(long*)( this + 0x10 ) = lVar5;
            uVar6 = uVar4 + 1;
         }

         *(ulong*)this = uVar6;
         *(Body**)( lVar5 + uVar4 * 8 ) = param_1;
      }
 else {
         uVar4 = *(ulong*)( this + 0x20 ) >> 1;
         uVar7 = (uint)uVar4;
         puVar1 = (undefined8*)( *(long*)( this + 0x10 ) + ( uVar4 & 0xffffffff ) * 8 );
         *(undefined8*)( this + 0x20 ) = *puVar1;
         *puVar1 = param_1;
      }

      *(int*)( this + 0x18 ) = *(int*)( this + 0x18 ) + 1;
      pthread_mutex_unlock(__mutex);
      iVar3 = *(byte*)( (long)(int)uVar7 + *(long*)( this + 0x70 ) ) + 1;
      *(byte*)( (long)(int)uVar7 + *(long*)( this + 0x70 ) ) = (byte)iVar3;
      *(uint*)( param_1 + 0x70 ) = iVar3 * 0x1000000 | uVar7;
      return 1;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar3);
}
/* JPH::BodyManager::AddBodyWithCustomID(JPH::Body*, JPH::BodyID const&) */undefined8 JPH::BodyManager::AddBodyWithCustomID(BodyManager *this, Body *param_1, BodyID *param_2) {
   pthread_mutex_t *__mutex;
   ulong *puVar1;
   ulong *puVar2;
   int iVar3;
   ulong uVar4;
   ulong uVar5;
   long lVar6;
   ulong uVar7;
   ulong uVar8;
   ulong uVar9;
   ulong uVar10;
   long lVar11;
   if (*(int*)( param_1 + 0x70 ) != -1) {
      return 0;
   }

   __mutex = (pthread_mutex_t*)( this + 0x28 );
   iVar3 = pthread_mutex_lock(__mutex);
   if (iVar3 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar3);
   }

   uVar5 = *(ulong*)( this + 8 );
   uVar7 = ( ulong )(*(uint*)param_2 & 0x7fffff);
   if (uVar5 <= uVar7) {
      LAB_00100cb0:pthread_mutex_unlock(__mutex);
      return 0;
   }

   uVar8 = *(ulong*)this;
   lVar6 = *(long*)( this + 0x10 );
   if (uVar7 < uVar8) {
      puVar1 = (ulong*)( lVar6 + uVar7 * 8 );
      uVar5 = *puVar1;
      if (( uVar5 & 1 ) == 0) goto LAB_00100cb0;
      uVar8 = *(ulong*)( this + 0x20 ) >> 1;
      if (uVar7 == uVar8) {
         *(ulong*)( this + 0x20 ) = uVar5;
      }
 else {
         do {
            if (uVar8 == 0x7fffffffffffffff) goto LAB_00100c87;
            puVar2 = (ulong*)( lVar6 + uVar8 * 8 );
            uVar8 = *puVar2 >> 1;
         }
 while ( uVar7 != uVar8 );
         *puVar2 = uVar5;
      }

      LAB_00100c87:*puVar1 = (ulong)param_1;
   }
 else {
      if (uVar8 < uVar7) {
         lVar11 = *(long*)( this + 0x20 );
         uVar10 = uVar5;
         do {
            uVar4 = uVar8 + 1;
            uVar9 = uVar8;
            uVar5 = uVar10;
            if (uVar10 < uVar4) {
               uVar5 = uVar4;
               if (uVar4 <= uVar10 * 2) {
                  uVar5 = uVar10 * 2;
               }

               lVar6 = ( *Reallocate )(lVar6, uVar10 << 3, uVar5 * 8);
               *(ulong*)( this + 8 ) = uVar5;
               uVar9 = *(ulong*)this;
               *(long*)( this + 0x10 ) = lVar6;
            }

            uVar8 = uVar9 + 1;
            *(ulong*)this = uVar8;
            *(long*)( lVar6 + uVar9 * 8 ) = lVar11;
            lVar11 = uVar9 * 2 + 1;
            *(long*)( this + 0x20 ) = lVar11;
            uVar10 = uVar5;
         }
 while ( uVar8 < uVar7 );
      }

      uVar7 = uVar8 + 1;
      if (uVar5 < uVar7) {
         uVar8 = uVar5 * 2;
         if (uVar5 * 2 < uVar7) {
            uVar8 = uVar7;
         }

         lVar6 = ( *Reallocate )(lVar6, uVar5 << 3, uVar8 * 8);
         *(ulong*)( this + 8 ) = uVar8;
         uVar8 = *(ulong*)this;
         *(long*)( this + 0x10 ) = lVar6;
      }

      *(ulong*)this = uVar8 + 1;
      *(Body**)( lVar6 + uVar8 * 8 ) = param_1;
   }

   *(int*)( this + 0x18 ) = *(int*)( this + 0x18 ) + 1;
   pthread_mutex_unlock(__mutex);
   *(undefined4*)( param_1 + 0x70 ) = *(undefined4*)param_2;
   return 1;
}
/* JPH::BodyManager::RemoveBodies(JPH::BodyID const*, int, JPH::Body**) */void JPH::BodyManager::RemoveBodies(BodyManager *this, BodyID *param_1, int param_2, Body **param_3) {
   BodyID *pBVar1;
   long *plVar2;
   uint uVar3;
   long lVar4;
   Body *pBVar5;
   int iVar6;
   long lVar7;
   if (param_2 < 1) {
      return;
   }

   iVar6 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x28 ));
   if (iVar6 == 0) {
      pBVar1 = param_1 + (long)param_2 * 4;
      *(int*)( this + 0x18 ) = *(int*)( this + 0x18 ) - param_2;
      if (param_1 < pBVar1) {
         lVar4 = *(long*)( this + 0x10 );
         lVar7 = *(long*)( this + 0x20 );
         do {
            uVar3 = *(uint*)param_1;
            plVar2 = (long*)( lVar4 + ( ulong )(uVar3 & 0x7fffff) * 8 );
            pBVar5 = (Body*)*plVar2;
            *plVar2 = lVar7;
            lVar7 = ( ulong )(uVar3 & 0x7fffff) * 2 + 1;
            *(long*)( this + 0x20 ) = lVar7;
            *(undefined4*)( pBVar5 + 0x70 ) = 0xffffffff;
            if (param_3 != (Body**)0x0) {
               *param_3 = pBVar5;
               param_3 = param_3 + 1;
            }

            param_1 = param_1 + 4;
         }
 while ( param_1 < pBVar1 );
      }

      pthread_mutex_unlock((pthread_mutex_t*)( this + 0x28 ));
      return;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar6);
}
/* JPH::BodyManager::ActivateBodies(JPH::BodyID const*, int) */void JPH::BodyManager::ActivateBodies(BodyManager *this, BodyID *param_1, int param_2) {
   BodyID *pBVar1;
   BodyManager *pBVar2;
   uint uVar3;
   undefined4 uVar4;
   Body *this_00;
   long lVar5;
   long lVar6;
   long *plVar7;
   int iVar8;
   long in_FS_OFFSET;
   uint local_7c;
   undefined8 local_78;
   undefined4 local_70;
   undefined8 local_68;
   undefined4 local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 < 1) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      iVar8 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x78 ));
      if (iVar8 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar8);
      }

      pBVar1 = param_1 + (long)param_2 * 4;
      if (param_1 < pBVar1) {
         do {
            while (( uVar3 = *(uint*)param_1 ),uVar3 == 0xffffffff || ( this_00 = *(Body**)( *(long*)( this + 0x10 ) + ( ulong )(uVar3 & 0x7fffff) * 8 ) ),local_7c = uVar3,this_00[0x78] == (Body)0x0) {
               LAB_00100de0:param_1 = param_1 + 4;
               if (pBVar1 <= param_1) goto LAB_00100ef0;
            }
;
            Body::GetSleepTestPoints(this_00, (Vec3*)&local_78);
            lVar5 = *(long*)( this_00 + 0x48 );
            *(undefined8*)( lVar5 + 0x80 ) = local_78;
            *(undefined4*)( lVar5 + 0x88 ) = local_70;
            *(undefined8*)( lVar5 + 0x90 ) = local_68;
            *(undefined4*)( lVar5 + 0x98 ) = local_60;
            *(undefined4*)( lVar5 + 0x8c ) = 0;
            *(undefined4*)( lVar5 + 0x9c ) = 0;
            *(undefined8*)( lVar5 + 0xa0 ) = local_58;
            *(undefined8*)( lVar5 + 0xac ) = 0;
            *(undefined4*)( lVar5 + 0xa8 ) = local_50;
            if (*(int*)( lVar5 + 0x70 ) != -1) goto LAB_00100de0;
            lVar6 = *(long*)( this + (ulong)(byte)this_00[0x76] * 8 + 0xa0 );
            pBVar2 = this + (long)(int)( (byte)this_00[0x76] + 0x2c ) * 4;
            uVar3 = *(uint*)pBVar2;
            uVar4 = *(undefined4*)( this_00 + 0x70 );
            *(uint*)( lVar5 + 0x70 ) = uVar3;
            *(undefined4*)( lVar6 + (ulong)uVar3 * 4 ) = uVar4;
            LOCK();
            *(uint*)pBVar2 = *(uint*)pBVar2 + 1;
            UNLOCK();
            if (*(char*)( lVar5 + 0x78 ) == '\x01') {
               *(int*)( this + 0xb8 ) = *(int*)( this + 0xb8 ) + 1;
            }

            plVar7 = *(long**)( this + 0x100 );
            if (plVar7 == (long*)0x0) goto LAB_00100de0;
            param_1 = param_1 + 4;
            ( **(code**)( *plVar7 + 0x10 ) )(plVar7, &local_7c, *(undefined8*)( this_00 + 0x50 ));
         }
 while ( param_1 < pBVar1 );
      }

      LAB_00100ef0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         pthread_mutex_unlock((pthread_mutex_t*)( this + 0x78 ));
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::BodyManager::DeactivateBodies(JPH::BodyID const*, int) */void JPH::BodyManager::DeactivateBodies(BodyManager *this, BodyID *param_1, int param_2) {
   BodyID *pBVar1;
   BodyManager *pBVar2;
   uint uVar3;
   uint uVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   undefined1(*pauVar8)[16];
   long *plVar9;
   int iVar10;
   long in_FS_OFFSET;
   uint local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 < 1) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      iVar10 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x78 ));
      if (iVar10 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar10);
      }

      pBVar1 = param_1 + (long)param_2 * 4;
      if (param_1 < pBVar1) {
         do {
            uVar3 = *(uint*)param_1;
            if (uVar3 != 0xffffffff) {
               lVar5 = *(long*)( this + 0x10 );
               lVar6 = *(long*)( lVar5 + ( ulong )(uVar3 & 0x7fffff) * 8 );
               lVar7 = *(long*)( lVar6 + 0x48 );
               local_34 = uVar3;
               if (( lVar7 != 0 ) && ( *(int*)( lVar7 + 0x70 ) != -1 )) {
                  pBVar2 = this + (long)(int)( *(byte*)( lVar6 + 0x76 ) + 0x2c ) * 4;
                  uVar3 = *(uint*)( lVar7 + 0x70 );
                  if (*(int*)pBVar2 - 1U != uVar3) {
                     uVar4 = *(uint*)( *(long*)( this + ( ulong ) * (byte*)( lVar6 + 0x76 ) * 8 + 0xa0 ) + ( ulong )(*(int*)pBVar2 - 1U) * 4 );
                     *(uint*)( *(long*)( this + ( ulong ) * (byte*)( lVar6 + 0x76 ) * 8 + 0xa0 ) + (ulong)uVar3 * 4 ) = uVar4;
                     *(uint*)( *(long*)( *(long*)( lVar5 + ( ulong )(uVar4 & 0x7fffff) * 8 ) + 0x48 ) + 0x70 ) = uVar3;
                  }

                  *(undefined4*)( lVar7 + 0x70 ) = 0xffffffff;
                  LOCK();
                  *(int*)pBVar2 = *(int*)pBVar2 + -1;
                  UNLOCK();
                  if (*(char*)( lVar7 + 0x78 ) == '\x01') {
                     *(int*)( this + 0xb8 ) = *(int*)( this + 0xb8 ) + -1;
                  }

                  pauVar8 = *(undefined1(**) [16])( lVar6 + 0x48 );
                  plVar9 = *(long**)( this + 0x100 );
                  *(undefined4*)( pauVar8[7] + 4 ) = 0xffffffff;
                  *pauVar8 = (undefined1[16])0x0;
                  pauVar8[1] = (undefined1[16])0x0;
                  if (plVar9 != (long*)0x0) {
                     ( **(code**)( *plVar9 + 0x18 ) )(plVar9, &local_34, *(undefined8*)( lVar6 + 0x50 ));
                  }

               }

            }

            param_1 = param_1 + 4;
         }
 while ( param_1 < pBVar1 );
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         pthread_mutex_unlock((pthread_mutex_t*)( this + 0x78 ));
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::BodyManager::SetMotionQuality(JPH::Body&, JPH::EMotionQuality) */void JPH::BodyManager::SetMotionQuality(BodyManager *this, long param_1, char param_3) {
   pthread_mutex_t *__mutex;
   long lVar1;
   int iVar2;
   lVar1 = *(long*)( param_1 + 0x48 );
   if (( lVar1 == 0 ) || ( param_3 == *(char*)( lVar1 + 0x78 ) )) {
      return;
   }

   __mutex = (pthread_mutex_t*)( this + 0x78 );
   iVar2 = pthread_mutex_lock(__mutex);
   if (iVar2 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar2);
   }

   if (( *(long*)( param_1 + 0x48 ) != 0 ) && ( *(int*)( *(long*)( param_1 + 0x48 ) + 0x70 ) != -1 )) {
      if (*(char*)( lVar1 + 0x78 ) == '\x01') {
         *(int*)( this + 0xb8 ) = *(int*)( this + 0xb8 ) + -1;
      }

      *(char*)( lVar1 + 0x78 ) = param_3;
      if (param_3 == '\x01') {
         *(int*)( this + 0xb8 ) = *(int*)( this + 0xb8 ) + 1;
      }

      pthread_mutex_unlock(__mutex);
      return;
   }

   *(char*)( lVar1 + 0x78 ) = param_3;
   pthread_mutex_unlock(__mutex);
   return;
}
/* JPH::BodyManager::GetActiveBodies(JPH::EBodyType, JPH::Array<JPH::BodyID,
   JPH::STLAllocator<JPH::BodyID> >&) const */void JPH::BodyManager::GetActiveBodies(BodyManager *this, uint param_2, long *param_3) {
   long lVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   int iVar5;
   long lVar6;
   undefined4 *puVar7;
   ulong uVar8;
   iVar5 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x78 ));
   if (iVar5 == 0) {
      lVar3 = *(long*)( this + ( (ulong)param_2 & 0xff ) * 8 + 0xa0 );
      uVar2 = *(uint*)( this + ( ( (ulong)param_2 & 0xff ) + 0x2c ) * 4 );
      *param_3 = 0;
      lVar1 = lVar3 + (ulong)uVar2 * 4;
      uVar8 = (long)( (ulong)uVar2 * 4 ) >> 2;
      if ((ulong)param_3[1] < uVar8) {
         lVar6 = ( *Reallocate )(param_3[2], param_3[1] << 2);
         param_3[1] = uVar8;
         param_3[2] = lVar6;
      }

      if (lVar1 != lVar3) {
         lVar4 = *param_3;
         lVar6 = lVar4 + 1;
         puVar7 = (undefined4*)( param_3[2] + lVar4 * 4 );
         do {
            *param_3 = lVar6;
            if (puVar7 != (undefined4*)0x0) {
               *puVar7 = *(undefined4*)( lVar3 + lVar4 * -4 + -4 + lVar6 * 4 );
            }

            lVar6 = lVar6 + 1;
            puVar7 = puVar7 + 1;
         }
 while ( lVar6 != lVar4 + 2 + ( ( lVar1 - lVar3 ) - 4U >> 2 ) );
      }

      pthread_mutex_unlock((pthread_mutex_t*)( this + 0x78 ));
      return;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar5);
}
/* JPH::BodyManager::GetBodyIDs(JPH::Array<JPH::BodyID, JPH::STLAllocator<JPH::BodyID> >&) const */void JPH::BodyManager::GetBodyIDs(BodyManager *this, Array *param_1) {
   ulong *puVar1;
   undefined4 *puVar2;
   ulong uVar3;
   int iVar4;
   long lVar5;
   long lVar6;
   undefined8 uVar7;
   ulong uVar8;
   ulong uVar9;
   ulong *puVar10;
   ulong uVar11;
   iVar4 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x28 ));
   if (iVar4 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar4);
   }

   uVar9 = ( ulong ) * (uint*)( this + 0x18 );
   *(undefined8*)param_1 = 0;
   if (*(ulong*)( param_1 + 8 ) < uVar9) {
      uVar7 = ( *Reallocate )(*(undefined8*)( param_1 + 0x10 ), *(ulong*)( param_1 + 8 ) << 2, uVar9 * 4);
      *(ulong*)( param_1 + 8 ) = uVar9;
      *(undefined8*)( param_1 + 0x10 ) = uVar7;
   }

   puVar10 = *(ulong**)( this + 0x10 );
   puVar1 = puVar10 + *(long*)this;
   do {
      while (true) {
         if (puVar1 == puVar10) {
            pthread_mutex_unlock((pthread_mutex_t*)( this + 0x28 ));
            return;
         }

         uVar9 = *puVar10;
         if (( uVar9 & 1 ) == 0) break;
         LAB_001012d0:puVar10 = puVar10 + 1;
      }
;
      lVar6 = *(long*)param_1;
      uVar3 = *(ulong*)( param_1 + 8 );
      lVar5 = *(long*)( param_1 + 0x10 );
      uVar8 = lVar6 + 1;
      if (uVar3 < uVar8) {
         uVar11 = uVar3 * 2;
         if (uVar3 * 2 < uVar8) {
            uVar11 = uVar8;
         }

         lVar5 = ( *Reallocate )(lVar5, uVar3 << 2, uVar11 * 4);
         *(ulong*)( param_1 + 8 ) = uVar11;
         *(long*)( param_1 + 0x10 ) = lVar5;
         lVar6 = *(long*)param_1;
         uVar8 = lVar6 + 1;
      }

      puVar2 = (undefined4*)( lVar5 + lVar6 * 4 );
      *(ulong*)param_1 = uVar8;
      if (puVar2 == (undefined4*)0x0) goto LAB_001012d0;
      puVar10 = puVar10 + 1;
      *puVar2 = *(undefined4*)( uVar9 + 0x70 );
   }
 while ( true );
}
/* JPH::BodyManager::SetBodyActivationListener(JPH::BodyActivationListener*) */void JPH::BodyManager::SetBodyActivationListener(BodyManager *this, BodyActivationListener *param_1) {
   int iVar1;
   iVar1 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x78 ));
   if (iVar1 == 0) {
      *(BodyActivationListener**)( this + 0x100 ) = param_1;
      pthread_mutex_unlock((pthread_mutex_t*)( this + 0x78 ));
      return;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar1);
}
/* JPH::BodyManager::GetMutexMask(JPH::BodyID const*, int) const */ulong JPH::BodyManager::GetMutexMask(BodyManager *this, BodyID *param_1, int param_2) {
   BodyID *pBVar1;
   int iVar2;
   uint uVar3;
   uint *puVar4;
   byte bVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   uint local_24;
   long local_20[2];
   iVar2 = *(int*)( this + 0x58 );
   local_20[0] = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 < iVar2) {
      uVar6 = 0;
      pBVar1 = param_1 + (long)param_2 * 4;
      if (param_1 < pBVar1) {
         do {
            if (*(uint*)param_1 != 0xffffffff) {
               bVar5 = 0x25;
               local_24 = *(uint*)param_1 & 0x7fffff;
               puVar4 = &local_24;
               do {
                  uVar3 = *puVar4;
                  puVar4 = (uint*)( (long)puVar4 + 1 );
                  bVar5 = ( bVar5 ^ (byte)uVar3 ) * -0x4d;
               }
 while ( puVar4 != (uint*)local_20 );
               uVar6 = uVar6 | 1L << ( bVar5 & (byte)iVar2 - 1 & 0x3f );
            }

            param_1 = param_1 + 4;
         }
 while ( param_1 < pBVar1 );
      }

   }
 else {
      uVar6 = 0xffffffffffffffff;
      if (iVar2 != 0x40) {
         uVar6 = ( 1L << ( (byte)iVar2 & 0x3f ) ) - 1;
      }

   }

   if (local_20[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::BodyManager::LockRead(unsigned long) const */void JPH::BodyManager::LockRead(BodyManager *this, ulong param_1) {
   long lVar1;
   int iVar2;
   long lVar3;
   if (param_1 == 0) {
      return;
   }

   lVar3 = 0;
   do {
      if (( param_1 & 1 ) != 0) {
         lVar1 = *(long*)( this + 0x50 );
         do {
            iVar2 = pthread_rwlock_rdlock((pthread_rwlock_t*)( lVar1 + lVar3 ));
         }
 while ( iVar2 == 0xb );
         if (iVar2 == 0x23) {
            /* WARNING: Subroutine does not return */
            std::__throw_system_error(0x23);
         }

      }

      lVar3 = lVar3 + 0x40;
      param_1 = param_1 >> 1;
      if (param_1 == 0) {
         return;
      }

   }
 while ( true );
}
/* JPH::BodyManager::UnlockRead(unsigned long) const */void JPH::BodyManager::UnlockRead(BodyManager *this, ulong param_1) {
   long lVar1;
   pthread_rwlock_t *__rwlock;
   if (param_1 == 0) {
      return;
   }

   lVar1 = 0;
   do {
      while (( param_1 & 1 ) != 0) {
         __rwlock = (pthread_rwlock_t*)( *(long*)( this + 0x50 ) + lVar1 );
         lVar1 = lVar1 + 0x40;
         pthread_rwlock_unlock(__rwlock);
         param_1 = param_1 >> 1;
         if (param_1 == 0) {
            return;
         }

      }
;
      lVar1 = lVar1 + 0x40;
      param_1 = param_1 >> 1;
   }
 while ( param_1 != 0 );
   return;
}
/* JPH::BodyManager::LockWrite(unsigned long) const */void JPH::BodyManager::LockWrite(BodyManager *this, ulong param_1) {
   int iVar1;
   long lVar2;
   if (param_1 == 0) {
      return;
   }

   lVar2 = 0;
   do {
      if (( param_1 & 1 ) != 0) {
         iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t*)( *(long*)( this + 0x50 ) + lVar2 ));
         if (iVar1 == 0x23) {
            /* WARNING: Subroutine does not return */
            std::__throw_system_error(0x23);
         }

      }

      lVar2 = lVar2 + 0x40;
      param_1 = param_1 >> 1;
   }
 while ( param_1 != 0 );
   return;
}
/* JPH::BodyManager::UnlockWrite(unsigned long) const */void JPH::BodyManager::UnlockWrite(BodyManager *this, ulong param_1) {
   long lVar1;
   pthread_rwlock_t *__rwlock;
   if (param_1 == 0) {
      return;
   }

   lVar1 = 0;
   do {
      while (( param_1 & 1 ) != 0) {
         __rwlock = (pthread_rwlock_t*)( *(long*)( this + 0x50 ) + lVar1 );
         lVar1 = lVar1 + 0x40;
         pthread_rwlock_unlock(__rwlock);
         param_1 = param_1 >> 1;
         if (param_1 == 0) {
            return;
         }

      }
;
      lVar1 = lVar1 + 0x40;
      param_1 = param_1 >> 1;
   }
 while ( param_1 != 0 );
   return;
}
/* JPH::BodyManager::LockAllBodies() const */void JPH::BodyManager::LockAllBodies(BodyManager *this) {
   int iVar1;
   pthread_rwlock_t *__rwlock;
   pthread_rwlock_t *ppVar2;
   __rwlock = *(pthread_rwlock_t**)( this + 0x50 );
   ppVar2 = (pthread_rwlock_t*)( ( ulong ) * (uint*)( this + 0x58 ) * 0x40 + (long)__rwlock );
   for (; __rwlock < ppVar2; __rwlock = (pthread_rwlock_t*)( (long)__rwlock + 0x40 )) {
      iVar1 = pthread_rwlock_wrlock(__rwlock);
      if (iVar1 == 0x23) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(0x23);
      }

   }

   iVar1 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x28 ));
   if (iVar1 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar1);
   }

   return;
}
/* JPH::BodyManager::UnlockAllBodies() const */void JPH::BodyManager::UnlockAllBodies(BodyManager *this) {
   pthread_rwlock_t *__rwlock;
   pthread_rwlock_t *ppVar1;
   pthread_mutex_unlock((pthread_mutex_t*)( this + 0x28 ));
   __rwlock = *(pthread_rwlock_t**)( this + 0x50 );
   ppVar1 = (pthread_rwlock_t*)( ( ulong ) * (uint*)( this + 0x58 ) * 0x40 + (long)__rwlock );
   for (; __rwlock < ppVar1; __rwlock = (pthread_rwlock_t*)( (long)__rwlock + 0x40 )) {
      pthread_rwlock_unlock(__rwlock);
   }

   return;
}
/* JPH::BodyManager::SaveState(JPH::StateRecorder&, JPH::StateRecorderFilter const*) const */void JPH::BodyManager::SaveState(BodyManager *this, StateRecorder *param_1, StateRecorderFilter *param_2) {
   long lVar1;
   StateRecorder *pSVar2;
   ulong uVar3;
   StateRecorder *pSVar4;
   ulong uVar5;
   char cVar6;
   int iVar7;
   ulong uVar8;
   pthread_rwlock_t *ppVar9;
   ulong *puVar10;
   undefined8 *puVar11;
   ulong uVar12;
   ulong uVar13;
   pthread_rwlock_t *ppVar14;
   ulong *puVar15;
   long in_FS_OFFSET;
   undefined8 *local_68;
   undefined1 local_45;
   undefined4 local_44;
   long local_40;
   ppVar9 = *(pthread_rwlock_t**)( this + 0x50 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ppVar14 = (pthread_rwlock_t*)( ( ulong ) * (uint*)( this + 0x58 ) * 0x40 + (long)ppVar9 );
   for (; ppVar9 < ppVar14; ppVar9 = (pthread_rwlock_t*)( (long)ppVar9 + 0x40 )) {
      iVar7 = pthread_rwlock_wrlock(ppVar9);
      if (iVar7 == 0x23) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(0x23);
      }

   }

   iVar7 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x28 ));
   if (iVar7 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar7);
   }

   local_68 = (undefined8*)0x0;
   uVar8 = ( ulong ) * (uint*)( this + 0x18 );
   if (uVar8 == 0) {
      puVar10 = *(ulong**)( this + 0x10 );
      puVar15 = puVar10 + *(long*)this;
      if (puVar10 == puVar15) {
         LAB_001019a5:local_44 = 0;
         ( **(code**)( *(long*)( param_1 + 8 ) + 0x10 ) )(param_1 + 8, &local_44, 4);
         goto LAB_001018fe;
      }

   }
 else {
      local_68 = (undefined8*)( *Reallocate )(0, 0, uVar8 * 8);
      puVar10 = *(ulong**)( this + 0x10 );
      puVar15 = puVar10 + *(long*)this;
      if (puVar10 == puVar15) goto LAB_001019a5;
   }

   uVar12 = 0;
   do {
      while (( ( uVar3 = *puVar10(uVar3 & 1) == 0 && ( ( *(byte*)( uVar3 + 0x79 ) & 4 ) != 0 ) ) && ( ( param_2 == (StateRecorderFilter*)0x0 || ( ( *(code**)( *(long*)param_2 + 0x10 ) == StateRecorderFilter::ShouldSaveBody || ( cVar6 = ( **(code**)( *(long*)param_2 + 0x10 ) )(param_2, uVar3) ),cVar6 != '\0' ) ) ) ) )) {
         uVar13 = uVar12 + 1;
         if (uVar8 < uVar13) {
            uVar5 = uVar8 * 2;
            lVar1 = uVar8 * 8;
            uVar8 = uVar5;
            if (uVar5 < uVar13) {
               uVar8 = uVar13;
            }

            local_68 = (undefined8*)( *Reallocate )(local_68, lVar1, uVar8 * 8);
         }

         puVar10 = puVar10 + 1;
         local_68[uVar12] = uVar3;
         uVar12 = uVar13;
         if (puVar15 == puVar10) goto LAB_00101860;
      }
;
      puVar10 = puVar10 + 1;
      uVar13 = uVar12;
   }
 while ( puVar15 != puVar10 );
   LAB_00101860:pSVar2 = param_1 + 8;
   local_44 = (undefined4)uVar13;
   ( **(code**)( *(long*)( param_1 + 8 ) + 0x10 ) )(pSVar2, &local_44, 4);
   if (local_68 + uVar13 != local_68) {
      puVar11 = local_68;
      do {
         pSVar4 = (StateRecorder*)*puVar11;
         ( **(code**)( *(long*)( param_1 + 8 ) + 0x10 ) )(pSVar2, pSVar4 + 0x70, 4);
         local_45 = false;
         if (*(long*)( pSVar4 + 0x48 ) != 0) {
            local_45 = *(int*)( *(long*)( pSVar4 + 0x48 ) + 0x70 ) != -1;
         }

         puVar11 = puVar11 + 1;
         ( **(code**)( *(long*)( param_1 + 8 ) + 0x10 ) )(pSVar2, &local_45, 1);
         JPH::Body::SaveState(pSVar4);
      }
 while ( local_68 + uVar13 != puVar11 );
   }

   LAB_001018fe:pthread_mutex_unlock((pthread_mutex_t*)( this + 0x28 ));
   ppVar9 = *(pthread_rwlock_t**)( this + 0x50 );
   ppVar14 = (pthread_rwlock_t*)( ( ulong ) * (uint*)( this + 0x58 ) * 0x40 + (long)ppVar9 );
   for (; ppVar9 < ppVar14; ppVar9 = (pthread_rwlock_t*)( (long)ppVar9 + 0x40 )) {
      pthread_rwlock_unlock(ppVar9);
   }

   if (local_68 != (undefined8*)0x0) {
      ( *Free )(local_68);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::BodyManager::RestoreState(JPH::StateRecorder&) */undefined1 JPH::BodyManager::RestoreState(BodyManager *this, StateRecorder *param_1) {
   pthread_mutex_t *__mutex;
   ulong *puVar1;
   BodyManager *pBVar2;
   long lVar3;
   undefined8 *puVar4;
   undefined4 uVar5;
   uint uVar6;
   StateRecorder *pSVar7;
   long lVar8;
   code *pcVar9;
   ulong uVar10;
   undefined1 uVar11;
   int iVar12;
   ulong *puVar13;
   uint *puVar14;
   uint *puVar15;
   ulong uVar16;
   uint uVar17;
   pthread_rwlock_t *ppVar18;
   pthread_rwlock_t *ppVar19;
   undefined8 *puVar20;
   long in_FS_OFFSET;
   ulong local_a0;
   ulong local_98;
   uint *local_90;
   ulong local_80;
   ulong local_78;
   ulong local_70;
   char local_49;
   uint local_48;
   uint local_44;
   long local_40;
   ppVar18 = *(pthread_rwlock_t**)( this + 0x50 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ppVar19 = (pthread_rwlock_t*)( ( ulong ) * (uint*)( this + 0x58 ) * 0x40 + (long)ppVar18 );
   for (; ppVar18 < ppVar19; ppVar18 = (pthread_rwlock_t*)( (long)ppVar18 + 0x40 )) {
      iVar12 = pthread_rwlock_wrlock(ppVar18);
      if (iVar12 == 0x23) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(0x23);
      }

   }

   __mutex = (pthread_mutex_t*)( this + 0x28 );
   iVar12 = pthread_mutex_lock(__mutex);
   if (iVar12 != 0) goto LAB_001021ad;
   if (param_1[0x10] == (StateRecorder)0x0) {
      local_48 = 0;
      ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_48, 4);
      local_90 = (uint*)0x0;
      if (local_48 == 0) goto LAB_0010214b;
      puVar15 = (uint*)0x0;
      uVar17 = 0;
      local_70 = 0;
      local_a0 = 0;
      local_78 = 0;
      local_98 = 0;
      do {
         local_44 = 0xffffffff;
         ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_44, 4);
         if (( ( *(ulong*)this <= ( ulong )(local_44 & 0x7fffff) ) || ( pSVar7 = *(StateRecorder**)( *(long*)( this + 0x10 ) + ( ulong )(local_44 & 0x7fffff) * 8 )((ulong)pSVar7 & 1) != 0 ) ) || ( local_44 != *(uint*)( pSVar7 + 0x70 ) )) {
            pthread_mutex_unlock(__mutex);
            ppVar18 = *(pthread_rwlock_t**)( this + 0x50 );
            ppVar19 = (pthread_rwlock_t*)( ( ulong ) * (uint*)( this + 0x58 ) * 0x40 + (long)ppVar18 );
            for (; uVar11 = 0,ppVar18 < ppVar19; ppVar18 = (pthread_rwlock_t*)( (long)ppVar18 + 0x40 )) {
               pthread_rwlock_unlock(ppVar18);
            }

            goto LAB_00101b81;
         }

         ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_49, 1);
         if (*(long*)( pSVar7 + 0x48 ) == 0) {
            if (local_49 != '\0') {
               LAB_0010201f:uVar16 = local_98 + 1;
               if (local_78 < uVar16) {
                  uVar10 = local_78 * 2;
                  lVar3 = local_78 * 4;
                  local_78 = uVar10;
                  if (uVar10 < uVar16) {
                     local_78 = uVar16;
                  }

                  puVar15 = (uint*)( *Reallocate )(puVar15, lVar3, local_78 * 4);
               }

               puVar14 = puVar15 + local_98;
               local_98 = uVar16;
               if (puVar14 != (uint*)0x0) {
                  *puVar14 = local_44;
               }

            }

         }
 else if ((bool)local_49 != ( *(int*)( *(long*)( pSVar7 + 0x48 ) + 0x70 ) != -1 )) {
            if (local_49 != '\0') goto LAB_0010201f;
            uVar16 = local_a0 + 1;
            if (local_70 < uVar16) {
               uVar10 = local_70 * 2;
               lVar3 = local_70 * 4;
               local_70 = uVar10;
               if (uVar10 < uVar16) {
                  local_70 = uVar16;
               }

               local_90 = (uint*)( *Reallocate )(local_90, lVar3, local_70 * 4);
            }

            puVar14 = local_90 + local_a0;
            local_a0 = uVar16;
            if (puVar14 != (uint*)0x0) {
               *puVar14 = local_44;
            }

         }

         uVar17 = uVar17 + 1;
         JPH::Body::RestoreState(pSVar7);
      }
 while ( uVar17 < local_48 );
   }
 else {
      puVar13 = *(ulong**)( this + 0x10 );
      uVar17 = 0;
      puVar1 = puVar13 + *(long*)this;
      for (; puVar13 != puVar1; puVar13 = puVar13 + 1) {
         while (( *puVar13 & 1 ) != 0) {
            puVar13 = puVar13 + 1;
            if (puVar1 == puVar13) goto LAB_00101c0f;
         }
;
         uVar17 = ( uVar17 + 1 ) - ( uint )(( *(byte*)( *puVar13 + 0x79 ) & 4 ) == 0);
      }

      LAB_00101c0f:local_48 = uVar17;
      ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_48, 4);
      if (local_48 != uVar17) {
         pthread_mutex_unlock(__mutex);
         ppVar18 = *(pthread_rwlock_t**)( this + 0x50 );
         ppVar19 = (pthread_rwlock_t*)( ( ulong ) * (uint*)( this + 0x58 ) * 0x40 + (long)ppVar18 );
         for (; ppVar18 < ppVar19; ppVar18 = (pthread_rwlock_t*)( (long)ppVar18 + 0x40 )) {
            pthread_rwlock_unlock(ppVar18);
         }

         uVar11 = 0;
         goto LAB_00101ba2;
      }

      puVar20 = *(undefined8**)( this + 0x10 );
      local_90 = (uint*)0x0;
      puVar4 = puVar20 + *(long*)this;
      if (puVar4 != puVar20) {
         local_80 = 0;
         puVar15 = (uint*)0x0;
         local_a0 = 0;
         local_78 = 0;
         local_98 = 0;
         LAB_00101c95:do {
            pSVar7 = (StateRecorder*)*puVar20;
            if (( ( (ulong)pSVar7 & 1 ) != 0 ) || ( ( (byte)pSVar7[0x79] & 4 ) == 0 )) goto LAB_00101c88;
            local_44 = *(uint*)( pSVar7 + 0x70 );
            ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_44, 4);
            if (local_44 != *(uint*)( pSVar7 + 0x70 )) {
               pthread_mutex_unlock(__mutex);
               ppVar18 = *(pthread_rwlock_t**)( this + 0x50 );
               ppVar19 = (pthread_rwlock_t*)( ( ulong ) * (uint*)( this + 0x58 ) * 0x40 + (long)ppVar18 );
               for (; ppVar18 < ppVar19; ppVar18 = (pthread_rwlock_t*)( (long)ppVar18 + 0x40 )) {
                  pthread_rwlock_unlock(ppVar18);
               }

               uVar11 = 0;
               goto LAB_00101b81;
            }

            local_49 = false;
            if (*(long*)( pSVar7 + 0x48 ) != 0) {
               local_49 = *(int*)( *(long*)( pSVar7 + 0x48 ) + 0x70 ) != -1;
            }

            ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, &local_49, 1);
            if (*(long*)( pSVar7 + 0x48 ) == 0) {
               if (local_49 == '\0') goto LAB_00101d8c;
               LAB_0010209b:uVar16 = local_98 + 1;
               if (local_78 < uVar16) {
                  uVar10 = local_78 * 2;
                  lVar3 = local_78 * 4;
                  local_78 = uVar10;
                  if (uVar10 < uVar16) {
                     local_78 = uVar16;
                  }

                  puVar15 = (uint*)( *Reallocate )(puVar15, lVar3, local_78 * 4);
               }

               if (puVar15 + local_98 != (uint*)0x0) {
                  puVar15[local_98] = local_44;
               }

               JPH::Body::RestoreState(pSVar7);
               local_98 = uVar16;
            }
 else {
               if ((bool)local_49 != ( *(int*)( *(long*)( pSVar7 + 0x48 ) + 0x70 ) != -1 )) {
                  if (local_49 != '\0') goto LAB_0010209b;
                  uVar16 = local_a0 + 1;
                  if (local_80 < uVar16) {
                     uVar10 = local_80 * 2;
                     lVar3 = local_80 * 4;
                     local_80 = uVar10;
                     if (uVar10 < uVar16) {
                        local_80 = uVar16;
                     }

                     local_90 = (uint*)( *Reallocate )(local_90, lVar3, local_80 * 4);
                  }

                  puVar14 = local_90 + local_a0;
                  local_a0 = uVar16;
                  if (puVar14 != (uint*)0x0) {
                     *puVar14 = local_44;
                  }

               }

               LAB_00101d8c:JPH::Body::RestoreState(pSVar7);
            }

            puVar20 = puVar20 + 1;
         }
 while ( puVar4 != puVar20 );
         goto LAB_00101da8;
      }

      LAB_0010214b:local_90 = (uint*)0x0;
      local_a0 = 0;
      puVar15 = (uint*)0x0;
      local_98 = 0;
   }

   LAB_00101da8:pthread_mutex_unlock(__mutex);
   ppVar18 = *(pthread_rwlock_t**)( this + 0x50 );
   ppVar19 = (pthread_rwlock_t*)( ( ulong ) * (uint*)( this + 0x58 ) * 0x40 + (long)ppVar18 );
   for (; ppVar18 < ppVar19; ppVar18 = (pthread_rwlock_t*)( (long)ppVar18 + 0x40 )) {
      pthread_rwlock_unlock(ppVar18);
   }

   iVar12 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x78 ));
   if (iVar12 == 0) {
      for (puVar14 = puVar15; puVar15 + local_98 != puVar14; puVar14 = puVar14 + 1) {
         uVar16 = ( ulong )(*puVar14 & 0x7fffff);
         if (( ( *(ulong*)this <= uVar16 ) || ( uVar16 = *(ulong*)( *(long*)( this + 0x10 ) + uVar16 * 8 )(uVar16 & 1) != 0 ) ) || ( *(uint*)( uVar16 + 0x70 ) != *puVar14 )) goto JPH_BodyManager_RestoreState;
         lVar3 = *(long*)( uVar16 + 0x48 );
         lVar8 = *(long*)( this + ( ulong ) * (byte*)( uVar16 + 0x76 ) * 8 + 0xa0 );
         pBVar2 = this + (long)(int)( *(byte*)( uVar16 + 0x76 ) + 0x2c ) * 4;
         uVar17 = *(uint*)pBVar2;
         uVar5 = *(undefined4*)( uVar16 + 0x70 );
         *(uint*)( lVar3 + 0x70 ) = uVar17;
         *(undefined4*)( lVar8 + (ulong)uVar17 * 4 ) = uVar5;
         LOCK();
         *(uint*)pBVar2 = *(uint*)pBVar2 + 1;
         UNLOCK();
         if (*(char*)( lVar3 + 0x78 ) == '\x01') {
            *(int*)( this + 0xb8 ) = *(int*)( this + 0xb8 ) + 1;
         }

      }

      for (puVar14 = local_90; local_90 + local_a0 != puVar14; puVar14 = puVar14 + 1) {
         uVar16 = ( ulong )(*puVar14 & 0x7fffff);
         if (*(ulong*)this <= uVar16) {
            JPH_BodyManager_RestoreState:/* WARNING: Does not return */pcVar9 = (code*)invalidInstructionException();
            ( *pcVar9 )();
         }

         lVar3 = *(long*)( this + 0x10 );
         uVar16 = *(ulong*)( lVar3 + uVar16 * 8 );
         if (( ( uVar16 & 1 ) != 0 ) || ( *(uint*)( uVar16 + 0x70 ) != *puVar14 )) goto JPH_BodyManager_RestoreState;
         pBVar2 = this + (long)(int)( *(byte*)( uVar16 + 0x76 ) + 0x2c ) * 4;
         lVar8 = *(long*)( uVar16 + 0x48 );
         uVar17 = *(uint*)( lVar8 + 0x70 );
         if (*(int*)pBVar2 - 1U != uVar17) {
            uVar6 = *(uint*)( *(long*)( this + ( ulong ) * (byte*)( uVar16 + 0x76 ) * 8 + 0xa0 ) + ( ulong )(*(int*)pBVar2 - 1U) * 4 );
            *(uint*)( *(long*)( this + ( ulong ) * (byte*)( uVar16 + 0x76 ) * 8 + 0xa0 ) + (ulong)uVar17 * 4 ) = uVar6;
            *(uint*)( *(long*)( *(long*)( lVar3 + ( ulong )(uVar6 & 0x7fffff) * 8 ) + 0x48 ) + 0x70 ) = uVar17;
         }

         *(undefined4*)( lVar8 + 0x70 ) = 0xffffffff;
         LOCK();
         *(int*)pBVar2 = *(int*)pBVar2 + -1;
         UNLOCK();
         if (*(char*)( lVar8 + 0x78 ) == '\x01') {
            *(int*)( this + 0xb8 ) = *(int*)( this + 0xb8 ) + -1;
         }

      }

      pthread_mutex_unlock((pthread_mutex_t*)( this + 0x78 ));
      uVar11 = 1;
      LAB_00101b81:if (local_90 != (uint*)0x0) {
         ( *Free )(local_90);
      }

      if (puVar15 != (uint*)0x0) {
         ( *Free )(puVar15);
      }

      LAB_00101ba2:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar11;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   LAB_001021ad:/* WARNING: Subroutine does not return */std::__throw_system_error(iVar12);
   LAB_00101c88:puVar20 = puVar20 + 1;
   if (puVar4 == puVar20) goto LAB_00101da8;
   goto LAB_00101c95;
}
/* JPH::BodyManager::SaveBodyState(JPH::Body const&, JPH::StateRecorder&) const */void JPH::BodyManager::SaveBodyState(BodyManager *this, Body *param_1, StateRecorder *param_2) {
   long in_FS_OFFSET;
   undefined1 local_21;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_21 = false;
   if (*(long*)( param_1 + 0x48 ) != 0) {
      local_21 = *(int*)( *(long*)( param_1 + 0x48 ) + 0x70 ) != -1;
   }

   ( **(code**)( *(long*)( param_2 + 8 ) + 0x10 ) )(param_2 + 8, &local_21, 1);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      JPH::Body::SaveState((StateRecorder*)param_1);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::BodyManager::RestoreBodyState(JPH::Body&, JPH::StateRecorder&) */void JPH::BodyManager::RestoreBodyState(BodyManager *this, Body *param_1, StateRecorder *param_2) {
   BodyManager *pBVar1;
   uint uVar2;
   undefined4 uVar3;
   uint uVar4;
   long lVar5;
   long lVar6;
   int iVar7;
   long in_FS_OFFSET;
   bool bVar8;
   char local_21;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_21 = false;
   if (*(long*)( param_1 + 0x48 ) != 0) {
      local_21 = *(int*)( *(long*)( param_1 + 0x48 ) + 0x70 ) != -1;
   }

   ( **(code**)( *(long*)param_2 + 0x10 ) )(param_2, &local_21, 1);
   JPH::Body::RestoreState((StateRecorder*)param_1);
   bVar8 = false;
   if (*(long*)( param_1 + 0x48 ) != 0) {
      bVar8 = *(int*)( *(long*)( param_1 + 0x48 ) + 0x70 ) != -1;
   }

   if ((bool)local_21 != bVar8) {
      iVar7 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x78 ));
      if (iVar7 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar7);
      }

      lVar5 = *(long*)( this + (ulong)(byte)param_1[0x76] * 8 + 0xa0 );
      pBVar1 = this + (long)(int)( (byte)param_1[0x76] + 0x2c ) * 4;
      if (local_21 == '\0') {
         lVar6 = *(long*)( param_1 + 0x48 );
         uVar2 = *(uint*)( lVar6 + 0x70 );
         if (*(uint*)pBVar1 - 1 != uVar2) {
            uVar4 = *(uint*)( lVar5 + ( ulong )(*(uint*)pBVar1 - 1) * 4 );
            *(uint*)( lVar5 + (ulong)uVar2 * 4 ) = uVar4;
            *(uint*)( *(long*)( *(long*)( *(long*)( this + 0x10 ) + ( ulong )(uVar4 & 0x7fffff) * 8 ) + 0x48 ) + 0x70 ) = uVar2;
         }

         *(undefined4*)( lVar6 + 0x70 ) = 0xffffffff;
         LOCK();
         *(uint*)pBVar1 = *(uint*)pBVar1 - 1;
         UNLOCK();
         if (*(char*)( lVar6 + 0x78 ) == '\x01') {
            *(int*)( this + 0xb8 ) = *(int*)( this + 0xb8 ) + -1;
         }

      }
 else {
         lVar6 = *(long*)( param_1 + 0x48 );
         uVar2 = *(uint*)pBVar1;
         uVar3 = *(undefined4*)( param_1 + 0x70 );
         *(uint*)( lVar6 + 0x70 ) = uVar2;
         *(undefined4*)( lVar5 + (ulong)uVar2 * 4 ) = uVar3;
         LOCK();
         *(uint*)pBVar1 = *(uint*)pBVar1 + 1;
         UNLOCK();
         if (*(char*)( lVar6 + 0x78 ) == '\x01') {
            *(int*)( this + 0xb8 ) = *(int*)( this + 0xb8 ) + 1;
         }

      }

      pthread_mutex_unlock((pthread_mutex_t*)( this + 0x78 ));
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::BodyManager::Draw(JPH::BodyManager::DrawSettings const&, JPH::PhysicsSettings const&,
   JPH::DebugRenderer*, JPH::BodyDrawFilter const*) */void JPH::BodyManager::Draw(BodyManager *this, DrawSettings *param_1, PhysicsSettings *param_2, DebugRenderer *param_3, BodyDrawFilter *param_4) {
   undefined8 *puVar1;
   byte bVar2;
   byte bVar3;
   undefined1(*pauVar4)[16];
   DebugRenderer *pDVar5;
   undefined8 uVar6;
   float *pfVar7;
   int iVar8;
   uint uVar9;
   code *pcVar10;
   ulong uVar11;
   uint uVar12;
   long lVar13;
   pthread_rwlock_t *ppVar14;
   undefined8 *puVar15;
   long lVar16;
   pthread_rwlock_t *ppVar17;
   DrawSettings DVar18;
   long in_FS_OFFSET;
   float fVar19;
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   float fVar22;
   float fVar23;
   undefined1 auVar24[16];
   float fVar25;
   float fVar26;
   float fVar27;
   undefined1 auVar28[16];
   float fVar29;
   float fVar30;
   float fVar31;
   float fVar32;
   float fVar33;
   float fVar34;
   float fVar35;
   float fVar36;
   undefined1 auVar37[16];
   undefined1 in_stack_fffffffffffffe78[16];
   undefined8 local_148;
   undefined8 uStack_140;
   undefined8 local_f8;
   undefined8 local_f0;
   uint local_e8;
   uint uStack_e4;
   uint uStack_e0;
   uint uStack_dc;
   float local_d8;
   float fStack_d4;
   float fStack_d0;
   float fStack_cc;
   undefined1 local_c8[4];
   float afStack_c4[3];
   undefined1 local_b8[16];
   undefined8 local_a8;
   ulong uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined1 local_88[4];
   float fStack_84;
   undefined8 uStack_80;
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined8 local_58;
   float local_50;
   float local_4c;
   long local_40;
   ppVar14 = *(pthread_rwlock_t**)( this + 0x50 );
   ppVar17 = (pthread_rwlock_t*)( ( ulong ) * (uint*)( this + 0x58 ) * 0x40 + (long)ppVar14 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (; ppVar14 < ppVar17; ppVar14 = (pthread_rwlock_t*)( (long)ppVar14 + 0x40 )) {
      iVar8 = pthread_rwlock_wrlock(ppVar14);
      if (iVar8 == 0x23) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(0x23);
      }

   }

   iVar8 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x28 ));
   if (iVar8 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar8);
   }

   puVar15 = *(undefined8**)( this + 0x10 );
   puVar1 = puVar15 + *(long*)this;
   do {
      if (puVar1 == puVar15) {
         pthread_mutex_unlock((pthread_mutex_t*)( this + 0x28 ));
         ppVar14 = *(pthread_rwlock_t**)( this + 0x50 );
         ppVar17 = (pthread_rwlock_t*)( ( ulong ) * (uint*)( this + 0x58 ) * 0x40 + (long)ppVar14 );
         for (; ppVar14 < ppVar17; ppVar14 = (pthread_rwlock_t*)( (long)ppVar14 + 0x40 )) {
            pthread_rwlock_unlock(ppVar14);
         }

         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return;
      }

      pauVar4 = (undefined1(*) [16])*puVar15;
      if (( ( ( (ulong)pauVar4 & 1 ) == 0 ) && ( pcVar10 = (code*)(ulong)(byte)pauVar4[7][9](pauVar4[7][9] & 4) != 0 ) ) && ( ( param_4 == (BodyDrawFilter*)0x0 || ( ( pcVar10 = *(code**)( *(long*)param_4 + 0x10 ) ),pcVar10 == BodyDrawFilter::ShouldDraw || ( pcVar10 = (code*)( *pcVar10 )(param_4, pauVar4) ),(char)pcVar10 != '\0' ) ) )) {
         iVar8 = (int)pcVar10;
         bVar2 = pauVar4[7][9];
         if (( bVar2 & 1 ) != 0) {
            LAB_00102482:uVar11 = (ulong)(uint)Color::sYellow;
            goto LAB_00102488;
         }

         if (*(uint*)( param_1 + 8 ) < 6) {
            pcVar10 = (code*)( (long)&switchD_001034df::switchdataD_00103d60 + (long)(int)( &switchD_001034df::switchdataD_00103d60 )[*(uint*)( param_1 + 8 )] );
            switch (*(uint*)( param_1 + 8 )) {
               case 0:
switchD_001034df_caseD_0:
          pcVar10 = (code *)JPH::Color::sGetDistinctColor(*(uint *)pauVar4[7] & 0x7fffff);
          uVar11 = (ulong)pcVar10 & 0xffffffff;
          break;
               case 1:
          pcVar10 = (code *)((ulong)*(byte *)(*(long *)pauVar4[4] + 0x19) * 0x10);
          uVar11 = (ulong)*(uint *)(pcVar10 + 0x105160);
          break;
               case 2:
          bVar3 = pauVar4[7][8];
          pcVar10 = (code *)(ulong)bVar3;
          if (bVar3 != 1) {
            if (bVar3 != 2) {
LAB_001036cf:
              iVar8 = (int)pcVar10;
              if ((char)pcVar10 != '\0') goto LAB_00103744;
              goto LAB_001036d3;
            }
            goto switchD_001034df_caseD_0;
          }
LAB_0010377d:
          uVar11 = (ulong)(uint)Color::sGreen;
          break;
               case 3:
          bVar3 = pauVar4[7][8];
          pcVar10 = (code *)(ulong)bVar3;
          if (bVar3 == 1) {
            pcVar10 = *(code **)(pauVar4[4] + 8);
            if ((pcVar10 != (code *)0x0) && (*(int *)(pcVar10 + 0x70) != -1)) goto LAB_0010377d;
          }
          else {
            if (bVar3 != 2) goto LAB_001036cf;
            pcVar10 = *(code **)(pauVar4[4] + 8);
            if ((pcVar10 != (code *)0x0) && (*(int *)(pcVar10 + 0x70) != -1)) goto LAB_00102482;
          }
          uVar11 = (ulong)(uint)Color::sRed;
          break;
               case 4:
          bVar3 = pauVar4[7][8];
          pcVar10 = (code *)(ulong)bVar3;
          if (bVar3 == 0) {
LAB_001036d3:
            uVar11 = (ulong)(uint)Color::sGrey;
          }
          else {
            iVar8 = bVar3 - 1;
            if (1 < (byte)iVar8) goto LAB_00103744;
            iVar8 = *(int *)(*(long *)(pauVar4[4] + 8) + 0x74);
            pcVar10 = (code *)(ulong)(uint)Color::sLightGrey;
            if (iVar8 != -1) {
              pcVar10 = (code *)JPH::Color::sGetDistinctColor(iVar8);
            }
            uVar11 = (ulong)pcVar10 & 0xffffffff;
          }
          break;
               case 5:
          uVar11 = (ulong)(uint)Color::sWhite;
            }

            LAB_00102488:iVar8 = (int)pcVar10;
            DVar18 = *param_1;
         }
 else {
            LAB_00103744:DVar18 = *param_1;
            uVar11 = (ulong)(uint)Color::sBlack;
         }

         if (DVar18 != (DrawSettings)0x0) {
            local_58 = *(undefined8*)*pauVar4;
            fVar22 = (float)*(undefined8*)pauVar4[1];
            local_50 = *(float*)( *pauVar4 + 8 );
            fVar27 = (float)( ( ulong ) * (undefined8*)pauVar4[1] >> 0x20 );
            pcVar10 = *(code**)( **(long**)pauVar4[4] + 0x88 );
            fVar25 = fVar22 + fVar22;
            fVar32 = fVar27 + fVar27;
            fVar19 = (float)*(undefined8*)( pauVar4[1] + 8 );
            iVar8 = 0x103af0;
            fVar26 = (float)( ( ulong ) * (undefined8*)( pauVar4[1] + 8 ) >> 0x20 );
            fVar34 = fVar19 * ( fVar19 + fVar19 );
            fVar23 = fVar26 * ( fVar19 + fVar19 );
            local_88 = ( _LC2 - fVar27 * fVar32 ) - fVar34;
            register0x00001244 = fVar27 * fVar25 + fVar23;
            register0x00001248 = fVar19 * fVar25 - fVar32 * fVar26;
            register0x0000124c = 0;
            local_78._4_4_ = ( _LC2 - fVar34 ) - fVar22 * fVar25;
            local_78._0_4_ = fVar27 * fVar25 - fVar23;
            local_68._4_4_ = fVar19 * fVar32 - fVar25 * fVar26;
            local_68._0_4_ = fVar19 * fVar25 + fVar32 * fVar26;
            local_78._8_4_ = fVar25 * fVar26 + fVar19 * fVar32;
            local_78._12_4_ = 0;
            local_68._8_4_ = ( _LC2 - fVar22 * fVar25 ) - fVar27 * fVar32;
            local_68._12_4_ = 0;
            local_4c = _LC2;
            if (pcVar10 != Shape::DrawGetSupportFunction) {
               in_stack_fffffffffffffe78._0_4_ = (int)uVar11;
               iVar8 = ( *pcVar10 )(0x3f8000003f800000, *(long**)pauVar4[4], param_3, local_88, uVar11, param_1[1], pcVar10, in_stack_fffffffffffffe78);
               uVar11 = (ulong)in_stack_fffffffffffffe78._0_4_;
            }

         }

         if (param_1[2] != (DrawSettings)0x0) {
            local_58 = *(undefined8*)*pauVar4;
            fVar22 = (float)*(undefined8*)pauVar4[1];
            local_50 = *(float*)( *pauVar4 + 8 );
            fVar27 = (float)( ( ulong ) * (undefined8*)pauVar4[1] >> 0x20 );
            pcVar10 = *(code**)( **(long**)pauVar4[4] + 0x90 );
            fVar32 = fVar27 + fVar27;
            fVar19 = (float)*(undefined8*)( pauVar4[1] + 8 );
            iVar8 = 0x103b00;
            local_4c = _LC2;
            fVar25 = (float)( ( ulong ) * (undefined8*)( pauVar4[1] + 8 ) >> 0x20 );
            fVar26 = fVar22 + fVar22;
            fVar34 = fVar19 * ( fVar19 + fVar19 );
            fVar23 = fVar25 * ( fVar19 + fVar19 );
            local_88 = ( _LC2 - fVar27 * fVar32 ) - fVar34;
            register0x00001244 = fVar27 * fVar26 + fVar23;
            register0x00001248 = fVar19 * fVar26 - fVar32 * fVar25;
            register0x0000124c = 0;
            local_78._4_4_ = ( _LC2 - fVar34 ) - fVar22 * fVar26;
            local_78._0_4_ = fVar27 * fVar26 - fVar23;
            local_68._4_4_ = fVar19 * fVar32 - fVar26 * fVar25;
            local_68._0_4_ = fVar19 * fVar26 + fVar32 * fVar25;
            local_78._8_4_ = fVar26 * fVar25 + fVar19 * fVar32;
            local_78._12_4_ = 0;
            local_68._8_4_ = ( _LC2 - fVar22 * fVar26 ) - fVar27 * fVar32;
            local_68._12_4_ = 0;
            if (pcVar10 != Shape::DrawGetSupportingFace) {
               in_stack_fffffffffffffe78._0_4_ = (int)uVar11;
               iVar8 = ( *pcVar10 )(0x3f8000003f800000, *(long**)pauVar4[4], param_3, local_88);
               uVar11 = (ulong)in_stack_fffffffffffffe78._0_4_;
            }

         }

         if (param_1[3] == (DrawSettings)0x0) {
            if (param_1[0xc] != (DrawSettings)0x0) goto LAB_001030b5;
            LAB_0010275d:if (param_1[0xd] != (DrawSettings)0x0) goto LAB_001030d1;
            LAB_00102769:if (param_1[0xe] != (DrawSettings)0x0) goto LAB_00103220;
            LAB_00102775:DVar18 = param_1[0xf];
         }
 else {
            in_stack_fffffffffffffe78._0_4_ = (int)uVar11;
            local_58 = *(undefined8*)*pauVar4;
            fVar19 = (float)*(undefined8*)pauVar4[1];
            local_50 = *(float*)( *pauVar4 + 8 );
            fVar22 = (float)( ( ulong ) * (undefined8*)pauVar4[1] >> 0x20 );
            fVar23 = fVar22 + fVar22;
            DVar18 = ( DrawSettings )(bVar2 & 1);
            if (param_1[4] != (DrawSettings)0x0) {
               DVar18 = param_1[4];
            }

            fVar27 = (float)*(undefined8*)( pauVar4[1] + 8 );
            fVar32 = (float)( ( ulong ) * (undefined8*)( pauVar4[1] + 8 ) >> 0x20 );
            fVar25 = fVar19 + fVar19;
            local_4c = _LC2;
            fVar34 = fVar27 * ( fVar27 + fVar27 );
            fVar26 = fVar32 * ( fVar27 + fVar27 );
            local_88 = ( _LC2 - fVar22 * fVar23 ) - fVar34;
            register0x00001244 = fVar22 * fVar25 + fVar26;
            register0x00001248 = fVar27 * fVar25 - fVar23 * fVar32;
            register0x0000124c = 0;
            local_78._4_4_ = ( _LC2 - fVar34 ) - fVar19 * fVar25;
            local_78._0_4_ = fVar22 * fVar25 - fVar26;
            local_68._4_4_ = fVar27 * fVar23 - fVar25 * fVar32;
            local_68._0_4_ = fVar27 * fVar25 + fVar23 * fVar32;
            local_78._8_4_ = fVar25 * fVar32 + fVar27 * fVar23;
            local_78._12_4_ = 0;
            local_68._8_4_ = ( _LC2 - fVar19 * fVar25 ) - fVar22 * fVar23;
            local_68._12_4_ = 0;
            iVar8 = ( **(code**)( **(long**)pauVar4[4] + 0x80 ) )(0x3f8000003f800000, *(long**)pauVar4[4], param_3, local_88, uVar11, *(int*)( param_1 + 8 ) == 5, DVar18, in_stack_fffffffffffffe78);
            uVar11 = (ulong)in_stack_fffffffffffffe78._0_4_;
            if (param_1[0xc] == (DrawSettings)0x0) goto LAB_0010275d;
            LAB_001030b5:iVar8 = JPH::DebugRenderer::DrawWireBox(param_3, pauVar4 + 2, uVar11);
            if (param_1[0xd] == (DrawSettings)0x0) goto LAB_00102769;
            LAB_001030d1:local_58 = *(undefined8*)*pauVar4;
            fVar23 = (float)*(undefined8*)pauVar4[1];
            fVar19 = (float)*(undefined8*)( pauVar4[1] + 8 );
            fVar32 = (float)( ( ulong ) * (undefined8*)pauVar4[1] >> 0x20 );
            fVar25 = fVar32 + fVar32;
            fVar26 = fVar23 + fVar23;
            fVar22 = (float)( ( ulong ) * (undefined8*)( pauVar4[1] + 8 ) >> 0x20 );
            local_50 = *(float*)( *pauVar4 + 8 );
            local_4c = _LC2;
            fVar34 = fVar19 * ( fVar19 + fVar19 );
            fVar27 = ( fVar19 + fVar19 ) * fVar22;
            local_88 = ( _LC2 - fVar32 * fVar25 ) - fVar34;
            register0x00001244 = fVar32 * fVar26 + fVar27;
            register0x00001248 = fVar19 * fVar26 - fVar25 * fVar22;
            register0x0000124c = 0;
            local_78._4_4_ = ( _LC2 - fVar34 ) - fVar23 * fVar26;
            local_78._0_4_ = fVar32 * fVar26 - fVar27;
            local_68._4_4_ = fVar19 * fVar25 - fVar26 * fVar22;
            local_68._0_4_ = fVar19 * fVar26 + fVar25 * fVar22;
            local_78._8_4_ = fVar26 * fVar22 + fVar19 * fVar25;
            local_78._12_4_ = 0;
            local_68._8_4_ = ( _LC2 - fVar23 * fVar26 ) - fVar32 * fVar25;
            local_68._12_4_ = 0;
            iVar8 = JPH::DebugRenderer::DrawCoordinateSystem((Mat44*)param_3, _LC23);
            if (param_1[0xe] == (DrawSettings)0x0) goto LAB_00102775;
            LAB_00103220:fVar23 = (float)*(undefined8*)pauVar4[1];
            fVar22 = (float)*(undefined8*)( pauVar4[1] + 8 );
            fVar19 = *(float*)( *pauVar4 + 8 );
            fVar33 = (float)( ( ulong ) * (undefined8*)pauVar4[1] >> 0x20 );
            fVar26 = fVar23 + fVar23;
            uVar6 = *(undefined8*)*pauVar4;
            fVar30 = fVar33 + fVar33;
            fVar32 = (float)( ( ulong ) * (undefined8*)( pauVar4[1] + 8 ) >> 0x20 );
            fVar31 = fVar22 * ( fVar22 + fVar22 );
            fVar27 = fVar32 * ( fVar22 + fVar22 );
            fVar25 = fVar22 * fVar26 + fVar30 * fVar32;
            fVar29 = fVar22 * fVar26 - fVar30 * fVar32;
            fVar35 = fVar22 * fVar30 - fVar26 * fVar32;
            fVar34 = fVar26 * fVar32 + fVar22 * fVar30;
            fVar32 = ( _LC2 - fVar23 * fVar26 ) - fVar33 * fVar30;
            auVar37._4_4_ = fVar35;
            auVar37._0_4_ = fVar25;
            fVar36 = ( _LC2 - fVar31 ) - fVar23 * fVar26;
            auVar24._0_4_ = fVar33 * fVar26 - fVar27;
            fVar27 = fVar33 * fVar26 + fVar27;
            auVar24._4_4_ = fVar36;
            auVar24._8_4_ = fVar34;
            auVar24._12_4_ = 0;
            auVar28._0_4_ = ( _LC2 - fVar33 * fVar30 ) - fVar31;
            auVar28._4_4_ = fVar27;
            auVar28._8_4_ = fVar29;
            auVar28._12_4_ = 0;
            in_stack_fffffffffffffe78 = ( **(code**)( **(long**)pauVar4[4] + 0x18 ) )();
            auVar37._8_4_ = fVar32;
            auVar37._12_4_ = 0;
            fVar22 = 0.0 - in_stack_fffffffffffffe78._0_4_;
            fVar23 = 0.0 - in_stack_fffffffffffffe78._4_4_;
            fVar26 = 0.0 - in_stack_fffffffffffffe78._8_4_;
            local_4c = _LC2;
            local_148._0_4_ = (float)uVar6;
            local_148._4_4_ = (float)( (ulong)uVar6 >> 0x20 );
            local_58 = CONCAT44(fVar22 * fVar27 + fVar23 * fVar36 + fVar26 * fVar35 + local_148._4_4_, fVar22 * auVar28._0_4_ + fVar23 * auVar24._0_4_ + fVar26 * fVar25 + (float)local_148);
            local_50 = fVar22 * fVar29 + fVar23 * fVar34 + fVar26 * fVar32 + fVar19;
            _local_88 = auVar28;
            local_78 = auVar24;
            local_68 = auVar37;
            iVar8 = JPH::DebugRenderer::DrawCoordinateSystem((Mat44*)param_3, _LC23);
            DVar18 = param_1[0xf];
         }

         if (DVar18 != (DrawSettings)0x0) {
            in_stack_fffffffffffffe78 = *pauVar4;
            fVar19 = 0.0;
            fVar22 = 0.0;
            fVar23 = 0.0;
            fVar27 = 0.0;
            if (pauVar4[7][8] != '\0') {
               pfVar7 = *(float**)( pauVar4[4] + 8 );
               fVar19 = *pfVar7;
               fVar22 = pfVar7[1];
               fVar23 = pfVar7[2];
               fVar27 = pfVar7[3];
            }

            local_148 = CONCAT44(fVar22 + in_stack_fffffffffffffe78._4_4_, fVar19 + in_stack_fffffffffffffe78._0_4_);
            uStack_140 = CONCAT44(fVar27 + in_stack_fffffffffffffe78._12_4_, fVar23 + in_stack_fffffffffffffe78._8_4_);
            JPH::DebugRenderer::DrawArrow(in_stack_fffffffffffffe78._0_8_, in_stack_fffffffffffffe78._8_8_, local_148, uStack_140, param_3, (uint)Color::sGreen);
            fVar19 = 0.0;
            fVar22 = 0.0;
            fVar23 = 0.0;
            fVar27 = 0.0;
            if (pauVar4[7][8] != '\0') {
               lVar16 = *(long*)( pauVar4[4] + 8 );
               fVar19 = *(float*)( lVar16 + 0x10 );
               fVar22 = *(float*)( lVar16 + 0x14 );
               fVar23 = *(float*)( lVar16 + 0x18 );
               fVar27 = *(float*)( lVar16 + 0x1c );
            }

            local_148 = CONCAT44(fVar22 + in_stack_fffffffffffffe78._4_4_, fVar19 + in_stack_fffffffffffffe78._0_4_);
            uStack_140 = CONCAT44(fVar27 + in_stack_fffffffffffffe78._12_4_, fVar23 + in_stack_fffffffffffffe78._8_4_);
            iVar8 = JPH::DebugRenderer::DrawArrow(in_stack_fffffffffffffe78._0_8_, in_stack_fffffffffffffe78._8_8_, local_148, uStack_140, param_3, (uint)Color::sRed);
         }

         if (param_1[0x10] == (DrawSettings)0x0) {
            LAB_00102d88:if (( ( param_1[0x11] != (DrawSettings)0x0 ) && ( pauVar4[7][8] == '\x02' ) ) && ( lVar16 = lVar16 != 0 )) {
               LAB_00102dac:if (*(int*)( lVar16 + 0x70 ) != -1) {
                  JPH::StringFormat_abi_cxx11_(local_88, (double)*(float*)( lVar16 + 0xb0 ), "t: %.1f");
                  fVar19 = ( _LC30 * *(float*)( *(long*)( pauVar4[4] + 8 ) + 0xb0 ) ) / *(float*)( param_2 + 0x44 );
                  if (fVar19 < 0.0) {
                     uVar9 = 0xffffffff;
                     uVar12 = 0;
                  }
 else {
                     uVar9 = 0;
                     uVar12 = 0xff;
                     if (fVar19 <= _LC30) {
                        uVar12 = (int)fVar19 & 0xff;
                        uVar9 = ~(int)fVar19;
                     }

                  }

                  lVar16 = 0;
                  uVar9 = ( uVar9 & 0xff ) << 8 | uVar12 << 0x10;
                  local_f8 = uStack_80;
                  local_f0 = _local_88;
                  ( **(code**)( *(long*)param_3 + 0x38 ) )(*(undefined8*)*pauVar4, *(undefined8*)( *pauVar4 + 8 ), param_3, &local_f8, uVar9 | 0xff000000);
                  do {
                     lVar13 = lVar16 * 0x10;
                     lVar16 = lVar16 + 1;
                     in_stack_fffffffffffffe78 = *(undefined1(*) [16])( *(long*)( pauVar4[4] + 8 ) + 0x80 + lVar13 );
                     JPH::DebugRenderer::DrawWireSphere(in_stack_fffffffffffffe78._0_8_, in_stack_fffffffffffffe78._8_8_, param_3, uVar9 | 0xff000000, 3);
                  }
 while ( lVar16 != 3 );
                  if (_local_88 != local_78) {
                     ( *Free )();
                  }

               }

            }

         }
 else if (pauVar4[7][8] == '\x02') {
            lVar16 = *(long*)( pauVar4[4] + 8 );
            if (0.0 < *(float*)( lVar16 + 0x58 )) {
               auVar37 = *(undefined1(*) [16])( lVar16 + 0x20 );
               auVar21._4_4_ = -(uint)(auVar37._4_4_ == 0.0);
               auVar21._0_4_ = -(uint)(auVar37._0_4_ == 0.0);
               auVar21._8_4_ = -(uint)(auVar37._8_4_ == 0.0);
               auVar21._12_4_ = -(uint)(auVar37._12_4_ == 0.0);
               uVar9 = movmskps(iVar8, auVar21);
               if (( uVar9 & 7 ) == 0) {
                  auVar20._4_4_ = _LC2;
                  auVar20._0_4_ = _LC2;
                  fVar29 = _LC2 / *(float*)( lVar16 + 0x58 );
                  auVar20._8_4_ = _LC2;
                  auVar20._12_4_ = _LC2;
                  divps(auVar20, auVar37);
                  auVar37 = JPH::MassProperties::sGetEquivalentSolidBoxSize();
                  fVar23 = (float)*(undefined8*)( lVar16 + 0x30 );
                  fVar19 = (float)*(undefined8*)( lVar16 + 0x38 );
                  local_d8 = _LC1 * auVar37._0_4_;
                  fStack_d4 = _LC1 * auVar37._4_4_;
                  fStack_d0 = _LC1 * auVar37._8_4_;
                  fStack_cc = _LC1 * auVar37._12_4_;
                  fVar32 = (float)( ( ulong ) * (undefined8*)( lVar16 + 0x30 ) >> 0x20 );
                  fVar26 = fVar23 + fVar23;
                  local_e8 = _LC27 ^ (uint)local_d8;
                  uStack_e4 = _LC27 ^ (uint)fStack_d4;
                  uStack_e0 = _LC27 ^ (uint)fStack_d0;
                  uStack_dc = _LC27 ^ (uint)fStack_cc;
                  fVar34 = (float)( ( ulong ) * (undefined8*)( lVar16 + 0x38 ) >> 0x20 );
                  fVar31 = fVar32 + fVar32;
                  fVar22 = fVar34 * ( fVar19 + fVar19 );
                  fVar33 = fVar19 * ( fVar19 + fVar19 );
                  local_c8 = ( _LC2 - fVar32 * fVar31 ) - fVar33;
                  register0x00001384 = fVar32 * fVar26 + fVar22;
                  register0x00001388 = fVar19 * fVar26 - fVar31 * fVar34;
                  register0x0000138c = 0;
                  fVar27 = (float)*(undefined8*)pauVar4[1];
                  fVar25 = fVar27 + fVar27;
                  local_b8._4_4_ = ( _LC2 - fVar33 ) - fVar23 * fVar26;
                  local_b8._0_4_ = fVar32 * fVar26 - fVar22;
                  fVar22 = (float)*(undefined8*)( pauVar4[1] + 8 );
                  local_b8._8_4_ = fVar26 * fVar34 + fVar19 * fVar31;
                  local_b8._12_4_ = 0;
                  uVar6 = *(undefined8*)*pauVar4;
                  fVar33 = (float)( ( ulong ) * (undefined8*)( pauVar4[1] + 8 ) >> 0x20 );
                  fVar30 = fVar22 * ( fVar22 + fVar22 );
                  local_a8 = CONCAT44(fVar19 * fVar31 - fVar26 * fVar34, fVar19 * fVar26 + fVar31 * fVar34);
                  uStack_a0 = ( ulong )(uint)(( _LC2 - fVar23 * fVar26 ) - fVar32 * fVar31);
                  local_98 = __LC19;
                  uStack_90 = _UNK_001042f8;
                  fVar23 = (float)( ( ulong ) * (undefined8*)pauVar4[1] >> 0x20 );
                  fVar19 = *(float*)( *pauVar4 + 8 );
                  fVar32 = fVar23 + fVar23;
                  lVar16 = 0;
                  fVar26 = fVar33 * ( fVar22 + fVar22 );
                  do {
                     fVar34 = *(float*)( local_c8 + lVar16 );
                     fVar31 = *(float*)( local_c8 + lVar16 + 4 );
                     fVar35 = *(float*)( local_c8 + lVar16 + 8 );
                     fVar36 = *(float*)( local_c8 + lVar16 + 0xc );
                     *(float*)( local_88 + lVar16 ) = fVar36 * (float)uVar6 + fVar31 * ( fVar23 * fVar25 - fVar26 ) + fVar34 * ( ( _LC2 - fVar23 * fVar32 ) - fVar30 ) + fVar35 * ( fVar22 * fVar25 + fVar32 * fVar33 );
                     *(float*)( local_88 + lVar16 + 4 ) = fVar36 * (float)( (ulong)uVar6 >> 0x20 ) + fVar31 * ( ( _LC2 - fVar30 ) - fVar27 * fVar25 ) + fVar34 * ( fVar23 * fVar25 + fVar26 ) + fVar35 * ( fVar22 * fVar32 - fVar25 * fVar33 );
                     *(float*)( local_88 + lVar16 + 8 ) = fVar36 * fVar19 + fVar31 * ( fVar25 * fVar33 + fVar22 * fVar32 ) + fVar34 * ( fVar22 * fVar25 - fVar32 * fVar33 ) + fVar35 * ( ( _LC2 - fVar27 * fVar25 ) - fVar23 * fVar32 );
                     *(float*)( local_88 + lVar16 + 0xc ) = fVar36 * 1.0 + fVar31 * 0.0 + fVar34 * 0.0 + fVar35 * 0.0;
                     lVar16 = lVar16 + 0x10;
                  }
 while ( lVar16 != 0x40 );
                  in_stack_fffffffffffffe78._8_8_ = auVar37._8_8_;
                  in_stack_fffffffffffffe78._0_8_ = local_88;
                  JPH::DebugRenderer::DrawWireBox(param_3, local_88, &local_e8, (undefined4)Color::sOrange);
                  pcVar10 = *(code**)( *(long*)param_3 + 0x38 );
                  JPH::StringFormat_abi_cxx11_(in_stack_fffffffffffffe78._0_8_, (double)fVar29, &_LC28);
                  local_f8 = uStack_80;
                  local_f0 = _local_88;
                  ( *pcVar10 )(*(undefined8*)*pauVar4, *(undefined8*)( *pauVar4 + 8 ), param_3, &local_f8, (undefined4)Color::sOrange);
                  if (_local_88 != local_78) {
                     ( *Free )();
                  }

                  goto LAB_00102d88;
               }

            }

            if (param_1[0x11] != (DrawSettings)0x0) goto LAB_00102dac;
         }

         if (pauVar4[7][6] == '\x01') {
            pDVar5 = *(DebugRenderer**)( pauVar4[4] + 8 );
            fVar22 = (float)*(undefined8*)pauVar4[1];
            fVar19 = (float)*(undefined8*)( pauVar4[1] + 8 );
            local_58 = *(undefined8*)*pauVar4;
            fVar25 = (float)( ( ulong ) * (undefined8*)pauVar4[1] >> 0x20 );
            fVar32 = (float)( ( ulong ) * (undefined8*)( pauVar4[1] + 8 ) >> 0x20 );
            fVar27 = fVar22 + fVar22;
            fVar26 = fVar25 + fVar25;
            local_50 = *(float*)( *pauVar4 + 8 );
            local_4c = _LC2;
            fVar34 = fVar19 * ( fVar19 + fVar19 );
            fVar23 = fVar32 * ( fVar19 + fVar19 );
            local_88 = ( _LC2 - fVar25 * fVar26 ) - fVar34;
            register0x00001244 = fVar25 * fVar27 + fVar23;
            register0x00001248 = fVar19 * fVar27 - fVar26 * fVar32;
            register0x0000124c = 0;
            local_78._4_4_ = ( _LC2 - fVar34 ) - fVar22 * fVar27;
            local_78._0_4_ = fVar25 * fVar27 - fVar23;
            local_68._4_4_ = fVar19 * fVar26 - fVar27 * fVar32;
            local_68._0_4_ = fVar19 * fVar27 + fVar26 * fVar32;
            local_78._8_4_ = fVar27 * fVar32 + fVar19 * fVar26;
            local_78._12_4_ = 0;
            local_68._8_4_ = ( _LC2 - fVar22 * fVar27 ) - fVar25 * fVar26;
            local_68._12_4_ = 0;
            if (param_1[0x12] != (DrawSettings)0x0) {
               JPH::SoftBodyMotionProperties::DrawVertices(pDVar5, (Mat44*)param_3);
            }

            if (param_1[0x13] != (DrawSettings)0x0) {
               JPH::SoftBodyMotionProperties::DrawVertexVelocities(pDVar5, (Mat44*)param_3);
            }

            if (param_1[0x14] != (DrawSettings)0x0) {
               JPH::SoftBodyMotionProperties::DrawEdgeConstraints(pDVar5, param_3, local_88, *(undefined4*)( param_1 + 0x1c ));
            }

            if (param_1[0x15] != (DrawSettings)0x0) {
               JPH::SoftBodyMotionProperties::DrawBendConstraints(pDVar5, param_3, local_88, *(undefined4*)( param_1 + 0x1c ));
            }

            if (param_1[0x16] != (DrawSettings)0x0) {
               JPH::SoftBodyMotionProperties::DrawVolumeConstraints(pDVar5, param_3, local_88, *(undefined4*)( param_1 + 0x1c ));
            }

            if (param_1[0x17] != (DrawSettings)0x0) {
               JPH::SoftBodyMotionProperties::DrawSkinConstraints(pDVar5, param_3, local_88, *(undefined4*)( param_1 + 0x1c ));
            }

            if (param_1[0x18] != (DrawSettings)0x0) {
               JPH::SoftBodyMotionProperties::DrawLRAConstraints(pDVar5, param_3, local_88, *(undefined4*)( param_1 + 0x1c ));
            }

            if (param_1[0x19] != (DrawSettings)0x0) {
               JPH::SoftBodyMotionProperties::DrawPredictedBounds(pDVar5, (Mat44*)param_3);
            }

         }

      }

      puVar15 = puVar15 + 1;
   }
 while ( true );
}
/* JPH::BodyManager::InvalidateContactCacheForBody(JPH::Body&) */void JPH::BodyManager::InvalidateContactCacheForBody(BodyManager *this, Body *param_1) {
   undefined4 *puVar1;
   ulong uVar2;
   Body BVar3;
   Body BVar4;
   int iVar5;
   long lVar6;
   long lVar7;
   ulong uVar8;
   ulong uVar9;
   bool bVar10;
   BVar4 = param_1[0x79];
   do {
      BVar3 = BVar4;
      LOCK();
      BVar4 = param_1[0x79];
      bVar10 = BVar3 == BVar4;
      if (bVar10) {
         param_1[0x79] = ( Body )((byte)BVar3 | 8);
         BVar4 = BVar3;
      }

      UNLOCK();
   }
 while ( !bVar10 );
   if (( (byte)BVar3 & 8 ) == 0) {
      iVar5 = pthread_mutex_lock((pthread_mutex_t*)( this + 0xc0 ));
      if (iVar5 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar5);
      }

      lVar6 = *(long*)( this + 0xe8 );
      uVar2 = *(ulong*)( this + 0xf0 );
      lVar7 = *(long*)( this + 0xf8 );
      uVar8 = lVar6 + 1;
      if (uVar2 < uVar8) {
         uVar9 = uVar2 * 2;
         if (uVar2 * 2 < uVar8) {
            uVar9 = uVar8;
         }

         lVar7 = ( *Reallocate )(lVar7, uVar2 << 2, uVar9 * 4);
         *(ulong*)( this + 0xf0 ) = uVar9;
         *(long*)( this + 0xf8 ) = lVar7;
         lVar6 = *(long*)( this + 0xe8 );
         uVar8 = lVar6 + 1;
      }

      puVar1 = (undefined4*)( lVar7 + lVar6 * 4 );
      *(ulong*)( this + 0xe8 ) = uVar8;
      if (puVar1 != (undefined4*)0x0) {
         *puVar1 = *(undefined4*)( param_1 + 0x70 );
      }

      pthread_mutex_unlock((pthread_mutex_t*)( this + 0xc0 ));
      return;
   }

   return;
}
/* JPH::BodyManager::ValidateContactCacheForAllBodies() */void JPH::BodyManager::ValidateContactCacheForAllBodies(BodyManager *this) {
   uint *puVar1;
   int iVar2;
   uint *puVar3;
   ulong uVar4;
   iVar2 = pthread_mutex_lock((pthread_mutex_t*)( this + 0xc0 ));
   if (iVar2 == 0) {
      puVar3 = *(uint**)( this + 0xf8 );
      puVar1 = puVar3 + *(long*)( this + 0xe8 );
      for (; puVar1 != puVar3; puVar3 = puVar3 + 1) {
         uVar4 = ( ulong )(*puVar3 & 0x7fffff);
         if (( ( uVar4 < *(ulong*)this ) && ( uVar4 = *(ulong*)( *(long*)( this + 0x10 ) + uVar4 * 8 )(uVar4 & 1) == 0 ) ) && ( *puVar3 == *(uint*)( uVar4 + 0x70 ) )) {
            LOCK();
            *(byte*)( uVar4 + 0x79 ) = *(byte*)( uVar4 + 0x79 ) & 0xf7;
            UNLOCK();
         }

      }

      *(undefined8*)( this + 0xe8 ) = 0;
      pthread_mutex_unlock((pthread_mutex_t*)( this + 0xc0 ));
      return;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar2);
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::BodyManager::~BodyManager() */void JPH::BodyManager::~BodyManager(BodyManager *this) {
   undefined8 *puVar1;
   int iVar2;
   undefined8 *puVar3;
   iVar2 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x28 ));
   if (iVar2 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar2);
   }

   puVar3 = *(undefined8**)( this + 0x10 );
   puVar1 = puVar3 + *(long*)this;
   for (; puVar1 != puVar3; puVar3 = puVar3 + 1) {
      while (( ( ulong ) * puVar3 & 1 ) != 0) {
         puVar3 = puVar3 + 1;
         if (puVar1 == puVar3) goto LAB_00103990;
      }
;
      sDeleteBody((Body*)*puVar3);
   }

   LAB_00103990:if (*(long*)( this + 0xa0 ) != 0) {
      ( *Free )();
   }

   if (*(long*)( this + 0xa8 ) != 0) {
      ( *Free )();
   }

   pthread_mutex_unlock((pthread_mutex_t*)( this + 0x28 ));
   if (*(long*)( this + 0xf8 ) != 0) {
      *(undefined8*)( this + 0xe8 ) = 0;
      ( *Free )();
   }

   if (*(long*)( this + 0x70 ) != 0) {
      *(undefined8*)( this + 0x60 ) = 0;
      ( *Free )();
   }

   if (*(long*)( this + 0x50 ) != 0) {
      ( *_AlignedFree )();
   }

   if (*(long*)( this + 0x10 ) != 0) {
      *(undefined8*)this = 0;
      /* WARNING: Could not recover jumptable at 0x00103a1a. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *Free )();
      return;
   }

   return;
}
/* JPH::BodyManager::FreeBody(JPH::Body*) const */void JPH::BodyManager::FreeBody(BodyManager *this, Body *param_1) {
   sDeleteBody(param_1);
   return;
}
/* JPH::BodyManager::DestroyBodies(JPH::BodyID const*, int) */void JPH::BodyManager::DestroyBodies(BodyManager *this, BodyID *param_1, int param_2) {
   BodyID *pBVar1;
   undefined8 *puVar2;
   uint uVar3;
   Body *pBVar4;
   int iVar5;
   if (param_2 < 1) {
      return;
   }

   iVar5 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x28 ));
   if (iVar5 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar5);
   }

   *(int*)( this + 0x18 ) = *(int*)( this + 0x18 ) - param_2;
   pBVar1 = param_1 + (long)param_2 * 4;
   if (param_1 < pBVar1) {
      do {
         uVar3 = *(uint*)param_1;
         param_1 = param_1 + 4;
         puVar2 = (undefined8*)( *(long*)( this + 0x10 ) + ( ulong )(uVar3 & 0x7fffff) * 8 );
         pBVar4 = (Body*)*puVar2;
         *puVar2 = *(undefined8*)( this + 0x20 );
         *(ulong*)( this + 0x20 ) = ( ulong )(uVar3 & 0x7fffff) * 2 + 1;
         sDeleteBody(pBVar4);
      }
 while ( param_1 < pBVar1 );
   }

   pthread_mutex_unlock((pthread_mutex_t*)( this + 0x28 ));
   return;
}
/* JPH::Shape::DrawGetSupportFunction(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3, JPH::Color,
   bool) const */void JPH::Shape::DrawGetSupportFunction(void) {
   return;
}
/* JPH::Shape::DrawGetSupportingFace(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3) const */void JPH::Shape::DrawGetSupportingFace(void) {
   return;
}
/* JPH::StateRecorderFilter::ShouldSaveBody(JPH::Body const&) const */undefined8 JPH::StateRecorderFilter::ShouldSaveBody(Body *param_1) {
   return 1;
}
/* JPH::BodyDrawFilter::ShouldDraw(JPH::Body const&) const */undefined8 JPH::BodyDrawFilter::ShouldDraw(Body *param_1) {
   return 1;
}
/* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   /* WARNING: Could not recover jumptable at 0x00103b34. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *Free )();
   return;
}
/* JPH::Body::GetSleepTestPoints(JPH::Vec3*) const */void JPH::Body::GetSleepTestPoints(Body *this, Vec3 *param_1) {
   undefined8 uVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   char cVar6;
   long in_FS_OFFSET;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   float fVar20;
   float fVar21;
   float fVar22;
   float fVar23;
   float local_48;
   float fStack_44;
   float fStack_40;
   float local_38;
   float fStack_34;
   float fStack_30;
   long local_20;
   uVar1 = *(undefined8*)( this + 8 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)param_1 = *(undefined8*)this;
   *(undefined8*)( param_1 + 8 ) = uVar1;
   ( **(code**)( **(long**)( this + 0x40 ) + 0x20 ) )(&local_48);
   fVar7 = ( local_38 - local_48 ) * _LC1;
   fVar8 = ( fStack_34 - fStack_44 ) * _LC1;
   fVar9 = ( fStack_30 - fStack_40 ) * _LC1;
   if (fVar8 <= fVar7) {
      cVar6 = ( fVar9 < fVar8 ) + '\x01';
   }
 else {
      cVar6 = ( fVar9 < fVar7 ) * '\x02';
   }

   fVar12 = (float)*(undefined8*)( this + 0x10 );
   fVar4 = (float)*(undefined8*)( this + 0x18 );
   fVar14 = (float)( ( ulong ) * (undefined8*)( this + 0x10 ) >> 0x20 );
   fVar13 = fVar12 + fVar12;
   fVar21 = fVar14 + fVar14;
   fVar5 = (float)( ( ulong ) * (undefined8*)( this + 0x18 ) >> 0x20 );
   fVar19 = ( fVar4 + fVar4 ) * fVar4;
   fVar20 = ( fVar4 + fVar4 ) * fVar5;
   fVar23 = fVar4 * fVar21 - fVar13 * fVar5;
   fVar18 = fVar4 * fVar13 + fVar21 * fVar5;
   fVar17 = fVar4 * fVar13 - fVar21 * fVar5;
   fVar15 = ( _LC2 - fVar12 * fVar13 ) - fVar21 * fVar14;
   fVar22 = fVar14 * fVar13 + fVar20;
   fVar16 = ( _LC2 - fVar21 * fVar14 ) - fVar19;
   fVar10 = *(float*)this;
   fVar11 = *(float*)( this + 4 );
   fVar2 = *(float*)( this + 8 );
   fVar3 = *(float*)( this + 0xc );
   if (cVar6 == '\x01') {
      *(float*)( param_1 + 0x10 ) = fVar7 * fVar16 + fVar10;
      *(float*)( param_1 + 0x14 ) = fVar7 * fVar22 + fVar11;
      *(float*)( param_1 + 0x18 ) = fVar7 * fVar17 + fVar2;
      *(float*)( param_1 + 0x1c ) = fVar7 * 0.0 + fVar3;
      fVar7 = fVar9 * fVar18 + *(float*)this;
      fVar10 = fVar9 * fVar23 + *(float*)( this + 4 );
      fVar11 = fVar9 * fVar15 + *(float*)( this + 8 );
      fVar8 = fVar9 * 0.0 + *(float*)( this + 0xc );
   }
 else {
      fVar20 = fVar14 * fVar13 - fVar20;
      fVar14 = fVar13 * fVar5 + fVar4 * fVar21;
      fVar12 = ( _LC2 - fVar19 ) - fVar12 * fVar13;
      if (cVar6 == '\x02') {
         *(float*)( param_1 + 0x10 ) = fVar7 * fVar16 + fVar10;
         *(float*)( param_1 + 0x14 ) = fVar7 * fVar22 + fVar11;
         *(float*)( param_1 + 0x18 ) = fVar7 * fVar17 + fVar2;
         *(float*)( param_1 + 0x1c ) = fVar7 * 0.0 + fVar3;
         fVar7 = *(float*)this + fVar8 * fVar20;
         fVar10 = *(float*)( this + 4 ) + fVar8 * fVar12;
         fVar11 = *(float*)( this + 8 ) + fVar8 * fVar14;
         fVar8 = *(float*)( this + 0xc ) + fVar8 * 0.0;
      }
 else {
         *(float*)( param_1 + 0x10 ) = fVar20 * fVar8 + fVar10;
         *(float*)( param_1 + 0x14 ) = fVar12 * fVar8 + fVar11;
         *(float*)( param_1 + 0x18 ) = fVar14 * fVar8 + fVar2;
         *(float*)( param_1 + 0x1c ) = fVar8 * 0.0 + fVar3;
         fVar7 = fVar9 * fVar18 + *(float*)this;
         fVar10 = fVar9 * fVar23 + *(float*)( this + 4 );
         fVar11 = fVar9 * fVar15 + *(float*)( this + 8 );
         fVar8 = fVar9 * 0.0 + *(float*)( this + 0xc );
      }

   }

   *(float*)( param_1 + 0x20 ) = fVar7;
   *(float*)( param_1 + 0x24 ) = fVar10;
   *(float*)( param_1 + 0x28 ) = fVar11;
   *(float*)( param_1 + 0x2c ) = fVar8;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::BodyManager::RestoreState(JPH::StateRecorder&) [clone .cold] */void JPH::BodyManager::RestoreState(StateRecorder *param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   return;
}
/* JPH::SoftBodySharedSettings::~SoftBodySharedSettings() */void JPH::SoftBodySharedSettings::~SoftBodySharedSettings(SoftBodySharedSettings *this) {
   long *plVar1;
   long *plVar2;
   long *plVar3;
   long *plVar4;
   if (*(long*)( this + 0x128 ) != 0) {
      *(undefined8*)( this + 0x118 ) = 0;
      ( *Free )();
   }

   if (*(long*)( this + 0x110 ) != 0) {
      *(undefined8*)( this + 0x100 ) = 0;
      ( *Free )();
   }

   if (*(long*)( this + 0xf8 ) != 0) {
      *(undefined8*)( this + 0xe8 ) = 0;
      ( *Free )();
   }

   plVar4 = *(long**)( this + 0xd8 );
   if (plVar4 != (long*)0x0) {
      if (( *(long*)( this + 200 ) != 0 ) && ( plVar2 = plVar4 < plVar2 )) {
         do {
            while (plVar3 = (long*)*plVar4,plVar3 == (long*)0x0) {
               LAB_00103f20:plVar4 = plVar4 + 1;
               if (plVar2 <= plVar4) goto LAB_00103f58;
            }
;
            LOCK();
            plVar1 = plVar3 + 1;
            *(int*)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 != 0) goto LAB_00103f20;
            if (*(code**)( *plVar3 + 0x18 ) != PhysicsMaterial::~PhysicsMaterial) {
               ( **(code**)( *plVar3 + 0x18 ) )();
               goto LAB_00103f20;
            }

            ( *Free )();
            plVar4 = plVar4 + 1;
         }
 while ( plVar4 < plVar2 );
         LAB_00103f58:plVar4 = *(long**)( this + 0xd8 );
      }

      *(undefined8*)( this + 200 ) = 0;
      ( *Free )(plVar4);
   }

   for (int i = 0; i < 7; i++) {
      if (*(long*)( this + ( -24*i + 192 ) ) != 0) {
         *(undefined8*)( this + ( -24*i + 176 ) ) = 0;
         ( *Free )();
      }

   }

   if (*(long*)( this + 0x18 ) == 0) {
      return;
   }

   *(undefined8*)( this + 8 ) = 0;
   /* WARNING: Could not recover jumptable at 0x00103efa. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *Free )();
   return;
}
/* JPH::SoftBodyMotionProperties::~SoftBodyMotionProperties() */void JPH::SoftBodyMotionProperties::~SoftBodyMotionProperties(SoftBodyMotionProperties *this) {
   long *plVar1;
   long *plVar2;
   SoftBodySharedSettings *this_00;
   ulong uVar3;
   ulong uVar4;
   ulong uVar5;
   ulong uVar6;
   if (*(long*)( this + 0x160 ) != 0) {
      *(undefined8*)( this + 0x150 ) = 0;
      ( *Free )();
   }

   uVar4 = *(ulong*)( this + 0x148 );
   if (uVar4 != 0) {
      if (( *(long*)( this + 0x138 ) != 0 ) && ( uVar6 = uVar4 < uVar6 )) {
         do {
            uVar3 = *(ulong*)( uVar4 + 0x50 );
            if (uVar3 != 0) {
               if (( *(long*)( uVar4 + 0x40 ) != 0 ) && ( uVar5 = uVar3 < uVar5 )) {
                  do {
                     while (plVar2 = *(long**)( uVar3 + 0x50 ),plVar2 == (long*)0x0) {
                        LAB_00104008:uVar3 = uVar3 + 0x60;
                        if (uVar5 <= uVar3) goto LAB_00104030;
                     }
;
                     LOCK();
                     plVar1 = plVar2 + 1;
                     *(int*)plVar1 = (int)*plVar1 + -1;
                     UNLOCK();
                     if ((int)*plVar1 != 0) goto LAB_00104008;
                     uVar3 = uVar3 + 0x60;
                     ( **(code**)( *plVar2 + 8 ) )();
                  }
 while ( uVar3 < uVar5 );
                  LAB_00104030:uVar3 = *(ulong*)( uVar4 + 0x50 );
               }

               *(undefined8*)( uVar4 + 0x40 ) = 0;
               ( *Free )(uVar3);
            }

            uVar4 = uVar4 + 0x60;
         }
 while ( uVar4 < uVar6 );
         uVar4 = *(ulong*)( this + 0x148 );
      }

      *(undefined8*)( this + 0x138 ) = 0;
      ( *Free )(uVar4);
   }

   uVar4 = *(ulong*)( this + 0x130 );
   if (uVar4 != 0) {
      if (( *(long*)( this + 0x120 ) != 0 ) && ( uVar6 = uVar4 < uVar6 )) {
         do {
            uVar3 = *(ulong*)( uVar4 + 0x50 );
            if (uVar3 != 0) {
               if (( *(long*)( uVar4 + 0x40 ) != 0 ) && ( uVar5 = uVar3 < uVar5 )) {
                  do {
                     while (plVar2 = *(long**)( uVar3 + 0x50 ),plVar2 == (long*)0x0) {
                        LAB_001040c8:uVar3 = uVar3 + 0x60;
                        if (uVar5 <= uVar3) goto LAB_001040f0;
                     }
;
                     LOCK();
                     plVar1 = plVar2 + 1;
                     *(int*)plVar1 = (int)*plVar1 + -1;
                     UNLOCK();
                     if ((int)*plVar1 != 0) goto LAB_001040c8;
                     uVar3 = uVar3 + 0x60;
                     ( **(code**)( *plVar2 + 8 ) )();
                  }
 while ( uVar3 < uVar5 );
                  LAB_001040f0:uVar3 = *(ulong*)( uVar4 + 0x50 );
               }

               *(undefined8*)( uVar4 + 0x40 ) = 0;
               ( *Free )(uVar3);
            }

            uVar4 = uVar4 + 0x100;
         }
 while ( uVar4 < uVar6 );
         uVar4 = *(ulong*)( this + 0x130 );
      }

      *(undefined8*)( this + 0x120 ) = 0;
      ( *Free )(uVar4);
   }

   if (*(long*)( this + 0x118 ) != 0) {
      *(undefined8*)( this + 0x108 ) = 0;
      ( *Free )();
   }

   this_00 = *(SoftBodySharedSettings**)( this + 0x100 );
   if (this_00 != (SoftBodySharedSettings*)0x0) {
      LOCK();
      *(int*)this_00 = *(int*)this_00 + -1;
      UNLOCK();
      if (*(int*)this_00 == 0) {
         SoftBodySharedSettings::~SoftBodySharedSettings(this_00);
         /* WARNING: Could not recover jumptable at 0x00104183. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *Free )(this_00);
         return;
      }

   }

   return;
}
/* JPH::BodyManager::sDeleteBody(JPH::Body*) */void JPH::BodyManager::sDeleteBody(Body *param_1) {
   long *plVar1;
   long *plVar2;
   if (( *(long*)( param_1 + 0x48 ) == 0 ) || ( param_1[0x76] != (Body)0x1 )) {
      plVar2 = *(long**)( param_1 + 0x58 );
   }
 else {
      plVar2 = *(long**)( param_1 + 0x40 );
      if (plVar2 != (long*)0x0) {
         LOCK();
         plVar1 = plVar2 + 1;
         *(int*)plVar1 = (int)*plVar1 + -1;
         UNLOCK();
         if ((int)*plVar1 == 0) {
            ( **(code**)( *plVar2 + 8 ) )();
         }

         *(undefined8*)( param_1 + 0x40 ) = 0;
      }

      SoftBodyMotionProperties::~SoftBodyMotionProperties((SoftBodyMotionProperties*)( param_1 + 0x80 ));
      plVar2 = *(long**)( param_1 + 0x58 );
   }

   if (plVar2 != (long*)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int*)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
         ( **(code**)( *plVar2 + 0x18 ) )();
      }

   }

   plVar2 = *(long**)( param_1 + 0x40 );
   if (plVar2 != (long*)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int*)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
         ( **(code**)( *plVar2 + 8 ) )();
         /* WARNING: Could not recover jumptable at 0x0010421a. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *Free )(param_1);
         return;
      }

   }

   /* WARNING: Could not recover jumptable at 0x001041c9. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *Free )(param_1);
   return;
}
/* JPH::BodyManager::~BodyManager() */void JPH::BodyManager::_GLOBAL__sub_I__BodyManager(void) {
   if (DVec3::cTrue == '\0') {
      DVec3::cTrue = '\x01';
      DVec3::cTrue = _LC31;
   }

   return;
}
/* WARNING: Control flow encountered bad instruction data *//* JPH::SoftBodyMotionProperties::~SoftBodyMotionProperties() */void JPH::SoftBodyMotionProperties::~SoftBodyMotionProperties(SoftBodyMotionProperties *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* JPH::SoftBodySharedSettings::~SoftBodySharedSettings() */void JPH::SoftBodySharedSettings::~SoftBodySharedSettings(SoftBodySharedSettings *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

