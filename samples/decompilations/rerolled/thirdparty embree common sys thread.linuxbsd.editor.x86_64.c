/* embree::threadStartup(embree::ThreadStartupData*) */undefined8 embree::threadStartup(ThreadStartupData *param_1) {
   MXCSR = MXCSR | 0x8040;
   ( **(code**)param_1 )(*(undefined8*)( param_1 + 8 ));
   if (param_1 != (ThreadStartupData*)0x0) {
      operator_delete(param_1, 0x18);
   }

   return 0;
}
/* embree::setAffinity(long) */void embree::setAffinity(long param_1) {
   pthread_t __th;
   long lVar1;
   cpu_set_t *pcVar2;
   long in_FS_OFFSET;
   cpu_set_t cStack_98;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar2 = &cStack_98;
   for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
      pcVar2->__bits[0] = 0;
      pcVar2 = (cpu_set_t*)( (long)pcVar2 + 8 );
   }

   if ((ulong)param_1 < 0x400) {
      cStack_98.__bits[(ulong)param_1 >> 6] = cStack_98.__bits[(ulong)param_1 >> 6] | 1L << ( (byte)param_1 & 0x3f );
   }

   __th = pthread_self();
   pthread_setaffinity_np(__th, 0x80, &cStack_98);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* embree::yield() */void embree::yield(void) {
   sched_yield();
   return;
}
/* embree::join(embree::opaque_thread_t*) */void embree::join(opaque_thread_t *param_1) {
   int iVar1;
   iVar1 = pthread_join(*(pthread_t*)param_1, (void**)0x0);
   if (iVar1 != 0) {
      /* WARNING: Subroutine does not return */
      abort();
   }

   if (param_1 != (opaque_thread_t*)0x0) {
      operator_delete(param_1, 8);
      return;
   }

   return;
}
/* embree::destroyThread(embree::opaque_thread_t*) */void embree::destroyThread(opaque_thread_t *param_1) {
   pthread_cancel(*(pthread_t*)param_1);
   if (param_1 != (opaque_thread_t*)0x0) {
      operator_delete(param_1, 8);
      return;
   }

   return;
}
/* embree::createTls() */pthread_key_t *embree::createTls(void) {
   int iVar1;
   pthread_key_t *ppVar2;
   ppVar2 = (pthread_key_t*)operator_new(4);
   iVar1 = pthread_key_create(ppVar2, (__destr_function*)0x0);
   if (iVar1 == 0) {
      return ppVar2;
   }

   if (ppVar2 != (pthread_key_t*)0x0) {
      operator_delete(ppVar2, 4);
      ppVar2 = (pthread_key_t*)createTls();
      return ppVar2;
   }

   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::getTls(embree::opaque_tls_t*) */void embree::getTls(opaque_tls_t *param_1) {
   pthread_getspecific(*(pthread_key_t*)param_1);
   return;
}
/* embree::setTls(embree::opaque_tls_t*, void*) */void embree::setTls(opaque_tls_t *param_1, void *param_2) {
   int iVar1;
   iVar1 = pthread_setspecific(*(pthread_key_t*)param_1, param_2);
   if (iVar1 == 0) {
      return;
   }

   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::destroyTls(embree::opaque_tls_t*) */void embree::destroyTls(opaque_tls_t *param_1) {
   int iVar1;
   iVar1 = pthread_key_delete(*(pthread_key_t*)param_1);
   if (iVar1 != 0) {
      /* WARNING: Subroutine does not return */
      abort();
   }

   if (param_1 != (opaque_tls_t*)0x0) {
      operator_delete(param_1, 4);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* embree::mapThreadID(unsigned long) */_func_void_void_ptr *embree::mapThreadID(ulong param_1) {
   uint uVar1;
   __cpu_mask *p_Var2;
   bool bVar3;
   undefined1 auVar4[16];
   undefined8 uVar5;
   __cpu_mask _Var6;
   __cpu_mask _Var7;
   int iVar8;
   _func_void_void_ptr *p_Var9;
   pthread_t __th;
   long lVar10;
   long *plVar11;
   ulong *puVar12;
   _func_void_void_ptr *p_Var13;
   ulong uVar14;
   ulong uVar15;
   undefined8 *__arg;
   int iVar16;
   uint uVar17;
   long lVar18;
   ulong *puVar19;
   _func_void_void_ptr *p_Var20;
   ulong uVar21;
   ulong *puVar22;
   long *plVar23;
   size_t __stacksize;
   ulong extraout_RDX;
   char *pcVar24;
   void *pvVar25;
   long *plVar26;
   cpu_set_t *pcVar27;
   char cVar28;
   long *plVar29;
   ulong uVar30;
   long in_FS_OFFSET;
   byte bVar31;
   pthread_attr_t pStack_540;
   cpu_set_t cStack_500;
   long lStack_478;
   istream *piStack_470;
   ulong *puStack_468;
   ulong uStack_460;
   __cpu_mask _Stack_458;
   __cpu_mask _Stack_450;
   filebuf *local_440;
   ios_base *local_438;
   long *local_430;
   ulong *local_428;
   ulong *local_420;
   ulong *local_418;
   ulong *local_410;
   ulong **local_408;
   ulong **local_400;
   ulong local_3f8;
   ulong **local_3f0;
   undefined1 *local_3e8;
   _func_void_void_ptr *local_3e0;
   int local_3d4;
   ulong local_3d0;
   long *local_3c8;
   long local_3c0;
   long local_3b8[2];
   ulong *local_3a8;
   ulong local_3a0;
   ulong local_398[2];
   ulong *local_388;
   ulong local_380;
   ulong local_378[2];
   ulong *local_368;
   long local_360;
   ulong local_358[2];
   ulong *local_348;
   ulong local_340;
   ulong local_338[2];
   undefined1 local_328[24];
   code *local_310;
   uint auStack_308[12];
   locale local_2d8[48];
   __basic_file<char> local_2a8[136];
   undefined *local_220[4];
   byte local_200;
   undefined8 local_148;
   undefined2 local_140;
   undefined8 local_138;
   undefined8 local_130;
   undefined8 local_128;
   undefined8 local_120;
   char local_118[8];
   char acStack_110[8];
   char local_108[8];
   char acStack_100[8];
   char local_f8[8];
   char acStack_f0[8];
   char local_e8[8];
   char acStack_e0[8];
   char local_d8[8];
   char acStack_d0[8];
   char local_c8[8];
   char acStack_c0[8];
   char local_b8[8];
   char acStack_b0[8];
   char local_a8[8];
   char acStack_a0[8];
   char local_98[8];
   char acStack_90[8];
   char local_88[8];
   char acStack_80[8];
   char local_78[8];
   char acStack_70[8];
   char local_68[8];
   char cStack_60;
   undefined7 uStack_5f;
   char cStack_58;
   char acStack_57[23];
   long local_40;
   bVar31 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _Stack_450 = 0x100237;
   embree::MutexSys::lock();
   _Var7 = _vtable;
   _Var6 = _vtable;
   lVar18 = _ios_base;
   if (threadIDs == DAT_001014e8) {
      local_438 = (ios_base*)local_220;
      uVar30 = 0;
      local_3e8 = local_328 + 0x10;
      local_440 = (filebuf*)&local_310;
      local_3f0 = &local_348;
      local_420 = local_338;
      local_418 = &local_3d0;
      local_400 = &local_388;
      local_428 = local_378;
      local_408 = &local_3a8;
      local_410 = local_398;
      local_3e0 = (_func_void_void_ptr*)param_1;
      do {
         _Stack_450 = 0x1003ae;
         std::ios_base::ios_base(local_438);
         local_328._0_8_ = _Var6;
         local_220[0] = &std::fstream::vtable;
         local_148 = 0;
         local_140 = 0;
         local_138 = 0;
         local_130 = 0;
         local_128 = 0;
         local_120 = 0;
         *(undefined8*)( local_328 + *(long*)( _Var6 - 0x18 ) ) = _init;
         local_328._8_8_ = 0;
         _Stack_450 = 0x100443;
         std::ios::init((streambuf*)( (istream*)local_328 + *(long*)( local_328._0_8_ - 0x18 ) ));
         local_328._16_8_ = _Var7;
         *(undefined8*)( local_328 + *(long*)( _Var7 - 0x18 ) + 0x10 ) = _filebuf;
         _Stack_450 = 0x100479;
         std::ios::init((streambuf*)( local_3e8 + *(long*)( local_328._16_8_ - 0x18 ) ));
         *(undefined8*)( local_328 + *(long*)( lVar18 + -0x18 ) ) = __M_create;
         local_328._0_8_ = std::__cxx11::string::_M_construct;
         local_220[0] = &std::streambuf::vtable;
         local_328._16_8_ = std::istream::peek;
         _Stack_450 = 0x1004c8;
         std::filebuf::filebuf(local_440);
         _Stack_450 = 0x1004d5;
         std::ios::init((streambuf*)local_438);
         local_3d0 = 0x1e;
         local_348 = local_420;
         _Stack_450 = 0x1004fc;
         local_348 = (ulong*)std::__cxx11::string::_M_create((ulong*)local_3f0, (ulong)local_418);
         uVar5 = _LC6._8_8_;
         local_338[0] = local_3d0;
         *local_348 = _LC6._0_8_;
         local_348[1] = uVar5;
         uVar5 = _LC6._24_8_;
         *(undefined8*)( (long)local_348 + 0xe ) = _LC6._16_8_;
         *(undefined8*)( (long)local_348 + 0x16 ) = uVar5;
         local_340 = local_3d0;
         *(char*)( (long)local_348 + local_3d0 ) = '\0';
         lVar10 = -((long)uVar30 >> 0x3f);
         uVar21 = -uVar30;
         if (0 < (long)uVar30) {
            uVar21 = uVar30;
         }

         cVar28 = (char)( (long)uVar30 >> 0x3f );
         if (uVar21 < 10) {
            local_388 = local_428;
            _Stack_450 = 0x1012b9;
            local_430 = (long*)uVar21;
            std::__cxx11::string::_M_construct((ulong)local_400, '\x01' - cVar28);
            pcVar24 = (char*)( (long)local_388 + lVar10 );
            plVar26 = local_430;
            LAB_0010076a:cVar28 = (char)plVar26 + '0';
         }
 else {
            if (uVar21 < 100) {
               local_388 = local_428;
               _Stack_450 = 0x100ca6;
               local_430 = (long*)uVar21;
               std::__cxx11::string::_M_construct((ulong)local_400, '\x02' - cVar28);
               pcVar24 = (char*)( (long)local_388 + lVar10 );
               for (int i = 0; i < 8; i++) {
                  local_118[i] = _LC6[( i + 32 )];
               }

               for (int i = 0; i < 8; i++) {
                  acStack_110[i] = _LC6[( i + 40 )];
               }

               for (int i = 0; i < 8; i++) {
                  local_108[i] = _LC6[( i + 48 )];
               }

               for (int i = 0; i < 8; i++) {
                  acStack_100[i] = _LC6[( i + 56 )];
               }

               for (int i = 0; i < 8; i++) {
                  local_f8[i] = _LC6[( i + 64 )];
               }

               for (int i = 0; i < 8; i++) {
                  acStack_f0[i] = _LC6[( i + 72 )];
               }

               for (int i = 0; i < 8; i++) {
                  local_e8[i] = _LC6[( i + 80 )];
               }

               for (int i = 0; i < 8; i++) {
                  acStack_e0[i] = _LC6[( i + 88 )];
               }

               for (int i = 0; i < 8; i++) {
                  local_d8[i] = _LC6[( i + 96 )];
               }

               for (int i = 0; i < 8; i++) {
                  acStack_d0[i] = _LC6[( i + 104 )];
               }

               for (int i = 0; i < 8; i++) {
                  local_c8[i] = _LC6[( i + 112 )];
               }

               for (int i = 0; i < 8; i++) {
                  acStack_c0[i] = _LC6[( i + 120 )];
               }

               for (int i = 0; i < 8; i++) {
                  local_b8[i] = _LC6[( i + 128 )];
               }

               for (int i = 0; i < 8; i++) {
                  acStack_b0[i] = _LC6[( i + 136 )];
               }

               for (int i = 0; i < 8; i++) {
                  local_a8[i] = _LC6[( i + 144 )];
               }

               for (int i = 0; i < 8; i++) {
                  acStack_a0[i] = _LC6[( i + 152 )];
               }

               for (int i = 0; i < 8; i++) {
                  local_98[i] = _LC6[( i + 160 )];
               }

               for (int i = 0; i < 8; i++) {
                  acStack_90[i] = _LC6[( i + 168 )];
               }

               for (int i = 0; i < 8; i++) {
                  local_88[i] = _LC6[( i + 176 )];
               }

               for (int i = 0; i < 8; i++) {
                  acStack_80[i] = _LC6[( i + 184 )];
               }

               for (int i = 0; i < 8; i++) {
                  local_78[i] = _LC6[( i + 192 )];
               }

               for (int i = 0; i < 8; i++) {
                  acStack_70[i] = _LC6[( i + 200 )];
               }

               for (int i = 0; i < 8; i++) {
                  local_68[i] = _LC6[( i + 208 )];
               }

               cStack_60 = (char)_LC6._216_8_;
               uStack_5f = (undefined7)_LC6._224_8_;
               cStack_58 = SUB81(_LC6._224_8_, 7);
               for (int i = 0; i < 8; i++) {
                  acStack_57[i] = _LC6[( i + 232 )];
               }

               plVar26 = local_430;
            }
 else {
               if (uVar21 < 1000) {
                  iVar16 = 2;
                  iVar8 = 3;
               }
 else if (uVar21 < 10000) {
                  iVar16 = 3;
                  iVar8 = 4;
               }
 else {
                  uVar14 = uVar21;
                  iVar8 = 1;
                  do {
                     iVar16 = iVar8;
                     iVar8 = iVar16 + 4;
                     if (uVar14 < 100000) {
                        iVar16 = iVar16 + 3;
                        goto LAB_001005e7;
                     }

                     if (uVar14 < 1000000) {
                        local_430 = (long*)CONCAT44(local_430._4_4_, iVar8);
                        local_388 = local_428;
                        _Stack_450 = 0x100f5a;
                        local_3f8 = uVar21;
                        std::__cxx11::string::_M_construct((ulong)local_400, ( (char)iVar16 + '\x05' ) - cVar28);
                        plVar26 = (long*)local_3f8;
                        uVar17 = (uint)local_430;
                        goto LAB_00100621;
                     }

                     if (uVar14 < 10000000) {
                        iVar8 = iVar16 + 6;
                        iVar16 = iVar16 + 5;
                        goto LAB_001005e7;
                     }

                     bVar3 = 99999999 < uVar14;
                     uVar14 = uVar14 / 10000;
                  }
 while ( bVar3 );
                  iVar8 = iVar16 + 7;
                  iVar16 = iVar16 + 6;
               }

               LAB_001005e7:local_3f8 = CONCAT44(local_3f8._4_4_, iVar16);
               local_388 = local_428;
               _Stack_450 = 0x100610;
               local_430 = (long*)uVar21;
               std::__cxx11::string::_M_construct((ulong)local_400, (char)iVar8 - cVar28);
               plVar26 = local_430;
               uVar17 = (uint)local_3f8;
               LAB_00100621:pcVar24 = (char*)( (long)local_388 + lVar10 );
               for (int i = 0; i < 8; i++) {
                  local_d8[i] = _LC6[( i + 96 )];
               }

               for (int i = 0; i < 8; i++) {
                  acStack_d0[i] = _LC6[( i + 104 )];
               }

               for (int i = 0; i < 8; i++) {
                  local_118[i] = _LC6[( i + 32 )];
               }

               for (int i = 0; i < 8; i++) {
                  acStack_110[i] = _LC6[( i + 40 )];
               }

               for (int i = 0; i < 8; i++) {
                  local_c8[i] = _LC6[( i + 112 )];
               }

               for (int i = 0; i < 8; i++) {
                  acStack_c0[i] = _LC6[( i + 120 )];
               }

               for (int i = 0; i < 8; i++) {
                  local_108[i] = _LC6[( i + 48 )];
               }

               for (int i = 0; i < 8; i++) {
                  acStack_100[i] = _LC6[( i + 56 )];
               }

               for (int i = 0; i < 8; i++) {
                  local_b8[i] = _LC6[( i + 128 )];
               }

               for (int i = 0; i < 8; i++) {
                  acStack_b0[i] = _LC6[( i + 136 )];
               }

               for (int i = 0; i < 8; i++) {
                  local_f8[i] = _LC6[( i + 64 )];
               }

               for (int i = 0; i < 8; i++) {
                  acStack_f0[i] = _LC6[( i + 72 )];
               }

               for (int i = 0; i < 8; i++) {
                  local_a8[i] = _LC6[( i + 144 )];
               }

               for (int i = 0; i < 8; i++) {
                  acStack_a0[i] = _LC6[( i + 152 )];
               }

               for (int i = 0; i < 8; i++) {
                  local_e8[i] = _LC6[( i + 80 )];
               }

               for (int i = 0; i < 8; i++) {
                  acStack_e0[i] = _LC6[( i + 88 )];
               }

               for (int i = 0; i < 8; i++) {
                  local_98[i] = _LC6[( i + 160 )];
               }

               for (int i = 0; i < 8; i++) {
                  acStack_90[i] = _LC6[( i + 168 )];
               }

               for (int i = 0; i < 8; i++) {
                  local_88[i] = _LC6[( i + 176 )];
               }

               for (int i = 0; i < 8; i++) {
                  acStack_80[i] = _LC6[( i + 184 )];
               }

               for (int i = 0; i < 8; i++) {
                  local_78[i] = _LC6[( i + 192 )];
               }

               for (int i = 0; i < 8; i++) {
                  acStack_70[i] = _LC6[( i + 200 )];
               }

               for (int i = 0; i < 8; i++) {
                  local_68[i] = _LC6[( i + 208 )];
               }

               cStack_60 = (char)_LC6._216_8_;
               uStack_5f = (undefined7)_LC6._224_8_;
               cStack_58 = SUB81(_LC6._224_8_, 7);
               for (int i = 0; i < 8; i++) {
                  acStack_57[i] = _LC6[( i + 232 )];
               }

               do {
                  uVar21 = (ulong)plVar26;
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = uVar21 >> 2;
                  plVar26 = (long*)( ( uVar21 >> 2 ) / 0x19 );
                  lVar10 = ( uVar21 + ( ( SUB168(auVar4 * ZEXT816(0x28f5c28f5c28f5c3), 8) & 0xfffffffffffffffc ) + (long)plVar26 ) * -0x14 ) * 2;
                  cVar28 = local_118[lVar10];
                  pcVar24[uVar17] = local_118[lVar10 + 1];
                  uVar1 = uVar17 - 1;
                  uVar17 = uVar17 - 2;
                  pcVar24[uVar1] = cVar28;
               }
 while ( 9999 < uVar21 );
               if (uVar21 < 1000) goto LAB_0010076a;
            }

            cVar28 = local_118[(long)plVar26 * 2];
            pcVar24[1] = local_118[(long)plVar26 * 2 + 1];
         }

         puVar12 = local_410;
         *pcVar24 = cVar28;
         local_3d0 = 0x1b;
         local_3a8 = local_410;
         _Stack_450 = 0x100799;
         local_3a8 = (ulong*)std::__cxx11::string::_M_create((ulong*)local_408, (ulong)local_418);
         uVar21 = _UNK_00101848;
         local_398[0] = local_3d0;
         *local_3a8 = __LC21;
         local_3a8[1] = uVar21;
         uVar5 = _UNK_00101858;
         *(undefined8*)( (long)local_3a8 + 0xb ) = __LC22;
         *(undefined8*)( (long)local_3a8 + 0x13 ) = uVar5;
         local_3a0 = local_3d0;
         *(undefined1*)( (long)local_3a8 + local_3d0 ) = 0;
         uVar21 = local_3d0 + local_380;
         uVar14 = local_378[0];
         if (local_3a8 == puVar12) {
            if (( 0xf < uVar21 ) && ( local_388 != local_428 )) goto LAB_0010082b;
            LAB_00100834:puVar19 = local_3a8;
            puVar22 = local_388;
            if (0x3fffffffffffffff - local_3d0 < local_380) goto LAB_00101378;
            _Stack_450 = 0x10085c;
            plVar26 = (long*)std::__cxx11::string::_M_append((char*)local_408, (ulong)local_388);
            puVar12 = (ulong*)( plVar26 + 2 );
            if ((ulong*)*plVar26 == puVar12) {
               uVar21 = plVar26[1] + 1;
               puVar22 = puVar12;
               puVar19 = local_358;
               if (7 < (uint)uVar21) {
                  uVar14 = 0;
                  do {
                     uVar17 = (int)uVar14 + 8;
                     uVar15 = (ulong)uVar17;
                     *(undefined8*)( (long)local_358 + uVar14 ) = *(undefined8*)( (long)puVar12 + uVar14 );
                     uVar14 = uVar15;
                  }
 while ( uVar17 < ( (uint)uVar21 & 0xfffffff8 ) );
                  puVar19 = (ulong*)( (long)local_358 + uVar15 );
                  puVar22 = (ulong*)( uVar15 + (long)puVar12 );
               }

               lVar10 = 0;
               if (( uVar21 & 4 ) != 0) {
                  *(int*)puVar19 = (int)*puVar22;
                  lVar10 = 4;
               }

               if (( uVar21 & 2 ) != 0) {
                  *(undefined2*)( (long)puVar19 + lVar10 ) = *(undefined2*)( (long)puVar22 + lVar10 );
                  lVar10 = lVar10 + 2;
               }

               local_368 = local_358;
               if (( uVar21 & 1 ) != 0) {
                  *(undefined1*)( (long)puVar19 + lVar10 ) = *(undefined1*)( (long)puVar22 + lVar10 );
               }

            }
 else {
               local_358[0] = plVar26[2];
               local_368 = (ulong*)*plVar26;
            }

            local_360 = plVar26[1];
            *plVar26 = (long)puVar12;
            plVar26[1] = 0;
            *(undefined1*)( plVar26 + 2 ) = 0;
         }
 else {
            if (uVar21 <= local_3d0) goto LAB_00100834;
            if (local_388 == local_428) {
               uVar14 = 0xf;
            }

            LAB_0010082b:if (uVar14 < uVar21) goto LAB_00100834;
            _Stack_450 = 0x101006;
            plVar26 = (long*)std::__cxx11::string::_M_replace((ulong)local_400, 0, (char*)0x0, (ulong)local_3a8);
            puVar12 = (ulong*)( plVar26 + 2 );
            if ((ulong*)*plVar26 == puVar12) {
               uVar21 = plVar26[1] + 1;
               puVar22 = puVar12;
               puVar19 = local_358;
               if (7 < (uint)uVar21) {
                  uVar14 = 0;
                  do {
                     uVar17 = (int)uVar14 + 8;
                     uVar15 = (ulong)uVar17;
                     *(undefined8*)( (long)local_358 + uVar14 ) = *(undefined8*)( (long)puVar12 + uVar14 );
                     uVar14 = uVar15;
                  }
 while ( uVar17 < ( (uint)uVar21 & 0xfffffff8 ) );
                  puVar19 = (ulong*)( (long)local_358 + uVar15 );
                  puVar22 = (ulong*)( uVar15 + (long)puVar12 );
               }

               lVar10 = 0;
               if (( uVar21 & 4 ) != 0) {
                  *(int*)puVar19 = (int)*puVar22;
                  lVar10 = 4;
               }

               if (( uVar21 & 2 ) != 0) {
                  *(undefined2*)( (long)puVar19 + lVar10 ) = *(undefined2*)( (long)puVar22 + lVar10 );
                  lVar10 = lVar10 + 2;
               }

               local_368 = local_358;
               if (( uVar21 & 1 ) != 0) {
                  *(undefined1*)( (long)puVar19 + lVar10 ) = *(undefined1*)( (long)puVar22 + lVar10 );
               }

            }
 else {
               local_358[0] = plVar26[2];
               local_368 = (ulong*)*plVar26;
            }

            local_360 = plVar26[1];
            *plVar26 = (long)puVar12;
            plVar26[1] = 0;
            *(undefined1*)( plVar26 + 2 ) = 0;
         }

         puVar12 = local_358;
         uVar21 = local_360 + local_340;
         uVar14 = local_338[0];
         if (local_368 == puVar12) {
            if (( 0xf < uVar21 ) && ( local_348 != local_420 )) goto LAB_001008f0;
            LAB_001008f9:puVar19 = local_368;
            puVar22 = local_348;
            if (0x3fffffffffffffffU - local_360 < local_340) {
               LAB_00101378:pcVar24 = "basic_string::append";
               _Stack_450 = 0x101384;
               std::__throw_length_error("basic_string::append");
               _Stack_450 = _Var7;
               _Stack_458 = _Var6;
               lStack_478 = *(long*)( in_FS_OFFSET + 0x28 );
               piStack_470 = (istream*)local_328;
               puStack_468 = puVar12;
               uStack_460 = uVar30;
               pthread_attr_init(&pStack_540);
               if (__stacksize != 0) {
                  pthread_attr_setstacksize(&pStack_540, __stacksize);
               }

               p_Var9 = (_func_void_void_ptr*)operator_new(8);
               __arg = (undefined8*)operator_new(0x18);
               *__arg = pcVar24;
               __arg[1] = puVar22;
               __arg[2] = (long)(int)puVar19;
               iVar8 = pthread_create((pthread_t*)p_Var9, &pStack_540, threadStartup, __arg);
               if (iVar8 != 0) {
                  pthread_attr_destroy(&pStack_540);
                  if (p_Var9 != (_func_void_void_ptr*)0x0) {
                     pvVar25 = (void*)0x8;
                     operator_delete(p_Var9, 8);
                     p_Var9 = (_func_void_void_ptr*)createThread(p_Var9, pvVar25, extraout_RDX, (long)__arg);
                     return p_Var9;
                  }

                  /* WARNING: Subroutine does not return */
                  abort();
               }

               pthread_attr_destroy(&pStack_540);
               if (-1 < (long)puVar19) {
                  pcVar27 = &cStack_500;
                  for (lVar18 = 0x10; lVar18 != 0; lVar18 = lVar18 + -1) {
                     pcVar27->__bits[0] = 0;
                     pcVar27 = (cpu_set_t*)( (long)pcVar27 + ( (ulong)bVar31 * -2 + 1 ) * 8 );
                  }

                  uVar30 = mapThreadID((ulong)puVar19);
                  if (uVar30 < 0x400) {
                     p_Var2 = cStack_500.__bits + ( uVar30 >> 6 );
                     *p_Var2 = *p_Var2 | 1L << ( (byte)uVar30 & 0x3f );
                  }

                  pthread_setaffinity_np(*(pthread_t*)p_Var9, 0x80, &cStack_500);
               }

               if (lStack_478 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return p_Var9;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            _Stack_450 = 0x10091c;
            plVar11 = (long*)std::__cxx11::string::_M_append((char*)&local_368, (ulong)local_348);
            local_3c8 = local_3b8;
            plVar26 = plVar11 + 2;
            if ((long*)*plVar11 == plVar26) {
               uVar21 = plVar11[1] + 1;
               plVar23 = plVar26;
               plVar29 = local_3c8;
               if (7 < (uint)uVar21) {
                  uVar14 = 0;
                  do {
                     uVar17 = (int)uVar14 + 8;
                     uVar15 = (ulong)uVar17;
                     *(undefined8*)( (long)local_3c8 + uVar14 ) = *(undefined8*)( (long)plVar26 + uVar14 );
                     uVar14 = uVar15;
                  }
 while ( uVar17 < ( (uint)uVar21 & 0xfffffff8 ) );
                  plVar29 = (long*)( (long)local_3c8 + uVar15 );
                  plVar23 = (long*)( uVar15 + (long)plVar26 );
               }

               lVar10 = 0;
               if (( uVar21 & 4 ) != 0) {
                  *(int*)plVar29 = (int)*plVar23;
                  lVar10 = 4;
               }

               if (( uVar21 & 2 ) != 0) {
                  *(undefined2*)( (long)plVar29 + lVar10 ) = *(undefined2*)( (long)plVar23 + lVar10 );
                  lVar10 = lVar10 + 2;
               }

               if (( uVar21 & 1 ) != 0) {
                  *(undefined1*)( (long)plVar29 + lVar10 ) = *(undefined1*)( (long)plVar23 + lVar10 );
               }

            }
 else {
               local_3b8[0] = plVar11[2];
               local_3c8 = (long*)*plVar11;
            }

            local_3c0 = plVar11[1];
            *plVar11 = (long)plVar26;
            plVar11[1] = 0;
            *(undefined1*)( plVar11 + 2 ) = 0;
         }
 else {
            if (uVar21 <= local_358[0]) goto LAB_001008f9;
            if (local_348 == local_420) {
               uVar14 = 0xf;
            }

            LAB_001008f0:if (uVar14 < uVar21) goto LAB_001008f9;
            _Stack_450 = 0x100f7e;
            plVar11 = (long*)std::__cxx11::string::_M_replace((ulong)local_3f0, 0, (char*)0x0, (ulong)local_368);
            local_3c8 = local_3b8;
            plVar26 = plVar11 + 2;
            if ((long*)*plVar11 == plVar26) {
               uVar21 = plVar11[1] + 1;
               plVar23 = plVar26;
               plVar29 = local_3c8;
               if (7 < (uint)uVar21) {
                  uVar14 = 0;
                  do {
                     uVar17 = (int)uVar14 + 8;
                     uVar15 = (ulong)uVar17;
                     *(undefined8*)( (long)local_3c8 + uVar14 ) = *(undefined8*)( (long)plVar26 + uVar14 );
                     uVar14 = uVar15;
                  }
 while ( uVar17 < ( (uint)uVar21 & 0xfffffff8 ) );
                  plVar29 = (long*)( (long)local_3c8 + uVar15 );
                  plVar23 = (long*)( uVar15 + (long)plVar26 );
               }

               lVar10 = 0;
               if (( uVar21 & 4 ) != 0) {
                  *(undefined4*)plVar29 = *(undefined4*)plVar23;
                  lVar10 = 4;
               }

               if (( uVar21 & 2 ) != 0) {
                  *(undefined2*)( (long)plVar29 + lVar10 ) = *(undefined2*)( (long)plVar23 + lVar10 );
                  lVar10 = lVar10 + 2;
               }

               if (( uVar21 & 1 ) != 0) {
                  *(undefined1*)( (long)plVar29 + lVar10 ) = *(undefined1*)( (long)plVar23 + lVar10 );
               }

            }
 else {
               local_3b8[0] = plVar11[2];
               local_3c8 = (long*)*plVar11;
            }

            local_3c0 = plVar11[1];
            *plVar11 = (long)plVar26;
            plVar11[1] = 0;
            *(undefined1*)( plVar11 + 2 ) = 0;
         }

         local_430 = local_3b8;
         if (local_368 != puVar12) {
            _Stack_450 = 0x10098e;
            operator_delete(local_368, local_358[0] + 1);
         }

         if (local_3a8 != local_410) {
            _Stack_450 = 0x1009b1;
            operator_delete(local_3a8, local_398[0] + 1);
         }

         if (local_388 != local_428) {
            _Stack_450 = 0x1009d4;
            operator_delete(local_388, local_378[0] + 1);
         }

         if (local_348 != local_420) {
            _Stack_450 = 0x1009f7;
            operator_delete(local_348, local_338[0] + 1);
         }

         _Stack_450 = 0x100a0e;
         lVar10 = std::filebuf::open(local_440, local_3c8, 8);
         if (lVar10 == 0) {
            _Stack_450 = 0x100dc5;
            std::ios::clear((istream*)local_328 + *(long*)( local_328._0_8_ + -0x18 ), *(uint*)( (long)auStack_308 + *(long*)( local_328._0_8_ + -0x18 ) ) | 4);
            param_1 = (ulong)local_3e0;
         }
 else {
            _Stack_450 = 0x100a2d;
            std::ios::clear((istream*)local_328 + *(long*)( local_328._0_8_ + -0x18 ), 0);
            param_1 = (ulong)local_3e0;
         }

         local_3e0 = (_func_void_void_ptr*)param_1;
         if (( local_200 & 5 ) != 0) goto LAB_00100dd3;
         while (true) {
            _Stack_450 = 0x100a4b;
            plVar26 = (long*)std::istream::operator >>((istream*)local_328, &local_3d4);
            if (( *(byte*)( (long)plVar26 + *(long*)( *plVar26 + -0x18 ) + 0x20 ) & 5 ) != 0) break;
            uVar21 = (ulong)local_3d4;
            lVar10 = (long)DAT_001014e8 - (long)threadIDs;
            puVar12 = threadIDs;
            if (0 < lVar10 >> 5) {
               do {
                  if (local_3d4 == (int)*puVar12) goto LAB_00100ab8;
                  if (local_3d4 == (int)puVar12[1]) {
                     puVar12 = puVar12 + 1;
                     goto LAB_00100ab8;
                  }

                  if (local_3d4 == (int)puVar12[2]) {
                     puVar12 = puVar12 + 2;
                     goto LAB_00100ab8;
                  }

                  if (local_3d4 == (int)puVar12[3]) {
                     puVar12 = puVar12 + 3;
                     goto LAB_00100ab8;
                  }

                  puVar12 = puVar12 + 4;
               }
 while ( puVar12 != threadIDs + ( lVar10 >> 5 ) * 4 );
               lVar10 = (long)DAT_001014e8 - (long)puVar12;
            }

            lVar10 = lVar10 >> 3;
            if (lVar10 == 2) {
               LAB_00100b55:if (local_3d4 != (int)*puVar12) {
                  puVar12 = puVar12 + 1;
                  LAB_00100afc:if (local_3d4 != (int)*puVar12) goto LAB_00100b00;
               }

               LAB_00100ab8:if (DAT_001014e8 == puVar12) goto LAB_00100b00;
            }
 else {
               if (lVar10 == 3) {
                  if (local_3d4 != (int)*puVar12) {
                     puVar12 = puVar12 + 1;
                     goto LAB_00100b55;
                  }

                  goto LAB_00100ab8;
               }

               if (lVar10 == 1) goto LAB_00100afc;
               LAB_00100b00:local_3d0 = uVar21;
               if (DAT_001014e8 == DAT_001014f0) {
                  _Stack_450 = 0x100db1;
                  std::vector<unsigned_long,std::allocator<unsigned_long>>::_M_realloc_insert<unsigned_long>((vector<unsigned_long,std::allocator<unsigned_long>>*)&threadIDs, DAT_001014e8, local_418);
               }
 else {
                  *DAT_001014e8 = uVar21;
                  DAT_001014e8 = DAT_001014e8 + 1;
               }

            }

            _Stack_450 = 0x100ac5;
            iVar8 = std::istream::peek();
            if (iVar8 == 0x2c) {
               _Stack_450 = 0x100ad6;
               std::istream::ignore();
            }

         }
;
         _Stack_450 = 0x100b6d;
         lVar10 = std::filebuf::close();
         if (lVar10 == 0) {
            _Stack_450 = 0x1010a9;
            std::ios::clear((istream*)local_328 + *(long*)( local_328._0_8_ + -0x18 ), *(uint*)( (long)auStack_308 + *(long*)( local_328._0_8_ + -0x18 ) ) | 4);
         }

         if (local_3c8 != local_430) {
            _Stack_450 = 0x100b99;
            operator_delete(local_3c8, local_3b8[0] + 1);
         }

         uVar30 = uVar30 + 1;
         local_328._0_8_ = std::__cxx11::string::_M_construct;
         local_220[0] = &std::streambuf::vtable;
         local_328._16_8_ = std::istream::peek;
         local_310 = (code*)&std::streambuf::vtable;
         _Stack_450 = 0x100bdd;
         std::filebuf::close();
         _Stack_450 = 0x100bea;
         std::__basic_file<char>::~__basic_file(local_2a8);
         local_310 = std::ios_base::~ios_base;
         _Stack_450 = 0x100c06;
         std::locale::~locale(local_2d8);
         *(undefined8*)( local_328 + *(long*)( lVar18 + -0x18 ) ) = __M_create;
         local_328._16_8_ = _Var7;
         *(undefined8*)( local_328 + *(long*)( _Var7 - 0x18 ) + 0x10 ) = _filebuf;
         local_328._0_8_ = _Var6;
         *(undefined8*)( local_328 + *(long*)( _Var6 - 0x18 ) ) = _init;
         local_328._8_8_ = 0;
         local_220[0] = &std::fstream::vtable;
         _Stack_450 = 0x100c7c;
         std::ios_base::~ios_base(local_438);
      }
 while ( true );
   }

   p_Var9 = (_func_void_void_ptr*)( (long)DAT_001014e8 - (long)threadIDs >> 3 );
   LAB_00100260:puVar12 = DAT_001014e8;
   if (param_1 < p_Var9) {
      param_1 = threadIDs[param_1];
   }

   LAB_00100269:DAT_001014e8 = puVar12;
   pcVar27 = (cpu_set_t*)local_328;
   for (lVar18 = 0x10; lVar18 != 0; lVar18 = lVar18 + -1) {
      pcVar27->__bits[0] = 0;
      pcVar27 = (cpu_set_t*)( (long)pcVar27 + ( (ulong)bVar31 * -2 + 1 ) * 8 );
   }

   _Stack_450 = 0x10027b;
   __th = pthread_self();
   _Stack_450 = 0x10028b;
   iVar8 = pthread_getaffinity_np(__th, 0x80, (cpu_set_t*)local_328);
   p_Var9 = (_func_void_void_ptr*)param_1;
   if (iVar8 == 0) {
      p_Var20 = (_func_void_void_ptr*)0x0;
      iVar8 = 0;
      do {
         if (( *(ulong*)( local_328 + ( (ulong)p_Var20 >> 6 ) * 8 ) >> ( (ulong)p_Var20 & 0x3f ) & 1 ) != 0) {
            p_Var9 = p_Var20;
            if ((_func_void_void_ptr*)(long)iVar8 == (_func_void_void_ptr*)param_1) break;
            iVar8 = iVar8 + 1;
         }

         p_Var20 = p_Var20 + 1;
         p_Var9 = (_func_void_void_ptr*)param_1;
      }
 while ( p_Var20 != (_func_void_void_ptr*)0x400 );
   }

   _Stack_450 = 0x1002d4;
   embree::MutexSys::unlock();
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return p_Var9;
   }

   /* WARNING: Subroutine does not return */
   _Stack_450 = 0x101378;
   __stack_chk_fail();
   LAB_00100dd3:if (local_3c8 != local_430) {
      _Stack_450 = 0x100dfb;
      operator_delete(local_3c8, local_3b8[0] + 1);
   }

   local_328._0_8_ = std::__cxx11::string::_M_construct;
   local_220[0] = &std::streambuf::vtable;
   local_328._16_8_ = std::istream::peek;
   local_310 = (code*)&std::streambuf::vtable;
   _Stack_450 = 0x100e3b;
   std::filebuf::close();
   _Stack_450 = 0x100e48;
   std::__basic_file<char>::~__basic_file(local_2a8);
   local_310 = std::ios_base::~ios_base;
   _Stack_450 = 0x100e64;
   std::locale::~locale(local_2d8);
   *(undefined8*)( local_328 + *(long*)( lVar18 + -0x18 ) ) = __M_create;
   local_328._16_8_ = _Var7;
   *(undefined8*)( local_328 + *(long*)( _Var7 - 0x18 ) + 0x10 ) = _filebuf;
   local_328._0_8_ = _Var6;
   *(undefined8*)( local_328 + *(long*)( _Var6 - 0x18 ) ) = _init;
   local_220[0] = &std::fstream::vtable;
   local_328._8_8_ = 0;
   _Stack_450 = 0x100eda;
   std::ios_base::~ios_base(local_438);
   p_Var20 = (_func_void_void_ptr*)0x0;
   p_Var9 = (_func_void_void_ptr*)( (long)DAT_001014e8 - (long)threadIDs >> 3 );
   puVar12 = DAT_001014e8;
   if (threadIDs == DAT_001014e8) goto LAB_00100269;
   do {
      p_Var13 = (_func_void_void_ptr*)0x0;
      do {
         if (( p_Var13 != p_Var20 ) && ( puVar12 = threadIDs ),threadIDs[(long)p_Var20] == threadIDs[(long)p_Var13]) goto LAB_00100269;
         p_Var13 = p_Var13 + 1;
      }
 while ( p_Var13 < p_Var9 );
      p_Var20 = p_Var20 + 1;
   }
 while ( p_Var20 < p_Var9 );
   goto LAB_00100260;
}
/* embree::createThread(void (*)(void*), void*, unsigned long, long) */_func_void_void_ptr *embree::createThread(_func_void_void_ptr *param_1, void *param_2, ulong param_3, long param_4) {
   __cpu_mask *p_Var1;
   int iVar2;
   _func_void_void_ptr *p_Var3;
   undefined8 *__arg;
   ulong uVar4;
   long lVar5;
   ulong extraout_RDX;
   void *pvVar6;
   cpu_set_t *pcVar7;
   long in_FS_OFFSET;
   byte bVar8;
   pthread_attr_t pStack_f8;
   cpu_set_t local_b8;
   long local_30;
   bVar8 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pthread_attr_init(&pStack_f8);
   if (param_3 != 0) {
      pthread_attr_setstacksize(&pStack_f8, param_3);
   }

   p_Var3 = (_func_void_void_ptr*)operator_new(8);
   __arg = (undefined8*)operator_new(0x18);
   *__arg = param_1;
   __arg[1] = param_2;
   __arg[2] = (long)(int)param_4;
   iVar2 = pthread_create((pthread_t*)p_Var3, &pStack_f8, threadStartup, __arg);
   if (iVar2 != 0) {
      pthread_attr_destroy(&pStack_f8);
      if (p_Var3 != (_func_void_void_ptr*)0x0) {
         pvVar6 = (void*)0x8;
         operator_delete(p_Var3, 8);
         p_Var3 = (_func_void_void_ptr*)createThread(p_Var3, pvVar6, extraout_RDX, (long)__arg);
         return p_Var3;
      }

      /* WARNING: Subroutine does not return */
      abort();
   }

   pthread_attr_destroy(&pStack_f8);
   if (-1 < param_4) {
      pcVar7 = &local_b8;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
         pcVar7->__bits[0] = 0;
         pcVar7 = (cpu_set_t*)( (long)pcVar7 + ( (ulong)bVar8 * -2 + 1 ) * 8 );
      }

      uVar4 = mapThreadID(param_4);
      if (uVar4 < 0x400) {
         p_Var1 = local_b8.__bits + ( uVar4 >> 6 );
         *p_Var1 = *p_Var1 | 1L << ( (byte)uVar4 & 0x3f );
      }

      pthread_setaffinity_np(*(pthread_t*)p_Var3, 0x80, &local_b8);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return p_Var3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::vector<unsigned long, std::allocator<unsigned long> >::~vector() */void std::vector<unsigned_long,std::allocator<unsigned_long>>::~vector(vector<unsigned_long,std::allocator<unsigned_long>> *this) {
   void *pvVar1;
   pvVar1 = *(void**)this;
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, *(long*)( this + 0x10 ) - (long)pvVar1);
      return;
   }

   return;
}
/* embree::join(embree::opaque_thread_t*) [clone .cold] */void embree::join(opaque_thread_t *param_1) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::createTls() [clone .cold] */void embree::createTls(void) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::setTls(embree::opaque_tls_t*, void*) [clone .cold] */void embree::setTls(opaque_tls_t *param_1, void *param_2) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::destroyTls(embree::opaque_tls_t*) [clone .cold] */void embree::destroyTls(opaque_tls_t *param_1) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::createThread(void (*)(void*), void*, unsigned long, long) [clone .cold] */void embree::createThread(_func_void_void_ptr *param_1, void *param_2, ulong param_3, long param_4) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* WARNING: Control flow encountered bad instruction data *//* void std::vector<unsigned long, std::allocator<unsigned long> >::_M_realloc_insert<unsigned
   long>(__gnu_cxx::__normal_iterator<unsigned long*, std::vector<unsigned long,
   std::allocator<unsigned long> > >, unsigned long&&) */void std::vector<unsigned_long,std::allocator<unsigned_long>>::_M_realloc_insert<unsigned_long>(vector<unsigned_long,std::allocator<unsigned_long>> *this, void *param_2, undefined8 *param_3) {
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
      if (0xfffffffffffffffe < uVar1) goto LAB_00101640;
      uVar4 = 0xfffffffffffffff;
      if (uVar1 + 1 < 0x1000000000000000) {
         uVar4 = uVar1 + 1;
      }

      uVar4 = uVar4 << 3;
   }
 else {
      uVar4 = uVar1 * 2;
      if (uVar4 < uVar1) {
         LAB_00101640:uVar4 = 0x7ffffffffffffff8;
      }
 else {
         if (uVar4 == 0) {
            lVar3 = 0;
            __dest = (void*)0x0;
            goto LAB_001015c9;
         }

         if (0xfffffffffffffff < uVar4) {
            uVar4 = 0xfffffffffffffff;
         }

         uVar4 = uVar4 * 8;
      }

   }

   __dest = operator_new(uVar4);
   lVar3 = uVar4 + (long)__dest;
   LAB_001015c9:*(undefined8*)( (long)__dest + __n ) = *param_3;
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
/* embree::mapThreadID(unsigned long) */void embree::_GLOBAL__sub_I_mapThreadID(void) {
   embree::MutexSys::MutexSys((MutexSys*)&mutex);
   __cxa_atexit(embree::MutexSys::~MutexSys, &mutex, &__dso_handle);
   threadIDs = 0;
   DAT_001014e8 = 0;
   DAT_001014f0 = 0;
   __cxa_atexit(std::vector<unsigned_long,std::allocator<unsigned_long>>::~vector, &threadIDs, &__dso_handle);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* std::vector<unsigned long, std::allocator<unsigned long> >::~vector() */void std::vector<unsigned_long,std::allocator<unsigned_long>>::~vector(vector<unsigned_long,std::allocator<unsigned_long>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

