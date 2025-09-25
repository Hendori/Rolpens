/* std::_Function_handler<void (std::__cxx11::string const&),
   spv::spirvbin_t::{lambda(std::__cxx11::string const&)#2}>::_M_invoke(std::_Any_data const&,
   std::__cxx11::string const&) */void std::_Function_handler<void(std::__cxx11::string_const &),spv::spirvbin_t::{lambda(std::__cxx11::string_const &)#2}>::_M_invoke(_Any_data *param_1, string *param_2) {
   return;
}
/* std::_Function_handler<bool (spv::Op, unsigned int), spv::inst_fn_nop::{lambda(spv::Op, unsigned
   int)#1}>::_M_invoke(std::_Any_data const&, spv::Op&&, unsigned int&&) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::inst_fn_nop::{lambda(spv::Op, unsigned_int)#1}>::_M_invoke(_Any_data *param_1, Op *param_2, uint *param_3) {
   return 0;
}
/* std::_Function_handler<void (unsigned int&), spv::spirvbin_t::applyMap()::{lambda(unsigned
   int&)#1}>::_M_invoke(std::_Any_data const&, unsigned int&) */void std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::applyMap()::{lambda(unsigned_int&)#1}>::_M_invoke(_Any_data *param_1, uint *param_2) {
   *param_2 = *(uint*)( *(long*)( *(long*)param_1 + 0x198 ) + ( ulong ) * param_2 * 4 );
   return;
}
/* std::_Function_handler<void (std::__cxx11::string const&),
   spv::spirvbin_t::{lambda(std::__cxx11::string const&)#1}>::_M_invoke(std::_Any_data const&,
   std::__cxx11::string const&) */void std::_Function_handler<void(std::__cxx11::string_const &),spv::spirvbin_t::{lambda(std::__cxx11::string_const &)#1}>::_M_invoke(_Any_data *param_1, string *param_2) {
   /* WARNING: Subroutine does not return */
   exit(5);
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__adjust_heap<__gnu_cxx::__normal_iterator<std::pair<unsigned int, unsigned int>*,
   std::vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int,
   unsigned int> > > >, long, std::pair<unsigned int, unsigned int>,
   __gnu_cxx::__ops::_Iter_less_iter>(__gnu_cxx::__normal_iterator<std::pair<unsigned int, unsigned
   int>*, std::vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int,
   unsigned int> > > >, long, long, std::pair<unsigned int, unsigned int>,
   __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */void std::__adjust_heap<__gnu_cxx::__normal_iterator<std::pair<unsigned_int,unsigned_int>*,std::vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>>,long,std::pair<unsigned_int,unsigned_int>,__gnu_cxx::__ops::_Iter_less_iter>(long param_1, long param_2, ulong param_3, undefined8 param_4) {
   uint uVar1;
   uint *puVar2;
   long lVar3;
   uint *puVar4;
   long lVar5;
   long lVar6;
   uint uVar7;
   uint uVar8;
   long lVar9;
   uint uVar10;
   lVar9 = (long)( param_3 - 1 ) / 2;
   lVar6 = param_2;
   if (param_2 < lVar9) {
      do {
         lVar5 = ( lVar6 + 1 ) * 2;
         lVar3 = lVar5 + -1;
         puVar2 = (uint*)( ( lVar6 + 1 ) * 0x10 + param_1 );
         puVar4 = (uint*)( param_1 + lVar3 * 8 );
         uVar10 = *puVar2;
         uVar7 = *puVar4;
         if (uVar10 < uVar7) {
            uVar8 = puVar4[1];
            puVar2 = puVar4;
            lVar5 = lVar3;
            uVar10 = uVar7;
            LAB_00100094:puVar4 = (uint*)( param_1 + lVar6 * 8 );
            *puVar4 = uVar10;
            puVar4[1] = uVar8;
            puVar4 = puVar2;
            lVar6 = lVar5;
         }
 else {
            uVar8 = puVar2[1];
            if (( uVar10 != uVar7 ) || ( uVar1 = puVar4[1] ),uVar10 = uVar7,uVar1 <= uVar8) goto LAB_00100094;
            puVar2 = (uint*)( param_1 + lVar6 * 8 );
            *puVar2 = uVar7;
            puVar2[1] = uVar1;
            lVar6 = lVar3;
         }

      }
 while ( lVar6 < lVar9 );
   }
 else {
      puVar4 = (uint*)( param_1 + param_2 * 8 );
   }

   puVar2 = puVar4;
   if (( ( param_3 & 1 ) == 0 ) && ( (long)( param_3 - 2 ) / 2 == lVar6 )) {
      lVar6 = lVar6 * 2 + 1;
      puVar2 = (uint*)( param_1 + lVar6 * 8 );
      *(undefined8*)puVar4 = *(undefined8*)puVar2;
   }

   uVar10 = (uint)param_4;
   lVar9 = ( lVar6 + -1 ) / 2;
   if (param_2 < lVar6) {
      puVar2 = (uint*)( param_1 + lVar9 * 8 );
      uVar7 = *puVar2;
      if (uVar7 < uVar10) goto LAB_00100188;
      while (( uVar7 == uVar10 && ( uVar8 = puVar2[1] ),lVar3 = lVar9,uVar8 < ( uint )((ulong)param_4 >> 0x20) )) {
         while (true) {
            *(ulong*)( param_1 + lVar6 * 8 ) = CONCAT44(uVar8, uVar7);
            lVar9 = ( lVar3 + -1 ) / 2;
            if (lVar3 <= param_2) goto LAB_001001a4;
            puVar2 = (uint*)( param_1 + lVar9 * 8 );
            uVar7 = *puVar2;
            lVar6 = lVar3;
            if (uVar10 <= uVar7) break;
            LAB_00100188:uVar8 = puVar2[1];
            lVar3 = lVar9;
         }
;
      }
;
      puVar2 = (uint*)( param_1 + lVar6 * 8 );
   }

   LAB_001001a4:*(undefined8*)puVar2 = param_4;
   return;
}
/* std::_Function_handler<void (unsigned int&), spv::spirvbin_t::dceTypes()::{lambda(unsigned
   int&)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::dceTypes()::{lambda(unsigned_int&)#1}>::_M_manager(undefined8 *param_1, undefined8 *param_2, int param_3) {
   undefined8 uVar1;
   if (param_3 != 0) {
      if (param_3 == 1) {
         *param_1 = param_2;
      }
 else if (param_3 == 2) {
         uVar1 = param_2[1];
         *param_1 = *param_2;
         param_1[1] = uVar1;
      }

      return 0;
   }

   *param_1 = &spv::spirvbin_t::dceTypes()::{lambda(unsigned_int&)
   #1
   return 0;
}
/* std::_Function_handler<bool (spv::Op, unsigned int), spv::spirvbin_t::dceVars()::{lambda(spv::Op,
   unsigned int)#2}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::dceVars()::{lambda(spv::Op,unsigned_int)#2}>::_M_manager(undefined8 *param_1, undefined8 *param_2, int param_3) {
   undefined8 uVar1;
   if (param_3 != 0) {
      if (param_3 == 1) {
         *param_1 = param_2;
      }
 else if (param_3 == 2) {
         uVar1 = param_2[1];
         *param_1 = *param_2;
         param_1[1] = uVar1;
      }

      return 0;
   }

   *param_1 = &spv::spirvbin_t::dceVars()::{lambda(spv::Op,unsigned_int)
   #2
   return 0;
}
/* std::_Function_handler<void (unsigned int&), spv::spirvbin_t::dceVars()::{lambda(unsigned
   int&)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::dceVars()::{lambda(unsigned_int&)#1}>::_M_manager(undefined8 *param_1, undefined8 *param_2, int param_3) {
   if (param_3 != 0) {
      if (param_3 == 1) {
         *param_1 = param_2;
      }
 else if (param_3 == 2) {
         *param_1 = *param_2;
      }

      return 0;
   }

   *param_1 = &spv::spirvbin_t::dceVars()::{lambda(unsigned_int&)
   #1
   return 0;
}
/* std::_Function_handler<bool (spv::Op, unsigned int), spv::spirvbin_t::dceVars()::{lambda(spv::Op,
   unsigned int)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::dceVars()::{lambda(spv::Op,unsigned_int)#1}>::_M_manager(undefined8 *param_1, undefined8 *param_2, int param_3) {
   undefined8 uVar1;
   if (param_3 != 0) {
      if (param_3 == 1) {
         *param_1 = param_2;
      }
 else if (param_3 == 2) {
         uVar1 = param_2[1];
         *param_1 = *param_2;
         param_1[1] = uVar1;
      }

      return 0;
   }

   *param_1 = &spv::spirvbin_t::dceVars()::{lambda(spv::Op,unsigned_int)
   #1
   return 0;
}
/* std::_Function_handler<bool (spv::Op, unsigned int),
   spv::spirvbin_t::dceFuncs()::{lambda(spv::Op, unsigned int)#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::dceFuncs()::{lambda(spv::Op,unsigned_int)#1}>::_M_manager(undefined8 *param_1, undefined8 *param_2, int param_3) {
   if (param_3 != 0) {
      if (param_3 == 1) {
         *param_1 = param_2;
      }
 else if (param_3 == 2) {
         *param_1 = *param_2;
      }

      return 0;
   }

   *param_1 = &spv::spirvbin_t::dceFuncs()::{lambda(spv::Op,unsigned_int)
   #1
   return 0;
}
/* std::_Function_handler<void (unsigned int&), spv::spirvbin_t::optLoadStore()::{lambda(unsigned
   int&)#2}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::optLoadStore()::{lambda(unsigned_int&)#2}>::_M_manager(undefined8 *param_1, undefined8 *param_2, int param_3) {
   if (param_3 != 0) {
      if (param_3 == 1) {
         *param_1 = param_2;
      }
 else if (param_3 == 2) {
         *param_1 = *param_2;
      }

      return 0;
   }

   *param_1 = &spv::spirvbin_t::optLoadStore()::{lambda(unsigned_int&)
   #2
   return 0;
}
/* std::_Function_handler<bool (spv::Op, unsigned int),
   spv::spirvbin_t::optLoadStore()::{lambda(spv::Op, unsigned int)#3}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::optLoadStore()::{lambda(spv::Op,unsigned_int)#3}>::_M_manager(undefined8 *param_1, undefined8 *param_2, int param_3) {
   undefined8 uVar1;
   if (param_3 != 0) {
      if (param_3 == 1) {
         *param_1 = param_2;
      }
 else if (param_3 == 2) {
         uVar1 = param_2[1];
         *param_1 = *param_2;
         param_1[1] = uVar1;
      }

      return 0;
   }

   *param_1 = &spv::spirvbin_t::optLoadStore()::{lambda(spv::Op,unsigned_int)
   #3
   return 0;
}
/* std::_Function_handler<bool (spv::Op, unsigned int),
   spv::spirvbin_t::optLoadStore()::{lambda(spv::Op, unsigned int)#2}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::optLoadStore()::{lambda(spv::Op,unsigned_int)#2}>::_M_manager(long *param_1, long *param_2, int param_3) {
   undefined8 *puVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   if (param_3 != 0) {
      if (param_3 == 1) {
         *param_1 = *param_2;
      }
 else if (param_3 == 2) {
         puVar1 = (undefined8*)*param_2;
         puVar3 = (undefined8*)operator_new(0x18);
         uVar2 = puVar1[1];
         *puVar3 = *puVar1;
         puVar3[1] = uVar2;
         puVar3[2] = puVar1[2];
         *param_1 = (long)puVar3;
      }
 else if (( param_3 == 3 ) && ( (void*)*param_1 != (void*)0x0 )) {
         operator_delete((void*)*param_1, 0x18);
      }

      return 0;
   }

   *param_1 = (long)&spv::spirvbin_t::optLoadStore()::{lambda(spv::Op,unsigned_int)
   #2
   return 0;
}
/* std::_Function_handler<void (unsigned int&), spv::spirvbin_t::optLoadStore()::{lambda(unsigned
   int&)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::optLoadStore()::{lambda(unsigned_int&)#1}>::_M_manager(undefined8 *param_1, undefined8 *param_2, int param_3) {
   undefined8 uVar1;
   if (param_3 != 0) {
      if (param_3 == 1) {
         *param_1 = param_2;
      }
 else if (param_3 == 2) {
         uVar1 = param_2[1];
         *param_1 = *param_2;
         param_1[1] = uVar1;
      }

      return 0;
   }

   *param_1 = &spv::spirvbin_t::optLoadStore()::{lambda(unsigned_int&)
   #1
   return 0;
}
/* std::_Function_handler<bool (spv::Op, unsigned int),
   spv::spirvbin_t::optLoadStore()::{lambda(spv::Op, unsigned int)#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::optLoadStore()::{lambda(spv::Op,unsigned_int)#1}>::_M_manager(long *param_1, long *param_2, int param_3) {
   undefined8 *puVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   if (param_3 != 0) {
      if (param_3 == 1) {
         *param_1 = *param_2;
      }
 else if (param_3 == 2) {
         puVar1 = (undefined8*)*param_2;
         puVar3 = (undefined8*)operator_new(0x28);
         uVar2 = puVar1[1];
         *puVar3 = *puVar1;
         puVar3[1] = uVar2;
         uVar2 = puVar1[3];
         puVar3[2] = puVar1[2];
         puVar3[3] = uVar2;
         puVar3[4] = puVar1[4];
         *param_1 = (long)puVar3;
      }
 else if (( param_3 == 3 ) && ( (void*)*param_1 != (void*)0x0 )) {
         operator_delete((void*)*param_1, 0x28);
      }

      return 0;
   }

   *param_1 = (long)&spv::spirvbin_t::optLoadStore()::{lambda(spv::Op,unsigned_int)
   #1
   return 0;
}
/* std::_Function_handler<void (unsigned int&),
   spv::spirvbin_t::forwardLoadStores()::{lambda(unsigned int&)#2}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::forwardLoadStores()::{lambda(unsigned_int&)#2}>::_M_manager(undefined8 *param_1, undefined8 *param_2, int param_3) {
   if (param_3 != 0) {
      if (param_3 == 1) {
         *param_1 = param_2;
      }
 else if (param_3 == 2) {
         *param_1 = *param_2;
      }

      return 0;
   }

   *param_1 = &spv::spirvbin_t::forwardLoadStores()::{lambda(unsigned_int&)
   #2
   return 0;
}
/* std::_Function_handler<bool (spv::Op, unsigned int),
   spv::spirvbin_t::forwardLoadStores()::{lambda(spv::Op, unsigned
   int)#2}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::forwardLoadStores()::{lambda(spv::Op,unsigned_int)#2}>::_M_manager(long *param_1, long *param_2, int param_3) {
   undefined8 *puVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   if (param_3 != 0) {
      if (param_3 == 1) {
         *param_1 = *param_2;
      }
 else if (param_3 == 2) {
         puVar1 = (undefined8*)*param_2;
         puVar3 = (undefined8*)operator_new(0x18);
         uVar2 = puVar1[1];
         *puVar3 = *puVar1;
         puVar3[1] = uVar2;
         puVar3[2] = puVar1[2];
         *param_1 = (long)puVar3;
      }
 else if (( param_3 == 3 ) && ( (void*)*param_1 != (void*)0x0 )) {
         operator_delete((void*)*param_1, 0x18);
      }

      return 0;
   }

   *param_1 = (long)&spv::spirvbin_t::forwardLoadStores()::{lambda(spv::Op,unsigned_int)
   #2
   ;;
   return 0;
}
/* std::_Function_handler<void (unsigned int&),
   spv::spirvbin_t::forwardLoadStores()::{lambda(unsigned int&)#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::forwardLoadStores()::{lambda(unsigned_int&)#1}>::_M_manager(undefined8 *param_1, undefined8 *param_2, int param_3) {
   if (param_3 != 0) {
      if (param_3 == 1) {
         *param_1 = param_2;
      }
 else if (param_3 == 2) {
         *param_1 = *param_2;
      }

      return 0;
   }

   *param_1 = &spv::spirvbin_t::forwardLoadStores()::{lambda(unsigned_int&)
   #1
   return 0;
}
/* std::_Function_handler<bool (spv::Op, unsigned int),
   spv::spirvbin_t::forwardLoadStores()::{lambda(spv::Op, unsigned
   int)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::forwardLoadStores()::{lambda(spv::Op,unsigned_int)#1}>::_M_manager(long *param_1, long *param_2, int param_3) {
   undefined8 *puVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   if (param_3 != 0) {
      if (param_3 == 1) {
         *param_1 = *param_2;
      }
 else if (param_3 == 2) {
         puVar1 = (undefined8*)*param_2;
         puVar3 = (undefined8*)operator_new(0x18);
         uVar2 = puVar1[1];
         *puVar3 = *puVar1;
         puVar3[1] = uVar2;
         puVar3[2] = puVar1[2];
         *param_1 = (long)puVar3;
      }
 else if (( param_3 == 3 ) && ( (void*)*param_1 != (void*)0x0 )) {
         operator_delete((void*)*param_1, 0x18);
      }

      return 0;
   }

   *param_1 = (long)&spv::spirvbin_t::forwardLoadStores()::{lambda(spv::Op,unsigned_int)
   #1
   ;;
   return 0;
}
/* std::_Function_handler<void (unsigned int&), spv::spirvbin_t::mapFnBodies()::{lambda(unsigned
   int&)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::mapFnBodies()::{lambda(unsigned_int&)#1}>::_M_manager(long *param_1, long *param_2, int param_3) {
   undefined8 *puVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   if (param_3 != 0) {
      if (param_3 == 1) {
         *param_1 = *param_2;
      }
 else if (param_3 == 2) {
         puVar1 = (undefined8*)*param_2;
         puVar3 = (undefined8*)operator_new(0x28);
         uVar2 = puVar1[1];
         *puVar3 = *puVar1;
         puVar3[1] = uVar2;
         uVar2 = puVar1[3];
         puVar3[2] = puVar1[2];
         puVar3[3] = uVar2;
         puVar3[4] = puVar1[4];
         *param_1 = (long)puVar3;
      }
 else if (( param_3 == 3 ) && ( (void*)*param_1 != (void*)0x0 )) {
         operator_delete((void*)*param_1, 0x28);
      }

      return 0;
   }

   *param_1 = (long)&spv::spirvbin_t::mapFnBodies()::{lambda(unsigned_int&)
   #1
   return 0;
}
/* std::_Function_handler<bool (spv::Op, unsigned int),
   spv::spirvbin_t::mapFnBodies()::{lambda(spv::Op, unsigned int)#2}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::mapFnBodies()::{lambda(spv::Op,unsigned_int)#2}>::_M_manager(long *param_1, long *param_2, int param_3) {
   undefined8 *puVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   if (param_3 != 0) {
      if (param_3 == 1) {
         *param_1 = *param_2;
      }
 else if (param_3 == 2) {
         puVar1 = (undefined8*)*param_2;
         puVar3 = (undefined8*)operator_new(0x28);
         uVar2 = puVar1[1];
         *puVar3 = *puVar1;
         puVar3[1] = uVar2;
         uVar2 = puVar1[3];
         puVar3[2] = puVar1[2];
         puVar3[3] = uVar2;
         puVar3[4] = puVar1[4];
         *param_1 = (long)puVar3;
      }
 else if (( param_3 == 3 ) && ( (void*)*param_1 != (void*)0x0 )) {
         operator_delete((void*)*param_1, 0x28);
      }

      return 0;
   }

   *param_1 = (long)&spv::spirvbin_t::mapFnBodies()::{lambda(spv::Op,unsigned_int)
   #2
   return 0;
}
/* std::_Function_handler<bool (spv::Op, unsigned int),
   spv::spirvbin_t::mapFnBodies()::{lambda(spv::Op, unsigned int)#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::mapFnBodies()::{lambda(spv::Op,unsigned_int)#1}>::_M_manager(undefined8 *param_1, undefined8 *param_2, int param_3) {
   if (param_3 != 0) {
      if (param_3 == 1) {
         *param_1 = param_2;
      }
 else if (param_3 == 2) {
         *param_1 = *param_2;
      }

      return 0;
   }

   *param_1 = &spv::spirvbin_t::mapFnBodies()::{lambda(spv::Op,unsigned_int)
   #1
   return 0;
}
/* std::_Function_handler<void (unsigned int&), spv::spirvbin_t::buildLocalMaps()::{lambda(unsigned
   int&)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::buildLocalMaps()::{lambda(unsigned_int&)#1}>::_M_manager(undefined8 *param_1, undefined8 *param_2, int param_3) {
   if (param_3 != 0) {
      if (param_3 == 1) {
         *param_1 = param_2;
      }
 else if (param_3 == 2) {
         *param_1 = *param_2;
      }

      return 0;
   }

   *param_1 = &spv::spirvbin_t::buildLocalMaps()::{lambda(unsigned_int&)
   #1
   return 0;
}
/* std::_Function_handler<bool (spv::Op, unsigned int),
   spv::spirvbin_t::buildLocalMaps()::{lambda(spv::Op, unsigned
   int)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::buildLocalMaps()::{lambda(spv::Op,unsigned_int)#1}>::_M_manager(long *param_1, long *param_2, int param_3) {
   undefined8 *puVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   if (param_3 != 0) {
      if (param_3 == 1) {
         *param_1 = *param_2;
      }
 else if (param_3 == 2) {
         puVar1 = (undefined8*)*param_2;
         puVar3 = (undefined8*)operator_new(0x18);
         uVar2 = puVar1[1];
         *puVar3 = *puVar1;
         puVar3[1] = uVar2;
         puVar3[2] = puVar1[2];
         *param_1 = (long)puVar3;
      }
 else if (( param_3 == 3 ) && ( (void*)*param_1 != (void*)0x0 )) {
         operator_delete((void*)*param_1, 0x18);
      }

      return 0;
   }

   *param_1 = (long)&spv::spirvbin_t::buildLocalMaps()::{lambda(spv::Op,unsigned_int)
   #1
   return 0;
}
/* std::_Function_handler<bool (spv::Op, unsigned int),
   spv::spirvbin_t::stripDeadRefs()::{lambda(spv::Op, unsigned int)#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::stripDeadRefs()::{lambda(spv::Op,unsigned_int)#1}>::_M_manager(undefined8 *param_1, undefined8 *param_2, int param_3) {
   if (param_3 != 0) {
      if (param_3 == 1) {
         *param_1 = param_2;
      }
 else if (param_3 == 2) {
         *param_1 = *param_2;
      }

      return 0;
   }

   *param_1 = &spv::spirvbin_t::stripDeadRefs()::{lambda(spv::Op,unsigned_int)
   #1
   return 0;
}
/* std::_Function_handler<void (unsigned int&), spv::op_fn_nop::{lambda(unsigned
   int&)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(unsigned_int &),spv::op_fn_nop::{lambda(unsigned_int &)#1}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &spv::op_fn_nop::{lambda;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<bool (spv::Op, unsigned int),
   spv::spirvbin_t::stripDebug()::{lambda(spv::Op, unsigned int)#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::stripDebug()::{lambda(spv::Op,unsigned_int)#1}>::_M_manager(undefined8 *param_1, undefined8 *param_2, int param_3) {
   if (param_3 != 0) {
      if (param_3 == 1) {
         *param_1 = param_2;
      }
 else if (param_3 == 2) {
         *param_1 = *param_2;
      }

      return 0;
   }

   *param_1 = &spv::spirvbin_t::stripDebug()::{lambda(spv::Op,unsigned_int)
   #1
   return 0;
}
/* std::_Function_handler<void (unsigned int&), spv::spirvbin_t::applyMap()::{lambda(unsigned
   int&)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::applyMap()::{lambda(unsigned_int&)#1}>::_M_manager(undefined8 *param_1, undefined8 *param_2, int param_3) {
   if (param_3 != 0) {
      if (param_3 == 1) {
         *param_1 = param_2;
      }
 else if (param_3 == 2) {
         *param_1 = *param_2;
      }

      return 0;
   }

   *param_1 = &spv::spirvbin_t::applyMap()::{lambda(unsigned_int&)
   #1
   return 0;
}
/* std::_Function_handler<bool (spv::Op, unsigned int), spv::inst_fn_nop::{lambda(spv::Op, unsigned
   int)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::inst_fn_nop::{lambda(spv::Op, unsigned_int)#1}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &spv::inst_fn_nop::{lambda(spv::Op, unsigned_int);
      #1
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (std::__cxx11::string const&),
   spv::spirvbin_t::{lambda(std::__cxx11::string const&)#2}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(std::__cxx11::string_const &),spv::spirvbin_t::{lambda(std::__cxx11::string_const &)#2}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &spv::spirvbin_t::{lambda;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* std::_Function_handler<void (std::__cxx11::string const&),
   spv::spirvbin_t::{lambda(std::__cxx11::string const&)#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(std::__cxx11::string_const &),spv::spirvbin_t::{lambda(std::__cxx11::string_const &)#1}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &spv::spirvbin_t::{lambda;
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* void std::__cxx11::string::_M_construct<char const*>(char const*, char const*,
   std::forward_iterator_tag) [clone .isra.0] */void std::__cxx11::string::_M_construct<char_const*>(ulong *param_1, undefined1 *param_2, long param_3) {
   undefined1 *__dest;
   ulong __n;
   long in_FS_OFFSET;
   ulong local_28;
   long local_20;
   __n = param_3 - (long)param_2;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = __n;
   if (__n < 0x10) {
      __dest = (undefined1*)*param_1;
      if (__n == 1) {
         *__dest = *param_2;
         __dest = (undefined1*)*param_1;
         goto LAB_00100ac4;
      }

      if (__n == 0) goto LAB_00100ac4;
   }
 else {
      __dest = (undefined1*)std::__cxx11::string::_M_create(param_1, ( ulong ) & local_28);
      *param_1 = (ulong)__dest;
      param_1[2] = local_28;
   }

   memcpy(__dest, param_2, __n);
   __dest = (undefined1*)*param_1;
   LAB_00100ac4:param_1[1] = local_28;
   __dest[local_28] = 0;
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* std::_Function_handler<void (unsigned int&), spv::op_fn_nop::{lambda(unsigned
   int&)#1}>::_M_invoke(std::_Any_data const&, unsigned int&) */void std::_Function_handler<void(unsigned_int &),spv::op_fn_nop::{lambda(unsigned_int &)#1}>::_M_invoke(_Any_data *param_1, uint *param_2) {
   return;
}
/* std::_Hashtable<unsigned int, std::pair<unsigned int const, unsigned int>,
   std::allocator<std::pair<unsigned int const, unsigned int> >, std::__detail::_Select1st,
   std::equal_to<unsigned int>, std::hash<unsigned int>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true> >::_M_erase(std::integral_constant<bool,
   true>, unsigned int const&) [clone .isra.0] */long *std::_Hashtable<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_erase(long *param_1, uint param_2) {
   uint uVar1;
   long *plVar2;
   long lVar3;
   long *plVar4;
   long *plVar5;
   long *extraout_RAX;
   long *plVar6;
   ulong uVar7;
   ulong uVar8;
   long lVar9;
   undefined8 *puVar10;
   if (param_1[3] == 0) {
      plVar4 = (long*)param_1[2];
      plVar5 = (long*)param_1[2];
      plVar6 = param_1 + 2;
      while (plVar2 = plVar4,plVar2 != (long*)0x0) {
         if (param_2 == *(uint*)( plVar2 + 1 )) {
            plVar5 = (long*)*plVar6;
            uVar7 = ( ulong ) * (uint*)( plVar5 + 1 ) % (ulong)param_1[1];
            LAB_00100bf4:lVar3 = *param_1;
            lVar9 = *plVar5;
            puVar10 = (undefined8*)( uVar7 * 8 + lVar3 );
            plVar4 = (long*)*puVar10;
            if (plVar6 == plVar4) {
               if (lVar9 != 0) {
                  uVar8 = ( ulong ) * (uint*)( lVar9 + 8 ) % (ulong)param_1[1];
                  if (uVar7 == uVar8) goto LAB_00100c1f;
                  *(long**)( lVar3 + uVar8 * 8 ) = plVar6;
               }

               if (plVar4 == param_1 + 2) {
                  param_1[2] = lVar9;
               }

               *puVar10 = 0;
               lVar9 = *plVar5;
            }
 else if (( lVar9 != 0 ) && ( uVar8 = uVar7 != uVar8 )) {
               *(long**)( lVar3 + uVar8 * 8 ) = plVar6;
               lVar9 = *plVar5;
            }

            LAB_00100c1f:*plVar6 = lVar9;
            operator_delete(plVar5, 0x10);
            param_1[3] = param_1[3] + -1;
            return extraout_RAX;
         }

         plVar5 = plVar2;
         plVar6 = plVar2;
         plVar4 = (long*)*plVar2;
      }
;
   }
 else {
      uVar8 = param_1[1];
      uVar7 = (ulong)param_2 % uVar8;
      plVar5 = (long*)*param_1;
      plVar6 = (long*)plVar5[uVar7];
      if (plVar6 != (long*)0x0) {
         uVar1 = *(uint*)( (long*)*plVar6 + 1 );
         plVar4 = (long*)*plVar6;
         do {
            if (param_2 == uVar1) {
               plVar5 = (long*)*plVar6;
               goto LAB_00100bf4;
            }

            plVar2 = (long*)*plVar4;
            if (plVar2 == (long*)0x0) {
               return plVar4;
            }

            uVar1 = *(uint*)( plVar2 + 1 );
            plVar5 = (long*)( uVar1 / uVar8 );
            plVar6 = plVar4;
            plVar4 = plVar2;
         }
 while ( uVar7 == (ulong)uVar1 % uVar8 );
      }

   }

   return plVar5;
}
/* std::_Hashtable<unsigned int, unsigned int, std::allocator<unsigned int>,
   std::__detail::_Identity, std::equal_to<unsigned int>, std::hash<unsigned int>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, true, true>
   >::_M_erase(std::integral_constant<bool, true>, unsigned int const&) [clone .isra.0] */long *std::_Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::_M_erase(long *param_1, uint param_2) {
   uint uVar1;
   long *plVar2;
   long lVar3;
   long *plVar4;
   long *plVar5;
   long *extraout_RAX;
   long *plVar6;
   ulong uVar7;
   ulong uVar8;
   long lVar9;
   undefined8 *puVar10;
   if (param_1[3] == 0) {
      plVar4 = (long*)param_1[2];
      plVar5 = (long*)param_1[2];
      plVar6 = param_1 + 2;
      while (plVar2 = plVar4,plVar2 != (long*)0x0) {
         if (param_2 == *(uint*)( plVar2 + 1 )) {
            plVar5 = (long*)*plVar6;
            uVar7 = ( ulong ) * (uint*)( plVar5 + 1 ) % (ulong)param_1[1];
            LAB_00100d34:lVar3 = *param_1;
            lVar9 = *plVar5;
            puVar10 = (undefined8*)( uVar7 * 8 + lVar3 );
            plVar4 = (long*)*puVar10;
            if (plVar6 == plVar4) {
               if (lVar9 != 0) {
                  uVar8 = ( ulong ) * (uint*)( lVar9 + 8 ) % (ulong)param_1[1];
                  if (uVar7 == uVar8) goto LAB_00100d5f;
                  *(long**)( lVar3 + uVar8 * 8 ) = plVar6;
               }

               if (plVar4 == param_1 + 2) {
                  param_1[2] = lVar9;
               }

               *puVar10 = 0;
               lVar9 = *plVar5;
            }
 else if (( lVar9 != 0 ) && ( uVar8 = uVar7 != uVar8 )) {
               *(long**)( lVar3 + uVar8 * 8 ) = plVar6;
               lVar9 = *plVar5;
            }

            LAB_00100d5f:*plVar6 = lVar9;
            operator_delete(plVar5, 0x10);
            param_1[3] = param_1[3] + -1;
            return extraout_RAX;
         }

         plVar5 = plVar2;
         plVar6 = plVar2;
         plVar4 = (long*)*plVar2;
      }
;
   }
 else {
      uVar8 = param_1[1];
      uVar7 = (ulong)param_2 % uVar8;
      plVar5 = (long*)*param_1;
      plVar6 = (long*)plVar5[uVar7];
      if (plVar6 != (long*)0x0) {
         uVar1 = *(uint*)( (long*)*plVar6 + 1 );
         plVar4 = (long*)*plVar6;
         do {
            if (param_2 == uVar1) {
               plVar5 = (long*)*plVar6;
               goto LAB_00100d34;
            }

            plVar2 = (long*)*plVar4;
            if (plVar2 == (long*)0x0) {
               return plVar4;
            }

            uVar1 = *(uint*)( plVar2 + 1 );
            plVar5 = (long*)( uVar1 / uVar8 );
            plVar6 = plVar4;
            plVar4 = plVar2;
         }
 while ( uVar7 == (ulong)uVar1 % uVar8 );
      }

   }

   return plVar5;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__introsort_loop<__gnu_cxx::__normal_iterator<std::pair<unsigned int, unsigned int>*,
   std::vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int,
   unsigned int> > > >, long,
   __gnu_cxx::__ops::_Iter_less_iter>(__gnu_cxx::__normal_iterator<std::pair<unsigned int, unsigned
   int>*, std::vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int,
   unsigned int> > > >, __gnu_cxx::__normal_iterator<std::pair<unsigned int, unsigned int>*,
   std::vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int,
   unsigned int> > > >, long, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */void std::__introsort_loop<__gnu_cxx::__normal_iterator<std::pair<unsigned_int,unsigned_int>*,std::vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>>,long,__gnu_cxx::__ops::_Iter_less_iter>(uint *param_1, uint *param_2, long param_3) {
   uint *puVar1;
   uint *puVar2;
   long lVar3;
   uint uVar4;
   uint *puVar5;
   long lVar6;
   uint uVar7;
   uint uVar8;
   uint *puVar9;
   uint *puVar10;
   bool bVar11;
   undefined8 uVar12;
   lVar3 = (long)param_2 - (long)param_1;
   if (lVar3 < 0x81) {
      return;
   }

   puVar1 = param_1 + 2;
   puVar10 = param_2;
   if (param_3 == 0) {
      LAB_00100fa4:for (lVar6 = ( lVar3 >> 3 ) + -2 >> 1; __adjust_heap<__gnu_cxx::__normal_iterator<std::pair<unsigned_int,unsigned_int>*,std::vector<std::pair<unsigned_int,unsigned_int>,std::allocator < std::pair < unsigned_int,unsigned_int>>> > ,long,std::pair<unsigned_int,unsigned_int>,__gnu_cxx::__ops::_Iter_less_iter > ( param_1,lVar6,lVar3 >> 3,*(undefined8*)( param_1 + lVar6 * 2 ) ),lVar6 != 0; lVar6 = lVar6 + -1) {}
      do {
         param_2 = param_2 + -2;
         uVar12 = *(undefined8*)param_2;
         *(undefined8*)param_2 = *(undefined8*)param_1;
         __adjust_heap<__gnu_cxx::__normal_iterator<std::pair<unsigned_int,unsigned_int>*,std::vector<std::pair<unsigned_int,unsigned_int>,std::allocator < std::pair < unsigned_int,unsigned_int>>> > ,long,std::pair<unsigned_int,unsigned_int>,__gnu_cxx::__ops::_Iter_less_iter > ( param_1,0,(long)param_2 - (long)param_1 >> 3,uVar12 );
      }
 while ( 8 < (long)param_2 - (long)param_1 );
      return;
   }

   LAB_00100df0:uVar4 = param_1[2];
   param_3 = param_3 + -1;
   puVar5 = param_1 + ( lVar3 >> 4 ) * 2;
   uVar7 = *puVar5;
   param_2 = puVar1;
   puVar9 = puVar10;
   if (( uVar4 < uVar7 ) || ( ( uVar4 == uVar7 && ( param_1[3] < puVar5[1] ) ) )) {
      uVar8 = puVar10[-2];
      if (( uVar7 < uVar8 ) || ( ( uVar7 == uVar8 && ( puVar5[1] < puVar10[-1] ) ) )) {
         LAB_00100e40:uVar4 = *param_1;
         *param_1 = uVar7;
         *puVar5 = uVar4;
         uVar7 = param_1[1];
         param_1[1] = puVar5[1];
         puVar5[1] = uVar7;
         uVar4 = *param_1;
         goto LAB_00100e68;
      }

      if (( uVar4 < uVar8 ) || ( ( uVar4 == uVar8 && ( param_1[3] < puVar10[-1] ) ) )) goto LAB_00100f3c;
      uVar12 = *(undefined8*)param_1;
      uVar7 = param_1[3];
   }
 else {
      uVar8 = puVar10[-2];
      if (uVar8 <= uVar4) {
         if (uVar4 == uVar8) {
            if (param_1[3] < puVar10[-1]) goto LAB_00100ef5;
            if (uVar8 <= uVar7) goto LAB_00101057;
         }
 else if (uVar8 <= uVar7) {
            if (uVar7 != uVar8) goto LAB_00100e40;
            LAB_00101057:if (puVar10[-1] <= puVar5[1]) goto LAB_00100e40;
         }

         LAB_00100f3c:uVar7 = *param_1;
         *param_1 = uVar8;
         puVar10[-2] = uVar7;
         uVar7 = param_1[1];
         param_1[1] = puVar10[-1];
         puVar10[-1] = uVar7;
         uVar4 = *param_1;
         goto LAB_00100e68;
      }

      LAB_00100ef5:uVar12 = *(undefined8*)param_1;
      uVar7 = param_1[3];
   }

   *(ulong*)param_1 = CONCAT44(uVar7, uVar4);
   *(undefined8*)( param_1 + 2 ) = uVar12;
   LAB_00100e68:do {
      uVar7 = *param_2;
      bVar11 = uVar7 == uVar4;
      puVar5 = param_2;
      if (uVar4 <= uVar7) {
         do {
            if (( bVar11 ) && ( puVar5 = param_2 ),param_2[1] < param_1[1]) break;
            do {
               do {
                  puVar2 = puVar9;
                  puVar9 = puVar2 + -2;
                  uVar8 = *puVar9;
               }
 while ( uVar4 < uVar8 );
            }
 while ( ( uVar8 == uVar4 ) && ( param_1[1] < puVar2[-1] ) );
            if (puVar9 <= param_2) {
               __introsort_loop<__gnu_cxx::__normal_iterator<std::pair<unsigned_int,unsigned_int>*,std::vector<std::pair<unsigned_int,unsigned_int>,std::allocator < std::pair < unsigned_int,unsigned_int>>> > ,long,__gnu_cxx::__ops::_Iter_less_iter > ( param_2,puVar10,param_3 );
               lVar3 = (long)param_2 - (long)param_1;
               if (lVar3 < 0x81) {
                  return;
               }

               puVar10 = param_2;
               if (param_3 == 0) goto LAB_00100fa4;
               goto LAB_00100df0;
            }

            *param_2 = uVar8;
            puVar5 = param_2 + 2;
            *puVar9 = uVar7;
            uVar7 = param_2[1];
            param_2[1] = puVar2[-1];
            puVar2[-1] = uVar7;
            uVar4 = *param_1;
            uVar7 = *puVar5;
            bVar11 = uVar7 == uVar4;
            param_2 = puVar5;
         }
 while ( uVar4 <= uVar7 );
      }

      param_2 = puVar5 + 2;
   }
 while ( true );
}
/* std::_Hashtable<std::__cxx11::string, std::pair<std::__cxx11::string const, unsigned int>,
   std::allocator<std::pair<std::__cxx11::string const, unsigned int> >, std::__detail::_Select1st,
   std::equal_to<std::__cxx11::string >, std::hash<std::__cxx11::string >,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<true, false, true>
   >::_M_rehash_aux(unsigned long, std::integral_constant<bool, true>) [clone .isra.0] */void std::_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,unsigned_int>,std::allocator<std::pair<std::__cxx11::string_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_rehash_aux(undefined8 *param_1, ulong param_2) {
   long *plVar1;
   long *plVar2;
   ulong uVar3;
   undefined8 *__s;
   long *plVar4;
   ulong uVar5;
   if (param_2 == 1) {
      __s = param_1 + 6;
      param_1[6] = 0;
   }
 else {
      if (param_2 >> 0x3c != 0) {
         if (param_2 >> 0x3d != 0) {
            std::__throw_bad_array_new_length();
         }

         /* WARNING: Subroutine does not return */
         std::__throw_bad_alloc();
      }

      __s = (undefined8*)operator_new(param_2 * 8);
      memset(__s, 0, param_2 * 8);
   }

   plVar4 = (long*)param_1[2];
   param_1[2] = 0;
   if (plVar4 != (long*)0x0) {
      uVar5 = 0;
      do {
         while (true) {
            plVar2 = (long*)*plVar4;
            uVar3 = plVar4[6];
            plVar1 = __s + uVar3 % param_2;
            if ((long*)*plVar1 != (long*)0x0) break;
            *plVar4 = param_1[2];
            param_1[2] = plVar4;
            *plVar1 = (long)( param_1 + 2 );
            if (*plVar4 != 0) {
               __s[uVar5] = plVar4;
            }

            plVar4 = plVar2;
            uVar5 = uVar3 % param_2;
            if (plVar2 == (long*)0x0) goto LAB_00101124;
         }
;
         *plVar4 = *(long*)*plVar1;
         *(long**)*plVar1 = plVar4;
         plVar4 = plVar2;
      }
 while ( plVar2 != (long*)0x0 );
   }

   LAB_00101124:if ((undefined8*)*param_1 != param_1 + 6) {
      operator_delete((undefined8*)*param_1, param_1[1] << 3);
   }

   param_1[1] = param_2;
   *param_1 = __s;
   return;
}
/* void std::__cxx11::string::_M_construct<char*>(char*, char*, std::forward_iterator_tag) [clone
   .isra.0] */void std::__cxx11::string::_M_construct<char*>(ulong *param_1, undefined1 *param_2, long param_3) {
   undefined1 *__dest;
   ulong __n;
   long in_FS_OFFSET;
   ulong local_28;
   long local_20;
   __n = param_3 - (long)param_2;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = __n;
   if (__n < 0x10) {
      __dest = (undefined1*)*param_1;
      if (__n == 1) {
         *__dest = *param_2;
         __dest = (undefined1*)*param_1;
         goto LAB_001011c4;
      }

      if (__n == 0) goto LAB_001011c4;
   }
 else {
      __dest = (undefined1*)std::__cxx11::string::_M_create(param_1, ( ulong ) & local_28);
      *param_1 = (ulong)__dest;
      param_1[2] = local_28;
   }

   memcpy(__dest, param_2, __n);
   __dest = (undefined1*)*param_1;
   LAB_001011c4:param_1[1] = local_28;
   __dest[local_28] = 0;
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* std::_Rb_tree<unsigned int, std::pair<unsigned int const, std::vector<unsigned int,
   std::allocator<unsigned int> > >, std::_Select1st<std::pair<unsigned int const,
   std::vector<unsigned int, std::allocator<unsigned int> > > >, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, std::vector<unsigned int, std::allocator<unsigned
   int> > > > >::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const, std::vector<unsigned int,
   std::allocator<unsigned int> > > >*) [clone .isra.0] */void std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>,std::_Select1st<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>>::_M_erase(_Rb_tree_node *param_1) {
   void *pvVar1;
   _Rb_tree_node *p_Var2;
   if (param_1 == (_Rb_tree_node*)0x0) {
      return;
   }

   do {
      _M_erase(*(_Rb_tree_node**)( param_1 + 0x18 ));
      pvVar1 = *(void**)( param_1 + 0x28 );
      p_Var2 = *(_Rb_tree_node**)( param_1 + 0x10 );
      if (pvVar1 != (void*)0x0) {
         operator_delete(pvVar1, *(long*)( param_1 + 0x38 ) - (long)pvVar1);
      }

      operator_delete(param_1, 0x40);
      param_1 = p_Var2;
   }
 while ( p_Var2 != (_Rb_tree_node*)0x0 );
   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__insertion_sort<__gnu_cxx::__normal_iterator<std::pair<unsigned int, unsigned int>*,
   std::vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int,
   unsigned int> > > >,
   __gnu_cxx::__ops::_Iter_less_iter>(__gnu_cxx::__normal_iterator<std::pair<unsigned int, unsigned
   int>*, std::vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int,
   unsigned int> > > >, __gnu_cxx::__normal_iterator<std::pair<unsigned int, unsigned int>*,
   std::vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int,
   unsigned int> > > >, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */void std::__insertion_sort<__gnu_cxx::__normal_iterator<std::pair<unsigned_int,unsigned_int>*,std::vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>>,__gnu_cxx::__ops::_Iter_less_iter>(uint *param_1, uint *param_2) {
   undefined8 uVar1;
   uint uVar2;
   uint uVar3;
   uint *puVar4;
   uint uVar5;
   ulong uVar6;
   uint *puVar7;
   uint *puVar8;
   bool bVar9;
   uint uVar10;
   if (( param_1 == param_2 ) || ( puVar7 = param_2 == puVar7 )) {
      return;
   }

   puVar8 = param_1 + 4;
   LAB_001012fa:while (true) {
      uVar1 = *(undefined8*)puVar7;
      uVar5 = (uint)uVar1;
      if (( *param_1 <= uVar5 ) && ( ( uVar10 = ( uint )((ulong)uVar1 >> 0x20) ),puVar4 = puVar7,*param_1 != uVar5 || ( param_1[1] <= uVar10 ) )) break;
      uVar6 = 0;
      puVar4 = puVar7;
      if (0 < (long)puVar7 - (long)param_1) {
         do {
            uVar6 = uVar6 + 1;
            *(undefined8*)puVar4 = *(undefined8*)( puVar4 + -2 );
            puVar4 = puVar4 + -2;
         }
 while ( uVar6 < ( ulong )((long)puVar7 - (long)param_1 >> 3) );
      }

      *(undefined8*)param_1 = uVar1;
      puVar7 = puVar7 + 2;
      bVar9 = param_2 == puVar8;
      puVar8 = puVar8 + 2;
      if (bVar9) {
         return;
      }

   }
;
   do {
      uVar2 = puVar4[-2];
      if (uVar5 < uVar2) {
         uVar3 = puVar4[-1];
      }
 else if (( uVar5 != uVar2 ) || ( uVar3 = uVar3 <= uVar10 )) break;
      *(ulong*)puVar4 = CONCAT44(uVar3, uVar2);
      puVar4 = puVar4 + -2;
   }
 while ( true );
   *(undefined8*)puVar4 = uVar1;
   puVar7 = puVar7 + 2;
   bVar9 = param_2 == puVar8;
   puVar8 = puVar8 + 2;
   if (bVar9) {
      return;
   }

   goto LAB_001012fa;
}
/* std::_Function_handler<bool (spv::Op, unsigned int),
   spv::spirvbin_t::mapFnBodies()::{lambda(spv::Op, unsigned int)#1}>::_M_invoke(std::_Any_data
   const&, spv::Op&&, unsigned int&&) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::mapFnBodies()::{lambda(spv::Op,unsigned_int)#1}>::_M_invoke(_Any_data *param_1, Op *param_2, uint *param_3) {
   uint uVar1;
   undefined8 *puVar2;
   uint *puVar3;
   uint *__src;
   void *__dest;
   ulong uVar4;
   ulong uVar5;
   long lVar6;
   size_t __n;
   puVar2 = *(undefined8**)param_1;
   uVar1 = *param_3;
   puVar3 = (uint*)puVar2[1];
   if (puVar3 != (uint*)puVar2[2]) {
      *puVar3 = uVar1;
      puVar2[1] = puVar3 + 1;
      return 1;
   }

   __src = (uint*)*puVar2;
   __n = (long)puVar3 - (long)__src;
   uVar5 = (long)__n >> 2;
   if (uVar5 == 0x1fffffffffffffff) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   if (puVar3 == __src) {
      if (0xfffffffffffffffe < uVar5) goto LAB_00101470;
      uVar4 = 0x1fffffffffffffff;
      if (uVar5 + 1 < 0x2000000000000000) {
         uVar4 = uVar5 + 1;
      }

      uVar4 = uVar4 << 2;
      LAB_0010145e:__dest = operator_new(uVar4);
      lVar6 = uVar4 + (long)__dest;
   }
 else {
      uVar4 = uVar5 * 2;
      if (uVar4 < uVar5) {
         LAB_00101470:uVar4 = 0x7ffffffffffffffc;
         goto LAB_0010145e;
      }

      if (uVar4 != 0) {
         if (0x1fffffffffffffff < uVar4) {
            uVar4 = 0x1fffffffffffffff;
         }

         uVar4 = uVar4 * 4;
         goto LAB_0010145e;
      }

      lVar6 = 0;
      __dest = (void*)0x0;
   }

   *(uint*)( (long)__dest + __n ) = uVar1;
   if ((long)__n < 1) {
      if (__src == (uint*)0x0) goto LAB_00101408;
      uVar5 = puVar2[2] - (long)__src;
   }
 else {
      memmove(__dest, __src, __n);
      uVar5 = puVar2[2] - (long)__src;
   }

   operator_delete(__src, uVar5);
   LAB_00101408:*puVar2 = __dest;
   puVar2[1] = (long)__dest + __n + 4;
   puVar2[2] = lVar6;
   return 1;
}
/* std::_Hashtable<unsigned int, unsigned int, std::allocator<unsigned int>,
   std::__detail::_Identity, std::equal_to<unsigned int>, std::hash<unsigned int>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, true, true>
   >::find(unsigned int const&) const [clone .isra.0] */undefined8 * __thiscallstd::_Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::find(_Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>> * this, uint * param_1) * puVar2 ;undefined8 *puVar3undefined8 *puVar4ulong uVar5if (*(long*)( this + 0x18 ) == 0) {
   for (puVar4 = *(undefined8**)( this + 0x10 ); ( puVar4 != (undefined8*)0x0 && ( *(uint*)( puVar4 + 1 ) != (uint)param_1 ) ); puVar4 = (undefined8*)*puVar4) {}
}
 else {
   uVar5 = ( (ulong)param_1 & 0xffffffff ) % *(ulong*)( this + 8 );
   puVar4 = *(undefined8**)( *(long*)this + uVar5 * 8 );
   if (puVar4 != (undefined8*)0x0) {
      uVar1 = *(uint*)( (undefined8*)*puVar4 + 1 );
      puVar3 = (undefined8*)*puVar4;
      do {
         if ((uint)param_1 == uVar1) {
            return (undefined8*)*puVar4;
         }

         puVar2 = (undefined8*)*puVar3;
      }
 while ( ( puVar2 != (undefined8*)0x0 ) && ( uVar1 = *(uint*)( puVar2 + 1 ) ),puVar4 = puVar3,puVar3 = puVar2,uVar5 == (ulong)uVar1 % *(ulong*)( this + 8 ) );
      puVar4 = (undefined8*)0x0;
   }

}
return puVar4;}/* std::_Function_handler<void (unsigned int&), spv::spirvbin_t::optLoadStore()::{lambda(unsigned
   int&)#1}>::_M_invoke(std::_Any_data const&, unsigned int&) */void std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::optLoadStore()::{lambda(unsigned_int&)#1}>::_M_invoke(_Any_data *param_1, uint *param_2) {
   long lVar1;
   _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>> *this;
   this * (_Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>**)param_1;
   lVar1 = _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::find(this, (uint*)( ulong ) * param_2);
   if (lVar1 != 0) {
      _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::_M_erase(this);
      _Hashtable<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_erase(*(undefined8*)( param_1 + 8 ), *param_2);
      return;
   }

   return;
}
/* std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int>
   >::_M_erase(std::_Rb_tree_node<int>*) [clone .isra.0] */void std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(_Rb_tree_node *param_1) {
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
                                 operator_delete(pvVar2, 0x28);
                                 pvVar2 = pvVar1;
                              }
;
                              pvVar2 = *(void**)( (long)pvVar6 + 0x10 );
                              operator_delete(pvVar6, 0x28);
                              pvVar6 = pvVar2;
                           }
;
                           pvVar6 = *(void**)( (long)pvVar4 + 0x10 );
                           operator_delete(pvVar4, 0x28);
                           pvVar4 = pvVar6;
                        }
;
                        pvVar4 = *(void**)( (long)pvVar3 + 0x10 );
                        operator_delete(pvVar3, 0x28);
                        pvVar3 = pvVar4;
                     }
;
                     pvVar3 = *(void**)( (long)pvVar5 + 0x10 );
                     operator_delete(pvVar5, 0x28);
                     pvVar5 = pvVar3;
                  }
;
                  pvVar5 = *(void**)( (long)pvVar7 + 0x10 );
                  operator_delete(pvVar7, 0x28);
                  pvVar7 = pvVar5;
               }
;
               pvVar7 = *(void**)( (long)pvVar8 + 0x10 );
               operator_delete(pvVar8, 0x28);
               pvVar8 = pvVar7;
            }
;
            pvVar8 = *(void**)( (long)pvVar10 + 0x10 );
            operator_delete(pvVar10, 0x28);
            pvVar10 = pvVar8;
         }
;
         p_Var9 = *(_Rb_tree_node**)( local_48 + 0x10 );
         operator_delete(local_48, 0x28);
         local_48 = p_Var9;
      }
 while ( p_Var9 != (_Rb_tree_node*)0x0 );
   }

   return;
}
/* std::_Hashtable<unsigned int, std::pair<unsigned int const, int>,
   std::allocator<std::pair<unsigned int const, int> >, std::__detail::_Select1st,
   std::equal_to<unsigned int>, std::hash<unsigned int>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true> >::find(unsigned int const&) [clone .isra.0]
    */undefined8 * __thiscallstd::_Hashtable<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find(_Hashtable<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> * this, uint * param_1) * puVar2 ;undefined8 *puVar3undefined8 *puVar4ulong uVar5if (*(long*)( this + 0x18 ) == 0) {
   for (puVar4 = *(undefined8**)( this + 0x10 ); ( puVar4 != (undefined8*)0x0 && ( *(uint*)( puVar4 + 1 ) != (uint)param_1 ) ); puVar4 = (undefined8*)*puVar4) {}
}
 else {
   uVar5 = ( (ulong)param_1 & 0xffffffff ) % *(ulong*)( this + 8 );
   puVar4 = *(undefined8**)( *(long*)this + uVar5 * 8 );
   if (puVar4 != (undefined8*)0x0) {
      uVar1 = *(uint*)( (undefined8*)*puVar4 + 1 );
      puVar3 = (undefined8*)*puVar4;
      do {
         if ((uint)param_1 == uVar1) {
            return (undefined8*)*puVar4;
         }

         puVar2 = (undefined8*)*puVar3;
      }
 while ( ( puVar2 != (undefined8*)0x0 ) && ( uVar1 = *(uint*)( puVar2 + 1 ) ),puVar4 = puVar3,puVar3 = puVar2,uVar5 == (ulong)uVar1 % *(ulong*)( this + 8 ) );
      puVar4 = (undefined8*)0x0;
   }

}
return puVar4;}/* std::_Function_handler<bool (spv::Op, unsigned int),
   spv::spirvbin_t::dceFuncs()::{lambda(spv::Op, unsigned int)#1}>::_M_invoke(std::_Any_data const&,
   spv::Op&&, unsigned int&&) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::dceFuncs()::{lambda(spv::Op,unsigned_int)#1}>::_M_invoke(_Any_data *param_1, Op *param_2, uint *param_3) {
   long *plVar1;
   long lVar2;
   long lVar3;
   int iVar4;
   long *plVar5;
   long *plVar6;
   long *plVar7;
   ulong uVar8;
   ulong uVar9;
   long lVar10;
   if (*(int*)param_2 != 0x39) {
      return 1;
   }

   lVar2 = *(long*)param_1;
   plVar5 = (long*)_Hashtable<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find((_Hashtable<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>*)( lVar2 + 0xc0 ), (uint*)( ulong ) * (uint*)( *(long*)( lVar2 + 8 ) + ( ulong )(*param_3 + 3) * 4 ));
   if (plVar5 == (long*)0x0) {
      return 1;
   }

   iVar4 = *(int*)( (long)plVar5 + 0xc ) + -1;
   *(int*)( (long)plVar5 + 0xc ) = iVar4;
   if (0 < iVar4) {
      return 1;
   }

   uVar9 = *(ulong*)( lVar2 + 200 );
   lVar3 = *(long*)( lVar2 + 0xc0 );
   uVar8 = ( ulong ) * (uint*)( plVar5 + 1 ) % uVar9;
   plVar1 = (long*)( lVar3 + uVar8 * 8 );
   plVar7 = (long*)*plVar1;
   do {
      plVar6 = plVar7;
      plVar7 = (long*)*plVar6;
   }
 while ( plVar5 != (long*)*plVar6 );
   lVar10 = *plVar5;
   if ((long*)*plVar1 == plVar6) {
      plVar7 = plVar6;
      if (lVar10 != 0) {
         uVar9 = ( ulong ) * (uint*)( lVar10 + 8 ) % uVar9;
         if (uVar8 == uVar9) goto LAB_00101895;
         *(long**)( lVar3 + uVar9 * 8 ) = plVar6;
         plVar7 = (long*)*plVar1;
      }

      if (plVar7 == (long*)( lVar2 + 0xd0 )) {
         *(long*)( lVar2 + 0xd0 ) = lVar10;
      }

      *plVar1 = 0;
      lVar10 = *plVar5;
   }
 else if (( lVar10 != 0 ) && ( uVar9 = uVar8 != uVar9 )) {
      *(long**)( lVar3 + uVar9 * 8 ) = plVar6;
      lVar10 = *plVar5;
   }

   LAB_00101895:*plVar6 = lVar10;
   operator_delete(plVar5, 0x10);
   *(long*)( lVar2 + 0xd8 ) = *(long*)( lVar2 + 0xd8 ) + -1;
   return 1;
}
/* std::_Hashtable<unsigned int, std::pair<unsigned int const, unsigned int>,
   std::allocator<std::pair<unsigned int const, unsigned int> >, std::__detail::_Select1st,
   std::equal_to<unsigned int>, std::hash<unsigned int>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true> >::find(unsigned int const&) [clone .isra.0]
    */undefined8 * __thiscallstd::_Hashtable<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find(_Hashtable<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> * this, uint * param_1) * puVar2 ;undefined8 *puVar3undefined8 *puVar4ulong uVar5if (*(long*)( this + 0x18 ) == 0) {
   for (puVar4 = *(undefined8**)( this + 0x10 ); ( puVar4 != (undefined8*)0x0 && ( *(uint*)( puVar4 + 1 ) != (uint)param_1 ) ); puVar4 = (undefined8*)*puVar4) {}
}
 else {
   uVar5 = ( (ulong)param_1 & 0xffffffff ) % *(ulong*)( this + 8 );
   puVar4 = *(undefined8**)( *(long*)this + uVar5 * 8 );
   if (puVar4 != (undefined8*)0x0) {
      uVar1 = *(uint*)( (undefined8*)*puVar4 + 1 );
      puVar3 = (undefined8*)*puVar4;
      do {
         if ((uint)param_1 == uVar1) {
            return (undefined8*)*puVar4;
         }

         puVar2 = (undefined8*)*puVar3;
      }
 while ( ( puVar2 != (undefined8*)0x0 ) && ( uVar1 = *(uint*)( puVar2 + 1 ) ),puVar4 = puVar3,puVar3 = puVar2,uVar5 == (ulong)uVar1 % *(ulong*)( this + 8 ) );
      puVar4 = (undefined8*)0x0;
   }

}
return puVar4;}/* spv::spirvbin_t::msg(int, int, std::__cxx11::string const&) const [clone .part.0] */void spv::spirvbin_t::msg(int param_1, int param_2, string *param_3) {
   long *plVar1;
   ulong uVar2;
   long *plVar3;
   uint uVar4;
   ulong uVar5;
   long *plVar7;
   undefined4 in_register_00000034;
   long lVar8;
   long *plVar9;
   long in_FS_OFFSET;
   bool bVar10;
   long *local_68;
   long local_60;
   long local_58[2];
   long *local_48;
   long local_40;
   long local_38[4];
   ulong uVar6;
   local_38[3] = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = local_58;
   std::__cxx11::string::_M_construct(( ulong ) & local_68, (char)param_1);
   if (0x3fffffffffffffffU - local_60 < ( (ulong*)CONCAT44(in_register_00000034, param_2) )[1]) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::append");
   }

   plVar3 = (long*)std::__cxx11::string::_M_append((char*)&local_68, *(ulong*)CONCAT44(in_register_00000034, param_2));
   plVar1 = plVar3 + 2;
   if ((long*)*plVar3 == plVar1) {
      uVar2 = plVar3[1] + 1;
      plVar7 = plVar1;
      plVar9 = local_38;
      if (7 < (uint)uVar2) {
         uVar5 = 0;
         do {
            uVar4 = (int)uVar5 + 8;
            uVar6 = (ulong)uVar4;
            *(undefined8*)( (long)local_38 + uVar5 ) = *(undefined8*)( (long)plVar1 + uVar5 );
            uVar5 = uVar6;
         }
 while ( uVar4 < ( (uint)uVar2 & 0xfffffff8 ) );
         plVar9 = (long*)( (long)local_38 + uVar6 );
         plVar7 = (long*)( uVar6 + (long)plVar1 );
      }

      lVar8 = 0;
      if (( uVar2 & 4 ) != 0) {
         *(int*)plVar9 = (int)*plVar7;
         lVar8 = 4;
      }

      if (( uVar2 & 2 ) != 0) {
         *(undefined2*)( (long)plVar9 + lVar8 ) = *(undefined2*)( (long)plVar7 + lVar8 );
         lVar8 = lVar8 + 2;
      }

      local_48 = local_38;
      if (( uVar2 & 1 ) != 0) {
         *(undefined1*)( (long)plVar9 + lVar8 ) = *(undefined1*)( (long)plVar7 + lVar8 );
      }

   }
 else {
      local_38[0] = plVar3[2];
      local_48 = (long*)*plVar3;
   }

   local_40 = plVar3[1];
   *(undefined1*)( plVar3 + 2 ) = 0;
   bVar10 = logHandler_abi_cxx11_._16_8_ != 0;
   *plVar3 = (long)plVar1;
   plVar3[1] = 0;
   if (bVar10) {
      ( *(code*)logHandler_abi_cxx11_._24_8_ )(logHandler_abi_cxx11_, &local_48);
      if (local_48 != local_38) {
         operator_delete(local_48, local_38[0] + 1);
      }

      if (local_68 != local_58) {
         operator_delete(local_68, local_58[0] + 1);
      }

      if (local_38[3] == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Subroutine does not return */
   std::__throw_bad_function_call();
}
/* spv::spirvbin_t::msg(int, int, std::__cxx11::string const&) const */void spv::spirvbin_t::msg(spirvbin_t *this, int param_1, int param_2, string *param_3) {
   undefined4 in_register_00000014;
   if (*(int*)( this + 0x1d4 ) < param_1) {
      return;
   }

   msg(param_2, (int)param_3, (string*)CONCAT44(in_register_00000014, param_2));
   return;
}
/* spv::spirvbin_t::asOpCodeHash(unsigned int) */int spv::spirvbin_t::asOpCodeHash(spirvbin_t *this, uint param_1) {
   ushort uVar1;
   int iVar2;
   iVar2 = 0;
   uVar1 = *(ushort*)( *(long*)( this + 8 ) + (ulong)param_1 * 4 );
   if (uVar1 == 0xc) {
      iVar2 = *(int*)( *(long*)( this + 8 ) + ( ulong )(param_1 + 4) * 4 );
   }

   return (uint)uVar1 * 0x13 + iVar2;
}
/* spv::spirvbin_t::literalRange(spv::Op) const */ulong spv::spirvbin_t::literalRange(undefined8 param_1, undefined4 param_2) {
   uint uVar1;
   long lVar2;
   switch (param_2) {
      case 0x15:
    uVar1 = 2;
    lVar2 = 4;
    break;
      case 0x16:
      case 0x20:
    return 0x300000002;
      case 0x17:
      case 0x18:
      case 0x26:
    return 0x400000003;
      default:
    uVar1 = 0;
    lVar2 = 0;
    break;
      case 0x1a:
    return 0x800000003;
      case 0x2b:
    return 0x4000000000000003;
   }

   return (ulong)uVar1 | lVar2 << 0x20;
}
/* spv::spirvbin_t::typeRange(spv::Op) const */ulong spv::spirvbin_t::typeRange(spirvbin_t *this, uint param_2) {
   uint uVar1;
   ulong uVar2;
   long lVar3;
   long in_FS_OFFSET;
   bool bVar4;
   long *local_48[2];
   long local_38[3];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == 0x2d) {
      local_48[0] = local_38;
      std::__cxx11::string::_M_construct<char_const*>(local_48, "unimplemented constant type");
      bVar4 = errorHandler_abi_cxx11_._16_8_ == 0;
      this[0x1d8] = (spirvbin_t)0x1;
      if (bVar4) {
         /* WARNING: Subroutine does not return */
         std::__throw_bad_function_call();
      }

      ( *(code*)errorHandler_abi_cxx11_._24_8_ )(errorHandler_abi_cxx11_, local_48);
      if (local_48[0] != local_38) {
         operator_delete(local_48[0], local_38[0] + 1);
      }

   }
 else if (param_2 < 0x2e) {
      if (3 < param_2 - 0x29) {
         if (param_2 < 0x27) {
            uVar2 = 1L << ( (byte)param_2 & 0x3f );
            if (( uVar2 & 0x4035800000 ) == 0) {
               if (( uVar2 & 0x240000000 ) == 0) {
                  uVar1 = ( uint )(param_2 == 0x20) * 3;
                  lVar3 = ( ulong )(param_2 == 0x20) << 2;
               }
 else {
                  uVar1 = 2;
                  lVar3 = 0x40000000;
               }

            }
 else {
               uVar1 = 2;
               lVar3 = 3;
            }

            goto LAB_00101c4a;
         }

         goto LAB_00101d40;
      }

   }
 else if (param_2 != 0x2e) {
      LAB_00101d40:uVar1 = 0;
      lVar3 = 0;
      goto LAB_00101c4a;
   }

   uVar1 = 1;
   lVar3 = 2;
   LAB_00101c4a:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (ulong)uVar1 | lVar3 << 0x20;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::spirvbin_t::constRange(spv::Op) const */ulong spv::spirvbin_t::constRange(undefined8 param_1, uint param_2) {
   long lVar1;
   if (0x1d < param_2) {
      lVar1 = 0;
      if (param_2 == 0x2c) {
         lVar1 = 0x40000000;
      }

      return ( ulong )(( uint )(param_2 == 0x2c) * 3) | lVar1 << 0x20;
   }

   return CONCAT44(~-(uint)(param_2 < 0x1c), ~-(uint)(param_2 < 0x1c)) & 0x400000003;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* spv::spirvbin_t::idTypeSizeInWords(unsigned int) const */undefined4 spv::spirvbin_t::idTypeSizeInWords(spirvbin_t *this, uint param_1) {
   uint uVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long lVar4;
   undefined8 uVar5;
   undefined4 uVar6;
   undefined8 *puVar7;
   ulong uVar8;
   long in_FS_OFFSET;
   bool bVar9;
   long local_50;
   long *local_48;
   long local_40;
   long local_38[3];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x178 ) == 0) {
      for (puVar7 = *(undefined8**)( this + 0x170 ); puVar7 != (undefined8*)0x0; puVar7 = (undefined8*)*puVar7) {
         if (*(uint*)( puVar7 + 1 ) == param_1) goto LAB_00101e21;
      }

   }
 else {
      uVar8 = (ulong)param_1 % *(ulong*)( this + 0x168 );
      puVar7 = *(undefined8**)( *(long*)( this + 0x160 ) + uVar8 * 8 );
      if (puVar7 != (undefined8*)0x0) {
         uVar1 = *(uint*)( (undefined8*)*puVar7 + 1 );
         puVar3 = (undefined8*)*puVar7;
         while (uVar1 != param_1) {
            puVar2 = (undefined8*)*puVar3;
            if (( puVar2 == (undefined8*)0x0 ) || ( uVar1 = *(uint*)( puVar2 + 1 ) ),puVar7 = puVar3,puVar3 = puVar2,uVar8 != (ulong)uVar1 % *(ulong*)( this + 0x168 )) goto LAB_00101ea0;
         }
;
         puVar7 = (undefined8*)*puVar7;
         if (puVar7 != (undefined8*)0x0) goto LAB_00101e21;
      }

   }

   LAB_00101ea0:local_50 = 0x1a;
   local_48 = local_38;
   local_48 = (long*)std::__cxx11::string::_M_create((ulong*)&local_48, ( ulong ) & local_50);
   lVar4 = _UNK_0010e258;
   local_38[0] = local_50;
   *local_48 = __LC3;
   local_48[1] = lVar4;
   uVar5 = _UNK_0010e268;
   *(undefined8*)( (long)local_48 + 10 ) = __LC4;
   *(undefined8*)( (long)local_48 + 0x12 ) = uVar5;
   local_40 = local_50;
   *(undefined1*)( (long)local_48 + local_50 ) = 0;
   bVar9 = errorHandler_abi_cxx11_._16_8_ == 0;
   this[0x1d8] = (spirvbin_t)0x1;
   if (bVar9) {
      /* WARNING: Subroutine does not return */
      std::__throw_bad_function_call();
   }

   ( *(code*)errorHandler_abi_cxx11_._24_8_ )(errorHandler_abi_cxx11_, &local_48);
   if (local_48 != local_38) {
      operator_delete(local_48, local_38[0] + 1);
   }

   uVar6 = 0;
   LAB_00101e24:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
   LAB_00101e21:uVar6 = *(undefined4*)( (long)puVar7 + 0xc );
   goto LAB_00101e24;
}
/* spv::spirvbin_t::isFlowCtrl(spv::Op) const */bool spv::spirvbin_t::isFlowCtrl(undefined8 param_1, uint param_2) {
   if (param_2 == 0x38) {
      return true;
   }

   if (param_2 < 0x39) {
      return param_2 == 0x36;
   }

   return param_2 - 0xf6 < 6;
}
/* spv::spirvbin_t::isTypeOp(spv::Op) const */bool spv::spirvbin_t::isTypeOp(undefined8 param_1, int param_2) {
   return param_2 - 0x13U < 0x14;
}
/* spv::spirvbin_t::isConstOp(spv::Op) const */bool spv::spirvbin_t::isConstOp(spirvbin_t *this, uint param_2) {
   long in_FS_OFFSET;
   bool bVar1;
   long *local_48[2];
   long local_38[3];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == 0x2d) {
      local_48[0] = local_38;
      std::__cxx11::string::_M_construct<char_const*>(local_48, "unimplemented constant type");
      bVar1 = errorHandler_abi_cxx11_._16_8_ == 0;
      this[0x1d8] = (spirvbin_t)0x1;
      if (bVar1) {
         /* WARNING: Subroutine does not return */
         std::__throw_bad_function_call();
      }

      ( *(code*)errorHandler_abi_cxx11_._24_8_ )(errorHandler_abi_cxx11_, local_48);
      if (local_48[0] != local_38) {
         operator_delete(local_48[0], local_38[0] + 1);
      }

      bVar1 = true;
   }
 else if (param_2 < 0x2e) {
      bVar1 = param_2 - 0x29 < 4;
   }
 else {
      bVar1 = param_2 == 0x2e;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::spirvbin_t::literalString[abi:cxx11](unsigned int) const */long *spv::spirvbin_t::literalString_abi_cxx11_(uint param_1) {
   long lVar1;
   ulong uVar2;
   uint uVar3;
   long *plVar4;
   uint in_EDX;
   ulong uVar5;
   long in_RSI;
   undefined4 in_register_0000003c;
   long *plVar6;
   uint *puVar7;
   int iVar8;
   uint uVar9;
   plVar6 = (long*)CONCAT44(in_register_0000003c, param_1);
   *plVar6 = (long)( plVar6 + 2 );
   *(undefined1*)( plVar6 + 2 ) = 0;
   lVar1 = *(long*)( in_RSI + 8 );
   plVar6[1] = 0;
   puVar7 = (uint*)( lVar1 + (ulong)in_EDX * 4 );
   std::__cxx11::string::reserve((ulong)plVar6);
   do {
      if ((char)*puVar7 == '\0') {
         return plVar6;
      }

      iVar8 = 4;
      uVar9 = *puVar7;
      while (true) {
         uVar2 = plVar6[1];
         plVar4 = (long*)*plVar6;
         if (plVar6 + 2 == plVar4) {
            uVar5 = 0xf;
         }
 else {
            uVar5 = plVar6[2];
         }

         if (uVar5 < uVar2 + 1) {
            std::__cxx11::string::_M_mutate((ulong)plVar6, uVar2, (char*)0x0, 0);
            plVar4 = (long*)*plVar6;
         }

         *(char*)( (long)plVar4 + uVar2 ) = (char)uVar9;
         plVar6[1] = uVar2 + 1;
         *(undefined1*)( *plVar6 + 1 + uVar2 ) = 0;
         iVar8 = iVar8 + -1;
         if (iVar8 == 0) break;
         uVar3 = uVar9 >> 8;
         uVar9 = uVar9 >> 8;
         if ((char)uVar3 == '\0') {
            return plVar6;
         }

      }
;
      puVar7 = puVar7 + 1;
   }
 while ( true );
}
/* spv::spirvbin_t::isStripOp(spv::Op, unsigned int) const */undefined8 spv::spirvbin_t::isStripOp(long param_1, uint param_2) {
   long lVar1;
   ulong *puVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   long *local_48[2];
   long local_38[3];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 < 7) {
      uVar3 = 0;
      if (param_2 < 3) goto LAB_0010218b;
   }
 else {
      uVar3 = 0;
      if (param_2 != 8) goto LAB_0010218b;
   }

   literalString_abi_cxx11_((uint)local_48);
   puVar2 = *(ulong**)( param_1 + 0x20 );
   if (puVar2 < *(ulong**)( param_1 + 0x28 )) {
      do {
         lVar1 = std::__cxx11::string::find((char*)local_48, *puVar2, 0);
         if (lVar1 != -1) {
            uVar3 = 0;
            goto LAB_001021fb;
         }

         puVar2 = puVar2 + 4;
      }
 while ( puVar2 < *(ulong**)( param_1 + 0x28 ) );
   }

   uVar3 = 1;
   LAB_001021fb:if (local_48[0] != local_38) {
      operator_delete(local_48[0], local_38[0] + 1);
   }

   LAB_0010218b:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* spv::spirvbin_t::validate() const */void spv::spirvbin_t::validate(spirvbin_t *this) {
   code *pcVar1;
   int *piVar2;
   long lVar3;
   string *extraout_RDX;
   long in_FS_OFFSET;
   bool bVar4;
   long local_a0;
   long *local_98;
   long local_90;
   long local_88[2];
   long *local_78;
   long local_70;
   long local_68[2];
   long *local_58;
   long local_50;
   long local_48[3];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar1 = *(code**)( *(long*)this + 0x10 );
   local_58 = local_48;
   std::__cxx11::string::_M_construct<char_const*>(&local_58, "validating: ");
   if (pcVar1 == msg) {
      if (1 < *(int*)( this + 0x1d4 )) {
         msg(2, (int)&local_58, extraout_RDX);
      }

   }
 else {
      ( *pcVar1 )(this, 2, 2, &local_58);
   }

   if (local_58 != local_48) {
      operator_delete(local_58, local_48[0] + 1);
   }

   piVar2 = *(int**)( this + 8 );
   if (( ulong )(*(long*)( this + 0x10 ) - (long)piVar2) < 0x11) {
      local_a0 = 0x10;
      local_98 = local_88;
      local_98 = (long*)std::__cxx11::string::_M_create((ulong*)&local_98, ( ulong ) & local_a0);
      lVar3 = _UNK_0010e278;
      local_88[0] = local_a0;
      *local_98 = __LC6;
      local_98[1] = lVar3;
      local_90 = local_a0;
      *(undefined1*)( (long)local_98 + local_a0 ) = 0;
      bVar4 = errorHandler_abi_cxx11_._16_8_ == 0;
      this[0x1d8] = (spirvbin_t)0x1;
      if (bVar4) {
         LAB_0010250f:/* WARNING: Subroutine does not return */std::__throw_bad_function_call();
      }

      ( *(code*)errorHandler_abi_cxx11_._24_8_ )(errorHandler_abi_cxx11_, &local_98);
      if (local_98 != local_88) {
         operator_delete(local_98, local_88[0] + 1);
      }

   }
 else if (*piVar2 == 0x7230203) {
      if (piVar2[4] != 0) {
         local_a0 = 0x15;
         local_58 = local_48;
         local_58 = (long*)std::__cxx11::string::_M_create((ulong*)&local_58, ( ulong ) & local_a0);
         lVar3 = _UNK_0010e298;
         local_48[0] = local_a0;
         *local_58 = __LC8;
         local_58[1] = lVar3;
         *(undefined8*)( (long)local_58 + 0xd ) = 0x3020656220747375;
         local_50 = local_a0;
         *(undefined1*)( (long)local_58 + local_a0 ) = 0;
         bVar4 = errorHandler_abi_cxx11_._16_8_ == 0;
         this[0x1d8] = (spirvbin_t)0x1;
         if (bVar4) goto LAB_0010250f;
         ( *(code*)errorHandler_abi_cxx11_._24_8_ )(errorHandler_abi_cxx11_, &local_58);
         if (local_58 != local_48) {
            operator_delete(local_58, local_48[0] + 1);
         }

      }

   }
 else {
      local_a0 = 0x10;
      local_78 = local_68;
      local_78 = (long*)std::__cxx11::string::_M_create((ulong*)&local_78, ( ulong ) & local_a0);
      lVar3 = _UNK_0010e288;
      local_68[0] = local_a0;
      *local_78 = __LC7;
      local_78[1] = lVar3;
      local_70 = local_a0;
      *(undefined1*)( (long)local_78 + local_a0 ) = 0;
      bVar4 = errorHandler_abi_cxx11_._16_8_ == 0;
      this[0x1d8] = (spirvbin_t)0x1;
      if (bVar4) goto LAB_0010250f;
      ( *(code*)errorHandler_abi_cxx11_._24_8_ )(errorHandler_abi_cxx11_, &local_78);
      if (local_78 != local_68) {
         operator_delete(local_78, local_68[0] + 1);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* spv::spirvbin_t::processInstruction(unsigned int, std::function<bool (spv::Op, unsigned int)>,
   std::function<void (unsigned int&)>) */int spv::spirvbin_t::processInstruction(spirvbin_t *this, uint param_1, long param_3, long param_4) {
   int iVar1;
   char cVar2;
   ulong uVar3;
   int iVar4;
   long lVar5;
   ulong uVar6;
   ulong uVar7;
   int iVar8;
   uint uVar9;
   int iVar10;
   uint uVar11;
   long lVar12;
   uint uVar13;
   uint uVar14;
   long in_FS_OFFSET;
   bool bVar15;
   int local_9c;
   uint local_84;
   long local_80;
   uint auStack_78[4];
   long *local_68;
   long local_60;
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar11 = *(uint*)( *(long*)( this + 8 ) + (ulong)param_1 * 4 );
   uVar9 = uVar11 >> 0x10;
   local_9c = param_1 + uVar9;
   if ((int)( *(long*)( this + 0x10 ) - *(long*)( this + 8 ) >> 2 ) < local_9c) {
      local_80 = 0x25;
      local_68 = local_58;
      local_68 = (long*)std::__cxx11::string::_M_create((ulong*)&local_68, ( ulong ) & local_80);
      lVar12 = _UNK_0010e2a8;
      local_58[0] = local_80;
      *local_68 = __LC9;
      local_68[1] = lVar12;
      lVar12 = _UNK_0010e2b8;
      local_68[2] = __LC10;
      local_68[3] = lVar12;
      *(undefined8*)( (long)local_68 + 0x1d ) = 0x796c726165206f6f;
      local_60 = local_80;
      *(undefined1*)( (long)local_68 + local_80 ) = 0;
      bVar15 = errorHandler_abi_cxx11_._16_8_ == 0;
      this[0x1d8] = (spirvbin_t)0x1;
      if (bVar15) {
         LAB_00102a7f:/* WARNING: Subroutine does not return */std::__throw_bad_function_call();
      }

      ( *(code*)errorHandler_abi_cxx11_._24_8_ )(errorHandler_abi_cxx11_, &local_68);
      if (local_68 != local_58) {
         operator_delete(local_68, local_58[0] + 1);
      }

      LAB_00102a72:local_9c = -1;
   }
 else {
      uVar14 = uVar11 & 0xffff;
      local_80 = CONCAT44(local_80._4_4_, param_1);
      uVar13 = uVar11 & 0xffff;
      local_84 = uVar13;
      if (*(long*)( param_3 + 0x10 ) == 0) goto LAB_00102a7f;
      cVar2 = ( **(code**)( param_3 + 0x18 ) )(param_3, &local_84, &local_80);
      if (cVar2 == '\0') {
         if (( ( &__cxxabiv1::__class_type_info::vtable )[(long)(int)uVar13 * 0x70] & 1 ) == 0) {
            iVar10 = uVar9 - 1;
            uVar3 = ( ulong )(param_1 + 1);
         }
 else {
            uVar3 = ( ulong )(param_1 + 2);
            if (*(long*)( param_4 + 0x10 ) == 0) goto LAB_00102a7f;
            iVar10 = uVar9 - 2;
            ( **(code**)( param_4 + 0x18 ) )(param_4, *(long*)( this + 8 ) + ( ulong )(param_1 + 1) * 4);
         }

         uVar6 = uVar3;
         if (( ( &__cxxabiv1::__class_type_info::vtable )[(long)(int)uVar13 * 0x70] & 2 ) != 0) {
            uVar6 = ( ulong )((int)uVar3 + 1);
            if (*(long*)( param_4 + 0x10 ) == 0) goto LAB_00102a7f;
            iVar10 = iVar10 + -1;
            ( **(code**)( param_4 + 0x18 ) )(param_4, *(long*)( this + 8 ) + uVar3 * 4);
         }

         if (( uVar11 & 0xffff ) == 0xc) {
            if (*(long*)( param_4 + 0x10 ) == 0) goto LAB_00102a7f;
            uVar11 = (int)uVar6 + 2;
            ( **(code**)( param_4 + 0x18 ) )(param_4, *(long*)( this + 8 ) + uVar6 * 4);
            if (iVar10 != 2) {
               do {
                  uVar3 = (ulong)uVar11;
                  uVar11 = uVar11 + 1;
                  if (*(long*)( param_4 + 0x10 ) == 0) goto LAB_00102a7f;
                  ( **(code**)( param_4 + 0x18 ) )(param_4, *(long*)( this + 8 ) + uVar3 * 4);
               }
 while ( uVar11 != iVar10 + (int)uVar6 );
            }

         }
 else {
            lVar12 = 0;
            uVar9 = 0;
            if (iVar10 != 0) {
               if (( uVar11 & 0xffff ) == 0x34) goto LAB_001027a1;
               LAB_00102622:lVar5 = (long)(int)uVar14 * 0x70 + 0x10;
               uVar3 = uVar6;
               LAB_00102638:uVar11 = *(uint*)( *(long*)( (long)&InstructionDesc + lVar5 ) + lVar12 * 4 );
               if (9 < uVar11) goto LAB_001027f0;
               LAB_00102649:iVar8 = (int)uVar3;
               switch (uVar11) {
                  case 1:
switchD_00102661_caseD_1:
            uVar6 = (ulong)((int)uVar3 + 1);
            uVar7 = (ulong)uVar9;
            lVar5 = *(long *)(param_4 + 0x10);
            uVar9 = uVar9 + 1 & 3;
            auStack_78[uVar7] = *(uint *)(*(long *)(this + 8) + uVar3 * 4);
            if (lVar5 != 0) {
              (**(code **)(param_4 + 0x18))(param_4);
              iVar10 = iVar10 + -1;
              if (iVar10 != 0) {
                do {
                  lVar12 = lVar12 + 1;
                  if (uVar14 != 0x34) goto LAB_00102622;
LAB_001027a1:
                  lVar5 = 0x16d0;
                  uVar3 = uVar6;
                  if (lVar12 != 0) goto LAB_00102638;
                  iVar10 = iVar10 + -1;
                  uVar3 = (ulong)((int)uVar6 + 1);
                  uVar14 = (uint)*(ushort *)(*(long *)(this + 8) + uVar6 * 4);
                  uVar11 = **(uint **)(std::__cxx11::string::_M_replace + (ulong)uVar14 * 0x70);
                  if (uVar11 < 10) goto LAB_00102649;
LAB_001027f0:
                  iVar8 = (int)uVar3;
                  if (uVar11 - 10 < 0x20) {
                    uVar6 = 1L << ((byte)uVar11 & 0x3f);
                    if ((uVar6 & 0x3ebffff7800) == 0) {
                      if ((uVar6 & 0x8400) != 0) break;
                      if ((uVar6 & 0x1400000000) == 0) goto switchD_00102661_caseD_3;
                      goto switchD_00102661_caseD_1;
                    }
switchD_00102661_caseD_8:
                    uVar6 = (ulong)(iVar8 + 1);
                  }
                  else {
switchD_00102661_caseD_3:
                    uVar6 = uVar3;
                  }
                  iVar10 = iVar10 + -1;
                  if (iVar10 == 0) break;
                } while( true );
              }
              break;
            }
            goto LAB_00102a7f;
                  case 2:
            if (iVar10 == 0) break;
            goto LAB_00102678;
                  default:
            goto switchD_00102661_caseD_3;
                  case 5:
            break;
                  case 7:
            if (uVar14 != 0xfb) break;
            iVar10 = idTypeSizeInWords(this,auStack_78[uVar9 + 2 & 3]);
            uVar11 = iVar10 + 1;
            if (this[0x1d8] != (spirvbin_t)0x0) goto LAB_00102a72;
            if ((uint)(local_9c - iVar8) < uVar11) break;
            uVar9 = iVar8 + iVar10;
            uVar14 = 0;
            goto LAB_00102940;
                  case 8:
            goto switchD_00102661_caseD_8;
                  case 9:
            literalString_abi_cxx11_((uint)&local_68);
            iVar4 = (int)local_60 + 4;
            iVar1 = (int)local_60 + 7;
            if (-1 < iVar4) {
              iVar1 = iVar4;
            }
            if (local_68 != local_58) {
              operator_delete(local_68,local_58[0] + 1);
            }
            uVar3 = (ulong)(uint)(iVar8 + (iVar1 >> 2));
            iVar10 = (iVar10 - (iVar1 >> 2)) + 1;
            goto switchD_00102661_caseD_3;
               }

            }

         }

      }

   }

   goto switchD_00102661_caseD_5;
   while (true) {
      uVar14 = uVar14 + 1;
      uVar9 = uVar9 + uVar11;
      ( **(code**)( param_4 + 0x18 ) )(param_4, *(long*)( this + 8 ) + uVar3 * 4);
      if (( uint )(local_9c - iVar8) / uVar11 <= uVar14) break;
      LAB_00102940:uVar3 = (ulong)uVar9;
      if (*(long*)( param_4 + 0x10 ) == 0) goto LAB_00102a7f;
   }
;
   goto switchD_00102661_caseD_5;
   while (( **(code**)( param_4 + 0x18 ) )(param_4, *(long*)( this + 8 ) + uVar3 * 4),uVar3 = (ulong)uVar11,uVar11 != iVar8 + iVar10) {
      LAB_00102678:uVar11 = (int)uVar3 + 1;
      if (*(long*)( param_4 + 0x10 ) == 0) goto LAB_00102a7f;
   }
;
   switchD_00102661_caseD_5:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_9c;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::spirvbin_t::process(std::function<bool (spv::Op, unsigned int)>, std::function<void
   (unsigned int&)>, unsigned int, unsigned int) */spirvbin_t * __thiscall
spv::spirvbin_t::process(spirvbin_t *this,long param_2,long param_3,uint param_4,uint param_5){
   undefined8 uVar1;
   long lVar2;
   long in_FS_OFFSET;
   uint local_8c;
   undefined1 local_88[16];
   code *local_78;
   undefined8 uStack_70;
   undefined1 local_68[16];
   code *local_58;
   undefined8 uStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = *(undefined8*)( this + 0x60 );
   lVar2 = std::__detail::_Prime_rehash_policy::_M_next_bkt(( ulong )(this + 0x58));
   if (lVar2 == *(long*)( this + 0x40 )) {
      *(undefined8*)( this + 0x60 ) = uVar1;
   }
 else {
      std::_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,unsigned_int>,std::allocator<std::pair<std::__cxx11::string_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_rehash_aux(this + 0x38, lVar2);
   }

   if (param_4 == 0) {
      param_4 = 5;
   }

   local_8c = param_5;
   if (param_5 == 0) {
      local_8c = ( uint )(*(long*)( this + 0x10 ) - *(long*)( this + 8 ) >> 2);
   }

   do {
      if (local_8c <= param_4) break;
      local_58 = (code*)0x0;
      uStack_50 = 0;
      local_68 = (undefined1[16])0x0;
      if (*(code**)( param_3 + 0x10 ) != (code*)0x0) {
         ( **(code**)( param_3 + 0x10 ) )(local_68, param_3, 2);
         local_58 = *(code**)( param_3 + 0x10 );
         uStack_50 = *(undefined8*)( param_3 + 0x18 );
      }

      local_78 = (code*)0x0;
      uStack_70 = 0;
      local_88 = (undefined1[16])0x0;
      if (*(code**)( param_2 + 0x10 ) != (code*)0x0) {
         ( **(code**)( param_2 + 0x10 ) )(local_88, param_2, 2);
         local_78 = *(code**)( param_2 + 0x10 );
         uStack_70 = *(undefined8*)( param_2 + 0x18 );
      }

      param_4 = processInstruction(this, param_4, local_88, local_68);
      if (local_78 != (code*)0x0) {
         ( *local_78 )(local_88, local_88, 3);
      }

      if (local_58 != (code*)0x0) {
         ( *local_58 )(local_68, local_68, 3);
      }

   }
 while ( this[0x1d8] == (spirvbin_t)0x0 );
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::spirvbin_t::applyMap() */void spv::spirvbin_t::applyMap(spirvbin_t *this) {
   code *pcVar1;
   string *extraout_RDX;
   long in_FS_OFFSET;
   undefined1 local_78[16];
   code *local_68;
   code *pcStack_60;
   spirvbin_t *local_58;
   undefined8 local_50;
   code *local_48;
   code *pcStack_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar1 = *(code**)( *(long*)this + 0x10 );
   local_58 = (spirvbin_t*)&local_48;
   std::__cxx11::string::_M_construct<char_const*>(&local_58, "Applying map: ");
   if (pcVar1 == msg) {
      if (2 < *(int*)( this + 0x1d4 )) {
         msg(2, (int)&local_58, extraout_RDX);
      }

   }
 else {
      ( *pcVar1 )(this, 3, 2, &local_58);
   }

   if (local_58 != (spirvbin_t*)&local_48) {
      operator_delete(local_58, (long)local_48 + 1);
   }

   local_50 = 0;
   local_48 = std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::applyMap()::{lambda(unsigned_int &)#1}>::_M_manager;
   pcStack_40 = std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::applyMap()::{lambda(unsigned_int &)#1}>::_M_invoke;
   local_78 = (undefined1[16])0x0;
   local_68 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::inst_fn_nop::{lambda(spv::Op, unsigned_int)#1}>::_M_manager;
   pcStack_60 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::inst_fn_nop::{lambda(spv::Op, unsigned_int)#1}>::_M_invoke;
   local_58 = this;
   process(this, local_78, &local_58, 0, 0);
   if (local_68 != (code*)0x0) {
      ( *local_68 )(local_78, local_78, 3);
   }

   if (local_48 != (code*)0x0) {
      ( *local_48 )(&local_58, &local_58, 3);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::spirvbin_t::stripDebug() */void spv::spirvbin_t::stripDebug(spirvbin_t *this) {
   long in_FS_OFFSET;
   spirvbin_t *local_68;
   undefined8 local_60;
   code *local_58;
   code *pcStack_50;
   undefined1 local_48[16];
   code *local_38;
   code *pcStack_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (undefined1[16])0x0;
   local_38 = std::_Function_handler<void(unsigned_int &),spv::op_fn_nop::{lambda(unsigned_int &)#1}>::_M_manager;
   pcStack_30 = std::_Function_handler<void(unsigned_int &),spv::op_fn_nop::{lambda(unsigned_int &)#1}>::_M_invoke;
   local_60 = 0;
   local_58 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::stripDebug()::{lambda(spv::Op, unsigned_int)#1}>::_M_manager;
   pcStack_50 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::stripDebug()::{lambda(spv::Op, unsigned_int)#1}>::_M_invoke;
   local_68 = this;
   process(this, &local_68, local_48, 0, 0);
   if (local_58 != (code*)0x0) {
      ( *local_58 )(&local_68, &local_68, 3);
   }

   if (local_38 != (code*)0x0) {
      ( *local_38 )(local_48, local_48, 3);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::spirvbin_t::dceVars() */void spv::spirvbin_t::dceVars(spirvbin_t *this) {
   code *pcVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   string *extraout_RDX;
   long in_FS_OFFSET;
   undefined8 *local_b8;
   long local_b0;
   undefined8 *local_a8;
   undefined8 local_a0;
   undefined4 local_98;
   undefined8 local_90;
   undefined8 local_88[2];
   spirvbin_t *local_78;
   spirvbin_t *local_70;
   code *local_68;
   code *pcStack_60;
   undefined1 local_58[16];
   code *local_48;
   code *pcStack_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar1 = *(code**)( *(long*)this + 0x10 );
   local_58._8_8_ = local_58._0_8_;
   local_58._0_8_ = &local_48;
   std::__cxx11::string::_M_construct<char_const*>(local_58, "DCE Vars: ");
   if (pcVar1 == msg) {
      if (2 < *(int*)( this + 0x1d4 )) {
         msg(2, (int)local_58, extraout_RDX);
      }

   }
 else {
      ( *pcVar1 )(this, 3, 2, local_58);
   }

   if ((code**)local_58._0_8_ != &local_48) {
      operator_delete((void*)local_58._0_8_, ( ulong )(local_48 + 1));
   }

   local_48 = std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::dceVars()::{lambda(unsigned_int &)#1}>::_M_manager;
   pcStack_40 = std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::dceVars()::{lambda(unsigned_int &)#1}>::_M_invoke;
   local_b0 = 1;
   local_a8 = (undefined8*)0x0;
   local_a0 = 0;
   local_98 = 0x3f800000;
   local_90 = 0;
   local_88[0] = 0;
   local_58._8_8_ = 0;
   local_58._0_8_ = &local_b8;
   local_68 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::dceVars()::{lambda(spv::Op, unsigned_int)#1}>::_M_manager;
   pcStack_60 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::dceVars()::{lambda(spv::Op, unsigned_int)#1}>::_M_invoke;
   local_b8 = local_88;
   local_78 = (spirvbin_t*)&local_b8;
   local_70 = this;
   process(this, &local_78, local_58, 0, 0);
   if (local_68 != (code*)0x0) {
      ( *local_68 )(&local_78, &local_78, 3);
   }

   if (local_48 != (code*)0x0) {
      ( *local_48 )(local_58, local_58, 3);
   }

   puVar3 = local_a8;
   if (this[0x1d8] == (spirvbin_t)0x0) {
      local_58 = (undefined1[16])0x0;
      local_48 = std::_Function_handler<void(unsigned_int &),spv::op_fn_nop::{lambda(unsigned_int &)#1}>::_M_manager;
      pcStack_40 = std::_Function_handler<void(unsigned_int &),spv::op_fn_nop::{lambda(unsigned_int &)#1}>::_M_invoke;
      local_68 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::dceVars()::{lambda(spv::Op, unsigned_int)#2}>::_M_manager;
      pcStack_60 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::dceVars()::{lambda(spv::Op, unsigned_int)#2}>::_M_invoke;
      local_78 = this;
      local_70 = (spirvbin_t*)&local_b8;
      process(this, &local_78, local_58, 0, 0);
      if (local_68 != (code*)0x0) {
         ( *local_68 )(&local_78, &local_78, 3);
      }

      puVar3 = local_a8;
      if (local_48 != (code*)0x0) {
         ( *local_48 )(local_58, local_58, 3);
         puVar3 = local_a8;
      }

      while (puVar3 != (undefined8*)0x0) {
         puVar2 = (undefined8*)*puVar3;
         operator_delete(puVar3, 0x10);
         puVar3 = puVar2;
      }
;
   }
 else {
      while (puVar3 != (undefined8*)0x0) {
         puVar2 = (undefined8*)*puVar3;
         operator_delete(puVar3, 0x10);
         puVar3 = puVar2;
      }
;
   }

   memset(local_b8, 0, local_b0 * 8);
   local_a0 = 0;
   local_a8 = (undefined8*)0x0;
   if (local_b8 != local_88) {
      operator_delete(local_b8, local_b0 << 3);
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* spv::spirvbin_t::idPos(unsigned int) const */undefined4 spv::spirvbin_t::idPos(spirvbin_t *this, uint param_1) {
   uint uVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   undefined4 uVar4;
   undefined8 *puVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   bool bVar7;
   long *local_38;
   undefined8 local_30;
   long local_28;
   undefined4 local_20;
   undefined1 local_1c;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x140 ) == 0) {
      for (puVar5 = *(undefined8**)( this + 0x138 ); puVar5 != (undefined8*)0x0; puVar5 = (undefined8*)*puVar5) {
         if (*(uint*)( puVar5 + 1 ) == param_1) goto LAB_00103311;
      }

   }
 else {
      uVar6 = (ulong)param_1 % *(ulong*)( this + 0x130 );
      puVar5 = *(undefined8**)( *(long*)( this + 0x128 ) + uVar6 * 8 );
      if (puVar5 != (undefined8*)0x0) {
         uVar1 = *(uint*)( (undefined8*)*puVar5 + 1 );
         puVar3 = (undefined8*)*puVar5;
         while (uVar1 != param_1) {
            puVar2 = (undefined8*)*puVar3;
            if (( puVar2 == (undefined8*)0x0 ) || ( uVar1 = *(uint*)( puVar2 + 1 ) ),puVar5 = puVar3,puVar3 = puVar2,uVar6 != (ulong)uVar1 % *(ulong*)( this + 0x130 )) goto LAB_00103388;
         }
;
         puVar5 = (undefined8*)*puVar5;
         if (puVar5 != (undefined8*)0x0) goto LAB_00103311;
      }

   }

   LAB_00103388:local_1c = 0;
   bVar7 = errorHandler_abi_cxx11_._16_8_ == 0;
   local_28 = 0x6620746f6e204449;
   local_20 = 0x646e756f;
   local_30 = 0xc;
   this[0x1d8] = (spirvbin_t)0x1;
   local_38 = &local_28;
   if (bVar7) {
      /* WARNING: Subroutine does not return */
      std::__throw_bad_function_call();
   }

   ( *(code*)errorHandler_abi_cxx11_._24_8_ )(errorHandler_abi_cxx11_, &local_38);
   if (local_38 != &local_28) {
      operator_delete(local_38, local_28 + 1);
   }

   uVar4 = 0;
   LAB_00103314:if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
   LAB_00103311:uVar4 = *(undefined4*)( (long)puVar5 + 0xc );
   goto LAB_00103314;
}
/* spv::spirvbin_t::typeSizeInWords(unsigned int) const */uint spv::spirvbin_t::typeSizeInWords(spirvbin_t *this, uint param_1) {
   uint uVar1;
   uVar1 = idPos(this, param_1);
   if (( this[0x1d8] == (spirvbin_t)0x0 ) && ( *(ushort*)( *(long*)( this + 8 ) + (ulong)uVar1 * 4 ) - 0x15 < 2 )) {
      return *(int*)( *(long*)( this + 8 ) + ( ulong )(uVar1 + 2) * 4 ) + 0x1fU >> 5;
   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* spv::spirvbin_t::hashType(unsigned int) const */int spv::spirvbin_t::hashType(spirvbin_t *this, uint param_1) {
   int iVar1;
   uint uVar2;
   int iVar3;
   long lVar4;
   ulong uVar5;
   int iVar6;
   int iVar7;
   uint uVar8;
   uint uVar9;
   long in_FS_OFFSET;
   bool bVar10;
   long local_70;
   long *local_68;
   long local_60;
   long local_58[3];
   long local_40;
   iVar7 = 0;
   uVar5 = (ulong)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   LAB_00103471:lVar4 = *(long*)( this + 8 );
   uVar2 = *(uint*)( lVar4 + uVar5 * 4 );
   uVar9 = uVar2 >> 0x10;
   iVar1 = (int)uVar5;
   switch (uVar2 & 0xffff) {
      case 0x13:
    break;
      case 0x14:
    iVar7 = iVar7 + 1;
    break;
      case 0x15:
    iVar7 = iVar7 + 3 + *(int *)(lVar4 + (ulong)(iVar1 + 3) * 4);
    break;
      case 0x16:
    iVar7 = iVar7 + 5;
    break;
      case 0x17:
    uVar2 = idPos(this,*(uint *)(lVar4 + (ulong)(iVar1 + 2) * 4));
    iVar3 = hashType(this,uVar2);
    iVar7 = iVar7 + 6 + (*(int *)(*(long *)(this + 8) + (ulong)(iVar1 + 3) * 4) + -1) * iVar3;
    break;
      case 0x18:
    uVar2 = idPos(this,*(uint *)(lVar4 + (ulong)(iVar1 + 2) * 4));
    iVar3 = hashType(this,uVar2);
    iVar7 = iVar7 + 0x1e + (*(int *)(*(long *)(this + 8) + (ulong)(iVar1 + 3) * 4) + -1) * iVar3;
    break;
      case 0x19:
    uVar2 = idPos(this,*(uint *)(lVar4 + (ulong)(iVar1 + 2) * 4));
    iVar3 = hashType(this,uVar2);
    lVar4 = *(long *)(this + 8);
    iVar7 = (*(int *)(lVar4 + (ulong)(iVar1 + 7) * 4) +
            (*(int *)(lVar4 + (ulong)(iVar1 + 6) * 4) +
            (*(int *)(lVar4 + (ulong)(iVar1 + 5) * 4) + *(int *)(lVar4 + (ulong)(iVar1 + 4) * 4) * 2
            ) * 2) * 2) * 0x10 + iVar7 + 0x78 + *(int *)(lVar4 + (ulong)(iVar1 + 3) * 4) + iVar3;
    break;
      case 0x1a:
    iVar7 = iVar7 + 500;
    break;
      case 0x1b:
    iVar7 = iVar7 + 0x1f6;
    break;
      case 0x1c:
    uVar2 = idPos(this,*(uint *)(lVar4 + (ulong)(iVar1 + 2) * 4));
    iVar3 = hashType(this,uVar2);
    iVar7 = iVar7 + 0x1f5 + iVar3 * *(int *)(*(long *)(this + 8) + (ulong)(iVar1 + 3) * 4);
    break;
      case 0x1d:
    iVar7 = iVar7 + 5000;
    uVar2 = idPos(this,*(uint *)(lVar4 + (ulong)(iVar1 + 2) * 4));
    uVar5 = (ulong)uVar2;
    goto LAB_00103471;
      case 0x1e:
    uVar2 = 2;
    iVar3 = 10000;
    if (2 < uVar9) goto LAB_00103896;
    iVar7 = iVar7 + 10000;
    break;
      case 0x1f:
    iVar7 = iVar7 + 6000 + *(int *)(lVar4 + (ulong)(iVar1 + 2) * 4);
    break;
      case 0x20:
    iVar7 = iVar7 + 100000;
    uVar2 = idPos(this,*(uint *)(lVar4 + (ulong)(iVar1 + 3) * 4));
    uVar5 = (ulong)uVar2;
    goto LAB_00103471;
      case 0x21:
    uVar2 = 2;
    iVar3 = 200000;
    if (2 < uVar9) goto LAB_00103676;
    iVar7 = iVar7 + 200000;
    break;
      case 0x22:
    iVar7 = iVar7 + 300000;
    break;
      case 0x23:
    iVar7 = iVar7 + 0x493e1;
    break;
      case 0x24:
    iVar7 = iVar7 + 0x493e2;
    break;
      case 0x25:
    iVar7 = iVar7 + 0x493e3;
    break;
      case 0x26:
    iVar7 = iVar7 + 0x493e4;
    break;
      default:
    local_70 = 0x13;
    local_68 = local_58;
    local_68 = (long *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_70);
    lVar4 = _UNK_0010e2d8;
    local_58[0] = local_70;
    *local_68 = __LC22;
    local_68[1] = lVar4;
    *(undefined4 *)((long)local_68 + 0xf) = 0x65646f63;
    local_60 = local_70;
    *(undefined1 *)((long)local_68 + local_70) = 0;
    bVar10 = errorHandler_abi_cxx11_._16_8_ == 0;
    this[0x1d8] = (spirvbin_t)0x1;
    if (bVar10) {
                    /* WARNING: Subroutine does not return */
      std::__throw_bad_function_call();
    }
    (*(code *)errorHandler_abi_cxx11_._24_8_)(errorHandler_abi_cxx11_,&local_68);
    if (local_68 != local_58) {
      operator_delete(local_68,local_58[0] + 1);
    }
    break;
      case 0x29:
    iVar7 = iVar7 + 0x493e7;
    break;
      case 0x2a:
    iVar7 = iVar7 + 0x493e8;
    break;
      case 0x2b:
    uVar2 = idPos(this,*(uint *)(lVar4 + (ulong)(iVar1 + 1) * 4));
    iVar3 = hashType(this,uVar2);
    iVar3 = iVar3 + 0x61a8b;
    if (3 < uVar9) {
      uVar2 = 3;
      do {
        iVar6 = *(int *)(*(long *)(this + 8) + (ulong)(iVar1 + uVar2) * 4) * uVar2;
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + iVar6;
      } while (uVar2 != uVar9);
    }
    goto LAB_00103593;
      case 0x2c:
    uVar8 = 3;
    uVar2 = idPos(this,*(uint *)(lVar4 + (ulong)(iVar1 + 1) * 4));
    iVar3 = hashType(this,uVar2);
    iVar3 = iVar3 + 0x493eb;
    if (3 < uVar9) {
      do {
        uVar2 = idPos(this,*(uint *)(*(long *)(this + 8) + (ulong)(iVar1 + uVar8) * 4));
        iVar6 = hashType(this,uVar2);
        iVar6 = iVar6 * uVar8;
        uVar8 = uVar8 + 1;
        iVar3 = iVar3 + iVar6;
      } while (uVar8 != uVar9);
    }
    goto LAB_001034f8;
      case 0x2d:
    uVar2 = idPos(this,*(uint *)(lVar4 + (ulong)(iVar1 + 1) * 4));
    iVar3 = hashType(this,uVar2);
    iVar3 = iVar3 + 0x927cb;
    if (3 < uVar9) {
      uVar2 = 3;
      do {
        iVar6 = *(int *)(*(long *)(this + 8) + (ulong)(iVar1 + uVar2) * 4) * uVar2;
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + iVar6;
      } while (uVar2 != uVar9);
    }
LAB_00103593:
    iVar7 = iVar7 + iVar3;
    break;
      case 0x2e:
    iVar7 = iVar7 + 0x7a129;
    uVar2 = idPos(this,*(uint *)(lVar4 + (ulong)(iVar1 + 1) * 4));
    uVar5 = (ulong)uVar2;
    goto LAB_00103471;
   }

   goto switchD_00103498_caseD_13;
   LAB_00103676:while (true) {
      uVar8 = idPos(this, *(uint*)( lVar4 + ( ulong )(iVar1 + uVar2) * 4 ));
      iVar6 = hashType(this, uVar8);
      iVar6 = iVar6 * uVar2;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + iVar6;
      if (uVar2 == uVar9) break;
      lVar4 = *(long*)( this + 8 );
   }
;
   goto LAB_001034f8;
   LAB_00103896:while (true) {
      uVar8 = idPos(this, *(uint*)( lVar4 + ( ulong )(iVar1 + uVar2) * 4 ));
      iVar6 = hashType(this, uVar8);
      iVar6 = iVar6 * uVar2;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + iVar6;
      if (uVar9 == uVar2) break;
      lVar4 = *(long*)( this + 8 );
   }
;
   LAB_001034f8:iVar7 = iVar7 + iVar3;
   switchD_00103498_caseD_13:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar7;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* spv::spirvbin_t::localId(unsigned int, unsigned int) [clone .isra.0] */void spv::spirvbin_t::localId(spirvbin_t *this, uint param_1, uint param_2) {
   long lVar1;
   undefined1 uVar2;
   code *pcVar3;
   undefined8 uVar4;
   long *plVar5;
   undefined8 *puVar6;
   long *plVar7;
   long *plVar8;
   ulong uVar9;
   ulong uVar10;
   int iVar11;
   ulong uVar12;
   ulong *puVar13;
   ulong *puVar14;
   string *psVar15;
   uint uVar16;
   uint uVar17;
   ulong uVar18;
   ulong uVar19;
   string *psVar20;
   string *psVar21;
   long *plVar22;
   uint uVar23;
   char cVar24;
   long lVar25;
   uint uVar26;
   ulong *puVar27;
   long lVar28;
   long in_FS_OFFSET;
   bool bVar29;
   ulong *local_378;
   ulong *local_370;
   ulong **local_368;
   ulong **local_358;
   ulong **local_350;
   ulong local_340;
   undefined4 *local_338;
   undefined8 local_330;
   undefined4 local_328;
   undefined1 uStack_324;
   undefined1 uStack_323;
   undefined2 uStack_322;
   ulong *local_318;
   int local_310;
   undefined4 uStack_30c;
   ulong local_308[2];
   ulong *local_2f8;
   ulong local_2f0;
   ulong local_2e8[2];
   ulong *local_2d8;
   int local_2d0;
   undefined4 uStack_2cc;
   ulong local_2c8[2];
   long *local_2b8;
   long local_2b0;
   long local_2a8[2];
   ulong *local_298;
   ulong local_290;
   ulong local_288[2];
   ulong *local_278;
   int local_270;
   undefined4 uStack_26c;
   ulong local_268[2];
   long *local_258;
   long local_250;
   long local_248[2];
   ulong *local_238;
   long local_230;
   ulong local_228[2];
   ulong *local_218;
   int local_210;
   undefined4 uStack_20c;
   ulong local_208[2];
   ulong *local_1f8;
   long local_1f0;
   ulong local_1e8[2];
   ulong *local_1d8;
   ulong local_1d0;
   ulong local_1c8[2];
   ulong *local_1b8;
   int local_1b0;
   undefined4 uStack_1ac;
   ulong local_1a8[2];
   ulong *local_198;
   ulong local_190;
   ulong local_188[2];
   ulong *local_178;
   ulong local_170;
   ulong local_168[2];
   ulong *local_158;
   int local_150;
   undefined4 uStack_14c;
   ulong local_148[2];
   string *local_138;
   long local_130;
   long local_128[2];
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
   if (param_1 <= *(uint*)( *(long*)( this + 8 ) + 0xc )) {
      lVar28 = *(long*)( this + 0x1a0 );
      uVar19 = (ulong)param_1;
      lVar25 = *(long*)( this + 0x198 );
      uVar12 = lVar28 - lVar25 >> 2;
      if (uVar12 <= uVar19) {
         uVar18 = ( ulong )(param_1 + 1);
         if (uVar12 < uVar18) {
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_fill_insert((vector<unsigned_int,std::allocator<unsigned_int>>*)( this + 0x198 ), lVar28, uVar18 - uVar12, &unused);
            lVar25 = *(long*)( this + 0x198 );
         }
 else if (( uVar18 < uVar12 ) && ( lVar1 = lVar28 != lVar1 )) {
            *(long*)( this + 0x1a0 ) = lVar1;
         }

      }

      if (param_2 + 0x2711 < 2) {
         LAB_001042de:*(uint*)( lVar25 + uVar19 * 4 ) = param_2;
         goto LAB_001042e2;
      }

      uVar16 = *(uint*)( lVar25 + uVar19 * 4 );
      if (uVar16 != 0xffffd8ef) {
         if (uVar16 == 0xffffd8f0) {
            uVar12 = (ulong)param_2;
            if (( ( ulong )(( *(long*)( this + 0x78 ) - *(long*)( this + 0x70 ) >> 3 ) << 5) <= uVar12 ) || ( ( 1L << ( (byte)param_2 & 0x1f ) & *(ulong*)( *(long*)( this + 0x70 ) + ( ulong )(param_2 >> 5) * 8 ) ) == 0 )) {
               pcVar3 = *(code**)( *(long*)this + 0x10 );
               uVar16 = param_2;
               if (param_2 < 10) {
                  local_198 = local_188;
                  std::__cxx11::string::_M_construct(( ulong ) & local_198, '\x01');
                  LAB_00103daf:cVar24 = (char)uVar16 + '0';
               }
 else {
                  if (param_2 < 100) {
                     local_198 = local_188;
                     std::__cxx11::string::_M_construct(( ulong ) & local_198, '\x02');
                     local_118 = __LC25;
                     uStack_110 = _UNK_0010e2e8;
                     local_108 = __LC26;
                     uStack_100 = _UNK_0010e2f8;
                     local_f8 = __LC27;
                     uStack_f0 = _UNK_0010e308;
                     local_e8 = __LC28;
                     uStack_e0 = _UNK_0010e318;
                     local_d8 = __LC29;
                     uStack_d0 = _UNK_0010e328;
                     local_c8 = __LC30;
                     uStack_c0 = _UNK_0010e338;
                     local_b8 = __LC31;
                     uStack_b0 = _UNK_0010e348;
                     local_a8 = __LC32;
                     uStack_a0 = _UNK_0010e358;
                     local_98 = __LC33;
                     uStack_90 = _UNK_0010e368;
                     local_88 = __LC34;
                     uStack_80 = _UNK_0010e378;
                     local_78 = __LC35;
                     uStack_70 = _UNK_0010e388;
                     local_68 = __LC36;
                     uStack_60 = (undefined1)_UNK_0010e398;
                     uStack_5f = (undefined7)_LC37._0_8_;
                     cStack_58 = SUB81(_LC37._0_8_, 7);
                     for (int i = 0; i < 8; i++) {
                        acStack_57[i] = _LC37[( i + 8 )];
                     }

                  }
 else {
                     if (param_2 < 1000) {
                        cVar24 = '\x03';
                     }
 else if (param_2 < 10000) {
                        cVar24 = '\x04';
                     }
 else {
                        cVar24 = '\x05';
                        if (99999 < param_2) {
                           if (param_2 < 1000000) {
                              cVar24 = '\x05';
                              LAB_0010439a:cVar24 = cVar24 + '\x01';
                           }
 else {
                              cVar24 = '\a';
                              if (9999999 < param_2) {
                                 if (param_2 < 100000000) {
                                    cVar24 = '\b';
                                 }
 else {
                                    if (999999999 < uVar12) {
                                       cVar24 = '\t';
                                       goto LAB_0010439a;
                                    }

                                    cVar24 = '\t';
                                 }

                              }

                           }

                        }

                     }

                     local_198 = local_188;
                     std::__cxx11::string::_M_construct(( ulong ) & local_198, cVar24);
                     local_118 = __LC25;
                     uStack_110 = _UNK_0010e2e8;
                     uVar26 = (int)local_190 - 1;
                     local_108 = __LC26;
                     uStack_100 = _UNK_0010e2f8;
                     local_f8 = __LC27;
                     uStack_f0 = _UNK_0010e308;
                     local_e8 = __LC28;
                     uStack_e0 = _UNK_0010e318;
                     local_d8 = __LC29;
                     uStack_d0 = _UNK_0010e328;
                     local_c8 = __LC30;
                     uStack_c0 = _UNK_0010e338;
                     local_b8 = __LC31;
                     uStack_b0 = _UNK_0010e348;
                     local_a8 = __LC32;
                     uStack_a0 = _UNK_0010e358;
                     local_98 = __LC33;
                     uStack_90 = _UNK_0010e368;
                     local_88 = __LC34;
                     uStack_80 = _UNK_0010e378;
                     local_78 = __LC35;
                     uStack_70 = _UNK_0010e388;
                     local_68 = __LC36;
                     uStack_60 = (undefined1)_UNK_0010e398;
                     uStack_5f = (undefined7)_LC37._0_8_;
                     cStack_58 = SUB81(_LC37._0_8_, 7);
                     for (int i = 0; i < 8; i++) {
                        acStack_57[i] = _LC37[( i + 8 )];
                     }

                     do {
                        uVar23 = uVar16;
                        uVar16 = uVar23 / 100;
                        uVar17 = ( uVar23 % 100 ) * 2;
                        cVar24 = *(char*)( (long)&local_118 + (ulong)uVar17 );
                        *(char*)( (long)local_198 + (ulong)uVar26 ) = *(char*)( (long)&local_118 + ( ulong )(uVar17 + 1) );
                        uVar17 = uVar26 - 1;
                        uVar26 = uVar26 - 2;
                        *(char*)( (long)local_198 + (ulong)uVar17 ) = cVar24;
                     }
 while ( 9999 < uVar23 );
                     if (uVar23 < 1000) goto LAB_00103daf;
                  }

                  cVar24 = *(char*)( (long)&local_118 + ( ulong )(uVar16 * 2) );
                  *(char*)( (long)local_198 + 1 ) = *(char*)( (long)&local_118 + ( ulong )(uVar16 * 2 + 1) );
               }

               local_350 = &local_198;
               local_378 = local_188;
               *(char*)local_198 = cVar24;
               if (param_1 < 10) {
                  local_318 = local_308;
                  std::__cxx11::string::_M_construct(( ulong ) & local_318, '\x01');
                  LAB_00103f96:cVar24 = (char)param_1 + '0';
               }
 else {
                  if (param_1 < 100) {
                     local_318 = local_308;
                     std::__cxx11::string::_M_construct(( ulong ) & local_318, '\x02');
                     local_118 = __LC25;
                     uStack_110 = _UNK_0010e2e8;
                     local_108 = __LC26;
                     uStack_100 = _UNK_0010e2f8;
                     local_f8 = __LC27;
                     uStack_f0 = _UNK_0010e308;
                     local_e8 = __LC28;
                     uStack_e0 = _UNK_0010e318;
                     local_d8 = __LC29;
                     uStack_d0 = _UNK_0010e328;
                     local_c8 = __LC30;
                     uStack_c0 = _UNK_0010e338;
                     local_b8 = __LC31;
                     uStack_b0 = _UNK_0010e348;
                     local_a8 = __LC32;
                     uStack_a0 = _UNK_0010e358;
                     local_98 = __LC33;
                     uStack_90 = _UNK_0010e368;
                     local_88 = __LC34;
                     uStack_80 = _UNK_0010e378;
                     local_78 = __LC35;
                     uStack_70 = _UNK_0010e388;
                     local_68 = __LC36;
                     uStack_60 = (undefined1)_UNK_0010e398;
                     uStack_5f = (undefined7)_LC37._0_8_;
                     cStack_58 = SUB81(_LC37._0_8_, 7);
                     for (int i = 0; i < 8; i++) {
                        acStack_57[i] = _LC37[( i + 8 )];
                     }

                  }
 else {
                     if (param_1 < 1000) {
                        cVar24 = '\x03';
                     }
 else if (param_1 < 10000) {
                        cVar24 = '\x04';
                     }
 else {
                        cVar24 = '\x05';
                        if (99999 < param_1) {
                           if (param_1 < 1000000) {
                              cVar24 = '\x05';
                              LAB_00103e32:cVar24 = cVar24 + '\x01';
                           }
 else {
                              cVar24 = '\a';
                              if (9999999 < param_1) {
                                 if (param_1 < 100000000) {
                                    cVar24 = '\b';
                                 }
 else {
                                    if (999999999 < uVar19) {
                                       cVar24 = '\t';
                                       goto LAB_00103e32;
                                    }

                                    cVar24 = '\t';
                                 }

                              }

                           }

                        }

                     }

                     local_318 = local_308;
                     std::__cxx11::string::_M_construct(( ulong ) & local_318, cVar24);
                     local_118 = __LC25;
                     uStack_110 = _UNK_0010e2e8;
                     uVar16 = local_310 - 1;
                     local_108 = __LC26;
                     uStack_100 = _UNK_0010e2f8;
                     local_f8 = __LC27;
                     uStack_f0 = _UNK_0010e308;
                     local_e8 = __LC28;
                     uStack_e0 = _UNK_0010e318;
                     local_d8 = __LC29;
                     uStack_d0 = _UNK_0010e328;
                     local_c8 = __LC30;
                     uStack_c0 = _UNK_0010e338;
                     local_b8 = __LC31;
                     uStack_b0 = _UNK_0010e348;
                     local_a8 = __LC32;
                     uStack_a0 = _UNK_0010e358;
                     local_98 = __LC33;
                     uStack_90 = _UNK_0010e368;
                     local_88 = __LC34;
                     uStack_80 = _UNK_0010e378;
                     local_78 = __LC35;
                     uStack_70 = _UNK_0010e388;
                     local_68 = __LC36;
                     uStack_60 = (undefined1)_UNK_0010e398;
                     uStack_5f = (undefined7)_LC37._0_8_;
                     cStack_58 = SUB81(_LC37._0_8_, 7);
                     for (int i = 0; i < 8; i++) {
                        acStack_57[i] = _LC37[( i + 8 )];
                     }

                     uVar18 = uVar19;
                     do {
                        uVar17 = param_1;
                        uVar18 = uVar18 / 100;
                        param_1 = (uint)uVar18;
                        uVar26 = ( uVar17 + param_1 * -100 ) * 2;
                        uVar2 = *(undefined1*)( (long)&local_118 + (ulong)uVar26 );
                        *(undefined1*)( (long)local_318 + (ulong)uVar16 ) = *(undefined1*)( (long)&local_118 + ( ulong )(uVar26 + 1) );
                        uVar26 = uVar16 - 1;
                        uVar16 = uVar16 - 2;
                        *(undefined1*)( (long)local_318 + (ulong)uVar26 ) = uVar2;
                     }
 while ( 9999 < uVar17 );
                     if (uVar17 < 1000) goto LAB_00103f96;
                  }

                  cVar24 = *(char*)( (long)&local_118 + ( ulong )(param_1 * 2) );
                  *(undefined1*)( (long)local_318 + 1 ) = *(undefined1*)( (long)&local_118 + ( ulong )(param_1 * 2 + 1) );
               }

               local_358 = &local_318;
               local_370 = local_308;
               *(char*)local_318 = cVar24;
               uVar18 = CONCAT44(uStack_30c, local_310) + 5;
               local_328 = 0x3a70616d;
               uStack_324 = 0x20;
               local_330 = 5;
               uStack_323 = 0;
               local_338 = &local_328;
               if (uVar18 < 0x10) {
                  LAB_00103ff1:if (0x3ffffffffffffffa < CONCAT44(uStack_30c, local_310)) goto LAB_00106af5;
                  LAB_00104004:plVar8 = (long*)std::__cxx11::string::_M_append((char*)&local_338, (ulong)local_318);
                  plVar5 = plVar8 + 2;
                  if ((long*)*plVar8 == plVar5) {
                     uVar18 = plVar8[1] + 1;
                     plVar22 = plVar5;
                     plVar7 = local_2a8;
                     if (7 < (uint)uVar18) {
                        uVar9 = 0;
                        do {
                           uVar16 = (int)uVar9 + 8;
                           uVar10 = (ulong)uVar16;
                           *(undefined8*)( (long)local_2a8 + uVar9 ) = *(undefined8*)( (long)plVar5 + uVar9 );
                           uVar9 = uVar10;
                        }
 while ( uVar16 < ( (uint)uVar18 & 0xfffffff8 ) );
                        plVar7 = (long*)( (long)local_2a8 + uVar10 );
                        plVar22 = (long*)( uVar10 + (long)plVar5 );
                     }

                     lVar28 = 0;
                     if (( uVar18 & 4 ) != 0) {
                        *(int*)plVar7 = (int)*plVar22;
                        lVar28 = 4;
                     }

                     if (( uVar18 & 2 ) != 0) {
                        *(undefined2*)( (long)plVar7 + lVar28 ) = *(undefined2*)( (long)plVar22 + lVar28 );
                        lVar28 = lVar28 + 2;
                     }

                     local_2b8 = local_2a8;
                     if (( uVar18 & 1 ) != 0) {
                        *(undefined1*)( (long)plVar7 + lVar28 ) = *(undefined1*)( (long)plVar22 + lVar28 );
                     }

                  }
 else {
                     local_2a8[0] = plVar8[2];
                     local_2b8 = (long*)*plVar8;
                  }

                  local_2b0 = plVar8[1];
                  *plVar8 = (long)plVar5;
                  plVar8[1] = 0;
                  *(undefined1*)( plVar8 + 2 ) = 0;
               }
 else {
                  if (local_318 == local_370) goto LAB_00104004;
                  if (local_308[0] < uVar18) goto LAB_00103ff1;
                  plVar8 = (long*)std::__cxx11::string::_M_replace((ulong)local_358, 0, (char*)0x0, ( ulong ) & local_328);
                  plVar5 = plVar8 + 2;
                  if ((long*)*plVar8 == plVar5) {
                     uVar18 = plVar8[1] + 1;
                     plVar22 = plVar5;
                     plVar7 = local_2a8;
                     if (7 < (uint)uVar18) {
                        uVar9 = 0;
                        do {
                           uVar16 = (int)uVar9 + 8;
                           uVar10 = (ulong)uVar16;
                           *(undefined8*)( (long)local_2a8 + uVar9 ) = *(undefined8*)( (long)plVar5 + uVar9 );
                           uVar9 = uVar10;
                        }
 while ( uVar16 < ( (uint)uVar18 & 0xfffffff8 ) );
                        plVar7 = (long*)( (long)local_2a8 + uVar10 );
                        plVar22 = (long*)( uVar10 + (long)plVar5 );
                     }

                     lVar28 = 0;
                     if (( uVar18 & 4 ) != 0) {
                        *(undefined4*)plVar7 = *(undefined4*)plVar22;
                        lVar28 = 4;
                     }

                     if (( uVar18 & 2 ) != 0) {
                        *(undefined2*)( (long)plVar7 + lVar28 ) = *(undefined2*)( (long)plVar22 + lVar28 );
                        lVar28 = lVar28 + 2;
                     }

                     local_2b8 = local_2a8;
                     if (( uVar18 & 1 ) != 0) {
                        *(undefined1*)( (long)plVar7 + lVar28 ) = *(undefined1*)( (long)plVar22 + lVar28 );
                     }

                  }
 else {
                     local_2a8[0] = plVar8[2];
                     local_2b8 = (long*)*plVar8;
                  }

                  local_2b0 = plVar8[1];
                  *plVar8 = (long)plVar5;
                  plVar8[1] = 0;
                  *(undefined1*)( plVar8 + 2 ) = 0;
               }

               if (0x3fffffffffffffffU - local_2b0 < 4) goto LAB_00106af5;
               plVar5 = (long*)std::__cxx11::string::_M_append((char*)&local_2b8, 0x10b9f2);
               puVar13 = (ulong*)( plVar5 + 2 );
               if ((ulong*)*plVar5 == puVar13) {
                  uVar18 = plVar5[1] + 1;
                  puVar14 = puVar13;
                  puVar27 = local_1e8;
                  if (7 < (uint)uVar18) {
                     uVar9 = 0;
                     do {
                        uVar16 = (int)uVar9 + 8;
                        uVar10 = (ulong)uVar16;
                        *(undefined8*)( (long)local_1e8 + uVar9 ) = *(undefined8*)( (long)puVar13 + uVar9 );
                        uVar9 = uVar10;
                     }
 while ( uVar16 < ( (uint)uVar18 & 0xfffffff8 ) );
                     puVar27 = (ulong*)( (long)local_1e8 + uVar10 );
                     puVar14 = (ulong*)( uVar10 + (long)puVar13 );
                  }

                  lVar28 = 0;
                  if (( uVar18 & 4 ) != 0) {
                     *(int*)puVar27 = (int)*puVar14;
                     lVar28 = 4;
                  }

                  if (( uVar18 & 2 ) != 0) {
                     *(undefined2*)( (long)puVar27 + lVar28 ) = *(undefined2*)( (long)puVar14 + lVar28 );
                     lVar28 = lVar28 + 2;
                  }

                  local_1f8 = local_1e8;
                  if (( uVar18 & 1 ) != 0) {
                     *(undefined1*)( (long)puVar27 + lVar28 ) = *(undefined1*)( (long)puVar14 + lVar28 );
                  }

               }
 else {
                  local_1e8[0] = plVar5[2];
                  local_1f8 = (ulong*)*plVar5;
               }

               local_1f0 = plVar5[1];
               *(undefined1*)( plVar5 + 2 ) = 0;
               *plVar5 = (long)puVar13;
               plVar5[1] = 0;
               uVar18 = local_1f0 + local_190;
               uVar9 = local_188[0];
               if (local_1f8 == local_1e8) {
                  if (( 0xf < uVar18 ) && ( local_198 != local_378 )) goto LAB_00104130;
                  LAB_0010413c:if (0x3fffffffffffffffU - local_1f0 < local_190) goto LAB_00106af5;
                  puVar6 = (undefined8*)std::__cxx11::string::_M_append((char*)&local_1f8, (ulong)local_198);
                  plVar5 = local_128;
                  local_138 = (string*)*puVar6;
                  psVar15 = (string*)( puVar6 + 2 );
                  if (local_138 != psVar15) goto LAB_0010417f;
                  uVar18 = puVar6[1] + 1;
                  psVar20 = psVar15;
                  if (7 < (uint)uVar18) {
                     uVar9 = 0;
                     do {
                        uVar16 = (int)uVar9 + 8;
                        uVar10 = (ulong)uVar16;
                        *(undefined8*)( (long)plVar5 + uVar9 ) = *(undefined8*)( psVar15 + uVar9 );
                        uVar9 = uVar10;
                     }
 while ( uVar16 < ( (uint)uVar18 & 0xfffffff8 ) );
                     LAB_00105e58:plVar5 = (long*)( (long)local_128 + uVar10 );
                     psVar15 = psVar20 + uVar10;
                  }

                  LAB_001054b8:local_138 = (string*)local_128;
                  lVar28 = 0;
                  if (( uVar18 & 4 ) != 0) {
                     *(undefined4*)plVar5 = *(undefined4*)psVar15;
                     lVar28 = 4;
                  }

                  if (( uVar18 & 2 ) != 0) {
                     *(undefined2*)( (long)plVar5 + lVar28 ) = *(undefined2*)( psVar15 + lVar28 );
                     lVar28 = lVar28 + 2;
                  }

                  if (( uVar18 & 1 ) != 0) {
                     *(string*)( (long)plVar5 + lVar28 ) = psVar15[lVar28];
                  }

               }
 else {
                  if (uVar18 <= local_1e8[0]) goto LAB_0010413c;
                  if (local_198 == local_378) {
                     uVar9 = 0xf;
                  }

                  LAB_00104130:if (uVar9 < uVar18) goto LAB_0010413c;
                  puVar6 = (undefined8*)std::__cxx11::string::_M_replace((ulong)local_350, 0, (char*)0x0, (ulong)local_1f8);
                  plVar5 = local_128;
                  local_138 = (string*)*puVar6;
                  psVar15 = (string*)( puVar6 + 2 );
                  if (local_138 == psVar15) {
                     uVar18 = puVar6[1] + 1;
                     psVar20 = psVar15;
                     if (7 < (uint)uVar18) {
                        uVar9 = 0;
                        do {
                           uVar16 = (int)uVar9 + 8;
                           uVar10 = (ulong)uVar16;
                           *(undefined8*)( (long)plVar5 + uVar9 ) = *(undefined8*)( psVar15 + uVar9 );
                           uVar9 = uVar10;
                        }
 while ( uVar16 < ( (uint)uVar18 & 0xfffffff8 ) );
                        goto LAB_00105e58;
                     }

                     goto LAB_001054b8;
                  }

                  LAB_0010417f:local_128[0] = puVar6[2];
                  psVar20 = psVar15;
               }

               local_130 = puVar6[1];
               *puVar6 = psVar20;
               puVar6[1] = 0;
               *(undefined1*)( puVar6 + 2 ) = 0;
               if (pcVar3 == msg) {
                  if (3 < *(int*)( this + 0x1d4 )) {
                     msg(4, (int)&local_138, psVar20);
                  }

               }
 else {
                  ( *pcVar3 )(this, 4, 4, &local_138);
               }

               if (local_138 != (string*)local_128) {
                  operator_delete(local_138, local_128[0] + 1);
               }

               if (local_1f8 != local_1e8) {
                  operator_delete(local_1f8, local_1e8[0] + 1);
               }

               if (local_2b8 != local_2a8) {
                  operator_delete(local_2b8, local_2a8[0] + 1);
               }

               if (local_338 != &local_328) {
                  operator_delete(local_338, CONCAT26(uStack_322, CONCAT15(uStack_323, CONCAT14(uStack_324, local_328))) + 1);
               }

               if (local_318 != local_370) {
                  operator_delete(local_318, local_308[0] + 1);
               }

               if (local_198 != local_378) {
                  operator_delete(local_198, local_188[0] + 1);
               }

               lVar28 = *(long*)( this + 0x78 );
               lVar25 = *(long*)( this + 0x70 );
               uVar18 = lVar28 - lVar25 >> 3;
               if (uVar18 << 5 <= uVar12) {
                  local_340 = 0;
                  uVar12 = ( ulong )(( param_2 >> 5 ) + 1);
                  if (uVar18 < uVar12) {
                     std::vector<unsigned_long,std::allocator<unsigned_long>>::_M_fill_insert((vector<unsigned_long,std::allocator<unsigned_long>>*)( this + 0x70 ), lVar28, uVar12 - uVar18, &local_340);
                     lVar25 = *(long*)( this + 0x70 );
                  }
 else if (( uVar12 < uVar18 ) && ( lVar1 = lVar28 != lVar1 )) {
                     *(long*)( this + 0x78 ) = lVar1;
                  }

               }

               puVar13 = (ulong*)( lVar25 + ( ulong )(param_2 >> 5) * 8 );
               *puVar13 = *puVar13 | 1L << ( (byte)param_2 & 0x1f );
               lVar25 = *(long*)( this + 0x198 );
               uVar16 = *(uint*)( this + 0x1b4 );
               if (*(uint*)( this + 0x1b4 ) < param_2) {
                  uVar16 = param_2;
               }

               *(uint*)( this + 0x1b4 ) = uVar16;
               goto LAB_001042de;
            }

            if (param_2 < 10) {
               local_2d8 = local_2c8;
               std::__cxx11::string::_M_construct(( ulong ) & local_2d8, '\x01');
               LAB_00105748:cVar24 = (char)param_2 + '0';
            }
 else {
               if (param_2 < 100) {
                  local_2d8 = local_2c8;
                  std::__cxx11::string::_M_construct(( ulong ) & local_2d8, '\x02');
                  local_118 = __LC25;
                  uStack_110 = _UNK_0010e2e8;
                  local_108 = __LC26;
                  uStack_100 = _UNK_0010e2f8;
                  local_f8 = __LC27;
                  uStack_f0 = _UNK_0010e308;
                  local_e8 = __LC28;
                  uStack_e0 = _UNK_0010e318;
                  local_d8 = __LC29;
                  uStack_d0 = _UNK_0010e328;
                  local_c8 = __LC30;
                  uStack_c0 = _UNK_0010e338;
                  local_b8 = __LC31;
                  uStack_b0 = _UNK_0010e348;
                  local_a8 = __LC32;
                  uStack_a0 = _UNK_0010e358;
                  local_98 = __LC33;
                  uStack_90 = _UNK_0010e368;
                  local_88 = __LC34;
                  uStack_80 = _UNK_0010e378;
                  local_78 = __LC35;
                  uStack_70 = _UNK_0010e388;
                  local_68 = __LC36;
                  uStack_60 = (undefined1)_UNK_0010e398;
                  uStack_5f = (undefined7)_LC37._0_8_;
                  cStack_58 = SUB81(_LC37._0_8_, 7);
                  for (int i = 0; i < 8; i++) {
                     acStack_57[i] = _LC37[( i + 8 )];
                  }

               }
 else {
                  if (param_2 < 1000) {
                     cVar24 = '\x03';
                  }
 else if (param_2 < 10000) {
                     cVar24 = '\x04';
                  }
 else {
                     cVar24 = '\x05';
                     if (99999 < param_2) {
                        if (param_2 < 1000000) {
                           cVar24 = '\x05';
                           LAB_00103ab6:cVar24 = cVar24 + '\x01';
                        }
 else {
                           cVar24 = '\a';
                           if (9999999 < param_2) {
                              if (param_2 < 100000000) {
                                 cVar24 = '\b';
                              }
 else {
                                 if (999999999 < uVar12) {
                                    cVar24 = '\t';
                                    goto LAB_00103ab6;
                                 }

                                 cVar24 = '\t';
                              }

                           }

                        }

                     }

                  }

                  local_2d8 = local_2c8;
                  std::__cxx11::string::_M_construct(( ulong ) & local_2d8, cVar24);
                  local_118 = __LC25;
                  uStack_110 = _UNK_0010e2e8;
                  uVar16 = local_2d0 - 1;
                  local_108 = __LC26;
                  uStack_100 = _UNK_0010e2f8;
                  local_f8 = __LC27;
                  uStack_f0 = _UNK_0010e308;
                  local_e8 = __LC28;
                  uStack_e0 = _UNK_0010e318;
                  local_d8 = __LC29;
                  uStack_d0 = _UNK_0010e328;
                  local_c8 = __LC30;
                  uStack_c0 = _UNK_0010e338;
                  local_b8 = __LC31;
                  uStack_b0 = _UNK_0010e348;
                  local_a8 = __LC32;
                  uStack_a0 = _UNK_0010e358;
                  local_98 = __LC33;
                  uStack_90 = _UNK_0010e368;
                  local_88 = __LC34;
                  uStack_80 = _UNK_0010e378;
                  local_78 = __LC35;
                  uStack_70 = _UNK_0010e388;
                  local_68 = __LC36;
                  uStack_60 = (undefined1)_UNK_0010e398;
                  uStack_5f = (undefined7)_LC37._0_8_;
                  cStack_58 = SUB81(_LC37._0_8_, 7);
                  for (int i = 0; i < 8; i++) {
                     acStack_57[i] = _LC37[( i + 8 )];
                  }

                  do {
                     uVar17 = param_2;
                     uVar12 = uVar12 / 100;
                     param_2 = (uint)uVar12;
                     uVar26 = ( uVar17 + param_2 * -100 ) * 2;
                     uVar2 = *(undefined1*)( (long)&local_118 + (ulong)uVar26 );
                     *(undefined1*)( (long)local_2d8 + (ulong)uVar16 ) = *(undefined1*)( (long)&local_118 + ( ulong )(uVar26 + 1) );
                     uVar26 = uVar16 - 1;
                     uVar16 = uVar16 - 2;
                     *(undefined1*)( (long)local_2d8 + (ulong)uVar26 ) = uVar2;
                  }
 while ( 9999 < uVar17 );
                  if (uVar17 < 1000) goto LAB_00105748;
               }

               cVar24 = *(char*)( (long)&local_118 + ( ulong )(param_2 * 2) );
               *(undefined1*)( (long)local_2d8 + 1 ) = *(undefined1*)( (long)&local_118 + ( ulong )(param_2 * 2 + 1) );
            }

            *(char*)local_2d8 = cVar24;
            local_340 = 0x1b;
            local_2f8 = local_2e8;
            local_2f8 = (ulong*)std::__cxx11::string::_M_create((ulong*)&local_2f8, ( ulong ) & local_340);
            uVar12 = _UNK_0010e3e8;
            local_2e8[0] = local_340;
            *local_2f8 = __LC41;
            local_2f8[1] = uVar12;
            uVar4 = _UNK_0010e3f8;
            *(undefined8*)( (long)local_2f8 + 0xb ) = __LC42;
            *(undefined8*)( (long)local_2f8 + 0x13 ) = uVar4;
            local_2f0 = local_340;
            *(undefined1*)( (long)local_2f8 + local_340 ) = 0;
            uVar12 = local_340 + CONCAT44(uStack_2cc, local_2d0);
            uVar19 = local_2c8[0];
            if (local_2f8 == local_2e8) {
               if (( 0xf < uVar12 ) && ( local_2d8 != local_2c8 )) goto LAB_0010580f;
               LAB_0010581b:if (0x3fffffffffffffff - local_340 < CONCAT44(uStack_2cc, local_2d0)) goto LAB_00106af5;
               plVar8 = (long*)std::__cxx11::string::_M_append((char*)&local_2f8, (ulong)local_2d8);
               plVar5 = plVar8 + 2;
               if ((long*)*plVar8 == plVar5) {
                  uVar12 = plVar8[1] + 1;
                  plVar22 = plVar5;
                  plVar7 = local_2a8;
                  if (7 < (uint)uVar12) {
                     uVar19 = 0;
                     do {
                        uVar16 = (int)uVar19 + 8;
                        uVar18 = (ulong)uVar16;
                        *(undefined8*)( (long)local_2a8 + uVar19 ) = *(undefined8*)( (long)plVar5 + uVar19 );
                        uVar19 = uVar18;
                     }
 while ( uVar16 < ( (uint)uVar12 & 0xfffffff8 ) );
                     plVar7 = (long*)( (long)local_2a8 + uVar18 );
                     plVar22 = (long*)( uVar18 + (long)plVar5 );
                  }

                  lVar28 = 0;
                  if (( uVar12 & 4 ) != 0) {
                     *(int*)plVar7 = (int)*plVar22;
                     lVar28 = 4;
                  }

                  if (( uVar12 & 2 ) != 0) {
                     *(undefined2*)( (long)plVar7 + lVar28 ) = *(undefined2*)( (long)plVar22 + lVar28 );
                     lVar28 = lVar28 + 2;
                  }

                  local_2b8 = local_2a8;
                  if (( uVar12 & 1 ) != 0) {
                     *(undefined1*)( (long)plVar7 + lVar28 ) = *(undefined1*)( (long)plVar22 + lVar28 );
                  }

               }
 else {
                  local_2a8[0] = plVar8[2];
                  local_2b8 = (long*)*plVar8;
               }

               local_2b0 = plVar8[1];
               *plVar8 = (long)plVar5;
               plVar8[1] = 0;
               *(undefined1*)( plVar8 + 2 ) = 0;
            }
 else {
               if (uVar12 <= local_340) goto LAB_0010581b;
               if (local_2d8 == local_2c8) {
                  uVar19 = 0xf;
               }

               LAB_0010580f:if (uVar19 < uVar12) goto LAB_0010581b;
               plVar8 = (long*)std::__cxx11::string::_M_replace(( ulong ) & local_2d8, 0, (char*)0x0, (ulong)local_2f8);
               local_2b8 = local_2a8;
               plVar5 = plVar8 + 2;
               if ((long*)*plVar8 == plVar5) {
                  uVar12 = plVar8[1] + 1;
                  plVar22 = plVar5;
                  plVar7 = local_2b8;
                  if (7 < (uint)uVar12) {
                     uVar19 = 0;
                     do {
                        uVar16 = (int)uVar19 + 8;
                        uVar18 = (ulong)uVar16;
                        *(undefined8*)( (long)local_2b8 + uVar19 ) = *(undefined8*)( (long)plVar5 + uVar19 );
                        uVar19 = uVar18;
                     }
 while ( uVar16 < ( (uint)uVar12 & 0xfffffff8 ) );
                     plVar7 = (long*)( (long)local_2b8 + uVar18 );
                     plVar22 = (long*)( uVar18 + (long)plVar5 );
                  }

                  lVar28 = 0;
                  if (( uVar12 & 4 ) != 0) {
                     *(int*)plVar7 = (int)*plVar22;
                     lVar28 = 4;
                  }

                  if (( uVar12 & 2 ) != 0) {
                     *(undefined2*)( (long)plVar7 + lVar28 ) = *(undefined2*)( (long)plVar22 + lVar28 );
                     lVar28 = lVar28 + 2;
                  }

                  if (( uVar12 & 1 ) != 0) {
                     *(undefined1*)( (long)plVar7 + lVar28 ) = *(undefined1*)( (long)plVar22 + lVar28 );
                  }

               }
 else {
                  local_2a8[0] = plVar8[2];
                  local_2b8 = (long*)*plVar8;
               }

               local_2b0 = plVar8[1];
               *plVar8 = (long)plVar5;
               plVar8[1] = 0;
               *(undefined1*)( plVar8 + 2 ) = 0;
            }

            bVar29 = errorHandler_abi_cxx11_._16_8_ == 0;
            this[0x1d8] = (spirvbin_t)0x1;
            if (bVar29) goto LAB_00106b56;
            ( *(code*)errorHandler_abi_cxx11_._24_8_ )(errorHandler_abi_cxx11_, &local_2b8);
            if (local_2b8 != local_2a8) {
               operator_delete(local_2b8, local_2a8[0] + 1);
            }

            if (local_2f8 != local_2e8) {
               operator_delete(local_2f8, local_2e8[0] + 1);
            }

            if (local_2d8 != local_2c8) {
               operator_delete(local_2d8, local_2c8[0] + 1);
            }

            goto LAB_001042e2;
         }

         if (uVar16 < 10) {
            local_218 = local_208;
            std::__cxx11::string::_M_construct(( ulong ) & local_218, '\x01');
            LAB_00104c80:cVar24 = (char)uVar16 + '0';
         }
 else {
            if (uVar16 < 100) {
               local_218 = local_208;
               std::__cxx11::string::_M_construct(( ulong ) & local_218, '\x02');
               local_118 = __LC25;
               uStack_110 = _UNK_0010e2e8;
               local_108 = __LC26;
               uStack_100 = _UNK_0010e2f8;
               local_f8 = __LC27;
               uStack_f0 = _UNK_0010e308;
               local_e8 = __LC28;
               uStack_e0 = _UNK_0010e318;
               local_d8 = __LC29;
               uStack_d0 = _UNK_0010e328;
               local_c8 = __LC30;
               uStack_c0 = _UNK_0010e338;
               local_b8 = __LC31;
               uStack_b0 = _UNK_0010e348;
               local_a8 = __LC32;
               uStack_a0 = _UNK_0010e358;
               local_98 = __LC33;
               uStack_90 = _UNK_0010e368;
               local_88 = __LC34;
               uStack_80 = _UNK_0010e378;
               local_78 = __LC35;
               uStack_70 = _UNK_0010e388;
               local_68 = __LC36;
               uStack_60 = (undefined1)_UNK_0010e398;
               uStack_5f = (undefined7)_LC37._0_8_;
               cStack_58 = SUB81(_LC37._0_8_, 7);
               for (int i = 0; i < 8; i++) {
                  acStack_57[i] = _LC37[( i + 8 )];
               }

            }
 else {
               if (uVar16 < 1000) {
                  cVar24 = '\x03';
               }
 else if (uVar16 < 10000) {
                  cVar24 = '\x04';
               }
 else {
                  cVar24 = '\x05';
                  if (99999 < uVar16) {
                     if (uVar16 < 1000000) {
                        cVar24 = '\x05';
                        LAB_00104ac8:cVar24 = cVar24 + '\x01';
                     }
 else {
                        cVar24 = '\a';
                        if (9999999 < uVar16) {
                           if (uVar16 < 100000000) {
                              cVar24 = '\b';
                           }
 else {
                              if (999999999 < uVar16) {
                                 cVar24 = '\t';
                                 goto LAB_00104ac8;
                              }

                              cVar24 = '\t';
                           }

                        }

                     }

                  }

               }

               local_218 = local_208;
               uVar12 = (ulong)uVar16;
               std::__cxx11::string::_M_construct(( ulong ) & local_218, cVar24);
               local_118 = __LC25;
               uStack_110 = _UNK_0010e2e8;
               uVar26 = local_210 - 1;
               local_108 = __LC26;
               uStack_100 = _UNK_0010e2f8;
               local_f8 = __LC27;
               uStack_f0 = _UNK_0010e308;
               local_e8 = __LC28;
               uStack_e0 = _UNK_0010e318;
               local_d8 = __LC29;
               uStack_d0 = _UNK_0010e328;
               local_c8 = __LC30;
               uStack_c0 = _UNK_0010e338;
               local_b8 = __LC31;
               uStack_b0 = _UNK_0010e348;
               local_a8 = __LC32;
               uStack_a0 = _UNK_0010e358;
               local_98 = __LC33;
               uStack_90 = _UNK_0010e368;
               local_88 = __LC34;
               uStack_80 = _UNK_0010e378;
               local_78 = __LC35;
               uStack_70 = _UNK_0010e388;
               local_68 = __LC36;
               uStack_60 = (undefined1)_UNK_0010e398;
               uStack_5f = (undefined7)_LC37._0_8_;
               cStack_58 = SUB81(_LC37._0_8_, 7);
               for (int i = 0; i < 8; i++) {
                  acStack_57[i] = _LC37[( i + 8 )];
               }

               do {
                  uVar23 = uVar16;
                  uVar12 = uVar12 / 100;
                  uVar16 = (uint)uVar12;
                  uVar17 = ( uVar23 + uVar16 * -100 ) * 2;
                  cVar24 = *(char*)( (long)&local_118 + (ulong)uVar17 );
                  *(char*)( (long)local_218 + (ulong)uVar26 ) = *(char*)( (long)&local_118 + ( ulong )(uVar17 + 1) );
                  uVar17 = uVar26 - 1;
                  uVar26 = uVar26 - 2;
                  *(char*)( (long)local_218 + (ulong)uVar17 ) = cVar24;
               }
 while ( 9999 < uVar23 );
               if (uVar23 < 1000) goto LAB_00104c80;
            }

            cVar24 = *(char*)( (long)&local_118 + ( ulong )(uVar16 * 2) );
            *(char*)( (long)local_218 + 1 ) = *(char*)( (long)&local_118 + ( ulong )(uVar16 * 2 + 1) );
         }

         local_368 = &local_218;
         local_370 = local_208;
         *(char*)local_218 = cVar24;
         if (param_1 < 10) {
            local_278 = local_268;
            std::__cxx11::string::_M_construct(( ulong ) & local_278, '\x01');
            LAB_00104e6e:cVar24 = (char)param_1 + '0';
         }
 else {
            if (param_1 < 100) {
               local_278 = local_268;
               std::__cxx11::string::_M_construct(( ulong ) & local_278, '\x02');
               local_118 = __LC25;
               uStack_110 = _UNK_0010e2e8;
               local_108 = __LC26;
               uStack_100 = _UNK_0010e2f8;
               local_f8 = __LC27;
               uStack_f0 = _UNK_0010e308;
               local_e8 = __LC28;
               uStack_e0 = _UNK_0010e318;
               local_d8 = __LC29;
               uStack_d0 = _UNK_0010e328;
               local_c8 = __LC30;
               uStack_c0 = _UNK_0010e338;
               local_b8 = __LC31;
               uStack_b0 = _UNK_0010e348;
               local_a8 = __LC32;
               uStack_a0 = _UNK_0010e358;
               local_98 = __LC33;
               uStack_90 = _UNK_0010e368;
               local_88 = __LC34;
               uStack_80 = _UNK_0010e378;
               local_78 = __LC35;
               uStack_70 = _UNK_0010e388;
               local_68 = __LC36;
               uStack_60 = (undefined1)_UNK_0010e398;
               uStack_5f = (undefined7)_LC37._0_8_;
               cStack_58 = SUB81(_LC37._0_8_, 7);
               for (int i = 0; i < 8; i++) {
                  acStack_57[i] = _LC37[( i + 8 )];
               }

            }
 else {
               if (param_1 < 1000) {
                  cVar24 = '\x03';
               }
 else if (param_1 < 10000) {
                  cVar24 = '\x04';
               }
 else {
                  cVar24 = '\x05';
                  if (99999 < param_1) {
                     if (param_1 < 1000000) {
                        cVar24 = '\x05';
                        LAB_00104d03:cVar24 = cVar24 + '\x01';
                     }
 else {
                        cVar24 = '\a';
                        if (9999999 < param_1) {
                           if (param_1 < 100000000) {
                              cVar24 = '\b';
                           }
 else {
                              if (999999999 < uVar19) {
                                 cVar24 = '\t';
                                 goto LAB_00104d03;
                              }

                              cVar24 = '\t';
                           }

                        }

                     }

                  }

               }

               local_278 = local_268;
               std::__cxx11::string::_M_construct(( ulong ) & local_278, cVar24);
               local_118 = __LC25;
               uStack_110 = _UNK_0010e2e8;
               uVar16 = local_270 - 1;
               local_108 = __LC26;
               uStack_100 = _UNK_0010e2f8;
               local_f8 = __LC27;
               uStack_f0 = _UNK_0010e308;
               local_e8 = __LC28;
               uStack_e0 = _UNK_0010e318;
               local_d8 = __LC29;
               uStack_d0 = _UNK_0010e328;
               local_c8 = __LC30;
               uStack_c0 = _UNK_0010e338;
               local_b8 = __LC31;
               uStack_b0 = _UNK_0010e348;
               local_a8 = __LC32;
               uStack_a0 = _UNK_0010e358;
               local_98 = __LC33;
               uStack_90 = _UNK_0010e368;
               local_88 = __LC34;
               uStack_80 = _UNK_0010e378;
               local_78 = __LC35;
               uStack_70 = _UNK_0010e388;
               local_68 = __LC36;
               uStack_60 = (undefined1)_UNK_0010e398;
               uStack_5f = (undefined7)_LC37._0_8_;
               cStack_58 = SUB81(_LC37._0_8_, 7);
               for (int i = 0; i < 8; i++) {
                  acStack_57[i] = _LC37[( i + 8 )];
               }

               do {
                  uVar17 = param_1;
                  uVar19 = uVar19 / 100;
                  param_1 = (uint)uVar19;
                  uVar26 = ( uVar17 + param_1 * -100 ) * 2;
                  uVar2 = *(undefined1*)( (long)&local_118 + (ulong)uVar26 );
                  *(undefined1*)( (long)local_278 + (ulong)uVar16 ) = *(undefined1*)( (long)&local_118 + ( ulong )(uVar26 + 1) );
                  uVar26 = uVar16 - 1;
                  uVar16 = uVar16 - 2;
                  *(undefined1*)( (long)local_278 + (ulong)uVar26 ) = uVar2;
               }
 while ( 9999 < uVar17 );
               if (uVar17 < 1000) goto LAB_00104e6e;
            }

            cVar24 = *(char*)( (long)&local_118 + ( ulong )(param_1 * 2) );
            *(undefined1*)( (long)local_278 + 1 ) = *(undefined1*)( (long)&local_118 + ( ulong )(param_1 * 2 + 1) );
         }

         local_378 = local_268;
         *(char*)local_278 = cVar24;
         local_340 = 0x13;
         local_298 = local_288;
         local_298 = (ulong*)std::__cxx11::string::_M_create((ulong*)&local_298, ( ulong ) & local_340);
         uVar12 = _UNK_0010e3d8;
         local_288[0] = local_340;
         *local_298 = __LC40;
         local_298[1] = uVar12;
         *(undefined4*)( (long)local_298 + 0xf ) = 0x203a6465;
         local_290 = local_340;
         *(undefined1*)( (long)local_298 + local_340 ) = 0;
         uVar12 = local_340 + CONCAT44(uStack_26c, local_270);
         uVar19 = local_268[0];
         if (local_298 == local_288) {
            if (( 0xf < uVar12 ) && ( local_278 != local_378 )) goto LAB_00104f35;
            LAB_00104f41:if (0x3fffffffffffffff - local_340 < CONCAT44(uStack_26c, local_270)) goto LAB_00106af5;
            plVar7 = (long*)std::__cxx11::string::_M_append((char*)&local_298, (ulong)local_278);
            plVar8 = local_248;
            local_258 = (long*)*plVar7;
            plVar5 = plVar7 + 2;
            if (local_258 != plVar5) goto LAB_00104f88;
            uVar12 = plVar7[1] + 1;
            plVar22 = plVar5;
            if (7 < (uint)uVar12) {
               uVar19 = 0;
               do {
                  uVar16 = (int)uVar19 + 8;
                  uVar18 = (ulong)uVar16;
                  *(undefined8*)( (long)plVar8 + uVar19 ) = *(undefined8*)( (long)plVar5 + uVar19 );
                  uVar19 = uVar18;
               }
 while ( uVar16 < ( (uint)uVar12 & 0xfffffff8 ) );
               LAB_00106203:plVar8 = (long*)( (long)local_248 + uVar18 );
               plVar5 = (long*)( uVar18 + (long)plVar22 );
            }

            LAB_00105d24:local_258 = local_248;
            lVar28 = 0;
            if (( uVar12 & 4 ) != 0) {
               *(int*)plVar8 = (int)*plVar5;
               lVar28 = 4;
            }

            if (( uVar12 & 2 ) != 0) {
               *(undefined2*)( (long)plVar8 + lVar28 ) = *(undefined2*)( (long)plVar5 + lVar28 );
               lVar28 = lVar28 + 2;
            }

            if (( uVar12 & 1 ) != 0) {
               *(undefined1*)( (long)plVar8 + lVar28 ) = *(undefined1*)( (long)plVar5 + lVar28 );
            }

         }
 else {
            if (uVar12 <= local_340) goto LAB_00104f41;
            if (local_278 == local_378) {
               uVar19 = 0xf;
            }

            LAB_00104f35:if (uVar19 < uVar12) goto LAB_00104f41;
            plVar8 = local_248;
            plVar7 = (long*)std::__cxx11::string::_M_replace(( ulong ) & local_278, 0, (char*)0x0, (ulong)local_298);
            local_258 = (long*)*plVar7;
            plVar5 = plVar7 + 2;
            if (local_258 == plVar5) {
               uVar12 = plVar7[1] + 1;
               plVar22 = plVar5;
               if (7 < (uint)uVar12) {
                  uVar19 = 0;
                  do {
                     uVar16 = (int)uVar19 + 8;
                     uVar18 = (ulong)uVar16;
                     *(undefined8*)( (long)plVar8 + uVar19 ) = *(undefined8*)( (long)plVar5 + uVar19 );
                     uVar19 = uVar18;
                  }
 while ( uVar16 < ( (uint)uVar12 & 0xfffffff8 ) );
                  goto LAB_00106203;
               }

               goto LAB_00105d24;
            }

            LAB_00104f88:local_248[0] = plVar7[2];
            plVar22 = plVar5;
         }

         local_250 = plVar7[1];
         plVar7[1] = 0;
         *(undefined1*)( plVar7 + 2 ) = 0;
         *plVar7 = (long)plVar22;
         if (0x3fffffffffffffffU - local_250 < 4) goto LAB_00106af5;
         plVar5 = (long*)std::__cxx11::string::_M_append((char*)&local_258, 0x10b9f2);
         puVar13 = (ulong*)( plVar5 + 2 );
         if ((ulong*)*plVar5 == puVar13) {
            uVar12 = plVar5[1] + 1;
            puVar14 = puVar13;
            puVar27 = local_228;
            if (7 < (uint)uVar12) {
               uVar19 = 0;
               do {
                  uVar16 = (int)uVar19 + 8;
                  uVar18 = (ulong)uVar16;
                  *(undefined8*)( (long)local_228 + uVar19 ) = *(undefined8*)( (long)puVar13 + uVar19 );
                  uVar19 = uVar18;
               }
 while ( uVar16 < ( (uint)uVar12 & 0xfffffff8 ) );
               puVar27 = (ulong*)( (long)local_228 + uVar18 );
               puVar14 = (ulong*)( uVar18 + (long)puVar13 );
            }

            lVar28 = 0;
            if (( uVar12 & 4 ) != 0) {
               *(int*)puVar27 = (int)*puVar14;
               lVar28 = 4;
            }

            if (( uVar12 & 2 ) != 0) {
               *(undefined2*)( (long)puVar27 + lVar28 ) = *(undefined2*)( (long)puVar14 + lVar28 );
               lVar28 = lVar28 + 2;
            }

            local_238 = local_228;
            if (( uVar12 & 1 ) != 0) {
               *(undefined1*)( (long)puVar27 + lVar28 ) = *(undefined1*)( (long)puVar14 + lVar28 );
            }

         }
 else {
            local_228[0] = plVar5[2];
            local_238 = (ulong*)*plVar5;
         }

         local_230 = plVar5[1];
         *plVar5 = (long)puVar13;
         plVar5[1] = 0;
         *(undefined1*)( plVar5 + 2 ) = 0;
         uVar12 = local_230 + CONCAT44(uStack_20c, local_210);
         uVar19 = local_208[0];
         if (local_238 == local_228) {
            if (( 0xf < uVar12 ) && ( local_218 != local_370 )) goto LAB_00105083;
            LAB_0010508f:if (0x3fffffffffffffffU - local_230 < CONCAT44(uStack_20c, local_210)) goto LAB_00106af5;
            plVar5 = (long*)std::__cxx11::string::_M_append((char*)&local_238, (ulong)local_218);
            local_1f8 = (ulong*)*plVar5;
            puVar13 = (ulong*)( plVar5 + 2 );
            if (local_1f8 == puVar13) {
               uVar12 = plVar5[1] + 1;
               puVar14 = puVar13;
               puVar27 = local_1e8;
               if (7 < (uint)uVar12) {
                  uVar19 = 0;
                  do {
                     uVar16 = (int)uVar19 + 8;
                     uVar18 = (ulong)uVar16;
                     *(undefined8*)( (long)local_1e8 + uVar19 ) = *(undefined8*)( (long)puVar13 + uVar19 );
                     uVar19 = uVar18;
                  }
 while ( uVar16 < ( (uint)uVar12 & 0xfffffff8 ) );
                  puVar27 = (ulong*)( (long)local_1e8 + uVar18 );
                  puVar14 = (ulong*)( uVar18 + (long)puVar13 );
               }

               lVar28 = 0;
               if (( uVar12 & 4 ) != 0) {
                  *(int*)puVar27 = (int)*puVar14;
                  lVar28 = 4;
               }

               if (( uVar12 & 2 ) != 0) {
                  *(undefined2*)( (long)puVar27 + lVar28 ) = *(undefined2*)( (long)puVar14 + lVar28 );
                  lVar28 = lVar28 + 2;
               }

               local_1f8 = local_1e8;
               if (( uVar12 & 1 ) != 0) {
                  *(undefined1*)( (long)puVar27 + lVar28 ) = *(undefined1*)( (long)puVar14 + lVar28 );
               }

            }
 else {
               LAB_001050db:local_1e8[0] = plVar5[2];
            }

         }
 else {
            if (uVar12 <= local_228[0]) goto LAB_0010508f;
            if (local_218 == local_370) {
               uVar19 = 0xf;
            }

            LAB_00105083:if (uVar19 < uVar12) goto LAB_0010508f;
            plVar5 = (long*)std::__cxx11::string::_M_replace((ulong)local_368, 0, (char*)0x0, (ulong)local_238);
            local_1f8 = (ulong*)*plVar5;
            puVar13 = (ulong*)( plVar5 + 2 );
            if (local_1f8 != puVar13) goto LAB_001050db;
            uVar12 = plVar5[1] + 1;
            puVar14 = puVar13;
            puVar27 = local_1e8;
            if (7 < (uint)uVar12) {
               uVar19 = 0;
               do {
                  uVar16 = (int)uVar19 + 8;
                  uVar18 = (ulong)uVar16;
                  *(undefined8*)( (long)local_1e8 + uVar19 ) = *(undefined8*)( (long)puVar13 + uVar19 );
                  uVar19 = uVar18;
               }
 while ( uVar16 < ( (uint)uVar12 & 0xfffffff8 ) );
               puVar27 = (ulong*)( (long)local_1e8 + uVar18 );
               puVar14 = (ulong*)( uVar18 + (long)puVar13 );
            }

            lVar28 = 0;
            if (( uVar12 & 4 ) != 0) {
               *(int*)puVar27 = (int)*puVar14;
               lVar28 = 4;
            }

            if (( uVar12 & 2 ) != 0) {
               *(undefined2*)( (long)puVar27 + lVar28 ) = *(undefined2*)( (long)puVar14 + lVar28 );
               lVar28 = lVar28 + 2;
            }

            local_1f8 = local_1e8;
            if (( uVar12 & 1 ) != 0) {
               *(undefined1*)( (long)puVar27 + lVar28 ) = *(undefined1*)( (long)puVar14 + lVar28 );
            }

         }

         local_1f0 = plVar5[1];
         *(undefined1*)( plVar5 + 2 ) = 0;
         bVar29 = errorHandler_abi_cxx11_._16_8_ == 0;
         *plVar5 = (long)puVar13;
         plVar5[1] = 0;
         this[0x1d8] = (spirvbin_t)0x1;
         if (bVar29) goto LAB_00106b56;
         ( *(code*)errorHandler_abi_cxx11_._24_8_ )(errorHandler_abi_cxx11_, &local_1f8);
         if (local_1f8 != local_1e8) {
            operator_delete(local_1f8, local_1e8[0] + 1);
         }

         if (local_238 != local_228) {
            operator_delete(local_238, local_228[0] + 1);
         }

         if (local_258 != local_248) {
            operator_delete(local_258, local_248[0] + 1);
         }

         if (local_298 != local_288) {
            operator_delete(local_298, local_288[0] + 1);
         }

         if (local_278 != local_378) {
            operator_delete(local_278, local_268[0] + 1);
         }

         if (local_218 != local_370) {
            operator_delete(local_218, local_208[0] + 1);
         }

         goto LAB_001042e2;
      }

      if (param_1 < 10) {
         local_1b8 = local_1a8;
         std::__cxx11::string::_M_construct(( ulong ) & local_1b8, '\x01');
         puVar13 = local_1b8;
         LAB_00105b06:cVar24 = (char)param_1 + '0';
      }
 else {
         if (param_1 < 100) {
            cVar24 = '\x01';
            LAB_00105999:local_1b8 = local_1a8;
            std::__cxx11::string::_M_construct(( ulong ) & local_1b8, cVar24 + '\x01');
            local_118 = __LC25;
            uStack_110 = _UNK_0010e2e8;
            uVar12 = ( ulong )(local_1b0 - 1);
            local_108 = __LC26;
            uStack_100 = _UNK_0010e2f8;
            local_f8 = __LC27;
            uStack_f0 = _UNK_0010e308;
            local_e8 = __LC28;
            uStack_e0 = _UNK_0010e318;
            local_d8 = __LC29;
            uStack_d0 = _UNK_0010e328;
            local_c8 = __LC30;
            uStack_c0 = _UNK_0010e338;
            local_b8 = __LC31;
            uStack_b0 = _UNK_0010e348;
            local_a8 = __LC32;
            uStack_a0 = _UNK_0010e358;
            local_98 = __LC33;
            uStack_90 = _UNK_0010e368;
            local_88 = __LC34;
            uStack_80 = _UNK_0010e378;
            local_78 = __LC35;
            uStack_70 = _UNK_0010e388;
            local_68 = __LC36;
            uStack_60 = (undefined1)_UNK_0010e398;
            uStack_5f = (undefined7)_LC37._0_8_;
            cStack_58 = SUB81(_LC37._0_8_, 7);
            for (int i = 0; i < 8; i++) {
               acStack_57[i] = _LC37[( i + 8 )];
            }

            puVar13 = local_1b8;
            if (99 < param_1) goto LAB_00105ab3;
         }
 else {
            if (param_1 < 1000) {
               cVar24 = '\x01';
               LAB_001062c2:cVar24 = cVar24 + '\x02';
            }
 else if (param_1 < 10000) {
               cVar24 = '\x01';
               LAB_001064d8:cVar24 = cVar24 + '\x03';
            }
 else {
               if (99999 < param_1) {
                  if (param_1 < 1000000) {
                     cVar24 = '\x05';
                  }
 else {
                     cVar24 = '\x05';
                     if (param_1 < 10000000) goto LAB_001062c2;
                     if (param_1 < 100000000) {
                        cVar24 = '\x05';
                        goto LAB_001064d8;
                     }

                     if (uVar19 < 1000000000) {
                        cVar24 = '\t';
                        goto LAB_001062c5;
                     }

                     cVar24 = '\t';
                  }

                  goto LAB_00105999;
               }

               cVar24 = '\x05';
            }

            LAB_001062c5:local_1b8 = local_1a8;
            std::__cxx11::string::_M_construct(( ulong ) & local_1b8, cVar24);
            local_118 = __LC25;
            uStack_110 = _UNK_0010e2e8;
            uVar12 = ( ulong )(local_1b0 - 1);
            local_108 = __LC26;
            uStack_100 = _UNK_0010e2f8;
            local_f8 = __LC27;
            uStack_f0 = _UNK_0010e308;
            local_e8 = __LC28;
            uStack_e0 = _UNK_0010e318;
            local_d8 = __LC29;
            uStack_d0 = _UNK_0010e328;
            local_c8 = __LC30;
            uStack_c0 = _UNK_0010e338;
            local_b8 = __LC31;
            uStack_b0 = _UNK_0010e348;
            local_a8 = __LC32;
            uStack_a0 = _UNK_0010e358;
            local_98 = __LC33;
            uStack_90 = _UNK_0010e368;
            local_88 = __LC34;
            uStack_80 = _UNK_0010e378;
            local_78 = __LC35;
            uStack_70 = _UNK_0010e388;
            local_68 = __LC36;
            uStack_60 = (undefined1)_UNK_0010e398;
            uStack_5f = (undefined7)_LC37._0_8_;
            cStack_58 = SUB81(_LC37._0_8_, 7);
            for (int i = 0; i < 8; i++) {
               acStack_57[i] = _LC37[( i + 8 )];
            }

            puVar13 = local_1b8;
            LAB_00105ab3:do {
               uVar26 = param_1;
               uVar19 = uVar19 / 100;
               param_1 = (uint)uVar19;
               iVar11 = (int)uVar12;
               uVar16 = ( uVar26 + param_1 * -100 ) * 2;
               uVar2 = *(undefined1*)( (long)&local_118 + (ulong)uVar16 );
               *(undefined1*)( (long)puVar13 + uVar12 ) = *(undefined1*)( (long)&local_118 + ( ulong )(uVar16 + 1) );
               uVar12 = ( ulong )(iVar11 - 2);
               *(undefined1*)( (long)puVar13 + ( ulong )(iVar11 - 1) ) = uVar2;
            }
 while ( 9999 < uVar26 );
            if (uVar26 < 1000) goto LAB_00105b06;
         }

         cVar24 = *(char*)( (long)&local_118 + ( ulong )(param_1 * 2) );
         *(undefined1*)( (long)puVar13 + 1 ) = *(undefined1*)( (long)&local_118 + ( ulong )(param_1 * 2 + 1) );
      }

      *(char*)puVar13 = cVar24;
      local_340 = 0x15;
      local_1d8 = local_1c8;
      local_1d8 = (ulong*)std::__cxx11::string::_M_create((ulong*)&local_1d8, ( ulong ) & local_340);
      uVar12 = _UNK_0010e3c8;
      local_1c8[0] = local_340;
      *local_1d8 = __LC39;
      local_1d8[1] = uVar12;
      *(undefined8*)( (long)local_1d8 + 0xd ) = 0x203a656c75646f6d;
      local_1d0 = local_340;
      *(undefined1*)( (long)local_1d8 + local_340 ) = 0;
      uVar12 = local_340 + CONCAT44(uStack_1ac, local_1b0);
      uVar19 = local_1a8[0];
      if (local_1d8 == local_1c8) {
         if (( 0xf < uVar12 ) && ( local_1b8 != local_1a8 )) goto LAB_00105bca;
         LAB_00105bd3:if (0x3fffffffffffffff - local_340 < CONCAT44(uStack_1ac, local_1b0)) goto LAB_00106af5;
         plVar5 = (long*)std::__cxx11::string::_M_append((char*)&local_1d8, (ulong)local_1b8);
         local_198 = local_188;
         puVar13 = (ulong*)( plVar5 + 2 );
         if ((ulong*)*plVar5 == puVar13) {
            uVar12 = plVar5[1] + 1;
            puVar14 = puVar13;
            puVar27 = local_198;
            if (7 < (uint)uVar12) {
               uVar19 = 0;
               do {
                  uVar16 = (int)uVar19 + 8;
                  uVar18 = (ulong)uVar16;
                  *(undefined8*)( (long)local_198 + uVar19 ) = *(undefined8*)( (long)puVar13 + uVar19 );
                  uVar19 = uVar18;
               }
 while ( uVar16 < ( (uint)uVar12 & 0xfffffff8 ) );
               puVar27 = (ulong*)( (long)local_198 + uVar18 );
               puVar14 = (ulong*)( uVar18 + (long)puVar13 );
            }

            lVar28 = 0;
            if (( uVar12 & 4 ) != 0) {
               *(int*)puVar27 = (int)*puVar14;
               lVar28 = 4;
            }

            if (( uVar12 & 2 ) != 0) {
               *(undefined2*)( (long)puVar27 + lVar28 ) = *(undefined2*)( (long)puVar14 + lVar28 );
               lVar28 = lVar28 + 2;
            }

            if (( uVar12 & 1 ) != 0) {
               *(char*)( (long)puVar27 + lVar28 ) = *(char*)( (long)puVar14 + lVar28 );
            }

         }
 else {
            local_188[0] = plVar5[2];
            local_198 = (ulong*)*plVar5;
         }

         local_190 = plVar5[1];
         *plVar5 = (long)puVar13;
         plVar5[1] = 0;
         *(undefined1*)( plVar5 + 2 ) = 0;
      }
 else {
         if (uVar12 <= local_340) goto LAB_00105bd3;
         if (local_1b8 == local_1a8) {
            uVar19 = 0xf;
         }

         LAB_00105bca:if (uVar19 < uVar12) goto LAB_00105bd3;
         plVar5 = (long*)std::__cxx11::string::_M_replace(( ulong ) & local_1b8, 0, (char*)0x0, (ulong)local_1d8);
         local_198 = local_188;
         puVar13 = (ulong*)( plVar5 + 2 );
         if ((ulong*)*plVar5 == puVar13) {
            uVar12 = plVar5[1] + 1;
            puVar14 = puVar13;
            puVar27 = local_198;
            if (7 < (uint)uVar12) {
               uVar19 = 0;
               do {
                  uVar16 = (int)uVar19 + 8;
                  uVar18 = (ulong)uVar16;
                  *(undefined8*)( (long)local_198 + uVar19 ) = *(undefined8*)( (long)puVar13 + uVar19 );
                  uVar19 = uVar18;
               }
 while ( uVar16 < ( (uint)uVar12 & 0xfffffff8 ) );
               puVar27 = (ulong*)( (long)local_198 + uVar18 );
               puVar14 = (ulong*)( uVar18 + (long)puVar13 );
            }

            lVar28 = 0;
            if (( uVar12 & 4 ) != 0) {
               *(int*)puVar27 = (int)*puVar14;
               lVar28 = 4;
            }

            if (( uVar12 & 2 ) != 0) {
               *(undefined2*)( (long)puVar27 + lVar28 ) = *(undefined2*)( (long)puVar14 + lVar28 );
               lVar28 = lVar28 + 2;
            }

            if (( uVar12 & 1 ) != 0) {
               *(char*)( (long)puVar27 + lVar28 ) = *(char*)( (long)puVar14 + lVar28 );
            }

         }
 else {
            local_188[0] = plVar5[2];
            local_198 = (ulong*)*plVar5;
         }

         local_190 = plVar5[1];
         *plVar5 = (long)puVar13;
         plVar5[1] = 0;
         *(undefined1*)( plVar5 + 2 ) = 0;
      }

      local_378 = local_188;
      bVar29 = errorHandler_abi_cxx11_._16_8_ == 0;
      this[0x1d8] = (spirvbin_t)0x1;
      if (bVar29) goto LAB_00106b56;
      ( *(code*)errorHandler_abi_cxx11_._24_8_ )(errorHandler_abi_cxx11_, &local_198);
      if (local_198 != local_378) {
         operator_delete(local_198, local_188[0] + 1);
      }

      if (local_1d8 != local_1c8) {
         operator_delete(local_1d8, local_1c8[0] + 1);
      }

      if (local_1b8 != local_1a8) {
         operator_delete(local_1b8, local_1a8[0] + 1);
      }

      goto LAB_001042e2;
   }

   if (param_1 < 10) {
      local_158 = local_148;
      std::__cxx11::string::_M_construct(( ulong ) & local_158, '\x01');
      LAB_0010487e:cVar24 = (char)param_1 + '0';
   }
 else {
      if (param_1 < 100) {
         local_158 = local_148;
         std::__cxx11::string::_M_construct(( ulong ) & local_158, '\x02');
         local_118 = __LC25;
         uStack_110 = _UNK_0010e2e8;
         local_108 = __LC26;
         uStack_100 = _UNK_0010e2f8;
         local_f8 = __LC27;
         uStack_f0 = _UNK_0010e308;
         local_e8 = __LC28;
         uStack_e0 = _UNK_0010e318;
         local_d8 = __LC29;
         uStack_d0 = _UNK_0010e328;
         local_c8 = __LC30;
         uStack_c0 = _UNK_0010e338;
         local_b8 = __LC31;
         uStack_b0 = _UNK_0010e348;
         local_a8 = __LC32;
         uStack_a0 = _UNK_0010e358;
         local_98 = __LC33;
         uStack_90 = _UNK_0010e368;
         local_88 = __LC34;
         uStack_80 = _UNK_0010e378;
         local_78 = __LC35;
         uStack_70 = _UNK_0010e388;
         local_68 = __LC36;
         uStack_60 = (undefined1)_UNK_0010e398;
         uStack_5f = (undefined7)_LC37._0_8_;
         cStack_58 = SUB81(_LC37._0_8_, 7);
         for (int i = 0; i < 8; i++) {
            acStack_57[i] = _LC37[( i + 8 )];
         }

      }
 else {
         if (param_1 < 1000) {
            cVar24 = '\x03';
         }
 else if (param_1 < 10000) {
            cVar24 = '\x04';
         }
 else {
            cVar24 = '\x05';
            if (99999 < param_1) {
               if (param_1 < 1000000) {
                  cVar24 = '\x05';
                  LAB_00104715:cVar24 = cVar24 + '\x01';
               }
 else {
                  cVar24 = '\a';
                  if (9999999 < param_1) {
                     if (param_1 < 100000000) {
                        cVar24 = '\b';
                     }
 else {
                        if (999999999 < param_1) {
                           cVar24 = '\t';
                           goto LAB_00104715;
                        }

                        cVar24 = '\t';
                     }

                  }

               }

            }

         }

         local_158 = local_148;
         uVar12 = (ulong)param_1;
         std::__cxx11::string::_M_construct(( ulong ) & local_158, cVar24);
         local_118 = __LC25;
         uStack_110 = _UNK_0010e2e8;
         uVar16 = local_150 - 1;
         local_108 = __LC26;
         uStack_100 = _UNK_0010e2f8;
         local_f8 = __LC27;
         uStack_f0 = _UNK_0010e308;
         local_e8 = __LC28;
         uStack_e0 = _UNK_0010e318;
         local_d8 = __LC29;
         uStack_d0 = _UNK_0010e328;
         local_c8 = __LC30;
         uStack_c0 = _UNK_0010e338;
         local_b8 = __LC31;
         uStack_b0 = _UNK_0010e348;
         local_a8 = __LC32;
         uStack_a0 = _UNK_0010e358;
         local_98 = __LC33;
         uStack_90 = _UNK_0010e368;
         local_88 = __LC34;
         uStack_80 = _UNK_0010e378;
         local_78 = __LC35;
         uStack_70 = _UNK_0010e388;
         local_68 = __LC36;
         uStack_60 = (undefined1)_UNK_0010e398;
         uStack_5f = (undefined7)_LC37._0_8_;
         cStack_58 = SUB81(_LC37._0_8_, 7);
         for (int i = 0; i < 8; i++) {
            acStack_57[i] = _LC37[( i + 8 )];
         }

         do {
            uVar17 = param_1;
            uVar12 = uVar12 / 100;
            param_1 = (uint)uVar12;
            uVar26 = ( uVar17 + param_1 * -100 ) * 2;
            uVar2 = *(undefined1*)( (long)&local_118 + (ulong)uVar26 );
            *(undefined1*)( (long)local_158 + (ulong)uVar16 ) = *(undefined1*)( (long)&local_118 + ( ulong )(uVar26 + 1) );
            uVar26 = uVar16 - 1;
            uVar16 = uVar16 - 2;
            *(undefined1*)( (long)local_158 + (ulong)uVar26 ) = uVar2;
         }
 while ( 9999 < uVar17 );
         if (uVar17 < 1000) goto LAB_0010487e;
      }

      cVar24 = *(char*)( (long)&local_118 + ( ulong )(param_1 * 2) );
      *(undefined1*)( (long)local_158 + 1 ) = *(undefined1*)( (long)&local_118 + ( ulong )(param_1 * 2 + 1) );
   }

   *(char*)local_158 = cVar24;
   local_340 = 0x11;
   local_178 = local_168;
   local_178 = (ulong*)std::__cxx11::string::_M_create((ulong*)&local_178, ( ulong ) & local_340);
   uVar12 = _UNK_0010e3b8;
   local_168[0] = local_340;
   *local_178 = __LC38;
   local_178[1] = uVar12;
   *(undefined1*)( local_178 + 2 ) = 0x20;
   local_170 = local_340;
   *(undefined1*)( (long)local_178 + local_340 ) = 0;
   uVar12 = local_340 + CONCAT44(uStack_14c, local_150);
   uVar19 = local_148[0];
   if (local_178 == local_168) {
      if (( 0xf < uVar12 ) && ( local_158 != local_148 )) goto LAB_0010493e;
      LAB_0010494a:if (0x3fffffffffffffff - local_340 < CONCAT44(uStack_14c, local_150)) {
         LAB_00106af5:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::append");
      }

      plVar5 = (long*)std::__cxx11::string::_M_append((char*)&local_178, (ulong)local_158);
      local_138 = (string*)local_128;
      psVar20 = (string*)*plVar5;
      psVar15 = (string*)( plVar5 + 2 );
      if (psVar20 == psVar15) {
         uVar12 = plVar5[1] + 1;
         psVar21 = psVar15;
         psVar20 = local_138;
         if (7 < (uint)uVar12) {
            uVar19 = 0;
            do {
               uVar16 = (int)uVar19 + 8;
               uVar18 = (ulong)uVar16;
               *(undefined8*)( local_138 + uVar19 ) = *(undefined8*)( psVar15 + uVar19 );
               uVar19 = uVar18;
            }
 while ( uVar16 < ( (uint)uVar12 & 0xfffffff8 ) );
            psVar20 = local_138 + uVar18;
            psVar21 = psVar15 + uVar18;
         }

         lVar28 = 0;
         if (( uVar12 & 4 ) != 0) {
            *(undefined4*)psVar20 = *(undefined4*)psVar21;
            lVar28 = 4;
         }

         if (( uVar12 & 2 ) != 0) {
            *(undefined2*)( psVar20 + lVar28 ) = *(undefined2*)( psVar21 + lVar28 );
            lVar28 = lVar28 + 2;
         }

         if (( uVar12 & 1 ) != 0) {
            psVar20[lVar28] = psVar21[lVar28];
         }

      }
 else {
         LAB_00104988:local_128[0] = plVar5[2];
         local_138 = psVar20;
      }

   }
 else {
      if (uVar12 <= local_340) goto LAB_0010494a;
      if (local_158 == local_148) {
         uVar19 = 0xf;
      }

      LAB_0010493e:if (uVar19 < uVar12) goto LAB_0010494a;
      plVar5 = (long*)std::__cxx11::string::_M_replace(( ulong ) & local_158, 0, (char*)0x0, (ulong)local_178);
      local_138 = (string*)local_128;
      psVar20 = (string*)*plVar5;
      psVar15 = (string*)( plVar5 + 2 );
      if (psVar20 != psVar15) goto LAB_00104988;
      uVar12 = plVar5[1] + 1;
      psVar21 = psVar15;
      psVar20 = local_138;
      if (7 < (uint)uVar12) {
         uVar19 = 0;
         do {
            uVar16 = (int)uVar19 + 8;
            uVar18 = (ulong)uVar16;
            *(undefined8*)( local_138 + uVar19 ) = *(undefined8*)( psVar15 + uVar19 );
            uVar19 = uVar18;
         }
 while ( uVar16 < ( (uint)uVar12 & 0xfffffff8 ) );
         psVar20 = local_138 + uVar18;
         psVar21 = psVar15 + uVar18;
      }

      lVar28 = 0;
      if (( uVar12 & 4 ) != 0) {
         *(undefined4*)psVar20 = *(undefined4*)psVar21;
         lVar28 = 4;
      }

      if (( uVar12 & 2 ) != 0) {
         *(undefined2*)( psVar20 + lVar28 ) = *(undefined2*)( psVar21 + lVar28 );
         lVar28 = lVar28 + 2;
      }

      if (( uVar12 & 1 ) != 0) {
         psVar20[lVar28] = psVar21[lVar28];
      }

   }

   local_130 = plVar5[1];
   *(undefined1*)( plVar5 + 2 ) = 0;
   bVar29 = errorHandler_abi_cxx11_._16_8_ == 0;
   *plVar5 = (long)psVar15;
   plVar5[1] = 0;
   this[0x1d8] = (spirvbin_t)0x1;
   if (bVar29) {
      LAB_00106b56:/* WARNING: Subroutine does not return */std::__throw_bad_function_call();
   }

   ( *(code*)errorHandler_abi_cxx11_._24_8_ )(errorHandler_abi_cxx11_, &local_138);
   if (local_138 != (string*)local_128) {
      operator_delete(local_138, local_128[0] + 1);
   }

   if (local_178 != local_168) {
      operator_delete(local_178, local_168[0] + 1);
   }

   if (local_158 != local_148) {
      operator_delete(local_158, local_148[0] + 1);
   }

   LAB_001042e2:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* spv::spirvbin_t::mapTypeConst() */void spv::spirvbin_t::mapTypeConst(spirvbin_t *this) {
   uint uVar1;
   code *pcVar2;
   long lVar3;
   uint uVar4;
   _Rb_tree_node_base *p_Var5;
   ulong uVar6;
   ulong uVar7;
   string *extraout_RDX;
   ulong uVar8;
   long in_FS_OFFSET;
   undefined4 local_80[2];
   undefined8 local_78;
   undefined4 *local_70;
   undefined4 *local_68;
   undefined8 local_60;
   long *local_58[2];
   long local_48[3];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = local_80;
   local_80[0] = 0;
   local_78 = 0;
   pcVar2 = *(code**)( *(long*)this + 0x10 );
   local_60 = 0;
   local_68 = local_70;
   local_58[0] = local_48;
   std::__cxx11::string::_M_construct<char_const*>(local_58, "Remapping Consts & Types: ");
   if (pcVar2 == msg) {
      if (2 < *(int*)( this + 0x1d4 )) {
         msg(2, (int)local_58, extraout_RDX);
      }

   }
 else {
      ( *pcVar2 )(this, 3, 2, local_58);
   }

   if (local_58[0] != local_48) {
      operator_delete(local_58[0], local_48[0] + 1);
   }

   for (p_Var5 = *(_Rb_tree_node_base**)( this + 0x110 ); p_Var5 != (_Rb_tree_node_base*)( this + 0x100 ); p_Var5 = (_Rb_tree_node_base*)std::_Rb_tree_increment(p_Var5)) {
      uVar4 = *(uint*)( p_Var5 + 0x20 );
      uVar1 = *(uint*)( *(long*)( this + 8 ) + ( ulong )(uVar4 + 1 + ( uint )(0x13 < *(ushort*)( *(long*)( this + 8 ) + (ulong)uVar4 * 4 ) - 0x13)) * 4 );
      uVar4 = hashType(this, uVar4);
      if (this[0x1d8] != (spirvbin_t)0x0) break;
      if (*(int*)( *(long*)( this + 0x198 ) + (ulong)uVar1 * 4 ) == -10000) {
         lVar3 = *(long*)( this + 0x70 );
         uVar8 = ( *(long*)( this + 0x78 ) - lVar3 >> 3 ) << 5;
         uVar4 = uVar4 % 0xbc3 + 8;
         uVar6 = (ulong)uVar4;
         if (uVar6 < uVar8) {
            uVar7 = 1L << ( (byte)uVar4 & 0x1f ) & *(ulong*)( lVar3 + ( ulong )(uVar4 >> 5) * 8 );
            while (uVar7 != 0) {
               uVar4 = (int)uVar6 + 1;
               uVar6 = (ulong)uVar4;
               if (uVar8 <= uVar6) break;
               uVar7 = 1L << ( (byte)uVar4 & 0x1f ) & *(ulong*)( lVar3 + ( ulong )(uVar4 >> 5) * 8 );
            }
;
         }

         localId(this, uVar1, uVar4);
         if (this[0x1d8] != (spirvbin_t)0x0) break;
      }

   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>,std::_Select1st<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>>::_M_erase((_Rb_tree_node*)0x0);
   return;
}
/* spv::spirvbin_t::mapFnBodies() */void spv::spirvbin_t::mapFnBodies(spirvbin_t *this) {
   ushort uVar1;
   long lVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   uint uVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   ulong uVar10;
   long *plVar11;
   void *__dest;
   uint uVar12;
   ulong uVar13;
   ulong uVar14;
   ulong uVar15;
   long lVar16;
   long lVar17;
   uint uVar18;
   int iVar19;
   long in_FS_OFFSET;
   int local_f4;
   undefined4 local_f0;
   undefined4 local_ec;
   undefined1 local_e8[16];
   void *local_d8;
   undefined8 *local_c8;
   long local_c0;
   undefined8 *local_b8;
   undefined8 local_b0;
   undefined4 local_a8;
   undefined8 local_a0;
   undefined8 local_98[2];
   undefined1 local_88[16];
   code *local_78;
   code *pcStack_70;
   undefined1 local_68[16];
   code *local_58;
   code *pcStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_e8 = (undefined1[16])0x0;
   local_f4 = 0;
   local_d8 = (void*)0x0;
   uVar6 = ( uint )(*(long*)( this + 0x10 ) - *(long*)( this + 8 ) >> 2) >> 4;
   if (uVar6 == 0) goto LAB_00106dda;
   uVar13 = (ulong)uVar6 * 4;
   __dest = operator_new(uVar13);
   uVar5 = local_e8._0_8_;
   if ((long)( local_e8._8_8_ - local_e8._0_8_ ) < 1) {
      if ((void*)local_e8._0_8_ != (void*)0x0) {
         uVar15 = (long)local_d8 - local_e8._0_8_;
         goto LAB_0010739c;
      }

   }
 else {
      memmove(__dest, (void*)local_e8._0_8_, local_e8._8_8_ - local_e8._0_8_);
      uVar15 = (long)local_d8 - uVar5;
      LAB_0010739c:operator_delete((void*)uVar5, uVar15);
   }

   local_d8 = (void*)( (long)__dest + uVar13 );
   local_e8._8_8_ = __dest;
   local_e8._0_8_ = __dest;
   LAB_00106dda:local_68 = (undefined1[16])0x0;
   local_88._8_8_ = 0;
   local_88._0_8_ = local_e8;
   local_58 = std::_Function_handler<void(unsigned_int &),spv::op_fn_nop::{lambda(unsigned_int &)#1}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(unsigned_int &),spv::op_fn_nop::{lambda(unsigned_int &)#1}>::_M_invoke;
   local_78 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::mapFnBodies()::{lambda(spv::Op, unsigned_int)#1}>::_M_manager;
   pcStack_70 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::mapFnBodies()::{lambda(spv::Op, unsigned_int)#1}>::_M_invoke;
   process(this, local_88, local_68, 0, 0);
   if (local_78 != (code*)0x0) {
      ( *local_78 )(local_88, local_88, 3);
   }

   if (local_58 != (code*)0x0) {
      ( *local_58 )(local_68, local_68, 3);
   }

   if (this[0x1d8] == (spirvbin_t)0x0) {
      uVar13 = 0;
      lVar16 = local_e8._0_8_;
      lVar17 = local_e8._8_8_;
      if ((int)( (long)( local_e8._8_8_ - local_e8._0_8_ ) >> 2 ) != 0) {
         do {
            uVar6 = *(uint*)( lVar16 + uVar13 * 4 );
            lVar2 = *(long*)( this + 8 );
            uVar1 = *(ushort*)( lVar2 + (ulong)uVar6 * 4 );
            if (uVar1 == 0x36) {
               local_f4 = *(int*)( lVar2 + ( ulong )(uVar6 + 2) * 4 );
               LAB_00106f22:if (( local_f4 != 0 ) && ( ( ( &__cxxabiv1::__class_type_info::vtable )[(ulong)uVar1 * 0x70] & 2 ) != 0 )) {
                  uVar9 = (uint)uVar13;
                  uVar15 = uVar13 & 0xffffffff;
                  uVar18 = local_f4 * 0x11;
                  uVar6 = *(uint*)( lVar2 + ( ulong )(uVar6 + 1 + ( ( byte )(&__cxxabiv1::__class_type_info::vtable)[(ulong)uVar1 * 0x70] & 1 )) * 4 );
                  uVar12 = uVar9;
                  while (uVar12 = uVar12 - 1,uVar9 - 2 <= uVar12) {
                     uVar8 = *(uint*)( lVar16 + (ulong)uVar12 * 4 );
                     uVar7 = ( uint ) * (ushort*)( lVar2 + (ulong)uVar8 * 4 );
                     if (uVar7 == 0x36) break;
                     iVar19 = 0;
                     if (uVar7 == 0xc) {
                        iVar19 = *(int*)( lVar2 + ( ulong )(uVar8 + 4) * 4 );
                     }

                     uVar18 = uVar18 * 0x7597 + uVar7 * 0x13 + iVar19;
                  }
;
                  if (uVar9 != 0xfffffffe) {
                     do {
                        uVar12 = *(uint*)( lVar16 + uVar15 * 4 );
                        uVar8 = ( uint ) * (ushort*)( lVar2 + (ulong)uVar12 * 4 );
                        if (uVar8 == 0x38) break;
                        iVar19 = 0;
                        if (uVar8 == 0xc) {
                           iVar19 = *(int*)( lVar2 + ( ulong )(uVar12 + 4) * 4 );
                        }

                        uVar12 = (int)uVar15 + 1;
                        uVar15 = (ulong)uVar12;
                        uVar18 = uVar18 * 0x7597 + uVar8 * 0x13 + iVar19;
                     }
 while ( uVar12 <= uVar9 + 2 );
                  }

                  if (*(int*)( *(long*)( this + 0x198 ) + (ulong)uVar6 * 4 ) == -10000) {
                     lVar16 = *(long*)( this + 0x70 );
                     uVar14 = ( *(long*)( this + 0x78 ) - lVar16 >> 3 ) << 5;
                     uVar9 = uVar18 % 0x4a7f + 0x183b;
                     uVar15 = (ulong)uVar9;
                     if (uVar15 < uVar14) {
                        uVar10 = 1L << ( (byte)uVar9 & 0x1f ) & *(ulong*)( lVar16 + ( ulong )(uVar9 >> 5) * 8 );
                        while (uVar10 != 0) {
                           uVar9 = (int)uVar15 + 1;
                           uVar15 = (ulong)uVar9;
                           if (uVar14 <= uVar15) break;
                           uVar10 = 1L << ( (byte)uVar9 & 0x1f ) & *(ulong*)( lVar16 + ( ulong )(uVar9 >> 5) * 8 );
                        }
;
                     }

                     localId(this, uVar6, uVar9);
                     if (this[0x1d8] != (spirvbin_t)0x0) goto LAB_001072e8;
                     lVar16 = local_e8._0_8_;
                     lVar17 = local_e8._8_8_;
                  }

               }

            }
 else {
               if (uVar1 != 0x38) goto LAB_00106f22;
               local_f4 = 0;
            }

            uVar13 = uVar13 + 1;
         }
 while ( (uint)uVar13 < ( uint )(lVar17 - lVar16 >> 2) );
      }

      local_68 = (undefined1[16])0x0;
      local_f0 = 0;
      local_c0 = 1;
      local_b8 = (undefined8*)0x0;
      local_b0 = 0;
      local_a8 = 0x3f800000;
      local_a0 = 0;
      local_98[0] = 0;
      local_ec = 0;
      local_f4 = 0;
      local_58 = (code*)0x0;
      pcStack_50 = (code*)0x0;
      local_c8 = local_98;
      plVar11 = (long*)operator_new(0x28);
      plVar11[4] = (long)this;
      *plVar11 = (long)&local_f0;
      plVar11[1] = (long)&local_ec;
      local_68._0_8_ = plVar11;
      local_88 = (undefined1[16])0x0;
      plVar11[2] = (long)&local_c8;
      plVar11[3] = (long)&local_f4;
      local_78 = (code*)0x0;
      pcStack_70 = (code*)0x0;
      local_58 = std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::mapFnBodies()::{lambda(unsigned_int &)#1}>::_M_manager;
      pcStack_50 = std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::mapFnBodies()::{lambda(unsigned_int &)#1}>::_M_invoke;
      plVar11 = (long*)operator_new(0x28);
      plVar11[4] = (long)&local_f0;
      plVar11[2] = (long)&local_f4;
      plVar11[3] = (long)this;
      *plVar11 = (long)&local_ec;
      plVar11[1] = (long)&local_c8;
      local_88._0_8_ = plVar11;
      local_78 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::mapFnBodies()::{lambda(spv::Op, unsigned_int)#2}>::_M_manager;
      pcStack_70 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::mapFnBodies()::{lambda(spv::Op, unsigned_int)#2}>::_M_invoke;
      process(this, local_88, local_68, 0, 0);
      if (local_78 != (code*)0x0) {
         ( *local_78 )(local_88, local_88, 3);
      }

      puVar4 = local_b8;
      if (local_58 != (code*)0x0) {
         ( *local_58 )(local_68, local_68, 3);
         puVar4 = local_b8;
      }

      while (puVar4 != (undefined8*)0x0) {
         puVar3 = (undefined8*)*puVar4;
         operator_delete(puVar4, 0x10);
         puVar4 = puVar3;
      }
;
      memset(local_c8, 0, local_c0 * 8);
      local_b0 = 0;
      local_b8 = (undefined8*)0x0;
      if (local_c8 != local_98) {
         operator_delete(local_c8, local_c0 << 3);
      }

   }

   LAB_001072e8:if ((void*)local_e8._0_8_ != (void*)0x0) {
      operator_delete((void*)local_e8._0_8_, (long)local_d8 - local_e8._0_8_);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* spv::spirvbin_t::mapNames() */void spv::spirvbin_t::mapNames(spirvbin_t *this) {
   undefined8 *puVar1;
   long lVar2;
   char *pcVar3;
   ulong uVar4;
   ulong uVar5;
   uint uVar6;
   char *pcVar7;
   ulong uVar8;
   puVar1 = *(undefined8**)( this + 0x48 );
   do {
      if (puVar1 == (undefined8*)0x0) {
         return;
      }

      pcVar3 = (char*)puVar1[1];
      uVar6 = 0x777;
      pcVar7 = pcVar3 + puVar1[2];
      for (; pcVar7 != pcVar3; pcVar3 = pcVar3 + 1) {
         uVar6 = uVar6 * 0x3f1 + (int)*pcVar3;
      }

      if (*(int*)( *(long*)( this + 0x198 ) + ( ulong ) * (uint*)( puVar1 + 5 ) * 4 ) == -10000) {
         lVar2 = *(long*)( this + 0x70 );
         uVar8 = ( *(long*)( this + 0x78 ) - lVar2 >> 3 ) << 5;
         uVar6 = uVar6 % 0xbc3 + 0xbcb;
         uVar4 = (ulong)uVar6;
         if (uVar4 < uVar8) {
            uVar5 = 1L << ( (byte)uVar6 & 0x1f ) & *(ulong*)( lVar2 + ( ulong )(uVar6 >> 5) * 8 );
            while (uVar5 != 0) {
               uVar6 = (int)uVar4 + 1;
               uVar4 = (ulong)uVar6;
               if (uVar8 <= uVar4) break;
               uVar5 = 1L << ( (byte)uVar6 & 0x1f ) & *(ulong*)( lVar2 + ( ulong )(uVar6 >> 5) * 8 );
            }
;
         }

         localId(this, *(uint*)( puVar1 + 5 ), uVar6);
         if (this[0x1d8] != (spirvbin_t)0x0) {
            return;
         }

      }

      puVar1 = (undefined8*)*puVar1;
   }
 while ( true );
}
/* std::_Function_handler<void (unsigned int&), spv::spirvbin_t::buildLocalMaps()::{lambda(unsigned
   int&)#1}>::_M_invoke(std::_Any_data const&, unsigned int&) */void std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::buildLocalMaps()::{lambda(unsigned_int&)#1}>
     ::_M_invoke(_Any_data *param_1,uint *param_2)

{spv::spirvbin_t::localId(*(spirvbin_t**)param_1, *param_2, 0xffffd8f0)return;}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* spv::spirvbin_t::mapRemainder() */void spv::spirvbin_t::mapRemainder(spirvbin_t *this) {
   long *plVar1;
   undefined1 uVar2;
   code *pcVar3;
   uint uVar4;
   int iVar5;
   uint uVar6;
   ulong uVar7;
   long *plVar8;
   uint uVar9;
   uint uVar10;
   string *extraout_RDX;
   ulong uVar11;
   long *plVar12;
   ulong uVar13;
   char cVar14;
   ulong uVar15;
   long lVar16;
   long *plVar17;
   long in_FS_OFFSET;
   bool bVar18;
   ulong local_180;
   ulong *local_178;
   ulong local_170;
   ulong local_168[2];
   ulong *local_158;
   int local_150;
   undefined4 uStack_14c;
   ulong local_148[2];
   long *local_138;
   long local_130;
   long local_128[2];
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
   pcVar3 = *(code**)( *(long*)this + 0x10 );
   local_138 = local_128;
   std::__cxx11::string::_M_construct<char_const*>(&local_138, "Remapping remainder: ");
   if (pcVar3 == msg) {
      if (2 < *(int*)( this + 0x1d4 )) {
         msg(2, (int)&local_138, extraout_RDX);
      }

   }
 else {
      ( *pcVar3 )(this, 3, 2, &local_138);
   }

   if (local_138 != local_128) {
      operator_delete(local_138, local_128[0] + 1);
   }

   lVar16 = *(long*)( this + 0x198 );
   uVar9 = 0;
   if (lVar16 != *(long*)( this + 0x1a0 )) {
      uVar11 = 0;
      uVar13 = 1;
      do {
         uVar10 = (uint)uVar11;
         iVar5 = *(int*)( lVar16 + uVar11 * 4 );
         if (iVar5 != -0x2711) {
            if (iVar5 == -10000) {
               lVar16 = *(long*)( this + 0x70 );
               uVar15 = ( *(long*)( this + 0x78 ) - lVar16 >> 3 ) << 5;
               if (uVar13 < uVar15) {
                  uVar7 = 1L << ( (byte)uVar13 & 0x1f ) & *(ulong*)( lVar16 + ( uVar13 >> 5 ) * 8 );
                  while (uVar7 != 0) {
                     uVar4 = (int)uVar13 + 1;
                     uVar13 = (ulong)uVar4;
                     if (uVar15 <= uVar13) break;
                     uVar7 = 1L << ( (byte)uVar4 & 0x1f ) & *(ulong*)( lVar16 + ( ulong )(uVar4 >> 5) * 8 );
                  }
;
               }

               localId(this, uVar10, (uint)uVar13);
               if (this[0x1d8] != (spirvbin_t)0x0) goto LAB_001075db;
               lVar16 = *(long*)( this + 0x198 );
               iVar5 = *(int*)( lVar16 + uVar11 * 4 );
               if (iVar5 == -10000) {
                  if (uVar10 < 10) {
                     local_158 = local_148;
                     std::__cxx11::string::_M_construct(( ulong ) & local_158, '\x01');
                     goto LAB_00107aa3;
                  }

                  if (99 < uVar10) {
                     if (uVar10 < 1000) {
                        cVar14 = '\x03';
                     }
 else if (uVar10 < 10000) {
                        cVar14 = '\x04';
                     }
 else {
                        cVar14 = '\x05';
                        if (99999 < uVar10) {
                           if (uVar10 < 1000000) {
                              cVar14 = '\x05';
                              LAB_0010773f:cVar14 = cVar14 + '\x01';
                           }
 else {
                              cVar14 = '\a';
                              if (9999999 < uVar10) {
                                 if (uVar10 < 100000000) {
                                    cVar14 = '\b';
                                 }
 else {
                                    if (999999999 < uVar11) {
                                       cVar14 = '\t';
                                       goto LAB_0010773f;
                                    }

                                    cVar14 = '\t';
                                 }

                              }

                           }

                        }

                     }

                     local_158 = local_148;
                     std::__cxx11::string::_M_construct(( ulong ) & local_158, cVar14);
                     uVar9 = local_150 - 1;
                     local_118 = __LC25;
                     uStack_110 = _UNK_0010e2e8;
                     local_108 = __LC26;
                     uStack_100 = _UNK_0010e2f8;
                     local_f8 = __LC27;
                     uStack_f0 = _UNK_0010e308;
                     local_e8 = __LC28;
                     uStack_e0 = _UNK_0010e318;
                     local_d8 = __LC29;
                     uStack_d0 = _UNK_0010e328;
                     local_c8 = __LC30;
                     uStack_c0 = _UNK_0010e338;
                     local_b8 = __LC31;
                     uStack_b0 = _UNK_0010e348;
                     local_a8 = __LC32;
                     uStack_a0 = _UNK_0010e358;
                     local_98 = __LC33;
                     uStack_90 = _UNK_0010e368;
                     local_88 = __LC34;
                     uStack_80 = _UNK_0010e378;
                     local_78 = __LC35;
                     uStack_70 = _UNK_0010e388;
                     local_68 = __LC36;
                     uStack_60 = (undefined1)_UNK_0010e398;
                     uStack_5f = (undefined7)_LC37._0_8_;
                     cStack_58 = SUB81(_LC37._0_8_, 7);
                     for (int i = 0; i < 8; i++) {
                        acStack_57[i] = _LC37[( i + 8 )];
                     }

                     do {
                        uVar10 = ( uint )(uVar11 / 100);
                        uVar6 = (uint)uVar11;
                        uVar4 = ( uVar6 + uVar10 * -100 ) * 2;
                        uVar2 = *(undefined1*)( (long)&local_118 + (ulong)uVar4 );
                        *(undefined1*)( (long)local_158 + (ulong)uVar9 ) = *(undefined1*)( (long)&local_118 + ( ulong )(uVar4 + 1) );
                        uVar4 = uVar9 - 1;
                        uVar9 = uVar9 - 2;
                        *(undefined1*)( (long)local_158 + (ulong)uVar4 ) = uVar2;
                        uVar11 = uVar11 / 100;
                     }
 while ( 9999 < uVar6 );
                     if (uVar6 < 1000) {
                        LAB_00107aa3:cVar14 = (char)uVar10 + '0';
                     }
 else {
                        LAB_0010789a:cVar14 = *(char*)( (long)&local_118 + ( ulong )(uVar10 * 2) );
                        *(undefined1*)( (long)local_158 + 1 ) = *(undefined1*)( (long)&local_118 + ( ulong )(uVar10 * 2 + 1) );
                     }

                     *(char*)local_158 = cVar14;
                     local_180 = 0x13;
                     local_178 = local_168;
                     local_178 = (ulong*)std::__cxx11::string::_M_create((ulong*)&local_178, ( ulong ) & local_180);
                     uVar13 = _UNK_0010e408;
                     local_168[0] = local_180;
                     *local_178 = __LC46;
                     local_178[1] = uVar13;
                     *(undefined4*)( (long)local_178 + 0xf ) = 0x203a6465;
                     local_170 = local_180;
                     *(undefined1*)( (long)local_178 + local_180 ) = 0;
                     uVar13 = local_180 + CONCAT44(uStack_14c, local_150);
                     uVar11 = local_148[0];
                     if (local_178 == local_168) {
                        if (( 0xf < uVar13 ) && ( local_158 != local_148 )) goto LAB_0010794b;
                        LAB_00107957:if (0x3fffffffffffffff - local_180 < CONCAT44(uStack_14c, local_150)) {
                           /* WARNING: Subroutine does not return */
                           std::__throw_length_error("basic_string::append");
                        }

                        plVar8 = (long*)std::__cxx11::string::_M_append((char*)&local_178, (ulong)local_158);
                        plVar1 = plVar8 + 2;
                        if ((long*)*plVar8 == plVar1) {
                           uVar13 = plVar8[1] + 1;
                           plVar12 = plVar1;
                           plVar17 = local_128;
                           if (7 < (uint)uVar13) {
                              uVar11 = 0;
                              do {
                                 uVar9 = (int)uVar11 + 8;
                                 uVar15 = (ulong)uVar9;
                                 *(undefined8*)( (long)local_128 + uVar11 ) = *(undefined8*)( (long)plVar1 + uVar11 );
                                 uVar11 = uVar15;
                              }
 while ( uVar9 < ( (uint)uVar13 & 0xfffffff8 ) );
                              plVar17 = (long*)( (long)local_128 + uVar15 );
                              plVar12 = (long*)( uVar15 + (long)plVar1 );
                           }

                           lVar16 = 0;
                           if (( uVar13 & 4 ) != 0) {
                              *(int*)plVar17 = (int)*plVar12;
                              lVar16 = 4;
                           }

                           if (( uVar13 & 2 ) != 0) {
                              *(undefined2*)( (long)plVar17 + lVar16 ) = *(undefined2*)( (long)plVar12 + lVar16 );
                              lVar16 = lVar16 + 2;
                           }

                           local_138 = local_128;
                           if (( uVar13 & 1 ) != 0) {
                              *(undefined1*)( (long)plVar17 + lVar16 ) = *(undefined1*)( (long)plVar12 + lVar16 );
                           }

                        }
 else {
                           local_128[0] = plVar8[2];
                           local_138 = (long*)*plVar8;
                        }

                        local_130 = plVar8[1];
                        *plVar8 = (long)plVar1;
                        plVar8[1] = 0;
                        *(undefined1*)( plVar8 + 2 ) = 0;
                     }
 else {
                        if (uVar13 <= local_180) goto LAB_00107957;
                        if (local_158 == local_148) {
                           uVar11 = 0xf;
                        }

                        LAB_0010794b:if (uVar11 < uVar13) goto LAB_00107957;
                        plVar8 = (long*)std::__cxx11::string::_M_replace(( ulong ) & local_158, 0, (char*)0x0, (ulong)local_178);
                        plVar1 = plVar8 + 2;
                        if ((long*)*plVar8 == plVar1) {
                           uVar13 = plVar8[1] + 1;
                           plVar12 = plVar1;
                           plVar17 = local_128;
                           if (7 < (uint)uVar13) {
                              uVar11 = 0;
                              do {
                                 uVar9 = (int)uVar11 + 8;
                                 uVar15 = (ulong)uVar9;
                                 *(undefined8*)( (long)local_128 + uVar11 ) = *(undefined8*)( (long)plVar1 + uVar11 );
                                 uVar11 = uVar15;
                              }
 while ( uVar9 < ( (uint)uVar13 & 0xfffffff8 ) );
                              plVar17 = (long*)( (long)local_128 + uVar15 );
                              plVar12 = (long*)( uVar15 + (long)plVar1 );
                           }

                           lVar16 = 0;
                           if (( uVar13 & 4 ) != 0) {
                              *(int*)plVar17 = (int)*plVar12;
                              lVar16 = 4;
                           }

                           if (( uVar13 & 2 ) != 0) {
                              *(undefined2*)( (long)plVar17 + lVar16 ) = *(undefined2*)( (long)plVar12 + lVar16 );
                              lVar16 = lVar16 + 2;
                           }

                           local_138 = local_128;
                           if (( uVar13 & 1 ) != 0) {
                              *(undefined1*)( (long)plVar17 + lVar16 ) = *(undefined1*)( (long)plVar12 + lVar16 );
                           }

                        }
 else {
                           local_128[0] = plVar8[2];
                           local_138 = (long*)*plVar8;
                        }

                        local_130 = plVar8[1];
                        *plVar8 = (long)plVar1;
                        plVar8[1] = 0;
                        *(undefined1*)( plVar8 + 2 ) = 0;
                     }

                     bVar18 = errorHandler_abi_cxx11_._16_8_ == 0;
                     this[0x1d8] = (spirvbin_t)0x1;
                     if (bVar18) {
                        /* WARNING: Subroutine does not return */
                        std::__throw_bad_function_call();
                     }

                     ( *(code*)errorHandler_abi_cxx11_._24_8_ )(errorHandler_abi_cxx11_, &local_138);
                     if (local_138 != local_128) {
                        operator_delete(local_138, local_128[0] + 1);
                     }

                     if (local_178 != local_168) {
                        operator_delete(local_178, local_168[0] + 1);
                     }

                     if (local_158 != local_148) {
                        operator_delete(local_158, local_148[0] + 1);
                     }

                     goto LAB_001075db;
                  }

                  local_158 = local_148;
                  std::__cxx11::string::_M_construct(( ulong ) & local_158, '\x02');
                  local_118 = __LC25;
                  uStack_110 = _UNK_0010e2e8;
                  local_108 = __LC26;
                  uStack_100 = _UNK_0010e2f8;
                  local_f8 = __LC27;
                  uStack_f0 = _UNK_0010e308;
                  local_e8 = __LC28;
                  uStack_e0 = _UNK_0010e318;
                  local_d8 = __LC29;
                  uStack_d0 = _UNK_0010e328;
                  local_c8 = __LC30;
                  uStack_c0 = _UNK_0010e338;
                  local_b8 = __LC31;
                  uStack_b0 = _UNK_0010e348;
                  local_a8 = __LC32;
                  uStack_a0 = _UNK_0010e358;
                  local_98 = __LC33;
                  uStack_90 = _UNK_0010e368;
                  local_88 = __LC34;
                  uStack_80 = _UNK_0010e378;
                  local_78 = __LC35;
                  uStack_70 = _UNK_0010e388;
                  local_68 = __LC36;
                  uStack_60 = (undefined1)_UNK_0010e398;
                  uStack_5f = (undefined7)_LC37._0_8_;
                  cStack_58 = SUB81(_LC37._0_8_, 7);
                  for (int i = 0; i < 8; i++) {
                     acStack_57[i] = _LC37[( i + 8 )];
                  }

                  goto LAB_0010789a;
               }

            }
 else if (this[0x1d8] != (spirvbin_t)0x0) goto LAB_001075db;
            if (uVar9 < iVar5 + 1U) {
               uVar9 = iVar5 + 1U;
            }

         }

         uVar11 = ( ulong )(uVar10 + 1);
      }
 while ( uVar11 < ( ulong )(*(long*)( this + 0x1a0 ) - lVar16 >> 2) );
   }

   *(uint*)( *(long*)( this + 8 ) + 0xc ) = uVar9;
   LAB_001075db:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::spirvbin_t::buildLocalMaps() */void spv::spirvbin_t::buildLocalMaps(spirvbin_t *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   void *pvVar4;
   long lVar5;
   void *pvVar6;
   ulong uVar7;
   undefined8 *puVar8;
   string *extraout_RDX;
   ulong uVar9;
   long in_FS_OFFSET;
   undefined4 local_80;
   undefined4 local_7c;
   undefined1 local_78[16];
   code *local_68;
   code *pcStack_60;
   spirvbin_t *local_58;
   undefined8 local_50;
   code *local_48;
   code *pcStack_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar2 = *(code**)( *(long*)this + 0x10 );
   local_58 = (spirvbin_t*)&local_48;
   std::__cxx11::string::_M_construct<char_const*>(&local_58);
   if (pcVar2 == msg) {
      if (1 < *(int*)( this + 0x1d4 )) {
         msg(2, (int)&local_58, extraout_RDX);
      }

   }
 else {
      ( *pcVar2 )(this, 2, 2, &local_58);
   }

   if (local_58 != (spirvbin_t*)&local_48) {
      operator_delete(local_58, (long)local_48 + 1);
   }

   if (*(long*)( this + 0x70 ) != *(long*)( this + 0x78 )) {
      *(long*)( this + 0x78 ) = *(long*)( this + 0x70 );
   }

   if (*(long*)( this + 0x198 ) != *(long*)( this + 0x1a0 )) {
      *(long*)( this + 0x1a0 ) = *(long*)( this + 0x198 );
   }

   puVar8 = *(undefined8**)( this + 0x98 );
   while (puVar8 != (undefined8*)0x0) {
      puVar3 = (undefined8*)*puVar8;
      operator_delete(puVar8, 0x18);
      puVar8 = puVar3;
   }
;
   memset(*(void**)( this + 0x88 ), 0, *(long*)( this + 0x90 ) * 8);
   *(undefined8*)( this + 0xa0 ) = 0;
   *(undefined8*)( this + 0x98 ) = 0;
   puVar8 = *(undefined8**)( this + 0xd0 );
   while (puVar8 != (undefined8*)0x0) {
      puVar3 = (undefined8*)*puVar8;
      operator_delete(puVar8, 0x10);
      puVar8 = puVar3;
   }
;
   memset(*(void**)( this + 0xc0 ), 0, *(long*)( this + 200 ) * 8);
   *(undefined8*)( this + 0xd8 ) = 0;
   *(undefined8*)( this + 0xd0 ) = 0;
   pvVar6 = *(void**)( this + 0x108 );
   while (pvVar6 != (void*)0x0) {
      std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(*(_Rb_tree_node**)( (long)pvVar6 + 0x18 ));
      pvVar4 = *(void**)( (long)pvVar6 + 0x10 );
      operator_delete(pvVar6, 0x28);
      pvVar6 = pvVar4;
   }
;
   *(undefined8*)( this + 0x108 ) = 0;
   *(spirvbin_t**)( this + 0x110 ) = this + 0x100;
   *(spirvbin_t**)( this + 0x118 ) = this + 0x100;
   *(undefined8*)( this + 0x120 ) = 0;
   puVar8 = *(undefined8**)( this + 0x138 );
   while (puVar8 != (undefined8*)0x0) {
      puVar3 = (undefined8*)*puVar8;
      operator_delete(puVar8, 0x10);
      puVar8 = puVar3;
   }
;
   memset(*(void**)( this + 0x128 ), 0, *(long*)( this + 0x130 ) * 8);
   lVar5 = *(long*)( this + 0x1a0 );
   *(undefined8*)( this + 0x1b0 ) = 0;
   *(undefined8*)( this + 0x140 ) = 0;
   *(undefined8*)( this + 0x138 ) = 0;
   uVar9 = ( ulong ) * (uint*)( *(long*)( this + 8 ) + 0xc );
   uVar7 = lVar5 - *(long*)( this + 0x198 ) >> 2;
   if (uVar7 < uVar9) {
      std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_fill_insert((vector<unsigned_int,std::allocator<unsigned_int>>*)( this + 0x198 ), lVar5, uVar9 - uVar7, &unused);
   }
 else if (( uVar9 < uVar7 ) && ( lVar1 = lVar5 != lVar1 )) {
      *(long*)( this + 0x1a0 ) = lVar1;
   }

   local_80 = 0;
   local_7c = 0;
   local_48 = std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::buildLocalMaps()::{lambda(unsigned_int &)#1}>::_M_manager;
   pcStack_40 = std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::buildLocalMaps()::{lambda(unsigned_int &)#1}>::_M_invoke;
   local_78 = (undefined1[16])0x0;
   local_50 = 0;
   local_68 = (code*)0x0;
   pcStack_60 = (code*)0x0;
   local_58 = this;
   puVar8 = (undefined8*)operator_new(0x18);
   puVar8[1] = &local_80;
   puVar8[2] = &local_7c;
   *puVar8 = this;
   local_78._0_8_ = puVar8;
   local_68 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::buildLocalMaps()::{lambda(spv::Op, unsigned_int)#1}>::_M_manager;
   pcStack_60 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::buildLocalMaps()::{lambda(spv::Op, unsigned_int)#1}>::_M_invoke;
   process(this, local_78, &local_58, 0, 0);
   if (local_68 != (code*)0x0) {
      ( *local_68 )(local_78, local_78, 3);
   }

   if (local_48 != (code*)0x0) {
      ( *local_48 )(&local_58, &local_58, 3);
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* std::_Function_handler<void (unsigned int&), spv::spirvbin_t::dceVars()::{lambda(unsigned
   int&)#1}>::_M_invoke(std::_Any_data const&, unsigned int&) */void std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::dceVars()::{lambda(unsigned_int&)#1}>::_M_invoke(_Any_data *param_1, uint *param_2) {
   int *piVar1;
   piVar1 = (int*)__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](*(_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)param_1, param_2);
   if (*piVar1 == 0) {
      return;
   }

   piVar1 = (int*)__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](*(_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)param_1, param_2);
   *piVar1 = *piVar1 + 1;
   return;
}
/* std::_Function_handler<bool (spv::Op, unsigned int), spv::spirvbin_t::dceVars()::{lambda(spv::Op,
   unsigned int)#1}>::_M_invoke(std::_Any_data const&, spv::Op&&, unsigned int&&) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::dceVars()::{lambda(spv::Op,unsigned_int)#1}>::_M_invoke(_Any_data *param_1, Op *param_2, uint *param_3) {
   uint uVar1;
   long lVar2;
   int *piVar3;
   uint uVar4;
   uint uVar5;
   ulong uVar6;
   uVar1 = *param_3;
   if (*(int*)param_2 == 0x3b) {
      piVar3 = (int*)__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](*(_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)param_1, (uint*)( *(long*)( *(long*)( param_1 + 8 ) + 8 ) + ( ulong )(uVar1 + 2) * 4 ));
      *piVar3 = *piVar3 + 1;
   }
 else {
      if (*(int*)param_2 != 0xf) {
         return 0;
      }

      lVar2 = *(long*)( *(long*)( param_1 + 8 ) + 8 );
      uVar4 = ( uint ) * (ushort*)( lVar2 + 2 + (ulong)uVar1 * 4 );
      if (4 < uVar4) {
         uVar5 = uVar1 + 4;
         while (true) {
            uVar6 = (ulong)uVar5;
            uVar5 = uVar5 + 1;
            piVar3 = (int*)__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](*(_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)param_1, (uint*)( lVar2 + uVar6 * 4 ));
            *piVar3 = *piVar3 + 1;
            if (uVar1 + uVar4 == uVar5) break;
            lVar2 = *(long*)( *(long*)( param_1 + 8 ) + 8 );
         }
;
      }

   }

   return 1;
}
/* std::_Function_handler<void (unsigned int&), spv::spirvbin_t::dceTypes()::{lambda(unsigned
   int&)#1}>::_M_invoke(std::_Any_data const&, unsigned int&) */void std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::dceTypes()::{lambda(unsigned_int&)#1}>::_M_invoke(_Any_data *param_1, uint *param_2) {
   int *piVar1;
   if (( 1L << ( ( byte ) * param_2 & 0x3f ) & *(ulong*)( **(long**)param_1 + ( (long)( ulong ) * param_2 >> 6 ) * 8 ) ) == 0) {
      return;
   }

   piVar1 = (int*)__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](*(_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)( param_1 + 8 ), param_2);
   *piVar1 = *piVar1 + 1;
   return;
}
/* std::_Function_handler<void (unsigned int&),
   spv::spirvbin_t::forwardLoadStores()::{lambda(unsigned int&)#1}>::_M_invoke(std::_Any_data
   const&, unsigned int&) */void std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::forwardLoadStores()::{lambda(unsigned_int&)#1}>::_M_invoke(_Any_data *param_1, uint *param_2) {
   long lVar1;
   uint *puVar2;
   _Hashtable<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> *this;
   this * (_Hashtable<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>**)param_1;
   lVar1 = _Hashtable<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find(this, (uint*)( ulong ) * param_2);
   if (lVar1 != 0) {
      puVar2 = (uint*)__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)this, param_2);
      *param_2 = *puVar2;
   }

   return;
}
/* std::_Function_handler<void (unsigned int&),
   spv::spirvbin_t::forwardLoadStores()::{lambda(unsigned int&)#2}>::_M_invoke(std::_Any_data
   const&, unsigned int&) */void std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::forwardLoadStores()::{lambda(unsigned_int&)#2}>::_M_invoke(_Any_data *param_1, uint *param_2) {
   long lVar1;
   uint *puVar2;
   _Hashtable<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> *this;
   this * (_Hashtable<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>**)param_1;
   lVar1 = _Hashtable<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find(this, (uint*)( ulong ) * param_2);
   if (lVar1 != 0) {
      puVar2 = (uint*)__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)this, param_2);
      *param_2 = *puVar2;
   }

   return;
}
/* std::_Function_handler<bool (spv::Op, unsigned int),
   spv::spirvbin_t::optLoadStore()::{lambda(spv::Op, unsigned int)#2}>::_M_invoke(std::_Any_data
   const&, spv::Op&&, unsigned int&&) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::optLoadStore()::{lambda(spv::Op,unsigned_int)#2}>::_M_invoke(_Any_data *param_1, Op *param_2, uint *param_3) {
   uint uVar1;
   undefined4 uVar2;
   undefined8 *puVar3;
   long lVar4;
   undefined4 *puVar5;
   uint *puVar6;
   if (*(int*)param_2 != 0x3d) {
      return 0;
   }

   puVar3 = *(undefined8**)param_1;
   uVar1 = *param_3;
   puVar6 = (uint*)( *(long*)( puVar3[1] + 8 ) + ( ulong )(uVar1 + 3) * 4 );
   lVar4 = _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::find((_Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>*)*puVar3, (uint*)( ulong ) * puVar6);
   if (lVar4 != 0) {
      puVar5 = (undefined4*)__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)puVar3[2], puVar6);
      uVar2 = *puVar5;
      puVar5 = (undefined4*)__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)puVar3[2], (uint*)( *(long*)( puVar3[1] + 8 ) + ( ulong )(uVar1 + 2) * 4 ));
      *puVar5 = uVar2;
   }

   return 0;
}
/* std::_Function_handler<void (unsigned int&), spv::spirvbin_t::optLoadStore()::{lambda(unsigned
   int&)#2}>::_M_invoke(std::_Any_data const&, unsigned int&) */void std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::optLoadStore()::{lambda(unsigned_int&)#2}>::_M_invoke(_Any_data *param_1, uint *param_2) {
   long lVar1;
   uint *puVar2;
   _Hashtable<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> *this;
   this * (_Hashtable<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>**)param_1;
   lVar1 = _Hashtable<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find(this, (uint*)( ulong ) * param_2);
   if (lVar1 != 0) {
      puVar2 = (uint*)__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)this, param_2);
      *param_2 = *puVar2;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* std::_Function_handler<bool (spv::Op, unsigned int),
   spv::spirvbin_t::buildLocalMaps()::{lambda(spv::Op, unsigned int)#1}>::_M_invoke(std::_Any_data
   const&, spv::Op&&, unsigned int&&) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::buildLocalMaps()::{lambda(spv::Op,unsigned_int)#1}>::_M_invoke(_Any_data *param_1, Op *param_2, uint *param_3) {
   ushort uVar1;
   uint uVar2;
   uint uVar3;
   uint uVar4;
   undefined4 uVar5;
   long *plVar6;
   byte bVar7;
   char cVar8;
   int iVar9;
   int *piVar10;
   uint *puVar11;
   long lVar12;
   _Rb_tree_node_base *p_Var13;
   undefined8 *puVar14;
   undefined4 *puVar15;
   spirvbin_t *psVar16;
   _Rb_tree_node_base *p_Var17;
   long lVar18;
   ulong uVar19;
   _Rb_tree_node_base *p_Var20;
   long in_FS_OFFSET;
   bool bVar21;
   long local_90;
   long *local_88;
   long local_80;
   long local_78[2];
   long *local_68;
   long local_60;
   long local_58[3];
   long local_40;
   uVar2 = *param_3;
   uVar3 = *(uint*)param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar6 = *(long**)param_1;
   uVar19 = ( ulong )(uVar2 + 1);
   psVar16 = (spirvbin_t*)*plVar6;
   bVar7 = ( byte )(&__cxxabiv1::__class_type_info::vtable)[(long)(int)uVar3 * 0x70] >> 1 & 1;
   if (( ( &__cxxabiv1::__class_type_info::vtable )[(long)(int)uVar3 * 0x70] & 1 ) != 0) {
      uVar4 = *(uint*)( *(long*)( psVar16 + 8 ) + uVar19 * 4 );
      if (bVar7 != 0) {
         local_90 = CONCAT44(local_90._4_4_, *(undefined4*)( *(long*)( psVar16 + 8 ) + ( ulong )(uVar2 + 2) * 4 ));
         puVar11 = (uint*)__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( psVar16 + 0x128 ), (uint*)&local_90);
         *puVar11 = uVar2;
         if (uVar4 != 0) {
            iVar9 = spv::spirvbin_t::typeSizeInWords((spirvbin_t*)*plVar6, uVar4);
            psVar16 = (spirvbin_t*)*plVar6;
            if (psVar16[0x1d8] != (spirvbin_t)0x0) goto LAB_00108470;
            if (iVar9 == 0) goto LAB_001083b1;
            piVar10 = (int*)__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( psVar16 + 0x160 ), (uint*)&local_90);
            *piVar10 = iVar9;
         }

         psVar16 = (spirvbin_t*)*plVar6;
      }

      LAB_001083b1:if (uVar3 != 0x36) goto LAB_001083b6;
      LAB_00108420:if (*(uint*)plVar6[1] == 0) {
         *(uint*)plVar6[1] = uVar2;
         *(undefined4*)plVar6[2] = *(undefined4*)( *(long*)( psVar16 + 8 ) + ( ulong )(uVar2 + 2) * 4 );
         goto LAB_00108470;
      }

      local_90 = 0x15;
      local_68 = local_58;
      local_68 = (long*)std::__cxx11::string::_M_create((ulong*)&local_68, ( ulong ) & local_90);
      lVar18 = _UNK_0010e418;
      local_58[0] = local_90;
      *local_68 = __LC48;
      local_68[1] = lVar18;
      *(undefined8*)( (long)local_68 + 0xd ) = 0x646e756f66206e6f;
      local_60 = local_90;
      *(undefined1*)( (long)local_68 + local_90 ) = 0;
      bVar21 = spv::spirvbin_t::errorHandler_abi_cxx11_._16_8_ == 0;
      psVar16[0x1d8] = (spirvbin_t)0x1;
      if (bVar21) goto LAB_0010886b;
      ( *(code*)spv::spirvbin_t::errorHandler_abi_cxx11_._24_8_ )(spv::spirvbin_t::errorHandler_abi_cxx11_, &local_68);
      if (local_68 == local_58) goto LAB_00108470;
      LAB_001086c3:operator_delete(local_68, local_58[0] + 1);
      goto LAB_00108470;
   }

   if (bVar7 == 0) goto LAB_001083b1;
   local_90 = CONCAT44(local_90._4_4_, *(undefined4*)( *(long*)( psVar16 + 8 ) + uVar19 * 4 ));
   puVar11 = (uint*)__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( psVar16 + 0x128 ), (uint*)&local_90);
   psVar16 = (spirvbin_t*)*plVar6;
   *puVar11 = uVar2;
   if (uVar3 == 0x36) goto LAB_00108420;
   LAB_001083b6:if (uVar3 < 0x37) {
      if (uVar3 == 5) {
         uVar5 = *(undefined4*)( *(long*)( psVar16 + 8 ) + uVar19 * 4 );
         spv::spirvbin_t::literalString_abi_cxx11_((uint)(string*)&local_68);
         puVar15 = (undefined4*)__detail::_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,unsigned_int>,std::allocator<std::pair<std::__cxx11::string_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator []((_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,unsigned_int>,std::allocator<std::pair<std::__cxx11::string_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>*)( *plVar6 + 0x38 ), (string*)&local_68);
         *puVar15 = uVar5;
         if (local_68 == local_58) goto LAB_00108470;
         goto LAB_001086c3;
      }

      if (uVar3 == 0xf) {
         *(undefined4*)( psVar16 + 0x1b0 ) = *(undefined4*)( *(long*)( psVar16 + 8 ) + ( ulong )(uVar2 + 2) * 4 );
         goto LAB_00108470;
      }

      cVar8 = spv::spirvbin_t::isConstOp(psVar16, uVar3);
      if (cVar8 != '\0') goto LAB_0010851a;
      if (0x13 < uVar3 - 0x13) goto LAB_00108470;
      lVar18 = *plVar6;
      p_Var20 = (_Rb_tree_node_base*)( lVar18 + 0x100 );
      p_Var13 = *(_Rb_tree_node_base**)( lVar18 + 0x108 );
      p_Var17 = p_Var20;
      if (*(_Rb_tree_node_base**)( lVar18 + 0x108 ) != (_Rb_tree_node_base*)0x0) {
         do {
            p_Var17 = p_Var13;
            iVar9 = *(int*)( p_Var17 + 0x20 );
            p_Var13 = *(_Rb_tree_node_base**)( p_Var17 + 0x18 );
            if ((int)uVar2 < iVar9) {
               p_Var13 = *(_Rb_tree_node_base**)( p_Var17 + 0x10 );
            }

         }
 while ( p_Var13 != (_Rb_tree_node_base*)0x0 );
         if (iVar9 <= (int)uVar2) goto LAB_001085e2;
      }

      if (p_Var17 != *(_Rb_tree_node_base**)( lVar18 + 0x110 )) goto LAB_0010856f;
      LAB_001085eb:bVar21 = true;
      if (p_Var17 != p_Var20) {
         bVar21 = (int)uVar2 < *(int*)( p_Var17 + 0x20 );
      }

   }
 else {
      if (uVar3 == 0x38) {
         iVar9 = *(int*)plVar6[1];
         if (iVar9 == 0) {
            local_90 = 0x23;
            local_88 = local_78;
            local_88 = (long*)std::__cxx11::string::_M_create((ulong*)&local_88, ( ulong ) & local_90);
            lVar18 = _UNK_0010e428;
            local_78[0] = local_90;
            *local_88 = __LC49;
            local_88[1] = lVar18;
            lVar18 = _UNK_0010e438;
            local_88[2] = __LC50;
            local_88[3] = lVar18;
            *(undefined4*)( (long)local_88 + 0x1f ) = 0x74726174;
            local_80 = local_90;
            *(undefined1*)( (long)local_88 + local_90 ) = 0;
            bVar21 = spv::spirvbin_t::errorHandler_abi_cxx11_._16_8_ == 0;
            psVar16[0x1d8] = (spirvbin_t)0x1;
            if (bVar21) {
               LAB_0010886b:/* WARNING: Subroutine does not return */std::__throw_bad_function_call();
            }

            ( *(code*)spv::spirvbin_t::errorHandler_abi_cxx11_._24_8_ )(spv::spirvbin_t::errorHandler_abi_cxx11_, &local_88);
            if (local_88 != local_78) {
               operator_delete(local_88, local_78[0] + 1);
            }

         }
 else {
            uVar1 = *(ushort*)( *(long*)( psVar16 + 8 ) + 2 + (ulong)uVar2 * 4 );
            puVar14 = (undefined8*)__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::pair<unsigned_int,unsigned_int>>,std::allocator<std::pair<unsigned_int_const,std::pair<unsigned_int,unsigned_int>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::pair<unsigned_int,unsigned_int>>,std::allocator<std::pair<unsigned_int_const,std::pair<unsigned_int,unsigned_int>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( psVar16 + 0x88 ), (uint*)plVar6[2]);
            *puVar14 = CONCAT44(uVar1 + uVar2, iVar9);
            *(undefined4*)plVar6[1] = 0;
         }

         goto LAB_00108470;
      }

      if (uVar3 == 0x39) {
         piVar10 = (int*)__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( psVar16 + 0xc0 ), (uint*)( *(long*)( psVar16 + 8 ) + ( ulong )(uVar2 + 3) * 4 ));
         *piVar10 = *piVar10 + 1;
         goto LAB_00108470;
      }

      cVar8 = spv::spirvbin_t::isConstOp(psVar16, uVar3);
      if (cVar8 == '\0') goto LAB_00108470;
      LAB_0010851a:lVar18 = *plVar6;
      if (*(char*)( lVar18 + 0x1d8 ) != '\0') goto LAB_00108470;
      p_Var20 = (_Rb_tree_node_base*)( lVar18 + 0x100 );
      p_Var13 = *(_Rb_tree_node_base**)( lVar18 + 0x108 );
      if (*(_Rb_tree_node_base**)( lVar18 + 0x108 ) != (_Rb_tree_node_base*)0x0) {
         do {
            p_Var17 = p_Var13;
            iVar9 = *(int*)( p_Var17 + 0x20 );
            p_Var13 = *(_Rb_tree_node_base**)( p_Var17 + 0x18 );
            if ((int)uVar2 < iVar9) {
               p_Var13 = *(_Rb_tree_node_base**)( p_Var17 + 0x10 );
            }

         }
 while ( p_Var13 != (_Rb_tree_node_base*)0x0 );
         if ((int)uVar2 < iVar9) {
            if (*(_Rb_tree_node_base**)( lVar18 + 0x110 ) == p_Var17) goto LAB_001085eb;
            goto LAB_0010856f;
         }

         LAB_001085e2:if ((int)uVar2 <= iVar9) goto LAB_00108470;
         goto LAB_001085eb;
      }

      p_Var17 = p_Var20;
      if (p_Var20 != *(_Rb_tree_node_base**)( lVar18 + 0x110 )) {
         LAB_0010856f:lVar12 = std::_Rb_tree_decrement(p_Var17);
         iVar9 = *(int*)( lVar12 + 0x20 );
         goto LAB_001085e2;
      }

      bVar21 = true;
   }

   p_Var13 = (_Rb_tree_node_base*)operator_new(0x28);
   *(uint*)( p_Var13 + 0x20 ) = uVar2;
   std::_Rb_tree_insert_and_rebalance(bVar21, p_Var13, p_Var17, p_Var20);
   *(long*)( lVar18 + 0x120 ) = *(long*)( lVar18 + 0x120 ) + 1;
   LAB_00108470:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return 0;
}
/* std::_Function_handler<bool (spv::Op, unsigned int),
   spv::spirvbin_t::mapFnBodies()::{lambda(spv::Op, unsigned int)#2}>::_M_invoke(std::_Any_data
   const&, spv::Op&&, unsigned int&&) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::mapFnBodies()::{lambda(spv::Op,unsigned_int)#2}>::_M_invoke(_Any_data *param_1, Op *param_2, uint *param_3) {
   uint uVar1;
   uint uVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
   ulong uVar8;
   int *piVar9;
   long in_FS_OFFSET;
   uint local_34;
   long local_30;
   uVar1 = *(uint*)param_2;
   puVar3 = *(undefined8**)param_1;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = *param_3;
   if (uVar1 < 0x53) {
      if (0x35 < uVar1) {
         uVar8 = 1L << ( (char)uVar1 - 0x36U & 0x3f );
         if (( uVar8 & 0x1e0009a8 ) != 0) goto LAB_00108960;
         if (( uVar8 & 1 ) != 0) {
            puVar4 = (undefined8*)puVar3[1];
            puVar5 = (undefined8*)puVar4[2];
            *(undefined4*)*puVar3 = 0;
            while (puVar5 != (undefined8*)0x0) {
               puVar6 = (undefined8*)*puVar5;
               operator_delete(puVar5, 0x10);
               puVar5 = puVar6;
            }
;
            memset((void*)*puVar4, 0, puVar4[1] * 8);
            lVar7 = puVar3[3];
            puVar4[3] = 0;
            puVar4[2] = 0;
            *(undefined4*)puVar3[2] = *(undefined4*)( *(long*)( lVar7 + 8 ) + ( ulong )(uVar2 + 2) * 4 );
            goto LAB_00108932;
         }

      }

      goto LAB_001089a0;
   }

   if (uVar1 != 0x94) {
      if (uVar1 < 0x95) {
         if (7 < uVar1 - 0x57) {
            LAB_001089a0:*(undefined4*)puVar3[4] = 0;
            goto LAB_00108932;
         }

      }
 else if (uVar1 != 0xf8) goto LAB_001089a0;
   }

   LAB_00108960:local_34 = uVar1;
   piVar9 = (int*)__detail::_Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)puVar3[1], (int*)&local_34);
   *piVar9 = *piVar9 + 1;
   *(undefined4*)*puVar3 = 0;
   *(uint*)puVar3[4] = uVar1;
   LAB_00108932:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<void (unsigned int&), spv::spirvbin_t::mapFnBodies()::{lambda(unsigned
   int&)#1}>::_M_invoke(std::_Any_data const&, unsigned int&) */void std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::mapFnBodies()::{lambda(unsigned_int&)#1}>::_M_invoke(_Any_data *param_1, uint *param_2) {
   int iVar1;
   undefined8 *puVar2;
   _Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this;
   spirvbin_t *this_00;
   long lVar3;
   uint uVar4;
   int *piVar5;
   ulong uVar6;
   ulong uVar7;
   ulong uVar8;
   long in_FS_OFFSET;
   int local_24;
   long local_20;
   puVar2 = *(undefined8**)param_1;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = *(int*)*puVar2;
   if (iVar1 != 0) {
      this(_Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> * puVar2[2]);
      *(int*)puVar2[1] = *(int*)puVar2[1] + 1;
      local_24 = iVar1;
      piVar5 = (int*)__detail::_Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this, &local_24);
      this_00 = (spirvbin_t*)puVar2[4];
      if (*(int*)( *(long*)( this_00 + 0x198 ) + ( ulong ) * param_2 * 4 ) == -10000) {
         lVar3 = *(long*)( this_00 + 0x70 );
         uVar8 = ( *(long*)( this_00 + 0x78 ) - lVar3 >> 3 ) << 5;
         uVar4 = ( uint )(*piVar5 * *(int*)*puVar2 * 0xc37f + *(int*)puVar2[3] * 0x75 + *(int*)puVar2[1]) % 0x4a7f + 0x183b;
         uVar6 = (ulong)uVar4;
         if (uVar6 < uVar8) {
            uVar7 = 1L << ( (byte)uVar4 & 0x1f ) & *(ulong*)( lVar3 + ( ulong )(uVar4 >> 5) * 8 );
            while (uVar7 != 0) {
               uVar4 = (int)uVar6 + 1;
               uVar6 = (ulong)uVar4;
               if (uVar8 <= uVar6) break;
               uVar7 = 1L << ( (byte)uVar4 & 0x1f ) & *(ulong*)( lVar3 + ( ulong )(uVar4 >> 5) * 8 );
            }
;
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            spv::spirvbin_t::localId(this_00, *param_2, uVar4);
            return;
         }

         goto LAB_00108b12;
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00108b12:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* std::_Function_handler<bool (spv::Op, unsigned int),
   spv::spirvbin_t::optLoadStore()::{lambda(spv::Op, unsigned int)#1}>::_M_invoke(std::_Any_data
   const&, spv::Op&&, unsigned int&&) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::optLoadStore()::{lambda(spv::Op,unsigned_int)#1}>::_M_invoke(_Any_data *param_1, Op *param_2, uint *param_3) {
   uint uVar1;
   undefined4 uVar2;
   long *plVar3;
   _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>> *p_Var4;
   _Hashtable<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> *this;
   long lVar5;
   undefined8 uVar6;
   int *piVar7;
   undefined4 *puVar8;
   long lVar9;
   uint uVar10;
   uint *puVar11;
   _Hashtable<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> *this_00;
   uint uVar12;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   plVar3 = *(long**)param_1;
   uVar1 = *param_3;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar12 = *(uint*)param_2;
   lVar5 = *(long*)( *plVar3 + 8 );
   if (uVar12 != 0x38) {
      if (uVar12 < 0x39) {
         if (uVar12 != 0x36) goto LAB_00108b7d;
      }
 else if (5 < uVar12 - 0xf6) {
         uVar10 = *(uint*)( lVar5 + (ulong)uVar1 * 4 ) >> 0x10;
         if (uVar12 == 0x3b) {
            if (( *(int*)( lVar5 + ( ulong )(uVar1 + 3) * 4 ) == 7 ) && ( uVar10 == 4 )) {
               __detail::_Insert_base<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::insert((_Insert_base<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>*)plVar3[2], (uint*)( lVar5 + ( ulong )(uVar1 + 2) * 4 ));
               LAB_00108bfb:uVar6 = 1;
               goto LAB_00108c00;
            }

         }
 else if (uVar12 - 0x41 < 2) {
            p_Var4 = (_Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>*)plVar3[2];
            lVar5 = _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::find(p_Var4, (uint*)( ulong ) * (uint*)( lVar5 + ( ulong )(uVar1 + 3) * 4 ));
            if (lVar5 != 0) {
               _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::_M_erase(p_Var4);
               _Hashtable<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_erase(plVar3[3], *(undefined4*)( *(long*)( *plVar3 + 8 ) + ( ulong )(uVar1 + 3) * 4 ));
               goto LAB_00108bfb;
            }

         }
 else if (uVar12 == 0x3d) {
            p_Var4 = (_Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>*)plVar3[2];
            uVar12 = *(uint*)( lVar5 + ( ulong )(uVar1 + 3) * 4 );
            puVar11 = (uint*)(ulong)uVar12;
            lVar5 = _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::find(p_Var4, puVar11);
            if (lVar5 != 0) {
               local_44 = uVar12;
               lVar5 = _Hashtable<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find((_Hashtable<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>*)plVar3[3], puVar11);
               if (lVar5 == 0) {
                  _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::_M_erase(p_Var4);
                  _Hashtable<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_erase(plVar3[3], uVar12);
               }

               if (( 4 < uVar10 ) && ( ( *(byte*)( *(long*)( *plVar3 + 8 ) + ( ulong )(uVar1 + 4) * 4 ) & 1 ) != 0 )) {
                  _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::_M_erase(plVar3[2], uVar12);
                  _Hashtable<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_erase(plVar3[3], uVar12);
               }

               this_00 = (_Hashtable<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>*)plVar3[4];
               lVar5 = _Hashtable<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find(this_00, (uint*)(ulong)uVar12);
               if (lVar5 == 0) {
                  uVar2 = *(undefined4*)plVar3[1];
                  puVar8 = (undefined4*)__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)this_00, &local_44);
                  *puVar8 = uVar2;
               }
 else {
                  LAB_00108c96:piVar7 = (int*)__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)this_00, &local_44);
                  if (*piVar7 != *(int*)plVar3[1]) {
                     _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::_M_erase(plVar3[2], uVar12);
                     _Hashtable<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_erase(plVar3[3], uVar12);
                  }

               }

               goto LAB_00108bfb;
            }

         }
 else if (uVar12 == 0x3e) {
            p_Var4 = (_Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>*)plVar3[2];
            uVar12 = *(uint*)( lVar5 + ( ulong )(uVar1 + 1) * 4 );
            puVar11 = (uint*)(ulong)uVar12;
            lVar9 = _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::find(p_Var4, puVar11);
            if (lVar9 != 0) {
               this(_Hashtable<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> * plVar3[3]);
               local_44 = uVar12;
               lVar9 = _Hashtable<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find(this, puVar11);
               if (lVar9 == 0) {
                  uVar2 = *(undefined4*)( lVar5 + ( ulong )(uVar1 + 2) * 4 );
                  puVar8 = (undefined4*)__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)this, &local_44);
                  *puVar8 = uVar2;
               }
 else {
                  _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::_M_erase(p_Var4);
                  _Hashtable<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_erase(plVar3[3], uVar12);
               }

               if (3 < uVar10) {
                  if (( *(uint*)( *(long*)( *plVar3 + 8 ) + ( ulong )(uVar1 + 3) * 4 ) & 1 ) != 0) {
                     _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::_M_erase(plVar3[2]);
                     _Hashtable<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_erase(plVar3[3], *(undefined4*)( *(long*)( *plVar3 + 8 ) + ( ulong )(uVar1 + 3) * 4 ));
                  }

               }

               this_00 = (_Hashtable<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>*)plVar3[4];
               lVar5 = _Hashtable<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find(this_00, (uint*)(ulong)uVar12);
               if (lVar5 != 0) goto LAB_00108c96;
               uVar2 = *(undefined4*)plVar3[1];
               puVar8 = (undefined4*)__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)this_00, &local_44);
               *puVar8 = uVar2;
               goto LAB_00108bfb;
            }

         }

         LAB_00108b7d:uVar6 = 0;
         goto LAB_00108c00;
      }

   }

   *(int*)plVar3[1] = *(int*)plVar3[1] + 1;
   uVar6 = 0;
   LAB_00108c00:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::spirvbin_t::dceFuncs() */void spv::spirvbin_t::dceFuncs(spirvbin_t *this) {
   long *plVar1;
   code *pcVar2;
   undefined8 *puVar3;
   ulong uVar4;
   long lVar5;
   spirvbin_t *psVar6;
   string *extraout_RDX;
   ulong uVar7;
   spirvbin_t *psVar8;
   spirvbin_t *psVar9;
   undefined8 uVar10;
   long in_FS_OFFSET;
   spirvbin_t *local_88;
   undefined8 local_80;
   code *local_78;
   code *pcStack_70;
   undefined1 local_68[16];
   code *local_58;
   code *pcStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar2 = *(code**)( *(long*)this + 0x10 );
   local_68._8_8_ = local_68._0_8_;
   local_68._0_8_ = &local_58;
   std::__cxx11::string::_M_construct<char_const*>(local_68, "Removing Dead Functions: ");
   if (pcVar2 == msg) {
      if (2 < *(int*)( this + 0x1d4 )) {
         msg(2, (int)local_68, extraout_RDX);
      }

   }
 else {
      ( *pcVar2 )(this, 3, 2, local_68);
   }

   if ((code**)local_68._0_8_ != &local_58) {
      operator_delete((void*)local_68._0_8_, ( ulong )(local_58 + 1));
   }

   while (*(spirvbin_t**)( this + 0x98 ) != (spirvbin_t*)0x0) {
      uVar10 = 0;
      psVar8 = *(spirvbin_t**)( this + 0x98 );
      do {
         if (*(uint*)( psVar8 + 8 ) == *(uint*)( this + 0x1b0 )) {
            LAB_00109080:psVar9 = *(spirvbin_t**)psVar8;
         }
 else {
            lVar5 = std::_Hashtable<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find((_Hashtable<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>*)( this + 0xc0 ), (uint*)( ulong ) * (uint*)( psVar8 + 8 ));
            if (( lVar5 != 0 ) && ( *(int*)( lVar5 + 0xc ) != 0 )) goto LAB_00109080;
            puVar3 = *(undefined8**)( this + 0x1c0 );
            if (puVar3 == *(undefined8**)( this + 0x1c8 )) {
               std::vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>::_M_realloc_insert<std::pair<unsigned_int,unsigned_int>const&>((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>*)( this + 0x1b8 ), puVar3, psVar8 + 0xc);
            }
 else {
               *puVar3 = *(undefined8*)( psVar8 + 0xc );
               *(undefined8**)( this + 0x1c0 ) = puVar3 + 1;
            }

            local_68 = (undefined1[16])0x0;
            local_80 = 0;
            local_58 = std::_Function_handler<void(unsigned_int &),spv::op_fn_nop::{lambda(unsigned_int &)#1}>::_M_manager;
            pcStack_50 = std::_Function_handler<void(unsigned_int &),spv::op_fn_nop::{lambda(unsigned_int &)#1}>::_M_invoke;
            local_78 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::dceFuncs()::{lambda(spv::Op, unsigned_int)#1}>::_M_manager;
            pcStack_70 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::dceFuncs()::{lambda(spv::Op, unsigned_int)#1}>::_M_invoke;
            local_88 = this;
            process(this, &local_88, local_68, *(undefined4*)( psVar8 + 0xc ), *(undefined4*)( psVar8 + 0x10 ));
            if (local_78 != (code*)0x0) {
               ( *local_78 )(&local_88, &local_88, 3);
            }

            if (local_58 != (code*)0x0) {
               ( *local_58 )(local_68, local_68, 3);
            }

            if (this[0x1d8] != (spirvbin_t)0x0) goto LAB_00109058;
            uVar4 = *(ulong*)( this + 0x90 );
            lVar5 = *(long*)( this + 0x88 );
            uVar7 = ( ulong ) * (uint*)( psVar8 + 8 ) % uVar4;
            plVar1 = (long*)( lVar5 + uVar7 * 8 );
            psVar9 = (spirvbin_t*)*plVar1;
            do {
               psVar6 = psVar9;
               psVar9 = *(spirvbin_t**)psVar6;
            }
 while ( *(spirvbin_t**)psVar6 != psVar8 );
            psVar9 = *(spirvbin_t**)psVar8;
            if ((spirvbin_t*)*plVar1 == psVar6) {
               if (psVar9 == (spirvbin_t*)0x0) {
                  if (psVar6 == this + 0x98) {
                     LAB_001090e7:*(spirvbin_t**)( this + 0x98 ) = psVar9;
                  }

               }
 else {
                  if (uVar7 == ( ulong ) * (uint*)( psVar9 + 8 ) % uVar4) goto LAB_00109025;
                  *(spirvbin_t**)( lVar5 + ( ( ulong ) * (uint*)( psVar9 + 8 ) % uVar4 ) * 8 ) = psVar6;
                  if ((spirvbin_t*)*plVar1 == this + 0x98) goto LAB_001090e7;
               }

               *plVar1 = 0;
               psVar9 = *(spirvbin_t**)psVar8;
            }
 else if (( psVar9 != (spirvbin_t*)0x0 ) && ( uVar7 != ( ulong ) * (uint*)( psVar9 + 8 ) % uVar4 )) {
               *(spirvbin_t**)( lVar5 + ( ( ulong ) * (uint*)( psVar9 + 8 ) % uVar4 ) * 8 ) = psVar6;
               psVar9 = *(spirvbin_t**)psVar8;
            }

            LAB_00109025:*(spirvbin_t**)psVar6 = psVar9;
            operator_delete(psVar8, 0x18);
            *(long*)( this + 0xa0 ) = *(long*)( this + 0xa0 ) + -1;
            uVar10 = 1;
         }

         psVar8 = psVar9;
      }
 while ( psVar9 != (spirvbin_t*)0x0 );
      if ((char)uVar10 == '\0') break;
   }
;
   LAB_00109058:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::spirvbin_t::strip() */void spv::spirvbin_t::strip(spirvbin_t *this) {
   undefined8 uVar1;
   uint uVar2;
   uint *puVar3;
   long lVar4;
   ulong uVar5;
   uint *puVar6;
   uint *puVar7;
   int iVar8;
   uint uVar9;
   long lVar10;
   ulong uVar11;
   long lVar12;
   uint *puVar13;
   puVar3 = *(uint**)( this + 0x1c0 );
   puVar13 = *(uint**)( this + 0x1b8 );
   if (puVar3 == puVar13) {
      return;
   }

   lVar10 = -2;
   uVar5 = (long)puVar3 - (long)puVar13 >> 3;
   if (uVar5 != 0) {
      lVar10 = 0x3f;
      if (uVar5 != 0) {
         for (; uVar5 >> lVar10 == 0; lVar10 = lVar10 + -1) {}
      }

      lVar10 = (long)(int)lVar10 * 2;
   }

   std::__introsort_loop<__gnu_cxx::__normal_iterator<std::pair<unsigned_int,unsigned_int>*,std::vector<std::pair<unsigned_int,unsigned_int>,std::allocator < std::pair < unsigned_int,unsigned_int>>> > ,long,__gnu_cxx::__ops::_Iter_less_iter > ( puVar13,puVar3,lVar10 );
   if ((long)puVar3 - (long)puVar13 < 0x81) {
      std::__insertion_sort<__gnu_cxx::__normal_iterator<std::pair<unsigned_int,unsigned_int>*,std::vector<std::pair<unsigned_int,unsigned_int>,std::allocator < std::pair < unsigned_int,unsigned_int>>> > __gnu_cxx::__ops::_Iter_less_iter > ( puVar13 );
   }
 else {
      puVar7 = puVar13 + 0x20;
      std::__insertion_sort<__gnu_cxx::__normal_iterator<std::pair<unsigned_int,unsigned_int>*,std::vector < std::pair < unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>> > __gnu_cxx::__ops::_Iter_less_iter > ( puVar13 );
      if (puVar3 != puVar7) {
         LAB_001091be:uVar1 = *(undefined8*)puVar7;
         puVar6 = puVar7;
         do {
            uVar9 = puVar6[-2];
            if ((uint)uVar1 < uVar9) {
               uVar2 = puVar6[-1];
            }
 else if (( (uint)uVar1 != uVar9 ) || ( uVar2 = puVar6[-1] ),uVar2 <= ( uint )((ulong)uVar1 >> 0x20)) goto LAB_001091b1;
            *(ulong*)puVar6 = CONCAT44(uVar2, uVar9);
            puVar6 = puVar6 + -2;
         }
 while ( true );
      }

   }

   LAB_001091fc:lVar4 = *(long*)( this + 0x10 );
   lVar10 = *(long*)( this + 8 );
   uVar5 = lVar4 - lVar10 >> 2;
   if ((int)uVar5 == 0) {
      uVar11 = 0;
      LAB_00109277:if (( uVar11 < uVar5 ) && ( lVar10 = lVar4 != lVar10 )) {
         *(long*)( this + 0x10 ) = lVar10;
      }

   }
 else {
      uVar11 = 0;
      iVar8 = 0;
      puVar7 = puVar13;
      do {
         uVar9 = (uint)uVar11;
         for (; puVar3 != puVar7; puVar7 = puVar7 + 2) {
            if (uVar9 < puVar7[1]) {
               if (( ( puVar3 != puVar7 ) && ( *puVar7 <= uVar9 ) ) && ( uVar9 < puVar7[1] )) goto LAB_00109266;
               break;
            }

         }

         lVar12 = (long)iVar8;
         iVar8 = iVar8 + 1;
         *(undefined4*)( lVar10 + lVar12 * 4 ) = *(undefined4*)( lVar10 + uVar11 * 4 );
         LAB_00109266:uVar11 = uVar11 + 1;
      }
 while ( ( uVar5 & 0xffffffff ) != uVar11 );
      uVar11 = (ulong)iVar8;
      if (uVar11 <= uVar5) goto LAB_00109277;
      std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_default_append((vector<unsigned_int,std::allocator<unsigned_int>>*)( this + 8 ), uVar11 - uVar5);
      puVar13 = *(uint**)( this + 0x1b8 );
      if (puVar13 == *(uint**)( this + 0x1c0 )) goto LAB_00109290;
   }

   *(uint**)( this + 0x1c0 ) = puVar13;
   LAB_00109290:buildLocalMaps(this);
   return;
   LAB_001091b1:puVar7 = puVar7 + 2;
   *(undefined8*)puVar6 = uVar1;
   if (puVar7 == puVar3) goto LAB_001091fc;
   goto LAB_001091be;
}
/* spv::spirvbin_t::stripDeadRefs() */void spv::spirvbin_t::stripDeadRefs(spirvbin_t *this) {
   long in_FS_OFFSET;
   spirvbin_t *local_68;
   undefined8 local_60;
   code *local_58;
   code *pcStack_50;
   undefined1 local_48[16];
   code *local_38;
   code *pcStack_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (undefined1[16])0x0;
   local_38 = std::_Function_handler<void(unsigned_int &),spv::op_fn_nop::{lambda(unsigned_int &)#1}>::_M_manager;
   pcStack_30 = std::_Function_handler<void(unsigned_int &),spv::op_fn_nop::{lambda(unsigned_int &)#1}>::_M_invoke;
   local_60 = 0;
   local_58 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::stripDeadRefs()::{lambda(spv::Op, unsigned_int)#1}>::_M_manager;
   pcStack_50 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::stripDeadRefs()::{lambda(spv::Op, unsigned_int)#1}>::_M_invoke;
   local_68 = this;
   process(this, &local_68, local_48, 0, 0);
   if (local_58 != (code*)0x0) {
      ( *local_58 )(&local_68, &local_68, 3);
   }

   if (local_38 != (code*)0x0) {
      ( *local_38 )(local_48, local_48, 3);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      strip(this);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::spirvbin_t::forwardLoadStores() */void spv::spirvbin_t::forwardLoadStores(spirvbin_t *this) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   long in_FS_OFFSET;
   undefined8 *local_108;
   long local_100;
   undefined8 *local_f8;
   undefined8 local_f0;
   undefined4 local_e8;
   undefined8 local_e0;
   undefined8 local_d8[2];
   undefined8 *local_c8;
   long local_c0;
   undefined8 *local_b8;
   undefined8 local_b0;
   undefined4 local_a8;
   undefined8 local_a0;
   undefined8 local_98[2];
   undefined1 local_88[16];
   code *local_78;
   code *pcStack_70;
   undefined1 local_68[16];
   code *local_58;
   code *pcStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_100 = 1;
   local_e8 = _LC20;
   local_a8 = _LC20;
   local_f8 = (undefined8*)0x0;
   local_f0 = 0;
   local_e0 = 0;
   local_d8[0] = 0;
   local_c0 = 1;
   local_b8 = (undefined8*)0x0;
   local_b0 = 0;
   local_a0 = 0;
   local_98[0] = 0;
   local_58 = std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::forwardLoadStores()::{lambda(unsigned_int &)#1}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::forwardLoadStores()::{lambda(unsigned_int &)#1}>::_M_invoke;
   local_88 = (undefined1[16])0x0;
   local_68._8_8_ = 0;
   local_68._0_8_ = &local_c8;
   local_78 = (code*)0x0;
   pcStack_70 = (code*)0x0;
   local_108 = local_d8;
   local_c8 = local_98;
   puVar2 = (undefined8*)operator_new(0x18);
   *puVar2 = this;
   puVar2[1] = &local_108;
   puVar2[2] = &local_c8;
   local_88._0_8_ = puVar2;
   local_78 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::forwardLoadStores()::{lambda(spv::Op, unsigned_int)#1}>::_M_manager;
   pcStack_70 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::forwardLoadStores()::{lambda(spv::Op, unsigned_int)#1}>::_M_invoke;
   process(this, local_88, local_68, 0, 0);
   if (local_78 != (code*)0x0) {
      ( *local_78 )(local_88, local_88, 3);
   }

   if (local_58 != (code*)0x0) {
      ( *local_58 )(local_68, local_68, 3);
   }

   puVar2 = local_b8;
   puVar1 = local_f8;
   if (this[0x1d8] == (spirvbin_t)0x0) {
      while (puVar1 != (undefined8*)0x0) {
         puVar2 = (undefined8*)*puVar1;
         operator_delete(puVar1, 0x10);
         puVar1 = puVar2;
      }
;
      memset(local_108, 0, local_100 * 8);
      local_f0 = 0;
      local_f8 = (undefined8*)0x0;
      puVar2 = local_b8;
      while (puVar2 != (undefined8*)0x0) {
         puVar1 = (undefined8*)*puVar2;
         operator_delete(puVar2, 0x10);
         puVar2 = puVar1;
      }
;
      memset(local_c8, 0, local_c0 * 8);
      local_68 = (undefined1[16])0x0;
      local_b0 = 0;
      local_58 = std::_Function_handler<void(unsigned_int &),spv::op_fn_nop::{lambda(unsigned_int &)#1}>::_M_manager;
      pcStack_50 = std::_Function_handler<void(unsigned_int &),spv::op_fn_nop::{lambda(unsigned_int &)#1}>::_M_invoke;
      local_88 = (undefined1[16])0x0;
      local_b8 = (undefined8*)0x0;
      local_78 = (code*)0x0;
      pcStack_70 = (code*)0x0;
      puVar2 = (undefined8*)operator_new(0x18);
      *puVar2 = this;
      puVar2[1] = &local_108;
      puVar2[2] = &local_c8;
      local_88._0_8_ = puVar2;
      local_78 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::forwardLoadStores()::{lambda(spv::Op, unsigned_int)#2}>::_M_manager;
      pcStack_70 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::forwardLoadStores()::{lambda(spv::Op, unsigned_int)#2}>::_M_invoke;
      process(this, local_88, local_68, 0, 0);
      if (local_78 != (code*)0x0) {
         ( *local_78 )(local_88, local_88, 3);
      }

      if (local_58 != (code*)0x0) {
         ( *local_58 )(local_68, local_68, 3);
      }

      puVar2 = local_b8;
      if (this[0x1d8] == (spirvbin_t)0x0) {
         local_68._8_8_ = 0;
         local_58 = std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::forwardLoadStores()::{lambda(unsigned_int &)#2}>::_M_manager;
         pcStack_50 = std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::forwardLoadStores()::{lambda(unsigned_int &)#2}>::_M_invoke;
         local_88 = (undefined1[16])0x0;
         local_78 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::inst_fn_nop::{lambda(spv::Op, unsigned_int)#1}>::_M_manager;
         pcStack_70 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::inst_fn_nop::{lambda(spv::Op, unsigned_int)#1}>::_M_invoke;
         process(this, local_88, local_68, 0, 0);
         if (local_78 != (code*)0x0) {
            ( *local_78 )(local_88, local_88, 3);
         }

         if (local_58 != (code*)0x0) {
            ( *local_58 )(local_68, local_68, 3);
         }

         puVar2 = local_b8;
         if (this[0x1d8] == (spirvbin_t)0x0) {
            strip(this);
            puVar2 = local_b8;
            while (puVar2 != (undefined8*)0x0) {
               puVar1 = (undefined8*)*puVar2;
               operator_delete(puVar2, 0x10);
               puVar2 = puVar1;
            }
;
            memset(local_c8, 0, local_c0 * 8);
            local_b0 = 0;
            local_b8 = (undefined8*)0x0;
            puVar2 = local_f8;
            if (local_c8 != local_98) {
               operator_delete(local_c8, local_c0 * 8);
               puVar2 = local_f8;
            }

            while (puVar2 != (undefined8*)0x0) {
               puVar1 = (undefined8*)*puVar2;
               operator_delete(puVar2, 0x10);
               puVar2 = puVar1;
            }
;
            memset(local_108, 0, local_100 * 8);
            local_f0 = 0;
            local_f8 = (undefined8*)0x0;
            if (local_108 != local_d8) {
               operator_delete(local_108, local_100 * 8);
            }

            goto LAB_0010965c;
         }

      }

   }

   while (puVar2 != (undefined8*)0x0) {
      puVar1 = (undefined8*)*puVar2;
      operator_delete(puVar2, 0x10);
      puVar2 = puVar1;
   }
;
   memset(local_c8, 0, local_c0 * 8);
   local_b0 = 0;
   local_b8 = (undefined8*)0x0;
   puVar2 = local_f8;
   if (local_c8 != local_98) {
      operator_delete(local_c8, local_c0 << 3);
      puVar2 = local_f8;
   }

   while (puVar2 != (undefined8*)0x0) {
      puVar1 = (undefined8*)*puVar2;
      operator_delete(puVar2, 0x10);
      puVar2 = puVar1;
   }
;
   memset(local_108, 0, local_100 * 8);
   local_f0 = 0;
   local_f8 = (undefined8*)0x0;
   if (local_108 != local_d8) {
      operator_delete(local_108, local_100 << 3);
   }

   LAB_0010965c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::spirvbin_t::optLoadStore() */void spv::spirvbin_t::optLoadStore(spirvbin_t *this) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   long *plVar3;
   long lVar4;
   uint *puVar5;
   uint uVar6;
   long in_FS_OFFSET;
   undefined4 local_150;
   uint local_14c;
   undefined8 *local_148;
   long local_140;
   undefined8 *local_138;
   undefined8 local_130;
   undefined4 local_128;
   undefined8 local_120;
   undefined8 local_118[2];
   undefined8 *local_108;
   long local_100;
   undefined8 *local_f8;
   undefined8 local_f0;
   undefined4 local_e8;
   undefined8 local_e0;
   undefined8 local_d8[2];
   undefined8 *local_c8;
   long local_c0;
   undefined8 *local_b8;
   undefined8 local_b0;
   undefined4 local_a8;
   undefined8 local_a0;
   undefined8 local_98[2];
   undefined1 local_88[16];
   code *local_78;
   code *pcStack_70;
   undefined1 local_68[16];
   code *local_58;
   code *pcStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_140 = 1;
   local_128 = _LC20;
   local_e8 = _LC20;
   local_138 = (undefined8*)0x0;
   local_130 = 0;
   local_120 = 0;
   local_118[0] = 0;
   local_100 = 1;
   local_f8 = (undefined8*)0x0;
   local_f0 = 0;
   local_e0 = 0;
   local_a8 = _LC20;
   local_68._8_8_ = (_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)&local_108;
   local_68._0_8_ = &local_148;
   local_58 = std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::optLoadStore()::{lambda(unsigned_int &)#1}>::_M_manager;
   pcStack_50 = std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::optLoadStore()::{lambda(unsigned_int &)#1}>::_M_invoke;
   local_88 = (undefined1[16])0x0;
   local_d8[0] = 0;
   local_c0 = 1;
   local_b8 = (undefined8*)0x0;
   local_b0 = 0;
   local_a0 = 0;
   local_98[0] = 0;
   local_150 = 0;
   local_78 = (code*)0x0;
   pcStack_70 = (code*)0x0;
   local_148 = local_118;
   local_108 = local_d8;
   local_c8 = local_98;
   puVar2 = (undefined8*)operator_new(0x28);
   *puVar2 = this;
   puVar2[1] = &local_150;
   puVar2[2] = &local_148;
   puVar2[3] = (_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)&local_108;
   puVar2[4] = &local_c8;
   local_88._0_8_ = puVar2;
   local_78 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::optLoadStore()::{lambda(spv::Op, unsigned_int)#1}>::_M_manager;
   pcStack_70 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::optLoadStore()::{lambda(spv::Op, unsigned_int)#1}>::_M_invoke;
   process(this, local_88, local_68, 0, 0);
   if (local_78 != (code*)0x0) {
      ( *local_78 )(local_88, local_88, 3);
   }

   if (local_58 != (code*)0x0) {
      ( *local_58 )(local_68, local_68, 3);
   }

   puVar2 = local_b8;
   if (this[0x1d8] == (spirvbin_t)0x0) {
      local_78 = (code*)0x0;
      local_68 = (undefined1[16])0x0;
      pcStack_70 = (code*)0x0;
      local_58 = std::_Function_handler<void(unsigned_int &),spv::op_fn_nop::{lambda(unsigned_int &)#1}>::_M_manager;
      pcStack_50 = std::_Function_handler<void(unsigned_int &),spv::op_fn_nop::{lambda(unsigned_int &)#1}>::_M_invoke;
      local_88 = (undefined1[16])0x0;
      plVar3 = (long*)operator_new(0x18);
      plVar3[1] = (long)this;
      *plVar3 = (long)&local_148;
      plVar3[2] = (long)&local_108;
      local_88._0_8_ = plVar3;
      local_78 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::optLoadStore()::{lambda(spv::Op, unsigned_int)#2}>::_M_manager;
      pcStack_70 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::optLoadStore()::{lambda(spv::Op, unsigned_int)#2}>::_M_invoke;
      process(this, local_88, local_68, 0, 0);
      if (local_78 != (code*)0x0) {
         ( *local_78 )(local_88, local_88, 3);
      }

      if (local_58 != (code*)0x0) {
         ( *local_58 )(local_68, local_68, 3);
      }

      puVar2 = local_b8;
      if (this[0x1d8] == (spirvbin_t)0x0) {
         puVar2 = local_f8;
         while (puVar2 != (undefined8*)0x0) {
            uVar6 = *(uint*)( puVar2 + 1 );
            while (local_14c = uVar6,lVar4 = std::_Hashtable<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find((_Hashtable<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>*)&local_108, (uint*)(ulong)uVar6),lVar4 != 0) {
               puVar5 = (uint*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)&local_108, &local_14c);
               uVar6 = *puVar5;
            }
;
            puVar5 = (uint*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)&local_108, (uint*)( puVar2 + 1 ));
            puVar2 = (undefined8*)*puVar2;
            *puVar5 = uVar6;
         }
;
         local_58 = std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::optLoadStore()::{lambda(unsigned_int &)#2}>::_M_manager;
         pcStack_50 = std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::optLoadStore()::{lambda(unsigned_int &)#2}>::_M_invoke;
         local_68._8_8_ = 0;
         local_68._0_8_ = (_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)&local_108;
         local_88._8_8_ = this;
         local_88._0_8_ = &local_148;
         local_78 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::optLoadStore()::{lambda(spv::Op, unsigned_int)#3}>::_M_manager;
         pcStack_70 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::optLoadStore()::{lambda(spv::Op, unsigned_int)#3}>::_M_invoke;
         process(this, local_88, local_68, 0, 0);
         if (local_78 != (code*)0x0) {
            ( *local_78 )(local_88, local_88, 3);
         }

         if (local_58 != (code*)0x0) {
            ( *local_58 )(local_68, local_68, 3);
         }

         puVar2 = local_b8;
         if (this[0x1d8] == (spirvbin_t)0x0) {
            strip(this);
            puVar2 = local_b8;
            while (puVar2 != (undefined8*)0x0) {
               puVar1 = (undefined8*)*puVar2;
               operator_delete(puVar2, 0x10);
               puVar2 = puVar1;
            }
;
            memset(local_c8, 0, local_c0 * 8);
            local_b0 = 0;
            local_b8 = (undefined8*)0x0;
            puVar2 = local_f8;
            if (local_c8 != local_98) {
               operator_delete(local_c8, local_c0 << 3);
               puVar2 = local_f8;
            }

            while (puVar2 != (undefined8*)0x0) {
               puVar1 = (undefined8*)*puVar2;
               operator_delete(puVar2, 0x10);
               puVar2 = puVar1;
            }
;
            memset(local_108, 0, local_100 * 8);
            local_f0 = 0;
            local_f8 = (undefined8*)0x0;
            puVar2 = local_138;
            if (local_108 != local_d8) {
               operator_delete(local_108, local_100 << 3);
               puVar2 = local_138;
            }

            while (puVar2 != (undefined8*)0x0) {
               puVar1 = (undefined8*)*puVar2;
               operator_delete(puVar2, 0x10);
               puVar2 = puVar1;
            }
;
            goto LAB_00109d4d;
         }

      }

   }

   while (puVar2 != (undefined8*)0x0) {
      puVar1 = (undefined8*)*puVar2;
      operator_delete(puVar2, 0x10);
      puVar2 = puVar1;
   }
;
   memset(local_c8, 0, local_c0 * 8);
   local_b0 = 0;
   local_b8 = (undefined8*)0x0;
   puVar2 = local_f8;
   if (local_c8 != local_98) {
      operator_delete(local_c8, local_c0 << 3);
      puVar2 = local_f8;
   }

   while (puVar2 != (undefined8*)0x0) {
      puVar1 = (undefined8*)*puVar2;
      operator_delete(puVar2, 0x10);
      puVar2 = puVar1;
   }
;
   memset(local_108, 0, local_100 * 8);
   local_f0 = 0;
   local_f8 = (undefined8*)0x0;
   puVar2 = local_138;
   if (local_108 != local_d8) {
      operator_delete(local_108, local_100 << 3);
      puVar2 = local_138;
   }

   while (puVar2 != (undefined8*)0x0) {
      puVar1 = (undefined8*)*puVar2;
      operator_delete(puVar2, 0x10);
      puVar2 = puVar1;
   }
;
   LAB_00109d4d:memset(local_148, 0, local_140 * 8);
   local_130 = 0;
   local_138 = (undefined8*)0x0;
   if (local_148 != local_118) {
      operator_delete(local_148, local_140 << 3);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<bool (spv::Op, unsigned int), spv::spirvbin_t::dceVars()::{lambda(spv::Op,
   unsigned int)#2}>::_M_invoke(std::_Any_data const&, spv::Op&&, unsigned int&&) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::dceVars()::{lambda(spv::Op,unsigned_int)#2}>::_M_invoke(_Any_data *param_1, Op *param_2, uint *param_3) {
   uint uVar1;
   int iVar2;
   long lVar3;
   undefined8 *puVar4;
   int *piVar5;
   long in_FS_OFFSET;
   uint local_2c;
   undefined8 local_28;
   long local_20;
   uVar1 = *param_3;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = *(int*)param_2;
   if (iVar2 == 0x3b) {
      local_2c = *(uint*)( *(long*)( *(long*)param_1 + 8 ) + ( ulong )(uVar1 + 2) * 4 );
   }
 else {
      if (( iVar2 != 0x47 ) && ( iVar2 != 5 )) goto LAB_0010a155;
      local_2c = *(uint*)( *(long*)( *(long*)param_1 + 8 ) + ( ulong )(uVar1 + 1) * 4 );
   }

   if (( local_2c != 0 ) && ( piVar5 = (int*)__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](*(_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)( param_1 + 8 ), &local_2c) * piVar5 == 1 )) {
      lVar3 = *(long*)param_1;
      puVar4 = *(undefined8**)( lVar3 + 0x1c0 );
      local_28 = CONCAT44(*(ushort*)( *(long*)( lVar3 + 8 ) + 2 + (ulong)uVar1 * 4 ) + uVar1, uVar1);
      if (puVar4 == *(undefined8**)( lVar3 + 0x1c8 )) {
         vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>::_M_realloc_insert<std::pair<unsigned_int,unsigned_int>>(lVar3 + 0x1b8, puVar4, &local_28);
      }
 else {
         *puVar4 = local_28;
         *(undefined8**)( lVar3 + 0x1c0 ) = puVar4 + 1;
      }

   }

   LAB_0010a155:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return 1;
}
/* spv::spirvbin_t::dceTypes() */void spv::spirvbin_t::dceTypes(spirvbin_t *this) {
   spirvbin_t *psVar1;
   ulong *puVar2;
   uint uVar3;
   long lVar4;
   undefined8 *puVar5;
   long *plVar6;
   undefined8 *puVar7;
   bool bVar8;
   void *pvVar9;
   spirvbin_t *psVar10;
   int *piVar11;
   ulong __n;
   ulong uVar12;
   long in_FS_OFFSET;
   uint local_10c;
   void *local_108;
   uint local_100;
   void *local_f8;
   ulong local_f0;
   void *local_e8;
   undefined8 local_e0;
   void *local_d8;
   undefined8 *local_c8;
   long local_c0;
   undefined8 *local_b8;
   undefined8 local_b0;
   undefined4 local_a8;
   undefined8 local_a0;
   undefined8 local_98[2];
   undefined1 local_88[16];
   code *local_78;
   code *pcStack_70;
   void **local_68;
   _Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *p_Stack_60;
   code *local_58;
   code *pcStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_f8 = (void*)0x0;
   uVar3 = *(uint*)( *(long*)( this + 8 ) + 0xc );
   uVar12 = (ulong)uVar3;
   local_f0 = 0;
   local_e8 = (void*)0x0;
   local_e0 = 0;
   local_d8 = (void*)0x0;
   if (uVar12 != 0) {
      __n = ( uVar12 + 0x3f >> 6 ) * 8;
      local_f8 = operator_new(__n);
      local_d8 = (void*)( (long)local_f8 + __n );
      local_f0 = local_f0 & 0xffffffff00000000;
      local_108 = (void*)( (long)local_f8 + ( (long)uVar12 >> 6 ) * 8 );
      local_e0 = CONCAT44(local_e0._4_4_, uVar3) & 0xffffffff0000003f;
      local_100 = uVar3 & 0x3f;
      local_e8 = local_108;
      memset(local_f8, 0, __n);
   }

   pvVar9 = local_f8;
   psVar10 = *(spirvbin_t**)( this + 0x110 );
   psVar1 = this + 0x100;
   if (psVar10 != psVar1) {
      lVar4 = *(long*)( this + 8 );
      do {
         uVar3 = *(uint*)( lVar4 + ( ulong )(*(uint*)( (_Rb_tree_node_base*)psVar10 + 0x20 ) + 1 + ( uint )(0x13 < *(ushort*)( lVar4 + ( ulong ) * (uint*)( (_Rb_tree_node_base*)psVar10 + 0x20 ) * 4 ) - 0x13)) * 4 );
         puVar2 = (ulong*)( (long)pvVar9 + ( ulong )(uVar3 >> 3 & 0x1ffffff8) );
         *puVar2 = *puVar2 | 1L << ( (byte)uVar3 & 0x3f );
         psVar10 = (spirvbin_t*)std::_Rb_tree_increment((_Rb_tree_node_base*)psVar10);
      }
 while ( psVar1 != psVar10 );
   }

   local_c0 = 1;
   local_b8 = (undefined8*)0x0;
   local_b0 = 0;
   local_a8 = 0x3f800000;
   local_a0 = 0;
   local_98[0] = 0;
   local_c8 = local_98;
   do {
      strip(this);
      puVar7 = local_b8;
      while (puVar7 != (undefined8*)0x0) {
         puVar5 = (undefined8*)*puVar7;
         operator_delete(puVar7, 0x10);
         puVar7 = puVar5;
      }
;
      memset(local_c8, 0, local_c0 * 8);
      local_b0 = 0;
      local_b8 = (undefined8*)0x0;
      local_58 = std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::dceTypes()::{lambda(unsigned_int &)#1}>::_M_manager;
      pcStack_50 = std::_Function_handler<void(unsigned_int &),spv::spirvbin_t::dceTypes()::{lambda(unsigned_int &)#1}>::_M_invoke;
      local_88 = (undefined1[16])0x0;
      local_78 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::inst_fn_nop::{lambda(spv::Op, unsigned_int)#1}>::_M_manager;
      pcStack_70 = std::_Function_handler<bool(spv::Op, unsigned_int),spv::inst_fn_nop::{lambda(spv::Op, unsigned_int)#1}>::_M_invoke;
      local_68 = &local_f8;
      p_Stack_60 = (_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)&local_c8;
      process(this, local_88, &local_68, 0, 0);
      if (local_78 != (code*)0x0) {
         ( *local_78 )(local_88, local_88, 3);
      }

      if (local_58 != (code*)0x0) {
         ( *local_58 )(&local_68, &local_68, 3);
      }

      puVar7 = local_b8;
      if (this[0x1d8] != (spirvbin_t)0x0) goto joined_r0x0010a6d1;
      psVar10 = *(spirvbin_t**)( this + 0x110 );
      bVar8 = false;
      if (psVar1 == psVar10) break;
      do {
         while (true) {
            uVar3 = *(uint*)( (_Rb_tree_node_base*)psVar10 + 0x20 );
            local_10c = *(uint*)( *(long*)( this + 8 ) + ( ulong )(uVar3 + 1 + ( uint )(0x13 < *(ushort*)( *(long*)( this + 8 ) + (ulong)uVar3 * 4 ) - 0x13)) * 4 );
            piVar11 = (int*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)&local_c8, &local_10c);
            if (*piVar11 != 1) break;
            piVar11 = (int*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)&local_c8, &local_10c);
            plVar6 = *(long**)( this + 0x1c0 );
            *piVar11 = *piVar11 + -1;
            local_108 = (void*)CONCAT44(*(ushort*)( *(long*)( this + 8 ) + 2 + (ulong)uVar3 * 4 ) + uVar3, uVar3);
            if (plVar6 == *(long**)( this + 0x1c8 )) {
               std::vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>::_M_realloc_insert<std::pair<unsigned_int,unsigned_int>>(this + 0x1b8, plVar6, &local_108);
            }
 else {
               *plVar6 = (long)local_108;
               *(long**)( this + 0x1c0 ) = plVar6 + 1;
            }

            bVar8 = true;
            psVar10 = (spirvbin_t*)std::_Rb_tree_increment((_Rb_tree_node_base*)psVar10);
            if (psVar1 == psVar10) goto LAB_0010a605;
         }
;
         psVar10 = (spirvbin_t*)std::_Rb_tree_increment((_Rb_tree_node_base*)psVar10);
      }
 while ( psVar1 != psVar10 );
      LAB_0010a605:puVar7 = local_b8;
      if (this[0x1d8] != (spirvbin_t)0x0) goto joined_r0x0010a6d1;
   }
 while ( bVar8 );
   while (puVar7 != (undefined8*)0x0) {
      puVar5 = (undefined8*)*puVar7;
      operator_delete(puVar7, 0x10);
      puVar7 = puVar5;
   }
;
   memset(local_c8, 0, local_c0 * 8);
   local_b0 = 0;
   local_b8 = (undefined8*)0x0;
   if (local_c8 != local_98) {
      operator_delete(local_c8, local_c0 * 8);
   }

   LAB_0010a747:if (local_f8 != (void*)0x0) {
      operator_delete(local_f8, (long)local_d8 - (long)local_f8);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   joined_r0x0010a6d1:while (puVar7 != (undefined8*)0x0) {
      puVar5 = (undefined8*)*puVar7;
      operator_delete(puVar7, 0x10);
      puVar7 = puVar5;
   }
;
   memset(local_c8, 0, local_c0 * 8);
   local_b0 = 0;
   local_b8 = (undefined8*)0x0;
   if (local_c8 != local_98) {
      operator_delete(local_c8, local_c0 << 3);
   }

   goto LAB_0010a747;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* spv::spirvbin_t::remap(unsigned int) */void spv::spirvbin_t::remap(spirvbin_t *this, uint param_1) {
   undefined1 uVar1;
   code *pcVar2;
   long *plVar3;
   uint uVar4;
   long *plVar5;
   uint uVar6;
   uint uVar7;
   ulong uVar8;
   long *plVar9;
   long *plVar11;
   ulong uVar12;
   long lVar13;
   char cVar14;
   uint uVar15;
   long in_FS_OFFSET;
   ulong *local_178;
   long local_170;
   ulong local_168[2];
   ulong *local_158;
   int local_150;
   undefined4 uStack_14c;
   ulong local_148[2];
   long *local_138;
   string *local_130;
   long local_128[2];
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
   ulong uVar10;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(uint*)( this + 0x1d0 ) = param_1;
   spv::Parameterize();
   validate(this);
   buildLocalMaps(this);
   pcVar2 = *(code**)( *(long*)this + 0x10 );
   uVar7 = *(uint*)( *(long*)( this + 8 ) + 0xc );
   if (uVar7 < 10) {
      local_158 = local_148;
      std::__cxx11::string::_M_construct(( ulong ) & local_158, '\x01');
      LAB_0010a9b0:cVar14 = (char)uVar7 + '0';
   }
 else {
      if (uVar7 < 100) {
         local_158 = local_148;
         std::__cxx11::string::_M_construct(( ulong ) & local_158, '\x02');
         local_118 = __LC25;
         uStack_110 = _UNK_0010e2e8;
         local_108 = __LC26;
         uStack_100 = _UNK_0010e2f8;
         local_f8 = __LC27;
         uStack_f0 = _UNK_0010e308;
         local_e8 = __LC28;
         uStack_e0 = _UNK_0010e318;
         local_d8 = __LC29;
         uStack_d0 = _UNK_0010e328;
         local_c8 = __LC30;
         uStack_c0 = _UNK_0010e338;
         local_b8 = __LC31;
         uStack_b0 = _UNK_0010e348;
         local_a8 = __LC32;
         uStack_a0 = _UNK_0010e358;
         local_98 = __LC33;
         uStack_90 = _UNK_0010e368;
         local_88 = __LC34;
         uStack_80 = _UNK_0010e378;
         local_78 = __LC35;
         uStack_70 = _UNK_0010e388;
         local_68 = __LC36;
         uStack_60 = (undefined1)_UNK_0010e398;
         uStack_5f = (undefined7)_LC37._0_8_;
         cStack_58 = SUB81(_LC37._0_8_, 7);
         for (int i = 0; i < 8; i++) {
            acStack_57[i] = _LC37[( i + 8 )];
         }

      }
 else {
         if (uVar7 < 1000) {
            cVar14 = '\x03';
         }
 else if (uVar7 < 10000) {
            cVar14 = '\x04';
         }
 else {
            cVar14 = '\x05';
            if (99999 < uVar7) {
               if (uVar7 < 1000000) {
                  cVar14 = '\x05';
                  LAB_0010a866:cVar14 = cVar14 + '\x01';
               }
 else {
                  cVar14 = '\a';
                  if (9999999 < uVar7) {
                     if (uVar7 < 100000000) {
                        cVar14 = '\b';
                     }
 else {
                        if (999999999 < uVar7) {
                           cVar14 = '\t';
                           goto LAB_0010a866;
                        }

                        cVar14 = '\t';
                     }

                  }

               }

            }

         }

         local_158 = local_148;
         uVar8 = (ulong)uVar7;
         std::__cxx11::string::_M_construct(( ulong ) & local_158, cVar14);
         uVar4 = local_150 - 1;
         local_118 = __LC25;
         uStack_110 = _UNK_0010e2e8;
         local_108 = __LC26;
         uStack_100 = _UNK_0010e2f8;
         local_f8 = __LC27;
         uStack_f0 = _UNK_0010e308;
         local_e8 = __LC28;
         uStack_e0 = _UNK_0010e318;
         local_d8 = __LC29;
         uStack_d0 = _UNK_0010e328;
         local_c8 = __LC30;
         uStack_c0 = _UNK_0010e338;
         local_b8 = __LC31;
         uStack_b0 = _UNK_0010e348;
         local_a8 = __LC32;
         uStack_a0 = _UNK_0010e358;
         local_98 = __LC33;
         uStack_90 = _UNK_0010e368;
         local_88 = __LC34;
         uStack_80 = _UNK_0010e378;
         local_78 = __LC35;
         uStack_70 = _UNK_0010e388;
         local_68 = __LC36;
         uStack_60 = (undefined1)_UNK_0010e398;
         uStack_5f = (undefined7)_LC37._0_8_;
         cStack_58 = SUB81(_LC37._0_8_, 7);
         for (int i = 0; i < 8; i++) {
            acStack_57[i] = _LC37[( i + 8 )];
         }

         do {
            uVar15 = uVar7;
            uVar8 = uVar8 / 100;
            uVar7 = (uint)uVar8;
            uVar6 = ( uVar15 + uVar7 * -100 ) * 2;
            uVar1 = *(undefined1*)( (long)&local_118 + (ulong)uVar6 );
            *(undefined1*)( (long)local_158 + (ulong)uVar4 ) = *(undefined1*)( (long)&local_118 + ( ulong )(uVar6 + 1) );
            uVar6 = uVar4 - 1;
            uVar4 = uVar4 - 2;
            *(undefined1*)( (long)local_158 + (ulong)uVar6 ) = uVar1;
         }
 while ( 9999 < uVar15 );
         if (uVar15 < 1000) goto LAB_0010a9b0;
      }

      cVar14 = *(char*)( (long)&local_118 + ( ulong )(uVar7 * 2) );
      *(undefined1*)( (long)local_158 + 1 ) = *(undefined1*)( (long)&local_118 + ( ulong )(uVar7 * 2 + 1) );
   }

   *(char*)local_158 = cVar14;
   local_178 = local_168;
   std::__cxx11::string::_M_construct<char_const*>(&local_178, "ID bound: ");
   uVar8 = local_170 + CONCAT44(uStack_14c, local_150);
   uVar12 = local_148[0];
   if (local_178 == local_168) {
      if (( 0xf < uVar8 ) && ( local_158 != local_148 )) goto LAB_0010aa0e;
      LAB_0010aa1a:if (0x3fffffffffffffffU - local_170 < CONCAT44(uStack_14c, local_150)) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("basic_string::append");
      }

      plVar3 = (long*)std::__cxx11::string::_M_append((char*)&local_178, (ulong)local_158);
      plVar9 = (long*)*plVar3;
      plVar5 = plVar3 + 2;
      if (plVar9 == plVar5) {
         uVar8 = plVar3[1] + 1;
         plVar11 = plVar5;
         plVar9 = local_128;
         if (7 < (uint)uVar8) {
            uVar12 = 0;
            do {
               uVar7 = (int)uVar12 + 8;
               uVar10 = (ulong)uVar7;
               *(undefined8*)( (long)local_128 + uVar12 ) = *(undefined8*)( (long)plVar5 + uVar12 );
               uVar12 = uVar10;
            }
 while ( uVar7 < ( (uint)uVar8 & 0xfffffff8 ) );
            plVar9 = (long*)( (long)local_128 + uVar10 );
            plVar11 = (long*)( uVar10 + (long)plVar5 );
         }

         lVar13 = 0;
         if (( uVar8 & 4 ) != 0) {
            *(int*)plVar9 = (int)*plVar11;
            lVar13 = 4;
         }

         if (( uVar8 & 2 ) != 0) {
            *(undefined2*)( (long)plVar9 + lVar13 ) = *(undefined2*)( (long)plVar11 + lVar13 );
            lVar13 = lVar13 + 2;
         }

         local_138 = local_128;
         if (( uVar8 & 1 ) != 0) {
            *(undefined1*)( (long)plVar9 + lVar13 ) = *(undefined1*)( (long)plVar11 + lVar13 );
         }

      }
 else {
         LAB_0010aa52:local_128[0] = plVar3[2];
         local_138 = plVar9;
      }

   }
 else {
      if (uVar8 <= local_168[0]) goto LAB_0010aa1a;
      if (local_158 == local_148) {
         uVar12 = 0xf;
      }

      LAB_0010aa0e:if (uVar12 < uVar8) goto LAB_0010aa1a;
      plVar3 = (long*)std::__cxx11::string::_M_replace(( ulong ) & local_158, 0, (char*)0x0, (ulong)local_178);
      local_138 = local_128;
      plVar9 = (long*)*plVar3;
      plVar5 = plVar3 + 2;
      if (plVar9 != plVar5) goto LAB_0010aa52;
      uVar8 = plVar3[1] + 1;
      plVar11 = plVar5;
      plVar9 = local_138;
      if (7 < (uint)uVar8) {
         uVar12 = 0;
         do {
            uVar7 = (int)uVar12 + 8;
            uVar10 = (ulong)uVar7;
            *(undefined8*)( (long)local_138 + uVar12 ) = *(undefined8*)( (long)plVar5 + uVar12 );
            uVar12 = uVar10;
         }
 while ( uVar7 < ( (uint)uVar8 & 0xfffffff8 ) );
         plVar9 = (long*)( (long)local_138 + uVar10 );
         plVar11 = (long*)( uVar10 + (long)plVar5 );
      }

      lVar13 = 0;
      if (( uVar8 & 4 ) != 0) {
         *(int*)plVar9 = (int)*plVar11;
         lVar13 = 4;
      }

      if (( uVar8 & 2 ) != 0) {
         *(undefined2*)( (long)plVar9 + lVar13 ) = *(undefined2*)( (long)plVar11 + lVar13 );
         lVar13 = lVar13 + 2;
      }

      if (( uVar8 & 1 ) != 0) {
         *(undefined1*)( (long)plVar9 + lVar13 ) = *(undefined1*)( (long)plVar11 + lVar13 );
      }

   }

   local_130 = (string*)plVar3[1];
   *plVar3 = (long)plVar5;
   plVar3[1] = 0;
   *(undefined1*)( plVar3 + 2 ) = 0;
   if (pcVar2 == msg) {
      if (2 < *(int*)( this + 0x1d4 )) {
         msg(4, (int)&local_138, local_130);
      }

   }
 else {
      ( *pcVar2 )(this, 3, 4, &local_138);
   }

   if (local_138 != local_128) {
      operator_delete(local_138, local_128[0] + 1);
   }

   if (local_178 != local_168) {
      operator_delete(local_178, local_168[0] + 1);
   }

   if (local_158 != local_148) {
      operator_delete(local_158, local_148[0] + 1);
   }

   if (( (byte)this[0x1d0] & 1 ) != 0) {
      stripDebug(this);
   }

   if (( this[0x1d8] == (spirvbin_t)0x0 ) && ( strip(this),this[0x1d8] == (spirvbin_t)0x0 )) {
      uVar7 = *(uint*)( this + 0x1d0 );
      if (( uVar7 & 0x80 ) != 0) {
         optLoadStore(this);
         if (this[0x1d8] != (spirvbin_t)0x0) goto LAB_0010aaf6;
         uVar7 = *(uint*)( this + 0x1d0 );
      }

      if (( uVar7 & 0x100 ) != 0) {
         forwardLoadStores(this);
         if (this[0x1d8] != (spirvbin_t)0x0) goto LAB_0010aaf6;
         uVar7 = *(uint*)( this + 0x1d0 );
      }

      if (( uVar7 & 0x10 ) != 0) {
         dceFuncs(this);
         if (this[0x1d8] != (spirvbin_t)0x0) goto LAB_0010aaf6;
         uVar7 = *(uint*)( this + 0x1d0 );
      }

      if (( uVar7 & 0x20 ) != 0) {
         dceVars(this);
         if (this[0x1d8] != (spirvbin_t)0x0) goto LAB_0010aaf6;
         uVar7 = *(uint*)( this + 0x1d0 );
      }

      if (( ( ( ( uVar7 & 0x40 ) == 0 ) || ( dceTypes(this),this[0x1d8] == (spirvbin_t)0x0 ) ) && ( strip(this),this[0x1d8] == (spirvbin_t)0x0 ) ) && ( stripDeadRefs(this),this[0x1d8] == (spirvbin_t)0x0 )) {
         uVar7 = *(uint*)( this + 0x1d0 );
         if (( uVar7 & 2 ) != 0) {
            mapTypeConst(this);
            if (this[0x1d8] != (spirvbin_t)0x0) goto LAB_0010aaf6;
            uVar7 = *(uint*)( this + 0x1d0 );
         }

         if (( uVar7 & 4 ) != 0) {
            mapNames(this);
            if (this[0x1d8] != (spirvbin_t)0x0) goto LAB_0010aaf6;
            uVar7 = *(uint*)( this + 0x1d0 );
         }

         if (( uVar7 & 8 ) != 0) {
            mapFnBodies(this);
            if (this[0x1d8] != (spirvbin_t)0x0) goto LAB_0010aaf6;
            uVar7 = *(uint*)( this + 0x1d0 );
         }

         if (( ( uVar7 & 0xe ) != 0 ) && ( mapRemainder(this),this[0x1d8] == (spirvbin_t)0x0 )) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               applyMap(this);
               return;
            }

            goto LAB_0010b050;
         }

      }

   }

   LAB_0010aaf6:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010b050:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* spv::spirvbin_t::remap(std::vector<unsigned int, std::allocator<unsigned int> >&,
   std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string > > const&, unsigned int)
    */void spv::spirvbin_t::remap(spirvbin_t *this, vector *param_1, vector *param_2, uint param_3) {
   undefined8 uVar1;
   long lVar2;
   undefined8 *puVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   ulong uVar7;
   long *plVar8;
   ulong uVar9;
   uint extraout_EDX;
   undefined8 *puVar10;
   string *psVar11;
   long *plVar12;
   long *plVar13;
   long *plVar14;
   undefined8 *puVar15;
   string *psVar16;
   string *psVar17;
   long local_48;
   if (param_2 == (vector*)( this + 0x20 )) goto LAB_0010b157;
   plVar14 = *(long**)( param_2 + 8 );
   plVar12 = *(long**)param_2;
   psVar16 = *(string**)( this + 0x20 );
   uVar7 = (long)plVar14 - (long)plVar12;
   if (( ulong )(*(long*)( this + 0x30 ) - (long)psVar16) < uVar7) {
      if (0x7fffffffffffffe0 < uVar7) {
         std::__throw_bad_array_new_length();
         puVar3 = *(undefined8**)( this + 0x20 );
         puVar15 = *(undefined8**)( this + 0x28 );
         puVar10 = puVar3;
         if (puVar3 != puVar15) {
            do {
               if ((undefined8*)*puVar10 != puVar10 + 2) {
                  operator_delete((undefined8*)*puVar10, puVar10[2] + 1);
               }

               puVar10 = puVar10 + 4;
            }
 while ( puVar15 != puVar10 );
            *(undefined8**)( this + 0x28 ) = puVar3;
         }

         uVar4 = *(undefined8*)( param_1 + 8 );
         uVar5 = *(undefined8*)( this + 8 );
         uVar6 = *(undefined8*)( this + 0x10 );
         uVar1 = *(undefined8*)( this + 0x18 );
         *(undefined8*)( this + 8 ) = *(undefined8*)param_1;
         *(undefined8*)( this + 0x10 ) = uVar4;
         *(undefined8*)( this + 0x18 ) = *(undefined8*)( param_1 + 0x10 );
         *(undefined8*)( param_1 + 0x10 ) = uVar1;
         *(undefined8*)param_1 = uVar5;
         *(undefined8*)( param_1 + 8 ) = uVar6;
         remap(this, extraout_EDX);
         uVar4 = *(undefined8*)( param_1 + 8 );
         uVar5 = *(undefined8*)( this + 8 );
         uVar6 = *(undefined8*)( this + 0x10 );
         uVar1 = *(undefined8*)( this + 0x18 );
         *(undefined8*)( this + 8 ) = *(undefined8*)param_1;
         *(undefined8*)( this + 0x10 ) = uVar4;
         *(undefined8*)( this + 0x18 ) = *(undefined8*)( param_1 + 0x10 );
         *(undefined8*)( param_1 + 0x10 ) = uVar1;
         *(undefined8*)param_1 = uVar5;
         *(undefined8*)( param_1 + 8 ) = uVar6;
         return;
      }

      plVar8 = (long*)operator_new(uVar7);
      plVar13 = plVar8;
      for (; plVar14 != plVar12; plVar12 = plVar12 + 4) {
         *plVar13 = (long)( plVar13 + 2 );
         std::__cxx11::string::_M_construct<char*>(plVar13, *plVar12, plVar12[1] + *plVar12);
         plVar13 = plVar13 + 4;
      }

      puVar3 = *(undefined8**)( this + 0x28 );
      puVar15 = *(undefined8**)( this + 0x20 );
      if (puVar3 != puVar15) {
         do {
            if ((undefined8*)*puVar15 != puVar15 + 2) {
               operator_delete((undefined8*)*puVar15, puVar15[2] + 1);
            }

            puVar15 = puVar15 + 4;
         }
 while ( puVar3 != puVar15 );
         puVar15 = *(undefined8**)( this + 0x20 );
      }

      if (puVar15 != (undefined8*)0x0) {
         operator_delete(puVar15, *(long*)( this + 0x30 ) - (long)puVar15);
      }

      *(long**)( this + 0x20 ) = plVar8;
      psVar16 = (string*)( (long)plVar8 + uVar7 );
      *(string**)( this + 0x30 ) = psVar16;
   }
 else {
      psVar11 = *(string**)( this + 0x28 );
      uVar9 = (long)psVar11 - (long)psVar16;
      if (uVar9 < uVar7) {
         if (0 < (long)uVar9) {
            do {
               psVar17 = psVar16 + 0x20;
               std::__cxx11::string::_M_assign(psVar16);
               psVar16 = psVar17;
            }
 while ( psVar11 != psVar17 );
            psVar11 = *(string**)( this + 0x28 );
            psVar16 = *(string**)( this + 0x20 );
            plVar14 = *(long**)( param_2 + 8 );
            plVar12 = *(long**)param_2;
            uVar9 = (long)psVar11 - (long)psVar16;
         }

         plVar12 = (long*)( (long)plVar12 + uVar9 );
         if (plVar12 == plVar14) {
            psVar16 = psVar16 + uVar7;
            goto LAB_0010b153;
         }

         do {
            lVar2 = plVar12[1];
            plVar13 = plVar12 + 4;
            *(string**)psVar11 = psVar11 + 0x10;
            std::__cxx11::string::_M_construct<char*>(psVar11, *plVar12, lVar2 + *plVar12);
            psVar11 = psVar11 + 0x20;
            plVar12 = plVar13;
         }
 while ( plVar13 != plVar14 );
      }
 else {
         if (0 < (long)uVar7) {
            local_48 = (long)uVar7 >> 5;
            psVar17 = psVar16;
            do {
               std::__cxx11::string::_M_assign(psVar17);
               local_48 = local_48 + -1;
               psVar17 = psVar17 + 0x20;
            }
 while ( local_48 != 0 );
            uVar9 = 0x20;
            if (0 < (long)uVar7) {
               uVar9 = uVar7;
            }

            psVar16 = psVar16 + uVar9;
         }

         for (; psVar11 != psVar16; psVar16 = psVar16 + 0x20) {
            if (*(string**)psVar16 != psVar16 + 0x10) {
               operator_delete(*(string**)psVar16, *(long*)( psVar16 + 0x10 ) + 1);
            }

         }

      }

      psVar16 = (string*)( uVar7 + *(long*)( this + 0x20 ) );
   }

   LAB_0010b153:*(string**)( this + 0x28 ) = psVar16;
   LAB_0010b157:uVar4 = *(undefined8*)( param_1 + 8 );
   uVar5 = *(undefined8*)( this + 8 );
   uVar6 = *(undefined8*)( this + 0x10 );
   uVar1 = *(undefined8*)( this + 0x18 );
   *(undefined8*)( this + 8 ) = *(undefined8*)param_1;
   *(undefined8*)( this + 0x10 ) = uVar4;
   *(undefined8*)( this + 0x18 ) = *(undefined8*)( param_1 + 0x10 );
   *(undefined8*)( param_1 + 0x10 ) = uVar1;
   *(undefined8*)param_1 = uVar5;
   *(undefined8*)( param_1 + 8 ) = uVar6;
   remap(this, param_3);
   uVar4 = *(undefined8*)( param_1 + 8 );
   uVar5 = *(undefined8*)( this + 8 );
   uVar6 = *(undefined8*)( this + 0x10 );
   uVar1 = *(undefined8*)( this + 0x18 );
   *(undefined8*)( this + 8 ) = *(undefined8*)param_1;
   *(undefined8*)( this + 0x10 ) = uVar4;
   *(undefined8*)( this + 0x18 ) = *(undefined8*)( param_1 + 0x10 );
   *(undefined8*)( param_1 + 0x10 ) = uVar1;
   *(undefined8*)param_1 = uVar5;
   *(undefined8*)( param_1 + 8 ) = uVar6;
   return;
}
/* spv::spirvbin_t::remap(std::vector<unsigned int, std::allocator<unsigned int> >&, unsigned int)
    */void spv::spirvbin_t::remap(spirvbin_t *this, vector *param_1, uint param_2) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   puVar1 = *(undefined8**)( this + 0x20 );
   puVar2 = *(undefined8**)( this + 0x28 );
   puVar7 = puVar1;
   if (puVar1 != puVar2) {
      do {
         if ((undefined8*)*puVar7 != puVar7 + 2) {
            operator_delete((undefined8*)*puVar7, puVar7[2] + 1);
         }

         puVar7 = puVar7 + 4;
      }
 while ( puVar2 != puVar7 );
      *(undefined8**)( this + 0x28 ) = puVar1;
   }

   uVar4 = *(undefined8*)( param_1 + 8 );
   uVar5 = *(undefined8*)( this + 8 );
   uVar6 = *(undefined8*)( this + 0x10 );
   uVar3 = *(undefined8*)( this + 0x18 );
   *(undefined8*)( this + 8 ) = *(undefined8*)param_1;
   *(undefined8*)( this + 0x10 ) = uVar4;
   *(undefined8*)( this + 0x18 ) = *(undefined8*)( param_1 + 0x10 );
   *(undefined8*)( param_1 + 0x10 ) = uVar3;
   *(undefined8*)param_1 = uVar5;
   *(undefined8*)( param_1 + 8 ) = uVar6;
   remap(this, param_2);
   uVar4 = *(undefined8*)( param_1 + 8 );
   uVar5 = *(undefined8*)( this + 8 );
   uVar6 = *(undefined8*)( this + 0x10 );
   uVar3 = *(undefined8*)( this + 0x18 );
   *(undefined8*)( this + 8 ) = *(undefined8*)param_1;
   *(undefined8*)( this + 0x10 ) = uVar4;
   *(undefined8*)( this + 0x18 ) = *(undefined8*)( param_1 + 0x10 );
   *(undefined8*)( param_1 + 0x10 ) = uVar3;
   *(undefined8*)param_1 = uVar5;
   *(undefined8*)( param_1 + 8 ) = uVar6;
   return;
}
/* std::_Function_handler<bool (spv::Op, unsigned int),
   spv::spirvbin_t::stripDebug()::{lambda(spv::Op, unsigned int)#1}>::_M_invoke(std::_Any_data
   const&, spv::Op&&, unsigned int&&) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::stripDebug()::{lambda(spv::Op,unsigned_int)#1}>::_M_invoke(_Any_data *param_1, Op *param_2, uint *param_3) {
   uint uVar1;
   long lVar2;
   undefined8 *puVar3;
   char cVar4;
   long in_FS_OFFSET;
   undefined8 local_28;
   long local_20;
   uVar1 = *param_3;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar4 = spv::spirvbin_t::isStripOp(*(undefined8*)param_1, *(undefined4*)param_2, uVar1);
   if (cVar4 != '\0') {
      lVar2 = *(long*)param_1;
      puVar3 = *(undefined8**)( lVar2 + 0x1c0 );
      local_28 = CONCAT44(*(ushort*)( *(long*)( lVar2 + 8 ) + 2 + (ulong)uVar1 * 4 ) + uVar1, uVar1);
      if (puVar3 == *(undefined8**)( lVar2 + 0x1c8 )) {
         vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>::_M_realloc_insert<std::pair<unsigned_int,unsigned_int>>(lVar2 + 0x1b8, puVar3, &local_28);
      }
 else {
         *puVar3 = local_28;
         *(undefined8**)( lVar2 + 0x1c0 ) = puVar3 + 1;
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<bool (spv::Op, unsigned int),
   spv::spirvbin_t::optLoadStore()::{lambda(spv::Op, unsigned int)#3}>::_M_invoke(std::_Any_data
   const&, spv::Op&&, unsigned int&&) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::optLoadStore()::{lambda(spv::Op,unsigned_int)#3}>::_M_invoke(_Any_data *param_1, Op *param_2, uint *param_3) {
   uint uVar1;
   int iVar2;
   undefined8 *puVar3;
   long lVar4;
   undefined8 uVar5;
   ulong uVar6;
   long lVar7;
   long lVar8;
   ulong uVar9;
   long in_FS_OFFSET;
   undefined8 local_28;
   long local_20;
   uVar1 = *param_3;
   uVar9 = (ulong)uVar1;
   iVar2 = *(int*)param_2;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (iVar2 == 0x3d) {
      lVar7 = *(long*)( param_1 + 8 );
      uVar6 = ( ulong )(uVar1 + 3);
      lVar8 = *(long*)( lVar7 + 8 );
      LAB_0010b4ec:lVar4 = _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::find(*(_Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>**)param_1, (uint*)( ulong ) * (uint*)( lVar8 + uVar6 * 4 ));
      if (lVar4 != 0) {
         puVar3 = *(undefined8**)( lVar7 + 0x1c0 );
         local_28 = CONCAT44(( uint ) * (ushort*)( lVar8 + 2 + ( uVar9 & 0xffffffff ) * 4 ) + (int)uVar9, (int)uVar9);
         if (puVar3 == *(undefined8**)( lVar7 + 0x1c8 )) {
            vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>::_M_realloc_insert<std::pair<unsigned_int,unsigned_int>>(lVar7 + 0x1b8, puVar3, &local_28);
         }
 else {
            *puVar3 = local_28;
            *(undefined8**)( lVar7 + 0x1c0 ) = puVar3 + 1;
         }

         uVar5 = 1;
         goto LAB_0010b542;
      }

   }
 else {
      if (iVar2 == 0x3e) {
         lVar7 = *(long*)( param_1 + 8 );
         uVar6 = ( ulong )(uVar1 + 1);
         lVar8 = *(long*)( lVar7 + 8 );
         goto LAB_0010b4ec;
      }

      if (iVar2 == 0x3b) {
         lVar7 = *(long*)( param_1 + 8 );
         uVar6 = ( ulong )(uVar1 + 2);
         lVar8 = *(long*)( lVar7 + 8 );
         goto LAB_0010b4ec;
      }

   }

   uVar5 = 0;
   LAB_0010b542:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<bool (spv::Op, unsigned int),
   spv::spirvbin_t::forwardLoadStores()::{lambda(spv::Op, unsigned
   int)#2}>::_M_invoke(std::_Any_data const&, spv::Op&&, unsigned int&&) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::forwardLoadStores()::{lambda(spv::Op,unsigned_int)#2}>::_M_invoke(_Any_data *param_1, Op *param_2, uint *param_3) {
   uint uVar1;
   uint uVar2;
   long *plVar3;
   undefined8 *puVar4;
   long lVar5;
   uint *puVar6;
   long lVar7;
   long in_FS_OFFSET;
   undefined8 local_28;
   long local_20;
   plVar3 = *(long**)param_1;
   uVar1 = *param_3;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)param_2 == 0x3b) {
      lVar7 = *(long*)( *plVar3 + 8 );
      if (( *(short*)( lVar7 + 2 + (ulong)uVar1 * 4 ) == 4 ) && ( *(int*)( lVar7 + ( ulong )(uVar1 + 3) * 4 ) == 3 )) {
         __detail::_Insert_base<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::insert((_Insert_base<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>*)plVar3[1], (uint*)( lVar7 + ( ulong )(uVar1 + 2) * 4 ));
      }

   }
 else if (*(int*)param_2 == 0x3e) {
      lVar7 = *(long*)( *plVar3 + 8 );
      uVar2 = *(uint*)( lVar7 + ( ulong )(uVar1 + 1) * 4 );
      lVar5 = _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::find((_Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>*)plVar3[1], (uint*)(ulong)uVar2);
      if (lVar5 != 0) {
         puVar6 = (uint*)__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)plVar3[2], (uint*)( lVar7 + ( ulong )(uVar1 + 2) * 4 ));
         lVar7 = *plVar3;
         *puVar6 = uVar2;
         puVar4 = *(undefined8**)( lVar7 + 0x1c0 );
         local_28 = CONCAT44(*(ushort*)( *(long*)( lVar7 + 8 ) + 2 + (ulong)uVar1 * 4 ) + uVar1, uVar1);
         if (puVar4 == *(undefined8**)( lVar7 + 0x1c8 )) {
            vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>::_M_realloc_insert<std::pair<unsigned_int,unsigned_int>>(lVar7 + 0x1b8, puVar4, &local_28);
         }
 else {
            *puVar4 = local_28;
            *(undefined8**)( lVar7 + 0x1c0 ) = puVar4 + 1;
         }

      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<bool (spv::Op, unsigned int),
   spv::spirvbin_t::forwardLoadStores()::{lambda(spv::Op, unsigned
   int)#1}>::_M_invoke(std::_Any_data const&, spv::Op&&, unsigned int&&) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::forwardLoadStores()::{lambda(spv::Op,unsigned_int)#1}>::_M_invoke(_Any_data *param_1, Op *param_2, uint *param_3) {
   uint uVar1;
   int iVar2;
   uint uVar3;
   long *plVar4;
   undefined8 *puVar5;
   long lVar6;
   uint *puVar7;
   _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>> *this;
   long lVar8;
   long in_FS_OFFSET;
   undefined8 local_28;
   long local_20;
   plVar4 = *(long**)param_1;
   uVar1 = *param_3;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = *(int*)param_2;
   if (iVar2 == 0x3b) {
      lVar8 = *(long*)( *plVar4 + 8 );
      if (( *(short*)( lVar8 + 2 + (ulong)uVar1 * 4 ) == 4 ) && ( *(uint*)( lVar8 + ( ulong )(uVar1 + 3) * 4 ) < 3 )) {
         __detail::_Insert_base<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::insert((_Insert_base<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>*)plVar4[1], (uint*)( lVar8 + ( ulong )(uVar1 + 2) * 4 ));
      }

   }
 else if (iVar2 == 0x41) {
      this(_Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>> * plVar4[1]);
      lVar8 = *(long*)( *plVar4 + 8 );
      lVar6 = _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::find(this, (uint*)( ulong ) * (uint*)( lVar8 + ( ulong )(uVar1 + 3) * 4 ));
      if (lVar6 != 0) {
         __detail::_Insert_base<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::insert((_Insert_base<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>*)this, (uint*)( lVar8 + ( ulong )(uVar1 + 2) * 4 ));
      }

   }
 else if (iVar2 == 0x3d) {
      lVar8 = *(long*)( *plVar4 + 8 );
      uVar3 = *(uint*)( lVar8 + ( ulong )(uVar1 + 3) * 4 );
      lVar6 = _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::find((_Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>*)plVar4[1], (uint*)(ulong)uVar3);
      if (lVar6 != 0) {
         puVar7 = (uint*)__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)plVar4[2], (uint*)( lVar8 + ( ulong )(uVar1 + 2) * 4 ));
         lVar8 = *plVar4;
         *puVar7 = uVar3;
         puVar5 = *(undefined8**)( lVar8 + 0x1c0 );
         local_28 = CONCAT44(*(ushort*)( *(long*)( lVar8 + 8 ) + 2 + (ulong)uVar1 * 4 ) + uVar1, uVar1);
         if (puVar5 == *(undefined8**)( lVar8 + 0x1c8 )) {
            vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>::_M_realloc_insert<std::pair<unsigned_int,unsigned_int>>(lVar8 + 0x1b8, puVar5, &local_28);
         }
 else {
            *puVar5 = local_28;
            *(undefined8**)( lVar8 + 0x1c0 ) = puVar5 + 1;
         }

      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Function_handler<bool (spv::Op, unsigned int),
   spv::spirvbin_t::stripDeadRefs()::{lambda(spv::Op, unsigned int)#1}>::_M_invoke(std::_Any_data
   const&, spv::Op&&, unsigned int&&) */undefined8 std::_Function_handler<bool(spv::Op, unsigned_int),spv::spirvbin_t::stripDeadRefs()::{lambda(spv::Op,unsigned_int)#1}>::_M_invoke(_Any_data *param_1, Op *param_2, uint *param_3) {
   uint uVar1;
   long lVar2;
   undefined8 *puVar3;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = *(uint*)param_2;
   if (uVar1 < 7) {
      if (uVar1 < 5) goto LAB_0010b874;
   }
 else if (1 < uVar1 - 0x47) goto LAB_0010b874;
   lVar5 = *(long*)param_1;
   uVar1 = *param_3;
   lVar2 = *(long*)( lVar5 + 8 );
   lVar4 = _Hashtable<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find((_Hashtable<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>*)( lVar5 + 0x128 ), (uint*)( ulong ) * (uint*)( lVar2 + ( ulong )(uVar1 + 1) * 4 ));
   if (lVar4 == 0) {
      puVar3 = *(undefined8**)( lVar5 + 0x1c0 );
      local_28 = CONCAT44(*(ushort*)( lVar2 + 2 + (ulong)uVar1 * 4 ) + uVar1, uVar1);
      if (puVar3 == *(undefined8**)( lVar5 + 0x1c8 )) {
         vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>::_M_realloc_insert<std::pair<unsigned_int,unsigned_int>>(lVar5 + 0x1b8, puVar3, &local_28);
      }
 else {
         *puVar3 = local_28;
         *(undefined8**)( lVar5 + 0x1c0 ) = puVar3 + 1;
      }

   }

   LAB_0010b874:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::function<void (std::__cxx11::string const&)>::~function() */void std::function<void(std::__cxx11::string_const &)>::~function(function<void(std::__cxx11::string_const &)> *this) {
   if (*(code**)( this + 0x10 ) != (code*)0x0) {
      /* WARNING: Could not recover jumptable at 0x0010ba75. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( this + 0x10 ) )(this, this, 3);
      return;
   }

   return;
}
/* spv::spirvbin_t::~spirvbin_t() */void spv::spirvbin_t::~spirvbin_t(spirvbin_t *this) {
   void *pvVar1;
   void *pvVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   *(undefined***)this = &PTR__spirvbin_t_0010e230;
   pvVar1 = *(void**)( this + 0x1b8 );
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, *(long*)( this + 0x1c8 ) - (long)pvVar1);
   }

   pvVar1 = *(void**)( this + 0x198 );
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, *(long*)( this + 0x1a8 ) - (long)pvVar1);
   }

   puVar3 = *(undefined8**)( this + 0x170 );
   while (puVar3 != (undefined8*)0x0) {
      puVar4 = (undefined8*)*puVar3;
      operator_delete(puVar3, 0x10);
      puVar3 = puVar4;
   }
;
   memset(*(void**)( this + 0x160 ), 0, *(long*)( this + 0x168 ) * 8);
   *(undefined8*)( this + 0x178 ) = 0;
   *(undefined8*)( this + 0x170 ) = 0;
   if (*(spirvbin_t**)( this + 0x160 ) != this + 400) {
      operator_delete(*(spirvbin_t**)( this + 0x160 ), *(long*)( this + 0x168 ) << 3);
   }

   puVar3 = *(undefined8**)( this + 0x138 );
   while (puVar3 != (undefined8*)0x0) {
      puVar4 = (undefined8*)*puVar3;
      operator_delete(puVar3, 0x10);
      puVar3 = puVar4;
   }
;
   memset(*(void**)( this + 0x128 ), 0, *(long*)( this + 0x130 ) * 8);
   *(undefined8*)( this + 0x140 ) = 0;
   *(undefined8*)( this + 0x138 ) = 0;
   if (*(spirvbin_t**)( this + 0x128 ) != this + 0x158) {
      operator_delete(*(spirvbin_t**)( this + 0x128 ), *(long*)( this + 0x130 ) << 3);
   }

   pvVar1 = *(void**)( this + 0x108 );
   while (pvVar1 != (void*)0x0) {
      std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(*(_Rb_tree_node**)( (long)pvVar1 + 0x18 ));
      pvVar2 = *(void**)( (long)pvVar1 + 0x10 );
      operator_delete(pvVar1, 0x28);
      pvVar1 = pvVar2;
   }
;
   puVar3 = *(undefined8**)( this + 0xd0 );
   while (puVar3 != (undefined8*)0x0) {
      puVar4 = (undefined8*)*puVar3;
      operator_delete(puVar3, 0x10);
      puVar3 = puVar4;
   }
;
   memset(*(void**)( this + 0xc0 ), 0, *(long*)( this + 200 ) * 8);
   *(undefined8*)( this + 0xd8 ) = 0;
   *(undefined8*)( this + 0xd0 ) = 0;
   if (*(spirvbin_t**)( this + 0xc0 ) != this + 0xf0) {
      operator_delete(*(spirvbin_t**)( this + 0xc0 ), *(long*)( this + 200 ) << 3);
   }

   puVar3 = *(undefined8**)( this + 0x98 );
   while (puVar3 != (undefined8*)0x0) {
      puVar4 = (undefined8*)*puVar3;
      operator_delete(puVar3, 0x18);
      puVar3 = puVar4;
   }
;
   memset(*(void**)( this + 0x88 ), 0, *(long*)( this + 0x90 ) * 8);
   *(undefined8*)( this + 0xa0 ) = 0;
   *(undefined8*)( this + 0x98 ) = 0;
   if (*(spirvbin_t**)( this + 0x88 ) != this + 0xb8) {
      operator_delete(*(spirvbin_t**)( this + 0x88 ), *(long*)( this + 0x90 ) << 3);
   }

   pvVar1 = *(void**)( this + 0x70 );
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, *(long*)( this + 0x80 ) - (long)pvVar1);
   }

   puVar3 = *(undefined8**)( this + 0x48 );
   while (puVar3 != (undefined8*)0x0) {
      puVar4 = (undefined8*)*puVar3;
      if ((undefined8*)puVar3[1] != puVar3 + 3) {
         operator_delete((undefined8*)puVar3[1], puVar3[3] + 1);
      }

      operator_delete(puVar3, 0x38);
      puVar3 = puVar4;
   }
;
   memset(*(void**)( this + 0x38 ), 0, *(long*)( this + 0x40 ) * 8);
   *(undefined8*)( this + 0x50 ) = 0;
   *(undefined8*)( this + 0x48 ) = 0;
   if (*(spirvbin_t**)( this + 0x38 ) != this + 0x68) {
      operator_delete(*(spirvbin_t**)( this + 0x38 ), *(long*)( this + 0x40 ) << 3);
   }

   puVar3 = *(undefined8**)( this + 0x28 );
   puVar4 = *(undefined8**)( this + 0x20 );
   if (puVar3 != puVar4) {
      do {
         if ((undefined8*)*puVar4 != puVar4 + 2) {
            operator_delete((undefined8*)*puVar4, puVar4[2] + 1);
         }

         puVar4 = puVar4 + 4;
      }
 while ( puVar3 != puVar4 );
      puVar4 = *(undefined8**)( this + 0x20 );
   }

   if (puVar4 != (undefined8*)0x0) {
      operator_delete(puVar4, *(long*)( this + 0x30 ) - (long)puVar4);
   }

   pvVar1 = *(void**)( this + 8 );
   if (pvVar1 == (void*)0x0) {
      return;
   }

   operator_delete(pvVar1, *(long*)( this + 0x18 ) - (long)pvVar1);
   return;
}
/* spv::spirvbin_t::~spirvbin_t() */void spv::spirvbin_t::~spirvbin_t(spirvbin_t *this) {
   ~spirvbin_t(this)
   ;;
   operator_delete(this, 0x1e0);
   return;
}
/* std::vector<unsigned long, std::allocator<unsigned long>
   >::_M_fill_insert(__gnu_cxx::__normal_iterator<unsigned long*, std::vector<unsigned long,
   std::allocator<unsigned long> > >, unsigned long, unsigned long const&) */void std::vector<unsigned_long,std::allocator<unsigned_long>>::_M_fill_insert(vector<unsigned_long,std::allocator<unsigned_long>> *this, undefined8 *param_2, ulong param_3, undefined8 *param_4) {
   undefined8 uVar1;
   undefined8 *puVar2;
   ulong uVar3;
   undefined8 *__dest;
   undefined8 *puVar4;
   undefined8 *puVar5;
   size_t sVar6;
   long lVar7;
   undefined8 *puVar8;
   undefined8 *puVar9;
   ulong uVar10;
   size_t __n;
   ulong local_50;
   if (param_3 == 0) {
      return;
   }

   puVar8 = *(undefined8**)( this + 8 );
   if (param_3 <= ( ulong )(*(long*)( this + 0x10 ) - (long)puVar8 >> 3)) {
      uVar1 = *param_4;
      sVar6 = (long)puVar8 - (long)param_2;
      if (param_3 < ( ulong )((long)sVar6 >> 3)) {
         sVar6 = param_3 * 8;
         puVar9 = puVar8 + -param_3;
         if ((long)sVar6 < 9) {
            puVar2 = puVar8;
            if (sVar6 == 8) {
               *puVar8 = *puVar9;
            }

         }
 else {
            memmove(puVar8, puVar9, sVar6);
            puVar2 = *(undefined8**)( this + 8 );
         }

         sVar6 = (long)puVar9 - (long)param_2;
         *(undefined8**)( this + 8 ) = puVar2 + param_3;
         if ((long)sVar6 < 9) {
            if (sVar6 == 8) {
               puVar8[-1] = *param_2;
            }

         }
 else {
            memmove((void*)( (long)puVar8 - sVar6 ), param_2, sVar6);
         }

         puVar8 = param_2 + param_3;
         if (param_2 == puVar8) {
            return;
         }

         puVar9 = param_2;
         if (( (long)puVar8 - (long)param_2 & 8U ) != 0) {
            *param_2 = uVar1;
            puVar9 = param_2 + 1;
            if (puVar8 == param_2 + 1) {
               return;
            }

         }

         do {
            *puVar9 = uVar1;
            puVar2 = puVar9 + 2;
            puVar9[1] = uVar1;
            puVar9 = puVar2;
         }
 while ( puVar8 != puVar2 );
         return;
      }

      lVar7 = param_3 - ( (long)sVar6 >> 3 );
      puVar9 = puVar8;
      if (( lVar7 != 0 ) && ( puVar9 = puVar8 != puVar9 )) {
         puVar2 = puVar8;
         if (( (int)puVar9 - (int)puVar8 & 8U ) != 0) {
            puVar2 = puVar8 + 1;
            *puVar8 = uVar1;
            if (puVar9 == puVar2) goto LAB_0010c688;
         }

         do {
            *puVar2 = uVar1;
            puVar4 = puVar2 + 2;
            puVar2[1] = uVar1;
            puVar2 = puVar4;
         }
 while ( puVar9 != puVar4 );
      }

      LAB_0010c688:*(undefined8**)( this + 8 ) = puVar9;
      if ((long)sVar6 < 9) {
         if (sVar6 == 8) {
            *puVar9 = *param_2;
         }

      }
 else {
         memmove(puVar9, param_2, sVar6);
         puVar9 = *(undefined8**)( this + 8 );
      }

      *(size_t*)( this + 8 ) = (long)puVar9 + sVar6;
      if (puVar8 != param_2) {
         puVar9 = param_2;
         if (( (long)puVar8 - (long)param_2 & 8U ) != 0) {
            *param_2 = uVar1;
            puVar9 = param_2 + 1;
            if (puVar8 == param_2 + 1) {
               return;
            }

         }

         do {
            *puVar9 = uVar1;
            puVar2 = puVar9 + 2;
            puVar9[1] = uVar1;
            puVar9 = puVar2;
         }
 while ( puVar8 != puVar2 );
      }

      return;
   }

   puVar9 = *(undefined8**)this;
   uVar3 = (long)puVar8 - (long)puVar9 >> 3;
   if (0xfffffffffffffff - uVar3 < param_3) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_fill_insert");
   }

   sVar6 = (long)param_2 - (long)puVar9;
   if (uVar3 < param_3) {
      uVar3 = uVar3 + param_3;
      if (0xfffffffffffffff < uVar3) {
         uVar3 = 0xfffffffffffffff;
      }

      local_50 = uVar3 << 3;
   }
 else {
      uVar10 = uVar3 * 2;
      local_50 = 0x7ffffffffffffff8;
      if (uVar3 <= uVar10) {
         if (0xfffffffffffffff < uVar10) {
            uVar10 = 0xfffffffffffffff;
         }

         local_50 = uVar10 * 8;
      }

   }

   __dest = (undefined8*)operator_new(local_50);
   puVar2 = (undefined8*)( (long)__dest + sVar6 );
   uVar1 = *param_4;
   puVar4 = puVar2;
   if (( param_3 * 8 & 8 ) != 0) {
      *puVar2 = uVar1;
      puVar4 = puVar2 + 1;
      if (puVar2 + param_3 == puVar4) goto LAB_0010c7a0;
   }

   do {
      *puVar4 = uVar1;
      puVar5 = puVar4 + 2;
      puVar4[1] = uVar1;
      puVar4 = puVar5;
   }
 while ( puVar2 + param_3 != puVar5 );
   LAB_0010c7a0:if ((long)sVar6 < 9) {
      if (sVar6 == 8) {
         *__dest = *puVar9;
      }

   }
 else {
      memmove(__dest, puVar9, sVar6);
   }

   __n = (long)puVar8 - (long)param_2;
   puVar8 = (undefined8*)( param_3 * 8 + sVar6 + (long)__dest );
   if ((long)__n < 9) {
      if (__n == 8) {
         *puVar8 = *param_2;
      }

   }
 else {
      memcpy(puVar8, param_2, __n);
   }

   if (puVar9 != (undefined8*)0x0) {
      operator_delete(puVar9, *(long*)( this + 0x10 ) - (long)puVar9);
   }

   *(undefined8**)this = __dest;
   *(size_t*)( this + 8 ) = (long)puVar8 + __n;
   *(ulong*)( this + 0x10 ) = (long)__dest + local_50;
   return;
}
/* std::vector<unsigned int, std::allocator<unsigned int>
   >::_M_fill_insert(__gnu_cxx::__normal_iterator<unsigned int*, std::vector<unsigned int,
   std::allocator<unsigned int> > >, unsigned long, unsigned int const&) */void std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_fill_insert(vector<unsigned_int,std::allocator<unsigned_int>> *this, undefined4 *param_2, ulong param_3, undefined4 *param_4) {
   undefined4 uVar1;
   undefined4 *puVar2;
   ulong uVar3;
   undefined4 *__dest;
   undefined4 *puVar4;
   undefined4 *puVar5;
   size_t sVar6;
   long lVar7;
   undefined4 *puVar8;
   undefined4 *puVar9;
   ulong uVar10;
   size_t __n;
   ulong local_50;
   if (param_3 == 0) {
      return;
   }

   puVar8 = *(undefined4**)( this + 8 );
   if (param_3 <= ( ulong )(*(long*)( this + 0x10 ) - (long)puVar8 >> 2)) {
      uVar1 = *param_4;
      sVar6 = (long)puVar8 - (long)param_2;
      if (param_3 < ( ulong )((long)sVar6 >> 2)) {
         sVar6 = param_3 * 4;
         puVar9 = puVar8 + -param_3;
         if ((long)sVar6 < 5) {
            puVar2 = puVar8;
            if (sVar6 == 4) {
               *puVar8 = *puVar9;
            }

         }
 else {
            memmove(puVar8, puVar9, sVar6);
            puVar2 = *(undefined4**)( this + 8 );
         }

         sVar6 = (long)puVar9 - (long)param_2;
         *(undefined4**)( this + 8 ) = puVar2 + param_3;
         if ((long)sVar6 < 5) {
            if (sVar6 == 4) {
               puVar8[-1] = *param_2;
            }

         }
 else {
            memmove((void*)( (long)puVar8 - sVar6 ), param_2, sVar6);
         }

         puVar8 = param_2 + param_3;
         if (param_2 == puVar8) {
            return;
         }

         puVar9 = param_2;
         if (( (long)puVar8 - (long)param_2 & 4U ) != 0) {
            *param_2 = uVar1;
            puVar9 = param_2 + 1;
            if (puVar8 == param_2 + 1) {
               return;
            }

         }

         do {
            *puVar9 = uVar1;
            puVar2 = puVar9 + 2;
            puVar9[1] = uVar1;
            puVar9 = puVar2;
         }
 while ( puVar8 != puVar2 );
         return;
      }

      lVar7 = param_3 - ( (long)sVar6 >> 2 );
      puVar9 = puVar8;
      if (( lVar7 != 0 ) && ( puVar9 = puVar8 != puVar9 )) {
         puVar2 = puVar8;
         if (( (int)puVar9 - (int)puVar8 & 4U ) != 0) {
            puVar2 = puVar8 + 1;
            *puVar8 = uVar1;
            if (puVar9 == puVar2) goto LAB_0010ca18;
         }

         do {
            *puVar2 = uVar1;
            puVar4 = puVar2 + 2;
            puVar2[1] = uVar1;
            puVar2 = puVar4;
         }
 while ( puVar9 != puVar4 );
      }

      LAB_0010ca18:*(undefined4**)( this + 8 ) = puVar9;
      if ((long)sVar6 < 5) {
         if (sVar6 == 4) {
            *puVar9 = *param_2;
         }

      }
 else {
         memmove(puVar9, param_2, sVar6);
         puVar9 = *(undefined4**)( this + 8 );
      }

      *(size_t*)( this + 8 ) = (long)puVar9 + sVar6;
      if (puVar8 != param_2) {
         puVar9 = param_2;
         if (( (long)puVar8 - (long)param_2 & 4U ) != 0) {
            *param_2 = uVar1;
            puVar9 = param_2 + 1;
            if (puVar8 == param_2 + 1) {
               return;
            }

         }

         do {
            *puVar9 = uVar1;
            puVar2 = puVar9 + 2;
            puVar9[1] = uVar1;
            puVar9 = puVar2;
         }
 while ( puVar8 != puVar2 );
      }

      return;
   }

   puVar9 = *(undefined4**)this;
   uVar3 = (long)puVar8 - (long)puVar9 >> 2;
   if (0x1fffffffffffffff - uVar3 < param_3) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_fill_insert");
   }

   sVar6 = (long)param_2 - (long)puVar9;
   if (uVar3 < param_3) {
      uVar3 = uVar3 + param_3;
      if (0x1fffffffffffffff < uVar3) {
         uVar3 = 0x1fffffffffffffff;
      }

      local_50 = uVar3 << 2;
   }
 else {
      uVar10 = uVar3 * 2;
      local_50 = 0x7ffffffffffffffc;
      if (uVar3 <= uVar10) {
         if (0x1fffffffffffffff < uVar10) {
            uVar10 = 0x1fffffffffffffff;
         }

         local_50 = uVar10 * 4;
      }

   }

   __dest = (undefined4*)operator_new(local_50);
   puVar2 = (undefined4*)( (long)__dest + sVar6 );
   uVar1 = *param_4;
   puVar4 = puVar2;
   if (( param_3 * 4 & 4 ) != 0) {
      *puVar2 = uVar1;
      puVar4 = puVar2 + 1;
      if (puVar2 + param_3 == puVar2 + 1) goto LAB_0010cb26;
   }

   do {
      *puVar4 = uVar1;
      puVar5 = puVar4 + 2;
      puVar4[1] = uVar1;
      puVar4 = puVar5;
   }
 while ( puVar2 + param_3 != puVar5 );
   LAB_0010cb26:if ((long)sVar6 < 5) {
      if (sVar6 == 4) {
         *__dest = *puVar9;
      }

   }
 else {
      memmove(__dest, puVar9, sVar6);
   }

   __n = (long)puVar8 - (long)param_2;
   puVar8 = (undefined4*)( param_3 * 4 + sVar6 + (long)__dest );
   if ((long)__n < 5) {
      if (__n == 4) {
         *puVar8 = *param_2;
      }

   }
 else {
      memcpy(puVar8, param_2, __n);
   }

   if (puVar9 != (undefined4*)0x0) {
      operator_delete(puVar9, *(long*)( this + 0x10 ) - (long)puVar9);
   }

   *(undefined4**)this = __dest;
   *(size_t*)( this + 8 ) = (long)puVar8 + __n;
   *(ulong*)( this + 0x10 ) = (long)__dest + local_50;
   return;
}
/* std::__detail::_Map_base<unsigned int, std::pair<unsigned int const, int>,
   std::allocator<std::pair<unsigned int const, int> >, std::__detail::_Select1st,
   std::equal_to<unsigned int>, std::hash<unsigned int>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true>, true>::operator[](unsigned int const&) */long std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this, uint *param_1) {
   uint uVar1;
   uint uVar2;
   ulong uVar3;
   long lVar4;
   char cVar5;
   long *plVar6;
   _Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *__s;
   ulong uVar7;
   ulong extraout_RDX;
   long *plVar8;
   long *plVar9;
   ulong uVar10;
   _Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *p_Var11;
   uVar1 = *param_1;
   uVar7 = (ulong)uVar1 % *(ulong*)( this + 8 );
   plVar6 = *(long**)( *(long*)this + uVar7 * 8 );
   if (plVar6 != (long*)0x0) {
      uVar2 = *(uint*)( (long*)*plVar6 + 1 );
      plVar8 = (long*)*plVar6;
      while (uVar2 != uVar1) {
         plVar9 = (long*)*plVar8;
         if (( plVar9 == (long*)0x0 ) || ( uVar2 = *(uint*)( plVar9 + 1 ) ),plVar6 = plVar8,plVar8 = plVar9,uVar7 != (ulong)uVar2 % *(ulong*)( this + 8 )) goto LAB_0010cd90;
      }
;
      if (*plVar6 != 0) {
         return *plVar6 + 0xc;
      }

   }

   LAB_0010cd90:plVar6 = (long*)operator_new(0x10);
   uVar10 = *(ulong*)( this + 0x18 );
   uVar3 = *(ulong*)( this + 8 );
   *plVar6 = 0;
   uVar2 = *param_1;
   *(undefined4*)( (long)plVar6 + 0xc ) = 0;
   *(uint*)( plVar6 + 1 ) = uVar2;
   cVar5 = std::__detail::_Prime_rehash_policy::_M_need_rehash(( ulong )(this + 0x20), uVar3, uVar10);
   if (cVar5 == '\0') {
      __s = *(_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)this;
      p_Var11 = __s + uVar7 * 8;
      plVar8 = *(long**)p_Var11;
   }
 else {
      if (extraout_RDX == 1) {
         __s = this + 0x30;
         *(undefined8*)( this + 0x30 ) = 0;
      }
 else {
         if (extraout_RDX >> 0x3c != 0) {
            if (extraout_RDX >> 0x3d != 0) {
               std::__throw_bad_array_new_length();
            }

            /* WARNING: Subroutine does not return */
            std::__throw_bad_alloc();
         }

         __s = (_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)operator_new(extraout_RDX * 8);
         memset(__s, 0, extraout_RDX * 8);
      }

      plVar8 = *(long**)( this + 0x10 );
      *(undefined8*)( this + 0x10 ) = 0;
      uVar7 = 0;
      while (uVar10 = uVar7,plVar9 = plVar8,plVar8 != (long*)0x0) {
         while (true) {
            plVar8 = (long*)*plVar9;
            uVar7 = ( ulong ) * (uint*)( plVar9 + 1 ) % extraout_RDX;
            p_Var11 = __s + uVar7 * 8;
            if (*(long**)p_Var11 == (long*)0x0) break;
            *plVar9 = **(long**)p_Var11;
            **(undefined8**)p_Var11 = plVar9;
            plVar9 = plVar8;
            if (plVar8 == (long*)0x0) goto LAB_0010ce8d;
         }
;
         *plVar9 = *(long*)( this + 0x10 );
         *(long**)( this + 0x10 ) = plVar9;
         *(_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)p_Var11 = this + 0x10;
         if (*plVar9 != 0) {
            *(long**)( __s + uVar10 * 8 ) = plVar9;
         }

      }
;
      LAB_0010ce8d:if (*(_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)this != this + 0x30) {
         operator_delete(*(_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)this, *(long*)( this + 8 ) << 3);
      }

      *(ulong*)( this + 8 ) = extraout_RDX;
      *(_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)this = __s;
      p_Var11 = __s + ( (ulong)uVar1 % extraout_RDX ) * 8;
      plVar8 = *(long**)p_Var11;
   }

   if (plVar8 == (long*)0x0) {
      lVar4 = *(long*)( this + 0x10 );
      *(long**)( this + 0x10 ) = plVar6;
      *plVar6 = lVar4;
      if (lVar4 != 0) {
         *(long**)( __s + ( ( ulong ) * (uint*)( lVar4 + 8 ) % *(ulong*)( this + 8 ) ) * 8 ) = plVar6;
      }

      *(_Map_base<unsigned_int,std::pair<unsigned_int_const,int>,std::allocator<std::pair<unsigned_int_const,int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)p_Var11 = this + 0x10;
   }
 else {
      *plVar6 = *plVar8;
      **(undefined8**)p_Var11 = plVar6;
   }

   *(long*)( this + 0x18 ) = *(long*)( this + 0x18 ) + 1;
   return (long)plVar6 + 0xc;
}
/* std::__detail::_Map_base<unsigned int, std::pair<unsigned int const, unsigned int>,
   std::allocator<std::pair<unsigned int const, unsigned int> >, std::__detail::_Select1st,
   std::equal_to<unsigned int>, std::hash<unsigned int>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true>, true>::operator[](unsigned int const&) */long std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this, uint *param_1) {
   uint uVar1;
   uint uVar2;
   ulong uVar3;
   long lVar4;
   char cVar5;
   long *plVar6;
   _Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *__s;
   ulong uVar7;
   ulong extraout_RDX;
   long *plVar8;
   long *plVar9;
   ulong uVar10;
   _Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *p_Var11;
   uVar1 = *param_1;
   uVar7 = (ulong)uVar1 % *(ulong*)( this + 8 );
   plVar6 = *(long**)( *(long*)this + uVar7 * 8 );
   if (plVar6 != (long*)0x0) {
      uVar2 = *(uint*)( (long*)*plVar6 + 1 );
      plVar8 = (long*)*plVar6;
      while (uVar2 != uVar1) {
         plVar9 = (long*)*plVar8;
         if (( plVar9 == (long*)0x0 ) || ( uVar2 = *(uint*)( plVar9 + 1 ) ),plVar6 = plVar8,plVar8 = plVar9,uVar7 != (ulong)uVar2 % *(ulong*)( this + 8 )) goto LAB_0010cfd0;
      }
;
      if (*plVar6 != 0) {
         return *plVar6 + 0xc;
      }

   }

   LAB_0010cfd0:plVar6 = (long*)operator_new(0x10);
   uVar10 = *(ulong*)( this + 0x18 );
   uVar3 = *(ulong*)( this + 8 );
   *plVar6 = 0;
   uVar2 = *param_1;
   *(undefined4*)( (long)plVar6 + 0xc ) = 0;
   *(uint*)( plVar6 + 1 ) = uVar2;
   cVar5 = std::__detail::_Prime_rehash_policy::_M_need_rehash(( ulong )(this + 0x20), uVar3, uVar10);
   if (cVar5 == '\0') {
      __s = *(_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)this;
      p_Var11 = __s + uVar7 * 8;
      plVar8 = *(long**)p_Var11;
   }
 else {
      if (extraout_RDX == 1) {
         __s = this + 0x30;
         *(undefined8*)( this + 0x30 ) = 0;
      }
 else {
         if (extraout_RDX >> 0x3c != 0) {
            if (extraout_RDX >> 0x3d != 0) {
               std::__throw_bad_array_new_length();
            }

            /* WARNING: Subroutine does not return */
            std::__throw_bad_alloc();
         }

         __s = (_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)operator_new(extraout_RDX * 8);
         memset(__s, 0, extraout_RDX * 8);
      }

      plVar8 = *(long**)( this + 0x10 );
      *(undefined8*)( this + 0x10 ) = 0;
      uVar7 = 0;
      while (uVar10 = uVar7,plVar9 = plVar8,plVar8 != (long*)0x0) {
         while (true) {
            plVar8 = (long*)*plVar9;
            uVar7 = ( ulong ) * (uint*)( plVar9 + 1 ) % extraout_RDX;
            p_Var11 = __s + uVar7 * 8;
            if (*(long**)p_Var11 == (long*)0x0) break;
            *plVar9 = **(long**)p_Var11;
            **(undefined8**)p_Var11 = plVar9;
            plVar9 = plVar8;
            if (plVar8 == (long*)0x0) goto LAB_0010d0cd;
         }
;
         *plVar9 = *(long*)( this + 0x10 );
         *(long**)( this + 0x10 ) = plVar9;
         *(_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)p_Var11 = this + 0x10;
         if (*plVar9 != 0) {
            *(long**)( __s + uVar10 * 8 ) = plVar9;
         }

      }
;
      LAB_0010d0cd:if (*(_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)this != this + 0x30) {
         operator_delete(*(_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)this, *(long*)( this + 8 ) << 3);
      }

      *(ulong*)( this + 8 ) = extraout_RDX;
      *(_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)this = __s;
      p_Var11 = __s + ( (ulong)uVar1 % extraout_RDX ) * 8;
      plVar8 = *(long**)p_Var11;
   }

   if (plVar8 == (long*)0x0) {
      lVar4 = *(long*)( this + 0x10 );
      *(long**)( this + 0x10 ) = plVar6;
      *plVar6 = lVar4;
      if (lVar4 != 0) {
         *(long**)( __s + ( ( ulong ) * (uint*)( lVar4 + 8 ) % *(ulong*)( this + 8 ) ) * 8 ) = plVar6;
      }

      *(_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)p_Var11 = this + 0x10;
   }
 else {
      *plVar6 = *plVar8;
      **(undefined8**)p_Var11 = plVar6;
   }

   *(long*)( this + 0x18 ) = *(long*)( this + 0x18 ) + 1;
   return (long)plVar6 + 0xc;
}
/* std::__detail::_Map_base<std::__cxx11::string, std::pair<std::__cxx11::string const, unsigned
   int>, std::allocator<std::pair<std::__cxx11::string const, unsigned int> >,
   std::__detail::_Select1st, std::equal_to<std::__cxx11::string >, std::hash<std::__cxx11::string
   >, std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<true, false, true>,
   true>::operator[](std::__cxx11::string const&) */long *__thiscallstd::__detail::_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,unsigned_int>,std::allocator<std::pair<std::__cxx11::string_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,unsigned_int>,std::allocator<std::pair<std::__cxx11::string_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *this, string *param_1) {
   ulong uVar1;
   size_t __n;
   long lVar2;
   long lVar3;
   char cVar4;
   int iVar5;
   ulong uVar6;
   long *plVar7;
   ulong uVar8;
   ulong uVar9;
   undefined8 extraout_RDX;
   long *plVar10;
   long *plVar11;
   long local_40;
   uVar6 = std::_Hash_bytes(*(void**)param_1, *(ulong*)( param_1 + 8 ), 0xc70f6907);
   uVar1 = *(ulong*)( this + 8 );
   uVar9 = uVar6 % uVar1;
   plVar7 = *(long**)( *(long*)this + uVar9 * 8 );
   if (plVar7 != (long*)0x0) {
      uVar8 = ( (long*)*plVar7 )[6];
      plVar11 = (long*)*plVar7;
      while (( ( plVar10 = plVar11 ),uVar6 != uVar8 || ( __n = *(size_t*)( param_1 + 8 ) ),__n != plVar10[2] )) {
         plVar11 = (long*)*plVar10;
         if (( plVar11 == (long*)0x0 ) || ( uVar8 = plVar11[6] ),plVar7 = plVar10,uVar9 != uVar8 % uVar1) goto LAB_0010d250;
      }
;
      if (*plVar7 != 0) {
         return (long*)( *plVar7 + 0x28 );
      }

   }

   LAB_0010d250:plVar7 = (long*)operator_new(0x38);
   *plVar7 = 0;
   lVar2 = *(long*)param_1;
   lVar3 = *(long*)( param_1 + 8 );
   plVar7[1] = (long)( plVar7 + 3 );
   __cxx11::string::_M_construct<char*>(plVar7 + 1, lVar2, lVar3 + lVar2);
   uVar1 = *(ulong*)( this + 0x18 );
   uVar8 = *(ulong*)( this + 8 );
   *(undefined4*)( plVar7 + 5 ) = 0;
   cVar4 = std::__detail::_Prime_rehash_policy::_M_need_rehash(( ulong )(this + 0x20), uVar8, uVar1);
   if (cVar4 != '\0') {
      _Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,unsigned_int>,std::allocator<std::pair<std::__cxx11::string_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_rehash_aux(this, extraout_RDX);
      uVar9 = uVar6 % *(ulong*)( this + 8 );
   }

   local_40 = uVar9 * 8;
   lVar2 = *(long*)this;
   plVar7[6] = uVar6;
   plVar11 = (long*)( local_40 + lVar2 );
   if ((long*)*plVar11 == (long*)0x0) {
      lVar3 = *(long*)( this + 0x10 );
      *(long**)( this + 0x10 ) = plVar7;
      *plVar7 = lVar3;
      if (lVar3 != 0) {
         *(long**)( lVar2 + ( *(ulong*)( lVar3 + 0x30 ) % *(ulong*)( this + 8 ) ) * 8 ) = plVar7;
      }

      *plVar11 = (long)( this + 0x10 );
   }
 else {
      *plVar7 = *(long*)*plVar11;
      *(long**)*plVar11 = plVar7;
   }

   *(long*)( this + 0x18 ) = *(long*)( this + 0x18 ) + 1;
   return plVar7 + 5;
}
/* std::__detail::_Map_base<unsigned int, std::pair<unsigned int const, std::pair<unsigned int,
   unsigned int> >, std::allocator<std::pair<unsigned int const, std::pair<unsigned int, unsigned
   int> > >, std::__detail::_Select1st, std::equal_to<unsigned int>, std::hash<unsigned int>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, false, true>,
   true>::operator[](unsigned int const&) */long std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::pair<unsigned_int,unsigned_int>>,std::allocator<std::pair<unsigned_int_const,std::pair<unsigned_int,unsigned_int>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](_Map_base<unsigned_int,std::pair<unsigned_int_const,std::pair<unsigned_int,unsigned_int>>,std::allocator<std::pair<unsigned_int_const,std::pair<unsigned_int,unsigned_int>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this, uint *param_1) {
   uint uVar1;
   uint uVar2;
   ulong uVar3;
   long lVar4;
   char cVar5;
   long *plVar6;
   _Map_base<unsigned_int,std::pair<unsigned_int_const,std::pair<unsigned_int,unsigned_int>>,std::allocator<std::pair<unsigned_int_const,std::pair<unsigned_int,unsigned_int>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *__s;
   ulong uVar7;
   ulong extraout_RDX;
   long *plVar8;
   long *plVar9;
   ulong uVar10;
   _Map_base<unsigned_int,std::pair<unsigned_int_const,std::pair<unsigned_int,unsigned_int>>,std::allocator<std::pair<unsigned_int_const,std::pair<unsigned_int,unsigned_int>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *p_Var11;
   uVar1 = *param_1;
   uVar7 = (ulong)uVar1 % *(ulong*)( this + 8 );
   plVar6 = *(long**)( *(long*)this + uVar7 * 8 );
   if (plVar6 != (long*)0x0) {
      uVar2 = *(uint*)( (long*)*plVar6 + 1 );
      plVar8 = (long*)*plVar6;
      while (uVar2 != uVar1) {
         plVar9 = (long*)*plVar8;
         if (( plVar9 == (long*)0x0 ) || ( uVar2 = *(uint*)( plVar9 + 1 ) ),plVar6 = plVar8,plVar8 = plVar9,uVar7 != (ulong)uVar2 % *(ulong*)( this + 8 )) goto LAB_0010d3e0;
      }
;
      if (*plVar6 != 0) {
         return *plVar6 + 0xc;
      }

   }

   LAB_0010d3e0:plVar6 = (long*)operator_new(0x18);
   uVar10 = *(ulong*)( this + 0x18 );
   uVar3 = *(ulong*)( this + 8 );
   *plVar6 = 0;
   uVar2 = *param_1;
   *(undefined8*)( (long)plVar6 + 0xc ) = 0;
   *(uint*)( plVar6 + 1 ) = uVar2;
   cVar5 = std::__detail::_Prime_rehash_policy::_M_need_rehash(( ulong )(this + 0x20), uVar3, uVar10);
   if (cVar5 == '\0') {
      __s = *(_Map_base<unsigned_int,std::pair<unsigned_int_const,std::pair<unsigned_int,unsigned_int>>,std::allocator<std::pair<unsigned_int_const,std::pair<unsigned_int,unsigned_int>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)this;
      p_Var11 = __s + uVar7 * 8;
      plVar8 = *(long**)p_Var11;
   }
 else {
      if (extraout_RDX == 1) {
         __s = this + 0x30;
         *(undefined8*)( this + 0x30 ) = 0;
      }
 else {
         if (extraout_RDX >> 0x3c != 0) {
            if (extraout_RDX >> 0x3d != 0) {
               std::__throw_bad_array_new_length();
            }

            /* WARNING: Subroutine does not return */
            std::__throw_bad_alloc();
         }

         __s = (_Map_base<unsigned_int,std::pair<unsigned_int_const,std::pair<unsigned_int,unsigned_int>>,std::allocator<std::pair<unsigned_int_const,std::pair<unsigned_int,unsigned_int>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)operator_new(extraout_RDX * 8);
         memset(__s, 0, extraout_RDX * 8);
      }

      plVar8 = *(long**)( this + 0x10 );
      *(undefined8*)( this + 0x10 ) = 0;
      uVar7 = 0;
      while (uVar10 = uVar7,plVar9 = plVar8,plVar8 != (long*)0x0) {
         while (true) {
            plVar8 = (long*)*plVar9;
            uVar7 = ( ulong ) * (uint*)( plVar9 + 1 ) % extraout_RDX;
            p_Var11 = __s + uVar7 * 8;
            if (*(long**)p_Var11 == (long*)0x0) break;
            *plVar9 = **(long**)p_Var11;
            **(undefined8**)p_Var11 = plVar9;
            plVar9 = plVar8;
            if (plVar8 == (long*)0x0) goto LAB_0010d4dd;
         }
;
         *plVar9 = *(long*)( this + 0x10 );
         *(long**)( this + 0x10 ) = plVar9;
         *(_Map_base<unsigned_int,std::pair<unsigned_int_const,std::pair<unsigned_int,unsigned_int>>,std::allocator<std::pair<unsigned_int_const,std::pair<unsigned_int,unsigned_int>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)p_Var11 = this + 0x10;
         if (*plVar9 != 0) {
            *(long**)( __s + uVar10 * 8 ) = plVar9;
         }

      }
;
      LAB_0010d4dd:if (*(_Map_base<unsigned_int,std::pair<unsigned_int_const,std::pair<unsigned_int,unsigned_int>>,std::allocator<std::pair<unsigned_int_const,std::pair<unsigned_int,unsigned_int>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)this != this + 0x30) {
         operator_delete(*(_Map_base<unsigned_int,std::pair<unsigned_int_const,std::pair<unsigned_int,unsigned_int>>,std::allocator<std::pair<unsigned_int_const,std::pair<unsigned_int,unsigned_int>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)this, *(long*)( this + 8 ) << 3);
      }

      *(ulong*)( this + 8 ) = extraout_RDX;
      *(_Map_base<unsigned_int,std::pair<unsigned_int_const,std::pair<unsigned_int,unsigned_int>>,std::allocator<std::pair<unsigned_int_const,std::pair<unsigned_int,unsigned_int>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)this = __s;
      p_Var11 = __s + ( (ulong)uVar1 % extraout_RDX ) * 8;
      plVar8 = *(long**)p_Var11;
   }

   if (plVar8 == (long*)0x0) {
      lVar4 = *(long*)( this + 0x10 );
      *(long**)( this + 0x10 ) = plVar6;
      *plVar6 = lVar4;
      if (lVar4 != 0) {
         *(long**)( __s + ( ( ulong ) * (uint*)( lVar4 + 8 ) % *(ulong*)( this + 8 ) ) * 8 ) = plVar6;
      }

      *(_Map_base<unsigned_int,std::pair<unsigned_int_const,std::pair<unsigned_int,unsigned_int>>,std::allocator<std::pair<unsigned_int_const,std::pair<unsigned_int,unsigned_int>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)p_Var11 = this + 0x10;
   }
 else {
      *plVar6 = *plVar8;
      **(undefined8**)p_Var11 = plVar6;
   }

   *(long*)( this + 0x18 ) = *(long*)( this + 0x18 ) + 1;
   return (long)plVar6 + 0xc;
}
/* std::__detail::_Map_base<int, std::pair<int const, int>, std::allocator<std::pair<int const, int>
   >, std::__detail::_Select1st, std::equal_to<int>, std::hash<int>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, false, true>,
   true>::operator[](int&&) */long std::__detail::_Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](_Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this, int *param_1) {
   int iVar1;
   int iVar2;
   ulong uVar3;
   long lVar4;
   char cVar5;
   long *plVar6;
   _Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *__s;
   ulong uVar7;
   ulong extraout_RDX;
   long *plVar8;
   long *plVar9;
   ulong uVar10;
   _Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *p_Var11;
   iVar1 = *param_1;
   uVar7 = (ulong)(long)iVar1 % *(ulong*)( this + 8 );
   plVar6 = *(long**)( *(long*)this + uVar7 * 8 );
   if (plVar6 != (long*)0x0) {
      iVar2 = *(int*)( (long*)*plVar6 + 1 );
      plVar8 = (long*)*plVar6;
      while (iVar1 != iVar2) {
         plVar9 = (long*)*plVar8;
         if (( plVar9 == (long*)0x0 ) || ( iVar2 = (int)plVar9[1] ),plVar6 = plVar8,plVar8 = plVar9,uVar7 != (ulong)(long)iVar2 % *(ulong*)( this + 8 )) goto LAB_0010d620;
      }
;
      if (*plVar6 != 0) {
         return *plVar6 + 0xc;
      }

   }

   LAB_0010d620:plVar6 = (long*)operator_new(0x10);
   uVar10 = *(ulong*)( this + 0x18 );
   uVar3 = *(ulong*)( this + 8 );
   *plVar6 = 0;
   iVar2 = *param_1;
   *(undefined4*)( (long)plVar6 + 0xc ) = 0;
   *(int*)( plVar6 + 1 ) = iVar2;
   cVar5 = std::__detail::_Prime_rehash_policy::_M_need_rehash(( ulong )(this + 0x20), uVar3, uVar10);
   if (cVar5 == '\0') {
      __s = *(_Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)this;
      p_Var11 = __s + uVar7 * 8;
      plVar8 = *(long**)p_Var11;
   }
 else {
      if (extraout_RDX == 1) {
         __s = this + 0x30;
         *(undefined8*)( this + 0x30 ) = 0;
      }
 else {
         if (extraout_RDX >> 0x3c != 0) {
            if (extraout_RDX >> 0x3d != 0) {
               std::__throw_bad_array_new_length();
            }

            /* WARNING: Subroutine does not return */
            std::__throw_bad_alloc();
         }

         __s = (_Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)operator_new(extraout_RDX * 8);
         memset(__s, 0, extraout_RDX * 8);
      }

      plVar8 = *(long**)( this + 0x10 );
      *(undefined8*)( this + 0x10 ) = 0;
      uVar7 = 0;
      while (uVar10 = uVar7,plVar9 = plVar8,plVar8 != (long*)0x0) {
         while (true) {
            plVar8 = (long*)*plVar9;
            uVar7 = (ulong)(long)(int)plVar9[1] % extraout_RDX;
            p_Var11 = __s + uVar7 * 8;
            if (*(long**)p_Var11 == (long*)0x0) break;
            *plVar9 = **(long**)p_Var11;
            **(undefined8**)p_Var11 = plVar9;
            plVar9 = plVar8;
            if (plVar8 == (long*)0x0) goto LAB_0010d722;
         }
;
         *plVar9 = *(long*)( this + 0x10 );
         *(long**)( this + 0x10 ) = plVar9;
         *(_Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)p_Var11 = this + 0x10;
         if (*plVar9 != 0) {
            *(long**)( __s + uVar10 * 8 ) = plVar9;
         }

      }
;
      LAB_0010d722:if (*(_Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)this != this + 0x30) {
         operator_delete(*(_Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)this, *(long*)( this + 8 ) << 3);
      }

      *(ulong*)( this + 8 ) = extraout_RDX;
      *(_Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)this = __s;
      p_Var11 = __s + ( (ulong)(long)iVar1 % extraout_RDX ) * 8;
      plVar8 = *(long**)p_Var11;
   }

   if (plVar8 == (long*)0x0) {
      lVar4 = *(long*)( this + 0x10 );
      *(long**)( this + 0x10 ) = plVar6;
      *plVar6 = lVar4;
      if (lVar4 != 0) {
         *(long**)( __s + ( ( ulong )(long) * (int*)( lVar4 + 8 ) % *(ulong*)( this + 8 ) ) * 8 ) = plVar6;
      }

      *(_Map_base<int,std::pair<int_const,int>,std::allocator<std::pair<int_const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)p_Var11 = this + 0x10;
   }
 else {
      *plVar6 = *plVar8;
      **(undefined8**)p_Var11 = plVar6;
   }

   *(long*)( this + 0x18 ) = *(long*)( this + 0x18 ) + 1;
   return (long)plVar6 + 0xc;
}
/* std::__detail::_Insert_base<unsigned int, unsigned int, std::allocator<unsigned int>,
   std::__detail::_Identity, std::equal_to<unsigned int>, std::hash<unsigned int>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, true, true>
   >::insert(unsigned int const&) */undefined1[16];std::__detail::_Insert_base<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::insert (_Insert_base<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
         *this,uint *param_1) {
   _Insert_base<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>> *p_Var1;
   uint uVar2;
   uint uVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   ulong uVar6;
   long lVar7;
   undefined8 *puVar8;
   undefined1 uVar9;
   char cVar10;
   long *plVar11;
   _Insert_base<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>> *__s;
   ulong uVar12;
   ulong extraout_RDX;
   long *plVar13;
   long *plVar14;
   ulong uVar15;
   undefined1 auVar16[16];
   uVar2 = *param_1;
   if (*(long*)( this + 0x18 ) == 0) {
      for (plVar11 = *(long**)( this + 0x10 ); plVar11 != (long*)0x0; plVar11 = (long*)*plVar11) {
         if (*(uint*)( plVar11 + 1 ) == uVar2) {
            uVar9 = 0;
            goto LAB_0010d857;
         }

      }

      uVar12 = (ulong)uVar2 % *(ulong*)( this + 8 );
   }
 else {
      uVar12 = (ulong)uVar2 % *(ulong*)( this + 8 );
      puVar4 = *(undefined8**)( *(long*)this + uVar12 * 8 );
      if (puVar4 != (undefined8*)0x0) {
         uVar3 = *(uint*)( (undefined8*)*puVar4 + 1 );
         puVar8 = (undefined8*)*puVar4;
         while (uVar2 != uVar3) {
            puVar5 = (undefined8*)*puVar8;
            if (( puVar5 == (undefined8*)0x0 ) || ( uVar3 = *(uint*)( puVar5 + 1 ) ),puVar4 = puVar8,puVar8 = puVar5,(ulong)uVar3 % *(ulong*)( this + 8 ) != uVar12) goto LAB_0010d88f;
         }
;
         plVar11 = (long*)*puVar4;
         uVar9 = 0;
         if (plVar11 != (long*)0x0) goto LAB_0010d857;
      }

   }

   LAB_0010d88f:plVar11 = (long*)operator_new(0x10);
   uVar15 = *(ulong*)( this + 0x18 );
   uVar6 = *(ulong*)( this + 8 );
   *plVar11 = 0;
   *(uint*)( plVar11 + 1 ) = *param_1;
   cVar10 = std::__detail::_Prime_rehash_policy::_M_need_rehash(( ulong )(this + 0x20), uVar6, uVar15);
   if (cVar10 == '\0') {
      __s = *(_Insert_base<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>**)this;
      p_Var1 = __s + uVar12 * 8;
      plVar13 = *(long**)p_Var1;
   }
 else {
      if (extraout_RDX == 1) {
         __s = this + 0x30;
         *(undefined8*)( this + 0x30 ) = 0;
      }
 else {
         if (extraout_RDX >> 0x3c != 0) {
            if (extraout_RDX >> 0x3d != 0) {
               std::__throw_bad_array_new_length();
            }

            /* WARNING: Subroutine does not return */
            std::__throw_bad_alloc();
         }

         __s = (_Insert_base<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>*)operator_new(extraout_RDX * 8);
         memset(__s, 0, extraout_RDX * 8);
      }

      plVar13 = *(long**)( this + 0x10 );
      *(undefined8*)( this + 0x10 ) = 0;
      uVar12 = 0;
      while (uVar15 = uVar12,plVar14 = plVar13,plVar13 != (long*)0x0) {
         while (true) {
            plVar13 = (long*)*plVar14;
            uVar12 = ( ulong ) * (uint*)( plVar14 + 1 ) % extraout_RDX;
            p_Var1 = __s + uVar12 * 8;
            if (*(long**)p_Var1 == (long*)0x0) break;
            *plVar14 = **(long**)p_Var1;
            **(undefined8**)p_Var1 = plVar14;
            plVar14 = plVar13;
            if (plVar13 == (long*)0x0) goto LAB_0010d99d;
         }
;
         *plVar14 = *(long*)( this + 0x10 );
         *(long**)( this + 0x10 ) = plVar14;
         *(_Insert_base<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>**)p_Var1 = this + 0x10;
         if (*plVar14 != 0) {
            *(long**)( __s + uVar15 * 8 ) = plVar14;
         }

      }
;
      LAB_0010d99d:if (*(_Insert_base<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>**)this != this + 0x30) {
         operator_delete(*(_Insert_base<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>**)this, *(long*)( this + 8 ) << 3);
      }

      *(ulong*)( this + 8 ) = extraout_RDX;
      *(_Insert_base<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>**)this = __s;
      p_Var1 = __s + ( (ulong)uVar2 % extraout_RDX ) * 8;
      plVar13 = *(long**)p_Var1;
   }

   if (plVar13 == (long*)0x0) {
      lVar7 = *(long*)( this + 0x10 );
      *(long**)( this + 0x10 ) = plVar11;
      *plVar11 = lVar7;
      if (lVar7 != 0) {
         *(long**)( __s + ( ( ulong ) * (uint*)( lVar7 + 8 ) % *(ulong*)( this + 8 ) ) * 8 ) = plVar11;
      }

      *(_Insert_base<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>**)p_Var1 = this + 0x10;
   }
 else {
      *plVar11 = *plVar13;
      **(undefined8**)p_Var1 = plVar11;
   }

   *(long*)( this + 0x18 ) = *(long*)( this + 0x18 ) + 1;
   uVar9 = 1;
   LAB_0010d857:auVar16[8] = uVar9;
   auVar16._0_8_ = plVar11;
   auVar16._9_7_ = 0;
   return auVar16;
}
/* void std::vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int,
   unsigned int> > >::_M_realloc_insert<std::pair<unsigned int, unsigned int>
   const&>(__gnu_cxx::__normal_iterator<std::pair<unsigned int, unsigned int>*,
   std::vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int,
   unsigned int> > > >, std::pair<unsigned int, unsigned int> const&) */void std::vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>::_M_realloc_insert<std::pair<unsigned_int,unsigned_int>const&>(vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>> *this, undefined8 *param_2, undefined8 *param_3) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   undefined8 *puVar4;
   ulong uVar5;
   undefined8 *puVar6;
   ulong uVar7;
   undefined8 *puVar8;
   undefined8 *puVar9;
   long lVar10;
   puVar1 = *(undefined8**)( this + 8 );
   puVar2 = *(undefined8**)this;
   uVar5 = (long)puVar1 - (long)puVar2 >> 3;
   if (uVar5 == 0xfffffffffffffff) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   if (puVar2 == puVar1) {
      if (0xfffffffffffffffe < uVar5) goto LAB_0010db50;
      uVar7 = 0xfffffffffffffff;
      if (uVar5 + 1 < 0x1000000000000000) {
         uVar7 = uVar5 + 1;
      }

      uVar7 = uVar7 << 3;
      LAB_0010db5a:puVar6 = (undefined8*)operator_new(uVar7);
      lVar10 = uVar7 + (long)puVar6;
      puVar9 = puVar6 + 1;
      *(undefined8*)( (long)puVar6 + ( (long)param_2 - (long)puVar2 ) ) = *param_3;
      if (param_2 != puVar2) {
         LAB_0010dac9:puVar4 = puVar6;
         puVar8 = puVar2;
         do {
            puVar9 = puVar4;
            uVar3 = *puVar8;
            puVar8 = puVar8 + 1;
            *puVar9 = uVar3;
            puVar4 = puVar9 + 1;
         }
 while ( puVar9 + 1 != (undefined8*)( ( (long)param_2 - (long)puVar2 ) + (long)puVar6 ) );
         puVar9 = puVar9 + 2;
      }

      if (param_2 == puVar1) goto LAB_0010db19;
   }
 else {
      uVar7 = uVar5 * 2;
      if (uVar7 < uVar5) {
         LAB_0010db50:uVar7 = 0x7ffffffffffffff8;
         goto LAB_0010db5a;
      }

      if (uVar7 != 0) {
         if (0xfffffffffffffff < uVar7) {
            uVar7 = 0xfffffffffffffff;
         }

         uVar7 = uVar7 * 8;
         goto LAB_0010db5a;
      }

      lVar10 = 0;
      puVar6 = (undefined8*)0x0;
      puVar9 = (undefined8*)0x8;
      *(undefined8*)( (long)param_2 - (long)puVar2 ) = *param_3;
      if (param_2 != puVar2) goto LAB_0010dac9;
   }

   memcpy(puVar9, param_2, (long)puVar1 - (long)param_2);
   puVar9 = (undefined8*)( (long)puVar9 + ( (long)puVar1 - (long)param_2 ) );
   LAB_0010db19:if (puVar2 != (undefined8*)0x0) {
      operator_delete(puVar2, *(long*)( this + 0x10 ) - (long)puVar2);
   }

   *(undefined8**)this = puVar6;
   *(undefined8**)( this + 8 ) = puVar9;
   *(long*)( this + 0x10 ) = lVar10;
   return;
}
/* std::vector<unsigned int, std::allocator<unsigned int> >::_M_default_append(unsigned long) */void std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_default_append(vector<unsigned_int,std::allocator<unsigned_int>> *this, ulong param_1) {
   ulong uVar1;
   ulong uVar2;
   void *__dest;
   void *pvVar3;
   undefined4 *__s;
   size_t sVar4;
   ulong uVar5;
   undefined4 *puVar6;
   if (param_1 == 0) {
      return;
   }

   puVar6 = *(undefined4**)( this + 8 );
   pvVar3 = *(void**)this;
   if (param_1 <= ( ulong )(*(long*)( this + 0x10 ) - (long)puVar6 >> 2)) {
      *puVar6 = 0;
      __s = puVar6 + 1;
      if (param_1 - 1 != 0) {
         sVar4 = (long)__s + ( ( param_1 - 1 ) * 4 - (long)puVar6 ) + -4;
         pvVar3 = memset(__s, 0, sVar4);
         __s = (undefined4*)( (long)pvVar3 + sVar4 );
      }

      *(undefined4**)( this + 8 ) = __s;
      return;
   }

   sVar4 = (long)puVar6 - (long)pvVar3;
   uVar2 = (long)sVar4 >> 2;
   if (0x1fffffffffffffff - uVar2 < param_1) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_default_append");
   }

   uVar1 = param_1 + uVar2;
   if (uVar2 < param_1) {
      uVar2 = 0x1fffffffffffffff;
      if (uVar1 < 0x2000000000000000) {
         uVar2 = uVar1;
      }

      uVar2 = uVar2 * 4;
      __dest = operator_new(uVar2);
      puVar6 = (undefined4*)( (long)__dest + sVar4 );
      *puVar6 = 0;
      if (param_1 - 1 != 0) goto LAB_0010dcb4;
      LAB_0010dcc8:if (sVar4 != 0) goto LAB_0010dd98;
      if (pvVar3 == (void*)0x0) goto LAB_0010dcda;
      uVar5 = *(long*)( this + 0x10 ) - (long)pvVar3;
   }
 else {
      uVar2 = uVar2 * 2;
      if (0x1fffffffffffffff < uVar2) {
         uVar2 = 0x1fffffffffffffff;
      }

      uVar2 = uVar2 * 4;
      __dest = operator_new(uVar2);
      puVar6 = (undefined4*)( (long)__dest + sVar4 );
      *puVar6 = 0;
      if (param_1 != 1) {
         LAB_0010dcb4:memset(puVar6 + 1, 0, ( param_1 - 1 ) * 4);
         goto LAB_0010dcc8;
      }

      LAB_0010dd98:memmove(__dest, pvVar3, sVar4);
      uVar5 = *(long*)( this + 0x10 ) - (long)pvVar3;
   }

   operator_delete(pvVar3, uVar5);
   LAB_0010dcda:*(void**)this = __dest;
   *(void**)( this + 8 ) = (void*)( (long)__dest + uVar1 * 4 );
   *(ulong*)( this + 0x10 ) = (long)__dest + uVar2;
   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int,
   unsigned int> > >::_M_realloc_insert<std::pair<unsigned int, unsigned int>
   >(__gnu_cxx::__normal_iterator<std::pair<unsigned int, unsigned int>*,
   std::vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int,
   unsigned int> > > >, std::pair<unsigned int, unsigned int>&&) */void std::vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>::_M_realloc_insert<std::pair<unsigned_int,unsigned_int>>(undefined8 *param_1, undefined8 *param_2, undefined8 *param_3) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   undefined8 *puVar4;
   ulong uVar5;
   undefined8 *puVar6;
   ulong uVar7;
   undefined8 *puVar8;
   undefined8 *puVar9;
   long lVar10;
   puVar1 = (undefined8*)param_1[1];
   puVar2 = (undefined8*)*param_1;
   uVar5 = (long)puVar1 - (long)puVar2 >> 3;
   if (uVar5 == 0xfffffffffffffff) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   if (puVar2 == puVar1) {
      if (0xfffffffffffffffe < uVar5) goto LAB_0010dee0;
      uVar7 = 0xfffffffffffffff;
      if (uVar5 + 1 < 0x1000000000000000) {
         uVar7 = uVar5 + 1;
      }

      uVar7 = uVar7 << 3;
      LAB_0010deea:puVar6 = (undefined8*)operator_new(uVar7);
      lVar10 = uVar7 + (long)puVar6;
      puVar9 = puVar6 + 1;
      *(undefined8*)( (long)puVar6 + ( (long)param_2 - (long)puVar2 ) ) = *param_3;
      if (param_2 != puVar2) {
         LAB_0010de59:puVar4 = puVar6;
         puVar8 = puVar2;
         do {
            puVar9 = puVar4;
            uVar3 = *puVar8;
            puVar8 = puVar8 + 1;
            *puVar9 = uVar3;
            puVar4 = puVar9 + 1;
         }
 while ( puVar9 + 1 != (undefined8*)( ( (long)param_2 - (long)puVar2 ) + (long)puVar6 ) );
         puVar9 = puVar9 + 2;
      }

      if (param_2 == puVar1) goto LAB_0010dea9;
   }
 else {
      uVar7 = uVar5 * 2;
      if (uVar7 < uVar5) {
         LAB_0010dee0:uVar7 = 0x7ffffffffffffff8;
         goto LAB_0010deea;
      }

      if (uVar7 != 0) {
         if (0xfffffffffffffff < uVar7) {
            uVar7 = 0xfffffffffffffff;
         }

         uVar7 = uVar7 * 8;
         goto LAB_0010deea;
      }

      lVar10 = 0;
      puVar6 = (undefined8*)0x0;
      puVar9 = (undefined8*)0x8;
      *(undefined8*)( (long)param_2 - (long)puVar2 ) = *param_3;
      if (param_2 != puVar2) goto LAB_0010de59;
   }

   memcpy(puVar9, param_2, (long)puVar1 - (long)param_2);
   puVar9 = (undefined8*)( (long)puVar9 + ( (long)puVar1 - (long)param_2 ) );
   LAB_0010dea9:if (puVar2 != (undefined8*)0x0) {
      operator_delete(puVar2, param_1[2] - (long)puVar2);
   }

   *param_1 = puVar6;
   param_1[1] = puVar9;
   param_1[2] = lVar10;
   return;
}
/* spv::spirvbin_t::errorHandler[abi:cxx11] */void spv::spirvbin_t::_GLOBAL__sub_I_errorHandler_abi_cxx11_(void) {
   errorHandler_abi_cxx11_._0_16_ = (undefined1[16])0x0;
   errorHandler_abi_cxx11_._16_8_ = std::_Function_handler<void(std::__cxx11::string_const &),spv::spirvbin_t::{lambda(std::__cxx11::string_const &)#1}>::_M_manager;
   errorHandler_abi_cxx11_._24_8_ = std::_Function_handler<void(std::__cxx11::string_const &),spv::spirvbin_t::{lambda(std::__cxx11::string_const &)#1}>::_M_invoke;
   __cxa_atexit(std::function<void(std::__cxx11::string_const &)>::~function, errorHandler_abi_cxx11_, &__dso_handle);
   logHandler_abi_cxx11_._0_16_ = (undefined1[16])0x0;
   logHandler_abi_cxx11_._16_8_ = std::_Function_handler<void(std::__cxx11::string_const &),spv::spirvbin_t::{lambda(std::__cxx11::string_const &)#2}>::_M_manager;
   logHandler_abi_cxx11_._24_8_ = 0x100000;
   __cxa_atexit(std::function<void(std::__cxx11::string_const &)>::~function, logHandler_abi_cxx11_, &__dso_handle);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* spv::spirvbin_t::~spirvbin_t() */void spv::spirvbin_t::~spirvbin_t(spirvbin_t *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* std::function<void (std::__cxx11::string const&)>::~function() */void std::function<void(std::__cxx11::string_const &)>::~function(function<void(std::__cxx11::string_const &)> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

