/* embree::Device::free(void*) */void embree::Device::free(Device *this, void *param_1) {
   embree::alignedFree(param_1);
   return;
}
/* embree::Device::malloc(unsigned long, unsigned long) */void embree::Device::malloc(Device *this, ulong param_1, ulong param_2) {
   embree::alignedMalloc(param_1, param_2);
   return;
}
/* embree::Device::memoryMonitor(long, bool) */void embree::Device::memoryMonitor(Device *this, long param_1, bool param_2) {
   char cVar1;
   if (( param_1 == 0 ) || ( *(code**)( this + 0x538 ) == (code*)0x0 )) {
      return;
   }

   cVar1 = ( **(code**)( this + 0x538 ) )(*(undefined8*)( this + 0x540 ), param_1, param_2);
   if (param_1 < 1) {
      return;
   }

   if (cVar1 == '\x01') {
      return;
   }

   /* WARNING: Subroutine does not return */
   abort();
}
/* std::ios::widen(char) const [clone .isra.0] */code * __thiscall std::ios::widen(ios *this,char param_1){
   code *pcVar1;
   undefined7 in_register_00000031;
   ulong uVar2;
   uVar2 = CONCAT71(in_register_00000031, param_1);
   if (this != (ios*)0x0) {
      pcVar1 = (code*)( uVar2 & 0xffffffff );
      if (this[0x38] == (ios)0x0) {
         std::ctype<char>::_M_widen_init();
         if (*(code**)( *(long*)this + 0x30 ) != ctype<char>::do_widen) {
            /* WARNING: Could not recover jumptable at 0x001000c7. Too many branches */
            /* WARNING: Treating indirect jump as call */
            pcVar1 = (code*)( **(code**)( *(long*)this + 0x30 ) )(this, (int)(char)pcVar1);
            return pcVar1;
         }

      }
 else {
         pcVar1 = (code*)(ulong)(byte)this[(ulong)(byte)param_1 + 0x39];
      }

      return pcVar1;
   }

   std::__throw_bad_cast();
   pcVar1 = *(code**)( this + -0x10 );
   if (( uVar2 != 0 ) && ( pcVar1 != (code*)0x0 )) {
      pcVar1 = (code*)( *pcVar1 )(*(undefined8*)( this + -8 ));
      if ((long)uVar2 < 1) {
         return pcVar1;
      }

      if ((char)pcVar1 == '\x01') {
         return pcVar1;
      }

      /* WARNING: Subroutine does not return */
      abort();
   }

   return pcVar1;
}
/* non-virtual thunk to embree::Device::memoryMonitor(long, bool) */void embree::Device::memoryMonitor(Device *this, long param_1, bool param_2) {
   char cVar1;
   if (( param_1 == 0 ) || ( *(code**)( this + -0x10 ) == (code*)0x0 )) {
      return;
   }

   cVar1 = ( **(code**)( this + -0x10 ) )(*(undefined8*)( this + -8 ), param_1, param_2);
   if (param_1 < 1) {
      return;
   }

   if (cVar1 == '\x01') {
      return;
   }

   /* WARNING: Subroutine does not return */
   abort();
}
/* std::_Rb_tree<embree::Device*, std::pair<embree::Device* const, unsigned long>,
   std::_Select1st<std::pair<embree::Device* const, unsigned long> >, std::less<embree::Device*>,
   std::allocator<std::pair<embree::Device* const, unsigned long> >
   >::_M_erase(std::_Rb_tree_node<std::pair<embree::Device* const, unsigned long> >*) [clone
   .isra.0] */void std::_Rb_tree<embree::Device*,std::pair<embree::Device*const,unsigned_long>,std::_Select1st<std::pair<embree::Device*const,unsigned_long>>,std::less<embree::Device*>,std::allocator<std::pair<embree::Device*const,unsigned_long>>>::_M_erase(_Rb_tree_node *param_1) {
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
   if (param_1 != (_Rb_tree_node*)0x0) {
      do {
         pvVar10 = *(void**)( local_48 + 0x18 );
         while (pvVar10 != (void*)0x0) {
            pvVar8 = *(void**)( (long)pvVar10 + 0x18 );
            while (pvVar8 != (void*)0x0) {
               pvVar7 = *(void**)( (long)pvVar8 + 0x18 );
               while (pvVar7 != (void*)0x0) {
                  pvVar5 = *(void**)( (long)pvVar7 + 0x18 );
                  while (pvVar5 != (void*)0x0) {
                     pvVar3 = *(void**)( (long)pvVar5 + 0x18 );
                     while (pvVar3 != (void*)0x0) {
                        pvVar4 = *(void**)( (long)pvVar3 + 0x18 );
                        while (pvVar4 != (void*)0x0) {
                           pvVar6 = *(void**)( (long)pvVar4 + 0x18 );
                           while (pvVar6 != (void*)0x0) {
                              pvVar2 = *(void**)( (long)pvVar6 + 0x18 );
                              while (pvVar2 != (void*)0x0) {
                                 _M_erase(*(_Rb_tree_node**)( (long)pvVar2 + 0x18 ));
                                 pvVar1 = *(void**)( (long)pvVar2 + 0x10 );
                                 operator_delete(pvVar2, 0x30);
                                 pvVar2 = pvVar1;
                              }
;
                              pvVar2 = *(void**)( (long)pvVar6 + 0x10 );
                              operator_delete(pvVar6, 0x30);
                              pvVar6 = pvVar2;
                           }
;
                           pvVar6 = *(void**)( (long)pvVar4 + 0x10 );
                           operator_delete(pvVar4, 0x30);
                           pvVar4 = pvVar6;
                        }
;
                        pvVar4 = *(void**)( (long)pvVar3 + 0x10 );
                        operator_delete(pvVar3, 0x30);
                        pvVar3 = pvVar4;
                     }
;
                     pvVar3 = *(void**)( (long)pvVar5 + 0x10 );
                     operator_delete(pvVar5, 0x30);
                     pvVar5 = pvVar3;
                  }
;
                  pvVar5 = *(void**)( (long)pvVar7 + 0x10 );
                  operator_delete(pvVar7, 0x30);
                  pvVar7 = pvVar5;
               }
;
               pvVar7 = *(void**)( (long)pvVar8 + 0x10 );
               operator_delete(pvVar8, 0x30);
               pvVar8 = pvVar7;
            }
;
            pvVar8 = *(void**)( (long)pvVar10 + 0x10 );
            operator_delete(pvVar10, 0x30);
            pvVar10 = pvVar8;
         }
;
         p_Var9 = *(_Rb_tree_node**)( local_48 + 0x10 );
         operator_delete(local_48, 0x30);
         local_48 = p_Var9;
      }
 while ( p_Var9 != (_Rb_tree_node*)0x0 );
   }

   return;
}
/* std::_Rb_tree_iterator<std::pair<embree::Device* const, unsigned long> >
   std::_Rb_tree<embree::Device*, std::pair<embree::Device* const, unsigned long>,
   std::_Select1st<std::pair<embree::Device* const, unsigned long> >, std::less<embree::Device*>,
   std::allocator<std::pair<embree::Device* const, unsigned long> >
   >::_M_emplace_hint_unique<std::piecewise_construct_t const&, std::tuple<embree::Device*&&>,
   std::tuple<> >(std::_Rb_tree_const_iterator<std::pair<embree::Device* const, unsigned long> >,
   std::piecewise_construct_t const&, std::tuple<embree::Device*&&>&&, std::tuple<>&&) [clone
   .isra.0] */_Rb_tree_node_base *std::_Rb_tree<embree::Device*,std::pair<embree::Device*const,unsigned_long>,std::_Select1st<std::pair<embree::Device*const,unsigned_long>>,std::less<embree::Device*>,std::allocator<std::pair<embree::Device*const,unsigned_long>>>::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<embree::Device*&&>,std::tuple<>>(long param_1, _Rb_tree_node_base *param_2, undefined8 *param_3) {
   _Rb_tree_node_base *p_Var1;
   ulong *puVar2;
   ulong uVar3;
   _Rb_tree_node_base *p_Var4;
   _Rb_tree_node_base *p_Var5;
   _Rb_tree_node_base *p_Var6;
   _Rb_tree_node_base *p_Var7;
   ulong uVar8;
   _Rb_tree_node_base *p_Var9;
   bool bVar10;
   p_Var5 = (_Rb_tree_node_base*)operator_new(0x30);
   p_Var1 = (_Rb_tree_node_base*)( param_1 + 8 );
   puVar2 = (ulong*)*param_3;
   *(undefined8*)( p_Var5 + 0x28 ) = 0;
   uVar3 = *puVar2;
   *(ulong*)( p_Var5 + 0x20 ) = uVar3;
   p_Var9 = param_2;
   if (p_Var1 == param_2) {
      if (( *(long*)( param_1 + 0x28 ) == 0 ) || ( uVar3 <= *(ulong*)( *(_Rb_tree_node_base**)( param_1 + 0x20 ) + 0x20 ) )) {
         p_Var7 = *(_Rb_tree_node_base**)( param_1 + 0x10 );
         if (*(_Rb_tree_node_base**)( param_1 + 0x10 ) == (_Rb_tree_node_base*)0x0) {
            if (*(_Rb_tree_node_base**)( param_1 + 0x18 ) != param_2) goto LAB_001004da;
            p_Var7 = (_Rb_tree_node_base*)0x0;
            goto LAB_0010037e;
         }

         do {
            param_2 = p_Var7;
            uVar8 = *(ulong*)( param_2 + 0x20 );
            bVar10 = uVar3 < uVar8;
            p_Var7 = *(_Rb_tree_node_base**)( param_2 + 0x18 );
            if (bVar10) {
               p_Var7 = *(_Rb_tree_node_base**)( param_2 + 0x10 );
            }

         }
 while ( p_Var7 != (_Rb_tree_node_base*)0x0 );
         LAB_0010041b:if (bVar10) {
            p_Var9 = param_2;
            if (param_2 != *(_Rb_tree_node_base**)( param_1 + 0x18 )) goto LAB_001004da;
         }
 else {
            LAB_00100423:p_Var9 = param_2;
            if (uVar3 <= uVar8) goto LAB_0010042f;
         }

      }
 else {
         p_Var7 = (_Rb_tree_node_base*)0x0;
         p_Var9 = *(_Rb_tree_node_base**)( param_1 + 0x20 );
         LAB_0010037e:param_2 = p_Var7;
         if (p_Var9 == (_Rb_tree_node_base*)0x0) {
            LAB_0010042f:if (p_Var5 == (_Rb_tree_node_base*)0x0) {
               return param_2;
            }

            operator_delete(p_Var5, 0x30);
            return param_2;
         }

      }

      LAB_00100387:param_2 = p_Var9;
      if (( p_Var1 == p_Var9 ) || ( p_Var7 != (_Rb_tree_node_base*)0x0 )) {
         bVar10 = true;
         goto LAB_0010039a;
      }

      LAB_0010051c:uVar8 = *(ulong*)( param_2 + 0x20 );
   }
 else {
      uVar8 = *(ulong*)( param_2 + 0x20 );
      p_Var9 = p_Var1;
      if (uVar3 < uVar8) {
         p_Var4 = *(_Rb_tree_node_base**)( param_1 + 0x18 );
         p_Var7 = param_2;
         p_Var9 = param_2;
         if (p_Var4 != param_2) {
            p_Var6 = (_Rb_tree_node_base*)std::_Rb_tree_decrement(param_2);
            if (*(ulong*)( p_Var6 + 0x20 ) < uVar3) {
               if (*(long*)( p_Var6 + 0x18 ) == 0) {
                  p_Var7 = (_Rb_tree_node_base*)0x0;
                  p_Var9 = p_Var6;
               }

            }
 else {
               p_Var9 = *(_Rb_tree_node_base**)( param_1 + 0x10 );
               if (*(_Rb_tree_node_base**)( param_1 + 0x10 ) == (_Rb_tree_node_base*)0x0) {
                  p_Var9 = p_Var1;
                  if (p_Var1 == p_Var4) {
                     p_Var7 = (_Rb_tree_node_base*)0x0;
                     goto LAB_0010037e;
                  }

               }
 else {
                  do {
                     param_2 = p_Var9;
                     uVar8 = *(ulong*)( param_2 + 0x20 );
                     p_Var9 = *(_Rb_tree_node_base**)( param_2 + 0x18 );
                     if (uVar8 > uVar3) {
                        p_Var9 = *(_Rb_tree_node_base**)( param_2 + 0x10 );
                     }

                  }
 while ( p_Var9 != (_Rb_tree_node_base*)0x0 );
                  p_Var7 = (_Rb_tree_node_base*)0x0;
                  if (uVar8 <= uVar3) goto LAB_00100423;
                  p_Var9 = param_2;
                  if (p_Var4 == param_2) goto LAB_00100387;
               }

               LAB_001004da:param_2 = (_Rb_tree_node_base*)std::_Rb_tree_decrement(p_Var9);
               if (uVar3 <= *(ulong*)( param_2 + 0x20 )) goto LAB_0010042f;
               p_Var7 = (_Rb_tree_node_base*)0x0;
            }

         }

         goto LAB_0010037e;
      }

      if (uVar3 <= uVar8) goto LAB_0010042f;
      if (*(_Rb_tree_node_base**)( param_1 + 0x20 ) == param_2) {
         if (param_2 == (_Rb_tree_node_base*)0x0) goto LAB_0010042f;
         goto LAB_0010051c;
      }

      p_Var7 = (_Rb_tree_node_base*)std::_Rb_tree_increment(param_2);
      if (*(ulong*)( p_Var7 + 0x20 ) <= uVar3) {
         p_Var7 = *(_Rb_tree_node_base**)( param_1 + 0x10 );
         if (*(_Rb_tree_node_base**)( param_1 + 0x10 ) != (_Rb_tree_node_base*)0x0) {
            do {
               param_2 = p_Var7;
               uVar8 = *(ulong*)( param_2 + 0x20 );
               bVar10 = uVar3 < uVar8;
               p_Var7 = *(_Rb_tree_node_base**)( param_2 + 0x18 );
               if (bVar10) {
                  p_Var7 = *(_Rb_tree_node_base**)( param_2 + 0x10 );
               }

            }
 while ( p_Var7 != (_Rb_tree_node_base*)0x0 );
            p_Var7 = (_Rb_tree_node_base*)0x0;
            goto LAB_0010041b;
         }

         if (p_Var1 != *(_Rb_tree_node_base**)( param_1 + 0x18 )) goto LAB_001004da;
         p_Var7 = (_Rb_tree_node_base*)0x0;
         goto LAB_0010037e;
      }

      p_Var9 = p_Var7;
      if (*(long*)( param_2 + 0x18 ) != 0) goto LAB_0010037e;
      if (param_2 == (_Rb_tree_node_base*)0x0) goto LAB_0010042f;
   }

   bVar10 = uVar3 < uVar8;
   LAB_0010039a:std::_Rb_tree_insert_and_rebalance(bVar10, p_Var5, param_2, p_Var1);
   *(long*)( param_1 + 0x28 ) = *(long*)( param_1 + 0x28 ) + 1;
   return p_Var5;
}
/* embree::getEnabledTargets[abi:cxx11]() */embree * __thiscall embree::getEnabledTargets_abi_cxx11_(embree *this){
   *(embree**)this = this + 0x10;
   *(undefined8*)( this + 8 ) = 0;
   this[0x10] = (embree)0x0;
   std::__cxx11::string::_M_append((char*)this, 0x10251f);
   return this;
}
/* embree::getEmbreeFeatures[abi:cxx11]() */embree * __thiscall embree::getEmbreeFeatures_abi_cxx11_(embree *this){
   *(embree**)this = this + 0x10;
   *(undefined8*)( this + 8 ) = 0;
   this[0x10] = (embree)0x0;
   std::__cxx11::string::_M_append((char*)this, 0x102525);
   return this;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* embree::Device::print() */void embree::Device::print(Device *this) {
   long *plVar1;
   bool bVar2;
   undefined1 auVar3[16];
   char cVar4;
   undefined4 uVar5;
   ostream *poVar6;
   long lVar7;
   ulong uVar8;
   char *pcVar9;
   int iVar10;
   uint uVar11;
   uint uVar12;
   ulong uVar13;
   uint uVar14;
   uint uVar15;
   long in_FS_OFFSET;
   long *local_158;
   long local_150;
   long local_148[2];
   char *local_138;
   long local_130;
   char local_128;
   undefined2 uStack_127;
   undefined4 uStack_125;
   undefined1 uStack_121;
   undefined8 local_118;
   undefined8 uStack_110;
   undefined8 local_108;
   undefined8 uStack_100;
   undefined8 local_f8;
   undefined8 uStack_f0;
   undefined8 local_e8;
   undefined8 uStack_e0;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined1 uStack_60;
   undefined7 uStack_5f;
   char cStack_58;
   char acStack_57[23];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   embree::getCPUFeatures();
   plVar1 = *(long**)( embree::State::checkISASupport + *(long*)( std::cout + -0x18 ) );
   if (plVar1 != (long*)0x0) {
      if ((char)plVar1[7] == '\0') {
         std::ctype<char>::_M_widen_init();
         if (*(code**)( *plVar1 + 0x30 ) != std::ctype<char>::do_widen) {
            ( **(code**)( *plVar1 + 0x30 ) )(plVar1, 10);
         }

      }

      std::ostream::put('`');
      std::ostream::flush();
      std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, "Embree Ray Tracing Kernels ", 0x1b);
      std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, "4.3.1", 5);
      std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, " (", 2);
      std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, "daa8de0e714e18ad5e5c9841b67c1950d9c91c51", 0x28);
      std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, ")", 1);
      plVar1 = *(long**)( embree::State::checkISASupport + *(long*)( std::cout + -0x18 ) );
      if (plVar1 != (long*)0x0) {
         if ((char)plVar1[7] == '\0') {
            std::ctype<char>::_M_widen_init();
            if (*(code**)( *plVar1 + 0x30 ) != std::ctype<char>::do_widen) {
               ( **(code**)( *plVar1 + 0x30 ) )(plVar1, 10);
            }

         }

         std::ostream::put('`');
         std::ostream::flush();
         std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, "  Compiler  : ", 0xe);
         embree::getCompilerName_abi_cxx11_();
         poVar6 = std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, (char*)local_158, local_150);
         plVar1 = *(long**)( poVar6 + *(long*)( *(long*)poVar6 + -0x18 ) + 0xf0 );
         if (plVar1 != (long*)0x0) {
            if ((char)plVar1[7] == '\0') {
               std::ctype<char>::_M_widen_init();
               if (*(code**)( *plVar1 + 0x30 ) != std::ctype<char>::do_widen) {
                  ( **(code**)( *plVar1 + 0x30 ) )(plVar1, 10);
               }

            }

            std::ostream::put((char)poVar6);
            std::ostream::flush();
            if (local_158 != local_148) {
               operator_delete(local_158, local_148[0] + 1);
            }

            std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, "  Build     : ", 0xe);
            std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, "Release ", 8);
            plVar1 = *(long**)( embree::State::checkISASupport + *(long*)( std::cout + -0x18 ) );
            if (plVar1 != (long*)0x0) {
               if ((char)plVar1[7] == '\0') {
                  std::ctype<char>::_M_widen_init();
                  if (*(code**)( *plVar1 + 0x30 ) != std::ctype<char>::do_widen) {
                     ( **(code**)( *plVar1 + 0x30 ) )(plVar1, 10);
                  }

               }

               std::ostream::put('`');
               std::ostream::flush();
               std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, "  Platform  : ", 0xe);
               embree::getPlatformName_abi_cxx11_();
               poVar6 = std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, local_138, local_130);
               std::ios::widen(*(ios**)( poVar6 + *(long*)( *(long*)poVar6 + -0x18 ) + 0xf0 ), '\n');
               std::ostream::put((char)poVar6);
               std::ostream::flush();
               if (local_138 != &local_128) {
                  operator_delete(local_138, CONCAT17(uStack_121, CONCAT43(uStack_125, CONCAT21(uStack_127, local_128))) + 1);
               }

               std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, "  CPU       : ", 0xe);
               uVar5 = embree::getCPUModel();
               embree::stringOfCPUModel_abi_cxx11_(&local_158, uVar5);
               poVar6 = std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, (char*)local_158, local_150);
               std::__ostream_insert<char,std::char_traits<char>>(poVar6, " (", 2);
               embree::getCPUVendor_abi_cxx11_();
               poVar6 = std::__ostream_insert<char,std::char_traits<char>>(poVar6, local_138, local_130);
               std::__ostream_insert<char,std::char_traits<char>>(poVar6, ")", 1);
               std::ios::widen(*(ios**)( poVar6 + *(long*)( *(long*)poVar6 + -0x18 ) + 0xf0 ), '\n');
               std::ostream::put((char)poVar6);
               std::ostream::flush();
               if (local_138 != &local_128) {
                  operator_delete(local_138, CONCAT17(uStack_121, CONCAT43(uStack_125, CONCAT21(uStack_127, local_128))) + 1);
               }

               if (local_158 != local_148) {
                  operator_delete(local_158, local_148[0] + 1);
               }

               std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, "   Threads  : ", 0xe);
               embree::getNumberOfLogicalThreads();
               poVar6 = std::ostream::_M_insert<unsigned_long>(0x104060);
               std::endl<char,std::char_traits<char>>(poVar6);
               std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, "   ISA      : ", 0xe);
               iVar10 = (int)&local_138;
               embree::stringOfCPUFeatures_abi_cxx11_(iVar10);
               poVar6 = std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, local_138, local_130);
               std::endl<char,std::char_traits<char>>(poVar6);
               if (local_138 != &local_128) {
                  operator_delete(local_138, CONCAT17(uStack_121, CONCAT43(uStack_125, CONCAT21(uStack_127, local_128))) + 1);
               }

               std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, "   Targets  : ", 0xe);
               embree::supportedTargetList_abi_cxx11_(iVar10);
               poVar6 = std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, local_138, local_130);
               std::endl<char,std::char_traits<char>>(poVar6);
               if (local_138 != &local_128) {
                  operator_delete(local_138, CONCAT17(uStack_121, CONCAT43(uStack_125, CONCAT21(uStack_127, local_128))) + 1);
               }

               uVar14 = MXCSR & 0x40;
               uVar15 = MXCSR & 0x8000;
               std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, "   MXCSR    : ", 0xe);
               std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, "FTZ=", 4);
               poVar6 = std::ostream::_M_insert<bool>(true);
               std::__ostream_insert<char,std::char_traits<char>>(poVar6, ", DAZ=", 6);
               poVar6 = std::ostream::_M_insert<bool>(SUB81(poVar6, 0));
               std::endl<char,std::char_traits<char>>(poVar6);
               std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, "  Config", 8);
               plVar1 = *(long**)( embree::State::checkISASupport + *(long*)( std::cout + -0x18 ) );
               if (plVar1 != (long*)0x0) {
                  if ((char)plVar1[7] == '\0') {
                     std::ctype<char>::_M_widen_init();
                     if (*(code**)( *plVar1 + 0x30 ) != std::ctype<char>::do_widen) {
                        ( **(code**)( *plVar1 + 0x30 ) )(plVar1, 10);
                     }

                  }

                  std::ostream::put('`');
                  std::ostream::flush();
                  std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, "    Threads : ", 0xe);
                  uVar8 = *(ulong*)( this + 0x4b8 );
                  local_138 = &local_128;
                  if (uVar8 == 0) {
                     local_128 = 'd';
                     uStack_127 = 0x6665;
                     uStack_125 = 0x746c7561;
                     local_130 = 7;
                     uStack_121 = 0;
                  }
 else {
                     lVar7 = -((long)uVar8 >> 0x3f);
                     uVar13 = uVar8;
                     if ((long)uVar8 < 1) {
                        uVar13 = -uVar8;
                     }

                     cVar4 = (char)( (long)uVar8 >> 0x3f );
                     if (uVar13 < 10) {
                        std::__cxx11::string::_M_construct(( ulong ) & local_138, '\x01' - cVar4);
                        pcVar9 = local_138 + lVar7;
                        LAB_00101066:cVar4 = (char)uVar13 + '0';
                     }
 else {
                        if (uVar13 < 100) {
                           std::__cxx11::string::_M_construct(( ulong ) & local_138, '\x02' - cVar4);
                           pcVar9 = local_138 + lVar7;
                           local_118 = __LC39;
                           uStack_110 = _UNK_00102ca8;
                           local_108 = __LC40;
                           uStack_100 = _UNK_00102cb8;
                           local_f8 = __LC41;
                           uStack_f0 = _UNK_00102cc8;
                           local_e8 = __LC42;
                           uStack_e0 = _UNK_00102cd8;
                           local_d8 = __LC43;
                           uStack_d0 = _UNK_00102ce8;
                           local_c8 = __LC44;
                           uStack_c0 = _UNK_00102cf8;
                           local_b8 = __LC45;
                           uStack_b0 = _UNK_00102d08;
                           local_a8 = __LC46;
                           uStack_a0 = _UNK_00102d18;
                           local_98 = __LC47;
                           uStack_90 = _UNK_00102d28;
                           local_88 = __LC48;
                           uStack_80 = _UNK_00102d38;
                           local_78 = __LC49;
                           uStack_70 = _UNK_00102d48;
                           local_68 = __LC50;
                           uStack_60 = (undefined1)_UNK_00102d58;
                           uStack_5f = (undefined7)_LC51._0_8_;
                           cStack_58 = SUB81(_LC51._0_8_, 7);
                           for (int i = 0; i < 8; i++) {
                              acStack_57[i] = _LC51[( i + 8 )];
                           }

                        }
 else {
                           if (uVar13 < 1000) {
                              uVar11 = 2;
                              uVar12 = 3;
                           }
 else if (uVar13 < 10000) {
                              uVar11 = 3;
                              uVar12 = 4;
                           }
 else {
                              uVar8 = uVar13;
                              uVar12 = 1;
                              do {
                                 uVar11 = uVar12;
                                 uVar12 = uVar11 + 4;
                                 if (uVar8 < 100000) {
                                    uVar11 = uVar11 + 3;
                                    goto LAB_00100ef8;
                                 }

                                 if (uVar8 < 1000000) {
                                    std::__cxx11::string::_M_construct(( ulong ) & local_138, ( '\x05' - cVar4 ) + (char)uVar11);
                                    goto LAB_00100f2a;
                                 }

                                 if (uVar8 < 10000000) {
                                    uVar12 = uVar11 + 6;
                                    uVar11 = uVar11 + 5;
                                    goto LAB_00100ef8;
                                 }

                                 bVar2 = 99999999 < uVar8;
                                 uVar8 = uVar8 / 10000;
                              }
 while ( bVar2 );
                              uVar12 = uVar11 + 7;
                              uVar11 = uVar11 + 6;
                           }

                           LAB_00100ef8:std::__cxx11::string::_M_construct(( ulong ) & local_138, (char)uVar12 - cVar4);
                           uVar12 = uVar11;
                           LAB_00100f2a:pcVar9 = local_138 + lVar7;
                           local_118 = __LC39;
                           uStack_110 = _UNK_00102ca8;
                           local_108 = __LC40;
                           uStack_100 = _UNK_00102cb8;
                           local_f8 = __LC41;
                           uStack_f0 = _UNK_00102cc8;
                           local_e8 = __LC42;
                           uStack_e0 = _UNK_00102cd8;
                           local_d8 = __LC43;
                           uStack_d0 = _UNK_00102ce8;
                           local_c8 = __LC44;
                           uStack_c0 = _UNK_00102cf8;
                           local_b8 = __LC45;
                           uStack_b0 = _UNK_00102d08;
                           local_a8 = __LC46;
                           uStack_a0 = _UNK_00102d18;
                           local_98 = __LC47;
                           uStack_90 = _UNK_00102d28;
                           local_88 = __LC48;
                           uStack_80 = _UNK_00102d38;
                           local_78 = __LC49;
                           uStack_70 = _UNK_00102d48;
                           local_68 = __LC50;
                           uStack_60 = (undefined1)_UNK_00102d58;
                           uStack_5f = (undefined7)_LC51._0_8_;
                           cStack_58 = SUB81(_LC51._0_8_, 7);
                           for (int i = 0; i < 8; i++) {
                              acStack_57[i] = _LC51[( i + 8 )];
                           }

                           do {
                              uVar8 = uVar13;
                              auVar3._8_8_ = 0;
                              auVar3._0_8_ = uVar8 >> 2;
                              uVar13 = ( uVar8 >> 2 ) / 0x19;
                              lVar7 = ( uVar8 + ( ( SUB168(auVar3 * ZEXT816(0x28f5c28f5c28f5c3), 8) & 0xfffffffffffffffc ) + uVar13 ) * -0x14 ) * 2;
                              cVar4 = *(char*)( (long)&local_118 + lVar7 );
                              pcVar9[uVar12] = *(char*)( (long)&local_118 + lVar7 + 1 );
                              uVar11 = uVar12 - 1;
                              uVar12 = uVar12 - 2;
                              pcVar9[uVar11] = cVar4;
                           }
 while ( 9999 < uVar8 );
                           if (uVar8 < 1000) goto LAB_00101066;
                        }

                        cVar4 = *(char*)( (long)&local_118 + uVar13 * 2 );
                        pcVar9[1] = *(char*)( (long)&local_118 + uVar13 * 2 + 1 );
                     }

                     *pcVar9 = cVar4;
                  }

                  poVar6 = std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, local_138, local_130);
                  std::endl<char,std::char_traits<char>>(poVar6);
                  if (local_138 != &local_128) {
                     operator_delete(local_138, CONCAT17(uStack_121, CONCAT43(uStack_125, CONCAT21(uStack_127, local_128))) + 1);
                  }

                  std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, "    ISA     : ", 0xe);
                  embree::stringOfCPUFeatures_abi_cxx11_(iVar10);
                  poVar6 = std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, local_138, local_130);
                  std::endl<char,std::char_traits<char>>(poVar6);
                  if (local_138 != &local_128) {
                     operator_delete(local_138, CONCAT17(uStack_121, CONCAT43(uStack_125, CONCAT21(uStack_127, local_128))) + 1);
                  }

                  std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, "    Targets : ", 0xe);
                  embree::supportedTargetList_abi_cxx11_(iVar10);
                  poVar6 = std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, local_138, local_130);
                  std::__ostream_insert<char,std::char_traits<char>>(poVar6, " (supported)", 0xc);
                  plVar1 = *(long**)( poVar6 + *(long*)( *(long*)poVar6 + -0x18 ) + 0xf0 );
                  if (plVar1 != (long*)0x0) {
                     if ((char)plVar1[7] == '\0') {
                        std::ctype<char>::_M_widen_init();
                        if (*(code**)( *plVar1 + 0x30 ) != std::ctype<char>::do_widen) {
                           ( **(code**)( *plVar1 + 0x30 ) )(plVar1, 10);
                        }

                     }

                     std::ostream::put((char)poVar6);
                     std::ostream::flush();
                     if (local_138 != &local_128) {
                        operator_delete(local_138, CONCAT17(uStack_121, CONCAT43(uStack_125, CONCAT21(uStack_127, local_128))) + 1);
                     }

                     std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, "              ", 0xe);
                     local_130 = 0;
                     local_128 = '\0';
                     local_138 = &local_128;
                     std::__cxx11::string::_M_append((char*)&local_138, 0x10251f);
                     poVar6 = std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, local_138, local_130);
                     std::__ostream_insert<char,std::char_traits<char>>(poVar6, " (compile time enabled)", 0x17);
                     std::endl<char,std::char_traits<char>>(poVar6);
                     if (local_138 != &local_128) {
                        operator_delete(local_138, CONCAT17(uStack_121, CONCAT43(uStack_125, CONCAT21(uStack_127, local_128))) + 1);
                     }

                     std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, "    Features: ", 0xe);
                     local_130 = 0;
                     local_128 = '\0';
                     local_138 = &local_128;
                     std::__cxx11::string::_M_append((char*)&local_138, 0x102525);
                     poVar6 = std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, local_138, local_130);
                     std::endl<char,std::char_traits<char>>(poVar6);
                     if (local_138 != &local_128) {
                        operator_delete(local_138, CONCAT17(uStack_121, CONCAT43(uStack_125, CONCAT21(uStack_127, local_128))) + 1);
                     }

                     std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, "    Tasking : ", 0xe);
                     std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, "internal_tasking_system ", 0x18);
                     plVar1 = *(long**)( embree::State::checkISASupport + *(long*)( std::cout + -0x18 ) );
                     if (plVar1 != (long*)0x0) {
                        if ((char)plVar1[7] == '\0') {
                           std::ctype<char>::_M_widen_init();
                           if (*(code**)( *plVar1 + 0x30 ) != std::ctype<char>::do_widen) {
                              ( **(code**)( *plVar1 + 0x30 ) )(plVar1, 10);
                           }

                        }

                        std::ostream::put('`');
                        std::ostream::flush();
                        if (( ( uVar15 == 0 ) || ( uVar14 == 0 ) ) && ( cVar4 = embree::State::verbosity((ulong)this) ),cVar4 != '\0') {
                           std::endl<char,std::char_traits<char>>((ostream*)&std::cout);
                           std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, "================================================================================", 0x50);
                           std::endl<char,std::char_traits<char>>((ostream*)&std::cout);
                           std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, "  WARNING: \"Flush to Zero\" or \"Denormals are Zero\" mode not enabled ", 0x44);
                           poVar6 = std::endl<char,std::char_traits<char>>((ostream*)&std::cout);
                           std::__ostream_insert<char,std::char_traits<char>>(poVar6, "           in the MXCSR control and status register. This can have a severe ", 0x4c);
                           poVar6 = std::endl<char,std::char_traits<char>>(poVar6);
                           std::__ostream_insert<char,std::char_traits<char>>(poVar6, "           performance impact. Please enable these modes for each application ", 0x4e);
                           poVar6 = std::endl<char,std::char_traits<char>>(poVar6);
                           std::__ostream_insert<char,std::char_traits<char>>(poVar6, "           thread the following way:", 0x24);
                           poVar6 = std::endl<char,std::char_traits<char>>(poVar6);
                           poVar6 = std::endl<char,std::char_traits<char>>(poVar6);
                           std::__ostream_insert<char,std::char_traits<char>>(poVar6, "           #include \"xmmintrin.h\"", 0x21);
                           poVar6 = std::endl<char,std::char_traits<char>>(poVar6);
                           std::__ostream_insert<char,std::char_traits<char>>(poVar6, "           #include \"pmmintrin.h\"", 0x21);
                           poVar6 = std::endl<char,std::char_traits<char>>(poVar6);
                           poVar6 = std::endl<char,std::char_traits<char>>(poVar6);
                           std::__ostream_insert<char,std::char_traits<char>>(poVar6, "           _MM_SET_FLUSH_ZERO_MODE(_MM_FLUSH_ZERO_ON);", 0x36);
                           poVar6 = std::endl<char,std::char_traits<char>>(poVar6);
                           std::__ostream_insert<char,std::char_traits<char>>(poVar6, "           _MM_SET_DENORMALS_ZERO_MODE(_MM_DENORMALS_ZERO_ON);", 0x3e);
                           std::endl<char,std::char_traits<char>>(poVar6);
                           std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cout, "================================================================================", 0x50);
                           std::endl<char,std::char_traits<char>>((ostream*)&std::cout);
                           std::endl<char,std::char_traits<char>>((ostream*)&std::cout);
                        }

                        plVar1 = *(long**)( embree::State::checkISASupport + *(long*)( std::cout + -0x18 ) );
                        if (plVar1 != (long*)0x0) {
                           if ((char)plVar1[7] == '\0') {
                              std::ctype<char>::_M_widen_init();
                              if (*(code**)( *plVar1 + 0x30 ) != std::ctype<char>::do_widen) {
                                 ( **(code**)( *plVar1 + 0x30 ) )(plVar1, 10);
                              }

                           }

                           std::ostream::put('`');
                           if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                              std::ostream::flush();
                              return;
                           }

                           goto LAB_00101560;
                        }

                     }

                  }

               }

            }

         }

      }

   }

   std::__throw_bad_cast();
   LAB_00101560:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* embree::Device::setDeviceErrorCode(RTCError) */void embree::Device::setDeviceErrorCode(undefined8 param_1, int param_2) {
   int *piVar1;
   piVar1 = (int*)embree::State::ErrorHandler::error();
   if (*piVar1 == 0) {
      *piVar1 = param_2;
   }

   return;
}
/* embree::Device::getDeviceErrorCode() */undefined4 embree::Device::getDeviceErrorCode(void) {
   undefined4 uVar1;
   undefined4 *puVar2;
   puVar2 = (undefined4*)embree::State::ErrorHandler::error();
   uVar1 = *puVar2;
   *puVar2 = 0;
   return uVar1;
}
/* embree::Device::setThreadErrorCode(RTCError) */void embree::Device::setThreadErrorCode(int param_1) {
   int *piVar1;
   piVar1 = (int*)embree::State::ErrorHandler::error();
   if (*piVar1 == 0) {
      *piVar1 = param_1;
   }

   return;
}
/* embree::Device::getThreadErrorCode() */undefined4 embree::Device::getThreadErrorCode(void) {
   undefined4 uVar1;
   undefined4 *puVar2;
   puVar2 = (undefined4*)embree::State::ErrorHandler::error();
   uVar1 = *puVar2;
   *puVar2 = 0;
   return uVar1;
}
/* embree::Device::process_error(embree::Device*, RTCError, char const*) */int *embree::Device::process_error(ulong param_1, int param_2, char *param_3) {
   long *plVar1;
   char cVar2;
   int *piVar3;
   size_t sVar4;
   _Rb_tree_node_base *p_Var5;
   if (param_1 == 0) {
      piVar3 = (int*)embree::State::ErrorHandler::error();
      if (*piVar3 == 0) {
         *piVar3 = param_2;
      }

   }
 else {
      cVar2 = embree::State::verbosity(param_1);
      if (cVar2 != '\0') {
         switch (param_2) {
            case 0:
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)&std::cerr,"Embree: No error",0x10);
        break;
            case 1:
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)&std::cerr,"Embree: Unknown error",0x15);
        break;
            case 2:
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)&std::cerr,"Embree: Invalid argument",0x18);
        break;
            case 3:
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)&std::cerr,"Embree: Invalid operation",0x19);
        break;
            case 4:
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)&std::cerr,"Embree: Out of memory",0x15);
        break;
            case 5:
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)&std::cerr,"Embree: Unsupported CPU",0x17);
        break;
            default:
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)&std::cerr,"Embree: Invalid error code",0x1a);
         }

         if (param_3 != (char*)0x0) {
            std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cerr, ", (", 3);
            sVar4 = strlen(param_3);
            std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cerr, param_3, sVar4);
            std::__ostream_insert<char,std::char_traits<char>>((ostream*)&std::cerr, ")", 1);
         }

         plVar1 = *(long**)( *(long*)( std::cerr + -0x18 ) + 0x1041f8 );
         if (plVar1 == (long*)0x0) {
            std::__throw_bad_cast();
            if (g_num_threads_map._24_8_ == 0x1023e8) {
               return (int*)0xffffffffffffffff;
            }

            piVar3 = (int*)0x0;
            p_Var5 = (_Rb_tree_node_base*)g_num_threads_map._24_8_;
            do {
               if (piVar3 < *(int**)( p_Var5 + 0x28 )) {
                  piVar3 = *(int**)( p_Var5 + 0x28 );
               }

               p_Var5 = (_Rb_tree_node_base*)std::_Rb_tree_increment(p_Var5);
            }
 while ( p_Var5 != (_Rb_tree_node_base*)( g_num_threads_map + 8 ) );
            if (piVar3 == (int*)0x0) {
               piVar3 = (int*)0xffffffffffffffff;
            }

            return piVar3;
         }

         if ((char)plVar1[7] == '\0') {
            std::ctype<char>::_M_widen_init();
            if (*(code**)( *plVar1 + 0x30 ) != std::ctype<char>::do_widen) {
               ( **(code**)( *plVar1 + 0x30 ) )(plVar1, 10);
            }

         }

         std::ostream::put('\b');
         std::ostream::flush();
      }

      if (*(code**)( param_1 + 0x528 ) != (code*)0x0) {
         ( **(code**)( param_1 + 0x528 ) )(*(undefined8*)( param_1 + 0x530 ), param_2, param_3);
      }

      piVar3 = (int*)embree::State::ErrorHandler::error();
      if (*piVar3 == 0) {
         *piVar3 = param_2;
      }

   }

   return piVar3;
}
/* embree::getMaxNumThreads() */ulong embree::getMaxNumThreads(void) {
   _Rb_tree_node_base *p_Var1;
   ulong uVar2;
   if (g_num_threads_map._24_8_ != 0x1023e8) {
      uVar2 = 0;
      p_Var1 = (_Rb_tree_node_base*)g_num_threads_map._24_8_;
      do {
         if (uVar2 < *(ulong*)( p_Var1 + 0x28 )) {
            uVar2 = *(ulong*)( p_Var1 + 0x28 );
         }

         p_Var1 = (_Rb_tree_node_base*)std::_Rb_tree_increment(p_Var1);
      }
 while ( p_Var1 != (_Rb_tree_node_base*)( g_num_threads_map + 8 ) );
      if (uVar2 == 0) {
         uVar2 = 0xffffffffffffffff;
      }

      return uVar2;
   }

   return 0xffffffffffffffff;
}
/* embree::getMaxCacheSize() */ulong embree::getMaxCacheSize(void) {
   _Rb_tree_node_base *p_Var1;
   ulong uVar2;
   uVar2 = 0;
   p_Var1 = (_Rb_tree_node_base*)g_cache_size_map._24_8_;
   if (g_cache_size_map._24_8_ != 0x102428) {
      do {
         if (uVar2 < *(ulong*)( p_Var1 + 0x28 )) {
            uVar2 = *(ulong*)( p_Var1 + 0x28 );
         }

         p_Var1 = (_Rb_tree_node_base*)std::_Rb_tree_increment(p_Var1);
      }
 while ( p_Var1 != (_Rb_tree_node_base*)( g_cache_size_map + 8 ) );
   }

   return uVar2;
}
/* embree::Device::setCacheSize(unsigned long) */void embree::Device::setCacheSize(ulong param_1) {
   return;
}
/* embree::Device::initTaskingSystem(unsigned long) */void embree::Device::initTaskingSystem(Device *this, ulong param_1) {
   long lVar1;
   _Rb_tree_node_base *p_Var2;
   long lVar3;
   ulong uVar4;
   long lVar5;
   long in_FS_OFFSET;
   Device *local_40;
   Device **local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   embree::MutexSys::lock();
   lVar5 = 0x1023e8;
   local_40 = this;
   if (param_1 != 0) {
      lVar1 = g_num_threads_map._16_8_;
      if (g_num_threads_map._16_8_ == 0) {
         LAB_00101a20:local_38 = &local_40;
         lVar5 = std::_Rb_tree<embree::Device*,std::pair<embree::Device*const,unsigned_long>,std::_Select1st<std::pair<embree::Device*const,unsigned_long>>,std::less<embree::Device*>,std::allocator<std::pair<embree::Device*const,unsigned_long>>>::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<embree::Device*&&>,std::tuple<>>(g_num_threads_map, lVar5, &local_38);
      }
 else {
         do {
            while (true) {
               lVar3 = lVar1;
               if (*(Device**)( lVar3 + 0x20 ) < this) break;
               lVar1 = *(long*)( lVar3 + 0x10 );
               lVar5 = lVar3;
               if (*(long*)( lVar3 + 0x10 ) == 0) goto LAB_00101ae1;
            }
;
            lVar1 = *(long*)( lVar3 + 0x18 );
         }
 while ( *(long*)( lVar3 + 0x18 ) != 0 );
         LAB_00101ae1:if (( lVar5 == 0x1023e8 ) || ( this < *(Device**)( lVar5 + 0x20 ) )) goto LAB_00101a20;
      }

      p_Var2 = (_Rb_tree_node_base*)g_num_threads_map._24_8_;
      *(ulong*)( lVar5 + 0x28 ) = param_1;
      goto joined_r0x00101a4c;
   }

   lVar1 = g_num_threads_map._16_8_;
   if (g_num_threads_map._16_8_ == 0) {
      LAB_00101990:local_38 = &local_40;
      lVar5 = std::_Rb_tree<embree::Device*,std::pair<embree::Device*const,unsigned_long>,std::_Select1st<std::pair<embree::Device*const,unsigned_long>>,std::less<embree::Device*>,std::allocator<std::pair<embree::Device*const,unsigned_long>>>::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<embree::Device*&&>,std::tuple<>>(g_num_threads_map, lVar5, &local_38);
   }
 else {
      do {
         while (true) {
            lVar3 = lVar1;
            if (*(Device**)( lVar3 + 0x20 ) < this) break;
            lVar1 = *(long*)( lVar3 + 0x10 );
            lVar5 = lVar3;
            if (*(long*)( lVar3 + 0x10 ) == 0) goto LAB_001019f9;
         }
;
         lVar1 = *(long*)( lVar3 + 0x18 );
      }
 while ( *(long*)( lVar3 + 0x18 ) != 0 );
      LAB_001019f9:if (( lVar5 == 0x1023e8 ) || ( this < *(Device**)( lVar5 + 0x20 ) )) goto LAB_00101990;
   }

   p_Var2 = (_Rb_tree_node_base*)g_num_threads_map._24_8_;
   *(undefined8*)( lVar5 + 0x28 ) = 0xffffffffffffffff;
   joined_r0x00101a4c:if (p_Var2 == (_Rb_tree_node_base*)( g_num_threads_map + 8 )) {
      uVar4 = 0xffffffffffffffff;
   }
 else {
      uVar4 = 0;
      do {
         if (uVar4 < *(ulong*)( p_Var2 + 0x28 )) {
            uVar4 = *(ulong*)( p_Var2 + 0x28 );
         }

         p_Var2 = (_Rb_tree_node_base*)std::_Rb_tree_increment(p_Var2);
      }
 while ( p_Var2 != (_Rb_tree_node_base*)( g_num_threads_map + 8 ) );
      if (uVar4 == 0) {
         uVar4 = 0xffffffffffffffff;
      }

   }

   embree::TaskScheduler::create(uVar4, (bool)this[0x4c8], (bool)this[0x4c9]);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      embree::MutexSys::unlock();
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* embree::Device::Device(char const*) */void embree::Device::Device(Device *this, char *param_1) {
   char cVar1;
   bool bVar2;
   byte bVar3;
   uint uVar4;
   void *pvVar5;
   ulong uVar6;
   BVH4Factory *this_00;
   embree::State::State((State*)this);
   *(undefined***)this = &PTR__Device_00102c40;
   *(undefined**)( this + 0x548 ) = &DAT_00102c98;
   pvVar5 = operator_new(1);
   *(undefined8*)( this + 0x558 ) = 0;
   *(void**)( this + 0x550 ) = pvVar5;
   cVar1 = embree::State::hasISA((int)this);
   if (cVar1 != '\0') {
      uVar4 = embree::getCPUModel();
      if (uVar4 < 0x16) {
         uVar6 = 1L << ( (byte)uVar4 & 0x3f );
         if (( uVar6 & 0x31fcbf ) == 0) {
            if (( uVar6 & 0xe0040 ) == 0) {
               if (( uVar6 & 0x300 ) != 0) {
                  *(undefined4*)( this + 0x4d4 ) = 2;
               }

            }
 else {
               *(undefined4*)( this + 0x4d4 ) = 0;
            }

         }
 else {
            *(undefined4*)( this + 0x4d4 ) = 1;
         }

      }

      embree::State::parseString((char*)this);
      embree::State::verify();
      cVar1 = embree::State::checkISASupport();
      if (cVar1 != '\0') {
         bVar2 = (bool)embree::State::verbosity((ulong)this);
         bVar3 = embree::os_init((bool)this[0x4d9], bVar2);
         this[0x4da] = ( Device )((byte)this[0x4da] & bVar3);
         if (this[0x498] != (Device)0x0) {
            MXCSR = MXCSR & 0xffffe07f | 0x1c80;
         }

         cVar1 = embree::State::verbosity((ulong)this);
         if (cVar1 != '\0') {
            print(this);
         }

         cVar1 = embree::State::verbosity((ulong)this);
         if (cVar1 != '\0') {
            embree::State::print();
         }

         this_00 = (BVH4Factory*)operator_new(0x538);
         embree::BVH4Factory::BVH4Factory(this_00, *(int*)( this + 0x4d0 ), *(int*)( this + 0x4cc ));
         pvVar5 = *(void**)( this + 0x558 );
         *(BVH4Factory**)( this + 0x558 ) = this_00;
         if (pvVar5 != (void*)0x0) {
            operator_delete(pvVar5, 0x538);
         }

         initTaskingSystem(this, *(ulong*)( this + 0x4b8 ));
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Device::exitTaskingSystem() */void embree::Device::exitTaskingSystem(Device *this) {
   _Rb_tree_node_base *p_Var1;
   _Rb_tree_node_base *p_Var2;
   void *pvVar3;
   _Rb_tree_node_base *p_Var4;
   _Rb_tree_node_base *p_Var5;
   ulong uVar6;
   _Rb_tree_node_base *p_Var7;
   _Rb_tree_node_base *p_Var8;
   bool bVar9;
   embree::MutexSys::lock();
   if (g_num_threads_map._16_8_ != 0) {
      p_Var4 = (_Rb_tree_node_base*)g_num_threads_map._16_8_;
      p_Var7 = (_Rb_tree_node_base*)( g_num_threads_map + 8 );
      LAB_00101d21:do {
         p_Var5 = p_Var4;
         if (this <= *(Device**)( p_Var5 + 0x20 )) {
            p_Var4 = *(_Rb_tree_node_base**)( p_Var5 + 0x10 );
            if (this < *(Device**)( p_Var5 + 0x20 )) goto code_r0x00101d33;
            p_Var2 = *(_Rb_tree_node_base**)( p_Var5 + 0x18 );
            while (p_Var8 = p_Var7,p_Var7 = p_Var2,p_Var2 != (_Rb_tree_node_base*)0x0) {
               while (true) {
                  p_Var2 = *(_Rb_tree_node_base**)( p_Var7 + 0x10 );
                  p_Var1 = p_Var7 + 0x18;
                  if (this < *(Device**)( p_Var7 + 0x20 )) break;
                  p_Var7 = *(_Rb_tree_node_base**)p_Var1;
                  if (*(_Rb_tree_node_base**)p_Var1 == (_Rb_tree_node_base*)0x0) goto joined_r0x00101dd3;
               }
;
            }
;
            joined_r0x00101dd3:while (p_Var7 = p_Var5,p_Var5 = p_Var4,p_Var5 != (_Rb_tree_node_base*)0x0) {
               p_Var4 = *(_Rb_tree_node_base**)( p_Var5 + 0x10 );
               if (*(Device**)( p_Var5 + 0x20 ) < this) {
                  p_Var4 = *(_Rb_tree_node_base**)( p_Var5 + 0x18 );
                  p_Var5 = p_Var7;
               }

            }
;
            if (( (_Rb_tree_node_base*)g_num_threads_map._24_8_ != p_Var7 ) || ( p_Var8 != (_Rb_tree_node_base*)( g_num_threads_map + 8 ) )) {
               while (p_Var7 != p_Var8) {
                  p_Var4 = (_Rb_tree_node_base*)std::_Rb_tree_increment(p_Var7);
                  pvVar3 = (void*)std::_Rb_tree_rebalance_for_erase(p_Var7, (_Rb_tree_node_base*)( g_num_threads_map + 8 ));
                  operator_delete(pvVar3, 0x30);
                  g_num_threads_map._40_8_ = g_num_threads_map._40_8_ + -1;
                  p_Var7 = p_Var4;
               }
;
               goto LAB_00101e45;
            }

            goto LAB_00101d59;
         }

         p_Var4 = *(_Rb_tree_node_base**)( p_Var5 + 0x18 );
      }
 while ( *(_Rb_tree_node_base**)( p_Var5 + 0x18 ) != (_Rb_tree_node_base*)0x0 );
      goto LAB_00101d3e;
   }

   p_Var7 = (_Rb_tree_node_base*)( g_num_threads_map + 8 );
   bVar9 = true;
   LAB_00101d44:if (( (_Rb_tree_node_base*)g_num_threads_map._24_8_ == p_Var7 ) && ( bVar9 )) {
      LAB_00101d59:std::_Rb_tree<embree::Device*,std::pair<embree::Device*const,unsigned_long>,std::_Select1st<std::pair<embree::Device*const,unsigned_long>>,std::less<embree::Device*>,std::allocator<std::pair<embree::Device*const,unsigned_long>>>::_M_erase((_Rb_tree_node*)g_num_threads_map._16_8_);
      g_num_threads_map._24_8_ = 0x1023e8;
      g_num_threads_map._16_8_ = 0;
      g_num_threads_map._32_8_ = 0x1023e8;
      g_num_threads_map._40_8_ = 0;
   }
 else {
      LAB_00101e45:if (g_num_threads_map._40_8_ != 0) {
         if (g_num_threads_map._24_8_ == 0x1023e8) {
            uVar6 = 0xffffffffffffffff;
         }
 else {
            uVar6 = 0;
            p_Var4 = (_Rb_tree_node_base*)g_num_threads_map._24_8_;
            do {
               if (uVar6 < *(ulong*)( p_Var4 + 0x28 )) {
                  uVar6 = *(ulong*)( p_Var4 + 0x28 );
               }

               p_Var4 = (_Rb_tree_node_base*)std::_Rb_tree_increment(p_Var4);
            }
 while ( p_Var4 != (_Rb_tree_node_base*)( g_num_threads_map + 8 ) );
            if (uVar6 == 0) {
               uVar6 = 0xffffffffffffffff;
            }

         }

         embree::TaskScheduler::create(uVar6, (bool)this[0x4c8], (bool)this[0x4c9]);
         goto LAB_00101d8d;
      }

   }

   embree::TaskScheduler::destroy();
   LAB_00101d8d:embree::MutexSys::unlock();
   return;
   code_r0x00101d33:p_Var7 = p_Var5;
   if (p_Var4 == (_Rb_tree_node_base*)0x0) goto LAB_00101d3e;
   goto LAB_00101d21;
   LAB_00101d3e:bVar9 = p_Var7 == (_Rb_tree_node_base*)( g_num_threads_map + 8 );
   goto LAB_00101d44;
}
/* embree::Device::~Device() */void embree::Device::~Device(Device *this) {
   *(undefined***)this = &PTR__Device_00102c40;
   *(undefined**)( this + 0x548 ) = &DAT_00102c98;
   exitTaskingSystem(this);
   if (*(void**)( this + 0x558 ) != (void*)0x0) {
      operator_delete(*(void**)( this + 0x558 ), 0x538);
   }

   if (*(void**)( this + 0x550 ) != (void*)0x0) {
      operator_delete(*(void**)( this + 0x550 ), 1);
   }

   embree::State::~State((State*)this);
   return;
}
/* embree::Device::~Device() */void embree::Device::~Device(Device *this) {
   *(undefined***)this = &PTR__Device_00102c40;
   *(undefined**)( this + 0x548 ) = &DAT_00102c98;
   exitTaskingSystem(this);
   if (*(void**)( this + 0x558 ) != (void*)0x0) {
      operator_delete(*(void**)( this + 0x558 ), 0x538);
   }

   if (*(void**)( this + 0x550 ) != (void*)0x0) {
      operator_delete(*(void**)( this + 0x550 ), 1);
   }

   embree::State::~State((State*)this);
   embree::alignedFree(this);
   return;
}
/* embree::Device::execute(bool, std::function<void ()> const&) */void embree::Device::execute(Device *this, bool param_1, function *param_2) {
   undefined8 extraout_RDX;
   undefined3 in_register_00000031;
   uint uVar1;
   uVar1 = CONCAT31(in_register_00000031, param_1);
   if (*(long*)( param_2 + 0x10 ) != 0) {
      /* WARNING: Could not recover jumptable at 0x00101fde. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( param_2 + 0x18 ) )(param_2);
      return;
   }

   std::__throw_bad_function_call();
   if (uVar1 == 0xf4242) {
      debug_int2 = extraout_RDX;
      return;
   }

   if (0xf4242 < uVar1) {
      if (uVar1 == 0xf4243) {
         debug_int3 = extraout_RDX;
         return;
      }

      setProperty();
      return;
   }

   if (uVar1 != 1000000) {
      if (uVar1 == 0xf4241) {
         debug_int1 = extraout_RDX;
         return;
      }

      setProperty();
      return;
   }

   debug_int0 = extraout_RDX;
   return;
}
/* embree::Device::setProperty(RTCDeviceProperty, long) */void embree::Device::setProperty(undefined8 param_1, uint param_2, undefined8 param_3) {
   if (param_2 == 0xf4242) {
      debug_int2 = param_3;
      return;
   }

   if (0xf4242 < param_2) {
      if (param_2 == 0xf4243) {
         debug_int3 = param_3;
         return;
      }

      setProperty();
      return;
   }

   if (param_2 == 1000000) {
      debug_int0 = param_3;
      return;
   }

   if (param_2 == 0xf4241) {
      debug_int1 = param_3;
      return;
   }

   setProperty();
   return;
}
/* embree::Device::getProperty(RTCDeviceProperty) */ulong embree::Device::getProperty(int param_1, uint param_2) {
   byte bVar1;
   undefined8 *puVar2;
   long lVar3;
   ulong uVar4;
   uVar4 = (ulong)param_2;
   if (uVar4 - 2000000 < 1000000) {
      lVar3 = embree::getRegressionTest(uVar4 - 2000000);
      if (lVar3 != 0) {
         return *(ulong*)( lVar3 + 8 );
      }

      switchD_0010209d_caseD_21:uVar4 = 0;
   }
 else {
      if (uVar4 - 3000000 < 1000000) {
         puVar2 = (undefined8*)embree::getRegressionTest(uVar4 - 3000000);
         if (puVar2 != (undefined8*)0x0) {
            bVar1 = ( **(code**)*puVar2 )(puVar2);
            return (ulong)bVar1;
         }

         goto switchD_0010209d_caseD_21;
      }

      switch (uVar4) {
         case 0:
      uVar4 = 0x9d6d;
      break;
         case 1:
      uVar4 = 4;
      break;
         case 2:
      uVar4 = 3;
      break;
         case 4:
         case 5:
         case 6:
         case 7:
         case 8:
         case 9:
         case 10:
         case 0xb:
         case 0xc:
         case 0xd:
         case 0xe:
         case 0xf:
         case 0x10:
         case 0x11:
         case 0x12:
         case 0x13:
         case 0x14:
         case 0x15:
         case 0x16:
         case 0x17:
         case 0x18:
         case 0x19:
         case 0x1a:
         case 0x1b:
         case 0x1c:
         case 0x1d:
         case 0x1e:
         case 0x1f:
         case 0x23:
         case 0x24:
         case 0x25:
         case 0x26:
         case 0x27:
         case 0x28:
         case 0x29:
         case 0x2a:
         case 0x2b:
         case 0x2c:
         case 0x2d:
         case 0x2e:
         case 0x2f:
         case 0x30:
         case 0x31:
         case 0x32:
         case 0x33:
         case 0x34:
         case 0x35:
         case 0x36:
         case 0x37:
         case 0x38:
         case 0x39:
         case 0x3a:
         case 0x3b:
         case 0x3c:
         case 0x3d:
                    /* WARNING: Subroutine does not return */
      abort();
         case 0x20:
      bVar1 = embree::State::hasISA(param_1);
      uVar4 = (ulong)bVar1;
      break;
         case 0x21:
         case 0x22:
         case 0x3e:
         case 0x3f:
         case 0x40:
         case 0x41:
         case 0x43:
         case 0x44:
      goto switchD_0010209d_caseD_21;
         default:
      if (0x22 < param_2 - 0x60) {
        uVar4 = getProperty();
        return uVar4;
      }
      uVar4 = 1L << ((byte)(param_2 - 0x60) & 0x3f);
      if ((uVar4 & 0x50000003e) != 0) goto switchD_0010209d_caseD_21;
      if ((uVar4 & 0x200000001) == 0) {
        uVar4 = getProperty();
        return uVar4;
      }
         case 3:
         case 0x42:
      uVar4 = 1;
      }

   }

   return uVar4;
}
/* embree::DeviceEnterLeave::DeviceEnterLeave(RTCDeviceTy*) */void embree::DeviceEnterLeave::DeviceEnterLeave(DeviceEnterLeave *this, RTCDeviceTy *param_1) {
   long lVar1;
   lVar1 = *(long*)param_1;
   *(RTCDeviceTy**)this = param_1;
   if (*(code**)( lVar1 + 0x10 ) == RefCount::refInc) {
      LOCK();
      *(long*)( param_1 + 8 ) = *(long*)( param_1 + 8 ) + 1;
      UNLOCK();
   }
 else {
      ( **(code**)( lVar1 + 0x10 ) )(param_1);
   }

   if (*(code**)( **(long**)this + 0x28 ) == Device::enter) {
      return;
   }

   /* WARNING: Could not recover jumptable at 0x001021a1. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( **(long**)this + 0x28 ) )();
   return;
}
/* embree::DeviceEnterLeave::DeviceEnterLeave(RTCSceneTy*) */void embree::DeviceEnterLeave::DeviceEnterLeave(DeviceEnterLeave *this, RTCSceneTy *param_1) {
   long *plVar1;
   long lVar2;
   plVar1 = *(long**)( param_1 + 0x188 );
   lVar2 = *plVar1;
   *(long**)this = plVar1;
   if (*(code**)( lVar2 + 0x10 ) == RefCount::refInc) {
      LOCK();
      plVar1[1] = plVar1[1] + 1;
      UNLOCK();
   }
 else {
      ( **(code**)( lVar2 + 0x10 ) )();
   }

   if (*(code**)( **(long**)this + 0x28 ) == Device::enter) {
      return;
   }

   /* WARNING: Could not recover jumptable at 0x00102201. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( **(long**)this + 0x28 ) )();
   return;
}
/* embree::DeviceEnterLeave::DeviceEnterLeave(RTCGeometryTy*) */void embree::DeviceEnterLeave::DeviceEnterLeave(DeviceEnterLeave *this, RTCGeometryTy *param_1) {
   long *plVar1;
   long lVar2;
   plVar1 = *(long**)( param_1 + 0x10 );
   lVar2 = *plVar1;
   *(long**)this = plVar1;
   if (*(code**)( lVar2 + 0x10 ) == RefCount::refInc) {
      LOCK();
      plVar1[1] = plVar1[1] + 1;
      UNLOCK();
   }
 else {
      ( **(code**)( lVar2 + 0x10 ) )();
   }

   if (*(code**)( **(long**)this + 0x28 ) == Device::enter) {
      return;
   }

   /* WARNING: Could not recover jumptable at 0x00102259. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( **(long**)this + 0x28 ) )();
   return;
}
/* embree::DeviceEnterLeave::DeviceEnterLeave(RTCBufferTy*) */void embree::DeviceEnterLeave::DeviceEnterLeave(DeviceEnterLeave *this, RTCBufferTy *param_1) {
   long *plVar1;
   long lVar2;
   plVar1 = *(long**)( param_1 + 0x10 );
   lVar2 = *plVar1;
   *(long**)this = plVar1;
   if (*(code**)( lVar2 + 0x10 ) == RefCount::refInc) {
      LOCK();
      plVar1[1] = plVar1[1] + 1;
      UNLOCK();
   }
 else {
      ( **(code**)( lVar2 + 0x10 ) )();
   }

   if (*(code**)( **(long**)this + 0x28 ) == Device::enter) {
      return;
   }

   /* WARNING: Could not recover jumptable at 0x001022a9. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( **(long**)this + 0x28 ) )();
   return;
}
/* embree::DeviceEnterLeave::~DeviceEnterLeave() */void embree::DeviceEnterLeave::~DeviceEnterLeave(DeviceEnterLeave *this) {
   Device *pDVar1;
   long lVar2;
   Device *this_00;
   this_00 = *(Device**)this;
   lVar2 = *(long*)this_00;
   if (*(code**)( lVar2 + 0x30 ) != Device::leave) {
      ( **(code**)( lVar2 + 0x30 ) )(this_00);
      this_00 = *(Device**)this;
      lVar2 = *(long*)this_00;
   }

   if (*(code**)( lVar2 + 0x18 ) == RefCount::refDec) {
      LOCK();
      pDVar1 = this_00 + 8;
      *(long*)pDVar1 = *(long*)pDVar1 + -1;
      UNLOCK();
      if (( this_00 != (Device*)0x0 ) && ( *(long*)pDVar1 == 0 )) {
         if (*(code**)( *(long*)this_00 + 8 ) == Device::~Device) {
            *(undefined***)this_00 = &PTR__Device_00102c40;
            *(undefined**)( this_00 + 0x548 ) = &DAT_00102c98;
            Device::exitTaskingSystem(this_00);
            if (*(void**)( this_00 + 0x558 ) != (void*)0x0) {
               operator_delete(*(void**)( this_00 + 0x558 ), 0x538);
            }

            if (*(void**)( this_00 + 0x550 ) != (void*)0x0) {
               operator_delete(*(void**)( this_00 + 0x550 ), 1);
            }

            embree::State::~State((State*)this_00);
            embree::alignedFree(this_00);
            return;
         }

         /* WARNING: Could not recover jumptable at 0x001023b1. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( **(code**)( *(long*)this_00 + 8 ) )(this_00);
         return;
      }

      return;
   }

   /* WARNING: Could not recover jumptable at 0x00102389. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( lVar2 + 0x18 ) )(this_00);
   return;
}
/* std::ctype<char>::do_widen(char) const */undefined4 std::ctype<char>::do_widen(ctype<char> *this, char param_1) {
   undefined3 in_register_00000031;
   return CONCAT31(in_register_00000031, param_1);
}
/* embree::Device::enter() */void embree::Device::enter(void) {
   return;
}
/* embree::Device::leave() */void embree::Device::leave(void) {
   return;
}
/* embree::RefCount::refInc() */RefCount * __thiscall embree::RefCount::refInc(RefCount *this){
   LOCK();
   *(long*)( this + 8 ) = *(long*)( this + 8 ) + 1;
   UNLOCK();
   return this;
}
/* embree::Device::memoryMonitor(long, bool) [clone .cold] */void embree::Device::memoryMonitor(long param_1, bool param_2) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* non-virtual thunk to embree::Device::memoryMonitor(long, bool) [clone .cold] */void embree::Device::memoryMonitor(Device *this, long param_1, bool param_2) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Device::Device(char const*) [clone .cold] */void embree::Device::Device(Device *this, char *param_1) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Device::setProperty(RTCDeviceProperty, long) [clone .cold] */void embree::Device::setProperty(void) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::Device::getProperty(RTCDeviceProperty) [clone .cold] */void embree::Device::getProperty(void) {
   /* WARNING: Subroutine does not return */
   abort();
}
/* embree::RefCount::refDec() */void embree::RefCount::refDec(RefCount *this) {
   RefCount *pRVar1;
   LOCK();
   pRVar1 = this + 8;
   *(long*)pRVar1 = *(long*)pRVar1 + -1;
   UNLOCK();
   if (( this != (RefCount*)0x0 ) && ( *(long*)pRVar1 == 0 )) {
      /* WARNING: Could not recover jumptable at 0x001024d9. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *(long*)this + 8 ) )();
      return;
   }

   return;
}
/* std::map<embree::Device*, unsigned long, std::less<embree::Device*>,
   std::allocator<std::pair<embree::Device* const, unsigned long> > >::~map() */void std::map<embree::Device*,unsigned_long,std::less<embree::Device*>,std::allocator<std::pair<embree::Device*const,unsigned_long>>>::~map(map<embree::Device*,unsigned_long,std::less<embree::Device*>,std::allocator<std::pair<embree::Device*const,unsigned_long>>> *this) {
   void *pvVar1;
   void *pvVar2;
   pvVar2 = *(void**)( this + 0x10 );
   while (pvVar2 != (void*)0x0) {
      _Rb_tree<embree::Device*,std::pair<embree::Device*const,unsigned_long>,std::_Select1st<std::pair<embree::Device*const,unsigned_long>>,std::less<embree::Device*>,std::allocator<std::pair<embree::Device*const,unsigned_long>>>::_M_erase(*(_Rb_tree_node**)( (long)pvVar2 + 0x18 ));
      pvVar1 = *(void**)( (long)pvVar2 + 0x10 );
      operator_delete(pvVar2, 0x30);
      pvVar2 = pvVar1;
   }
;
   return;
}
/* embree::Device::debug_int0 */void embree::Device::_GLOBAL__sub_I_debug_int0(void) {
   embree::MutexSys::MutexSys((MutexSys*)&g_mutex);
   __cxa_atexit(embree::MutexSys::~MutexSys, &g_mutex, &__dso_handle);
   g_cache_size_map._24_8_ = 0x102428;
   g_cache_size_map._8_4_ = 0;
   g_cache_size_map._16_8_ = 0;
   g_cache_size_map._32_8_ = 0x102428;
   g_cache_size_map._40_8_ = 0;
   __cxa_atexit(std::map<embree::Device*,unsigned_long,std::less<embree::Device*>,std::allocator<std::pair<embree::Device*const,unsigned_long>>>::~map, g_cache_size_map, &__dso_handle);
   g_num_threads_map._8_4_ = 0;
   g_num_threads_map._16_8_ = 0;
   g_num_threads_map._24_8_ = 0x1023e8;
   g_num_threads_map._32_8_ = 0x1023e8;
   g_num_threads_map._40_8_ = 0;
   __cxa_atexit(std::map<embree::Device*,unsigned_long,std::less<embree::Device*>,std::allocator<std::pair<embree::Device*const,unsigned_long>>>::~map, g_num_threads_map, &__dso_handle);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* std::map<embree::Device*, unsigned long, std::less<embree::Device*>,
   std::allocator<std::pair<embree::Device* const, unsigned long> > >::~map() */void std::map<embree::Device*,unsigned_long,std::less<embree::Device*>,std::allocator<std::pair<embree::Device*const,unsigned_long>>>::~map(map<embree::Device*,unsigned_long,std::less<embree::Device*>,std::allocator<std::pair<embree::Device*const,unsigned_long>>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

