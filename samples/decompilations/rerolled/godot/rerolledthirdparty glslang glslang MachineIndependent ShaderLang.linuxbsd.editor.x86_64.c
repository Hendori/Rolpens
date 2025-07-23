/* (anonymous namespace)::MapVersionToIndex(int) */ulong(anonymous_namespace) {
   ulong uVar1;
   if (param_1 == 0x14a) {
      return 7;
   }

   if (param_1 < 0x14b) {
      if (param_1 == 0x96) {
         return 5;
      }

      if (param_1 < 0x97) {
         uVar1 = 3;
         if (param_1 != 0x82) {
            if (0x82 < param_1) {
               return ( ulong )(param_1 == 0x8c) << 2;
            }

            uVar1 = 1;
            if (param_1 != 0x6e) {
               return ( ulong )(( uint )(param_1 == 0x78) * 2);
            }

         }

      }
 else {
         uVar1 = 0xd;
         if (( param_1 != 0x136 ) && ( uVar1 = param_1 != 0x140 )) {
            uVar1 = 0;
            if (param_1 == 300) {
               uVar1 = 6;
            }

            return uVar1;
         }

      }

   }
 else if (param_1 == 0x1ae) {
      uVar1 = 0xb;
   }
 else if (param_1 < 0x1af) {
      uVar1 = 9;
      if (( param_1 != 0x19a ) && ( uVar1 = param_1 != 0x1a4 )) {
         return ( ulong )(param_1 == 400) << 3;
      }

   }
 else {
      uVar1 = 0xe;
      if (( param_1 != 0x1c2 ) && ( uVar1 = param_1 != 0x1cc )) {
         uVar1 = 0;
         if (param_1 == 0x1b8) {
            uVar1 = 0xc;
         }

         return uVar1;
      }

   }

   return uVar1;
}
/* (anonymous namespace)::TranslateEnvironment(glslang::TEnvironment const*, EShMessages&,
   glslang::EShSource&, EShLanguage&, glslang::SpvVersion&) [clone .constprop.0] */void (anonymous_namespace)::TranslateEnvironment(TEnvironment *param_1, EShMessages *param_2, EShSource *param_3, EShLanguage *param_4, SpvVersion *param_5) {
   uint uVar1;
   int iVar2;
   uVar1 = *(uint*)param_2;
   if (( uVar1 & 8 ) == 0) {
      if (( uVar1 & 0x10 ) != 0) goto LAB_00100150;
      if (*(int*)param_5 != 0) goto LAB_001001a8;
   }
 else {
      *(undefined4*)param_5 = 0x10000;
      if (( uVar1 & 0x10 ) == 0) {
         LAB_001001a8:*(undefined4*)( param_5 + 0xc ) = 100;
      }
 else {
         LAB_00100150:*(undefined8*)( param_5 + 4 ) = _LC0;
      }

   }

   if (param_1 == (TEnvironment*)0x0) {
      return;
   }

   iVar2 = *(int*)param_1;
   if (iVar2 != 0) {
      *(undefined4*)param_4 = *(undefined4*)( param_1 + 4 );
      if (*(int*)( param_1 + 8 ) == 1) {
         *(undefined4*)( param_5 + 4 ) = *(undefined4*)( param_1 + 0xc );
         *(TEnvironment*)( param_5 + 0x10 ) = param_1[0x10];
      }
 else if (*(int*)( param_1 + 8 ) == 2) {
         *(undefined4*)( param_5 + 0xc ) = *(undefined4*)( param_1 + 0xc );
      }

      if (iVar2 == 1) {
         iVar2 = *(int*)( param_1 + 0x14 );
         *(undefined4*)param_3 = 1;
         *(uint*)param_2 = uVar1 & 0xffffffbf;
         goto joined_r0x0010018c;
      }

      if (iVar2 == 2) {
         iVar2 = *(int*)( param_1 + 0x14 );
         *(undefined4*)param_3 = 2;
         *(uint*)param_2 = uVar1 | 0x40;
         goto joined_r0x0010018c;
      }

   }

   iVar2 = *(int*)( param_1 + 0x14 );
   joined_r0x0010018c:if (iVar2 == 1) {
      iVar2 = *(int*)( param_1 + 0x1c );
      *(undefined4*)( param_5 + 8 ) = *(undefined4*)( param_1 + 0x18 );
   }
 else {
      iVar2 = *(int*)( param_1 + 0x1c );
   }

   if (iVar2 != 1) {
      return;
   }

   *(undefined4*)param_5 = *(undefined4*)( param_1 + 0x20 );
   return;
}
/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_M_get_insert_unique_pos(int
   const&) [clone .isra.0] */undefined1[16];std::_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>::_M_get_insert_unique_pos (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
           *this,int *param_1) {
   undefined1 auVar1[16];
   _Rb_tree_node_base *p_Var2;
   _Rb_tree_node_base *p_Var3;
   _Rb_tree_node_base *p_Var4;
   int iVar5;
   int iVar6;
   undefined1 auVar7[16];
   iVar6 = (int)param_1;
   p_Var2 = *(_Rb_tree_node_base**)( this + 0x10 );
   if (*(_Rb_tree_node_base**)( this + 0x10 ) == (_Rb_tree_node_base*)0x0) {
      p_Var2 = (_Rb_tree_node_base*)( this + 8 );
   }
 else {
      do {
         p_Var4 = p_Var2;
         iVar5 = *(int*)( p_Var4 + 0x20 );
         p_Var2 = *(_Rb_tree_node_base**)( p_Var4 + 0x18 );
         if (iVar6 < iVar5) {
            p_Var2 = *(_Rb_tree_node_base**)( p_Var4 + 0x10 );
         }

      }
 while ( p_Var2 != (_Rb_tree_node_base*)0x0 );
      p_Var2 = p_Var4;
      if (iVar5 <= iVar6) goto LAB_00100268;
   }

   if (*(_Rb_tree_node_base**)( this + 0x18 ) == p_Var2) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = p_Var2;
      return auVar1 << 0x40;
   }

   p_Var4 = (_Rb_tree_node_base*)std::_Rb_tree_decrement(p_Var2);
   iVar5 = *(int*)( p_Var4 + 0x20 );
   LAB_00100268:p_Var3 = (_Rb_tree_node_base*)0x0;
   if (iVar5 < iVar6) {
      p_Var4 = p_Var3;
      p_Var3 = p_Var2;
   }

   auVar7._8_8_ = p_Var3;
   auVar7._0_8_ = p_Var4;
   return auVar7;
}
/* std::_Function_handler<void (int, char const*), (anonymous
   namespace)::DoPreprocessing::operator()(glslang::TParseContextBase&, glslang::TPpContext&,
   glslang::TInputScanner&, bool, glslang::TSymbolTable&, glslang::TIntermediate&,
   EShOptimizationLevel, EShMessages)::{lambda(int, char const*)#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(int, char_const *),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, char_const *)#1}>::_M_manager(undefined8 *param_1, undefined8 *param_2, int param_3) {
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

   *param_1 = &(anonymous_namespace)::DoPreprocessing::
              operator()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)
              ::{lambda(int,char_const*)#1}::typeinfo;
  return 0;};
   undefined8 std::_Function_handler<void(int, glslang::TVector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>> const &),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, glslang::TVector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>> const &)#1}>::_M_manager(undefined8 *param_1, undefined8 *param_2, int param_3) {
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

      *param_1 = &(anonymous_namespace)::DoPreprocessing::
              operator()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)
              ::{lambda(int,glslang::TVector < std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> > const & ::typeinfo;
      return 0;
   }

   /* std::_Function_handler<void (int, int, char const*), (anonymous
   namespace)::DoPreprocessing::operator()(glslang::TParseContextBase&, glslang::TPpContext&,
   glslang::TInputScanner&, bool, glslang::TSymbolTable&, glslang::TIntermediate&,
   EShOptimizationLevel, EShMessages)::{lambda(int, int, char
   const*)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */
   undefined8 std::_Function_handler<void(int, int, char_const *),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, int, char_const *)#1}>::_M_manager(undefined8 *param_1, undefined8 *param_2, int param_3) {
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

      *param_1 = &(anonymous_namespace)::DoPreprocessing::
              operator()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)
              ::{lambda(int,int,char_const*)#1}::typeinfo;
  return 0;};
      undefined8 std::_Function_handler<void(int, int, bool, int, char_const *),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, int, bool, int, char_const *)#1}>::_M_manager(long *param_1, long *param_2, int param_3) {
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

         *param_1 = (long)&(anonymous_namespace)::DoPreprocessing::
                    operator()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)
                    ::{lambda(int,int,bool,int,char_const*)#1}::typeinfo;
  return 0;};
         undefined8 std::_Function_handler<void(int, char_const *, char_const *),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, char_const *, char_const *)#1}>::_M_manager(undefined8 *param_1, undefined8 *param_2, int param_3) {
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

            *param_1 = &(anonymous_namespace)::DoPreprocessing::
              operator()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)
              ::{lambda(int,char_const * char_const*)#1}::typeinfo;
  return 0;};
            void std::__cxx11::string::append(string *this, char *param_1) {
               size_t sVar1;
               sVar1 = strlen(param_1);
               if (sVar1 <= 0x3fffffffffffffffU - *(long*)( this + 8 )) {
                  std::__cxx11::string::_M_append((char*)this, (ulong)param_1);
                  return;
               }

               /* WARNING: Subroutine does not return */
               std::__throw_length_error("basic_string::append");
            }

            /* void std::__cxx11::string::_M_construct<char*>(char*, char*, std::forward_iterator_tag) [clone
   .isra.0] */
            void std::__cxx11::string::_M_construct<char*>(ulong *param_1, undefined1 *param_2, long param_3) {
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
                     goto LAB_001004e4;
                  }

                  if (__n == 0) goto LAB_001004e4;
               }
 else {
                  __dest = (undefined1*)std::__cxx11::string::_M_create(param_1, ( ulong ) & local_28);
                  *param_1 = (ulong)__dest;
                  param_1[2] = local_28;
               }

               memcpy(__dest, param_2, __n);
               __dest = (undefined1*)*param_1;
               LAB_001004e4:param_1[1] = local_28;
               __dest[local_28] = 0;
               if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return;
            }

            /* void std::__cxx11::string::_M_construct<char const*>(char const*, char const*,
   std::forward_iterator_tag) [clone .isra.0] */
            void std::__cxx11::string::_M_construct<char_const*>(ulong *param_1, undefined1 *param_2, long param_3) {
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
                     goto LAB_00100594;
                  }

                  if (__n == 0) goto LAB_00100594;
               }
 else {
                  __dest = (undefined1*)std::__cxx11::string::_M_create(param_1, ( ulong ) & local_28);
                  *param_1 = (ulong)__dest;
                  param_1[2] = local_28;
               }

               memcpy(__dest, param_2, __n);
               __dest = (undefined1*)*param_1;
               LAB_00100594:param_1[1] = local_28;
               __dest[local_28] = 0;
               if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return;
            }

            /* std::__cxx11::string::string<std::allocator<char> >(char const*, std::allocator<char> const&)
   [clone .constprop.0] */
            void std::__cxx11::string::string<std::allocator<char>>(string *this, char *param_1, allocator *param_2) {
               size_t sVar1;
               char *__dest;
               long extraout_RDX;
               ulong __n;
               char *pcVar2;
               *(string**)this = this + 0x10;
               if (param_1 != (char*)0x0) {
                  sVar1 = strlen(param_1);
                  _M_construct<char_const*>(this, param_1, param_1 + sVar1);
                  return;
               }

               pcVar2 = "basic_string: construction from null is not valid";
               std::__throw_logic_error("basic_string: construction from null is not valid");
               __n = extraout_RDX - (long)param_1;
               if (__n < 0x10) {
                  __dest = *(char**)( (long)pcVar2 + 8 );
                  if (__n == 1) {
                     *__dest = *param_1;
                     *(ulong*)( (long)pcVar2 + 0x10 ) = 1;
                     *(undefined1*)( *(ulong*)( (long)pcVar2 + 8 ) + 1 ) = 0;
                     return;
                  }

                  if (__n == 0) {
                     *(ulong*)( (long)pcVar2 + 0x10 ) = 0;
                     *__dest = '\0';
                     return;
                  }

               }
 else {
                  if ((long)__n < 0) {
                     /* WARNING: Subroutine does not return */
                     std::__throw_length_error("basic_string::_M_create");
                  }

                  __dest = (char*)glslang::TPoolAllocator::allocate(*(ulong*)pcVar2);
                  *(ulong*)( (long)pcVar2 + 0x18 ) = __n;
                  *(char**)( (long)pcVar2 + 8 ) = __dest;
               }

               memcpy(__dest, param_1, __n);
               *(ulong*)( (long)pcVar2 + 0x10 ) = __n;
               *(undefined1*)( *(ulong*)( (long)pcVar2 + 8 ) + __n ) = 0;
               return;
            }

            /* void std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_construct<char const*>(char const*, char const*, std::forward_iterator_tag) [clone .isra.0]
    */
            void std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(ulong *param_1, undefined1 *param_2, long param_3) {
               undefined1 *__dest;
               ulong __n;
               __n = param_3 - (long)param_2;
               if (__n < 0x10) {
                  __dest = (undefined1*)param_1[1];
                  if (__n == 1) {
                     *__dest = *param_2;
                     param_1[2] = 1;
                     *(undefined1*)( param_1[1] + 1 ) = 0;
                     return;
                  }

                  if (__n == 0) {
                     param_1[2] = 0;
                     *__dest = 0;
                     return;
                  }

               }
 else {
                  if ((long)__n < 0) {
                     /* WARNING: Subroutine does not return */
                     std::__throw_length_error("basic_string::_M_create");
                  }

                  __dest = (undefined1*)glslang::TPoolAllocator::allocate(*param_1);
                  param_1[3] = __n;
                  param_1[1] = (ulong)__dest;
               }

               memcpy(__dest, param_2, __n);
               param_1[2] = __n;
               *(undefined1*)( param_1[1] + __n ) = 0;
               return;
            }

            /* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >
   >::_M_erase(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >*) [clone .isra.0] */
            void std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>::_M_erase(_Rb_tree_node *param_1) {
               long lVar1;
               long lVar2;
               long lVar3;
               long lVar4;
               long lVar5;
               long lVar6;
               long lVar7;
               long lVar8;
               if (param_1 != (_Rb_tree_node*)0x0) {
                  do {
                     for (lVar1 = *(long*)( param_1 + 0x18 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 0x10 )) {
                        for (lVar2 = *(long*)( lVar1 + 0x18 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 0x10 )) {
                           for (lVar3 = *(long*)( lVar2 + 0x18 ); lVar3 != 0; lVar3 = *(long*)( lVar3 + 0x10 )) {
                              for (lVar4 = *(long*)( lVar3 + 0x18 ); lVar4 != 0; lVar4 = *(long*)( lVar4 + 0x10 )) {
                                 for (lVar5 = *(long*)( lVar4 + 0x18 ); lVar5 != 0; lVar5 = *(long*)( lVar5 + 0x10 )) {
                                    for (lVar6 = *(long*)( lVar5 + 0x18 ); lVar6 != 0; lVar6 = *(long*)( lVar6 + 0x10 )) {
                                       for (lVar7 = *(long*)( lVar6 + 0x18 ); lVar7 != 0; lVar7 = *(long*)( lVar7 + 0x10 )) {
                                          for (lVar8 = *(long*)( lVar7 + 0x18 ); lVar8 != 0; lVar8 = *(long*)( lVar8 + 0x10 )) {
                                             _M_erase(*(_Rb_tree_node**)( lVar8 + 0x18 ));
                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                     param_1 = *(_Rb_tree_node**)( param_1 + 0x10 );
                  }
 while ( param_1 != (_Rb_tree_node*)0x0 );
                  return;
               }

               return;
            }

            /* std::_Function_handler<void (int, char const*), (anonymous
   namespace)::DoPreprocessing::operator()(glslang::TParseContextBase&, glslang::TPpContext&,
   glslang::TInputScanner&, bool, glslang::TSymbolTable&, glslang::TIntermediate&,
   EShOptimizationLevel, EShMessages)::{lambda(int, char const*)#1}>::_M_invoke(std::_Any_data
   const&, int&&, char const*&&) */
            void std::_Function_handler<void(int, char_const *),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, char_const *)#1}>::_M_invoke(_Any_data *param_1, int *param_2, char **param_3) {
               uint uVar1;
               long lVar2;
               char *pcVar3;
               long *plVar4;
               ulong uVar5;
               int iVar6;
               undefined4 uVar7;
               long *plVar8;
               ulong uVar9;
               lVar2 = *(long*)param_1;
               pcVar3 = *param_3;
               uVar1 = *param_2;
               if (*(long*)( lVar2 + 0x10 ) != 0) {
                  iVar6 = ( **(code**)( lVar2 + 0x18 ) )(lVar2);
                  if (*(int*)( lVar2 + 0x28 ) == iVar6) {
                     iVar6 = *(int*)( lVar2 + 0x2c );
                     goto LAB_001008b9;
                  }

                  if (*(long*)( lVar2 + 0x28 ) != 0xffffffff) {
                     std::__cxx11::string::push_back((char)*(undefined8*)( lVar2 + 0x20 ));
                  }

                  if (*(long*)( lVar2 + 0x10 ) != 0) {
                     uVar7 = ( **(code**)( lVar2 + 0x18 ) )(lVar2);
                     *(undefined4*)( lVar2 + 0x2c ) = 0xffffffff;
                     *(undefined4*)( lVar2 + 0x28 ) = uVar7;
                     iVar6 = -1;
                     if (uVar1 < 0x80000000) {
                        do {
                           if (0 < iVar6) {
                              plVar4 = *(long**)( lVar2 + 0x20 );
                              uVar5 = plVar4[1];
                              plVar8 = (long*)*plVar4;
                              if (plVar8 == plVar4 + 2) {
                                 uVar9 = 0xf;
                              }
 else {
                                 uVar9 = plVar4[2];
                              }

                              if (uVar9 < uVar5 + 1) {
                                 std::__cxx11::string::_M_mutate((ulong)plVar4, uVar5, (char*)0x0, 0);
                                 plVar8 = (long*)*plVar4;
                              }

                              *(undefined1*)( (long)plVar8 + uVar5 ) = 10;
                              plVar4[1] = uVar5 + 1;
                              *(undefined1*)( *plVar4 + 1 + uVar5 ) = 0;
                           }

                           iVar6 = *(int*)( lVar2 + 0x2c ) + 1;
                           *(int*)( lVar2 + 0x2c ) = iVar6;
                           LAB_001008b9:;
                        }
 while ( iVar6 < (int)uVar1 );
                     }

                     __cxx11::string::append(*(string**)( param_1 + 8 ), "#error ");
                     __cxx11::string::append(*(string**)( param_1 + 8 ), pcVar3);
                     return;
                  }

               }

               /* WARNING: Subroutine does not return */
               std::__throw_bad_function_call();
            }

            /* std::_Function_handler<void (int, char const*, char const*), (anonymous
   namespace)::DoPreprocessing::operator()(glslang::TParseContextBase&, glslang::TPpContext&,
   glslang::TInputScanner&, bool, glslang::TSymbolTable&, glslang::TIntermediate&,
   EShOptimizationLevel, EShMessages)::{lambda(int, char const*, char
   const*)#1}>::_M_invoke(std::_Any_data const&, int&&, char const*&&, char const*&&) */
            void std::_Function_handler<void(int, char_const *, char_const *),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, char_const *, char_const *)#1}>::_M_invoke(_Any_data *param_1, int *param_2, char **param_3, char **param_4) {
               uint uVar1;
               char *pcVar2;
               long lVar3;
               char *pcVar4;
               long *plVar5;
               ulong uVar6;
               int iVar7;
               undefined4 uVar8;
               long *plVar9;
               ulong uVar10;
               pcVar2 = *param_4;
               lVar3 = *(long*)param_1;
               uVar1 = *param_2;
               pcVar4 = *param_3;
               if (*(long*)( lVar3 + 0x10 ) != 0) {
                  iVar7 = ( **(code**)( lVar3 + 0x18 ) )(lVar3);
                  if (*(int*)( lVar3 + 0x28 ) == iVar7) {
                     iVar7 = *(int*)( lVar3 + 0x2c );
                     goto LAB_00100a11;
                  }

                  if (*(long*)( lVar3 + 0x28 ) != 0xffffffff) {
                     std::__cxx11::string::push_back((char)*(undefined8*)( lVar3 + 0x20 ));
                  }

                  if (*(long*)( lVar3 + 0x10 ) != 0) {
                     uVar8 = ( **(code**)( lVar3 + 0x18 ) )(lVar3);
                     *(undefined4*)( lVar3 + 0x2c ) = 0xffffffff;
                     *(undefined4*)( lVar3 + 0x28 ) = uVar8;
                     iVar7 = -1;
                     if (uVar1 < 0x80000000) {
                        do {
                           if (0 < iVar7) {
                              plVar5 = *(long**)( lVar3 + 0x20 );
                              uVar6 = plVar5[1];
                              plVar9 = (long*)*plVar5;
                              if (plVar9 == plVar5 + 2) {
                                 uVar10 = 0xf;
                              }
 else {
                                 uVar10 = plVar5[2];
                              }

                              if (uVar10 < uVar6 + 1) {
                                 std::__cxx11::string::_M_mutate((ulong)plVar5, uVar6, (char*)0x0, 0);
                                 plVar9 = (long*)*plVar5;
                              }

                              *(undefined1*)( (long)plVar9 + uVar6 ) = 10;
                              plVar5[1] = uVar6 + 1;
                              *(undefined1*)( *plVar5 + 1 + uVar6 ) = 0;
                           }

                           iVar7 = *(int*)( lVar3 + 0x2c ) + 1;
                           *(int*)( lVar3 + 0x2c ) = iVar7;
                           LAB_00100a11:;
                        }
 while ( iVar7 < (int)uVar1 );
                     }

                     __cxx11::string::append(*(string**)( param_1 + 8 ), "#extension ");
                     __cxx11::string::append(*(string**)( param_1 + 8 ), pcVar4);
                     __cxx11::string::append(*(string**)( param_1 + 8 ), " : ");
                     __cxx11::string::append(*(string**)( param_1 + 8 ), pcVar2);
                     return;
                  }

               }

               /* WARNING: Subroutine does not return */
               std::__throw_bad_function_call();
            }

            /* std::_Function_handler<void (int, glslang::TVector<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > > const&), (anonymous
   namespace)::DoPreprocessing::operator()(glslang::TParseContextBase&, glslang::TPpContext&,
   glslang::TInputScanner&, bool, glslang::TSymbolTable&, glslang::TIntermediate&,
   EShOptimizationLevel, EShMessages)::{lambda(int,
   glslang::TVector<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > const&)#1}>::_M_invoke(std::_Any_data const&, int&&,
   glslang::TVector<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > const&) */
            void std::_Function_handler<void(int, glslang::TVector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>> const &),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, glslang::TVector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>> const &)#1}>::_M_invoke(_Any_data *param_1, int *param_2, TVector *param_3) {
               uint uVar1;
               char *pcVar2;
               char *__s;
               long *plVar3;
               int iVar4;
               undefined4 uVar5;
               size_t sVar6;
               long *plVar7;
               long lVar8;
               ulong uVar9;
               ulong uVar10;
               lVar8 = *(long*)param_1;
               uVar1 = *param_2;
               if (*(long*)( lVar8 + 0x10 ) != 0) {
                  iVar4 = ( **(code**)( lVar8 + 0x18 ) )(lVar8);
                  if (*(int*)( lVar8 + 0x28 ) == iVar4) {
                     iVar4 = *(int*)( lVar8 + 0x2c );
                     goto LAB_00100bdd;
                  }

                  if (*(long*)( lVar8 + 0x28 ) != 0xffffffff) {
                     std::__cxx11::string::push_back((char)*(undefined8*)( lVar8 + 0x20 ));
                  }

                  if (*(long*)( lVar8 + 0x10 ) != 0) {
                     uVar5 = ( **(code**)( lVar8 + 0x18 ) )(lVar8);
                     *(undefined4*)( lVar8 + 0x2c ) = 0xffffffff;
                     *(undefined4*)( lVar8 + 0x28 ) = uVar5;
                     iVar4 = -1;
                     if (uVar1 < 0x80000000) {
                        do {
                           if (0 < iVar4) {
                              plVar3 = *(long**)( lVar8 + 0x20 );
                              uVar10 = plVar3[1];
                              plVar7 = (long*)*plVar3;
                              if (plVar7 == plVar3 + 2) {
                                 uVar9 = 0xf;
                              }
 else {
                                 uVar9 = plVar3[2];
                              }

                              if (uVar9 < uVar10 + 1) {
                                 std::__cxx11::string::_M_mutate((ulong)plVar3, uVar10, (char*)0x0, 0);
                                 plVar7 = (long*)*plVar3;
                              }

                              *(undefined1*)( (long)plVar7 + uVar10 ) = 10;
                              plVar3[1] = uVar10 + 1;
                              *(undefined1*)( *plVar3 + 1 + uVar10 ) = 0;
                           }

                           iVar4 = *(int*)( lVar8 + 0x2c ) + 1;
                           *(int*)( lVar8 + 0x2c ) = iVar4;
                           LAB_00100bdd:;
                        }
 while ( iVar4 < (int)uVar1 );
                     }

                     uVar10 = 0;
                     __cxx11::string::append(*(string**)( param_1 + 8 ), "#pragma ");
                     lVar8 = *(long*)( param_3 + 8 );
                     if (lVar8 != *(long*)( param_3 + 0x10 )) {
                        do {
                           pcVar2 = *(char**)( param_1 + 8 );
                           __s = *(char**)( lVar8 + 8 + uVar10 * 0x28 );
                           sVar6 = strlen(__s);
                           if (0x3fffffffffffffffU - *(long*)( pcVar2 + 8 ) < sVar6) {
                              /* WARNING: Subroutine does not return */
                              std::__throw_length_error("basic_string::append");
                           }

                           uVar10 = uVar10 + 1;
                           std::__cxx11::string::_M_append(pcVar2, (ulong)__s);
                           lVar8 = *(long*)( param_3 + 8 );
                        }
 while ( uVar10 < ( ulong )(( *(long*)( param_3 + 0x10 ) - lVar8 >> 3 ) * -0x3333333333333333) );
                     }

                     return;
                  }

               }

               /* WARNING: Subroutine does not return */
               std::__throw_bad_function_call();
            }

            /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
            /* std::_Function_handler<void (int, int, char const*), (anonymous
   namespace)::DoPreprocessing::operator()(glslang::TParseContextBase&, glslang::TPpContext&,
   glslang::TInputScanner&, bool, glslang::TSymbolTable&, glslang::TIntermediate&,
   EShOptimizationLevel, EShMessages)::{lambda(int, int, char const*)#1}>::_M_invoke(std::_Any_data
   const&, int&&, int&&, char const*&&) */
            void std::_Function_handler<void(int, int, char_const *),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, int, char_const *)#1}>::_M_invoke(_Any_data *param_1, int *param_2, int *param_3, char **param_4) {
               long lVar1;
               char *pcVar2;
               long *plVar3;
               int iVar4;
               undefined4 uVar5;
               uint uVar6;
               long *plVar7;
               uint uVar8;
               uint uVar9;
               ulong uVar10;
               char cVar11;
               ulong uVar12;
               uint uVar13;
               char *pcVar14;
               long in_FS_OFFSET;
               undefined1 *local_138;
               ulong local_130;
               undefined1 local_128[16];
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
               lVar1 = *(long*)param_1;
               uVar8 = *param_3;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               pcVar2 = *param_4;
               uVar9 = *param_2;
               if (*(long*)( lVar1 + 0x10 ) == 0) {
                  LAB_001011f6:/* WARNING: Subroutine does not return */std::__throw_bad_function_call();
               }

               iVar4 = ( **(code**)( lVar1 + 0x18 ) )(lVar1);
               if (*(int*)( lVar1 + 0x28 ) == iVar4) {
                  iVar4 = *(int*)( lVar1 + 0x2c );
                  goto LAB_00100fbd;
               }

               if (*(long*)( lVar1 + 0x28 ) != 0xffffffff) {
                  std::__cxx11::string::push_back((char)*(undefined8*)( lVar1 + 0x20 ));
               }

               if (*(long*)( lVar1 + 0x10 ) == 0) goto LAB_001011f6;
               uVar5 = ( **(code**)( lVar1 + 0x18 ) )(lVar1);
               *(undefined4*)( lVar1 + 0x2c ) = 0xffffffff;
               *(undefined4*)( lVar1 + 0x28 ) = uVar5;
               iVar4 = -1;
               if (uVar9 < 0x80000000) {
                  do {
                     if (0 < iVar4) {
                        plVar3 = *(long**)( lVar1 + 0x20 );
                        uVar12 = plVar3[1];
                        plVar7 = (long*)*plVar3;
                        if (plVar7 == plVar3 + 2) {
                           uVar10 = 0xf;
                        }
 else {
                           uVar10 = plVar3[2];
                        }

                        if (uVar10 < uVar12 + 1) {
                           std::__cxx11::string::_M_mutate((ulong)plVar3, uVar12, (char*)0x0, 0);
                           plVar7 = (long*)*plVar3;
                        }

                        *(undefined1*)( (long)plVar7 + uVar12 ) = 10;
                        plVar3[1] = uVar12 + 1;
                        *(undefined1*)( *plVar3 + 1 + uVar12 ) = 0;
                     }

                     iVar4 = *(int*)( lVar1 + 0x2c ) + 1;
                     *(int*)( lVar1 + 0x2c ) = iVar4;
                     LAB_00100fbd:;
                  }
 while ( iVar4 < (int)uVar9 );
               }

               uVar13 = uVar8 >> 0x1f;
               __cxx11::string::append(*(string**)( param_1 + 8 ), "#version ");
               uVar9 = -uVar8;
               if (0 < (int)uVar8) {
                  uVar9 = uVar8;
               }

               cVar11 = (char)( (int)uVar8 >> 0x1f );
               if (uVar9 < 10) {
                  local_138 = local_128;
                  std::__cxx11::string::_M_construct(( ulong ) & local_138, '\x01' - cVar11);
                  pcVar14 = local_138 + uVar13;
                  LAB_00100f0f:cVar11 = (char)uVar9 + '0';
               }
 else {
                  if (uVar9 < 100) {
                     local_138 = local_128;
                     std::__cxx11::string::_M_construct(( ulong ) & local_138, '\x02' - cVar11);
                     pcVar14 = local_138 + uVar13;
                     local_118 = __LC9;
                     uStack_110 = _UNK_00123478;
                     local_108 = __LC10;
                     uStack_100 = _UNK_00123488;
                     local_f8 = __LC11;
                     uStack_f0 = _UNK_00123498;
                     local_e8 = __LC12;
                     uStack_e0 = _UNK_001234a8;
                     local_d8 = __LC13;
                     uStack_d0 = _UNK_001234b8;
                     local_c8 = __LC14;
                     uStack_c0 = _UNK_001234c8;
                     local_b8 = __LC15;
                     uStack_b0 = _UNK_001234d8;
                     local_a8 = __LC16;
                     uStack_a0 = _UNK_001234e8;
                     local_98 = __LC17;
                     uStack_90 = _UNK_001234f8;
                     local_88 = __LC18;
                     uStack_80 = _UNK_00123508;
                     local_78 = __LC19;
                     uStack_70 = _UNK_00123518;
                     local_68 = __LC20;
                     uStack_60 = (undefined1)_UNK_00123528;
                     uStack_5f = (undefined7)_LC21._0_8_;
                     cStack_58 = SUB81(_LC21._0_8_, 7);
                     for (int i = 0; i < 8; i++) {
                        acStack_57[i] = _LC21[( i + 8 )];
                     }

                  }
 else {
                     if (uVar9 < 1000) {
                        uVar8 = 2;
                        iVar4 = 3;
                        LAB_00101030:cVar11 = (char)iVar4 - cVar11;
                     }
 else {
                        if (uVar9 < 10000) {
                           uVar8 = 3;
                           iVar4 = 4;
                           goto LAB_00101030;
                        }

                        iVar4 = 5;
                        if (uVar9 < 100000) {
                           LAB_0010102d:uVar8 = iVar4 - 1;
                           goto LAB_00101030;
                        }

                        if (999999 < uVar9) {
                           uVar8 = 6;
                           iVar4 = 7;
                           if (9999999 < uVar9) {
                              if (99999999 < uVar9) {
                                 if ((ulong)uVar9 < 1000000000) {
                                    iVar4 = 9;
                                    goto LAB_0010102d;
                                 }

                                 uVar8 = 9;
                                 goto LAB_00100dc6;
                              }

                              uVar8 = 7;
                              iVar4 = 8;
                           }

                           goto LAB_00101030;
                        }

                        uVar8 = 5;
                        LAB_00100dc6:cVar11 = ( (char)uVar8 + '\x01' ) - cVar11;
                     }

                     local_138 = local_128;
                     std::__cxx11::string::_M_construct(( ulong ) & local_138, cVar11);
                     pcVar14 = local_138 + uVar13;
                     local_118 = __LC9;
                     uStack_110 = _UNK_00123478;
                     local_108 = __LC10;
                     uStack_100 = _UNK_00123488;
                     local_f8 = __LC11;
                     uStack_f0 = _UNK_00123498;
                     local_e8 = __LC12;
                     uStack_e0 = _UNK_001234a8;
                     local_d8 = __LC13;
                     uStack_d0 = _UNK_001234b8;
                     local_c8 = __LC14;
                     uStack_c0 = _UNK_001234c8;
                     local_b8 = __LC15;
                     uStack_b0 = _UNK_001234d8;
                     local_a8 = __LC16;
                     uStack_a0 = _UNK_001234e8;
                     local_98 = __LC17;
                     uStack_90 = _UNK_001234f8;
                     local_88 = __LC18;
                     uStack_80 = _UNK_00123508;
                     local_78 = __LC19;
                     uStack_70 = _UNK_00123518;
                     local_68 = __LC20;
                     uStack_60 = (undefined1)_UNK_00123528;
                     uStack_5f = (undefined7)_LC21._0_8_;
                     cStack_58 = SUB81(_LC21._0_8_, 7);
                     for (int i = 0; i < 8; i++) {
                        acStack_57[i] = _LC21[( i + 8 )];
                     }

                     uVar12 = (ulong)uVar9;
                     do {
                        uVar9 = ( uint )(uVar12 / 100);
                        uVar6 = (uint)uVar12;
                        uVar13 = ( uVar6 + uVar9 * -100 ) * 2;
                        cVar11 = *(char*)( (long)&local_118 + (ulong)uVar13 );
                        pcVar14[uVar8] = *(char*)( (long)&local_118 + ( ulong )(uVar13 + 1) );
                        uVar13 = uVar8 - 1;
                        uVar8 = uVar8 - 2;
                        pcVar14[uVar13] = cVar11;
                        uVar12 = uVar12 / 100;
                     }
 while ( 9999 < uVar6 );
                     if (uVar6 < 1000) goto LAB_00100f0f;
                  }

                  cVar11 = *(char*)( (long)&local_118 + ( ulong )(uVar9 * 2) );
                  pcVar14[1] = *(char*)( (long)&local_118 + ( ulong )(uVar9 * 2 + 1) );
               }

               *pcVar14 = cVar11;
               if (0x3fffffffffffffffU - *(long*)( *(char**)( param_1 + 8 ) + 8 ) < local_130) {
                  /* WARNING: Subroutine does not return */
                  std::__throw_length_error("basic_string::append");
               }

               std::__cxx11::string::_M_append(*(char**)( param_1 + 8 ), (ulong)local_138);
               std::__cxx11::string::_M_dispose();
               if (pcVar2 == (char*)0x0) {
                  if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return;
                  }

               }
 else {
                  std::__cxx11::string::push_back((char)*(undefined8*)( param_1 + 8 ));
                  if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     __cxx11::string::append(*(string**)( param_1 + 8 ), pcVar2);
                     return;
                  }

               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* std::_Function_handler<void (int, int, bool, int, char const*), (anonymous
   namespace)::DoPreprocessing::operator()(glslang::TParseContextBase&, glslang::TPpContext&,
   glslang::TInputScanner&, bool, glslang::TSymbolTable&, glslang::TIntermediate&,
   EShOptimizationLevel, EShMessages)::{lambda(int, int, bool, int, char
   const*)#1}>::_M_invoke(std::_Any_data const&, int&&, int&&, bool&&, int&&, char const*&&) */
            void std::_Function_handler<void(int, int, bool, int, char_const *),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, int, bool, int, char_const *)#1}>::_M_invoke(_Any_data *param_1, int *param_2, int *param_3, bool *param_4, int *param_5, char **param_6) {
               bool bVar1;
               int iVar2;
               uint uVar3;
               int iVar4;
               long *plVar5;
               char *pcVar6;
               long lVar7;
               long *plVar8;
               ulong uVar9;
               char cVar10;
               int iVar11;
               undefined4 uVar12;
               ulong uVar13;
               long *plVar14;
               long in_FS_OFFSET;
               ulong local_88;
               ulong local_80;
               ulong local_68;
               ulong local_60;
               long local_40;
               plVar5 = *(long**)param_1;
               iVar2 = *param_3;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               pcVar6 = *param_6;
               uVar3 = *param_2;
               lVar7 = *plVar5;
               iVar4 = *param_5;
               bVar1 = *param_4;
               if (*(long*)( lVar7 + 0x10 ) != 0) {
                  iVar11 = ( **(code**)( lVar7 + 0x18 ) )(lVar7);
                  if (*(int*)( lVar7 + 0x28 ) == iVar11) {
                     iVar11 = *(int*)( lVar7 + 0x2c );
                     goto LAB_0010138d;
                  }

                  if (*(long*)( lVar7 + 0x28 ) != 0xffffffff) {
                     std::__cxx11::string::push_back((char)*(undefined8*)( lVar7 + 0x20 ));
                  }

                  if (*(long*)( lVar7 + 0x10 ) != 0) {
                     uVar12 = ( **(code**)( lVar7 + 0x18 ) )(lVar7);
                     *(undefined4*)( lVar7 + 0x2c ) = 0xffffffff;
                     *(undefined4*)( lVar7 + 0x28 ) = uVar12;
                     iVar11 = -1;
                     if (uVar3 < 0x80000000) {
                        do {
                           if (0 < iVar11) {
                              plVar8 = *(long**)( lVar7 + 0x20 );
                              uVar9 = plVar8[1];
                              plVar14 = (long*)*plVar8;
                              if (plVar14 == plVar8 + 2) {
                                 uVar13 = 0xf;
                              }
 else {
                                 uVar13 = plVar8[2];
                              }

                              if (uVar13 < uVar9 + 1) {
                                 std::__cxx11::string::_M_mutate((ulong)plVar8, uVar9, (char*)0x0, 0);
                                 plVar14 = (long*)*plVar8;
                              }

                              *(undefined1*)( (long)plVar14 + uVar9 ) = 10;
                              plVar8[1] = uVar9 + 1;
                              *(undefined1*)( *plVar8 + 1 + uVar9 ) = 0;
                           }

                           iVar11 = *(int*)( lVar7 + 0x2c ) + 1;
                           *(int*)( lVar7 + 0x2c ) = iVar11;
                           LAB_0010138d:;
                        }
 while ( iVar11 < (int)uVar3 );
                     }

                     __cxx11::string::append((string*)plVar5[1], "#line ");
                     __cxx11::to_string((__cxx11*)&local_68, iVar2);
                     if (local_60 <= 0x3fffffffffffffffU - *(long*)( (char*)plVar5[1] + 8 )) {
                        std::__cxx11::string::_M_append((char*)plVar5[1], local_68);
                        std::__cxx11::string::_M_dispose();
                        if (bVar1 != false) {
                           std::__cxx11::string::push_back((char)plVar5[1]);
                           if (pcVar6 == (char*)0x0) {
                              __cxx11::to_string((__cxx11*)&local_88, iVar4);
                              if (0x3fffffffffffffffU - *(long*)( (char*)plVar5[1] + 8 ) < local_80) goto LAB_00101497;
                              std::__cxx11::string::_M_append((char*)plVar5[1], local_88);
                              std::__cxx11::string::_M_dispose();
                           }
 else {
                              std::__cxx11::string::push_back((char)plVar5[1]);
                              __cxx11::string::append((string*)plVar5[1], pcVar6);
                              std::__cxx11::string::push_back((char)plVar5[1]);
                           }

                        }

                        cVar10 = ( **(code**)( *(long*)plVar5[2] + 0x1b8 ) )();
                        std::__cxx11::string::push_back((char)plVar5[1]);
                        *(uint*)( *plVar5 + 0x2c ) = iVar2 + ( uint )(cVar10 == '\0');
                        if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                           return;
                        }

                        /* WARNING: Subroutine does not return */
                        __stack_chk_fail();
                     }

                     LAB_00101497:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::append");
                  }

               }

               /* WARNING: Subroutine does not return */
               std::__throw_bad_function_call();
            }

            /* (anonymous namespace)::DeduceVersionProfile(TInfoSink&, EShLanguage, bool, int,
   glslang::EShSource, int&, EProfile&, glslang::SpvVersion const&) [clone .constprop.0] */
            ulong(anonymous_namespace) {
               int iVar1;
               int iVar2;
               ulong uVar3;
               undefined8 unaff_R12;
               ulong uVar4;
               bool bVar5;
               iVar1 = *param_5;
               if (*param_5 == 0) {
                  *param_5 = param_4;
                  iVar1 = param_4;
               }

               iVar2 = *param_6;
               if (iVar2 != 1) {
                  if (iVar1 < 0x96) {
                     glslang::TInfoSinkBase::message(param_1, 2, "#version: versions before 150 do not allow a profile token");
                     iVar1 = *param_5;
                     if (iVar1 != 100) {
                        *param_6 = 1;
                        uVar4 = 0;
                        goto joined_r0x00101629;
                     }

                     uVar4 = 0;
                     goto LAB_00101666;
                  }

                  uVar3 = ( ulong )(iVar1 - 300U);
                  if (iVar1 - 300U < 0x15) {
                     bVar5 = ( 0x100401UL >> ( uVar3 & 0x3f ) & 1 ) != 0;
                     uVar4 = CONCAT71(( int7 )((ulong)unaff_R12 >> 8), bVar5);
                     if (!bVar5) {
                        if (iVar2 != 8) goto LAB_00101699;
                        goto LAB_00101a90;
                     }

                     if (iVar2 != 8) {
                        uVar4 = 0;
                        glslang::TInfoSinkBase::message(param_1, 2, "#version: versions 300, 310, and 320 support only the es profile");
                        iVar1 = *param_5;
                        *param_6 = 8;
                        goto joined_r0x00101629;
                     }

                     LAB_00101630:uVar3 = ( ulong )(iVar1 - 300);
                     if (299 < iVar1) goto LAB_0010169f;
                  }
 else {
                     if (iVar2 != 8) goto LAB_00101971;
                     LAB_00101a90:glslang::TInfoSinkBase::message(param_1, 2, "#version: only version 300, 310, and 320 support the es profile");
                     iVar1 = *param_5;
                     if (0x95 < iVar1) {
                        *param_6 = 2;
                        uVar4 = 0;
                        goto joined_r0x00101629;
                     }

                     *param_6 = 1;
                     uVar4 = 0;
                  }

                  LAB_0010163d:if (( 0x32 < iVar1 - 100U ) || ( ( 0x4010040100401U >> ( ( ulong )(iVar1 - 100U) & 0x3f ) & 1 ) == 0 )) {
                     LAB_001016ae:glslang::TInfoSinkBase::message(param_1, 2, "version not supported");
                     if (*param_6 == 8) {
                        *param_5 = 0x136;
                        switch (param_2) {
                           default:
          iVar1 = 0x136;
          uVar4 = 0;
          goto LAB_00101817;
                           case 6:
                           case 7:
                           case 8:
                           case 9:
                           case 10:
                           case 0xb:
          goto switchD_001016f8_caseD_6;
                           case 0xc:
                           case 0xd:
          goto switchD_0010195e_caseD_c;
                        }

                     }

                     *param_5 = 0x1c2;
                     *param_6 = 2;
                     switch (param_2) {
                        default:
        goto switchD_001016f8_caseD_0;
                        case 6:
                        case 7:
                        case 8:
                        case 9:
                        case 10:
                        case 0xb:
        goto switchD_001016f8_caseD_6;
                     }

                  }

                  LAB_001015cf:iVar2 = *param_6;
                  switch (param_2) {
                     default:
      goto switchD_001015ea_caseD_0;
                     case 1:
                     case 2:
      iVar1 = *param_5;
      if (iVar2 == 8) goto LAB_001019ca;
      if (iVar1 < 0x96) goto LAB_001018a6;
      break;
                     case 3:
      iVar1 = *param_5;
      if (iVar2 == 8) goto LAB_00101a3a;
      if (iVar1 < 0x96) goto LAB_00101712;
      break;
                     case 5:
      iVar1 = *param_5;
      if (iVar2 == 8) goto LAB_00101a22;
      if (iVar1 < 0x1a4) goto LAB_001018f6;
      break;
                     case 6:
                     case 7:
                     case 8:
                     case 9:
                     case 10:
                     case 0xb:
      if ((iVar2 == 8) || (*param_5 < 0x1cc)) goto switchD_001016f8_caseD_6;
      break;
                     case 0xc:
                     case 0xd:
      iVar1 = *param_5;
      if (iVar2 == 8) goto LAB_001019b2;
      if (iVar1 < 0x1c2) goto switchD_0010195e_caseD_c;
                  }

                  goto LAB_00101753;
               }

               if (iVar1 != 100) {
                  uVar3 = ( ulong )(iVar1 - 300U);
                  if (iVar1 - 300U < 0x15) {
                     if (( 0x100401UL >> ( uVar3 & 0x3f ) & 1 ) != 0) {
                        uVar4 = 0;
                        glslang::TInfoSinkBase::message(param_1, 2, "#version: versions 300, 310, and 320 require specifying the \'es\' profile");
                        *param_6 = 8;
                        iVar1 = *param_5;
                        goto joined_r0x00101629;
                     }

                     *param_6 = 2;
                     LAB_00101699:uVar4 = 1;
                     LAB_0010169f:uVar3 = 0x40100401L >> ( uVar3 & 0x3f );
                     joined_r0x001016a8:if (( uVar3 & 1 ) != 0) goto LAB_001015cf;
                  }
 else {
                     uVar4 = 1;
                     if (iVar1 < 0x96) goto LAB_0010163d;
                     *param_6 = 2;
                     LAB_00101971:uVar4 = 1;
                     joined_r0x00101629:if (iVar1 < 0x14b) goto LAB_00101630;
                     if (iVar1 - 400U < 0x3d) {
                        uVar3 = 0x1004010040100401 >> ( ( ulong )(iVar1 - 400U) & 0x3f );
                        goto joined_r0x001016a8;
                     }

                  }

                  goto LAB_001016ae;
               }

               uVar4 = 1;
               LAB_00101666:*param_6 = 8;
               switch (param_2) {
                  default:
    goto switchD_00101685_caseD_0;
                  case 1:
                  case 2:
    iVar1 = *param_5;
LAB_001019ca:
    if (iVar1 < 0x136) {
LAB_001018a6:
      glslang::TInfoSinkBase::message
                (param_1,2,
                 "#version: tessellation shaders require es profile with version 310 or non-es profile with version 150 or above"
                );
      iVar1 = *param_6;
      if (iVar1 == 8) {
LAB_001019f0:
        *param_5 = 0x136;
        goto LAB_00101740;
      }
      *param_5 = 400;
      if (iVar1 == 1) goto LAB_00101740;
      break;
    }
    goto LAB_00101817;
                  case 3:
    iVar1 = *param_5;
LAB_00101a3a:
    if (0x135 < iVar1) goto LAB_00101817;
LAB_00101712:
    glslang::TInfoSinkBase::message
              (param_1,2,
               "#version: geometry shaders require es profile with version 310 or non-es profile with version 150 or above"
              );
    iVar1 = *param_6;
    if (iVar1 == 8) goto LAB_001019f0;
    *param_5 = 0x96;
    if (iVar1 != 1) break;
LAB_00101740:
    *param_6 = 2;
    break;
                  case 5:
    iVar1 = *param_5;
LAB_00101a22:
    if (0x135 < iVar1) goto LAB_00101817;
LAB_001018f6:
    glslang::TInfoSinkBase::message
              (param_1,2,
               "#version: compute shaders require es profile with version 310 or above, or non-es profile with version 420 or above"
              );
    if (*param_6 != 8) {
      *param_5 = 0x1a4;
      break;
    }
    *param_5 = 0x136;
LAB_00101a06:
    uVar4 = 0;
    goto switchD_00101685_caseD_0;
                  case 6:
                  case 7:
                  case 8:
                  case 9:
                  case 10:
                  case 0xb:
    goto switchD_001016f8_caseD_6;
                  case 0xc:
                  case 0xd:
    iVar1 = *param_5;
LAB_001019b2:
    if (0x13f < iVar1) goto LAB_00101817;
switchD_0010195e_caseD_c:
    glslang::TInfoSinkBase::message
              (param_1,2,
               "#version: mesh/task shaders require es profile with version 320 or above, or non-es profile with version 450 or above"
              );
    if (*param_6 == 8) {
      *param_5 = 0x140;
      goto LAB_00101a06;
    }
    *param_5 = 0x1c2;
               }

               switchD_001016f8_caseD_0:uVar4 = 0;
               LAB_00101753:if (*param_7 == 0) goto LAB_00101836;
               if (*param_6 == 4) {
                  glslang::TInfoSinkBase::message(param_1, 2, "#version: compilation for SPIR-V does not support the compatibility profile");
                  goto LAB_00101836;
               }

               if (*param_6 == 8) {
                  iVar1 = *param_5;
                  LAB_0010182b:if (0x135 < iVar1) goto LAB_00101836;
                  glslang::TInfoSinkBase::message(param_1, 2, "#version: ES shaders for SPIR-V require version 310 or higher");
                  *param_5 = 0x136;
               }
 else {
                  if (( param_7[2] < 1 ) || ( 0x8b < *param_5 )) {
                     if (( param_7[3] < 100 ) || ( 0x149 < *param_5 )) goto LAB_00101836;
                  }
 else {
                     glslang::TInfoSinkBase::message(param_1, 2, "#version: Desktop shaders for Vulkan SPIR-V require version 140 or higher");
                     *param_5 = 0x8c;
                     if (param_7[3] < 100) goto LAB_001017c4;
                  }

                  glslang::TInfoSinkBase::message(param_1, 2, "#version: Desktop shaders for OpenGL SPIR-V require version 330 or higher");
                  *param_5 = 0x14a;
               }

               LAB_001017c4:uVar4 = 0;
               LAB_00101836:return uVar4 & 0xffffffff;
               switchD_001016f8_caseD_6:uVar4 = 0;
               glslang::TInfoSinkBase::message(param_1, 2, "#version: ray tracing shaders require non-es profile with version 460 or above");
               *param_5 = 0x1cc;
               iVar2 = *param_6;
               switchD_001015ea_caseD_0:if (iVar2 == 8) goto switchD_00101685_caseD_0;
               goto LAB_00101753;
               switchD_00101685_caseD_0:iVar1 = *param_5;
               param_3 = 299 < iVar1 & param_3;
               LAB_00101817:if (param_3 != 0) {
                  glslang::TInfoSinkBase::message(param_1, 2, "#version: statement must appear first in es-profile shader; before comments or newlines");
                  goto switchD_001016f8_caseD_0;
               }

               if (*param_7 == 0) goto LAB_00101836;
               goto LAB_0010182b;
            }

            /* glslang::TShader::~TShader() */
            void glslang::TShader::~TShader(TShader *this) {
               void *pvVar1;
               TIntermediate *this_00;
               TPoolAllocator *this_01;
               pvVar1 = *(void**)( this + 0x28 );
               *(undefined***)this = &PTR__TShader_00123400;
               if (pvVar1 != (void*)0x0) {
                  std::__cxx11::string::_M_dispose();
                  std::__cxx11::string::_M_dispose();
                  operator_delete(pvVar1, 0x60);
               }

               if (*(long**)( this + 0x18 ) != (long*)0x0) {
                  ( **(code**)( **(long**)( this + 0x18 ) + 8 ) )();
               }

               this_00 = *(TIntermediate**)( this + 0x20 );
               if (this_00 != (TIntermediate*)0x0) {
                  TIntermediate::~TIntermediate(this_00);
                  operator_delete(this_00, 0x7e8);
               }

               this_01 = *(TPoolAllocator**)( this + 8 );
               if (this_01 != (TPoolAllocator*)0x0) {
                  glslang::TPoolAllocator::~TPoolAllocator(this_01);
                  operator_delete(this_01, 0x60);
               }

               std::__cxx11::string::_M_dispose();
               return;
            }

            /* glslang::TShader::~TShader() */
            void glslang::TShader::~TShader(TShader *this) {
               ~TShader(this)
               ;;
               operator_delete(this, 0xa8);
               return;
            }

            /* glslang::TProgram::~TProgram() */
            void glslang::TProgram::~TProgram(TProgram *this) {
               void *pvVar1;
               TReflection *this_00;
               TIntermediate *this_01;
               TPoolAllocator *this_02;
               TProgram *pTVar2;
               TProgram *pTVar3;
               long lVar4;
               TProgram *pTVar5;
               pvVar1 = *(void**)( this + 0x1e0 );
               *(undefined***)this = &PTR__TProgram_00123420;
               if (pvVar1 != (void*)0x0) {
                  std::__cxx11::string::_M_dispose();
                  std::__cxx11::string::_M_dispose();
                  operator_delete(pvVar1, 0x60);
               }

               this_00 = *(TReflection**)( this + 0x1e8 );
               if (this_00 != (TReflection*)0x0) {
                  if (*(code**)( *(long*)this_00 + 8 ) == TReflection::~TReflection) {
                     TReflection::~TReflection(this_00);
                     operator_delete(this_00, 0x1b0);
                  }
 else {
                     ( **(code**)( *(long*)this_00 + 8 ) )();
                  }

               }

               lVar4 = 0;
               do {
                  if (( this[lVar4 + 0x1d0] != (TProgram)0x0 ) && ( this_01 = *(TIntermediate**)( this + lVar4 * 8 + 0x160 ) ),this_01 != (TIntermediate*)0x0) {
                     TIntermediate::~TIntermediate(this_01);
                     operator_delete(this_01, 0x7e8);
                  }

                  lVar4 = lVar4 + 1;
               }
 while ( lVar4 != 0xe );
               this_02 = *(TPoolAllocator**)( this + 8 );
               if (this_02 != (TPoolAllocator*)0x0) {
                  glslang::TPoolAllocator::~TPoolAllocator(this_02);
                  operator_delete(this_02, 0x60);
               }

               pTVar5 = this + 0x148;
               do {
                  pTVar3 = *(TProgram**)pTVar5;
                  while (pTVar5 != pTVar3) {
                     pTVar2 = *(TProgram**)pTVar3;
                     operator_delete(pTVar3, 0x18);
                     pTVar3 = pTVar2;
                  }
;
                  pTVar5 = pTVar5 + -0x18;
               }
 while ( this + -8 != pTVar5 );
               return;
            }

            /* glslang::TProgram::~TProgram() */
            void glslang::TProgram::~TProgram(TProgram *this) {
               ~TProgram(this)
               ;;
               operator_delete(this, 0x1f8);
               return;
            }

            undefined8 ShInitialize(void) {
               int iVar1;
               TPoolAllocator *this;
               undefined8 uVar2;
               iVar1 = pthread_mutex_lock((pthread_mutex_t*)(anonymous_namespace)::init_lock);
               if (iVar1 == 0) {
                  (anonymous_namespace)::NumberOfClients = (anonymous_namespace)::NumberOfClients + 1;
                  if ((anonymous_namespace)::PerProcessGPA == (TPoolAllocator*)0x0) {
                     this(TPoolAllocator * operator_new(0x60));
                     glslang::TPoolAllocator::TPoolAllocator(this, 0x2000, 0x10);
                     (anonymous_namespace)::PerProcessGPA = this;
                  }

                  glslang::TScanContext::fillInKeywordMap();
                  pthread_mutex_unlock((pthread_mutex_t*)(anonymous_namespace)::init_lock);
                  return 1;
               }

               std::__throw_system_error(iVar1);
               uVar2 = ConstructCompiler();
               return uVar2;
            }

            void ShConstructCompiler(undefined8 param_1) {
               ConstructCompiler(param_1, 0);
               return;
            }

            void ShConstructLinker(undefined8 param_1) {
               ConstructLinker(param_1, 0);
               return;
            }

            /* WARNING: Unknown calling convention -- yet parameter storage is locked */
            void ShConstructUniformMap(void) {
               ConstructUniformMap();
               return;
            }

            void ShDestruct(long *param_1) {
               long lVar1;
               TCompiler *pTVar2;
               TShHandleBase *pTVar3;
               TUniformMap *pTVar4;
               if (param_1 == (long*)0x0) {
                  return;
               }

               lVar1 = ( **(code**)( *param_1 + 0x10 ) )();
               if (lVar1 != 0) {
                  pTVar2 = (TCompiler*)( **(code**)( *param_1 + 0x10 ) )();
                  DeleteCompiler(pTVar2);
                  return;
               }

               lVar1 = ( **(code**)( *param_1 + 0x18 ) )(param_1);
               if (lVar1 != 0) {
                  pTVar3 = (TShHandleBase*)( **(code**)( *param_1 + 0x18 ) )();
                  DeleteLinker(pTVar3);
                  return;
               }

               lVar1 = ( **(code**)( *param_1 + 0x20 ) )(param_1);
               if (lVar1 != 0) {
                  pTVar4 = (TUniformMap*)( **(code**)( *param_1 + 0x20 ) )(param_1);
                  DeleteUniformMap(pTVar4);
                  return;
               }

               return;
            }

            undefined8 ShFinalize(void) {
               bool bVar1;
               TPoolAllocator *pTVar2;
               int iVar3;
               long lVar4;
               long lVar5;
               long lVar6;
               undefined8 uVar7;
               uint uVar8;
               ulong uVar9;
               long lVar10;
               long *plVar11;
               long *plVar12;
               ulong uVar13;
               void *pvVar14;
               ulong uVar15;
               long *plVar16;
               long lVar17;
               long lVar18;
               long *plVar19;
               undefined8 *puVar20;
               undefined8 *puVar21;
               iVar3 = pthread_mutex_lock((pthread_mutex_t*)(anonymous_namespace)::init_lock);
               if (iVar3 != 0) {
                  uVar7 = std::__throw_system_error(iVar3);
                  return uVar7;
               }

               lVar10 = 0;
               (anonymous_namespace)::NumberOfClients = (anonymous_namespace)::NumberOfClients + -1;
               if ((anonymous_namespace)::NumberOfClients < 1) {
                  do {
                     lVar18 = 0;
                     lVar5 = lVar10;
                     do {
                        lVar17 = 0;
                        do {
                           puVar21 = (undefined8*)( lVar5 + 0x10a290 + lVar17 );
                           iVar3 = 2;
                           while (true) {
                              puVar20 = puVar21 + -0xe;
                              do {
                                 plVar11 = (long*)*puVar20;
                                 if (plVar11 != (long*)0x0) {
                                    lVar4 = plVar11[1];
                                    pvVar14 = (void*)*plVar11;
                                    uVar15 = ( ulong ) * (uint*)( (long)plVar11 + 0x24 );
                                    if (uVar15 < ( ulong )(lVar4 - (long)pvVar14 >> 3)) {
                                       do {
                                          if (*(TSymbolTableLevel**)( lVar4 + -8 ) != (TSymbolTableLevel*)0x0) {
                                             glslang::TSymbolTableLevel::~TSymbolTableLevel(*(TSymbolTableLevel**)( lVar4 + -8 ));
                                             pvVar14 = (void*)*plVar11;
                                             uVar15 = ( ulong ) * (uint*)( (long)plVar11 + 0x24 );
                                          }

                                          lVar4 = plVar11[1] + -8;
                                          plVar11[1] = lVar4;
                                          uVar9 = lVar4 - (long)pvVar14 >> 3;
                                          uVar8 = (int)uVar9 - 1;
                                          uVar13 = (ulong)uVar8 << 0x38;
                                          if (0x7f < uVar8) {
                                             uVar13 = 0x7f00000000000000;
                                          }

                                          plVar11[3] = plVar11[3] & 0xffffffffffffffU | uVar13;
                                       }
 while ( uVar15 < uVar9 );
                                    }

                                    if (pvVar14 != (void*)0x0) {
                                       operator_delete(pvVar14, plVar11[2] - (long)pvVar14);
                                    }

                                    operator_delete(plVar11, 0x28);
                                 }

                                 *puVar20 = 0;
                                 puVar20 = puVar20 + 1;
                              }
 while ( puVar20 != puVar21 );
                              puVar21 = puVar21 + 0xe;
                              if (iVar3 == 1) break;
                              iVar3 = 1;
                           }
;
                           lVar17 = lVar17 + 0xe0;
                        }
 while ( lVar17 != 0x380 );
                        lVar18 = lVar18 + 1;
                        lVar5 = lVar5 + 0x380;
                     }
 while ( lVar18 != 4 );
                     lVar10 = lVar10 + 0xe00;
                  }
 while ( lVar10 != 0xee00 );
                  lVar10 = 0;
                  LAB_0010203c:lVar18 = lVar10 * 4;
                  lVar10 = lVar10 + 4;
                  lVar5 = lVar18 + 0x10;
                  LAB_0010205b:lVar4 = lVar18 * 2;
                  lVar18 = lVar18 + 4;
                  lVar17 = lVar4 + 8;
                  LAB_0010207a:iVar3 = 2;
                  plVar11 = &(anonymous_namespace)::CommonSymbolTable + lVar4 * 2;
                  do {
                     plVar19 = (long*)*plVar11;
                     bVar1 = false;
                     plVar12 = plVar11;
                     plVar16 = plVar11;
                     if (plVar19 == (long*)0x0) goto LAB_00102144;
                     do {
                        lVar6 = plVar19[1];
                        pvVar14 = (void*)*plVar19;
                        uVar15 = ( ulong ) * (uint*)( (long)plVar19 + 0x24 );
                        if (uVar15 < ( ulong )(lVar6 - (long)pvVar14 >> 3)) {
                           do {
                              if (*(TSymbolTableLevel**)( lVar6 + -8 ) != (TSymbolTableLevel*)0x0) {
                                 glslang::TSymbolTableLevel::~TSymbolTableLevel(*(TSymbolTableLevel**)( lVar6 + -8 ));
                                 pvVar14 = (void*)*plVar19;
                                 uVar15 = ( ulong ) * (uint*)( (long)plVar19 + 0x24 );
                              }

                              lVar6 = plVar19[1] + -8;
                              plVar19[1] = lVar6;
                              uVar9 = lVar6 - (long)pvVar14 >> 3;
                              uVar8 = (int)uVar9 - 1;
                              uVar13 = (ulong)uVar8 << 0x38;
                              if (0x7f < uVar8) {
                                 uVar13 = 0x7f00000000000000;
                              }

                              plVar19[3] = plVar19[3] & 0xffffffffffffffU | uVar13;
                           }
 while ( uVar15 < uVar9 );
                        }

                        if (pvVar14 != (void*)0x0) {
                           operator_delete(pvVar14, plVar19[2] - (long)pvVar14);
                        }

                        operator_delete(plVar19, 0x28);
                        plVar16 = plVar12;
                        LAB_00102144:plVar12 = plVar16 + 1;
                        *plVar16 = 0;
                        pTVar2 = (anonymous_namespace)::PerProcessGPA;
                        if (bVar1) break;
                        plVar19 = (long*)*plVar12;
                        bVar1 = true;
                     }
 while ( plVar19 != (long*)0x0 );
                     plVar11 = plVar11 + 2;
                     if (iVar3 == 1) goto LAB_00102187;
                     iVar3 = 1;
                  }
 while ( true );
               }

               LAB_001021f1:pthread_mutex_unlock((pthread_mutex_t*)(anonymous_namespace)::init_lock);
               return 1;
               LAB_00102187:lVar4 = lVar4 + 2;
               if (lVar4 == lVar17) goto code_r0x0010219e;
               goto LAB_0010207a;
               code_r0x0010219e:if (lVar18 == lVar5) goto code_r0x001021b1;
               goto LAB_0010205b;
               code_r0x001021b1:if (lVar10 == 0x44) goto code_r0x001021c0;
               goto LAB_0010203c;
               code_r0x001021c0:if ((anonymous_namespace)::PerProcessGPA != (TPoolAllocator*)0x0) {
                  glslang::TPoolAllocator::~TPoolAllocator((anonymous_namespace)::PerProcessGPA);
                  operator_delete(pTVar2, 0x60);
                  (anonymous_namespace)::PerProcessGPA = (TPoolAllocator*)0x0;
               }

               glslang::TScanContext::deleteKeywordMap();
               goto LAB_001021f1;
            }

            void ShSetEncryptionMethod(void) {
               return;
            }

            undefined8 ShGetInfoLog(long *param_1) {
               long lVar1;
               long *plVar2;
               char *pcVar3;
               code *pcVar4;
               if (param_1 == (long*)0x0) {
                  return 0;
               }

               lVar1 = ( **(code**)( *param_1 + 0x10 ) )();
               if (lVar1 == 0) {
                  lVar1 = ( **(code**)( *param_1 + 0x18 ) )(param_1);
                  if (lVar1 == 0) {
                     return 0;
                  }

                  plVar2 = (long*)( **(code**)( *param_1 + 0x18 ) )(param_1);
                  pcVar4 = *(code**)( *plVar2 + 0x70 );
                  if (pcVar4 != TLinker::getInfoSink) goto LAB_001022a7;
               }
 else {
                  plVar2 = (long*)( **(code**)( *param_1 + 0x10 ) )();
                  pcVar4 = *(code**)( *plVar2 + 0x30 );
                  if (pcVar4 != TCompiler::getInfoSink) {
                     LAB_001022a7:pcVar3 = (char*)( *pcVar4 )();
                     goto LAB_0010226b;
                  }

               }

               pcVar3 = (char*)plVar2[2];
               LAB_0010226b:glslang::TInfoSinkBase::append(pcVar3);
               return *(undefined8*)pcVar3;
            }

            undefined8 ShGetExecutable(long *param_1) {
               long *plVar1;
               undefined8 uVar2;
               if (param_1 == (long*)0x0) {
                  return 0;
               }

               plVar1 = (long*)( **(code**)( *param_1 + 0x18 ) )();
               if (( plVar1 != (long*)0x0 ) && ( *(code**)( *plVar1 + 0x68 ) != TLinker::getObjectCode )) {
                  /* WARNING: Could not recover jumptable at 0x001022fc. Too many branches */
                  /* WARNING: Treating indirect jump as call */
                  uVar2 = ( **(code**)( *plVar1 + 0x68 ) )(plVar1);
                  return uVar2;
               }

               return 0;
            }

            undefined8 ShSetVirtualAttributeBindings(long *param_1, long param_2) {
               long *plVar1;
               if (param_1 == (long*)0x0) {
                  return 0;
               }

               plVar1 = (long*)( **(code**)( *param_1 + 0x18 ) )();
               if (plVar1 != (long*)0x0) {
                  if (*(code**)( *plVar1 + 0x40 ) == TLinker::setAppAttributeBindings) {
                     plVar1[4] = param_2;
                  }
 else {
                     ( **(code**)( *plVar1 + 0x40 ) )(plVar1, param_2);
                  }

                  return 1;
               }

               return 0;
            }

            undefined8 ShSetFixedAttributeBindings(long *param_1, long param_2) {
               long *plVar1;
               if (param_1 == (long*)0x0) {
                  return 0;
               }

               plVar1 = (long*)( **(code**)( *param_1 + 0x18 ) )();
               if (plVar1 != (long*)0x0) {
                  if (*(code**)( *plVar1 + 0x48 ) == TLinker::setFixedAttributeBindings) {
                     plVar1[5] = param_2;
                  }
 else {
                     ( **(code**)( *plVar1 + 0x48 ) )(plVar1, param_2);
                  }

                  return 1;
               }

               return 0;
            }

            undefined8 ShExcludeAttributes(long *param_1, long param_2, undefined4 param_3) {
               long *plVar1;
               if (param_1 == (long*)0x0) {
                  return 0;
               }

               plVar1 = (long*)( **(code**)( *param_1 + 0x18 ) )();
               if (plVar1 != (long*)0x0) {
                  if (*(code**)( *plVar1 + 0x58 ) == TLinker::setExcludedAttributes) {
                     plVar1[6] = param_2;
                     *(undefined4*)( plVar1 + 7 ) = param_3;
                  }
 else {
                     ( **(code**)( *plVar1 + 0x58 ) )(plVar1, param_2, param_3);
                  }

                  return 1;
               }

               return 0;
            }

            undefined8 ShGetUniformLocation(long *param_1, undefined8 param_2) {
               long *plVar1;
               undefined8 uVar2;
               if (param_1 == (long*)0x0) {
                  return 0xffffffff;
               }

               plVar1 = (long*)( **(code**)( *param_1 + 0x20 ) )();
               if (plVar1 != (long*)0x0) {
                  /* WARNING: Could not recover jumptable at 0x00102476. Too many branches */
                  /* WARNING: Treating indirect jump as call */
                  uVar2 = ( **(code**)( *plVar1 + 0x30 ) )(plVar1, param_2);
                  return uVar2;
               }

               return 0xffffffff;
            }

            /* glslang::GetVersion() */
            glslang * __thiscallglslang::GetVersion(glslang * this);
            {
               undefined8 uVar1;
               uVar1 = _LC54;
               *(undefined4*)( this + 8 ) = 0;
               *(undefined**)( this + 0x10 ) = &_LC55;
               *(undefined8*)this = uVar1;
               return this;
            }

            /* glslang::GetEsslVersionString() */
            char *glslang::GetEsslVersionString(void) {
               return "OpenGL ES GLSL 3.20 glslang Khronos. 14.2.0";
            }

            /* glslang::GetGlslVersionString() */
            char *glslang::GetGlslVersionString(void) {
               return "4.60 glslang Khronos. 14.2.0";
            }

            /* glslang::GetKhronosToolId() */
            undefined8 glslang::GetKhronosToolId(void) {
               return 8;
            }

            /* glslang::InitializeProcess() */
            bool glslang::InitializeProcess(void) {
               int iVar1;
               iVar1 = ShInitialize();
               return iVar1 != 0;
            }

            /* glslang::FinalizeProcess() */
            void glslang::FinalizeProcess(void) {
               ShFinalize();
               return;
            }

            /* glslang::TShader::setStrings(char const* const*, int) */
            void glslang::TShader::setStrings(TShader *this, char **param_1, int param_2) {
               *(char***)( this + 0x30 ) = param_1;
               *(int*)( this + 0x48 ) = param_2;
               *(undefined8*)( this + 0x38 ) = 0;
               return;
            }

            /* glslang::TShader::setStringsWithLengths(char const* const*, int const*, int) */
            void glslang::TShader::setStringsWithLengths(TShader *this, char **param_1, int *param_2, int param_3) {
               *(char***)( this + 0x30 ) = param_1;
               *(int*)( this + 0x48 ) = param_3;
               *(int**)( this + 0x38 ) = param_2;
               return;
            }

            /* glslang::TShader::setStringsWithLengthsAndNames(char const* const*, int const*, char const*
   const*, int) */
            void glslang::TShader::setStringsWithLengthsAndNames(TShader *this, char **param_1, int *param_2, char **param_3, int param_4) {
               *(char***)( this + 0x30 ) = param_1;
               *(int*)( this + 0x48 ) = param_4;
               *(int**)( this + 0x38 ) = param_2;
               *(char***)( this + 0x40 ) = param_3;
               return;
            }

            /* glslang::TShader::setSourceEntryPoint(char const*) */
            void glslang::TShader::setSourceEntryPoint(TShader *this, char *param_1) {
               strlen(param_1);
               std::__cxx11::string::_M_replace(( ulong )(this + 0x58), 0, *(char**)( this + 0x60 ), (ulong)param_1);
               return;
            }

            /* glslang::TShader::setUniqueId(unsigned long long) */
            void glslang::TShader::setUniqueId(TShader *this, ulonglong param_1) {
               *(ulonglong*)( *(long*)( this + 0x20 ) + 0x298 ) = param_1;
               return;
            }

            /* glslang::TShader::setOverrideVersion(int) */
            void glslang::TShader::setOverrideVersion(TShader *this, int param_1) {
               *(int*)( this + 0x78 ) = param_1;
               return;
            }

            /* glslang::TShader::setDebugInfo(bool) */
            void glslang::TShader::setDebugInfo(TShader *this, bool param_1) {
               *(bool*)( *(long*)( this + 0x20 ) + 0x270 ) = param_1;
               return;
            }

            /* glslang::TShader::setEnhancedMsgs() */
            void glslang::TShader::setEnhancedMsgs(TShader *this) {
               *(undefined1*)( *(long*)( this + 0x20 ) + 0x26f ) = 1;
               return;
            }

            /* glslang::TShader::setNanMinMaxClamp(bool) */
            void glslang::TShader::setNanMinMaxClamp(TShader *this, bool param_1) {
               *(bool*)( *(long*)( this + 0x20 ) + 0x273 ) = param_1;
               return;
            }

            /* glslang::TShader::setUniformLocationBase(int) */
            void glslang::TShader::setUniformLocationBase(TShader *this, int param_1) {
               *(int*)( *(long*)( this + 0x20 ) + 0x5c0 ) = param_1;
               return;
            }

            /* glslang::TShader::setTextureSamplerTransformMode(EShTextureSamplerTransformMode) */
            void glslang::TShader::setTextureSamplerTransformMode(TShader *this, undefined4 param_2) {
               *(undefined4*)( *(long*)( this + 0x20 ) + 0x508 ) = param_2;
               return;
            }

            /* glslang::TShader::setGlobalUniformBlockName(char const*) */
            void glslang::TShader::setGlobalUniformBlockName(TShader *this, char *param_1) {
               long lVar1;
               uint uVar2;
               size_t sVar3;
               ulong uVar4;
               long *plVar5;
               long lVar6;
               uint uVar7;
               long in_FS_OFFSET;
               long *local_58;
               undefined8 local_50;
               long alStack_48[5];
               lVar1 = *(long*)( this + 0x20 );
               alStack_48[3] = *(long*)( in_FS_OFFSET + 0x28 );
               local_58 = alStack_48;
               if (param_1 == (char*)0x0) {
                  std::__throw_logic_error("basic_string: construction from null is not valid");
                  goto LAB_00102848;
               }

               sVar3 = strlen(param_1);
               std::__cxx11::string::_M_construct<char_const*>(&local_58, param_1, param_1 + sVar3);
               plVar5 = *(long**)( lVar1 + 0x2a0 );
               if (plVar5 == (long*)( lVar1 + 0x2b0 )) {
                  if (local_58 == alStack_48) goto LAB_00102718;
                  *(long**)( lVar1 + 0x2a0 ) = local_58;
                  *(ulong*)( lVar1 + 0x2a8 ) = local_50;
                  *(long*)( lVar1 + 0x2b0 ) = alStack_48[0];
                  local_58 = alStack_48;
               }
 else if (local_58 == alStack_48) {
                  LAB_00102718:if (&local_58 != (long**)( lVar1 + 0x2a0 )) {
                     if (local_50 != 0) {
                        if (local_50 == 1) {
                           *(undefined1*)plVar5 = (undefined1)alStack_48[0];
                           plVar5 = *(long**)( lVar1 + 0x2a0 );
                        }
 else {
                           uVar2 = (uint)local_50;
                           uVar4 = local_50 & 0xffffffff;
                           if (uVar2 < 8) {
                              if (( local_50 & 4 ) == 0) {
                                 if (uVar2 != 0) {
                                    *(undefined1*)plVar5 = (undefined1)alStack_48[0];
                                    if (( local_50 & 2 ) == 0) goto LAB_00102763;
                                    *(undefined2*)( (long)plVar5 + ( uVar4 - 2 ) ) = *(undefined2*)( (long)alStack_48 + ( uVar4 - 2 ) );
                                    plVar5 = *(long**)( lVar1 + 0x2a0 );
                                 }

                              }
 else {
                                 *(undefined4*)plVar5 = (undefined4)alStack_48[0];
                                 *(undefined4*)( (long)plVar5 + ( uVar4 - 4 ) ) = *(undefined4*)( (long)alStack_48 + ( uVar4 - 4 ) );
                                 plVar5 = *(long**)( lVar1 + 0x2a0 );
                              }

                           }
 else {
                              *plVar5 = alStack_48[0];
                              *(undefined8*)( (long)plVar5 + ( ( local_50 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)alStack_48 + ( ( local_50 & 0xffffffff ) - 8 ) );
                              lVar6 = (long)plVar5 - ( ( ulong )(plVar5 + 1) & 0xfffffffffffffff8 );
                              uVar2 = (int)lVar6 + uVar2 & 0xfffffff8;
                              if (7 < uVar2) {
                                 uVar4 = 0;
                                 do {
                                    uVar7 = (int)uVar4 + 8;
                                    *(undefined8*)( ( ( ulong )(plVar5 + 1) & 0xfffffffffffffff8 ) + uVar4 ) = *(undefined8*)( (long)alStack_48 + ( uVar4 - lVar6 ) );
                                    uVar4 = (ulong)uVar7;
                                 }
 while ( uVar7 < uVar2 );
                              }

                              LAB_00102763:plVar5 = *(long**)( lVar1 + 0x2a0 );
                           }

                        }

                     }

                     *(ulong*)( lVar1 + 0x2a8 ) = local_50;
                     *(undefined1*)( (long)plVar5 + local_50 ) = 0;
                  }

               }
 else {
                  lVar6 = *(long*)( lVar1 + 0x2b0 );
                  *(long**)( lVar1 + 0x2a0 ) = local_58;
                  *(ulong*)( lVar1 + 0x2a8 ) = local_50;
                  *(long*)( lVar1 + 0x2b0 ) = alStack_48[0];
                  local_58 = alStack_48;
                  if (plVar5 != (long*)0x0) {
                     local_58 = plVar5;
                     alStack_48[0] = lVar6;
                  }

               }

               local_50 = 0;
               *(undefined1*)local_58 = 0;
               std::__cxx11::string::_M_dispose();
               if (alStack_48[3] == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               LAB_00102848:/* WARNING: Subroutine does not return */__stack_chk_fail();
            }

            /* glslang::TShader::setGlobalUniformSet(unsigned int) */
            void glslang::TShader::setGlobalUniformSet(TShader *this, uint param_1) {
               *(uint*)( *(long*)( this + 0x20 ) + 0x2e0 ) = param_1;
               return;
            }

            /* glslang::TShader::setGlobalUniformBinding(unsigned int) */
            void glslang::TShader::setGlobalUniformBinding(TShader *this, uint param_1) {
               *(uint*)( *(long*)( this + 0x20 ) + 0x2e4 ) = param_1;
               return;
            }

            /* glslang::TShader::setAtomicCounterBlockName(char const*) */
            void glslang::TShader::setAtomicCounterBlockName(TShader *this, char *param_1) {
               long lVar1;
               uint uVar2;
               size_t sVar3;
               ulong uVar4;
               long *plVar5;
               long lVar6;
               uint uVar7;
               long in_FS_OFFSET;
               long *local_58;
               undefined8 local_50;
               long alStack_48[5];
               lVar1 = *(long*)( this + 0x20 );
               alStack_48[3] = *(long*)( in_FS_OFFSET + 0x28 );
               local_58 = alStack_48;
               if (param_1 == (char*)0x0) {
                  std::__throw_logic_error("basic_string: construction from null is not valid");
                  goto LAB_00102a98;
               }

               sVar3 = strlen(param_1);
               std::__cxx11::string::_M_construct<char_const*>(&local_58, param_1, param_1 + sVar3);
               plVar5 = *(long**)( lVar1 + 0x2c0 );
               if (plVar5 == (long*)( lVar1 + 0x2d0 )) {
                  if (local_58 == alStack_48) goto LAB_00102968;
                  *(long**)( lVar1 + 0x2c0 ) = local_58;
                  *(ulong*)( lVar1 + 0x2c8 ) = local_50;
                  *(long*)( lVar1 + 0x2d0 ) = alStack_48[0];
                  local_58 = alStack_48;
               }
 else if (local_58 == alStack_48) {
                  LAB_00102968:if (&local_58 != (long**)( lVar1 + 0x2c0 )) {
                     if (local_50 != 0) {
                        if (local_50 == 1) {
                           *(undefined1*)plVar5 = (undefined1)alStack_48[0];
                           plVar5 = *(long**)( lVar1 + 0x2c0 );
                        }
 else {
                           uVar2 = (uint)local_50;
                           uVar4 = local_50 & 0xffffffff;
                           if (uVar2 < 8) {
                              if (( local_50 & 4 ) == 0) {
                                 if (uVar2 != 0) {
                                    *(undefined1*)plVar5 = (undefined1)alStack_48[0];
                                    if (( local_50 & 2 ) == 0) goto LAB_001029b3;
                                    *(undefined2*)( (long)plVar5 + ( uVar4 - 2 ) ) = *(undefined2*)( (long)alStack_48 + ( uVar4 - 2 ) );
                                    plVar5 = *(long**)( lVar1 + 0x2c0 );
                                 }

                              }
 else {
                                 *(undefined4*)plVar5 = (undefined4)alStack_48[0];
                                 *(undefined4*)( (long)plVar5 + ( uVar4 - 4 ) ) = *(undefined4*)( (long)alStack_48 + ( uVar4 - 4 ) );
                                 plVar5 = *(long**)( lVar1 + 0x2c0 );
                              }

                           }
 else {
                              *plVar5 = alStack_48[0];
                              *(undefined8*)( (long)plVar5 + ( ( local_50 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)alStack_48 + ( ( local_50 & 0xffffffff ) - 8 ) );
                              lVar6 = (long)plVar5 - ( ( ulong )(plVar5 + 1) & 0xfffffffffffffff8 );
                              uVar2 = (int)lVar6 + uVar2 & 0xfffffff8;
                              if (7 < uVar2) {
                                 uVar4 = 0;
                                 do {
                                    uVar7 = (int)uVar4 + 8;
                                    *(undefined8*)( ( ( ulong )(plVar5 + 1) & 0xfffffffffffffff8 ) + uVar4 ) = *(undefined8*)( (long)alStack_48 + ( uVar4 - lVar6 ) );
                                    uVar4 = (ulong)uVar7;
                                 }
 while ( uVar7 < uVar2 );
                              }

                              LAB_001029b3:plVar5 = *(long**)( lVar1 + 0x2c0 );
                           }

                        }

                     }

                     *(ulong*)( lVar1 + 0x2c8 ) = local_50;
                     *(undefined1*)( (long)plVar5 + local_50 ) = 0;
                  }

               }
 else {
                  lVar6 = *(long*)( lVar1 + 0x2d0 );
                  *(long**)( lVar1 + 0x2c0 ) = local_58;
                  *(ulong*)( lVar1 + 0x2c8 ) = local_50;
                  *(long*)( lVar1 + 0x2d0 ) = alStack_48[0];
                  local_58 = alStack_48;
                  if (plVar5 != (long*)0x0) {
                     local_58 = plVar5;
                     alStack_48[0] = lVar6;
                  }

               }

               local_50 = 0;
               *(undefined1*)local_58 = 0;
               std::__cxx11::string::_M_dispose();
               if (alStack_48[3] == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               LAB_00102a98:/* WARNING: Subroutine does not return */__stack_chk_fail();
            }

            /* glslang::TShader::setAtomicCounterBlockSet(unsigned int) */
            void glslang::TShader::setAtomicCounterBlockSet(TShader *this, uint param_1) {
               *(uint*)( *(long*)( this + 0x20 ) + 0x2e8 ) = param_1;
               return;
            }

            /* glslang::TShader::getInfoLog() */
            undefined8 glslang::TShader::getInfoLog(TShader *this) {
               return **(undefined8**)( this + 0x28 );
            }

            /* glslang::TShader::getInfoDebugLog() */
            undefined8 glslang::TShader::getInfoDebugLog(TShader *this) {
               return *(undefined8*)( *(long*)( this + 0x28 ) + 0x30 );
            }

            /* glslang::TProgram::TProgram() */
            void glslang::TProgram::TProgram(TProgram *this) {
               TProgram *pTVar1;
               TProgram *pTVar2;
               TPoolAllocator *this_00;
               long *plVar3;
               ulong uVar4;
               undefined8 *puVar5;
               byte bVar6;
               bVar6 = 0;
               *(undefined***)this = &PTR__TProgram_00123420;
               pTVar1 = this + 0x10;
               do {
                  *(undefined8*)( pTVar1 + 0x10 ) = 0;
                  pTVar2 = pTVar1 + 0x18;
                  *(TProgram**)pTVar1 = pTVar1;
                  *(TProgram**)( pTVar1 + 8 ) = pTVar1;
                  pTVar1 = pTVar2;
               }
 while ( this + 0x160 != pTVar2 );
               *(undefined8*)( this + 0x1e8 ) = 0;
               this[0x1f0] = (TProgram)0x0;
               this_00 = (TPoolAllocator*)operator_new(0x60);
               glslang::TPoolAllocator::TPoolAllocator(this_00, 0x2000, 0x10);
               *(TPoolAllocator**)( this + 8 ) = this_00;
               plVar3 = (long*)operator_new(0x60);
               *(undefined1*)( plVar3 + 2 ) = 0;
               *plVar3 = (long)( plVar3 + 2 );
               plVar3[1] = 0;
               *(undefined4*)( plVar3 + 4 ) = 4;
               plVar3[5] = 0;
               plVar3[6] = (long)( plVar3 + 8 );
               plVar3[7] = 0;
               *(undefined1*)( plVar3 + 8 ) = 0;
               *(undefined4*)( plVar3 + 10 ) = 4;
               plVar3[0xb] = 0;
               *(long**)( this + 0x1e0 ) = plVar3;
               *(undefined8*)( this + 0x160 ) = 0;
               *(undefined8*)( this + 0x1d6 ) = 0;
               puVar5 = (undefined8*)( ( ulong )(this + 0x168) & 0xfffffffffffffff8 );
               for (uVar4 = ( ulong )(( (int)( this + 0x160 ) - (int)(undefined8*)( ( ulong )(this + 0x168) & 0xfffffffffffffff8 ) ) + 0x7eU >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
                  *puVar5 = 0;
                  puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
               }

               return;
            }

            /* glslang::TProgram::getInfoLog() */
            undefined8 glslang::TProgram::getInfoLog(TProgram *this) {
               return **(undefined8**)( this + 0x1e0 );
            }

            /* glslang::TProgram::getInfoDebugLog() */
            undefined8 glslang::TProgram::getInfoDebugLog(TProgram *this) {
               return *(undefined8*)( *(long*)( this + 0x1e0 ) + 0x30 );
            }

            /* glslang::TProgram::buildReflection(int) */
            TProgram glslang::TProgram::buildReflection(TProgram *this, int param_1) {
               char cVar1;
               int iVar2;
               undefined8 *puVar3;
               long lVar4;
               ulong uVar5;
               TProgram TVar6;
               int iVar7;
               int iVar8;
               TVar6 = this[0x1f0];
               if (( TVar6 == (TProgram)0x0 ) || ( *(long*)( this + 0x1e8 ) != 0 )) {
                  LAB_00102c16:TVar6 = (TProgram)0x0;
               }
 else {
                  if (( param_1 & 4U ) == 0) {
                     iVar8 = 0;
                     iVar7 = 4;
                  }
 else {
                     lVar4 = 0;
                     iVar7 = 0;
                     iVar8 = 0xe;
                     do {
                        if (*(long*)( this + lVar4 * 8 + 0x160 ) != 0) {
                           iVar2 = (int)lVar4;
                           if (iVar2 < iVar8) {
                              iVar8 = iVar2;
                           }

                           if (iVar7 < iVar2) {
                              iVar7 = iVar2;
                           }

                        }

                        lVar4 = lVar4 + 1;
                     }
 while ( lVar4 != 0xe );
                  }

                  puVar3 = (undefined8*)operator_new(0x1b0);
                  *(undefined4*)( puVar3 + 7 ) = 0xffffffff;
                  *(undefined4*)( (long)puVar3 + 0x3c ) = 0xffffffff;
                  *(undefined4*)( puVar3 + 8 ) = 0xffffffff;
                  *(undefined4*)( (long)puVar3 + 0x44 ) = 0xffffffff;
                  puVar3[3] = puVar3 + 5;
                  puVar3[0x10] = puVar3 + 0xe;
                  puVar3[0x11] = puVar3 + 0xe;
                  puVar3[0x16] = puVar3 + 0x14;
                  puVar3[0x17] = puVar3 + 0x14;
                  *(int*)( puVar3 + 1 ) = param_1;
                  uVar5 = 0;
                  *puVar3 = &PTR__TReflection_00123388;
                  *(int*)( (long)puVar3 + 0xc ) = iVar8;
                  *(int*)( puVar3 + 2 ) = iVar7;
                  puVar3[4] = 0;
                  *(undefined1*)( puVar3 + 5 ) = 0;
                  puVar3[9] = 0xffffffffffffffff;
                  *(undefined4*)( puVar3 + 10 ) = 0;
                  puVar3[0xb] = 0;
                  puVar3[0xc] = 0;
                  *(undefined4*)( puVar3 + 0xe ) = 0;
                  puVar3[0xf] = 0;
                  puVar3[0x12] = 0;
                  *(undefined4*)( puVar3 + 0x14 ) = 0;
                  puVar3[0x15] = 0;
                  puVar3[0x18] = 0;
                  *(undefined4*)( puVar3 + 0x1a ) = 0;
                  puVar3[0x1b] = 0;
                  puVar3[0x1c] = puVar3 + 0x1a;
                  puVar3[0x1d] = puVar3 + 0x1a;
                  puVar3[0x1e] = 0;
                  for (int i = 0; i < 6; i++) {
                     *(undefined1(*) [16])( puVar3 + ( 2*i + 31 ) ) = (undefined1[16])0;
                  }

                  puVar3[0x33] = 0;
                  puVar3[0x34] = 0;
                  *(undefined4*)( puVar3 + 0x35 ) = 0;
                  *(undefined8**)( this + 0x1e8 ) = puVar3;
                  for (int i = 0; i < 4; i++) {
                     *(undefined1(*) [16])( puVar3 + ( 2*i + 43 ) ) = (undefined1[16])0;
                  }

                  do {
                     if (( *(long*)( this + uVar5 * 8 + 0x160 ) != 0 ) && ( cVar1 = glslang::TReflection::addStage(*(undefined8*)( this + 0x1e8 ), uVar5 & 0xffffffff) ),cVar1 == '\0') goto LAB_00102c16;
                     uVar5 = uVar5 + 1;
                  }
 while ( uVar5 != 0xe );
               }

               return TVar6;
            }

            /* glslang::TProgram::getLocalSize(int) const */
            undefined4 glslang::TProgram::getLocalSize(TProgram *this, int param_1) {
               undefined4 uVar1;
               uVar1 = 0;
               if (param_1 < 3) {
                  uVar1 = *(undefined4*)( *(long*)( this + 0x1e8 ) + 0x1a0 + (long)param_1 * 4 );
               }

               return uVar1;
            }

            /* glslang::TProgram::getNumUniformVariables() const */
            int glslang::TProgram::getNumUniformVariables(TProgram *this) {
               return (int)( *(long*)( *(long*)( this + 0x1e8 ) + 0x100 ) - *(long*)( *(long*)( this + 0x1e8 ) + 0xf8 ) >> 4 ) * -0x33333333;
            }

            /* glslang::TProgram::getUniform(int) const */
            long glslang::TProgram::getUniform(TProgram *this, int param_1) {
               long lVar1;
               lVar1 = *(long*)( this + 0x1e8 );
               if (( -1 < param_1 ) && ( param_1 < (int)( *(long*)( lVar1 + 0x100 ) - *(long*)( lVar1 + 0xf8 ) >> 4 ) * -0x33333333 )) {
                  return (long)param_1 * 0x50 + *(long*)( lVar1 + 0xf8 );
               }

               return lVar1 + 0x18;
            }

            /* glslang::TProgram::getNumUniformBlocks() const */
            int glslang::TProgram::getNumUniformBlocks(TProgram *this) {
               return (int)( *(long*)( *(long*)( this + 0x1e8 ) + 0x118 ) - *(long*)( *(long*)( this + 0x1e8 ) + 0x110 ) >> 4 ) * -0x33333333;
            }

            /* glslang::TProgram::getUniformBlock(int) const */
            long glslang::TProgram::getUniformBlock(TProgram *this, int param_1) {
               long lVar1;
               lVar1 = *(long*)( this + 0x1e8 );
               if (( -1 < param_1 ) && ( param_1 < (int)( *(long*)( lVar1 + 0x118 ) - *(long*)( lVar1 + 0x110 ) >> 4 ) * -0x33333333 )) {
                  return (long)param_1 * 0x50 + *(long*)( lVar1 + 0x110 );
               }

               return lVar1 + 0x18;
            }

            /* glslang::TProgram::getNumPipeInputs() const */
            int glslang::TProgram::getNumPipeInputs(TProgram *this) {
               return (int)( *(long*)( *(long*)( this + 0x1e8 ) + 0x160 ) - *(long*)( *(long*)( this + 0x1e8 ) + 0x158 ) >> 4 ) * -0x33333333;
            }

            /* glslang::TProgram::getPipeInput(int) const */
            long glslang::TProgram::getPipeInput(TProgram *this, int param_1) {
               long lVar1;
               lVar1 = *(long*)( this + 0x1e8 );
               if (( -1 < param_1 ) && ( param_1 < (int)( *(long*)( lVar1 + 0x160 ) - *(long*)( lVar1 + 0x158 ) >> 4 ) * -0x33333333 )) {
                  return (long)param_1 * 0x50 + *(long*)( lVar1 + 0x158 );
               }

               return lVar1 + 0x18;
            }

            /* glslang::TProgram::getNumPipeOutputs() const */
            int glslang::TProgram::getNumPipeOutputs(TProgram *this) {
               return (int)( *(long*)( *(long*)( this + 0x1e8 ) + 0x178 ) - *(long*)( *(long*)( this + 0x1e8 ) + 0x170 ) >> 4 ) * -0x33333333;
            }

            /* glslang::TProgram::getPipeOutput(int) const */
            long glslang::TProgram::getPipeOutput(TProgram *this, int param_1) {
               long lVar1;
               lVar1 = *(long*)( this + 0x1e8 );
               if (( -1 < param_1 ) && ( param_1 < (int)( *(long*)( lVar1 + 0x178 ) - *(long*)( lVar1 + 0x170 ) >> 4 ) * -0x33333333 )) {
                  return (long)param_1 * 0x50 + *(long*)( lVar1 + 0x170 );
               }

               return lVar1 + 0x18;
            }

            /* glslang::TProgram::getNumBufferVariables() const */
            int glslang::TProgram::getNumBufferVariables(TProgram *this) {
               return (int)( *(long*)( *(long*)( this + 0x1e8 ) + 0x130 ) - *(long*)( *(long*)( this + 0x1e8 ) + 0x128 ) >> 4 ) * -0x33333333;
            }

            /* glslang::TProgram::getBufferVariable(int) const */
            long glslang::TProgram::getBufferVariable(TProgram *this, int param_1) {
               long lVar1;
               lVar1 = *(long*)( this + 0x1e8 );
               if (( -1 < param_1 ) && ( param_1 < (int)( *(long*)( lVar1 + 0x130 ) - *(long*)( lVar1 + 0x128 ) >> 4 ) * -0x33333333 )) {
                  return (long)param_1 * 0x50 + *(long*)( lVar1 + 0x128 );
               }

               return lVar1 + 0x18;
            }

            /* glslang::TProgram::getNumBufferBlocks() const */
            int glslang::TProgram::getNumBufferBlocks(TProgram *this) {
               return (int)( *(long*)( *(long*)( this + 0x1e8 ) + 0x148 ) - *(long*)( *(long*)( this + 0x1e8 ) + 0x140 ) >> 4 ) * -0x33333333;
            }

            /* glslang::TProgram::getBufferBlock(int) const */
            long glslang::TProgram::getBufferBlock(TProgram *this, int param_1) {
               long lVar1;
               lVar1 = *(long*)( this + 0x1e8 );
               if (( -1 < param_1 ) && ( param_1 < (int)( *(long*)( lVar1 + 0x148 ) - *(long*)( lVar1 + 0x140 ) >> 4 ) * -0x33333333 )) {
                  return (long)param_1 * 0x50 + *(long*)( lVar1 + 0x140 );
               }

               return lVar1 + 0x18;
            }

            /* glslang::TProgram::getNumAtomicCounters() const */
            long glslang::TProgram::getNumAtomicCounters(TProgram *this) {
               return *(long*)( *(long*)( this + 0x1e8 ) + 400 ) - *(long*)( *(long*)( this + 0x1e8 ) + 0x188 ) >> 2;
            }

            /* glslang::TProgram::getAtomicCounter(int) const */
            long glslang::TProgram::getAtomicCounter(TProgram *this, int param_1) {
               int iVar1;
               long lVar2;
               lVar2 = *(long*)( this + 0x1e8 );
               if (( -1 < param_1 ) && ( param_1 < (int)( *(long*)( lVar2 + 400 ) - *(long*)( lVar2 + 0x188 ) >> 2 ) )) {
                  iVar1 = *(int*)( *(long*)( lVar2 + 0x188 ) + (long)param_1 * 4 );
                  if (( -1 < iVar1 ) && ( iVar1 < (int)( *(long*)( lVar2 + 0x100 ) - *(long*)( lVar2 + 0xf8 ) >> 4 ) * -0x33333333 )) {
                     return (long)iVar1 * 0x50 + *(long*)( lVar2 + 0xf8 );
                  }

               }

               return lVar2 + 0x18;
            }

            /* glslang::TProgram::dumpReflection() */
            void glslang::TProgram::dumpReflection(TProgram *this) {
               if (*(long*)( this + 0x1e8 ) != 0) {
                  glslang::TReflection::dump();
                  return;
               }

               return;
            }

            /* glslang::TProgram::mapIO(glslang::TIoMapResolver*, glslang::TIoMapper*) */
            uint glslang::TProgram::mapIO(TProgram *this, TIoMapResolver *param_1, TIoMapper *param_2) {
               char cVar1;
               uint uVar2;
               code *pcVar3;
               ulong uVar4;
               TIoMapper *pTVar5;
               long in_FS_OFFSET;
               code *local_38;
               long local_30;
               pTVar5 = (TIoMapper*)&local_38;
               uVar2 = (uint)(byte)this[0x1f0];
               local_30 = *(long*)( in_FS_OFFSET + 0x28 );
               if (this[0x1f0] != (TProgram)0x0) {
                  pcVar3 = std::_Hash_bytes;
                  local_38 = std::_Hash_bytes;
                  if (param_2 != (TIoMapper*)0x0) {
                     pcVar3 = *(code**)param_2;
                     pTVar5 = param_2;
                  }

                  uVar4 = 0;
                  do {
                     if (*(long*)( this + uVar4 * 8 + 0x160 ) != 0) {
                        cVar1 = ( **(code**)( pcVar3 + 0x10 ) )(pTVar5, uVar4 & 0xffffffff, *(long*)( this + uVar4 * 8 + 0x160 ), *(undefined8*)( this + 0x1e0 ), param_1);
                        if (cVar1 == '\0') {
                           uVar2 = 0;
                           goto LAB_00103281;
                        }

                        pcVar3 = *(code**)pTVar5;
                     }

                     uVar4 = uVar4 + 1;
                  }
 while ( uVar4 != 0xe );
                  if (*(code**)( pcVar3 + 0x18 ) != TIoMapper::doMap) {
                     uVar2 = ( **(code**)( pcVar3 + 0x18 ) )(pTVar5, param_1, *(undefined8*)( this + 0x1e0 ));
                  }

               }

               LAB_00103281:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return uVar2;
            }

            /* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */
            undefined8 * std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
          (undefined8 *param_1,undefined8 *param_2,uint param_3), {
                  long *plVar1;
                  char cVar2;
                  bool bVar3;
                  long lVar4;
                  long lVar5;
                  undefined8 *puVar6;
                  lVar5 = (long)param_2 - (long)param_1;
                  if (0 < lVar5 >> 7) {
                     puVar6 = param_1 + ( lVar5 >> 7 ) * 0x10;
                     do {
                        plVar1 = (long*)*param_1;
                        if (*(byte*)( plVar1 + 1 ) == param_3) {
                           return param_1;
                        }

                        if (*(code**)( *plVar1 + 0x128 ) == glslang::TType::isStruct) {
                           if (( byte )(*(byte*)( plVar1 + 1 ) - 0xf) < 2) {
                              LAB_0010341d:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
                              lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5,param_3 ));
                              if (lVar5 != lVar4) {
                                 return param_1;
                              }

                           }

                        }
 else {
                           cVar2 = ( **(code**)( *plVar1 + 0x128 ) )(plVar1);
                           if (cVar2 != '\0') goto LAB_0010341d;
                        }

                        plVar1 = (long*)param_1[4];
                        if (*(byte*)( plVar1 + 1 ) == param_3) goto LAB_0010346c;
                        if (*(code**)( *plVar1 + 0x128 ) == glslang::TType::isStruct) {
                           if (( byte )(*(byte*)( plVar1 + 1 ) - 0xf) < 2) {
                              LAB_0010344d:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
                              lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5,param_3 ));
                              if (lVar5 != lVar4) {
                                 LAB_0010346c:return param_1 + 4;
                              }

                           }

                        }
 else {
                           cVar2 = ( **(code**)( *plVar1 + 0x128 ) )(plVar1);
                           if (cVar2 != '\0') goto LAB_0010344d;
                        }

                        plVar1 = (long*)param_1[8];
                        if (*(byte*)( plVar1 + 1 ) == param_3) goto LAB_001034a4;
                        if (*(code**)( *plVar1 + 0x128 ) == glslang::TType::isStruct) {
                           if (( byte )(*(byte*)( plVar1 + 1 ) - 0xf) < 2) {
                              LAB_00103485:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
                              lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5,param_3 ));
                              if (lVar5 != lVar4) {
                                 LAB_001034a4:return param_1 + 8;
                              }

                           }

                        }
 else {
                           cVar2 = ( **(code**)( *plVar1 + 0x128 ) )(plVar1);
                           if (cVar2 != '\0') goto LAB_00103485;
                        }

                        plVar1 = (long*)param_1[0xc];
                        if (param_3 == *(byte*)( plVar1 + 1 )) goto LAB_001034dc;
                        if (*(code**)( *plVar1 + 0x128 ) == glslang::TType::isStruct) {
                           if (( byte )(*(byte*)( plVar1 + 1 ) - 0xf) < 2) {
                              LAB_001034bd:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
                              lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5,param_3 ));
                              if (lVar5 != lVar4) {
                                 LAB_001034dc:return param_1 + 0xc;
                              }

                           }

                        }
 else {
                           cVar2 = ( **(code**)( *plVar1 + 0x128 ) )(plVar1);
                           if (cVar2 != '\0') goto LAB_001034bd;
                        }

                        param_1 = param_1 + 0x10;
                     }
 while ( param_1 != puVar6 );
                     lVar5 = (long)param_2 - (long)param_1;
                  }

                  lVar5 = lVar5 >> 5;
                  if (lVar5 != 2) {
                     if (lVar5 != 3) {
                        if (lVar5 != 1) {
                           return param_2;
                        }

                        goto LAB_00103538;
                     }

                     bVar3 = glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>((TType*)*param_1, param_3);
                     if (bVar3) {
                        return param_1;
                     }

                     param_1 = param_1 + 4;
                  }

                  bVar3 = glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>((TType*)*param_1, param_3);
                  if (bVar3) {
                     return param_1;
                  }

                  param_1 = param_1 + 4;
                  LAB_00103538:bVar3 = glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>((TType*)*param_1, param_3);
                  if (!bVar3) {
                     return param_2;
                  }

                  return param_1;
               }
, /* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */, long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>, >, __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_), const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2,long *param_3), {
                        long *plVar1;
                        char cVar2;
                        bool bVar3;
                        long lVar4;
                        long lVar5;
                        long *plVar6;
                        long lVar7;
                        lVar7 = (long)param_2 - (long)param_1;
                        if (0 < lVar7 >> 7) {
                           plVar1 = param_1;
                           LAB_00103590:do {
                              plVar6 = plVar1;
                              plVar1 = (long*)*plVar6;
                              lVar4 = *plVar1;
                              if (param_3 == plVar1) {
                                 LAB_001035e0:if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
                                    if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                                       LAB_001035fd:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
                                       lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsStructure ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4,param_3 ));
                                       if (lVar4 != lVar5) {
                                          return plVar6;
                                       }

                                    }

                                 }
 else {
                                    cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
                                    if (cVar2 != '\0') goto LAB_001035fd;
                                 }

                              }
 else {
                                 if (*(code**)( lVar4 + 0x128 ) != glslang::TType::isStruct) {
                                    cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
                                    if (cVar2 != '\0') {
                                       return plVar6;
                                    }

                                    lVar4 = *plVar1;
                                    goto LAB_001035e0;
                                 }

                                 if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                                    return plVar6;
                                 }

                              }

                              plVar1 = (long*)plVar6[4];
                              lVar4 = *plVar1;
                              if (param_3 == plVar1) {
                                 LAB_00103660:if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
                                    if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                                       LAB_0010367d:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
                                       lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsStructure ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4,param_3 ));
                                       if (lVar4 != lVar5) {
                                          LAB_00103646:return plVar6 + 4;
                                       }

                                    }

                                 }
 else {
                                    cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
                                    if (cVar2 != '\0') goto LAB_0010367d;
                                 }

                              }
 else {
                                 if (*(code**)( lVar4 + 0x128 ) != glslang::TType::isStruct) {
                                    cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
                                    if (cVar2 != '\0') goto LAB_00103646;
                                    lVar4 = *plVar1;
                                    goto LAB_00103660;
                                 }

                                 if (( byte )((char)plVar1[1] - 0xfU) < 2) goto LAB_00103646;
                              }

                              plVar1 = (long*)plVar6[8];
                              lVar4 = *plVar1;
                              if (param_3 == plVar1) {
                                 LAB_001036e0:if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
                                    if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                                       LAB_001036fd:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
                                       lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsStructure ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4,param_3 ));
                                       if (lVar4 != lVar5) {
                                          LAB_001036c6:return plVar6 + 8;
                                       }

                                    }

                                 }
 else {
                                    cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
                                    if (cVar2 != '\0') goto LAB_001036fd;
                                 }

                              }
 else {
                                 if (*(code**)( lVar4 + 0x128 ) != glslang::TType::isStruct) {
                                    cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
                                    if (cVar2 != '\0') goto LAB_001036c6;
                                    lVar4 = *plVar1;
                                    goto LAB_001036e0;
                                 }

                                 if (( byte )((char)plVar1[1] - 0xfU) < 2) goto LAB_001036c6;
                              }

                              plVar1 = (long*)plVar6[0xc];
                              lVar4 = *plVar1;
                              if (param_3 == plVar1) {
                                 LAB_00103760:if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
                                    if (1 < ( byte )((char)plVar1[1] - 0xfU)) goto LAB_0010379a;
                                 }
 else {
                                    cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
                                    if (cVar2 == '\0') {
                                       plVar1 = plVar6 + 0x10;
                                       if (param_1 + ( lVar7 >> 7 ) * 0x10 == plVar6 + 0x10) break;
                                       goto LAB_00103590;
                                    }

                                 }

                                 lVar4 = *(long*)( plVar1[0xd] + 0x10 );
                                 lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsStructure ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4,param_3 ));
                                 if (lVar4 != lVar5) {
                                    LAB_00103746:return plVar6 + 0xc;
                                 }

                              }
 else {
                                 if (*(code**)( lVar4 + 0x128 ) != glslang::TType::isStruct) {
                                    cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
                                    if (cVar2 != '\0') goto LAB_00103746;
                                    lVar4 = *plVar1;
                                    goto LAB_00103760;
                                 }

                                 if (( byte )((char)plVar1[1] - 0xfU) < 2) goto LAB_00103746;
                              }

                              LAB_0010379a:plVar1 = plVar6 + 0x10;
                           }
 while ( param_1 + ( lVar7 >> 7 ) * 0x10 != plVar6 + 0x10 );
                           param_1 = plVar6 + 0x10;
                           lVar7 = (long)param_2 - (long)param_1;
                        }

                        lVar7 = lVar7 >> 5;
                        if (lVar7 != 2) {
                           if (lVar7 != 3) {
                              if (lVar7 != 1) {
                                 return param_2;
                              }

                              goto LAB_0010386d;
                           }

                           bVar3 = glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>((TType*)*param_1, param_3);
                           if (bVar3) {
                              return param_1;
                           }

                           param_1 = param_1 + 4;
                        }

                        bVar3 = glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>((TType*)*param_1, param_3);
                        if (bVar3) {
                           return param_1;
                        }

                        param_1 = param_1 + 4;
                        LAB_0010386d:bVar3 = glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>((TType*)*param_1, param_3);
                        if (!bVar3) {
                           return param_2;
                        }

                        return param_1;
                     }
, /* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */, long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>, >, __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_), const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2), {
                              long *plVar1;
                              char cVar2;
                              bool bVar3;
                              long lVar4;
                              long lVar5;
                              long *plVar6;
                              lVar5 = (long)param_2 - (long)param_1;
                              if (0 < lVar5 >> 7) {
                                 plVar6 = param_1 + ( lVar5 >> 7 ) * 0x10;
                                 do {
                                    plVar1 = (long*)*param_1;
                                    lVar5 = *plVar1;
                                    if (*(code**)( lVar5 + 0xe8 ) == glslang::TType::isArray) {
                                       lVar4 = plVar1[0xc];
                                       if (lVar4 != 0) {
                                          LAB_001038f8:if (*(long*)( *(long*)( *(long*)( lVar4 + 8 ) + 8 ) + 8 ) != 0) {
                                             return param_1;
                                          }

                                          goto LAB_00103920;
                                       }

                                    }
 else {
                                       cVar2 = ( **(code**)( lVar5 + 0xe8 ) )(plVar1);
                                       if (cVar2 != '\0') {
                                          lVar4 = plVar1[0xc];
                                          goto LAB_001038f8;
                                       }

                                       LAB_00103920:lVar5 = *plVar1;
                                    }

                                    if (*(code**)( lVar5 + 0x128 ) == glslang::TType::isStruct) {
                                       if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                                          LAB_00103aad:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
                                          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsSpecializationSize ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5 ));
                                          if (lVar5 != lVar4) {
                                             return param_1;
                                          }

                                       }

                                    }
 else {
                                       cVar2 = ( **(code**)( lVar5 + 0x128 ) )(plVar1);
                                       if (cVar2 != '\0') goto LAB_00103aad;
                                    }

                                    plVar1 = (long*)param_1[4];
                                    lVar5 = *plVar1;
                                    if (*(code**)( lVar5 + 0xe8 ) == glslang::TType::isArray) {
                                       lVar4 = plVar1[0xc];
                                       if (lVar4 != 0) {
                                          LAB_00103964:if (*(long*)( *(long*)( *(long*)( lVar4 + 8 ) + 8 ) + 8 ) != 0) goto LAB_00103973;
                                          goto LAB_00103980;
                                       }

                                    }
 else {
                                       cVar2 = ( **(code**)( lVar5 + 0xe8 ) )(plVar1);
                                       if (cVar2 != '\0') {
                                          lVar4 = plVar1[0xc];
                                          goto LAB_00103964;
                                       }

                                       LAB_00103980:lVar5 = *plVar1;
                                    }

                                    if (*(code**)( lVar5 + 0x128 ) == glslang::TType::isStruct) {
                                       if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                                          LAB_00103add:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
                                          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsSpecializationSize ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5 ));
                                          if (lVar5 != lVar4) {
                                             LAB_00103973:return param_1 + 4;
                                          }

                                       }

                                    }
 else {
                                       cVar2 = ( **(code**)( lVar5 + 0x128 ) )(plVar1);
                                       if (cVar2 != '\0') goto LAB_00103add;
                                    }

                                    plVar1 = (long*)param_1[8];
                                    lVar5 = *plVar1;
                                    if (*(code**)( lVar5 + 0xe8 ) == glslang::TType::isArray) {
                                       lVar4 = plVar1[0xc];
                                       if (lVar4 != 0) {
                                          LAB_001039c4:if (*(long*)( *(long*)( *(long*)( lVar4 + 8 ) + 8 ) + 8 ) != 0) goto LAB_001039d3;
                                          goto LAB_001039e0;
                                       }

                                    }
 else {
                                       cVar2 = ( **(code**)( lVar5 + 0xe8 ) )(plVar1);
                                       if (cVar2 != '\0') {
                                          lVar4 = plVar1[0xc];
                                          goto LAB_001039c4;
                                       }

                                       LAB_001039e0:lVar5 = *plVar1;
                                    }

                                    if (*(code**)( lVar5 + 0x128 ) == glslang::TType::isStruct) {
                                       if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                                          LAB_00103b0d:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
                                          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsSpecializationSize ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5 ));
                                          if (lVar5 != lVar4) {
                                             LAB_001039d3:return param_1 + 8;
                                          }

                                       }

                                    }
 else {
                                       cVar2 = ( **(code**)( lVar5 + 0x128 ) )(plVar1);
                                       if (cVar2 != '\0') goto LAB_00103b0d;
                                    }

                                    plVar1 = (long*)param_1[0xc];
                                    lVar5 = *plVar1;
                                    if (*(code**)( lVar5 + 0xe8 ) == glslang::TType::isArray) {
                                       lVar4 = plVar1[0xc];
                                       if (lVar4 != 0) {
                                          LAB_00103a24:if (*(long*)( *(long*)( *(long*)( lVar4 + 8 ) + 8 ) + 8 ) != 0) goto LAB_00103a33;
                                          goto LAB_00103a40;
                                       }

                                    }
 else {
                                       cVar2 = ( **(code**)( lVar5 + 0xe8 ) )(plVar1);
                                       if (cVar2 != '\0') {
                                          lVar4 = plVar1[0xc];
                                          goto LAB_00103a24;
                                       }

                                       LAB_00103a40:lVar5 = *plVar1;
                                    }

                                    if (*(code**)( lVar5 + 0x128 ) == glslang::TType::isStruct) {
                                       if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                                          LAB_00103b3d:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
                                          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsSpecializationSize ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5 ));
                                          if (lVar5 != lVar4) {
                                             LAB_00103a33:return param_1 + 0xc;
                                          }

                                       }

                                    }
 else {
                                       cVar2 = ( **(code**)( lVar5 + 0x128 ) )(plVar1);
                                       if (cVar2 != '\0') goto LAB_00103b3d;
                                    }

                                    param_1 = param_1 + 0x10;
                                 }
 while ( param_1 != plVar6 );
                                 lVar5 = (long)param_2 - (long)param_1;
                              }

                              lVar5 = lVar5 >> 5;
                              if (lVar5 != 2) {
                                 if (lVar5 != 3) {
                                    if (lVar5 != 1) {
                                       return param_2;
                                    }

                                    goto LAB_00103bfe;
                                 }

                                 bVar3 = glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(*param_1);
                                 if (bVar3) {
                                    return param_1;
                                 }

                                 param_1 = param_1 + 4;
                              }

                              bVar3 = glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(*param_1);
                              if (bVar3) {
                                 return param_1;
                              }

                              param_1 = param_1 + 4;
                              LAB_00103bfe:bVar3 = glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(*param_1);
                              if (!bVar3) {
                                 return param_2;
                              }

                              return param_1;
                           }
, /* glslang::TShader::addProcesses(std::vector<std::__cxx11::string,
   std::allocator<std::__cxx11::string > > const&) */, void __thiscall glslang::TShader::addProcesses(TShader *this, vector * param_1) * plVar2 * plVar4 * (long*)param_1 * (long*)( this + 0x20 )(0 < (int)( *(long*)( param_1 + 8 ) - lVar3 >> 5 )) = 0 * (long**)( lVar1 + 0x7d8 )(long * )(lVar3 + lVar5 * 0x20)(plVar2 == *(long**)( lVar1 + 0x7e0 )) < std::__cxx11::string, std::allocator<std::__cxx11::string>>::
        _M_realloc_insert<std::__cxx11::string_const&>
                  ((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)
                   (lVar1 + 2000),plVar2);
      }
      else {
        *plVar2 = (long)(plVar2 + 2);
        lVar3 = *plVar4;
        std::__cxx11::string::_M_construct<char*>(plVar2,lVar3,plVar4[1] + lVar3);
        *(long *)(lVar1 + 0x7d8) = *(long *)(lVar1 + 0x7d8) + 0x20;
      }
      lVar3 = *(long *)param_1;
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < (int)(*(long *)(param_1 + 8) - lVar3 >> 5));
  }
  return;
}, /* (anonymous namespace)::RecordProcesses(glslang::TIntermediate&, EShMessages, std::__cxx11::string
   const&) */, void (anonymous_namespace)::RecordProcesses(long param_1,uint param_2,allocator *param_3), {
                           long *plVar1;
                           long lVar2;
                           allocator *paVar3;
                           allocator *extraout_RDX;
                           allocator *extraout_RDX_00;
                           allocator *extraout_RDX_01;
                           long in_FS_OFFSET;
                           long local_58;
                           long local_50;
                           long local_30;
                           local_30 = *(long*)( in_FS_OFFSET + 0x28 );
                           paVar3 = param_3;
                           if (( param_2 & 1 ) != 0) {
                              std::__cxx11::string::string<std::allocator<char>>((string*)&local_58, "relaxed-errors", param_3);
                              plVar1 = *(long**)( param_1 + 0x7d8 );
                              if (plVar1 == *(long**)( param_1 + 0x7e0 )) {
                                 std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::_M_realloc_insert<std::__cxx11::string_const&>((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>*)( param_1 + 2000 ), plVar1, &local_58);
                              }
 else {
                                 *plVar1 = (long)( plVar1 + 2 );
                                 std::__cxx11::string::_M_construct<char*>(plVar1, local_58, local_50 + local_58);
                                 *(long*)( param_1 + 0x7d8 ) = *(long*)( param_1 + 0x7d8 ) + 0x20;
                              }

                              std::__cxx11::string::_M_dispose();
                              paVar3 = extraout_RDX;
                           }

                           if (( param_2 & 2 ) != 0) {
                              std::__cxx11::string::string<std::allocator<char>>((string*)&local_58, "suppress-warnings", paVar3);
                              plVar1 = *(long**)( param_1 + 0x7d8 );
                              if (plVar1 == *(long**)( param_1 + 0x7e0 )) {
                                 std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::_M_realloc_insert<std::__cxx11::string_const&>((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>*)( param_1 + 2000 ), plVar1, &local_58);
                              }
 else {
                                 *plVar1 = (long)( plVar1 + 2 );
                                 std::__cxx11::string::_M_construct<char*>(plVar1, local_58, local_50 + local_58);
                                 *(long*)( param_1 + 0x7d8 ) = *(long*)( param_1 + 0x7d8 ) + 0x20;
                              }

                              std::__cxx11::string::_M_dispose();
                              paVar3 = extraout_RDX_00;
                           }

                           if (( param_2 & 0x100 ) == 0) {
                              lVar2 = *(long*)( param_3 + 8 );
                           }
 else {
                              std::__cxx11::string::string<std::allocator<char>>((string*)&local_58, "keep-uncalled", paVar3);
                              plVar1 = *(long**)( param_1 + 0x7d8 );
                              if (plVar1 == *(long**)( param_1 + 0x7e0 )) {
                                 std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::_M_realloc_insert<std::__cxx11::string_const&>((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>*)( param_1 + 2000 ), plVar1, &local_58);
                              }
 else {
                                 *plVar1 = (long)( plVar1 + 2 );
                                 std::__cxx11::string::_M_construct<char*>(plVar1, local_58, local_50 + local_58);
                                 *(long*)( param_1 + 0x7d8 ) = *(long*)( param_1 + 0x7d8 ) + 0x20;
                              }

                              std::__cxx11::string::_M_dispose();
                              lVar2 = *(long*)( param_3 + 8 );
                              paVar3 = extraout_RDX_01;
                           }

                           if (lVar2 == 0) {
                              if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                                 return;
                              }

                           }
 else {
                              std::__cxx11::string::string<std::allocator<char>>((string*)&local_58, "source-entrypoint", paVar3);
                              plVar1 = *(long**)( param_1 + 0x7d8 );
                              if (plVar1 == *(long**)( param_1 + 0x7e0 )) {
                                 std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::_M_realloc_insert<std::__cxx11::string_const&>((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>*)( param_1 + 2000 ), plVar1, &local_58);
                              }
 else {
                                 *plVar1 = (long)( plVar1 + 2 );
                                 std::__cxx11::string::_M_construct<char*>(plVar1, local_58, local_50 + local_58);
                                 *(long*)( param_1 + 0x7d8 ) = *(long*)( param_1 + 0x7d8 ) + 0x20;
                              }

                              std::__cxx11::string::_M_dispose();
                              std::__cxx11::string::append((string*)( *(long*)( param_1 + 0x7d8 ) + -0x20 ), " ");
                              if (0x3fffffffffffffffU - *(long*)( *(long*)( param_1 + 0x7d8 ) + -0x18 ) < *(ulong*)( param_3 + 8 )) {
                                 /* WARNING: Subroutine does not return */
                                 std::__throw_length_error("basic_string::append");
                              }

                              if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                                 std::__cxx11::string::_M_append((char*)( *(long*)( param_1 + 0x7d8 ) + -0x20 ), *(ulong*)param_3);
                                 return;
                              }

                           }

                           /* WARNING: Subroutine does not return */
                           __stack_chk_fail();
                        }
, /* glslang::TShader::TShader(EShLanguage) */, void __thiscall glslang::TShader::TShader(TShader *this, undefined4, param_2) * pTVar3 * plVar4 * puVar5 * pTVar6 * (undefined***)this & PTR__TShader_00123400 * (undefined**)( this + 0x50 ) = &_LC55 * (undefined4*)( this + 0x10 ) = param_2 * (TShader**)( this + 0x58 ) = this + 0x68 * (undefined8*)( this + 0x60 ) = 0;
  this[0x68] = (TShader)0x0 * (undefined4*)( this + 0x78 ) = 0;
  this[0xa4] = (TShader)0x0 * (undefined1(*) [16])( this + 0x38 ) = (undefined1[16])0x0(TPoolAllocator *)operator_new(0x60);
  glslang::TPoolAllocator::TPoolAllocator(pTVar3,0x2000,0x10);
  *(TPoolAllocator **)(this + 8) = pTVar3;
  plVar4 = (long *)operator_new(0x60);
  *(long **)(this + 0x28) = plVar4;
  *plVar4 = (long)(plVar4 + 2);
  plVar4[6] = (long)(plVar4 + 8);
  plVar4[1] = 0;
  *(undefined1 *)(plVar4 + 2) = 0;
  *(undefined4 *)(plVar4 + 4) = 4;
  plVar4[5] = 0;
  plVar4[7] = 0;
  *(undefined1 *)(plVar4 + 8) = 0;
  *(undefined4 *)(plVar4 + 10) = 4;
  plVar4[0xb] = 0;
  puVar5 = (undefined8 *)operator_new(0x20);
  uVar2 = *(undefined8 *)(this + 0x28);
  uVar1 = *(undefined4 *)(this + 0x10);
  *puVar5 = &PTR__TShHandleBase_00123328;
  pTVar3 = (TPoolAllocator *)operator_new(0x60);
  glslang::TPoolAllocator::TPoolAllocator(pTVar3,0x2000,0x10);
  puVar5[1] = pTVar3;
  puVar5[2] = uVar2;
  *(undefined4 *)(puVar5 + 3) = uVar1;
  *(undefined8 **)(this + 0x18) = puVar5;
  *(undefined1 *)((long)puVar5 + 0x1c) = 0;
  *puVar5 = &PTR__TDeferredCompiler_001233a8;
  pTVar6 = (TIntermediate *)operator_new(0x7e8);
  TIntermediate::TIntermediate(pTVar6,param_2,0,1);
  *(TIntermediate **)(this + 0x20) = pTVar6;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  this[0x8c] = (TShader)0x0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  this[0xa0] = (TShader)0x0;
  return;
}, /* glslang::TShader::addUniformLocationOverride(char const*, int) */, void __thiscall
glslang::TShader::addUniformLocationOverride(TShader *this,char *param_1,int param_2), {
                           long lVar1;
                           size_t sVar2;
                           int *piVar3;
                           long in_FS_OFFSET;
                           long *local_58[2];
                           long local_48[3];
                           long local_30;
                           lVar1 = *(long*)( this + 0x20 );
                           local_30 = *(long*)( in_FS_OFFSET + 0x28 );
                           local_58[0] = local_48;
                           if (param_1 == (char*)0x0) {
                              std::__throw_logic_error("basic_string: construction from null is not valid");
                           }
 else {
                              sVar2 = strlen(param_1);
                              std::__cxx11::string::_M_construct<char_const*>(local_58, param_1, param_1 + sVar2);
                              piVar3 = (int*)std::__detail::_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::allocator<std::pair<std::__cxx11::string_const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator []((_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::allocator<std::pair<std::__cxx11::string_const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>*)( lVar1 + 0x588 ), (string*)local_58);
                              *piVar3 = param_2;
                              if (local_58[0] != local_48) {
                                 operator_delete(local_58[0], local_48[0] + 1);
                              }

                              if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                                 return;
                              }

                           }

                           /* WARNING: Subroutine does not return */
                           __stack_chk_fail();
                        }
, /* glslang::TShader::addBlockStorageOverride(char const*, glslang::TBlockStorageClass) */, void __thiscall
glslang::TShader::addBlockStorageOverride(TShader *this, char, *param_1, undefined4, param_3) * puVar3 * local_58[2];
  long local_48[3] * (long*)( this + 0x20 ) * (long*)( in_FS_OFFSET + 0x28 );
  local_58[0] = local_48(param_1 == (char*)0x0), {
    std::__throw_logic_error("basic_string: construction from null is not valid"), ;
  }
  else {
    sVar2 = strlen(param_1));
            std::__cxx11::string::_M_construct<char_const*>(local_58, param_1, param_1 + sVar2);
            puVar3 = (undefined4*)std::__detail::_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TBlockStorageClass>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TBlockStorageClass>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator []((_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TBlockStorageClass>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TBlockStorageClass>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>*)( lVar1 + 0x5d0 ), (string*)local_58);
            *puVar3 = param_3;
            if (local_58[0] != local_48) {
               operator_delete(local_58[0], local_48[0] + 1);
            }

            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* glslang::TProgram::getReflectionIndex(char const*) const */
      undefined4 glslang::TProgram::getReflectionIndex(TProgram *this, char *param_1) {
         long lVar1;
         undefined4 uVar2;
         size_t sVar3;
         long lVar4;
         long in_FS_OFFSET;
         long *local_58[2];
         long local_48[3];
         long local_30;
         lVar1 = *(long*)( this + 0x1e8 );
         local_30 = *(long*)( in_FS_OFFSET + 0x28 );
         local_58[0] = local_48;
         if (param_1 == (char*)0x0) {
            std::__throw_logic_error("basic_string: construction from null is not valid");
         }
 else {
            sVar3 = strlen(param_1);
            std::__cxx11::string::_M_construct<char_const*>(local_58, param_1, param_1 + sVar3);
            lVar4 = std::_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>::find((_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>*)( lVar1 + 0x68 ), (string*)local_58);
            if (local_58[0] != local_48) {
               operator_delete(local_58[0], local_48[0] + 1);
            }

            if (lVar4 == lVar1 + 0x70) {
               uVar2 = 0xffffffff;
            }
 else {
               uVar2 = *(undefined4*)( lVar4 + 0x40 );
            }

            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return uVar2;
            }

         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* glslang::TProgram::getReflectionPipeIOIndex(char const*, bool) const */
      undefined4 glslang::TProgram::getReflectionPipeIOIndex(TProgram *this, char *param_1, bool param_2) {
         undefined4 uVar1;
         long lVar2;
         undefined7 in_register_00000011;
         long lVar3;
         long in_FS_OFFSET;
         string asStack_48[40];
         long local_20;
         lVar2 = *(long*)( this + 0x1e8 );
         local_20 = *(long*)( in_FS_OFFSET + 0x28 );
         if (param_2) {
            std::__cxx11::string::string<std::allocator<char>>(asStack_48, param_1, (allocator*)CONCAT71(in_register_00000011, param_2));
            lVar3 = lVar2 + 0xa0;
            lVar2 = std::_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>::find((_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>*)( lVar2 + 0x98 ), asStack_48);
            std::__cxx11::string::_M_dispose();
         }
 else {
            std::__cxx11::string::string<std::allocator<char>>(asStack_48, param_1, (allocator*)CONCAT71(in_register_00000011, param_2));
            lVar3 = lVar2 + 0xd0;
            lVar2 = std::_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>::find((_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>*)( lVar2 + 200 ), asStack_48);
            std::__cxx11::string::_M_dispose();
         }

         if (lVar3 == lVar2) {
            uVar1 = 0xffffffff;
         }
 else {
            uVar1 = *(undefined4*)( lVar2 + 0x40 );
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return uVar1;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* glslang::TProgram::linkStage(EShLanguage, EShMessages) */
      ulong glslang::TProgram::linkStage(TProgram *this, int param_2, uint param_3) {
         TProgram *pTVar1;
         uint uVar2;
         TProgram *pTVar3;
         TIntermediate *pTVar4;
         int iVar5;
         ulong uVar6;
         undefined8 extraout_RDX;
         undefined8 uVar7;
         undefined8 extraout_RDX_00;
         undefined8 extraout_RDX_01;
         int iVar8;
         TInfoSink *pTVar9;
         TInfoSink *pTVar10;
         undefined8 *puVar11;
         long lVar12;
         TProgram *pTVar13;
         byte bVar14;
         bVar14 = 0;
         uVar6 = 1;
         lVar12 = (long)param_2;
         pTVar1 = this + lVar12 * 0x18 + 0x10;
         if (*(long*)( pTVar1 + 0x10 ) == 0) goto LAB_001044ec;
         pTVar13 = *(TProgram**)( this + lVar12 * 0x18 + 0x10 );
         if (pTVar1 != pTVar13) {
            iVar5 = 0;
            iVar8 = 0;
            pTVar3 = pTVar13;
            do {
               while (*(int*)( *(long*)( *(long*)( pTVar3 + 0x10 ) + 0x20 ) + 0x60 ) == 8) {
                  pTVar3 = *(TProgram**)pTVar3;
                  iVar8 = iVar8 + 1;
                  if (pTVar1 == pTVar3) goto LAB_00104484;
               }
;
               pTVar3 = *(TProgram**)pTVar3;
               iVar5 = iVar5 + 1;
            }
 while ( pTVar1 != pTVar3 );
            LAB_00104484:if (( 0 < iVar8 ) && ( 0 < iVar5 )) {
               TInfoSinkBase::message(*(undefined8*)( this + 0x1e0 ), 2, "Cannot mix ES profile with non-ES profile shaders");
               uVar6 = 0;
               goto LAB_001044ec;
            }

            if (1 < iVar8) {
               TInfoSinkBase::message(*(undefined8*)( this + 0x1e0 ), 2, "Cannot attach multiple ES shaders of the same type to a single program");
               uVar6 = 0;
               goto LAB_001044ec;
            }

         }

         pTVar10 = *(TInfoSink**)( *(long*)( pTVar13 + 0x10 ) + 0x20 );
         if (*(long*)( pTVar1 + 0x10 ) == 1) {
            *(TInfoSink**)( this + lVar12 * 8 + 0x160 ) = pTVar10;
            pTVar4 = *(TIntermediate**)( this + 0x1e0 );
            if (( param_3 & 4 ) != 0) {
               LAB_001046b0:glslang::TInfoSinkBase::append((char*)pTVar4);
               StageName(param_2);
               glslang::TInfoSinkBase::append((char*)pTVar4);
               glslang::TInfoSinkBase::append((char*)pTVar4);
               if (( 1 < *(ulong*)( pTVar1 + 0x10 ) ) && ( pTVar13 = *(TProgram**)( this + lVar12 * 0x18 + 0x10 ) ),pTVar1 != pTVar13) {
                  uVar2 = 4;
                  pTVar4 = *(TIntermediate**)( this + 0x1e0 );
                  goto LAB_0010460d;
               }

               glslang::TIntermediate::finalCheck(*(TInfoSink**)( this + lVar12 * 8 + 0x160 ), SUB81(*(undefined8*)( this + 0x1e0 ), 0));
               goto LAB_00104651;
            }

            LAB_001044ce:glslang::TIntermediate::finalCheck(pTVar10, SUB81(pTVar4, 0));
            uVar7 = extraout_RDX;
         }
 else {
            pTVar4 = (TIntermediate*)operator_new(0x7e8);
            TIntermediate::TIntermediate(pTVar4, param_2, *(undefined4*)( pTVar10 + 100 ), *(undefined4*)( pTVar10 + 0x60 ));
            *(TIntermediate**)( this + lVar12 * 8 + 0x160 ) = pTVar4;
            *(undefined8*)( pTVar4 + 0xb8 ) = *(undefined8*)( pTVar10 + 0xb8 );
            *(undefined8*)( pTVar4 + 0x254 ) = *(undefined8*)( pTVar10 + 0x254 );
            pTVar9 = pTVar10 + ( 0xb8 - (long)( pTVar4 + ( 0xb8 - (long)( ( ulong )(pTVar4 + 0xc0) & 0xfffffffffffffff8 ) ) ) );
            puVar11 = (undefined8*)( ( ulong )(pTVar4 + 0xc0) & 0xfffffffffffffff8 );
            for (uVar6 = ( ulong )((int)( pTVar4 + ( 0xb8 - (long)( ( ulong )(pTVar4 + 0xc0) & 0xfffffffffffffff8 ) ) ) + 0x1a4U >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
               *puVar11 = *(undefined8*)pTVar9;
               pTVar9 = pTVar9 + ( (ulong)bVar14 * -2 + 1 ) * 8;
               puVar11 = puVar11 + (ulong)bVar14 * -2 + 1;
            }

            pTVar4[0x25c] = (TIntermediate)0x1;
            if (pTVar10[0x26f] != (TInfoSink)0x0) {
               pTVar4[0x26f] = (TIntermediate)0x1;
            }

            if (pTVar10[0x319] != (TInfoSink)0x0) {
               pTVar4[0x319] = (TIntermediate)0x1;
            }

            TIntermediate::setSpv(pTVar4, (SpvVersion*)( pTVar10 + 0x68 ));
            pTVar4 = *(TIntermediate**)( this + 0x1e0 );
            this[lVar12 + 0x1d0] = (TProgram)0x1;
            uVar2 = param_3 & 4;
            if (( param_3 & 4 ) != 0) goto LAB_001046b0;
            pTVar10 = *(TInfoSink**)( this + lVar12 * 8 + 0x160 );
            if (*(ulong*)( pTVar1 + 0x10 ) < 2) goto LAB_001044ce;
            pTVar13 = *(TProgram**)( this + lVar12 * 0x18 + 0x10 );
            if (pTVar1 == pTVar13) {
               glslang::TIntermediate::finalCheck(pTVar10, SUB81(pTVar4, 0));
               uVar7 = extraout_RDX_01;
               goto LAB_001044d9;
            }

            LAB_0010460d:do {
               glslang::TIntermediate::merge(*(TInfoSink**)( this + ( lVar12 + 0x2c ) * 8 ), pTVar4);
               pTVar13 = *(TProgram**)pTVar13;
               pTVar4 = *(TIntermediate**)( this + 0x1e0 );
            }
 while ( pTVar1 != pTVar13 );
            glslang::TIntermediate::finalCheck(*(TInfoSink**)( this + ( lVar12 + 0x2c ) * 8 ), SUB81(pTVar4, 0));
            uVar7 = 0;
            if (uVar2 != 0) {
               LAB_00104651:glslang::TIntermediate::output(*(TInfoSink**)( this + lVar12 * 8 + 0x160 ), SUB81(*(undefined8*)( this + 0x1e0 ), 0));
               uVar7 = extraout_RDX_00;
            }

         }

         LAB_001044d9:uVar6 = CONCAT71(( int7 )((ulong)uVar7 >> 8), *(int*)( *(long*)( this + lVar12 * 8 + 0x160 ) + 0x264 ) == 0);
         LAB_001044ec:return uVar6 & 0xffffffff;
      }

      /* (anonymous namespace)::CreateParseContext(glslang::TSymbolTable&, glslang::TIntermediate&, int,
   EProfile, glslang::EShSource, EShLanguage, TInfoSink&, glslang::SpvVersion, bool, EShMessages,
   bool, std::__cxx11::string) [clone .constprop.0] */
      TParseContext * (anonymous_namespace)::CreateParseContext(undefined8, param_1, long, param_2, undefined4, param_3, undefined4, param_4, undefined4, param_5, undefined8, param_6);
      {
         char *__s;
         uint uVar1;
         uint uVar2;
         undefined8 *puVar3;
         size_t sVar4;
         TParseContext *pTVar5;
         long in_FS_OFFSET;
         uint in_stack_00000020;
         undefined4 in_stack_00000028;
         uint in_stack_00000030;
         undefined8 *in_stack_00000038;
         undefined8 local_68;
         undefined1 *local_60;
         undefined1 local_50[16];
         long local_40;
         puVar3 = in_stack_00000038;
         uVar2 = in_stack_00000030;
         uVar1 = in_stack_00000020;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         if (in_stack_00000038[1] == 0) {
            std::__cxx11::string::_M_replace(param_2 + 8, 0, *(char**)( param_2 + 0x10 ), 0x11b953);
            glslang::TProcesses::addProcess((TProcesses*)( param_2 + 2000 ), "entry-point");
            std::__cxx11::string::append((string*)( *(long*)( param_2 + 0x7d8 ) + -0x20 ), " ");
            if (0x3fffffffffffffffU - *(long*)( *(long*)( param_2 + 0x7d8 ) + -0x18 ) < *(ulong*)( param_2 + 0x10 )) goto LAB_001048da;
            std::__cxx11::string::_M_append((char*)( *(long*)( param_2 + 0x7d8 ) + -0x20 ), *(ulong*)( param_2 + 8 ));
         }

         local_68 = glslang::GetThreadPoolAllocator();
         __s = (char*)*puVar3;
         local_60 = local_50;
         if (__s != (char*)0x0) {
            sVar4 = strlen(__s);
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_68, __s, __s + sVar4);
            pTVar5 = (TParseContext*)operator_new(0x7618);
            glslang::TParseContext::TParseContext(pTVar5, param_1, param_2, uVar2 & 0xff, param_3, param_4, &stack0x00000008, param_5, param_6, uVar1 & 0xff, in_stack_00000028, &local_68);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return pTVar5;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         std::__throw_logic_error("basic_string: construction from null is not valid");
         LAB_001048da:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::append");
      }

      /* glslang::TShader::setInvertY(bool) */
      void glslang::TShader::setInvertY(TShader *this, bool param_1) {
         long lVar1;
         lVar1 = *(long*)( this + 0x20 );
         *(bool*)( lVar1 + 0x26d ) = param_1;
         if (!param_1) {
            return;
         }

         TProcesses::addProcess((TProcesses*)( lVar1 + 2000 ), "invert-y");
         return;
      }

      /* glslang::TShader::setDxPositionW(bool) */
      void glslang::TShader::setDxPositionW(TShader *this, bool param_1) {
         long lVar1;
         lVar1 = *(long*)( this + 0x20 );
         *(bool*)( lVar1 + 0x26e ) = param_1;
         if (!param_1) {
            return;
         }

         TProcesses::addProcess((TProcesses*)( lVar1 + 2000 ), "dx-position-w");
         return;
      }

      /* glslang::TShader::setShiftBinding(glslang::TResourceType, unsigned int) */
      void glslang::TShader::setShiftBinding(TShader *this, ulong param_2, int param_3) {
         long lVar1;
         char *pcVar2;
         long in_FS_OFFSET;
         ulong local_48;
         ulong local_40;
         long local_20;
         lVar1 = *(long*)( this + 0x20 );
         local_20 = *(long*)( in_FS_OFFSET + 0x28 );
         *(int*)( lVar1 + 0x37c + ( param_2 & 0xffffffff ) * 4 ) = param_3;
         pcVar2 = (char*)glslang::TIntermediate::getResourceName(param_2 & 0xffffffff, param_2, 0);
         if (( pcVar2 != (char*)0x0 ) && ( param_3 != 0 )) {
            TProcesses::addProcess((TProcesses*)( lVar1 + 2000 ), pcVar2);
            std::__cxx11::string::append((string*)( *(long*)( lVar1 + 0x7d8 ) + -0x20 ), " ");
            std::__cxx11::to_string((__cxx11*)&local_48, param_3);
            if (0x3fffffffffffffffU - *(long*)( *(long*)( lVar1 + 0x7d8 ) + -0x18 ) < local_40) {
               /* WARNING: Subroutine does not return */
               std::__throw_length_error("basic_string::append");
            }

            std::__cxx11::string::_M_append((char*)( *(long*)( lVar1 + 0x7d8 ) + -0x20 ), local_48);
            std::__cxx11::string::_M_dispose();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* glslang::TShader::setAutoMapBindings(bool) */
      void glslang::TShader::setAutoMapBindings(TShader *this, bool param_1) {
         long lVar1;
         lVar1 = *(long*)( this + 0x20 );
         *(bool*)( lVar1 + 0x4d0 ) = param_1;
         if (!param_1) {
            return;
         }

         TProcesses::addProcess((TProcesses*)( lVar1 + 2000 ), "auto-map-bindings");
         return;
      }

      /* glslang::TShader::setAutoMapLocations(bool) */
      void glslang::TShader::setAutoMapLocations(TShader *this, bool param_1) {
         long lVar1;
         lVar1 = *(long*)( this + 0x20 );
         *(bool*)( lVar1 + 0x4d1 ) = param_1;
         if (!param_1) {
            return;
         }

         TProcesses::addProcess((TProcesses*)( lVar1 + 2000 ), "auto-map-locations");
         return;
      }

      /* glslang::TShader::setNoStorageFormat(bool) */
      void glslang::TShader::setNoStorageFormat(TShader *this, bool param_1) {
         long lVar1;
         lVar1 = *(long*)( this + 0x20 );
         *(bool*)( lVar1 + 0x4d3 ) = param_1;
         if (!param_1) {
            return;
         }

         TProcesses::addProcess((TProcesses*)( lVar1 + 2000 ), "no-storage-format");
         return;
      }

      /* glslang::TShader::setShiftBindingForSet(glslang::TResourceType, unsigned int, unsigned int) */
      void glslang::TShader::setShiftBindingForSet(TShader *this, uint param_2, int param_3, uint param_4) {
         _Rb_tree_node_base *p_Var1;
         _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>> *this_00;
         long lVar2;
         _Rb_tree_node_base *p_Var3;
         _Rb_tree_node_base *p_Var4;
         char *pcVar5;
         _Rb_tree_node_base *p_Var6;
         long in_FS_OFFSET;
         bool bVar7;
         undefined1 auVar8[16];
         ulong local_88;
         ulong local_80;
         ulong local_68;
         ulong local_60;
         long local_40;
         lVar2 = *(long*)( this + 0x20 );
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         if (param_3 == 0) goto LAB_00104aea;
         this_00 = (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>*)( lVar2 + 0x398 + (ulong)param_2 * 0x30 );
         p_Var1 = (_Rb_tree_node_base*)( this_00 + 8 );
         p_Var3 = *(_Rb_tree_node_base**)( this_00 + 0x10 );
         p_Var6 = p_Var1;
         if (*(_Rb_tree_node_base**)( this_00 + 0x10 ) == (_Rb_tree_node_base*)0x0) {
            LAB_00104d50:p_Var3 = (_Rb_tree_node_base*)operator_new(0x28);
            *(uint*)( p_Var3 + 0x20 ) = param_4;
            *(undefined4*)( p_Var3 + 0x24 ) = 0;
            if (( *(long*)( lVar2 + 0x3c0 + (ulong)param_2 * 0x30 ) != 0 ) && ( p_Var4 = *(_Rb_tree_node_base**)( this_00 + 0x20 ) * (int*)( p_Var4 + 0x20 ) < (int)param_4 )) {
               bVar7 = false;
               LAB_00104c40:if (( p_Var1 == p_Var4 ) || ( p_Var6 = bVar7 )) {
                  bVar7 = true;
               }
 else {
                  LAB_00104df9:p_Var4 = p_Var6;
                  bVar7 = (int)param_4 < *(int*)( p_Var4 + 0x20 );
               }

               goto LAB_00104c52;
            }

            LAB_00104d9a:auVar8 = std::_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>::_M_get_insert_unique_pos(this_00, (int*)(ulong)param_4);
            LAB_00104dbe:p_Var4 = auVar8._8_8_;
            p_Var6 = auVar8._0_8_;
            if (p_Var4 != (_Rb_tree_node_base*)0x0) {
               bVar7 = p_Var6 != (_Rb_tree_node_base*)0x0;
               goto LAB_00104c40;
            }

            LAB_00104dc3:operator_delete(p_Var3, 0x28);
         }
 else {
            do {
               while (true) {
                  p_Var4 = p_Var3;
                  if (*(int*)( p_Var4 + 0x20 ) < (int)param_4) break;
                  p_Var3 = *(_Rb_tree_node_base**)( p_Var4 + 0x10 );
                  p_Var6 = p_Var4;
                  if (*(_Rb_tree_node_base**)( p_Var4 + 0x10 ) == (_Rb_tree_node_base*)0x0) goto LAB_00104b68;
               }
;
               p_Var3 = *(_Rb_tree_node_base**)( p_Var4 + 0x18 );
            }
 while ( *(_Rb_tree_node_base**)( p_Var4 + 0x18 ) != (_Rb_tree_node_base*)0x0 );
            LAB_00104b68:if (p_Var1 == p_Var6) goto LAB_00104d50;
            if (*(int*)( p_Var6 + 0x20 ) <= (int)param_4) goto LAB_00104c62;
            p_Var3 = (_Rb_tree_node_base*)operator_new(0x28);
            *(uint*)( p_Var3 + 0x20 ) = param_4;
            *(undefined4*)( p_Var3 + 0x24 ) = 0;
            if (*(int*)( p_Var6 + 0x20 ) <= (int)param_4) {
               if ((int)param_4 <= *(int*)( p_Var6 + 0x20 )) goto LAB_00104dc3;
               if (*(_Rb_tree_node_base**)( this_00 + 0x20 ) != p_Var6) {
                  p_Var4 = (_Rb_tree_node_base*)std::_Rb_tree_increment(p_Var6);
                  if ((int)param_4 < *(int*)( p_Var4 + 0x20 )) {
                     if (*(long*)( p_Var6 + 0x18 ) != 0) {
                        bVar7 = true;
                        goto LAB_00104c40;
                     }

                     goto LAB_00104df9;
                  }

                  auVar8 = std::_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>::_M_get_insert_unique_pos(this_00, (int*)(ulong)param_4);
                  goto LAB_00104dbe;
               }

               goto LAB_00104df9;
            }

            if (*(_Rb_tree_node_base**)( this_00 + 0x18 ) != p_Var6) {
               p_Var4 = (_Rb_tree_node_base*)std::_Rb_tree_decrement(p_Var6);
               if ((int)param_4 <= *(int*)( p_Var4 + 0x20 )) goto LAB_00104d9a;
               if (*(long*)( p_Var4 + 0x18 ) != 0) goto LAB_00104bdb;
               bVar7 = false;
               goto LAB_00104c40;
            }

            LAB_00104bdb:bVar7 = true;
            p_Var4 = p_Var6;
            LAB_00104c52:std::_Rb_tree_insert_and_rebalance(bVar7, p_Var3, p_Var4, p_Var1);
            *(long*)( this_00 + 0x28 ) = *(long*)( this_00 + 0x28 ) + 1;
            p_Var6 = p_Var3;
         }

         LAB_00104c62:*(int*)( p_Var6 + 0x24 ) = param_3;
         pcVar5 = (char*)glslang::TIntermediate::getResourceName(param_2);
         if (pcVar5 == (char*)0x0) {
            LAB_00104aea:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return;
         }

         TProcesses::addProcess((TProcesses*)( lVar2 + 2000 ), pcVar5);
         std::__cxx11::string::append((string*)( *(long*)( lVar2 + 0x7d8 ) + -0x20 ), " ");
         std::__cxx11::to_string((__cxx11*)&local_68, param_3);
         if (local_60 <= 0x3fffffffffffffffU - *(long*)( *(long*)( lVar2 + 0x7d8 ) + -0x18 )) {
            std::__cxx11::string::_M_append((char*)( *(long*)( lVar2 + 0x7d8 ) + -0x20 ), local_68);
            std::__cxx11::string::_M_dispose();
            std::__cxx11::string::append((string*)( *(long*)( lVar2 + 0x7d8 ) + -0x20 ), " ");
            std::__cxx11::to_string((__cxx11*)&local_88, param_4);
            if (local_80 <= 0x3fffffffffffffffU - *(long*)( *(long*)( lVar2 + 0x7d8 ) + -0x18 )) {
               std::__cxx11::string::_M_append((char*)( *(long*)( lVar2 + 0x7d8 ) + -0x20 ), local_88);
               std::__cxx11::string::_M_dispose();
               goto LAB_00104aea;
            }

         }

         /* WARNING: Subroutine does not return */
         std::__throw_length_error("basic_string::append");
      }

      /* glslang::TShader::setResourceSetBinding(std::vector<std::__cxx11::string,
   std::allocator<std::__cxx11::string > > const&) */
      void glslang::TShader::setResourceSetBinding(TShader *this, vector *param_1) {
         ulong *puVar1;
         long lVar2;
         void *pvVar3;
         ulong uVar4;
         long lVar5;
         long *plVar6;
         long *plVar7;
         ulong uVar8;
         long *plVar9;
         long lVar10;
         void *pvVar11;
         string *psVar12;
         string *psVar13;
         long *plVar14;
         string *psVar15;
         long local_48;
         lVar2 = *(long*)( this + 0x20 );
         plVar14 = *(long**)( param_1 + 8 );
         plVar9 = *(long**)param_1;
         if (param_1 == (vector*)( lVar2 + 0x4b8 )) goto LAB_00104f42;
         psVar15 = *(string**)( lVar2 + 0x4b8 );
         uVar4 = (long)plVar14 - (long)plVar9;
         if (( ulong )(*(long*)( lVar2 + 0x4c8 ) - (long)psVar15) < uVar4) {
            if (0x7fffffffffffffe0 < uVar4) {
               std::__throw_bad_array_new_length();
               LAB_00105174:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::append");
            }

            plVar6 = (long*)operator_new(uVar4);
            plVar7 = plVar6;
            for (; plVar14 != plVar9; plVar9 = plVar9 + 4) {
               *plVar7 = (long)( plVar7 + 2 );
               std::__cxx11::string::_M_construct<char*>(plVar7, *plVar9, plVar9[1] + *plVar9);
               plVar7 = plVar7 + 4;
            }

            pvVar3 = *(void**)( lVar2 + 0x4c0 );
            pvVar11 = *(void**)( lVar2 + 0x4b8 );
            if (pvVar3 != pvVar11) {
               do {
                  pvVar11 = (void*)( (long)pvVar11 + 0x20 );
                  std::__cxx11::string::_M_dispose();
               }
 while ( pvVar3 != pvVar11 );
               pvVar11 = *(void**)( lVar2 + 0x4b8 );
            }

            if (pvVar11 != (void*)0x0) {
               operator_delete(pvVar11, *(long*)( lVar2 + 0x4c8 ) - (long)pvVar11);
            }

            *(long**)( lVar2 + 0x4b8 ) = plVar6;
            plVar9 = *(long**)param_1;
            psVar15 = (string*)( (long)plVar6 + uVar4 );
            *(string**)( lVar2 + 0x4c8 ) = psVar15;
         }
 else {
            psVar12 = *(string**)( lVar2 + 0x4c0 );
            uVar8 = (long)psVar12 - (long)psVar15;
            if (uVar8 < uVar4) {
               if (0 < (long)uVar8) {
                  plVar14 = (long*)( (long)plVar9 + uVar8 );
                  do {
                     plVar9 = plVar9 + 4;
                     std::__cxx11::string::_M_assign(psVar15);
                     psVar15 = psVar15 + 0x20;
                  }
 while ( plVar9 != plVar14 );
                  psVar12 = *(string**)( lVar2 + 0x4c0 );
                  psVar15 = *(string**)( lVar2 + 0x4b8 );
                  plVar14 = *(long**)( param_1 + 8 );
                  plVar9 = *(long**)param_1;
                  uVar8 = (long)psVar12 - (long)psVar15;
               }

               plVar7 = (long*)( uVar8 + (long)plVar9 );
               if (plVar7 == plVar14) {
                  psVar15 = psVar15 + uVar4;
                  goto LAB_00104f3a;
               }

               do {
                  lVar5 = plVar7[1];
                  *(string**)psVar12 = psVar12 + 0x10;
                  std::__cxx11::string::_M_construct<char*>(psVar12, *plVar7, lVar5 + *plVar7);
                  plVar7 = plVar7 + 4;
                  psVar12 = psVar12 + 0x20;
               }
 while ( plVar7 != plVar14 );
            }
 else {
               if (0 < (long)uVar4) {
                  local_48 = (long)uVar4 >> 5;
                  psVar13 = psVar15;
                  do {
                     std::__cxx11::string::_M_assign(psVar13);
                     local_48 = local_48 + -1;
                     psVar13 = psVar13 + 0x20;
                  }
 while ( local_48 != 0 );
                  uVar8 = 0x20;
                  if (0 < (long)uVar4) {
                     uVar8 = uVar4;
                  }

                  psVar15 = psVar15 + uVar8;
               }

               for (; psVar12 != psVar15; psVar15 = psVar15 + 0x20) {
                  std::__cxx11::string::_M_dispose();
               }

            }

            plVar9 = *(long**)param_1;
            psVar15 = (string*)( uVar4 + *(long*)( lVar2 + 0x4b8 ) );
         }

         LAB_00104f3a:*(string**)( lVar2 + 0x4c0 ) = psVar15;
         LAB_00104f42:if (*(long**)( param_1 + 8 ) != plVar9) {
            TProcesses::addProcess((TProcesses*)( lVar2 + 2000 ), "resource-set-binding");
            lVar5 = *(long*)param_1;
            if (0 < (int)( *(long*)( param_1 + 8 ) - lVar5 >> 5 )) {
               lVar10 = 0;
               do {
                  puVar1 = (ulong*)( lVar5 + lVar10 * 0x20 );
                  if (*(long*)( *(long*)( lVar2 + 0x7d8 ) + -0x18 ) == 0x3fffffffffffffff) goto LAB_00105174;
                  std::__cxx11::string::_M_append((char*)( *(long*)( lVar2 + 0x7d8 ) + -0x20 ), 0x11b93e);
                  if (0x3fffffffffffffffU - *(long*)( *(long*)( lVar2 + 0x7d8 ) + -0x18 ) < puVar1[1]) goto LAB_00105174;
                  std::__cxx11::string::_M_append((char*)( *(long*)( lVar2 + 0x7d8 ) + -0x20 ), *puVar1);
                  lVar5 = *(long*)param_1;
                  lVar10 = lVar10 + 1;
               }
 while ( (int)lVar10 < (int)( *(long*)( param_1 + 8 ) - lVar5 >> 5 ) );
            }

         }

         return;
      }

      /* glslang::TShader::setEntryPoint(char const*) */
      void glslang::TShader::setEntryPoint(TShader *this, char *param_1) {
         long lVar1;
         lVar1 = *(long*)( this + 0x20 );
         strlen(param_1);
         std::__cxx11::string::_M_replace(lVar1 + 8, 0, *(char**)( lVar1 + 0x10 ), (ulong)param_1);
         TProcesses::addProcess((TProcesses*)( lVar1 + 2000 ), "entry-point");
         if (*(long*)( *(long*)( lVar1 + 0x7d8 ) + -0x18 ) != 0x3fffffffffffffff) {
            std::__cxx11::string::_M_append((char*)( *(long*)( lVar1 + 0x7d8 ) + -0x20 ), 0x11b93e);
            if (*(ulong*)( lVar1 + 0x10 ) <= 0x3fffffffffffffffU - *(long*)( *(long*)( lVar1 + 0x7d8 ) + -0x18 )) {
               std::__cxx11::string::_M_append((char*)( *(long*)( lVar1 + 0x7d8 ) + -0x20 ), *(ulong*)( lVar1 + 8 ));
               return;
            }

         }

         /* WARNING: Subroutine does not return */
         std::__throw_length_error("basic_string::append");
      }

      /* glslang::TShader::setShiftTextureBinding(unsigned int) */
      void glslang::TShader::setShiftTextureBinding(TShader *this, uint param_1) {
         long lVar1;
         char *pcVar2;
         long in_FS_OFFSET;
         ulong local_48;
         ulong local_40;
         long local_20;
         lVar1 = *(long*)( this + 0x20 );
         local_20 = *(long*)( in_FS_OFFSET + 0x28 );
         *(uint*)( lVar1 + 0x380 ) = param_1;
         pcVar2 = (char*)glslang::TIntermediate::getResourceName(1);
         if (( pcVar2 != (char*)0x0 ) && ( param_1 != 0 )) {
            TProcesses::addProcess((TProcesses*)( lVar1 + 2000 ), pcVar2);
            std::__cxx11::string::append((string*)( *(long*)( lVar1 + 0x7d8 ) + -0x20 ), " ");
            std::__cxx11::to_string((__cxx11*)&local_48, param_1);
            if (0x3fffffffffffffffU - *(long*)( *(long*)( lVar1 + 0x7d8 ) + -0x18 ) < local_40) {
               /* WARNING: Subroutine does not return */
               std::__throw_length_error("basic_string::append");
            }

            std::__cxx11::string::_M_append((char*)( *(long*)( lVar1 + 0x7d8 ) + -0x20 ), local_48);
            std::__cxx11::string::_M_dispose();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* glslang::TShader::setShiftCbufferBinding(unsigned int) */
      void glslang::TShader::setShiftCbufferBinding(TShader *this, uint param_1) {
         long lVar1;
         char *pcVar2;
         long in_FS_OFFSET;
         ulong local_48;
         ulong local_40;
         long local_20;
         lVar1 = *(long*)( this + 0x20 );
         local_20 = *(long*)( in_FS_OFFSET + 0x28 );
         *(uint*)( lVar1 + 0x388 ) = param_1;
         pcVar2 = (char*)glslang::TIntermediate::getResourceName(3);
         if (( pcVar2 != (char*)0x0 ) && ( param_1 != 0 )) {
            TProcesses::addProcess((TProcesses*)( lVar1 + 2000 ), pcVar2);
            std::__cxx11::string::append((string*)( *(long*)( lVar1 + 0x7d8 ) + -0x20 ), " ");
            std::__cxx11::to_string((__cxx11*)&local_48, param_1);
            if (0x3fffffffffffffffU - *(long*)( *(long*)( lVar1 + 0x7d8 ) + -0x18 ) < local_40) {
               /* WARNING: Subroutine does not return */
               std::__throw_length_error("basic_string::append");
            }

            std::__cxx11::string::_M_append((char*)( *(long*)( lVar1 + 0x7d8 ) + -0x20 ), local_48);
            std::__cxx11::string::_M_dispose();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* glslang::TShader::setShiftImageBinding(unsigned int) */
      void glslang::TShader::setShiftImageBinding(TShader *this, uint param_1) {
         long lVar1;
         char *pcVar2;
         long in_FS_OFFSET;
         ulong local_48;
         ulong local_40;
         long local_20;
         lVar1 = *(long*)( this + 0x20 );
         local_20 = *(long*)( in_FS_OFFSET + 0x28 );
         *(uint*)( lVar1 + 900 ) = param_1;
         pcVar2 = (char*)glslang::TIntermediate::getResourceName(2);
         if (( pcVar2 != (char*)0x0 ) && ( param_1 != 0 )) {
            TProcesses::addProcess((TProcesses*)( lVar1 + 2000 ), pcVar2);
            std::__cxx11::string::append((string*)( *(long*)( lVar1 + 0x7d8 ) + -0x20 ), " ");
            std::__cxx11::to_string((__cxx11*)&local_48, param_1);
            if (0x3fffffffffffffffU - *(long*)( *(long*)( lVar1 + 0x7d8 ) + -0x18 ) < local_40) {
               /* WARNING: Subroutine does not return */
               std::__throw_length_error("basic_string::append");
            }

            std::__cxx11::string::_M_append((char*)( *(long*)( lVar1 + 0x7d8 ) + -0x20 ), local_48);
            std::__cxx11::string::_M_dispose();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* glslang::TShader::setShiftUboBinding(unsigned int) */
      void glslang::TShader::setShiftUboBinding(TShader *this, uint param_1) {
         long lVar1;
         char *pcVar2;
         long in_FS_OFFSET;
         ulong local_48;
         ulong local_40;
         long local_20;
         lVar1 = *(long*)( this + 0x20 );
         local_20 = *(long*)( in_FS_OFFSET + 0x28 );
         *(uint*)( lVar1 + 0x388 ) = param_1;
         pcVar2 = (char*)glslang::TIntermediate::getResourceName(3);
         if (( pcVar2 != (char*)0x0 ) && ( param_1 != 0 )) {
            TProcesses::addProcess((TProcesses*)( lVar1 + 2000 ), pcVar2);
            std::__cxx11::string::append((string*)( *(long*)( lVar1 + 0x7d8 ) + -0x20 ), " ");
            std::__cxx11::to_string((__cxx11*)&local_48, param_1);
            if (0x3fffffffffffffffU - *(long*)( *(long*)( lVar1 + 0x7d8 ) + -0x18 ) < local_40) {
               /* WARNING: Subroutine does not return */
               std::__throw_length_error("basic_string::append");
            }

            std::__cxx11::string::_M_append((char*)( *(long*)( lVar1 + 0x7d8 ) + -0x20 ), local_48);
            std::__cxx11::string::_M_dispose();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* glslang::TShader::setShiftSsboBinding(unsigned int) */
      void glslang::TShader::setShiftSsboBinding(TShader *this, uint param_1) {
         long lVar1;
         char *pcVar2;
         long in_FS_OFFSET;
         ulong local_48;
         ulong local_40;
         long local_20;
         lVar1 = *(long*)( this + 0x20 );
         local_20 = *(long*)( in_FS_OFFSET + 0x28 );
         *(uint*)( lVar1 + 0x38c ) = param_1;
         pcVar2 = (char*)glslang::TIntermediate::getResourceName(4);
         if (( pcVar2 != (char*)0x0 ) && ( param_1 != 0 )) {
            TProcesses::addProcess((TProcesses*)( lVar1 + 2000 ), pcVar2);
            std::__cxx11::string::append((string*)( *(long*)( lVar1 + 0x7d8 ) + -0x20 ), " ");
            std::__cxx11::to_string((__cxx11*)&local_48, param_1);
            if (0x3fffffffffffffffU - *(long*)( *(long*)( lVar1 + 0x7d8 ) + -0x18 ) < local_40) {
               /* WARNING: Subroutine does not return */
               std::__throw_length_error("basic_string::append");
            }

            std::__cxx11::string::_M_append((char*)( *(long*)( lVar1 + 0x7d8 ) + -0x20 ), local_48);
            std::__cxx11::string::_M_dispose();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* glslang::TShader::setShiftSamplerBinding(unsigned int) */
      void glslang::TShader::setShiftSamplerBinding(TShader *this, uint param_1) {
         long lVar1;
         char *pcVar2;
         long in_FS_OFFSET;
         ulong local_48;
         ulong local_40;
         long local_20;
         lVar1 = *(long*)( this + 0x20 );
         local_20 = *(long*)( in_FS_OFFSET + 0x28 );
         *(uint*)( lVar1 + 0x37c ) = param_1;
         pcVar2 = (char*)glslang::TIntermediate::getResourceName(0);
         if (( pcVar2 != (char*)0x0 ) && ( param_1 != 0 )) {
            TProcesses::addProcess((TProcesses*)( lVar1 + 2000 ), pcVar2);
            std::__cxx11::string::append((string*)( *(long*)( lVar1 + 0x7d8 ) + -0x20 ), " ");
            std::__cxx11::to_string((__cxx11*)&local_48, param_1);
            if (0x3fffffffffffffffU - *(long*)( *(long*)( lVar1 + 0x7d8 ) + -0x18 ) < local_40) {
               /* WARNING: Subroutine does not return */
               std::__throw_length_error("basic_string::append");
            }

            std::__cxx11::string::_M_append((char*)( *(long*)( lVar1 + 0x7d8 ) + -0x20 ), local_48);
            std::__cxx11::string::_M_dispose();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* glslang::TShader::setShiftUavBinding(unsigned int) */
      void glslang::TShader::setShiftUavBinding(TShader *this, uint param_1) {
         long lVar1;
         char *pcVar2;
         long in_FS_OFFSET;
         ulong local_48;
         ulong local_40;
         long local_20;
         lVar1 = *(long*)( this + 0x20 );
         local_20 = *(long*)( in_FS_OFFSET + 0x28 );
         *(uint*)( lVar1 + 0x390 ) = param_1;
         pcVar2 = (char*)glslang::TIntermediate::getResourceName(5);
         if (( pcVar2 != (char*)0x0 ) && ( param_1 != 0 )) {
            TProcesses::addProcess((TProcesses*)( lVar1 + 2000 ), pcVar2);
            std::__cxx11::string::append((string*)( *(long*)( lVar1 + 0x7d8 ) + -0x20 ), " ");
            std::__cxx11::to_string((__cxx11*)&local_48, param_1);
            if (0x3fffffffffffffffU - *(long*)( *(long*)( lVar1 + 0x7d8 ) + -0x18 ) < local_40) {
               /* WARNING: Subroutine does not return */
               std::__throw_length_error("basic_string::append");
            }

            std::__cxx11::string::_M_append((char*)( *(long*)( lVar1 + 0x7d8 ) + -0x20 ), local_48);
            std::__cxx11::string::_M_dispose();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      undefined1 ShLinkExt(long *param_1, long param_2, int param_3) {
         undefined8 *puVar1;
         char cVar2;
         undefined1 uVar3;
         long lVar4;
         long *plVar5;
         long *plVar6;
         TPoolAllocator *pTVar7;
         long lVar8;
         long in_FS_OFFSET;
         undefined8 local_70;
         undefined8 local_68;
         long local_60;
         undefined8 *local_58;
         undefined8 *local_50;
         long local_40;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         if (( param_1 != (long*)0x0 ) && ( param_3 != 0 )) {
            local_68 = glslang::GetThreadPoolAllocator();
            local_60 = 0;
            local_58 = (undefined8*)0x0;
            local_50 = (undefined8*)0x0;
            if (0 < param_3) {
               lVar8 = 0;
               do {
                  plVar5 = *(long**)( param_2 + lVar8 );
                  if (plVar5 == (long*)0x0) goto LAB_00105990;
                  lVar4 = ( **(code**)( *plVar5 + 0x18 ) )(plVar5);
                  if (lVar4 != 0) {
                     local_70 = ( **(code**)( *plVar5 + 0x18 ) )(plVar5);
                     if (local_58 == local_50) {
                        std::vector<TShHandleBase*,glslang::pool_allocator<TShHandleBase*>>::_M_realloc_insert<TShHandleBase*>((vector<TShHandleBase*,glslang::pool_allocator<TShHandleBase*>>*)&local_68, local_58, &local_70);
                     }
 else {
                        *local_58 = local_70;
                        local_58 = local_58 + 1;
                     }

                  }

                  lVar4 = ( **(code**)( *plVar5 + 0x10 ) )(plVar5);
                  if (lVar4 != 0) {
                     local_70 = ( **(code**)( *plVar5 + 0x10 ) )(plVar5);
                     if (local_58 == local_50) {
                        std::vector<TShHandleBase*,glslang::pool_allocator<TShHandleBase*>>::_M_realloc_insert<TShHandleBase*>((vector<TShHandleBase*,glslang::pool_allocator<TShHandleBase*>>*)&local_68, local_58, &local_70);
                     }
 else {
                        *local_58 = local_70;
                        local_58 = local_58 + 1;
                     }

                  }

                  if (*(long*)( local_60 + lVar8 ) == 0) goto LAB_00105990;
                  lVar8 = lVar8 + 8;
               }
 while ( lVar8 != (long)param_3 * 8 );
            }

            plVar5 = (long*)( **(code**)( *param_1 + 0x18 ) )(param_1);
            if (plVar5 != (long*)0x0) {
               if (*(code**)( *plVar5 + 0x28 ) == TShHandleBase::getPool) {
                  pTVar7 = (TPoolAllocator*)plVar5[1];
               }
 else {
                  pTVar7 = (TPoolAllocator*)( **(code**)( *plVar5 + 0x28 ) )(plVar5);
               }

               glslang::SetThreadPoolAllocator(pTVar7);
               puVar1 = (undefined8*)plVar5[2];
               puVar1[1] = 0;
               *(undefined1*)*puVar1 = 0;
               if (0 < param_3) {
                  lVar8 = 0;
                  do {
                     lVar4 = ( **(code**)( **(long**)( local_60 + lVar8 ) + 0x10 ) )();
                     if (lVar4 != 0) {
                        plVar6 = (long*)( **(code**)( **(long**)( local_60 + lVar8 ) + 0x10 ) )();
                        if (*(code**)( *plVar6 + 0x40 ) == TCompiler::linkable) {
                           cVar2 = *(char*)( (long)plVar6 + 0x1c );
                        }
 else {
                           cVar2 = ( **(code**)( *plVar6 + 0x40 ) )();
                        }

                        if (cVar2 == '\0') {
                           glslang::TInfoSinkBase::message(plVar5[2], 2, "Not all shaders have valid object code.");
                           goto LAB_00105990;
                        }

                     }

                     lVar8 = lVar8 + 8;
                  }
 while ( lVar8 != (long)param_3 * 8 );
               }

               if (*(code**)( *plVar5 + 0x38 ) != TLinker::link) {
                  uVar3 = ( **(code**)( *plVar5 + 0x38 ) )(plVar5, &local_68);
                  goto LAB_00105992;
               }

            }

         }

         LAB_00105990:uVar3 = 0;
         LAB_00105992:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return uVar3;
      }

      /* glslang::TProgram::crossStageCheck(EShMessages) */
      uint glslang::TProgram::crossStageCheck(long param_1) {
         int iVar1;
         ulong uVar2;
         long *plVar3;
         undefined8 *puVar4;
         long *plVar5;
         ulong uVar6;
         long lVar7;
         long *plVar8;
         long *plVar9;
         long lVar10;
         long *plVar11;
         ulong uVar12;
         code *pcVar13;
         undefined8 *puVar14;
         long *plVar15;
         uint uVar16;
         long in_FS_OFFSET;
         code *local_b08[38];
         long local_9d8;
         code *local_998[24];
         ulong local_8d8;
         undefined8 *local_8d0;
         undefined8 *local_8c8;
         undefined8 *local_8c0;
         long local_868;
         TIntermediate local_828[128];
         TIntermAggregate *local_7a8;
         int local_5c4;
         long local_40;
         plVar9 = (long*)( param_1 + 0x160 );
         plVar8 = (long*)0x0;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         uVar2 = glslang::GetThreadPoolAllocator();
         plVar11 = (long*)0x0;
         plVar15 = (long*)0x0;
         LAB_00105b2c:do {
            lVar10 = *plVar9;
            if (lVar10 != 0) {
               if (plVar11 == plVar8) {
                  plVar5 = (long*)( (long)plVar8 - (long)plVar15 );
                  uVar6 = (long)plVar5 >> 3;
                  if (uVar6 == 0xfffffffffffffff) goto LAB_00105f1c;
                  if (plVar8 == plVar15) {
                     uVar12 = uVar6 + 1;
                     if (0xfffffffffffffffe < uVar6) goto LAB_00105df8;
                     if (0xfffffffffffffff < uVar12) {
                        uVar12 = 0xfffffffffffffff;
                     }

                     lVar10 = uVar12 * 8;
                     LAB_00105daf:plVar3 = (long*)glslang::TPoolAllocator::allocate(uVar2);
                     plVar11 = (long*)( (long)plVar3 + lVar10 );
                     *(long*)( (long)plVar3 + (long)plVar5 ) = *plVar9;
                     if (plVar8 == plVar15) {
                        plVar8 = plVar3 + 1;
                        plVar15 = plVar3;
                        goto LAB_00105b1f;
                     }

                  }
 else {
                     uVar12 = uVar6 * 2;
                     if (uVar12 < uVar6) {
                        LAB_00105df8:lVar10 = 0x7ffffffffffffff8;
                        goto LAB_00105daf;
                     }

                     if (uVar12 != 0) {
                        if (0xfffffffffffffff < uVar12) {
                           uVar12 = 0xfffffffffffffff;
                        }

                        lVar10 = uVar12 * 8;
                        goto LAB_00105daf;
                     }

                     *plVar5 = lVar10;
                     plVar11 = (long*)0x0;
                     plVar3 = (long*)0x0;
                  }

                  lVar10 = 0;
                  do {
                     lVar7 = lVar10;
                     *(undefined8*)( (long)plVar3 + lVar7 ) = *(undefined8*)( (long)plVar15 + lVar7 );
                     lVar10 = lVar7 + 8;
                  }
 while ( lVar7 + 8 != (long)plVar8 - (long)plVar15 );
                  plVar9 = plVar9 + 1;
                  plVar8 = (long*)( (long)plVar3 + lVar7 + 0x10 );
                  plVar15 = plVar3;
                  if (plVar9 == (long*)( param_1 + 0x1d0 )) break;
                  goto LAB_00105b2c;
               }

               *plVar8 = lVar10;
               plVar8 = plVar8 + 1;
            }

            LAB_00105b1f:plVar9 = plVar9 + 1;
            plVar3 = plVar15;
         }
 while ( plVar9 != (long*)( param_1 + 0x1d0 ) );
         uVar16 = 1;
         if (( ulong )((long)plVar8 - (long)plVar3) < 9) goto LAB_00105bb7;
         lVar10 = *plVar3;
         TIntermediate::TIntermediate(local_828, 0xe, *(undefined4*)( lVar10 + 100 ), *(undefined4*)( lVar10 + 0x60 ));
         TIntermediate::setSpv(local_828, (SpvVersion*)( lVar10 + 0x68 ));
         TIntermAggregate::TIntermAggregate((TIntermAggregate*)local_b08, 3);
         TIntermAggregate::TIntermAggregate((TIntermAggregate*)local_998);
         if (local_8c8 == local_8c0) {
            puVar14 = (undefined8*)( (long)local_8c8 - (long)local_8d0 );
            uVar2 = (long)puVar14 >> 3;
            if (uVar2 == 0xfffffffffffffff) {
               LAB_00105f1c:/* WARNING: Subroutine does not return */std::__throw_length_error("vector::_M_realloc_insert");
            }

            if (local_8c8 == local_8d0) {
               uVar6 = uVar2 + 1;
               if (uVar2 == 0xffffffffffffffff) goto LAB_00105e8c;
               LAB_00105ee3:if (0xfffffffffffffff < uVar6) {
                  uVar6 = 0xfffffffffffffff;
               }

               lVar10 = uVar6 * 8;
               LAB_00105e96:puVar4 = (undefined8*)glslang::TPoolAllocator::allocate(local_8d8);
               local_8c0 = (undefined8*)( lVar10 + (long)puVar4 );
               *(TIntermAggregate**)( (long)puVar4 + (long)puVar14 ) = (TIntermAggregate*)local_b08;
               puVar14 = puVar4 + 1;
               if (local_8c8 == local_8d0) goto LAB_00105c68;
            }
 else {
               uVar6 = uVar2 * 2;
               if (uVar6 < uVar2) {
                  LAB_00105e8c:lVar10 = 0x7ffffffffffffff8;
                  goto LAB_00105e96;
               }

               if (uVar6 != 0) goto LAB_00105ee3;
               *puVar14 = (TIntermAggregate*)local_b08;
               local_8c0 = (undefined8*)0x0;
               puVar4 = (undefined8*)0x0;
            }

            lVar10 = 0;
            do {
               *(undefined8*)( (long)puVar4 + lVar10 ) = *(undefined8*)( (long)local_8d0 + lVar10 );
               lVar10 = lVar10 + 8;
            }
 while ( (long)local_8c8 - (long)local_8d0 != lVar10 );
            puVar14 = (undefined8*)( (long)puVar4 + ( (long)local_8c8 - (long)local_8d0 ) + 8 );
         }
 else {
            *local_8c8 = (TIntermAggregate*)local_b08;
            puVar4 = local_8d0;
            puVar14 = local_8c8 + 1;
         }

         LAB_00105c68:local_8c8 = puVar14;
         local_8d0 = puVar4;
         uVar6 = (long)plVar8 - (long)plVar3 >> 3;
         uVar2 = 0;
         local_7a8 = (TIntermAggregate*)local_998;
         do {
            glslang::TIntermediate::mergeUniformObjects((TInfoSink*)local_828, *(TIntermediate**)( param_1 + 0x1e0 ));
            uVar2 = ( ulong )((int)uVar2 + 1);
         }
 while ( uVar2 < uVar6 );
         uVar2 = CONCAT71(( int7 )((ulong)local_998 >> 8), local_5c4 != 0);
         uVar16 = (uint)uVar2;
         if (uVar6 != 0) {
            uVar12 = 0;
            do {
               glslang::TIntermediate::mergeGlobalUniformBlocks((TInfoSink*)plVar3[uVar12], *(TIntermediate**)( param_1 + 0x1e0 ), SUB81(local_828, 0));
               uVar12 = ( ulong )((int)uVar12 + 1);
            }
 while ( uVar12 < uVar6 );
            lVar10 = 0;
            do {
               glslang::TIntermediate::checkStageIO((TInfoSink*)plVar3[lVar10], *(TIntermediate**)( param_1 + 0x1e0 ));
               uVar16 = (uint)uVar2 | CONCAT31(( int3 )(( uint ) * (int*)( plVar3[lVar10] + 0x264 ) >> 8), *(int*)( plVar3[lVar10] + 0x264 ) != 0);
               uVar2 = (ulong)uVar16;
               iVar1 = (int)lVar10;
               lVar10 = lVar10 + 1;
            }
 while ( iVar1 + 2 < uVar6 );
         }

         pcVar13 = glslang::TIntermediate::mergeGlobalUniformBlocks;
         uVar16 = uVar16 ^ 1;
         local_998[0] = glslang::TIntermediate::mergeGlobalUniformBlocks;
         if (local_868 != 0) {
            for (lVar10 = *(long*)( local_868 + 0x18 ); lVar10 != 0; lVar10 = *(long*)( lVar10 + 0x10 )) {
               std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>::_M_erase(*(_Rb_tree_node**)( lVar10 + 0x18 ));
            }

         }

         local_b08[0] = pcVar13;
         if (local_9d8 != 0) {
            for (lVar10 = *(long*)( local_9d8 + 0x18 ); lVar10 != 0; lVar10 = *(long*)( lVar10 + 0x10 )) {
               std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>::_M_erase(*(_Rb_tree_node**)( lVar10 + 0x18 ));
            }

         }

         TIntermediate::~TIntermediate(local_828);
         LAB_00105bb7:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return uVar16;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* glslang::TProgram::link(EShMessages) */
      undefined8 glslang::TProgram::link(TProgram *this, undefined4 param_2) {
         bool bVar1;
         char cVar2;
         undefined8 uVar3;
         int iVar4;
         if (this[0x1f0] != (TProgram)0x0) {
            return 0;
         }

         bVar1 = false;
         iVar4 = 0;
         this[0x1f0] = (TProgram)0x1;
         glslang::SetThreadPoolAllocator(*(TPoolAllocator**)( this + 8 ));
         do {
            cVar2 = linkStage(this, iVar4, param_2);
            if (cVar2 == '\0') {
               bVar1 = true;
            }

            iVar4 = iVar4 + 1;
         }
 while ( iVar4 != 0xe );
         if (bVar1) {
            return 0;
         }

         uVar3 = crossStageCheck(this, param_2);
         return uVar3;
      }

      /* (anonymous namespace)::InitializeSymbolTable(std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&, int, EProfile,
   glslang::SpvVersion const&, EShLanguage, glslang::EShSource, TInfoSink&, glslang::TSymbolTable&)
   [clone .constprop.0] [clone .isra.0] */
      void (anonymous_namespace)::
      InitializeSymbolTable(long param_1, undefined4 param_2, undefined4 param_3, undefined8 *param_4, undefined4 param_5, undefined8 *param_6, vector<glslang::TSymbolTableLevel*,std::allocator<glslang::TSymbolTableLevel*>> *param_7) {
         char cVar1;
         uint uVar2;
         TParseContextBase *pTVar3;
         ulong uVar4;
         undefined **ppuVar5;
         undefined *puVar6;
         int iVar7;
         allocator *extraout_RDX;
         allocator *extraout_RDX_00;
         vector<glslang::TSymbolTableLevel*,std::allocator<glslang::TSymbolTableLevel*>> vVar9;
         undefined8 *puVar8;
         long *plVar10;
         long in_FS_OFFSET;
         undefined **local_ce0;
         undefined **local_cd8;
         TParseContextBase *local_cd0;
         undefined4 local_cc8;
         undefined **local_c88;
         int local_c80;
         char **local_c78;
         string *psStack_c70;
         int local_c68;
         undefined8 local_c60;
         undefined8 *local_c58;
         undefined8 local_c50;
         undefined8 local_c48;
         undefined8 local_c40;
         undefined4 local_c38;
         undefined2 local_c30;
         char *local_c28[2];
         long local_c18[4];
         TPpContext local_bf8[976];
         TIntermediate local_828[2024];
         long local_40;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         glslang::TIntermediate::TIntermediate(local_828, param_5, param_2, param_3);
         std::__cxx11::string::string<std::allocator<char>>((string*)local_c18, "", extraout_RDX);
         pTVar3 = (TParseContextBase*)CreateParseContext(param_7, local_828, param_2, param_3, param_5, param_6, *param_4, param_4[1], *(undefined4*)( param_4 + 2 ), 1, 0, 1, (string*)local_c18);
         std::__cxx11::string::_M_dispose();
         local_ce0 = &PTR_includeSystem_001230e8;
         std::__cxx11::string::string<std::allocator<char>>((string*)local_c18, "", extraout_RDX_00);
         glslang::TPpContext::TPpContext(local_bf8, pTVar3, (string*)local_c18, (Includer*)&local_ce0);
         std::__cxx11::string::_M_dispose();
         local_cd8 = &PTR__TScanContext_00123368;
         *(undefined****)( pTVar3 + 0x1e8 ) = &local_cd8;
         *(TPpContext**)( pTVar3 + 0x1f0 ) = local_bf8;
         local_cc8 = 0;
         local_cd0 = pTVar3;
         uVar4 = glslang::GetThreadPoolAllocator();
         ppuVar5 = (undefined**)glslang::TPoolAllocator::allocate(uVar4);
         puVar6 = (undefined*)glslang::GetThreadPoolAllocator();
         *(undefined4*)( ppuVar5 + 2 ) = 0;
         *ppuVar5 = puVar6;
         ppuVar5[3] = (undefined*)0x0;
         ppuVar5[4] = (undefined*)( ppuVar5 + 2 );
         ppuVar5[5] = (undefined*)( ppuVar5 + 2 );
         ppuVar5[6] = (undefined*)0x0;
         ppuVar5[7] = (undefined*)0x0;
         puVar6 = (undefined*)glslang::GetThreadPoolAllocator();
         ppuVar5[9] = (undefined*)0x0;
         plVar10 = *(long**)( param_7 + 8 );
         ppuVar5[8] = puVar6;
         ppuVar5[10] = (undefined*)0x0;
         ppuVar5[0xb] = (undefined*)0x0;
         *(undefined4*)( ppuVar5 + 0xc ) = 0;
         *(undefined1*)( (long)ppuVar5 + 100 ) = 0;
         local_c88 = ppuVar5;
         if (plVar10 == *(long**)( param_7 + 0x10 )) {
            std::vector<glslang::TSymbolTableLevel*,std::allocator<glslang::TSymbolTableLevel*>>::_M_realloc_insert<glslang::TSymbolTableLevel*>(param_7, plVar10, &local_c88);
            plVar10 = *(long**)( param_7 + 8 );
         }
 else {
            *plVar10 = (long)ppuVar5;
            plVar10 = plVar10 + 1;
            *(long**)( param_7 + 8 ) = plVar10;
         }

         uVar2 = (int)( (long)plVar10 - *(long*)param_7 >> 3 ) - 1;
         local_c28[0] = *(char**)( param_1 + 8 );
         vVar9 = (vector<glslang::TSymbolTableLevel*,std::allocator<glslang::TSymbolTableLevel*>>)0x7f;
         if (uVar2 < 0x80) {
            vVar9 = SUB41(uVar2, 0);
         }

         local_c18[0] = *(long*)( param_1 + 0x10 );
         param_7[0x1f] = vVar9;
         if (local_c18[0] != 0) {
            local_c78 = local_c28;
            local_c80 = 1;
            local_c68 = 0;
            local_c88 = &PTR__TInputScanner_00123308;
            local_c60 = 0;
            local_c50 = 0;
            local_c30 = 0;
            psStack_c70 = (string*)local_c18;
            local_c58 = (undefined8*)operator_new__(0x18);
            if (0 < local_c80) {
               iVar7 = -(int)local_c50;
               puVar8 = local_c58;
               do {
                  *(int*)( puVar8 + 1 ) = iVar7;
                  iVar7 = iVar7 + 1;
                  *puVar8 = 0;
                  *(undefined4*)( (long)puVar8 + 0xc ) = 0;
                  *(undefined4*)( puVar8 + 2 ) = 0;
                  puVar8 = puVar8 + 3;
               }
 while ( local_c80 - (int)local_c50 != iVar7 );
            }

            local_c38 = 0;
            local_c40 = 1;
            *(undefined4*)( (long)local_c58 + (long)local_c68 * 0x18 + 0xc ) = 1;
            local_c48 = *local_c58;
            cVar1 = ( **(code**)( *(long*)pTVar3 + 0x1c8 ) )(pTVar3, local_bf8, &local_c88, 0);
            if (cVar1 == '\0') {
               glslang::TInfoSinkBase::message(param_6, 3, "Unable to parse built-ins");
               __printf_chk(2, "Unable to parse built-ins\n%s\n", *param_6);
               puts(local_c28[0]);
            }

            local_c88 = &PTR__TInputScanner_00123308;
            if (local_c58 != (undefined8*)0x0) {
               operator_delete__(local_c58);
            }

         }

         glslang::TPpContext::~TPpContext(local_bf8);
         ( **(code**)( *(long*)pTVar3 + 8 ) )(pTVar3);
         glslang::TIntermediate::~TIntermediate(local_828);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* (anonymous namespace)::AddContextSpecificSymbols(TBuiltInResource const*, TInfoSink&,
   glslang::TSymbolTable&, int, EProfile, glslang::SpvVersion const&, EShLanguage,
   glslang::EShSource) [clone .constprop.0] */
      undefined8(anonymous_namespace) {
         ulong uVar1;
         TBuiltIns *this;
         TBuiltIns *pTVar2;
         uVar1 = glslang::GetThreadPoolAllocator();
         this(TBuiltIns * glslang::TPoolAllocator::allocate(uVar1));
         glslang::TBuiltIns::TBuiltIns(this);
         glslang::TBuiltIns::initialize(this, param_1, param_4, param_5, param_6, param_7);
         if (*(code**)( *(long*)this + 0x20 ) == glslang::TBuiltInParseables::getCommonString_abi_cxx11_) {
            pTVar2 = this + 8;
         }
 else {
            pTVar2 = (TBuiltIns*)( **(code**)( *(long*)this + 0x20 ) )(this);
         }

         InitializeSymbolTable(pTVar2, param_4, param_5, param_6, param_7, param_2, param_3);
         ( **(code**)( *(long*)this + 0x38 ) )(this, param_4, param_5, param_6, param_7, param_3, param_1);
         ( **(code**)( *(long*)this + 8 ) )(this);
         return 1;
      }

      /* (anonymous namespace)::InitializeStageSymbolTable(glslang::TBuiltInParseables&, int, EProfile,
   glslang::SpvVersion const&, EShLanguage, glslang::EShSource, TInfoSink&, glslang::TSymbolTable**,
   glslang::TSymbolTable**) [clone .constprop.0] */
      undefined1[16](anonymous_namespace) {
         undefined8 *puVar1;
         vector<glslang::TSymbolTableLevel*,std::allocator<glslang::TSymbolTableLevel*>> *pvVar2;
         long lVar3;
         undefined8 *puVar4;
         vector<glslang::TSymbolTableLevel*,std::allocator<glslang::TSymbolTableLevel*>> *pvVar5;
         long *plVar6;
         long lVar7;
         long *plVar8;
         ulong uVar9;
         ulong uVar10;
         undefined1 auVar11[16];
         undefined1 auVar12[16];
         undefined8 uStack_70;
         uVar10 = (ulong)param_5;
         plVar8 = (long*)( uVar10 * 8 + param_8 );
         pvVar2 = (vector<glslang::TSymbolTableLevel*,std::allocator<glslang::TSymbolTableLevel*>>*)*plVar8;
         plVar6 = *(long**)( param_7 + ( ulong )(param_5 == 4 && param_3 == 8) * 8 );
         lVar7 = *plVar6;
         pvVar5 = pvVar2;
         if (lVar7 != plVar6[1]) {
            uVar9 = 0;
            do {
               puVar1 = (undefined8*)( lVar7 + uVar9 * 8 );
               puVar4 = *(undefined8**)( pvVar2 + 8 );
               if (puVar4 == *(undefined8**)( pvVar2 + 0x10 )) {
                  uStack_70 = 0x10656d;
                  std::vector<glslang::TSymbolTableLevel*,std::allocator<glslang::TSymbolTableLevel*>>::_M_realloc_insert<glslang::TSymbolTableLevel*const&>(pvVar2, puVar4, puVar1);
                  lVar7 = *plVar6;
               }
 else {
                  *puVar4 = *puVar1;
                  *(undefined8**)( pvVar2 + 8 ) = puVar4 + 1;
               }

               lVar3 = plVar6[1];
               uVar9 = ( ulong )((int)uVar9 + 1);
               *(int*)( pvVar2 + 0x24 ) = *(int*)( pvVar2 + 0x24 ) + 1;
            }
 while ( uVar9 < ( ulong )(lVar3 - lVar7 >> 3) );
            pvVar5 = (vector<glslang::TSymbolTableLevel*,std::allocator<glslang::TSymbolTableLevel*>>*)*plVar8;
         }

         *(long*)( pvVar2 + 0x18 ) = plVar6[3];
         *(short*)( pvVar2 + 0x20 ) = (short)plVar6[4];
         if (*(code**)( *param_1 + 0x28 ) == glslang::TBuiltInParseables::getStageString_abi_cxx11_) {
            plVar6 = param_1 + uVar10 * 5 + 6;
         }
 else {
            uStack_70 = 0x10664c;
            plVar6 = (long*)( **(code**)( *param_1 + 0x28 ) )(param_1, uVar10);
         }

         InitializeSymbolTable(plVar6, param_2, param_3, param_4, uVar10, param_6);
         ( **(code**)( *param_1 + 0x30 ) )(param_1, param_2, param_3, param_4, uVar10, *plVar8);
         if (( param_2 < 300 ) || ( param_3 != 8 )) {
            if (param_2 == 0x6e) {
               lVar7 = *plVar8;
               *(undefined1*)( lVar7 + 0x21 ) = 1;
               auVar12._8_8_ = uStack_70;
               auVar12._0_8_ = lVar7;
               return auVar12;
            }

         }
 else {
            pvVar5 = (vector<glslang::TSymbolTableLevel*,std::allocator<glslang::TSymbolTableLevel*>>*)*plVar8;
            pvVar5[0x20] = (vector<glslang::TSymbolTableLevel*,std::allocator<glslang::TSymbolTableLevel*>>)0x1;
         }

         auVar11._8_8_ = uStack_70;
         auVar11._0_8_ = pvVar5;
         return auVar11;
      }

      /* (anonymous namespace)::SetupBuiltinSymbolTable(int, EProfile, glslang::SpvVersion const&,
   glslang::EShSource) [clone .constprop.0] */
      void (anonymous_namespace)::
      SetupBuiltinSymbolTable(int param_1, int param_2, long param_3) {
         undefined1(**ppauVar1)[16];
         long lVar2;
         bool bVar3;
         int iVar4;
         int iVar5;
         long lVar6;
         TPoolAllocator *pTVar7;
         TPoolAllocator *this;
         undefined1(*pauVar8)[16];
         undefined1(*pauVar9)[16];
         ulong uVar10;
         TBuiltIns *this_00;
         TSymbolTable *pTVar11;
         vector<glslang::TSymbolTableLevel*,std::allocator<glslang::TSymbolTableLevel*>> *pvVar12;
         undefined8 *puVar13;
         ulong uVar14;
         TBuiltIns *pTVar15;
         uint uVar16;
         long lVar17;
         long *plVar18;
         undefined1(**ppauVar19)[16];
         long lVar20;
         long *plVar21;
         int iVar22;
         undefined8 *puVar23;
         ulong uVar24;
         long lVar25;
         long lVar26;
         void *pvVar27;
         long *plVar28;
         undefined1(**ppauVar29)[16];
         long in_FS_OFFSET;
         undefined1(*local_128[4])[16];
         undefined1 local_108[16];
         undefined4 local_f8;
         undefined8 local_f0;
         undefined1 *local_e8;
         undefined8 local_e0;
         undefined1 local_d8[16];
         undefined4 local_c8;
         undefined8 local_c0;
         long local_b8[14];
         long local_48;
         long local_40;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         local_128[2] = &local_108;
         local_108[0] = 0;
         local_e8 = local_d8;
         local_128[3] = (undefined1(*) [16])0x0;
         local_f8 = 4;
         local_f0 = 0;
         local_e0 = 0;
         local_d8[0] = 0;
         local_c8 = 4;
         local_c0 = 0;
         iVar4 = pthread_mutex_lock((pthread_mutex_t*)init_lock);
         if (iVar4 != 0) {
            std::__throw_system_error(iVar4);
            goto LAB_001071dd;
         }

         iVar22 = 1;
         iVar5 = MapVersionToIndex(param_1);
         if (( *(int*)( param_3 + 0xc ) < 1 ) && ( iVar22 = 0 ),0 < *(int*)( param_3 + 8 )) {
            iVar22 = *(byte*)( param_3 + 0x10 ) + 2;
         }

         if (param_2 - 2U < 7) {
            iVar4 = *(int*)( CSWTCH_636 + ( ulong )(param_2 - 2U) * 4 );
         }

         lVar6 = (long)iVar5;
         lVar25 = (long)iVar22;
         lVar17 = (long)iVar4;
         if (( &CommonSymbolTable )[( lVar17 + ( lVar25 + lVar6 * 4 ) * 4 ) * 4] == 0) {
            pTVar7 = (TPoolAllocator*)glslang::GetThreadPoolAllocator();
            plVar21 = local_b8;
            this(TPoolAllocator * operator_new(0x60));
            glslang::TPoolAllocator::TPoolAllocator(this, 0x2000, 0x10);
            glslang::SetThreadPoolAllocator(this);
            local_128[0] = (undefined1(*) [16])operator_new(0x28);
            *(undefined2*)local_128[0][2] = 0;
            *(undefined8*)local_128[0][1] = 0;
            *(undefined8*)( local_128[0][1] + 8 ) = 0;
            *(undefined4*)( local_128[0][2] + 4 ) = 0;
            *local_128[0] = (undefined1[16])0x0;
            pauVar8 = (undefined1(*) [16])operator_new(0x28);
            *(undefined8*)pauVar8[1] = 0;
            *(undefined8*)( pauVar8[1] + 8 ) = 0;
            *(undefined4*)( pauVar8[2] + 4 ) = 0;
            *(undefined2*)pauVar8[2] = 0;
            *pauVar8 = (undefined1[16])0x0;
            plVar28 = plVar21;
            local_128[1] = pauVar8;
            do {
               plVar18 = plVar28 + 1;
               pauVar9 = (undefined1(*) [16])operator_new(0x28);
               *plVar28 = (long)pauVar9;
               *(undefined8*)pauVar9[1] = 0;
               *(undefined8*)( pauVar9[1] + 8 ) = 0;
               *(undefined2*)pauVar9[2] = 0;
               *(undefined4*)( pauVar9[2] + 4 ) = 0;
               *pauVar9 = (undefined1[16])0x0;
               plVar28 = plVar18;
            }
 while ( &local_48 != plVar18 );
            uVar10 = glslang::GetThreadPoolAllocator();
            this_00 = (TBuiltIns*)glslang::TPoolAllocator::allocate(uVar10);
            glslang::TBuiltIns::TBuiltIns(this_00);
            glslang::TBuiltIns::initialize(this_00, param_1, param_2, param_3);
            if (*(code**)( *(long*)this_00 + 0x20 ) == glslang::TBuiltInParseables::getCommonString_abi_cxx11_) {
               pTVar15 = this_00 + 8;
            }
 else {
               pTVar15 = (TBuiltIns*)( **(code**)( *(long*)this_00 + 0x20 ) )(this_00);
            }

            ppauVar1 = local_128 + 2;
            InitializeSymbolTable(pTVar15, param_1, param_2, param_3, 0, ppauVar1);
            if (param_2 == 8) {
               if (*(code**)( *(long*)this_00 + 0x20 ) == glslang::TBuiltInParseables::getCommonString_abi_cxx11_) {
                  pTVar15 = this_00 + 8;
               }
 else {
                  pTVar15 = (TBuiltIns*)( **(code**)( *(long*)this_00 + 0x20 ) )(this_00);
               }

               InitializeSymbolTable(pTVar15, param_1, 8, param_3, 4, ppauVar1, pauVar8);
               InitializeStageSymbolTable(this_00, param_1, 8, param_3, 0, ppauVar1, local_128, plVar21);
               InitializeStageSymbolTable(this_00, param_1, 8, param_3, 4, ppauVar1, local_128, plVar21);
               if (0x135 < param_1) {
                  for (int i = 0; i < 3; i++) {
                     InitializeStageSymbolTable(this_00, param_1, 8, param_3, ( i + 1 ), ppauVar1, local_128, plVar21);
                  }

                  bVar3 = false;
                  LAB_00106f1a:InitializeStageSymbolTable(this_00, param_1, param_2, param_3, 5, ppauVar1, local_128, plVar21);
                  if (bVar3) {
                     for (int i = 0; i < 3; i++) {
                        InitializeStageSymbolTable(this_00, param_1, param_2, param_3, ( 2*i + 6 ), ppauVar1, local_128, plVar21);
                        InitializeStageSymbolTable(this_00, param_1, param_2, param_3, ( 2*i + 7 ), ppauVar1, local_128, plVar21);
                     }

                     InitializeStageSymbolTable(this_00, param_1, param_2, param_3, 0xd, ppauVar1, local_128, plVar21);
                  }
 else {
                     if (( param_2 != 8 ) || ( param_1 < 0x140 )) goto LAB_001069d3;
                     InitializeStageSymbolTable(this_00, param_1, 8, param_3, 0xd, ppauVar1, local_128, plVar21);
                  }

                  InitializeStageSymbolTable(this_00, param_1, param_2, param_3, 0xc, ppauVar1, local_128, plVar21);
               }

            }
 else {
               InitializeStageSymbolTable(this_00, param_1, param_2, param_3, 0, ppauVar1, local_128, plVar21);
               InitializeStageSymbolTable(this_00, param_1, param_2, param_3, 4, ppauVar1, local_128, plVar21);
               if (0x95 < param_1) {
                  InitializeStageSymbolTable(this_00, param_1, param_2, param_3, 1, ppauVar1, local_128, plVar21);
                  InitializeStageSymbolTable(this_00, param_1, param_2, param_3, 2, ppauVar1, local_128, plVar21);
                  InitializeStageSymbolTable(this_00, param_1, param_2, param_3, 3, ppauVar1, local_128);
                  bVar3 = 0x1c1 < param_1;
                  if (0x1a3 < param_1) goto LAB_00106f1a;
               }

            }

            LAB_001069d3:ppauVar29 = local_128;
            ( **(code**)( *(long*)this_00 + 8 ) )(this_00);
            glslang::SetThreadPoolAllocator(PerProcessGPA);
            plVar28 = &CommonSymbolTable + ( lVar17 + ( lVar25 + lVar6 * 4 ) * 4 ) * 4;
            ppauVar19 = ppauVar29;
            do {
               if (*(long*)( **ppauVar19 + 8 ) != *(long*)**ppauVar19) {
                  pTVar11 = (TSymbolTable*)operator_new(0x28);
                  *(undefined8*)( pTVar11 + 0x10 ) = 0;
                  *(undefined8*)( pTVar11 + 0x18 ) = 0;
                  *(undefined2*)( pTVar11 + 0x20 ) = 0;
                  *(undefined4*)( pTVar11 + 0x24 ) = 0;
                  *plVar28 = (long)pTVar11;
                  *(undefined1(*) [16])pTVar11 = (undefined1[16])0x0;
                  glslang::TSymbolTable::copyTable(pTVar11);
                  plVar18 = (long*)*plVar28;
                  if (plVar18[1] != *plVar18) {
                     uVar10 = 0;
                     do {
                        glslang::TSymbolTableLevel::readOnly();
                        uVar10 = ( ulong )((int)uVar10 + 1);
                     }
 while ( uVar10 < ( ulong )(plVar18[1] - *plVar18 >> 3) );
                  }

               }

               ppauVar19 = ppauVar19 + 1;
               plVar28 = plVar28 + 1;
            }
 while ( ppauVar19 != ppauVar1 );
            lVar20 = 0;
            plVar28 = (long*)( SharedSymbolTables + lVar25 * 0x380 + lVar6 * 0xe00 + lVar17 * 0xe0 );
            do {
               if (( (long*)plVar21[lVar20] )[1] != *(long*)plVar21[lVar20]) {
                  pvVar12 = (vector<glslang::TSymbolTableLevel*,std::allocator<glslang::TSymbolTableLevel*>>*)operator_new(0x28);
                  *(undefined1(*) [16])pvVar12 = (undefined1[16])0x0;
                  *(undefined8*)( pvVar12 + 0x10 ) = 0;
                  *(undefined8*)( pvVar12 + 0x18 ) = 0;
                  *(undefined2*)( pvVar12 + 0x20 ) = 0;
                  *(undefined4*)( pvVar12 + 0x24 ) = 0;
                  *plVar28 = (long)pvVar12;
                  plVar18 = (long*)( &CommonSymbolTable )[( ulong )((int)lVar20 == 4 && param_2 == 8) + ( lVar17 + ( lVar25 + lVar6 * 4 ) * 4 ) * 4];
                  lVar26 = *plVar18;
                  pTVar11 = (TSymbolTable*)pvVar12;
                  if (plVar18[1] != lVar26) {
                     puVar13 = (undefined8*)0x0;
                     puVar23 = (undefined8*)0x0;
                     uVar10 = 0;
                     while (true) {
                        if (puVar23 == puVar13) {
                           std::vector<glslang::TSymbolTableLevel*,std::allocator<glslang::TSymbolTableLevel*>>::_M_realloc_insert<glslang::TSymbolTableLevel*const&>(pvVar12);
                           lVar26 = *plVar18;
                        }
 else {
                           *puVar23 = *(undefined8*)( lVar26 + uVar10 * 8 );
                           *(undefined8**)( pvVar12 + 8 ) = puVar23 + 1;
                        }

                        lVar2 = plVar18[1];
                        uVar10 = ( ulong )((int)uVar10 + 1);
                        *(int*)( pvVar12 + 0x24 ) = *(int*)( pvVar12 + 0x24 ) + 1;
                        if (( ulong )(lVar2 - lVar26 >> 3) <= uVar10) break;
                        puVar23 = *(undefined8**)( pvVar12 + 8 );
                        puVar13 = *(undefined8**)( pvVar12 + 0x10 );
                     }
;
                     pTVar11 = (TSymbolTable*)*plVar28;
                  }

                  *(long*)( pvVar12 + 0x18 ) = plVar18[3];
                  *(short*)( pvVar12 + 0x20 ) = (short)plVar18[4];
                  glslang::TSymbolTable::copyTable(pTVar11);
                  plVar18 = (long*)*plVar28;
                  if (plVar18[1] != *plVar18) {
                     uVar10 = 0;
                     do {
                        glslang::TSymbolTableLevel::readOnly();
                        uVar10 = ( ulong )((int)uVar10 + 1);
                     }
 while ( uVar10 < ( ulong )(plVar18[1] - *plVar18 >> 3) );
                  }

               }

               lVar20 = lVar20 + 1;
               plVar28 = plVar28 + 1;
            }
 while ( lVar20 != 0xe );
            do {
               pauVar8 = *ppauVar29;
               if (pauVar8 != (undefined1(*) [16])0x0) {
                  lVar6 = *(long*)( (long)*pauVar8 + 8 );
                  pvVar27 = *(void**)*pauVar8;
                  uVar10 = ( ulong ) * (uint*)( pauVar8[2] + 4 );
                  if (uVar10 < ( ulong )(lVar6 - (long)pvVar27 >> 3)) {
                     do {
                        if (*(TSymbolTableLevel**)( lVar6 + -8 ) != (TSymbolTableLevel*)0x0) {
                           glslang::TSymbolTableLevel::~TSymbolTableLevel(*(TSymbolTableLevel**)( lVar6 + -8 ));
                           pvVar27 = *(void**)*pauVar8;
                           uVar10 = ( ulong ) * (uint*)( pauVar8[2] + 4 );
                        }

                        lVar6 = *(long*)( (long)*pauVar8 + 8 ) + -8;
                        *(long*)( (long)*pauVar8 + 8 ) = lVar6;
                        uVar14 = lVar6 - (long)pvVar27 >> 3;
                        uVar16 = (int)uVar14 - 1;
                        uVar24 = (ulong)uVar16 << 0x38;
                        if (0x7f < uVar16) {
                           uVar24 = 0x7f00000000000000;
                        }

                        *(ulong*)( pauVar8[1] + 8 ) = *(ulong*)( pauVar8[1] + 8 ) & 0xffffffffffffff | uVar24;
                     }
 while ( uVar10 < uVar14 );
                  }

                  if (pvVar27 != (void*)0x0) {
                     operator_delete(pvVar27, *(long*)pauVar8[1] - (long)pvVar27);
                  }

                  operator_delete(pauVar8, 0x28);
               }

               ppauVar29 = ppauVar29 + 1;
            }
 while ( ppauVar1 != ppauVar29 );
            do {
               plVar28 = (long*)*plVar21;
               if (plVar28 != (long*)0x0) {
                  lVar6 = plVar28[1];
                  pvVar27 = (void*)*plVar28;
                  uVar10 = ( ulong ) * (uint*)( (long)plVar28 + 0x24 );
                  if (uVar10 < ( ulong )(lVar6 - (long)pvVar27 >> 3)) {
                     do {
                        if (*(TSymbolTableLevel**)( lVar6 + -8 ) != (TSymbolTableLevel*)0x0) {
                           glslang::TSymbolTableLevel::~TSymbolTableLevel(*(TSymbolTableLevel**)( lVar6 + -8 ));
                           pvVar27 = (void*)*plVar28;
                           uVar10 = ( ulong ) * (uint*)( (long)plVar28 + 0x24 );
                        }

                        lVar6 = plVar28[1] + -8;
                        plVar28[1] = lVar6;
                        uVar14 = lVar6 - (long)pvVar27 >> 3;
                        uVar16 = (int)uVar14 - 1;
                        uVar24 = (ulong)uVar16 << 0x38;
                        if (0x7f < uVar16) {
                           uVar24 = 0x7f00000000000000;
                        }

                        plVar28[3] = plVar28[3] & 0xffffffffffffffU | uVar24;
                     }
 while ( uVar10 < uVar14 );
                  }

                  if (pvVar27 != (void*)0x0) {
                     operator_delete(pvVar27, plVar28[2] - (long)pvVar27);
                  }

                  operator_delete(plVar28, 0x28);
               }

               plVar21 = plVar21 + 1;
            }
 while ( &local_48 != plVar21 );
            glslang::TPoolAllocator::~TPoolAllocator(this);
            operator_delete(this, 0x60);
            glslang::SetThreadPoolAllocator(pTVar7);
            pthread_mutex_unlock((pthread_mutex_t*)init_lock);
            std::__cxx11::string::_M_dispose();
            std::__cxx11::string::_M_dispose();
         }
 else {
            pthread_mutex_unlock((pthread_mutex_t*)init_lock);
            std::__cxx11::string::_M_dispose();
            std::__cxx11::string::_M_dispose();
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         LAB_001071dd:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }

      /* WARNING: Removing unreachable block (ram,0x00107511) */
      /* WARNING: Removing unreachable block (ram,0x00107518) */
      /* WARNING: Removing unreachable block (ram,0x001079cc) */
      /* bool (anonymous namespace)::ProcessDeferred<(anonymous namespace)::DoPreprocessing>(TCompiler*,
   char const* const*, int, int const*, char const* const*, char const*, EShOptimizationLevel,
   TBuiltInResource const*, int, EProfile, bool, int, bool, EShMessages, glslang::TIntermediate&,
   (anonymous namespace)::DoPreprocessing&, bool, glslang::TShader::Includer&, std::__cxx11::string,
   glslang::TEnvironment const*, bool) [clone .constprop.0] */
      bool (anonymous_namespace)::
      ProcessDeferred<(anonymous_namespace)::DoPreprocessing>(long param_1, long param_2, uint param_3, long param_4, void *param_5, char *param_6, undefined8 param_7, int param_8, int param_9, char param_10, int param_11, undefined1 param_12, uint param_13, TIntermediate *param_14, undefined8 *param_15, Includer *param_16, long *param_17, TEnvironment *param_18) {
         ulong *puVar1;
         long lVar2;
         long *plVar3;
         code *pcVar4;
         string *psVar5;
         undefined1 auVar6[16];
         TIntermediate *this;
         undefined8 *puVar7;
         Includer *pIVar8;
         TEnvironment *pTVar9;
         undefined1 uVar10;
         char cVar11;
         int iVar12;
         int iVar13;
         uint uVar14;
         int iVar15;
         undefined4 uVar16;
         int iVar17;
         ulong *puVar18;
         char **ppcVar19;
         size_t sVar20;
         TInfoSink *this_00;
         TParseContextBase *pTVar21;
         undefined8 *puVar22;
         undefined8 uVar23;
         string *psVar24;
         TInfoSinkBase *pTVar25;
         uint uVar26;
         allocator *extraout_RDX;
         TInfoSink TVar28;
         ulong uVar27;
         allocator *extraout_RDX_00;
         allocator *extraout_RDX_01;
         long lVar29;
         undefined8 *puVar30;
         char *pcVar31;
         long *plVar32;
         char cVar33;
         char cVar34;
         ulong uVar35;
         long in_FS_OFFSET;
         _Function_base *local_ab0;
         char **local_a98;
         char local_a49;
         int local_a40;
         int local_a3c;
         int local_a38;
         int local_a34;
         undefined8 *local_a30;
         undefined8 local_a28;
         undefined8 uStack_a20;
         uint local_a18;
         undefined **local_a08;
         TParseContextBase *local_a00;
         undefined4 local_9f8;
         undefined **local_9b8[6];
         void *local_988;
         undefined **local_958[6];
         void *local_928;
         char *local_8f8;
         undefined8 local_8f0;
         char local_8e8[16];
         string *local_8d8;
         undefined8 local_8d0;
         ulong local_8c8[2];
         undefined1 local_8b8[16];
         code *local_8a8;
         code *pcStack_8a0;
         undefined1 local_898[16];
         code *local_888;
         code *pcStack_880;
         _Function_base local_878[16];
         code *local_868;
         code *pcStack_860;
         string *local_858;
         undefined8 local_850;
         TPpContext local_848[976];
         undefined4 *local_478;
         undefined8 local_470;
         undefined4 local_468[2];
         undefined2 local_460;
         undefined8 local_458;
         char local_450[1040];
         long local_40;
         pTVar9 = param_18;
         plVar3 = param_17;
         pIVar8 = param_16;
         puVar7 = param_15;
         this =
         param_14;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         glslang::GetThreadPoolAllocator();
         glslang::TPoolAllocator::push();
         if (param_3 == 0) {
            cVar11 = '\x01';
            goto LAB_001087ed;
         }

         iVar12 = param_3 + 2;
         if ((ulong)(long)iVar12 >> 0x3c == 0) {
            uVar35 = (long)iVar12 << 3;
            puVar18 = (ulong*)operator_new__(uVar35);
            ppcVar19 = (char**)operator_new__(uVar35);
            local_a98 = (char**)operator_new__(uVar35);
            if (0 < (int)param_3) {
               lVar29 = 0;
               do {
                  while (true) {
                     pcVar31 = *(char**)( param_2 + lVar29 * 8 );
                     ppcVar19[lVar29 + 2] = pcVar31;
                     if (( param_4 != 0 ) && ( iVar15 = -1 < iVar15 )) break;
                     sVar20 = strlen(pcVar31);
                     puVar18[lVar29 + 2] = sVar20;
                     lVar29 = lVar29 + 1;
                     if ((int)param_3 == lVar29) goto LAB_00107328;
                  }
;
                  puVar18[lVar29 + 2] = (long)iVar15;
                  lVar29 = lVar29 + 1;
               }
 while ( (int)param_3 != lVar29 );
               LAB_00107328:if (param_5 == (void*)0x0) {
                  memset(local_a98 + 2, 0, (ulong)param_3 << 3);
               }
 else {
                  memcpy(local_a98 + 2, param_5, (ulong)param_3 << 3);
               }

            }

         }
 else {
            puVar18 = (ulong*)operator_new__(0xffffffffffffffff);
            ppcVar19 = (char**)operator_new__(0xffffffffffffffff);
            local_a98 = (char**)operator_new__(0xffffffffffffffff);
         }

         local_a28 = 0;
         local_a40 = ( ( param_13 & 0x40 ) != 0 ) + 1;
         uStack_a20 = 0;
         local_a18 = local_a18 & 0xffffff00;
         local_a3c = *(int*)( param_1 + 0x18 );
         TranslateEnvironment(pTVar9, (EShMessages*)&param_13, (EShSource*)&local_a40, (EShLanguage*)&local_a3c, (SpvVersion*)&local_a28);
         glslang::TInputScanner::TInputScanner((TInputScanner*)local_9b8, param_3, ppcVar19 + 2, puVar18 + 2, (char**)0x0, 0, 0, false);
         local_a38 = 0;
         local_a34 = 1;
         uVar10 = glslang::TInputScanner::scanVersion((int*)local_9b8, (EProfile*)&local_a38, (bool*)&local_a34);
         uVar14 = param_13;
         if (param_10 == '\0') {
            uVar23 = *(undefined8*)( param_1 + 0x10 );
            if (param_11 != 0) goto LAB_001077ca;
            LAB_00107555:iVar15 = local_a3c;
            local_a49 = DeduceVersionProfile(uVar23, local_a3c, uVar10, param_8, (EProfile*)&local_a38, &local_a34, (SpvVersion*)&local_a28);
         }
 else {
            if (( param_13 & 2 ) == 0) {
               if (local_a38 == 0) goto LAB_00107469;
               if (( local_a38 != param_8 ) || ( local_a34 != param_9 )) {
                  pTVar25 = *(TInfoSinkBase**)( param_1 + 0x10 );
                  glslang::TInfoSinkBase::append((char*)pTVar25);
                  pTVar25 = (TInfoSinkBase*)glslang::TInfoSinkBase::operator <<(pTVar25, param_8);
                  glslang::TInfoSinkBase::append((char*)pTVar25);
                  glslang::ProfileName(param_9);
                  glslang::TInfoSinkBase::append((char*)pTVar25);
                  glslang::TInfoSinkBase::append((char*)pTVar25);
                  pcVar31 = (char*)glslang::TInfoSinkBase::operator <<(pTVar25, local_a38);
                  glslang::TInfoSinkBase::append(pcVar31);
                  glslang::ProfileName(local_a34);
                  glslang::TInfoSinkBase::append(pcVar31);
                  glslang::TInfoSinkBase::append(pcVar31);
               }

            }
 else if (local_a38 == 0) {
               LAB_00107469:uVar10 = 0;
            }

            iVar15 = local_a3c;
            local_a38 = param_8;
            local_a34 = param_9;
            uVar23 = *(undefined8*)( param_1 + 0x10 );
            if (param_11 != 0) {
               LAB_001077ca:local_a38 = param_11;
               goto LAB_00107555;
            }

            local_a49 = DeduceVersionProfile(uVar23, local_a3c, uVar10, param_8, (EProfile*)&local_a38, &local_a34, (SpvVersion*)&local_a28);
         }

         *(int*)( this + 100 ) = local_a38;
         *(int*)( this + 0x60 ) = local_a34;
         glslang::TIntermediate::setSpv(this, (SpvVersion*)&local_a28);
         RecordProcesses(this, uVar14, plVar3);
         if (0 < (int)uStack_a20) {
            this[0x319] = (TIntermediate)0x1;
         }

         if (( uVar14 & 0x400 ) != 0) {
            pcVar31 = local_a98[2];
            if (pcVar31 != (char*)0x0) {
               strlen(pcVar31);
               std::__cxx11::string::_M_replace(( ulong )(this + 0x760), 0, *(char**)( this + 0x768 ), (ulong)pcVar31);
            }

            if (0 < (int)param_3) {
               lVar29 = 0x10;
               do {
                  puVar1 = (ulong*)( (long)ppcVar19 + lVar29 );
                  if (0x3fffffffffffffffU - *(long*)( this + 0x788 ) < *(ulong*)( (long)puVar18 + lVar29 )) goto LAB_001084d1;
                  lVar29 = lVar29 + 8;
                  std::__cxx11::string::_M_append((char*)( this + 0x780 ), *puVar1);
               }
 while ( (long)(int)param_3 * 8 + 0x10 != lVar29 );
            }

         }

         SetupBuiltinSymbolTable(local_a38, local_a34, (SpvVersion*)&local_a28);
         iVar13 = MapVersionToIndex(local_a38);
         iVar17 = 1;
         if (uStack_a20._4_4_ < 1) {
            iVar17 = 0;
            if (0 < (int)uStack_a20) {
               iVar17 = ( local_a18 & 0xff ) + 2;
            }

         }

         lVar29 = 0;
         if (local_a34 - 2U < 7) {
            lVar29 = (long)*(int*)( CSWTCH_636 + ( ulong )(local_a34 - 2U) * 4 );
         }

         plVar32 = *(long**)( SharedSymbolTables + ( (long)iVar17 * 0x70 + (long)iVar13 * 0x1c0 + lVar29 * 0x1c + (long)iVar15 ) * 8 );
         this_00 = (TInfoSink*)operator_new(0x28);
         *(undefined8*)( this_00 + 0x10 ) = 0;
         *(undefined8*)( this_00 + 0x18 ) = 0;
         *(undefined2*)( this_00 + 0x20 ) = 0;
         *(undefined4*)( this_00 + 0x24 ) = 0;
         *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
         if (plVar32 == (long*)0x0) {
            uVar35 = *(ulong*)( this + 0x298 );
            if (uVar35 != 0) {
               uVar27 = 0x7f00000000000000;
               goto LAB_00108862;
            }

         }
 else {
            lVar29 = *plVar32;
            if (lVar29 != plVar32[1]) {
               puVar30 = (undefined8*)0x0;
               puVar22 = (undefined8*)0x0;
               uVar35 = 0;
               while (true) {
                  if (puVar30 == puVar22) {
                     std::vector<glslang::TSymbolTableLevel*,std::allocator<glslang::TSymbolTableLevel*>>::_M_realloc_insert<glslang::TSymbolTableLevel*const&>((vector<glslang::TSymbolTableLevel*,std::allocator<glslang::TSymbolTableLevel*>>*)this_00);
                     lVar29 = *plVar32;
                  }
 else {
                     *puVar22 = *(undefined8*)( lVar29 + uVar35 * 8 );
                     *(undefined8**)( this_00 + 8 ) = puVar22 + 1;
                  }

                  lVar2 = plVar32[1];
                  uVar35 = ( ulong )((int)uVar35 + 1);
                  *(int*)( this_00 + 0x24 ) = *(int*)( this_00 + 0x24 ) + 1;
                  if (( ulong )(lVar2 - lVar29 >> 3) <= uVar35) break;
                  puVar22 = *(undefined8**)( this_00 + 8 );
                  puVar30 = *(undefined8**)( this_00 + 0x10 );
               }
;
            }

            *(long*)( this_00 + 0x18 ) = plVar32[3];
            *(short*)( this_00 + 0x20 ) = (short)plVar32[4];
            uVar35 = *(ulong*)( this + 0x298 );
            if (uVar35 != 0) {
               uVar26 = (int)( *(long*)( this_00 + 8 ) - *(long*)this_00 >> 3 ) - 1;
               uVar27 = 0x7f00000000000000;
               if (uVar26 < 0x80) {
                  uVar27 = (ulong)uVar26 << 0x38;
               }

               LAB_00108862:*(ulong*)( this_00 + 0x18 ) = uVar35 & 0xffffffffffffff | uVar27;
            }

         }

         cVar11 = AddContextSpecificSymbols(param_7, *(undefined8*)( param_1 + 0x10 ), this_00, local_a38, local_a34, (SpvVersion*)&local_a28, iVar15);
         if (cVar11 != '\0') {
            if (( uVar14 & 0x4000 ) != 0) {
               lVar29 = *(long*)( param_1 + 0x10 );
               pcVar31 = (char*)( lVar29 + 0x30 );
               glslang::TInfoSinkBase::append(pcVar31);
               glslang::TSymbolTable::dump(this_00, SUB81(lVar29, 0));
               glslang::TInfoSinkBase::append(pcVar31);
            }

            local_478 = local_468;
            std::__cxx11::string::_M_construct<char*>((string*)&local_478, *plVar3, plVar3[1] + *plVar3);
            pTVar21 = (TParseContextBase*)CreateParseContext(this_00, this, local_a38, local_a34, iVar15, *(undefined8*)( param_1 + 0x10 ), local_a28, uStack_a20, local_a18, param_12, uVar14, 0, (string*)&local_478);
            std::__cxx11::string::_M_dispose();
            pcVar31 = local_a98[2];
            pTVar21[0x1c0] = (TParseContextBase)0x0;
            if (pcVar31 == (char*)0x0) {
               pcVar31 = "";
            }

            std::__cxx11::string::string<std::allocator<char>>((string*)&local_478, pcVar31, extraout_RDX);
            glslang::TPpContext::TPpContext(local_848, pTVar21, (string*)&local_478, pIVar8);
            std::__cxx11::string::_M_dispose();
            local_a08 = &PTR__TScanContext_00123368;
            local_9f8 = 0;
            *(undefined****)( pTVar21 + 0x1e8 ) = &local_a08;
            *(TPpContext**)( pTVar21 + 0x1f0 ) = local_848;
            local_a00 = pTVar21;
            ( **(code**)( *(long*)pTVar21 + 0x178 ) )(pTVar21, param_7);
            if (local_a49 == '\0') {
               *(int*)( pTVar21 + 0xd4 ) = *(int*)( pTVar21 + 0xd4 ) + 1;
            }

            ( **(code**)( *(long*)pTVar21 + 0x10 ) )(pTVar21);
            local_8f0 = 0;
            local_8f8 = local_8e8;
            local_8e8[0] = '\0';
            glslang::TParseVersions::getPreamble((string*)pTVar21);
            *ppcVar19 = local_8f8;
            sVar20 = strlen(local_8f8);
            *puVar18 = sVar20;
            *local_a98 = (char*)0x0;
            ppcVar19[1] = param_6;
            sVar20 = strlen(param_6);
            puVar18[1] = sVar20;
            local_a98[1] = (char*)0x0;
            glslang::TInputScanner::TInputScanner((TInputScanner*)local_958, iVar12, ppcVar19, puVar18, local_a98, 2, 0, false);
            uVar35 = glslang::GetThreadPoolAllocator();
            puVar22 = (undefined8*)glslang::TPoolAllocator::allocate(uVar35);
            uVar23 = glslang::GetThreadPoolAllocator();
            *(undefined4*)( puVar22 + 2 ) = 0;
            *puVar22 = uVar23;
            puVar22[3] = 0;
            puVar22[4] = puVar22 + 2;
            puVar22[5] = puVar22 + 2;
            puVar22[6] = 0;
            puVar22[7] = 0;
            uVar23 = glslang::GetThreadPoolAllocator();
            plVar32 = *(long**)( this_00 + 8 );
            plVar3 = *(long**)( this_00 + 0x10 );
            puVar22[9] = 0;
            puVar22[8] = uVar23;
            puVar22[10] = 0;
            puVar22[0xb] = 0;
            *(undefined4*)( puVar22 + 0xc ) = 0;
            *(undefined1*)( (long)puVar22 + 100 ) = 0;
            local_a30 = puVar22;
            if (plVar32 == plVar3) {
               std::vector<glslang::TSymbolTableLevel*,std::allocator<glslang::TSymbolTableLevel*>>::_M_realloc_insert<glslang::TSymbolTableLevel*>((vector<glslang::TSymbolTableLevel*,std::allocator<glslang::TSymbolTableLevel*>>*)this_00, plVar32, &local_a30);
               plVar32 = *(long**)( this_00 + 8 );
            }
 else {
               *plVar32 = (long)puVar22;
               plVar32 = plVar32 + 1;
               *(long**)( this_00 + 8 ) = plVar32;
            }

            uVar14 = (int)( (long)plVar32 - *(long*)this_00 >> 3 ) - 1;
            TVar28 = (TInfoSink)0x7f;
            if (uVar14 < 0x80) {
               TVar28 = SUB41(uVar14, 0);
            }

            this_00[0x1f] = TVar28;
            if (( DoPreprocessing::operator ()(glslang::TParseContextBase & glslang::TPpContext & glslang::TInputScanner & glslang::TSymbolTable & glslang::TIntermediate & EShOptimizationLevel, EShMessages) == '\0' ) && ( iVar12 = __cxa_guard_acquire(&DoPreprocessing::operator ()(glslang::TParseContextBase & glslang::TPpContext & glslang::TInputScanner & glslang::TSymbolTable & glslang::TIntermediate & EShOptimizationLevel, EShMessages), ::noNeededSpaceBeforeTokens) ),iVar12 != 0) {
               std::__cxx11::string::string<std::allocator<char>>((string*)DoPreprocessing::operator ()(glslang::TParseContextBase & glslang::TPpContext & glslang::TInputScanner & glslang::TSymbolTable & glslang::TIntermediate & EShOptimizationLevel, EShMessages), ::noNeededSpaceBeforeTokens, ";)[].,", extraout_RDX_01);
               __cxa_atexit(std::__cxx11::string::~string, DoPreprocessing::operator ()(glslang::TParseContextBase & glslang::TPpContext & glslang::TInputScanner & glslang::TSymbolTable & glslang::TIntermediate & EShOptimizationLevel, EShMessages), ::noNeededSpaceBeforeTokens, &__dso_handle);
               __cxa_guard_release (&DoPreprocessing::
                           operator()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)
                           ::noNeededSpaceBeforeTokens);
            }

            if (( DoPreprocessing::operator ()(glslang::TParseContextBase & glslang::TPpContext & glslang::TInputScanner & glslang::TSymbolTable & glslang::TIntermediate & EShOptimizationLevel, EShMessages) == '\0' ) && ( iVar12 = __cxa_guard_acquire(&DoPreprocessing::operator ()(glslang::TParseContextBase & glslang::TPpContext & glslang::TInputScanner & glslang::TSymbolTable & glslang::TIntermediate & EShOptimizationLevel, EShMessages), ::noNeededSpaceAfterTokens) ),iVar12 != 0) {
               std::__cxx11::string::string<std::allocator<char>>((string*)DoPreprocessing::operator ()(glslang::TParseContextBase & glslang::TPpContext & glslang::TInputScanner & glslang::TSymbolTable & glslang::TIntermediate & EShOptimizationLevel, EShMessages), ::noNeededSpaceAfterTokens, ".([", extraout_RDX_00);
               __cxa_atexit(std::__cxx11::string::~string, DoPreprocessing::operator ()(glslang::TParseContextBase & glslang::TPpContext & glslang::TInputScanner & glslang::TSymbolTable & glslang::TIntermediate & EShOptimizationLevel, EShMessages), ::noNeededSpaceAfterTokens, &__dso_handle);
               __cxa_guard_release (&DoPreprocessing::
                           operator()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)
                           ::noNeededSpaceAfterTokens);
            }

            local_458 = 0;
            local_460 = 0;
            local_478 = (undefined4*)0x0;
            local_468[0] = 0;
            local_470 = 0;
            local_450[0] = '\0';
            *(TInputScanner**)( pTVar21 + 0xd8 ) = (TInputScanner*)local_958;
            glslang::TPpContext::setInput((TInputScanner*)local_848, SUB81((TInputScanner*)local_958, 0));
            local_898 = (undefined1[16])0x0;
            local_8d0 = 0;
            local_8c8[0] = local_8c8[0] & 0xffffffffffffff00;
            local_888 = (code*)0x0;
            pcStack_880 = (code*)0x0;
            local_8d8 = (string*)local_8c8;
            puVar22 = (undefined8*)operator_new(0x18);
            puVar22[1] = 0;
            *puVar22 = glslang::TInputScanner::getLastValidSourceIndex;
            puVar22[2] = (TInputScanner*)local_958;
            local_898._0_8_ = puVar22;
            for (int i = 0; i < 16; i++) {
               local_878[i] = (_Function_base)0;
            }

            local_888 = std::_Function_handler<int(),std::_Bind<int(glslang::TInputScanner::*(glslang::TInputScanner*))()const>>::_M_manager;
            pcStack_880 = std::_Function_handler<int(),std::_Bind<int(glslang::TInputScanner::*(glslang::TInputScanner*))()const>>::_M_invoke;
            local_868 = (code*)0x0;
            pcStack_860 = (code*)0x0;
            std::_Function_handler<int(),std::_Bind<int(glslang::TInputScanner::*(glslang::TInputScanner*))()const>>::_M_manager(local_878, (_Function_base*)local_898, 2);
            local_868 = local_888;
            pcStack_860 = pcStack_880;
            local_850 = _LC70;
            local_858 = (string*)&local_8d8;
            std::_Function_base::~_Function_base((_Function_base*)local_898);
            local_8b8._8_8_ = (string*)&local_8d8;
            local_8b8._0_8_ = local_878;
            local_8a8 = std::_Function_handler<void(int, char_const *, char_const *),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, char_const *, char_const *)#1}>::_M_manager;
            pcStack_8a0 = std::_Function_handler<void(int, char_const *, char_const *),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, char_const *, char_const *)#1}>::_M_invoke;
            if (*(code**)( *(long*)pTVar21 + 0x188 ) == glslang::TParseContextBase::setExtensionCallback) {
               local_898 = *(undefined1(*) [16])( pTVar21 + 0x430 );
               local_888 = *(code**)( pTVar21 + 0x440 );
               *(_Function_base**)( pTVar21 + 0x430 ) = local_878;
               *(string**)( pTVar21 + 0x438 ) = (string*)&local_8d8;
               *(code**)( pTVar21 + 0x440 ) = std::_Function_handler<void(int, char_const *, char_const *),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, char_const *, char_const *)#1}>::_M_manager;
               pcStack_880 = *(code**)( pTVar21 + 0x448 );
               *(code**)( pTVar21 + 0x448 ) = std::_Function_handler<void(int, char_const *, char_const *),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, char_const *, char_const *)#1}>::_M_invoke;
               std::_Function_base::~_Function_base((_Function_base*)local_898);
            }
 else {
               ( **(code**)( *(long*)pTVar21 + 0x188 ) )(pTVar21, local_8b8);
            }

            local_ab0 = (_Function_base*)local_8b8;
            std::_Function_base::~_Function_base(local_ab0);
            pcVar4 = *(code**)( *(long*)pTVar21 + 0x180 );
            local_8b8 = (undefined1[16])0x0;
            local_8a8 = (code*)0x0;
            pcStack_8a0 = (code*)0x0;
            puVar22 = (undefined8*)operator_new(0x18);
            local_8b8._0_8_ = puVar22;
            puVar22[2] = pTVar21;
            *puVar22 = local_878;
            puVar22[1] = (string*)&local_8d8;
            local_8a8 = std::_Function_handler<void(int, int, bool, int, char_const *),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, int, bool, int, char_const *)#1}>::_M_manager;
            pcStack_8a0 = std::_Function_handler<void(int, int, bool, int, char_const *),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, int, bool, int, char_const *)#1}>::_M_invoke;
            if (pcVar4 == glslang::TParseContextBase::setLineCallback) {
               local_898 = (undefined1[16])0x0;
               local_888 = (code*)0x0;
               pcStack_880 = (code*)0x0;
               std::_Function_handler<void(int, int, bool, int, char_const *),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, int, bool, int, char_const *)#1}>::_M_manager((_Function_base*)local_898, local_ab0, 2);
               auVar6 = *(undefined1(*) [16])( pTVar21 + 0x3d0 );
               local_888 = *(code**)( pTVar21 + 0x3e0 );
               *(undefined8*)( pTVar21 + 0x3d0 ) = local_898._0_8_;
               *(undefined8*)( pTVar21 + 0x3d8 ) = local_898._8_8_;
               *(code**)( pTVar21 + 0x3e0 ) = local_8a8;
               pcStack_880 = *(code**)( pTVar21 + 1000 );
               *(code**)( pTVar21 + 1000 ) = pcStack_8a0;
               local_898 = auVar6;
               std::_Function_base::~_Function_base((_Function_base*)local_898);
            }
 else {
               ( *pcVar4 )(pTVar21, local_ab0);
            }

            std::_Function_base::~_Function_base(local_ab0);
            local_8b8._8_8_ = (string*)&local_8d8;
            local_8b8._0_8_ = local_878;
            local_8a8 = std::_Function_handler<void(int, int, char_const *),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, int, char_const *)#1}>::_M_manager;
            pcStack_8a0 = std::_Function_handler<void(int, int, char_const *),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, int, char_const *)#1}>::_M_invoke;
            if (*(code**)( *(long*)pTVar21 + 400 ) == glslang::TParseContextBase::setVersionCallback) {
               local_898 = *(undefined1(*) [16])( pTVar21 + 0x410 );
               local_888 = *(code**)( pTVar21 + 0x420 );
               *(_Function_base**)( pTVar21 + 0x410 ) = local_878;
               *(string**)( pTVar21 + 0x418 ) = (string*)&local_8d8;
               *(code**)( pTVar21 + 0x420 ) = std::_Function_handler<void(int, int, char_const *),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, int, char_const *)#1}>::_M_manager;
               pcStack_880 = *(code**)( pTVar21 + 0x428 );
               *(code**)( pTVar21 + 0x428 ) = std::_Function_handler<void(int, int, char_const *),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, int, char_const *)#1}>::_M_invoke;
               std::_Function_base::~_Function_base((_Function_base*)local_898);
            }
 else {
               ( **(code**)( *(long*)pTVar21 + 400 ) )(pTVar21, local_ab0);
            }

            std::_Function_base::~_Function_base(local_ab0);
            local_8a8 = std::_Function_handler<void(int, glslang::TVector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>> const &),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, glslang::TVector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>> const &)#1}>::_M_manager;
            pcStack_8a0 = std::_Function_handler<void(int, glslang::TVector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>> const &),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, glslang::TVector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>> const &)#1}>::_M_invoke;
            if (*(code**)( *(long*)pTVar21 + 0x198 ) == glslang::TParseContextBase::setPragmaCallback) {
               local_898 = *(undefined1(*) [16])( pTVar21 + 0x3f0 );
               local_888 = *(code**)( pTVar21 + 0x400 );
               *(_Function_base**)( pTVar21 + 0x3f0 ) = local_878;
               *(string**)( pTVar21 + 0x3f8 ) = (string*)&local_8d8;
               *(code**)( pTVar21 + 0x400 ) = std::_Function_handler<void(int, glslang::TVector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>> const &),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, glslang::TVector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>> const &)#1}>::_M_manager;
               pcStack_880 = *(code**)( pTVar21 + 0x408 );
               *(code**)( pTVar21 + 0x408 ) = std::_Function_handler<void(int, glslang::TVector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>> const &),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, glslang::TVector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>> const &)#1}>::_M_invoke;
               std::_Function_base::~_Function_base((_Function_base*)local_898);
            }
 else {
               ( **(code**)( *(long*)pTVar21 + 0x198 ) )(pTVar21, local_ab0);
            }

            std::_Function_base::~_Function_base(local_ab0);
            local_8a8 = std::_Function_handler<void(int, char_const *),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, char_const *)#1}>::_M_manager;
            pcStack_8a0 = std::_Function_handler<void(int, char_const *),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, char_const *)#1}>::_M_invoke;
            if (*(code**)( *(long*)pTVar21 + 0x1a0 ) == glslang::TParseContextBase::setErrorCallback) {
               local_898 = *(undefined1(*) [16])( pTVar21 + 0x450 );
               local_888 = *(code**)( pTVar21 + 0x460 );
               *(_Function_base**)( pTVar21 + 0x450 ) = local_878;
               *(string**)( pTVar21 + 0x458 ) = (string*)&local_8d8;
               *(code**)( pTVar21 + 0x460 ) = std::_Function_handler<void(int, char_const *),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, char_const *)#1}>::_M_manager;
               pcStack_880 = *(code**)( pTVar21 + 0x468 );
               *(code**)( pTVar21 + 0x468 ) = std::_Function_handler<void(int, char_const *),(anonymous_namespace)::DoPreprocessing::operator ()(glslang::TParseContextBase&,glslang::TPpContext&,glslang::TInputScanner&,bool,glslang::TSymbolTable&,glslang::TIntermediate&,EShOptimizationLevel,EShMessages)::{lambda(int, char_const *)#1}>::_M_invoke;
               std::_Function_base::~_Function_base((_Function_base*)local_898);
            }
 else {
               ( **(code**)( *(long*)pTVar21 + 0x1a0 ) )(pTVar21, local_ab0);
            }

            std::_Function_base::~_Function_base(local_ab0);
            local_8b8._8_8_ = 0;
            local_8b8._0_8_ = &local_8a8;
            local_8a8 = (code*)( (ulong)local_8a8 & 0xffffffffffffff00 );
            iVar12 = -1;
            LAB_00108200:while (true) {
               iVar15 = glslang::TPpContext::tokenize((TPpToken*)local_848);
               cVar33 = (char)(string*)&local_8d8;
               if (iVar15 == -1) break;
               if (local_868 == (code*)0x0) {
                  LAB_00108d64:/* WARNING: Subroutine does not return */std::__throw_bad_function_call();
               }

               iVar13 = ( *pcStack_860 )(local_878);
               if ((int)local_850 == iVar13) {
                  cVar34 = '\0';
               }
 else {
                  if (local_850 != 0xffffffff) {
                     std::__cxx11::string::push_back((char)local_858);
                  }

                  if (local_868 == (code*)0x0) goto LAB_00108d64;
                  uVar16 = ( *pcStack_860 )(local_878);
                  local_850 = CONCAT44(0xffffffff, uVar16);
                  cVar34 = cVar11;
               }

               iVar13 = local_470._4_4_;
               if (local_868 == (code*)0x0) goto LAB_00108d64;
               iVar17 = ( *pcStack_860 )(local_878);
               if ((int)local_850 == iVar17) {
                  iVar17 = local_850._4_4_;
               }
 else {
                  if (local_850 != 0xffffffff) {
                     std::__cxx11::string::push_back((char)local_858);
                  }

                  if (local_868 == (code*)0x0) goto LAB_00108d64;
                  uVar16 = ( *pcStack_860 )(local_878);
                  local_850 = CONCAT44(0xffffffff, uVar16);
                  iVar17 = -1;
               }

               if (iVar17 < iVar13) {
                  do {
                     psVar5 = local_858;
                     if (0 < iVar17) {
                        uVar35 = *(ulong*)( local_858 + 8 );
                        psVar24 = *(string**)local_858;
                        if (psVar24 == local_858 + 0x10) {
                           uVar27 = 0xf;
                        }
 else {
                           uVar27 = *(ulong*)( local_858 + 0x10 );
                        }

                        if (uVar27 < uVar35 + 1) {
                           std::__cxx11::string::_M_mutate((ulong)local_858, uVar35, (char*)0x0, 0);
                           psVar24 = *(string**)psVar5;
                        }

                        psVar24[uVar35] = (string)0xa;
                        *(ulong*)( psVar5 + 8 ) = uVar35 + 1;
                        *(undefined1*)( *(long*)psVar5 + 1 + uVar35 ) = 0;
                     }

                     iVar17 = local_850._4_4_ + 1;
                     local_850 = CONCAT44(iVar17, (int)local_850);
                  }
 while ( iVar17 < iVar13 );
                  local_898._0_8_ = &local_888;
                  std::__cxx11::string::_M_construct((ulong)local_898, (char)local_468[0] + -1);
                  if ((ulong)local_898._8_8_ <= 0x3fffffffffffffff - local_8d0) {
                     std::__cxx11::string::_M_append((char*)&local_8d8, local_898._0_8_);
                     std::__cxx11::string::_M_dispose();
                     LAB_00108479:if (iVar15 == 0xa2) {
                        strlen(local_450);
                        std::__cxx11::string::_M_replace((ulong)local_ab0, 0, (char*)local_8b8._8_8_, (ulong)local_450);
                        goto LAB_0010858a;
                     }

                     if (iVar15 == 0xa1) {
                        std::__cxx11::string::append((string*)&local_8d8, "\"");
                        sVar20 = strlen(local_450);
                        if (sVar20 <= 0x3fffffffffffffff - local_8d0) {
                           std::__cxx11::string::_M_append((char*)&local_8d8, (ulong)local_450);
                           goto LAB_00108826;
                        }

                     }
 else {
                        LAB_001083c0:sVar20 = strlen(local_450);
                        if (sVar20 <= 0x3fffffffffffffff - local_8d0) goto code_r0x001083ee;
                     }

                  }

                  goto LAB_001084d1;
               }

               if (( iVar12 == -1 ) || ( cVar34 == '\x01' )) goto LAB_00108479;
               if (iVar15 != 0x28) {
                  lVar29 = std::__cxx11::string::find(-0x20, (ulong)(uint)(int)(char)iVar15);
                  if (( lVar29 == -1 ) && ( lVar29 = std::__cxx11::string::find(-0x60, (ulong)(uint)(int)(char)iVar12) ),lVar29 == -1) {
                     std::__cxx11::string::push_back(cVar33);
                  }

                  goto LAB_00108479;
               }

               if (iVar12 == 0xa2) {
                  if (local_8b8._8_8_ == 2) {
                     if (*(short*)local_8b8._0_8_ != 0x6669) goto LAB_001083c0;
                     goto LAB_001085d8;
                  }

                  if (local_8b8._8_8_ == 3) {
                     if (( *(short*)local_8b8._0_8_ != 0x6f66 ) || ( *(char*)( local_8b8._0_8_ + 2 ) != 'r' )) goto LAB_001083c0;
                     goto LAB_001085d8;
                  }

                  if (local_8b8._8_8_ != 5) {
                     if (( ( local_8b8._8_8_ != 6 ) || ( *(int*)local_8b8._0_8_ != 0x74697773 ) ) || ( (short)*(int*)( local_8b8._0_8_ + 4 ) != 0x6863 )) goto LAB_001083c0;
                     goto LAB_001085d8;
                  }

                  if (( *(int*)local_8b8._0_8_ == 0x6c696877 ) && ( (char)*(int*)( local_8b8._0_8_ + 4 ) == 'e' )) goto LAB_001085d8;
                  goto LAB_001083c0;
               }

               LAB_001085d8:std::__cxx11::string::push_back(cVar33);
               LAB_0010858a:sVar20 = strlen(local_450);
               if (0x3fffffffffffffff - local_8d0 < sVar20) {
                  LAB_001084d1:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::append");
               }

               std::__cxx11::string::_M_append((char*)&local_8d8, (ulong)local_450);
               iVar12 = iVar15;
            }
;
            std::__cxx11::string::push_back(cVar33);
            psVar5 = (string*)*puVar7;
            psVar24 = *(string**)psVar5;
            if (psVar24 == psVar5 + 0x10) {
               if (local_8d8 == (string*)local_8c8) goto LAB_00108c3f;
               *(string**)psVar5 = local_8d8;
               *(ulong*)( psVar5 + 8 ) = local_8d0;
               *(ulong*)( psVar5 + 0x10 ) = local_8c8[0];
               local_8d8 = (string*)local_8c8;
            }
 else if (local_8d8 == (string*)local_8c8) {
               LAB_00108c3f:if (psVar5 != (string*)&local_8d8) {
                  if (local_8d0 != 0) {
                     if (local_8d0 == 1) {
                        *psVar24 = local_8c8[0]._0_1_;
                        psVar24 = *(string**)psVar5;
                     }
 else {
                        uVar14 = (uint)local_8d0;
                        uVar35 = local_8d0 & 0xffffffff;
                        if (uVar14 < 8) {
                           if (( local_8d0 & 4 ) == 0) {
                              if (uVar14 != 0) {
                                 *psVar24 = local_8c8[0]._0_1_;
                                 if (( local_8d0 & 2 ) == 0) goto LAB_00108c91;
                                 *(undefined2*)( psVar24 + ( uVar35 - 2 ) ) = *(undefined2*)( (long)local_8c8 + ( uVar35 - 2 ) );
                                 psVar24 = *(string**)psVar5;
                              }

                           }
 else {
                              *(undefined4*)psVar24 = (undefined4)local_8c8[0];
                              *(undefined4*)( psVar24 + ( uVar35 - 4 ) ) = *(undefined4*)( (long)local_8c8 + ( uVar35 - 4 ) );
                              psVar24 = *(string**)psVar5;
                           }

                        }
 else {
                           *(ulong*)psVar24 = local_8c8[0];
                           *(undefined8*)( psVar24 + ( ( local_8d0 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)local_8c8 + ( ( local_8d0 & 0xffffffff ) - 8 ) );
                           lVar29 = (long)psVar24 - ( ( ulong )(psVar24 + 8) & 0xfffffffffffffff8 );
                           uVar14 = (int)lVar29 + uVar14 & 0xfffffff8;
                           if (7 < uVar14) {
                              uVar26 = 0;
                              do {
                                 uVar35 = (ulong)uVar26;
                                 uVar26 = uVar26 + 8;
                                 *(undefined8*)( ( ( ulong )(psVar24 + 8) & 0xfffffffffffffff8 ) + uVar35 ) = *(undefined8*)( (string*)local_8c8 + ( uVar35 - lVar29 ) );
                              }
 while ( uVar26 < uVar14 );
                           }

                           LAB_00108c91:psVar24 = *(string**)psVar5;
                        }

                     }

                  }

                  *(ulong*)( psVar5 + 8 ) = local_8d0;
                  psVar24[local_8d0] = (string)0x0;
               }

            }
 else {
               uVar35 = *(ulong*)( psVar5 + 0x10 );
               *(string**)psVar5 = local_8d8;
               *(ulong*)( psVar5 + 8 ) = local_8d0;
               *(ulong*)( psVar5 + 0x10 ) = local_8c8[0];
               local_8d8 = (string*)local_8c8;
               if (psVar24 != (string*)0x0) {
                  local_8d8 = psVar24;
                  local_8c8[0] = uVar35;
               }

            }

            local_8d0 = 0;
            *local_8d8 = (string)0x0;
            if (0 < *(int*)( pTVar21 + 0xd4 )) {
               glslang::TInfoSinkBase::append(*(char**)( pTVar21 + 0x10 ));
               pcVar31 = (char*)glslang::TInfoSinkBase::operator <<(*(TInfoSinkBase**)( pTVar21 + 0x10 ), *(int*)( pTVar21 + 0xd4 ));
               glslang::TInfoSinkBase::append(pcVar31);
               cVar11 = '\0';
            }

            std::__cxx11::string::_M_dispose();
            std::_Function_base::~_Function_base(local_878);
            std::__cxx11::string::_M_dispose();
            local_958[0] = &PTR__TInputScanner_00123308;
            *(undefined8*)( this + 0x298 ) = *(undefined8*)( this_00 + 0x18 );
            if (local_928 != (void*)0x0) {
               operator_delete__(local_928);
            }

            std::__cxx11::string::_M_dispose();
            glslang::TPpContext::~TPpContext(local_848);
            ( **(code**)( *(long*)pTVar21 + 8 ) )(pTVar21);
         }

         glslang::TSymbolTable::~TSymbolTable((TSymbolTable*)this_00);
         operator_delete(this_00, 0x28);
         local_9b8[0] = &PTR__TInputScanner_00123308;
         if (local_988 != (void*)0x0) {
            operator_delete__(local_988);
         }

         operator_delete__(local_a98);
         operator_delete__(ppcVar19);
         operator_delete__(puVar18);
         LAB_001087ed:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return (bool)cVar11;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
         code_r0x001083ee:std::__cxx11::string::_M_append((char*)&local_8d8, (ulong)local_450);
         iVar12 = iVar15;
         if (iVar15 == 0xa1) {
            LAB_00108826:std::__cxx11::string::append((string*)&local_8d8, "\"");
            iVar12 = 0xa1;
         }

         goto LAB_00108200;
      }

      /* glslang::TShader::preprocess(TBuiltInResource const*, int, EProfile, bool, bool, EShMessages,
   std::__cxx11::string*, glslang::TShader::Includer&) */
      ulong glslang::TShader::preprocess(TShader *this, undefined8 param_1, undefined4 param_2, undefined4 param_4, undefined1 param_5, undefined1 param_6, undefined4 param_7, undefined8 param_8, undefined8 param_9) {
         undefined4 uVar1;
         undefined4 uVar2;
         undefined8 uVar3;
         undefined8 uVar4;
         undefined8 uVar5;
         undefined8 uVar6;
         undefined8 uVar7;
         bool bVar8;
         undefined7 extraout_var;
         undefined *puVar9;
         long in_FS_OFFSET;
         undefined8 local_70;
         undefined1 *local_68[2];
         undefined1 local_58[24];
         long local_40;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         glslang::SetThreadPoolAllocator(*(TPoolAllocator**)( this + 8 ));
         puVar9 = *(undefined**)( this + 0x50 );
         if (puVar9 == (undefined*)0x0) {
            *(undefined**)( this + 0x50 ) = &_LC55;
            puVar9 = &_LC55;
         }

         uVar3 = *(undefined8*)( this + 0x38 );
         uVar4 = *(undefined8*)( this + 0x18 );
         local_70 = param_8;
         local_68[0] = local_58;
         uVar5 = *(undefined8*)( this + 0x20 );
         uVar1 = *(undefined4*)( this + 0x48 );
         uVar2 = *(undefined4*)( this + 0x78 );
         uVar6 = *(undefined8*)( this + 0x40 );
         uVar7 = *(undefined8*)( this + 0x30 );
         std::__cxx11::string::_M_construct<char_const*>(local_68, &_LC55, &_LC55);
         bVar8 = (anonymous_namespace)::ProcessDeferred<(anonymous_namespace)::DoPreprocessing>(uVar4, uVar7, uVar1, uVar3, uVar6, puVar9, param_1, param_2, param_4, param_5, uVar2, param_6, param_7, uVar5, &local_70, param_9, local_68, this + 0x7c);
         std::__cxx11::string::_M_dispose();
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return CONCAT71(extraout_var, bVar8) & 0xffffffff;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* WARNING: Removing unreachable block (ram,0x00109a1e) */
      /* WARNING: Removing unreachable block (ram,0x00109a29) */
      /* WARNING: Removing unreachable block (ram,0x001096be) */
      /* bool (anonymous namespace)::ProcessDeferred<(anonymous namespace)::DoFullParse>(TCompiler*, char
   const* const*, int, int const*, char const* const*, char const*, EShOptimizationLevel,
   TBuiltInResource const*, int, EProfile, bool, int, bool, EShMessages, glslang::TIntermediate&,
   (anonymous namespace)::DoFullParse&, bool, glslang::TShader::Includer&, std::__cxx11::string,
   glslang::TEnvironment const*, bool) [clone .constprop.0] [clone .isra.0] */
      bool (anonymous_namespace)::
      ProcessDeferred<(anonymous_namespace)::DoFullParse>(long param_1, long param_2, uint param_3, long param_4, void *param_5, char *param_6, int param_7, undefined8 param_8, int param_9, int param_10, char param_11, int param_12, undefined1 param_13, uint param_14, TIntermediate *param_15, Includer *param_16, long *param_17, TEnvironment *param_18, undefined4 param_19) {
         ulong *puVar1;
         long *plVar2;
         long lVar3;
         uint uVar4;
         TIntermediate *this;
         Includer *pIVar5;
         TEnvironment *pTVar6;
         undefined4 uVar7;
         char cVar8;
         int iVar9;
         int iVar10;
         int iVar11;
         uint uVar12;
         ulong *puVar13;
         char **ppcVar14;
         size_t sVar15;
         TSymbolTable *this_00;
         undefined8 *puVar16;
         string *psVar17;
         undefined8 *puVar18;
         undefined8 uVar19;
         TInfoSinkBase *pTVar20;
         ulong uVar21;
         int iVar22;
         allocator *extraout_RDX;
         TSymbolTable TVar23;
         char *pcVar24;
         long *plVar25;
         ulong uVar26;
         long lVar27;
         long in_FS_OFFSET;
         bool bVar28;
         char **local_5d0;
         string local_594;
         undefined1 local_58a;
         char local_589;
         int local_580;
         int local_57c;
         int local_578;
         int local_574;
         undefined8 *local_570;
         undefined8 local_568;
         undefined8 uStack_560;
         uint local_558;
         undefined **local_548;
         string *local_540;
         undefined4 local_538;
         undefined **local_4f8[6];
         void *local_4c8;
         undefined **local_498[6];
         void *local_468;
         char *local_438;
         undefined8 local_430;
         char local_428[16];
         undefined1 *local_418[2];
         undefined1 local_408[968];
         long local_40;
         uVar7 = param_19;
         pTVar6 = param_18;
         plVar25 = param_17;
         pIVar5 = param_16;
         this =
         param_15;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         glslang::GetThreadPoolAllocator();
         glslang::TPoolAllocator::push();
         if (param_3 == 0) {
            cVar8 = '\x01';
            goto LAB_0010998a;
         }

         iVar9 = param_3 + 3;
         if ((ulong)(long)iVar9 >> 0x3c == 0) {
            uVar26 = (long)iVar9 << 3;
            puVar13 = (ulong*)operator_new__(uVar26);
            ppcVar14 = (char**)operator_new__(uVar26);
            local_5d0 = (char**)operator_new__(uVar26);
            if (0 < (int)param_3) {
               lVar27 = 0;
               do {
                  while (true) {
                     pcVar24 = *(char**)( param_2 + lVar27 * 8 );
                     ppcVar14[lVar27 + 2] = pcVar24;
                     if (( param_4 != 0 ) && ( iVar11 = -1 < iVar11 )) break;
                     sVar15 = strlen(pcVar24);
                     puVar13[lVar27 + 2] = sVar15;
                     lVar27 = lVar27 + 1;
                     if (lVar27 == (int)param_3) goto LAB_0010908f;
                  }
;
                  puVar13[lVar27 + 2] = (long)iVar11;
                  lVar27 = lVar27 + 1;
               }
 while ( lVar27 != (int)param_3 );
               LAB_0010908f:if (param_5 == (void*)0x0) {
                  memset(local_5d0 + 2, 0, (ulong)param_3 << 3);
               }
 else {
                  memcpy(local_5d0 + 2, param_5, (ulong)param_3 << 3);
               }

            }

         }
 else {
            puVar13 = (ulong*)operator_new__(0xffffffffffffffff);
            ppcVar14 = (char**)operator_new__(0xffffffffffffffff);
            local_5d0 = (char**)operator_new__(0xffffffffffffffff);
         }

         local_568 = 0;
         local_580 = ( ( param_14 & 0x40 ) != 0 ) + 1;
         uStack_560 = 0;
         local_558 = local_558 & 0xffffff00;
         local_57c = *(int*)( param_1 + 0x18 );
         TranslateEnvironment(pTVar6, (EShMessages*)&param_14, (EShSource*)&local_580, (EShLanguage*)&local_57c, (SpvVersion*)&local_568);
         glslang::TInputScanner::TInputScanner((TInputScanner*)local_4f8, param_3, ppcVar14 + 2, puVar13 + 2, (char**)0x0, 0, 0, false);
         local_578 = 0;
         local_574 = 1;
         cVar8 = glslang::TInputScanner::scanVersion((int*)local_4f8, (EProfile*)&local_578, (bool*)&local_574);
         uVar4 = param_14;
         if (param_11 == '\0') {
            bVar28 = local_578 == 0;
            uVar19 = *(undefined8*)( param_1 + 0x10 );
            if (param_12 != 0) {
               local_578 = param_12;
            }

            LAB_0010921e:iVar11 = local_57c;
            local_589 = DeduceVersionProfile(uVar19, local_57c, cVar8, param_9, (EProfile*)&local_578, &local_574, (SpvVersion*)&local_568);
            if (!bVar28) goto LAB_001099f1;
            LAB_00109256:local_58a = 1;
         }
 else {
            if (( param_14 & 2 ) == 0) {
               if (local_578 == 0) goto LAB_001091c7;
               if (( local_578 != param_9 ) || ( local_574 != param_10 )) {
                  pTVar20 = *(TInfoSinkBase**)( param_1 + 0x10 );
                  glslang::TInfoSinkBase::append((char*)pTVar20);
                  pTVar20 = (TInfoSinkBase*)glslang::TInfoSinkBase::operator <<(pTVar20, param_9);
                  glslang::TInfoSinkBase::append((char*)pTVar20);
                  glslang::ProfileName(param_10);
                  glslang::TInfoSinkBase::append((char*)pTVar20);
                  glslang::TInfoSinkBase::append((char*)pTVar20);
                  pcVar24 = (char*)glslang::TInfoSinkBase::operator <<(pTVar20, local_578);
                  glslang::TInfoSinkBase::append(pcVar24);
                  glslang::ProfileName(local_574);
                  glslang::TInfoSinkBase::append(pcVar24);
                  glslang::TInfoSinkBase::append(pcVar24);
               }

            }
 else if (local_578 == 0) {
               LAB_001091c7:cVar8 = '\0';
            }

            iVar11 = local_57c;
            local_578 = param_9;
            local_574 = param_10;
            uVar19 = *(undefined8*)( param_1 + 0x10 );
            if (param_12 != 0) {
               bVar28 = false;
               local_578 = param_12;
               goto LAB_0010921e;
            }

            local_589 = DeduceVersionProfile(uVar19, local_57c, cVar8, param_9, (EProfile*)&local_578, &local_574, (SpvVersion*)&local_568);
            LAB_001099f1:if (( ( local_574 == 8 ) && ( 299 < local_578 ) ) && ( cVar8 != '\0' )) goto LAB_00109256;
            local_58a = 0;
         }

         *(int*)( this + 100 ) = local_578;
         *(int*)( this + 0x60 ) = local_574;
         glslang::TIntermediate::setSpv(this, (SpvVersion*)&local_568);
         RecordProcesses(this, uVar4, plVar25);
         if (0 < (int)uStack_560) {
            this[0x319] = (TIntermediate)0x1;
         }

         if (( uVar4 & 0x400 ) != 0) {
            pcVar24 = local_5d0[2];
            if (pcVar24 != (char*)0x0) {
               strlen(pcVar24);
               std::__cxx11::string::_M_replace(( ulong )(this + 0x760), 0, *(char**)( this + 0x768 ), (ulong)pcVar24);
            }

            if (0 < (int)param_3) {
               lVar27 = 0x10;
               do {
                  puVar1 = (ulong*)( (long)ppcVar14 + lVar27 );
                  if (0x3fffffffffffffffU - *(long*)( this + 0x788 ) < *(ulong*)( (long)puVar13 + lVar27 )) {
                     /* WARNING: Subroutine does not return */
                     std::__throw_length_error("basic_string::append");
                  }

                  lVar27 = lVar27 + 8;
                  std::__cxx11::string::_M_append((char*)( this + 0x780 ), *puVar1);
               }
 while ( (long)(int)param_3 * 8 + 0x10 != lVar27 );
            }

         }

         SetupBuiltinSymbolTable(local_578, local_574, (SpvVersion*)&local_568);
         iVar10 = MapVersionToIndex(local_578);
         iVar22 = 1;
         if (uStack_560._4_4_ < 1) {
            iVar22 = 0;
            if (0 < (int)uStack_560) {
               iVar22 = ( local_558 & 0xff ) + 2;
            }

         }

         lVar27 = 0;
         if (local_574 - 2U < 7) {
            lVar27 = (long)*(int*)( CSWTCH_636 + ( ulong )(local_574 - 2U) * 4 );
         }

         plVar2 = *(long**)( SharedSymbolTables + ( (long)iVar11 + (long)iVar22 * 0x70 + (long)iVar10 * 0x1c0 + lVar27 * 0x1c ) * 8 );
         this_00 = (TSymbolTable*)operator_new(0x28);
         *(undefined8*)( this_00 + 0x10 ) = 0;
         *(undefined8*)( this_00 + 0x18 ) = 0;
         *(undefined2*)( this_00 + 0x20 ) = 0;
         *(undefined4*)( this_00 + 0x24 ) = 0;
         *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
         if (plVar2 == (long*)0x0) {
            uVar26 = *(ulong*)( this + 0x298 );
            if (uVar26 != 0) {
               uVar21 = 0x7f00000000000000;
               goto LAB_00109a4f;
            }

         }
 else {
            lVar27 = *plVar2;
            if (plVar2[1] != lVar27) {
               puVar16 = (undefined8*)0x0;
               puVar18 = (undefined8*)0x0;
               uVar26 = 0;
               while (true) {
                  if (puVar18 == puVar16) {
                     std::vector<glslang::TSymbolTableLevel*,std::allocator<glslang::TSymbolTableLevel*>>::_M_realloc_insert<glslang::TSymbolTableLevel*const&>((vector<glslang::TSymbolTableLevel*,std::allocator<glslang::TSymbolTableLevel*>>*)this_00);
                     lVar27 = *plVar2;
                  }
 else {
                     *puVar18 = *(undefined8*)( lVar27 + uVar26 * 8 );
                     *(undefined8**)( this_00 + 8 ) = puVar18 + 1;
                  }

                  lVar3 = plVar2[1];
                  uVar26 = ( ulong )((int)uVar26 + 1);
                  *(int*)( this_00 + 0x24 ) = *(int*)( this_00 + 0x24 ) + 1;
                  if (( ulong )(lVar3 - lVar27 >> 3) <= uVar26) break;
                  puVar18 = *(undefined8**)( this_00 + 8 );
                  puVar16 = *(undefined8**)( this_00 + 0x10 );
               }
;
            }

            *(long*)( this_00 + 0x18 ) = plVar2[3];
            *(short*)( this_00 + 0x20 ) = (short)plVar2[4];
            uVar26 = *(ulong*)( this + 0x298 );
            if (uVar26 != 0) {
               uVar12 = (int)( *(long*)( this_00 + 8 ) - *(long*)this_00 >> 3 ) - 1;
               uVar21 = 0x7f00000000000000;
               if (uVar12 < 0x80) {
                  uVar21 = (ulong)uVar12 << 0x38;
               }

               LAB_00109a4f:*(ulong*)( this_00 + 0x18 ) = uVar26 & 0xffffffffffffff | uVar21;
            }

         }

         cVar8 = AddContextSpecificSymbols(param_8, *(undefined8*)( param_1 + 0x10 ), this_00, local_578, local_574, (SpvVersion*)&local_568, iVar11);
         if (cVar8 != '\0') {
            if (( uVar4 & 0x4000 ) != 0) {
               lVar27 = *(long*)( param_1 + 0x10 );
               pcVar24 = (char*)( lVar27 + 0x30 );
               glslang::TInfoSinkBase::append(pcVar24);
               glslang::TSymbolTable::dump((TInfoSink*)this_00, SUB81(lVar27, 0));
               glslang::TInfoSinkBase::append(pcVar24);
            }

            local_418[0] = local_408;
            std::__cxx11::string::_M_construct<char*>((TPpContext*)local_418, *plVar25, plVar25[1] + *plVar25);
            psVar17 = (string*)CreateParseContext(this_00, this, local_578, local_574, iVar11, *(undefined8*)( param_1 + 0x10 ), local_568, uStack_560, local_558, param_13, uVar4, 0, (TPpContext*)local_418);
            std::__cxx11::string::_M_dispose();
            local_594 = SUB41(uVar7, 0);
            psVar17[0x1c0] = local_594;
            pcVar24 = local_5d0[2];
            if (pcVar24 == (char*)0x0) {
               pcVar24 = "";
            }

            std::__cxx11::string::string<std::allocator<char>>((string*)&local_438, pcVar24, extraout_RDX);
            glslang::TPpContext::TPpContext((TPpContext*)local_418, (TParseContextBase*)psVar17, (string*)&local_438, pIVar5);
            std::__cxx11::string::_M_dispose();
            local_548 = &PTR__TScanContext_00123368;
            local_538 = 0;
            *(undefined****)( psVar17 + 0x1e8 ) = &local_548;
            *(TPpContext**)( psVar17 + 0x1f0 ) = (TPpContext*)local_418;
            local_540 = psVar17;
            ( **(code**)( *(long*)psVar17 + 0x178 ) )(psVar17, param_8);
            if (local_589 == '\0') {
               *(int*)( psVar17 + 0xd4 ) = *(int*)( psVar17 + 0xd4 ) + 1;
            }

            ( **(code**)( *(long*)psVar17 + 0x10 ) )(psVar17);
            local_438 = local_428;
            local_430 = 0;
            local_428[0] = '\0';
            glslang::TParseVersions::getPreamble(psVar17);
            *ppcVar14 = local_438;
            sVar15 = strlen(local_438);
            *puVar13 = sVar15;
            *local_5d0 = (char*)0x0;
            ppcVar14[1] = param_6;
            sVar15 = strlen(param_6);
            puVar13[1] = sVar15;
            local_5d0[1] = (char*)0x0;
            iVar11 = param_3 + 2;
            ppcVar14[iVar11] = "\n int;";
            local_5d0[iVar11] = (char*)0x0;
            puVar13[iVar11] = 6;
            glslang::TInputScanner::TInputScanner((TInputScanner*)local_498, iVar9, ppcVar14, puVar13, local_5d0, 2, 1, false);
            uVar26 = glslang::GetThreadPoolAllocator();
            puVar18 = (undefined8*)glslang::TPoolAllocator::allocate(uVar26);
            uVar19 = glslang::GetThreadPoolAllocator();
            *(undefined4*)( puVar18 + 2 ) = 0;
            *puVar18 = uVar19;
            puVar18[3] = 0;
            puVar18[4] = puVar18 + 2;
            puVar18[5] = puVar18 + 2;
            puVar18[6] = 0;
            puVar18[7] = 0;
            uVar19 = glslang::GetThreadPoolAllocator();
            puVar18[9] = 0;
            plVar25 = *(long**)( this_00 + 8 );
            puVar18[8] = uVar19;
            puVar18[10] = 0;
            puVar18[0xb] = 0;
            *(undefined4*)( puVar18 + 0xc ) = 0;
            *(undefined1*)( (long)puVar18 + 100 ) = 0;
            local_570 = puVar18;
            if (plVar25 == *(long**)( this_00 + 0x10 )) {
               std::vector<glslang::TSymbolTableLevel*,std::allocator<glslang::TSymbolTableLevel*>>::_M_realloc_insert<glslang::TSymbolTableLevel*>((vector<glslang::TSymbolTableLevel*,std::allocator<glslang::TSymbolTableLevel*>>*)this_00, plVar25, &local_570);
               plVar25 = *(long**)( this_00 + 8 );
            }
 else {
               *plVar25 = (long)puVar18;
               plVar25 = plVar25 + 1;
               *(long**)( this_00 + 8 ) = plVar25;
            }

            uVar12 = (int)( (long)plVar25 - *(long*)this_00 >> 3 ) - 1;
            lVar27 = *(long*)psVar17;
            TVar23 = (TSymbolTable)0x7f;
            if (uVar12 < 0x80) {
               TVar23 = SUB41(uVar12, 0);
            }

            this_00[0x1f] = TVar23;
            cVar8 = ( **(code**)( lVar27 + 0x1c8 ) )(psVar17, (TPpContext*)local_418, (TInputScanner*)local_498, local_58a);
            if (cVar8 == '\0') {
               glslang::TInfoSinkBase::append(*(char**)( psVar17 + 0x10 ));
               pcVar24 = (char*)glslang::TInfoSinkBase::operator <<(*(TInfoSinkBase**)( psVar17 + 0x10 ), *(int*)( psVar17 + 0xd4 ));
               glslang::TInfoSinkBase::append(pcVar24);
            }
 else if (*(long*)( this + 0x80 ) != 0) {
               if (param_7 == 0) {
                  glslang::TInfoSinkBase::message(*(undefined8*)( psVar17 + 0x10 ), 0, "No errors.  No code generation or linking was requested.");
               }
 else {
                  cVar8 = glslang::TIntermediate::postProcess(this, *(long*)( this + 0x80 ), *(undefined4*)( psVar17 + 0x1c ));
               }

            }

            if (( uVar4 & 4 ) != 0) {
               glslang::TIntermediate::output((TInfoSink*)this, SUB81(*(undefined8*)( psVar17 + 0x10 ), 0));
            }

            local_498[0] = &PTR__TInputScanner_00123308;
            *(undefined8*)( this + 0x298 ) = *(undefined8*)( this_00 + 0x18 );
            if (local_468 == (void*)0x0) {
               std::__cxx11::string::_M_dispose();
               glslang::TPpContext::~TPpContext((TPpContext*)local_418);
            }
 else {
               operator_delete__(local_468);
               std::__cxx11::string::_M_dispose();
               glslang::TPpContext::~TPpContext((TPpContext*)local_418);
            }

            ( **(code**)( *(long*)psVar17 + 8 ) )(psVar17);
         }

         glslang::TSymbolTable::~TSymbolTable(this_00);
         operator_delete(this_00, 0x28);
         local_4f8[0] = &PTR__TInputScanner_00123308;
         if (local_4c8 != (void*)0x0) {
            operator_delete__(local_4c8);
         }

         operator_delete__(local_5d0);
         operator_delete__(ppcVar14);
         operator_delete__(puVar13);
         LAB_0010998a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return (bool)cVar8;
      }

      undefined1 ShCompile(long *param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4, int param_5, undefined8 param_6, undefined8 param_7, undefined4 param_8, undefined1 param_9, undefined4 param_10, undefined8 param_11) {
         undefined8 *puVar1;
         long lVar2;
         long lVar3;
         bool bVar4;
         undefined1 uVar5;
         long *plVar6;
         TPoolAllocator *pTVar7;
         allocator *extraout_RDX;
         long in_FS_OFFSET;
         undefined **local_870;
         long local_868;
         long local_860;
         undefined1 *local_848[2];
         undefined1 local_838[16];
         TIntermediate local_828[96];
         undefined4 local_7c8;
         undefined4 local_7c4;
         long local_7a8;
         long local_40;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         if (param_1 != (long*)0x0) {
            plVar6 = (long*)( **(code**)( *param_1 + 0x10 ) )();
            if (plVar6 != (long*)0x0) {
               if (*(code**)( *plVar6 + 0x28 ) == TShHandleBase::getPool) {
                  pTVar7 = (TPoolAllocator*)plVar6[1];
               }
 else {
                  pTVar7 = (TPoolAllocator*)( **(code**)( *plVar6 + 0x28 ) )(plVar6);
               }

               glslang::SetThreadPoolAllocator(pTVar7);
               puVar1 = (undefined8*)plVar6[2];
               puVar1[1] = 0;
               *(undefined1*)*puVar1 = 0;
               lVar2 = plVar6[2];
               *(undefined8*)( lVar2 + 0x38 ) = 0;
               **(undefined1**)( lVar2 + 0x30 ) = 0;
               lVar2 = plVar6[2];
               lVar3 = plVar6[3];
               *(undefined8*)( lVar2 + 0x28 ) = param_11;
               *(undefined8*)( lVar2 + 0x58 ) = param_11;
               glslang::TIntermediate::TIntermediate(local_828, (int)lVar3, 0, 1);
               local_870 = &PTR_includeSystem_001230e8;
               std::__cxx11::string::string<std::allocator<char>>((string*)&local_868, "", extraout_RDX);
               local_848[0] = local_838;
               std::__cxx11::string::_M_construct<char*>(local_848, local_868, local_860 + local_868);
               bVar4 = (anonymous_namespace)::ProcessDeferred<(anonymous_namespace)::DoFullParse>(plVar6, param_2, param_3, param_4, 0, &_LC55, param_5, param_6, param_8, 1, 0, 0, param_9, param_10, local_828, &local_870, local_848, 0, 0);
               std::__cxx11::string::_M_dispose();
               std::__cxx11::string::_M_dispose();
               if (bVar4) {
                  if (( ( local_7a8 == 0 ) || ( param_5 == 0 ) ) || ( *(code**)( *plVar6 + 0x38 ) == glslang::TDeferredCompiler::compile )) {
                     uVar5 = 1;
                     glslang::TIntermediate::removeTree();
                     glslang::GetThreadPoolAllocator();
                     glslang::TPoolAllocator::pop();
                  }
 else {
                     uVar5 = ( **(code**)( *plVar6 + 0x38 ) )(plVar6, local_7a8, local_7c4, local_7c8);
                     glslang::TIntermediate::removeTree();
                     glslang::GetThreadPoolAllocator();
                     glslang::TPoolAllocator::pop();
                  }

               }
 else {
                  uVar5 = 0;
                  glslang::TIntermediate::removeTree();
                  glslang::GetThreadPoolAllocator();
                  glslang::TPoolAllocator::pop();
               }

               glslang::TIntermediate::~TIntermediate(local_828);
               goto LAB_00109edf;
            }

         }

         uVar5 = 0;
         LAB_00109edf:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return uVar5;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* glslang::TShader::parse(TBuiltInResource const*, int, EProfile, bool, bool, EShMessages,
   glslang::TShader::Includer&) */
      ulong glslang::TShader::parse(TShader *this, undefined8 param_1, undefined4 param_2, undefined4 param_4, undefined1 param_5, undefined1 param_6, undefined4 param_7, undefined8 param_8) {
         TShader TVar1;
         undefined4 uVar2;
         undefined4 uVar3;
         undefined8 uVar4;
         undefined8 uVar5;
         undefined8 uVar6;
         undefined8 uVar7;
         undefined8 uVar8;
         undefined8 uVar9;
         bool bVar10;
         undefined7 extraout_var;
         long in_FS_OFFSET;
         undefined1 *local_88;
         long local_80;
         undefined1 local_78[16];
         undefined1 *local_68[2];
         undefined1 local_58[24];
         long local_40;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         glslang::SetThreadPoolAllocator(*(TPoolAllocator**)( this + 8 ));
         if (*(long*)( this + 0x50 ) == 0) {
            *(undefined**)( this + 0x50 ) = &_LC55;
         }

         local_88 = local_78;
         TVar1 = this[0xa4];
         std::__cxx11::string::_M_construct<char*>(&local_88, *(long*)( this + 0x58 ), *(long*)( this + 0x60 ) + *(long*)( this + 0x58 ));
         uVar2 = *(undefined4*)( this + 0x78 );
         local_68[0] = local_58;
         uVar4 = *(undefined8*)( this + 0x38 );
         uVar3 = *(undefined4*)( this + 0x48 );
         uVar5 = *(undefined8*)( this + 0x18 );
         uVar6 = *(undefined8*)( this + 0x20 );
         uVar7 = *(undefined8*)( this + 0x50 );
         uVar8 = *(undefined8*)( this + 0x40 );
         uVar9 = *(undefined8*)( this + 0x30 );
         std::__cxx11::string::_M_construct<char*>(local_68, local_88, local_88 + local_80);
         bVar10 = (anonymous_namespace)::ProcessDeferred<(anonymous_namespace)::DoFullParse>(uVar5, uVar9, uVar3, uVar4, uVar8, uVar7, 1, param_1, param_2, param_4, param_5, uVar2, param_6, param_7, uVar6, param_8, local_68, this + 0x7c, TVar1);
         std::__cxx11::string::_M_dispose();
         std::__cxx11::string::_M_dispose();
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return CONCAT71(extraout_var, bVar10) & 0xffffffff;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* glslang::TShader::Includer::includeSystem(char const*, char const*, unsigned long) */
      undefined8 glslang::TShader::Includer::includeSystem(char *param_1, char *param_2, ulong param_3) {
         return 0;
      }

      /* glslang::TShader::Includer::includeLocal(char const*, char const*, unsigned long) */
      undefined8 glslang::TShader::Includer::includeLocal(char *param_1, char *param_2, ulong param_3) {
         return 0;
      }

      /* glslang::TShader::ForbidIncluder::releaseInclude(glslang::TShader::Includer::IncludeResult*) */
      void glslang::TShader::ForbidIncluder::releaseInclude(IncludeResult *param_1) {
         return;
      }

      /* glslang::TShader::ForbidIncluder::~ForbidIncluder() */
      void glslang::TShader::ForbidIncluder::~ForbidIncluder(ForbidIncluder *this) {
         return;
      }

      /* glslang::TType::~TType() */
      void glslang::TType::~TType(TType *this) {
         return;
      }

      /* glslang::TType::hideMember() */
      void glslang::TType::hideMember(TType *this) {
         *(ushort*)( this + 8 ) = *(ushort*)( this + 8 ) & 0xf000 | 0x100;
         return;
      }

      /* glslang::TType::hiddenMember() const */
      bool glslang::TType::hiddenMember(TType *this) {
         return this[8] == (TType)0x0;
      }

      /* glslang::TType::getTypeName[abi:cxx11]() const */
      undefined8 glslang::TType::getTypeName_abi_cxx11_(TType *this) {
         return *(undefined8*)( this + 0x78 );
      }

      /* glslang::TType::getFieldName[abi:cxx11]() const */
      undefined8 glslang::TType::getFieldName_abi_cxx11_(TType *this) {
         return *(undefined8*)( this + 0x70 );
      }

      /* glslang::TType::getBasicType() const */
      TType glslang::TType::getBasicType(TType *this) {
         return this[8];
      }

      /* glslang::TType::getSampler() const */
      TType * __thiscallglslang::TType::getSampler(TType * this);
      {
         return this + 0x80;
      }

      /* glslang::TType::getSampler() */
      TType * __thiscallglslang::TType::getSampler(TType * this);
      {
         return this + 0x80;
      }

      /* glslang::TType::getQualifier() */
      TType * __thiscallglslang::TType::getQualifier(TType * this);
      {
         return this + 0x10;
      }

      /* glslang::TType::getQualifier() const */
      TType * __thiscallglslang::TType::getQualifier(TType * this);
      {
         return this + 0x10;
      }

      /* glslang::TType::getVectorSize() const */
      byte glslang::TType::getVectorSize(TType *this) {
         return (byte)this[9] & 0xf;
      }

      /* glslang::TType::getMatrixCols() const */
      byte glslang::TType::getMatrixCols(TType *this) {
         return (byte)this[9] >> 4;
      }

      /* glslang::TType::getMatrixRows() const */
      byte glslang::TType::getMatrixRows(TType *this) {
         return (byte)this[10] & 0xf;
      }

      /* glslang::TType::getOuterArraySize() const */
      undefined4 glslang::TType::getOuterArraySize(TType *this) {
         return **(undefined4**)( *(long*)( *(long*)( this + 0x60 ) + 8 ) + 8 );
      }

      /* glslang::TType::getOuterArrayNode() const */
      undefined8 glslang::TType::getOuterArrayNode(TType *this) {
         return *(undefined8*)( *(long*)( *(long*)( *(long*)( this + 0x60 ) + 8 ) + 8 ) + 8 );
      }

      /* glslang::TType::getCumulativeArraySize() const */
      int glslang::TType::getCumulativeArraySize(TType *this) {
         int *piVar1;
         long lVar2;
         int *piVar3;
         int iVar4;
         lVar2 = *(long*)( *(long*)( this + 0x60 ) + 8 );
         if (lVar2 != 0) {
            piVar3 = *(int**)( lVar2 + 8 );
            iVar4 = (int)( *(long*)( lVar2 + 0x10 ) - (long)piVar3 >> 4 );
            if (0 < iVar4) {
               piVar1 = piVar3 + ( ulong )(iVar4 - 1) * 4 + 4;
               iVar4 = 1;
               do {
                  iVar4 = iVar4 * *piVar3;
                  piVar3 = piVar3 + 4;
               }
 while ( piVar3 != piVar1 );
               return iVar4;
            }

         }

         return 1;
      }

      /* glslang::TType::getImplicitArraySize() const */
      int glslang::TType::getImplicitArraySize(TType *this) {
         int iVar1;
         iVar1 = *(int*)( *(long*)( this + 0x60 ) + 0x10 );
         if (iVar1 < 1) {
            iVar1 = 1;
         }

         return iVar1;
      }

      /* glslang::TType::getArraySizes() const */
      undefined8 glslang::TType::getArraySizes(TType *this) {
         return *(undefined8*)( this + 0x60 );
      }

      /* glslang::TType::getArraySizes() */
      undefined8 glslang::TType::getArraySizes(TType *this) {
         return *(undefined8*)( this + 0x60 );
      }

      /* glslang::TType::getReferentType() const */
      undefined8 glslang::TType::getReferentType(TType *this) {
         return *(undefined8*)( this + 0x68 );
      }

      /* glslang::TType::getTypeParameters() const */
      undefined8 glslang::TType::getTypeParameters(TType *this) {
         return *(undefined8*)( this + 0x88 );
      }

      /* glslang::TType::getTypeParameters() */
      undefined8 glslang::TType::getTypeParameters(TType *this) {
         return *(undefined8*)( this + 0x88 );
      }

      /* glslang::TType::isVector() const */
      byte glslang::TType::isVector(TType *this) {
         if (1 < ( (byte)this[9] & 0xf )) {
            return 1;
         }

         return (byte)this[10] >> 4 & 1;
      }

      /* glslang::TType::isMatrix() const */
      bool glslang::TType::isMatrix(TType *this) {
         return 0xf < (byte)this[9];
      }

      /* glslang::TType::isArray() const */
      bool glslang::TType::isArray(TType *this) {
         return *(long*)( this + 0x60 ) != 0;
      }

      /* glslang::TType::isArrayVariablyIndexed() const */
      undefined1 glslang::TType::isArrayVariablyIndexed(TType *this) {
         return *(undefined1*)( *(long*)( this + 0x60 ) + 0x15 );
      }

      /* glslang::TType::setArrayVariablyIndexed() */
      void glslang::TType::setArrayVariablyIndexed(TType *this) {
         *(undefined1*)( *(long*)( this + 0x60 ) + 0x15 ) = 1;
         return;
      }

      /* glslang::TType::updateImplicitArraySize(int) */
      void glslang::TType::updateImplicitArraySize(TType *this, int param_1) {
         int iVar1;
         iVar1 = *(int*)( *(long*)( this + 0x60 ) + 0x10 );
         if (iVar1 < param_1) {
            iVar1 = param_1;
         }

         *(int*)( *(long*)( this + 0x60 ) + 0x10 ) = iVar1;
         return;
      }

      /* glslang::TType::setImplicitlySized(bool) */
      void glslang::TType::setImplicitlySized(TType *this, bool param_1) {
         *(bool*)( *(long*)( this + 0x60 ) + 0x14 ) = param_1;
         return;
      }

      /* glslang::TType::isStruct() const */
      undefined4 glslang::TType::isStruct(TType *this) {
         return CONCAT31(( int3 )((byte)this[8] - 0xf >> 8), ( byte )((byte)this[8] - 0xf) < 2);
      }

      /* glslang::TType::isFloatingDomain() const */
      undefined4 glslang::TType::isFloatingDomain(TType *this) {
         return CONCAT31(( int3 )((byte)this[8] - 1 >> 8), ( byte )((byte)this[8] - 1) < 3);
      }

      /* glslang::TType::isIntegerDomain() const */
      bool glslang::TType::isIntegerDomain(TType *this) {
         TType TVar1;
         TVar1 = this[8];
         if ((byte)TVar1 < 0xc) {
            return 3 < (byte)TVar1;
         }

         return TVar1 == (TType)0xd;
      }

      /* glslang::TType::isOpaque() const */
      undefined8 glslang::TType::isOpaque(TType *this) {
         undefined8 uVar1;
         uVar1 = 0;
         if ((byte)this[8] < 0x15) {
            uVar1 = CONCAT71(0x1a60, ( 0x1a6000UL >> ( (ulong)(byte)this[8] & 0x3f ) & 1 ) != 0);
         }

         return uVar1;
      }

      /* glslang::TType::isParameterized() const */
      bool glslang::TType::isParameterized(TType *this) {
         return *(long*)( this + 0x88 ) != 0;
      }

      /* glslang::TInputScanner::getLastValidSourceIndex() const */
      int glslang::TInputScanner::getLastValidSourceIndex(TInputScanner *this) {
         int iVar1;
         iVar1 = *(int*)( this + 8 ) + -1;
         if (*(int*)( this + 0x20 ) < *(int*)( this + 8 ) + -1) {
            iVar1 = *(int*)( this + 0x20 );
         }

         return iVar1;
      }

      /* TShHandleBase::getAsCompiler() */
      undefined8 TShHandleBase::getAsCompiler(void) {
         return 0;
      }

      /* TShHandleBase::getAsLinker() */
      undefined8 TShHandleBase::getAsLinker(void) {
         return 0;
      }

      /* TShHandleBase::getAsUniformMap() */
      undefined8 TShHandleBase::getAsUniformMap(void) {
         return 0;
      }

      /* TShHandleBase::getPool() const */
      undefined8 TShHandleBase::getPool(TShHandleBase *this) {
         return *(undefined8*)( this + 8 );
      }

      /* TCompiler::getInfoSink() */
      undefined8 TCompiler::getInfoSink(TCompiler *this) {
         return *(undefined8*)( this + 0x10 );
      }

      /* TCompiler::getAsCompiler() */
      TCompiler * __thiscallTCompiler::getAsCompiler(TCompiler * this);
      {
         return this;
      }

      /* TCompiler::linkable() */
      TCompiler TCompiler::linkable(TCompiler *this) {
         return this[0x1c];
      }

      /* TLinker::link(glslang::TVector<TShHandleBase*>&) */
      undefined8 TLinker::link(TVector *param_1) {
         return 0;
      }

      /* TLinker::setAppAttributeBindings(ShBindingTable const*) */
      void TLinker::setAppAttributeBindings(TLinker *this, ShBindingTable *param_1) {
         *(ShBindingTable**)( this + 0x20 ) = param_1;
         return;
      }

      /* TLinker::setFixedAttributeBindings(ShBindingTable const*) */
      void TLinker::setFixedAttributeBindings(TLinker *this, ShBindingTable *param_1) {
         *(ShBindingTable**)( this + 0x28 ) = param_1;
         return;
      }

      /* TLinker::setExcludedAttributes(int const*, int) */
      void TLinker::setExcludedAttributes(TLinker *this, int *param_1, int param_2) {
         *(int**)( this + 0x30 ) = param_1;
         *(int*)( this + 0x38 ) = param_2;
         return;
      }

      /* TLinker::getObjectCode() const */
      undefined8 TLinker::getObjectCode(void) {
         return 0;
      }

      /* TLinker::getInfoSink() */
      undefined8 TLinker::getInfoSink(TLinker *this) {
         return *(undefined8*)( this + 0x10 );
      }

      /* glslang::TScanContext::~TScanContext() */
      void glslang::TScanContext::~TScanContext(TScanContext *this) {
         return;
      }

      /* glslang::TIoMapper::doMap(glslang::TIoMapResolver*, TInfoSink&) */
      undefined8 glslang::TIoMapper::doMap(TIoMapResolver *param_1, TInfoSink *param_2) {
         return 1;
      }

      /* glslang::TBuiltInParseables::getCommonString[abi:cxx11]() const */
      TBuiltInParseables * __thiscallglslang::TBuiltInParseables::getCommonString_abi_cxx11_(TBuiltInParseables * this);
      {
         return this + 8;
      }

      /* glslang::TBuiltInParseables::getStageString[abi:cxx11](EShLanguage) const */
      TBuiltInParseables * __thiscallglslang::TBuiltInParseables::getStageString_abi_cxx11_(TBuiltInParseables * this, int, param_2);
      {
         return this + (long)param_2 * 0x28 + 0x30;
      }

      /* glslang::TDeferredCompiler::compile(TIntermNode*, int, EProfile) */
      undefined8 glslang::TDeferredCompiler::compile(void) {
         return 1;
      }

      /* glslang::TScanContext::~TScanContext() */
      void glslang::TScanContext::~TScanContext(TScanContext *this) {
         operator_delete(this, 0x50);
         return;
      }

      /* glslang::TShader::ForbidIncluder::~ForbidIncluder() */
      void glslang::TShader::ForbidIncluder::~ForbidIncluder(ForbidIncluder *this) {
         operator_delete(this, 8);
         return;
      }

      /* TShHandleBase::~TShHandleBase() */
      void TShHandleBase::~TShHandleBase(TShHandleBase *this) {
         TPoolAllocator *this_00;
         this_00 = *(TPoolAllocator**)( this + 8 );
         *(undefined***)this = &PTR__TShHandleBase_00123328;
         if (this_00 != (TPoolAllocator*)0x0) {
            glslang::TPoolAllocator::~TPoolAllocator(this_00);
            operator_delete(this_00, 0x60);
            return;
         }

         return;
      }

      /* glslang::TInputScanner::~TInputScanner() */
      void glslang::TInputScanner::~TInputScanner(TInputScanner *this) {
         *(undefined***)this = &PTR__TInputScanner_00123308;
         if (*(void**)( this + 0x30 ) != (void*)0x0) {
            operator_delete__(*(void**)( this + 0x30 ));
            return;
         }

         return;
      }

      /* glslang::TInputScanner::~TInputScanner() */
      void glslang::TInputScanner::~TInputScanner(TInputScanner *this) {
         *(undefined***)this = &PTR__TInputScanner_00123308;
         if (*(void**)( this + 0x30 ) != (void*)0x0) {
            operator_delete__(*(void**)( this + 0x30 ));
         }

         operator_delete(this, 0x60);
         return;
      }

      /* std::_Function_handler<int (), std::_Bind<int
   (glslang::TInputScanner::*(glslang::TInputScanner*))() const> >::_M_invoke(std::_Any_data const&)
    */
      void std::_Function_handler<int(),std::_Bind<int(glslang::TInputScanner::*(glslang::TInputScanner*))()const>>::_M_invoke(_Any_data *param_1) {
         ulong *puVar1;
         code *UNRECOVERED_JUMPTABLE;
         puVar1 = *(ulong**)param_1;
         UNRECOVERED_JUMPTABLE = (code*)*puVar1;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( puVar1[1] + puVar1[2] ) + -1 );
         }

         /* WARNING: Could not recover jumptable at 0x0011b7de. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )();
         return;
      }

      /* std::_Function_handler<int (), std::_Bind<int
   (glslang::TInputScanner::*(glslang::TInputScanner*))() const> >::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */
      undefined8 std::_Function_handler<int(),std::_Bind<int(glslang::TInputScanner::*(glslang::TInputScanner*))()const>>::_M_manager(long *param_1, long *param_2, int param_3) {
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

         *param_1 = (long)&_Bind<int(glslang::TInputScanner::*(glslang::TInputScanner*))()const>::typeinfo;
         return 0;
      }

      /* glslang::TType::isBuiltIn() const */
      bool glslang::TType::isBuiltIn(TType *this) {
         long lVar1;
         if (*(code**)( *(long*)this + 0x58 ) == getQualifier) {
            return 0x7f < *(ushort*)( this + 0x18 );
         }

         lVar1 = ( **(code**)( *(long*)this + 0x58 ) )();
         return 0x7f < *(ushort*)( lVar1 + 8 );
      }

      /* glslang::TType::isAttachmentEXT() const */
      bool glslang::TType::isAttachmentEXT(TType *this) {
         long lVar1;
         if (this[8] != (TType)0xe) {
            return false;
         }

         if (*(code**)( *(long*)this + 0x40 ) == getSampler) {
            return this[0x81] == (TType)0x8;
         }

         lVar1 = ( **(code**)( *(long*)this + 0x40 ) )();
         return *(char*)( lVar1 + 1 ) == '\b';
      }

      /* glslang::TType::isImage() const */
      undefined4 glslang::TType::isImage(TType *this) {
         int iVar1;
         undefined4 uVar2;
         long lVar3;
         if (this[8] == (TType)0xe) {
            if (*(code**)( *(long*)this + 0x40 ) != getSampler) {
               lVar3 = ( **(code**)( *(long*)this + 0x40 ) )();
               uVar2 = 0;
               if (( *(byte*)( lVar3 + 2 ) & 8 ) != 0) {
                  iVar1 = *(byte*)( lVar3 + 1 ) - 7;
                  uVar2 = CONCAT31(( int3 )((uint)iVar1 >> 8), 1 < (byte)iVar1);
               }

               return uVar2;
            }

            if (( (byte)this[0x82] & 8 ) != 0) {
               return CONCAT31(( int3 )((byte)this[0x81] - 7 >> 8), 1 < ( byte )((byte)this[0x81] - 7));
            }

         }

         return 0;
      }

      /* glslang::TType::isSubpass() const */
      bool glslang::TType::isSubpass(TType *this) {
         long lVar1;
         if (this[8] != (TType)0xe) {
            return false;
         }

         if (*(code**)( *(long*)this + 0x40 ) == getSampler) {
            return this[0x81] == (TType)0x7;
         }

         lVar1 = ( **(code**)( *(long*)this + 0x40 ) )();
         return *(char*)( lVar1 + 1 ) == '\a';
      }

      /* glslang::TType::isTexture() const */
      byte glslang::TType::isTexture(TType *this) {
         byte bVar1;
         long lVar2;
         if (this[8] == (TType)0xe) {
            if (*(code**)( *(long*)this + 0x40 ) != getSampler) {
               lVar2 = ( **(code**)( *(long*)this + 0x40 ) )();
               if (( *(byte*)( lVar2 + 2 ) & 0x20 ) == 0) {
                  bVar1 = *(byte*)( lVar2 + 2 ) >> 3 & 1 ^ 1;
               }
 else {
                  bVar1 = 0;
               }

               return bVar1;
            }

            if (( (byte)this[0x82] & 0x20 ) == 0) {
               return (byte)this[0x82] >> 3 & 1 ^ 1;
            }

         }

         return 0;
      }

      /* glslang::TType::isSizedArray() const */
      undefined4 glslang::TType::isSizedArray(TType *this) {
         int iVar1;
         undefined4 uVar2;
         char cVar3;
         if (*(code**)( *(long*)this + 0xe8 ) == isArray) {
            if (*(long*)( this + 0x60 ) == 0) {
               return 0;
            }

            iVar1 = **(int**)( *(long*)( *(long*)( this + 0x60 ) + 8 ) + 8 );
            uVar2 = CONCAT31(( int3 )((uint)iVar1 >> 8), iVar1 != 0);
         }
 else {
            cVar3 = ( **(code**)( *(long*)this + 0xe8 ) )();
            if (cVar3 == '\0') {
               return 0;
            }

            iVar1 = **(int**)( *(long*)( *(long*)( this + 0x60 ) + 8 ) + 8 );
            uVar2 = CONCAT31(( int3 )((uint)iVar1 >> 8), iVar1 != 0);
         }

         return uVar2;
      }

      /* glslang::TType::isUnsizedArray() const */
      undefined4 glslang::TType::isUnsizedArray(TType *this) {
         int iVar1;
         undefined4 uVar2;
         char cVar3;
         if (*(code**)( *(long*)this + 0xe8 ) == isArray) {
            if (*(long*)( this + 0x60 ) == 0) {
               return 0;
            }

            iVar1 = **(int**)( *(long*)( *(long*)( this + 0x60 ) + 8 ) + 8 );
            uVar2 = CONCAT31(( int3 )((uint)iVar1 >> 8), iVar1 == 0);
         }
 else {
            cVar3 = ( **(code**)( *(long*)this + 0xe8 ) )();
            if (cVar3 == '\0') {
               return 0;
            }

            iVar1 = **(int**)( *(long*)( *(long*)( this + 0x60 ) + 8 ) + 8 );
            uVar2 = CONCAT31(( int3 )((uint)iVar1 >> 8), iVar1 == 0);
         }

         return uVar2;
      }

      /* glslang::TType::isImplicitlySizedArray() const */
      undefined1 glslang::TType::isImplicitlySizedArray(TType *this) {
         undefined1 uVar1;
         char cVar2;
         if (*(code**)( *(long*)this + 0xe8 ) == isArray) {
            if (*(long*)( this + 0x60 ) == 0) {
               return 0;
            }

            uVar1 = *(undefined1*)( *(long*)( this + 0x60 ) + 0x14 );
         }
 else {
            cVar2 = ( **(code**)( *(long*)this + 0xe8 ) )();
            if (cVar2 == '\0') {
               return 0;
            }

            uVar1 = *(undefined1*)( *(long*)( this + 0x60 ) + 0x14 );
         }

         return uVar1;
      }

      /* glslang::TType::isUnusableName() const */
      bool glslang::TType::isUnusableName(TType *this) {
         char cVar1;
         if (*(code**)( *(long*)this + 0x128 ) == isStruct) {
            if (1 < ( byte )((char)this[8] - 0xfU)) {
               return false;
            }

         }
 else {
            cVar1 = ( **(code**)( *(long*)this + 0x128 ) )();
            if (cVar1 == '\0') {
               return false;
            }

         }

         return *(long*)( this + 0x68 ) == 0;
      }

      /* glslang::TType::isScalarOrVector() const */
      uint glslang::TType::isScalarOrVector(TType *this) {
         char cVar1;
         uint uVar2;
         long lVar3;
         lVar3 = *(long*)this;
         if (*(code**)( lVar3 + 0xe0 ) == isMatrix) {
            if (0xf < (byte)this[9]) {
               return 0;
            }

         }
 else {
            cVar1 = ( **(code**)( lVar3 + 0xe0 ) )();
            if (cVar1 != '\0') {
               return 0;
            }

            lVar3 = *(long*)this;
         }

         if (*(code**)( lVar3 + 0x128 ) == isStruct) {
            if (( byte )((char)this[8] - 0xfU) < 2) {
               return 0;
            }

         }
 else {
            cVar1 = ( **(code**)( lVar3 + 0x128 ) )(this);
            if (cVar1 != '\0') {
               return 0;
            }

            lVar3 = *(long*)this;
         }

         if (*(code**)( lVar3 + 0xe8 ) == isArray) {
            uVar2 = (uint)CONCAT71(0x11b4, *(long*)( this + 0x60 ) != 0);
         }
 else {
            uVar2 = ( **(code**)( lVar3 + 0xe8 ) )(this);
         }

         return uVar2 ^ 1;
      }

      /* glslang::TType::isScalar() const */
      uint glslang::TType::isScalar(TType *this) {
         byte bVar1;
         char cVar2;
         uint uVar3;
         long lVar4;
         if (*(code**)( *(long*)this + 0xd8 ) == isVector) {
            if (1 < ( (byte)this[9] & 0xf )) {
               return 0;
            }

            bVar1 = (byte)this[10] >> 4 & 1;
         }
 else {
            bVar1 = ( **(code**)( *(long*)this + 0xd8 ) )();
         }

         if (bVar1 == 0) {
            lVar4 = *(long*)this;
            if (*(code**)( lVar4 + 0xe0 ) == isMatrix) {
               if (0xf < (byte)this[9]) {
                  return 0;
               }

            }
 else {
               cVar2 = ( **(code**)( lVar4 + 0xe0 ) )(this);
               if (cVar2 != '\0') {
                  return 0;
               }

               lVar4 = *(long*)this;
            }

            if (*(code**)( lVar4 + 0x128 ) == isStruct) {
               if (1 < ( byte )((char)this[8] - 0xfU)) {
                  LAB_0011beb1:if (*(code**)( lVar4 + 0xe8 ) == isArray) {
                     uVar3 = (uint)CONCAT71(0x11b4, *(long*)( this + 0x60 ) != 0);
                  }
 else {
                     uVar3 = ( **(code**)( lVar4 + 0xe8 ) )(this);
                  }

                  return uVar3 ^ 1;
               }

            }
 else {
               cVar2 = ( **(code**)( lVar4 + 0x128 ) )(this);
               if (cVar2 == '\0') {
                  lVar4 = *(long*)this;
                  goto LAB_0011beb1;
               }

            }

         }

         return 0;
      }

      /* glslang::TDeferredCompiler::~TDeferredCompiler() */
      void glslang::TDeferredCompiler::~TDeferredCompiler(TDeferredCompiler *this) {
         TPoolAllocator *this_00;
         this_00 = *(TPoolAllocator**)( this + 8 );
         *(undefined***)this = &PTR__TShHandleBase_00123328;
         if (this_00 != (TPoolAllocator*)0x0) {
            glslang::TPoolAllocator::~TPoolAllocator(this_00);
            operator_delete(this_00, 0x60);
            return;
         }

         return;
      }

      /* TShHandleBase::~TShHandleBase() */
      void TShHandleBase::~TShHandleBase(TShHandleBase *this) {
         TPoolAllocator *this_00;
         this_00 = *(TPoolAllocator**)( this + 8 );
         *(undefined***)this = &PTR__TShHandleBase_00123328;
         if (this_00 != (TPoolAllocator*)0x0) {
            glslang::TPoolAllocator::~TPoolAllocator(this_00);
            operator_delete(this_00, 0x60);
         }

         operator_delete(this, 0x10);
         return;
      }

      /* glslang::TDeferredCompiler::~TDeferredCompiler() */
      void glslang::TDeferredCompiler::~TDeferredCompiler(TDeferredCompiler *this) {
         TPoolAllocator *this_00;
         this_00 = *(TPoolAllocator**)( this + 8 );
         *(undefined***)this = &PTR__TShHandleBase_00123328;
         if (this_00 != (TPoolAllocator*)0x0) {
            glslang::TPoolAllocator::~TPoolAllocator(this_00);
            operator_delete(this_00, 0x60);
         }

         operator_delete(this, 0x20);
         return;
      }

      /* WARNING: Control flow encountered bad instruction data */
      /* glslang::TType::setFieldName(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */
      void glslang::TType::setFieldName(TType *this, basic_string *param_1) {
         char *__s;
         ulong uVar1;
         undefined8 *puVar2;
         undefined8 uVar3;
         size_t sVar4;
         __s = *(char**)( param_1 + 8 );
         uVar1 = glslang::GetThreadPoolAllocator();
         puVar2 = (undefined8*)glslang::TPoolAllocator::allocate(uVar1);
         uVar3 = glslang::GetThreadPoolAllocator();
         *puVar2 = uVar3;
         puVar2[1] = puVar2 + 3;
         if (__s != (char*)0x0) {
            sVar4 = strlen(__s);
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(puVar2, __s, __s + sVar4);
            *(undefined8**)( this + 0x70 ) = puVar2;
            return;
         }

         std::__throw_logic_error("basic_string: construction from null is not valid");
         /* WARNING: Bad instruction - Truncating control flow here */
         halt_baddata();
      }

      /* glslang::TType::isBindlessTexture() const */
      TType glslang::TType::isBindlessTexture(TType *this) {
         code *pcVar1;
         char cVar2;
         TType *pTVar3;
         pcVar1 = *(code**)( *(long*)this + 0x168 );
         if (pcVar1 == isTexture) {
            if (this[8] == (TType)0xe) {
               pcVar1 = *(code**)( *(long*)this + 0x40 );
               if (pcVar1 == getSampler) {
                  pTVar3 = this + 0x80;
               }
 else {
                  pTVar3 = (TType*)( *pcVar1 )();
               }

               if (( ( (byte)pTVar3[2] & 0x20 ) == 0 ) && ( ( (byte)pTVar3[2] & 8 ) == 0 )) {
                  return this[0x58];
               }

            }

         }
 else {
            cVar2 = ( *pcVar1 )();
            if (cVar2 != '\0') {
               return this[0x58];
            }

         }

         return (TType)0x0;
      }

      /* glslang::TType::isBindlessImage() const */
      TType glslang::TType::isBindlessImage(TType *this) {
         code *pcVar1;
         char cVar2;
         TType *pTVar3;
         pcVar1 = *(code**)( *(long*)this + 0x158 );
         if (pcVar1 == isImage) {
            if (this[8] == (TType)0xe) {
               pcVar1 = *(code**)( *(long*)this + 0x40 );
               if (pcVar1 == getSampler) {
                  pTVar3 = this + 0x80;
               }
 else {
                  pTVar3 = (TType*)( *pcVar1 )();
               }

               if (( ( (byte)pTVar3[2] & 8 ) != 0 ) && ( 1 < ( byte )((char)pTVar3[1] - 7U) )) {
                  return this[0x59];
               }

            }

         }
 else {
            cVar2 = ( *pcVar1 )();
            if (cVar2 != '\0') {
               return this[0x59];
            }

         }

         return (TType)0x0;
      }

      /* glslang::TParseContextBase::setExtensionCallback(std::function<void (int, char const*, char
   const*)> const&) */
      void glslang::TParseContextBase::setExtensionCallback(TParseContextBase *this, function *param_1) {
         code *pcVar1;
         undefined1 auVar2[16];
         long in_FS_OFFSET;
         undefined8 uVar3;
         undefined8 uVar4;
         undefined1 local_48[16];
         undefined8 local_38;
         undefined8 uStack_30;
         long local_20;
         local_20 = *(long*)( in_FS_OFFSET + 0x28 );
         local_48 = (undefined1[16])0x0;
         uVar3 = 0;
         uVar4 = 0;
         local_38 = 0;
         uStack_30 = 0;
         if (*(code**)( param_1 + 0x10 ) != (code*)0x0) {
            ( **(code**)( param_1 + 0x10 ) )(local_48, param_1, 2);
            uVar3 = *(undefined8*)( param_1 + 0x10 );
            uVar4 = *(undefined8*)( param_1 + 0x18 );
         }

         auVar2 = *(undefined1(*) [16])( this + 0x430 );
         local_38 = *(undefined8*)( this + 0x440 );
         uStack_30 = *(undefined8*)( this + 0x448 );
         pcVar1 = *(code**)( this + 0x440 );
         *(undefined8*)( this + 0x440 ) = uVar3;
         *(undefined8*)( this + 0x448 ) = uVar4;
         *(undefined8*)( this + 0x430 ) = local_48._0_8_;
         *(undefined8*)( this + 0x438 ) = local_48._8_8_;
         local_48 = auVar2;
         if (pcVar1 != (code*)0x0) {
            ( *pcVar1 )(local_48, local_48, 3);
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* glslang::TParseContextBase::setVersionCallback(std::function<void (int, int, char const*)>
   const&) */
      void glslang::TParseContextBase::setVersionCallback(TParseContextBase *this, function *param_1) {
         code *pcVar1;
         undefined1 auVar2[16];
         long in_FS_OFFSET;
         undefined8 uVar3;
         undefined8 uVar4;
         undefined1 local_48[16];
         undefined8 local_38;
         undefined8 uStack_30;
         long local_20;
         local_20 = *(long*)( in_FS_OFFSET + 0x28 );
         local_48 = (undefined1[16])0x0;
         uVar3 = 0;
         uVar4 = 0;
         local_38 = 0;
         uStack_30 = 0;
         if (*(code**)( param_1 + 0x10 ) != (code*)0x0) {
            ( **(code**)( param_1 + 0x10 ) )(local_48, param_1, 2);
            uVar3 = *(undefined8*)( param_1 + 0x10 );
            uVar4 = *(undefined8*)( param_1 + 0x18 );
         }

         auVar2 = *(undefined1(*) [16])( this + 0x410 );
         local_38 = *(undefined8*)( this + 0x420 );
         uStack_30 = *(undefined8*)( this + 0x428 );
         pcVar1 = *(code**)( this + 0x420 );
         *(undefined8*)( this + 0x420 ) = uVar3;
         *(undefined8*)( this + 0x428 ) = uVar4;
         *(undefined8*)( this + 0x410 ) = local_48._0_8_;
         *(undefined8*)( this + 0x418 ) = local_48._8_8_;
         local_48 = auVar2;
         if (pcVar1 != (code*)0x0) {
            ( *pcVar1 )(local_48, local_48, 3);
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* glslang::TParseContextBase::setPragmaCallback(std::function<void (int,
   glslang::TVector<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > const&)> const&) */
      void glslang::TParseContextBase::setPragmaCallback(TParseContextBase *this, function *param_1) {
         code *pcVar1;
         undefined1 auVar2[16];
         long in_FS_OFFSET;
         undefined8 uVar3;
         undefined8 uVar4;
         undefined1 local_48[16];
         undefined8 local_38;
         undefined8 uStack_30;
         long local_20;
         local_20 = *(long*)( in_FS_OFFSET + 0x28 );
         local_48 = (undefined1[16])0x0;
         uVar3 = 0;
         uVar4 = 0;
         local_38 = 0;
         uStack_30 = 0;
         if (*(code**)( param_1 + 0x10 ) != (code*)0x0) {
            ( **(code**)( param_1 + 0x10 ) )(local_48, param_1, 2);
            uVar3 = *(undefined8*)( param_1 + 0x10 );
            uVar4 = *(undefined8*)( param_1 + 0x18 );
         }

         auVar2 = *(undefined1(*) [16])( this + 0x3f0 );
         local_38 = *(undefined8*)( this + 0x400 );
         uStack_30 = *(undefined8*)( this + 0x408 );
         pcVar1 = *(code**)( this + 0x400 );
         *(undefined8*)( this + 0x400 ) = uVar3;
         *(undefined8*)( this + 0x408 ) = uVar4;
         *(undefined8*)( this + 0x3f0 ) = local_48._0_8_;
         *(undefined8*)( this + 0x3f8 ) = local_48._8_8_;
         local_48 = auVar2;
         if (pcVar1 != (code*)0x0) {
            ( *pcVar1 )(local_48, local_48, 3);
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* glslang::TParseContextBase::setErrorCallback(std::function<void (int, char const*)> const&) */
      void glslang::TParseContextBase::setErrorCallback(TParseContextBase *this, function *param_1) {
         code *pcVar1;
         undefined1 auVar2[16];
         long in_FS_OFFSET;
         undefined8 uVar3;
         undefined8 uVar4;
         undefined1 local_48[16];
         undefined8 local_38;
         undefined8 uStack_30;
         long local_20;
         local_20 = *(long*)( in_FS_OFFSET + 0x28 );
         local_48 = (undefined1[16])0x0;
         uVar3 = 0;
         uVar4 = 0;
         local_38 = 0;
         uStack_30 = 0;
         if (*(code**)( param_1 + 0x10 ) != (code*)0x0) {
            ( **(code**)( param_1 + 0x10 ) )(local_48, param_1, 2);
            uVar3 = *(undefined8*)( param_1 + 0x10 );
            uVar4 = *(undefined8*)( param_1 + 0x18 );
         }

         auVar2 = *(undefined1(*) [16])( this + 0x450 );
         local_38 = *(undefined8*)( this + 0x460 );
         uStack_30 = *(undefined8*)( this + 0x468 );
         pcVar1 = *(code**)( this + 0x460 );
         *(undefined8*)( this + 0x460 ) = uVar3;
         *(undefined8*)( this + 0x468 ) = uVar4;
         *(undefined8*)( this + 0x450 ) = local_48._0_8_;
         *(undefined8*)( this + 0x458 ) = local_48._8_8_;
         local_48 = auVar2;
         if (pcVar1 != (code*)0x0) {
            ( *pcVar1 )(local_48, local_48, 3);
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* glslang::TParseContextBase::setLineCallback(std::function<void (int, int, bool, int, char
   const*)> const&) */
      void glslang::TParseContextBase::setLineCallback(TParseContextBase *this, function *param_1) {
         code *pcVar1;
         undefined1 auVar2[16];
         long in_FS_OFFSET;
         undefined8 uVar3;
         undefined8 uVar4;
         undefined1 local_48[16];
         undefined8 local_38;
         undefined8 uStack_30;
         long local_20;
         local_20 = *(long*)( in_FS_OFFSET + 0x28 );
         local_48 = (undefined1[16])0x0;
         uVar3 = 0;
         uVar4 = 0;
         local_38 = 0;
         uStack_30 = 0;
         if (*(code**)( param_1 + 0x10 ) != (code*)0x0) {
            ( **(code**)( param_1 + 0x10 ) )(local_48, param_1, 2);
            uVar3 = *(undefined8*)( param_1 + 0x10 );
            uVar4 = *(undefined8*)( param_1 + 0x18 );
         }

         auVar2 = *(undefined1(*) [16])( this + 0x3d0 );
         local_38 = *(undefined8*)( this + 0x3e0 );
         uStack_30 = *(undefined8*)( this + 1000 );
         pcVar1 = *(code**)( this + 0x3e0 );
         *(undefined8*)( this + 0x3e0 ) = uVar3;
         *(undefined8*)( this + 1000 ) = uVar4;
         *(undefined8*)( this + 0x3d0 ) = local_48._0_8_;
         *(undefined8*)( this + 0x3d8 ) = local_48._8_8_;
         local_48 = auVar2;
         if (pcVar1 != (code*)0x0) {
            ( *pcVar1 )(local_48, local_48, 3);
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */
      long *std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>(long *param_1, long *param_2) {
         byte bVar1;
         long *plVar2;
         char cVar3;
         bool bVar4;
         long lVar5;
         long lVar6;
         long *plVar7;
         lVar6 = (long)param_2 - (long)param_1;
         if (0 < lVar6 >> 7) {
            plVar7 = param_1 + ( lVar6 >> 7 ) * 0x10;
            do {
               plVar2 = (long*)*param_1;
               bVar1 = *(byte*)( plVar2 + 1 );
               if (bVar1 < 0xd) {
                  return param_1;
               }

               if (bVar1 == 0x12) {
                  return param_1;
               }

               if (*(code**)( *plVar2 + 0x128 ) == glslang::TType::isStruct) {
                  if (( byte )(bVar1 - 0xf) < 2) {
                     LAB_0011cd8d:lVar6 = *(long*)( plVar2[0xd] + 0x10 );
                     lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsNonOpaque ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar2[0xd] + 8 ),lVar6 ));
                     if (lVar6 != lVar5) {
                        return param_1;
                     }

                  }

               }
 else {
                  cVar3 = ( **(code**)( *plVar2 + 0x128 ) )(plVar2);
                  if (cVar3 != '\0') goto LAB_0011cd8d;
               }

               plVar2 = (long*)param_1[4];
               bVar1 = *(byte*)( plVar2 + 1 );
               if (( bVar1 < 0xd ) || ( bVar1 == 0x12 )) goto LAB_0011cc8f;
               if (*(code**)( *plVar2 + 0x128 ) == glslang::TType::isStruct) {
                  if (( byte )(bVar1 - 0xf) < 2) {
                     LAB_0011cdcd:lVar6 = *(long*)( plVar2[0xd] + 0x10 );
                     lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsNonOpaque ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar2[0xd] + 8 ),lVar6 ));
                     if (lVar6 != lVar5) {
                        LAB_0011cc8f:return param_1 + 4;
                     }

                  }

               }
 else {
                  cVar3 = ( **(code**)( *plVar2 + 0x128 ) )(plVar2);
                  if (cVar3 != '\0') goto LAB_0011cdcd;
               }

               plVar2 = (long*)param_1[8];
               bVar1 = *(byte*)( plVar2 + 1 );
               if (( bVar1 < 0xd ) || ( bVar1 == 0x12 )) goto LAB_0011cccf;
               if (*(code**)( *plVar2 + 0x128 ) == glslang::TType::isStruct) {
                  if (( byte )(bVar1 - 0xf) < 2) {
                     LAB_0011cdfd:lVar6 = *(long*)( plVar2[0xd] + 0x10 );
                     lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsNonOpaque ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar2[0xd] + 8 ),lVar6 ));
                     if (lVar6 != lVar5) {
                        LAB_0011cccf:return param_1 + 8;
                     }

                  }

               }
 else {
                  cVar3 = ( **(code**)( *plVar2 + 0x128 ) )(plVar2);
                  if (cVar3 != '\0') goto LAB_0011cdfd;
               }

               plVar2 = (long*)param_1[0xc];
               bVar1 = *(byte*)( plVar2 + 1 );
               if (( bVar1 < 0xd ) || ( bVar1 == 0x12 )) goto LAB_0011cd0f;
               if (*(code**)( *plVar2 + 0x128 ) == glslang::TType::isStruct) {
                  if (( byte )(bVar1 - 0xf) < 2) {
                     LAB_0011ce2d:lVar6 = *(long*)( plVar2[0xd] + 0x10 );
                     lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsNonOpaque ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar2[0xd] + 8 ),lVar6 ));
                     if (lVar6 != lVar5) {
                        LAB_0011cd0f:return param_1 + 0xc;
                     }

                  }

               }
 else {
                  cVar3 = ( **(code**)( *plVar2 + 0x128 ) )(plVar2);
                  if (cVar3 != '\0') goto LAB_0011ce2d;
               }

               param_1 = param_1 + 0x10;
            }
 while ( param_1 != plVar7 );
            lVar6 = (long)param_2 - (long)param_1;
         }

         lVar6 = lVar6 >> 5;
         if (lVar6 != 2) {
            if (lVar6 != 3) {
               if (lVar6 != 1) {
                  return param_2;
               }

               goto LAB_0011ce77;
            }

            bVar4 = glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(*param_1);
            if (bVar4) {
               return param_1;
            }

            param_1 = param_1 + 4;
         }

         bVar4 = glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(*param_1);
         if (bVar4) {
            return param_1;
         }

         param_1 = param_1 + 4;
         LAB_0011ce77:bVar4 = glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(*param_1);
         if (!bVar4) {
            return param_2;
         }

         return param_1;
      }

      /* bool glslang::TType::contains<glslang::TType::containsNonOpaque() const::{lambda(glslang::TType
   const*)#1}>(glslang::TType::containsNonOpaque() const::{lambda(glslang::TType const*)#1}) const
   [clone .isra.0] */
      bool glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const *);
      _1_ > ( long *param_1)

{
  byte bVar1;
  long lVar2;
  char cVar3;
  long lVar4; );
      if (( bVar1 < 0xd ) || ( bVar1 == 0x12 )) {
         return true;
      }

      if (*(code**)( *param_1 + 0x128 ) == isStruct) {
         if (( byte )(bVar1 - 0xf) < 2) {
            LAB_0011cee8:lVar2 = *(long*)( param_1[0xd] + 0x10 );
            lVar4 = std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsNonOpaque ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( param_1[0xd] + 8 ),lVar2 ));
            return lVar2 != lVar4;
         }

      }
 else {
         cVar3 = ( **(code**)( *param_1 + 0x128 ) )();
         if (cVar3 != '\0') goto LAB_0011cee8;
      }

      return false;
   }

   /* glslang::TType::containsNonOpaque() const */
   ulong glslang::TType::containsNonOpaque(TType *this) {
      TType TVar1;
      long lVar2;
      char cVar3;
      undefined1 auVar4[16];
      TVar1 = this[8];
      if (( (byte)TVar1 < 0xd ) || ( TVar1 == (TType)0x12 )) {
         return 1;
      }

      if (*(code**)( *(long*)this + 0x128 ) == isStruct) {
         if (( byte )((char)TVar1 - 0xfU) < 2) {
            LAB_0011cf70:lVar2 = *(long*)( *(long*)( this + 0x68 ) + 0x10 );
            auVar4 = std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsNonOpaque ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( *(long*)( this + 0x68 ) + 8 ),lVar2 ));
            return CONCAT71(auVar4._9_7_, lVar2 != auVar4._0_8_) & 0xffffffff;
         }

      }
 else {
         cVar3 = ( **(code**)( *(long*)this + 0x128 ) )();
         if (cVar3 != '\0') goto LAB_0011cf70;
      }

      return 0;
   }

   /* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::_M_erase(std::_Rb_tree_node<std::pair<int const, int> >*) [clone .isra.0] */
   void std::_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>::_M_erase(_Rb_tree_node *param_1) {
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

   /* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */
   long *std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>(long *param_1, long *param_2) {
      long *plVar1;
      char cVar2;
      bool bVar3;
      long lVar4;
      long lVar5;
      long *plVar6;
      lVar5 = (long)param_2 - (long)param_1;
      if (0 < lVar5 >> 7) {
         plVar6 = param_1 + ( lVar5 >> 7 ) * 0x10;
         do {
            plVar1 = (long*)*param_1;
            lVar5 = *plVar1;
            if (*(code**)( lVar5 + 0xe8 ) == glslang::TType::isArray) {
               if (plVar1[0xc] != 0) {
                  return param_1;
               }

            }
 else {
               cVar2 = ( **(code**)( lVar5 + 0xe8 ) )(plVar1);
               if (cVar2 != '\0') {
                  return param_1;
               }

               lVar5 = *plVar1;
            }

            if (*(code**)( lVar5 + 0x128 ) == glslang::TType::isStruct) {
               if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                  LAB_0011d395:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
                  lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsArray ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5 ));
                  if (lVar5 != lVar4) {
                     return param_1;
                  }

               }

            }
 else {
               cVar2 = ( **(code**)( lVar5 + 0x128 ) )(plVar1);
               if (cVar2 != '\0') goto LAB_0011d395;
            }

            plVar1 = (long*)param_1[4];
            lVar5 = *plVar1;
            if (*(code**)( lVar5 + 0xe8 ) == glslang::TType::isArray) {
               if (plVar1[0xc] != 0) goto LAB_0011d31a;
            }
 else {
               cVar2 = ( **(code**)( lVar5 + 0xe8 ) )(plVar1);
               if (cVar2 != '\0') goto LAB_0011d31a;
               lVar5 = *plVar1;
            }

            if (*(code**)( lVar5 + 0x128 ) == glslang::TType::isStruct) {
               if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                  LAB_0011d2fd:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
                  lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsArray ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5 ));
                  if (lVar5 != lVar4) {
                     LAB_0011d31a:return param_1 + 4;
                  }

               }

            }
 else {
               cVar2 = ( **(code**)( lVar5 + 0x128 ) )(plVar1);
               if (cVar2 != '\0') goto LAB_0011d2fd;
            }

            plVar1 = (long*)param_1[8];
            lVar5 = *plVar1;
            if (*(code**)( lVar5 + 0xe8 ) == glslang::TType::isArray) {
               if (plVar1[0xc] != 0) goto LAB_0011d34a;
            }
 else {
               cVar2 = ( **(code**)( lVar5 + 0xe8 ) )(plVar1);
               if (cVar2 != '\0') goto LAB_0011d34a;
               lVar5 = *plVar1;
            }

            if (*(code**)( lVar5 + 0x128 ) == glslang::TType::isStruct) {
               if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                  LAB_0011d32d:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
                  lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsArray ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5 ));
                  if (lVar5 != lVar4) {
                     LAB_0011d34a:return param_1 + 8;
                  }

               }

            }
 else {
               cVar2 = ( **(code**)( lVar5 + 0x128 ) )(plVar1);
               if (cVar2 != '\0') goto LAB_0011d32d;
            }

            plVar1 = (long*)param_1[0xc];
            lVar5 = *plVar1;
            if (*(code**)( lVar5 + 0xe8 ) == glslang::TType::isArray) {
               if (plVar1[0xc] != 0) goto LAB_0011d37a;
            }
 else {
               cVar2 = ( **(code**)( lVar5 + 0xe8 ) )(plVar1);
               if (cVar2 != '\0') goto LAB_0011d37a;
               lVar5 = *plVar1;
            }

            if (*(code**)( lVar5 + 0x128 ) == glslang::TType::isStruct) {
               if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                  LAB_0011d35d:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
                  lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsArray ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5 ));
                  if (lVar5 != lVar4) {
                     LAB_0011d37a:return param_1 + 0xc;
                  }

               }

            }
 else {
               cVar2 = ( **(code**)( lVar5 + 0x128 ) )(plVar1);
               if (cVar2 != '\0') goto LAB_0011d35d;
            }

            param_1 = param_1 + 0x10;
         }
 while ( param_1 != plVar6 );
         lVar5 = (long)param_2 - (long)param_1;
      }

      lVar5 = lVar5 >> 5;
      if (lVar5 != 2) {
         if (lVar5 != 3) {
            if (lVar5 != 1) {
               return param_2;
            }

            goto LAB_0011d48c;
         }

         bVar3 = glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(*param_1);
         if (bVar3) {
            return param_1;
         }

         param_1 = param_1 + 4;
      }

      bVar3 = glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(*param_1);
      if (bVar3) {
         return param_1;
      }

      param_1 = param_1 + 4;
      LAB_0011d48c:bVar3 = glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(*param_1);
      if (!bVar3) {
         return param_2;
      }

      return param_1;
   }

   /* bool glslang::TType::contains<glslang::TType::containsArray() const::{lambda(glslang::TType
   const*)#1}>(glslang::TType::containsArray() const::{lambda(glslang::TType const*)#1}) const
   [clone .isra.0] */
   bool glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const *);
   _1_ > ( long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3; );
   if (*(code**)( lVar2 + 0xe8 ) == isArray) {
      if (param_1[0xc] != 0) {
         return true;
      }

   }
 else {
      cVar1 = ( **(code**)( lVar2 + 0xe8 ) )();
      if (cVar1 != '\0') {
         return true;
      }

      lVar2 = *param_1;
   }

   if (*(code**)( lVar2 + 0x128 ) == isStruct) {
      if (( byte )((char)param_1[1] - 0xfU) < 2) {
         LAB_0011d4f1:lVar2 = *(long*)( param_1[0xd] + 0x10 );
         lVar3 = std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsArray ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( param_1[0xd] + 8 ),lVar2 ));
         return lVar2 != lVar3;
      }

   }
 else {
      cVar1 = ( **(code**)( lVar2 + 0x128 ) )(param_1);
      if (cVar1 != '\0') goto LAB_0011d4f1;
   }

   return false;
}
/* glslang::TType::containsArray() const */bool glslang::TType::containsArray(TType *this) {
   char cVar1;
   long lVar2;
   long lVar3;
   lVar2 = *(long*)this;
   if (*(code**)( lVar2 + 0xe8 ) == isArray) {
      if (*(long*)( this + 0x60 ) != 0) {
         return true;
      }

   }
 else {
      cVar1 = ( **(code**)( lVar2 + 0xe8 ) )();
      if (cVar1 != '\0') {
         return true;
      }

      lVar2 = *(long*)this;
   }

   if (*(code**)( lVar2 + 0x128 ) == isStruct) {
      if (( byte )((char)this[8] - 0xfU) < 2) {
         LAB_0011d589:lVar2 = *(long*)( *(long*)( this + 0x68 ) + 0x10 );
         lVar3 = std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsArray ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( *(long*)( this + 0x68 ) + 8 ),lVar2 ));
         return lVar2 != lVar3;
      }

   }
 else {
      cVar1 = ( **(code**)( lVar2 + 0x128 ) )(this);
      if (cVar1 != '\0') goto LAB_0011d589;
   }

   return false;
}
/* glslang::TType::isScalarOrVec1() const */byte glslang::TType::isScalarOrVec1(TType *this) {
   TType TVar1;
   code *pcVar2;
   byte bVar3;
   char cVar4;
   long lVar5;
   pcVar2 = *(code**)( *(long*)this + 0xc0 );
   if (pcVar2 == isScalar) {
      pcVar2 = *(code**)( *(long*)this + 0xd8 );
      if (pcVar2 == isVector) {
         TVar1 = this[10];
         bVar3 = (byte)TVar1 >> 4 & 1;
         if (1 < ( (byte)this[9] & 0xf )) goto LAB_0011d613;
      }
 else {
         bVar3 = ( *pcVar2 )();
      }

      if (bVar3 == 0) {
         lVar5 = *(long*)this;
         if (*(code**)( lVar5 + 0xe0 ) == isMatrix) {
            if ((byte)this[9] < 0x10) {
               LAB_0011d63c:if (*(code**)( lVar5 + 0x128 ) == isStruct) {
                  if (1 < ( byte )((char)this[8] - 0xfU)) {
                     LAB_0011d65b:if (*(code**)( lVar5 + 0xe8 ) == isArray) {
                        if (*(long*)( this + 0x60 ) == 0) {
                           return 1;
                        }

                     }
 else {
                        cVar4 = ( **(code**)( lVar5 + 0xe8 ) )(this);
                        if (cVar4 == '\0') {
                           return 1;
                        }

                     }

                  }

               }
 else {
                  cVar4 = ( **(code**)( lVar5 + 0x128 ) )(this);
                  if (cVar4 == '\0') {
                     lVar5 = *(long*)this;
                     goto LAB_0011d65b;
                  }

               }

            }

         }
 else {
            cVar4 = ( **(code**)( lVar5 + 0xe0 ) )(this);
            if (cVar4 == '\0') {
               lVar5 = *(long*)this;
               goto LAB_0011d63c;
            }

         }

      }

   }
 else {
      cVar4 = ( *pcVar2 )();
      if (cVar4 != '\0') {
         return 1;
      }

   }

   TVar1 = this[10];
   LAB_0011d613:return (byte)TVar1 >> 4 & 1;
}
/* std::_Rb_tree<std::__cxx11::string, std::__cxx11::string, std::_Identity<std::__cxx11::string >,
   std::less<std::__cxx11::string >, std::allocator<std::__cxx11::string >
   >::_M_erase(std::_Rb_tree_node<std::__cxx11::string >*) [clone .isra.0] */void std::_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>::_M_erase(_Rb_tree_node *param_1) {
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
                                 std::__cxx11::string::_M_dispose();
                                 operator_delete(pvVar2, 0x40);
                                 pvVar2 = pvVar1;
                              }
;
                              pvVar2 = *(void**)( (long)pvVar6 + 0x10 );
                              std::__cxx11::string::_M_dispose();
                              operator_delete(pvVar6, 0x40);
                              pvVar6 = pvVar2;
                           }
;
                           pvVar6 = *(void**)( (long)pvVar4 + 0x10 );
                           std::__cxx11::string::_M_dispose();
                           operator_delete(pvVar4, 0x40);
                           pvVar4 = pvVar6;
                        }
;
                        pvVar4 = *(void**)( (long)pvVar3 + 0x10 );
                        std::__cxx11::string::_M_dispose();
                        operator_delete(pvVar3, 0x40);
                        pvVar3 = pvVar4;
                     }
;
                     pvVar3 = *(void**)( (long)pvVar5 + 0x10 );
                     std::__cxx11::string::_M_dispose();
                     operator_delete(pvVar5, 0x40);
                     pvVar5 = pvVar3;
                  }
;
                  pvVar5 = *(void**)( (long)pvVar7 + 0x10 );
                  std::__cxx11::string::_M_dispose();
                  operator_delete(pvVar7, 0x40);
                  pvVar7 = pvVar5;
               }
;
               pvVar7 = *(void**)( (long)pvVar8 + 0x10 );
               std::__cxx11::string::_M_dispose();
               operator_delete(pvVar8, 0x40);
               pvVar8 = pvVar7;
            }
;
            pvVar8 = *(void**)( (long)pvVar10 + 0x10 );
            std::__cxx11::string::_M_dispose();
            operator_delete(pvVar10, 0x40);
            pvVar10 = pvVar8;
         }
;
         p_Var9 = *(_Rb_tree_node**)( local_48 + 0x10 );
         std::__cxx11::string::_M_dispose();
         operator_delete(local_48, 0x40);
         local_48 = p_Var9;
      }
 while ( p_Var9 != (_Rb_tree_node*)0x0 );
   }

   return;
}
/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */undefined8 * std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBuiltIn ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
          (undefined8 *param_1,undefined8 *param_2), {
      long *plVar1;
      code *pcVar2;
      char cVar3;
      bool bVar4;
      long lVar5;
      long *plVar6;
      long lVar7;
      undefined8 *puVar8;
      lVar7 = (long)param_2 - (long)param_1;
      if (0 < lVar7 >> 7) {
         puVar8 = param_1 + ( lVar7 >> 7 ) * 0x10;
         do {
            plVar1 = (long*)*param_1;
            pcVar2 = *(code**)( *plVar1 + 0x148 );
            if (pcVar2 == glslang::TType::isBuiltIn) {
               pcVar2 = *(code**)( *plVar1 + 0x58 );
               if (pcVar2 == glslang::TType::getQualifier) {
                  plVar6 = plVar1 + 2;
               }
 else {
                  plVar6 = (long*)( *pcVar2 )(plVar1);
               }

               if (0x7f < *(ushort*)( plVar6 + 1 )) {
                  return param_1;
               }

            }
 else {
               cVar3 = ( *pcVar2 )(plVar1);
               if (cVar3 != '\0') {
                  return param_1;
               }

            }

            if (*(code**)( *plVar1 + 0x128 ) == glslang::TType::isStruct) {
               if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                  LAB_0011db95:lVar7 = *(long*)( plVar1[0xd] + 0x10 );
                  lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBuiltIn ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar7 ));
                  if (lVar7 != lVar5) {
                     return param_1;
                  }

               }

            }
 else {
               cVar3 = ( **(code**)( *plVar1 + 0x128 ) )(plVar1);
               if (cVar3 != '\0') goto LAB_0011db95;
            }

            plVar1 = (long*)param_1[4];
            pcVar2 = *(code**)( *plVar1 + 0x148 );
            if (pcVar2 == glslang::TType::isBuiltIn) {
               pcVar2 = *(code**)( *plVar1 + 0x58 );
               if (pcVar2 == glslang::TType::getQualifier) {
                  plVar6 = plVar1 + 2;
               }
 else {
                  plVar6 = (long*)( *pcVar2 )(plVar1);
               }

               if (0x7f < *(ushort*)( plVar6 + 1 )) goto LAB_0011db1a;
            }
 else {
               cVar3 = ( *pcVar2 )(plVar1);
               if (cVar3 != '\0') {
                  return param_1 + 4;
               }

            }

            if (*(code**)( *plVar1 + 0x128 ) == glslang::TType::isStruct) {
               if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                  LAB_0011dafd:lVar7 = *(long*)( plVar1[0xd] + 0x10 );
                  lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBuiltIn ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar7 ));
                  if (lVar7 != lVar5) {
                     LAB_0011db1a:return param_1 + 4;
                  }

               }

            }
 else {
               cVar3 = ( **(code**)( *plVar1 + 0x128 ) )(plVar1);
               if (cVar3 != '\0') goto LAB_0011dafd;
            }

            plVar1 = (long*)param_1[8];
            pcVar2 = *(code**)( *plVar1 + 0x148 );
            if (pcVar2 == glslang::TType::isBuiltIn) {
               pcVar2 = *(code**)( *plVar1 + 0x58 );
               if (pcVar2 == glslang::TType::getQualifier) {
                  plVar6 = plVar1 + 2;
               }
 else {
                  plVar6 = (long*)( *pcVar2 )(plVar1);
               }

               if (0x7f < *(ushort*)( plVar6 + 1 )) goto LAB_0011db4a;
            }
 else {
               cVar3 = ( *pcVar2 )(plVar1);
               if (cVar3 != '\0') {
                  return param_1 + 8;
               }

            }

            if (*(code**)( *plVar1 + 0x128 ) == glslang::TType::isStruct) {
               if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                  LAB_0011db2d:lVar7 = *(long*)( plVar1[0xd] + 0x10 );
                  lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBuiltIn ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar7 ));
                  if (lVar7 != lVar5) {
                     LAB_0011db4a:return param_1 + 8;
                  }

               }

            }
 else {
               cVar3 = ( **(code**)( *plVar1 + 0x128 ) )(plVar1);
               if (cVar3 != '\0') goto LAB_0011db2d;
            }

            plVar1 = (long*)param_1[0xc];
            pcVar2 = *(code**)( *plVar1 + 0x148 );
            if (pcVar2 == glslang::TType::isBuiltIn) {
               pcVar2 = *(code**)( *plVar1 + 0x58 );
               if (pcVar2 == glslang::TType::getQualifier) {
                  plVar6 = plVar1 + 2;
               }
 else {
                  plVar6 = (long*)( *pcVar2 )(plVar1);
               }

               if (0x7f < *(ushort*)( plVar6 + 1 )) goto LAB_0011db7a;
            }
 else {
               cVar3 = ( *pcVar2 )(plVar1);
               if (cVar3 != '\0') {
                  return param_1 + 0xc;
               }

            }

            if (*(code**)( *plVar1 + 0x128 ) == glslang::TType::isStruct) {
               if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                  LAB_0011db5d:lVar7 = *(long*)( plVar1[0xd] + 0x10 );
                  lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBuiltIn ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar7 ));
                  if (lVar7 != lVar5) {
                     LAB_0011db7a:return param_1 + 0xc;
                  }

               }

            }
 else {
               cVar3 = ( **(code**)( *plVar1 + 0x128 ) )(plVar1);
               if (cVar3 != '\0') goto LAB_0011db5d;
            }

            param_1 = param_1 + 0x10;
         }
 while ( param_1 != puVar8 );
         lVar7 = (long)param_2 - (long)param_1;
      }

      lVar7 = lVar7 >> 5;
      if (lVar7 != 2) {
         if (lVar7 != 3) {
            if (lVar7 != 1) {
               return param_2;
            }

            goto LAB_0011dcc0;
         }

         bVar4 = glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(*param_1);
         if (bVar4) {
            return param_1;
         }

         param_1 = param_1 + 4;
      }

      bVar4 = glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(*param_1);
      if (bVar4) {
         return param_1;
      }

      param_1 = param_1 + 4;
      LAB_0011dcc0:bVar4 = glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(*param_1);
      if (!bVar4) {
         return param_2;
      }

      return param_1;
   }
, /* bool glslang::TType::contains<glslang::TType::containsBuiltIn() const::{lambda(glslang::TType
   const*)#1}>(glslang::TType::containsBuiltIn() const::{lambda(glslang::TType const*)#1}) const
   [clone .isra.0] */, bool glslang::TType::
     contains<glslang::TType::containsBuiltIn() * _1_ > ( long *param_1)

{
  code *pcVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  
  pcVar1 = *(code **)(*param_1 + 0x148);
  if (pcVar1 == isBuiltIn) {
    pcVar1 = *(code **)(*param_1 + 0x58);
    if (pcVar1 == getQualifier) {
      plVar5 = param_1 + 2;
    }
    else {
      plVar5 = (long *)(*pcVar1)();
    }
    if (0x7f < *(ushort *)(plVar5 + 1)) {
      return true;
    }
  }
  else {
    cVar3 = (*pcVar1)();
    if (cVar3 != '\0') {
      return true;
    }
  }
  if (*(code **)(*param_1 + 0x128) == isStruct) {
    if ((byte)((char)param_1[1] - 0xfU) < 2) {
LAB_0011dd49: ) * (ushort*)( this + 0x4c ) = *(ushort*)( this + 0x4c ) | 0xfff ;*(code**)this = glslang::TInfoSinkBase::append;*(undefined***)( this + 0x20 ) = &PTR__TType_00123120;*(uint*)( this + 0xa0 ) = *(uint*)( this + 0xa0 ) & 0x9fc00000;this[0x40] = ( TIntermTyped )((byte)this[0x40] & 0xf0);*(undefined8*)( this + 8 ) = 0;*(uint*)( this + 0x28 ) = CONCAT22((short)( ( *(uint*)( this + 0x28 ) & 0xf80000ff ) >> 0x10 ), CONCAT11(1, (char)( *(uint*)( this + 0x28 ) & 0xf80000ff )));*(ulong*)( this + 0x38 ) = *(ulong*)( this + 0x38 ) & 0x8000000400000000;*(undefined8*)( this + 0x10 ) = 0;*(undefined4*)( this + 0x18 ) = 0;this[0x28] = param_2;*(ulong*)( this + 0x4d ) = ( ulong )(( uint ) * (undefined8*)( this + 0x4d ) & 0xffc00f) | 0xffffffffff001fc0;*(undefined8*)( this + 0x30 ) = 0;*(ulong*)( this + 0x55 ) = *(ulong*)( this + 0x55 ) & 0xfe000000800000 | 0x1ffffff7fffff;*(undefined8*)( this + 0x68 ) = 0xffffffff00000000;*(undefined8*)( this + 0x44 ) = 0xffffffffffffffff;*(undefined4*)( this + 0x5d ) = 0;*(undefined4*)( this + 100 ) = 0xfffff800;*(undefined8*)( this + 0x70 ) = 0;*(undefined2*)( this + 0x78 ) = 0;*(undefined1(*) [16])( this + 0xa8 ) = (undefined1[16])0x0;*(undefined1(*) [16])( this + 0x80 ) = (undefined1[16])0x0;*(undefined1(*) [16])( this + 0x90 ) = (undefined1[16])0x0;return;}/* glslang::TInfoSinkBase::TEMPNAMEPLACEHOLDERVALUE(int) */TInfoSinkBase * __thiscall glslang::TInfoSinkBase::operator<<(TInfoSinkBase *this,int param_1){
   size_t sVar1;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined1 *local_60;
   undefined1 local_50[24];
   char local_38[24];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   __snprintf_chk(local_38, 0x10, 2, 0x10, &_LC30, param_1);
   local_68 = glslang::GetThreadPoolAllocator();
   local_60 = local_50;
   sVar1 = strlen(local_38);
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_68, local_38, local_38 + sVar1);
   glslang::TInfoSinkBase::append((basic_string*)this);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TInfoSinkBase::message(glslang::TPrefixType, char const*) */void glslang::TInfoSinkBase::message(char *param_1, undefined4 param_2) {
   switch (param_2) {
      case 0:
    break;
      case 1:
    glslang::TInfoSinkBase::append(param_1);
    break;
      case 2:
    glslang::TInfoSinkBase::append(param_1);
    break;
      case 3:
    glslang::TInfoSinkBase::append(param_1);
    break;
      case 4:
    glslang::TInfoSinkBase::append(param_1);
    break;
      case 5:
    glslang::TInfoSinkBase::append(param_1);
    break;
      default:
    glslang::TInfoSinkBase::append(param_1);
   }

   glslang::TInfoSinkBase::append(param_1);
   glslang::TInfoSinkBase::append(param_1);
   return;
}
/* glslang::TSymbolTable::~TSymbolTable() */void glslang::TSymbolTable::~TSymbolTable(TSymbolTable *this) {
   long lVar1;
   uint uVar2;
   ulong uVar3;
   ulong uVar4;
   void *pvVar5;
   ulong uVar6;
   lVar1 = *(long*)( this + 8 );
   pvVar5 = *(void**)this;
   uVar6 = ( ulong ) * (uint*)( this + 0x24 );
   if (uVar6 < ( ulong )(lVar1 - (long)pvVar5 >> 3)) {
      do {
         if (*(TSymbolTableLevel**)( lVar1 + -8 ) != (TSymbolTableLevel*)0x0) {
            glslang::TSymbolTableLevel::~TSymbolTableLevel(*(TSymbolTableLevel**)( lVar1 + -8 ));
            pvVar5 = *(void**)this;
            uVar6 = ( ulong ) * (uint*)( this + 0x24 );
         }

         lVar1 = *(long*)( this + 8 ) + -8;
         *(long*)( this + 8 ) = lVar1;
         uVar3 = lVar1 - (long)pvVar5 >> 3;
         uVar2 = (int)uVar3 - 1;
         uVar4 = (ulong)uVar2 << 0x38;
         if (0x7f < uVar2) {
            uVar4 = 0x7f00000000000000;
         }

         *(ulong*)( this + 0x18 ) = *(ulong*)( this + 0x18 ) & 0xffffffffffffff | uVar4;
      }
 while ( uVar6 < uVar3 );
   }

   if (pvVar5 == (void*)0x0) {
      return;
   }

   operator_delete(pvVar5, *(long*)( this + 0x10 ) - (long)pvVar5);
   return;
}
/* std::_Function_base::~_Function_base() */void std::_Function_base::~_Function_base(_Function_base *this) {
   if (*(code**)( this + 0x10 ) != (code*)0x0) {
      /* WARNING: Could not recover jumptable at 0x0011fee5. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( this + 0x10 ) )(this, this, 3);
      return;
   }

   return;
}
/* glslang::TInputScanner::TInputScanner(int, char const* const*, unsigned long*, char const*
   const*, int, int, bool) */void glslang::TInputScanner::TInputScanner(TInputScanner *this, int param_1, char **param_2, ulong *param_3, char **param_4, int param_5, int param_6, bool param_7) {
   int iVar1;
   int iVar2;
   char *__s;
   undefined8 *puVar3;
   char *pcVar4;
   undefined8 uVar5;
   size_t sVar6;
   int iVar7;
   undefined8 *puVar8;
   long lVar9;
   long lVar10;
   ulong uVar11;
   *(undefined***)this = &PTR__TInputScanner_00123308;
   *(int*)( this + 8 ) = param_1;
   *(int*)( this + 0x3c ) = param_6;
   *(char***)( this + 0x10 ) = param_2;
   this[0x58] = (TInputScanner)param_7;
   *(ulong**)( this + 0x18 ) = param_3;
   *(undefined4*)( this + 0x20 ) = 0;
   *(undefined8*)( this + 0x28 ) = 0;
   *(int*)( this + 0x38 ) = param_5;
   this[0x59] = (TInputScanner)0x0;
   uVar11 = 0xffffffffffffffff;
   if ((ulong)(long)param_1 < 0x555555555555556) {
      uVar11 = (long)param_1 * 0x18;
   }

   puVar3 = (undefined8*)operator_new__(uVar11);
   iVar1 = *(int*)( this + 8 );
   *(undefined8**)( this + 0x30 ) = puVar3;
   if (0 < iVar1) {
      iVar2 = *(int*)( this + 0x38 );
      iVar7 = -iVar2;
      puVar8 = puVar3;
      do {
         *(int*)( puVar8 + 1 ) = iVar7;
         iVar7 = iVar7 + 1;
         *puVar8 = 0;
         *(undefined4*)( (long)puVar8 + 0xc ) = 0;
         *(undefined4*)( puVar8 + 2 ) = 0;
         puVar8 = puVar8 + 3;
      }
 while ( iVar7 != iVar1 - iVar2 );
      lVar9 = 0;
      if (param_4 != (char**)0x0) {
         do {
            __s = param_4[lVar9];
            pcVar4 = __s;
            if (__s != (char*)0x0) {
               uVar11 = glslang::GetThreadPoolAllocator();
               pcVar4 = (char*)glslang::TPoolAllocator::allocate(uVar11);
               uVar5 = glslang::GetThreadPoolAllocator();
               *(undefined8*)pcVar4 = uVar5;
               *(char**)( pcVar4 + 8 ) = pcVar4 + 0x18;
               sVar6 = strlen(__s);
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(pcVar4, __s, __s + sVar6);
            }

            puVar3 = *(undefined8**)( this + 0x30 );
            lVar10 = lVar9 + 1;
            puVar3[lVar9 * 3] = pcVar4;
            lVar9 = lVar10;
         }
 while ( (int)lVar10 < *(int*)( this + 8 ) );
      }

   }

   *(undefined4*)( this + 0x50 ) = 0;
   *(undefined8*)( this + 0x48 ) = 1;
   *(undefined4*)( (long)puVar3 + (long)*(int*)( this + 0x20 ) * 0x18 + 0xc ) = 1;
   *(undefined8*)( this + 0x40 ) = *puVar3;
   return;
}
/* glslang::TIntermediate::~TIntermediate() */void glslang::TIntermediate::~TIntermediate(TIntermediate *this) {
   void *pvVar1;
   undefined8 *puVar2;
   void *pvVar3;
   TIntermediate *pTVar4;
   undefined8 *puVar5;
   TIntermediate *pTVar6;
   pvVar1 = *(void**)( this + 0x7d8 );
   pvVar3 = *(void**)( this + 2000 );
   if (pvVar1 != pvVar3) {
      do {
         pvVar3 = (void*)( (long)pvVar3 + 0x20 );
         std::__cxx11::string::_M_dispose();
      }
 while ( pvVar1 != pvVar3 );
      pvVar3 = *(void**)( this + 2000 );
   }

   if (pvVar3 != (void*)0x0) {
      operator_delete(pvVar3, *(long*)( this + 0x7e0 ) - (long)pvVar3);
   }

   pvVar1 = *(void**)( this + 0x7b0 );
   while (pvVar1 != (void*)0x0) {
      std::_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::string>>>::_M_erase(*(_Rb_tree_node**)( (long)pvVar1 + 0x18 ));
      pvVar3 = *(void**)( (long)pvVar1 + 0x10 );
      std::__cxx11::string::_M_dispose();
      std::__cxx11::string::_M_dispose();
      operator_delete(pvVar1, 0x60);
      pvVar1 = pvVar3;
   }
;
   std::__cxx11::string::_M_dispose();
   std::__cxx11::string::_M_dispose();
   pvVar1 = *(void**)( this + 0x740 );
   while (pvVar1 != (void*)0x0) {
      std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>::_M_erase(*(_Rb_tree_node**)( (long)pvVar1 + 0x18 ));
      pvVar3 = *(void**)( (long)pvVar1 + 0x10 );
      operator_delete(pvVar1, 0x48);
      pvVar1 = pvVar3;
   }
;
   pTVar6 = this + 0x718;
   pTVar4 = this + 0x6b8;
   do {
      pvVar1 = *(void**)pTVar6;
      if (pvVar1 != (void*)0x0) {
         operator_delete(pvVar1, *(long*)( pTVar6 + 0x10 ) - (long)pvVar1);
      }

      pTVar6 = pTVar6 + -0x18;
   }
 while ( pTVar4 != pTVar6 );
   do {
      pvVar1 = *(void**)pTVar4;
      if (pvVar1 != (void*)0x0) {
         operator_delete(pvVar1, *(long*)( pTVar4 + 0x10 ) - (long)pvVar1);
      }

      pTVar4 = pTVar4 + -0x18;
   }
 while ( this + 0x640 != pTVar4 );
   pvVar1 = *(void**)( this + 0x640 );
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, *(long*)( this + 0x650 ) - (long)pvVar1);
   }

   puVar2 = *(undefined8**)( this + 0x618 );
   while (puVar2 != (undefined8*)0x0) {
      puVar5 = (undefined8*)*puVar2;
      operator_delete(puVar2, 0x10);
      puVar2 = puVar5;
   }
;
   memset(*(void**)( this + 0x608 ), 0, *(long*)( this + 0x610 ) * 8);
   *(undefined8*)( this + 0x620 ) = 0;
   *(undefined8*)( this + 0x618 ) = 0;
   if (*(TIntermediate**)( this + 0x608 ) != this + 0x638) {
      operator_delete(*(TIntermediate**)( this + 0x608 ), *(long*)( this + 0x610 ) << 3);
   }

   puVar2 = *(undefined8**)( this + 0x5e0 );
   while (puVar2 != (undefined8*)0x0) {
      puVar5 = (undefined8*)*puVar2;
      std::__cxx11::string::_M_dispose();
      operator_delete(puVar2, 0x38);
      puVar2 = puVar5;
   }
;
   memset(*(void**)( this + 0x5d0 ), 0, *(long*)( this + 0x5d8 ) * 8);
   *(undefined8*)( this + 0x5e8 ) = 0;
   *(undefined8*)( this + 0x5e0 ) = 0;
   if (*(TIntermediate**)( this + 0x5d0 ) != this + 0x600) {
      operator_delete(*(TIntermediate**)( this + 0x5d0 ), *(long*)( this + 0x5d8 ) << 3);
   }

   puVar2 = *(undefined8**)( this + 0x598 );
   while (puVar2 != (undefined8*)0x0) {
      puVar5 = (undefined8*)*puVar2;
      if ((undefined8*)puVar2[1] != puVar2 + 3) {
         operator_delete((undefined8*)puVar2[1], puVar2[3] + 1);
      }

      operator_delete(puVar2, 0x38);
      puVar2 = puVar5;
   }
;
   memset(*(void**)( this + 0x588 ), 0, *(long*)( this + 0x590 ) * 8);
   *(undefined8*)( this + 0x5a0 ) = 0;
   *(undefined8*)( this + 0x598 ) = 0;
   if (*(TIntermediate**)( this + 0x588 ) != this + 0x5b8) {
      operator_delete(*(TIntermediate**)( this + 0x588 ), *(long*)( this + 0x590 ) << 3);
   }

   pvVar1 = *(void**)( this + 0x568 );
   while (pvVar1 != (void*)0x0) {
      std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>::_M_erase(*(_Rb_tree_node**)( (long)pvVar1 + 0x18 ));
      pvVar3 = *(void**)( (long)pvVar1 + 0x10 );
      operator_delete(pvVar1, 0x50);
      pvVar1 = pvVar3;
   }
;
   pvVar1 = *(void**)( this + 0x538 );
   while (pvVar1 != (void*)0x0) {
      std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>::_M_erase(*(_Rb_tree_node**)( (long)pvVar1 + 0x18 ));
      pvVar3 = *(void**)( (long)pvVar1 + 0x10 );
      operator_delete(pvVar1, 0x50);
      pvVar1 = pvVar3;
   }
;
   pvVar1 = *(void**)( this + 0x4e8 );
   while (pvVar1 != (void*)0x0) {
      std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>::_M_erase(*(_Rb_tree_node**)( (long)pvVar1 + 0x18 ));
      pvVar3 = *(void**)( (long)pvVar1 + 0x10 );
      operator_delete(pvVar1, 0x48);
      pvVar1 = pvVar3;
   }
;
   pvVar1 = *(void**)( this + 0x4c0 );
   pvVar3 = *(void**)( this + 0x4b8 );
   if (pvVar1 != pvVar3) {
      do {
         pvVar3 = (void*)( (long)pvVar3 + 0x20 );
         std::__cxx11::string::_M_dispose();
      }
 while ( pvVar1 != pvVar3 );
      pvVar3 = *(void**)( this + 0x4b8 );
   }

   if (pvVar3 != (void*)0x0) {
      operator_delete(pvVar3, *(long*)( this + 0x4c8 ) - (long)pvVar3);
   }

   pTVar6 = this + 0x488;
   do {
      pvVar1 = *(void**)( pTVar6 + 0x10 );
      while (pvVar1 != (void*)0x0) {
         std::_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>::_M_erase(*(_Rb_tree_node**)( (long)pvVar1 + 0x18 ));
         pvVar3 = *(void**)( (long)pvVar1 + 0x10 );
         operator_delete(pvVar1, 0x28);
         pvVar1 = pvVar3;
      }
;
      pTVar6 = pTVar6 + -0x30;
   }
 while ( pTVar6 != this + 0x368 );
   puVar2 = *(undefined8**)( this + 0x350 );
   puVar5 = *(undefined8**)( this + 0x348 );
   if (puVar2 != puVar5) {
      do {
         pvVar1 = (void*)*puVar5;
         if (pvVar1 != (void*)0x0) {
            operator_delete(pvVar1, puVar5[2] - (long)pvVar1);
         }

         puVar5 = puVar5 + 5;
      }
 while ( puVar2 != puVar5 );
      puVar5 = *(undefined8**)( this + 0x348 );
   }

   if (puVar5 != (undefined8*)0x0) {
      operator_delete(puVar5, *(long*)( this + 0x358 ) - (long)puVar5);
   }

   std::__cxx11::string::_M_dispose();
   std::__cxx11::string::_M_dispose();
   pvVar1 = *(void**)( this + 0x98 );
   while (pvVar1 != (void*)0x0) {
      std::_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>::_M_erase(*(_Rb_tree_node**)( (long)pvVar1 + 0x18 ));
      pvVar3 = *(void**)( (long)pvVar1 + 0x10 );
      std::__cxx11::string::_M_dispose();
      operator_delete(pvVar1, 0x40);
      pvVar1 = pvVar3;
   }
;
   pTVar6 = *(TIntermediate**)( this + 0x48 );
   while (pTVar6 != this + 0x48) {
      pTVar4 = *(TIntermediate**)pTVar6;
      operator_delete(pTVar6, 0x68);
      pTVar6 = pTVar4;
   }
;
   std::__cxx11::string::_M_dispose();
   std::__cxx11::string::_M_dispose();
   return;
}
/* bool glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}) const */bool glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)(TType *this, uint param_2) {
   long lVar1;
   char cVar2;
   long lVar3;
   if ((byte)this[8] == param_2) {
      return true;
   }

   if (*(code**)( *(long*)this + 0x128 ) == isStruct) {
      if (( byte )((char)this[8] - 0xfU) < 2) {
         LAB_00120596:lVar1 = *(long*)( *(long*)( this + 0x68 ) + 0x10 );
         lVar3 = std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( *(long*)( this + 0x68 ) + 8 ),lVar1,param_2 ));
         return lVar1 != lVar3;
      }

   }
 else {
      cVar2 = ( **(code**)( *(long*)this + 0x128 ) )();
      if (cVar2 != '\0') goto LAB_00120596;
   }

   return false;
}
/* glslang::TType::containsBasicType(glslang::TBasicType) const */ulong glslang::TType::containsBasicType(TType *this, uint param_2) {
   long lVar1;
   char cVar2;
   undefined1 auVar3[16];
   if ((byte)this[8] == param_2) {
      return 1;
   }

   if (*(code**)( *(long*)this + 0x128 ) == isStruct) {
      if (( byte )((char)this[8] - 0xfU) < 2) {
         LAB_00120626:lVar1 = *(long*)( *(long*)( this + 0x68 ) + 0x10 );
         auVar3 = std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( *(long*)( this + 0x68 ) + 8 ),lVar1,param_2 ));
         return CONCAT71(auVar3._9_7_, lVar1 != auVar3._0_8_) & 0xffffffff;
      }

   }
 else {
      cVar2 = ( **(code**)( *(long*)this + 0x128 ) )();
      if (cVar2 != '\0') goto LAB_00120626;
   }

   return 0;
}
/* bool glslang::TType::contains<glslang::TType::containsStructure() const::{lambda(glslang::TType
   const*)#1}>(glslang::TType::containsStructure() const::{lambda(glslang::TType const*)#1}) const
    */bool glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)(TType *this, TType *param_2) {
   TType TVar1;
   long lVar2;
   char cVar3;
   code *pcVar4;
   long lVar5;
   pcVar4 = *(code**)( *(long*)this + 0x128 );
   if (this == param_2) {
      LAB_001206b0:if (pcVar4 != isStruct) {
         cVar3 = ( *pcVar4 )(this);
         if (cVar3 == '\0') {
            return false;
         }

         goto LAB_001206d9;
      }

      TVar1 = this[8];
   }
 else {
      if (pcVar4 != isStruct) {
         cVar3 = ( *pcVar4 )();
         if (cVar3 != '\0') {
            return true;
         }

         pcVar4 = *(code**)( *(long*)this + 0x128 );
         goto LAB_001206b0;
      }

      TVar1 = this[8];
      if (( byte )((char)TVar1 - 0xfU) < 2) {
         return true;
      }

   }

   if (1 < ( byte )((char)TVar1 - 0xfU)) {
      return false;
   }

   LAB_001206d9:lVar2 = *(long*)( *(long*)( this + 0x68 ) + 0x10 );
   lVar5 = std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsStructure ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( *(long*)( this + 0x68 ) + 8 ),lVar2,param_2 ));
   return lVar2 != lVar5;
}
/* glslang::TType::containsStructure() const */bool glslang::TType::containsStructure(TType *this) {
   long lVar1;
   char cVar2;
   long lVar3;
   if (*(code**)( *(long*)this + 0x128 ) == isStruct) {
      if (( byte )((char)this[8] - 0xfU) < 2) {
         LAB_00120746:lVar1 = *(long*)( *(long*)( this + 0x68 ) + 0x10 );
         lVar3 = std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsStructure ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( *(long*)( this + 0x68 ) + 8 ),lVar1,this ));
         return lVar1 != lVar3;
      }

   }
 else {
      cVar2 = ( **(code**)( *(long*)this + 0x128 ) )();
      if (cVar2 != '\0') goto LAB_00120746;
   }

   return false;
}
/* bool glslang::TType::contains<glslang::TType::containsSampler() const::{lambda(glslang::TType
   const*)#1}>(glslang::TType::containsSampler() const::{lambda(glslang::TType const*)#1}) const */bool glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const *)_1_ > (long *param_1){undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  lVar6 = *param_1;
  if (*(code **)(lVar6 + 0x168) == isTexture) {
    if ((char)param_1[1] == '\x0e') {
      if (*(code **)(lVar6 + 0x40) == getSampler) {
        plVar5 = param_1 + 0x10;
      }
      else {
        plVar5 = (long *)(**(code **)(lVar6 + 0x40))();
      }
      if (((*plVar5 & 0x200000) == 0) && ((*plVar5 & 0x80000) == 0)) {
        return true;
      }
      goto LAB_001208f0;
    }
    pcVar7 = *(code **)(lVar6 + 0x158);
    if (pcVar7 != isImage) goto LAB_00120940;
  }else{cVar2 = (**(code **)(lVar6 + 0x168))();
    if (cVar2 != '\0') {
      return true;
    }
LAB_001208f0:
    lVar6 = *param_1;
    pcVar7 = *(code **)(lVar6 + 0x158);
    if (pcVar7 == isImage) {
      if ((char)param_1[1] != '\x0e') goto LAB_001207b6;
      if (*(code **)(lVar6 + 0x40) == getSampler) {
        plVar5 = param_1 + 0x10;
      }
      else {
        plVar5 = (long *)(**(code **)(lVar6 + 0x40))(param_1);
      }
      if (((*plVar5 & 0x80000) != 0) && (1 < (byte)(*(char *)((long)plVar5 + 1) - 7U))) {
        return true;
      }
    }
    else {
LAB_00120940:
      cVar2 = (*pcVar7)(param_1);
      if (cVar2 != '\0') {
        return true;
      }
    }lVar6 = *param_1;}(*(code**)( lVar6 + 0x128 ) == isStruct)(1 < ( byte )((char)param_1[1] - 0xfU)){
      return false;}(**(code**)( lVar6 + 0x128 ))(param_1);if (cVar2 == '\0') {
   return false;
}
}puVar1 = *(undefined8**)( param_1[0xd] + 0x10 );puVar8 = *(undefined8**)( param_1[0xd] + 8 );uVar4 = (long)puVar1 - (long)puVar8;puVar9 = (undefined8*)( ( uVar4 & 0xffffffffffffff80 ) + (long)puVar8 );if (0x7f < (long)uVar4) {
   do {
      bVar3 = contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(*puVar8);
      if (bVar3) goto LAB_00120898;
      for (int i = 0; i < 3; i++) {
         bVar3 = contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(puVar8[( 4*i + 4 )]);
         if (bVar3) {
            return puVar1 != puVar8 + ( 4*i + 4 );
         }

      }

      puVar8 = puVar8 + 0x10;
   }
 while ( puVar8 != puVar9 );
   uVar4 = (long)puVar1 - (long)puVar8;
}
lVar6 = (long)uVar4 >> 5;if (lVar6 == 2) {
   LAB_001209a8:bVar3 = contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(*puVar8);
   if (bVar3) goto LAB_00120898;
   puVar8 = puVar8 + 4;
}
 else {
   if (lVar6 == 3) {
      bVar3 = contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(*puVar8);
      if (bVar3) goto LAB_00120898;
      puVar8 = puVar8 + 4;
      goto LAB_001209a8;
   }

   if (lVar6 != 1) {
      return false;
   }

}
bVar3 = contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(*puVar8);if (!bVar3) {
   return false;
}
LAB_00120898:return puVar1 != puVar8;}/* glslang::TType::containsSampler() const */void glslang::TType::containsSampler(void) {
   contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)
   _1_ > (  );
   return;
}
/* bool glslang::TType::contains<glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}) const */bool glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const *)_1_ > ( long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0xe8) == isArray) {
    lVar3 = param_1[0xc];
    if (lVar3 != 0) {
LAB_00120a3a:
      if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) {
        return true;
      }
      goto LAB_00120a4e;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0xe8))();
    if (cVar1 != '\0') {
      lVar3 = param_1[0xc];
      goto LAB_00120a3a;
    }
LAB_00120a4e:
    lVar2 = *param_1;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)param_1[1] - 0xfU) < 2) {
LAB_00120a61: ) = param_2 ;*(TIntermediate**)( this + 0x48 ) = this + 0x48;*(TIntermediate**)( this + 0x50 ) = this + 0x48;*(undefined4*)( this + 0x60 ) = param_4;*(TIntermediate**)( this + 0xa0 ) = this + 0x90;*(TIntermediate**)( this + 0xa8 ) = this + 0x90;*(undefined8*)( this + 0x10 ) = 0;this[0x18] = (TIntermediate)0x0;*(undefined8*)( this + 0x30 ) = 0;this[0x38] = (TIntermediate)0x0;*(undefined8*)( this + 0x58 ) = 0;*(undefined8*)( this + 0x68 ) = 0;*(undefined8*)( this + 0x70 ) = 0;this[0x78] = (TIntermediate)0x0;*(undefined8*)( this + 0x80 ) = 0;*(undefined4*)( this + 0x90 ) = 0;*(undefined8*)( this + 0x98 ) = 0;*(undefined8*)( this + 0xb0 ) = 0;*(undefined8*)( this + 0xb8 ) = 0;*(undefined8*)( this + 0x254 ) = 0;puVar7 = (undefined8*)( ( ulong )(this + 0xc0) & 0xfffffffffffffff8 );for (uVar6 = ( ulong )(( (int)this - (int)(undefined8*)( ( ulong )(this + 0xc0) & 0xfffffffffffffff8 ) ) + 0x25cU >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
   *puVar7 = 0;
   puVar7 = puVar7 + 1;
}
this[0x25c] = (TIntermediate)0x0;*(undefined8*)( this + 0x260 ) = 0;*(undefined4*)( this + 0x268 ) = 0;*(undefined8*)( this + 0x26c ) = 0;*(undefined2*)( this + 0x274 ) = 0;*(undefined8*)( this + 0x298 ) = 0;std::__cxx11::string::string<std::allocator<char>>((string*)( this + 0x2a0 ), "", param_3);std::__cxx11::string::string<std::allocator<char>>((string*)( this + 0x2c0 ), "", extraout_RDX);uVar2 = _LC69;uVar1 = _LC28;*(undefined4*)( this + 0x2e8 ) = 0x3f;*(undefined4*)( this + 0x300 ) = 0;*(undefined8*)( this + 0x2e0 ) = uVar2;this[0x304] = (TIntermediate)0x0;uVar2 = _LC70;*(undefined8*)( this + 0x308 ) = uVar1;*(undefined8*)( this + 0x310 ) = 0;*(undefined2*)( this + 0x318 ) = 0;this[0x31a] = (TIntermediate)0x0;*(undefined8*)( this + 0x31c ) = 0;*(undefined8*)( this + 0x324 ) = 0;*(undefined2*)( this + 0x32c ) = 0;this[0x32e] = (TIntermediate)0x0;*(undefined8*)( this + 0x330 ) = 0;this[0x338] = (TIntermediate)0x0;*(undefined4*)( this + 0x33c ) = 0;this[0x340] = (TIntermediate)0x0;*(undefined8*)( this + 0x358 ) = 0;*(undefined2*)( this + 0x360 ) = 0;this[0x362] = (TIntermediate)0x0;*(undefined8*)( this + 0x364 ) = 0;this[0x374] = (TIntermediate)0x0;*(undefined4*)( this + 0x378 ) = 0;*(char**)( this + 0x2f0 ) = "@this";*(char**)( this + 0x2f8 ) = "@count";*(undefined8*)( this + 0x36c ) = uVar2;*(undefined1(*) [16])( this + 0x348 ) = (undefined1[16])0x0;pTVar5 = this + 0x3a0;do {
   *(undefined4*)pTVar5 = 0;
   *(undefined8*)( pTVar5 + 8 ) = 0;
   *(TIntermediate**)( pTVar5 + 0x10 ) = pTVar5;
   *(TIntermediate**)( pTVar5 + 0x18 ) = pTVar5;
   pTVar4 = pTVar5 + 0x30;
   *(undefined8*)( pTVar5 + 0x20 ) = 0;
   pTVar5 = pTVar4;
}
 while ( this + 0x4c0 != pTVar4 );*(TIntermediate**)( this + 0x4f0 ) = this + 0x4e0;uVar3 = _LC71;*(TIntermediate**)( this + 0x4f8 ) = this + 0x4e0;*(TIntermediate**)( this + 0x540 ) = this + 0x530;*(TIntermediate**)( this + 0x548 ) = this + 0x530;*(TIntermediate**)( this + 0x570 ) = this + 0x560;*(TIntermediate**)( this + 0x578 ) = this + 0x560;*(undefined2*)( this + 0x4d4 ) = 0;*(TIntermediate**)( this + 0x588 ) = this + 0x5b8;*(undefined8*)( this + 0x4c8 ) = 0;*(undefined4*)( this + 0x4d0 ) = 0;this[0x4d6] = (TIntermediate)0x0;*(undefined4*)( this + 0x4e0 ) = 0;*(undefined8*)( this + 0x4e8 ) = 0;*(undefined8*)( this + 0x500 ) = 0;*(undefined8*)( this + 0x508 ) = 0;this[0x510] = (TIntermediate)0x0;*(undefined4*)( this + 0x530 ) = 0;*(undefined8*)( this + 0x538 ) = 0;*(undefined8*)( this + 0x550 ) = 0;*(undefined4*)( this + 0x560 ) = 0;*(undefined8*)( this + 0x568 ) = 0;*(undefined8*)( this + 0x580 ) = 0;*(undefined8*)( this + 0x590 ) = 1;*(undefined8*)( this + 0x598 ) = 0;*(undefined8*)( this + 0x5a0 ) = 0;*(undefined8*)( this + 0x5b0 ) = 0;*(undefined8*)( this + 0x5b8 ) = 0;*(undefined4*)( this + 0x5c0 ) = 0;*(undefined1(*) [16])( this + 0x4b8 ) = (undefined1[16])0x0;*(undefined1(*) [16])( this + 0x518 ) = (undefined1[16])0x0;*(undefined4*)( this + 0x5a8 ) = uVar3;*(undefined2*)( this + 0x5c4 ) = 0;*(undefined4*)( this + 0x5c8 ) = 0;*(undefined8*)( this + 0x5d8 ) = 1;*(undefined8*)( this + 0x5e0 ) = 0;*(undefined8*)( this + 0x5e8 ) = 0;*(undefined8*)( this + 0x5f8 ) = 0;*(undefined8*)( this + 0x600 ) = 0;*(undefined8*)( this + 0x610 ) = 1;*(undefined8*)( this + 0x618 ) = 0;*(undefined8*)( this + 0x620 ) = 0;*(undefined8*)( this + 0x630 ) = 0;*(TIntermediate**)( this + 0x5d0 ) = this + 0x600;*(TIntermediate**)( this + 0x608 ) = this + 0x638;*(undefined4*)( this + 0x5f0 ) = uVar3;*(undefined4*)( this + 0x628 ) = uVar3;*(undefined1(*) [16])( this + 0x638 ) = (undefined1[16])0x0;*(undefined1(*) [16])( this + 0x648 ) = (undefined1[16])0x0;pTVar5 = this + 0x658;do {
   *(undefined8*)( pTVar5 + 0x10 ) = 0;
   pTVar4 = pTVar5 + 0x18;
   *(undefined1(*) [16])pTVar5 = (undefined1[16])0x0;
   pTVar5 = pTVar4;
}
 while ( this + 0x6d0 != pTVar4 );*(undefined4*)( this + 0x738 ) = 0;*(TIntermediate**)( this + 0x748 ) = this + 0x738;*(TIntermediate**)( this + 0x750 ) = this + 0x738;*(TIntermediate**)( this + 0x760 ) = this + 0x770;*(TIntermediate**)( this + 0x780 ) = this + 0x790;*(TIntermediate**)( this + 0x7b8 ) = this + 0x7a8;*(TIntermediate**)( this + 0x7c0 ) = this + 0x7a8;uVar2 = _LC72;*(undefined8*)( this + 0x740 ) = 0;*(undefined8*)( this + 0x278 ) = uVar2;*(undefined8*)( this + 0x758 ) = 0;*(undefined8*)( this + 0x768 ) = 0;this[0x770] = (TIntermediate)0x0;*(undefined8*)( this + 0x788 ) = 0;this[0x790] = (TIntermediate)0x0;*(undefined4*)( this + 0x7a8 ) = 0;*(undefined8*)( this + 0x7b0 ) = 0;*(undefined8*)( this + 0x7c8 ) = 0;*(undefined8*)( this + 0x7e0 ) = 0;*(undefined4*)( this + 0x280 ) = 1;*(undefined2*)( this + 0x284 ) = 0;this[0x286] = (TIntermediate)0x0;*(undefined8*)( this + 0x288 ) = uVar1;*(undefined4*)( this + 0x290 ) = 0xffffffff;*(undefined1(*) [16])( this + 0x6d0 ) = (undefined1[16])0x0;*(undefined1(*) [16])( this + 0x6e0 ) = (undefined1[16])0x0;*(undefined1(*) [16])( this + 0x6f0 ) = (undefined1[16])0x0;*(undefined1(*) [16])( this + 0x700 ) = (undefined1[16])0x0;*(undefined1(*) [16])( this + 0x710 ) = (undefined1[16])0x0;*(undefined1(*) [16])( this + 0x720 ) = (undefined1[16])0x0;*(undefined1(*) [16])( this + 2000 ) = (undefined1[16])0x0;std::vector<glslang::TXfbBuffer,std::allocator<glslang::TXfbBuffer>>::_M_default_append((vector<glslang::TXfbBuffer,std::allocator<glslang::TXfbBuffer>>*)( this + 0x348 ), 0xf);*(undefined8*)( this + 0x38c ) = 0;*(undefined1(*) [16])( this + 0x37c ) = (undefined1[16])0x0;return;}/* WARNING: Control flow encountered bad instruction data *//* std::__detail::_Map_base<std::__cxx11::string, std::pair<std::__cxx11::string const, int>,
   std::allocator<std::pair<std::__cxx11::string const, int> >, std::__detail::_Select1st,
   std::equal_to<std::__cxx11::string >, std::hash<std::__cxx11::string >,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<true, false, true>,
   true>::operator[](std::__cxx11::string const&) */long *__thiscallstd::__detail::_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::allocator<std::pair<std::__cxx11::string_const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::allocator<std::pair<std::__cxx11::string_const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *this, string *param_1) {
   size_t __n;
   long lVar1;
   long lVar2;
   char cVar3;
   int iVar4;
   ulong uVar5;
   long *plVar6;
   _Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::allocator<std::pair<std::__cxx11::string_const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *__s;
   ulong uVar7;
   _Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::allocator<std::pair<std::__cxx11::string_const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *p_Var8;
   ulong uVar9;
   ulong extraout_RDX;
   ulong uVar10;
   long *plVar11;
   long *plVar12;
   long local_40;
   uVar5 = std::_Hash_bytes(*(void**)param_1, *(ulong*)( param_1 + 8 ), 0xc70f6907);
   uVar10 = *(ulong*)( this + 8 );
   uVar9 = uVar5 % uVar10;
   plVar6 = *(long**)( *(long*)this + uVar9 * 8 );
   if (plVar6 != (long*)0x0) {
      uVar7 = ( (long*)*plVar6 )[6];
      plVar11 = (long*)*plVar6;
      while (( ( plVar12 = plVar11 ),uVar5 != uVar7 || ( __n = *(size_t*)( param_1 + 8 ) ),__n != plVar12[2] )) {
         plVar11 = (long*)*plVar12;
         if (( plVar11 == (long*)0x0 ) || ( uVar7 = plVar11[6] ),plVar6 = plVar12,uVar9 != uVar7 % uVar10) goto LAB_00121910;
      }
;
      if (*plVar6 != 0) {
         return (long*)( *plVar6 + 0x28 );
      }

   }

   LAB_00121910:plVar6 = (long*)operator_new(0x38);
   *plVar6 = 0;
   lVar1 = *(long*)param_1;
   lVar2 = *(long*)( param_1 + 8 );
   plVar6[1] = (long)( plVar6 + 3 );
   __cxx11::string::_M_construct<char*>(plVar6 + 1, lVar1, lVar2 + lVar1);
   uVar10 = *(ulong*)( this + 0x18 );
   uVar7 = *(ulong*)( this + 8 );
   *(undefined4*)( plVar6 + 5 ) = 0;
   cVar3 = std::__detail::_Prime_rehash_policy::_M_need_rehash(( ulong )(this + 0x20), uVar7, uVar10);
   if (cVar3 == '\0') {
      __s = *(_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::allocator<std::pair<std::__cxx11::string_const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>**)this;
   }
 else {
      if (extraout_RDX == 1) {
         *(undefined8*)( this + 0x30 ) = 0;
         __s = this + 0x30;
      }
 else {
         if (extraout_RDX >> 0x3c != 0) {
            if (extraout_RDX >> 0x3d != 0) {
               std::__throw_bad_array_new_length();
            }

            std::__throw_bad_alloc();
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }

         __s = (_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::allocator<std::pair<std::__cxx11::string_const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>*)operator_new(extraout_RDX * 8);
         memset(__s, 0, extraout_RDX * 8);
      }

      plVar11 = *(long**)( this + 0x10 );
      *(undefined8*)( this + 0x10 ) = 0;
      uVar10 = 0;
      while (uVar9 = uVar10,plVar12 = plVar11,plVar11 != (long*)0x0) {
         while (true) {
            plVar11 = (long*)*plVar12;
            uVar10 = (ulong)plVar12[6] % extraout_RDX;
            p_Var8 = __s + uVar10 * 8;
            if (*(long**)p_Var8 == (long*)0x0) break;
            *plVar12 = **(long**)p_Var8;
            **(undefined8**)p_Var8 = plVar12;
            plVar12 = plVar11;
            if (plVar11 == (long*)0x0) goto LAB_00121a33;
         }
;
         *plVar12 = *(long*)( this + 0x10 );
         *(long**)( this + 0x10 ) = plVar12;
         *(_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::allocator<std::pair<std::__cxx11::string_const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>**)p_Var8 = this + 0x10;
         if (*plVar12 != 0) {
            *(long**)( __s + uVar9 * 8 ) = plVar12;
         }

      }
;
      LAB_00121a33:if (*(_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::allocator<std::pair<std::__cxx11::string_const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>**)this != this + 0x30) {
         operator_delete(*(_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::allocator<std::pair<std::__cxx11::string_const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>**)this, *(long*)( this + 8 ) * 8);
      }

      *(ulong*)( this + 8 ) = extraout_RDX;
      uVar9 = uVar5 % extraout_RDX;
      *(_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::allocator<std::pair<std::__cxx11::string_const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>**)this = __s;
   }

   local_40 = uVar9 * 8;
   plVar6[6] = uVar5;
   p_Var8 = __s + local_40;
   if (*(long**)p_Var8 == (long*)0x0) {
      lVar1 = *(long*)( this + 0x10 );
      *(long**)( this + 0x10 ) = plVar6;
      *plVar6 = lVar1;
      if (lVar1 != 0) {
         *(long**)( __s + ( *(ulong*)( lVar1 + 0x30 ) % *(ulong*)( this + 8 ) ) * 8 ) = plVar6;
      }

      *(_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::allocator<std::pair<std::__cxx11::string_const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>**)p_Var8 = this + 0x10;
   }
 else {
      *plVar6 = **(long**)p_Var8;
      **(undefined8**)p_Var8 = plVar6;
   }

   *(long*)( this + 0x18 ) = *(long*)( this + 0x18 ) + 1;
   return plVar6 + 5;
}
/* WARNING: Control flow encountered bad instruction data *//* std::__detail::_Map_base<std::__cxx11::string, std::pair<std::__cxx11::string const,
   glslang::TBlockStorageClass>, std::allocator<std::pair<std::__cxx11::string const,
   glslang::TBlockStorageClass> >, std::__detail::_Select1st, std::equal_to<std::__cxx11::string >,
   std::hash<std::__cxx11::string >, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<true, false, true>, true>::operator[](std::__cxx11::string
   const&) */long *__thiscallstd::__detail::_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TBlockStorageClass>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TBlockStorageClass>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TBlockStorageClass>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TBlockStorageClass>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *this, string *param_1) {
   size_t __n;
   long lVar1;
   long lVar2;
   char cVar3;
   int iVar4;
   ulong uVar5;
   long *plVar6;
   _Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TBlockStorageClass>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TBlockStorageClass>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *__s;
   ulong uVar7;
   _Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TBlockStorageClass>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TBlockStorageClass>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *p_Var8;
   ulong uVar9;
   ulong extraout_RDX;
   ulong uVar10;
   long *plVar11;
   long *plVar12;
   long local_40;
   uVar5 = std::_Hash_bytes(*(void**)param_1, *(ulong*)( param_1 + 8 ), 0xc70f6907);
   uVar10 = *(ulong*)( this + 8 );
   uVar9 = uVar5 % uVar10;
   plVar6 = *(long**)( *(long*)this + uVar9 * 8 );
   if (plVar6 != (long*)0x0) {
      uVar7 = ( (long*)*plVar6 )[6];
      plVar11 = (long*)*plVar6;
      while (( ( plVar12 = plVar11 ),uVar5 != uVar7 || ( __n = *(size_t*)( param_1 + 8 ) ),__n != plVar12[2] )) {
         plVar11 = (long*)*plVar12;
         if (( plVar11 == (long*)0x0 ) || ( uVar7 = plVar11[6] ),plVar6 = plVar12,uVar9 != uVar7 % uVar10) goto LAB_00121bd0;
      }
;
      if (*plVar6 != 0) {
         return (long*)( *plVar6 + 0x28 );
      }

   }

   LAB_00121bd0:plVar6 = (long*)operator_new(0x38);
   *plVar6 = 0;
   lVar1 = *(long*)param_1;
   lVar2 = *(long*)( param_1 + 8 );
   plVar6[1] = (long)( plVar6 + 3 );
   __cxx11::string::_M_construct<char*>(plVar6 + 1, lVar1, lVar2 + lVar1);
   uVar10 = *(ulong*)( this + 0x18 );
   uVar7 = *(ulong*)( this + 8 );
   *(undefined4*)( plVar6 + 5 ) = 0;
   cVar3 = std::__detail::_Prime_rehash_policy::_M_need_rehash(( ulong )(this + 0x20), uVar7, uVar10);
   if (cVar3 == '\0') {
      __s = *(_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TBlockStorageClass>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TBlockStorageClass>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>**)this;
   }
 else {
      if (extraout_RDX == 1) {
         *(undefined8*)( this + 0x30 ) = 0;
         __s = this + 0x30;
      }
 else {
         if (extraout_RDX >> 0x3c != 0) {
            if (extraout_RDX >> 0x3d != 0) {
               std::__throw_bad_array_new_length();
            }

            std::__throw_bad_alloc();
            /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
         }

         __s = (_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TBlockStorageClass>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TBlockStorageClass>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>*)operator_new(extraout_RDX * 8);
         memset(__s, 0, extraout_RDX * 8);
      }

      plVar11 = *(long**)( this + 0x10 );
      *(undefined8*)( this + 0x10 ) = 0;
      uVar10 = 0;
      while (uVar9 = uVar10,plVar12 = plVar11,plVar11 != (long*)0x0) {
         while (true) {
            plVar11 = (long*)*plVar12;
            uVar10 = (ulong)plVar12[6] % extraout_RDX;
            p_Var8 = __s + uVar10 * 8;
            if (*(long**)p_Var8 == (long*)0x0) break;
            *plVar12 = **(long**)p_Var8;
            **(undefined8**)p_Var8 = plVar12;
            plVar12 = plVar11;
            if (plVar11 == (long*)0x0) goto LAB_00121cf3;
         }
;
         *plVar12 = *(long*)( this + 0x10 );
         *(long**)( this + 0x10 ) = plVar12;
         *(_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TBlockStorageClass>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TBlockStorageClass>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>**)p_Var8 = this + 0x10;
         if (*plVar12 != 0) {
            *(long**)( __s + uVar9 * 8 ) = plVar12;
         }

      }
;
      LAB_00121cf3:if (*(_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TBlockStorageClass>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TBlockStorageClass>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>**)this != this + 0x30) {
         operator_delete(*(_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TBlockStorageClass>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TBlockStorageClass>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>**)this, *(long*)( this + 8 ) * 8);
      }

      *(ulong*)( this + 8 ) = extraout_RDX;
      uVar9 = uVar5 % extraout_RDX;
      *(_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TBlockStorageClass>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TBlockStorageClass>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>**)this = __s;
   }

   local_40 = uVar9 * 8;
   plVar6[6] = uVar5;
   p_Var8 = __s + local_40;
   if (*(long**)p_Var8 == (long*)0x0) {
      lVar1 = *(long*)( this + 0x10 );
      *(long**)( this + 0x10 ) = plVar6;
      *plVar6 = lVar1;
      if (lVar1 != 0) {
         *(long**)( __s + ( *(ulong*)( lVar1 + 0x30 ) % *(ulong*)( this + 8 ) ) * 8 ) = plVar6;
      }

      *(_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TBlockStorageClass>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TBlockStorageClass>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>**)p_Var8 = this + 0x10;
   }
 else {
      *plVar6 = **(long**)p_Var8;
      **(undefined8**)p_Var8 = plVar6;
   }

   *(long*)( this + 0x18 ) = *(long*)( this + 0x18 ) + 1;
   return plVar6 + 5;
}
/* std::_Rb_tree<std::__cxx11::string, std::pair<std::__cxx11::string const, int>,
   std::_Select1st<std::pair<std::__cxx11::string const, int> >, std::less<std::__cxx11::string >,
   std::allocator<std::pair<std::__cxx11::string const, int> > >::find(std::__cxx11::string const&)
   const */_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>> * __thiscallstd::_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>::find(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>> * this, string * param_1) < std::__cxx11::string < std::__cxx11::string_const < std::pair<std::__cxx11::string_const,int> > std::less<std::__cxx11::string> < std::pair<std::__cxx11::string_const,int> >> *p_Var1 ;_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>> *p_Var2void *__s2ulong uVar3ulong uVar4int iVar5ulong uVar6long lVar7_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>> *p_Var8_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>> *p_Var9p_Var1 = this + 8;p_Var8 = p_Var1;if (*(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>**)( this + 0x10 ) != (_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>*)0x0) {
   __s2 = *(void**)param_1;
   uVar3 = *(ulong*)( param_1 + 8 );
   p_Var9 = *(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>**)( this + 0x10 );
   do {
      while (true) {
         uVar4 = *(ulong*)( p_Var9 + 0x28 );
         uVar6 = uVar3;
         if (uVar4 <= uVar3) {
            uVar6 = uVar4;
         }

         if (( uVar6 != 0 ) && ( iVar5 = memcmp(*(void**)( p_Var9 + 0x20 ), __s2, uVar6) ),iVar5 != 0) break;
         lVar7 = uVar4 - uVar3;
         if (lVar7 < 0x80000000) {
            if (-0x80000001 < lVar7) {
               iVar5 = (int)lVar7;
               break;
            }

            goto LAB_00121e00;
         }

         LAB_00121e49:p_Var2 = p_Var9 + 0x10;
         p_Var8 = p_Var9;
         p_Var9 = *(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>**)p_Var2;
         if (*(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>**)p_Var2 == (_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>*)0x0) goto LAB_00121e55;
      }
;
      if (-1 < iVar5) goto LAB_00121e49;
      LAB_00121e00:p_Var9 = *(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>**)( p_Var9 + 0x18 );
   }
 while ( p_Var9 != (_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>*)0x0 );
   LAB_00121e55:if (p_Var1 != p_Var8) {
      uVar4 = *(ulong*)( p_Var8 + 0x28 );
      uVar6 = uVar3;
      if (uVar4 <= uVar3) {
         uVar6 = uVar4;
      }

      if (( uVar6 == 0 ) || ( iVar5 = memcmp(__s2, *(void**)( p_Var8 + 0x20 ), uVar6) ),iVar5 == 0) {
         lVar7 = uVar3 - uVar4;
         if (0x7fffffff < lVar7) {
            return p_Var8;
         }

         if (lVar7 < -0x80000000) {
            return p_Var1;
         }

         iVar5 = (int)lVar7;
      }

      if (iVar5 < 0) {
         p_Var8 = p_Var1;
      }

   }

}
return p_Var8;}/* void std::vector<glslang::TSymbolTableLevel*, std::allocator<glslang::TSymbolTableLevel*>
   >::_M_realloc_insert<glslang::TSymbolTableLevel*>(__gnu_cxx::__normal_iterator<glslang::TSymbolTableLevel**,
   std::vector<glslang::TSymbolTableLevel*, std::allocator<glslang::TSymbolTableLevel*> > >,
   glslang::TSymbolTableLevel*&&) */void std::vector<glslang::TSymbolTableLevel*,std::allocator<glslang::TSymbolTableLevel*>>::_M_realloc_insert<glslang::TSymbolTableLevel*>(vector<glslang::TSymbolTableLevel*,std::allocator<glslang::TSymbolTableLevel*>> *this, void *param_2, undefined8 *param_3) {
   void *__dest;
   void *pvVar1;
   void *__src;
   ulong uVar2;
   void *__dest_00;
   ulong uVar3;
   size_t __n;
   long lVar4;
   size_t __n_00;
   pvVar1 = *(void**)( this + 8 );
   __src = *(void**)this;
   uVar2 = (long)pvVar1 - (long)__src >> 3;
   if (uVar2 == 0xfffffffffffffff) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   __n = (long)param_2 - (long)__src;
   if (__src == pvVar1) {
      if (0xfffffffffffffffe < uVar2) goto LAB_00121f80;
      uVar3 = 0xfffffffffffffff;
      if (uVar2 + 1 < 0x1000000000000000) {
         uVar3 = uVar2 + 1;
      }

      uVar3 = uVar3 << 3;
      LAB_00121f8a:__dest_00 = operator_new(uVar3);
      lVar4 = uVar3 + (long)__dest_00;
   }
 else {
      uVar3 = uVar2 * 2;
      if (uVar3 < uVar2) {
         LAB_00121f80:uVar3 = 0x7ffffffffffffff8;
         goto LAB_00121f8a;
      }

      if (uVar3 != 0) {
         if (0xfffffffffffffff < uVar3) {
            uVar3 = 0xfffffffffffffff;
         }

         uVar3 = uVar3 * 8;
         goto LAB_00121f8a;
      }

      lVar4 = 0;
      __dest_00 = (void*)0x0;
   }

   __dest = (void*)( (long)__dest_00 + __n + 8 );
   __n_00 = (long)pvVar1 - (long)param_2;
   *(undefined8*)( (long)__dest_00 + __n ) = *param_3;
   if ((long)__n < 1) {
      if (0 < (long)__n_00) {
         memcpy(__dest, param_2, __n_00);
      }

      if (__src == (void*)0x0) goto LAB_00121f5c;
   }
 else {
      __dest_00 = memmove(__dest_00, __src, __n);
      if (0 < (long)__n_00) {
         memcpy(__dest, param_2, __n_00);
      }

   }

   operator_delete(__src, *(long*)( this + 0x10 ) - (long)__src);
   LAB_00121f5c:*(void**)this = __dest_00;
   *(size_t*)( this + 8 ) = (long)__dest + __n_00;
   *(long*)( this + 0x10 ) = lVar4;
   return;
}
/* void std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string >
   >::_M_realloc_insert<std::__cxx11::string >(__gnu_cxx::__normal_iterator<std::__cxx11::string*,
   std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string > > >,
   std::__cxx11::string&&) */void std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::_M_realloc_insert<std::__cxx11::string>(vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *this, void *param_2, long *param_3) {
   long *plVar1;
   void *pvVar2;
   void *pvVar3;
   long *plVar4;
   ulong uVar5;
   long *plVar6;
   long *plVar7;
   ulong uVar8;
   long *plVar9;
   long *plVar10;
   long lVar11;
   uint uVar12;
   uint uVar13;
   long lVar14;
   long lVar15;
   pvVar2 = *(void**)( this + 8 );
   pvVar3 = *(void**)this;
   uVar5 = (long)pvVar2 - (long)pvVar3 >> 5;
   if (uVar5 == 0x3ffffffffffffff) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   if (pvVar3 == pvVar2) {
      if (0xfffffffffffffffe < uVar5) goto LAB_00122188;
      uVar8 = 0x3ffffffffffffff;
      if (uVar5 + 1 < 0x400000000000000) {
         uVar8 = uVar5 + 1;
      }

      uVar8 = uVar8 << 5;
   }
 else {
      uVar8 = uVar5 * 2;
      if (uVar8 < uVar5) {
         LAB_00122188:uVar8 = 0x7fffffffffffffe0;
      }
 else {
         if (uVar8 == 0) {
            plVar6 = (long*)0x20;
            lVar11 = 0;
            plVar7 = (long*)0x0;
            goto LAB_001220bd;
         }

         if (0x3ffffffffffffff < uVar8) {
            uVar8 = 0x3ffffffffffffff;
         }

         uVar8 = uVar8 << 5;
      }

   }

   plVar7 = (long*)operator_new(uVar8);
   lVar11 = uVar8 + (long)plVar7;
   plVar6 = plVar7 + 4;
   LAB_001220bd:plVar9 = (long*)( ( (long)param_2 - (long)pvVar3 ) + (long)plVar7 );
   lVar15 = *param_3;
   plVar10 = param_3 + 2;
   lVar14 = param_3[1];
   *plVar9 = (long)( plVar9 + 2 );
   if ((long*)lVar15 == plVar10) {
      uVar5 = lVar14 + 1;
      uVar12 = (uint)uVar5;
      if (uVar12 < 8) {
         if (( uVar5 & 4 ) == 0) {
            if (( uVar12 != 0 ) && ( *(char*)( plVar9 + 2 ) = (char)param_3[2](uVar5 & 2) != 0 )) {
               *(undefined2*)( (long)plVar9 + ( uVar5 & 0xffffffff ) + 0xe ) = *(undefined2*)( (long)param_3 + ( uVar5 & 0xffffffff ) + 0xe );
            }

         }
 else {
            *(int*)( plVar9 + 2 ) = (int)param_3[2];
            *(undefined4*)( (long)plVar9 + ( uVar5 & 0xffffffff ) + 0xc ) = *(undefined4*)( (long)param_3 + ( uVar5 & 0xffffffff ) + 0xc );
         }

      }
 else {
         plVar9[2] = param_3[2];
         *(undefined8*)( (long)plVar9 + ( uVar5 & 0xffffffff ) + 8 ) = *(undefined8*)( (long)param_3 + ( uVar5 & 0xffffffff ) + 8 );
         lVar15 = (long)( plVar9 + 2 ) - ( ( ulong )(plVar9 + 3) & 0xfffffffffffffff8 );
         uVar12 = uVar12 + (int)lVar15 & 0xfffffff8;
         if (7 < uVar12) {
            uVar13 = 0;
            do {
               uVar5 = (ulong)uVar13;
               uVar13 = uVar13 + 8;
               *(undefined8*)( ( ( ulong )(plVar9 + 3) & 0xfffffffffffffff8 ) + uVar5 ) = *(undefined8*)( (long)plVar10 + ( uVar5 - lVar15 ) );
            }
 while ( uVar13 < uVar12 );
         }

      }

   }
 else {
      *plVar9 = lVar15;
      plVar9[2] = param_3[2];
   }

   plVar9[1] = lVar14;
   *param_3 = (long)plVar10;
   param_3[1] = 0;
   *(undefined1*)( param_3 + 2 ) = 0;
   if (param_2 != pvVar3) {
      plVar10 = (long*)( (long)pvVar3 + 0x10 );
      plVar6 = (long*)( ( (long)param_2 - (long)pvVar3 ) + (long)plVar7 );
      plVar9 = plVar7;
      do {
         plVar1 = plVar9 + 2;
         lVar15 = plVar10[-1];
         *plVar9 = (long)plVar1;
         if (plVar10 == (long*)plVar10[-2]) {
            uVar5 = lVar15 + 1;
            uVar12 = (uint)uVar5;
            if (uVar12 < 8) {
               if (( uVar5 & 4 ) == 0) {
                  if (uVar12 != 0) {
                     *(char*)plVar1 = (char)*plVar10;
                     if (( uVar5 & 2 ) == 0) goto LAB_0012217b;
                     *(undefined2*)( (long)plVar9 + ( uVar5 & 0xffffffff ) + 0xe ) = *(undefined2*)( (long)plVar10 + ( ( uVar5 & 0xffffffff ) - 2 ) );
                     lVar15 = plVar10[-1];
                  }

               }
 else {
                  *(int*)plVar1 = (int)*plVar10;
                  *(undefined4*)( (long)plVar9 + ( uVar5 & 0xffffffff ) + 0xc ) = *(undefined4*)( (long)plVar10 + ( ( uVar5 & 0xffffffff ) - 4 ) );
                  lVar15 = plVar10[-1];
               }

            }
 else {
               *plVar1 = *plVar10;
               *(undefined8*)( (long)plVar9 + ( uVar5 & 0xffffffff ) + 8 ) = *(undefined8*)( (long)plVar10 + ( ( uVar5 & 0xffffffff ) - 8 ) );
               lVar15 = (long)plVar1 - ( ( ulong )(plVar9 + 3) & 0xfffffffffffffff8 );
               uVar12 = uVar12 + (int)lVar15 & 0xfffffff8;
               if (7 < uVar12) {
                  uVar13 = 0;
                  do {
                     uVar5 = (ulong)uVar13;
                     uVar13 = uVar13 + 8;
                     *(undefined8*)( ( ( ulong )(plVar9 + 3) & 0xfffffffffffffff8 ) + uVar5 ) = *(undefined8*)( (long)plVar10 + ( uVar5 - lVar15 ) );
                  }
 while ( uVar13 < uVar12 );
               }

               LAB_0012217b:lVar15 = plVar10[-1];
            }

         }
 else {
            *plVar9 = plVar10[-2];
            plVar9[2] = *plVar10;
         }

         plVar9[1] = lVar15;
         plVar9 = plVar9 + 4;
         plVar10 = plVar10 + 4;
      }
 while ( plVar6 != plVar9 );
      plVar6 = plVar6 + 4;
   }

   plVar10 = plVar6;
   if (param_2 != pvVar2) {
      plVar9 = (long*)( (long)param_2 + 0x10 );
      plVar10 = (long*)( ( (long)pvVar2 - (long)param_2 ) + (long)plVar6 );
      do {
         plVar4 = (long*)plVar9[-2];
         plVar1 = plVar6 + 2;
         lVar15 = plVar9[-1];
         *plVar6 = (long)plVar1;
         if (plVar9 == plVar4) {
            uVar5 = lVar15 + 1;
            uVar12 = (uint)uVar5;
            if (uVar12 < 8) {
               if (( uVar5 & 4 ) == 0) {
                  if (( uVar12 != 0 ) && ( *(char*)plVar1 = (char)*plVar9(uVar5 & 2) != 0 )) {
                     *(undefined2*)( (long)plVar6 + ( uVar5 & 0xffffffff ) + 0xe ) = *(undefined2*)( (long)plVar9 + ( ( uVar5 & 0xffffffff ) - 2 ) );
                  }

               }
 else {
                  *(int*)plVar1 = (int)*plVar9;
                  *(undefined4*)( (long)plVar6 + ( uVar5 & 0xffffffff ) + 0xc ) = *(undefined4*)( (long)plVar9 + ( ( uVar5 & 0xffffffff ) - 4 ) );
               }

            }
 else {
               *plVar1 = *plVar9;
               *(undefined8*)( (long)plVar6 + ( uVar5 & 0xffffffff ) + 8 ) = *(undefined8*)( (long)plVar9 + ( ( uVar5 & 0xffffffff ) - 8 ) );
               lVar14 = (long)plVar1 - ( ( ulong )(plVar6 + 3) & 0xfffffffffffffff8 );
               uVar12 = uVar12 + (int)lVar14 & 0xfffffff8;
               if (7 < uVar12) {
                  uVar13 = 0;
                  do {
                     uVar5 = (ulong)uVar13;
                     uVar13 = uVar13 + 8;
                     *(undefined8*)( ( ( ulong )(plVar6 + 3) & 0xfffffffffffffff8 ) + uVar5 ) = *(undefined8*)( (long)plVar9 + ( uVar5 - lVar14 ) );
                  }
 while ( uVar13 < uVar12 );
               }

            }

         }
 else {
            *plVar6 = (long)plVar4;
            plVar6[2] = *plVar9;
         }

         plVar6[1] = lVar15;
         plVar6 = plVar6 + 4;
         plVar9 = plVar9 + 4;
      }
 while ( plVar6 != plVar10 );
   }

   if (pvVar3 != (void*)0x0) {
      operator_delete(pvVar3, *(long*)( this + 0x10 ) - (long)pvVar3);
   }

   *(long**)this = plVar7;
   *(long**)( this + 8 ) = plVar10;
   *(long*)( this + 0x10 ) = lVar11;
   return;
}
/* glslang::TProcesses::addProcess(char const*) */void glslang::TProcesses::addProcess(TProcesses *this, char *param_1) {
   long *plVar1;
   size_t sVar2;
   uint uVar3;
   uint uVar4;
   long lVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   uint *local_58;
   undefined8 local_50;
   uint local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = local_48;
   if (param_1 == (char*)0x0) {
      std::__throw_logic_error("basic_string: construction from null is not valid");
   }
 else {
      sVar2 = strlen(param_1);
      std::__cxx11::string::_M_construct<char_const*>(&local_58, param_1, param_1 + sVar2);
      plVar1 = *(long**)( this + 8 );
      if (plVar1 == *(long**)( this + 0x10 )) {
         std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::_M_realloc_insert<std::__cxx11::string>((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>*)this, plVar1, &local_58);
      }
 else {
         *plVar1 = (long)( plVar1 + 2 );
         if (local_58 == local_48) {
            uVar6 = local_50 + 1;
            uVar3 = (uint)uVar6;
            if (uVar3 < 8) {
               if (( uVar6 & 4 ) == 0) {
                  if (uVar3 != 0) {
                     *(undefined1*)( plVar1 + 2 ) = (undefined1)local_48[0];
                     if (( uVar6 & 2 ) != 0) {
                        *(undefined2*)( (long)plVar1 + ( uVar6 & 0xffffffff ) + 0xe ) = *(undefined2*)( (long)&local_50 + ( uVar6 & 0xffffffff ) + 6 );
                     }

                  }

               }
 else {
                  *(uint*)( plVar1 + 2 ) = local_48[0];
                  *(undefined4*)( (long)plVar1 + ( uVar6 & 0xffffffff ) + 0xc ) = *(undefined4*)( (long)&local_50 + ( uVar6 & 0xffffffff ) + 4 );
               }

            }
 else {
               plVar1[2] = CONCAT44(local_48[1], local_48[0]);
               *(undefined8*)( (long)plVar1 + ( uVar6 & 0xffffffff ) + 8 ) = *(undefined8*)( (long)&local_50 + ( uVar6 & 0xffffffff ) );
               lVar5 = (long)( plVar1 + 2 ) - ( ( ulong )(plVar1 + 3) & 0xfffffffffffffff8 );
               uVar3 = uVar3 + (int)lVar5 & 0xfffffff8;
               if (7 < uVar3) {
                  uVar4 = 0;
                  do {
                     uVar6 = (ulong)uVar4;
                     uVar4 = uVar4 + 8;
                     *(undefined8*)( ( ( ulong )(plVar1 + 3) & 0xfffffffffffffff8 ) + uVar6 ) = *(undefined8*)( (long)local_48 + ( uVar6 - lVar5 ) );
                  }
 while ( uVar4 < uVar3 );
               }

            }

         }
 else {
            *plVar1 = (long)local_58;
            plVar1[2] = CONCAT44(local_48[1], local_48[0]);
         }

         plVar1[1] = local_50;
         *(long*)( this + 8 ) = *(long*)( this + 8 ) + 0x20;
         local_50 = 0;
         local_48[0] = local_48[0] & 0xffffff00;
         local_58 = local_48;
      }

      std::__cxx11::string::_M_dispose();
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TIntermediate::setSpv(glslang::SpvVersion const&) */void glslang::TIntermediate::setSpv(TIntermediate *this, SpvVersion *param_1) {
   uint uVar1;
   int iVar2;
   undefined8 uVar3;
   uVar3 = *(undefined8*)( param_1 + 8 );
   *(undefined8*)( this + 0x68 ) = *(undefined8*)param_1;
   *(undefined8*)( this + 0x70 ) = uVar3;
   *(SpvVersion*)( this + 0x78 ) = param_1[0x10];
   if (0 < *(int*)( this + 0x70 )) {
      TProcesses::addProcess((TProcesses*)( this + 2000 ), "client vulkan100");
   }

   if (0 < *(int*)( this + 0x74 )) {
      TProcesses::addProcess((TProcesses*)( this + 2000 ), "client opengl100");
   }

   uVar1 = *(uint*)( this + 0x68 );
   if (uVar1 == 0x10300) {
      TProcesses::addProcess((TProcesses*)( this + 2000 ), "target-env spirv1.3");
      LAB_00122850:iVar2 = *(int*)( this + 0x70 );
   }
 else {
      if (0x10300 < uVar1) {
         if (uVar1 == 0x10500) {
            TProcesses::addProcess((TProcesses*)( this + 2000 ), "target-env spirv1.5");
         }
 else if (uVar1 == 0x10600) {
            TProcesses::addProcess((TProcesses*)( this + 2000 ), "target-env spirv1.6");
         }
 else {
            if (uVar1 != 0x10400) goto LAB_001227d3;
            TProcesses::addProcess((TProcesses*)( this + 2000 ), "target-env spirv1.4");
         }

         goto LAB_00122850;
      }

      if (uVar1 == 0x10100) {
         TProcesses::addProcess((TProcesses*)( this + 2000 ), "target-env spirv1.1");
         goto LAB_00122850;
      }

      if (uVar1 < 0x10101) {
         if (( uVar1 & 0xfffeffff ) == 0) goto LAB_00122850;
      }
 else if (uVar1 == 0x10200) {
         TProcesses::addProcess((TProcesses*)( this + 2000 ), "target-env spirv1.2");
         goto LAB_00122850;
      }

      LAB_001227d3:TProcesses::addProcess((TProcesses*)( this + 2000 ), "target-env spirvUnknown");
      iVar2 = *(int*)( this + 0x70 );
   }

   if (iVar2 == 0x401000) {
      TProcesses::addProcess((TProcesses*)( this + 2000 ), "target-env vulkan1.1");
      iVar2 = *(int*)( this + 0x74 );
      goto joined_r0x00122883;
   }

   if (iVar2 < 0x401001) {
      if (iVar2 != 0) {
         if (iVar2 == 0x400000) {
            TProcesses::addProcess((TProcesses*)( this + 2000 ), "target-env vulkan1.0");
         }
 else {
            LAB_001228f0:TProcesses::addProcess((TProcesses*)( this + 2000 ), "target-env vulkanUnknown");
         }

      }

   }
 else if (iVar2 == 0x402000) {
      TProcesses::addProcess((TProcesses*)( this + 2000 ), "target-env vulkan1.2");
   }
 else {
      if (iVar2 != 0x403000) goto LAB_001228f0;
      TProcesses::addProcess((TProcesses*)( this + 2000 ), "target-env vulkan1.3");
   }

   iVar2 = *(int*)( this + 0x74 );
   joined_r0x00122883:if (0 < iVar2) {
      TProcesses::addProcess((TProcesses*)( this + 2000 ), "target-env opengl");
      return;
   }

   return;
}
/* void std::vector<TShHandleBase*, glslang::pool_allocator<TShHandleBase*>
   >::_M_realloc_insert<TShHandleBase*>(__gnu_cxx::__normal_iterator<TShHandleBase**,
   std::vector<TShHandleBase*, glslang::pool_allocator<TShHandleBase*> > >, TShHandleBase*&&) */void std::vector<TShHandleBase*,glslang::pool_allocator<TShHandleBase*>>::_M_realloc_insert<TShHandleBase*>(vector<TShHandleBase*,glslang::pool_allocator<TShHandleBase*>> *this, long param_2, undefined8 *param_3) {
   long lVar1;
   ulong uVar2;
   long lVar3;
   long lVar4;
   ulong uVar5;
   long lVar6;
   long lVar7;
   lVar1 = *(long*)( this + 0x10 );
   lVar3 = *(long*)( this + 8 );
   uVar2 = lVar1 - lVar3 >> 3;
   if (uVar2 == 0xfffffffffffffff) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   if (lVar3 == lVar1) {
      uVar5 = uVar2 + 1;
      if (0xfffffffffffffffe < uVar2) goto LAB_00122a70;
      if (0xfffffffffffffff < uVar5) {
         uVar5 = 0xfffffffffffffff;
      }

      lVar7 = uVar5 * 8;
      LAB_00122a7a:lVar4 = glslang::TPoolAllocator::allocate(*(ulong*)this);
      lVar7 = lVar4 + lVar7;
      lVar6 = lVar4 + 8;
      *(undefined8*)( lVar4 + ( param_2 - lVar3 ) ) = *param_3;
      if (param_2 != lVar3) {
         LAB_00122a09:lVar6 = 0;
         do {
            *(undefined8*)( lVar4 + lVar6 ) = *(undefined8*)( lVar3 + lVar6 );
            lVar6 = lVar6 + 8;
         }
 while ( lVar6 != param_2 - lVar3 );
         lVar6 = lVar4 + 8 + lVar6;
      }

      if (param_2 == lVar1) goto LAB_00122a54;
   }
 else {
      uVar5 = uVar2 * 2;
      if (uVar5 < uVar2) {
         LAB_00122a70:lVar7 = 0x7ffffffffffffff8;
         goto LAB_00122a7a;
      }

      if (uVar5 != 0) {
         if (0xfffffffffffffff < uVar5) {
            uVar5 = 0xfffffffffffffff;
         }

         lVar7 = uVar5 * 8;
         goto LAB_00122a7a;
      }

      lVar4 = 0;
      lVar7 = 0;
      lVar6 = 8;
      *(undefined8*)( param_2 - lVar3 ) = *param_3;
      if (param_2 != lVar3) goto LAB_00122a09;
   }

   lVar3 = 0;
   do {
      *(undefined8*)( lVar6 + lVar3 ) = *(undefined8*)( param_2 + lVar3 );
      lVar3 = lVar3 + 8;
   }
 while ( lVar3 != lVar1 - param_2 );
   lVar6 = lVar6 + lVar3;
   LAB_00122a54:*(long*)( this + 8 ) = lVar4;
   *(long*)( this + 0x10 ) = lVar6;
   *(long*)( this + 0x18 ) = lVar7;
   return;
}
/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_replace_cold(char*, unsigned long, char const*, unsigned long, unsigned long) */void std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_replace_cold(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this, char *param_1, ulong param_2, char *param_3, ulong param_4, ulong param_5) {
   long lVar1;
   char *pcVar2;
   size_t __n;
   byte bVar3;
   bVar3 = 0;
   if (param_4 - 1 < param_2) {
      if (param_4 == 1) {
         *param_1 = *param_3;
      }
 else {
         memmove(param_1, param_3, param_4);
      }

   }

   if (( param_5 != 0 ) && ( param_4 != param_2 )) {
      if (param_5 == 1) {
         param_1[param_4] = param_1[param_2];
      }
 else {
         memmove(param_1 + param_4, param_1 + param_2, param_5);
      }

   }

   if (param_2 < param_4) {
      pcVar2 = param_1 + param_2;
      if (pcVar2 < param_3 + param_4) {
         if (param_3 < pcVar2) {
            __n = (long)pcVar2 - (long)param_3;
            if (__n == 1) {
               *param_1 = *param_3;
            }
 else {
               memmove(param_1, param_3, __n);
            }

            pcVar2 = param_1 + param_4;
            param_1 = param_1 + __n;
            lVar1 = param_4 - __n;
            if (lVar1 != 1) {
               if (lVar1 == 0) {
                  return;
               }

               for (; lVar1 != 0; lVar1 = lVar1 + -1) {
                  *param_1 = *pcVar2;
                  pcVar2 = pcVar2 + (ulong)bVar3 * -2 + 1;
                  param_1 = param_1 + (ulong)bVar3 * -2 + 1;
               }

               return;
            }

         }
 else {
            pcVar2 = param_3 + ( param_4 - param_2 );
            if (param_4 != 1) {
               for (; param_4 != 0; param_4 = param_4 - 1) {
                  *param_1 = *pcVar2;
                  pcVar2 = pcVar2 + (ulong)bVar3 * -2 + 1;
                  param_1 = param_1 + (ulong)bVar3 * -2 + 1;
               }

               return;
            }

         }

         *param_1 = *pcVar2;
      }
 else {
         if (param_4 != 1) {
            memmove(param_1, param_3, param_4);
            return;
         }

         *param_1 = *param_3;
      }

   }

   return;
}
/* glslang::TIntermAggregate::TIntermAggregate(glslang::TOperator) */void glslang::TIntermAggregate::TIntermAggregate(TIntermAggregate *this, undefined4 param_2) {
   undefined8 uVar1;
   TIntermAggregate *pTVar2;
   TIntermTyped::TIntermTyped((TIntermTyped*)this, 1);
   *(undefined4*)( this + 0xb8 ) = param_2;
   *(undefined4*)( this + 0xbc ) = 0;
   *(code**)this = glslang::TIntermediate::mergeGlobalUniformBlocks;
   uVar1 = glslang::GetThreadPoolAllocator();
   *(undefined8*)( this + 200 ) = 0;
   *(undefined8*)( this + 0xc0 ) = uVar1;
   *(undefined8*)( this + 0xd0 ) = 0;
   *(undefined8*)( this + 0xd8 ) = 0;
   uVar1 = glslang::GetThreadPoolAllocator();
   *(undefined8*)( this + 0xe8 ) = 0;
   *(undefined8*)( this + 0xe0 ) = uVar1;
   *(undefined8*)( this + 0xf0 ) = 0;
   *(undefined8*)( this + 0xf8 ) = 0;
   uVar1 = glslang::GetThreadPoolAllocator();
   this[0x118] = (TIntermAggregate)0x0;
   *(undefined8*)( this + 0x100 ) = uVar1;
   *(TIntermAggregate**)( this + 0x108 ) = this + 0x118;
   *(undefined8*)( this + 0x110 ) = 0;
   *(undefined8*)( this + 0x130 ) = 0;
   uVar1 = glslang::GetThreadPoolAllocator();
   pTVar2 = this + 0x150;
   *(undefined8*)( this + 0x148 ) = 0;
   *(undefined8*)( this + 0x138 ) = uVar1;
   *(TIntermAggregate**)( this + 0x140 ) = pTVar2;
   this[0x150] = (TIntermAggregate)0x0;
   if (pTVar2 == (TIntermAggregate*)&_LC55) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_replace_cold((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)( this + 0x138 ), "", 0, "", 0, 0);
      pTVar2 = *(TIntermAggregate**)( this + 0x140 );
   }

   *(undefined8*)( this + 0x148 ) = 0;
   *pTVar2 = (TIntermAggregate)0x0;
   *(undefined4*)( this + 0x160 ) = 0xffffffff;
   *(undefined4*)( this + 0x168 ) = 0;
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* glslang::TScanContext::~TScanContext() */void glslang::TScanContext::~TScanContext(TScanContext *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* glslang::TType::~TType() */void glslang::TType::~TType(TType *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* glslang::TShader::ForbidIncluder::~ForbidIncluder() */void glslang::TShader::ForbidIncluder::~ForbidIncluder(ForbidIncluder *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* glslang::TIntermAggregate::TIntermAggregate(glslang::TOperator) */void glslang::TIntermAggregate::TIntermAggregate(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* glslang::TIntermediate::TIntermediate(EShLanguage, int, EProfile) */void glslang::TIntermediate::TIntermediate(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* glslang::TInputScanner::TInputScanner(int, char const* const*, unsigned long*, char const*
   const*, int, int, bool) */void glslang::TInputScanner::TInputScanner(TInputScanner *this, int param_1, char **param_2, ulong *param_3, char **param_4, int param_5, int param_6, bool param_7) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* std::_Function_base::~_Function_base() */void std::_Function_base::~_Function_base(_Function_base *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* glslang::TSymbolTable::~TSymbolTable() */void glslang::TSymbolTable::~TSymbolTable(TSymbolTable *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* glslang::TIntermTyped::TIntermTyped(glslang::TBasicType) */void glslang::TIntermTyped::TIntermTyped(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* glslang::TReflection::~TReflection() */void glslang::TReflection::~TReflection(TReflection *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* glslang::TIntermediate::~TIntermediate() */void glslang::TIntermediate::~TIntermediate(TIntermediate *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* glslang::TDeferredCompiler::~TDeferredCompiler() */void glslang::TDeferredCompiler::~TDeferredCompiler(TDeferredCompiler *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* glslang::TInputScanner::~TInputScanner() */void glslang::TInputScanner::~TInputScanner(TInputScanner *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* TShHandleBase::~TShHandleBase() */void TShHandleBase::~TShHandleBase(TShHandleBase *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

