/* JPH::PhysicsUpdateContext::PhysicsUpdateContext(JPH::TempAllocator&) */void JPH::PhysicsUpdateContext::PhysicsUpdateContext(PhysicsUpdateContext *this, TempAllocator *param_1) {
   *(TempAllocator**)( this + 8 ) = param_1;
   *(undefined4*)( this + 0x28 ) = 0;
   *(TempAllocator**)( this + 0x48 ) = param_1;
   *(undefined8*)( this + 0x60 ) = 0;
   *(undefined8*)( this + 0x70 ) = 0;
   *(undefined4*)( this + 0x78 ) = 0;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x50 ) = (undefined1[16])0x0;
   return;
}
/* JPH::PhysicsUpdateContext::~PhysicsUpdateContext() */void JPH::PhysicsUpdateContext::~PhysicsUpdateContext(PhysicsUpdateContext *this) {
   long lVar1;
   Step *this_00;
   Step *pSVar2;
   Step *pSVar3;
   pSVar3 = *(Step**)( this + 0x60 );
   if (pSVar3 != (Step*)0x0) {
      lVar1 = *(long*)( this + 0x50 );
      if (( lVar1 != 0 ) && ( this_00 = pSVar3 ),pSVar3 < pSVar3 + lVar1 * 0x1cb0) {
         do {
            pSVar2 = this_00 + 0x1cb0;
            Step::~Step(this_00);
            this_00 = pSVar2;
         }
 while ( pSVar2 < pSVar3 + lVar1 * 0x1cb0 );
         pSVar3 = *(Step**)( this + 0x60 );
      }

      *(undefined8*)( this + 0x50 ) = 0;
      /* WARNING: Could not recover jumptable at 0x001000a9. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( **(long**)( this + 0x48 ) + 0x18 ) )(*(long**)( this + 0x48 ), pSVar3, *(int*)( this + 0x58 ) * 0x1cb0);
      return;
   }

   return;
}
/* JPH::PhysicsUpdateContext::Step::~Step() */void JPH::PhysicsUpdateContext::Step::~Step(Step *this) {
   int *piVar1;
   Step *pSVar2;
   undefined8 *puVar3;
   Step *pSVar4;
   puVar3 = *(undefined8**)( this + 0x1ca8 );
   if (puVar3 != (undefined8*)0x0) {
      LOCK();
      piVar1 = (int*)( puVar3 + 6 );
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
         ( **(code**)( *(long*)*puVar3 + 0x48 ) )();
      }

   }

   puVar3 = *(undefined8**)( this + 0x1ca0 );
   if (puVar3 != (undefined8*)0x0) {
      LOCK();
      piVar1 = (int*)( puVar3 + 6 );
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
         ( **(code**)( *(long*)*puVar3 + 0x48 ) )();
      }

   }

   pSVar4 = this + 0x1ba0;
   pSVar2 = pSVar4 + ( ulong ) * (uint*)( this + 0x1b98 ) * 8;
   joined_r0x0010010d:if (pSVar4 < pSVar2) {
      do {
         puVar3 = *(undefined8**)pSVar4;
         if (puVar3 != (undefined8*)0x0) {
            LOCK();
            piVar1 = (int*)( puVar3 + 6 );
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) goto code_r0x00100130;
         }

         pSVar4 = pSVar4 + 8;
         if (pSVar2 <= pSVar4) break;
      }
 while ( true );
   }

   pSVar4 = this + 0x1a98;
   pSVar2 = pSVar4 + ( ulong ) * (uint*)( this + 0x1a90 ) * 8;
   joined_r0x0010015c:if (pSVar4 < pSVar2) {
      do {
         puVar3 = *(undefined8**)pSVar4;
         if (puVar3 != (undefined8*)0x0) {
            LOCK();
            piVar1 = (int*)( puVar3 + 6 );
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) goto code_r0x00100178;
         }

         pSVar4 = pSVar4 + 8;
         if (pSVar2 <= pSVar4) break;
      }
 while ( true );
   }

   puVar3 = *(undefined8**)( this + 0x1a88 );
   if (puVar3 != (undefined8*)0x0) {
      LOCK();
      piVar1 = (int*)( puVar3 + 6 );
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
         ( **(code**)( *(long*)*puVar3 + 0x48 ) )();
      }

   }

   puVar3 = *(undefined8**)( this + 0x1a80 );
   if (puVar3 != (undefined8*)0x0) {
      LOCK();
      piVar1 = (int*)( puVar3 + 6 );
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
         ( **(code**)( *(long*)*puVar3 + 0x48 ) )();
      }

   }

   pSVar4 = this + 0x1980;
   pSVar2 = pSVar4 + ( ulong ) * (uint*)( this + 0x1978 ) * 8;
   joined_r0x001001d2:if (pSVar4 < pSVar2) {
      do {
         puVar3 = *(undefined8**)pSVar4;
         if (puVar3 != (undefined8*)0x0) {
            LOCK();
            piVar1 = (int*)( puVar3 + 6 );
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) goto code_r0x001001f8;
         }

         pSVar4 = pSVar4 + 8;
         if (pSVar2 <= pSVar4) break;
      }
 while ( true );
   }

   puVar3 = *(undefined8**)( this + 0x1970 );
   if (puVar3 != (undefined8*)0x0) {
      LOCK();
      piVar1 = (int*)( puVar3 + 6 );
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
         ( **(code**)( *(long*)*puVar3 + 0x48 ) )();
      }

   }

   puVar3 = *(undefined8**)( this + 0x1968 );
   if (puVar3 != (undefined8*)0x0) {
      LOCK();
      piVar1 = (int*)( puVar3 + 6 );
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
         ( **(code**)( *(long*)*puVar3 + 0x48 ) )();
      }

   }

   pSVar4 = this + 0x1868;
   pSVar2 = pSVar4 + ( ulong ) * (uint*)( this + 0x1860 ) * 8;
   joined_r0x00100252:if (pSVar4 < pSVar2) {
      do {
         puVar3 = *(undefined8**)pSVar4;
         if (puVar3 != (undefined8*)0x0) {
            LOCK();
            piVar1 = (int*)( puVar3 + 6 );
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) goto code_r0x00100278;
         }

         pSVar4 = pSVar4 + 8;
         if (pSVar2 <= pSVar4) break;
      }
 while ( true );
   }

   puVar3 = *(undefined8**)( this + 0x1858 );
   if (puVar3 != (undefined8*)0x0) {
      LOCK();
      piVar1 = (int*)( puVar3 + 6 );
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
         ( **(code**)( *(long*)*puVar3 + 0x48 ) )();
      }

   }

   pSVar4 = this + 0x1758;
   pSVar2 = pSVar4 + ( ulong ) * (uint*)( this + 0x1750 ) * 8;
   joined_r0x001002bb:if (pSVar4 < pSVar2) {
      do {
         puVar3 = *(undefined8**)pSVar4;
         if (puVar3 != (undefined8*)0x0) {
            LOCK();
            piVar1 = (int*)( puVar3 + 6 );
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) goto code_r0x001002d8;
         }

         pSVar4 = pSVar4 + 8;
         if (pSVar2 <= pSVar4) break;
      }
 while ( true );
   }

   for (int i = 0; i < 3; i++) {
      puVar3 = *(undefined8**)( this + ( -8*i + 5960 ) );
      if (puVar3 != (undefined8*)0) {
         LOCK();
         piVar1 = (int*)( puVar3 + 6 );
         *piVar1 = *piVar1 + -1;
         UNLOCK();
         if (*piVar1 == 0) {
            ( **(code**)( *(long*)*puVar3 + 72 ) )();
         }

      }

   }

   pSVar4 = this + 0x1638;
   pSVar2 = pSVar4 + ( ulong ) * (uint*)( this + 0x1630 ) * 8;
   joined_r0x00100349:if (pSVar4 < pSVar2) {
      do {
         puVar3 = *(undefined8**)pSVar4;
         if (puVar3 != (undefined8*)0x0) {
            LOCK();
            piVar1 = (int*)( puVar3 + 6 );
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) goto code_r0x00100368;
         }

         pSVar4 = pSVar4 + 8;
         if (pSVar2 <= pSVar4) break;
      }
 while ( true );
   }

   puVar3 = *(undefined8**)( this + 0x1628 );
   if (puVar3 != (undefined8*)0x0) {
      LOCK();
      piVar1 = (int*)( puVar3 + 6 );
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
         ( **(code**)( *(long*)*puVar3 + 0x48 ) )();
      }

   }

   pSVar4 = this + 0x1528;
   pSVar2 = pSVar4 + ( ulong ) * (uint*)( this + 0x1520 ) * 8;
   joined_r0x001003ab:if (pSVar4 < pSVar2) {
      do {
         puVar3 = *(undefined8**)pSVar4;
         if (puVar3 != (undefined8*)0x0) {
            LOCK();
            piVar1 = (int*)( puVar3 + 6 );
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) goto code_r0x001003c8;
         }

         pSVar4 = pSVar4 + 8;
         if (pSVar2 <= pSVar4) break;
      }
 while ( true );
   }

   pSVar4 = this + 0x1420;
   pSVar2 = pSVar4 + ( ulong ) * (uint*)( this + 0x1418 ) * 8;
   joined_r0x001003f4:if (pSVar4 < pSVar2) {
      do {
         puVar3 = *(undefined8**)pSVar4;
         if (puVar3 != (undefined8*)0x0) {
            LOCK();
            piVar1 = (int*)( puVar3 + 6 );
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) goto code_r0x00100418;
         }

         pSVar4 = pSVar4 + 8;
         if (pSVar2 <= pSVar4) break;
      }
 while ( true );
   }

   pSVar4 = this + 0x1318;
   pSVar2 = pSVar4 + ( ulong ) * (uint*)( this + 0x1310 ) * 8;
   joined_r0x00100444:if (pSVar4 < pSVar2) {
      do {
         puVar3 = *(undefined8**)pSVar4;
         if (puVar3 != (undefined8*)0x0) {
            LOCK();
            piVar1 = (int*)( puVar3 + 6 );
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) goto code_r0x00100468;
         }

         pSVar4 = pSVar4 + 8;
         if (pSVar2 <= pSVar4) break;
      }
 while ( true );
   }

   pSVar4 = this + 0x1210;
   pSVar2 = pSVar4 + ( ulong ) * (uint*)( this + 0x1208 ) * 8;
   do {
      while (true) {
         if (pSVar2 <= pSVar4) {
            puVar3 = *(undefined8**)( this + 0x1200 );
            if (puVar3 != (undefined8*)0x0) {
               LOCK();
               piVar1 = (int*)( puVar3 + 6 );
               *piVar1 = *piVar1 + -1;
               UNLOCK();
               if (*piVar1 == 0) {
                  /* WARNING: Could not recover jumptable at 0x001004fe. Too many branches */
                  /* WARNING: Treating indirect jump as call */
                  ( **(code**)( *(long*)*puVar3 + 0x48 ) )();
                  return;
               }

            }

            return;
         }

         puVar3 = *(undefined8**)pSVar4;
         if (puVar3 != (undefined8*)0x0) break;
         LAB_001004a0:pSVar4 = pSVar4 + 8;
      }
;
      LOCK();
      piVar1 = (int*)( puVar3 + 6 );
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_001004a0;
      pSVar4 = pSVar4 + 8;
      ( **(code**)( *(long*)*puVar3 + 0x48 ) )();
   }
 while ( true );
   code_r0x00100130:pSVar4 = pSVar4 + 8;
   ( **(code**)( *(long*)*puVar3 + 0x48 ) )();
   goto joined_r0x0010010d;
   code_r0x00100178:pSVar4 = pSVar4 + 8;
   ( **(code**)( *(long*)*puVar3 + 0x48 ) )();
   goto joined_r0x0010015c;
   code_r0x001001f8:pSVar4 = pSVar4 + 8;
   ( **(code**)( *(long*)*puVar3 + 0x48 ) )();
   goto joined_r0x001001d2;
   code_r0x00100278:pSVar4 = pSVar4 + 8;
   ( **(code**)( *(long*)*puVar3 + 0x48 ) )();
   goto joined_r0x00100252;
   code_r0x001002d8:pSVar4 = pSVar4 + 8;
   ( **(code**)( *(long*)*puVar3 + 0x48 ) )();
   goto joined_r0x001002bb;
   code_r0x00100368:pSVar4 = pSVar4 + 8;
   ( **(code**)( *(long*)*puVar3 + 0x48 ) )();
   goto joined_r0x00100349;
   code_r0x001003c8:pSVar4 = pSVar4 + 8;
   ( **(code**)( *(long*)*puVar3 + 0x48 ) )();
   goto joined_r0x001003ab;
   code_r0x00100418:pSVar4 = pSVar4 + 8;
   ( **(code**)( *(long*)*puVar3 + 0x48 ) )();
   goto joined_r0x001003f4;
   code_r0x00100468:pSVar4 = pSVar4 + 8;
   ( **(code**)( *(long*)*puVar3 + 0x48 ) )();
   goto joined_r0x00100444;
}
/* JPH::PhysicsUpdateContext::PhysicsUpdateContext(JPH::TempAllocator&) */void JPH::PhysicsUpdateContext::_GLOBAL__sub_I_PhysicsUpdateContext(void) {
   if (DVec3::cTrue == '\0') {
      DVec3::cTrue = '\x01';
      DVec3::cTrue = _LC0;
   }

   return;
}
/* WARNING: Control flow encountered bad instruction data *//* JPH::PhysicsUpdateContext::Step::~Step() */void JPH::PhysicsUpdateContext::Step::~Step(Step *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

