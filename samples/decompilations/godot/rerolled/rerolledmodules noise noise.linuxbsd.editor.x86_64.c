/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
 else {
         *(undefined8*)this = 0;
      }

   }

   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) {
            return;
         }

         LOCK();
         lVar3 = *plVar1;
         bVar4 = lVar2 == lVar3;
         if (bVar4) {
            *plVar1 = lVar2 + 1;
            lVar3 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }

   }

   return;
}
/* unsigned char Noise::_alpha_blend<unsigned char>(unsigned char, unsigned char, int) const */uchar Noise::_alpha_blend<unsigned_char>(Noise *this, uchar param_1, uchar param_2, int param_3) {
   return ( uchar )(( param_3 + 1U & 0xffff ) * (uint)param_2 + ( 0x100U - param_3 & 0xffff ) * (uint)param_1 >> 8);
}
/* Noise::_bind_methods() */void Noise::_bind_methods(void) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined *puVar4;
   long *plVar5;
   MethodBind *pMVar6;
   uint uVar7;
   Variant *this;
   long *plVar8;
   long lVar9;
   Variant *pVVar10;
   long in_FS_OFFSET;
   long local_348[2];
   long *local_338;
   undefined *local_328;
   undefined8 local_320;
   undefined *local_318;
   undefined *puStack_310;
   undefined8 local_308;
   undefined *local_2f8;
   undefined *puStack_2f0;
   undefined *local_2e8;
   undefined8 local_2e0;
   char *local_2d8;
   char *pcStack_2d0;
   char *local_2c8;
   char *pcStack_2c0;
   char *local_2b8;
   undefined8 local_2b0;
   char *local_2a8;
   char *pcStack_2a0;
   char *local_298;
   char *pcStack_290;
   char *local_288;
   undefined8 local_280;
   Variant *local_278;
   undefined1 auStack_270[16];
   char **ppcStack_260;
   char **local_258;
   char *local_248;
   char *pcStack_240;
   char *local_238;
   char *pcStack_230;
   char *local_228;
   undefined *puStack_220;
   undefined8 local_218;
   char *local_208;
   char *pcStack_200;
   char *local_1f8;
   char *pcStack_1f0;
   char *local_1e8;
   undefined *puStack_1e0;
   undefined8 local_1d8;
   Variant local_1c8[24];
   Variant local_1b0[24];
   undefined8 local_198;
   undefined1 local_190[16];
   Variant local_180[8];
   Variant local_178[24];
   Variant local_160[24];
   Variant local_148[24];
   undefined8 local_130;
   undefined1 local_128[16];
   Variant *local_118;
   Variant *pVStack_110;
   Variant *local_108;
   Variant *pVStack_100;
   char **local_f8;
   undefined **ppuStack_f0;
   Variant local_e8[24];
   undefined8 local_d0;
   undefined1 local_c8[16];
   Variant *local_b8;
   Variant *pVStack_b0;
   Variant *local_a8;
   char **ppcStack_a0;
   char **local_98;
   undefined **ppuStack_90;
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   puVar4 = PTR__LC11_00110180;
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   this(Variant * ) & local_118;
   local_320 = 0;
   local_328 = &_LC13;
   local_278 = (Variant*)&local_328;
   uVar7 = ( uint ) & local_278;
   D_METHODP((char*)local_348, (char***)"get_noise_1d", uVar7);
   auStack_270 = (undefined1[16])0x0;
   local_278 = (Variant*)0x0;
   pMVar6 = create_method_bind<Noise,float,float>((_func_float_float*)0x1c9);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_348, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_278] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_338;
   if (local_338 != (long*)0x0) {
      LOCK();
      plVar8 = local_338 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_338 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_338[-1];
         local_338 = (long*)0x0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar8 = plVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_348[0] != 0 )) {
      StringName::unref();
   }

   local_308 = 0;
   local_318 = &_LC13;
   puStack_310 = &_LC14;
   auStack_270._0_8_ = &puStack_310;
   local_278 = (Variant*)&local_318;
   D_METHODP((char*)local_348, (char***)"get_noise_2d", uVar7);
   auStack_270 = (undefined1[16])0x0;
   local_278 = (Variant*)0x0;
   pMVar6 = create_method_bind<Noise,float,float,float>((_func_float_float_float*)0x1d9);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_348, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_278] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_338;
   if (local_338 != (long*)0x0) {
      LOCK();
      plVar8 = local_338 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_338 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_338[-1];
         local_338 = (long*)0x0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar8 = plVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_348[0] != 0 )) {
      StringName::unref();
   }

   local_318 = &_LC17;
   puStack_310 = (undefined*)0x0;
   local_278 = (Variant*)&local_318;
   D_METHODP((char*)local_348, (char***)"get_noise_2dv", uVar7);
   auStack_270 = (undefined1[16])0x0;
   local_278 = (Variant*)0x0;
   pMVar6 = create_method_bind<Noise,float,Vector2>((_func_float_Vector2*)0x1d1);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_348, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_278] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_338;
   if (local_338 != (long*)0x0) {
      LOCK();
      plVar8 = local_338 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_338 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_338[-1];
         local_338 = (long*)0x0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar8 = plVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_348[0] != 0 )) {
      StringName::unref();
   }

   local_2e0 = 0;
   local_2e8 = &_LC19;
   local_2f8 = &_LC13;
   puStack_2f0 = &_LC14;
   auStack_270._8_8_ = &local_2e8;
   auStack_270._0_8_ = &puStack_2f0;
   local_278 = (Variant*)&local_2f8;
   D_METHODP((char*)local_348, (char***)"get_noise_3d", uVar7);
   auStack_270 = (undefined1[16])0x0;
   local_278 = (Variant*)0x0;
   pMVar6 = create_method_bind<Noise,float,float,float,float>((_func_float_float_float_float*)0x1e9);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_348, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_278] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_338;
   if (local_338 != (long*)0x0) {
      LOCK();
      plVar8 = local_338 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_338 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_338[-1];
         local_338 = (long*)0x0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar8 = plVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_348[0] != 0 )) {
      StringName::unref();
   }

   local_2f8 = &_LC17;
   puStack_2f0 = (undefined*)0x0;
   local_278 = (Variant*)&local_2f8;
   D_METHODP((char*)local_348, (char***)"get_noise_3dv", uVar7);
   auStack_270 = (undefined1[16])0x0;
   local_278 = (Variant*)0x0;
   pMVar6 = create_method_bind<Noise,float,Vector3>((_func_float_Vector3*)0x1e1);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_348, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_278] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_338;
   if (local_338 != (long*)0x0) {
      LOCK();
      plVar8 = local_338 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_338 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_338[-1];
         local_338 = (long*)0x0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar8 = plVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_348[0] != 0 )) {
      StringName::unref();
   }

   local_288 = "normalize";
   local_258 = &local_288;
   local_2a8 = "width";
   pcStack_2a0 = "height";
   local_298 = "invert";
   pcStack_290 = "in_3d_space";
   local_280 = 0;
   local_278 = (Variant*)&local_2a8;
   ppcStack_260 = &pcStack_290;
   auStack_270._0_8_ = &pcStack_2a0;
   auStack_270._8_8_ = &local_298;
   D_METHODP((char*)local_348, (char***)"get_image", uVar7);
   Variant::Variant(this, false);
   Variant::Variant((Variant*)&pVStack_100, false);
   Variant::Variant(local_e8, true);
   local_c8 = (undefined1[16])0x0;
   local_d0 = 0;
   auStack_270._8_8_ = local_e8;
   auStack_270._0_8_ = (Variant*)&pVStack_100;
   local_278 = this;
   pMVar6 = create_method_bind<Noise,Ref<Image>,int,int,bool,bool,bool>((_func_Ref_int_int_bool_bool_bool*)0x1f1);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_348, &local_278, 3);
   pVVar10 = (Variant*)&local_b8;
   do {
      pVVar1 = pVVar10 + -0x18;
      pVVar10 = pVVar10 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

      plVar5 = local_338;
   }
 while ( pVVar10 != this );
   if (local_338 != (long*)0x0) {
      LOCK();
      plVar8 = local_338 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_338 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_338[-1];
         local_338 = (long*)0x0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar8 = plVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_348[0] != 0 )) {
      StringName::unref();
   }

   local_1d8 = 0;
   local_208 = "width";
   pcStack_200 = "height";
   pVVar10 = (Variant*)local_40;
   local_1f8 = "invert";
   pcStack_1f0 = "in_3d_space";
   local_1e8 = "skirt";
   puStack_1e0 = puVar4;
   local_118 = (Variant*)&local_208;
   pVStack_110 = (Variant*)&pcStack_200;
   local_108 = (Variant*)&local_1f8;
   pVStack_100 = (Variant*)&pcStack_1f0;
   local_f8 = &local_1e8;
   ppuStack_f0 = &puStack_1e0;
   D_METHODP((char*)local_348, (char***)"get_seamless_image", (uint)this);
   Variant::Variant((Variant*)&local_b8, false);
   Variant::Variant((Variant*)&ppcStack_a0, false);
   Variant::Variant(local_88, _LC24);
   Variant::Variant(local_70, true);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   local_118 = (Variant*)&local_b8;
   pVStack_110 = (Variant*)&ppcStack_a0;
   local_108 = local_88;
   pVStack_100 = local_70;
   pMVar6 = create_method_bind<Noise,Ref<Image>,int,int,bool,bool,float,bool>((_func_Ref_int_int_bool_bool_float_bool*)0x201);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_348, (Variant**)this, 4);
   do {
      pVVar1 = pVVar10 + -0x18;
      pVVar10 = pVVar10 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

      plVar5 = local_338;
   }
 while ( pVVar10 != (Variant*)&local_b8 );
   if (local_338 != (long*)0x0) {
      LOCK();
      plVar8 = local_338 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_338 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_338[-1];
         local_338 = (long*)0x0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar8 = plVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_348[0] != 0 )) {
      StringName::unref();
   }

   local_2b8 = "normalize";
   local_98 = &local_2b8;
   pVVar10 = local_180;
   local_2d8 = "width";
   pcStack_2d0 = "height";
   local_2c8 = "depth";
   pcStack_2c0 = "invert";
   local_2b0 = 0;
   uVar7 = (uint)(Variant*)&local_b8;
   local_b8 = (Variant*)&local_2d8;
   pVStack_b0 = (Variant*)&pcStack_2d0;
   local_a8 = (Variant*)&local_2c8;
   ppcStack_a0 = &pcStack_2c0;
   D_METHODP((char*)local_348, (char***)"get_image_3d", uVar7);
   Variant::Variant(local_1c8, false);
   Variant::Variant(local_1b0, true);
   local_190 = (undefined1[16])0x0;
   local_198 = 0;
   local_b8 = local_1c8;
   pVStack_b0 = local_1b0;
   pMVar6 = create_method_bind<Noise,TypedArray<Image>,int,int,int,bool,bool>((_func_TypedArray_int_int_int_bool_bool*)0x1f9);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_348, &local_b8, 2);
   do {
      pVVar1 = pVVar10 + -0x18;
      pVVar10 = pVVar10 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

      plVar5 = local_338;
   }
 while ( pVVar10 != local_1c8 );
   if (local_338 != (long*)0x0) {
      LOCK();
      plVar8 = local_338 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_338 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_338[-1];
         local_338 = (long*)0x0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar8 = plVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_348[0] != 0 )) {
      StringName::unref();
   }

   local_218 = 0;
   local_248 = "width";
   pcStack_240 = "height";
   local_238 = "depth";
   pcStack_230 = "invert";
   local_228 = "skirt";
   puStack_220 = puVar4;
   local_b8 = (Variant*)&local_248;
   pVStack_b0 = (Variant*)&pcStack_240;
   local_a8 = (Variant*)&local_238;
   ppcStack_a0 = &pcStack_230;
   local_98 = &local_228;
   ppuStack_90 = &puStack_220;
   D_METHODP((char*)local_348, (char***)"get_seamless_image_3d", uVar7);
   Variant::Variant(local_178, false);
   Variant::Variant(local_160, _LC24);
   Variant::Variant(local_148, true);
   local_128 = (undefined1[16])0x0;
   local_130 = 0;
   local_b8 = local_178;
   pVStack_b0 = local_160;
   local_a8 = local_148;
   pMVar6 = create_method_bind<Noise,TypedArray<Image>,int,int,int,bool,float,bool>((_func_TypedArray_int_int_int_bool_float_bool*)0x209);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_348, &local_b8, 3);
   do {
      pVVar10 = this + -0x18;
      this =
      this + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar10] != '\0') {
         Variant::_clear_internal();
      }

      plVar5 = local_338;
   }
 while ( this != local_178 );
   if (local_338 != (long*)0x0) {
      LOCK();
      plVar8 = local_338 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_338 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_338[-1];
         local_338 = (long*)0x0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar8 = plVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_348[0] != 0 )) {
      StringName::unref();
   }

   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */void CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this) {
   size_t __n;
   code *pcVar1;
   undefined8 *puVar2;
   ulong uVar3;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   __n = *(size_t*)( *(long*)this + -8 );
   uVar3 = 0x10;
   if (__n != 0) {
      uVar3 = __n - 1 | __n - 1 >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      uVar3 = ( uVar3 | uVar3 >> 0x20 ) + 0x11;
   }

   puVar2 = (undefined8*)Memory::alloc_static(uVar3, false);
   if (puVar2 != (undefined8*)0x0) {
      *puVar2 = 1;
      puVar2[1] = __n;
      memcpy(puVar2 + 2, *(void**)this, __n);
      _unref(this);
      *(undefined8**)this = puVar2 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* CowData<Ref<Image> >::_ref(CowData<Ref<Image> > const&) [clone .part.0] [clone .constprop.0] */void CowData<Ref<Image>>::_ref(CowData<Ref<Image>> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   _unref(this);
   if (*(long*)param_1 != 0) {
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) {
            return;
         }

         LOCK();
         lVar3 = *plVar1;
         bVar4 = lVar2 == lVar3;
         if (bVar4) {
            *plVar1 = lVar2 + 1;
            lVar3 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }

   }

   return;
}
/* Ref<Image>::TEMPNAMEPLACEHOLDERVALUE(Ref<Image> const&) [clone .isra.0] */void Ref<Image>::operator =(Ref<Image> *this, Ref *param_1) {
   Image *pIVar1;
   char cVar2;
   pIVar1 = *(Image**)this;
   if (pIVar1 != (Image*)param_1) {
      *(Ref**)this = param_1;
      if (param_1 != (Ref*)0x0) {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)this = 0;
         }

      }

      if (pIVar1 != (Image*)0x0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            memdelete<Image>(pIVar1);
            return;
         }

      }

   }

   return;
}
/* CowData<Ref<Image> >::_copy_on_write() [clone .isra.0] */void CowData<Ref<Image>>::_copy_on_write(CowData<Ref<Image>> *this) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   char cVar4;
   undefined8 *puVar5;
   long *plVar6;
   ulong uVar7;
   long lVar8;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar1 * 8 != 0) {
      uVar7 = lVar1 * 8 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }

   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   lVar8 = 0;
   *puVar5 = 1;
   puVar5[1] = lVar1;
   plVar6 = puVar5 + 2;
   if (lVar1 != 0) {
      do {
         lVar2 = *(long*)this;
         *plVar6 = 0;
         lVar2 = *(long*)( lVar2 + lVar8 * 8 );
         if (lVar2 != 0) {
            *plVar6 = lVar2;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
               *plVar6 = 0;
            }

         }

         lVar8 = lVar8 + 1;
         plVar6 = plVar6 + 1;
      }
 while ( lVar1 != lVar8 );
   }

   _unref(this);
   *(undefined8**)this = puVar5 + 2;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Ref<Image> >::resize<false>(long) [clone .isra.0] */void CowData<Ref<Image>>::resize<false>(CowData<Ref<Image>> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   char cVar3;
   int iVar4;
   long lVar5;
   undefined8 *puVar6;
   char *pcVar7;
   undefined8 uVar8;
   long lVar9;
   ulong uVar10;
   undefined8 *puVar11;
   long lVar12;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar5 = 0;
      lVar9 = 0;
   }
 else {
      lVar5 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar5) {
         return;
      }

      if (param_1 == 0) {
         _unref(this);
         return;
      }

      _copy_on_write(this);
      lVar9 = lVar5 * 8;
      if (lVar9 != 0) {
         uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
         uVar10 = uVar10 | uVar10 >> 2;
         uVar10 = uVar10 | uVar10 >> 4;
         uVar10 = uVar10 | uVar10 >> 8;
         uVar10 = uVar10 | uVar10 >> 0x10;
         lVar9 = ( uVar10 | uVar10 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 != 0) {
      uVar10 = param_1 * 8 - 1;
      uVar10 = uVar10 | uVar10 >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      uVar10 = uVar10 | uVar10 >> 0x20;
      lVar12 = uVar10 + 1;
      if (lVar12 != 0) {
         if (param_1 <= lVar5) {
            lVar5 = *(long*)this;
            uVar10 = param_1;
            if (lVar5 == 0) {
               CowData<Ref<Image>> pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            for (; uVar10 < *(ulong*)( lVar5 + -8 ); uVar10 = uVar10 + 1) {
               while (plVar1 = (long*)( lVar5 + uVar10 * 8 ),*plVar1 != 0) {
                  cVar3 = RefCounted::unreference();
                  if (cVar3 != '\0') {
                     memdelete<Image>((Image*)*plVar1);
                  }

                  lVar5 = *(long*)this;
                  uVar10 = uVar10 + 1;
                  if (lVar5 == 0) goto CowData<Ref<Image>>_resize<false>;
                  if (*(ulong*)( lVar5 + -8 ) <= uVar10) goto LAB_00101744;
               }
;
            }

            LAB_00101744:if (lVar12 != lVar9) {
               iVar4 = _realloc(this, lVar12);
               if (iVar4 != 0) {
                  return;
               }

               lVar5 = *(long*)this;
               if (lVar5 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }

            *(long*)( lVar5 + -8 ) = param_1;
            return;
         }

         if (lVar12 == lVar9) {
            LAB_00101833:puVar11 = *(undefined8**)this;
            if (puVar11 == (undefined8*)0x0) {
               FUN_00108234();
               return;
            }

            lVar5 = puVar11[-1];
            if (param_1 <= lVar5) goto LAB_00101803;
         }
 else {
            if (lVar5 != 0) {
               iVar4 = _realloc(this, lVar12);
               if (iVar4 != 0) {
                  return;
               }

               goto LAB_00101833;
            }

            puVar6 = (undefined8*)Memory::alloc_static(uVar10 + 0x11, false);
            if (puVar6 == (undefined8*)0x0) {
               uVar8 = 0x171;
               pcVar7 = "Parameter \"mem_new\" is null.";
               goto LAB_001018a2;
            }

            puVar11 = puVar6 + 2;
            *puVar6 = 1;
            puVar6[1] = 0;
            *(undefined8**)this = puVar11;
            lVar5 = 0;
         }

         memset(puVar11 + lVar5, 0, ( param_1 - lVar5 ) * 8);
         LAB_00101803:puVar11[-1] = param_1;
         return;
      }

   }

   uVar8 = 0x16a;
   pcVar7 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_001018a2:_err_print_error("resize", "./core/templates/cowdata.h", uVar8, pcVar7, 0, 0);
   return;
}
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */void CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this, long param_1) {
   CowData<unsigned_char> *pCVar1;
   long *plVar2;
   long lVar3;
   int iVar4;
   ulong uVar5;
   CowData<unsigned_char> *pCVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   CowData<unsigned_char> *pCVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      LAB_00101a96:lVar10 = 0;
      pCVar6 = (CowData<unsigned_char>*)0x0;
   }
 else {
      lVar10 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar10) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar2 = (long*)( lVar3 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      if (lVar10 == 0) goto LAB_00101a96;
      uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar6 = (CowData<unsigned_char>*)( ( uVar5 | uVar5 >> 0x20 ) + 1 );
   }

   uVar5 = param_1 - 1U | param_1 - 1U >> 1;
   uVar5 = uVar5 | uVar5 >> 2;
   uVar5 = uVar5 | uVar5 >> 4;
   uVar5 = uVar5 | uVar5 >> 8;
   uVar5 = uVar5 | uVar5 >> 0x10;
   pCVar9 = (CowData<unsigned_char>*)( uVar5 | uVar5 >> 0x20 );
   pCVar1 = pCVar9 + 1;
   if (param_1 <= lVar10) {
      if (( pCVar1 != pCVar6 ) && ( iVar4 = iVar4 != 0 )) {
         return;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return;
      }

      FUN_0010824a();
      return;
   }

   if (pCVar1 != pCVar6) {
      if (lVar10 == 0) {
         puVar7 = (undefined8*)Memory::alloc_static(( ulong )(pCVar9 + 0x11), false);
         if (puVar7 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            return;
         }

         puVar8 = puVar7 + 2;
         *puVar7 = 1;
         puVar7[1] = 0;
         *(undefined8**)this = puVar8;
         goto LAB_001019ec;
      }

      pCVar9 = this;
      iVar4 = _realloc(this, (long)pCVar1);
      if (iVar4 != 0) {
         return;
      }

   }

   puVar8 = *(undefined8**)this;
   if (puVar8 == (undefined8*)0x0) {
      resize<false>((long)pCVar9);
      return;
   }

   LAB_001019ec:puVar8[-1] = param_1;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Noise::_get_image(int, int, int, bool, bool, bool) const */long Noise::_get_image(int param_1, int param_2, int param_3, bool param_4, bool param_5, bool param_6) {
   long *plVar1;
   undefined8 *puVar2;
   Image *pIVar3;
   code *pcVar4;
   byte bVar5;
   char cVar6;
   int iVar7;
   uint uVar8;
   uint uVar9;
   Object *pOVar10;
   void *pvVar11;
   int iVar12;
   undefined7 in_register_00000009;
   int iVar13;
   undefined4 in_register_00000034;
   long *plVar14;
   char *pcVar15;
   undefined4 in_register_0000003c;
   long lVar16;
   int iVar17;
   undefined7 in_register_00000081;
   long lVar18;
   long lVar19;
   ulong uVar20;
   int iVar21;
   long in_FS_OFFSET;
   float fVar22;
   float fVar23;
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   float fVar26;
   char in_stack_00000008;
   char in_stack_00000010;
   char *pcVar27;
   float local_d8;
   float local_d0;
   CowData<unsigned_char> *local_a8;
   Ref *local_70[2];
   long local_60;
   undefined1 local_58[8];
   long local_50[2];
   long local_40;
   lVar16 = CONCAT44(in_register_0000003c, param_1);
   plVar14 = (long*)CONCAT44(in_register_00000034, param_2);
   iVar17 = (int)CONCAT71(in_register_00000081, param_5);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar12 = (int)CONCAT71(in_register_00000009, param_4);
   if (( iVar12 < 1 || iVar17 < 1 ) || ( param_3 < 1 )) {
      _err_print_error("_get_image", "modules/noise/noise.cpp", 0x54, "Condition \"p_width <= 0 || p_height <= 0 || p_depth <= 0\" is true. Returning: Vector<Ref<Image>>()", 0, 0);
      *(undefined8*)( lVar16 + 8 ) = 0;
   }
 else {
      local_60 = 0;
      CowData<Ref<Image>>::resize<false>((CowData<Ref<Image>>*)&local_60, (long)iVar17);
      iVar21 = param_3 * iVar12;
      if (in_stack_00000010 == '\0') {
         uVar20 = 0;
         do {
            local_50[0] = 0;
            CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)local_50, (long)iVar21);
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)local_50);
            lVar18 = local_50[0];
            iVar7 = 0;
            iVar13 = 0;
            do {
               lVar19 = 0;
               do {
                  auVar24._4_12_ = SUB1612((undefined1[16])0x0, 4);
                  auVar24._0_4_ = (float)(int)lVar19;
                  if (in_stack_00000008 == '\0') {
                     fVar22 = (float)( **(code**)( *plVar14 + 0x1d8 ) )(auVar24._0_8_, plVar14);
                  }
 else {
                     fVar22 = (float)( **(code**)( *plVar14 + 0x1e8 ) )(plVar14);
                  }

                  bVar5 = 0;
                  fVar22 = fVar22 * __LC56 + __LC56;
                  if (( 0.0 <= fVar22 ) && ( bVar5 = fVar22 <= _LC52 )) {
                     bVar5 = (byte)(int)fVar22;
                  }

                  if (param_6) {
                     bVar5 = ~bVar5;
                  }

                  *(byte*)( lVar18 + iVar13 + lVar19 ) = bVar5;
                  lVar19 = lVar19 + 1;
               }
 while ( (int)lVar19 < param_3 );
               iVar7 = iVar7 + 1;
               iVar13 = iVar13 + param_3;
            }
 while ( iVar7 < iVar12 );
            pOVar10 = (Object*)operator_new(0x268, "");
            Image::Image((Image*)pOVar10, param_3, iVar12, 0, 0, local_58);
            postinitialize_handler(pOVar10);
            cVar6 = RefCounted::init_ref();
            if (cVar6 == '\0') {
               pOVar10 = (Object*)0x0;
            }

            if (local_60 == 0) {
               lVar18 = 0;
               LAB_00101e98:iVar12 = 0x38;
               pcVar15 = "./core/templates/vector.h";
               pcVar27 = "((Vector<T> *)(this))->_cowdata.size()";
               goto LAB_00101eb9;
            }

            lVar18 = *(long*)( local_60 + -8 );
            if (lVar18 <= (long)uVar20) goto LAB_00101e98;
            CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>>*)&local_60);
            puVar2 = (undefined8*)( local_60 + uVar20 * 8 );
            pIVar3 = (Image*)*puVar2;
            if (pIVar3 == (Image*)pOVar10) {
               if (pOVar10 != (Object*)0x0) goto LAB_00101daf;
            }
 else {
               *puVar2 = pOVar10;
               if (pOVar10 == (Object*)0x0) {
                  if (( pIVar3 != (Image*)0x0 ) && ( cVar6 = cVar6 != '\0' )) {
                     memdelete<Image>(pIVar3);
                  }

               }
 else {
                  cVar6 = RefCounted::reference();
                  if (cVar6 == '\0') {
                     *puVar2 = 0;
                  }

                  if (( pIVar3 != (Image*)0x0 ) && ( cVar6 = cVar6 != '\0' )) {
                     memdelete<Image>(pIVar3);
                  }

                  LAB_00101daf:cVar6 = RefCounted::unreference();
                  if (cVar6 != '\0') {
                     memdelete<Image>((Image*)pOVar10);
                  }

               }

            }

            lVar18 = local_50[0];
            if (local_50[0] != 0) {
               LOCK();
               plVar1 = (long*)( local_50[0] + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_50[0] = 0;
                  Memory::free_static((void*)( lVar18 + -0x10 ), false);
               }

            }

            uVar20 = uVar20 + 1;
         }
 while ( (int)uVar20 < iVar17 );
      }
 else {
         uVar8 = iVar17 * iVar21;
         uVar9 = uVar8 - 1 >> 1 | uVar8 - 1;
         uVar9 = uVar9 | uVar9 >> 2;
         uVar9 = uVar9 | uVar9 >> 4;
         uVar9 = uVar9 | uVar9 >> 8;
         pvVar11 = (void*)Memory::realloc_static((void*)0x0, ( ulong )(( uVar9 | uVar9 >> 0x10 ) + 1) << 2, false);
         if (pvVar11 == (void*)0x0) {
            _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         uVar9 = 0;
         iVar7 = 0;
         local_d0 = _LC41;
         local_d8 = _LC42;
         do {
            iVar13 = 0;
            do {
               lVar18 = (long)(int)uVar9;
               lVar19 = 0;
               do {
                  auVar25._4_12_ = SUB1612((undefined1[16])0x0, 4);
                  auVar25._0_4_ = (float)(int)lVar19;
                  if (in_stack_00000008 == '\0') {
                     fVar22 = (float)( **(code**)( *plVar14 + 0x1d8 ) )(auVar25._0_8_, plVar14);
                  }
 else {
                     fVar22 = (float)( **(code**)( *plVar14 + 0x1e8 ) )(plVar14);
                  }

                  if (uVar8 <= uVar9) goto LAB_00102023;
                  *(float*)( (long)pvVar11 + lVar19 * 4 + lVar18 * 4 ) = fVar22;
                  uVar9 = uVar9 + 1;
                  fVar26 = fVar22;
                  if (fVar22 <= local_d0) {
                     fVar26 = local_d0;
                  }

                  if (local_d8 <= fVar22) {
                     fVar22 = local_d8;
                  }

                  lVar19 = lVar19 + 1;
                  local_d0 = fVar26;
                  local_d8 = fVar22;
               }
 while ( (int)lVar19 < param_3 );
               iVar13 = iVar13 + 1;
            }
 while ( iVar13 < iVar12 );
            iVar7 = iVar7 + 1;
         }
 while ( iVar7 < iVar17 );
         uVar20 = 0;
         uVar9 = 0;
         do {
            local_a8 = (CowData<unsigned_char>*)local_50;
            local_50[0] = 0;
            CowData<unsigned_char>::resize<false>(local_a8, (long)iVar21);
            CowData<unsigned_char>::_copy_on_write(local_a8);
            iVar13 = 0;
            iVar7 = 0;
            do {
               lVar18 = 0;
               do {
                  bVar5 = 0;
                  if (fVar22 != fVar26) {
                     if (uVar8 <= uVar9) goto LAB_00102023;
                     bVar5 = 0;
                     fVar23 = ( ( *(float*)( (long)pvVar11 + (long)(int)uVar9 * 4 ) - fVar22 ) / ( fVar26 - fVar22 ) ) * _LC52;
                     if (( 0.0 <= fVar23 ) && ( bVar5 = fVar23 <= _LC52 )) {
                        bVar5 = (byte)(int)fVar23;
                     }

                  }

                  if (param_6) {
                     bVar5 = ~bVar5;
                  }

                  uVar9 = uVar9 + 1;
                  *(byte*)( iVar13 + local_50[0] + lVar18 ) = bVar5;
                  lVar18 = lVar18 + 1;
               }
 while ( (int)lVar18 < param_3 );
               iVar7 = iVar7 + 1;
               iVar13 = iVar13 + param_3;
            }
 while ( iVar7 < iVar12 );
            pOVar10 = (Object*)operator_new(0x268, "");
            Image::Image((Image*)pOVar10, param_3, iVar12, 0, 0, local_58);
            postinitialize_handler(pOVar10);
            local_70[0] = (Ref*)0x0;
            Ref<Image>::operator =((Ref<Image>*)local_70, (Image*)pOVar10);
            if (local_60 == 0) {
               lVar18 = 0;
               LAB_0010229e:iVar12 = 0x38;
               pcVar15 = "./core/templates/vector.h";
               pcVar27 = "((Vector<T> *)(this))->_cowdata.size()";
               goto LAB_00101eb9;
            }

            lVar18 = *(long*)( local_60 + -8 );
            if (lVar18 <= (long)uVar20) goto LAB_0010229e;
            CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>>*)&local_60);
            lVar18 = uVar20 * 8;
            uVar20 = uVar20 + 1;
            Ref<Image>::operator =((Ref<Image>*)( local_60 + lVar18 ), local_70[0]);
            Ref<Image>::unref((Ref<Image>*)local_70);
            CowData<unsigned_char>::_unref(local_a8);
         }
 while ( (int)uVar20 < iVar17 );
         Memory::free_static(pvVar11, false);
      }

      *(long*)( lVar16 + 8 ) = local_60;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return lVar16;
   LAB_00102023:uVar20 = (ulong)uVar9;
   iVar12 = 0xb2;
   pcVar27 = "count";
   pcVar15 = "./core/templates/local_vector.h";
   lVar18 = (long)(int)uVar8;
   LAB_00101eb9:_err_print_index_error("operator[]", pcVar15, iVar12, uVar20, lVar18, "p_index", pcVar27, "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar4 = (code*)invalidInstructionException();
   ( *pcVar4 )();
}
/* Noise::get_image(int, int, bool, bool, bool) const */long *Noise::get_image(int param_1, int param_2, bool param_3, bool param_4, bool param_5) {
   code *pcVar1;
   char cVar2;
   undefined7 in_register_00000011;
   undefined4 in_register_0000003c;
   long *plVar3;
   long in_FS_OFFSET;
   undefined1 auStack_28[8];
   long *local_20[2];
   long local_10;
   plVar3 = (long*)CONCAT44(in_register_0000003c, param_1);
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   _get_image((int)auStack_28, param_2, (int)CONCAT71(in_register_00000011, param_3), param_4, true, param_5);
   if (local_20[0] != (long*)0x0) {
      if (local_20[0][-1] < 1) {
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, local_20[0][-1], "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      *plVar3 = 0;
      if (*local_20[0] == 0) goto LAB_0010237a;
      *plVar3 = *local_20[0];
      cVar2 = RefCounted::reference();
      if (cVar2 != '\0') goto LAB_0010237a;
   }

   *plVar3 = 0;
   LAB_0010237a:CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)local_20);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return plVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Noise::get_image_3d(int, int, int, bool, bool) const */Noise * __thiscall
Noise::get_image_3d(Noise *this,int param_1,int param_2,int param_3,bool param_4,bool param_5){
   long *plVar1;
   Variant *pVVar2;
   long lVar3;
   uint uVar4;
   long in_FS_OFFSET;
   long local_80;
   undefined1 local_78[8];
   long local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[2];
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _get_image((int)local_78, param_1, param_2, SUB41(param_3, 0), param_4, param_5);
   Array::Array((Array*)this);
   local_50 = (undefined1[16])0x0;
   local_68 = "Image";
   local_58[0] = 0;
   local_58[1] = 0;
   local_80 = 0;
   local_60 = 5;
   String::parse_latin1((StrRange*)&local_80);
   StringName::StringName((StringName*)&local_68, (String*)&local_80, false);
   uVar4 = (uint)this;
   Array::set_typed(uVar4, (StringName*)0x18, (Variant*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar3 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_70 == 0) {
      Array::resize(uVar4);
   }
 else {
      Array::resize(uVar4);
      if (0 < *(long*)( local_70 + -8 )) {
         lVar3 = 0;
         do {
            while (true) {
               Variant::Variant((Variant*)local_58, *(Object**)( local_70 + lVar3 * 8 ));
               pVVar2 = (Variant*)Array::operator [](uVar4);
               if (pVVar2 == (Variant*)local_58) break;
               if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
                  Variant::_clear_internal();
               }

               *(undefined4*)pVVar2 = 0;
               *(int*)pVVar2 = local_58[0];
               *(undefined8*)( pVVar2 + 8 ) = local_50._0_8_;
               *(undefined8*)( pVVar2 + 0x10 ) = local_50._8_8_;
               LAB_00102544:lVar3 = lVar3 + 1;
               if (*(long*)( local_70 + -8 ) <= lVar3) goto LAB_00102590;
            }
;
            if (Variant::needs_deinit[local_58[0]] == '\0') goto LAB_00102544;
            lVar3 = lVar3 + 1;
            Variant::_clear_internal();
         }
 while ( lVar3 < *(long*)( local_70 + -8 ) );
      }

   }

   LAB_00102590:CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)&local_70);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* Noise::_get_seamless_image(int, int, int, bool, bool, float, bool) const */long Noise::_get_seamless_image(int param_1, int param_2, int param_3, bool param_4, bool param_5, float param_6, bool param_7) {
   uint *puVar1;
   byte bVar2;
   uint uVar3;
   Image *pIVar4;
   code *pcVar5;
   double dVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   Ref *pRVar12;
   char cVar13;
   int iVar14;
   int iVar15;
   int iVar16;
   undefined4 uVar17;
   int iVar18;
   uint uVar19;
   uint uVar20;
   undefined4 uVar21;
   undefined4 uVar22;
   long lVar23;
   Object *pOVar24;
   int iVar25;
   int iVar26;
   undefined7 in_register_00000009;
   byte bVar31;
   int iVar27;
   int iVar28;
   int iVar29;
   undefined8 *puVar30;
   int iVar32;
   uint uVar33;
   ulong uVar34;
   long lVar35;
   ushort uVar36;
   undefined4 in_register_0000003c;
   long lVar37;
   byte *pbVar38;
   ushort uVar39;
   int iVar40;
   uint uVar41;
   undefined7 in_register_00000081;
   int iVar42;
   uint uVar43;
   long lVar44;
   uint uVar45;
   uint uVar46;
   int iVar47;
   long *plVar48;
   int iVar49;
   int iVar50;
   ushort uVar51;
   uint uVar52;
   int iVar53;
   long lVar54;
   long in_FS_OFFSET;
   float fVar55;
   float fVar56;
   float fVar57;
   long local_1a0;
   ulong local_198;
   float local_178;
   ulong local_168;
   uint local_158;
   long local_128;
   int local_120;
   CowData<Ref<Image>> *local_118;
   uint local_108;
   int local_104;
   CowData<Ref<Image>> *local_100;
   uint local_e0;
   CowData<Ref<Image>> *local_d8;
   Ref *local_c0;
   undefined1 local_b8[8];
   long local_b0[2];
   long local_a0[2];
   long local_90[2];
   long local_80[2];
   long local_70[2];
   long local_60;
   Ref *local_58;
   long local_50[2];
   long local_40;
   lVar37 = CONCAT44(in_register_0000003c, param_1);
   iVar50 = (int)CONCAT71(in_register_00000009, param_4);
   iVar40 = (int)CONCAT71(in_register_00000081, param_5);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( iVar50 < 1 || iVar40 < 1 ) || ( param_3 < 1 )) {
      _err_print_error("_get_seamless_image", "modules/noise/noise.cpp", 0x24, "Condition \"p_width <= 0 || p_height <= 0 || p_depth <= 0\" is true. Returning: Vector<Ref<Image>>()", 0, 0);
      *(undefined8*)( lVar37 + 8 ) = 0;
      goto LAB_00104849;
   }

   local_1a0._0_4_ = 1.4013e-45;
   if (_LC60 <= (float)param_3 * param_6) {
      local_1a0._0_4_ = (float)(int)( (float)param_3 * param_6 );
   }

   local_120 = 1;
   if (_LC60 <= (float)iVar50 * param_6) {
      local_120 = (int)( (float)iVar50 * param_6 );
   }

   local_104 = 1;
   if (_LC60 <= (float)iVar40 * param_6) {
      local_104 = (int)( (float)iVar40 * param_6 );
   }

   iVar49 = param_3 + (int)(float)local_1a0;
   iVar53 = iVar50 + local_120;
   _get_image((int)local_b8, param_2, iVar49, SUB41(iVar53, 0), (bool)( param_5 + (char)local_104 ), param_7);
   if (local_b0[0] == 0) {
      LAB_0010487a:lVar23 = 0;
   }
 else {
      lVar23 = *(long*)( local_b0[0] + -8 );
      if (0 < lVar23) {
         iVar14 = Image::get_format();
         if (iVar14 == 0) {
            local_a0[0] = 0;
            CowData<Ref<Image>>::_ref((CowData<Ref<Image>>*)local_a0, (CowData*)local_b0);
            lVar44 = local_a0[0];
            dVar6 = _LC65;
            if (param_6 < 0.0) {
               LAB_001049e2:_err_print_error("_generate_seamless_image", "modules/noise/noise.h", 0x69, "Condition \"p_blend_skirt < 0\" is true. Returning: Vector<Ref<Image>>()", 0, 0);
               *(undefined8*)( lVar37 + 8 ) = 0;
            }
 else {
               iVar14 = (int)( (double)param_3 * _LC65 );
               iVar15 = iVar14 + (int)(float)local_1a0;
               iVar32 = (int)( (double)iVar50 * _LC65 );
               iVar16 = local_120 + iVar32;
               if (local_a0[0] == 0) goto LAB_0010487a;
               lVar23 = *(long*)( local_a0[0] + -8 );
               if (lVar23 < 1) goto LAB_0010487d;
               uVar17 = Image::get_format();
               iVar18 = Image::get_format_pixel_size(uVar17);
               local_90[0] = 0;
               CowData<Ref<Image>>::resize<false>((CowData<Ref<Image>>*)local_90, *(long*)( lVar44 + -8 ));
               if (local_90[0] != 0) {
                  local_168 = 0;
                  do {
                     lVar23 = local_90[0];
                     if (*(long*)( local_90[0] + -8 ) <= (long)local_168) goto LAB_0010426d;
                     local_60 = 0;
                     CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_60, (long)( iVar50 * param_3 * iVar18 ));
                     lVar44 = local_a0[0];
                     if (local_a0[0] == 0) {
                        lVar23 = 0;
                        local_128 = local_168;
                        goto LAB_0010489a;
                     }

                     lVar23 = *(long*)( local_a0[0] + -8 );
                     local_128 = local_168;
                     if (lVar23 <= (long)local_168) goto LAB_0010489a;
                     Image::get_data();
                     lVar23 = local_50[0];
                     if (local_50[0] != 0) {
                        LOCK();
                        plVar48 = (long*)( local_50[0] + -0x10 );
                        *plVar48 = *plVar48 + -1;
                        UNLOCK();
                        lVar44 = local_a0[0];
                        if (*plVar48 == 0) {
                           local_50[0] = 0;
                           Memory::free_static((void*)( lVar23 + -0x10 ), false);
                           lVar44 = local_a0[0];
                        }

                     }

                     CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_60);
                     fVar10 = _LC68;
                     fVar7 = _LC60;
                     iVar42 = 0;
                     do {
                        iVar26 = 0;
                        do {
                           iVar25 = iVar26 + 1;
                           *(undefined1*)( local_60 + ( iVar26 % param_3 + ( iVar42 % iVar50 ) * param_3 ) ) = *(undefined1*)( lVar23 + ( ( iVar26 + iVar14 ) % param_3 + ( ( iVar42 + iVar32 ) % iVar50 ) * iVar49 ) );
                           fVar9 = _LC68;
                           fVar8 = _LC67;
                           fVar57 = _LC52;
                           iVar26 = iVar25;
                        }
 while ( iVar25 < param_3 );
                        iVar42 = iVar42 + 1;
                     }
 while ( iVar42 < iVar50 );
                     if (iVar14 < iVar15) {
                        iVar42 = iVar14;
                        iVar26 = iVar14 * 2;
                        do {
                           iVar25 = 0xff;
                           fVar55 = ( (float)( iVar26 + iVar14 * -2 ) / (float)(int)(float)local_1a0 - _LC66 ) / fVar8;
                           if (( 0.0 <= fVar55 ) && ( iVar25 = fVar55 <= fVar7 )) {
                              iVar25 = (int)( ( fVar7 - ( fVar9 - ( fVar55 + fVar55 ) ) * fVar55 * fVar55 ) * fVar57 );
                           }

                           iVar47 = 0;
                           do {
                              while (iVar32 == iVar47) {
                                 iVar47 = iVar16;
                                 if (iVar50 <= iVar16) goto LAB_00102b2e;
                              }
;
                              iVar29 = iVar47 % iVar50;
                              iVar27 = iVar32 + iVar47;
                              iVar47 = iVar47 + 1;
                              pbVar38 = (byte*)( ( iVar29 * param_3 + iVar42 % param_3 ) + local_60 );
                              *pbVar38 = ( byte )(( uint ) * (byte*)( lVar23 + ( ( iVar27 % iVar50 ) * iVar49 + iVar26 % iVar49 ) ) * ( iVar25 + 1U & 0xffff ) + ( uint ) * pbVar38 * ( 0x100U - iVar25 & 0xffff ) >> 8);
                           }
 while ( iVar47 < iVar50 );
                           LAB_00102b2e:iVar42 = iVar42 + 1;
                           iVar26 = iVar26 + 1;
                        }
 while ( iVar15 != iVar42 );
                     }

                     fVar55 = _LC68;
                     fVar9 = _LC67;
                     fVar8 = _LC66;
                     fVar57 = _LC52;
                     if (iVar32 < iVar16) {
                        iVar42 = iVar32;
                        do {
                           iVar26 = 0xff;
                           fVar56 = ( (float)( iVar42 - iVar32 ) / (float)local_120 - fVar8 ) / fVar9;
                           if (( 0.0 <= fVar56 ) && ( iVar26 = fVar56 <= fVar7 )) {
                              iVar26 = (int)( ( fVar7 - ( fVar55 - ( fVar56 + fVar56 ) ) * fVar56 * fVar56 ) * fVar57 );
                           }

                           iVar25 = 0;
                           do {
                              while (iVar14 == iVar25) {
                                 iVar25 = iVar15;
                                 if (param_3 <= iVar15) goto LAB_00102c86;
                              }
;
                              iVar27 = iVar25 % param_3;
                              iVar47 = iVar14 + iVar25;
                              iVar25 = iVar25 + 1;
                              pbVar38 = (byte*)( ( ( iVar42 % iVar50 ) * param_3 + iVar27 ) + local_60 );
                              *pbVar38 = ( byte )(( uint ) * (byte*)( lVar23 + ( ( ( iVar42 + iVar32 ) % iVar53 ) * iVar49 + iVar47 % param_3 ) ) * ( iVar26 + 1U & 0xffff ) + ( uint ) * pbVar38 * ( 0x100U - iVar26 & 0xffff ) >> 8);
                           }
 while ( iVar25 < param_3 );
                           LAB_00102c86:fVar11 = _LC68;
                           fVar56 = _LC52;
                           iVar42 = iVar42 + 1;
                           iVar26 = iVar32;
                        }
 while ( iVar16 != iVar42 );
                        do {
                           if (iVar14 < iVar15) {
                              iVar47 = iVar49 * ( ( iVar32 + iVar26 ) % iVar53 );
                              fVar57 = ( (float)( iVar26 - iVar32 ) / (float)local_120 - fVar8 ) / fVar9;
                              iVar42 = iVar49 * ( ( iVar32 + iVar26 ) % iVar50 );
                              iVar25 = 0;
                              do {
                                 iVar27 = iVar14 + iVar25;
                                 fVar55 = ( (float)iVar25 / (float)(int)(float)local_1a0 - fVar8 ) / fVar9;
                                 if (0.0 <= fVar55) {
                                    if (fVar7 < fVar55) {
                                       uVar41 = 0x100;
                                       uVar46 = 1;
                                    }
 else {
                                       iVar29 = (int)( ( fVar7 - ( fVar11 - ( fVar55 + fVar55 ) ) * fVar55 * fVar55 ) * fVar56 );
                                       uVar46 = iVar29 + 1U & 0xffff;
                                       uVar41 = 0x100U - iVar29 & 0xffff;
                                    }

                                    if (0.0 <= fVar57) goto LAB_00102d93;
                                    LAB_00102ea2:uVar45 = 1;
                                    uVar52 = 0x100;
                                 }
 else {
                                    uVar41 = 1;
                                    uVar46 = 0x100;
                                    if (fVar57 < 0.0) goto LAB_00102ea2;
                                    LAB_00102d93:if (fVar7 < fVar57) {
                                       uVar45 = 0x100;
                                       uVar52 = 1;
                                    }
 else {
                                       iVar29 = (int)( ( fVar7 - ( fVar10 - ( fVar57 + fVar57 ) ) * fVar57 * fVar57 ) * fVar56 );
                                       uVar52 = ( uint )(ushort)((short)iVar29 + 1);
                                       uVar45 = 0x100U - iVar29 & 0xffff;
                                    }

                                 }

                                 iVar29 = iVar14 + iVar27;
                                 iVar25 = iVar25 + 1;
                                 iVar28 = iVar29 % iVar49;
                                 iVar29 = iVar29 % param_3;
                                 *(char*)( local_60 + ( iVar27 % param_3 + ( iVar26 % iVar50 ) * param_3 ) ) = (char)( ( *(byte*)( lVar23 + ( iVar28 + iVar47 ) ) * uVar46 + *(byte*)( lVar23 + ( iVar29 + iVar47 ) ) * uVar41 >> 8 & 0xff ) * uVar52 + ( *(byte*)( lVar23 + ( iVar29 + iVar42 ) ) * uVar41 + *(byte*)( lVar23 + ( iVar28 + iVar42 ) ) * uVar46 >> 8 & 0xff ) * uVar45 >> 8 );
                              }
 while ( (float)local_1a0 != (float)iVar25 );
                           }

                           iVar26 = iVar26 + 1;
                        }
 while ( iVar16 != iVar26 );
                     }

                     pOVar24 = (Object*)operator_new(0x268, "");
                     Image::Image((Image*)pOVar24, param_3, iVar50);
                     postinitialize_handler(pOVar24);
                     cVar13 = RefCounted::init_ref();
                     if (cVar13 == '\0') {
                        pOVar24 = (Object*)0x0;
                     }

                     if (lVar44 == 0) {
                        LAB_001048d9:lVar23 = 0;
                        local_128 = local_168;
                        goto LAB_001048fb;
                     }

                     lVar23 = *(long*)( lVar44 + -8 );
                     local_128 = local_168;
                     if (lVar23 <= (long)local_168) goto LAB_001048fb;
                     CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>>*)local_a0);
                     plVar48 = (long*)( local_168 * 8 + local_a0[0] );
                     if (( *plVar48 != 0 ) && ( cVar13 = cVar13 != '\0' )) {
                        memdelete<Image>((Image*)*plVar48);
                     }

                     *plVar48 = 0;
                     if (local_90[0] == 0) goto LAB_001048d9;
                     lVar23 = *(long*)( local_90[0] + -8 );
                     local_128 = local_168;
                     if (lVar23 <= (long)local_168) goto LAB_001048fb;
                     CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>>*)local_90);
                     puVar30 = (undefined8*)( local_168 * 8 + local_90[0] );
                     pIVar4 = (Image*)*puVar30;
                     if (pIVar4 == (Image*)pOVar24) {
                        if (pOVar24 != (Object*)0x0) {
                           cVar13 = RefCounted::unreference();
                           goto joined_r0x00104211;
                        }

                     }
 else {
                        *puVar30 = pOVar24;
                        if (pOVar24 == (Object*)0x0) {
                           if (( pIVar4 != (Image*)0x0 ) && ( cVar13 = cVar13 != '\0' )) {
                              memdelete<Image>(pIVar4);
                           }

                        }
 else {
                           cVar13 = RefCounted::reference();
                           if (cVar13 == '\0') {
                              *puVar30 = 0;
                           }

                           if (( pIVar4 != (Image*)0x0 ) && ( cVar13 = cVar13 != '\0' )) {
                              memdelete<Image>(pIVar4);
                           }

                           cVar13 = RefCounted::unreference();
                           joined_r0x00104211:if (cVar13 != '\0') {
                              memdelete<Image>((Image*)pOVar24);
                           }

                        }

                     }

                     lVar23 = local_60;
                     if (local_60 != 0) {
                        LOCK();
                        plVar48 = (long*)( local_60 + -0x10 );
                        *plVar48 = *plVar48 + -1;
                        UNLOCK();
                        if (*plVar48 == 0) {
                           local_60 = 0;
                           Memory::free_static((void*)( lVar23 + -0x10 ), false);
                        }

                     }

                     local_168 = local_168 + 1;
                  }
 while ( local_90[0] != 0 );
               }

               lVar23 = 0;
               LAB_0010426d:if (iVar40 != 1) {
                  lVar54 = 0;
                  iVar50 = (int)( (double)iVar40 * dVar6 );
                  lVar35 = (long)iVar50;
                  lVar44 = local_90[0];
                  if (0 < iVar50) {
                     do {
                        local_118 = (CowData<Ref<Image>>*)local_90;
                        local_128 = lVar54;
                        if (lVar44 == 0) {
                           lVar23 = 0;
                           goto LAB_0010489a;
                        }

                        lVar23 = *(long*)( lVar44 + -8 );
                        if (lVar23 <= lVar54) goto LAB_0010489a;
                        local_58 = (Ref*)0x0;
                        Ref<Image>::operator =((Ref<Image>*)&local_58, *(Ref**)( lVar44 + lVar54 * 8 ));
                        lVar23 = *(long*)( lVar44 + -8 );
                        local_128 = lVar35;
                        if (lVar23 <= lVar35) goto LAB_0010489a;
                        local_128 = lVar54;
                        if (lVar23 <= lVar54) goto LAB_001048fb;
                        CowData<Ref<Image>>::_copy_on_write(local_118);
                        lVar23 = local_90[0];
                        Ref<Image>::operator =((Ref<Image>*)( lVar54 * 8 + local_90[0] ), *(Ref**)( lVar44 + lVar35 * 8 ));
                        if (lVar23 == 0) {
                           lVar23 = 0;
                           local_128 = lVar35;
                           goto LAB_001048fb;
                        }

                        lVar23 = *(long*)( lVar23 + -8 );
                        local_128 = lVar35;
                        if (lVar23 <= lVar35) goto LAB_001048fb;
                        CowData<Ref<Image>>::_copy_on_write(local_118);
                        pRVar12 = local_58;
                        lVar44 = local_90[0];
                        Ref<Image>::operator =((Ref<Image>*)( local_90[0] + lVar35 * 8 ), local_58);
                        if (( pRVar12 != (Ref*)0x0 ) && ( cVar13 = cVar13 != '\0' )) {
                           memdelete<Image>((Image*)pRVar12);
                        }

                        lVar54 = lVar54 + 1;
                        lVar35 = lVar35 + 1;
                     }
 while ( iVar50 != lVar54 );
                  }

                  lVar44 = local_90[0];
                  local_118 = (CowData<Ref<Image>>*)local_90;
                  local_80[0] = 0;
                  if (local_90[0] != 0) {
                     CowData<Ref<Image>>::_ref((CowData<Ref<Image>>*)local_80, (CowData*)local_118);
                  }

                  lVar35 = (long)iVar40;
                  CowData<Ref<Image>>::resize<false>((CowData<Ref<Image>>*)local_80, lVar35);
                  fVar10 = _LC67;
                  fVar7 = _LC66;
                  if (iVar50 < iVar50 + local_104) {
                     iVar53 = 0;
                     do {
                        fVar57 = ( (float)iVar53 / (float)local_104 - fVar7 ) / fVar10;
                        if (fVar57 < 0.0) {
                           local_1a0._0_4_ = 0.0;
                        }
 else {
                           local_1a0._0_4_ = _LC60;
                           if (fVar57 <= _LC60) {
                              local_1a0._0_4_ = fVar57;
                           }

                        }

                        iVar49 = ( iVar50 + iVar53 ) % iVar40;
                        lVar54 = (long)iVar49;
                        local_128 = lVar54;
                        if (iVar49 < 0) {
                           if (lVar44 == 0) {
                              lVar23 = 0;
                           }
 else {
                              LAB_00104dad:lVar23 = *(long*)( lVar44 + -8 );
                           }

                           goto LAB_0010489a;
                        }

                        if (lVar44 == 0) {
                           lVar23 = 0;
                           goto LAB_0010489a;
                        }

                        if (*(long*)( lVar44 + -8 ) <= lVar54) goto LAB_00104dad;
                        Image::get_data();
                        if (( iVar40 + iVar53 < 0 ) || ( *(long*)( lVar44 + -8 ) <= lVar35 )) {
                           lVar23 = *(long*)( lVar44 + -8 );
                           local_128 = lVar35;
                           goto LAB_0010489a;
                        }

                        Image::get_data();
                        lVar23 = *(long*)( lVar44 + -8 );
                        local_50[0] = 0;
                        if (lVar23 < 1) goto LAB_00104c0c;
                        iVar49 = Image::get_width();
                        lVar23 = *(long*)( lVar44 + -8 );
                        if (lVar23 < 1) goto LAB_00104c0c;
                        iVar14 = Image::get_height();
                        lVar23 = *(long*)( lVar44 + -8 );
                        if (lVar23 < 1) goto LAB_00104c0c;
                        uVar17 = Image::get_format();
                        iVar15 = Image::get_format_pixel_size(uVar17);
                        CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)local_50, (long)( iVar49 * iVar14 * iVar15 ));
                        if (local_70[0] != 0) {
                           local_128 = 0;
                           iVar49 = (int)( ( _LC60 - ( _LC68 - ( (float)local_1a0 + (float)local_1a0 ) ) * (float)local_1a0 * (float)local_1a0 ) * _LC52 );
                           do {
                              if (*(long*)( local_70[0] + -8 ) <= local_128) break;
                              if (local_60 == 0) {
                                 lVar23 = 0;
                                 goto LAB_0010489a;
                              }

                              lVar23 = *(long*)( local_60 + -8 );
                              if (lVar23 <= local_128) goto LAB_0010489a;
                              bVar31 = *(byte*)( local_60 + local_128 );
                              bVar2 = *(byte*)( local_70[0] + local_128 );
                              if (local_50[0] == 0) {
                                 lVar23 = 0;
                                 goto LAB_001048fb;
                              }

                              lVar23 = *(long*)( local_50[0] + -8 );
                              if (lVar23 <= local_128) goto LAB_001048fb;
                              CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)local_50);
                              local_1a0._0_1_ = ( undefined1 )((uint)bVar31 * ( uint )(ushort)((short)iVar49 + 1) + (uint)bVar2 * ( 0x100U - iVar49 & 0xffff ) >> 8);
                              *(undefined1*)( local_50[0] + local_128 ) = (undefined1)local_1a0;
                              local_128 = local_128 + 1;
                           }
 while ( local_70[0] != 0 );
                        }

                        pOVar24 = (Object*)operator_new(0x268, "");
                        lVar23 = *(long*)( lVar44 + -8 );
                        if (lVar23 < 1) goto LAB_00104c0c;
                        uVar17 = Image::get_format();
                        lVar23 = *(long*)( lVar44 + -8 );
                        if (lVar23 < 1) goto LAB_00104c0c;
                        uVar21 = Image::get_height();
                        lVar23 = *(long*)( lVar44 + -8 );
                        if (lVar23 < 1) goto LAB_00104c0c;
                        uVar22 = Image::get_width();
                        Image::Image((Image*)pOVar24, uVar22, uVar21, 0, uVar17, &local_58);
                        postinitialize_handler(pOVar24);
                        local_c0 = (Ref*)0x0;
                        Ref<Image>::operator =((Ref<Image>*)&local_c0, (Image*)pOVar24);
                        if (local_80[0] == 0) {
                           lVar23 = 0;
                           local_128 = lVar54;
                           LAB_001048fb:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, local_128, lVar23, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
                           _err_flush_stdout();
                           /* WARNING: Does not return */
                           pcVar5 = (code*)invalidInstructionException();
                           ( *pcVar5 )();
                        }

                        lVar23 = *(long*)( local_80[0] + -8 );
                        local_128 = lVar54;
                        if (lVar23 <= lVar54) goto LAB_001048fb;
                        iVar53 = iVar53 + 1;
                        lVar35 = lVar35 + 1;
                        CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>>*)local_80);
                        Ref<Image>::operator =((Ref<Image>*)( lVar54 * 8 + local_80[0] ), local_c0);
                        Ref<Image>::unref((Ref<Image>*)&local_c0);
                        CowData<unsigned_char>::_unref((CowData<unsigned_char>*)local_50);
                        CowData<unsigned_char>::_unref((CowData<unsigned_char>*)&local_60);
                        CowData<unsigned_char>::_unref((CowData<unsigned_char>*)local_70);
                     }
 while ( local_104 != iVar53 );
                  }

                  goto LAB_00104057;
               }

               LAB_00104a36:*(long*)( lVar37 + 8 ) = lVar23;
               local_90[0] = 0;
               LAB_00104a4e:local_118 = (CowData<Ref<Image>>*)local_90;
               CowData<Ref<Image>>::_unref(local_118);
            }

            local_d8 = (CowData<Ref<Image>>*)local_b0;
            local_100 = (CowData<Ref<Image>>*)local_a0;
            CowData<Ref<Image>>::_unref(local_100);
            CowData<Ref<Image>>::_unref(local_d8);
            LAB_00104849:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return lVar37;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         local_a0[0] = 0;
         CowData<Ref<Image>>::_ref((CowData<Ref<Image>>*)local_a0, (CowData*)local_b0);
         lVar44 = local_a0[0];
         dVar6 = _LC65;
         if (param_6 < 0.0) goto LAB_001049e2;
         iVar14 = (int)( (double)param_3 * _LC65 );
         iVar15 = iVar14 + (int)(float)local_1a0;
         iVar32 = (int)( (double)iVar50 * _LC65 );
         iVar16 = local_120 + iVar32;
         if (local_a0[0] == 0) goto LAB_0010487a;
         lVar23 = *(long*)( local_a0[0] + -8 );
         if (0 < lVar23) {
            uVar17 = Image::get_format();
            iVar18 = Image::get_format_pixel_size(uVar17);
            local_90[0] = 0;
            CowData<Ref<Image>>::resize<false>((CowData<Ref<Image>>*)local_90, *(long*)( lVar44 + -8 ));
            if (local_90[0] != 0) {
               local_128 = 0;
               do {
                  lVar23 = local_90[0];
                  if (*(long*)( local_90[0] + -8 ) <= local_128) goto LAB_00103b11;
                  local_60 = 0;
                  CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_60, (long)( iVar50 * param_3 * iVar18 ));
                  lVar44 = local_a0[0];
                  if (local_a0[0] == 0) {
                     lVar23 = 0;
                     local_128 = local_128;
                     goto LAB_0010489a;
                  }

                  lVar23 = *(long*)( local_a0[0] + -8 );
                  local_128 = local_128;
                  if (lVar23 <= local_128) goto LAB_0010489a;
                  Image::get_data();
                  lVar23 = local_50[0];
                  if (local_50[0] != 0) {
                     LOCK();
                     plVar48 = (long*)( local_50[0] + -0x10 );
                     *plVar48 = *plVar48 + -1;
                     UNLOCK();
                     lVar44 = local_a0[0];
                     if (*plVar48 == 0) {
                        local_50[0] = 0;
                        Memory::free_static((void*)( lVar23 + -0x10 ), false);
                        lVar44 = local_a0[0];
                     }

                  }

                  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_60);
                  fVar10 = _LC68;
                  fVar7 = _LC60;
                  iVar42 = 0;
                  do {
                     iVar26 = 0;
                     do {
                        iVar25 = iVar26 + 1;
                        *(undefined4*)( local_60 + (long)( iVar26 % param_3 + ( iVar42 % iVar50 ) * param_3 ) * 4 ) = *(undefined4*)( lVar23 + (long)( ( iVar26 + iVar14 ) % param_3 + iVar49 * ( ( iVar42 + iVar32 ) % iVar50 ) ) * 4 );
                        fVar9 = _LC68;
                        fVar8 = _LC67;
                        fVar57 = _LC52;
                        iVar26 = iVar25;
                     }
 while ( iVar25 < param_3 );
                     iVar42 = iVar42 + 1;
                  }
 while ( iVar42 < iVar50 );
                  if (iVar14 < iVar15) {
                     uVar34 = (ulong)local_108;
                     iVar26 = iVar14;
                     iVar42 = iVar14 * 2;
                     do {
                        iVar25 = 0xff;
                        fVar55 = ( (float)( iVar42 + iVar14 * -2 ) / (float)(int)(float)local_1a0 - _LC66 ) / fVar8;
                        if (( 0.0 <= fVar55 ) && ( iVar25 = fVar55 <= fVar7 )) {
                           iVar25 = (int)( ( fVar7 - ( fVar9 - ( fVar55 + fVar55 ) ) * fVar55 * fVar55 ) * fVar57 );
                        }

                        iVar47 = 0;
                        do {
                           while (iVar32 == iVar47) {
                              iVar47 = iVar16;
                              if (iVar50 <= iVar16) goto LAB_0010337a;
                           }
;
                           uVar41 = *(uint*)( lVar23 + (long)( ( ( iVar32 + iVar47 ) % iVar50 ) * iVar49 + iVar42 % iVar49 ) * 4 );
                           puVar1 = (uint*)( local_60 + (long)( ( iVar47 % iVar50 ) * param_3 + iVar26 % param_3 ) * 4 );
                           uVar45 = ( uint )(ushort)(0x100 - (ushort)iVar25);
                           uVar46 = *puVar1;
                           uVar39 = (ushort)iVar25;
                           if (iVar25 == -1) {
                              uVar39 = ( ushort )(byte)(uVar41 >> 0x18);
                              uVar45 = 0x100 - ( uVar41 >> 0x18 );
                           }

                           uVar39 = uVar39 + 1;
                           uVar45 = uVar45 & 0xffff;
                           iVar47 = iVar47 + 1;
                           uVar41 = (uint)CONCAT62(( int6 )(uVar34 >> 0x10), CONCAT11((char)( ( uVar41 >> 8 & 0xff ) * (uint)uVar39 + ( uVar46 >> 8 & 0xff ) * uVar45 >> 8 ), (char)( ( uVar41 & 0xff ) * (uint)uVar39 + ( uVar46 & 0xff ) * uVar45 >> 8 ))) & 0xff00ffff | ( ( uVar41 >> 0x10 & 0xff ) * (uint)uVar39 + ( uVar46 >> 0x10 & 0xff ) * uVar45 >> 8 & 0xff ) << 0x10 | 0xff000000;
                           uVar34 = (ulong)uVar41;
                           *puVar1 = uVar41;
                        }
 while ( iVar47 < iVar50 );
                        LAB_0010337a:iVar42 = iVar42 + 1;
                        iVar26 = iVar26 + 1;
                     }
 while ( iVar15 != iVar26 );
                     local_108 = (uint)uVar34;
                  }

                  fVar55 = _LC68;
                  fVar9 = _LC67;
                  fVar8 = _LC66;
                  fVar57 = _LC52;
                  if (iVar32 < iVar16) {
                     uVar34 = (ulong)local_e0;
                     iVar42 = iVar32;
                     do {
                        iVar26 = 0xff;
                        fVar56 = ( (float)( iVar42 - iVar32 ) / (float)local_120 - fVar8 ) / fVar9;
                        if (( 0.0 <= fVar56 ) && ( iVar26 = fVar56 <= fVar7 )) {
                           iVar26 = (int)( ( fVar7 - ( fVar55 - ( fVar56 + fVar56 ) ) * fVar56 * fVar56 ) * fVar57 );
                        }

                        iVar25 = 0;
                        do {
                           while (iVar14 == iVar25) {
                              iVar25 = iVar15;
                              if (param_3 <= iVar15) goto LAB_00103578;
                           }
;
                           uVar41 = *(uint*)( lVar23 + (long)( iVar49 * ( ( iVar32 + iVar42 ) % iVar53 ) + ( iVar14 + iVar25 ) % param_3 ) * 4 );
                           puVar1 = (uint*)( local_60 + (long)( ( iVar42 % iVar50 ) * param_3 + iVar25 % param_3 ) * 4 );
                           uVar45 = ( uint )(ushort)(0x100 - (ushort)iVar26);
                           uVar46 = *puVar1;
                           uVar39 = (ushort)iVar26;
                           if (iVar26 == -1) {
                              uVar39 = ( ushort )(byte)(uVar41 >> 0x18);
                              uVar45 = 0x100 - ( uVar41 >> 0x18 );
                           }

                           uVar39 = uVar39 + 1;
                           uVar45 = uVar45 & 0xffff;
                           iVar25 = iVar25 + 1;
                           uVar41 = (uint)CONCAT62(( int6 )(uVar34 >> 0x10), CONCAT11((char)( ( uVar41 >> 8 & 0xff ) * (uint)uVar39 + ( uVar46 >> 8 & 0xff ) * uVar45 >> 8 ), (char)( ( uVar41 & 0xff ) * (uint)uVar39 + ( uVar46 & 0xff ) * uVar45 >> 8 ))) & 0xff00ffff | ( ( uVar41 >> 0x10 & 0xff ) * (uint)uVar39 + ( uVar46 >> 0x10 & 0xff ) * uVar45 >> 8 & 0xff ) << 0x10 | 0xff000000;
                           uVar34 = (ulong)uVar41;
                           *puVar1 = uVar41;
                        }
 while ( iVar25 < param_3 );
                        LAB_00103578:fVar11 = _LC68;
                        fVar56 = _LC52;
                        iVar42 = iVar42 + 1;
                     }
 while ( iVar16 != iVar42 );
                     local_e0 = (uint)uVar34;
                     local_168 = local_168 & 0xffffffff;
                     iVar42 = iVar32;
                     do {
                        if (iVar14 < iVar15) {
                           local_198 = (ulong)local_158;
                           iVar47 = 0;
                           iVar26 = ( ( iVar32 + iVar42 ) % iVar53 ) * iVar49;
                           fVar57 = ( (float)( iVar42 - iVar32 ) / (float)local_120 - fVar8 ) / fVar9;
                           iVar25 = ( ( iVar32 + iVar42 ) % iVar50 ) * iVar49;
                           do {
                              uVar41 = 0xff;
                              iVar27 = iVar14 + iVar47;
                              fVar55 = ( (float)iVar47 / (float)(int)(float)local_1a0 - fVar8 ) / fVar9;
                              if (( 0.0 <= fVar55 ) && ( uVar41 = fVar55 <= fVar7 )) {
                                 uVar41 = ( uint )(( fVar7 - ( fVar11 - ( fVar55 + fVar55 ) ) * fVar55 * fVar55 ) * fVar56);
                              }

                              uVar46 = 0xff;
                              if (( 0.0 <= fVar57 ) && ( uVar46 = fVar57 <= fVar7 )) {
                                 uVar46 = ( uint )(( fVar7 - ( fVar10 - ( fVar57 + fVar57 ) ) * fVar57 * fVar57 ) * fVar56);
                              }

                              iVar29 = iVar27 + iVar14;
                              iVar28 = iVar29 % iVar49;
                              uVar45 = *(uint*)( lVar23 + (long)( iVar28 + iVar26 ) * 4 );
                              iVar29 = iVar29 % param_3;
                              uVar52 = *(uint*)( lVar23 + (long)( iVar29 + iVar26 ) * 4 );
                              uVar39 = (ushort)uVar41;
                              uVar33 = uVar41;
                              uVar51 = uVar39;
                              if (uVar41 == 0xffffffff) {
                                 uVar33 = uVar45 >> 0x18;
                                 uVar51 = ( ushort )(byte)(uVar45 >> 0x18);
                              }

                              uVar51 = uVar51 + 1;
                              uVar43 = 0x100 - uVar33 & 0xffff;
                              uVar19 = (uint)CONCAT62(( int6 )(local_168 >> 0x10), CONCAT11((char)( ( uVar45 >> 8 & 0xff ) * (uint)uVar51 + ( uVar52 >> 8 & 0xff ) * uVar43 >> 8 ), (char)( ( uVar45 & 0xff ) * (uint)uVar51 + ( uVar52 & 0xff ) * uVar43 >> 8 )));
                              uVar20 = uVar19 & 0xff00ffff | 0xff000000;
                              uVar33 = *(uint*)( lVar23 + (long)( iVar28 + iVar25 ) * 4 );
                              uVar3 = *(uint*)( lVar23 + (long)( iVar29 + iVar25 ) * 4 );
                              local_168 = (ulong)uVar20;
                              if (uVar41 == 0xffffffff) {
                                 uVar41 = uVar33 >> 0x18;
                                 uVar39 = ( ushort )(byte)(uVar33 >> 0x18);
                              }

                              uVar39 = uVar39 + 1;
                              uVar41 = 0x100 - uVar41 & 0xffff;
                              bVar31 = ( byte )(( uVar33 >> 8 & 0xff ) * (uint)uVar39 + ( uVar3 >> 8 & 0xff ) * uVar41 >> 8);
                              uVar36 = (ushort)uVar46;
                              if (uVar46 == 0xffffffff) {
                                 uVar46 = uVar20 >> 0x18;
                                 uVar36 = ( ushort )(byte)(uVar20 >> 0x18);
                              }

                              uVar36 = uVar36 + 1;
                              uVar46 = 0x100 - uVar46 & 0xffff;
                              iVar47 = iVar47 + 1;
                              uVar41 = CONCAT22((short)( local_198 >> 0x10 ), CONCAT11((char)( ( ( uVar19 & 0xff00 ) >> 8 ) * (uint)uVar36 + bVar31 * uVar46 >> 8 ), (char)( ( uVar19 & 0xff ) * (uint)uVar36 + ( CONCAT11(bVar31, (char)( ( uVar33 & 0xff ) * (uint)uVar39 + ( uVar3 & 0xff ) * uVar41 >> 8 )) & 0xff ) * uVar46 >> 8 ))) & 0xff00ffff | ( ( ( uVar45 >> 0x10 & 0xff ) * (uint)uVar51 + ( uVar52 >> 0x10 & 0xff ) * uVar43 >> 8 & 0xff ) * (uint)uVar36 + ( ( uVar3 >> 0x10 & 0xff ) * uVar41 + ( uVar33 >> 0x10 & 0xff ) * (uint)uVar39 >> 8 & 0xff ) * uVar46 >> 8 & 0xff ) << 0x10;
                              local_158 = uVar41 | 0xff000000;
                              local_198 = (ulong)uVar41 | 0xff000000;
                              *(uint*)( local_60 + (long)( iVar27 % param_3 + ( iVar42 % iVar50 ) * param_3 ) * 4 ) = local_158;
                           }
 while ( (float)iVar47 != (float)local_1a0 );
                        }

                        iVar42 = iVar42 + 1;
                     }
 while ( iVar16 != iVar42 );
                  }

                  pOVar24 = (Object*)operator_new(0x268, "");
                  Image::Image((Image*)pOVar24, param_3, iVar50);
                  postinitialize_handler(pOVar24);
                  cVar13 = RefCounted::init_ref();
                  if (cVar13 == '\0') {
                     pOVar24 = (Object*)0x0;
                  }

                  if (lVar44 == 0) {
                     LAB_0010491e:lVar23 = 0;
                     goto LAB_001048fb;
                  }

                  lVar23 = *(long*)( lVar44 + -8 );
                  if (lVar23 <= local_128) goto LAB_001048fb;
                  CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>>*)local_a0);
                  plVar48 = (long*)( local_128 * 8 + local_a0[0] );
                  if (( *plVar48 != 0 ) && ( cVar13 = cVar13 != '\0' )) {
                     memdelete<Image>((Image*)*plVar48);
                  }

                  *plVar48 = 0;
                  if (local_90[0] == 0) goto LAB_0010491e;
                  lVar23 = *(long*)( local_90[0] + -8 );
                  if (lVar23 <= local_128) goto LAB_001048fb;
                  CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>>*)local_90);
                  puVar30 = (undefined8*)( local_128 * 8 + local_90[0] );
                  pIVar4 = (Image*)*puVar30;
                  if (pIVar4 == (Image*)pOVar24) {
                     if (pOVar24 != (Object*)0x0) {
                        cVar13 = RefCounted::unreference();
                        goto joined_r0x00104956;
                     }

                  }
 else {
                     *puVar30 = pOVar24;
                     if (pOVar24 == (Object*)0x0) {
                        if (( pIVar4 != (Image*)0x0 ) && ( cVar13 = cVar13 != '\0' )) {
                           memdelete<Image>(pIVar4);
                        }

                     }
 else {
                        cVar13 = RefCounted::reference();
                        if (cVar13 == '\0') {
                           *puVar30 = 0;
                        }

                        if (( pIVar4 != (Image*)0x0 ) && ( cVar13 = cVar13 != '\0' )) {
                           memdelete<Image>(pIVar4);
                        }

                        cVar13 = RefCounted::unreference();
                        joined_r0x00104956:if (cVar13 != '\0') {
                           memdelete<Image>((Image*)pOVar24);
                        }

                     }

                  }

                  lVar23 = local_60;
                  if (local_60 != 0) {
                     LOCK();
                     plVar48 = (long*)( local_60 + -0x10 );
                     *plVar48 = *plVar48 + -1;
                     UNLOCK();
                     if (*plVar48 == 0) {
                        local_60 = 0;
                        Memory::free_static((void*)( lVar23 + -0x10 ), false);
                     }

                  }

                  local_128 = local_128 + 1;
               }
 while ( local_90[0] != 0 );
            }

            lVar23 = 0;
            LAB_00103b11:if (iVar40 == 1) goto LAB_00104a36;
            lVar54 = 0;
            iVar50 = (int)( (double)iVar40 * dVar6 );
            lVar35 = (long)iVar50;
            lVar44 = local_90[0];
            if (0 < iVar50) {
               do {
                  local_128 = lVar54;
                  if (lVar44 == 0) {
                     lVar23 = 0;
                     goto LAB_0010489a;
                  }

                  lVar23 = *(long*)( lVar44 + -8 );
                  if (lVar23 <= lVar54) goto LAB_0010489a;
                  local_58 = (Ref*)0x0;
                  Ref<Image>::operator =((Ref<Image>*)&local_58, *(Ref**)( lVar44 + lVar54 * 8 ));
                  lVar23 = *(long*)( lVar44 + -8 );
                  local_128 = lVar35;
                  if (lVar23 <= lVar35) goto LAB_0010489a;
                  local_128 = lVar54;
                  if (lVar23 <= lVar54) goto LAB_001048fb;
                  CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>>*)local_90);
                  lVar23 = local_90[0];
                  Ref<Image>::operator =((Ref<Image>*)( lVar54 * 8 + local_90[0] ), *(Ref**)( lVar44 + lVar35 * 8 ));
                  if (lVar23 == 0) {
                     lVar23 = 0;
                     local_128 = lVar35;
                     goto LAB_001048fb;
                  }

                  lVar23 = *(long*)( lVar23 + -8 );
                  local_128 = lVar35;
                  if (lVar23 <= lVar35) goto LAB_001048fb;
                  CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>>*)local_90);
                  pRVar12 = local_58;
                  lVar44 = local_90[0];
                  Ref<Image>::operator =((Ref<Image>*)( local_90[0] + lVar35 * 8 ), local_58);
                  if (( pRVar12 != (Ref*)0x0 ) && ( cVar13 = cVar13 != '\0' )) {
                     memdelete<Image>((Image*)pRVar12);
                  }

                  lVar54 = lVar54 + 1;
                  lVar35 = lVar35 + 1;
               }
 while ( lVar54 != iVar50 );
            }

            lVar44 = local_90[0];
            local_80[0] = 0;
            if (local_90[0] != 0) {
               CowData<Ref<Image>>::_ref((CowData<Ref<Image>>*)local_80, (CowData*)local_90);
            }

            local_1a0 = (long)iVar40;
            CowData<Ref<Image>>::resize<false>((CowData<Ref<Image>>*)local_80, local_1a0);
            fVar10 = _LC67;
            fVar7 = _LC66;
            if (iVar50 < iVar50 + local_104) {
               iVar53 = 0;
               do {
                  fVar57 = ( (float)iVar53 / (float)local_104 - fVar7 ) / fVar10;
                  if (fVar57 < 0.0) {
                     local_178 = 0.0;
                  }
 else {
                     local_178 = _LC60;
                     if (fVar57 <= _LC60) {
                        local_178 = fVar57;
                     }

                  }

                  iVar49 = ( iVar50 + iVar53 ) % iVar40;
                  lVar35 = (long)iVar49;
                  local_128 = lVar35;
                  if (iVar49 < 0) {
                     if (lVar44 == 0) {
                        lVar23 = 0;
                     }
 else {
                        LAB_00104c5d:lVar23 = *(long*)( lVar44 + -8 );
                     }

                     goto LAB_0010489a;
                  }

                  if (lVar44 == 0) {
                     lVar23 = 0;
                     goto LAB_0010489a;
                  }

                  if (*(long*)( lVar44 + -8 ) <= lVar35) goto LAB_00104c5d;
                  Image::get_data();
                  if (( iVar40 + iVar53 < 0 ) || ( *(long*)( lVar44 + -8 ) <= local_1a0 )) {
                     lVar23 = *(long*)( lVar44 + -8 );
                     local_128 = local_1a0;
                     goto LAB_0010489a;
                  }

                  Image::get_data();
                  lVar23 = *(long*)( lVar44 + -8 );
                  local_50[0] = 0;
                  if (lVar23 < 1) goto LAB_00104c0c;
                  iVar49 = Image::get_width();
                  lVar23 = *(long*)( lVar44 + -8 );
                  if (lVar23 < 1) goto LAB_00104c0c;
                  iVar14 = Image::get_height();
                  lVar23 = *(long*)( lVar44 + -8 );
                  if (lVar23 < 1) goto LAB_00104c0c;
                  uVar17 = Image::get_format();
                  iVar15 = Image::get_format_pixel_size(uVar17);
                  CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)local_50, (long)( iVar49 * iVar14 * iVar15 ));
                  if (local_70[0] != 0) {
                     local_128 = 0;
                     iVar49 = (int)( ( _LC60 - ( _LC68 - ( local_178 + local_178 ) ) * local_178 * local_178 ) * _LC52 );
                     do {
                        if (*(long*)( local_70[0] + -8 ) <= local_128) break;
                        if (local_60 == 0) {
                           lVar23 = 0;
                           goto LAB_0010489a;
                        }

                        lVar23 = *(long*)( local_60 + -8 );
                        if (lVar23 <= local_128) goto LAB_0010489a;
                        bVar31 = *(byte*)( local_60 + local_128 );
                        bVar2 = *(byte*)( local_70[0] + local_128 );
                        if (local_50[0] == 0) {
                           lVar23 = 0;
                           goto LAB_001048fb;
                        }

                        lVar23 = *(long*)( local_50[0] + -8 );
                        if (lVar23 <= local_128) goto LAB_001048fb;
                        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)local_50);
                        *(char*)( local_50[0] + local_128 ) = (char)( (uint)bVar31 * ( uint )(ushort)((short)iVar49 + 1) + (uint)bVar2 * ( 0x100U - iVar49 & 0xffff ) >> 8 );
                        local_128 = local_128 + 1;
                     }
 while ( local_70[0] != 0 );
                  }

                  pOVar24 = (Object*)operator_new(0x268, "");
                  lVar23 = *(long*)( lVar44 + -8 );
                  if (lVar23 < 1) goto LAB_00104c0c;
                  uVar17 = Image::get_format();
                  lVar23 = *(long*)( lVar44 + -8 );
                  if (lVar23 < 1) goto LAB_00104c0c;
                  uVar21 = Image::get_height();
                  lVar23 = *(long*)( lVar44 + -8 );
                  if (lVar23 < 1) goto LAB_00104c0c;
                  uVar22 = Image::get_width();
                  Image::Image((Image*)pOVar24, uVar22, uVar21, 0, uVar17, &local_58);
                  postinitialize_handler(pOVar24);
                  local_c0 = (Ref*)0x0;
                  Ref<Image>::operator =((Ref<Image>*)&local_c0, (Image*)pOVar24);
                  if (local_80[0] == 0) {
                     lVar23 = 0;
                     local_128 = lVar35;
                     goto LAB_001048fb;
                  }

                  lVar23 = *(long*)( local_80[0] + -8 );
                  local_128 = lVar35;
                  if (lVar23 <= lVar35) goto LAB_001048fb;
                  iVar53 = iVar53 + 1;
                  CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>>*)local_80);
                  Ref<Image>::operator =((Ref<Image>*)( lVar35 * 8 + local_80[0] ), local_c0);
                  Ref<Image>::unref((Ref<Image>*)&local_c0);
                  CowData<unsigned_char>::_unref((CowData<unsigned_char>*)local_50);
                  CowData<unsigned_char>::_unref((CowData<unsigned_char>*)&local_60);
                  CowData<unsigned_char>::_unref((CowData<unsigned_char>*)local_70);
                  local_1a0 = local_1a0 + 1;
               }
 while ( iVar53 != local_104 );
            }

            LAB_00104057:*(long*)( lVar37 + 8 ) = local_80[0];
            goto LAB_00104a4e;
         }

      }

   }

   LAB_0010487d:local_128 = 0;
   LAB_0010489a:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, local_128, lVar23, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar5 = (code*)invalidInstructionException();
   ( *pcVar5 )();
   LAB_00104c0c:local_128 = 0;
   goto LAB_0010489a;
}
/* Noise::get_seamless_image(int, int, bool, bool, float, bool) const */long *Noise::get_seamless_image(int param_1, int param_2, bool param_3, bool param_4, float param_5, bool param_6) {
   long lVar1;
   code *pcVar2;
   char cVar3;
   undefined7 in_register_00000011;
   undefined4 in_register_0000003c;
   long *plVar4;
   long in_FS_OFFSET;
   undefined1 auStack_28[8];
   long *local_20[2];
   long local_10;
   plVar4 = (long*)CONCAT44(in_register_0000003c, param_1);
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   _get_seamless_image((int)auStack_28, param_2, (int)CONCAT71(in_register_00000011, param_3), param_4, true, param_5, param_6);
   if (( local_20[0] != (long*)0x0 ) && ( lVar1 = lVar1 != 0 )) {
      if (lVar1 < 1) {
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar1, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      *plVar4 = 0;
      if (*local_20[0] == 0) goto LAB_00104e56;
      *plVar4 = *local_20[0];
      cVar3 = RefCounted::reference();
      if (cVar3 != '\0') goto LAB_00104e56;
   }

   *plVar4 = 0;
   LAB_00104e56:CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)local_20);
   if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return plVar4;
}
/* Noise::get_seamless_image_3d(int, int, int, bool, float, bool) const */Noise * __thiscall
Noise::get_seamless_image_3d
          (Noise *this,int param_1,int param_2,int param_3,bool param_4,float param_5,bool param_6){
   long *plVar1;
   Variant *pVVar2;
   long lVar3;
   uint uVar4;
   long in_FS_OFFSET;
   long local_80;
   undefined1 local_78[8];
   long local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[2];
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _get_seamless_image((int)local_78, param_1, param_2, SUB41(param_3, 0), param_4, param_5, param_6);
   Array::Array((Array*)this);
   local_50 = (undefined1[16])0x0;
   local_68 = "Image";
   local_58[0] = 0;
   local_58[1] = 0;
   local_80 = 0;
   local_60 = 5;
   String::parse_latin1((StrRange*)&local_80);
   StringName::StringName((StringName*)&local_68, (String*)&local_80, false);
   uVar4 = (uint)this;
   Array::set_typed(uVar4, (StringName*)0x18, (Variant*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar3 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_70 == 0) {
      Array::resize(uVar4);
   }
 else {
      Array::resize(uVar4);
      if (0 < *(long*)( local_70 + -8 )) {
         lVar3 = 0;
         do {
            while (true) {
               Variant::Variant((Variant*)local_58, *(Object**)( local_70 + lVar3 * 8 ));
               pVVar2 = (Variant*)Array::operator [](uVar4);
               if (pVVar2 == (Variant*)local_58) break;
               if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
                  Variant::_clear_internal();
               }

               *(undefined4*)pVVar2 = 0;
               *(int*)pVVar2 = local_58[0];
               *(undefined8*)( pVVar2 + 8 ) = local_50._0_8_;
               *(undefined8*)( pVVar2 + 0x10 ) = local_50._8_8_;
               LAB_00105034:lVar3 = lVar3 + 1;
               if (*(long*)( local_70 + -8 ) <= lVar3) goto LAB_00105080;
            }
;
            if (Variant::needs_deinit[local_58[0]] == '\0') goto LAB_00105034;
            lVar3 = lVar3 + 1;
            Variant::_clear_internal();
         }
 while ( lVar3 < *(long*)( local_70 + -8 ) );
      }

   }

   LAB_00105080:CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)&local_70);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }

   return;
}
/* Object::get_save_class() const */void Object::get_save_class(void) {
   long lVar1;
   long *in_RSI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *in_RSI + 0x48 ) )();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}
/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}
/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}
/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}
/* Noise::is_class_ptr(void*) const */uint Noise::is_class_ptr(Noise *this, void *param_1) {
   return (uint)CONCAT71(0x1100, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1100, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1100, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1100, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* Noise::_getv(StringName const&, Variant&) const */undefined8 Noise::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Noise::_setv(StringName const&, Variant const&) */undefined8 Noise::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Noise::_validate_propertyv(PropertyInfo&) const */void Noise::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* Noise::_property_can_revertv(StringName const&) const */undefined8 Noise::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* Noise::_property_get_revertv(StringName const&, Variant&) const */undefined8 Noise::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Noise::_notificationv(int, bool) */void Noise::_notificationv(int param_1, bool param_2) {
   return;
}
/* MethodBindTRC<float, Vector3>::_gen_argument_type(int) const */char MethodBindTRC<float,Vector3>::_gen_argument_type(MethodBindTRC<float,Vector3> *this, int param_1) {
   return ( -(param_1 == 0) & 6U ) + 3;
}
/* MethodBindTRC<float, Vector3>::get_argument_meta(int) const */uint MethodBindTRC<float,Vector3>::get_argument_meta(MethodBindTRC<float,Vector3> *this, int param_1) {
   return param_1 >> 0x1f & 9;
}
/* MethodBindTRC<float, float, float, float>::_gen_argument_type(int) const */undefined8 MethodBindTRC<float,float,float,float>::_gen_argument_type(int param_1) {
   return 3;
}
/* MethodBindTRC<float, float, float, float>::get_argument_meta(int) const */char MethodBindTRC<float,float,float,float>::get_argument_meta(MethodBindTRC<float,float,float,float> *this, int param_1) {
   return ( param_1 < 3 ) * '\t';
}
/* MethodBindTRC<float, Vector2>::_gen_argument_type(int) const */char MethodBindTRC<float,Vector2>::_gen_argument_type(MethodBindTRC<float,Vector2> *this, int param_1) {
   return ( -(param_1 == 0) & 2U ) + 3;
}
/* MethodBindTRC<float, Vector2>::get_argument_meta(int) const */uint MethodBindTRC<float,Vector2>::get_argument_meta(MethodBindTRC<float,Vector2> *this, int param_1) {
   return param_1 >> 0x1f & 9;
}
/* MethodBindTRC<float, float, float>::_gen_argument_type(int) const */undefined8 MethodBindTRC<float,float,float>::_gen_argument_type(int param_1) {
   return 3;
}
/* MethodBindTRC<float, float, float>::get_argument_meta(int) const */char MethodBindTRC<float,float,float>::get_argument_meta(MethodBindTRC<float,float,float> *this, int param_1) {
   return ( param_1 < 2 ) * '\t';
}
/* MethodBindTRC<float, float>::_gen_argument_type(int) const */undefined8 MethodBindTRC<float,float>::_gen_argument_type(int param_1) {
   return 3;
}
/* MethodBindTRC<float, float>::get_argument_meta(int) const */char MethodBindTRC<float,float>::get_argument_meta(MethodBindTRC<float,float> *this, int param_1) {
   return ( param_1 < 1 ) * '\t';
}
/* MethodBindTRC<TypedArray<Image>, int, int, int, bool, float, bool>::_gen_argument_type(int) const
    */char MethodBindTRC<TypedArray<Image>,int,int,int,bool,float,bool>::_gen_argument_type(MethodBindTRC<TypedArray<Image>,int,int,int,bool,float,bool> *this, int param_1) {
   char cVar1;
   cVar1 = '\x1c';
   if (( ( ( (uint)param_1 < 6 ) && ( cVar1 = '\x02' ),param_1 != 0 ) ) && ( 1 < param_1 - 1U )) {
      return ( param_1 == 4 ) * '\x02' + '\x01';
   }

   return cVar1;
}
/* MethodBindTRC<TypedArray<Image>, int, int, int, bool, float, bool>::get_argument_meta(int) const
    */char MethodBindTRC<TypedArray<Image>,int,int,int,bool,float,bool>::get_argument_meta(MethodBindTRC<TypedArray<Image>,int,int,int,bool,float,bool> *this, int param_1) {
   char cVar1;
   cVar1 = '\0';
   if (( ( ( -1 < param_1 ) && ( cVar1 = '\x03' ),param_1 != 0 ) ) && ( 1 < param_1 - 1U )) {
      return ( param_1 == 4 ) * '\t';
   }

   return cVar1;
}
/* MethodBindTRC<TypedArray<Image>, int, int, int, bool, bool>::_gen_argument_type(int) const */char MethodBindTRC<TypedArray<Image>,int,int,int,bool,bool>::_gen_argument_type(MethodBindTRC<TypedArray<Image>,int,int,int,bool,bool> *this, int param_1) {
   char cVar1;
   cVar1 = '\x1c';
   if ((uint)param_1 < 5) {
      cVar1 = ( (uint)param_1 < 3 ) + '\x01';
   }

   return cVar1;
}
/* MethodBindTRC<TypedArray<Image>, int, int, int, bool, bool>::get_argument_meta(int) const */byte MethodBindTRC<TypedArray<Image>,int,int,int,bool,bool>::get_argument_meta(MethodBindTRC<TypedArray<Image>,int,int,int,bool,bool> *this, int param_1) {
   byte bVar1;
   bVar1 = 0;
   if (-1 < param_1) {
      bVar1 = -((uint)param_1 < 3) & 3;
   }

   return bVar1;
}
/* MethodBindTRC<Ref<Image>, int, int, bool, bool, float, bool>::_gen_argument_type(int) const */char MethodBindTRC<Ref<Image>,int,int,bool,bool,float,bool>::_gen_argument_type(MethodBindTRC<Ref<Image>,int,int,bool,bool,float,bool> *this, int param_1) {
   char cVar1;
   cVar1 = '\x18';
   if (( ( ( (uint)param_1 < 6 ) && ( cVar1 = '\x02' ),param_1 != 0 ) ) && ( param_1 != 1 )) {
      return ( param_1 == 4 ) * '\x02' + '\x01';
   }

   return cVar1;
}
/* MethodBindTRC<Ref<Image>, int, int, bool, bool, float, bool>::get_argument_meta(int) const */char MethodBindTRC<Ref<Image>,int,int,bool,bool,float,bool>::get_argument_meta(MethodBindTRC<Ref<Image>,int,int,bool,bool,float,bool> *this, int param_1) {
   char cVar1;
   cVar1 = '\0';
   if (( ( ( -1 < param_1 ) && ( cVar1 = '\x03' ),param_1 != 0 ) ) && ( param_1 != 1 )) {
      return ( param_1 == 4 ) * '\t';
   }

   return cVar1;
}
/* MethodBindTRC<Ref<Image>, int, int, bool, bool, bool>::_gen_argument_type(int) const */char MethodBindTRC<Ref<Image>,int,int,bool,bool,bool>::_gen_argument_type(MethodBindTRC<Ref<Image>,int,int,bool,bool,bool> *this, int param_1) {
   char cVar1;
   cVar1 = '\x18';
   if ((uint)param_1 < 5) {
      cVar1 = ( (uint)param_1 < 2 ) + '\x01';
   }

   return cVar1;
}
/* MethodBindTRC<Ref<Image>, int, int, bool, bool, bool>::get_argument_meta(int) const */byte MethodBindTRC<Ref<Image>,int,int,bool,bool,bool>::get_argument_meta(MethodBindTRC<Ref<Image>,int,int,bool,bool,bool> *this, int param_1) {
   return -((uint)param_1 < 2) & 3;
}
/* MethodBindTRC<float, float>::~MethodBindTRC() */void MethodBindTRC<float,float>::~MethodBindTRC(MethodBindTRC<float,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010fd58;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<float, float>::~MethodBindTRC() */void MethodBindTRC<float,float>::~MethodBindTRC(MethodBindTRC<float,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010fd58;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<float, float, float>::~MethodBindTRC() */void MethodBindTRC<float,float,float>::~MethodBindTRC(MethodBindTRC<float,float,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010fdb8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<float, float, float>::~MethodBindTRC() */void MethodBindTRC<float,float,float>::~MethodBindTRC(MethodBindTRC<float,float,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010fdb8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<float, Vector2>::~MethodBindTRC() */void MethodBindTRC<float,Vector2>::~MethodBindTRC(MethodBindTRC<float,Vector2> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010fe18;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<float, Vector2>::~MethodBindTRC() */void MethodBindTRC<float,Vector2>::~MethodBindTRC(MethodBindTRC<float,Vector2> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010fe18;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<float, float, float, float>::~MethodBindTRC() */void MethodBindTRC<float,float,float,float>::~MethodBindTRC(MethodBindTRC<float,float,float,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010fe78;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<float, float, float, float>::~MethodBindTRC() */void MethodBindTRC<float,float,float,float>::~MethodBindTRC(MethodBindTRC<float,float,float,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010fe78;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<float, Vector3>::~MethodBindTRC() */void MethodBindTRC<float,Vector3>::~MethodBindTRC(MethodBindTRC<float,Vector3> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010fed8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<float, Vector3>::~MethodBindTRC() */void MethodBindTRC<float,Vector3>::~MethodBindTRC(MethodBindTRC<float,Vector3> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010fed8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Ref<Image>, int, int, bool, bool, bool>::~MethodBindTRC() */void MethodBindTRC<Ref<Image>,int,int,bool,bool,bool>::~MethodBindTRC(MethodBindTRC<Ref<Image>,int,int,bool,bool,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ff38;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Ref<Image>, int, int, bool, bool, bool>::~MethodBindTRC() */void MethodBindTRC<Ref<Image>,int,int,bool,bool,bool>::~MethodBindTRC(MethodBindTRC<Ref<Image>,int,int,bool,bool,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ff38;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Ref<Image>, int, int, bool, bool, float, bool>::~MethodBindTRC() */void MethodBindTRC<Ref<Image>,int,int,bool,bool,float,bool>::~MethodBindTRC(MethodBindTRC<Ref<Image>,int,int,bool,bool,float,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ff98;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Ref<Image>, int, int, bool, bool, float, bool>::~MethodBindTRC() */void MethodBindTRC<Ref<Image>,int,int,bool,bool,float,bool>::~MethodBindTRC(MethodBindTRC<Ref<Image>,int,int,bool,bool,float,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ff98;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<TypedArray<Image>, int, int, int, bool, bool>::~MethodBindTRC() */void MethodBindTRC<TypedArray<Image>,int,int,int,bool,bool>::~MethodBindTRC(MethodBindTRC<TypedArray<Image>,int,int,int,bool,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010fff8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<TypedArray<Image>, int, int, int, bool, bool>::~MethodBindTRC() */void MethodBindTRC<TypedArray<Image>,int,int,int,bool,bool>::~MethodBindTRC(MethodBindTRC<TypedArray<Image>,int,int,int,bool,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010fff8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<TypedArray<Image>, int, int, int, bool, float, bool>::~MethodBindTRC() */void MethodBindTRC<TypedArray<Image>,int,int,int,bool,float,bool>::~MethodBindTRC(MethodBindTRC<TypedArray<Image>,int,int,int,bool,float,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00110058;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<TypedArray<Image>, int, int, int, bool, float, bool>::~MethodBindTRC() */void MethodBindTRC<TypedArray<Image>,int,int,int,bool,float,bool>::~MethodBindTRC(MethodBindTRC<TypedArray<Image>,int,int,int,bool,float,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00110058;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* Noise::_get_class_namev() const */undefined8 *Noise::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00105773:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00105773;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Noise");
         goto LAB_001057de;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Noise");
   LAB_001057de:return &_get_class_namev();
}
/* Resource::get_base_extension() const */Resource * __thiscall Resource::get_base_extension(Resource *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   String::parse_latin1((StrRange*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Image::~Image() */void Image::~Image(Image *this) {
   long *plVar1;
   long lVar2;
   *(code**)this = Memory::free_static;
   if (*(long*)( this + 0x250 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x250 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x250 );
         *(undefined8*)( this + 0x250 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         Resource::~Resource((Resource*)this);
         return;
      }

   }

   Resource::~Resource((Resource*)this);
   return;
}
/* Noise::get_class() const */void Noise::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI);
   }
 else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }

         }
 else {
            strlen(__s);
            String::parse_latin1(in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
   long lVar5;
   char cVar6;
   undefined8 uVar7;
   long lVar8;
   long in_FS_OFFSET;
   bool bVar9;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_00105a2f;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_00105a2f:cVar6 = String::operator ==(param_1, (String*)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_00105ae3;
   }

   cVar6 = String::operator ==(param_1, "RefCounted");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_00105b93;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_00105b93:cVar6 = String::operator ==(param_1, (String*)&local_60);
         lVar4 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (cVar6 != '\0') goto LAB_00105ae3;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_00105ae3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Noise::is_class(String const&) const */undefined8 Noise::is_class(Noise *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
   long lVar5;
   char cVar6;
   undefined8 uVar7;
   long lVar8;
   long in_FS_OFFSET;
   bool bVar9;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_00105cbf;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_00105cbf:cVar6 = String::operator ==(param_1, (String*)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_00105d73;
   }

   cVar6 = String::operator ==(param_1, "Noise");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_00105e33;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_00105e33:cVar6 = String::operator ==(param_1, (String*)&local_60);
         lVar4 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (cVar6 != '\0') goto LAB_00105d73;
      }

      cVar6 = String::operator ==(param_1, "Resource");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar7;
         }

         goto LAB_00105edc;
      }

   }

   LAB_00105d73:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00105edc:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
   undefined7 in_register_00000031;
   List *pLVar6;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   pLVar6 = (List*)CONCAT71(in_register_00000031, param_2);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = 0;
   local_90 = 0;
   local_78 = "RefCounted";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "RefCounted";
   local_98 = 0;
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_00106058:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00106058;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00106076;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x00106076:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])pLVar6 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   *(undefined8*)( puVar5 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
   *puVar5 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
   puVar5[6] = local_60;
   if (*(long*)( puVar5 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
   }

   lVar3 = local_58;
   puVar5[10] = local_50;
   plVar1 = *(long**)pLVar6;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar5 + 0xc ) = 0;
   *(long**)( puVar5 + 0x10 ) = plVar1;
   *(long*)( puVar5 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar5;
   }

   plVar1[1] = (long)puVar5;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar5;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   lVar2 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "RefCounted", false);
   ClassDB::get_property_list((StringName*)&local_78, pLVar6, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Resource::_get_property_listv(Resource *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Resource";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Resource";
   local_98 = 0;
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_00106458:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00106458;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00106475;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00106475:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   *(undefined8*)( puVar5 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
   *puVar5 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
   puVar5[6] = local_60;
   if (*(long*)( puVar5 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
   }

   lVar3 = local_58;
   puVar5[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar5 + 0xc ) = 0;
   *(long**)( puVar5 + 0x10 ) = plVar1;
   *(long*)( puVar5 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar5;
   }

   plVar1[1] = (long)puVar5;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar5;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   lVar2 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Resource", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Noise::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Noise::_get_property_listv(Noise *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Noise";
   local_70 = 5;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Noise";
   local_98 = 0;
   local_70 = 5;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_001068a8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001068a8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x001068c5;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x001068c5:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   *(undefined8*)( puVar5 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
   *puVar5 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
   puVar5[6] = local_60;
   if (*(long*)( puVar5 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
   }

   lVar3 = local_58;
   puVar5[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar5 + 0xc ) = 0;
   *(long**)( puVar5 + 0x10 ) = plVar1;
   *(long*)( puVar5 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar5;
   }

   plVar1[1] = (long)puVar5;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar5;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   lVar2 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Noise", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Resource::_get_property_listv((Resource*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Image::~Image() */void Image::~Image(Image *this) {
   long *plVar1;
   long lVar2;
   *(code**)this = Memory::free_static;
   if (*(long*)( this + 0x250 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x250 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x250 );
         *(undefined8*)( this + 0x250 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x268);
   return;
}
/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) {
      *(undefined8*)this = 0;
      return;
   }

   lVar2 = *(long*)this;
   *(undefined8*)this = 0;
   Memory::free_static((void*)( lVar2 + -0x10 ), false);
   return;
}
/* MethodBindTRC<float, Vector3>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<float,Vector3>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined8 uVar6;
   long lVar7;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar8;
   long in_FS_OFFSET;
   undefined8 local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar8 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (in_EDX != 0) {
      local_a0 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._0_8_;
      local_60 = auVar3 << 0x40;
      local_68 = &_LC5;
      String::parse_latin1((StrRange*)&local_a0);
      *puVar8 = 3;
      puVar8[6] = 0;
      *(undefined8*)( puVar8 + 8 ) = 0;
      *(undefined1(*) [16])( puVar8 + 2 ) = (undefined1[16])0x0;
      if (local_a0 == 0) {
         puVar8[10] = 6;
         LAB_00106dff:StringName::operator =((StringName*)( puVar8 + 4 ), (StringName*)&local_98);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar8 + 8 ), (CowData*)&local_a0);
         puVar8[10] = 6;
         if (puVar8[6] != 0x11) goto LAB_00106dff;
         StringName::StringName((StringName*)&local_68, (String*)( puVar8 + 8 ), false);
         if (*(undefined**)( puVar8 + 4 ) == local_68) {
            if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar8 + 4 ) = local_68;
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
         StringName::unref();
      }

      goto LAB_00106e30;
   }

   local_80 = 0;
   local_90 = (undefined1[16])0x0;
   local_78 = 0;
   local_70 = 6;
   local_a8 = 0;
   local_b0 = 0;
   local_68 = &_LC5;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_b0);
   local_b8 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 9);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_b0 == 0) {
      LAB_00106e68:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_a8);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_b0);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00106e68;
      StringName::StringName((StringName*)&local_a0, (String*)&local_48, false);
      if (local_60._8_8_ == local_a0) {
         if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_a0;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }

   local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
   if (local_90._0_8_ != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      uVar6 = local_60._0_8_;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      local_90._0_8_ = uVar6;
   }

   if (local_90._8_8_ != local_60._8_8_) {
      StringName::unref();
      uVar6 = local_60._8_8_;
      local_60._8_8_ = 0;
      local_90._8_8_ = uVar6;
   }

   lVar7 = local_48;
   local_80 = CONCAT44(local_80._4_4_, local_50);
   if (local_78 == local_48) {
      local_70 = local_40;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      local_78 = local_48;
      local_70 = local_40;
   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar6 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar5._8_8_ = 0;
         auVar5._0_8_ = local_60._8_8_;
         local_60 = auVar5 << 0x40;
         Memory::free_static((void*)( uVar6 + -0x10 ), false);
      }

   }

   *puVar8 = (undefined4)local_98;
   *(undefined8*)( puVar8 + 2 ) = local_90._0_8_;
   *(undefined8*)( puVar8 + 4 ) = local_90._8_8_;
   puVar8[6] = (undefined4)local_80;
   *(long*)( puVar8 + 8 ) = local_78;
   puVar8[10] = local_70;
   LAB_00106e30:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar8;
}
/* MethodBindTRC<float, Vector2>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<float,Vector2>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   long lVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar10;
   long in_FS_OFFSET;
   undefined8 local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar10 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (in_EDX != 0) {
      local_a0 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._0_8_;
      local_60 = auVar3 << 0x40;
      local_68 = &_LC5;
      String::parse_latin1((StrRange*)&local_a0);
      local_a8 = 0;
      *puVar10 = 3;
      puVar10[6] = 0;
      *(undefined8*)( puVar10 + 8 ) = 0;
      *(undefined1(*) [16])( puVar10 + 2 ) = (undefined1[16])0x0;
      if (local_a0 == 0) {
         puVar10[10] = 6;
         LAB_00107227:StringName::operator =((StringName*)( puVar10 + 4 ), (StringName*)&local_98);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar10 + 8 ), (CowData*)&local_a0);
         puVar10[10] = 6;
         if (puVar10[6] != 0x11) goto LAB_00107227;
         StringName::StringName((StringName*)&local_68, (String*)( puVar10 + 8 ), false);
         if (*(undefined**)( puVar10 + 4 ) == local_68) {
            if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar10 + 4 ) = local_68;
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      lVar7 = local_a0;
      if (local_a0 != 0) {
         LOCK();
         plVar1 = (long*)( local_a0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
         StringName::unref();
      }

      goto LAB_0010726c;
   }

   local_80 = 0;
   local_90._0_8_ = 0;
   local_90._8_8_ = 0;
   local_78 = 0;
   local_70 = 6;
   local_a8 = 0;
   local_b0 = 0;
   local_68 = &_LC5;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_b0);
   local_b8 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 5);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_b0 == 0) {
      LAB_001072c0:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_a8);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_b0);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_001072c0;
      StringName::StringName((StringName*)&local_a0, (String*)&local_48, false);
      if (local_60._8_8_ == local_a0) {
         if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_a0;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }

   local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
   if (local_90._0_8_ != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      local_90._0_8_ = local_60._0_8_;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
   }

   if (local_90._8_8_ != local_60._8_8_) {
      StringName::unref();
      local_90._8_8_ = local_60._8_8_;
      local_60._8_8_ = 0;
   }

   lVar7 = local_48;
   local_80 = CONCAT44(local_80._4_4_, local_50);
   if (local_78 == local_48) {
      local_70 = local_40;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      local_78 = local_48;
      local_70 = local_40;
   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar8 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar5._8_8_ = 0;
         auVar5._0_8_ = local_60._8_8_;
         local_60 = auVar5 << 0x40;
         Memory::free_static((void*)( uVar8 + -0x10 ), false);
      }

   }

   uVar9 = local_90._8_8_;
   uVar8 = local_90._0_8_;
   auVar6._8_8_ = 0;
   auVar6._0_8_ = local_90._8_8_;
   local_90 = auVar6 << 0x40;
   *puVar10 = (undefined4)local_98;
   *(undefined8*)( puVar10 + 2 ) = uVar8;
   *(undefined8*)( puVar10 + 4 ) = uVar9;
   puVar10[6] = (undefined4)local_80;
   *(long*)( puVar10 + 8 ) = local_78;
   puVar10[10] = local_70;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
   LAB_0010726c:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar10;
}
/* MethodBind* create_method_bind<Noise, float, float>(float (Noise::*)(float) const) */MethodBind *create_method_bind<Noise,float,float>(_func_float_float *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_float_float**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010fd58;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Noise";
   local_30 = 5;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<Noise, float, float, float>(float (Noise::*)(float, float) const)
    */MethodBind *create_method_bind<Noise,float,float,float>(_func_float_float_float *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_float_float_float**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010fdb8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "Noise";
   local_30 = 5;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<Noise, float, Vector2>(float (Noise::*)(Vector2) const) */MethodBind *create_method_bind<Noise,float,Vector2>(_func_float_Vector2 *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_float_Vector2**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010fe18;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Noise";
   local_30 = 5;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<Noise, float, float, float, float>(float (Noise::*)(float, float,
   float) const) */MethodBind *create_method_bind<Noise,float,float,float,float>(_func_float_float_float_float *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_float_float_float_float**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010fe78;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 3;
   local_40 = 0;
   local_38 = "Noise";
   local_30 = 5;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<Noise, float, Vector3>(float (Noise::*)(Vector3) const) */MethodBind *create_method_bind<Noise,float,Vector3>(_func_float_Vector3 *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_float_Vector3**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010fed8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Noise";
   local_30 = 5;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<Noise, Ref<Image>, int, int, bool, bool, bool>(Ref<Image>
   (Noise::*)(int, int, bool, bool, bool) const) */MethodBind *create_method_bind<Noise,Ref<Image>,int,int,bool,bool,bool>(_func_Ref_int_int_bool_bool_bool *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Ref_int_int_bool_bool_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010ff38;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 5;
   local_40 = 0;
   local_38 = "Noise";
   local_30 = 5;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<Noise, Ref<Image>, int, int, bool, bool, float, bool>(Ref<Image>
   (Noise::*)(int, int, bool, bool, float, bool) const) */MethodBind *create_method_bind<Noise,Ref<Image>,int,int,bool,bool,float,bool>(_func_Ref_int_int_bool_bool_float_bool *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Ref_int_int_bool_bool_float_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010ff98;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 6;
   local_40 = 0;
   local_38 = "Noise";
   local_30 = 5;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<Noise, TypedArray<Image>, int, int, int, bool,
   bool>(TypedArray<Image> (Noise::*)(int, int, int, bool, bool) const) */MethodBind *create_method_bind<Noise,TypedArray<Image>,int,int,int,bool,bool>(_func_TypedArray_int_int_int_bool_bool *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_TypedArray_int_int_int_bool_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010fff8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 5;
   local_40 = 0;
   local_38 = "Noise";
   local_30 = 5;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<Noise, TypedArray<Image>, int, int, int, bool, float,
   bool>(TypedArray<Image> (Noise::*)(int, int, int, bool, float, bool) const) */MethodBind *create_method_bind<Noise,TypedArray<Image>,int,int,int,bool,float,bool>(_func_TypedArray_int_int_int_bool_float_bool *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_TypedArray_int_int_int_bool_float_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00110058;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 6;
   local_40 = 0;
   local_38 = "Noise";
   local_30 = 5;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Noise::_bind_methods() [clone .cold] */void Noise::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Ref<Image> >::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Ref<Image>>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* Error CowData<Ref<Image> >::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<Ref<Image>>::resize<false>(long param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
void FUN_00108234(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_0010824a(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* Noise::_initialize_classv() */void Noise::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (Resource::initialize_class() == '\0') {
         if (RefCounted::initialize_class() == '\0') {
            Object::initialize_class();
            local_68 = 0;
            local_50 = 6;
            local_58 = "Object";
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "RefCounted";
            local_70 = 0;
            local_50 = 10;
            String::parse_latin1((StrRange*)&local_70);
            StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            if ((code*)PTR__bind_methods_00114008 != RefCounted::_bind_methods) {
               RefCounted::_bind_methods();
            }

            RefCounted::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "RefCounted";
         local_68 = 0;
         local_50 = 10;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "Resource";
         local_70 = 0;
         local_50 = 8;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         lVar2 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar1 = (long*)( local_70 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
            Resource::_bind_methods();
         }

         Resource::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "Noise";
      local_70 = 0;
      local_50 = 5;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      lVar2 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar1 = (long*)( local_70 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      lVar2 = local_68;
      if (local_68 != 0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      _bind_methods();
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<unsigned char>::_unref() */void CowData<unsigned_char>::_unref(CowData<unsigned_char> *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) {
      *(undefined8*)this = 0;
      return;
   }

   lVar2 = *(long*)this;
   *(undefined8*)this = 0;
   Memory::free_static((void*)( lVar2 + -0x10 ), false);
   return;
}
/* void memdelete<Image>(Image*) */void memdelete<Image>(Image *param_1) {
   long *plVar1;
   long lVar2;
   char cVar3;
   cVar3 = predelete_handler((Object*)param_1);
   if (cVar3 == '\0') {
      return;
   }

   if (*(code**)( *(long*)param_1 + 0x140 ) == Image::~Image) {
      *(code**)param_1 = Memory::free_static;
      if (*(long*)( param_1 + 0x250 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( param_1 + 0x250 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( param_1 + 0x250 );
            *(undefined8*)( param_1 + 0x250 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      Resource::~Resource((Resource*)param_1);
      Memory::free_static(param_1, false);
      return;
   }

   ( **(code**)( *(long*)param_1 + 0x140 ) )(param_1);
   Memory::free_static(param_1, false);
   return;
}
/* Ref<Image>::unref() */void Ref<Image>::unref(Ref<Image> *this) {
   char cVar1;
   if (*(long*)this != 0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         memdelete<Image>(*(Image**)this);
         *(undefined8*)this = 0;
         return;
      }

   }

   *(undefined8*)this = 0;
   return;
}
/* CowData<Ref<Image> >::_unref() */void CowData<Ref<Image>>::_unref(CowData<Ref<Image>> *this) {
   long *plVar1;
   long lVar2;
   Image *pIVar3;
   code *pcVar4;
   char cVar5;
   long *plVar6;
   long lVar7;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) {
      *(undefined8*)this = 0;
      return;
   }

   plVar1 = *(long**)this;
   if (plVar1 == (long*)0x0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   lVar2 = plVar1[-1];
   *(undefined8*)this = 0;
   if (lVar2 != 0) {
      lVar7 = 0;
      plVar6 = plVar1;
      LAB_00108785:do {
         if (*plVar6 != 0) {
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
               pIVar3 = (Image*)*plVar6;
               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
               memdelete<Image>(pIVar3);
               if (lVar2 == lVar7) break;
               goto LAB_00108785;
            }

         }

         lVar7 = lVar7 + 1;
         plVar6 = plVar6 + 1;
      }
 while ( lVar2 != lVar7 );
   }

   Memory::free_static(plVar1 + -2, false);
   return;
}
/* Ref<Image>::TEMPNAMEPLACEHOLDERVALUE(Image*) */void Ref<Image>::operator =(Ref<Image> *this, Image *param_1) {
   Image *pIVar1;
   char cVar2;
   pIVar1 = *(Image**)this;
   if (param_1 != pIVar1) {
      *(Image**)this = param_1;
      if (param_1 != (Image*)0x0) {
         cVar2 = RefCounted::init_ref();
         if (cVar2 == '\0') {
            *(undefined8*)this = 0;
         }

      }

      if (pIVar1 != (Image*)0x0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            memdelete<Image>(pIVar1);
            return;
         }

      }

   }

   return;
}
/* CowData<Ref<Image> >::_realloc(long) */undefined8 CowData<Ref<Image>>::_realloc(CowData<Ref<Image>> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* CowData<unsigned char>::_realloc(long) */undefined8 CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* WARNING: Removing unreachable block (ram,0x00108c78) *//* WARNING: Removing unreachable block (ram,0x00108e0d) *//* WARNING: Removing unreachable block (ram,0x00108e19) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
   Variant *this;
   int iVar1;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar1 = (int)local_c8;
   Array::resize(iVar1);
   this(Variant * Array::operator [](iVar1));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
   *param_1 = local_c0[0];
   Array::~Array(local_c8);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<float, Vector3>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<float,Vector3>::validated_call(MethodBindTRC<float,Vector3> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   float fVar5;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_48 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00108fa5;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   fVar5 = (float)( *pcVar3 )(*(undefined8*)( *param_2 + 8 ), *(undefined4*)( *param_2 + 0x10 ), param_1 + *(long*)( this + 0x60 ));
   *(double*)( param_3 + 8 ) = (double)fVar5;
   LAB_00108fa5:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float, Vector3>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<float,Vector3>::ptrcall(MethodBindTRC<float,Vector3> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   float fVar5;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_48 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001091d4;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   fVar5 = (float)( *pcVar3 )(**param_2, *(undefined4*)( (long)*param_2 + 8 ), param_1 + *(long*)( this + 0x60 ));
   *(double*)param_3 = (double)fVar5;
   LAB_001091d4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float, float, float, float>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindTRC<float,float,float,float>::validated_call(MethodBindTRC<float,float,float,float> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   float fVar5;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_48 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010941e;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   auVar8._4_12_ = SUB1612((undefined1[16])0x0, 4);
   auVar8._0_4_ = (float)*(double*)( param_2[2] + 8 );
   auVar7._4_12_ = SUB1612((undefined1[16])0x0, 4);
   auVar7._0_4_ = (float)*(double*)( param_2[1] + 8 );
   auVar6._4_12_ = SUB1612((undefined1[16])0x0, 4);
   auVar6._0_4_ = (float)*(double*)( *param_2 + 8 );
   fVar5 = (float)( *pcVar3 )(auVar6._0_8_, auVar7._0_8_, auVar8._0_8_, param_1 + *(long*)( this + 0x60 ));
   *(double*)( param_3 + 8 ) = (double)fVar5;
   LAB_0010941e:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float, float, float, float>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<float,float,float,float>::ptrcall(MethodBindTRC<float,float,float,float> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   float fVar5;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_48 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010966a;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   auVar8._4_12_ = SUB1612((undefined1[16])0x0, 4);
   auVar8._0_4_ = (float)*param_2[2];
   /* WARNING: Load size is inaccurate */
   auVar7._4_12_ = SUB1612((undefined1[16])0x0, 4);
   auVar7._0_4_ = (float)*param_2[1];
   /* WARNING: Load size is inaccurate */
   auVar6._4_12_ = SUB1612((undefined1[16])0x0, 4);
   auVar6._0_4_ = (float)**param_2;
   fVar5 = (float)( *pcVar3 )(auVar6._0_8_, auVar7._0_8_, auVar8._0_8_, param_1 + *(long*)( this + 0x60 ));
   *(double*)param_3 = (double)fVar5;
   LAB_0010966a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float, Vector2>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<float,Vector2>::validated_call(MethodBindTRC<float,Vector2> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   float fVar5;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_48 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001098a0;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   fVar5 = (float)( *pcVar3 )(*(undefined8*)( *param_2 + 8 ), param_1 + *(long*)( this + 0x60 ));
   *(double*)( param_3 + 8 ) = (double)fVar5;
   LAB_001098a0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float, Vector2>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<float,Vector2>::ptrcall(MethodBindTRC<float,Vector2> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   float fVar5;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_48 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00109abe;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   fVar5 = (float)( *pcVar3 )(**param_2, param_1 + *(long*)( this + 0x60 ));
   *(double*)param_3 = (double)fVar5;
   LAB_00109abe:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float, float, float>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<float,float,float>::validated_call(MethodBindTRC<float,float,float> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   float fVar5;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_48 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00109cf1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   auVar6._4_12_ = SUB1612((undefined1[16])0x0, 4);
   auVar6._0_4_ = (float)*(double*)( *param_2 + 8 );
   auVar7._4_12_ = SUB1612((undefined1[16])0x0, 4);
   auVar7._0_4_ = (float)*(double*)( param_2[1] + 8 );
   fVar5 = (float)( *pcVar3 )(auVar6._0_8_, auVar7._0_8_, param_1 + *(long*)( this + 0x60 ));
   *(double*)( param_3 + 8 ) = (double)fVar5;
   LAB_00109cf1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float, float, float>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<float,float,float>::ptrcall(MethodBindTRC<float,float,float> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   float fVar5;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_48 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00109f1e;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   auVar6._4_12_ = SUB1612((undefined1[16])0x0, 4);
   auVar6._0_4_ = (float)**param_2;
   /* WARNING: Load size is inaccurate */
   auVar7._4_12_ = SUB1612((undefined1[16])0x0, 4);
   auVar7._0_4_ = (float)*param_2[1];
   fVar5 = (float)( *pcVar3 )(auVar6._0_8_, auVar7._0_8_, param_1 + *(long*)( this + 0x60 ));
   *(double*)param_3 = (double)fVar5;
   LAB_00109f1e:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float, float>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<float,float>::validated_call(MethodBindTRC<float,float> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   float fVar5;
   undefined1 auVar6[16];
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_48 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010a144;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   auVar6._4_12_ = SUB1612((undefined1[16])0x0, 4);
   auVar6._0_4_ = (float)*(double*)( *param_2 + 8 );
   fVar5 = (float)( *pcVar3 )(auVar6._0_8_, param_1 + *(long*)( this + 0x60 ));
   *(double*)( param_3 + 8 ) = (double)fVar5;
   LAB_0010a144:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float, float>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<float,float>::ptrcall(MethodBindTRC<float,float> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   float fVar5;
   undefined1 auVar6[16];
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_48 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010a372;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   auVar6._4_12_ = SUB1612((undefined1[16])0x0, 4);
   auVar6._0_4_ = (float)**param_2;
   fVar5 = (float)( *pcVar3 )(auVar6._0_8_, param_1 + *(long*)( this + 0x60 ));
   *(double*)param_3 = (double)fVar5;
   LAB_0010a372:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<TypedArray<Image>, int, int, int, bool, bool>::validated_call(Object*, Variant
   const**, Variant*) const */void MethodBindTRC<TypedArray<Image>,int,int,int,bool,bool>::validated_call(MethodBindTRC<TypedArray<Image>,int,int,int,bool,bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_48 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010a5e3;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar3 )((Array*)&local_48, param_1 + *(long*)( this + 0x60 ), *(undefined8*)( *param_2 + 8 ), *(undefined8*)( param_2[1] + 8 ), *(undefined8*)( param_2[2] + 8 ), param_2[3][8], param_2[4][8]);
   Array::operator =((Array*)( param_3 + 8 ), (Array*)&local_48);
   Array::~Array((Array*)&local_48);
   LAB_0010a5e3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<TypedArray<Image>, int, int, int, bool, float, bool>::validated_call(Object*,
   Variant const**, Variant*) const */void MethodBindTRC<TypedArray<Image>,int,int,int,bool,float,bool>::validated_call(MethodBindTRC<TypedArray<Image>,int,int,int,bool,float,bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   undefined1 auVar5[16];
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_48 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010a83e;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   auVar5._4_12_ = SUB1612((undefined1[16])0x0, 4);
   auVar5._0_4_ = (float)*(double*)( param_2[4] + 8 );
   ( *pcVar3 )(auVar5._0_8_, (Array*)&local_48, param_1 + *(long*)( this + 0x60 ), *(undefined8*)( *param_2 + 8 ), *(undefined8*)( param_2[1] + 8 ), *(undefined8*)( param_2[2] + 8 ), param_2[3][8], param_2[5][8]);
   Array::operator =((Array*)( param_3 + 8 ), (Array*)&local_48);
   Array::~Array((Array*)&local_48);
   LAB_0010a83e:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<TypedArray<Image>, int, int, int, bool, bool>::ptrcall(Object*, void const**,
   void*) const */void MethodBindTRC<TypedArray<Image>,int,int,int,bool,bool>::ptrcall(MethodBindTRC<TypedArray<Image>,int,int,int,bool,bool> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_48 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010aa8a;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   for (int i = 0; i < 5; i++) {
      /* WARNING: Load size is inaccurate */
   }

   ( *pcVar3 )((Array*)&local_48, param_1 + *(long*)( this + 0x60 ), **param_2, *param_2[1], *param_2[2], *param_2[3] != '\0', *param_2[4] != '\0');
   Array::operator =((Array*)param_3, (Array*)&local_48);
   Array::~Array((Array*)&local_48);
   LAB_0010aa8a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<TypedArray<Image>, int, int, int, bool, float, bool>::ptrcall(Object*, void
   const**, void*) const */void MethodBindTRC<TypedArray<Image>,int,int,int,bool,float,bool>::ptrcall(MethodBindTRC<TypedArray<Image>,int,int,int,bool,float,bool> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   undefined1 auVar5[16];
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_48 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010ace9;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   auVar5._4_12_ = SUB1612((undefined1[16])0x0, 4);
   auVar5._0_4_ = (float)*param_2[4];
   for (int i = 0; i < 5; i++) {
      /* WARNING: Load size is inaccurate */
   }

   ( *pcVar3 )(auVar5._0_8_, (Array*)&local_48, param_1 + *(long*)( this + 0x60 ), **param_2, *param_2[1], *param_2[2], *param_2[3] != '\0', *param_2[5] != '\0');
   Array::operator =((Array*)param_3, (Array*)&local_48);
   Array::~Array((Array*)&local_48);
   LAB_0010ace9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Image>, int, int, bool, bool, bool>::ptrcall(Object*, void const**, void*)
   const */void MethodBindTRC<Ref<Image>,int,int,bool,bool,bool>::ptrcall(MethodBindTRC<Ref<Image>,int,int,bool,bool,bool> *this, Object *param_1, void **param_2, void *param_3) {
   char cVar1;
   code *pcVar2;
   Object *pOVar3;
   long *plVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Image *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Image*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Image*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Image*)0x108e68;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010af99;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Image*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   for (int i = 0; i < 5; i++) {
      /* WARNING: Load size is inaccurate */
   }

   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), **param_2, *param_2[1], *param_2[2] != '\0', *param_2[3] != '\0', *param_2[4] != '\0');
   if (local_48 == (Image*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 == (Object*)0x0) goto LAB_0010af99;
      *(undefined8*)param_3 = 0;
      goto LAB_0010afe1;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_0010afe1;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_0010afe1:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Image*)0x0) goto LAB_0010af99;
      }

   }

   cVar1 = RefCounted::unreference();
   if (cVar1 != '\0') {
      memdelete<Image>(local_48);
   }

   LAB_0010af99:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Image>, int, int, bool, bool, float, bool>::ptrcall(Object*, void const**,
   void*) const */void MethodBindTRC<Ref<Image>,int,int,bool,bool,float,bool>::ptrcall(MethodBindTRC<Ref<Image>,int,int,bool,bool,float,bool> *this, Object *param_1, void **param_2, void *param_3) {
   char cVar1;
   code *pcVar2;
   Object *pOVar3;
   long *plVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   undefined1 auVar6[16];
   long local_58;
   undefined8 local_50;
   Image *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Image*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Image*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Image*)0x108e68;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010b284;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Image*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   auVar6._4_12_ = SUB1612((undefined1[16])0x0, 4);
   auVar6._0_4_ = (float)*param_2[4];
   for (int i = 0; i < 5; i++) {
      /* WARNING: Load size is inaccurate */
   }

   ( *pcVar2 )(auVar6._0_8_, (StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), **param_2, *param_2[1], *param_2[2] != '\0', *param_2[3] != '\0', *param_2[5] != '\0');
   if (local_48 == (Image*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 == (Object*)0x0) goto LAB_0010b284;
      *(undefined8*)param_3 = 0;
      goto LAB_0010b2c9;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_0010b2c9;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_0010b2c9:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Image*)0x0) goto LAB_0010b284;
      }

   }

   cVar1 = RefCounted::unreference();
   if (cVar1 != '\0') {
      memdelete<Image>(local_48);
   }

   LAB_0010b284:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Image>, int, int, bool, bool, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<Ref<Image>,int,int,bool,bool,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Object *pOVar1;
   Variant *pVVar2;
   Variant *pVVar3;
   code *pcVar4;
   undefined8 uVar5;
   Object *pOVar6;
   char cVar7;
   bool bVar8;
   bool bVar9;
   bool bVar10;
   int iVar11;
   int iVar12;
   undefined4 uVar13;
   long lVar14;
   long *plVar15;
   uint uVar16;
   undefined4 in_register_00000014;
   long *plVar17;
   Variant *pVVar18;
   long lVar19;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar20;
   long in_FS_OFFSET;
   long local_a8;
   long local_a0;
   Object *local_98;
   undefined8 local_90;
   undefined4 local_88[2];
   undefined8 local_80;
   undefined8 uStack_78;
   Variant *local_68[5];
   long local_40;
   plVar17 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar17 != (long*)0x0 ) && ( plVar17[1] != 0 ) ) && ( *(char*)( plVar17[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_98, (StringName*)( param_2 + 3 ));
      if (plVar17[1] == 0) {
         plVar15 = (long*)plVar17[0x23];
         if (plVar15 == (long*)0x0) {
            plVar15 = (long*)( **(code**)( *plVar17 + 0x40 ) )();
         }

      }
 else {
         plVar15 = (long*)( plVar17[1] + 0x20 );
      }

      if (local_98 == (Object*)*plVar15) {
         if (( StringName::configured != '\0' ) && ( local_98 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_98 = (Object*)0x108e68;
         local_a0 = 0;
         local_90 = 0x35;
         String::parse_latin1((StrRange*)&local_a0);
         vformat<StringName>((StringName*)&local_98, (StrRange*)&local_a0, &local_a8);
         _err_print_error(&_LC81, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_98, 0, 0);
         pOVar6 = local_98;
         if (local_98 != (Object*)0x0) {
            LOCK();
            pOVar1 = local_98 + -0x10;
            *(long*)pOVar1 = *(long*)pOVar1 + -1;
            UNLOCK();
            if (*(long*)pOVar1 == 0) {
               local_98 = (Object*)0x0;
               Memory::free_static(pOVar6 + -0x10, false);
            }

         }

         lVar19 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar17 = (long*)( local_a0 + -0x10 );
            *plVar17 = *plVar17 + -1;
            UNLOCK();
            if (*plVar17 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar19 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010b770;
      }

      if (( StringName::configured != '\0' ) && ( local_98 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar20 = param_2[0xb];
   pVVar2 = param_2[0xc];
   if (in_R8D < 6) {
      pVVar3 = param_2[5];
      if (pVVar3 == (Variant*)0x0) {
         iVar11 = 0;
         lVar19 = 0;
      }
 else {
         lVar19 = *(long*)( pVVar3 + -8 );
         iVar11 = (int)lVar19;
      }

      if ((int)( 5 - in_R8D ) <= iVar11) {
         lVar14 = 0;
         do {
            if ((int)lVar14 < (int)in_R8D) {
               pVVar18 = *(Variant**)( param_4 + lVar14 * 8 );
            }
 else {
               uVar16 = iVar11 + -5 + (int)lVar14;
               if (lVar19 <= (int)uVar16) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar16, lVar19, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar4 = (code*)invalidInstructionException();
                  ( *pcVar4 )();
               }

               pVVar18 = pVVar3 + (ulong)uVar16 * 0x18;
            }

            local_68[lVar14] = pVVar18;
            lVar14 = lVar14 + 1;
         }
 while ( lVar14 != 5 );
         *in_R9 = 0;
         if (( (ulong)pVVar20 & 1 ) != 0) {
            pVVar20 = *(Variant**)( pVVar20 + *(long*)( (long)plVar17 + (long)pVVar2 ) + -1 );
         }

         cVar7 = Variant::can_convert_strict(*(undefined4*)local_68[4], 1);
         uVar5 = _LC82;
         if (cVar7 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar5;
         }

         bVar8 = Variant::operator_cast_to_bool(local_68[4]);
         cVar7 = Variant::can_convert_strict(*(undefined4*)local_68[3], 1);
         uVar5 = _LC83;
         if (cVar7 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar5;
         }

         bVar9 = Variant::operator_cast_to_bool(local_68[3]);
         cVar7 = Variant::can_convert_strict(*(undefined4*)local_68[2], 1);
         uVar5 = _LC84;
         if (cVar7 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar5;
         }

         bVar10 = Variant::operator_cast_to_bool(local_68[2]);
         cVar7 = Variant::can_convert_strict(*(undefined4*)local_68[1], 2);
         uVar5 = _LC85;
         if (cVar7 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar5;
         }

         iVar11 = Variant::operator_cast_to_int(local_68[1]);
         cVar7 = Variant::can_convert_strict(*(undefined4*)local_68[0], 2);
         uVar5 = _LC86;
         if (cVar7 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar5;
         }

         iVar12 = Variant::operator_cast_to_int(local_68[0]);
         ( *(code*)pVVar20 )(&local_98, (Variant*)( (long)plVar17 + (long)pVVar2 ), iVar12, iVar11, bVar10, bVar9, bVar8);
         Variant::Variant((Variant*)local_88, local_98);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_88[0];
         *(undefined8*)( param_1 + 8 ) = local_80;
         *(undefined8*)( param_1 + 0x10 ) = uStack_78;
         if (local_98 != (Object*)0x0) {
            cVar7 = RefCounted::unreference();
            if (cVar7 != '\0') {
               memdelete<Image>((Image*)local_98);
            }

         }

         goto LAB_0010b770;
      }

      uVar13 = 4;
   }
 else {
      uVar13 = 3;
   }

   *in_R9 = uVar13;
   in_R9[2] = 5;
   LAB_0010b770:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<TypedArray<Image>, int, int, int, bool, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<TypedArray<Image>,int,int,int,bool,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined8 uVar4;
   char *pcVar5;
   char cVar6;
   bool bVar7;
   bool bVar8;
   int iVar9;
   int iVar10;
   int iVar11;
   undefined4 uVar12;
   long lVar13;
   long *plVar14;
   uint uVar15;
   undefined4 in_register_00000014;
   long *plVar16;
   Variant *pVVar17;
   long lVar18;
   uint in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   Variant *local_b8;
   long local_a8;
   long local_a0;
   char *local_98;
   undefined8 local_90;
   undefined4 local_88[2];
   undefined8 local_80;
   undefined8 uStack_78;
   Variant *local_68[5];
   long local_40;
   plVar16 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar16 != (long*)0x0 ) && ( plVar16[1] != 0 ) ) && ( *(char*)( plVar16[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_98, (StringName*)( param_2 + 3 ));
      if (plVar16[1] == 0) {
         plVar14 = (long*)plVar16[0x23];
         if (plVar14 == (long*)0x0) {
            plVar14 = (long*)( **(code**)( *plVar16 + 0x40 ) )();
         }

      }
 else {
         plVar14 = (long*)( plVar16[1] + 0x20 );
      }

      if (local_98 == (char*)*plVar14) {
         if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_a0 = 0;
         local_90 = 0x35;
         String::parse_latin1((StrRange*)&local_a0);
         vformat<StringName>((StringName*)&local_98, (StrRange*)&local_a0, &local_a8);
         _err_print_error(&_LC81, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_98, 0, 0);
         pcVar5 = local_98;
         if (local_98 != (char*)0x0) {
            LOCK();
            plVar16 = (long*)( local_98 + -0x10 );
            *plVar16 = *plVar16 + -1;
            UNLOCK();
            if (*plVar16 == 0) {
               local_98 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         lVar18 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar16 = (long*)( local_a0 + -0x10 );
            *plVar16 = *plVar16 + -1;
            UNLOCK();
            if (*plVar16 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar18 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010bc41;
      }

      if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   local_b8 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 6) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar9 = 0;
         lVar18 = 0;
      }
 else {
         lVar18 = *(long*)( pVVar2 + -8 );
         iVar9 = (int)lVar18;
      }

      if ((int)( 5 - in_R8D ) <= iVar9) {
         lVar13 = 0;
         do {
            if ((int)lVar13 < (int)in_R8D) {
               pVVar17 = *(Variant**)( param_4 + lVar13 * 8 );
            }
 else {
               uVar15 = iVar9 + -5 + (int)lVar13;
               if (lVar18 <= (int)uVar15) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar15, lVar18, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               pVVar17 = pVVar2 + (ulong)uVar15 * 0x18;
            }

            local_68[lVar13] = pVVar17;
            lVar13 = lVar13 + 1;
         }
 while ( lVar13 != 5 );
         *in_R9 = 0;
         if (( (ulong)local_b8 & 1 ) != 0) {
            local_b8 = *(Variant**)( local_b8 + *(long*)( (long)plVar16 + (long)pVVar1 ) + -1 );
         }

         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[4], 1);
         uVar4 = _LC82;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         bVar7 = Variant::operator_cast_to_bool(local_68[4]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[3], 1);
         uVar4 = _LC83;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         bVar8 = Variant::operator_cast_to_bool(local_68[3]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[2], 2);
         uVar4 = _LC87;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         iVar9 = Variant::operator_cast_to_int(local_68[2]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[1], 2);
         uVar4 = _LC85;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         iVar10 = Variant::operator_cast_to_int(local_68[1]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[0], 2);
         uVar4 = _LC86;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         iVar11 = Variant::operator_cast_to_int(local_68[0]);
         ( *(code*)local_b8 )((Array*)&local_98, (Variant*)( (long)plVar16 + (long)pVVar1 ), iVar11, iVar10, iVar9, bVar8, bVar7);
         Variant::Variant((Variant*)local_88, (Array*)&local_98);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_88[0];
         *(undefined8*)( param_1 + 8 ) = local_80;
         *(undefined8*)( param_1 + 0x10 ) = uStack_78;
         Array::~Array((Array*)&local_98);
         goto LAB_0010bc41;
      }

      uVar12 = 4;
   }
 else {
      uVar12 = 3;
   }

   *in_R9 = uVar12;
   in_R9[2] = 5;
   LAB_0010bc41:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float, float>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<float,float>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char *pcVar5;
   char cVar6;
   undefined4 uVar7;
   long *plVar8;
   long lVar9;
   undefined4 in_register_00000014;
   long *plVar10;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar11;
   Variant *pVVar12;
   long in_FS_OFFSET;
   float fVar13;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC81, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0);
         pcVar5 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar10 = (long*)( local_58 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         lVar2 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar10 = (long*)( local_60 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010bfc8;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0010c010;
         LAB_0010c000:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0010c010:uVar7 = 4;
            goto LAB_0010bfbd;
         }

         if (in_R8D == 1) goto LAB_0010c000;
         lVar9 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar9) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar11 = pVVar11 + lVar9 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar12 & 1 ) != 0) {
         pVVar12 = *(Variant**)( pVVar12 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }

      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar11, 3);
      uVar4 = _LC88;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_float(pVVar11);
      fVar13 = (float)( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ));
      Variant::Variant((Variant*)local_48, fVar13);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
   }
 else {
      uVar7 = 3;
      LAB_0010bfbd:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_0010bfc8:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<float, float, float, float>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<float,float,float,float>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined8 uVar4;
   char *pcVar5;
   char cVar6;
   undefined4 uVar7;
   long lVar8;
   long *plVar9;
   uint uVar10;
   int iVar11;
   undefined4 in_register_00000014;
   long *plVar12;
   Variant *pVVar13;
   long lVar14;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar15;
   long in_FS_OFFSET;
   float fVar16;
   float fVar17;
   undefined1 auVar18[16];
   long local_98;
   long local_90;
   char *local_88;
   undefined8 local_80;
   Variant *local_78[4];
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   undefined1 extraout_var[12];
   plVar12 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar12 != (long*)0x0 ) && ( plVar12[1] != 0 ) ) && ( *(char*)( plVar12[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_88, (StringName*)( param_2 + 3 ));
      if (plVar12[1] == 0) {
         plVar9 = (long*)plVar12[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar12 + 0x40 ) )(plVar12);
         }

      }
 else {
         plVar9 = (long*)( plVar12[1] + 0x20 );
      }

      if (local_88 == (char*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_90 = 0;
         local_80 = 0x35;
         String::parse_latin1((StrRange*)&local_90);
         vformat<StringName>((StringName*)&local_88, (StrRange*)&local_90, &local_98);
         _err_print_error(&_LC81, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_88, 0);
         pcVar5 = local_88;
         if (local_88 != (char*)0x0) {
            LOCK();
            plVar12 = (long*)( local_88 + -0x10 );
            *plVar12 = *plVar12 + -1;
            UNLOCK();
            if (*plVar12 == 0) {
               local_88 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         lVar14 = local_90;
         if (local_90 != 0) {
            LOCK();
            plVar12 = (long*)( local_90 + -0x10 );
            *plVar12 = *plVar12 + -1;
            UNLOCK();
            if (*plVar12 == 0) {
               local_90 = 0;
               Memory::free_static((void*)( lVar14 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010c43a;
      }

      if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar15 = param_2[0xb];
   pVVar1 = param_2[0xc];
   uVar7 = 3;
   if (in_R8D < 4) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar11 = 0;
         lVar14 = 0;
      }
 else {
         lVar14 = *(long*)( pVVar2 + -8 );
         iVar11 = (int)lVar14;
      }

      if ((int)( 3 - in_R8D ) <= iVar11) {
         lVar8 = 0;
         do {
            if ((int)lVar8 < (int)in_R8D) {
               pVVar13 = *(Variant**)( param_4 + lVar8 * 8 );
            }
 else {
               uVar10 = iVar11 + -3 + (int)lVar8;
               if (lVar14 <= (int)uVar10) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar10, lVar14, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               pVVar13 = pVVar2 + (ulong)uVar10 * 0x18;
            }

            local_78[lVar8] = pVVar13;
            lVar8 = lVar8 + 1;
         }
 while ( lVar8 != 3 );
         *in_R9 = 0;
         if (( (ulong)pVVar15 & 1 ) != 0) {
            pVVar15 = *(Variant**)( pVVar15 + *(long*)( (long)plVar12 + (long)pVVar1 ) + -1 );
         }

         cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[2], 3);
         uVar4 = _LC89;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         fVar16 = Variant::operator_cast_to_float(local_78[2]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[1], 3);
         uVar4 = _LC90;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         fVar17 = Variant::operator_cast_to_float(local_78[1]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[0], 3);
         uVar4 = _LC88;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         auVar18._0_4_ = Variant::operator_cast_to_float(local_78[0]);
         auVar18._4_12_ = extraout_var;
         fVar16 = (float)( *(code*)pVVar15 )(auVar18._0_8_, fVar17, fVar16, (Variant*)( (long)plVar12 + (long)pVVar1 ));
         Variant::Variant((Variant*)local_58, fVar16);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_58[0];
         *(undefined8*)( param_1 + 8 ) = local_50;
         *(undefined8*)( param_1 + 0x10 ) = uStack_48;
         goto LAB_0010c43a;
      }

      uVar7 = 4;
   }

   *in_R9 = uVar7;
   in_R9[2] = 3;
   LAB_0010c43a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Image>, int, int, bool, bool, float, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<Ref<Image>,int,int,bool,bool,float,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Object *pOVar1;
   Variant *pVVar2;
   Variant *pVVar3;
   code *pcVar4;
   undefined8 uVar5;
   Object *pOVar6;
   char cVar7;
   bool bVar8;
   bool bVar9;
   bool bVar10;
   int iVar11;
   int iVar12;
   undefined4 uVar13;
   long lVar14;
   long *plVar15;
   uint uVar16;
   undefined4 in_register_00000014;
   long *plVar17;
   long lVar18;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar19;
   long in_FS_OFFSET;
   long local_b8;
   long local_b0;
   Object *local_a8;
   undefined8 local_a0;
   undefined4 local_98[2];
   undefined8 local_90;
   undefined8 uStack_88;
   Variant *local_78[7];
   long local_40;
   plVar17 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar17 != (long*)0x0 ) && ( plVar17[1] != 0 ) ) && ( *(char*)( plVar17[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_a8, (StringName*)( param_2 + 3 ));
      if (plVar17[1] == 0) {
         plVar15 = (long*)plVar17[0x23];
         if (plVar15 == (long*)0x0) {
            plVar15 = (long*)( **(code**)( *plVar17 + 0x40 ) )();
         }

      }
 else {
         plVar15 = (long*)( plVar17[1] + 0x20 );
      }

      if (local_a8 == (Object*)*plVar15) {
         if (( StringName::configured != '\0' ) && ( local_a8 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_a8 = (Object*)0x108e68;
         local_b0 = 0;
         local_a0 = 0x35;
         String::parse_latin1((StrRange*)&local_b0);
         vformat<StringName>((StringName*)&local_a8, (StrRange*)&local_b0, &local_b8);
         _err_print_error(&_LC81, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_a8, 0, 0);
         pOVar6 = local_a8;
         if (local_a8 != (Object*)0x0) {
            LOCK();
            pOVar1 = local_a8 + -0x10;
            *(long*)pOVar1 = *(long*)pOVar1 + -1;
            UNLOCK();
            if (*(long*)pOVar1 == 0) {
               local_a8 = (Object*)0x0;
               Memory::free_static(pOVar6 + -0x10, false);
            }

         }

         lVar18 = local_b0;
         if (local_b0 != 0) {
            LOCK();
            plVar17 = (long*)( local_b0 + -0x10 );
            *plVar17 = *plVar17 + -1;
            UNLOCK();
            if (*plVar17 == 0) {
               local_b0 = 0;
               Memory::free_static((void*)( lVar18 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010c958;
      }

      if (( StringName::configured != '\0' ) && ( local_a8 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar19 = param_2[0xb];
   pVVar2 = param_2[0xc];
   if (in_R8D < 7) {
      pVVar3 = param_2[5];
      if (pVVar3 == (Variant*)0x0) {
         iVar11 = 0;
         lVar18 = 0;
      }
 else {
         lVar18 = *(long*)( pVVar3 + -8 );
         iVar11 = (int)lVar18;
      }

      if ((int)( 6 - in_R8D ) <= iVar11) {
         lVar14 = 0;
         do {
            while ((int)in_R8D <= (int)lVar14) {
               uVar16 = iVar11 + -6 + (int)lVar14;
               if (lVar18 <= (int)uVar16) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar16, lVar18, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar4 = (code*)invalidInstructionException();
                  ( *pcVar4 )();
               }

               local_78[lVar14] = pVVar3 + (ulong)uVar16 * 0x18;
               lVar14 = lVar14 + 1;
               if (lVar14 == 6) goto LAB_0010c770;
            }
;
            local_78[lVar14] = *(Variant**)( param_4 + lVar14 * 8 );
            lVar14 = lVar14 + 1;
         }
 while ( lVar14 != 6 );
         LAB_0010c770:*in_R9 = 0;
         if (( (ulong)pVVar19 & 1 ) != 0) {
            pVVar19 = *(Variant**)( pVVar19 + *(long*)( (long)plVar17 + (long)pVVar2 ) + -1 );
         }

         cVar7 = Variant::can_convert_strict(*(undefined4*)local_78[5], 1);
         uVar5 = _LC91;
         if (cVar7 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar5;
         }

         bVar8 = Variant::operator_cast_to_bool(local_78[5]);
         cVar7 = Variant::can_convert_strict(*(undefined4*)local_78[4], 3);
         uVar5 = _LC92;
         if (cVar7 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar5;
         }

         Variant::operator_cast_to_float(local_78[4]);
         cVar7 = Variant::can_convert_strict(*(undefined4*)local_78[3], 1);
         uVar5 = _LC83;
         if (cVar7 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar5;
         }

         bVar9 = Variant::operator_cast_to_bool(local_78[3]);
         cVar7 = Variant::can_convert_strict(*(undefined4*)local_78[2], 1);
         uVar5 = _LC84;
         if (cVar7 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar5;
         }

         bVar10 = Variant::operator_cast_to_bool(local_78[2]);
         cVar7 = Variant::can_convert_strict(*(undefined4*)local_78[1], 2);
         uVar5 = _LC85;
         if (cVar7 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar5;
         }

         iVar11 = Variant::operator_cast_to_int(local_78[1]);
         cVar7 = Variant::can_convert_strict(*(undefined4*)local_78[0], 2);
         uVar5 = _LC86;
         if (cVar7 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar5;
         }

         iVar12 = Variant::operator_cast_to_int(local_78[0]);
         ( *(code*)pVVar19 )(&local_a8, (Variant*)( (long)plVar17 + (long)pVVar2 ), iVar12, iVar11, bVar10, bVar9, bVar8);
         Variant::Variant((Variant*)local_98, local_a8);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_98[0];
         *(undefined8*)( param_1 + 8 ) = local_90;
         *(undefined8*)( param_1 + 0x10 ) = uStack_88;
         if (local_a8 != (Object*)0x0) {
            cVar7 = RefCounted::unreference();
            if (cVar7 != '\0') {
               memdelete<Image>((Image*)local_a8);
            }

         }

         goto LAB_0010c958;
      }

      uVar13 = 4;
   }
 else {
      uVar13 = 3;
   }

   *in_R9 = uVar13;
   in_R9[2] = 6;
   LAB_0010c958:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<TypedArray<Image>, int, int, int, bool, float, bool>::call(Object*, Variant
   const**, int, Callable::CallError&) const */Object *MethodBindTRC<TypedArray<Image>,int,int,int,bool,float,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined8 uVar4;
   char *pcVar5;
   char cVar6;
   bool bVar7;
   bool bVar8;
   int iVar9;
   int iVar10;
   int iVar11;
   undefined4 uVar12;
   long lVar13;
   long *plVar14;
   uint uVar15;
   undefined4 in_register_00000014;
   long *plVar16;
   long lVar17;
   uint in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   Variant *local_d0;
   long local_b8;
   long local_b0;
   char *local_a8;
   undefined8 local_a0;
   undefined4 local_98[2];
   undefined8 local_90;
   undefined8 uStack_88;
   Variant *local_78[7];
   long local_40;
   plVar16 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar16 != (long*)0x0 ) && ( plVar16[1] != 0 ) ) && ( *(char*)( plVar16[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_a8, (StringName*)( param_2 + 3 ));
      if (plVar16[1] == 0) {
         plVar14 = (long*)plVar16[0x23];
         if (plVar14 == (long*)0x0) {
            plVar14 = (long*)( **(code**)( *plVar16 + 0x40 ) )();
         }

      }
 else {
         plVar14 = (long*)( plVar16[1] + 0x20 );
      }

      if (local_a8 == (char*)*plVar14) {
         if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_a8 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_b0 = 0;
         local_a0 = 0x35;
         String::parse_latin1((StrRange*)&local_b0);
         vformat<StringName>((StringName*)&local_a8, (StrRange*)&local_b0, &local_b8);
         _err_print_error(&_LC81, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_a8, 0, 0);
         pcVar5 = local_a8;
         if (local_a8 != (char*)0x0) {
            LOCK();
            plVar16 = (long*)( local_a8 + -0x10 );
            *plVar16 = *plVar16 + -1;
            UNLOCK();
            if (*plVar16 == 0) {
               local_a8 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         lVar17 = local_b0;
         if (local_b0 != 0) {
            LOCK();
            plVar16 = (long*)( local_b0 + -0x10 );
            *plVar16 = *plVar16 + -1;
            UNLOCK();
            if (*plVar16 == 0) {
               local_b0 = 0;
               Memory::free_static((void*)( lVar17 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010ce71;
      }

      if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   local_d0 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 7) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar9 = 0;
         lVar17 = 0;
      }
 else {
         lVar17 = *(long*)( pVVar2 + -8 );
         iVar9 = (int)lVar17;
      }

      if ((int)( 6 - in_R8D ) <= iVar9) {
         lVar13 = 0;
         do {
            while ((int)in_R8D <= (int)lVar13) {
               uVar15 = iVar9 + -6 + (int)lVar13;
               if (lVar17 <= (int)uVar15) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar15, lVar17, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               local_78[lVar13] = pVVar2 + (ulong)uVar15 * 0x18;
               lVar13 = lVar13 + 1;
               if (lVar13 == 6) goto LAB_0010cc88;
            }
;
            local_78[lVar13] = *(Variant**)( param_4 + lVar13 * 8 );
            lVar13 = lVar13 + 1;
         }
 while ( lVar13 != 6 );
         LAB_0010cc88:*in_R9 = 0;
         if (( (ulong)local_d0 & 1 ) != 0) {
            local_d0 = *(Variant**)( local_d0 + *(long*)( (long)plVar16 + (long)pVVar1 ) + -1 );
         }

         cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[5], 1);
         uVar4 = _LC91;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         bVar7 = Variant::operator_cast_to_bool(local_78[5]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[4], 3);
         uVar4 = _LC92;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_float(local_78[4]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[3], 1);
         uVar4 = _LC83;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         bVar8 = Variant::operator_cast_to_bool(local_78[3]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[2], 2);
         uVar4 = _LC87;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         iVar9 = Variant::operator_cast_to_int(local_78[2]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[1], 2);
         uVar4 = _LC85;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         iVar10 = Variant::operator_cast_to_int(local_78[1]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[0], 2);
         uVar4 = _LC86;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         iVar11 = Variant::operator_cast_to_int(local_78[0]);
         ( *(code*)local_d0 )((Array*)&local_a8, (Variant*)( (long)plVar16 + (long)pVVar1 ), iVar11, iVar10, iVar9, bVar8, bVar7);
         Variant::Variant((Variant*)local_98, (Array*)&local_a8);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_98[0];
         *(undefined8*)( param_1 + 8 ) = local_90;
         *(undefined8*)( param_1 + 0x10 ) = uStack_88;
         Array::~Array((Array*)&local_a8);
         goto LAB_0010ce71;
      }

      uVar12 = 4;
   }
 else {
      uVar12 = 3;
   }

   *in_R9 = uVar12;
   in_R9[2] = 6;
   LAB_0010ce71:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float, Vector3>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<float,Vector3>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char *pcVar5;
   char cVar6;
   undefined4 uVar7;
   long *plVar8;
   long lVar9;
   undefined4 in_register_00000014;
   long *plVar10;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar11;
   Variant *pVVar12;
   long in_FS_OFFSET;
   float fVar13;
   undefined1 auVar14[16];
   long local_98;
   long local_90;
   char *local_88;
   undefined8 local_80;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_88, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_88 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_90 = 0;
         local_80 = 0x35;
         String::parse_latin1((StrRange*)&local_90);
         vformat<StringName>((StringName*)&local_88, (StrRange*)&local_90, &local_98);
         _err_print_error(&_LC81, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_88, 0);
         pcVar5 = local_88;
         if (local_88 != (char*)0x0) {
            LOCK();
            plVar10 = (long*)( local_88 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_88 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         lVar2 = local_90;
         if (local_90 != 0) {
            LOCK();
            plVar10 = (long*)( local_90 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_90 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010d200;
      }

      if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0010d240;
         LAB_0010d230:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0010d240:uVar7 = 4;
            goto LAB_0010d1f5;
         }

         if (in_R8D == 1) goto LAB_0010d230;
         lVar9 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar9) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar11 = pVVar11 + lVar9 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar12 & 1 ) != 0) {
         pVVar12 = *(Variant**)( pVVar12 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }

      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar11, 9);
      uVar4 = _LC93;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      auVar14 = Variant::operator_cast_to_Vector3(pVVar11);
      fVar13 = (float)( *(code*)pVVar12 )(auVar14._0_8_, auVar14._8_8_ & 0xffffffff, (Variant*)( (long)plVar10 + (long)pVVar1 ));
      Variant::Variant((Variant*)local_48, fVar13);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
   }
 else {
      uVar7 = 3;
      LAB_0010d1f5:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_0010d200:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float, Vector2>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<float,Vector2>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char *pcVar5;
   char cVar6;
   undefined4 uVar7;
   long *plVar8;
   long lVar9;
   undefined4 in_register_00000014;
   long *plVar10;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar11;
   Variant *pVVar12;
   long in_FS_OFFSET;
   float fVar13;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC81, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0);
         pcVar5 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar10 = (long*)( local_58 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         lVar2 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar10 = (long*)( local_60 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010d5b8;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0010d600;
         LAB_0010d5f0:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0010d600:uVar7 = 4;
            goto LAB_0010d5ad;
         }

         if (in_R8D == 1) goto LAB_0010d5f0;
         lVar9 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar9) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar11 = pVVar11 + lVar9 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar12 & 1 ) != 0) {
         pVVar12 = *(Variant**)( pVVar12 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }

      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar11, 5);
      uVar4 = _LC94;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_Vector2(pVVar11);
      fVar13 = (float)( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ));
      Variant::Variant((Variant*)local_48, fVar13);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
   }
 else {
      uVar7 = 3;
      LAB_0010d5ad:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_0010d5b8:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<Ref<Image>, int, int, bool, bool, bool>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindTRC<Ref<Image>,int,int,bool,bool,bool>::validated_call(MethodBindTRC<Ref<Image>,int,int,bool,bool,bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Image *pIVar1;
   Image *pIVar2;
   char *pcVar3;
   char cVar4;
   code *pcVar5;
   long *plVar6;
   long in_FS_OFFSET;
   long local_58;
   Image *local_50;
   char *local_48;
   Image *local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar6 = *(long**)( param_1 + 0x118 );
         if (plVar6 == (long*)0x0) {
            plVar6 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar6 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar6) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = (Image*)0x0;
         local_40 = (Image*)0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         pcVar3 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar6 = (long*)( local_48 + -0x10 );
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

         pIVar2 = local_50;
         if (local_50 != (Image*)0x0) {
            LOCK();
            pIVar1 = local_50 + -0x10;
            *(long*)pIVar1 = *(long*)pIVar1 + -1;
            UNLOCK();
            if (*(long*)pIVar1 == 0) {
               local_50 = (Image*)0x0;
               Memory::free_static(pIVar2 + -0x10, false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010d8fd;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar5 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar5 & 1 ) != 0) {
      pcVar5 = *(code**)( pcVar5 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar5 )(&local_50, param_1 + *(long*)( this + 0x60 ), *(undefined8*)( *param_2 + 8 ), *(undefined8*)( param_2[1] + 8 ), param_2[2][8], param_2[3][8], param_2[4][8]);
   if (local_50 == (Image*)0x0) {
      Variant::ObjData::unref();
   }
 else {
      local_48 = *(char**)( local_50 + 0x60 );
      local_40 = local_50;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }

   if (local_50 != (Image*)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         memdelete<Image>(local_50);
      }

   }

   LAB_0010d8fd:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Image>, int, int, bool, bool, float, bool>::validated_call(Object*, Variant
   const**, Variant*) const */void MethodBindTRC<Ref<Image>,int,int,bool,bool,float,bool>::validated_call(MethodBindTRC<Ref<Image>,int,int,bool,bool,float,bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Image *pIVar1;
   Image *pIVar2;
   char *pcVar3;
   char cVar4;
   code *pcVar5;
   long *plVar6;
   long in_FS_OFFSET;
   undefined1 auVar7[16];
   long local_58;
   Image *local_50;
   char *local_48;
   Image *local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar6 = *(long**)( param_1 + 0x118 );
         if (plVar6 == (long*)0x0) {
            plVar6 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar6 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar6) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = (Image*)0x0;
         local_40 = (Image*)0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         pcVar3 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar6 = (long*)( local_48 + -0x10 );
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

         pIVar2 = local_50;
         if (local_50 != (Image*)0x0) {
            LOCK();
            pIVar1 = local_50 + -0x10;
            *(long*)pIVar1 = *(long*)pIVar1 + -1;
            UNLOCK();
            if (*(long*)pIVar1 == 0) {
               local_50 = (Image*)0x0;
               Memory::free_static(pIVar2 + -0x10, false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010db99;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar5 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar5 & 1 ) != 0) {
      pcVar5 = *(code**)( pcVar5 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   auVar7._4_12_ = SUB1612((undefined1[16])0x0, 4);
   auVar7._0_4_ = (float)*(double*)( param_2[4] + 8 );
   ( *pcVar5 )(auVar7._0_8_, &local_50, param_1 + *(long*)( this + 0x60 ), *(undefined8*)( *param_2 + 8 ), *(undefined8*)( param_2[1] + 8 ), param_2[2][8], param_2[3][8], param_2[5][8]);
   if (local_50 == (Image*)0x0) {
      Variant::ObjData::unref();
   }
 else {
      local_48 = *(char**)( local_50 + 0x60 );
      local_40 = local_50;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }

   if (local_50 != (Image*)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         memdelete<Image>(local_50);
      }

   }

   LAB_0010db99:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_retc_dv<__UnexistingClass, float, float, float>(__UnexistingClass*,
   float (__UnexistingClass::*)(float, float) const, Variant const**, int, Variant&,
   Callable::CallError&, Vector<Variant> const&) */void call_with_variant_args_retc_dv<__UnexistingClass,float,float,float>(__UnexistingClass *param_1, _func_float_float_float *param_2, Variant **param_3, int param_4, Variant *param_5, CallError *param_6, Vector *param_7) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   undefined4 in_register_0000000c;
   long *plVar7;
   long lVar8;
   Variant *this;
   uint uVar9;
   int iVar10;
   int iVar11;
   Variant *this_00;
   long in_FS_OFFSET;
   float fVar12;
   float fVar13;
   long in_stack_00000010;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar7 = (long*)CONCAT44(in_register_0000000c, param_4);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar9 = (uint)param_5;
   if (uVar9 < 3) {
      lVar1 = *(long*)( in_stack_00000010 + 8 );
      iVar10 = 2 - uVar9;
      if (lVar1 == 0) {
         if (iVar10 != 0) goto LAB_0010def8;
         this(Variant * ) * plVar7;
         LAB_0010df4d:this_00 = (Variant*)plVar7[1];
      }
 else {
         lVar2 = *(long*)( lVar1 + -8 );
         iVar11 = (int)lVar2;
         if (iVar11 < iVar10) {
            LAB_0010def8:uVar6 = 4;
            goto LAB_0010defd;
         }

         if (uVar9 == 0) {
            lVar8 = (long)( iVar11 + -2 );
            if (lVar2 <= lVar8) goto LAB_0010df68;
            this(Variant * )(lVar1 + lVar8 * 0x18);
         }
 else {
            this(Variant * ) * plVar7;
            if (uVar9 == 2) goto LAB_0010df4d;
         }

         lVar8 = (long)(int)( ( iVar11 - iVar10 ) + ( uVar9 ^ 1 ) );
         if (lVar2 <= lVar8) {
            LAB_0010df68:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this_00 = (Variant*)( lVar1 + lVar8 * 0x18 );
      }

      *(undefined4*)param_7 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_float_float_float**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)this_00, 3);
      uVar4 = _LC90;
      if (cVar5 == '\0') {
         *(undefined4*)param_7 = 2;
         *(undefined8*)( param_7 + 4 ) = uVar4;
      }

      fVar12 = Variant::operator_cast_to_float(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 3);
      uVar4 = _LC88;
      if (cVar5 == '\0') {
         *(undefined4*)param_7 = 2;
         *(undefined8*)( param_7 + 4 ) = uVar4;
      }

      fVar13 = Variant::operator_cast_to_float(this);
      fVar12 = ( *param_2 )(fVar13, fVar12);
      Variant::Variant((Variant*)local_58, fVar12);
      if (Variant::needs_deinit[*(int*)param_6] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_6 = local_58[0];
      *(undefined8*)( param_6 + 8 ) = local_50;
      *(undefined8*)( param_6 + 0x10 ) = uStack_48;
   }
 else {
      uVar6 = 3;
      LAB_0010defd:*(undefined4*)param_7 = uVar6;
      *(undefined4*)( param_7 + 8 ) = 2;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float, float, float>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRC<float,float,float>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long lVar1;
   char *pcVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var4;
   Variant *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var4 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( p_Var4 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var4 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var4 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var4 + 8 ) == 0) {
         plVar3 = *(long**)( p_Var4 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)p_Var4 + 0x40 ) )(p_Var4);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( p_Var4 + 8 ) + 0x20 );
      }

      in_R8 = (Variant*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC81, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_48 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar3 = (long*)( local_50 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010e026;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_retc_dv<__UnexistingClass,float,float,float>(p_Var4, (_func_float_float_float*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, (CallError*)param_1, in_R9);
   LAB_0010e026:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<int>(int param_1, int *param_2, PropertyInfo *param_3) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int iVar5;
   long in_FS_OFFSET;
   undefined8 local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = *param_2;
   if (iVar5 != param_1) goto LAB_0010e257;
   local_78 = 0;
   local_68 = &_LC5;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010e355:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010e355;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *(undefined4*)param_3 = local_68._0_4_;
   if (*(long*)( param_3 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( param_3 + 8 ) = uVar3;
   }

   if (*(long*)( param_3 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( param_3 + 0x10 ) = uVar3;
   }

   *(int*)( param_3 + 0x18 ) = local_50;
   if (*(long*)( param_3 + 0x20 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( param_3 + 0x20 ) = lVar4;
   }

   *(undefined4*)( param_3 + 0x28 ) = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   iVar5 = *param_2;
   LAB_0010e257:*param_2 = iVar5 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void call_get_argument_type_info_helper<bool>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<bool>(int param_1, int *param_2, PropertyInfo *param_3) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int iVar5;
   long in_FS_OFFSET;
   undefined8 local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = *param_2;
   if (iVar5 != param_1) goto LAB_0010e4a7;
   local_78 = 0;
   local_68 = &_LC5;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 1);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010e5a5:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010e5a5;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *(undefined4*)param_3 = local_68._0_4_;
   if (*(long*)( param_3 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( param_3 + 8 ) = uVar3;
   }

   if (*(long*)( param_3 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( param_3 + 0x10 ) = uVar3;
   }

   *(int*)( param_3 + 0x18 ) = local_50;
   if (*(long*)( param_3 + 0x20 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( param_3 + 0x20 ) = lVar4;
   }

   *(undefined4*)( param_3 + 0x28 ) = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   iVar5 = *param_2;
   LAB_0010e4a7:*param_2 = iVar5 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTRC<Ref<Image>, int, int, bool, bool, bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<Image>,int,int,bool,bool,bool>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_78;
   ulong local_70;
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 5) {
      local_60 = (undefined1[16])0x0;
      local_68 = (char*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      for (int i = 0; i < 5; i++) {
         call_get_argument_type_info_helper<int>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      }

      *puVar3 = local_68._0_4_;
      *(undefined8*)( puVar3 + 2 ) = local_60._0_8_;
      *(undefined8*)( puVar3 + 4 ) = local_60._8_8_;
      puVar3[6] = (undefined4)local_50;
      *(undefined8*)( puVar3 + 8 ) = local_48;
      puVar3[10] = local_40;
      goto LAB_0010e7a2;
   }

   local_70 = 0;
   local_68 = "Image";
   local_78 = 0;
   local_60._8_8_ = local_60._0_8_;
   local_60._0_8_ = 5;
   String::parse_latin1((StrRange*)&local_78);
   *puVar3 = 0x18;
   puVar3[6] = 0x11;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar3[10] = 6;
      LAB_0010e8b7:StringName::StringName((StringName*)&local_68, (String*)( puVar3 + 8 ), false);
      if (*(char**)( puVar3 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(char**)( puVar3 + 4 ) = local_68;
      }

   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_78);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) goto LAB_0010e8b7;
      StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_70);
   }

   lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_0010e7a2:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<TypedArray<Image>, int, int, int, bool, bool>::_gen_argument_type_info(int) const
    */undefined4 *MethodBindTRC<TypedArray<Image>,int,int,int,bool,bool>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_78;
   ulong local_70;
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 5) {
      local_60 = (undefined1[16])0x0;
      local_68 = (char*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      for (int i = 0; i < 5; i++) {
         call_get_argument_type_info_helper<int>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      }

      *puVar3 = local_68._0_4_;
      *(undefined8*)( puVar3 + 2 ) = local_60._0_8_;
      *(undefined8*)( puVar3 + 4 ) = local_60._8_8_;
      puVar3[6] = (undefined4)local_50;
      *(undefined8*)( puVar3 + 8 ) = local_48;
      puVar3[10] = local_40;
      goto LAB_0010e9f2;
   }

   local_70 = 0;
   local_68 = "Image";
   local_78 = 0;
   local_60._8_8_ = local_60._0_8_;
   local_60._0_8_ = 5;
   String::parse_latin1((StrRange*)&local_78);
   *puVar3 = 0x1c;
   puVar3[6] = 0x1f;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar3[10] = 6;
      LAB_0010eb07:StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_70);
      lVar2 = local_78;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_78);
      puVar3[10] = 6;
      if (puVar3[6] != 0x11) goto LAB_0010eb07;
      StringName::StringName((StringName*)&local_68, (String*)( puVar3 + 8 ), false);
      if (*(char**)( puVar3 + 4 ) == local_68) {
         lVar2 = local_78;
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
            lVar2 = local_78;
         }

      }
 else {
         StringName::unref();
         *(char**)( puVar3 + 4 ) = local_68;
         lVar2 = local_78;
      }

   }

   local_78 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_0010e9f2:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<float>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<float>(int param_1, int *param_2, PropertyInfo *param_3) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int iVar5;
   long in_FS_OFFSET;
   undefined8 local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = *param_2;
   if (iVar5 != param_1) goto LAB_0010eb87;
   local_78 = 0;
   local_68 = &_LC5;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 3);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010ec85:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010ec85;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *(undefined4*)param_3 = local_68._0_4_;
   if (*(long*)( param_3 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( param_3 + 8 ) = uVar3;
   }

   if (*(long*)( param_3 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( param_3 + 0x10 ) = uVar3;
   }

   *(int*)( param_3 + 0x18 ) = local_50;
   if (*(long*)( param_3 + 0x20 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( param_3 + 0x20 ) = lVar4;
   }

   *(undefined4*)( param_3 + 0x28 ) = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   iVar5 = *param_2;
   LAB_0010eb87:*param_2 = iVar5 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTRC<float, float>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<float,float>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   long lVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   long local_78;
   ulong local_70;
   undefined *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX == 0) {
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      local_60 = (undefined1[16])0x0;
      call_get_argument_type_info_helper<float>(0, (int*)&local_70, (PropertyInfo*)&local_68);
      *puVar4 = local_68._0_4_;
      *(undefined8*)( puVar4 + 2 ) = local_60._0_8_;
      *(undefined8*)( puVar4 + 4 ) = local_60._8_8_;
      puVar4[6] = (undefined4)local_50;
      *(undefined8*)( puVar4 + 8 ) = local_48;
      puVar4[10] = local_40;
      goto LAB_0010ee45;
   }

   local_70 = 0;
   local_68 = &_LC5;
   local_78 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   *puVar4 = 3;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar4[10] = 6;
      LAB_0010ef57:StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_70);
      lVar3 = local_78;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_78);
      puVar4[10] = 6;
      if (puVar4[6] != 0x11) goto LAB_0010ef57;
      StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
      if (*(undefined**)( puVar4 + 4 ) == local_68) {
         lVar3 = local_78;
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
            lVar3 = local_78;
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar4 + 4 ) = local_68;
         lVar3 = local_78;
      }

   }

   local_78 = lVar3;
   if (lVar3 != 0) {
      LOCK();
      plVar1 = (long*)( lVar3 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_0010ee45:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float, float, float>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<float,float,float>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   long lVar3;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   long local_78;
   ulong local_70;
   undefined *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 2) {
      local_60 = (undefined1[16])0x0;
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      call_get_argument_type_info_helper<float>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      call_get_argument_type_info_helper<float>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      *puVar4 = local_68._0_4_;
      *(undefined8*)( puVar4 + 2 ) = local_60._0_8_;
      *(undefined8*)( puVar4 + 4 ) = local_60._8_8_;
      puVar4[6] = (undefined4)local_50;
      *(undefined8*)( puVar4 + 8 ) = local_48;
      puVar4[10] = local_40;
      goto LAB_0010f111;
   }

   local_70 = 0;
   local_68 = &_LC5;
   local_78 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   *puVar4 = 3;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar4[10] = 6;
      LAB_0010f13f:StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_70);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_78);
      puVar4[10] = 6;
      if (puVar4[6] != 0x11) goto LAB_0010f13f;
      StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
      if (*(undefined**)( puVar4 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar4 + 4 ) = local_68;
      }

   }

   lVar3 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_0010f111:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float, float, float, float>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<float,float,float,float>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   long lVar3;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   long local_78;
   ulong local_70;
   undefined *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 3) {
      local_60 = (undefined1[16])0x0;
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      for (int i = 0; i < 3; i++) {
         call_get_argument_type_info_helper<float>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      }

      *puVar4 = local_68._0_4_;
      *(undefined8*)( puVar4 + 2 ) = local_60._0_8_;
      *(undefined8*)( puVar4 + 4 ) = local_60._8_8_;
      puVar4[6] = (undefined4)local_50;
      *(undefined8*)( puVar4 + 8 ) = local_48;
      puVar4[10] = local_40;
      goto LAB_0010f278;
   }

   local_70 = 0;
   local_68 = &_LC5;
   local_78 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   *puVar4 = 3;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar4[10] = 6;
      LAB_0010f387:StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_70);
      lVar3 = local_78;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_78);
      puVar4[10] = 6;
      if (puVar4[6] != 0x11) goto LAB_0010f387;
      StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
      if (*(undefined**)( puVar4 + 4 ) == local_68) {
         lVar3 = local_78;
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
            lVar3 = local_78;
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar4 + 4 ) = local_68;
         lVar3 = local_78;
      }

   }

   local_78 = lVar3;
   if (lVar3 != 0) {
      LOCK();
      plVar1 = (long*)( lVar3 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_0010f278:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Image>, int, int, bool, bool, float, bool>::_gen_argument_type_info(int) const
    */undefined4 *MethodBindTRC<Ref<Image>,int,int,bool,bool,float,bool>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_78;
   ulong local_70;
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 6) {
      local_60 = (undefined1[16])0x0;
      local_68 = (char*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      for (int i = 0; i < 6; i++) {
         call_get_argument_type_info_helper<int>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      }

      *puVar3 = local_68._0_4_;
      *(undefined8*)( puVar3 + 2 ) = local_60._0_8_;
      *(undefined8*)( puVar3 + 4 ) = local_60._8_8_;
      puVar3[6] = (undefined4)local_50;
      *(undefined8*)( puVar3 + 8 ) = local_48;
      puVar3[10] = local_40;
      goto LAB_0010f4bf;
   }

   local_70 = 0;
   local_68 = "Image";
   local_78 = 0;
   local_60._8_8_ = local_60._0_8_;
   local_60._0_8_ = 5;
   String::parse_latin1((StrRange*)&local_78);
   *puVar3 = 0x18;
   puVar3[6] = 0x11;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar3[10] = 6;
      LAB_0010f5d7:StringName::StringName((StringName*)&local_68, (String*)( puVar3 + 8 ), false);
      if (*(char**)( puVar3 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(char**)( puVar3 + 4 ) = local_68;
      }

   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_78);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) goto LAB_0010f5d7;
      StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_70);
   }

   lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_0010f4bf:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<TypedArray<Image>, int, int, int, bool, float, bool>::_gen_argument_type_info(int)
   const */undefined4 *MethodBindTRC<TypedArray<Image>,int,int,int,bool,float,bool>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_78;
   ulong local_70;
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 6) {
      local_60 = (undefined1[16])0x0;
      local_68 = (char*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      for (int i = 0; i < 6; i++) {
         call_get_argument_type_info_helper<int>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      }

      *puVar3 = local_68._0_4_;
      *(undefined8*)( puVar3 + 2 ) = local_60._0_8_;
      *(undefined8*)( puVar3 + 4 ) = local_60._8_8_;
      puVar3[6] = (undefined4)local_50;
      *(undefined8*)( puVar3 + 8 ) = local_48;
      puVar3[10] = local_40;
      goto LAB_0010f71f;
   }

   local_70 = 0;
   local_68 = "Image";
   local_78 = 0;
   local_60._8_8_ = local_60._0_8_;
   local_60._0_8_ = 5;
   String::parse_latin1((StrRange*)&local_78);
   *puVar3 = 0x1c;
   puVar3[6] = 0x1f;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar3[10] = 6;
      LAB_0010f837:StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_70);
      lVar2 = local_78;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_78);
      puVar3[10] = 6;
      if (puVar3[6] != 0x11) goto LAB_0010f837;
      StringName::StringName((StringName*)&local_68, (String*)( puVar3 + 8 ), false);
      if (*(char**)( puVar3 + 4 ) == local_68) {
         lVar2 = local_78;
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
            lVar2 = local_78;
         }

      }
 else {
         StringName::unref();
         *(char**)( puVar3 + 4 ) = local_68;
         lVar2 = local_78;
      }

   }

   local_78 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_0010f71f:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* Image::~Image() */void Image::~Image(Image *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<TypedArray<Image>, int, int, int, bool, float, bool>::~MethodBindTRC() */void MethodBindTRC<TypedArray<Image>,int,int,int,bool,float,bool>::~MethodBindTRC(MethodBindTRC<TypedArray<Image>,int,int,int,bool,float,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<TypedArray<Image>, int, int, int, bool, bool>::~MethodBindTRC() */void MethodBindTRC<TypedArray<Image>,int,int,int,bool,bool>::~MethodBindTRC(MethodBindTRC<TypedArray<Image>,int,int,int,bool,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Ref<Image>, int, int, bool, bool, float, bool>::~MethodBindTRC() */void MethodBindTRC<Ref<Image>,int,int,bool,bool,float,bool>::~MethodBindTRC(MethodBindTRC<Ref<Image>,int,int,bool,bool,float,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Ref<Image>, int, int, bool, bool, bool>::~MethodBindTRC() */void MethodBindTRC<Ref<Image>,int,int,bool,bool,bool>::~MethodBindTRC(MethodBindTRC<Ref<Image>,int,int,bool,bool,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<float, Vector3>::~MethodBindTRC() */void MethodBindTRC<float,Vector3>::~MethodBindTRC(MethodBindTRC<float,Vector3> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<float, float, float, float>::~MethodBindTRC() */void MethodBindTRC<float,float,float,float>::~MethodBindTRC(MethodBindTRC<float,float,float,float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<float, Vector2>::~MethodBindTRC() */void MethodBindTRC<float,Vector2>::~MethodBindTRC(MethodBindTRC<float,Vector2> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<float, float, float>::~MethodBindTRC() */void MethodBindTRC<float,float,float>::~MethodBindTRC(MethodBindTRC<float,float,float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<float, float>::~MethodBindTRC() */void MethodBindTRC<float,float>::~MethodBindTRC(MethodBindTRC<float,float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

