/* glslang::TAnonMember::clone() const */undefined8 glslang::TAnonMember::clone(void) {
   return 0;
}
/* glslang::TFunction::~TFunction() */void glslang::TFunction::~TFunction(TFunction *this) {
   code *pcVar1;
   long lVar2;
   lVar2 = *(long*)( this + 0x30 );
   *(undefined***)this = &PTR_clone_00111f38;
   if (lVar2 != *(long*)( this + 0x38 )) {
      do {
         while (( *(long**)( lVar2 + 8 ) == (long*)0x0 || ( pcVar1 = *(code**)( **(long**)( lVar2 + 8 ) + 8 ) ),pcVar1 == TType::~TType )) {
            lVar2 = lVar2 + 0x18;
            if (lVar2 == *(long*)( this + 0x38 )) {
               return;
            }

         }
;
         ( *pcVar1 )();
         lVar2 = lVar2 + 0x18;
      }
 while ( lVar2 != *(long*)( this + 0x38 ) );
   }

   return;
}
/* glslang::TFunction::~TFunction() */void glslang::TFunction::~TFunction(TFunction *this) {
   ~TFunction(this)
   ;;
   return;
}
/* std::_Rb_tree<glslang::TVector<glslang::TTypeLoc>*,
   std::pair<glslang::TVector<glslang::TTypeLoc>* const, glslang::TVector<glslang::TTypeLoc>*>,
   std::_Select1st<std::pair<glslang::TVector<glslang::TTypeLoc>* const,
   glslang::TVector<glslang::TTypeLoc>*> >, std::less<glslang::TVector<glslang::TTypeLoc>*>,
   glslang::pool_allocator<std::pair<glslang::TVector<glslang::TTypeLoc>* const,
   glslang::TVector<glslang::TTypeLoc>*> >
   >::_M_erase(std::_Rb_tree_node<std::pair<glslang::TVector<glslang::TTypeLoc>* const,
   glslang::TVector<glslang::TTypeLoc>*> >*) [clone .isra.0] */void std::_Rb_tree<glslang::TVector<glslang::TTypeLoc>*,std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>,std::_Select1st<std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>>,std::less<glslang::TVector<glslang::TTypeLoc>*>,glslang::pool_allocator<std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>>>::_M_erase(_Rb_tree_node *param_1) {
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
/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TSymbol*>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TSymbol*> >,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TSymbol*> >
   >::_M_erase(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TSymbol*> >*) [clone .isra.0] */void std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>::_M_erase(_Rb_tree_node *param_1) {
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
/* void std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_construct<char const*>(char const*, char const*, std::forward_iterator_tag) [clone .isra.0]
    */void std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(ulong *param_1, undefined1 *param_2, long param_3) {
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
/* glslang::TAnonMember::dump(TInfoSink&, bool) const */void glslang::TAnonMember::dump(TInfoSink *param_1, bool param_2) {
   basic_string *pbVar1;
   undefined4 uVar2;
   size_t sVar3;
   long *plVar4;
   undefined7 in_register_00000031;
   long in_FS_OFFSET;
   undefined8 local_78;
   undefined1 *local_70;
   undefined1 local_60[24];
   char local_48[24];
   long local_30;
   pbVar1 = (basic_string*)( CONCAT71(in_register_00000031, param_2) + 0x30 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   glslang::TInfoSinkBase::append((char*)pbVar1);
   if (*(code**)( *(long*)param_1 + 0xb8 ) == getMemberNumber) {
      uVar2 = *(undefined4*)( param_1 + 0x30 );
   }
 else {
      uVar2 = ( **(code**)( *(long*)param_1 + 0xb8 ) )(param_1);
   }

   __snprintf_chk(local_48, 0x10, 2, 0x10, &_LC3, uVar2);
   local_78 = glslang::GetThreadPoolAllocator();
   local_70 = local_60;
   sVar3 = strlen(local_48);
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_78, local_48, local_48 + sVar3);
   glslang::TInfoSinkBase::append(pbVar1);
   glslang::TInfoSinkBase::append((char*)pbVar1);
   if (*(code**)( *(long*)param_1 + 0xb0 ) == getAnonContainer) {
      plVar4 = *(long**)( param_1 + 0x28 );
   }
 else {
      plVar4 = (long*)( **(code**)( *(long*)param_1 + 0xb0 ) )(param_1);
   }

   if (*(code**)( *plVar4 + 0x18 ) != TSymbol::getName_abi_cxx11_) {
      ( **(code**)( *plVar4 + 0x18 ) )();
   }

   glslang::TInfoSinkBase::append((char*)pbVar1);
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   glslang::TInfoSinkBase::append((char*)pbVar1);
   return;
}
/* glslang::TSymbol::dumpExtensions(TInfoSink&) const */void glslang::TSymbol::dumpExtensions(TSymbol *this, TInfoSink *param_1) {
   int iVar1;
   long lVar2;
   TInfoSink *pTVar3;
   iVar1 = ( **(code**)( *(long*)this + 0x88 ) )();
   if (iVar1 == 0) {
      return;
   }

   pTVar3 = param_1 + 0x30;
   glslang::TInfoSinkBase::append((char*)pTVar3);
   if (0 < iVar1) {
      lVar2 = 0;
      do {
         ( **(code**)( *(long*)this + 0x90 ) )(this);
         lVar2 = lVar2 + 8;
         glslang::TInfoSinkBase::append((char*)pTVar3);
         glslang::TInfoSinkBase::append((char*)pTVar3);
      }
 while ( lVar2 != (long)iVar1 * 8 );
   }

   glslang::TInfoSinkBase::append((char*)pTVar3);
   return;
}
/* glslang::TSymbolTableLevel::dump(TInfoSink&, bool) const */void glslang::TSymbolTableLevel::dump(TSymbolTableLevel *this, TInfoSink *param_1, bool param_2) {
   _Rb_tree_node_base *p_Var1;
   for (p_Var1 = *(_Rb_tree_node_base**)( this + 0x20 ); p_Var1 != (_Rb_tree_node_base*)( this + 0x10 ); p_Var1 = (_Rb_tree_node_base*)std::_Rb_tree_increment(p_Var1)) {
      ( **(code**)( **(long**)( p_Var1 + 0x48 ) + 0x98 ) )(*(long**)( p_Var1 + 0x48 ), param_1, param_2);
   }

   return;
}
/* glslang::TSymbolTable::dump(TInfoSink&, bool) const */void glslang::TSymbolTable::dump(TSymbolTable *this, TInfoSink *param_1, bool param_2) {
   basic_string *pbVar1;
   long lVar2;
   size_t sVar3;
   _Rb_tree_node_base *p_Var4;
   int iVar5;
   long in_FS_OFFSET;
   long local_b0;
   undefined8 local_88;
   undefined1 *local_80;
   undefined1 local_70[24];
   char local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = (int)( *(long*)( this + 8 ) - *(long*)this >> 3 ) + -1;
   if (-1 < iVar5) {
      local_b0 = (long)iVar5 * 8;
      pbVar1 = (basic_string*)( param_1 + 0x30 );
      do {
         glslang::TInfoSinkBase::append((char*)pbVar1);
         __snprintf_chk(local_58, 0x10, 2, 0x10, &_LC3, iVar5);
         local_88 = glslang::GetThreadPoolAllocator();
         local_80 = local_70;
         sVar3 = strlen(local_58);
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_88, local_58, local_58 + sVar3);
         glslang::TInfoSinkBase::append(pbVar1);
         glslang::TInfoSinkBase::append((char*)pbVar1);
         lVar2 = *(long*)( *(long*)this + local_b0 );
         for (p_Var4 = *(_Rb_tree_node_base**)( lVar2 + 0x20 ); p_Var4 != (_Rb_tree_node_base*)( lVar2 + 0x10 ); p_Var4 = (_Rb_tree_node_base*)std::_Rb_tree_increment(p_Var4)) {
            ( **(code**)( **(long**)( p_Var4 + 0x48 ) + 0x98 ) )(*(long**)( p_Var4 + 0x48 ), param_1, param_2);
         }

         iVar5 = iVar5 + -1;
         local_b0 = local_b0 + -8;
      }
 while ( iVar5 != -1 );
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* glslang::TSymbolTableLevel::~TSymbolTableLevel() */void glslang::TSymbolTableLevel::~TSymbolTableLevel(TSymbolTableLevel *this) {
   size_t *psVar1;
   long lVar2;
   int iVar3;
   long lVar4;
   _Rb_tree_node_base *p_Var5;
   size_t sVar6;
   size_t sVar7;
   long lVar8;
   void *pvVar9;
   void *__s2;
   long lVar10;
   p_Var5 = *(_Rb_tree_node_base**)( this + 0x20 );
   do {
      if (p_Var5 == (_Rb_tree_node_base*)( this + 0x10 )) {
         if (*(void**)( this + 0x38 ) != (void*)0x0) {
            operator_delete__(*(void**)( this + 0x38 ));
         }

         for (lVar8 = *(long*)( this + 0x18 ); lVar8 != 0; lVar8 = *(long*)( lVar8 + 0x10 )) {
            std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>::_M_erase(*(_Rb_tree_node**)( lVar8 + 0x18 ));
         }

         return;
      }

      lVar8 = *(long*)( this + 0x50 );
      lVar10 = *(long*)( this + 0x48 );
      lVar4 = ( lVar8 - lVar10 >> 4 ) * -0x3333333333333333;
      if (0 < lVar4 >> 2) {
         sVar7 = *(size_t*)( p_Var5 + 0x30 );
         lVar4 = ( lVar4 >> 2 ) * 0x140 + lVar10;
         do {
            if (*(size_t*)( lVar10 + 0x10 ) == sVar7) {
               lVar2 = lVar10;
               if (sVar7 == 0) goto joined_r0x001008d8;
               __s2 = *(void**)( p_Var5 + 0x28 );
               iVar3 = memcmp(*(void**)( lVar10 + 8 ), __s2, sVar7);
               if (iVar3 == 0) goto joined_r0x001008d8;
               sVar6 = *(size_t*)( lVar10 + 0x60 );
               if (sVar7 != sVar6) {
                  sVar6 = *(size_t*)( lVar10 + 0xb0 );
                  if (sVar6 == sVar7) goto LAB_00100910;
                  LAB_001007bd:sVar6 = *(size_t*)( lVar10 + 0x100 );
                  if (sVar7 != sVar6) goto LAB_001007cd;
                  lVar2 = lVar10 + 0xf0;
                  if (sVar7 != 0) {
                     __s2 = *(void**)( p_Var5 + 0x28 );
                     LAB_001008b8:pvVar9 = *(void**)( lVar10 + 0xf8 );
                     goto LAB_001008bf;
                  }

                  goto joined_r0x001008d8;
               }

               pvVar9 = *(void**)( lVar10 + 0x58 );
               LAB_00100881:iVar3 = memcmp(pvVar9, __s2, sVar6);
               lVar2 = lVar10 + 0x50;
               if (iVar3 == 0) goto joined_r0x001008d8;
               sVar6 = *(size_t*)( lVar10 + 0xb0 );
               if (sVar7 == sVar6) {
                  pvVar9 = *(void**)( lVar10 + 0xa8 );
                  goto LAB_00100917;
               }

               sVar6 = *(size_t*)( lVar10 + 0x100 );
               if (sVar7 == sVar6) goto LAB_001008b8;
            }
 else {
               sVar6 = *(size_t*)( lVar10 + 0x60 );
               if (sVar7 == sVar6) {
                  lVar2 = lVar10 + 0x50;
                  if (sVar7 != 0) {
                     __s2 = *(void**)( p_Var5 + 0x28 );
                     pvVar9 = *(void**)( lVar10 + 0x58 );
                     goto LAB_00100881;
                  }

                  goto joined_r0x001008d8;
               }

               sVar6 = *(size_t*)( lVar10 + 0xb0 );
               if (sVar7 != sVar6) goto LAB_001007bd;
               lVar2 = lVar10 + 0xa0;
               if (sVar7 == 0) goto joined_r0x001008d8;
               __s2 = *(void**)( p_Var5 + 0x28 );
               LAB_00100910:pvVar9 = *(void**)( lVar10 + 0xa8 );
               LAB_00100917:iVar3 = memcmp(pvVar9, __s2, sVar6);
               lVar2 = lVar10 + 0xa0;
               if (iVar3 == 0) goto joined_r0x001008d8;
               sVar6 = *(size_t*)( lVar10 + 0x100 );
               if (sVar7 == sVar6) {
                  pvVar9 = *(void**)( lVar10 + 0xf8 );
                  LAB_001008bf:iVar3 = memcmp(pvVar9, __s2, sVar6);
                  lVar2 = lVar10 + 0xf0;
                  if (iVar3 == 0) goto joined_r0x001008d8;
               }

            }

            LAB_001007cd:lVar10 = lVar10 + 0x140;
         }
 while ( lVar10 != lVar4 );
         lVar4 = ( lVar8 - lVar10 >> 4 ) * -0x3333333333333333;
      }

      if (lVar4 == 2) {
         sVar7 = *(size_t*)( p_Var5 + 0x30 );
         if (*(size_t*)( lVar10 + 0x10 ) == sVar7) {
            LAB_00100a48:lVar2 = lVar10;
            if (( sVar7 != 0 ) && ( iVar3 = memcmp(*(void**)( lVar10 + 8 ), *(void**)( p_Var5 + 0x28 ), sVar7) ),iVar3 != 0) goto LAB_00100a38;
         }
 else {
            LAB_00100a38:lVar10 = lVar10 + 0x50;
            LAB_001009f4:if (( sVar7 != *(size_t*)( lVar10 + 0x10 ) ) || ( ( lVar2 = lVar10 ),sVar7 != 0 && ( iVar3 = memcmp(*(void**)( lVar10 + 8 ), *(void**)( p_Var5 + 0x28 ), sVar7) ),iVar3 != 0 )) goto LAB_001008de;
         }

         joined_r0x001008d8:if (lVar8 == lVar2) goto LAB_001008de;
      }
 else {
         if (lVar4 == 3) {
            sVar7 = *(size_t*)( p_Var5 + 0x30 );
            if (( *(size_t*)( lVar10 + 0x10 ) == sVar7 ) && ( ( lVar2 = lVar10 ),sVar7 == 0 || ( iVar3 = memcmp(*(void**)( lVar10 + 8 ), *(void**)( p_Var5 + 0x28 ), sVar7) ),iVar3 == 0 )) goto joined_r0x001008d8;
            lVar4 = lVar10 + 0x50;
            psVar1 = (size_t*)( lVar10 + 0x60 );
            lVar10 = lVar4;
            if (*psVar1 == sVar7) goto LAB_00100a48;
            goto LAB_00100a38;
         }

         if (lVar4 == 1) {
            sVar7 = *(size_t*)( p_Var5 + 0x30 );
            goto LAB_001009f4;
         }

         LAB_001008de:if (*(long**)( p_Var5 + 0x48 ) != (long*)0x0) {
            ( **(code**)( **(long**)( p_Var5 + 0x48 ) + 0x10 ) )();
         }

      }

      p_Var5 = (_Rb_tree_node_base*)std::_Rb_tree_increment(p_Var5);
   }
 while ( true );
}
/* glslang::TSymbolTableLevel::relateToOperator(char const*, glslang::TOperator) */void glslang::TSymbolTableLevel::relateToOperator(TSymbolTableLevel *this, char *param_1, undefined4 param_3) {
   _Rb_tree_node_base *p_Var1;
   _Rb_tree_node_base *p_Var2;
   void *__s;
   undefined1 *__s2;
   int iVar3;
   size_t sVar4;
   void *pvVar5;
   ulong uVar6;
   size_t sVar7;
   long *plVar8;
   _Rb_tree_node_base *p_Var9;
   long lVar10;
   ulong uVar11;
   _Rb_tree_node_base *p_Var12;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined1 *local_60;
   ulong local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = glslang::GetThreadPoolAllocator();
   local_60 = local_50;
   if (param_1 == (char*)0x0) {
      /* WARNING: Subroutine does not return */
      std::__throw_logic_error("basic_string: construction from null is not valid");
   }

   p_Var1 = (_Rb_tree_node_base*)( this + 0x10 );
   sVar4 = strlen(param_1);
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_68, param_1, param_1 + sVar4);
   __s2 = local_60;
   p_Var12 = *(_Rb_tree_node_base**)( this + 0x18 );
   p_Var9 = p_Var1;
   if (p_Var12 != (_Rb_tree_node_base*)0x0) {
      do {
         while (true) {
            uVar11 = *(ulong*)( p_Var12 + 0x30 );
            uVar6 = local_58;
            if (uVar11 <= local_58) {
               uVar6 = uVar11;
            }

            if (( uVar6 != 0 ) && ( iVar3 = memcmp(*(void**)( p_Var12 + 0x28 ), __s2, uVar6) ),iVar3 != 0) break;
            lVar10 = uVar11 - local_58;
            if (lVar10 < 0x80000000) {
               if (-0x80000001 < lVar10) {
                  iVar3 = (int)lVar10;
                  break;
               }

               goto LAB_00100b20;
            }

            LAB_00100b76:p_Var2 = p_Var12 + 0x10;
            p_Var9 = p_Var12;
            p_Var12 = *(_Rb_tree_node_base**)p_Var2;
            if (*(_Rb_tree_node_base**)p_Var2 == (_Rb_tree_node_base*)0x0) goto LAB_00100b83;
         }
;
         if (-1 < iVar3) goto LAB_00100b76;
         LAB_00100b20:p_Var12 = *(_Rb_tree_node_base**)( p_Var12 + 0x18 );
      }
 while ( p_Var12 != (_Rb_tree_node_base*)0x0 );
      LAB_00100b83:if (p_Var1 != p_Var9) {
         while (uVar11 = *(ulong*)( p_Var9 + 0x30 ),uVar11 != 0) {
            __s = *(void**)( p_Var9 + 0x28 );
            pvVar5 = memchr(__s, 0x28, uVar11);
            if (( pvVar5 == (void*)0x0 ) || ( uVar6 = uVar6 == 0xffffffffffffffff )) break;
            if (uVar6 < uVar11) {
               uVar11 = uVar6;
            }

            sVar7 = strlen(param_1);
            sVar4 = sVar7;
            if (uVar11 <= sVar7) {
               sVar4 = uVar11;
            }

            if (( ( ( sVar4 != 0 ) && ( iVar3 = memcmp(__s, param_1, sVar4) ),iVar3 != 0 ) ) || ( lVar10 = 0x7fffffff < lVar10 )) break;
            plVar8 = (long*)( **(code**)( **(long**)( p_Var9 + 0x48 ) + 0x38 ) )();
            if (*(code**)( *plVar8 + 0xd0 ) == TFunction::relateToOperator) {
               *(undefined4*)( plVar8 + 0x22 ) = param_3;
            }
 else {
               ( **(code**)( *plVar8 + 0xd0 ) )(plVar8, param_3);
            }

            p_Var9 = (_Rb_tree_node_base*)std::_Rb_tree_increment(p_Var9);
            if (p_Var9 == p_Var1) break;
         }
;
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* glslang::TSymbolTableLevel::setFunctionExtensions(char const*, int, char const* const*) */void glslang::TSymbolTableLevel::setFunctionExtensions(TSymbolTableLevel *this, char *param_1, int param_2, char **param_3) {
   _Rb_tree_node_base *p_Var1;
   _Rb_tree_node_base *p_Var2;
   void *__s;
   undefined1 *__s2;
   int iVar3;
   size_t sVar4;
   void *pvVar5;
   ulong uVar6;
   size_t sVar7;
   _Rb_tree_node_base *p_Var8;
   long lVar9;
   ulong uVar10;
   _Rb_tree_node_base *p_Var11;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined1 *local_60;
   ulong local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = glslang::GetThreadPoolAllocator();
   local_60 = local_50;
   if (param_1 == (char*)0x0) {
      /* WARNING: Subroutine does not return */
      std::__throw_logic_error("basic_string: construction from null is not valid");
   }

   p_Var1 = (_Rb_tree_node_base*)( this + 0x10 );
   sVar4 = strlen(param_1);
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_68, param_1, param_1 + sVar4);
   __s2 = local_60;
   p_Var11 = *(_Rb_tree_node_base**)( this + 0x18 );
   p_Var8 = p_Var1;
   if (p_Var11 != (_Rb_tree_node_base*)0x0) {
      do {
         while (true) {
            uVar10 = *(ulong*)( p_Var11 + 0x30 );
            uVar6 = local_58;
            if (uVar10 <= local_58) {
               uVar6 = uVar10;
            }

            if (( uVar6 != 0 ) && ( iVar3 = memcmp(*(void**)( p_Var11 + 0x28 ), __s2, uVar6) ),iVar3 != 0) break;
            lVar9 = uVar10 - local_58;
            if (lVar9 < 0x80000000) {
               if (-0x80000001 < lVar9) {
                  iVar3 = (int)lVar9;
                  break;
               }

               goto LAB_00100d30;
            }

            LAB_00100d86:p_Var2 = p_Var11 + 0x10;
            p_Var8 = p_Var11;
            p_Var11 = *(_Rb_tree_node_base**)p_Var2;
            if (*(_Rb_tree_node_base**)p_Var2 == (_Rb_tree_node_base*)0x0) goto LAB_00100d93;
         }
;
         if (-1 < iVar3) goto LAB_00100d86;
         LAB_00100d30:p_Var11 = *(_Rb_tree_node_base**)( p_Var11 + 0x18 );
      }
 while ( p_Var11 != (_Rb_tree_node_base*)0x0 );
      LAB_00100d93:if (p_Var1 != p_Var8) {
         while (uVar10 = *(ulong*)( p_Var8 + 0x30 ),uVar10 != 0) {
            __s = *(void**)( p_Var8 + 0x28 );
            pvVar5 = memchr(__s, 0x28, uVar10);
            if (( pvVar5 == (void*)0x0 ) || ( uVar6 = uVar6 == 0xffffffffffffffff )) break;
            if (uVar6 < uVar10) {
               uVar10 = uVar6;
            }

            sVar7 = strlen(param_1);
            sVar4 = sVar7;
            if (uVar10 <= sVar7) {
               sVar4 = uVar10;
            }

            if (( ( ( sVar4 != 0 ) && ( iVar3 = memcmp(__s, param_1, sVar4) ),iVar3 != 0 ) ) || ( lVar9 = 0x7fffffff < lVar9 )) break;
            ( **(code**)( **(long**)( p_Var8 + 0x48 ) + 0x80 ) )(*(long**)( p_Var8 + 0x48 ), param_2, param_3);
            p_Var8 = (_Rb_tree_node_base*)std::_Rb_tree_increment(p_Var8);
            if (p_Var8 == p_Var1) break;
         }
;
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* glslang::TSymbolTableLevel::readOnly() */void glslang::TSymbolTableLevel::readOnly(TSymbolTableLevel *this) {
   code *pcVar1;
   _Rb_tree_node_base *p_Var2;
   p_Var2 = *(_Rb_tree_node_base**)( this + 0x20 );
   do {
      if (p_Var2 == (_Rb_tree_node_base*)( this + 0x10 )) {
         return;
      }

      while (true) {
         pcVar1 = *(code**)( **(long**)( p_Var2 + 0x48 ) + 0xa8 );
         if (pcVar1 == TSymbol::makeReadOnly) break;
         ( *pcVar1 )();
         p_Var2 = (_Rb_tree_node_base*)std::_Rb_tree_increment(p_Var2);
         if (p_Var2 == (_Rb_tree_node_base*)( this + 0x10 )) {
            return;
         }

      }
;
      *(undefined1*)( *(long**)( p_Var2 + 0x48 ) + 4 ) = 0;
      p_Var2 = (_Rb_tree_node_base*)std::_Rb_tree_increment(p_Var2);
   }
 while ( true );
}
/* glslang::TSymbol::TSymbol(glslang::TSymbol const&) */void glslang::TSymbol::TSymbol(TSymbol *this, TSymbol *param_1) {
   char *__s;
   ulong uVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   size_t sVar4;
   *(undefined***)this = &PTR___cxa_pure_virtual_00111d58;
   __s = *(char**)( *(long*)( param_1 + 8 ) + 8 );
   uVar1 = glslang::GetThreadPoolAllocator();
   puVar2 = (undefined8*)glslang::TPoolAllocator::allocate(uVar1);
   uVar3 = glslang::GetThreadPoolAllocator();
   *puVar2 = uVar3;
   puVar2[1] = puVar2 + 3;
   if (__s != (char*)0x0) {
      sVar4 = strlen(__s);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(puVar2, __s, __s + sVar4);
      uVar3 = *(undefined8*)( param_1 + 0x10 );
      *(undefined8**)( this + 8 ) = puVar2;
      this[0x20] = (TSymbol)0x1;
      *(undefined8*)( this + 0x10 ) = uVar3;
      return;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_logic_error("basic_string: construction from null is not valid");
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
   std::random_access_iterator_tag) [clone .isra.0] */undefined8 * std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
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
                  LAB_001010bd:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
                  lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5,param_3 ));
                  if (lVar5 != lVar4) {
                     return param_1;
                  }

               }

            }
 else {
               cVar2 = ( **(code**)( *plVar1 + 0x128 ) )(plVar1);
               if (cVar2 != '\0') goto LAB_001010bd;
            }

            plVar1 = (long*)param_1[4];
            if (*(byte*)( plVar1 + 1 ) == param_3) goto LAB_0010110c;
            if (*(code**)( *plVar1 + 0x128 ) == glslang::TType::isStruct) {
               if (( byte )(*(byte*)( plVar1 + 1 ) - 0xf) < 2) {
                  LAB_001010ed:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
                  lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5,param_3 ));
                  if (lVar5 != lVar4) {
                     LAB_0010110c:return param_1 + 4;
                  }

               }

            }
 else {
               cVar2 = ( **(code**)( *plVar1 + 0x128 ) )(plVar1);
               if (cVar2 != '\0') goto LAB_001010ed;
            }

            plVar1 = (long*)param_1[8];
            if (*(byte*)( plVar1 + 1 ) == param_3) goto LAB_00101144;
            if (*(code**)( *plVar1 + 0x128 ) == glslang::TType::isStruct) {
               if (( byte )(*(byte*)( plVar1 + 1 ) - 0xf) < 2) {
                  LAB_00101125:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
                  lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5,param_3 ));
                  if (lVar5 != lVar4) {
                     LAB_00101144:return param_1 + 8;
                  }

               }

            }
 else {
               cVar2 = ( **(code**)( *plVar1 + 0x128 ) )(plVar1);
               if (cVar2 != '\0') goto LAB_00101125;
            }

            plVar1 = (long*)param_1[0xc];
            if (param_3 == *(byte*)( plVar1 + 1 )) goto LAB_0010117c;
            if (*(code**)( *plVar1 + 0x128 ) == glslang::TType::isStruct) {
               if (( byte )(*(byte*)( plVar1 + 1 ) - 0xf) < 2) {
                  LAB_0010115d:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
                  lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5,param_3 ));
                  if (lVar5 != lVar4) {
                     LAB_0010117c:return param_1 + 0xc;
                  }

               }

            }
 else {
               cVar2 = ( **(code**)( *plVar1 + 0x128 ) )(plVar1);
               if (cVar2 != '\0') goto LAB_0010115d;
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

            goto LAB_001011d8;
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
      LAB_001011d8:bVar3 = glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>((TType*)*param_1, param_3);
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
               LAB_00101230:do {
                  plVar6 = plVar1;
                  plVar1 = (long*)*plVar6;
                  lVar4 = *plVar1;
                  if (param_3 == plVar1) {
                     LAB_00101280:if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
                        if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                           LAB_0010129d:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
                           lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsStructure ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4,param_3 ));
                           if (lVar4 != lVar5) {
                              return plVar6;
                           }

                        }

                     }
 else {
                        cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
                        if (cVar2 != '\0') goto LAB_0010129d;
                     }

                  }
 else {
                     if (*(code**)( lVar4 + 0x128 ) != glslang::TType::isStruct) {
                        cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
                        if (cVar2 != '\0') {
                           return plVar6;
                        }

                        lVar4 = *plVar1;
                        goto LAB_00101280;
                     }

                     if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                        return plVar6;
                     }

                  }

                  plVar1 = (long*)plVar6[4];
                  lVar4 = *plVar1;
                  if (param_3 == plVar1) {
                     LAB_00101300:if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
                        if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                           LAB_0010131d:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
                           lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsStructure ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4,param_3 ));
                           if (lVar4 != lVar5) {
                              LAB_001012e6:return plVar6 + 4;
                           }

                        }

                     }
 else {
                        cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
                        if (cVar2 != '\0') goto LAB_0010131d;
                     }

                  }
 else {
                     if (*(code**)( lVar4 + 0x128 ) != glslang::TType::isStruct) {
                        cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
                        if (cVar2 != '\0') goto LAB_001012e6;
                        lVar4 = *plVar1;
                        goto LAB_00101300;
                     }

                     if (( byte )((char)plVar1[1] - 0xfU) < 2) goto LAB_001012e6;
                  }

                  plVar1 = (long*)plVar6[8];
                  lVar4 = *plVar1;
                  if (param_3 == plVar1) {
                     LAB_00101380:if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
                        if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                           LAB_0010139d:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
                           lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsStructure ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4,param_3 ));
                           if (lVar4 != lVar5) {
                              LAB_00101366:return plVar6 + 8;
                           }

                        }

                     }
 else {
                        cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
                        if (cVar2 != '\0') goto LAB_0010139d;
                     }

                  }
 else {
                     if (*(code**)( lVar4 + 0x128 ) != glslang::TType::isStruct) {
                        cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
                        if (cVar2 != '\0') goto LAB_00101366;
                        lVar4 = *plVar1;
                        goto LAB_00101380;
                     }

                     if (( byte )((char)plVar1[1] - 0xfU) < 2) goto LAB_00101366;
                  }

                  plVar1 = (long*)plVar6[0xc];
                  lVar4 = *plVar1;
                  if (param_3 == plVar1) {
                     LAB_00101400:if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
                        if (1 < ( byte )((char)plVar1[1] - 0xfU)) goto LAB_0010143a;
                     }
 else {
                        cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
                        if (cVar2 == '\0') {
                           plVar1 = plVar6 + 0x10;
                           if (param_1 + ( lVar7 >> 7 ) * 0x10 == plVar6 + 0x10) break;
                           goto LAB_00101230;
                        }

                     }

                     lVar4 = *(long*)( plVar1[0xd] + 0x10 );
                     lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsStructure ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4,param_3 ));
                     if (lVar4 != lVar5) {
                        LAB_001013e6:return plVar6 + 0xc;
                     }

                  }
 else {
                     if (*(code**)( lVar4 + 0x128 ) != glslang::TType::isStruct) {
                        cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
                        if (cVar2 != '\0') goto LAB_001013e6;
                        lVar4 = *plVar1;
                        goto LAB_00101400;
                     }

                     if (( byte )((char)plVar1[1] - 0xfU) < 2) goto LAB_001013e6;
                  }

                  LAB_0010143a:plVar1 = plVar6 + 0x10;
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

                  goto LAB_0010150d;
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
            LAB_0010150d:bVar3 = glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>((TType*)*param_1, param_3);
            if (!bVar3) {
               return param_2;
            }

            return param_1;
         }
, /* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */, undefined8 *
std::
__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>, >, __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_), const::_lambda(glslang::TTypeLoc_const&)_1_>>
          (undefined8 *param_1,undefined8 *param_2), {
                  bool bVar1;
                  long lVar2;
                  undefined8 *puVar3;
                  lVar2 = (long)param_2 - (long)param_1;
                  if (0 < lVar2 >> 7) {
                     puVar3 = param_1 + ( lVar2 >> 7 ) * 0x10;
                     do {
                        bVar1 = glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(*param_1);
                        if (bVar1) {
                           return param_1;
                        }

                        for (int i = 0; i < 3; i++) {
                           bVar1 = glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(param_1[( 4*i + 4 )]);
                           if (bVar1) {
                              return param_1 + ( 4*i + 4 );
                           }

                        }

                        param_1 = param_1 + 0x10;
                     }
 while ( param_1 != puVar3 );
                     lVar2 = (long)param_2 - (long)param_1;
                  }

                  lVar2 = lVar2 >> 5;
                  if (lVar2 != 2) {
                     if (lVar2 != 3) {
                        if (lVar2 != 1) {
                           return param_2;
                        }

                        goto LAB_001015f1;
                     }

                     bVar1 = glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(*param_1);
                     if (bVar1) {
                        return param_1;
                     }

                     param_1 = param_1 + 4;
                  }

                  bVar1 = glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(*param_1);
                  if (bVar1) {
                     return param_1;
                  }

                  param_1 = param_1 + 4;
                  LAB_001015f1:bVar1 = glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(*param_1);
                  if (!bVar1) {
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
                                    LAB_00101698:if (*(long*)( *(long*)( *(long*)( lVar4 + 8 ) + 8 ) + 8 ) != 0) {
                                       return param_1;
                                    }

                                    goto LAB_001016c0;
                                 }

                              }
 else {
                                 cVar2 = ( **(code**)( lVar5 + 0xe8 ) )(plVar1);
                                 if (cVar2 != '\0') {
                                    lVar4 = plVar1[0xc];
                                    goto LAB_00101698;
                                 }

                                 LAB_001016c0:lVar5 = *plVar1;
                              }

                              if (*(code**)( lVar5 + 0x128 ) == glslang::TType::isStruct) {
                                 if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                                    LAB_0010184d:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
                                    lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsSpecializationSize ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5 ));
                                    if (lVar5 != lVar4) {
                                       return param_1;
                                    }

                                 }

                              }
 else {
                                 cVar2 = ( **(code**)( lVar5 + 0x128 ) )(plVar1);
                                 if (cVar2 != '\0') goto LAB_0010184d;
                              }

                              plVar1 = (long*)param_1[4];
                              lVar5 = *plVar1;
                              if (*(code**)( lVar5 + 0xe8 ) == glslang::TType::isArray) {
                                 lVar4 = plVar1[0xc];
                                 if (lVar4 != 0) {
                                    LAB_00101704:if (*(long*)( *(long*)( *(long*)( lVar4 + 8 ) + 8 ) + 8 ) != 0) goto LAB_00101713;
                                    goto LAB_00101720;
                                 }

                              }
 else {
                                 cVar2 = ( **(code**)( lVar5 + 0xe8 ) )(plVar1);
                                 if (cVar2 != '\0') {
                                    lVar4 = plVar1[0xc];
                                    goto LAB_00101704;
                                 }

                                 LAB_00101720:lVar5 = *plVar1;
                              }

                              if (*(code**)( lVar5 + 0x128 ) == glslang::TType::isStruct) {
                                 if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                                    LAB_0010187d:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
                                    lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsSpecializationSize ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5 ));
                                    if (lVar5 != lVar4) {
                                       LAB_00101713:return param_1 + 4;
                                    }

                                 }

                              }
 else {
                                 cVar2 = ( **(code**)( lVar5 + 0x128 ) )(plVar1);
                                 if (cVar2 != '\0') goto LAB_0010187d;
                              }

                              plVar1 = (long*)param_1[8];
                              lVar5 = *plVar1;
                              if (*(code**)( lVar5 + 0xe8 ) == glslang::TType::isArray) {
                                 lVar4 = plVar1[0xc];
                                 if (lVar4 != 0) {
                                    LAB_00101764:if (*(long*)( *(long*)( *(long*)( lVar4 + 8 ) + 8 ) + 8 ) != 0) goto LAB_00101773;
                                    goto LAB_00101780;
                                 }

                              }
 else {
                                 cVar2 = ( **(code**)( lVar5 + 0xe8 ) )(plVar1);
                                 if (cVar2 != '\0') {
                                    lVar4 = plVar1[0xc];
                                    goto LAB_00101764;
                                 }

                                 LAB_00101780:lVar5 = *plVar1;
                              }

                              if (*(code**)( lVar5 + 0x128 ) == glslang::TType::isStruct) {
                                 if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                                    LAB_001018ad:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
                                    lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsSpecializationSize ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5 ));
                                    if (lVar5 != lVar4) {
                                       LAB_00101773:return param_1 + 8;
                                    }

                                 }

                              }
 else {
                                 cVar2 = ( **(code**)( lVar5 + 0x128 ) )(plVar1);
                                 if (cVar2 != '\0') goto LAB_001018ad;
                              }

                              plVar1 = (long*)param_1[0xc];
                              lVar5 = *plVar1;
                              if (*(code**)( lVar5 + 0xe8 ) == glslang::TType::isArray) {
                                 lVar4 = plVar1[0xc];
                                 if (lVar4 != 0) {
                                    LAB_001017c4:if (*(long*)( *(long*)( *(long*)( lVar4 + 8 ) + 8 ) + 8 ) != 0) goto LAB_001017d3;
                                    goto LAB_001017e0;
                                 }

                              }
 else {
                                 cVar2 = ( **(code**)( lVar5 + 0xe8 ) )(plVar1);
                                 if (cVar2 != '\0') {
                                    lVar4 = plVar1[0xc];
                                    goto LAB_001017c4;
                                 }

                                 LAB_001017e0:lVar5 = *plVar1;
                              }

                              if (*(code**)( lVar5 + 0x128 ) == glslang::TType::isStruct) {
                                 if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                                    LAB_001018dd:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
                                    lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsSpecializationSize ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5 ));
                                    if (lVar5 != lVar4) {
                                       LAB_001017d3:return param_1 + 0xc;
                                    }

                                 }

                              }
 else {
                                 cVar2 = ( **(code**)( lVar5 + 0x128 ) )(plVar1);
                                 if (cVar2 != '\0') goto LAB_001018dd;
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

                              goto LAB_0010199e;
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
                        LAB_0010199e:bVar3 = glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(*param_1);
                        if (!bVar3) {
                           return param_2;
                        }

                        return param_1;
                     }
, /* glslang::TSymbolTableLevel::setSingleFunctionExtensions(char const*, int, char const* const*) */, void __thiscall
glslang::TSymbolTableLevel::setSingleFunctionExtensions
          (TSymbolTableLevel *this, char, *param_1, int, param_2, char, **param_3) * pTVar2 * local_50;
  undefined1 local_40[16] * (long*)( in_FS_OFFSET + 0x28 ), ;
  local_58 = glslang::GetThreadPoolAllocator()(param_1 == (char*)0x0), {
                    /* WARNING: Subroutine does not return */
    std::__throw_logic_error("basic_string: construction from null is not valid"), ;
  }
  sVar1 = strlen(param_1), ;
  std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>>::
  _M_construct<char_const*>(&local_58,param_1,param_1 + sVar1);, pTVar2 = (TSymbolTableLevel*)std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>::find((_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>*)this, (basic_string*)&local_58)(pTVar2 == this + 0x10)(local_30 == *(long*)( in_FS_OFFSET + 0x28 ))(local_30 == *(long*)( in_FS_OFFSET + 0x28 ))(**(code**)( **(long**)( pTVar2 + 0x48 ) + 0x80 ))(*(long**)( pTVar2 + 0x48 ), param_2, param_3), ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail()(TSymbolTableLevel * this, TSymbol * param_1, bool, param_2, basic_string * param_3) * puVar2 * pcVar3 * pbVar5 * pTVar7 * plVar8 * puVar10 * pTVar14 * pbVar16 * local_e0;
  ulong local_d8;
  ulong local_d0[2] * local_c0 * local_b0;
  ulong local_a8;
  ulong local_a0[2] * local_90 * local_80;
  ulong local_78;
  ulong local_70[2] * local_60;
  char local_58[24] * (long*)( in_FS_OFFSET + 0x28 )(*(code**)( *(long*)param_1 + 0x18 ) == TSymbol::getName_abi_cxx11_) = *(basic_string**)( param_1 + 8 )(basic_string * )(**(code**)( *(long*)param_1 + 0x18 ))(param_1)(*(long*)( param_3 + 0x10 ) == 0)(*(long*)( pbVar16 + 0x10 ) == 0) = (long*)( **(code**)( *(long*)param_1 + 0x48 ) )(param_1) * (int*)( this + 0x60 ) * (code**)( *plVar8 + 0xe0 ) * (int*)( this + 0x60 ) = iVar1 + 1(pcVar3 == TVariable::setAnonId) * (int*)( plVar8 + 0x1d ) = iVar1(*pcVar3)()(long * )(**(code**)( *(long*)param_1 + 0x48 ))(param_1)(*(code**)( *plVar8 + 0xe8 ) == TVariable::getAnonId) = ( ulong ) * (uint*)( plVar8 + 0x1d )(**(code**)( *plVar8 + 0xe8 ))(), ;
      }
      __snprintf_chk(local_58, 0x14, 2, 0x14, &_LC238, "anon@", uVar9) * (code**)( *(long*)param_1 + 0x20 ), ;
      uVar9 = glslang::GetThreadPoolAllocator() ;puVar10 = (undefined8*)glslang::TPoolAllocator::allocate(uVar9);uVar11 = glslang::GetThreadPoolAllocator();*puVar10 = uVar11;puVar10[1] = puVar10 + 3;sVar12 = strlen(local_58);std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(puVar10, local_58, local_58 + sVar12);if (pcVar3 == TSymbol::changeName) {
   *(undefined8**)( param_1 + 8 ) = puVar10;
}
 else {
   ( *pcVar3 )(param_1, puVar10, uStack_110);
}
plVar8 = (long*)( **(code**)( *(long*)param_1 + 0x48 ) )(param_1);if (*(code**)( *plVar8 + 0x60 ) == TVariable::getType) {
   plVar8 = plVar8 + 5;
}
 else {
   plVar8 = (long*)( **(code**)( *plVar8 + 0x60 ) )();
}
lVar6 = plVar8[0xd];uVar9 = 0;if (*(long*)( lVar6 + 8 ) != *(long*)( lVar6 + 0x10 )) {
   do {
      uVar13 = glslang::GetThreadPoolAllocator();
      pTVar14 = (TSymbol*)glslang::TPoolAllocator::allocate(uVar13);
      plVar8 = (long*)( **(code**)( *(long*)param_1 + 0x48 ) )(param_1);
      if (*(code**)( *plVar8 + 0xe8 ) == TVariable::getAnonId) {
         uVar4 = (undefined4)plVar8[0x1d];
      }
 else {
         uVar4 = ( **(code**)( *plVar8 + 0xe8 ) )();
      }

      uVar11 = ( **(code**)( *(long*)param_1 + 0x48 ) )(param_1);
      plVar8 = *(long**)( uVar9 * 0x20 + *(long*)( lVar6 + 8 ) );
      pcVar3 = *(code**)( *plVar8 + 0x30 );
      if (pcVar3 == TType::getFieldName_abi_cxx11_) {
         lVar15 = plVar8[0xe];
      }
 else {
         lVar15 = ( *pcVar3 )();
      }

      *(long*)( pTVar14 + 8 ) = lVar15;
      *(undefined4*)( pTVar14 + 0x34 ) = uVar4;
      *(undefined8*)( pTVar14 + 0x10 ) = 0;
      *(undefined8*)( pTVar14 + 0x18 ) = 0;
      pTVar14[0x20] = (TSymbol)0x1;
      *(undefined***)pTVar14 = &PTR_clone_001120a0;
      *(undefined8*)( pTVar14 + 0x28 ) = uVar11;
      *(int*)( pTVar14 + 0x30 ) = (int)uVar9;
      local_88 = glslang::GetThreadPoolAllocator();
      puVar2 = *(undefined1**)( lVar15 + 8 );
      uVar13 = *(ulong*)( lVar15 + 0x10 );
      local_80 = local_70;
      if (uVar13 < 0x10) {
         if (uVar13 == 1) {
            local_70[0] = CONCAT71(local_70[0]._1_7_, *puVar2);
         }
 else if (uVar13 != 0) goto LAB_00101e69;
      }
 else {
         if ((long)uVar13 < 0) goto LAB_00102023;
         local_80 = (ulong*)glslang::TPoolAllocator::allocate(local_88);
         local_70[0] = uVar13;
         LAB_00101e69:memcpy(local_80, puVar2, uVar13);
      }

      *(undefined1*)( (long)local_80 + uVar13 ) = 0;
      local_78 = uVar13;
      local_60 = pTVar14;
      std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>::_M_emplace_unique<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>const>((_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>*)this, (pair_conflict*)&local_88);
   }
 while ( ( extraout_DL != '\0' ) && ( uVar9 = ( ulong )((int)uVar9 + 1) ),uVar9 < ( ulong )(*(long*)( lVar6 + 0x10 ) - *(long*)( lVar6 + 8 ) >> 5) );
}
goto LAB_00101b98;}pbVar5 = (basic_string*)( **(code**)( *(long*)param_1 + 0x30 ) )();lVar6 = ( **(code**)( *(long*)param_1 + 0x38 ) )(param_1);if (lVar6 == 0) {
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_88, pbVar5);
   local_60 = param_1;
   std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>::_M_emplace_unique<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>const>((_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>*)this, (pair_conflict*)&local_88);
   goto LAB_00101b98;
}
if (( !param_2 ) && ( pTVar7 = (TSymbolTableLevel*)std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>::find((_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>*)this, pbVar16) ),this + 0x10 != pTVar7) goto LAB_00101b98;local_e8 = glslang::GetThreadPoolAllocator();local_e0 = local_d0;puVar2 = *(undefined1**)( pbVar5 + 8 );uVar9 = *(ulong*)( pbVar5 + 0x10 );if (uVar9 < 0x10) {
   if (uVar9 == 1) {
      local_d0[0] = CONCAT71(local_d0[0]._1_7_, *puVar2);
   }
 else if (uVar9 != 0) goto LAB_0010200e;
}
 else {
   if ((long)uVar9 < 0) goto LAB_00102023;
   local_e0 = (ulong*)glslang::TPoolAllocator::allocate(local_e8);
   local_d0[0] = uVar9;
   LAB_0010200e:memcpy(local_e0, puVar2, uVar9);
}
*(undefined1*)( (long)local_e0 + uVar9 ) = 0;local_d8 = uVar9;local_c0 = param_1;std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>::_M_emplace_unique<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>const>((_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>*)this, (pair_conflict*)&local_e8);goto LAB_00101b98;}local_b8 = glslang::GetThreadPoolAllocator();puVar2 = *(undefined1**)( param_3 + 8 );uVar9 = *(ulong*)( param_3 + 0x10 );local_b0 = local_a0;if (uVar9 < 0x10) {
   if (uVar9 == 1) {
      local_a0[0] = CONCAT71(local_a0[0]._1_7_, *puVar2);
   }
 else if (uVar9 != 0) goto LAB_00101f62;
}
 else {
   if ((long)uVar9 < 0) {
      LAB_00102023:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::_M_create");
   }

   local_b0 = (ulong*)glslang::TPoolAllocator::allocate(local_b8);
   local_a0[0] = uVar9;
   LAB_00101f62:memcpy(local_b0, puVar2, uVar9);
}
*(undefined1*)( (long)local_b0 + uVar9 ) = 0;local_a8 = uVar9;local_90 = param_1;std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>::_M_emplace_unique<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>const>((_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>*)this, (pair_conflict*)&local_b8);LAB_00101b98:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::append(char const*, unsigned long) [clone .isra.0] */void std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this, char *param_1, ulong param_2) {
   ulong uVar1;
   ulong uVar2;
   ulong uVar3;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar4;
   uVar2 = *(ulong*)( this + 0x10 );
   if (0x7fffffffffffffff - uVar2 < param_2) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::append");
   }

   pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 );
   uVar1 = uVar2 + param_2;
   if (pbVar4 == this + 0x18) {
      uVar3 = 0xf;
   }
 else {
      uVar3 = *(ulong*)( this + 0x18 );
   }

   if (uVar1 <= uVar3) {
      if (param_2 != 0) {
         if (param_2 == 1) {
            pbVar4[uVar2] = ( basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> ) * param_1;
            *(ulong*)( this + 0x10 ) = uVar1;
            *(undefined1*)( *(long*)( this + 8 ) + uVar1 ) = 0;
            return;
         }

         memcpy(pbVar4 + uVar2, param_1, param_2);
         pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 );
      }

      *(ulong*)( this + 0x10 ) = uVar1;
      pbVar4[uVar1] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
      return;
   }

   _M_mutate(this, uVar2, 0, param_1, param_2);
   *(ulong*)( this + 0x10 ) = uVar1;
   *(undefined1*)( *(long*)( this + 8 ) + uVar1 ) = 0;
   return;
}
/* glslang::TVariable::dump(TInfoSink&, bool) const */void glslang::TVariable::dump(TVariable *this, TInfoSink *param_1, bool param_2) {
   basic_string *pbVar1;
   code *pcVar2;
   long lVar3;
   char *pcVar4;
   long in_FS_OFFSET;
   undefined8 local_c8;
   undefined1 *local_c0;
   undefined1 local_b0[24];
   undefined8 local_98;
   undefined1 *local_90;
   undefined1 local_80[24];
   undefined8 local_68;
   undefined1 *local_60;
   undefined1 local_50[16];
   long local_40;
   pbVar1 = (basic_string*)( param_1 + 0x30 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar2 = *(code**)( *(long*)this + 0x18 );
   if (param_2) {
      if (pcVar2 != TSymbol::getName_abi_cxx11_) {
         ( *pcVar2 )();
      }

      glslang::TInfoSinkBase::append((char*)pbVar1);
      glslang::TInfoSinkBase::append((char*)pbVar1);
      local_98 = glslang::GetThreadPoolAllocator();
      local_90 = local_80;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_98, &_LC36, &_LC36);
      local_c8 = glslang::GetThreadPoolAllocator();
      local_c0 = local_b0;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_c8, &_LC36, &_LC36);
      TType::getCompleteString(&local_68, this + 0x28, 0, 1, 1, 1, &local_c8, &local_98);
      glslang::TInfoSinkBase::append(pbVar1);
      TSymbol::dumpExtensions((TSymbol*)this, param_1);
   }
 else {
      if (pcVar2 != TSymbol::getName_abi_cxx11_) {
         ( *pcVar2 )();
      }

      glslang::TInfoSinkBase::append((char*)pbVar1);
      glslang::TInfoSinkBase::append((char*)pbVar1);
      switch ((byte)this[0x40] & 0x7f) {
         case 0:
      break;
         case 1:
      break;
         case 2:
      break;
         case 3:
         case 0x10:
      break;
         case 4:
         case 0x11:
      break;
         case 5:
      break;
         case 6:
      break;
         case 7:
      break;
         case 8:
      break;
         case 9:
      break;
         case 10:
      break;
         case 0xb:
      break;
         case 0xc:
      break;
         case 0xd:
      break;
         case 0xe:
      break;
         case 0xf:
      break;
         case 0x12:
      break;
         case 0x13:
      break;
         case 0x14:
      break;
         case 0x15:
      break;
         case 0x16:
      break;
         case 0x17:
      break;
         case 0x18:
      break;
         case 0x19:
      break;
         case 0x1a:
      break;
         case 0x1b:
      break;
         case 0x1c:
      break;
         case 0x1d:
      break;
         case 0x1e:
      }

      glslang::TInfoSinkBase::append((char*)pbVar1);
      glslang::TInfoSinkBase::append((char*)pbVar1);
      if (this[0x30] == (TVariable)0xe) {
         TSampler::getString_abi_cxx11_();
      }
 else {
         local_68 = glslang::GetThreadPoolAllocator();
         switch (this[0x30]) {
            case (TVariable)0x0:
        lVar3 = 4;
        pcVar4 = "void";
        break;
            case (TVariable)0x1:
        lVar3 = 5;
        pcVar4 = "float";
        break;
            case (TVariable)0x2:
        lVar3 = 6;
        pcVar4 = "double";
        break;
            case (TVariable)0x3:
        lVar3 = 9;
        pcVar4 = "float16_t";
        break;
            case (TVariable)0x4:
        lVar3 = 6;
        pcVar4 = "int8_t";
        break;
            case (TVariable)0x5:
        lVar3 = 7;
        pcVar4 = "uint8_t";
        break;
            case (TVariable)0x6:
        lVar3 = 7;
        pcVar4 = "int16_t";
        break;
            case (TVariable)0x7:
        lVar3 = 8;
        pcVar4 = "uint16_t";
        break;
            case (TVariable)0x8:
        lVar3 = 3;
        pcVar4 = "int";
        break;
            case (TVariable)0x9:
        lVar3 = 4;
        pcVar4 = "uint";
        break;
            case (TVariable)0xa:
        lVar3 = 7;
        pcVar4 = "int64_t";
        break;
            case (TVariable)0xb:
        lVar3 = 8;
        pcVar4 = "uint64_t";
        break;
            case (TVariable)0xc:
        lVar3 = 4;
        pcVar4 = "bool";
        break;
            case (TVariable)0xd:
        lVar3 = 0xb;
        pcVar4 = "atomic_uint";
        break;
            case (TVariable)0xe:
        lVar3 = 0xd;
        pcVar4 = "sampler/image";
        break;
            case (TVariable)0xf:
        lVar3 = 9;
        pcVar4 = "structure";
        break;
            case (TVariable)0x10:
        lVar3 = 5;
        pcVar4 = "block";
        break;
            case (TVariable)0x11:
        lVar3 = 0x17;
        pcVar4 = "accelerationStructureNV";
        break;
            case (TVariable)0x12:
        lVar3 = 9;
        pcVar4 = "reference";
        break;
            case (TVariable)0x13:
        lVar3 = 0xb;
        pcVar4 = "rayQueryEXT";
        break;
            default:
        lVar3 = 0xc;
        pcVar4 = "unknown type";
        break;
            case (TVariable)0x15:
        lVar3 = 7;
        pcVar4 = "coopmat";
        break;
            case (TVariable)0x16:
        lVar3 = 10;
        pcVar4 = "spirv_type";
        break;
            case (TVariable)0x17:
        lVar3 = 6;
        pcVar4 = "string";
         }

         local_60 = local_50;
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_68, pcVar4, pcVar4 + lVar3);
      }

      glslang::TInfoSinkBase::append(pbVar1);
      if (*(long*)( this + 0x88 ) != 0) {
         glslang::TInfoSinkBase::append((char*)pbVar1);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      glslang::TInfoSinkBase::append((char*)pbVar1);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TFunction::dump(TInfoSink&, bool) const */void glslang::TFunction::dump(TFunction *this, TInfoSink *param_1, bool param_2) {
   basic_string *pbVar1;
   long *plVar2;
   undefined1 *__src;
   ulong uVar3;
   char cVar4;
   ulong *puVar5;
   undefined8 *puVar6;
   long lVar7;
   uint uVar9;
   ulong uVar10;
   int iVar11;
   long lVar12;
   uint uVar13;
   char *pcVar14;
   long *plVar15;
   ulong uVar16;
   long in_FS_OFFSET;
   undefined8 local_158;
   undefined1 *local_150;
   undefined1 local_140[24];
   undefined8 local_128;
   undefined1 *local_120;
   undefined1 local_110[24];
   undefined1 local_f8[48];
   ulong local_c8;
   ulong *local_c0;
   long local_b8;
   ulong local_b0[3];
   undefined8 local_98;
   ulong *local_90;
   undefined8 local_88;
   ulong local_80[4];
   ulong *local_60;
   ulong local_58;
   ulong local_50[2];
   long local_40;
   code *pcVar8;
   pbVar1 = (basic_string*)( param_1 + 0x30 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar8 = *(code**)( *(long*)this + 0x18 );
   if (param_2) {
      if (pcVar8 != TSymbol::getName_abi_cxx11_) {
         ( *pcVar8 )();
      }

      glslang::TInfoSinkBase::append((char*)pbVar1);
      glslang::TInfoSinkBase::append((char*)pbVar1);
      local_98 = glslang::GetThreadPoolAllocator();
      local_90 = local_80;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_98, &_LC36, &_LC36);
      local_c8 = glslang::GetThreadPoolAllocator();
      local_c0 = local_b0;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_c8, &_LC36, &_LC36);
      TType::getCompleteString(local_80 + 3, this + 0x48, 0, 1, 1, 1, (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_c8);
      glslang::TInfoSinkBase::append(pbVar1);
      glslang::TInfoSinkBase::append((char*)pbVar1);
      if (*(code**)( *(long*)this + 0x18 ) != TSymbol::getName_abi_cxx11_) {
         ( **(code**)( *(long*)this + 0x18 ) )(this);
      }

      glslang::TInfoSinkBase::append((char*)pbVar1);
      glslang::TInfoSinkBase::append((char*)pbVar1);
      if (*(code**)( *(long*)this + 0x120 ) == getParamCount) {
         iVar11 = (int)( *(long*)( this + 0x38 ) - *(long*)( this + 0x30 ) >> 3 ) * -0x55555555;
      }
 else {
         iVar11 = ( **(code**)( *(long*)this + 0x120 ) )(this);
      }

      if (0 < iVar11) {
         lVar12 = 0;
         do {
            plVar2 = (long*)( *(long*)( this + 0x30 ) + lVar12 * 0x18 );
            lVar7 = plVar2[1];
            local_128 = glslang::GetThreadPoolAllocator();
            local_120 = local_110;
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_128, &_LC36, &_LC36);
            local_158 = glslang::GetThreadPoolAllocator();
            local_150 = local_140;
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_158, &_LC36, &_LC36);
            TType::getCompleteString(local_f8, lVar7, 0, 1, 1, 1, &local_158);
            glslang::TInfoSinkBase::append(pbVar1);
            glslang::TInfoSinkBase::append((char*)pbVar1);
            plVar15 = (long*)plVar2[1];
            pcVar8 = *(code**)( *plVar15 + 0x128 );
            if (pcVar8 == TType::isStruct) {
               if (( byte )((char)plVar15[1] - 0xfU) < 2) {
                  pcVar8 = *(code**)( *plVar15 + 0x28 );
                  if (pcVar8 == TType::getTypeName_abi_cxx11_) goto LAB_00102bbd;
                  LAB_00102e75:lVar7 = ( *pcVar8 )();
                  goto LAB_00102bc1;
               }

               LAB_00102dd0:local_98 = glslang::GetThreadPoolAllocator();
               local_90 = local_80;
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_98, &_LC36, &_LC36);
            }
 else {
               cVar4 = ( *pcVar8 )(plVar15, &local_128);
               if (cVar4 == '\0') goto LAB_00102dd0;
               plVar15 = (long*)plVar2[1];
               pcVar8 = *(code**)( *plVar15 + 0x28 );
               if (pcVar8 != TType::getTypeName_abi_cxx11_) goto LAB_00102e75;
               LAB_00102bbd:lVar7 = plVar15[0xf];
               LAB_00102bc1:uVar3 = *(ulong*)( lVar7 + 0x10 );
               pcVar14 = *(char**)( lVar7 + 8 );
               local_c8 = glslang::GetThreadPoolAllocator();
               local_b0[0] = local_b0[0] & 0xffffffffffffff00;
               local_b8 = 0;
               uVar16 = uVar3 + 3;
               puVar5 = local_b0;
               uVar10 = local_b0[0];
               if (0xf < uVar16) {
                  local_c0 = local_b0;
                  if ((long)uVar16 < 0) goto LAB_001034b3;
                  uVar10 = 0x1e;
                  if (0x1d < uVar16) {
                     uVar10 = uVar16;
                  }

                  puVar5 = (ulong*)glslang::TPoolAllocator::allocate(local_c8);
                  if (local_b8 == 0) {
                     *(char*)puVar5 = (char)*local_c0;
                  }
 else {
                     if (local_b8 + 1U == 0) goto LAB_00102c70;
                     puVar5 = (ulong*)memcpy(puVar5, local_c0, local_b8 + 1U);
                  }

                  local_c0 = puVar5;
                  local_b0[0] = uVar10;
                  if (0x7fffffffffffffffU - local_b8 < 3) goto LAB_00102f6c;
               }

               LAB_00102c70:local_b0[0] = uVar10;
               local_c0 = puVar5;
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_c8, "of ", 3);
               if (0x7fffffffffffffffU - local_b8 < uVar3) {
                  LAB_00102f6c:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::append");
               }

               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_c8, pcVar14, uVar3);
               puVar6 = (undefined8*)std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_c8, " ");
               local_98 = *puVar6;
               puVar5 = puVar6 + 3;
               if ((ulong*)puVar6[1] == puVar5) {
                  local_88 = puVar6[2];
                  uVar16 = local_88 + 1;
                  uVar13 = (uint)uVar16;
                  if (7 < uVar13) {
                     *(undefined8*)( (long)local_80 + ( ( uVar16 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)puVar6 + ( uVar16 & 0xffffffff ) + 0x10 );
                     local_90 = local_80;
                     if (7 < uVar13 - 1) {
                        uVar9 = 0;
                        do {
                           uVar16 = (ulong)uVar9;
                           uVar9 = uVar9 + 8;
                           *(undefined8*)( (long)local_80 + uVar16 ) = *(undefined8*)( (long)puVar5 + uVar16 );
                        }
 while ( uVar9 < ( uVar13 - 1 & 0xfffffff8 ) );
                     }

                     goto LAB_00102d02;
                  }

                  if (( uVar16 & 4 ) == 0) {
                     local_90 = local_80;
                     if (uVar13 != 0) {
                        /* WARNING: Ignoring partial resolution of indirect */
                        local_80[0]._0_1_ = *(undefined1*)( puVar6 + 3 );
                        local_80[0] = local_80[0];
                        if (( uVar16 & 2 ) == 0) goto LAB_00102d02;
                        *(undefined2*)( (long)local_80 + ( ( uVar16 & 0xffffffff ) - 2 ) ) = *(undefined2*)( (long)puVar6 + ( uVar16 & 0xffffffff ) + 0x16 );
                        local_88 = puVar6[2];
                     }

                  }
 else {
                     /* WARNING: Ignoring partial resolution of indirect */
                     local_80[0]._0_4_ = *(undefined4*)( puVar6 + 3 );
                     *(undefined4*)( (long)local_80 + ( ( uVar16 & 0xffffffff ) - 4 ) ) = *(undefined4*)( (long)puVar6 + ( uVar16 & 0xffffffff ) + 0x14 );
                     local_88 = puVar6[2];
                     local_90 = local_80;
                     local_80[0] = local_80[0];
                  }

               }
 else {
                  local_90 = (ulong*)puVar6[1];
                  local_80[0] = puVar6[3];
                  LAB_00102d02:local_88 = puVar6[2];
               }

               puVar6[1] = puVar5;
               puVar6[2] = 0;
               *(undefined1*)( puVar6 + 3 ) = 0;
            }

            glslang::TInfoSinkBase::append(pbVar1);
            lVar7 = *plVar2;
            if (lVar7 == 0) {
               local_80[3] = glslang::GetThreadPoolAllocator();
               local_60 = local_50;
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(local_80 + 3, &_LC36, &_LC36);
            }
 else {
               local_80[3] = glslang::GetThreadPoolAllocator();
               local_60 = local_50;
               __src = *(undefined1**)( lVar7 + 8 );
               uVar16 = *(ulong*)( lVar7 + 0x10 );
               if (uVar16 < 0x10) {
                  if (uVar16 == 1) {
                     local_50[0] = CONCAT71(local_50[0]._1_7_, *__src);
                  }
 else if (uVar16 != 0) goto LAB_00102e38;
               }
 else {
                  if ((long)uVar16 < 0) {
                     LAB_001034b3:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::_M_create");
                  }

                  local_60 = (ulong*)glslang::TPoolAllocator::allocate(local_80[3]);
                  local_50[0] = uVar16;
                  LAB_00102e38:memcpy(local_60, __src, uVar16);
               }

               *(undefined1*)( (long)local_60 + uVar16 ) = 0;
               local_58 = uVar16;
            }

            glslang::TInfoSinkBase::append(pbVar1);
            lVar12 = lVar12 + 1;
            glslang::TInfoSinkBase::append((char*)pbVar1);
         }
 while ( iVar11 != lVar12 );
      }

      glslang::TInfoSinkBase::append((char*)pbVar1);
      TSymbol::dumpExtensions((TSymbol*)this, param_1);
   }
 else {
      if (pcVar8 != TSymbol::getName_abi_cxx11_) {
         ( *pcVar8 )();
      }

      glslang::TInfoSinkBase::append((char*)pbVar1);
      glslang::TInfoSinkBase::append((char*)pbVar1);
      if (this[0x50] == (TFunction)0xe) {
         TSampler::getString_abi_cxx11_();
      }
 else {
         local_80[3] = glslang::GetThreadPoolAllocator();
         switch (this[0x50]) {
            case (TFunction)0x0:
        lVar12 = 4;
        pcVar14 = "void";
        break;
            case (TFunction)0x1:
        lVar12 = 5;
        pcVar14 = "float";
        break;
            case (TFunction)0x2:
        lVar12 = 6;
        pcVar14 = "double";
        break;
            case (TFunction)0x3:
        lVar12 = 9;
        pcVar14 = "float16_t";
        break;
            case (TFunction)0x4:
        lVar12 = 6;
        pcVar14 = "int8_t";
        break;
            case (TFunction)0x5:
        lVar12 = 7;
        pcVar14 = "uint8_t";
        break;
            case (TFunction)0x6:
        lVar12 = 7;
        pcVar14 = "int16_t";
        break;
            case (TFunction)0x7:
        lVar12 = 8;
        pcVar14 = "uint16_t";
        break;
            case (TFunction)0x8:
        lVar12 = 3;
        pcVar14 = "int";
        break;
            case (TFunction)0x9:
        lVar12 = 4;
        pcVar14 = "uint";
        break;
            case (TFunction)0xa:
        lVar12 = 7;
        pcVar14 = "int64_t";
        break;
            case (TFunction)0xb:
        lVar12 = 8;
        pcVar14 = "uint64_t";
        break;
            case (TFunction)0xc:
        lVar12 = 4;
        pcVar14 = "bool";
        break;
            case (TFunction)0xd:
        lVar12 = 0xb;
        pcVar14 = "atomic_uint";
        break;
            case (TFunction)0xe:
        lVar12 = 0xd;
        pcVar14 = "sampler/image";
        break;
            case (TFunction)0xf:
        lVar12 = 9;
        pcVar14 = "structure";
        break;
            case (TFunction)0x10:
        lVar12 = 5;
        pcVar14 = "block";
        break;
            case (TFunction)0x11:
        lVar12 = 0x17;
        pcVar14 = "accelerationStructureNV";
        break;
            case (TFunction)0x12:
        lVar12 = 9;
        pcVar14 = "reference";
        break;
            case (TFunction)0x13:
        lVar12 = 0xb;
        pcVar14 = "rayQueryEXT";
        break;
            default:
        lVar12 = 0xc;
        pcVar14 = "unknown type";
        break;
            case (TFunction)0x15:
        lVar12 = 7;
        pcVar14 = "coopmat";
        break;
            case (TFunction)0x16:
        lVar12 = 10;
        pcVar14 = "spirv_type";
        break;
            case (TFunction)0x17:
        lVar12 = 6;
        pcVar14 = "string";
         }

         local_60 = local_50;
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(local_80 + 3, pcVar14, pcVar14 + lVar12);
      }

      glslang::TInfoSinkBase::append(pbVar1);
      glslang::TInfoSinkBase::append((char*)pbVar1);
      if (*(code**)( *(long*)this + 0x30 ) != getMangledName_abi_cxx11_) {
         ( **(code**)( *(long*)this + 0x30 ) )(this);
      }

      glslang::TInfoSinkBase::append((char*)pbVar1);
      glslang::TInfoSinkBase::append((char*)pbVar1);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      glslang::TInfoSinkBase::append((char*)pbVar1);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TType::buildMangledName(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >&) const */void glslang::TType::buildMangledName(TType *this, basic_string *param_1) {
   code *pcVar1;
   char cVar2;
   TType TVar3;
   int iVar4;
   basic_string *pbVar5;
   size_t sVar6;
   basic_string *pbVar7;
   long lVar8;
   long *plVar9;
   uint uVar10;
   undefined4 *puVar11;
   ulong uVar12;
   ulong uVar13;
   long lVar14;
   byte bVar15;
   uint uVar16;
   basic_string *pbVar17;
   long lVar18;
   ulong uVar19;
   char *pcVar20;
   long lVar21;
   long in_FS_OFFSET;
   undefined8 uStack_53;
   undefined4 local_4b;
   undefined4 uStack_47;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar18 = *(long*)this;
   if (*(code**)( lVar18 + 0xe0 ) == isMatrix) {
      if ((byte)this[9] < 0x10) goto LAB_0010351a;
      LAB_001039e0:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::push_back((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)param_1, 'm');
   }
 else {
      cVar2 = ( **(code**)( lVar18 + 0xe0 ) )();
      if (cVar2 != '\0') goto LAB_001039e0;
      lVar18 = *(long*)this;
      LAB_0010351a:if (*(code**)( lVar18 + 0xd8 ) == isVector) {
         if (( (byte)this[9] & 0xf ) < 2) {
            bVar15 = (byte)this[10] >> 4 & 1;
            goto LAB_0010357a;
         }

      }
 else {
         bVar15 = ( **(code**)( lVar18 + 0xd8 ) )(this);
         LAB_0010357a:if (bVar15 == 0) goto LAB_00103549;
      }

      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::push_back((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)param_1, 'v');
   }

   LAB_00103549:switch (this[8]) {
      case (TType)0x1:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::push_back
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               'f');
    break;
      case (TType)0x2:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::push_back
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               'd');
    break;
      case (TType)0x3:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               "f16");
    break;
      case (TType)0x4:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               "i8");
    break;
      case (TType)0x5:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               "u8");
    break;
      case (TType)0x6:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               "i16");
    break;
      case (TType)0x7:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               "u16");
    break;
      case (TType)0x8:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::push_back
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               'i');
    break;
      case (TType)0x9:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::push_back
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               'u');
    break;
      case (TType)0xa:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               "i64");
    break;
      case (TType)0xb:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               "u64");
    break;
      case (TType)0xc:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::push_back
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               'b');
    break;
      case (TType)0xd:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               "au");
    break;
      case (TType)0xe:
    switch(this[0x80]) {
    case (TType)0x3:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 "f16");
      break;
    case (TType)0x8:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 "i");
      break;
    case (TType)0x9:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 "u");
      break;
    case (TType)0xa:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 "i64");
      break;
    case (TType)0xb:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 "u64");
    }
    TVar3 = this[0x82];
    if (((byte)TVar3 & 8) == 0) {
      if (((byte)TVar3 & 0x20) == 0) {
        if (((byte)TVar3 & 0x10) == 0) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 "t");
        }
        else {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 "s");
        }
      }
      else {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               "p");
      }
    }
    else {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 "I");
    }
    TVar3 = this[0x82];
    if (((byte)TVar3 & 1) != 0) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 "A");
      TVar3 = this[0x82];
    }
    if (((byte)TVar3 & 2) != 0) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 "S");
    }
    TVar3 = this[0x83];
    if (((byte)TVar3 & 0x20) != 0) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 "E");
      TVar3 = this[0x83];
    }
    if (((byte)TVar3 & 0x40) != 0) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 "Y");
    }
    switch(this[0x81]) {
    case (TType)0x1:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 "1");
      break;
    case (TType)0x2:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 "2");
      break;
    case (TType)0x3:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 "3");
      break;
    case (TType)0x4:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 "C");
      break;
    case (TType)0x5:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 "R2");
      break;
    case (TType)0x6:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 "B");
      break;
    case (TType)0x7:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 "P");
    }
    if (((byte)this[0x82] & 4) != 0) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 "M");
    }
    break;
      case (TType)0xf:
      case (TType)0x10:
    if (this[8] == (TType)0xf) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 "struct-");
    }
    else {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 "block-");
    }
    lVar18 = *(long *)(this + 0x78);
    if (lVar18 != 0) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
                 *(char **)(lVar18 + 8),*(ulong *)(lVar18 + 0x10));
    }
    lVar18 = *(long *)(*(long *)(this + 0x68) + 8);
    if (*(long *)(*(long *)(this + 0x68) + 0x10) != lVar18) {
      uVar13 = 0;
      do {
        plVar9 = *(long **)(lVar18 + uVar13 * 0x20);
        pcVar1 = *(code **)(*plVar9 + 0x38);
        if (pcVar1 == getBasicType) {
          uVar16 = (uint)*(byte *)(plVar9 + 1);
        }
        else {
          uVar16 = (*pcVar1)();
        }
        if (uVar16 != 0) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          push_back((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                    param_1,'-');
          buildMangledName(*(TType **)(*(long *)(*(long *)(this + 0x68) + 8) + uVar13 * 0x20),
                           param_1);
        }
        uVar13 = (ulong)((int)uVar13 + 1);
        lVar18 = *(long *)(*(long *)(this + 0x68) + 8);
      } while (uVar13 < (ulong)(*(long *)(*(long *)(this + 0x68) + 0x10) - lVar18 >> 5));
    }
    break;
      case (TType)0x11:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               "as");
    break;
      case (TType)0x13:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               "rq");
    break;
      case (TType)0x14:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               "ho");
    break;
      case (TType)0x16:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1,
               "spv-t");
   }

   lVar18 = *(long*)this;
   if (*(code**)( lVar18 + 0x60 ) == getVectorSize) {
      bVar15 = (byte)this[9] & 0xf;
      if (( (byte)this[9] & 0xf ) == 0) {
         LAB_00103968:if (*(code**)( lVar18 + 0x68 ) == getMatrixCols) {
            bVar15 = (byte)this[9] >> 4;
         }
 else {
            bVar15 = ( **(code**)( lVar18 + 0x68 ) )(this);
         }

         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::push_back((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)param_1, bVar15 + 0x30);
         if (*(code**)( *(long*)this + 0x70 ) == getMatrixRows) {
            bVar15 = (byte)this[10] & 0xf;
         }
 else {
            bVar15 = ( **(code**)( *(long*)this + 0x70 ) )(this);
         }

         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::push_back((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)param_1, bVar15 + 0x30);
         goto LAB_001035f4;
      }

   }
 else {
      iVar4 = ( **(code**)( lVar18 + 0x60 ) )(this);
      if (iVar4 < 1) {
         lVar18 = *(long*)this;
         goto LAB_00103968;
      }

      if (*(code**)( *(long*)this + 0x60 ) == getVectorSize) {
         bVar15 = (byte)this[9] & 0xf;
      }
 else {
         bVar15 = ( **(code**)( *(long*)this + 0x60 ) )(this);
      }

   }

   uVar13 = *(ulong*)( param_1 + 0x10 );
   pbVar5 = *(basic_string**)( param_1 + 8 );
   if (pbVar5 == param_1 + 0x18) {
      uVar12 = 0xf;
   }
 else {
      uVar12 = *(ulong*)( param_1 + 0x18 );
   }

   if (uVar12 < uVar13 + 1) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)param_1, uVar13, 0, (char*)0x0, 1);
      pbVar5 = *(basic_string**)( param_1 + 8 );
   }

   pbVar5[uVar13] = ( basic_string )(bVar15 + 0x30);
   *(ulong*)( param_1 + 0x10 ) = uVar13 + 1;
   *(undefined1*)( *(long*)( param_1 + 8 ) + 1 + uVar13 ) = 0;
   LAB_001035f4:if (*(long*)( this + 0x60 ) != 0) {
      lVar18 = *(long*)( *(long*)( this + 0x60 ) + 8 );
      pbVar5 = param_1 + 0x18;
      for (lVar14 = 0; ( lVar18 != 0 && ( (int)lVar14 < (int)( *(long*)( lVar18 + 0x10 ) - *(long*)( lVar18 + 8 ) >> 4 ) ) ); lVar14 = lVar14 + 1) {
         lVar21 = lVar14 * 0x10;
         puVar11 = (undefined4*)( *(long*)( lVar18 + 8 ) + lVar21 );
         plVar9 = *(long**)( puVar11 + 2 );
         if (plVar9 == (long*)0x0) {
            __snprintf_chk(&local_4b, 0xb, 2, 0xb, &_LC3, *puVar11);
         }
 else {
            lVar8 = ( **(code**)( *plVar9 + 0x60 ) )();
            lVar18 = *(long*)( *(long*)( *(long*)( this + 0x60 ) + 8 ) + 8 );
            if (lVar8 == 0) {
               lVar18 = *(long*)( lVar18 + 8 + lVar21 );
               pcVar20 = "s%p";
            }
 else {
               plVar9 = (long*)( **(code**)( **(long**)( lVar18 + 8 + lVar21 ) + 0x60 ) )();
               if (*(code**)( *plVar9 + 0x180 ) == TIntermSymbol::getId) {
                  lVar18 = plVar9[0x17];
               }
 else {
                  lVar18 = ( **(code**)( *plVar9 + 0x180 ) )();
               }

               pcVar20 = "s%lld";
            }

            __snprintf_chk(&local_4b, 0xb, 2, 0xb, pcVar20, lVar18);
         }

         uVar13 = *(ulong*)( param_1 + 0x10 );
         pbVar7 = *(basic_string**)( param_1 + 8 );
         if (pbVar7 == pbVar5) {
            uVar12 = 0xf;
         }
 else {
            uVar12 = *(ulong*)( param_1 + 0x18 );
         }

         if (uVar12 < uVar13 + 1) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)param_1, uVar13, 0, (char*)0x0, 1);
            pbVar7 = *(basic_string**)( param_1 + 8 );
         }

         pbVar7[uVar13] = (basic_string)0x5b;
         *(ulong*)( param_1 + 0x10 ) = uVar13 + 1;
         *(undefined1*)( *(long*)( param_1 + 8 ) + 1 + uVar13 ) = 0;
         sVar6 = strlen((char*)&local_4b);
         uVar13 = *(ulong*)( param_1 + 0x10 );
         if (0x7fffffffffffffff - uVar13 < sVar6) {
            /* WARNING: Subroutine does not return */
            std::__throw_length_error("basic_string::append");
         }

         pbVar7 = *(basic_string**)( param_1 + 8 );
         uVar12 = sVar6 + uVar13;
         if (pbVar5 == pbVar7) {
            uVar19 = 0xf;
         }
 else {
            uVar19 = *(ulong*)( param_1 + 0x18 );
         }

         if (uVar19 < uVar12) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)param_1, uVar13, 0, (char*)&local_4b, sVar6);
            pbVar7 = *(basic_string**)( param_1 + 8 );
         }
 else if (sVar6 != 0) {
            pbVar17 = pbVar7 + uVar13;
            if (sVar6 == 1) {
               *pbVar17 = local_4b._0_1_;
               pbVar7 = *(basic_string**)( param_1 + 8 );
            }
 else {
               uVar16 = (uint)sVar6;
               if (uVar16 < 8) {
                  if (( sVar6 & 4 ) == 0) {
                     if (uVar16 != 0) {
                        *pbVar17 = local_4b._0_1_;
                        if (( sVar6 & 2 ) == 0) goto LAB_001036b3;
                        *(undefined2*)( pbVar17 + ( ( sVar6 & 0xffffffff ) - 2 ) ) = *(undefined2*)( (long)&uStack_53 + ( sVar6 & 0xffffffff ) + 6 );
                        pbVar7 = *(basic_string**)( param_1 + 8 );
                     }

                  }
 else {
                     *(undefined4*)pbVar17 = local_4b;
                     *(undefined4*)( pbVar17 + ( ( sVar6 & 0xffffffff ) - 4 ) ) = *(undefined4*)( (long)&uStack_53 + ( sVar6 & 0xffffffff ) + 4 );
                     pbVar7 = *(basic_string**)( param_1 + 8 );
                  }

               }
 else {
                  *(ulong*)pbVar17 = CONCAT44(uStack_47, local_4b);
                  *(undefined8*)( pbVar17 + ( ( sVar6 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)&uStack_53 + ( sVar6 & 0xffffffff ) );
                  lVar18 = (long)pbVar17 - ( ( ulong )(pbVar17 + 8) & 0xfffffffffffffff8 );
                  uVar16 = (int)lVar18 + uVar16 & 0xfffffff8;
                  if (7 < uVar16) {
                     uVar10 = 0;
                     do {
                        uVar13 = (ulong)uVar10;
                        uVar10 = uVar10 + 8;
                        *(undefined8*)( ( ( ulong )(pbVar17 + 8) & 0xfffffffffffffff8 ) + uVar13 ) = *(undefined8*)( (long)&local_4b + ( uVar13 - lVar18 ) );
                     }
 while ( uVar10 < uVar16 );
                  }

                  LAB_001036b3:pbVar7 = *(basic_string**)( param_1 + 8 );
               }

            }

         }

         *(ulong*)( param_1 + 0x10 ) = uVar12;
         pbVar7[uVar12] = (basic_string)0x0;
         uVar13 = *(ulong*)( param_1 + 0x10 );
         pbVar7 = *(basic_string**)( param_1 + 8 );
         if (pbVar7 == pbVar5) {
            uVar12 = 0xf;
         }
 else {
            uVar12 = *(ulong*)( param_1 + 0x18 );
         }

         if (uVar12 < uVar13 + 1) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)param_1, uVar13, 0, (char*)0x0, 1);
            pbVar7 = *(basic_string**)( param_1 + 8 );
         }

         pbVar7[uVar13] = (basic_string)0x5d;
         *(ulong*)( param_1 + 0x10 ) = uVar13 + 1;
         *(undefined1*)( *(long*)( param_1 + 8 ) + 1 + uVar13 ) = 0;
         lVar18 = *(long*)( *(long*)( this + 0x60 ) + 8 );
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_replace(unsigned long, unsigned long, char const*, unsigned long) [clone .isra.0] */void std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_replace(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this, ulong param_1, ulong param_2, char *param_3, ulong param_4) {
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *__dest;
   long lVar1;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar2;
   ulong uVar3;
   ulong uVar4;
   lVar1 = *(long*)( this + 0x10 );
   if (param_4 <= ( param_2 + 0x7fffffffffffffff ) - lVar1) {
      pbVar2 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 );
      uVar3 = ( param_4 - param_2 ) + lVar1;
      if (pbVar2 == this + 0x18) {
         uVar4 = 0xf;
      }
 else {
         uVar4 = *(ulong*)( this + 0x18 );
      }

      if (uVar4 < uVar3) {
         _M_mutate(this, param_1, param_2, param_3, param_4);
      }
 else {
         __dest = pbVar2 + param_1;
         uVar4 = lVar1 - ( param_1 + param_2 );
         if (( param_3 < pbVar2 ) || ( pbVar2 + lVar1 < param_3 )) {
            if (( uVar4 != 0 ) && ( param_2 != param_4 )) {
               if (uVar4 == 1) {
                  __dest[param_4] = __dest[param_2];
               }
 else {
                  memmove(__dest + param_4, __dest + param_2, uVar4);
               }

            }

            if (param_4 != 0) {
               if (param_4 == 1) {
                  *__dest = ( basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> ) * param_3;
               }
 else {
                  memcpy(__dest, param_3, param_4);
               }

            }

         }
 else {
            _M_replace_cold(this, (char*)__dest, param_2, param_3, param_4, uVar4);
         }

      }

      *(ulong*)( this + 0x10 ) = uVar3;
      *(undefined1*)( *(long*)( this + 8 ) + uVar3 ) = 0;
      return;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_length_error("basic_string::_M_replace");
}
/* glslang::TFunction::TFunction(glslang::TFunction const&) */void glslang::TFunction::TFunction(TFunction *this, TFunction *param_1) {
   long *plVar1;
   uint uVar2;
   char *pcVar3;
   undefined1(*pauVar4)[16];
   TType *pTVar5;
   int iVar6;
   ulong uVar7;
   undefined8 *puVar8;
   undefined8 uVar9;
   size_t sVar10;
   TType *this_00;
   vector<char_const*,glslang::pool_allocator<char_const*>> *pvVar11;
   undefined8 *puVar12;
   code *pcVar13;
   undefined8 *puVar14;
   long lVar15;
   undefined1 *puVar16;
   undefined8 *puVar17;
   long in_FS_OFFSET;
   TMap *local_b0;
   undefined1 local_98[16];
   undefined8 local_88;
   undefined8 local_78[2];
   undefined4 local_68[2];
   long local_60;
   undefined4 *local_58;
   undefined4 *local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR___cxa_pure_virtual_00111d58;
   pcVar3 = *(char**)( *(long*)( param_1 + 8 ) + 8 );
   uVar7 = glslang::GetThreadPoolAllocator();
   puVar8 = (undefined8*)glslang::TPoolAllocator::allocate(uVar7);
   uVar9 = glslang::GetThreadPoolAllocator();
   *puVar8 = uVar9;
   puVar8[1] = puVar8 + 3;
   if (pcVar3 == (char*)0x0) {
      LAB_001047d0:/* WARNING: Subroutine does not return */std::__throw_logic_error("basic_string: construction from null is not valid");
   }

   uVar7 = 0;
   sVar10 = strlen(pcVar3);
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(puVar8, pcVar3, pcVar3 + sVar10);
   uVar9 = *(undefined8*)( param_1 + 0x10 );
   *(undefined8**)( this + 8 ) = puVar8;
   this[0x20] = (TFunction)0x1;
   *(undefined8*)( this + 0x10 ) = uVar9;
   *(undefined***)this = &PTR_clone_00111f38;
   uVar9 = glslang::GetThreadPoolAllocator();
   *(undefined8*)( this + 0x28 ) = uVar9;
   *(undefined***)( this + 0x48 ) = &PTR__TType_00111b50;
   *(undefined2*)( this + 0xa0 ) = 0;
   *(undefined1(*) [16])( this + 0xd0 ) = (undefined1[16])0x0;
   this[0x68] = ( TFunction )((byte)this[0x68] & 0xf0);
   *(uint*)( this + 0x50 ) = CONCAT22((short)( ( uint ) * (undefined4*)( this + 0x50 ) >> 0x10 ), 0x100) & 0xf800ffff;
   uVar9 = _LC235;
   *(undefined1(*) [16])( this + 0xa8 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x6c ) = uVar9;
   *(undefined1(*) [16])( this + 0xb8 ) = (undefined1[16])0x0;
   *(ulong*)( this + 0x75 ) = *(ulong*)( this + 0x75 ) & 0xffffff0000ffc07f | 0xffff001f80;
   *(undefined8*)( this + 0x30 ) = 0;
   *(ulong*)( this + 0x80 ) = CONCAT71(( uint7 )(( ulong ) * (undefined8*)( this + 0x80 ) >> 8) & 0xffffffff, 0xff);
   *(undefined8*)( this + 0x8c ) = 0xfffff800;
   *(undefined8*)( this + 0x38 ) = 0;
   *(ulong*)( this + 0x74 ) = *(ulong*)( this + 0x74 ) & 0xffffffff8000 | 0xffff000000004fff;
   *(ulong*)( this + 0x7c ) = *(ulong*)( this + 0x7c ) | 0x1ffff007fffffff;
   *(undefined8*)( this + 0x40 ) = 0;
   *(uint*)( this + 200 ) = *(uint*)( this + 200 ) & 0x9fc00000;
   *(undefined8*)( this + 0x58 ) = 0;
   this[0x88] = (TFunction)0x0;
   this[0x84] = (TFunction)0x0;
   *(undefined4*)( this + 0x94 ) = 0xffffffff;
   *(undefined8*)( this + 0x98 ) = 0;
   *(ulong*)( this + 0x60 ) = *(ulong*)( this + 0x60 ) & 0x8000000400000000;
   uVar9 = glslang::GetThreadPoolAllocator();
   this[0x100] = (TFunction)0x0;
   *(undefined8*)( this + 0xe8 ) = uVar9;
   *(TFunction**)( this + 0xf0 ) = this + 0x100;
   *(undefined8*)( this + 0xf8 ) = 0;
   uVar9 = glslang::GetThreadPoolAllocator();
   *(undefined8*)( this + 0x120 ) = uVar9;
   *(TFunction**)( this + 0x128 ) = this + 0x138;
   *(undefined8*)( this + 0x130 ) = 0;
   this[0x138] = (TFunction)0x0;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_replace((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)( this + 0x120 ), 0, 0, "", 0);
   lVar15 = *(long*)( param_1 + 0x30 );
   *(undefined4*)( this + 0x148 ) = 0xffffffff;
   if (*(long*)( param_1 + 0x38 ) != lVar15) {
      uVar2 = 0;
      do {
         pauVar4 = *(undefined1(**) [16])( this + 0x38 );
         local_88 = 0;
         local_98 = (undefined1[16])0x0;
         if (pauVar4 == *(undefined1(**) [16])( this + 0x40 )) {
            std::vector<glslang::TParameter,glslang::pool_allocator<glslang::TParameter>>::_M_realloc_insert<glslang::TParameter_const&>((vector<glslang::TParameter,glslang::pool_allocator<glslang::TParameter>>*)( this + 0x28 ), pauVar4, local_98);
            puVar16 = *(undefined1**)( this + 0x38 );
         }
 else {
            puVar16 = pauVar4[1] + 8;
            *(undefined8*)pauVar4[1] = 0;
            *pauVar4 = (undefined1[16])0x0;
            *(undefined1**)( this + 0x38 ) = puVar16;
         }

         plVar1 = (long*)( *(long*)( param_1 + 0x30 ) + uVar7 * 0x18 );
         puVar8 = (undefined8*)*plVar1;
         if (puVar8 != (undefined8*)0x0) {
            pcVar3 = (char*)puVar8[1];
            uVar7 = glslang::GetThreadPoolAllocator();
            puVar8 = (undefined8*)glslang::TPoolAllocator::allocate(uVar7);
            uVar9 = glslang::GetThreadPoolAllocator();
            *puVar8 = uVar9;
            puVar8[1] = puVar8 + 3;
            if (pcVar3 == (char*)0x0) goto LAB_001047d0;
            sVar10 = strlen(pcVar3);
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(puVar8, pcVar3, pcVar3 + sVar10);
         }

         *(undefined8**)( puVar16 + -0x18 ) = puVar8;
         pTVar5 = (TType*)plVar1[1];
         uVar7 = glslang::GetThreadPoolAllocator();
         this_00 = (TType*)glslang::TPoolAllocator::allocate(uVar7);
         *(undefined***)this_00 = &PTR__TType_00111b50;
         *(undefined8*)( this_00 + 0x44 ) = 0xfffff800;
         uVar9 = _LC235;
         this_00[0x20] = ( TType )((byte)this_00[0x20] & 0xf0);
         *(undefined8*)( this_00 + 0x24 ) = uVar9;
         *(uint*)( this_00 + 8 ) = CONCAT22((short)( ( uint ) * (undefined4*)( this_00 + 8 ) >> 0x10 ), 0x100) & 0xf800ffff;
         *(undefined2*)( this_00 + 0x58 ) = 0;
         *(undefined8*)( this_00 + 0x10 ) = 0;
         *(ulong*)( this_00 + 0x2d ) = *(ulong*)( this_00 + 0x2d ) & 0xffffff0000ffc07f | 0xffff001f80;
         *(uint*)( this_00 + 0x80 ) = *(uint*)( this_00 + 0x80 ) & 0x9fc00000;
         this_00[0x40] = (TType)0x0;
         *(undefined4*)( this_00 + 0x4c ) = 0xffffffff;
         *(ulong*)( this_00 + 0x38 ) = ( ulong )(( uint ) * (undefined8*)( this_00 + 0x38 ) & 0xfe07ff00) | 0x1f800ff;
         *(undefined8*)( this_00 + 0x50 ) = 0;
         *(ulong*)( this_00 + 0x2c ) = *(ulong*)( this_00 + 0x2c ) & 0xffffffff8000 | 0xffff000000004fff;
         *(ulong*)( this_00 + 0x34 ) = *(ulong*)( this_00 + 0x34 ) | 0x7ff007fffffff;
         *(undefined1(*) [16])( this_00 + 0x88 ) = (undefined1[16])0x0;
         *(ulong*)( this_00 + 0x18 ) = *(ulong*)( this_00 + 0x18 ) & 0x8000000400000000;
         *(undefined1(*) [16])( this_00 + 0x60 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_00 + 0x70 ) = (undefined1[16])0x0;
         local_78[0] = glslang::GetThreadPoolAllocator();
         local_68[0] = 0;
         local_60 = 0;
         local_48 = 0;
         local_58 = local_68;
         local_50 = local_68;
         TType::deepCopy(this_00, pTVar5, (TMap*)local_78);
         for (lVar15 = local_60; lVar15 != 0; lVar15 = *(long*)( lVar15 + 0x10 )) {
            std::_Rb_tree<glslang::TVector<glslang::TTypeLoc>*,std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>,std::_Select1st<std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector < glslang::TTypeLoc>*>>,std::less<glslang::TVector<glslang::TTypeLoc>*>,glslang::pool_allocator<std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>> > ::_M_erase(*(_Rb_tree_node**)( lVar15 + 0x18 ));
         }

         uVar2 = uVar2 + 1;
         lVar15 = plVar1[2];
         uVar7 = (ulong)uVar2;
         *(TType**)( puVar16 + -0x10 ) = this_00;
         *(long*)*(undefined1(*) [16])( puVar16 + -8 ) = lVar15;
      }
 while ( uVar7 < ( ulong )(( *(long*)( param_1 + 0x38 ) - *(long*)( param_1 + 0x30 ) >> 3 ) * -0x5555555555555555) );
   }

   local_b0 = (TMap*)local_78;
   lVar15 = *(long*)param_1;
   *(undefined8*)( this + 0x18 ) = 0;
   if (*(code**)( lVar15 + 0x88 ) == TSymbol::getNumExtensions) {
      lVar15 = *(long*)( param_1 + 0x18 );
      if (lVar15 == 0) goto LAB_00104658;
      iVar6 = (int)( *(long*)( lVar15 + 0x10 ) - *(long*)( lVar15 + 8 ) >> 3 );
   }
 else {
      iVar6 = ( **(code**)( lVar15 + 0x88 ) )(param_1);
   }

   if (iVar6 < 1) goto LAB_00104658;
   pcVar13 = *(code**)( *(long*)param_1 + 0x90 );
   if (pcVar13 == TSymbol::getExtensions) {
      lVar15 = *(long*)( param_1 + 0x18 );
      pcVar13 = *(code**)( *(long*)param_1 + 0x88 );
      puVar14 = *(undefined8**)( lVar15 + 8 );
      puVar8 = puVar14;
      if (pcVar13 != TSymbol::getNumExtensions) goto LAB_001047af;
      LAB_001045b5:iVar6 = (int)( *(long*)( lVar15 + 0x10 ) - (long)puVar14 >> 3 );
   }
 else {
      puVar8 = (undefined8*)( *pcVar13 )(param_1);
      pcVar13 = *(code**)( *(long*)param_1 + 0x88 );
      if (pcVar13 == TSymbol::getNumExtensions) {
         lVar15 = *(long*)( param_1 + 0x18 );
         if (lVar15 == 0) {
            uVar7 = glslang::GetThreadPoolAllocator();
            puVar8 = (undefined8*)glslang::TPoolAllocator::allocate(uVar7);
            uVar9 = glslang::GetThreadPoolAllocator();
            puVar8[1] = 0;
            *puVar8 = uVar9;
            puVar8[2] = 0;
            puVar8[3] = 0;
            *(undefined8**)( this + 0x18 ) = puVar8;
            goto LAB_00104658;
         }

         puVar14 = *(undefined8**)( lVar15 + 8 );
         goto LAB_001045b5;
      }

      LAB_001047af:iVar6 = ( *pcVar13 )(param_1);
   }

   uVar7 = glslang::GetThreadPoolAllocator();
   pvVar11 = (vector<char_const*,glslang::pool_allocator<char_const*>>*)glslang::TPoolAllocator::allocate(uVar7);
   uVar9 = glslang::GetThreadPoolAllocator();
   *(undefined8*)pvVar11 = uVar9;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( pvVar11 + ( 8*i + 8 ) ) = 0;
   }

   *(vector<char_const*,glslang::pool_allocator<char_const*>>**)( this + 0x18 ) = pvVar11;
   if (0 < iVar6) {
      puVar17 = (undefined8*)0x0;
      puVar14 = puVar8 + iVar6;
      puVar12 = (undefined8*)0x0;
      while (true) {
         if (puVar17 == puVar12) {
            std::vector<char_const*,glslang::pool_allocator<char_const*>>::_M_realloc_insert<char_const*const&>(pvVar11, puVar17, puVar8);
         }
 else {
            *puVar17 = *puVar8;
            *(undefined8**)( pvVar11 + 0x10 ) = puVar17 + 1;
         }

         if (puVar14 == puVar8 + 1) break;
         puVar8 = puVar8 + 1;
         pvVar11 = *(vector<char_const*,glslang::pool_allocator<char_const*>>**)( this + 0x18 );
         puVar17 = *(undefined8**)( pvVar11 + 0x10 );
         puVar12 = *(undefined8**)( pvVar11 + 0x18 );
      }
;
   }

   LAB_00104658:local_78[0] = glslang::GetThreadPoolAllocator();
   local_68[0] = 0;
   local_60 = 0;
   local_48 = 0;
   local_58 = local_68;
   local_50 = local_68;
   TType::deepCopy((TType*)( this + 0x48 ), (TType*)( param_1 + 0x48 ), local_b0);
   for (lVar15 = local_60; lVar15 != 0; lVar15 = *(long*)( lVar15 + 0x10 )) {
      std::_Rb_tree<glslang::TVector<glslang::TTypeLoc>*,std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>,std::_Select1st<std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector < glslang::TTypeLoc>*>>,std::less<glslang::TVector<glslang::TTypeLoc>*>,glslang::pool_allocator<std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>> > ::_M_erase(*(_Rb_tree_node**)( lVar15 + 0x18 ));
   }

   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)( this + 0xe8 ), (basic_string*)( param_1 + 0xe8 ));
   uVar9 = *(undefined8*)( param_1 + 0x110 );
   *(undefined4*)( this + 0x118 ) = *(undefined4*)( param_1 + 0x118 );
   *(undefined8*)( this + 0x110 ) = uVar9;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)( this + 0x120 ), (basic_string*)( param_1 + 0x120 ));
   *(undefined4*)( this + 0x148 ) = *(undefined4*)( param_1 + 0x148 );
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* glslang::TFunction::clone() const */TFunction * __thiscall glslang::TFunction::clone(TFunction *this){
   ulong uVar1;
   TFunction *this_00;
   uVar1 = glslang::GetThreadPoolAllocator();
   this_00 = (TFunction*)glslang::TPoolAllocator::allocate(uVar1);
   TFunction(this_00, this);
   return this_00;
}
/* glslang::TVariable::TVariable(glslang::TVariable const&) */void glslang::TVariable::TVariable(TVariable *this, TVariable *param_1) {
   TVariable TVar1;
   char *__s;
   char cVar2;
   ulong uVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   size_t sVar6;
   vector<char_const*,glslang::pool_allocator<char_const*>> *pvVar7;
   undefined8 *puVar8;
   ulong *puVar9;
   undefined4 *puVar10;
   code *pcVar11;
   vector<glslang::TVector<char_const*>,glslang::pool_allocator<glslang::TVector<char_const*>>> *this_00;
   int iVar12;
   undefined8 *puVar13;
   long lVar14;
   undefined4 *puVar15;
   undefined4 *puVar16;
   ulong uVar17;
   undefined8 *puVar18;
   int iVar19;
   long lVar20;
   long in_FS_OFFSET;
   undefined8 local_78[2];
   undefined4 local_68[2];
   long local_60;
   undefined4 *local_58;
   undefined4 *local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR___cxa_pure_virtual_00111d58;
   __s = *(char**)( *(long*)( param_1 + 8 ) + 8 );
   uVar3 = glslang::GetThreadPoolAllocator();
   puVar4 = (undefined8*)glslang::TPoolAllocator::allocate(uVar3);
   uVar5 = glslang::GetThreadPoolAllocator();
   *puVar4 = uVar5;
   puVar4[1] = puVar4 + 3;
   if (__s == (char*)0x0) {
      /* WARNING: Subroutine does not return */
      std::__throw_logic_error("basic_string: construction from null is not valid");
   }

   sVar6 = strlen(__s);
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(puVar4, __s, __s + sVar6);
   uVar5 = *(undefined8*)( param_1 + 0x10 );
   *(undefined1(*) [16])( this + 0xb0 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x10 ) = uVar5;
   *(undefined***)this = &PTR_clone_00111e18;
   *(undefined***)( this + 0x28 ) = &PTR__TType_00111b50;
   *(undefined1(*) [16])( this + 0x88 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x98 ) = (undefined1[16])0x0;
   this[0x48] = ( TVariable )((byte)this[0x48] & 0xf0);
   *(uint*)( this + 0x30 ) = CONCAT22((short)( ( uint ) * (undefined4*)( this + 0x30 ) >> 0x10 ), 0x100) & 0xf800ffff;
   *(undefined8**)( this + 8 ) = puVar4;
   *(ulong*)( this + 0x55 ) = *(ulong*)( this + 0x55 ) & 0xffffff0000ffc07f | 0xffff001f80;
   this[0x20] = (TVariable)0x1;
   *(ulong*)( this + 0x60 ) = CONCAT71(( uint7 )(( ulong ) * (undefined8*)( this + 0x60 ) >> 8) & 0xffffffff, 0xff);
   *(undefined8*)( this + 0x6c ) = 0xfffff800;
   *(undefined2*)( this + 0x80 ) = 0;
   *(undefined8*)( this + 0x38 ) = 0;
   *(ulong*)( this + 0x54 ) = *(ulong*)( this + 0x54 ) & 0xffffffff8000 | 0xffff000000004fff;
   *(uint*)( this + 0xa8 ) = *(uint*)( this + 0xa8 ) & 0x9fc00000;
   *(ulong*)( this + 0x5c ) = *(ulong*)( this + 0x5c ) | 0x1ffff007fffffff;
   *(undefined8*)( this + 0x4c ) = 0xffffffffffffffff;
   this[0x68] = (TVariable)0x0;
   this[100] = (TVariable)0x0;
   *(undefined4*)( this + 0x74 ) = 0xffffffff;
   *(undefined8*)( this + 0x78 ) = 0;
   *(ulong*)( this + 0x40 ) = *(ulong*)( this + 0x40 ) & 0x8000000400000000;
   *(undefined***)( this + 200 ) = &PTR__TConstUnionArray_00111d38;
   *(undefined8*)( this + 0xd0 ) = 0;
   local_78[0] = glslang::GetThreadPoolAllocator();
   local_68[0] = 0;
   local_58 = local_68;
   local_60 = 0;
   local_48 = 0;
   local_50 = local_58;
   TType::deepCopy((TType*)( this + 0x28 ), (TType*)( param_1 + 0x28 ), (TMap*)local_78);
   for (lVar14 = local_60; lVar14 != 0; lVar14 = *(long*)( lVar14 + 0x10 )) {
      std::_Rb_tree<glslang::TVector<glslang::TTypeLoc>*,std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>,std::_Select1st<std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector < glslang::TTypeLoc>*>>,std::less<glslang::TVector<glslang::TTypeLoc>*>,glslang::pool_allocator<std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>> > ::_M_erase(*(_Rb_tree_node**)( lVar14 + 0x18 ));
   }

   TVar1 = param_1[0xc0];
   lVar14 = *(long*)param_1;
   *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
   this[0xc0] = TVar1;
   pcVar11 = *(code**)( lVar14 + 0x88 );
   *(undefined8*)( this + 0x18 ) = 0;
   if (pcVar11 == TSymbol::getNumExtensions) {
      lVar20 = *(long*)( param_1 + 0x18 );
      if (lVar20 != 0) {
         iVar19 = (int)( *(long*)( lVar20 + 0x10 ) - *(long*)( lVar20 + 8 ) >> 3 );
         goto LAB_00104a8c;
      }

   }
 else {
      iVar19 = ( *pcVar11 )(param_1);
      lVar14 = *(long*)param_1;
      LAB_00104a8c:if (0 < iVar19) {
         if (*(code**)( lVar14 + 0x90 ) == TSymbol::getExtensions) {
            lVar20 = *(long*)( param_1 + 0x18 );
            pcVar11 = *(code**)( lVar14 + 0x88 );
            puVar13 = *(undefined8**)( lVar20 + 8 );
            puVar4 = puVar13;
            if (pcVar11 == TSymbol::getNumExtensions) {
               LAB_00104ac6:iVar19 = (int)( *(long*)( lVar20 + 0x10 ) - (long)puVar13 >> 3 );
            }
 else {
               LAB_00104f5a:iVar19 = ( *pcVar11 )(param_1);
            }

            uVar3 = glslang::GetThreadPoolAllocator();
            pvVar7 = (vector<char_const*,glslang::pool_allocator<char_const*>>*)glslang::TPoolAllocator::allocate(uVar3);
            uVar5 = glslang::GetThreadPoolAllocator();
            *(undefined8*)( pvVar7 + 8 ) = 0;
            *(undefined8*)pvVar7 = uVar5;
            *(undefined8*)( pvVar7 + 0x10 ) = 0;
            *(undefined8*)( pvVar7 + 0x18 ) = 0;
            *(vector<char_const*,glslang::pool_allocator<char_const*>>**)( this + 0x18 ) = pvVar7;
            if (0 < iVar19) {
               puVar8 = (undefined8*)0x0;
               puVar18 = (undefined8*)0x0;
               puVar13 = puVar4 + iVar19;
               while (true) {
                  if (puVar18 == puVar8) {
                     std::vector<char_const*,glslang::pool_allocator<char_const*>>::_M_realloc_insert<char_const*const&>(pvVar7, puVar18, puVar4);
                  }
 else {
                     *puVar18 = *puVar4;
                     *(undefined8**)( pvVar7 + 0x10 ) = puVar18 + 1;
                  }

                  if (puVar4 + 1 == puVar13) break;
                  puVar4 = puVar4 + 1;
                  pvVar7 = *(vector<char_const*,glslang::pool_allocator<char_const*>>**)( this + 0x18 );
                  puVar18 = *(undefined8**)( pvVar7 + 0x10 );
                  puVar8 = *(undefined8**)( pvVar7 + 0x18 );
               }
;
            }

         }
 else {
            puVar4 = (undefined8*)( **(code**)( lVar14 + 0x90 ) )(param_1);
            pcVar11 = *(code**)( *(long*)param_1 + 0x88 );
            if (pcVar11 != TSymbol::getNumExtensions) goto LAB_00104f5a;
            lVar20 = *(long*)( param_1 + 0x18 );
            if (lVar20 != 0) {
               puVar13 = *(undefined8**)( lVar20 + 8 );
               goto LAB_00104ac6;
            }

            uVar3 = glslang::GetThreadPoolAllocator();
            puVar4 = (undefined8*)glslang::TPoolAllocator::allocate(uVar3);
            uVar5 = glslang::GetThreadPoolAllocator();
            puVar4[1] = 0;
            *puVar4 = uVar5;
            puVar4[2] = 0;
            puVar4[3] = 0;
            *(undefined8**)( this + 0x18 ) = puVar4;
         }

         lVar14 = *(long*)param_1;
      }

   }

   if (*(code**)( lVar14 + 0xf8 ) == hasMemberExtensions) {
      if (*(long*)( param_1 + 0xe0 ) == 0) goto LAB_00104cd4;
   }
 else {
      cVar2 = ( **(code**)( lVar14 + 0xf8 ) )(param_1);
      if (cVar2 == '\0') goto LAB_00104cd4;
   }

   lVar14 = *(long*)( param_1 + 0x90 );
   lVar20 = 0;
   iVar19 = 0;
   if (0 < (int)( *(long*)( lVar14 + 0x10 ) - *(long*)( lVar14 + 8 ) >> 5 )) {
      do {
         if (*(code**)( *(long*)param_1 + 0x100 ) == getNumMemberExtensions) {
            if (*(long*)( param_1 + 0xe0 ) != 0) {
               lVar14 = *(long*)( *(long*)( param_1 + 0xe0 ) + 8 ) + lVar20;
               iVar12 = (int)( *(long*)( lVar14 + 0x10 ) - *(long*)( lVar14 + 8 ) >> 3 );
               goto LAB_00104be6;
            }

         }
 else {
            iVar12 = ( **(code**)( *(long*)param_1 + 0x100 ) )(param_1, iVar19);
            LAB_00104be6:if (0 < iVar12) {
               pcVar11 = *(code**)( *(long*)param_1 + 0x108 );
               if (pcVar11 == getMemberExtensions) {
                  pcVar11 = *(code**)( *(long*)param_1 + 0x100 );
                  lVar14 = *(long*)( *(long*)( param_1 + 0xe0 ) + 8 ) + lVar20;
                  puVar4 = *(undefined8**)( lVar14 + 8 );
                  puVar13 = puVar4;
                  if (pcVar11 == getNumMemberExtensions) {
                     LAB_00104c30:iVar12 = (int)( *(long*)( lVar14 + 0x10 ) - (long)puVar13 >> 3 );
                     lVar14 = *(long*)( this + 0xe0 );
                  }
 else {
                     LAB_00104e08:iVar12 = ( *pcVar11 )(param_1, iVar19);
                     lVar14 = *(long*)( this + 0xe0 );
                  }

                  if (lVar14 == 0) goto LAB_00104e20;
               }
 else {
                  puVar4 = (undefined8*)( *pcVar11 )(param_1, iVar19);
                  pcVar11 = *(code**)( *(long*)param_1 + 0x100 );
                  if (pcVar11 != getNumMemberExtensions) goto LAB_00104e08;
                  if (*(long*)( param_1 + 0xe0 ) != 0) {
                     lVar14 = *(long*)( *(long*)( param_1 + 0xe0 ) + 8 ) + lVar20;
                     puVar13 = *(undefined8**)( lVar14 + 8 );
                     goto LAB_00104c30;
                  }

                  if (*(long*)( this + 0xe0 ) != 0) goto LAB_00104cb0;
                  iVar12 = 0;
                  LAB_00104e20:uVar3 = glslang::GetThreadPoolAllocator();
                  this_00 = (vector<glslang::TVector<char_const*>,glslang::pool_allocator<glslang::TVector<char_const*>>>*)glslang::TPoolAllocator::allocate(uVar3);
                  uVar5 = glslang::GetThreadPoolAllocator();
                  *(undefined8*)this_00 = uVar5;
                  lVar14 = *(long*)( this + 0x90 );
                  *(undefined8*)( this_00 + 8 ) = 0;
                  lVar14 = *(long*)( lVar14 + 0x10 ) - *(long*)( lVar14 + 8 );
                  *(undefined8*)( this_00 + 0x10 ) = 0;
                  *(undefined8*)( this_00 + 0x18 ) = 0;
                  *(vector<glslang::TVector<char_const*>,glslang::pool_allocator<glslang::TVector<char_const*>>>**)( this + 0xe0 ) = this_00;
                  if (lVar14 != 0) {
                     std::vector<glslang::TVector<char_const*>,glslang::pool_allocator<glslang::TVector<char_const*>>>::_M_default_append(this_00, lVar14 >> 5);
                  }

               }

               if (0 < iVar12) {
                  puVar13 = puVar4;
                  do {
                     while (true) {
                        pvVar7 = (vector<char_const*,glslang::pool_allocator<char_const*>>*)( *(long*)( *(long*)( this + 0xe0 ) + 8 ) + lVar20 );
                        puVar18 = *(undefined8**)( pvVar7 + 0x10 );
                        if (puVar18 != *(undefined8**)( pvVar7 + 0x18 )) break;
                        puVar8 = puVar13 + 1;
                        std::vector<char_const*,glslang::pool_allocator<char_const*>>::_M_realloc_insert<char_const*const&>(pvVar7, puVar18, puVar13);
                        puVar13 = puVar8;
                        if (puVar8 == puVar4 + iVar12) goto LAB_00104cb0;
                     }
;
                     uVar5 = *puVar13;
                     puVar13 = puVar13 + 1;
                     *puVar18 = uVar5;
                     *(undefined8**)( pvVar7 + 0x10 ) = puVar18 + 1;
                  }
 while ( puVar13 != puVar4 + iVar12 );
               }

            }

            LAB_00104cb0:lVar14 = *(long*)( param_1 + 0x90 );
         }

         iVar19 = iVar19 + 1;
         lVar20 = lVar20 + 0x20;
      }
 while ( iVar19 < (int)( *(long*)( lVar14 + 0x10 ) - *(long*)( lVar14 + 8 ) >> 5 ) );
   }

   LAB_00104cd4:lVar14 = *(long*)( param_1 + 0xd0 );
   if (lVar14 != 0) {
      lVar20 = *(long*)( lVar14 + 0x10 );
      lVar14 = *(long*)( lVar14 + 8 );
      uVar3 = glslang::GetThreadPoolAllocator();
      iVar19 = (int)( lVar20 - lVar14 >> 4 );
      uVar17 = (ulong)iVar19;
      puVar9 = (ulong*)glslang::TPoolAllocator::allocate(uVar3);
      uVar3 = glslang::GetThreadPoolAllocator();
      if (uVar17 >> 0x3b != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("cannot create std::vector larger than max_size()");
      }

      *puVar9 = uVar3;
      for (int i = 0; i < 3; i++) {
         puVar9[( i + 1 )] = 0;
      }

      if (uVar17 == 0) {
         puVar9[3] = 0;
         *(ulong**)( this + 0xd0 ) = puVar9;
      }
 else {
         puVar10 = (undefined4*)glslang::TPoolAllocator::allocate(uVar3);
         puVar9[1] = (ulong)puVar10;
         puVar9[3] = ( ulong )(puVar10 + uVar17 * 4);
         puVar15 = puVar10;
         do {
            *puVar15 = 0;
            puVar16 = puVar15 + 4;
            puVar15[2] = 8;
            puVar15 = puVar16;
         }
 while ( puVar16 != puVar10 + uVar17 * 4 );
         puVar9[2] = (ulong)puVar16;
         iVar12 = 0;
         lVar14 = *(long*)( *(long*)( param_1 + 0xd0 ) + 8 );
         lVar20 = 0;
         do {
            iVar12 = iVar12 + 1;
            *(undefined8*)( (long)puVar10 + lVar20 ) = *(undefined8*)( lVar14 + lVar20 );
            *(undefined4*)( (long)puVar10 + lVar20 + 8 ) = *(undefined4*)( lVar14 + 8 + lVar20 );
            lVar20 = lVar20 + 0x10;
         }
 while ( iVar12 < iVar19 );
         *(ulong**)( this + 0xd0 ) = puVar9;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TVariable::clone() const */TVariable * __thiscall glslang::TVariable::clone(TVariable *this){
   ulong uVar1;
   TVariable *this_00;
   uVar1 = glslang::GetThreadPoolAllocator();
   this_00 = (TVariable*)glslang::TPoolAllocator::allocate(uVar1);
   TVariable(this_00, this);
   return this_00;
}
/* glslang::TSymbolTableLevel::clone() const */TSymbolTableLevel * __thiscall glslang::TSymbolTableLevel::clone(TSymbolTableLevel *this){
   TSymbolTableLevel *pTVar1;
   undefined4 uVar2;
   undefined1 *puVar3;
   code *pcVar4;
   ulong *puVar5;
   TSymbolTableLevel *pTVar6;
   int iVar7;
   ulong uVar8;
   TSymbolTableLevel *this_00;
   undefined8 uVar9;
   ulong uVar10;
   long lVar11;
   TVariable *this_01;
   undefined8 *puVar12;
   _Rb_tree_node_base *p_Var13;
   long *plVar14;
   long lVar15;
   TSymbol *pTVar16;
   ulong *puVar17;
   void *pvVar18;
   TVariable *pTVar19;
   byte bVar20;
   ulong *puVar21;
   size_t sVar22;
   ulong uVar23;
   size_t sVar24;
   long lVar25;
   void *pvVar26;
   void *pvVar27;
   TSymbolTableLevel *pTVar28;
   long lVar29;
   void *pvVar30;
   TSymbolTableLevel *pTVar31;
   long in_FS_OFFSET;
   ulong local_c8;
   ulong *local_c0;
   ulong local_b8;
   ulong local_b0[2];
   long local_a0;
   ulong local_98;
   ulong *local_90;
   ulong local_88;
   ulong local_80[2];
   ulong local_70;
   ulong *local_68;
   ulong local_60;
   ulong local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar8 = glslang::GetThreadPoolAllocator();
   this_00 = (TSymbolTableLevel*)glslang::TPoolAllocator::allocate(uVar8);
   uVar9 = glslang::GetThreadPoolAllocator();
   *(undefined8*)this_00 = uVar9;
   pTVar1 = this_00 + 0x10;
   *(undefined4*)( this_00 + 0x10 ) = 0;
   *(undefined8*)( this_00 + 0x18 ) = 0;
   *(TSymbolTableLevel**)( this_00 + 0x20 ) = pTVar1;
   *(TSymbolTableLevel**)( this_00 + 0x28 ) = pTVar1;
   *(undefined8*)( this_00 + 0x30 ) = 0;
   *(undefined8*)( this_00 + 0x38 ) = 0;
   uVar9 = glslang::GetThreadPoolAllocator();
   *(undefined4*)( this_00 + 0x60 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = uVar9;
   uVar2 = *(undefined4*)( this + 0x60 );
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this_00 + ( 8*i + 72 ) ) = 0;
   }

   lVar25 = *(long*)( this + 0x48 );
   this_00[100] = (TSymbolTableLevel)0x0;
   lVar11 = *(long*)( this + 0x50 );
   *(undefined4*)( this_00 + 0x60 ) = uVar2;
   this_00[100] = this[100];
   if (lVar11 != lVar25) {
      LAB_001051ff:do {
         local_98 = glslang::GetThreadPoolAllocator();
         uVar8 = *(ulong*)( lVar25 + 0x10 );
         puVar3 = *(undefined1**)( lVar25 + 8 );
         local_90 = local_80;
         if (uVar8 < 0x10) {
            if (uVar8 == 1) {
               local_80[0] = CONCAT71(local_80[0]._1_7_, *puVar3);
            }
 else if (uVar8 != 0) goto LAB_0010524f;
         }
 else {
            if ((long)uVar8 < 0) goto LAB_00105c22;
            local_90 = (ulong*)glslang::TPoolAllocator::allocate(local_98);
            local_80[0] = uVar8;
            LAB_0010524f:memcpy(local_90, puVar3, uVar8);
         }

         *(undefined1*)( (long)local_90 + uVar8 ) = 0;
         local_88 = uVar8;
         local_70 = glslang::GetThreadPoolAllocator();
         uVar8 = *(ulong*)( lVar25 + 0x38 );
         puVar3 = *(undefined1**)( lVar25 + 0x30 );
         local_68 = local_58;
         if (uVar8 < 0x10) {
            if (uVar8 == 1) {
               local_58[0] = CONCAT71(local_58[0]._1_7_, *puVar3);
            }
 else if (uVar8 != 0) goto LAB_001052c2;
         }
 else {
            if ((long)uVar8 < 0) goto LAB_00105c22;
            local_68 = (ulong*)glslang::TPoolAllocator::allocate(local_70);
            local_58[0] = uVar8;
            LAB_001052c2:memcpy(local_68, puVar3, uVar8);
         }

         *(undefined1*)( (long)local_68 + uVar8 ) = 0;
         puVar21 = *(ulong**)( this_00 + 0x50 );
         local_60 = uVar8;
         if (puVar21 == *(ulong**)( this_00 + 0x58 )) {
            lVar25 = lVar25 + 0x50;
            std::vector<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>::_M_realloc_insert<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>((vector<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>*)( this_00 + 0x40 ), puVar21, &local_98);
            if (lVar11 == lVar25) break;
            goto LAB_001051ff;
         }

         uVar10 = glslang::GetThreadPoolAllocator();
         uVar8 = local_88;
         puVar5 = local_90;
         puVar17 = puVar21 + 3;
         puVar21[1] = (ulong)puVar17;
         *puVar21 = uVar10;
         if (local_88 < 0x10) {
            if (local_88 == 1) {
               *(char*)( puVar21 + 3 ) = (char)*local_90;
            }
 else if (local_88 != 0) goto LAB_001056e4;
         }
 else {
            if ((long)local_88 < 0) goto LAB_00105c22;
            puVar17 = (ulong*)glslang::TPoolAllocator::allocate(uVar10);
            puVar21[1] = (ulong)puVar17;
            puVar21[3] = uVar8;
            LAB_001056e4:memcpy(puVar17, puVar5, uVar8);
            puVar17 = (ulong*)puVar21[1];
         }

         puVar21[2] = uVar8;
         *(undefined1*)( (long)puVar17 + uVar8 ) = 0;
         uVar10 = glslang::GetThreadPoolAllocator();
         uVar8 = local_60;
         puVar5 = local_68;
         puVar17 = puVar21 + 8;
         puVar21[6] = (ulong)puVar17;
         puVar21[5] = uVar10;
         if (local_60 < 0x10) {
            if (local_60 == 1) {
               *(char*)( puVar21 + 8 ) = (char)*local_68;
            }
 else if (local_60 != 0) goto LAB_0010568c;
         }
 else {
            if ((long)local_60 < 0) goto LAB_00105c22;
            puVar17 = (ulong*)glslang::TPoolAllocator::allocate(uVar10);
            puVar21[6] = (ulong)puVar17;
            puVar21[8] = uVar8;
            LAB_0010568c:memcpy(puVar17, puVar5, uVar8);
            puVar17 = (ulong*)puVar21[6];
         }

         lVar25 = lVar25 + 0x50;
         puVar21[7] = uVar8;
         *(undefined1*)( (long)puVar17 + uVar8 ) = 0;
         *(long*)( this_00 + 0x50 ) = *(long*)( this_00 + 0x50 ) + 0x50;
      }
 while ( lVar11 != lVar25 );
   }

   if ((long)*(int*)( this + 0x60 ) == 0) {
      p_Var13 = *(_Rb_tree_node_base**)( this + 0x20 );
      pvVar27 = (void*)0x0;
      pvVar18 = (void*)0x0;
      if (p_Var13 == (_Rb_tree_node_base*)( this + 0x10 )) {
         lVar25 = *(long*)( this + 0x48 );
         lVar11 = *(long*)( this + 0x50 );
         if (lVar25 == lVar11) goto LAB_001059f6;
         LAB_00105870:do {
            if (*(TSymbolTableLevel**)( this_00 + 0x18 ) != (TSymbolTableLevel*)0x0) {
               uVar8 = *(ulong*)( lVar25 + 0x38 );
               pvVar30 = *(void**)( lVar25 + 0x30 );
               pTVar6 = *(TSymbolTableLevel**)( this_00 + 0x18 );
               pTVar31 = pTVar1;
               do {
                  while (true) {
                     pTVar28 = pTVar6;
                     uVar10 = *(ulong*)( pTVar28 + 0x30 );
                     uVar23 = uVar8;
                     if (uVar10 <= uVar8) {
                        uVar23 = uVar10;
                     }

                     if (( uVar23 != 0 ) && ( iVar7 = memcmp(*(void**)( pTVar28 + 0x28 ), pvVar30, uVar23) ),iVar7 != 0) break;
                     lVar29 = uVar10 - uVar8;
                     if (lVar29 < 0x80000000) {
                        if (-0x80000001 < lVar29) {
                           iVar7 = (int)lVar29;
                           break;
                        }

                        goto LAB_001058a0;
                     }

                     LAB_001058ea:pTVar6 = *(TSymbolTableLevel**)( pTVar28 + 0x10 );
                     pTVar31 = pTVar28;
                     if (*(TSymbolTableLevel**)( pTVar28 + 0x10 ) == (TSymbolTableLevel*)0x0) goto LAB_001058f6;
                  }
;
                  if (-1 < iVar7) goto LAB_001058ea;
                  LAB_001058a0:pTVar6 = *(TSymbolTableLevel**)( pTVar28 + 0x18 );
               }
 while ( *(TSymbolTableLevel**)( pTVar28 + 0x18 ) != (TSymbolTableLevel*)0x0 );
               LAB_001058f6:if (pTVar1 != pTVar31) {
                  uVar10 = *(ulong*)( pTVar31 + 0x30 );
                  uVar23 = uVar8;
                  if (uVar10 <= uVar8) {
                     uVar23 = uVar10;
                  }

                  if (( uVar23 == 0 ) || ( iVar7 = memcmp(pvVar30, *(void**)( pTVar31 + 0x28 ), uVar23) ),iVar7 == 0) {
                     lVar29 = uVar8 - uVar10;
                     if (lVar29 < 0x80000000) {
                        if (lVar29 < -0x80000000) goto LAB_001059b5;
                        iVar7 = (int)lVar29;
                        goto LAB_00105953;
                     }

                  }
 else {
                     LAB_00105953:if (iVar7 < 0) goto LAB_001059b5;
                  }

                  lVar29 = *(long*)( pTVar31 + 0x48 );
                  if (lVar29 != 0) {
                     local_c8 = glslang::GetThreadPoolAllocator();
                     uVar8 = *(ulong*)( lVar25 + 0x10 );
                     local_c0 = local_b0;
                     puVar3 = *(undefined1**)( lVar25 + 8 );
                     if (uVar8 < 0x10) {
                        if (uVar8 == 1) {
                           local_b0[0] = CONCAT71(local_b0[0]._1_7_, *puVar3);
                        }
 else if (uVar8 != 0) goto LAB_00105a6c;
                     }
 else {
                        if ((long)uVar8 < 0) {
                           LAB_00105c22:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::_M_create");
                        }

                        local_c0 = (ulong*)glslang::TPoolAllocator::allocate(local_c8);
                        local_b0[0] = uVar8;
                        LAB_00105a6c:memcpy(local_c0, puVar3, uVar8);
                     }

                     *(undefined1*)( (long)local_c0 + uVar8 ) = 0;
                     local_b8 = uVar8;
                     local_a0 = lVar29;
                     std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>::_M_emplace_unique<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>const>((_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>*)this_00, (pair_conflict*)&local_c8);
                  }

               }

            }

            LAB_001059b5:lVar25 = lVar25 + 0x50;
         }
 while ( lVar11 != lVar25 );
      }
 else {
         LAB_0010532b:do {
            plVar14 = (long*)( **(code**)( **(long**)( p_Var13 + 0x48 ) + 0x58 ) )();
            if (plVar14 == (long*)0x0) {
               lVar11 = *(long*)( this + 0x50 );
               lVar29 = *(long*)( this + 0x48 );
               lVar15 = ( lVar11 - lVar29 >> 4 ) * -0x3333333333333333;
               lVar25 = lVar29;
               if (0 < lVar15 >> 2) {
                  sVar24 = *(size_t*)( p_Var13 + 0x30 );
                  lVar15 = ( lVar15 >> 2 ) * 0x140 + lVar29;
                  do {
                     if (*(size_t*)( lVar29 + 0x10 ) == sVar24) {
                        lVar25 = lVar29;
                        if (sVar24 == 0) goto LAB_001055d8;
                        pvVar30 = *(void**)( p_Var13 + 0x28 );
                        iVar7 = memcmp(*(void**)( lVar29 + 8 ), pvVar30, sVar24);
                        if (iVar7 == 0) goto LAB_001055d8;
                        sVar22 = *(size_t*)( lVar29 + 0x60 );
                        if (sVar24 != sVar22) {
                           sVar22 = *(size_t*)( lVar29 + 0xb0 );
                           if (sVar22 == sVar24) goto LAB_00105790;
                           LAB_0010558d:sVar22 = *(size_t*)( lVar29 + 0x100 );
                           if (sVar24 != sVar22) goto LAB_0010559d;
                           lVar25 = lVar29 + 0xf0;
                           if (sVar24 != 0) {
                              pvVar30 = *(void**)( p_Var13 + 0x28 );
                              LAB_00105750:pvVar26 = *(void**)( lVar29 + 0xf8 );
                              goto LAB_00105757;
                           }

                           goto LAB_001055d8;
                        }

                        pvVar26 = *(void**)( lVar29 + 0x58 );
                        LAB_00105711:lVar25 = lVar29 + 0x50;
                        iVar7 = memcmp(pvVar26, pvVar30, sVar22);
                        if (iVar7 == 0) goto LAB_001055d8;
                        sVar22 = *(size_t*)( lVar29 + 0xb0 );
                        if (sVar24 == sVar22) {
                           pvVar26 = *(void**)( lVar29 + 0xa8 );
                           goto LAB_00105797;
                        }

                        sVar22 = *(size_t*)( lVar29 + 0x100 );
                        if (sVar24 == sVar22) goto LAB_00105750;
                     }
 else {
                        sVar22 = *(size_t*)( lVar29 + 0x60 );
                        if (sVar24 == sVar22) {
                           lVar25 = lVar29 + 0x50;
                           if (sVar24 != 0) {
                              pvVar30 = *(void**)( p_Var13 + 0x28 );
                              pvVar26 = *(void**)( lVar29 + 0x58 );
                              goto LAB_00105711;
                           }

                           goto LAB_001055d8;
                        }

                        sVar22 = *(size_t*)( lVar29 + 0xb0 );
                        if (sVar24 != sVar22) goto LAB_0010558d;
                        lVar25 = lVar29 + 0xa0;
                        if (sVar24 == 0) goto LAB_001055d8;
                        pvVar30 = *(void**)( p_Var13 + 0x28 );
                        LAB_00105790:pvVar26 = *(void**)( lVar29 + 0xa8 );
                        LAB_00105797:lVar25 = lVar29 + 0xa0;
                        iVar7 = memcmp(pvVar26, pvVar30, sVar22);
                        if (iVar7 == 0) goto LAB_001055d8;
                        sVar22 = *(size_t*)( lVar29 + 0x100 );
                        if (sVar22 == sVar24) {
                           pvVar26 = *(void**)( lVar29 + 0xf8 );
                           LAB_00105757:lVar25 = lVar29 + 0xf0;
                           iVar7 = memcmp(pvVar26, pvVar30, sVar22);
                           if (iVar7 == 0) goto LAB_001055d8;
                        }

                     }

                     LAB_0010559d:lVar29 = lVar29 + 0x140;
                  }
 while ( lVar15 != lVar29 );
                  lVar15 = ( lVar11 - lVar29 >> 4 ) * -0x3333333333333333;
                  lVar25 = lVar29;
               }

               if (lVar15 == 2) {
                  sVar24 = *(size_t*)( p_Var13 + 0x30 );
                  LAB_00105bb4:if (( *(size_t*)( lVar25 + 0x10 ) != sVar24 ) || ( ( sVar24 != 0 && ( iVar7 = memcmp(*(void**)( lVar25 + 8 ), *(void**)( p_Var13 + 0x28 ), sVar24) ),iVar7 != 0 ) )) {
                     lVar25 = lVar25 + 0x50;
                     LAB_00105b76:if (( *(size_t*)( lVar25 + 0x10 ) != sVar24 ) || ( ( sVar24 != 0 && ( iVar7 = memcmp(*(void**)( lVar25 + 8 ), *(void**)( p_Var13 + 0x28 ), sVar24) ),iVar7 != 0 ) )) goto LAB_001055e3;
                  }

                  LAB_001055d8:if (lVar11 != lVar25) goto LAB_001054f1;
               }
 else {
                  if (lVar15 == 3) {
                     sVar24 = *(size_t*)( p_Var13 + 0x30 );
                     if (( *(size_t*)( lVar25 + 0x10 ) != sVar24 ) || ( ( sVar24 != 0 && ( iVar7 = memcmp(*(void**)( lVar25 + 8 ), *(void**)( p_Var13 + 0x28 ), sVar24) ),iVar7 != 0 ) )) {
                        lVar25 = lVar25 + 0x50;
                        goto LAB_00105bb4;
                     }

                     goto LAB_001055d8;
                  }

                  if (lVar15 == 1) {
                     sVar24 = *(size_t*)( p_Var13 + 0x30 );
                     goto LAB_00105b76;
                  }

               }

               LAB_001055e3:local_98 = glslang::GetThreadPoolAllocator();
               local_80[0] = local_80[0] & 0xffffffffffffff00;
               local_90 = local_80;
               local_88 = 0;
               pTVar16 = (TSymbol*)( **(code**)**(undefined8**)( p_Var13 + 0x48 ) )();
               insert(this_00, pTVar16, false, (basic_string*)&local_98);
            }
 else {
               if (*(code**)( *plVar14 + 0xc0 ) == TAnonMember::getAnonId) {
                  iVar7 = *(int*)( (long)plVar14 + 0x34 );
               }
 else {
                  iVar7 = ( **(code**)( *plVar14 + 0xc0 ) )(plVar14);
               }

               lVar11 = (long)iVar7;
               lVar25 = lVar11 + 0x3f;
               if (-1 < lVar11) {
                  lVar25 = lVar11;
               }

               puVar21 = (ulong*)( (long)pvVar18 + ( lVar25 >> 6 ) * 8 );
               lVar25 = ( ulong )(iVar7 + ( ( uint )(iVar7 >> 0x1f) >> 0x1a ) & 0x3f) - ( ( ulong )(lVar11 >> 0x3f) >> 0x3a );
               bVar20 = (byte)lVar25;
               if (lVar25 < 0) {
                  puVar21 = puVar21 + -1;
                  bVar20 = bVar20 + 0x40;
               }

               if (( 1L << ( bVar20 & 0x3f ) & *puVar21 ) == 0) {
                  if (*(code**)( *plVar14 + 0xb0 ) == TAnonMember::getAnonContainer) {
                     pTVar19 = (TVariable*)plVar14[5];
                  }
 else {
                     pTVar19 = (TVariable*)( **(code**)( *plVar14 + 0xb0 ) )(plVar14);
                  }

                  if ((code*)**(undefined8**)pTVar19 == TVariable::clone) {
                     uVar8 = glslang::GetThreadPoolAllocator();
                     this_01 = (TVariable*)glslang::TPoolAllocator::allocate(uVar8);
                     TVariable::TVariable(this_01, pTVar19);
                  }
 else {
                     this_01 = (TVariable*)( *(code*)**(undefined8**)pTVar19 )(pTVar19);
                  }

                  pcVar4 = *(code**)( *(long*)this_01 + 0x20 );
                  uVar8 = glslang::GetThreadPoolAllocator();
                  puVar12 = (undefined8*)glslang::TPoolAllocator::allocate(uVar8);
                  uVar9 = glslang::GetThreadPoolAllocator();
                  *puVar12 = uVar9;
                  puVar12[1] = puVar12 + 3;
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(puVar12, &_LC36, &_LC36);
                  if (pcVar4 == TSymbol::changeName) {
                     *(undefined8**)( (TSymbol*)this_01 + 8 ) = puVar12;
                  }
 else {
                     ( *pcVar4 )(this_01, puVar12);
                  }

                  local_98 = glslang::GetThreadPoolAllocator();
                  local_90 = local_80;
                  local_88 = 0;
                  local_80[0] = local_80[0] & 0xffffffffffffff00;
                  insert(this_00, (TSymbol*)this_01, false, (basic_string*)&local_98);
                  if (*(code**)( *plVar14 + 0xc0 ) == TAnonMember::getAnonId) {
                     iVar7 = *(int*)( (long)plVar14 + 0x34 );
                  }
 else {
                     iVar7 = ( **(code**)( *plVar14 + 0xc0 ) )(plVar14);
                  }

                  lVar11 = (long)iVar7;
                  lVar25 = lVar11 + 0x3f;
                  if (-1 < lVar11) {
                     lVar25 = lVar11;
                  }

                  puVar21 = (ulong*)( (long)pvVar18 + ( lVar25 >> 6 ) * 8 );
                  lVar25 = ( ulong )(iVar7 + ( ( uint )(iVar7 >> 0x1f) >> 0x1a ) & 0x3f) - ( ( ulong )(lVar11 >> 0x3f) >> 0x3a );
                  bVar20 = (byte)lVar25;
                  if (lVar25 < 0) {
                     puVar21 = puVar21 + -1;
                     bVar20 = bVar20 + 0x40;
                  }

                  *puVar21 = *puVar21 | 1L << ( bVar20 & 0x3f );
               }

            }

            LAB_001054f1:p_Var13 = (_Rb_tree_node_base*)std::_Rb_tree_increment(p_Var13);
         }
 while ( p_Var13 != (_Rb_tree_node_base*)( this + 0x10 ) );
         lVar25 = *(long*)( this + 0x48 );
         lVar11 = *(long*)( this + 0x50 );
         if (lVar11 != lVar25) goto LAB_00105870;
      }

      uVar8 = (long)pvVar27 - (long)pvVar18;
      if (pvVar18 == (void*)0x0) goto LAB_001059f6;
   }
 else {
      uVar8 = ( (long)*(int*)( this + 0x60 ) + 0x3fU >> 6 ) * 8;
      pvVar18 = operator_new(uVar8);
      pvVar27 = (void*)( (long)pvVar18 + uVar8 );
      pvVar18 = memset(pvVar18, 0, uVar8);
      p_Var13 = *(_Rb_tree_node_base**)( this + 0x20 );
      if (p_Var13 != (_Rb_tree_node_base*)( this + 0x10 )) goto LAB_0010532b;
      lVar25 = *(long*)( this + 0x48 );
      lVar11 = *(long*)( this + 0x50 );
      if (lVar11 != lVar25) goto LAB_00105870;
   }

   operator_delete((void*)( (long)pvVar27 - uVar8 ), uVar8);
   LAB_001059f6:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this_00;
}
/* glslang::TSymbolTable::copyTable(glslang::TSymbolTable const&) */void glslang::TSymbolTable::copyTable(TSymbolTable *this, TSymbolTable *param_1) {
   undefined8 *puVar1;
   long lVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   undefined8 local_38;
   long local_30;
   lVar2 = *(long*)param_1;
   uVar3 = ( ulong ) * (uint*)( param_1 + 0x24 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 0x18 ) = *(undefined8*)( param_1 + 0x18 );
   *(undefined2*)( this + 0x20 ) = *(undefined2*)( param_1 + 0x20 );
   if (uVar3 < ( ulong )(*(long*)( param_1 + 8 ) - lVar2 >> 3)) {
      do {
         local_38 = TSymbolTableLevel::clone(*(TSymbolTableLevel**)( lVar2 + uVar3 * 8 ));
         puVar1 = *(undefined8**)( this + 8 );
         if (puVar1 == *(undefined8**)( this + 0x10 )) {
            std::vector<glslang::TSymbolTableLevel*,std::allocator<glslang::TSymbolTableLevel*>>::_M_realloc_insert<glslang::TSymbolTableLevel*>((vector<glslang::TSymbolTableLevel*,std::allocator<glslang::TSymbolTableLevel*>>*)this, puVar1, &local_38);
         }
 else {
            *puVar1 = local_38;
            *(undefined8**)( this + 8 ) = puVar1 + 1;
         }

         lVar2 = *(long*)param_1;
         uVar3 = ( ulong )((int)uVar3 + 1);
      }
 while ( uVar3 < ( ulong )(*(long*)( param_1 + 8 ) - lVar2 >> 3) );
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* glslang::TSmallArrayVector::~TSmallArrayVector() */void glslang::TSmallArrayVector::~TSmallArrayVector(TSmallArrayVector *this) {
   return;
}
/* glslang::TType::~TType() */void glslang::TType::~TType(TType *this) {
   return;
}
/* glslang::TType::hideMember() */void glslang::TType::hideMember(TType *this) {
   *(ushort*)( this + 8 ) = *(ushort*)( this + 8 ) & 0xf000 | 0x100;
   return;
}
/* glslang::TType::hiddenMember() const */bool glslang::TType::hiddenMember(TType *this) {
   return this[8] == (TType)0x0;
}
/* glslang::TType::getTypeName[abi:cxx11]() const */undefined8 glslang::TType::getTypeName_abi_cxx11_(TType *this) {
   return *(undefined8*)( this + 0x78 );
}
/* glslang::TType::getFieldName[abi:cxx11]() const */undefined8 glslang::TType::getFieldName_abi_cxx11_(TType *this) {
   return *(undefined8*)( this + 0x70 );
}
/* glslang::TType::getBasicType() const */TType glslang::TType::getBasicType(TType *this) {
   return this[8];
}
/* glslang::TType::getSampler() const */TType * __thiscall glslang::TType::getSampler(TType *this){
   return this + 0x80;
}
/* glslang::TType::getSampler() */TType * __thiscall glslang::TType::getSampler(TType *this){
   return this + 0x80;
}
/* glslang::TType::getQualifier() */TType * __thiscall glslang::TType::getQualifier(TType *this){
   return this + 0x10;
}
/* glslang::TType::getQualifier() const */TType * __thiscall glslang::TType::getQualifier(TType *this){
   return this + 0x10;
}
/* glslang::TType::getVectorSize() const */byte glslang::TType::getVectorSize(TType *this) {
   return (byte)this[9] & 0xf;
}
/* glslang::TType::getMatrixCols() const */byte glslang::TType::getMatrixCols(TType *this) {
   return (byte)this[9] >> 4;
}
/* glslang::TType::getMatrixRows() const */byte glslang::TType::getMatrixRows(TType *this) {
   return (byte)this[10] & 0xf;
}
/* glslang::TType::getOuterArraySize() const */undefined4 glslang::TType::getOuterArraySize(TType *this) {
   return **(undefined4**)( *(long*)( *(long*)( this + 0x60 ) + 8 ) + 8 );
}
/* glslang::TType::getOuterArrayNode() const */undefined8 glslang::TType::getOuterArrayNode(TType *this) {
   return *(undefined8*)( *(long*)( *(long*)( *(long*)( this + 0x60 ) + 8 ) + 8 ) + 8 );
}
/* glslang::TType::getCumulativeArraySize() const */int glslang::TType::getCumulativeArraySize(TType *this) {
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
/* glslang::TType::getImplicitArraySize() const */int glslang::TType::getImplicitArraySize(TType *this) {
   int iVar1;
   iVar1 = *(int*)( *(long*)( this + 0x60 ) + 0x10 );
   if (iVar1 < 1) {
      iVar1 = 1;
   }

   return iVar1;
}
/* glslang::TType::getArraySizes() const */undefined8 glslang::TType::getArraySizes(TType *this) {
   return *(undefined8*)( this + 0x60 );
}
/* glslang::TType::getArraySizes() */undefined8 glslang::TType::getArraySizes(TType *this) {
   return *(undefined8*)( this + 0x60 );
}
/* glslang::TType::getReferentType() const */undefined8 glslang::TType::getReferentType(TType *this) {
   return *(undefined8*)( this + 0x68 );
}
/* glslang::TType::getTypeParameters() const */undefined8 glslang::TType::getTypeParameters(TType *this) {
   return *(undefined8*)( this + 0x88 );
}
/* glslang::TType::getTypeParameters() */undefined8 glslang::TType::getTypeParameters(TType *this) {
   return *(undefined8*)( this + 0x88 );
}
/* glslang::TType::isVector() const */byte glslang::TType::isVector(TType *this) {
   if (1 < ( (byte)this[9] & 0xf )) {
      return 1;
   }

   return (byte)this[10] >> 4 & 1;
}
/* glslang::TType::isMatrix() const */bool glslang::TType::isMatrix(TType *this) {
   return 0xf < (byte)this[9];
}
/* glslang::TType::isArray() const */bool glslang::TType::isArray(TType *this) {
   return *(long*)( this + 0x60 ) != 0;
}
/* glslang::TType::isArrayVariablyIndexed() const */undefined1 glslang::TType::isArrayVariablyIndexed(TType *this) {
   return *(undefined1*)( *(long*)( this + 0x60 ) + 0x15 );
}
/* glslang::TType::setArrayVariablyIndexed() */void glslang::TType::setArrayVariablyIndexed(TType *this) {
   *(undefined1*)( *(long*)( this + 0x60 ) + 0x15 ) = 1;
   return;
}
/* glslang::TType::updateImplicitArraySize(int) */void glslang::TType::updateImplicitArraySize(TType *this, int param_1) {
   int iVar1;
   iVar1 = *(int*)( *(long*)( this + 0x60 ) + 0x10 );
   if (iVar1 < param_1) {
      iVar1 = param_1;
   }

   *(int*)( *(long*)( this + 0x60 ) + 0x10 ) = iVar1;
   return;
}
/* glslang::TType::setImplicitlySized(bool) */void glslang::TType::setImplicitlySized(TType *this, bool param_1) {
   *(bool*)( *(long*)( this + 0x60 ) + 0x14 ) = param_1;
   return;
}
/* glslang::TType::isStruct() const */undefined4 glslang::TType::isStruct(TType *this) {
   return CONCAT31(( int3 )((byte)this[8] - 0xf >> 8), ( byte )((byte)this[8] - 0xf) < 2);
}
/* glslang::TType::isFloatingDomain() const */undefined4 glslang::TType::isFloatingDomain(TType *this) {
   return CONCAT31(( int3 )((byte)this[8] - 1 >> 8), ( byte )((byte)this[8] - 1) < 3);
}
/* glslang::TType::isIntegerDomain() const */bool glslang::TType::isIntegerDomain(TType *this) {
   TType TVar1;
   TVar1 = this[8];
   if ((byte)TVar1 < 0xc) {
      return 3 < (byte)TVar1;
   }

   return TVar1 == (TType)0xd;
}
/* glslang::TType::isOpaque() const */undefined8 glslang::TType::isOpaque(TType *this) {
   undefined8 uVar1;
   uVar1 = 0;
   if ((byte)this[8] < 0x15) {
      uVar1 = CONCAT71(0x1a60, ( 0x1a6000UL >> ( (ulong)(byte)this[8] & 0x3f ) & 1 ) != 0);
   }

   return uVar1;
}
/* glslang::TType::isParameterized() const */bool glslang::TType::isParameterized(TType *this) {
   return *(long*)( this + 0x88 ) != 0;
}
/* glslang::TConstUnionArray::~TConstUnionArray() */void glslang::TConstUnionArray::~TConstUnionArray(TConstUnionArray *this) {
   return;
}
/* glslang::TIntermSymbol::getId() const */undefined8 glslang::TIntermSymbol::getId(TIntermSymbol *this) {
   return *(undefined8*)( this + 0xb8 );
}
/* glslang::TSymbol::getName[abi:cxx11]() const */undefined8 glslang::TSymbol::getName_abi_cxx11_(TSymbol *this) {
   return *(undefined8*)( this + 8 );
}
/* glslang::TSymbol::changeName(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const*) */void glslang::TSymbol::changeName(TSymbol *this, basic_string *param_1) {
   *(basic_string**)( this + 8 ) = param_1;
   return;
}
/* glslang::TSymbol::getAsFunction() */undefined8 glslang::TSymbol::getAsFunction(void) {
   return 0;
}
/* glslang::TSymbol::getAsFunction() const */undefined8 glslang::TSymbol::getAsFunction(void) {
   return 0;
}
/* glslang::TSymbol::getAsVariable() */undefined8 glslang::TSymbol::getAsVariable(void) {
   return 0;
}
/* glslang::TSymbol::getAsVariable() const */undefined8 glslang::TSymbol::getAsVariable(void) {
   return 0;
}
/* glslang::TSymbol::getAsAnonMember() const */undefined8 glslang::TSymbol::getAsAnonMember(void) {
   return 0;
}
/* glslang::TSymbol::setUniqueId(long long) */void glslang::TSymbol::setUniqueId(TSymbol *this, longlong param_1) {
   *(longlong*)( this + 0x10 ) = param_1;
   return;
}
/* glslang::TSymbol::getUniqueId() const */undefined8 glslang::TSymbol::getUniqueId(TSymbol *this) {
   return *(undefined8*)( this + 0x10 );
}
/* glslang::TSymbol::getNumExtensions() const */long glslang::TSymbol::getNumExtensions(TSymbol *this) {
   long lVar1;
   long lVar2;
   lVar1 = *(long*)( this + 0x18 );
   lVar2 = 0;
   if (lVar1 != 0) {
      lVar2 = *(long*)( lVar1 + 0x10 ) - *(long*)( lVar1 + 8 ) >> 3;
   }

   return lVar2;
}
/* glslang::TSymbol::getExtensions() const */undefined8 glslang::TSymbol::getExtensions(TSymbol *this) {
   return *(undefined8*)( *(long*)( this + 0x18 ) + 8 );
}
/* glslang::TSymbol::isReadOnly() const */byte glslang::TSymbol::isReadOnly(TSymbol *this) {
   return (byte)this[0x20] ^ 1;
}
/* glslang::TSymbol::makeReadOnly() */void glslang::TSymbol::makeReadOnly(TSymbol *this) {
   this[0x20] = (TSymbol)0x0;
   return;
}
/* glslang::TVariable::~TVariable() */void glslang::TVariable::~TVariable(TVariable *this) {
   return;
}
/* glslang::TVariable::getAsVariable() */TVariable * __thiscall glslang::TVariable::getAsVariable(TVariable *this){
   return this;
}
/* glslang::TVariable::getAsVariable() const */TVariable * __thiscall glslang::TVariable::getAsVariable(TVariable *this){
   return this;
}
/* glslang::TVariable::getType() const */TVariable * __thiscall glslang::TVariable::getType(TVariable *this){
   return this + 0x28;
}
/* glslang::TVariable::getWritableType() */TVariable * __thiscall glslang::TVariable::getWritableType(TVariable *this){
   return this + 0x28;
}
/* glslang::TVariable::isUserType() const */TVariable glslang::TVariable::isUserType(TVariable *this) {
   return this[0xc0];
}
/* glslang::TVariable::getConstArray() const */TVariable * __thiscall glslang::TVariable::getConstArray(TVariable *this){
   return this + 200;
}
/* glslang::TVariable::getWritableConstArray() */TVariable * __thiscall glslang::TVariable::getWritableConstArray(TVariable *this){
   return this + 200;
}
/* glslang::TVariable::setConstArray(glslang::TConstUnionArray const&) */void glslang::TVariable::setConstArray(TVariable *this, TConstUnionArray *param_1) {
   *(undefined8*)( this + 0xd0 ) = *(undefined8*)( param_1 + 8 );
   return;
}
/* glslang::TVariable::setConstSubtree(glslang::TIntermTyped*) */void glslang::TVariable::setConstSubtree(TVariable *this, TIntermTyped *param_1) {
   *(TIntermTyped**)( this + 0xd8 ) = param_1;
   return;
}
/* glslang::TVariable::getConstSubtree() const */undefined8 glslang::TVariable::getConstSubtree(TVariable *this) {
   return *(undefined8*)( this + 0xd8 );
}
/* glslang::TVariable::setAnonId(int) */void glslang::TVariable::setAnonId(TVariable *this, int param_1) {
   *(int*)( this + 0xe8 ) = param_1;
   return;
}
/* glslang::TVariable::getAnonId() const */undefined4 glslang::TVariable::getAnonId(TVariable *this) {
   return *(undefined4*)( this + 0xe8 );
}
/* glslang::TVariable::hasMemberExtensions() const */bool glslang::TVariable::hasMemberExtensions(TVariable *this) {
   return *(long*)( this + 0xe0 ) != 0;
}
/* glslang::TVariable::getNumMemberExtensions(int) const */long glslang::TVariable::getNumMemberExtensions(TVariable *this, int param_1) {
   long lVar1;
   lVar1 = 0;
   if (*(long*)( this + 0xe0 ) != 0) {
      lVar1 = (long)param_1 * 0x20 + *(long*)( *(long*)( this + 0xe0 ) + 8 );
      lVar1 = *(long*)( lVar1 + 0x10 ) - *(long*)( lVar1 + 8 ) >> 3;
   }

   return lVar1;
}
/* glslang::TVariable::getMemberExtensions(int) const */undefined8 glslang::TVariable::getMemberExtensions(TVariable *this, int param_1) {
   return *(undefined8*)( (long)param_1 * 0x20 + *(long*)( *(long*)( this + 0xe0 ) + 8 ) + 8 );
}
/* glslang::TFunction::getAsFunction() */TFunction * __thiscall glslang::TFunction::getAsFunction(TFunction *this){
   return this;
}
/* glslang::TFunction::getAsFunction() const */TFunction * __thiscall glslang::TFunction::getAsFunction(TFunction *this){
   return this;
}
/* glslang::TFunction::getMangledName[abi:cxx11]() const */TFunction * __thiscall glslang::TFunction::getMangledName_abi_cxx11_(TFunction *this){
   return this + 0xe8;
}
/* glslang::TFunction::getType() const */TFunction * __thiscall glslang::TFunction::getType(TFunction *this){
   return this + 0x48;
}
/* glslang::TFunction::getDeclaredBuiltInType() const */undefined4 glslang::TFunction::getDeclaredBuiltInType(TFunction *this) {
   return *(undefined4*)( this + 0xe0 );
}
/* glslang::TFunction::getWritableType() */TFunction * __thiscall glslang::TFunction::getWritableType(TFunction *this){
   return this + 0x48;
}
/* glslang::TFunction::relateToOperator(glslang::TOperator) */void glslang::TFunction::relateToOperator(TFunction *this, undefined4 param_2) {
   *(undefined4*)( this + 0x110 ) = param_2;
   return;
}
/* glslang::TFunction::getBuiltInOp() const */undefined4 glslang::TFunction::getBuiltInOp(TFunction *this) {
   return *(undefined4*)( this + 0x110 );
}
/* glslang::TFunction::setDefined() */void glslang::TFunction::setDefined(TFunction *this) {
   this[0x114] = (TFunction)0x1;
   return;
}
/* glslang::TFunction::isDefined() const */TFunction glslang::TFunction::isDefined(TFunction *this) {
   return this[0x114];
}
/* glslang::TFunction::setPrototyped() */void glslang::TFunction::setPrototyped(TFunction *this) {
   this[0x115] = (TFunction)0x1;
   return;
}
/* glslang::TFunction::isPrototyped() const */TFunction glslang::TFunction::isPrototyped(TFunction *this) {
   return this[0x115];
}
/* glslang::TFunction::setImplicitThis() */void glslang::TFunction::setImplicitThis(TFunction *this) {
   this[0x116] = (TFunction)0x1;
   return;
}
/* glslang::TFunction::hasImplicitThis() const */TFunction glslang::TFunction::hasImplicitThis(TFunction *this) {
   return this[0x116];
}
/* glslang::TFunction::setIllegalImplicitThis() */void glslang::TFunction::setIllegalImplicitThis(TFunction *this) {
   this[0x117] = (TFunction)0x1;
   return;
}
/* glslang::TFunction::hasIllegalImplicitThis() const */TFunction glslang::TFunction::hasIllegalImplicitThis(TFunction *this) {
   return this[0x117];
}
/* glslang::TFunction::getParamCount() const */int glslang::TFunction::getParamCount(TFunction *this) {
   return (int)( *(long*)( this + 0x38 ) - *(long*)( this + 0x30 ) >> 3 ) * -0x55555555;
}
/* glslang::TFunction::getDefaultParamCount() const */undefined4 glslang::TFunction::getDefaultParamCount(TFunction *this) {
   return *(undefined4*)( this + 0x118 );
}
/* glslang::TFunction::operator[](int) */long glslang::TFunction::operator [](TFunction *this, int param_1) {
   return *(long*)( this + 0x30 ) + (long)param_1 * 0x18;
}
/* glslang::TFunction::operator[](int) const */long glslang::TFunction::operator [](TFunction *this, int param_1) {
   return *(long*)( this + 0x30 ) + (long)param_1 * 0x18;
}
/* glslang::TFunction::getSpirvInstruction() const */TFunction * __thiscall glslang::TFunction::getSpirvInstruction(TFunction *this){
   return this + 0x120;
}
/* glslang::TAnonMember::~TAnonMember() */void glslang::TAnonMember::~TAnonMember(TAnonMember *this) {
   return;
}
/* glslang::TAnonMember::getAsAnonMember() const */TAnonMember * __thiscall glslang::TAnonMember::getAsAnonMember(TAnonMember *this){
   return this;
}
/* glslang::TAnonMember::getAnonContainer() const */undefined8 glslang::TAnonMember::getAnonContainer(TAnonMember *this) {
   return *(undefined8*)( this + 0x28 );
}
/* glslang::TAnonMember::getMemberNumber() const */undefined4 glslang::TAnonMember::getMemberNumber(TAnonMember *this) {
   return *(undefined4*)( this + 0x30 );
}
/* glslang::TAnonMember::getAnonId() const */undefined4 glslang::TAnonMember::getAnonId(TAnonMember *this) {
   return *(undefined4*)( this + 0x34 );
}
/* std::_Rb_tree<glslang::TVector<glslang::TTypeLoc>*,
   std::pair<glslang::TVector<glslang::TTypeLoc>* const, glslang::TVector<glslang::TTypeLoc>*>,
   std::_Select1st<std::pair<glslang::TVector<glslang::TTypeLoc>* const,
   glslang::TVector<glslang::TTypeLoc>*> >, std::less<glslang::TVector<glslang::TTypeLoc>*>,
   glslang::pool_allocator<std::pair<glslang::TVector<glslang::TTypeLoc>* const,
   glslang::TVector<glslang::TTypeLoc>*> >
   >::_M_get_insert_unique_pos(glslang::TVector<glslang::TTypeLoc>* const&) [clone .isra.0] */undefined1[16];std::_Rb_tree<glslang::TVector<glslang::TTypeLoc>*,std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>,std::_Select1st<std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>>,std::less<glslang::TVector<glslang::TTypeLoc>*>,glslang::pool_allocator<std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>>>::_M_get_insert_unique_pos (_Rb_tree<glslang::TVector<glslang::TTypeLoc>*,std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>,std::_Select1st<std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>>,std::less<glslang::TVector<glslang::TTypeLoc>*>,glslang::pool_allocator<std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>>>
           *this,TVector **param_1) {
   undefined1 auVar1[16];
   _Rb_tree_node_base *p_Var2;
   _Rb_tree_node_base *p_Var3;
   _Rb_tree_node_base *p_Var4;
   TVector **ppTVar5;
   undefined1 auVar6[16];
   p_Var2 = *(_Rb_tree_node_base**)( this + 0x18 );
   if (*(_Rb_tree_node_base**)( this + 0x18 ) == (_Rb_tree_node_base*)0x0) {
      p_Var2 = (_Rb_tree_node_base*)( this + 0x10 );
   }
 else {
      do {
         p_Var4 = p_Var2;
         ppTVar5 = *(TVector***)( p_Var4 + 0x20 );
         p_Var2 = *(_Rb_tree_node_base**)( p_Var4 + 0x18 );
         if (param_1 < ppTVar5) {
            p_Var2 = *(_Rb_tree_node_base**)( p_Var4 + 0x10 );
         }

      }
 while ( p_Var2 != (_Rb_tree_node_base*)0x0 );
      p_Var2 = p_Var4;
      if (param_1 >= ppTVar5) goto LAB_0010646a;
   }

   if (*(_Rb_tree_node_base**)( this + 0x20 ) == p_Var2) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = p_Var2;
      return auVar1 << 0x40;
   }

   p_Var4 = (_Rb_tree_node_base*)std::_Rb_tree_decrement(p_Var2);
   ppTVar5 = *(TVector***)( p_Var4 + 0x20 );
   LAB_0010646a:p_Var3 = (_Rb_tree_node_base*)0x0;
   if (ppTVar5 < param_1) {
      p_Var4 = p_Var3;
      p_Var3 = p_Var2;
   }

   auVar6._8_8_ = p_Var3;
   auVar6._0_8_ = p_Var4;
   return auVar6;
}
/* std::vector<glslang::TSpirvTypeParameter, glslang::pool_allocator<glslang::TSpirvTypeParameter>
   >::TEMPNAMEPLACEHOLDERVALUE(std::vector<glslang::TSpirvTypeParameter,
   glslang::pool_allocator<glslang::TSpirvTypeParameter> > const&) [clone .isra.0] */void std::vector<glslang::TSpirvTypeParameter,glslang::pool_allocator<glslang::TSpirvTypeParameter>>::operator =(vector<glslang::TSpirvTypeParameter,glslang::pool_allocator<glslang::TSpirvTypeParameter>> *this, vector *param_1) {
   undefined8 uVar1;
   long lVar2;
   long lVar3;
   size_t __n;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *__dest;
   ulong __n_00;
   long lVar6;
   undefined8 *puVar7;
   if (param_1 == (vector*)this) {
      return;
   }

   puVar7 = *(undefined8**)( param_1 + 0x10 );
   puVar5 = *(undefined8**)( param_1 + 8 );
   __dest = *(undefined8**)( this + 8 );
   __n_00 = (long)puVar7 - (long)puVar5;
   if (( ulong )(*(long*)( this + 0x18 ) - (long)__dest) < __n_00) {
      lVar2 = glslang::TPoolAllocator::allocate(*(ulong*)this);
      uVar4 = 0;
      if (puVar7 != puVar5) {
         do {
            uVar1 = ( (undefined8*)( (long)puVar5 + uVar4 ) )[1];
            *(undefined8*)( lVar2 + uVar4 ) = *(undefined8*)( (long)puVar5 + uVar4 );
            ( (undefined8*)( lVar2 + uVar4 ) )[1] = uVar1;
            uVar4 = uVar4 + 0x10;
         }
 while ( uVar4 != __n_00 );
      }

      *(long*)( this + 8 ) = lVar2;
      *(ulong*)( this + 0x18 ) = __n_00 + lVar2;
      *(ulong*)( this + 0x10 ) = __n_00 + lVar2;
      return;
   }

   lVar2 = *(long*)( this + 0x10 );
   __n = lVar2 - (long)__dest;
   if (__n < __n_00) {
      if ((long)__n < 0x11) {
         if (__n == 0x10) {
            uVar1 = puVar5[1];
            *__dest = *puVar5;
            __dest[1] = uVar1;
         }

      }
 else {
         memmove(__dest, puVar5, __n);
         lVar2 = *(long*)( this + 0x10 );
         __dest = *(undefined8**)( this + 8 );
         puVar7 = *(undefined8**)( param_1 + 0x10 );
         puVar5 = *(undefined8**)( param_1 + 8 );
         __n = lVar2 - (long)__dest;
      }

      puVar5 = (undefined8*)( (long)puVar5 + __n );
      lVar6 = __n_00 + (long)__dest;
      if (puVar5 != puVar7) {
         lVar3 = 0;
         do {
            uVar1 = ( (undefined8*)( (long)puVar5 + lVar3 ) )[1];
            *(undefined8*)( lVar2 + lVar3 ) = *(undefined8*)( (long)puVar5 + lVar3 );
            ( (undefined8*)( lVar2 + lVar3 ) )[1] = uVar1;
            lVar3 = lVar3 + 0x10;
         }
 while ( lVar3 != (long)puVar7 - (long)puVar5 );
         *(long*)( this + 0x10 ) = lVar6;
         return;
      }

   }
 else if ((long)__n_00 < 0x11) {
      if (__n_00 == 0x10) {
         uVar1 = puVar5[1];
         *__dest = *puVar5;
         __dest[1] = uVar1;
      }

      lVar6 = __n_00 + (long)__dest;
   }
 else {
      memmove(__dest, puVar5, __n_00);
      lVar6 = __n_00 + *(long*)( this + 8 );
   }

   *(long*)( this + 0x10 ) = lVar6;
   return;
}
/* std::vector<glslang::TArraySize, glslang::pool_allocator<glslang::TArraySize>
   >::TEMPNAMEPLACEHOLDERVALUE(std::vector<glslang::TArraySize,
   glslang::pool_allocator<glslang::TArraySize> > const&) [clone .isra.0] */void std::vector<glslang::TArraySize,glslang::pool_allocator<glslang::TArraySize>>::operator =(vector<glslang::TArraySize,glslang::pool_allocator<glslang::TArraySize>> *this, vector *param_1) {
   undefined8 uVar1;
   long lVar2;
   long lVar3;
   size_t __n;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *__dest;
   ulong __n_00;
   long lVar6;
   undefined8 *puVar7;
   if (param_1 == (vector*)this) {
      return;
   }

   puVar7 = *(undefined8**)( param_1 + 0x10 );
   puVar5 = *(undefined8**)( param_1 + 8 );
   __dest = *(undefined8**)( this + 8 );
   __n_00 = (long)puVar7 - (long)puVar5;
   if (( ulong )(*(long*)( this + 0x18 ) - (long)__dest) < __n_00) {
      lVar2 = glslang::TPoolAllocator::allocate(*(ulong*)this);
      uVar4 = 0;
      if (puVar7 != puVar5) {
         do {
            uVar1 = ( (undefined8*)( (long)puVar5 + uVar4 ) )[1];
            *(undefined8*)( lVar2 + uVar4 ) = *(undefined8*)( (long)puVar5 + uVar4 );
            ( (undefined8*)( lVar2 + uVar4 ) )[1] = uVar1;
            uVar4 = uVar4 + 0x10;
         }
 while ( uVar4 != __n_00 );
      }

      *(long*)( this + 8 ) = lVar2;
      *(ulong*)( this + 0x18 ) = __n_00 + lVar2;
      *(ulong*)( this + 0x10 ) = __n_00 + lVar2;
      return;
   }

   lVar2 = *(long*)( this + 0x10 );
   __n = lVar2 - (long)__dest;
   if (__n < __n_00) {
      if ((long)__n < 0x11) {
         if (__n == 0x10) {
            uVar1 = puVar5[1];
            *__dest = *puVar5;
            __dest[1] = uVar1;
         }

      }
 else {
         memmove(__dest, puVar5, __n);
         lVar2 = *(long*)( this + 0x10 );
         __dest = *(undefined8**)( this + 8 );
         puVar7 = *(undefined8**)( param_1 + 0x10 );
         puVar5 = *(undefined8**)( param_1 + 8 );
         __n = lVar2 - (long)__dest;
      }

      puVar5 = (undefined8*)( (long)puVar5 + __n );
      lVar6 = __n_00 + (long)__dest;
      if (puVar5 != puVar7) {
         lVar3 = 0;
         do {
            uVar1 = ( (undefined8*)( (long)puVar5 + lVar3 ) )[1];
            *(undefined8*)( lVar2 + lVar3 ) = *(undefined8*)( (long)puVar5 + lVar3 );
            ( (undefined8*)( lVar2 + lVar3 ) )[1] = uVar1;
            lVar3 = lVar3 + 0x10;
         }
 while ( lVar3 != (long)puVar7 - (long)puVar5 );
         *(long*)( this + 0x10 ) = lVar6;
         return;
      }

   }
 else if ((long)__n_00 < 0x11) {
      if (__n_00 == 0x10) {
         uVar1 = puVar5[1];
         *__dest = *puVar5;
         __dest[1] = uVar1;
      }

      lVar6 = __n_00 + (long)__dest;
   }
 else {
      memmove(__dest, puVar5, __n_00);
      lVar6 = __n_00 + *(long*)( this + 8 );
   }

   *(long*)( this + 0x10 ) = lVar6;
   return;
}
/* glslang::TType::isBuiltIn() const */bool glslang::TType::isBuiltIn(TType *this) {
   long lVar1;
   if (*(code**)( *(long*)this + 0x58 ) == getQualifier) {
      return 0x7f < *(ushort*)( this + 0x18 );
   }

   lVar1 = ( **(code**)( *(long*)this + 0x58 ) )();
   return 0x7f < *(ushort*)( lVar1 + 8 );
}
/* glslang::TType::isAttachmentEXT() const */bool glslang::TType::isAttachmentEXT(TType *this) {
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
/* glslang::TType::isImage() const */undefined4 glslang::TType::isImage(TType *this) {
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
/* glslang::TType::isSubpass() const */bool glslang::TType::isSubpass(TType *this) {
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
/* glslang::TType::isTexture() const */byte glslang::TType::isTexture(TType *this) {
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
/* glslang::TAnonMember::getType() const */undefined8 glslang::TAnonMember::getType(TAnonMember *this) {
   code *pcVar1;
   long *plVar2;
   pcVar1 = *(code**)( **(long**)( this + 0x28 ) + 0x60 );
   if (pcVar1 == TVariable::getType) {
      plVar2 = *(long**)( this + 0x28 ) + 5;
   }
 else {
      plVar2 = (long*)( *pcVar1 )();
   }

   return *(undefined8*)( ( ulong ) * (uint*)( this + 0x30 ) * 0x20 + *(long*)( plVar2[0xd] + 8 ) );
}
/* glslang::TAnonMember::getWritableType() */undefined8 glslang::TAnonMember::getWritableType(TAnonMember *this) {
   code *pcVar1;
   long *plVar2;
   pcVar1 = *(code**)( **(long**)( this + 0x28 ) + 0x60 );
   if (pcVar1 == TVariable::getType) {
      plVar2 = *(long**)( this + 0x28 ) + 5;
   }
 else {
      plVar2 = (long*)( *pcVar1 )();
   }

   return *(undefined8*)( ( ulong ) * (uint*)( this + 0x30 ) * 0x20 + *(long*)( plVar2[0xd] + 8 ) );
}
/* glslang::TSymbol::getMangledName[abi:cxx11]() const */undefined8 glslang::TSymbol::getMangledName_abi_cxx11_(TSymbol *this) {
   undefined8 uVar1;
   if (*(code**)( *(long*)this + 0x18 ) == getName_abi_cxx11_) {
      return *(undefined8*)( this + 8 );
   }

   /* WARNING: Could not recover jumptable at 0x001069f0. Too many branches */
   /* WARNING: Treating indirect jump as call */
   uVar1 = ( **(code**)( *(long*)this + 0x18 ) )();
   return uVar1;
}
/* glslang::TType::isSizedArray() const */undefined4 glslang::TType::isSizedArray(TType *this) {
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
/* glslang::TType::isUnsizedArray() const */undefined4 glslang::TType::isUnsizedArray(TType *this) {
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
/* glslang::TType::isImplicitlySizedArray() const */undefined1 glslang::TType::isImplicitlySizedArray(TType *this) {
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
/* glslang::TType::isUnusableName() const */bool glslang::TType::isUnusableName(TType *this) {
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
/* glslang::TType::isScalarOrVector() const */uint glslang::TType::isScalarOrVector(TType *this) {
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
      uVar2 = (uint)CONCAT71(0x105f, *(long*)( this + 0x60 ) != 0);
   }
 else {
      uVar2 = ( **(code**)( lVar3 + 0xe8 ) )(this);
   }

   return uVar2 ^ 1;
}
/* glslang::TType::isScalar() const */uint glslang::TType::isScalar(TType *this) {
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
            LAB_00106ca1:if (*(code**)( lVar4 + 0xe8 ) == isArray) {
               uVar3 = (uint)CONCAT71(0x105f, *(long*)( this + 0x60 ) != 0);
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
            goto LAB_00106ca1;
         }

      }

   }

   return 0;
}
/* glslang::TFunction::getFixedParamCount() const */int glslang::TFunction::getFixedParamCount(TFunction *this) {
   int iVar1;
   long lVar2;
   int iVar3;
   lVar2 = *(long*)this;
   if (*(code**)( lVar2 + 0x120 ) == getParamCount) {
      iVar3 = (int)( *(long*)( this + 0x38 ) - *(long*)( this + 0x30 ) >> 3 ) * -0x55555555;
   }
 else {
      iVar3 = ( **(code**)( lVar2 + 0x120 ) )();
      lVar2 = *(long*)this;
   }

   if (*(code**)( lVar2 + 0x128 ) == getDefaultParamCount) {
      return iVar3 - *(int*)( this + 0x118 );
   }

   iVar1 = ( **(code**)( lVar2 + 0x128 ) )();
   return iVar3 - iVar1;
}
/* glslang::TAnonMember::getExtensions() const */undefined8 glslang::TAnonMember::getExtensions(TAnonMember *this) {
   long *plVar1;
   undefined8 uVar2;
   plVar1 = *(long**)( this + 0x28 );
   if (*(code**)( *plVar1 + 0x108 ) == TVariable::getMemberExtensions) {
      return *(undefined8*)( (long)*(int*)( this + 0x30 ) * 0x20 + *(long*)( plVar1[0x1c] + 8 ) + 8 );
   }

   /* WARNING: Could not recover jumptable at 0x00106dd3. Too many branches */
   /* WARNING: Treating indirect jump as call */
   uVar2 = ( **(code**)( *plVar1 + 0x108 ) )(plVar1);
   return uVar2;
}
/* glslang::TFunction::removePrefix(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */void glslang::TFunction::removePrefix(TFunction *this, basic_string *param_1) {
   ulong uVar1;
   undefined1 *__dest;
   ulong uVar2;
   size_t __n;
   uVar2 = *(ulong*)( param_1 + 0x10 );
   if (uVar2 == 0xffffffffffffffff) {
      *(undefined8*)( this + 0xf8 ) = 0;
      **(undefined1**)( this + 0xf0 ) = 0;
      return;
   }

   if (uVar2 == 0) {
      return;
   }

   uVar1 = *(ulong*)( this + 0xf8 );
   if (uVar1 < uVar2) {
      uVar2 = uVar1;
   }

   __n = uVar1 - uVar2;
   if (( __n != 0 ) && ( uVar2 != 0 )) {
      __dest = *(undefined1**)( this + 0xf0 );
      if (__n == 1) {
         *__dest = __dest[uVar2];
         __n = *(long*)( this + 0xf8 ) - uVar2;
      }
 else {
         memmove(__dest, __dest + uVar2, __n);
         __n = *(long*)( this + 0xf8 ) - uVar2;
      }

   }

   *(size_t*)( this + 0xf8 ) = __n;
   *(undefined1*)( *(long*)( this + 0xf0 ) + __n ) = 0;
   return;
}
/* glslang::TAnonMember::getNumExtensions() const */long glslang::TAnonMember::getNumExtensions(TAnonMember *this) {
   long *plVar1;
   long lVar2;
   plVar1 = *(long**)( this + 0x28 );
   if (*(code**)( *plVar1 + 0x100 ) != TVariable::getNumMemberExtensions) {
      /* WARNING: Could not recover jumptable at 0x00106ef3. Too many branches */
      /* WARNING: Treating indirect jump as call */
      lVar2 = ( **(code**)( *plVar1 + 0x100 ) )(plVar1);
      return lVar2;
   }

   if (plVar1[0x1c] != 0) {
      lVar2 = (long)*(int*)( this + 0x30 ) * 0x20 + *(long*)( plVar1[0x1c] + 8 );
      return *(long*)( lVar2 + 0x10 ) - *(long*)( lVar2 + 8 ) >> 3;
   }

   return 0;
}
/* glslang::TType::isBindlessTexture() const */TType glslang::TType::isBindlessTexture(TType *this) {
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
/* glslang::TType::isBindlessImage() const */TType glslang::TType::isBindlessImage(TType *this) {
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
/* std::_Rb_tree<int, std::pair<int const, glslang::TVector<glslang::TIntermTyped const*> >,
   std::_Select1st<std::pair<int const, glslang::TVector<glslang::TIntermTyped const*> > >,
   std::less<int>, glslang::pool_allocator<std::pair<int const,
   glslang::TVector<glslang::TIntermTyped const*> > > >::_M_erase(std::_Rb_tree_node<std::pair<int
   const, glslang::TVector<glslang::TIntermTyped const*> > >*) [clone .isra.0] */void std::_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>>::_M_erase(_Rb_tree_node *param_1) {
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
/* std::_Rb_tree<int, std::pair<int const, glslang::TVector<glslang::TIntermConstantUnion const*> >,
   std::_Select1st<std::pair<int const, glslang::TVector<glslang::TIntermConstantUnion const*> > >,
   std::less<int>, glslang::pool_allocator<std::pair<int const,
   glslang::TVector<glslang::TIntermConstantUnion const*> > >
   >::_M_erase(std::_Rb_tree_node<std::pair<int const,
   glslang::TVector<glslang::TIntermConstantUnion const*> > >*) [clone .isra.0] */void std::_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>::_M_erase(_Rb_tree_node *param_1) {
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
   std::random_access_iterator_tag) [clone .isra.0] */long *std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>(long *param_1, long *param_2) {
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
               LAB_00107445:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
               lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsArray ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5 ));
               if (lVar5 != lVar4) {
                  return param_1;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( lVar5 + 0x128 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_00107445;
         }

         plVar1 = (long*)param_1[4];
         lVar5 = *plVar1;
         if (*(code**)( lVar5 + 0xe8 ) == glslang::TType::isArray) {
            if (plVar1[0xc] != 0) goto LAB_001073ca;
         }
 else {
            cVar2 = ( **(code**)( lVar5 + 0xe8 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_001073ca;
            lVar5 = *plVar1;
         }

         if (*(code**)( lVar5 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )((char)plVar1[1] - 0xfU) < 2) {
               LAB_001073ad:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
               lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsArray ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5 ));
               if (lVar5 != lVar4) {
                  LAB_001073ca:return param_1 + 4;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( lVar5 + 0x128 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_001073ad;
         }

         plVar1 = (long*)param_1[8];
         lVar5 = *plVar1;
         if (*(code**)( lVar5 + 0xe8 ) == glslang::TType::isArray) {
            if (plVar1[0xc] != 0) goto LAB_001073fa;
         }
 else {
            cVar2 = ( **(code**)( lVar5 + 0xe8 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_001073fa;
            lVar5 = *plVar1;
         }

         if (*(code**)( lVar5 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )((char)plVar1[1] - 0xfU) < 2) {
               LAB_001073dd:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
               lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsArray ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5 ));
               if (lVar5 != lVar4) {
                  LAB_001073fa:return param_1 + 8;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( lVar5 + 0x128 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_001073dd;
         }

         plVar1 = (long*)param_1[0xc];
         lVar5 = *plVar1;
         if (*(code**)( lVar5 + 0xe8 ) == glslang::TType::isArray) {
            if (plVar1[0xc] != 0) goto LAB_0010742a;
         }
 else {
            cVar2 = ( **(code**)( lVar5 + 0xe8 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_0010742a;
            lVar5 = *plVar1;
         }

         if (*(code**)( lVar5 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )((char)plVar1[1] - 0xfU) < 2) {
               LAB_0010740d:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
               lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsArray ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5 ));
               if (lVar5 != lVar4) {
                  LAB_0010742a:return param_1 + 0xc;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( lVar5 + 0x128 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_0010740d;
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

         goto LAB_0010753c;
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
   LAB_0010753c:bVar3 = glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(*param_1);
   if (!bVar3) {
      return param_2;
   }

   return param_1;
}
/* bool glslang::TType::contains<glslang::TType::containsArray() const::{lambda(glslang::TType
   const*)#1}>(glslang::TType::containsArray() const::{lambda(glslang::TType const*)#1}) const
   [clone .isra.0] */bool glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const *)_1_ > ( long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0xe8) == isArray) {
    if (param_1[0xc] != 0) {
      return true;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0xe8))();
    if (cVar1 != '\0') {
      return true;
    }
    lVar2 = *param_1;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)param_1[1] - 0xfU) < 2) {
LAB_001075a1: ) = uVar3 - uVar4 ;if (0x7fffffff < lVar7) {
   return p_Var8;
}
if (lVar7 < -0x80000000) {
   return p_Var1;
}
iVar5 = (int)lVar7;}if (iVar5 < 0) {
   p_Var8 = p_Var1;
}
}
  }return p_Var8;}/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_mutate(unsigned long, unsigned long, char const*, unsigned long) */void std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this, ulong param_1, ulong param_2, char *param_3, ulong param_4) {
   undefined1 *__dest;
   ulong uVar1;
   ulong uVar2;
   ulong uVar3;
   size_t __n;
   undefined1 *__src;
   uVar3 = ( param_4 - param_2 ) + *(long*)( this + 0x10 );
   __n = *(long*)( this + 0x10 ) - ( param_1 + param_2 );
   if (*(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 ) == this + 0x18) {
      uVar1 = 0xf;
   }
 else {
      uVar1 = *(ulong*)( this + 0x18 );
   }

   if (-1 < (long)uVar3) {
      if (uVar1 < uVar3) {
         uVar1 = uVar1 * 2;
         uVar2 = 0x7fffffffffffffff;
         if (uVar1 < 0x8000000000000000) {
            uVar2 = uVar1;
         }

         if (uVar3 < uVar1) {
            uVar3 = uVar2;
         }

      }

      __dest = (undefined1*)glslang::TPoolAllocator::allocate(*(ulong*)this);
      if (param_1 != 0) {
         if (param_1 == 1) {
            *__dest = **(undefined1**)( this + 8 );
         }
 else {
            __dest = (undefined1*)memcpy(__dest, *(undefined1**)( this + 8 ), param_1);
         }

      }

      if (( param_3 != (char*)0x0 ) && ( param_4 != 0 )) {
         if (param_4 == 1) {
            __dest[param_1] = *param_3;
         }
 else {
            memcpy(__dest + param_1, param_3, param_4);
         }

      }

      if (__n != 0) {
         __src = (undefined1*)( param_1 + param_2 + *(long*)( this + 8 ) );
         if (__n == 1) {
            __dest[param_1 + param_4] = *__src;
         }
 else {
            memcpy(__dest + param_1 + param_4, __src, __n);
         }

      }

      *(undefined1**)( this + 8 ) = __dest;
      *(ulong*)( this + 0x18 ) = uVar3;
      return;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_length_error("basic_string::_M_create");
}
/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_append(char const*, unsigned long) */basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> * __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          char *param_1,ulong param_2){
   ulong uVar1;
   ulong uVar2;
   ulong uVar3;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar4;
   uVar2 = *(ulong*)( this + 0x10 );
   pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 );
   uVar1 = param_2 + uVar2;
   if (pbVar4 == this + 0x18) {
      uVar3 = 0xf;
   }
 else {
      uVar3 = *(ulong*)( this + 0x18 );
   }

   if (uVar3 < uVar1) {
      _M_mutate(this, uVar2, 0, param_1, param_2);
      pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 );
   }
 else if (param_2 != 0) {
      if (param_2 == 1) {
         pbVar4[uVar2] = ( basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> ) * param_1;
         pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 );
      }
 else {
         memcpy(pbVar4 + uVar2, param_1, param_2);
         pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 );
      }

   }

   *(ulong*)( this + 0x10 ) = uVar1;
   pbVar4[uVar1] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
   return this;
}
/* glslang::TSymbol::addPrefix(char const*) */void glslang::TSymbol::addPrefix(TSymbol *this, char *param_1) {
   code *pcVar1;
   char *__s;
   size_t sVar2;
   ulong uVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   undefined8 local_58;
   char *local_50;
   long local_48;
   char local_40[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = glslang::GetThreadPoolAllocator();
   local_50 = local_40;
   if (param_1 != (char*)0x0) {
      sVar2 = strlen(param_1);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_58, param_1, param_1 + sVar2);
      uVar3 = *(ulong*)( *(long*)( this + 8 ) + 0x10 );
      if (0x7fffffffffffffffU - local_48 < uVar3) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("basic_string::append");
      }

      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_58, *(char**)( *(long*)( this + 8 ) + 8 ), uVar3);
      __s = local_50;
      pcVar1 = *(code**)( *(long*)this + 0x20 );
      uVar3 = glslang::GetThreadPoolAllocator();
      puVar4 = (undefined8*)glslang::TPoolAllocator::allocate(uVar3);
      uVar5 = glslang::GetThreadPoolAllocator();
      *puVar4 = uVar5;
      puVar4[1] = puVar4 + 3;
      if (__s != (char*)0x0) {
         sVar2 = strlen(__s);
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(puVar4, __s, __s + sVar2);
         if (pcVar1 == changeName) {
            *(undefined8**)( this + 8 ) = puVar4;
         }
 else {
            ( *pcVar1 )(this, puVar4);
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

   }

   /* WARNING: Subroutine does not return */
   std::__throw_logic_error("basic_string: construction from null is not valid");
}
/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::push_back(char) */void std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::push_back(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this, char param_1) {
   ulong uVar1;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar2;
   ulong uVar3;
   uVar1 = *(ulong*)( this + 0x10 );
   pbVar2 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 );
   if (pbVar2 == this + 0x18) {
      uVar3 = 0xf;
   }
 else {
      uVar3 = *(ulong*)( this + 0x18 );
   }

   if (uVar3 < uVar1 + 1) {
      _M_mutate(this, uVar1, 0, (char*)0x0, 1);
      pbVar2 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 );
   }

   pbVar2[uVar1] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)param_1;
   *(ulong*)( this + 0x10 ) = uVar1 + 1;
   *(undefined1*)( *(long*)( this + 8 ) + 1 + uVar1 ) = 0;
   return;
}
/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::append(char const*) */basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> * __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          char *param_1){
   ulong uVar1;
   ulong uVar2;
   size_t __n;
   ulong uVar3;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar4;
   __n = strlen(param_1);
   uVar2 = *(ulong*)( this + 0x10 );
   if (__n <= 0x7fffffffffffffff - uVar2) {
      pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 );
      uVar1 = uVar2 + __n;
      if (pbVar4 == this + 0x18) {
         uVar3 = 0xf;
      }
 else {
         uVar3 = *(ulong*)( this + 0x18 );
      }

      if (uVar3 < uVar1) {
         _M_mutate(this, uVar2, 0, param_1, __n);
         pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 );
      }
 else if (__n != 0) {
         if (__n == 1) {
            pbVar4[uVar2] = ( basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> ) * param_1;
            pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 );
         }
 else {
            memcpy(pbVar4 + uVar2, param_1, __n);
            pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 );
         }

      }

      *(ulong*)( this + 0x10 ) = uVar1;
      pbVar4[uVar1] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
      return this;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_length_error("basic_string::append");
}
/* glslang::TSampler::getString[abi:cxx11]() const */void glslang::TSampler::getString_abi_cxx11_(void) {
   undefined8 *puVar1;
   byte bVar2;
   uint uVar3;
   ulong *__dest;
   ulong uVar4;
   undefined8 *puVar5;
   ulong uVar6;
   uint uVar7;
   uint *puVar8;
   long lVar9;
   ulong uVar10;
   undefined1 *in_RSI;
   ulong uVar11;
   undefined8 *in_RDI;
   ulong uVar12;
   long in_FS_OFFSET;
   undefined8 local_98;
   uint *local_90;
   undefined8 local_88;
   uint local_80[6];
   ulong local_68;
   ulong *local_60;
   ulong local_58;
   ulong local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = glslang::GetThreadPoolAllocator();
   bVar2 = in_RSI[2];
   local_88 = 0;
   local_80[0] = local_80[0] & 0xffffff00;
   local_90 = local_80;
   if (( bVar2 & 0x20 ) != 0) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, "sampler");
      *in_RDI = local_98;
      in_RDI[1] = in_RDI + 3;
      if (local_90 == local_80) {
         uVar10 = local_88 + 1;
         uVar3 = (uint)uVar10;
         if (uVar3 < 8) {
            if (( uVar10 & 4 ) == 0) {
               if (( uVar3 != 0 ) && ( *(char*)( in_RDI + 3 ) = (char)*local_90(uVar10 & 2) != 0 )) {
                  *(undefined2*)( (long)in_RDI + ( uVar10 & 0xffffffff ) + 0x16 ) = *(undefined2*)( (long)local_90 + ( ( uVar10 & 0xffffffff ) - 2 ) );
               }

            }
 else {
               *(uint*)( in_RDI + 3 ) = *local_90;
               *(undefined4*)( (long)in_RDI + ( uVar10 & 0xffffffff ) + 0x14 ) = *(undefined4*)( (long)local_90 + ( ( uVar10 & 0xffffffff ) - 4 ) );
            }

         }
 else {
            in_RDI[3] = *(undefined8*)local_90;
            *(undefined8*)( (long)in_RDI + ( uVar10 & 0xffffffff ) + 0x10 ) = *(undefined8*)( (long)local_90 + ( ( uVar10 & 0xffffffff ) - 8 ) );
            lVar9 = (long)( in_RDI + 3 ) - ( ( ulong )(in_RDI + 4) & 0xfffffffffffffff8 );
            uVar3 = uVar3 + (int)lVar9 & 0xfffffff8;
            if (7 < uVar3) {
               uVar10 = 0;
               do {
                  uVar7 = (int)uVar10 + 8;
                  *(undefined8*)( ( ( ulong )(in_RDI + 4) & 0xfffffffffffffff8 ) + uVar10 ) = *(undefined8*)( (long)local_90 + ( uVar10 - lVar9 ) );
                  uVar10 = (ulong)uVar7;
               }
 while ( uVar7 < uVar3 );
            }

         }

      }
 else {
         in_RDI[1] = local_90;
         in_RDI[3] = CONCAT44(local_80[1], local_80[0]);
      }

      LAB_0010c574:in_RDI[2] = local_88;
      goto LAB_0010c578;
   }

   switch (*in_RSI) {
      case 3:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_98,
               "f16");
    bVar2 = in_RSI[2];
    break;
      case 4:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_98,
               "i8");
    bVar2 = in_RSI[2];
    break;
      case 5:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_98,
               "u16");
    bVar2 = in_RSI[2];
    break;
      case 6:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_98,
               "i16");
    bVar2 = in_RSI[2];
    break;
      case 7:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_98,
               "u8");
    bVar2 = in_RSI[2];
    break;
      case 8:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_98,
               "i");
    bVar2 = in_RSI[2];
    break;
      case 9:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_98,
               "u");
    bVar2 = in_RSI[2];
    break;
      case 10:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_98,
               "i64");
    bVar2 = in_RSI[2];
    break;
      case 0xb:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_98,
               "u64");
    bVar2 = in_RSI[2];
   }

   if (( bVar2 & 8 ) == 0) {
      if (( bVar2 & 0x10 ) == 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, "texture");
         goto LAB_0010c48f;
      }

      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, "sampler");
      bVar2 = in_RSI[3];
      puVar8 = local_90;
      uVar10 = local_88;
   }
 else {
      if (in_RSI[1] == '\b') {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, "attachmentEXT");
      }
 else if (in_RSI[1] == '\a') {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, "subpass");
      }
 else {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, "image");
      }

      LAB_0010c48f:bVar2 = in_RSI[3];
      puVar8 = local_90;
      uVar10 = local_88;
   }

   local_90 = puVar8;
   local_88 = uVar10;
   if (( bVar2 & 0x20 ) != 0) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, "ExternalOES");
      *in_RDI = local_98;
      in_RDI[1] = in_RDI + 3;
      if (local_90 == local_80) {
         uVar10 = local_88 + 1;
         uVar3 = (uint)uVar10;
         if (uVar3 < 8) {
            if (( uVar10 & 4 ) == 0) {
               if (uVar3 != 0) {
                  *(undefined1*)( in_RDI + 3 ) = (undefined1)local_80[0];
                  if (( uVar10 & 2 ) != 0) {
                     *(undefined2*)( (long)in_RDI + ( uVar10 & 0xffffffff ) + 0x16 ) = *(undefined2*)( (long)&local_88 + ( uVar10 & 0xffffffff ) + 6 );
                  }

               }

            }
 else {
               *(uint*)( in_RDI + 3 ) = local_80[0];
               *(undefined4*)( (long)in_RDI + ( uVar10 & 0xffffffff ) + 0x14 ) = *(undefined4*)( (long)&local_88 + ( uVar10 & 0xffffffff ) + 4 );
            }

         }
 else {
            in_RDI[3] = CONCAT44(local_80[1], local_80[0]);
            *(undefined8*)( (long)in_RDI + ( uVar10 & 0xffffffff ) + 0x10 ) = *(undefined8*)( (long)&local_88 + ( uVar10 & 0xffffffff ) );
            lVar9 = (long)( in_RDI + 3 ) - ( ( ulong )(in_RDI + 4) & 0xfffffffffffffff8 );
            uVar3 = uVar3 + (int)lVar9 & 0xfffffff8;
            if (7 < uVar3) {
               uVar10 = 0;
               do {
                  uVar7 = (int)uVar10 + 8;
                  *(undefined8*)( ( ( ulong )(in_RDI + 4) & 0xfffffffffffffff8 ) + uVar10 ) = *(undefined8*)( (long)local_80 + ( uVar10 - lVar9 ) );
                  uVar10 = (ulong)uVar7;
               }
 while ( uVar7 < uVar3 );
            }

         }

      }
 else {
         in_RDI[1] = local_90;
         in_RDI[3] = CONCAT44(local_80[1], local_80[0]);
      }

      in_RDI[2] = local_88;
      goto LAB_0010c578;
   }

   if (( bVar2 & 0x40 ) == 0) {
      switch (in_RSI[1]) {
         case 1:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_98,"1D");
      break;
         case 2:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_98,"2D");
      break;
         case 3:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_98,"3D");
      break;
         case 4:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_98,"Cube");
      break;
         case 5:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_98,"2DRect");
      break;
         case 6:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_98,"Buffer");
      break;
         case 7:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_98,"Input");
      break;
         case 8:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_98,"");
      }

      bVar2 = in_RSI[2];
      if (( bVar2 & 4 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, "MS");
         bVar2 = in_RSI[2];
      }

      if (( bVar2 & 1 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, "Array");
         bVar2 = in_RSI[2];
      }

      if (( bVar2 & 2 ) == 0) {
         *in_RDI = local_98;
         in_RDI[1] = in_RDI + 3;
      }
 else {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, "Shadow");
         *in_RDI = local_98;
         in_RDI[1] = in_RDI + 3;
      }

      if (local_90 == local_80) {
         puVar8 = (uint*)( in_RDI + 3 );
         uVar10 = local_88 + 1;
         uVar3 = (uint)uVar10;
         if (uVar3 < 8) {
            if (( uVar10 & 4 ) == 0) {
               if (uVar3 != 0) {
                  *(undefined1*)puVar8 = (undefined1)local_80[0];
                  if (( uVar10 & 2 ) != 0) {
                     *(undefined2*)( (long)in_RDI + ( uVar10 & 0xffffffff ) + 0x16 ) = *(undefined2*)( (long)&local_88 + ( uVar10 & 0xffffffff ) + 6 );
                  }

               }

            }
 else {
               *puVar8 = local_80[0];
               *(undefined4*)( (long)in_RDI + ( uVar10 & 0xffffffff ) + 0x14 ) = *(undefined4*)( (long)&local_88 + ( uVar10 & 0xffffffff ) + 4 );
            }

         }
 else {
            *(ulong*)puVar8 = CONCAT44(local_80[1], local_80[0]);
            *(undefined8*)( (long)in_RDI + ( uVar10 & 0xffffffff ) + 0x10 ) = *(undefined8*)( (long)&local_88 + ( uVar10 & 0xffffffff ) );
            lVar9 = (long)puVar8 - ( ( ulong )(in_RDI + 4) & 0xfffffffffffffff8 );
            uVar3 = uVar3 + (int)lVar9 & 0xfffffff8;
            if (7 < uVar3) {
               uVar10 = 0;
               do {
                  uVar7 = (int)uVar10 + 8;
                  *(undefined8*)( ( ( ulong )(in_RDI + 4) & 0xfffffffffffffff8 ) + uVar10 ) = *(undefined8*)( (long)local_80 + ( uVar10 - lVar9 ) );
                  uVar10 = (ulong)uVar7;
               }
 while ( uVar7 < uVar3 );
            }

         }

      }
 else {
         in_RDI[1] = local_90;
         in_RDI[3] = CONCAT44(local_80[1], local_80[0]);
      }

      goto LAB_0010c574;
   }

   local_68 = glslang::GetThreadPoolAllocator();
   uVar12 = uVar10 + 2;
   local_58 = 0;
   local_50[0] = local_50[0] & 0xffffffffffffff00;
   local_60 = local_50;
   if (uVar12 < 0x10) {
      uVar11 = 0;
      uVar12 = 2;
      LAB_0010c98b:*(undefined2*)( (long)local_60 + uVar11 ) = 0x5f5f;
   }
 else {
      if ((long)uVar12 < 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("basic_string::_M_create");
      }

      uVar4 = 0x1e;
      if (0x1d < uVar12) {
         uVar4 = uVar12;
      }

      __dest = (ulong*)glslang::TPoolAllocator::allocate(local_68);
      if (local_58 == 0) {
         *(char*)__dest = (char)*local_60;
         LAB_0010cb7a:local_60 = __dest;
         local_50[0] = uVar4;
         if (0x7fffffffffffffff - local_58 < 2) goto LAB_0010cdad;
         uVar12 = local_58 + 2;
         uVar6 = 0xf;
         uVar11 = local_58;
         if (__dest != local_50) goto LAB_0010c7d8;
      }
 else {
         if (local_58 + 1 != 0) {
            __dest = (ulong*)memcpy(__dest, local_60, local_58 + 1);
            goto LAB_0010cb7a;
         }

         uVar12 = 1;
         uVar11 = 0xffffffffffffffff;
         LAB_0010c7d8:uVar6 = uVar4;
         local_60 = __dest;
      }

      local_50[0] = uVar4;
      if (uVar12 <= uVar6) goto LAB_0010c98b;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_68, uVar11, 0, "__", 2);
   }

   *(undefined1*)( (long)local_60 + uVar12 ) = 0;
   local_58 = uVar12;
   if (0x7fffffffffffffff - uVar12 < uVar10) {
      LAB_0010cdad:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::append");
   }

   uVar11 = uVar10 + uVar12;
   uVar4 = local_50[0];
   if (local_60 == local_50) {
      uVar4 = 0xf;
   }

   if (uVar4 < uVar11) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_68, uVar12, 0, (char*)puVar8, uVar10);
   }
 else if (uVar10 != 0) {
      if (uVar10 == 1) {
         *(char*)( (long)local_60 + uVar12 ) = (char)*puVar8;
      }
 else {
         memcpy((char*)( (long)local_60 + uVar12 ), puVar8, uVar10);
      }

   }

   *(undefined1*)( (long)local_60 + uVar11 ) = 0;
   local_58 = uVar11;
   puVar5 = (undefined8*)std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_68, "External2DY2YEXT");
   puVar1 = puVar5 + 3;
   *in_RDI = *puVar5;
   in_RDI[1] = in_RDI + 3;
   if ((undefined8*)puVar5[1] == puVar1) {
      lVar9 = puVar5[2];
      uVar10 = lVar9 + 1;
      uVar3 = (uint)uVar10;
      if (7 < uVar3) {
         in_RDI[3] = puVar5[3];
         *(undefined8*)( (long)in_RDI + ( uVar10 & 0xffffffff ) + 0x10 ) = *(undefined8*)( (long)puVar5 + ( uVar10 & 0xffffffff ) + 0x10 );
         lVar9 = (long)( in_RDI + 3 ) - ( ( ulong )(in_RDI + 4) & 0xfffffffffffffff8 );
         uVar3 = uVar3 + (int)lVar9 & 0xfffffff8;
         if (7 < uVar3) {
            uVar10 = 0;
            do {
               uVar7 = (int)uVar10 + 8;
               *(undefined8*)( ( ( ulong )(in_RDI + 4) & 0xfffffffffffffff8 ) + uVar10 ) = *(undefined8*)( (long)puVar1 + ( uVar10 - lVar9 ) );
               uVar10 = (ulong)uVar7;
            }
 while ( uVar7 < uVar3 );
         }

         goto LAB_0010c8a5;
      }

      if (( uVar10 & 4 ) == 0) {
         if (uVar3 != 0) {
            *(undefined1*)( in_RDI + 3 ) = *(undefined1*)( puVar5 + 3 );
            if (( uVar10 & 2 ) == 0) goto LAB_0010c8a5;
            *(undefined2*)( (long)in_RDI + ( uVar10 & 0xffffffff ) + 0x16 ) = *(undefined2*)( (long)puVar5 + ( uVar10 & 0xffffffff ) + 0x16 );
            lVar9 = puVar5[2];
         }

      }
 else {
         *(undefined4*)( in_RDI + 3 ) = *(undefined4*)( puVar5 + 3 );
         *(undefined4*)( (long)in_RDI + ( uVar10 & 0xffffffff ) + 0x14 ) = *(undefined4*)( (long)puVar5 + ( uVar10 & 0xffffffff ) + 0x14 );
         lVar9 = puVar5[2];
      }

   }
 else {
      in_RDI[1] = (undefined8*)puVar5[1];
      in_RDI[3] = puVar5[3];
      LAB_0010c8a5:lVar9 = puVar5[2];
   }

   in_RDI[2] = lVar9;
   puVar5[1] = puVar1;
   puVar5[2] = 0;
   *(undefined1*)( puVar5 + 3 ) = 0;
   LAB_0010c578:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* glslang::TType::getCompleteString(bool, bool, bool, bool, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >) const::{lambda(unsigned
   int)#2}::TEMPNAMEPLACEHOLDERVALUE(unsigned int) const */_func_getCompleteString_bool_bool_bool_bool_basic_string_basic_string * __thiscall
const::{lambda(unsigned_int)#2{
   ulong uVar1;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this_00;
   ulong uVar2;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *__src;
   size_t __n;
   ulong uVar3;
   char cVar4;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar5;
   long in_FS_OFFSET;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_58;
   uint local_50;
   long local_48[3];
   long local_30;
   this_00 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)this;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 < 10) {
      cVar4 = '\x01';
   }
 else if (param_1 < 100) {
      cVar4 = '\x02';
   }
 else if (param_1 < 1000) {
      cVar4 = '\x03';
   }
 else if (param_1 < 10000) {
      cVar4 = '\x04';
   }
 else {
      cVar4 = '\x05';
      if (99999 < param_1) {
         if (param_1 < 1000000) {
            cVar4 = '\x05';
         }
 else {
            cVar4 = '\a';
            if (param_1 < 10000000) goto LAB_0010cea5;
            if (param_1 < 100000000) {
               cVar4 = '\b';
               goto LAB_0010cea5;
            }

            if (param_1 < 1000000000) {
               cVar4 = '\t';
               goto LAB_0010cea5;
            }

            cVar4 = '\t';
         }

         cVar4 = cVar4 + '\x01';
      }

   }

   LAB_0010cea5:local_58 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)local_48;
   std::__cxx11::string::_M_construct(( ulong ) & local_58, cVar4);
   std::__detail::__to_chars_10_impl<unsigned_int>((char*)local_58, local_50, param_1);
   __src = local_58;
   __n = strlen((char*)local_58);
   uVar2 = *(ulong*)( this_00 + 0x10 );
   if (0x7fffffffffffffff - uVar2 < __n) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::append");
   }

   pbVar5 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this_00 + 8 );
   uVar1 = __n + uVar2;
   if (pbVar5 == this_00 + 0x18) {
      uVar3 = 0xf;
   }
 else {
      uVar3 = *(ulong*)( this_00 + 0x18 );
   }

   if (uVar3 < uVar1) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(this_00, uVar2, 0, (char*)__src, __n);
      pbVar5 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this_00 + 8 );
   }
 else if (__n != 0) {
      if (__n == 1) {
         pbVar5[uVar2] = *__src;
         pbVar5 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this_00 + 8 );
      }
 else {
         memcpy(pbVar5 + uVar2, __src, __n);
         pbVar5 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this_00 + 8 );
      }

   }

   *(ulong*)( this_00 + 0x10 ) = uVar1;
   pbVar5[uVar1] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
   if (local_58 != (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)local_48) {
      operator_delete(local_58, local_48[0] + 1);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (_func_getCompleteString_bool_bool_bool_bool_basic_string_basic_string*)0x0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TType::getCompleteString(bool, bool, bool, bool, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >)
   const::{lambda(int)#3}::TEMPNAMEPLACEHOLDERVALUE(int) const */_func_getCompleteString_bool_bool_bool_bool_basic_string_basic_string * __thiscall
const::{lambda(int)#3{
   ulong uVar1;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this_00;
   ulong uVar2;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *__src;
   int iVar3;
   size_t __n;
   ulong uVar4;
   uint uVar5;
   uint uVar6;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar7;
   long in_FS_OFFSET;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_58[2];
   long local_48[3];
   long local_30;
   this_00 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)this;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = -param_1;
   if (0 < param_1) {
      uVar5 = param_1;
   }

   if (uVar5 < 10) {
      uVar6 = 1;
   }
 else if (uVar5 < 100) {
      uVar6 = 2;
   }
 else if (uVar5 < 1000) {
      uVar6 = 3;
   }
 else if (uVar5 < 10000) {
      uVar6 = 4;
   }
 else {
      uVar6 = 5;
      if (99999 < uVar5) {
         if (uVar5 < 1000000) {
            iVar3 = 5;
         }
 else {
            uVar6 = 7;
            if (uVar5 < 10000000) goto LAB_0010d0c3;
            if (uVar5 < 100000000) {
               uVar6 = 8;
               goto LAB_0010d0c3;
            }

            if (uVar5 < 1000000000) {
               uVar6 = 9;
               goto LAB_0010d0c3;
            }

            iVar3 = 9;
         }

         uVar6 = iVar3 + 1;
      }

   }

   LAB_0010d0c3:local_58[0] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)local_48;
   std::__cxx11::string::_M_construct((ulong)local_58, (char)uVar6 - (char)( param_1 >> 0x1f ));
   std::__detail::__to_chars_10_impl<unsigned_int>((char*)( local_58[0] + ( (uint)param_1 >> 0x1f ) ), uVar6, uVar5);
   __src = local_58[0];
   __n = strlen((char*)local_58[0]);
   uVar2 = *(ulong*)( this_00 + 0x10 );
   if (0x7fffffffffffffff - uVar2 < __n) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::append");
   }

   pbVar7 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this_00 + 8 );
   uVar1 = __n + uVar2;
   if (pbVar7 == this_00 + 0x18) {
      uVar4 = 0xf;
   }
 else {
      uVar4 = *(ulong*)( this_00 + 0x18 );
   }

   if (uVar4 < uVar1) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(this_00, uVar2, 0, (char*)__src, __n);
      pbVar7 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this_00 + 8 );
   }
 else if (__n != 0) {
      if (__n == 1) {
         pbVar7[uVar2] = *__src;
         pbVar7 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this_00 + 8 );
      }
 else {
         memcpy(pbVar7 + uVar2, __src, __n);
         pbVar7 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this_00 + 8 );
      }

   }

   *(ulong*)( this_00 + 0x10 ) = uVar1;
   pbVar7[uVar1] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
   if (local_58[0] != (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)local_48) {
      operator_delete(local_58[0], local_48[0] + 1);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (_func_getCompleteString_bool_bool_bool_bool_basic_string_basic_string*)0x0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TType::getCompleteString(bool, bool, bool, bool, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >) const */basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *glslang::TType::getCompleteString(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *param_1, long *param_2, char param_3, char param_4, char param_5, char param_6, long param_7, long param_8) {
   ulong uVar1;
   code *pcVar2;
   long *plVar3;
   char cVar4;
   byte bVar5;
   ushort uVar6;
   uint uVar7;
   undefined8 uVar8;
   char *pcVar9;
   ulong uVar10;
   basic_string *pbVar11;
   long lVar12;
   int iVar13;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar14;
   long lVar15;
   ulong uVar16;
   long lVar17;
   long in_FS_OFFSET;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_130;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_128;
   undefined8 local_120;
   long local_118;
   long lStack_110;
   long local_108;
   undefined8 uStack_100;
   undefined8 local_f8;
   long lStack_f0;
   long local_e8;
   long lStack_e0;
   long local_d8;
   long lStack_d0;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_c8[48];
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_98[48];
   undefined8 local_68;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_60;
   ulong local_58;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar8 = glslang::GetThreadPoolAllocator();
   param_1[0x18] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
   *(undefined8*)param_1 = uVar8;
   *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) = param_1 + 0x18;
   *(undefined8*)( param_1 + 0x10 ) = 0;
   local_130 = param_1;
   local_128 = param_1;
   if (param_4 != '\0') {
      if (param_2[10] != 0) {
         glslang::TQualifier::getSpirvDecorateQualifierString_abi_cxx11_();
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, (char*)local_60);
      }

      if (( ( *(byte*)( (long)param_2 + 0x1f ) & 0x70 ) == 0 ) && ( ( *(byte*)( param_2 + 4 ) & 0xf ) == 0 )) {
         if (( ( ( *(int*)( (long)param_2 + 0x24 ) != -1 ) || ( ( ( ( ( (short)param_2[6] != -1 || ( ( *(uint*)( (long)param_2 + 0x2c ) & 0x3f8000 ) != 0x1f8000 ) ) || ( (int)param_2[5] != -1 ) ) || ( ( ( ~*(ushort *)((long)param_2 + 0x2c) & 0xfff ) != 0 || ( ( *(byte*)( (long)param_2 + 0x2d ) & 0x70 ) != 0x40 ) ) ) ) || ( *(char*)( (long)param_2 + 0x32 ) != -1 ) ) ) ) || ( ( ( *(char*)( (long)param_2 + 0x33 ) != -1 || ( *(char*)( (long)param_2 + 0x3c ) != '\0' ) ) || ( (char)param_2[9] != '\0' ) ) ) ) || ( ( ( ( *(char*)( (long)param_2 + 0x3d ) != '\0' || ( *(char*)( (long)param_2 + 0x3e ) != '\0' ) ) || ( ( ~*(byte *)((long)param_2 + 0x34) & 0xf ) != 0 ) ) || ( ( ( ~*(uint *)((long)param_2 + 0x34) & 0x3fff0 ) != 0 || ( ( ~*(ushort *)((long)param_2 + 0x36) & 0x7ffc ) != 0 ) ) ) ) )) {
            local_118 = param_2[2];
            lStack_110 = param_2[3];
            local_108 = param_2[4];
            lVar12 = param_2[5];
            uVar16 = param_2[6];
            lStack_f0 = param_2[7];
            local_e8 = param_2[8];
            lStack_e0 = param_2[9];
            local_d8 = param_2[10];
            lStack_d0 = param_2[0xb];
            uStack_100 = lVar12;
            local_f8 = uVar16;
            if (( ( ( ( *(char*)( (long)param_2 + 0x3c ) == '\0' ) && ( ( (short)param_2[6] == -1 && ( uStack_100._4_4_ = ( uint )((ulong)lVar12 >> 0x20) ),uVar7 = uStack_100._4_4_ & 0x3f8000,uVar7 == 0x1f8000 ) ) ) ) && ( ( *(uint*)( param_2 + 5 ) & *(uint*)( (long)param_2 + 0x24 ) ) == 0xffffffff ) ) && ( ( ( uStack_100._4_2_ = ( ushort )((ulong)lVar12 >> 0x20) ),uVar6 = ~uStack_100._4_2_,( uVar6 & 0xfff ) == 0 && ( uStack_100._5_1_ = ( byte )((ulong)lVar12 >> 0x28) ),bVar5 = uStack_100._5_1_ & 0x70,bVar5 == 0x40 ) ) && ( ( *(byte*)( (long)param_2 + 0x33 ) & *(byte*)( (long)param_2 + 0x32 ) ) == 0xff )) {
               local_f8 = uVar16 | 0xf00000000;
               uVar1 = local_f8;
               uVar7 = ~local_f8._4_4_;
               local_f8 = uVar1;
               if (( ( uVar7 & 0x3fff0 ) == 0 ) && ( local_f8._6_2_ = ( ushort )(uVar16 >> 0x30) ),uVar6 = ~local_f8._6_2_,( uVar6 & 0x7ffc ) == 0) goto LAB_0010db84;
            }

            goto LAB_0010d800;
         }

      }
 else {
         LAB_0010d800:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "layout(");
         if (( ( ~*(ushort *)((long)param_2 + 0x2c) & 0xfff ) != 0 ) || ( ( ( *(byte*)( (long)param_2 + 0x2d ) & 0x70 ) != 0x40 || ( *(char*)( (long)param_2 + 0x32 ) != -1 ) ) )) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " location=");
            ::{lambda (unsigned_int);
            #2
            ( (_lambda_unsigned_int__2_*)&local_130,*(ushort*)( (long)param_2 + 0x2c ) & 0xfff );
            if (( *(byte*)( (long)param_2 + 0x2d ) & 0x70 ) != 0x40) {
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " component=");
               ::{lambda (unsigned_int);
               #2
               ( (_lambda_unsigned_int__2_*)&local_130,*(byte*)( (long)param_2 + 0x2d ) >> 4 & 7 );
            }

            if (*(char*)( (long)param_2 + 0x32 ) != -1) {
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " index=");
               ::{lambda (unsigned_int);
               #2
               ( (_lambda_unsigned_int__2_*)&local_130,( uint ) * (byte*)( (long)param_2 + 0x32 ) );
            }

         }

         if (( *(uint*)( (long)param_2 + 0x2c ) & 0x3f8000 ) != 0x1f8000) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " set=");
            ::{lambda (unsigned_int);
            #2
            ( (_lambda_unsigned_int__2_*)&local_130,*(uint*)( (long)param_2 + 0x2c ) >> 0xf & 0x7f );
         }

         if ((short)param_2[6] != -1) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " binding=");
            ::{lambda (unsigned_int);
            #2
            ( (_lambda_unsigned_int__2_*)&local_130,( uint ) * (ushort*)( param_2 + 6 ) );
         }

         if (*(char*)( (long)param_2 + 0x33 ) != -1) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " stream=");
            ::{lambda (unsigned_int);
            #2
            ( (_lambda_unsigned_int__2_*)&local_130,( uint ) * (byte*)( (long)param_2 + 0x33 ) );
         }

         if (( *(byte*)( (long)param_2 + 0x1f ) & 0x70 ) != 0) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
            pcVar9 = "row_major";
            bVar5 = *(byte*)( (long)param_2 + 0x1f ) >> 4 & 7;
            if (( bVar5 != 1 ) && ( pcVar9 = bVar5 != 2 )) {
               pcVar9 = "none";
            }

            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, pcVar9);
         }

         if (( *(byte*)( param_2 + 4 ) & 0xf ) != 0) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
            switch (*(byte*)( param_2 + 4 ) & 0xf) {
               case 1:
          pcVar9 = "shared";
          break;
               case 2:
          pcVar9 = "std140";
          break;
               case 3:
          pcVar9 = "std430";
          break;
               case 4:
          pcVar9 = "packed";
          break;
               case 5:
          pcVar9 = "scalar";
          break;
               default:
          pcVar9 = "none";
            }

            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, pcVar9);
         }

         if (*(int*)( (long)param_2 + 0x24 ) != -1) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " offset=");
            ::{lambda (int);
            #3
            ( (_lambda_int__3_*)&local_128,*(int*)( (long)param_2 + 0x24 ) );
         }

         if ((int)param_2[5] != -1) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " align=");
            ::{lambda (int);
            #3
         }

         if (*(char*)( (long)param_2 + 0x3c ) != '\0') {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
            pcVar9 = (char*)TQualifier::getLayoutFormatString(*(undefined1*)( (long)param_2 + 0x3c ));
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, pcVar9);
         }

         uVar6 = *(ushort*)( (long)param_2 + 0x36 );
         if (( ~*(byte *)((long)param_2 + 0x34) & 0xf ) == 0) {
            LAB_0010d9da:if (( ~uVar6 & 0x7ffc ) != 0) {
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " xfb_offset=");
               ::{lambda (unsigned_int);
               #2
               ( (_lambda_unsigned_int__2_*)&local_130,*(ushort*)( (long)param_2 + 0x36 ) >> 2 & 0x1fff );
            }

         }
 else if (( ~uVar6 & 0x7ffc ) != 0) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " xfb_buffer=");
            ::{lambda (unsigned_int);
            #2
            ( (_lambda_unsigned_int__2_*)&local_130,*(byte*)( (long)param_2 + 0x34 ) & 0xf );
            uVar6 = *(ushort*)( (long)param_2 + 0x36 );
            goto LAB_0010d9da;
         }

         if (( ~*(uint *)((long)param_2 + 0x34) & 0x3fff0 ) != 0) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " xfb_stride=");
            ::{lambda (unsigned_int);
            #2
            ( (_lambda_unsigned_int__2_*)&local_130,*(uint*)( (long)param_2 + 0x34 ) >> 4 & 0x3fff );
         }

         if ((char)param_2[7] != -1) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " input_attachment_index=");
            ::{lambda (unsigned_int);
            #2
            ( (_lambda_unsigned_int__2_*)&local_130,( uint ) * (byte*)( param_2 + 7 ) );
         }

         if (( ~*(uint *)(param_2 + 7) & 0x7ff00 ) != 0) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " constant_id=");
            ::{lambda (unsigned_int);
            #2
            ( (_lambda_unsigned_int__2_*)&local_130,*(uint*)( param_2 + 7 ) >> 8 & 0x7ff );
         }

         if (*(char*)( (long)param_2 + 0x3d ) != '\0') {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " push_constant");
         }

         if (*(char*)( (long)param_2 + 0x3e ) != '\0') {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " buffer_reference");
         }

         if (( ~*(ushort *)((long)param_2 + 0x3a) & 0x1f8 ) != 0) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " buffer_reference_align=");
            ::{lambda (unsigned_int);
            #2
            ( (_lambda_unsigned_int__2_*)&local_130,1 << ( ( byte )(*(ushort*)( (long)param_2 + 0x3a ) >> 3) & 0x1f ) );
         }

         if (*(char*)( (long)param_2 + 0x3f ) != '\0') {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " passthrough");
         }

         if ((char)param_2[8] != '\0') {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " layoutViewportRelative");
         }

         if (*(int*)( (long)param_2 + 0x44 ) != -0x800) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " layoutSecondaryViewportRelativeOffset=");
            ::{lambda (int);
            #3
            ( (_lambda_int__3_*)&local_128,*(int*)( (long)param_2 + 0x44 ) );
         }

         if ((char)param_2[9] != '\0') {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " shaderRecordNV");
         }

         if (*(char*)( (long)param_2 + 0x49 ) != '\0') {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " full_quads");
         }

         if (*(char*)( (long)param_2 + 0x4a ) != '\0') {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " quad_derivatives");
         }

         if (*(char*)( (long)param_2 + 0x4b ) != '\0') {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " hitobjectshaderrecordnv");
         }

         if ((char)param_2[0xb] != '\0') {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " layoutBindlessSampler");
         }

         if (*(char*)( (long)param_2 + 0x59 ) != '\0') {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " layoutBindlessImage");
         }

         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, ")");
      }

      LAB_0010db84:if (( *(byte*)( (long)param_2 + 0x1b ) & 0x10 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " invariant");
      }

      if (( *(byte*)( (long)param_2 + 0x1c ) & 0x10 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " noContraction");
      }

      bVar5 = *(byte*)( (long)param_2 + 0x1b );
      if (( bVar5 & 0x20 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " centroid");
         bVar5 = *(byte*)( (long)param_2 + 0x1b );
      }

      if (( bVar5 & 0x40 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " smooth");
         bVar5 = *(byte*)( (long)param_2 + 0x1b );
      }

      if ((char)bVar5 < '\0') {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " flat");
      }

      bVar5 = *(byte*)( (long)param_2 + 0x1c );
      if (( bVar5 & 0x20 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " noperspective");
         bVar5 = *(byte*)( (long)param_2 + 0x1c );
      }

      if (( bVar5 & 0x40 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " __explicitInterpAMD");
         bVar5 = *(byte*)( (long)param_2 + 0x1c );
      }

      if ((char)bVar5 < '\0') {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " pervertexNV");
      }

      bVar5 = *(byte*)( (long)param_2 + 0x1d );
      if (( bVar5 & 1 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " pervertexEXT");
         bVar5 = *(byte*)( (long)param_2 + 0x1d );
      }

      if (( bVar5 & 2 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " perprimitiveNV");
         bVar5 = *(byte*)( (long)param_2 + 0x1d );
      }

      if (( bVar5 & 4 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " perviewNV");
         bVar5 = *(byte*)( (long)param_2 + 0x1d );
      }

      if (( bVar5 & 8 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " taskNV");
         bVar5 = *(byte*)( (long)param_2 + 0x1d );
      }

      if (( bVar5 & 0x10 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " patch");
         bVar5 = *(byte*)( (long)param_2 + 0x1d );
      }

      if (( bVar5 & 0x20 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " sample");
      }

      bVar5 = *(byte*)( (long)param_2 + 0x1e );
      if (( bVar5 & 2 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " coherent");
         bVar5 = *(byte*)( (long)param_2 + 0x1e );
      }

      if (( bVar5 & 8 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " devicecoherent");
         bVar5 = *(byte*)( (long)param_2 + 0x1e );
      }

      if (( bVar5 & 0x10 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " queuefamilycoherent");
         bVar5 = *(byte*)( (long)param_2 + 0x1e );
      }

      if (( bVar5 & 0x20 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " workgroupcoherent");
         bVar5 = *(byte*)( (long)param_2 + 0x1e );
      }

      if (( bVar5 & 0x40 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " subgroupcoherent");
         bVar5 = *(byte*)( (long)param_2 + 0x1e );
      }

      if ((char)bVar5 < '\0') {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " shadercallcoherent");
      }

      if (( *(byte*)( (long)param_2 + 0x1f ) & 1 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " nonprivate");
      }

      if (( *(byte*)( (long)param_2 + 0x1e ) & 4 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " volatile");
      }

      bVar5 = *(byte*)( (long)param_2 + 0x1d );
      if (( bVar5 & 0x40 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " restrict");
         bVar5 = *(byte*)( (long)param_2 + 0x1d );
      }

      if ((char)bVar5 < '\0') {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " readonly");
      }

      if (( *(byte*)( (long)param_2 + 0x1e ) & 1 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " writeonly");
      }

      bVar5 = *(byte*)( (long)param_2 + 0x1c );
      if (( bVar5 & 1 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " specialization-constant");
         bVar5 = *(byte*)( (long)param_2 + 0x1c );
      }

      if (( bVar5 & 2 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " nonuniform");
      }

      bVar5 = *(byte*)( (long)param_2 + 0x1f );
      if (( bVar5 & 2 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " null-init");
         bVar5 = *(byte*)( (long)param_2 + 0x1f );
      }

      if (( bVar5 & 4 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " spirv_by_reference");
         bVar5 = *(byte*)( (long)param_2 + 0x1f );
      }

      if (( bVar5 & 8 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " spirv_literal");
      }

      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
      pcVar9 = (char*)GetStorageQualifierString(*(byte*)( param_2 + 3 ) & 0x7f);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, pcVar9);
   }

   if (param_6 == '\0') goto LAB_0010e058;
   if (param_3 != '\0') {
      if (( param_5 != '\0' ) && ( ( *(byte*)( (long)param_2 + 0x1b ) & 0xe ) != 0 )) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
         pcVar9 = "mediump";
         bVar5 = *(byte*)( (long)param_2 + 0x1b ) >> 1 & 7;
         if (bVar5 != 2) {
            if (bVar5 < 3) {
               pcVar9 = "";
               if (bVar5 != 0) {
                  pcVar9 = "lowp";
               }

            }
 else {
               pcVar9 = "highp";
               if (bVar5 != 3) {
                  pcVar9 = "unknown precision qualifier";
               }

            }

         }

         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, pcVar9);
      }

      if (*(code**)( *param_2 + 0xd8 ) == isVector) {
         if (( *(byte*)( (long)param_2 + 9 ) & 0xf ) < 2) {
            bVar5 = *(byte*)( (long)param_2 + 10 ) >> 4 & 1;
            goto LAB_0010e604;
         }

         LAB_0010e218:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
         bVar5 = *(byte*)( param_2 + 1 );
         if (bVar5 == 9) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "u");
         }
 else if (bVar5 < 10) {
            if (bVar5 == 2) {
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "d");
            }
 else if (bVar5 == 8) {
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "i");
            }

         }
 else if (bVar5 == 0xc) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "b");
         }

         if (*(code**)( *param_2 + 0xd8 ) == isVector) {
            if (( *(byte*)( (long)param_2 + 9 ) & 0xf ) < 2) {
               bVar5 = *(byte*)( (long)param_2 + 10 ) >> 4 & 1;
               goto LAB_0010e9e4;
            }

         }
 else {
            bVar5 = ( **(code**)( *param_2 + 0xd8 ) )(param_2);
            LAB_0010e9e4:if (bVar5 == 0) {
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "mat");
               ::{lambda (int);
               #3
               ( (_lambda_int__3_*)&local_128,( uint )(*(byte*)( (long)param_2 + 9 ) >> 4) );
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "x");
               ::{lambda (int);
               #3
               ( (_lambda_int__3_*)&local_128,*(byte*)( (long)param_2 + 10 ) & 0xf );
               goto LAB_0010e29f;
            }

         }

         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "vec");
         ::{lambda (int);
         #3
         ( (_lambda_int__3_*)&local_128,*(byte*)( (long)param_2 + 9 ) & 0xf );
      }
 else {
         bVar5 = ( **(code**)( *param_2 + 0xd8 ) )(param_2);
         LAB_0010e604:if (bVar5 != 0) goto LAB_0010e218;
         lVar12 = *param_2;
         if (*(code**)( lVar12 + 0xe0 ) != isMatrix) {
            cVar4 = ( **(code**)( lVar12 + 0xe0 ) )(param_2);
            if (cVar4 == '\0') {
               lVar12 = *param_2;
               goto LAB_0010e633;
            }

            goto LAB_0010e218;
         }

         if (0xf < *(byte*)( (long)param_2 + 9 )) goto LAB_0010e218;
         LAB_0010e633:if (*(code**)( lVar12 + 0x128 ) == isStruct) {
            if (1 < ( byte )((char)param_2[1] - 0xfU)) goto LAB_0010e7f0;
            LAB_0010e65b:if (param_2[0xd] == 0) goto LAB_0010e7f0;
            uVar16 = 0;
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, *(char**)( param_8 + 8 ));
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "{");
            lVar12 = param_2[0xd];
            lVar17 = *(long*)( lVar12 + 8 );
            if (*(long*)( lVar12 + 0x10 ) != lVar17) {
               do {
                  lVar15 = uVar16 * 0x20;
                  pcVar2 = *(code**)( **(long**)( lVar17 + lVar15 ) + 0x18 );
                  if (pcVar2 == hiddenMember) {
                     if ((char)( *(long**)( lVar17 + lVar15 ) )[1] != '\0') {
                        LAB_0010e6ec:if (param_3 == '\0') {
                           std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, ", ");
                        }

                        uVar8 = *(undefined8*)( *(long*)( param_2[0xd] + 8 ) + lVar15 );
                        local_118 = glslang::GetThreadPoolAllocator();
                        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string<glslang::std::allocator<char>>(local_98, "", (allocator*)&local_118);
                        plVar3 = *(long**)( *(long*)( param_2[0xd] + 8 ) + lVar15 );
                        pcVar2 = *(code**)( *plVar3 + 0x30 );
                        if (pcVar2 == getFieldName_abi_cxx11_) {
                           pbVar11 = (basic_string*)plVar3[0xe];
                        }
 else {
                           pbVar11 = (basic_string*)( *pcVar2 )();
                        }

                        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string(local_c8, pbVar11);
                        getCompleteString(&local_68, uVar8, 1, param_4, param_5, 1, local_c8, local_98);
                        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, (char*)local_60, local_58);
                        param_3 = '\0';
                        goto LAB_0010e7a3;
                     }

                  }
 else {
                     cVar4 = ( *pcVar2 )();
                     if (cVar4 == '\0') goto LAB_0010e6ec;
                     LAB_0010e7a3:lVar12 = param_2[0xd];
                  }

                  lVar17 = *(long*)( lVar12 + 8 );
                  uVar16 = uVar16 + 1;
               }
 while ( uVar16 < ( ulong )(*(long*)( lVar12 + 0x10 ) - lVar17 >> 5) );
            }

            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "}");
         }
 else {
            cVar4 = ( **(code**)( lVar12 + 0x128 ) )(param_2);
            if (cVar4 != '\0') goto LAB_0010e65b;
            LAB_0010e7f0:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
            switch ((char)param_2[1]) {
               default:
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(param_1,"unexpected");
          break;
               case '\x01':
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(param_1,"float");
          break;
               case '\x02':
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(param_1,"double");
          break;
               case '\b':
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(param_1,"int");
          break;
               case '\t':
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(param_1,"uint");
          break;
               case '\f':
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(param_1,"bool");
            }

         }

      }

      LAB_0010e29f:if (*(long*)( param_7 + 0x10 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, *(char**)( param_7 + 8 ));
      }

      if (*(code**)( *param_2 + 0xe8 ) == isArray) {
         lVar12 = param_2[0xc];
         if (lVar12 == 0) goto LAB_0010e058;
      }
 else {
         cVar4 = ( **(code**)( *param_2 + 0xe8 ) )(param_2);
         if (cVar4 == '\0') goto LAB_0010e058;
         lVar12 = param_2[0xc];
      }

      lVar17 = *(long*)( lVar12 + 8 );
      if (lVar17 != 0) {
         lVar15 = 0;
         do {
            if ((int)( *(long*)( lVar17 + 0x10 ) - *(long*)( lVar17 + 8 ) >> 4 ) <= (int)lVar15) break;
            iVar13 = *(int*)( *(long*)( lVar17 + 8 ) + lVar15 * 0x10 );
            if (iVar13 == 0 && (int)lVar15 == 0) {
               if (*(char*)( lVar12 + 0x15 ) == '\0') {
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "[");
                  LAB_0010e31d:iVar13 = *(int*)( param_2[0xc] + 0x10 );
                  if (iVar13 < 1) {
                     iVar13 = 1;
                  }

                  ::{lambda (int);
                  #3
                  goto LAB_0010e340;
               }

               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "[]");
            }
 else {
               if (iVar13 == 0) {
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "[");
                  if (lVar15 == 0) goto LAB_0010e31d;
               }
 else {
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "[");
                  ::{lambda (int);
                  #3
                  ( (_lambda_int__3_*)&local_128,*(int*)( *(long*)( *(long*)( param_2[0xc] + 8 ) + 8 ) + lVar15 * 0x10 ) );
               }

               LAB_0010e340:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "]");
            }

            lVar12 = param_2[0xc];
            lVar15 = lVar15 + 1;
            lVar17 = *(long*)( lVar12 + 8 );
         }
 while ( lVar17 != 0 );
      }

      goto LAB_0010e058;
   }

   lVar12 = *param_2;
   if (*(code**)( lVar12 + 0xe8 ) == isArray) {
      lVar17 = param_2[0xc];
      if (lVar17 != 0) {
         LAB_0010dd12:lVar15 = 0;
         lVar12 = *(long*)( lVar17 + 8 );
         while (lVar12 != 0) {
            if ((int)( *(long*)( lVar12 + 0x10 ) - *(long*)( lVar12 + 8 ) >> 4 ) <= (int)lVar15) break;
            iVar13 = *(int*)( *(long*)( lVar12 + 8 ) + lVar15 * 0x10 );
            if (iVar13 == 0 && (int)lVar15 == 0) {
               if (*(char*)( lVar17 + 0x15 ) == '\0') {
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " unsized");
                  LAB_0010dd59:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
                  iVar13 = *(int*)( param_2[0xc] + 0x10 );
                  if (iVar13 < 1) {
                     iVar13 = 1;
                  }

                  ::{lambda (int);
                  #3
                  goto LAB_0010dd80;
               }

               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " runtime-sized array of");
            }
 else {
               if (iVar13 == 0) {
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " unsized");
                  if (lVar15 == 0) goto LAB_0010dd59;
               }
 else {
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
                  ::{lambda (int);
                  #3
                  ( (_lambda_int__3_*)&local_128,*(int*)( *(long*)( *(long*)( param_2[0xc] + 8 ) + 8 ) + lVar15 * 0x10 ) );
               }

               LAB_0010dd80:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "-element array of");
            }

            lVar17 = param_2[0xc];
            lVar15 = lVar15 + 1;
            lVar12 = *(long*)( lVar17 + 8 );
         }
;
         lVar12 = *param_2;
      }

   }
 else {
      cVar4 = ( **(code**)( lVar12 + 0xe8 ) )(param_2);
      if (cVar4 != '\0') {
         lVar17 = param_2[0xc];
         goto LAB_0010dd12;
      }

      lVar12 = *param_2;
   }

   if (*(code**)( lVar12 + 0x188 ) == isParameterized) {
      if (param_2[0x11] != 0) {
         LAB_0010e44a:if (( *(byte*)( (long)param_2 + 10 ) & 0x40 ) != 0) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "coopmat");
         }

         lVar17 = 0;
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "<");
         lVar12 = *(long*)( *(long*)( param_2[0x11] + 8 ) + 8 );
         if (lVar12 != 0) {
            while (true) {
               if ((int)( *(long*)( lVar12 + 0x10 ) - *(long*)( lVar12 + 8 ) >> 4 ) <= (int)lVar17) break;
               ::{lambda (int);
               #3
               ( (_lambda_int__3_*)&local_128,*(int*)( *(long*)( lVar12 + 8 ) + lVar17 * 0x10 ) );
               lVar12 = *(long*)( *(long*)( param_2[0x11] + 8 ) + 8 );
               if (( lVar12 == 0 ) || ( (int)( *(long*)( lVar12 + 0x10 ) - *(long*)( lVar12 + 8 ) >> 4 ) + -1 != (int)lVar17 )) {
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, ", ");
                  lVar12 = *(long*)( *(long*)( param_2[0x11] + 8 ) + 8 );
                  if (lVar12 == 0) break;
               }

               lVar17 = lVar17 + 1;
            }
;
         }

         if (( *(byte*)( (long)param_2 + 0xb ) & 4 ) != 0) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, ", ");
            ::{lambda (int);
            #3
            ( (_lambda_int__3_*)&local_128,*(ushort*)( (long)param_2 + 10 ) >> 7 & 7 );
         }

         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, ">");
      }

   }
 else {
      cVar4 = ( **(code**)( lVar12 + 0x188 ) )(param_2);
      if (cVar4 != '\0') goto LAB_0010e44a;
   }

   if (( param_5 != '\0' ) && ( ( *(byte*)( (long)param_2 + 0x1b ) & 0xe ) != 0 )) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
      pcVar9 = "mediump";
      bVar5 = *(byte*)( (long)param_2 + 0x1b ) >> 1 & 7;
      if (bVar5 != 2) {
         if (bVar5 < 3) {
            pcVar9 = "";
            if (bVar5 != 0) {
               pcVar9 = "lowp";
            }

         }
 else {
            pcVar9 = "highp";
            if (bVar5 != 3) {
               pcVar9 = "unknown precision qualifier";
            }

         }

      }

      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, pcVar9);
   }

   lVar12 = *param_2;
   if (*(code**)( lVar12 + 0xe0 ) == isMatrix) {
      if (*(byte*)( (long)param_2 + 9 ) < 0x10) goto LAB_0010e55b;
      LAB_0010e915:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
      ::{lambda (int);
      #3
      ( (_lambda_int__3_*)&local_128,( uint )(*(byte*)( (long)param_2 + 9 ) >> 4) );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "X");
      ::{lambda (int);
      #3
      ( (_lambda_int__3_*)&local_128,*(byte*)( (long)param_2 + 10 ) & 0xf );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " matrix of");
   }
 else {
      cVar4 = ( **(code**)( lVar12 + 0xe0 ) )(param_2);
      if (cVar4 != '\0') goto LAB_0010e915;
      lVar12 = *param_2;
      LAB_0010e55b:if (*(code**)( lVar12 + 0xd8 ) == isVector) {
         if (( *(byte*)( (long)param_2 + 9 ) & 0xf ) < 2) {
            bVar5 = *(byte*)( (long)param_2 + 10 ) >> 4 & 1;
            goto LAB_0010e9c4;
         }

      }
 else {
         bVar5 = ( **(code**)( lVar12 + 0xd8 ) )(param_2);
         LAB_0010e9c4:if (bVar5 == 0) goto LAB_0010e5b1;
      }

      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
      ::{lambda (int);
      #3
      ( (_lambda_int__3_*)&local_128,*(byte*)( (long)param_2 + 9 ) & 0xf );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "-component vector of");
   }

   LAB_0010e5b1:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
   if ((char)param_2[1] == '\x0e') {
      TSampler::getString_abi_cxx11_();
   }
 else {
      local_68 = glslang::GetThreadPoolAllocator();
      switch ((char)param_2[1]) {
         case '\0':
      lVar12 = 4;
      pcVar9 = "void";
      break;
         case '\x01':
      lVar12 = 5;
      pcVar9 = "float";
      break;
         case '\x02':
      lVar12 = 6;
      pcVar9 = "double";
      break;
         case '\x03':
      lVar12 = 9;
      pcVar9 = "float16_t";
      break;
         case '\x04':
      lVar12 = 6;
      pcVar9 = "int8_t";
      break;
         case '\x05':
      lVar12 = 7;
      pcVar9 = "uint8_t";
      break;
         case '\x06':
      lVar12 = 7;
      pcVar9 = "int16_t";
      break;
         case '\a':
      lVar12 = 8;
      pcVar9 = "uint16_t";
      break;
         case '\b':
      lVar12 = 3;
      pcVar9 = "int";
      break;
         case '\t':
      lVar12 = 4;
      pcVar9 = "uint";
      break;
         case '\n':
      lVar12 = 7;
      pcVar9 = "int64_t";
      break;
         case '\v':
      lVar12 = 8;
      pcVar9 = "uint64_t";
      break;
         case '\f':
      lVar12 = 4;
      pcVar9 = "bool";
      break;
         case '\r':
      lVar12 = 0xb;
      pcVar9 = "atomic_uint";
      break;
         case '\x0e':
      lVar12 = 0xd;
      pcVar9 = "sampler/image";
      break;
         case '\x0f':
      lVar12 = 9;
      pcVar9 = "structure";
      break;
         case '\x10':
      lVar12 = 5;
      pcVar9 = "block";
      break;
         case '\x11':
      lVar12 = 0x17;
      pcVar9 = "accelerationStructureNV";
      break;
         case '\x12':
      lVar12 = 9;
      pcVar9 = "reference";
      break;
         case '\x13':
      lVar12 = 0xb;
      pcVar9 = "rayQueryEXT";
      break;
         default:
      lVar12 = 0xc;
      pcVar9 = "unknown type";
      break;
         case '\x15':
      lVar12 = 7;
      pcVar9 = "coopmat";
      break;
         case '\x16':
      lVar12 = 10;
      pcVar9 = "spirv_type";
      break;
         case '\x17':
      lVar12 = 6;
      pcVar9 = "string";
      }

      local_60 = local_50;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_68, pcVar9, pcVar9 + lVar12);
   }

   uVar16 = *(ulong*)( param_1 + 0x10 );
   if (0x7fffffffffffffff - uVar16 < local_58) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::append");
   }

   pbVar14 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
   uVar1 = local_58 + uVar16;
   if (param_1 + 0x18 == pbVar14) {
      uVar10 = 0xf;
   }
 else {
      uVar10 = *(ulong*)( param_1 + 0x18 );
   }

   if (uVar10 < uVar1) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar16, 0, (char*)local_60, local_58);
      pbVar14 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
   }
 else if (local_58 != 0) {
      if (local_58 == 1) {
         pbVar14[uVar16] = *local_60;
         pbVar14 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
      }
 else {
         memcpy(pbVar14 + uVar16, local_60, local_58);
         pbVar14 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
      }

   }

   *(ulong*)( param_1 + 0x10 ) = uVar1;
   pbVar14[uVar1] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
   if (0x7f < *(ushort*)( param_2 + 3 )) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
      pcVar9 = (char*)GetBuiltInVariableString(*(ushort*)( param_2 + 3 ) >> 7);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, pcVar9);
   }

   if (*(code**)( *param_2 + 0x128 ) == isStruct) {
      if (1 < ( byte )((char)param_2[1] - 0xfU)) goto LAB_0010e058;
   }
 else {
      cVar4 = ( **(code**)( *param_2 + 0x128 ) )(param_2);
      if (cVar4 == '\0') goto LAB_0010e058;
   }

   if (param_2[0xd] != 0) {
      uVar16 = 0;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "{");
      lVar12 = param_2[0xd];
      lVar17 = *(long*)( lVar12 + 8 );
      if (*(long*)( lVar12 + 0x10 ) != lVar17) {
         do {
            lVar15 = uVar16 * 0x20;
            pcVar2 = *(code**)( **(long**)( lVar17 + lVar15 ) + 0x18 );
            if (pcVar2 == hiddenMember) {
               if ((char)( *(long**)( lVar17 + lVar15 ) )[1] != '\0') {
                  LAB_0010df34:if (param_6 == '\0') {
                     std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, ", ");
                  }

                  uVar8 = *(undefined8*)( *(long*)( param_2[0xd] + 8 ) + lVar15 );
                  local_118 = glslang::GetThreadPoolAllocator();
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string<glslang::std::allocator<char>>(local_98, "", (allocator*)&local_118);
                  local_120 = glslang::GetThreadPoolAllocator();
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string<glslang::std::allocator<char>>(local_c8, "", (allocator*)&local_120);
                  getCompleteString(&local_68, uVar8, 0, 1, 1, 1, local_c8, local_98);
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, (char*)local_60, local_58);
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
                  plVar3 = *(long**)( *(long*)( param_2[0xd] + 8 ) + lVar15 );
                  pcVar2 = *(code**)( *plVar3 + 0x30 );
                  if (pcVar2 == getFieldName_abi_cxx11_) {
                     lVar12 = plVar3[0xe];
                  }
 else {
                     lVar12 = ( *pcVar2 )();
                  }

                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, *(char**)( lVar12 + 8 ), *(ulong*)( lVar12 + 0x10 ));
                  param_6 = '\0';
                  goto LAB_0010e022;
               }

            }
 else {
               cVar4 = ( *pcVar2 )();
               if (cVar4 == '\0') goto LAB_0010df34;
               LAB_0010e022:lVar12 = param_2[0xd];
            }

            lVar17 = *(long*)( lVar12 + 8 );
            uVar16 = uVar16 + 1;
         }
 while ( uVar16 < ( ulong )(*(long*)( lVar12 + 0x10 ) - lVar17 >> 5) );
      }

      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "}");
   }

   LAB_0010e058:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TFunction::addParameter(glslang::TParameter&) */void glslang::TFunction::addParameter(TFunction *this, TParameter *param_1) {
   undefined8 *puVar1;
   ulong uVar2;
   undefined8 uVar3;
   TFunction *pTVar4;
   ulong uVar5;
   puVar1 = *(undefined8**)( this + 0x38 );
   if (puVar1 == *(undefined8**)( this + 0x40 )) {
      std::vector<glslang::TParameter,glslang::pool_allocator<glslang::TParameter>>::_M_realloc_insert<glslang::TParameter_const&>((vector<glslang::TParameter,glslang::pool_allocator<glslang::TParameter>>*)( this + 0x28 ), puVar1, param_1);
   }
 else {
      uVar3 = *(undefined8*)( param_1 + 8 );
      *puVar1 = *(undefined8*)param_1;
      puVar1[1] = uVar3;
      puVar1[2] = *(undefined8*)( param_1 + 0x10 );
      *(undefined8**)( this + 0x38 ) = puVar1 + 3;
   }

   TType::buildMangledName(*(TType**)( param_1 + 8 ), (basic_string*)( this + 0xe8 ));
   uVar2 = *(ulong*)( this + 0xf8 );
   pTVar4 = *(TFunction**)( this + 0xf0 );
   if (pTVar4 == this + 0x100) {
      uVar5 = 0xf;
   }
 else {
      uVar5 = *(ulong*)( this + 0x100 );
   }

   if (uVar5 < uVar2 + 1) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)( this + 0xe8 ), uVar2, 0, (char*)0x0, 1);
      pTVar4 = *(TFunction**)( this + 0xf0 );
   }

   pTVar4[uVar2] = (TFunction)0x3b;
   *(ulong*)( this + 0xf8 ) = uVar2 + 1;
   *(undefined1*)( *(long*)( this + 0xf0 ) + 1 + uVar2 ) = 0;
   if (*(long*)( param_1 + 0x10 ) != 0) {
      *(int*)( this + 0x118 ) = *(int*)( this + 0x118 ) + 1;
   }

   return;
}
/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_assign(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */void std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this, basic_string *param_1) {
   ulong __n;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *__dest;
   ulong uVar1;
   ulong uVar2;
   if (this == (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)param_1) {
      return;
   }

   __dest = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 );
   __n = *(ulong*)( param_1 + 0x10 );
   if (__dest == this + 0x18) {
      uVar1 = 0xf;
   }
 else {
      uVar1 = *(ulong*)( this + 0x18 );
   }

   if (uVar1 < __n) {
      if ((long)__n < 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("basic_string::_M_create");
      }

      uVar1 = uVar1 * 2;
      uVar2 = 0x7fffffffffffffff;
      if (uVar1 < 0x8000000000000000) {
         uVar2 = uVar1;
      }

      if (uVar1 <= __n) {
         uVar2 = __n;
      }

      __dest = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)glslang::TPoolAllocator::allocate(*(ulong*)this);
      *(ulong*)( this + 0x18 ) = uVar2;
      *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 ) = __dest;
   }
 else if (__n == 0) goto LAB_0010fb2c;
   if (__n == 1) {
      *__dest = **(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
      __dest = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 );
   }
 else {
      memcpy(__dest, *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ), __n);
      __dest = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 );
   }

   LAB_0010fb2c:*(ulong*)( this + 0x10 ) = __n;
   __dest[__n] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
   return;
}
/* glslang::TFunction::setSpirvInstruction(glslang::TSpirvInstruction const&) */void glslang::TFunction::setSpirvInstruction(TFunction *this, TSpirvInstruction *param_1) {
   if (*(code**)( *(long*)this + 0xd0 ) == relateToOperator) {
      *(undefined4*)( this + 0x110 ) = 7;
   }
 else {
      ( **(code**)( *(long*)this + 0xd0 ) )(this, 7);
   }

   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)( this + 0x120 ), (basic_string*)param_1);
   *(undefined4*)( this + 0x148 ) = *(undefined4*)( param_1 + 0x28 );
   return;
}
/* void std::vector<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >,
   glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >
   >::_M_realloc_insert<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >
   >(__gnu_cxx::__normal_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >*, std::vector<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > > > >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >&&) */void std::vector<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>::_M_realloc_insert<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>(vector<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>> *this, long param_2, long param_3) {
   long lVar1;
   undefined1 *puVar2;
   long lVar3;
   ulong uVar4;
   ulong uVar5;
   ulong *puVar6;
   ulong *puVar7;
   long lVar8;
   ulong *local_60;
   ulong local_50;
   lVar1 = *(long*)( this + 0x10 );
   lVar8 = *(long*)( this + 8 );
   lVar3 = lVar1 - lVar8 >> 4;
   uVar4 = lVar3 * -0x3333333333333333;
   if (uVar4 == 0x199999999999999) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   if (lVar8 == lVar1) {
      if (0xfffffffffffffffe < uVar4) goto LAB_0010fe20;
      local_50 = 0x199999999999999;
      if (uVar4 + 1 < 0x19999999999999a) {
         local_50 = uVar4 + 1;
      }

      LAB_0010fe2f:local_60 = (ulong*)glslang::TPoolAllocator::allocate(*(ulong*)this);
   }
 else {
      uVar5 = lVar3 * -0x6666666666666666;
      if (uVar5 < uVar4) {
         LAB_0010fe20:local_50 = 0x199999999999999;
         goto LAB_0010fe2f;
      }

      if (uVar5 != 0) {
         local_50 = 0x199999999999999;
         if (uVar5 < 0x19999999999999a) {
            local_50 = uVar5;
         }

         goto LAB_0010fe2f;
      }

      local_60 = (ulong*)0x0;
      local_50 = uVar5;
   }

   puVar7 = (ulong*)( ( param_2 - lVar8 ) + (long)local_60 );
   uVar5 = glslang::GetThreadPoolAllocator();
   uVar4 = *(ulong*)( param_3 + 0x10 );
   puVar6 = puVar7 + 3;
   *puVar7 = uVar5;
   puVar7[1] = (ulong)puVar6;
   puVar2 = *(undefined1**)( param_3 + 8 );
   if (uVar4 < 0x10) {
      if (uVar4 == 1) {
         *(undefined1*)( puVar7 + 3 ) = *puVar2;
      }
 else if (uVar4 != 0) goto LAB_0011009c;
   }
 else {
      if ((long)uVar4 < 0) goto LAB_00110106;
      puVar6 = (ulong*)glslang::TPoolAllocator::allocate(uVar5);
      puVar7[1] = (ulong)puVar6;
      puVar7[3] = uVar4;
      LAB_0011009c:memcpy(puVar6, puVar2, uVar4);
      puVar6 = (ulong*)puVar7[1];
   }

   puVar7[2] = uVar4;
   *(undefined1*)( (long)puVar6 + uVar4 ) = 0;
   uVar5 = glslang::GetThreadPoolAllocator();
   puVar6 = puVar7 + 8;
   puVar7[5] = uVar5;
   puVar7[6] = (ulong)puVar6;
   puVar2 = *(undefined1**)( param_3 + 0x30 );
   uVar4 = *(ulong*)( param_3 + 0x38 );
   if (uVar4 < 0x10) {
      if (uVar4 == 1) {
         *(undefined1*)( puVar7 + 8 ) = *puVar2;
         goto LAB_0010fd31;
      }

      if (uVar4 == 0) goto LAB_0010fd31;
   }
 else {
      if ((long)uVar4 < 0) {
         LAB_00110106:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::_M_create");
      }

      puVar6 = (ulong*)glslang::TPoolAllocator::allocate(uVar5);
      puVar7[6] = (ulong)puVar6;
      puVar7[8] = uVar4;
   }

   memcpy(puVar6, puVar2, uVar4);
   puVar6 = (ulong*)puVar7[6];
   LAB_0010fd31:puVar7[7] = uVar4;
   *(undefined1*)( (long)puVar6 + uVar4 ) = 0;
   puVar6 = local_60;
   for (; param_2 != lVar8; lVar8 = lVar8 + 0x50) {
      uVar5 = glslang::GetThreadPoolAllocator();
      uVar4 = *(ulong*)( lVar8 + 0x10 );
      puVar7 = puVar6 + 3;
      puVar6[1] = (ulong)puVar7;
      puVar2 = *(undefined1**)( lVar8 + 8 );
      *puVar6 = uVar5;
      if (uVar4 < 0x10) {
         if (uVar4 == 1) {
            *(undefined1*)( puVar6 + 3 ) = *puVar2;
         }
 else if (uVar4 != 0) goto LAB_0010fe06;
      }
 else {
         if ((long)uVar4 < 0) goto LAB_00110106;
         puVar7 = (ulong*)glslang::TPoolAllocator::allocate(uVar5);
         puVar6[3] = uVar4;
         puVar6[1] = (ulong)puVar7;
         LAB_0010fe06:memcpy(puVar7, puVar2, uVar4);
         puVar7 = (ulong*)puVar6[1];
      }

      puVar6[2] = uVar4;
      *(undefined1*)( (long)puVar7 + uVar4 ) = 0;
      uVar5 = glslang::GetThreadPoolAllocator();
      uVar4 = *(ulong*)( lVar8 + 0x38 );
      puVar7 = puVar6 + 8;
      puVar6[6] = (ulong)puVar7;
      puVar2 = *(undefined1**)( lVar8 + 0x30 );
      puVar6[5] = uVar5;
      if (uVar4 < 0x10) {
         if (uVar4 == 1) {
            *(undefined1*)( puVar6 + 8 ) = *puVar2;
         }
 else if (uVar4 != 0) goto LAB_0010fe98;
      }
 else {
         if ((long)uVar4 < 0) goto LAB_00110106;
         puVar7 = (ulong*)glslang::TPoolAllocator::allocate(uVar5);
         puVar6[8] = uVar4;
         puVar6[6] = (ulong)puVar7;
         LAB_0010fe98:memcpy(puVar7, puVar2, uVar4);
         puVar7 = (ulong*)puVar6[6];
      }

      puVar6[7] = uVar4;
      puVar6 = puVar6 + 10;
      *(undefined1*)( (long)puVar7 + uVar4 ) = 0;
   }

   puVar6 = puVar6 + 10;
   if (param_2 != lVar1) {
      do {
         uVar5 = glslang::GetThreadPoolAllocator();
         uVar4 = *(ulong*)( param_2 + 0x10 );
         puVar7 = puVar6 + 3;
         puVar6[1] = (ulong)puVar7;
         puVar2 = *(undefined1**)( param_2 + 8 );
         *puVar6 = uVar5;
         if (uVar4 < 0x10) {
            if (uVar4 == 1) {
               *(undefined1*)( puVar6 + 3 ) = *puVar2;
            }
 else if (uVar4 != 0) goto LAB_0010ff68;
         }
 else {
            if ((long)uVar4 < 0) goto LAB_00110106;
            puVar7 = (ulong*)glslang::TPoolAllocator::allocate(uVar5);
            puVar6[3] = uVar4;
            puVar6[1] = (ulong)puVar7;
            LAB_0010ff68:memcpy(puVar7, puVar2, uVar4);
            puVar7 = (ulong*)puVar6[1];
         }

         puVar6[2] = uVar4;
         *(undefined1*)( (long)puVar7 + uVar4 ) = 0;
         uVar5 = glslang::GetThreadPoolAllocator();
         uVar4 = *(ulong*)( param_2 + 0x38 );
         puVar7 = puVar6 + 8;
         puVar6[6] = (ulong)puVar7;
         puVar2 = *(undefined1**)( param_2 + 0x30 );
         puVar6[5] = uVar5;
         if (uVar4 < 0x10) {
            if (uVar4 == 1) {
               *(undefined1*)( puVar6 + 8 ) = *puVar2;
            }
 else if (uVar4 != 0) goto LAB_0010ffc0;
         }
 else {
            if ((long)uVar4 < 0) goto LAB_00110106;
            puVar7 = (ulong*)glslang::TPoolAllocator::allocate(uVar5);
            puVar6[8] = uVar4;
            puVar6[6] = (ulong)puVar7;
            LAB_0010ffc0:memcpy(puVar7, puVar2, uVar4);
            puVar7 = (ulong*)puVar6[6];
         }

         param_2 = param_2 + 0x50;
         puVar6[7] = uVar4;
         puVar6 = puVar6 + 10;
         *(undefined1*)( (long)puVar7 + uVar4 ) = 0;
      }
 while ( param_2 != lVar1 );
   }

   *(ulong**)( this + 8 ) = local_60;
   *(ulong**)( this + 0x10 ) = puVar6;
   *(ulong**)( this + 0x18 ) = local_60 + local_50 * 10;
   return;
}
/* void std::vector<glslang::TSymbolTableLevel*, std::allocator<glslang::TSymbolTableLevel*>
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
      if (0xfffffffffffffffe < uVar2) goto LAB_00110210;
      uVar3 = 0xfffffffffffffff;
      if (uVar2 + 1 < 0x1000000000000000) {
         uVar3 = uVar2 + 1;
      }

      uVar3 = uVar3 << 3;
      LAB_0011021a:__dest_00 = operator_new(uVar3);
      lVar4 = uVar3 + (long)__dest_00;
   }
 else {
      uVar3 = uVar2 * 2;
      if (uVar3 < uVar2) {
         LAB_00110210:uVar3 = 0x7ffffffffffffff8;
         goto LAB_0011021a;
      }

      if (uVar3 != 0) {
         if (0xfffffffffffffff < uVar3) {
            uVar3 = 0xfffffffffffffff;
         }

         uVar3 = uVar3 * 8;
         goto LAB_0011021a;
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

      if (__src == (void*)0x0) goto LAB_001101ec;
   }
 else {
      __dest_00 = memmove(__dest_00, __src, __n);
      if (0 < (long)__n_00) {
         memcpy(__dest, param_2, __n_00);
      }

   }

   operator_delete(__src, *(long*)( this + 0x10 ) - (long)__src);
   LAB_001101ec:*(void**)this = __dest_00;
   *(size_t*)( this + 8 ) = (long)__dest + __n_00;
   *(long*)( this + 0x10 ) = lVar4;
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
/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_replace(unsigned long, unsigned long, char const*, unsigned long) [clone .isra.0] [clone
   .cold] */void std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_replace(ulong param_1, ulong param_2, char *param_3, ulong param_4) {
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *unaff_RBX;
   long unaff_RBP;
   ulong in_R8;
   ulong in_R9;
   char *unaff_R12;
   char *unaff_R13;
   _M_replace_cold(unaff_RBX, unaff_R13, (ulong)param_3, unaff_R12, in_R8, in_R9);
   *(long*)( unaff_RBX + 0x10 ) = unaff_RBP;
   *(undefined1*)( *(long*)( unaff_RBX + 8 ) + unaff_RBP ) = 0;
   return;
}
/* glslang::TFunction::addPrefix(char const*) */void glslang::TFunction::addPrefix(TFunction *this, char *param_1) {
   code *pcVar1;
   char *__s;
   size_t sVar2;
   ulong uVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   undefined8 local_58;
   char *local_50;
   long local_48;
   char local_40[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = glslang::GetThreadPoolAllocator();
   local_50 = local_40;
   if (param_1 != (char*)0x0) {
      sVar2 = strlen(param_1);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_58, param_1, param_1 + sVar2);
      uVar3 = *(ulong*)( *(long*)( this + 8 ) + 0x10 );
      if (0x7fffffffffffffffU - local_48 < uVar3) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("basic_string::append");
      }

      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_58, *(char**)( *(long*)( this + 8 ) + 8 ), uVar3);
      __s = local_50;
      pcVar1 = *(code**)( *(long*)this + 0x20 );
      uVar3 = glslang::GetThreadPoolAllocator();
      puVar4 = (undefined8*)glslang::TPoolAllocator::allocate(uVar3);
      uVar5 = glslang::GetThreadPoolAllocator();
      *puVar4 = uVar5;
      puVar4[1] = puVar4 + 3;
      if (__s != (char*)0x0) {
         sVar2 = strlen(__s);
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(puVar4, __s, __s + sVar2);
         if (pcVar1 == TSymbol::changeName) {
            *(undefined8**)( this + 8 ) = puVar4;
         }
 else {
            ( *pcVar1 )(this);
         }

         sVar2 = strlen(param_1);
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_replace((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)( this + 0xe8 ), 0, 0, param_1, sVar2);
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

   }

   /* WARNING: Subroutine does not return */
   std::__throw_logic_error("basic_string: construction from null is not valid");
}
/* std::_Rb_tree_node<std::pair<int const, glslang::TVector<glslang::TIntermConstantUnion const*> >
   >* std::_Rb_tree<int, std::pair<int const, glslang::TVector<glslang::TIntermConstantUnion const*>
   >, std::_Select1st<std::pair<int const, glslang::TVector<glslang::TIntermConstantUnion const*> >
   >, std::less<int>, glslang::pool_allocator<std::pair<int const,
   glslang::TVector<glslang::TIntermConstantUnion const*> > >
   >::_Reuse_or_alloc_node::TEMPNAMEPLACEHOLDERVALUE(std::pair<int const,
   glslang::TVector<glslang::TIntermConstantUnion const*> > const&) */_Rb_tree_node * __thiscall
std::
_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>
::_Reuse_or_alloc_node::operator()(_Reuse_or_alloc_node *this,pair_conflict *param_1){
   ulong uVar1;
   long lVar2;
   _Rb_tree_node *p_Var3;
   long lVar4;
   long lVar5;
   long lVar6;
   p_Var3 = *(_Rb_tree_node**)( this + 8 );
   if (p_Var3 == (_Rb_tree_node*)0x0) {
      p_Var3 = (_Rb_tree_node*)glslang::TPoolAllocator::allocate(**(ulong**)( this + 0x10 ));
      *(undefined4*)( p_Var3 + 0x20 ) = *(undefined4*)param_1;
      uVar1 = glslang::GetThreadPoolAllocator();
      lVar5 = *(long*)( param_1 + 0x18 );
      lVar2 = *(long*)( param_1 + 0x10 );
      *(undefined8*)( p_Var3 + 0x30 ) = 0;
      *(ulong*)( p_Var3 + 0x28 ) = uVar1;
      *(undefined8*)( p_Var3 + 0x38 ) = 0;
      *(undefined8*)( p_Var3 + 0x40 ) = 0;
      lVar4 = 0;
      if (lVar5 - lVar2 != 0) {
         lVar4 = glslang::TPoolAllocator::allocate(uVar1);
      }

      *(long*)( p_Var3 + 0x40 ) = ( lVar5 - lVar2 ) + lVar4;
      *(long*)( p_Var3 + 0x30 ) = lVar4;
      *(long*)( p_Var3 + 0x38 ) = lVar4;
      lVar5 = *(long*)( param_1 + 0x10 );
      if (*(long*)( param_1 + 0x18 ) != lVar5) {
         lVar6 = *(long*)( param_1 + 0x18 ) - lVar5;
         lVar2 = 0;
         do {
            *(undefined8*)( lVar4 + lVar2 ) = *(undefined8*)( lVar5 + lVar2 );
            lVar2 = lVar2 + 8;
         }
 while ( lVar6 != lVar2 );
         lVar4 = lVar4 + lVar6;
      }

      *(long*)( p_Var3 + 0x38 ) = lVar4;
      return p_Var3;
   }

   lVar5 = *(long*)( p_Var3 + 8 );
   *(long*)( this + 8 ) = lVar5;
   if (lVar5 == 0) {
      *(undefined8*)this = 0;
   }
 else if (p_Var3 == *(_Rb_tree_node**)( lVar5 + 0x18 )) {
      lVar2 = *(long*)( lVar5 + 0x10 );
      *(undefined8*)( lVar5 + 0x18 ) = 0;
      if (lVar2 != 0) {
         lVar5 = *(long*)( lVar2 + 0x18 );
         *(long*)( this + 8 ) = lVar2;
         if (lVar5 != 0) {
            do {
               lVar2 = lVar5;
               lVar5 = *(long*)( lVar2 + 0x18 );
            }
 while ( *(long*)( lVar2 + 0x18 ) != 0 );
            *(long*)( this + 8 ) = lVar2;
         }

         if (*(long*)( lVar2 + 0x10 ) != 0) {
            *(long*)( this + 8 ) = *(long*)( lVar2 + 0x10 );
         }

      }

   }
 else {
      *(undefined8*)( lVar5 + 0x10 ) = 0;
   }

   *(undefined4*)( p_Var3 + 0x20 ) = *(undefined4*)param_1;
   uVar1 = glslang::GetThreadPoolAllocator();
   lVar5 = *(long*)( param_1 + 0x18 ) - *(long*)( param_1 + 0x10 );
   *(undefined8*)( p_Var3 + 0x30 ) = 0;
   *(ulong*)( p_Var3 + 0x28 ) = uVar1;
   *(undefined8*)( p_Var3 + 0x38 ) = 0;
   *(undefined8*)( p_Var3 + 0x40 ) = 0;
   if (lVar5 == 0) {
      lVar5 = 0;
      lVar2 = 0;
   }
 else {
      lVar2 = glslang::TPoolAllocator::allocate(uVar1);
   }

   *(long*)( p_Var3 + 0x40 ) = lVar2 + lVar5;
   *(long*)( p_Var3 + 0x30 ) = lVar2;
   *(long*)( p_Var3 + 0x38 ) = lVar2;
   lVar5 = *(long*)( param_1 + 0x18 );
   lVar4 = *(long*)( param_1 + 0x10 );
   if (lVar5 != lVar4) {
      lVar6 = 0;
      do {
         *(undefined8*)( lVar2 + lVar6 ) = *(undefined8*)( lVar4 + lVar6 );
         lVar6 = lVar6 + 8;
      }
 while ( lVar6 != lVar5 - lVar4 );
      lVar2 = lVar2 + lVar6;
   }

   *(long*)( p_Var3 + 0x38 ) = lVar2;
   return p_Var3;
}
/* std::_Rb_tree_node<std::pair<int const, glslang::TVector<glslang::TIntermConstantUnion const*> >
   >* std::_Rb_tree<int, std::pair<int const, glslang::TVector<glslang::TIntermConstantUnion const*>
   >, std::_Select1st<std::pair<int const, glslang::TVector<glslang::TIntermConstantUnion const*> >
   >, std::less<int>, glslang::pool_allocator<std::pair<int const,
   glslang::TVector<glslang::TIntermConstantUnion const*> > > >::_M_copy<false, std::_Rb_tree<int,
   std::pair<int const, glslang::TVector<glslang::TIntermConstantUnion const*> >,
   std::_Select1st<std::pair<int const, glslang::TVector<glslang::TIntermConstantUnion const*> > >,
   std::less<int>, glslang::pool_allocator<std::pair<int const,
   glslang::TVector<glslang::TIntermConstantUnion const*> > >
   >::_Reuse_or_alloc_node>(std::_Rb_tree_node<std::pair<int const,
   glslang::TVector<glslang::TIntermConstantUnion const*> > >*, std::_Rb_tree_node_base*,
   std::_Rb_tree<int, std::pair<int const, glslang::TVector<glslang::TIntermConstantUnion const*> >,
   std::_Select1st<std::pair<int const, glslang::TVector<glslang::TIntermConstantUnion const*> > >,
   std::less<int>, glslang::pool_allocator<std::pair<int const,
   glslang::TVector<glslang::TIntermConstantUnion const*> > > >::_Reuse_or_alloc_node&) [clone
   .isra.0] */_Rb_tree_node * std::_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>::_M_copy<false,std::_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>::_Reuse_or_alloc_node>(_Rb_tree_node * param_1, _Rb_tree_node_base * param_2, _Reuse_or_alloc_node * param_3) * p_Var2 ;_Rb_tree_node *p_Var3ulong uVar4long lVar5_Rb_tree_node_base *p_Var6_Rb_tree_node_base *p_Var7long lVar8long lVar9long lVar10undefined4 *puVar11p_Var2 = _Reuse_or_alloc_node::operator ()(param_3, (pair_conflict*)( param_1 + 0x20 ));uVar1 = *(undefined4*)param_1;*(undefined8*)( p_Var2 + 0x10 ) = 0;*(undefined8*)( p_Var2 + 0x18 ) = 0;*(_Rb_tree_node_base**)( p_Var2 + 8 ) = param_2;p_Var3 = *(_Rb_tree_node**)( param_1 + 0x18 );*(undefined4*)p_Var2 = uVar1;if (p_Var3 != (_Rb_tree_node*)0x0) {
   p_Var3 = _M_copy<false,std::_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>::_Reuse_or_alloc_node>(p_Var3, (_Rb_tree_node_base*)p_Var2, param_3);
   *(_Rb_tree_node**)( p_Var2 + 0x18 ) = p_Var3;
}
puVar11 = *(undefined4**)( param_1 + 0x10 );if (puVar11 == (undefined4*)0x0) {
   return p_Var2;
}
p_Var7 = *(_Rb_tree_node_base**)( param_3 + 8 );p_Var3 = p_Var2;if (p_Var7 == (_Rb_tree_node_base*)0x0) goto LAB_001108d3;do {
   p_Var6 = p_Var7;
   lVar9 = *(long*)( p_Var6 + 8 );
   *(long*)( param_3 + 8 ) = lVar9;
   if (lVar9 == 0) {
      *(undefined8*)param_3 = 0;
   }
 else if (p_Var6 == *(_Rb_tree_node_base**)( lVar9 + 0x18 )) {
      lVar5 = *(long*)( lVar9 + 0x10 );
      *(undefined8*)( lVar9 + 0x18 ) = 0;
      if (lVar5 != 0) {
         lVar9 = *(long*)( lVar5 + 0x18 );
         *(long*)( param_3 + 8 ) = lVar5;
         if (lVar9 != 0) {
            do {
               lVar5 = lVar9;
               lVar9 = *(long*)( lVar5 + 0x18 );
            }
 while ( *(long*)( lVar5 + 0x18 ) != 0 );
            *(long*)( param_3 + 8 ) = lVar5;
         }

         if (*(long*)( lVar5 + 0x10 ) != 0) {
            *(long*)( param_3 + 8 ) = *(long*)( lVar5 + 0x10 );
         }

      }

   }
 else {
      *(undefined8*)( lVar9 + 0x10 ) = 0;
   }

   *(undefined4*)( p_Var6 + 0x20 ) = puVar11[8];
   uVar4 = glslang::GetThreadPoolAllocator();
   lVar9 = *(long*)( puVar11 + 0xe ) - *(long*)( puVar11 + 0xc );
   *(undefined8*)( p_Var6 + 0x30 ) = 0;
   *(ulong*)( p_Var6 + 0x28 ) = uVar4;
   *(undefined8*)( p_Var6 + 0x38 ) = 0;
   *(undefined8*)( p_Var6 + 0x40 ) = 0;
   if (lVar9 == 0) {
      lVar9 = 0;
      lVar5 = 0;
   }
 else {
      lVar5 = glslang::TPoolAllocator::allocate(uVar4);
   }

   *(long*)( p_Var6 + 0x40 ) = lVar5 + lVar9;
   *(long*)( p_Var6 + 0x30 ) = lVar5;
   *(long*)( p_Var6 + 0x38 ) = lVar5;
   lVar9 = *(long*)( puVar11 + 0xe );
   lVar8 = *(long*)( puVar11 + 0xc );
   if (lVar9 != lVar8) {
      lVar10 = 0;
      do {
         *(undefined8*)( lVar5 + lVar10 ) = *(undefined8*)( lVar8 + lVar10 );
         lVar10 = lVar10 + 8;
      }
 while ( lVar10 != lVar9 - lVar8 );
      lVar5 = lVar5 + lVar10;
   }

   *(long*)( p_Var6 + 0x38 ) = lVar5;
   while (true) {
      uVar1 = *puVar11;
      *(undefined8*)( p_Var6 + 0x10 ) = 0;
      *(undefined8*)( p_Var6 + 0x18 ) = 0;
      *(undefined4*)p_Var6 = uVar1;
      *(_Rb_tree_node_base**)( p_Var3 + 0x10 ) = p_Var6;
      *(_Rb_tree_node**)( p_Var6 + 8 ) = p_Var3;
      if (*(_Rb_tree_node**)( puVar11 + 6 ) != (_Rb_tree_node*)0x0) {
         p_Var3 = _M_copy<false,std::_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>::_Reuse_or_alloc_node>(*(_Rb_tree_node**)( puVar11 + 6 ), p_Var6, param_3);
         *(_Rb_tree_node**)( p_Var6 + 0x18 ) = p_Var3;
      }

      puVar11 = *(undefined4**)( puVar11 + 4 );
      if (puVar11 == (undefined4*)0x0) {
         return p_Var2;
      }

      p_Var7 = *(_Rb_tree_node_base**)( param_3 + 8 );
      p_Var3 = (_Rb_tree_node*)p_Var6;
      if (p_Var7 != (_Rb_tree_node_base*)0x0) break;
      LAB_001108d3:p_Var6 = (_Rb_tree_node_base*)glslang::TPoolAllocator::allocate(**(ulong**)( param_3 + 0x10 ));
      *(undefined4*)( p_Var6 + 0x20 ) = puVar11[8];
      uVar4 = glslang::GetThreadPoolAllocator();
      lVar9 = *(long*)( puVar11 + 0xe );
      lVar5 = *(long*)( puVar11 + 0xc );
      *(undefined8*)( p_Var6 + 0x30 ) = 0;
      *(ulong*)( p_Var6 + 0x28 ) = uVar4;
      *(undefined8*)( p_Var6 + 0x38 ) = 0;
      *(undefined8*)( p_Var6 + 0x40 ) = 0;
      if (lVar9 - lVar5 != 0) {
         p_Var7 = (_Rb_tree_node_base*)glslang::TPoolAllocator::allocate(uVar4);
      }

      *(_Rb_tree_node_base**)( p_Var6 + 0x40 ) = p_Var7 + ( lVar9 - lVar5 );
      *(_Rb_tree_node_base**)( p_Var6 + 0x30 ) = p_Var7;
      *(_Rb_tree_node_base**)( p_Var6 + 0x38 ) = p_Var7;
      lVar9 = *(long*)( puVar11 + 0xc );
      if (*(long*)( puVar11 + 0xe ) != lVar9) {
         lVar8 = *(long*)( puVar11 + 0xe ) - lVar9;
         lVar5 = 0;
         do {
            *(undefined8*)( p_Var7 + lVar5 ) = *(undefined8*)( lVar9 + lVar5 );
            lVar5 = lVar5 + 8;
         }
 while ( lVar8 != lVar5 );
         p_Var7 = p_Var7 + lVar8;
      }

      *(_Rb_tree_node_base**)( p_Var6 + 0x38 ) = p_Var7;
   }
;
}
 while ( true );}/* std::_Rb_tree<int, std::pair<int const, glslang::TVector<glslang::TIntermConstantUnion const*> >,
   std::_Select1st<std::pair<int const, glslang::TVector<glslang::TIntermConstantUnion const*> > >,
   std::less<int>, glslang::pool_allocator<std::pair<int const,
   glslang::TVector<glslang::TIntermConstantUnion const*> > >
   >::TEMPNAMEPLACEHOLDERVALUE(std::_Rb_tree<int, std::pair<int const,
   glslang::TVector<glslang::TIntermConstantUnion const*> >, std::_Select1st<std::pair<int const,
   glslang::TVector<glslang::TIntermConstantUnion const*> > >, std::less<int>,
   glslang::pool_allocator<std::pair<int const, glslang::TVector<glslang::TIntermConstantUnion
   const*> > > > const&) [clone .part.0] */void std::_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>::operator =(_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>> *this, _Rb_tree *param_1) {
   undefined8 uVar1;
   _Rb_tree_node *p_Var2;
   _Rb_tree_node *p_Var3;
   long lVar4;
   _Rb_tree_node *p_Var5;
   long in_FS_OFFSET;
   long local_38;
   long lStack_30;
   _Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>> *local_28;
   long local_20;
   local_38 = *(long*)( this + 0x18 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lStack_30 = *(long*)( this + 0x28 );
   local_28 = this;
   if (local_38 == 0) {
      *(undefined8*)( this + 0x18 ) = 0;
      *(_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>**)( this + 0x20 ) = this + 0x10;
      *(_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>**)( this + 0x28 ) = this + 0x10;
      *(undefined8*)( this + 0x30 ) = 0;
      p_Var5 = *(_Rb_tree_node**)( param_1 + 0x18 );
      lStack_30 = 0;
      if (p_Var5 == (_Rb_tree_node*)0x0) goto LAB_00110af2;
      LAB_00110a8f:p_Var2 = _M_copy<false,std::_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>::_Reuse_or_alloc_node>(p_Var5, (_Rb_tree_node_base*)( this + 0x10 ), (_Reuse_or_alloc_node*)&local_38);
      p_Var5 = p_Var2;
      do {
         p_Var3 = p_Var5;
         p_Var5 = *(_Rb_tree_node**)( p_Var3 + 0x10 );
      }
 while ( p_Var5 != (_Rb_tree_node*)0x0 );
      *(_Rb_tree_node**)( this + 0x20 ) = p_Var3;
      p_Var5 = p_Var2;
      do {
         p_Var3 = p_Var5;
         p_Var5 = *(_Rb_tree_node**)( p_Var3 + 0x18 );
      }
 while ( p_Var5 != (_Rb_tree_node*)0x0 );
      uVar1 = *(undefined8*)( param_1 + 0x30 );
      *(_Rb_tree_node**)( this + 0x28 ) = p_Var3;
      *(_Rb_tree_node**)( this + 0x18 ) = p_Var2;
      *(undefined8*)( this + 0x30 ) = uVar1;
      lVar4 = local_38;
      if (local_38 == 0) goto LAB_00110af2;
   }
 else {
      lVar4 = *(long*)( lStack_30 + 0x10 );
      *(undefined8*)( local_38 + 8 ) = 0;
      if (lVar4 != 0) {
         lStack_30 = lVar4;
      }

      *(undefined8*)( this + 0x18 ) = 0;
      p_Var5 = *(_Rb_tree_node**)( param_1 + 0x18 );
      *(_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>**)( this + 0x20 ) = this + 0x10;
      *(_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>**)( this + 0x28 ) = this + 0x10;
      *(undefined8*)( this + 0x30 ) = 0;
      lVar4 = local_38;
      if (p_Var5 != (_Rb_tree_node*)0x0) goto LAB_00110a8f;
   }

   do {
      _M_erase(*(_Rb_tree_node**)( lVar4 + 0x18 ));
      lVar4 = *(long*)( lVar4 + 0x10 );
   }
 while ( lVar4 != 0 );
   LAB_00110af2:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* std::_Rb_tree_node<std::pair<int const, glslang::TVector<glslang::TIntermTyped const*> > >*
   std::_Rb_tree<int, std::pair<int const, glslang::TVector<glslang::TIntermTyped const*> >,
   std::_Select1st<std::pair<int const, glslang::TVector<glslang::TIntermTyped const*> > >,
   std::less<int>, glslang::pool_allocator<std::pair<int const,
   glslang::TVector<glslang::TIntermTyped const*> > >
   >::_Reuse_or_alloc_node::TEMPNAMEPLACEHOLDERVALUE(std::pair<int const,
   glslang::TVector<glslang::TIntermTyped const*> > const&) */_Rb_tree_node * __thiscall
std::
_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>>
::_Reuse_or_alloc_node::operator()(_Reuse_or_alloc_node *this,pair_conflict *param_1){
   ulong uVar1;
   long lVar2;
   _Rb_tree_node *p_Var3;
   long lVar4;
   long lVar5;
   long lVar6;
   p_Var3 = *(_Rb_tree_node**)( this + 8 );
   if (p_Var3 == (_Rb_tree_node*)0x0) {
      p_Var3 = (_Rb_tree_node*)glslang::TPoolAllocator::allocate(**(ulong**)( this + 0x10 ));
      *(undefined4*)( p_Var3 + 0x20 ) = *(undefined4*)param_1;
      uVar1 = glslang::GetThreadPoolAllocator();
      lVar5 = *(long*)( param_1 + 0x18 );
      lVar2 = *(long*)( param_1 + 0x10 );
      *(undefined8*)( p_Var3 + 0x30 ) = 0;
      *(ulong*)( p_Var3 + 0x28 ) = uVar1;
      *(undefined8*)( p_Var3 + 0x38 ) = 0;
      *(undefined8*)( p_Var3 + 0x40 ) = 0;
      lVar4 = 0;
      if (lVar5 - lVar2 != 0) {
         lVar4 = glslang::TPoolAllocator::allocate(uVar1);
      }

      *(long*)( p_Var3 + 0x40 ) = ( lVar5 - lVar2 ) + lVar4;
      *(long*)( p_Var3 + 0x30 ) = lVar4;
      *(long*)( p_Var3 + 0x38 ) = lVar4;
      lVar5 = *(long*)( param_1 + 0x10 );
      if (*(long*)( param_1 + 0x18 ) != lVar5) {
         lVar6 = *(long*)( param_1 + 0x18 ) - lVar5;
         lVar2 = 0;
         do {
            *(undefined8*)( lVar4 + lVar2 ) = *(undefined8*)( lVar5 + lVar2 );
            lVar2 = lVar2 + 8;
         }
 while ( lVar6 != lVar2 );
         lVar4 = lVar4 + lVar6;
      }

      *(long*)( p_Var3 + 0x38 ) = lVar4;
      return p_Var3;
   }

   lVar5 = *(long*)( p_Var3 + 8 );
   *(long*)( this + 8 ) = lVar5;
   if (lVar5 == 0) {
      *(undefined8*)this = 0;
   }
 else if (p_Var3 == *(_Rb_tree_node**)( lVar5 + 0x18 )) {
      lVar2 = *(long*)( lVar5 + 0x10 );
      *(undefined8*)( lVar5 + 0x18 ) = 0;
      if (lVar2 != 0) {
         lVar5 = *(long*)( lVar2 + 0x18 );
         *(long*)( this + 8 ) = lVar2;
         if (lVar5 != 0) {
            do {
               lVar2 = lVar5;
               lVar5 = *(long*)( lVar2 + 0x18 );
            }
 while ( *(long*)( lVar2 + 0x18 ) != 0 );
            *(long*)( this + 8 ) = lVar2;
         }

         if (*(long*)( lVar2 + 0x10 ) != 0) {
            *(long*)( this + 8 ) = *(long*)( lVar2 + 0x10 );
         }

      }

   }
 else {
      *(undefined8*)( lVar5 + 0x10 ) = 0;
   }

   *(undefined4*)( p_Var3 + 0x20 ) = *(undefined4*)param_1;
   uVar1 = glslang::GetThreadPoolAllocator();
   lVar5 = *(long*)( param_1 + 0x18 ) - *(long*)( param_1 + 0x10 );
   *(undefined8*)( p_Var3 + 0x30 ) = 0;
   *(ulong*)( p_Var3 + 0x28 ) = uVar1;
   *(undefined8*)( p_Var3 + 0x38 ) = 0;
   *(undefined8*)( p_Var3 + 0x40 ) = 0;
   if (lVar5 == 0) {
      lVar5 = 0;
      lVar2 = 0;
   }
 else {
      lVar2 = glslang::TPoolAllocator::allocate(uVar1);
   }

   *(long*)( p_Var3 + 0x40 ) = lVar2 + lVar5;
   *(long*)( p_Var3 + 0x30 ) = lVar2;
   *(long*)( p_Var3 + 0x38 ) = lVar2;
   lVar5 = *(long*)( param_1 + 0x18 );
   lVar4 = *(long*)( param_1 + 0x10 );
   if (lVar5 != lVar4) {
      lVar6 = 0;
      do {
         *(undefined8*)( lVar2 + lVar6 ) = *(undefined8*)( lVar4 + lVar6 );
         lVar6 = lVar6 + 8;
      }
 while ( lVar6 != lVar5 - lVar4 );
      lVar2 = lVar2 + lVar6;
   }

   *(long*)( p_Var3 + 0x38 ) = lVar2;
   return p_Var3;
}
/* std::_Rb_tree_node<std::pair<int const, glslang::TVector<glslang::TIntermTyped const*> > >*
   std::_Rb_tree<int, std::pair<int const, glslang::TVector<glslang::TIntermTyped const*> >,
   std::_Select1st<std::pair<int const, glslang::TVector<glslang::TIntermTyped const*> > >,
   std::less<int>, glslang::pool_allocator<std::pair<int const,
   glslang::TVector<glslang::TIntermTyped const*> > > >::_M_copy<false, std::_Rb_tree<int,
   std::pair<int const, glslang::TVector<glslang::TIntermTyped const*> >,
   std::_Select1st<std::pair<int const, glslang::TVector<glslang::TIntermTyped const*> > >,
   std::less<int>, glslang::pool_allocator<std::pair<int const,
   glslang::TVector<glslang::TIntermTyped const*> > >
   >::_Reuse_or_alloc_node>(std::_Rb_tree_node<std::pair<int const,
   glslang::TVector<glslang::TIntermTyped const*> > >*, std::_Rb_tree_node_base*, std::_Rb_tree<int,
   std::pair<int const, glslang::TVector<glslang::TIntermTyped const*> >,
   std::_Select1st<std::pair<int const, glslang::TVector<glslang::TIntermTyped const*> > >,
   std::less<int>, glslang::pool_allocator<std::pair<int const,
   glslang::TVector<glslang::TIntermTyped const*> > > >::_Reuse_or_alloc_node&) [clone .isra.0] */_Rb_tree_node * std::_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>>::_M_copy<false,std::_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>>::_Reuse_or_alloc_node>(_Rb_tree_node * param_1, _Rb_tree_node_base * param_2, _Reuse_or_alloc_node * param_3) * p_Var2 ;_Rb_tree_node *p_Var3ulong uVar4long lVar5_Rb_tree_node_base *p_Var6_Rb_tree_node_base *p_Var7long lVar8long lVar9long lVar10undefined4 *puVar11p_Var2 = _Reuse_or_alloc_node::operator ()(param_3, (pair_conflict*)( param_1 + 0x20 ));uVar1 = *(undefined4*)param_1;*(undefined8*)( p_Var2 + 0x10 ) = 0;*(undefined8*)( p_Var2 + 0x18 ) = 0;*(_Rb_tree_node_base**)( p_Var2 + 8 ) = param_2;p_Var3 = *(_Rb_tree_node**)( param_1 + 0x18 );*(undefined4*)p_Var2 = uVar1;if (p_Var3 != (_Rb_tree_node*)0x0) {
   p_Var3 = _M_copy<false,std::_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>>::_Reuse_or_alloc_node>(p_Var3, (_Rb_tree_node_base*)p_Var2, param_3);
   *(_Rb_tree_node**)( p_Var2 + 0x18 ) = p_Var3;
}
puVar11 = *(undefined4**)( param_1 + 0x10 );if (puVar11 == (undefined4*)0x0) {
   return p_Var2;
}
p_Var7 = *(_Rb_tree_node_base**)( param_3 + 8 );p_Var3 = p_Var2;if (p_Var7 == (_Rb_tree_node_base*)0x0) goto LAB_00110ed3;do {
   p_Var6 = p_Var7;
   lVar9 = *(long*)( p_Var6 + 8 );
   *(long*)( param_3 + 8 ) = lVar9;
   if (lVar9 == 0) {
      *(undefined8*)param_3 = 0;
   }
 else if (p_Var6 == *(_Rb_tree_node_base**)( lVar9 + 0x18 )) {
      lVar5 = *(long*)( lVar9 + 0x10 );
      *(undefined8*)( lVar9 + 0x18 ) = 0;
      if (lVar5 != 0) {
         lVar9 = *(long*)( lVar5 + 0x18 );
         *(long*)( param_3 + 8 ) = lVar5;
         if (lVar9 != 0) {
            do {
               lVar5 = lVar9;
               lVar9 = *(long*)( lVar5 + 0x18 );
            }
 while ( *(long*)( lVar5 + 0x18 ) != 0 );
            *(long*)( param_3 + 8 ) = lVar5;
         }

         if (*(long*)( lVar5 + 0x10 ) != 0) {
            *(long*)( param_3 + 8 ) = *(long*)( lVar5 + 0x10 );
         }

      }

   }
 else {
      *(undefined8*)( lVar9 + 0x10 ) = 0;
   }

   *(undefined4*)( p_Var6 + 0x20 ) = puVar11[8];
   uVar4 = glslang::GetThreadPoolAllocator();
   lVar9 = *(long*)( puVar11 + 0xe ) - *(long*)( puVar11 + 0xc );
   *(undefined8*)( p_Var6 + 0x30 ) = 0;
   *(ulong*)( p_Var6 + 0x28 ) = uVar4;
   *(undefined8*)( p_Var6 + 0x38 ) = 0;
   *(undefined8*)( p_Var6 + 0x40 ) = 0;
   if (lVar9 == 0) {
      lVar9 = 0;
      lVar5 = 0;
   }
 else {
      lVar5 = glslang::TPoolAllocator::allocate(uVar4);
   }

   *(long*)( p_Var6 + 0x40 ) = lVar5 + lVar9;
   *(long*)( p_Var6 + 0x30 ) = lVar5;
   *(long*)( p_Var6 + 0x38 ) = lVar5;
   lVar9 = *(long*)( puVar11 + 0xe );
   lVar8 = *(long*)( puVar11 + 0xc );
   if (lVar9 != lVar8) {
      lVar10 = 0;
      do {
         *(undefined8*)( lVar5 + lVar10 ) = *(undefined8*)( lVar8 + lVar10 );
         lVar10 = lVar10 + 8;
      }
 while ( lVar10 != lVar9 - lVar8 );
      lVar5 = lVar5 + lVar10;
   }

   *(long*)( p_Var6 + 0x38 ) = lVar5;
   while (true) {
      uVar1 = *puVar11;
      *(undefined8*)( p_Var6 + 0x10 ) = 0;
      *(undefined8*)( p_Var6 + 0x18 ) = 0;
      *(undefined4*)p_Var6 = uVar1;
      *(_Rb_tree_node_base**)( p_Var3 + 0x10 ) = p_Var6;
      *(_Rb_tree_node**)( p_Var6 + 8 ) = p_Var3;
      if (*(_Rb_tree_node**)( puVar11 + 6 ) != (_Rb_tree_node*)0x0) {
         p_Var3 = _M_copy<false,std::_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>>::_Reuse_or_alloc_node>(*(_Rb_tree_node**)( puVar11 + 6 ), p_Var6, param_3);
         *(_Rb_tree_node**)( p_Var6 + 0x18 ) = p_Var3;
      }

      puVar11 = *(undefined4**)( puVar11 + 4 );
      if (puVar11 == (undefined4*)0x0) {
         return p_Var2;
      }

      p_Var7 = *(_Rb_tree_node_base**)( param_3 + 8 );
      p_Var3 = (_Rb_tree_node*)p_Var6;
      if (p_Var7 != (_Rb_tree_node_base*)0x0) break;
      LAB_00110ed3:p_Var6 = (_Rb_tree_node_base*)glslang::TPoolAllocator::allocate(**(ulong**)( param_3 + 0x10 ));
      *(undefined4*)( p_Var6 + 0x20 ) = puVar11[8];
      uVar4 = glslang::GetThreadPoolAllocator();
      lVar9 = *(long*)( puVar11 + 0xe );
      lVar5 = *(long*)( puVar11 + 0xc );
      *(undefined8*)( p_Var6 + 0x30 ) = 0;
      *(ulong*)( p_Var6 + 0x28 ) = uVar4;
      *(undefined8*)( p_Var6 + 0x38 ) = 0;
      *(undefined8*)( p_Var6 + 0x40 ) = 0;
      if (lVar9 - lVar5 != 0) {
         p_Var7 = (_Rb_tree_node_base*)glslang::TPoolAllocator::allocate(uVar4);
      }

      *(_Rb_tree_node_base**)( p_Var6 + 0x40 ) = p_Var7 + ( lVar9 - lVar5 );
      *(_Rb_tree_node_base**)( p_Var6 + 0x30 ) = p_Var7;
      *(_Rb_tree_node_base**)( p_Var6 + 0x38 ) = p_Var7;
      lVar9 = *(long*)( puVar11 + 0xc );
      if (*(long*)( puVar11 + 0xe ) != lVar9) {
         lVar8 = *(long*)( puVar11 + 0xe ) - lVar9;
         lVar5 = 0;
         do {
            *(undefined8*)( p_Var7 + lVar5 ) = *(undefined8*)( lVar9 + lVar5 );
            lVar5 = lVar5 + 8;
         }
 while ( lVar8 != lVar5 );
         p_Var7 = p_Var7 + lVar8;
      }

      *(_Rb_tree_node_base**)( p_Var6 + 0x38 ) = p_Var7;
   }
;
}
 while ( true );}/* glslang::TType::deepCopy(glslang::TType const&,
   glslang::TMap<glslang::TVector<glslang::TTypeLoc>*, glslang::TVector<glslang::TTypeLoc>*,
   std::less<glslang::TVector<glslang::TTypeLoc>*> >&) */void glslang::TType::deepCopy(TType *this, TType *param_1, TMap *param_2) {
   TMap *pTVar1;
   _Rb_tree_node_base *p_Var2;
   _Rb_tree *p_Var3;
   TType TVar4;
   undefined4 uVar5;
   _Rb_tree *p_Var6;
   _Rb_tree_node *p_Var7;
   basic_string *pbVar8;
   char *pcVar9;
   vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>> *pvVar10;
   long lVar11;
   undefined8 uVar12;
   TMap *pTVar13;
   TType TVar14;
   char cVar15;
   ulong uVar16;
   _Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>> *this_00;
   undefined8 uVar17;
   _Rb_tree_node *p_Var18;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar19;
   undefined8 *puVar20;
   vector<glslang::TArraySize,glslang::pool_allocator<glslang::TArraySize>> *pvVar21;
   undefined4 *puVar22;
   long lVar23;
   size_t sVar24;
   long *plVar25;
   ulong uVar26;
   _Rb_tree_node *p_Var27;
   long lVar28;
   long lVar29;
   TMap *pTVar30;
   TMap *pTVar31;
   long in_FS_OFFSET;
   _Rb_tree_node *local_68;
   long lStack_60;
   _Rb_tree *p_Stack_58;
   undefined8 uStack_50;
   long local_40;
   uVar17 = *(undefined8*)( param_1 + 0x18 );
   TVar14 = param_1[8];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = *(undefined4*)( param_1 + 0x80 );
   *(undefined8*)( this + 0x10 ) = *(undefined8*)( param_1 + 0x10 );
   *(undefined8*)( this + 0x18 ) = uVar17;
   uVar17 = *(undefined8*)( param_1 + 0x20 );
   uVar12 = *(undefined8*)( param_1 + 0x28 );
   this[8] = TVar14;
   *(undefined8*)( this + 0x20 ) = uVar17;
   *(undefined8*)( this + 0x28 ) = uVar12;
   uVar17 = *(undefined8*)( param_1 + 0x30 );
   uVar12 = *(undefined8*)( param_1 + 0x38 );
   *(undefined4*)( this + 0x80 ) = uVar5;
   *(undefined8*)( this + 0x30 ) = uVar17;
   *(undefined8*)( this + 0x38 ) = uVar12;
   uVar17 = *(undefined8*)( param_1 + 0x48 );
   *(undefined8*)( this + 0x40 ) = *(undefined8*)( param_1 + 0x40 );
   *(undefined8*)( this + 0x48 ) = uVar17;
   uVar17 = *(undefined8*)( param_1 + 0x58 );
   *(undefined8*)( this + 0x50 ) = *(undefined8*)( param_1 + 0x50 );
   *(undefined8*)( this + 0x58 ) = uVar17;
   TVar14 = param_1[9];
   this[9] = ( TType )((byte)this[9] & 0xf0 | (byte)TVar14 & 0xf);
   this[9] = ( TType )((byte)TVar14 & 0xf | (byte)param_1[9] & 0xf0);
   TVar14 = this[10];
   TVar4 = param_1[10];
   this[10] = ( TType )((byte)TVar14 & 0xf0 | (byte)TVar4 & 0xf);
   TVar14 = ( TType )((byte)TVar14 & 0xe0 | (byte)TVar4 & 0xf | (byte)param_1[10] & 0x10);
   this[10] = TVar14;
   uVar17 = *(undefined8*)( param_1 + 0x70 );
   uVar12 = *(undefined8*)( param_1 + 0x78 );
   *(undefined8*)( this + 0x60 ) = *(undefined8*)( param_1 + 0x60 );
   *(undefined8*)( this + 0x70 ) = uVar17;
   *(undefined8*)( this + 0x78 ) = uVar12;
   if (*(code**)( *(long*)this + 0x128 ) != isStruct) {
      ( **(code**)( *(long*)this + 0x128 ) )();
      TVar14 = this[10];
   }

   *(undefined8*)( this + 0x68 ) = *(undefined8*)( param_1 + 0x68 );
   uVar17 = *(undefined8*)( param_1 + 0x90 );
   *(undefined8*)( this + 0x88 ) = *(undefined8*)( param_1 + 0x88 );
   *(undefined8*)( this + 0x90 ) = uVar17;
   TVar4 = param_1[10];
   this[10] = ( TType )((byte)TVar14 & 0xdf | (byte)TVar4 & 0x20);
   this[10] = ( TType )((byte)TVar14 & 0x9f | (byte)TVar4 & 0x20 | (byte)param_1[10] & 0x40);
   *(ushort*)( this + 10 ) = *(ushort*)( this + 10 ) & 0xfc7f | *(ushort*)( param_1 + 10 ) & 0x380;
   this[0xb] = ( TType )((byte)this[0xb] & 0xfb | (byte)param_1[0xb] & 4);
   if (*(long*)( param_1 + 0x50 ) != 0) {
      uVar16 = glslang::GetThreadPoolAllocator();
      this_00 = (_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>*)glslang::TPoolAllocator::allocate(uVar16);
      uVar17 = glslang::GetThreadPoolAllocator();
      p_Var2 = (_Rb_tree_node_base*)( this_00 + 0x48 );
      *(undefined4*)( this_00 + 0x10 ) = 0;
      *(undefined8*)this_00 = uVar17;
      *(undefined8*)( this_00 + 0x18 ) = 0;
      *(_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>**)( this_00 + 0x20 ) = this_00 + 0x10;
      *(_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>**)( this_00 + 0x28 ) = this_00 + 0x10;
      *(undefined8*)( this_00 + 0x30 ) = 0;
      uVar17 = glslang::GetThreadPoolAllocator();
      *(_Rb_tree_node_base**)( this_00 + 0x58 ) = p_Var2;
      *(undefined8*)( this_00 + 0x38 ) = uVar17;
      *(undefined4*)( this_00 + 0x48 ) = 0;
      *(undefined8*)( this_00 + 0x50 ) = 0;
      *(_Rb_tree_node_base**)( this_00 + 0x60 ) = p_Var2;
      *(undefined8*)( this_00 + 0x68 ) = 0;
      uVar17 = glslang::GetThreadPoolAllocator();
      *(undefined4*)( this_00 + 0x80 ) = 0;
      *(undefined8*)( this_00 + 0x70 ) = uVar17;
      *(undefined8*)( this_00 + 0x88 ) = 0;
      *(_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>**)( this_00 + 0x90 ) = this_00 + 0x80;
      *(_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>**)( this_00 + 0x98 ) = this_00 + 0x80;
      *(undefined8*)( this_00 + 0xa0 ) = 0;
      *(_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>**)( this + 0x50 ) = this_00;
      p_Var6 = *(_Rb_tree**)( param_1 + 0x50 );
      if (p_Var6 != (_Rb_tree*)this_00) {
         std::_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>::operator =(this_00, p_Var6);
      }

      p_Var3 = (_Rb_tree*)( this_00 + 0x38 );
      if (p_Var3 != p_Var6 + 0x38) {
         local_68 = *(_Rb_tree_node**)( this_00 + 0x50 );
         lStack_60 = *(long*)( this_00 + 0x60 );
         if (local_68 == (_Rb_tree_node*)0x0) {
            lStack_60 = 0;
         }
 else {
            lVar29 = *(long*)( lStack_60 + 0x10 );
            *(undefined8*)( local_68 + 8 ) = 0;
            if (lVar29 != 0) {
               lStack_60 = lVar29;
            }

         }

         *(undefined8*)( this_00 + 0x50 ) = 0;
         p_Var7 = *(_Rb_tree_node**)( p_Var6 + 0x50 );
         *(_Rb_tree_node_base**)( this_00 + 0x58 ) = p_Var2;
         *(_Rb_tree_node_base**)( this_00 + 0x60 ) = p_Var2;
         *(undefined8*)( this_00 + 0x68 ) = 0;
         p_Stack_58 = p_Var3;
         if (p_Var7 != (_Rb_tree_node*)0x0) {
            p_Var18 = std::_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>>::_M_copy<false,std::_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>>::_Reuse_or_alloc_node>(p_Var7, p_Var2, (_Reuse_or_alloc_node*)&local_68);
            p_Var7 = p_Var18;
            do {
               p_Var27 = p_Var7;
               p_Var7 = *(_Rb_tree_node**)( p_Var27 + 0x10 );
            }
 while ( p_Var7 != (_Rb_tree_node*)0x0 );
            *(_Rb_tree_node**)( this_00 + 0x58 ) = p_Var27;
            p_Var7 = p_Var18;
            do {
               p_Var27 = p_Var7;
               p_Var7 = *(_Rb_tree_node**)( p_Var27 + 0x18 );
            }
 while ( p_Var7 != (_Rb_tree_node*)0x0 );
            uVar17 = *(undefined8*)( p_Var6 + 0x68 );
            *(_Rb_tree_node**)( this_00 + 0x60 ) = p_Var27;
            *(_Rb_tree_node**)( this_00 + 0x50 ) = p_Var18;
            *(undefined8*)( this_00 + 0x68 ) = uVar17;
         }

         std::_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>>::_M_erase(local_68);
      }

      if (p_Var6 + 0x70 != (_Rb_tree*)( this_00 + 0x70 )) {
         std::_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>::operator =(this_00 + 0x70, p_Var6 + 0x70);
      }

   }

   if (*(long*)( param_1 + 0x90 ) != 0) {
      uVar16 = glslang::GetThreadPoolAllocator();
      pbVar19 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)glslang::TPoolAllocator::allocate(uVar16);
      uVar17 = glslang::GetThreadPoolAllocator();
      pbVar19[0x18] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
      *(undefined8*)pbVar19 = uVar17;
      *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( pbVar19 + 8 ) = pbVar19 + 0x18;
      *(undefined8*)( pbVar19 + 0x10 ) = 0;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_replace(pbVar19, 0, 0, "", 0);
      *(undefined4*)( pbVar19 + 0x28 ) = 0xffffffff;
      uVar17 = glslang::GetThreadPoolAllocator();
      *(undefined8*)( pbVar19 + 0x38 ) = 0;
      *(undefined8*)( pbVar19 + 0x30 ) = uVar17;
      *(undefined8*)( pbVar19 + 0x40 ) = 0;
      *(undefined8*)( pbVar19 + 0x48 ) = 0;
      *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 0x90 ) = pbVar19;
      pbVar8 = *(basic_string**)( param_1 + 0x90 );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign(pbVar19, pbVar8);
      *(undefined4*)( pbVar19 + 0x28 ) = *(undefined4*)( pbVar8 + 0x28 );
      std::vector<glslang::TSpirvTypeParameter,glslang::pool_allocator<glslang::TSpirvTypeParameter>>::operator =((vector<glslang::TSpirvTypeParameter,glslang::pool_allocator<glslang::TSpirvTypeParameter>>*)( pbVar19 + 0x30 ), (vector*)( pbVar8 + 0x30 ));
   }

   if (*(long*)( param_1 + 0x60 ) != 0) {
      uVar16 = glslang::GetThreadPoolAllocator();
      puVar20 = (undefined8*)glslang::TPoolAllocator::allocate(uVar16);
      *(undefined4*)( puVar20 + 2 ) = 0;
      *(undefined2*)( (long)puVar20 + 0x14 ) = 1;
      *puVar20 = &PTR__TSmallArrayVector_00111b30;
      puVar20[1] = 0;
      *(undefined8**)( this + 0x60 ) = puVar20;
      lVar29 = *(long*)( param_1 + 0x60 );
      lVar28 = *(long*)( lVar29 + 8 );
      *(undefined4*)( puVar20 + 2 ) = *(undefined4*)( lVar29 + 0x10 );
      *(undefined1*)( (long)puVar20 + 0x15 ) = *(undefined1*)( lVar29 + 0x15 );
      if (lVar28 == 0) {
         puVar20[1] = 0;
      }
 else {
         uVar16 = glslang::GetThreadPoolAllocator();
         pvVar21 = (vector<glslang::TArraySize,glslang::pool_allocator<glslang::TArraySize>>*)glslang::TPoolAllocator::allocate(uVar16);
         uVar17 = glslang::GetThreadPoolAllocator();
         *(undefined8*)( pvVar21 + 8 ) = 0;
         *(undefined8*)pvVar21 = uVar17;
         *(undefined8*)( pvVar21 + 0x10 ) = 0;
         *(undefined8*)( pvVar21 + 0x18 ) = 0;
         puVar20[1] = pvVar21;
         std::vector<glslang::TArraySize,glslang::pool_allocator<glslang::TArraySize>>::operator =(pvVar21, *(vector**)( lVar29 + 8 ));
      }

      *(undefined1*)( (long)puVar20 + 0x14 ) = *(undefined1*)( lVar29 + 0x14 );
   }

   if (*(long*)( param_1 + 0x88 ) != 0) {
      uVar16 = glslang::GetThreadPoolAllocator();
      puVar22 = (undefined4*)glslang::TPoolAllocator::allocate(uVar16);
      *(undefined1(*) [16])( puVar22 + 2 ) = (undefined1[16])0x0;
      *puVar22 = 0;
      *(undefined4**)( this + 0x88 ) = puVar22;
      uVar16 = glslang::GetThreadPoolAllocator();
      puVar20 = (undefined8*)glslang::TPoolAllocator::allocate(uVar16);
      *(undefined2*)( (long)puVar20 + 0x14 ) = 1;
      lVar28 = *(long*)( param_1 + 0x88 );
      *puVar20 = &PTR__TSmallArrayVector_00111b30;
      lVar23 = *(long*)( this + 0x88 );
      *(undefined4*)( puVar20 + 2 ) = 0;
      puVar20[1] = 0;
      *(undefined8**)( lVar23 + 8 ) = puVar20;
      lVar29 = *(long*)( lVar28 + 8 );
      lVar11 = *(long*)( lVar29 + 8 );
      *(undefined4*)( puVar20 + 2 ) = *(undefined4*)( lVar29 + 0x10 );
      *(undefined1*)( (long)puVar20 + 0x15 ) = *(undefined1*)( lVar29 + 0x15 );
      if (lVar11 == 0) {
         puVar20[1] = 0;
      }
 else {
         uVar16 = glslang::GetThreadPoolAllocator();
         pvVar21 = (vector<glslang::TArraySize,glslang::pool_allocator<glslang::TArraySize>>*)glslang::TPoolAllocator::allocate(uVar16);
         uVar17 = glslang::GetThreadPoolAllocator();
         *(undefined8*)( pvVar21 + 8 ) = 0;
         *(undefined8*)pvVar21 = uVar17;
         *(undefined8*)( pvVar21 + 0x10 ) = 0;
         *(undefined8*)( pvVar21 + 0x18 ) = 0;
         puVar20[1] = pvVar21;
         std::vector<glslang::TArraySize,glslang::pool_allocator<glslang::TArraySize>>::operator =(pvVar21, *(vector**)( lVar29 + 8 ));
         lVar28 = *(long*)( param_1 + 0x88 );
         lVar23 = *(long*)( this + 0x88 );
      }

      pbVar8 = *(basic_string**)( lVar28 + 0x10 );
      *(undefined1*)( (long)puVar20 + 0x14 ) = *(undefined1*)( lVar29 + 0x14 );
      pbVar19 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( lVar23 + 0x10 );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign(pbVar19, pbVar8);
      *(undefined4*)( pbVar19 + 0x28 ) = *(undefined4*)( pbVar8 + 0x28 );
      std::vector<glslang::TSpirvTypeParameter,glslang::pool_allocator<glslang::TSpirvTypeParameter>>::operator =((vector<glslang::TSpirvTypeParameter,glslang::pool_allocator<glslang::TSpirvTypeParameter>>*)( pbVar19 + 0x30 ), (vector*)( pbVar8 + 0x30 ));
      **(uint**)( this + 0x88 ) = (uint)(byte)param_1[8];
   }

   if (*(code**)( *(long*)param_1 + 0x128 ) == isStruct) {
      if (( byte )((char)param_1[8] - 0xfU) < 2) {
         LAB_001116cd:uVar16 = *(ulong*)( param_1 + 0x68 );
         if (uVar16 != 0) {
            pTVar13 = *(TMap**)( param_2 + 0x18 );
            pTVar30 = param_2 + 0x10;
            if (*(TMap**)( param_2 + 0x18 ) != (TMap*)0x0) {
               do {
                  while (true) {
                     pTVar31 = pTVar13;
                     pTVar1 = pTVar31 + 0x18;
                     if (uVar16 <= *(ulong*)( pTVar31 + 0x20 )) break;
                     pTVar13 = *(TMap**)pTVar1;
                     pTVar31 = pTVar30;
                     if (*(TMap**)pTVar1 == (TMap*)0x0) goto LAB_00111719;
                  }
;
                  pTVar13 = *(TMap**)( pTVar31 + 0x10 );
                  pTVar30 = pTVar31;
               }
 while ( *(TMap**)( pTVar31 + 0x10 ) != (TMap*)0x0 );
               LAB_00111719:if (( param_2 + 0x10 != pTVar31 ) && ( *(ulong*)( pTVar31 + 0x20 ) <= uVar16 )) {
                  *(undefined8*)( this + 0x68 ) = *(undefined8*)( pTVar31 + 0x28 );
                  goto LAB_001115ea;
               }

            }

            uVar16 = glslang::GetThreadPoolAllocator();
            puVar20 = (undefined8*)glslang::TPoolAllocator::allocate(uVar16);
            uVar17 = glslang::GetThreadPoolAllocator();
            puVar20[1] = 0;
            *puVar20 = uVar17;
            puVar20[2] = 0;
            puVar20[3] = 0;
            *(undefined8**)( this + 0x68 ) = puVar20;
            plVar25 = (long*)std::map<glslang::TVector<glslang::TTypeLoc>*,glslang::TVector<glslang::TTypeLoc>*,std::less<glslang::TVector<glslang::TTypeLoc>*>,glslang::pool_allocator<std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>>>::operator [](( map<glslang::TVector<glslang::TTypeLoc>*,glslang::TVector<glslang::TTypeLoc>*,std::less<glslang::TVector<glslang::TTypeLoc>*>,glslang::pool_allocator<std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector < glslang::TTypeLoc>*>> > *)param_2,(TVector**)( param_1 + 0x68 ) ));
            *plVar25 = (long)puVar20;
            uVar17 = _LC235;
            lVar29 = *(long*)( *(long*)( param_1 + 0x68 ) + 8 );
            if (lVar29 != *(long*)( *(long*)( param_1 + 0x68 ) + 0x10 )) {
               uVar16 = 0;
               do {
                  lVar28 = uVar16 * 0x20;
                  plVar25 = (long*)( lVar29 + 8 + lVar28 );
                  lStack_60 = *plVar25;
                  p_Stack_58 = (_Rb_tree*)plVar25[1];
                  uStack_50 = *(undefined8*)( lVar29 + 0x18 + lVar28 );
                  uVar26 = glslang::GetThreadPoolAllocator();
                  local_68 = (_Rb_tree_node*)glslang::TPoolAllocator::allocate(uVar26);
                  *(undefined***)local_68 = &PTR__TType_00111b50;
                  ( (TType*)local_68 )[0x20] = ( TType )(( byte )((TType*)local_68)[0x20] & 0xf0);
                  *(undefined1(*) [16])( (TType*)local_68 + 0x88 ) = (undefined1[16])0x0;
                  *(undefined1(*) [16])( (TType*)local_68 + 0x60 ) = (undefined1[16])0x0;
                  *(uint*)( (TType*)local_68 + 8 ) = CONCAT22((short)( ( uint ) * (undefined4*)( (TType*)local_68 + 8 ) >> 0x10 ), 0x100) & 0xf800ffff;
                  *(undefined8*)( (TType*)local_68 + 0x44 ) = 0xfffff800;
                  *(undefined2*)( (TType*)local_68 + 0x58 ) = 0;
                  *(undefined1(*) [16])( (TType*)local_68 + 0x70 ) = (undefined1[16])0x0;
                  *(ulong*)( (TType*)local_68 + 0x2d ) = *(ulong*)( (TType*)local_68 + 0x2d ) & 0xffffff0000ffc07f | 0xffff001f80;
                  *(uint*)( (TType*)local_68 + 0x80 ) = *(uint*)( (TType*)local_68 + 0x80 ) & 0x9fc00000;
                  *(undefined8*)( (TType*)local_68 + 0x10 ) = 0;
                  *(undefined8*)( (TType*)local_68 + 0x24 ) = uVar17;
                  *(ulong*)( (TType*)local_68 + 0x38 ) = ( ulong )(( uint ) * (undefined8*)( (TType*)local_68 + 0x38 ) & 0xfe07ff00) | 0x1f800ff;
                  ( (TType*)local_68 )[0x40] = (TType)0x0;
                  *(ulong*)( (TType*)local_68 + 0x2c ) = *(ulong*)( (TType*)local_68 + 0x2c ) & 0xffffffff8000 | 0xffff000000004fff;
                  *(ulong*)( (TType*)local_68 + 0x34 ) = *(ulong*)( (TType*)local_68 + 0x34 ) | 0x7ff007fffffff;
                  *(undefined4*)( (TType*)local_68 + 0x4c ) = 0xffffffff;
                  *(ulong*)( (TType*)local_68 + 0x18 ) = *(ulong*)( (TType*)local_68 + 0x18 ) & 0x8000000400000000;
                  lVar29 = *(long*)( param_1 + 0x68 );
                  *(undefined8*)( (TType*)local_68 + 0x50 ) = 0;
                  deepCopy((TType*)local_68, *(TType**)( *(long*)( lVar29 + 8 ) + lVar28 ), param_2);
                  pvVar10 = *(vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>**)( this + 0x68 );
                  puVar20 = *(undefined8**)( pvVar10 + 0x10 );
                  if (puVar20 == *(undefined8**)( pvVar10 + 0x18 )) {
                     std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>::_M_realloc_insert<glslang::TTypeLoc_const&>(pvVar10, puVar20, &local_68);
                  }
 else {
                     *puVar20 = local_68;
                     puVar20[1] = lStack_60;
                     puVar20[2] = p_Stack_58;
                     puVar20[3] = uStack_50;
                     *(undefined8**)( pvVar10 + 0x10 ) = puVar20 + 4;
                  }

                  uVar16 = ( ulong )((int)uVar16 + 1);
                  lVar29 = *(long*)( *(long*)( param_1 + 0x68 ) + 8 );
               }
 while ( uVar16 < ( ulong )(*(long*)( *(long*)( param_1 + 0x68 ) + 0x10 ) - lVar29 >> 5) );
            }

         }

      }

   }
 else {
      cVar15 = ( **(code**)( *(long*)param_1 + 0x128 ) )(param_1);
      if (cVar15 != '\0') goto LAB_001116cd;
   }

   LAB_001115ea:if (*(long*)( param_1 + 0x70 ) != 0) {
      pcVar9 = *(char**)( *(long*)( param_1 + 0x70 ) + 8 );
      uVar16 = glslang::GetThreadPoolAllocator();
      puVar20 = (undefined8*)glslang::TPoolAllocator::allocate(uVar16);
      uVar17 = glslang::GetThreadPoolAllocator();
      *puVar20 = uVar17;
      puVar20[1] = puVar20 + 3;
      if (pcVar9 == (char*)0x0) goto LAB_00111984;
      sVar24 = strlen(pcVar9);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(puVar20, pcVar9, pcVar9 + sVar24);
      *(undefined8**)( this + 0x70 ) = puVar20;
   }

   if (*(long*)( param_1 + 0x78 ) != 0) {
      pcVar9 = *(char**)( *(long*)( param_1 + 0x78 ) + 8 );
      uVar16 = glslang::GetThreadPoolAllocator();
      puVar20 = (undefined8*)glslang::TPoolAllocator::allocate(uVar16);
      uVar17 = glslang::GetThreadPoolAllocator();
      *puVar20 = uVar17;
      puVar20[1] = puVar20 + 3;
      if (pcVar9 == (char*)0x0) {
         LAB_00111984:/* WARNING: Subroutine does not return */std::__throw_logic_error("basic_string: construction from null is not valid");
      }

      sVar24 = strlen(pcVar9);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(puVar20, pcVar9, pcVar9 + sVar24);
      *(undefined8**)( this + 0x78 ) = puVar20;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Control flow encountered bad instruction data *//* glslang::TVariable::~TVariable() */void glslang::TVariable::~TVariable(TVariable *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* glslang::TConstUnionArray::~TConstUnionArray() */void glslang::TConstUnionArray::~TConstUnionArray(TConstUnionArray *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* glslang::TType::~TType() */void glslang::TType::~TType(TType *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* glslang::TSmallArrayVector::~TSmallArrayVector() */void glslang::TSmallArrayVector::~TSmallArrayVector(TSmallArrayVector *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */void std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string(basic_string *param_1) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::basic_string<glslang::std::allocator<char> >(char const*, glslang::std::allocator<char>
   const&) */void std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string<glslang::std::allocator<char>>(char *param_1, allocator *param_2) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* glslang::TAnonMember::~TAnonMember() */void glslang::TAnonMember::~TAnonMember(TAnonMember *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

