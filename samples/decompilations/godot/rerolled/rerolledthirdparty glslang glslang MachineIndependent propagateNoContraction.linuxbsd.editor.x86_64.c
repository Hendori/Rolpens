/* (anonymous
   namespace)::TNoContractionAssigneeCheckingTraverser::~TNoContractionAssigneeCheckingTraverser()
    */void TNoContractionAssigneeCheckingTraverser::~TNoContractionAssigneeCheckingTraverser(TNoContractionAssigneeCheckingTraverser *this) {
   return;
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
         goto LAB_00100054;
      }

      if (__n == 0) goto LAB_00100054;
   }
 else {
      __dest = (undefined1*)std::__cxx11::string::_M_create(param_1, ( ulong ) & local_28);
      *param_1 = (ulong)__dest;
      param_1[2] = local_28;
   }

   memcpy(__dest, param_2, __n);
   __dest = (undefined1*)*param_1;
   LAB_00100054:param_1[1] = local_28;
   __dest[local_28] = 0;
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* (anonymous namespace)::TSymbolDefinitionCollectingTraverser::visitAggregate(glslang::TVisit,
   glslang::TIntermAggregate*) */undefined8 TSymbolDefinitionCollectingTraverser::visitAggregate(TSymbolDefinitionCollectingTraverser *this, undefined8 param_2, long *param_3) {
   undefined8 uVar1;
   long *plVar2;
   long lVar3;
   uVar1 = *(undefined8*)( this + 0x78 );
   if ((int)param_3[0x17] == 5) {
      *(long**)( this + 0x78 ) = param_3;
   }

   if (*(code**)( *param_3 + 400 ) == glslang::TIntermAggregate::getSequence) {
      param_3 = param_3 + 0x18;
   }
 else {
      param_3 = (long*)( **(code**)( *param_3 + 400 ) )();
   }

   if (0 < (int)( param_3[2] - param_3[1] >> 3 )) {
      lVar3 = 0;
      do {
         *(undefined8*)( this + 0x58 ) = 0;
         **(undefined1**)( this + 0x50 ) = 0;
         plVar2 = *(long**)( param_3[1] + lVar3 * 8 );
         lVar3 = lVar3 + 1;
         ( **(code**)( *plVar2 + 0x10 ) )(plVar2, this);
      }
 while ( (int)lVar3 < (int)( param_3[2] - param_3[1] >> 3 ) );
   }

   *(undefined8*)( this + 0x78 ) = uVar1;
   return 0;
}
/* (anonymous namespace)::TSymbolDefinitionCollectingTraverser::visitBranch(glslang::TVisit,
   glslang::TIntermBranch*) */undefined8 TSymbolDefinitionCollectingTraverser::visitBranch(TSymbolDefinitionCollectingTraverser *this, undefined8 param_2, ulong param_3) {
   long *plVar1;
   ulong uVar2;
   undefined8 *puVar3;
   char cVar4;
   long *plVar5;
   long *plVar6;
   long *plVar7;
   ulong uVar8;
   ulong extraout_RDX;
   long *plVar9;
   long *plVar10;
   ulong uVar11;
   if (*(int*)( param_3 + 0x20 ) != 0x1d5) {
      return 0;
   }

   if (( *(long*)( param_3 + 0x28 ) != 0 ) && ( plVar6 = *(long**)( this + 0x78 ) ),plVar6 != (long*)0x0) {
      if (*(code**)( *plVar6 + 0xf0 ) == glslang::TIntermTyped::getType) {
         plVar6 = plVar6 + 4;
      }
 else {
         plVar6 = (long*)( **(code**)( *plVar6 + 0xf0 ) )();
      }

      if (*(code**)( *plVar6 + 0x58 ) == glslang::TType::getQualifier) {
         plVar6 = plVar6 + 2;
      }
 else {
         plVar6 = (long*)( **(code**)( *plVar6 + 0x58 ) )();
      }

      if (( *(byte*)( (long)plVar6 + 0xc ) & 0x10 ) != 0) {
         plVar6 = *(long**)( this + 0x48 );
         if (plVar6[3] == 0) {
            for (puVar3 = (undefined8*)plVar6[2]; puVar3 != (undefined8*)0x0; puVar3 = (undefined8*)*puVar3) {
               if (puVar3[1] == param_3) goto LAB_001002c4;
            }

            uVar8 = param_3 % (ulong)plVar6[1];
         }
 else {
            uVar8 = param_3 % (ulong)plVar6[1];
            plVar5 = *(long**)( *plVar6 + uVar8 * 8 );
            if (plVar5 != (long*)0x0) {
               uVar11 = ( (long*)*plVar5 )[1];
               plVar7 = (long*)*plVar5;
               while (uVar11 != param_3) {
                  plVar9 = (long*)*plVar7;
                  if (( plVar9 == (long*)0x0 ) || ( uVar11 = plVar9[1] ),plVar5 = plVar7,plVar7 = plVar9,uVar11 % (ulong)plVar6[1] != uVar8) goto LAB_00100258;
               }
;
               if (*plVar5 != 0) goto LAB_001002c4;
            }

         }

         LAB_00100258:plVar5 = (long*)operator_new(0x10);
         uVar11 = plVar6[3];
         uVar2 = plVar6[1];
         *plVar5 = 0;
         plVar5[1] = param_3;
         cVar4 = std::__detail::_Prime_rehash_policy::_M_need_rehash(( ulong )(plVar6 + 4), uVar2, uVar11);
         if (cVar4 == '\0') {
            plVar7 = (long*)*plVar6;
         }
 else {
            if (extraout_RDX == 1) {
               plVar7 = plVar6 + 6;
               plVar6[6] = 0;
            }
 else {
               if (extraout_RDX >> 0x3c != 0) {
                  if (0x1fffffffffffffff < extraout_RDX) {
                     std::__throw_bad_array_new_length();
                  }

                  /* WARNING: Subroutine does not return */
                  std::__throw_bad_alloc();
               }

               plVar7 = (long*)operator_new(extraout_RDX * 8);
               memset(plVar7, 0, extraout_RDX * 8);
            }

            plVar9 = (long*)plVar6[2];
            plVar6[2] = 0;
            uVar8 = 0;
            while (uVar11 = uVar8,plVar10 = plVar9,plVar9 != (long*)0x0) {
               while (true) {
                  plVar9 = (long*)*plVar10;
                  uVar8 = (ulong)plVar10[1] % extraout_RDX;
                  plVar1 = plVar7 + uVar8;
                  if ((long*)*plVar1 == (long*)0x0) break;
                  *plVar10 = *(long*)*plVar1;
                  *(long**)*plVar1 = plVar10;
                  plVar10 = plVar9;
                  if (plVar9 == (long*)0x0) goto LAB_001003cb;
               }
;
               *plVar10 = plVar6[2];
               plVar6[2] = (long)plVar10;
               *plVar1 = (long)( plVar6 + 2 );
               if (*plVar10 != 0) {
                  plVar7[uVar11] = (long)plVar10;
               }

            }
;
            LAB_001003cb:if ((long*)*plVar6 != plVar6 + 6) {
               operator_delete((long*)*plVar6, plVar6[1] * 8);
            }

            plVar6[1] = extraout_RDX;
            uVar8 = param_3 % extraout_RDX;
            *plVar6 = (long)plVar7;
         }

         plVar9 = plVar7 + uVar8;
         if ((long*)*plVar9 == (long*)0x0) {
            *plVar5 = plVar6[2];
            plVar6[2] = (long)plVar5;
            if (*plVar5 != 0) {
               plVar7[*(ulong*)( *plVar5 + 8 ) % (ulong)plVar6[1]] = (long)plVar5;
            }

            *plVar9 = (long)( plVar6 + 2 );
         }
 else {
            *plVar5 = *(long*)*plVar9;
            *(long**)*plVar9 = plVar5;
         }

         plVar6[3] = plVar6[3] + 1;
         LAB_001002c4:( **(code**)( **(long**)( param_3 + 0x28 ) + 0x10 ) )(*(long**)( param_3 + 0x28 ), this);
      }

   }

   return 0;
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
         goto LAB_001004c4;
      }

      if (__n == 0) goto LAB_001004c4;
   }
 else {
      __dest = (undefined1*)std::__cxx11::string::_M_create(param_1, ( ulong ) & local_28);
      *param_1 = (ulong)__dest;
      param_1[2] = local_28;
   }

   memcpy(__dest, param_2, __n);
   __dest = (undefined1*)*param_1;
   LAB_001004c4:param_1[1] = local_28;
   __dest[local_28] = 0;
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* std::_Hashtable<glslang::TIntermTyped*, std::pair<glslang::TIntermTyped* const,
   std::__cxx11::string >, std::allocator<std::pair<glslang::TIntermTyped* const,
   std::__cxx11::string > >, std::__detail::_Select1st, std::equal_to<glslang::TIntermTyped*>,
   std::hash<glslang::TIntermTyped*>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true> >::find(glslang::TIntermTyped* const&) const
   [clone .isra.0] */undefined8 * __thiscallstd::_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find(_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> * this, TIntermTyped * *param_1) * *ppTVar1 ;undefined8 *puVar2undefined8 *puVar3undefined8 *puVar4ulong uVar5if (*(long*)( this + 0x18 ) == 0) {
   for (puVar4 = *(undefined8**)( this + 0x10 ); ( puVar4 != (undefined8*)0x0 && ( (TIntermTyped**)puVar4[1] != param_1 ) ); puVar4 = (undefined8*)*puVar4) {}
}
 else {
   uVar5 = (ulong)param_1 % *(ulong*)( this + 8 );
   puVar4 = *(undefined8**)( *(long*)this + uVar5 * 8 );
   if (puVar4 != (undefined8*)0x0) {
      ppTVar1 = (TIntermTyped**)( (undefined8*)*puVar4 )[1];
      puVar3 = (undefined8*)*puVar4;
      do {
         if (param_1 == ppTVar1) {
            return (undefined8*)*puVar4;
         }

         puVar2 = (undefined8*)*puVar3;
      }
 while ( ( puVar2 != (undefined8*)0x0 ) && ( ppTVar1 = (TIntermTyped**)puVar2[1] ),puVar4 = puVar3,puVar3 = puVar2,uVar5 == (ulong)ppTVar1 % *(ulong*)( this + 8 ) );
      puVar4 = (undefined8*)0x0;
   }

}
return puVar4;}/* (anonymous namespace)::getFrontElement(std::__cxx11::string const&) */_anonymous_namespace_ * __thiscall
(anonymous_namespace)::getFrontElement(_anonymous_namespace_ *this,string *param_1){
   long lVar1;
   ulong uVar2;
   uVar2 = std::__cxx11::string::find((char)param_1, 0x2f);
   if (uVar2 != 0xffffffffffffffff) {
      *(_anonymous_namespace_**)this = this + 0x10;
      if (*(ulong*)( param_1 + 8 ) < uVar2) {
         uVar2 = *(ulong*)( param_1 + 8 );
      }

      std::__cxx11::string::_M_construct<char_const*>(this, *(long*)param_1, *(long*)param_1 + uVar2);
      return this;
   }

   lVar1 = *(long*)( param_1 + 8 );
   *(_anonymous_namespace_**)this = this + 0x10;
   std::__cxx11::string::_M_construct<char*>(this, *(long*)param_1, lVar1 + *(long*)param_1);
   return this;
}
/* (anonymous
   namespace)::TNoContractionAssigneeCheckingTraverser::visitSymbol(glslang::TIntermSymbol*) */TIntermSymbol * __thiscall
(anonymous_namespace)::TNoContractionAssigneeCheckingTraverser::visitSymbol
          (TNoContractionAssigneeCheckingTraverser *this,TIntermSymbol *param_1){
   size_t __n;
   uint uVar1;
   TIntermSymbol *pTVar2;
   long *plVar3;
   long lVar4;
   long *extraout_RDX;
   undefined8 *puVar5;
   puVar5 = *(undefined8**)( this + 0x40 );
   pTVar2 = (TIntermSymbol*)std::_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find(*(_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>**)( this + 0x38 ), (TIntermTyped**)param_1);
   if (pTVar2 != (TIntermSymbol*)0x0) {
      __n = *(size_t*)( pTVar2 + 0x18 );
      if (__n != puVar5[1]) {
         return pTVar2;
      }

      if (__n != 0) {
         uVar1 = memcmp(*(void**)( pTVar2 + 0x10 ), (void*)*puVar5, __n);
         if (uVar1 != 0) {
            return (TIntermSymbol*)(ulong)uVar1;
         }

      }

      if (*(code**)( *(long*)param_1 + 0xf8 ) == glslang::TIntermTyped::getWritableType) {
         pTVar2 = param_1 + 0x20;
      }
 else {
         pTVar2 = (TIntermSymbol*)( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1);
      }

      if (*(code**)( *(long*)pTVar2 + 0x50 ) == glslang::TType::getQualifier) {
         pTVar2 = pTVar2 + 0x10;
      }
 else {
         pTVar2 = (TIntermSymbol*)( **(code**)( *(long*)pTVar2 + 0x50 ) )();
      }

      pTVar2[0xc] = ( TIntermSymbol )((byte)pTVar2[0xc] | 0x10);
      return pTVar2;
   }

   std::__throw_out_of_range("unordered_map::at");
   uVar1 = *(uint*)( extraout_RDX + 0x17 );
   if (uVar1 < 0xb3) {
      if (uVar1 < 0xaf) {
         if (uVar1 < 0x10) {
            if (( uVar1 < 0xc ) && ( uVar1 != 8 )) {
               return (TIntermSymbol*)0x1;
            }

         }
 else if (4 < uVar1 - 0x9c) {
            return (TIntermSymbol*)0x1;
         }

      }

   }
 else if (uVar1 != 0x129) {
      if (uVar1 < 0x12a) {
         if (uVar1 != 0x113) {
            return (TIntermSymbol*)0x1;
         }

      }
 else if (8 < uVar1 - 0x24a) {
         return (TIntermSymbol*)0x1;
      }

   }

   if (*(code**)( *extraout_RDX + 0xf8 ) == glslang::TIntermTyped::getWritableType) {
      plVar3 = extraout_RDX + 4;
   }
 else {
      plVar3 = (long*)( **(code**)( *extraout_RDX + 0xf8 ) )(extraout_RDX);
   }

   if (*(code**)( *plVar3 + 0x50 ) == glslang::TType::getQualifier) {
      *(byte*)( (long)plVar3 + 0x1c ) = *(byte*)( (long)plVar3 + 0x1c ) | 0x10;
      return (TIntermSymbol*)0x1;
   }

   lVar4 = ( **(code**)( *plVar3 + 0x50 ) )();
   *(byte*)( lVar4 + 0xc ) = *(byte*)( lVar4 + 0xc ) | 0x10;
   return (TIntermSymbol*)0x1;
}
/* (anonymous namespace)::TNoContractionPropagator::visitUnary(glslang::TVisit,
   glslang::TIntermUnary*) */undefined8 TNoContractionPropagator::visitUnary(undefined8 param_1, undefined8 param_2, long *param_3) {
   uint uVar1;
   long lVar2;
   uVar1 = *(uint*)( param_3 + 0x17 );
   if (uVar1 < 0xb3) {
      if (uVar1 < 0xaf) {
         if (uVar1 < 0x10) {
            if (( uVar1 < 0xc ) && ( uVar1 != 8 )) {
               return 1;
            }

         }
 else if (4 < uVar1 - 0x9c) {
            return 1;
         }

      }

   }
 else if (uVar1 != 0x129) {
      if (uVar1 < 0x12a) {
         if (uVar1 != 0x113) {
            return 1;
         }

      }
 else if (8 < uVar1 - 0x24a) {
         return 1;
      }

   }

   if (*(code**)( *param_3 + 0xf8 ) == glslang::TIntermTyped::getWritableType) {
      param_3 = param_3 + 4;
   }
 else {
      param_3 = (long*)( **(code**)( *param_3 + 0xf8 ) )(param_3);
   }

   if (*(code**)( *param_3 + 0x50 ) == glslang::TType::getQualifier) {
      *(byte*)( (long)param_3 + 0x1c ) = *(byte*)( (long)param_3 + 0x1c ) | 0x10;
      return 1;
   }

   lVar2 = ( **(code**)( *param_3 + 0x50 ) )();
   *(byte*)( lVar2 + 0xc ) = *(byte*)( lVar2 + 0xc ) | 0x10;
   return 1;
}
/* (anonymous
   namespace)::TSymbolDefinitionCollectingTraverser::~TSymbolDefinitionCollectingTraverser() */void TSymbolDefinitionCollectingTraverser::~TSymbolDefinitionCollectingTraverser(TSymbolDefinitionCollectingTraverser *this) {
   *(undefined***)this = &PTR__TSymbolDefinitionCollectingTraverser_00104ca8;
   if (*(TSymbolDefinitionCollectingTraverser**)( this + 0x50 ) != this + 0x60) {
      operator_delete(*(TSymbolDefinitionCollectingTraverser**)( this + 0x50 ), *(long*)( this + 0x60 ) + 1);
      return;
   }

   return;
}
/* std::pair<std::__detail::_Node_iterator<std::__cxx11::string, true, true>, bool>
   std::_Hashtable<std::__cxx11::string, std::__cxx11::string, std::allocator<std::__cxx11::string
   >, std::__detail::_Identity, std::equal_to<std::__cxx11::string >, std::hash<std::__cxx11::string
   >, std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<true, true, true>
   >::_M_insert_unique<std::__cxx11::string const&, std::__cxx11::string const&,
   std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::__cxx11::string, true> >
   > >(std::__cxx11::string const&, std::__cxx11::string const&,
   std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::__cxx11::string, true> >
   > const&) [clone .isra.0] */undefined1[16];std::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert_unique<std::__cxx11::string_const&,std::__cxx11::string_const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::__cxx11::string,true>>>>(string *param_1, string *param_2, _AllocNode *param_3) {
   string *psVar1;
   void *__s1;
   undefined8 *puVar2;
   size_t __n;
   long lVar3;
   long lVar4;
   char cVar5;
   undefined4 uVar6;
   int iVar7;
   ulong uVar8;
   long *plVar9;
   string *__s;
   ulong uVar10;
   ulong uVar11;
   ulong extraout_RDX;
   ulong uVar12;
   undefined8 *puVar13;
   long *plVar14;
   long *plVar15;
   undefined8 *puVar16;
   undefined1 auVar17[16];
   uVar12 = *(ulong*)( param_2 + 8 );
   __s1 = *(void**)param_2;
   if (*(ulong*)( param_1 + 0x18 ) < 0x15) {
      for (plVar9 = *(long**)( param_1 + 0x10 ); plVar9 != (long*)0x0; plVar9 = (long*)*plVar9) {
         if (( plVar9[2] == uVar12 ) && ( ( uVar12 == 0 || ( iVar7 = memcmp(__s1, (void*)plVar9[1], uVar12) ),iVar7 == 0 ) )) {
            uVar6 = 0;
            goto LAB_00100858;
         }

      }

   }

   uVar8 = std::_Hash_bytes(__s1, uVar12, 0xc70f6907);
   uVar12 = *(ulong*)( param_1 + 8 );
   uVar11 = uVar8 % uVar12;
   if (( 0x14 < *(ulong*)( param_1 + 0x18 ) ) && ( puVar16 = *(undefined8**)( *(long*)param_1 + uVar11 * 8 ) ),puVar16 != (undefined8*)0x0) {
      uVar10 = ( (undefined8*)*puVar16 )[5];
      puVar2 = (undefined8*)*puVar16;
      while (( ( puVar13 = puVar2 ),uVar8 != uVar10 || ( __n = *(size_t*)( param_2 + 8 ) ),__n != puVar13[2] )) {
         puVar2 = (undefined8*)*puVar13;
         if (( puVar2 == (undefined8*)0x0 ) || ( uVar10 = puVar2[5] ),puVar16 = puVar13,uVar11 != uVar10 % uVar12) goto LAB_00100918;
      }
;
      plVar9 = (long*)*puVar16;
      uVar6 = 0;
      if (plVar9 != (long*)0x0) goto LAB_00100858;
   }

   LAB_00100918:plVar9 = (long*)operator_new(0x30);
   lVar3 = *(long*)param_2;
   lVar4 = *(long*)( param_2 + 8 );
   *plVar9 = 0;
   plVar9[1] = (long)( plVar9 + 3 );
   __cxx11::string::_M_construct<char*>(plVar9 + 1, lVar3, lVar4 + lVar3);
   cVar5 = std::__detail::_Prime_rehash_policy::_M_need_rehash(( ulong )(param_1 + 0x20), *(ulong*)( param_1 + 8 ), *(ulong*)( param_1 + 0x18 ));
   if (cVar5 == '\0') {
      __s = *(string**)param_1;
      plVar9[5] = uVar8;
      psVar1 = __s + uVar11 * 8;
      plVar14 = *(long**)psVar1;
   }
 else {
      if (extraout_RDX == 1) {
         __s = param_1 + 0x30;
         *(undefined8*)( param_1 + 0x30 ) = 0;
      }
 else {
         if (extraout_RDX >> 0x3c != 0) {
            if (extraout_RDX >> 0x3d != 0) {
               std::__throw_bad_array_new_length();
            }

            /* WARNING: Subroutine does not return */
            std::__throw_bad_alloc();
         }

         __s = (string*)operator_new(extraout_RDX * 8);
         memset(__s, 0, extraout_RDX * 8);
      }

      plVar14 = *(long**)( param_1 + 0x10 );
      *(undefined8*)( param_1 + 0x10 ) = 0;
      uVar12 = 0;
      while (uVar11 = uVar12,plVar15 = plVar14,plVar14 != (long*)0x0) {
         while (true) {
            plVar14 = (long*)*plVar15;
            uVar12 = (ulong)plVar15[5] % extraout_RDX;
            psVar1 = __s + uVar12 * 8;
            if (*(long**)psVar1 == (long*)0x0) break;
            *plVar15 = **(long**)psVar1;
            **(undefined8**)psVar1 = plVar15;
            plVar15 = plVar14;
            if (plVar14 == (long*)0x0) goto LAB_00100a23;
         }
;
         *plVar15 = *(long*)( param_1 + 0x10 );
         *(long**)( param_1 + 0x10 ) = plVar15;
         *(string**)psVar1 = param_1 + 0x10;
         if (*plVar15 != 0) {
            *(long**)( __s + uVar11 * 8 ) = plVar15;
         }

      }
;
      LAB_00100a23:if (*(string**)param_1 != param_1 + 0x30) {
         operator_delete(*(string**)param_1, *(long*)( param_1 + 8 ) << 3);
      }

      *(ulong*)( param_1 + 8 ) = extraout_RDX;
      *(string**)param_1 = __s;
      plVar9[5] = uVar8;
      psVar1 = __s + ( uVar8 % extraout_RDX ) * 8;
      plVar14 = *(long**)psVar1;
   }

   if (plVar14 == (long*)0x0) {
      lVar3 = *(long*)( param_1 + 0x10 );
      *(long**)( param_1 + 0x10 ) = plVar9;
      *plVar9 = lVar3;
      if (lVar3 != 0) {
         *(long**)( __s + ( *(ulong*)( lVar3 + 0x28 ) % *(ulong*)( param_1 + 8 ) ) * 8 ) = plVar9;
      }

      *(string**)psVar1 = param_1 + 0x10;
   }
 else {
      *plVar9 = *plVar14;
      **(undefined8**)psVar1 = plVar9;
   }

   *(long*)( param_1 + 0x18 ) = *(long*)( param_1 + 0x18 ) + 1;
   uVar6 = 1;
   LAB_00100858:auVar17._8_4_ = uVar6;
   auVar17._0_8_ = plVar9;
   auVar17._12_4_ = 0;
   return auVar17;
}
/* (anonymous namespace)::TNoContractionPropagator::visitAggregate(glslang::TVisit,
   glslang::TIntermAggregate*) */undefined8 TNoContractionPropagator::visitAggregate(TNoContractionPropagator *this, undefined8 param_2, long *param_3) {
   string *psVar1;
   size_t __n;
   int iVar2;
   undefined8 uVar3;
   ulong uVar4;
   long *plVar5;
   long lVar6;
   ulong uVar7;
   TIntermTyped **ppTVar8;
   TIntermTyped **extraout_RDX;
   char *pcVar9;
   TIntermTyped *pTVar10;
   undefined8 *puVar11;
   long in_FS_OFFSET;
   long *local_c8[2];
   long local_b8[2];
   long *local_a8;
   long local_a0;
   long local_98[2];
   long *local_88[2];
   long local_78[2];
   string *local_68;
   long *local_60[2];
   long local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x80 ) == 0) {
      uVar3 = 1;
   }
 else {
      uVar3 = 1;
      if ((int)param_3[0x17] == 0x241) {
         psVar1 = (string*)( this + 0x78 );
         getFrontElement((_anonymous_namespace_*)local_c8, psVar1);
         uVar4 = __isoc23_strtoul(local_c8[0], 0, 10);
         if (*(code**)( *param_3 + 400 ) == glslang::TIntermAggregate::getSequence) {
            param_3 = param_3 + 0x18;
         }
 else {
            param_3 = (long*)( **(code**)( *param_3 + 400 ) )(param_3);
         }

         plVar5 = (long*)( **(code**)( **(long**)( param_3[1] + ( uVar4 & 0xffffffff ) * 8 ) + 0x18 ) )();
         lVar6 = std::__cxx11::string::find((char)psVar1, 0x2f);
         if (lVar6 == -1) {
            local_a8 = local_98;
            std::__cxx11::string::_M_construct<char_const*>(&local_a8, &_LC1, &_LC1);
         }
 else {
            uVar4 = *(ulong*)( this + 0x80 );
            uVar7 = lVar6 + 1;
            if (uVar4 < uVar7) {
               pcVar9 = "%s: __pos (which is %zu) > this->size() (which is %zu)";
               std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::substr", uVar7, uVar4);
               if (*(code**)( *extraout_RDX + 400 ) == glslang::TIntermBinary::getLeft) {
                  pTVar10 = extraout_RDX[0x18];
               }
 else {
                  pTVar10 = (TIntermTyped*)( **(code**)( *extraout_RDX + 400 ) )(extraout_RDX);
               }

               ( **(code**)( *(long*)pTVar10 + 0x10 ) )(pTVar10, pcVar9);
               lVar6 = std::_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find(*(_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>**)( pcVar9 + 0x38 ), extraout_RDX);
               if (lVar6 == 0) {
                  return 0;
               }

               if (*(code**)( *extraout_RDX + 400 ) == glslang::TIntermBinary::getLeft) {
                  pTVar10 = extraout_RDX[0x18];
               }
 else {
                  pTVar10 = (TIntermTyped*)( **(code**)( *extraout_RDX + 400 ) )(extraout_RDX);
               }

               if (*(code**)( *(long*)pTVar10 + 0xf0 ) == glslang::TIntermTyped::getType) {
                  pTVar10 = pTVar10 + 0x20;
               }
 else {
                  pTVar10 = (TIntermTyped*)( **(code**)( *(long*)pTVar10 + 0xf0 ) )();
               }

               if (*(code**)( *(long*)pTVar10 + 0x58 ) == glslang::TType::getQualifier) {
                  pTVar10 = pTVar10 + 0x10;
               }
 else {
                  pTVar10 = (TIntermTyped*)( **(code**)( *(long*)pTVar10 + 0x58 ) )();
               }

               if (( (byte)pTVar10[0xc] & 0x10 ) == 0) {
                  puVar11 = *(undefined8**)( pcVar9 + 0x40 );
                  lVar6 = std::_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find(*(_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>**)( pcVar9 + 0x38 ), extraout_RDX);
                  if (lVar6 == 0) {
                     pcVar9 = "unordered_map::at";
                     std::__throw_out_of_range("unordered_map::at");
                     *(undefined***)pcVar9 = &PTR__TNoContractionPropagator_00104d78;
                     if (*(char**)( pcVar9 + 0x78 ) != pcVar9 + 0x88) {
                        operator_delete(*(char**)( pcVar9 + 0x78 ), *(long*)( pcVar9 + 0x88 ) + 1);
                     }

                     uVar3 = std::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::~_Hashtable((_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>*)( pcVar9 + 0x40 ));
                     return uVar3;
                  }

                  __n = *(size_t*)( lVar6 + 0x18 );
                  if (__n != puVar11[1]) {
                     return 0;
                  }

                  if (( __n != 0 ) && ( iVar2 = iVar2 != 0 )) {
                     return 0;
                  }

               }

               if (*(code**)( *extraout_RDX + 0xf8 ) == glslang::TIntermTyped::getWritableType) {
                  ppTVar8 = extraout_RDX + 4;
               }
 else {
                  ppTVar8 = (TIntermTyped**)( **(code**)( *extraout_RDX + 0xf8 ) )(extraout_RDX);
               }

               if (*(code**)( *ppTVar8 + 0x50 ) == glslang::TType::getQualifier) {
                  ppTVar8 = ppTVar8 + 2;
               }
 else {
                  ppTVar8 = (TIntermTyped**)( **(code**)( *ppTVar8 + 0x50 ) )();
               }

               *(byte*)( (long)ppTVar8 + 0xc ) = *(byte*)( (long)ppTVar8 + 0xc ) | 0x10;
               return 0;
            }

            local_a8 = local_98;
            std::__cxx11::string::_M_construct<char_const*>(&local_a8, *(long*)( this + 0x78 ) + uVar7, uVar4 + *(long*)( this + 0x78 ));
         }

         local_88[0] = local_78;
         std::__cxx11::string::_M_construct<char*>(local_88, local_a8, local_a0 + (long)local_a8);
         local_68 = psVar1;
         local_60[0] = local_50;
         std::__cxx11::string::_M_construct<char*>(local_60, *(long*)( this + 0x78 ), *(long*)( this + 0x80 ) + *(long*)( this + 0x78 ));
         std::__cxx11::string::_M_assign(psVar1);
         if (local_88[0] != local_78) {
            operator_delete(local_88[0], local_78[0] + 1);
         }

         ( **(code**)( *plVar5 + 0x10 ) )(plVar5, this);
         std::__cxx11::string::_M_assign(local_68);
         if (local_60[0] != local_50) {
            operator_delete(local_60[0], local_50[0] + 1);
         }

         if (local_a8 != local_98) {
            operator_delete(local_a8, local_98[0] + 1);
         }

         if (local_c8[0] != local_b8) {
            operator_delete(local_c8[0], local_b8[0] + 1);
         }

         uVar3 = 0;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* (anonymous namespace)::TNoContractionAssigneeCheckingTraverser::visitBinary(glslang::TVisit,
   glslang::TIntermBinary*) */undefined8 TNoContractionAssigneeCheckingTraverser::visitBinary(TNoContractionAssigneeCheckingTraverser *this, undefined8 param_2, TIntermTyped **param_3) {
   size_t __n;
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   TIntermTyped *pTVar4;
   char *pcVar5;
   undefined8 *puVar6;
   if (*(code**)( *param_3 + 400 ) == glslang::TIntermBinary::getLeft) {
      pTVar4 = param_3[0x18];
   }
 else {
      pTVar4 = (TIntermTyped*)( **(code**)( *param_3 + 400 ) )(param_3);
   }

   ( **(code**)( *(long*)pTVar4 + 0x10 ) )(pTVar4, this);
   lVar2 = std::_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find(*(_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>**)( this + 0x38 ), param_3);
   if (lVar2 == 0) {
      return 0;
   }

   if (*(code**)( *param_3 + 400 ) == glslang::TIntermBinary::getLeft) {
      pTVar4 = param_3[0x18];
   }
 else {
      pTVar4 = (TIntermTyped*)( **(code**)( *param_3 + 400 ) )(param_3);
   }

   if (*(code**)( *(long*)pTVar4 + 0xf0 ) == glslang::TIntermTyped::getType) {
      pTVar4 = pTVar4 + 0x20;
   }
 else {
      pTVar4 = (TIntermTyped*)( **(code**)( *(long*)pTVar4 + 0xf0 ) )();
   }

   if (*(code**)( *(long*)pTVar4 + 0x58 ) == glslang::TType::getQualifier) {
      pTVar4 = pTVar4 + 0x10;
   }
 else {
      pTVar4 = (TIntermTyped*)( **(code**)( *(long*)pTVar4 + 0x58 ) )();
   }

   if (( (byte)pTVar4[0xc] & 0x10 ) == 0) {
      puVar6 = *(undefined8**)( this + 0x40 );
      lVar2 = std::_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find(*(_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>**)( this + 0x38 ), param_3);
      if (lVar2 == 0) {
         pcVar5 = "unordered_map::at";
         std::__throw_out_of_range("unordered_map::at");
         *(undefined***)pcVar5 = &PTR__TNoContractionPropagator_00104d78;
         if (*(char**)( pcVar5 + 0x78 ) != pcVar5 + 0x88) {
            operator_delete(*(char**)( pcVar5 + 0x78 ), *(long*)( pcVar5 + 0x88 ) + 1);
         }

         uVar3 = std::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::~_Hashtable((_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>*)( pcVar5 + 0x40 ));
         return uVar3;
      }

      __n = *(size_t*)( lVar2 + 0x18 );
      if (__n != puVar6[1]) {
         return 0;
      }

      if (( __n != 0 ) && ( iVar1 = iVar1 != 0 )) {
         return 0;
      }

   }

   if (*(code**)( *param_3 + 0xf8 ) == glslang::TIntermTyped::getWritableType) {
      param_3 = param_3 + 4;
   }
 else {
      param_3 = (TIntermTyped**)( **(code**)( *param_3 + 0xf8 ) )(param_3);
   }

   if (*(code**)( *param_3 + 0x50 ) == glslang::TType::getQualifier) {
      param_3 = param_3 + 2;
   }
 else {
      param_3 = (TIntermTyped**)( **(code**)( *param_3 + 0x50 ) )();
   }

   *(byte*)( (long)param_3 + 0xc ) = *(byte*)( (long)param_3 + 0xc ) | 0x10;
   return 0;
}
/* (anonymous namespace)::TNoContractionPropagator::~TNoContractionPropagator() */void TNoContractionPropagator::~TNoContractionPropagator(TNoContractionPropagator *this) {
   *(undefined***)this = &PTR__TNoContractionPropagator_00104d78;
   if (*(TNoContractionPropagator**)( this + 0x78 ) != this + 0x88) {
      operator_delete(*(TNoContractionPropagator**)( this + 0x78 ), *(long*)( this + 0x88 ) + 1);
   }

   std::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::~_Hashtable((_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>*)( this + 0x40 ));
   return;
}
/* (anonymous namespace)::TNoContractionPropagator::~TNoContractionPropagator() */void TNoContractionPropagator::~TNoContractionPropagator(TNoContractionPropagator *this) {
   *(undefined***)this = &PTR__TNoContractionPropagator_00104d78;
   if (*(TNoContractionPropagator**)( this + 0x78 ) != this + 0x88) {
      operator_delete(*(TNoContractionPropagator**)( this + 0x78 ), *(long*)( this + 0x88 ) + 1);
   }

   std::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::~_Hashtable((_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>*)( this + 0x40 ));
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* (anonymous namespace)::TSymbolDefinitionCollectingTraverser::visitSymbol(glslang::TIntermSymbol*)
    */void TSymbolDefinitionCollectingTraverser::visitSymbol(TSymbolDefinitionCollectingTraverser *this, TIntermSymbol *param_1) {
   long *plVar1;
   char *__s;
   bool bVar2;
   undefined1 auVar3[16];
   long *plVar4;
   size_t sVar5;
   undefined8 *puVar6;
   string *psVar7;
   TIntermSymbol *pTVar8;
   TSymbolDefinitionCollectingTraverser *pTVar9;
   uint uVar10;
   TSymbolDefinitionCollectingTraverser *pTVar11;
   ulong uVar12;
   long *plVar13;
   TSymbolDefinitionCollectingTraverser *pTVar14;
   ulong uVar15;
   uint uVar16;
   ulong uVar17;
   long *plVar18;
   long lVar19;
   char *pcVar20;
   char cVar21;
   long in_FS_OFFSET;
   TIntermSymbol *local_1a0;
   TSymbolDefinitionCollectingTraverser *local_198;
   undefined8 local_190;
   long local_188[2];
   long *local_178;
   long local_170;
   long local_168[2];
   long *local_158;
   long local_150;
   long local_148[2];
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
   lVar19 = *(long*)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( lVar19 + 400 ) == glslang::TIntermSymbol::getName_abi_cxx11_) {
      pTVar8 = param_1 + 200;
   }
 else {
      pTVar8 = (TIntermSymbol*)( **(code**)( lVar19 + 400 ) )(param_1);
      lVar19 = *(long*)param_1;
   }

   __s = *(char**)( pTVar8 + 8 );
   if (*(code**)( lVar19 + 0x180 ) == glslang::TIntermSymbol::getId) {
      uVar15 = *(ulong*)( param_1 + 0xb8 );
   }
 else {
      uVar15 = ( **(code**)( lVar19 + 0x180 ) )(param_1);
   }

   lVar19 = -((long)uVar15 >> 0x3f);
   uVar17 = -uVar15;
   if (0 < (long)uVar15) {
      uVar17 = uVar15;
   }

   cVar21 = (char)( (long)uVar15 >> 0x3f );
   if (uVar17 < 10) {
      local_178 = local_168;
      std::__cxx11::string::_M_construct(( ulong ) & local_178, '\x01' - cVar21);
      pcVar20 = (char*)( lVar19 + (long)local_178 );
      LAB_00101213:cVar21 = (char)uVar17 + '0';
   }
 else {
      if (uVar17 < 100) {
         local_178 = local_168;
         std::__cxx11::string::_M_construct(( ulong ) & local_178, '\x02' - cVar21);
         pcVar20 = (char*)( lVar19 + (long)local_178 );
         local_118 = __LC7;
         uStack_110 = _UNK_00104dd8;
         local_108 = __LC8;
         uStack_100 = _UNK_00104de8;
         local_f8 = __LC9;
         uStack_f0 = _UNK_00104df8;
         local_e8 = __LC10;
         uStack_e0 = _UNK_00104e08;
         local_d8 = __LC11;
         uStack_d0 = _UNK_00104e18;
         local_c8 = __LC12;
         uStack_c0 = _UNK_00104e28;
         local_b8 = __LC13;
         uStack_b0 = _UNK_00104e38;
         local_a8 = __LC14;
         uStack_a0 = _UNK_00104e48;
         local_98 = __LC15;
         uStack_90 = _UNK_00104e58;
         local_88 = __LC16;
         uStack_80 = _UNK_00104e68;
         local_78 = __LC17;
         uStack_70 = _UNK_00104e78;
         local_68 = __LC18;
         uStack_60 = (undefined1)_UNK_00104e88;
         uStack_5f = (undefined7)_LC19._0_8_;
         cStack_58 = SUB81(_LC19._0_8_, 7);
         for (int i = 0; i < 8; i++) {
            acStack_57[i] = _LC19[( i + 8 )];
         }

      }
 else {
         if (uVar17 < 1000) {
            uVar10 = 2;
            uVar16 = 3;
         }
 else if (uVar17 < 10000) {
            uVar10 = 3;
            uVar16 = 4;
         }
 else {
            uVar15 = uVar17;
            uVar16 = 1;
            do {
               uVar10 = uVar16;
               uVar16 = uVar10 + 4;
               if (uVar15 < 100000) {
                  uVar10 = uVar10 + 3;
                  goto LAB_00101097;
               }

               if (uVar15 < 1000000) {
                  local_178 = local_168;
                  std::__cxx11::string::_M_construct(( ulong ) & local_178, ( (char)uVar10 + '\x05' ) - cVar21);
                  goto LAB_001010ca;
               }

               if (uVar15 < 10000000) {
                  uVar16 = uVar10 + 6;
                  uVar10 = uVar10 + 5;
                  goto LAB_00101097;
               }

               bVar2 = 99999999 < uVar15;
               uVar15 = uVar15 / 10000;
            }
 while ( bVar2 );
            uVar16 = uVar10 + 7;
            uVar10 = uVar10 + 6;
         }

         LAB_00101097:local_178 = local_168;
         std::__cxx11::string::_M_construct(( ulong ) & local_178, (char)uVar16 - cVar21);
         uVar16 = uVar10;
         LAB_001010ca:pcVar20 = (char*)( lVar19 + (long)local_178 );
         local_118 = __LC7;
         uStack_110 = _UNK_00104dd8;
         local_108 = __LC8;
         uStack_100 = _UNK_00104de8;
         local_f8 = __LC9;
         uStack_f0 = _UNK_00104df8;
         local_e8 = __LC10;
         uStack_e0 = _UNK_00104e08;
         local_d8 = __LC11;
         uStack_d0 = _UNK_00104e18;
         local_c8 = __LC12;
         uStack_c0 = _UNK_00104e28;
         local_b8 = __LC13;
         uStack_b0 = _UNK_00104e38;
         local_a8 = __LC14;
         uStack_a0 = _UNK_00104e48;
         local_98 = __LC15;
         uStack_90 = _UNK_00104e58;
         local_88 = __LC16;
         uStack_80 = _UNK_00104e68;
         local_78 = __LC17;
         uStack_70 = _UNK_00104e78;
         local_68 = __LC18;
         uStack_60 = (undefined1)_UNK_00104e88;
         uStack_5f = (undefined7)_LC19._0_8_;
         cStack_58 = SUB81(_LC19._0_8_, 7);
         for (int i = 0; i < 8; i++) {
            acStack_57[i] = _LC19[( i + 8 )];
         }

         do {
            uVar15 = uVar17;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar15 >> 2;
            uVar17 = ( uVar15 >> 2 ) / 0x19;
            lVar19 = ( uVar15 + ( ( SUB168(auVar3 * ZEXT816(0x28f5c28f5c28f5c3), 8) & 0xfffffffffffffffc ) + uVar17 ) * -0x14 ) * 2;
            cVar21 = *(char*)( (long)&local_118 + lVar19 );
            pcVar20[uVar16] = *(char*)( (long)&local_118 + lVar19 + 1 );
            uVar10 = uVar16 - 1;
            uVar16 = uVar16 - 2;
            pcVar20[uVar10] = cVar21;
         }
 while ( 9999 < uVar15 );
         if (uVar15 < 1000) goto LAB_00101213;
      }

      cVar21 = *(char*)( (long)&local_118 + uVar17 * 2 );
      pcVar20[1] = *(char*)( (long)&local_118 + uVar17 * 2 + 1 );
   }

   *pcVar20 = cVar21;
   if (local_170 != 0x3fffffffffffffff) {
      plVar4 = (long*)std::__cxx11::string::_M_append((char*)&local_178, 0x103f47);
      plVar1 = plVar4 + 2;
      if ((long*)*plVar4 == plVar1) {
         uVar15 = plVar4[1] + 1;
         plVar13 = plVar1;
         plVar18 = local_148;
         if (7 < (uint)uVar15) {
            uVar17 = 0;
            do {
               uVar16 = (int)uVar17 + 8;
               uVar12 = (ulong)uVar16;
               *(undefined8*)( (long)local_148 + uVar17 ) = *(undefined8*)( (long)plVar1 + uVar17 );
               uVar17 = uVar12;
            }
 while ( uVar16 < ( (uint)uVar15 & 0xfffffff8 ) );
            plVar18 = (long*)( (long)local_148 + uVar12 );
            plVar13 = (long*)( uVar12 + (long)plVar1 );
         }

         lVar19 = 0;
         if (( uVar15 & 4 ) != 0) {
            *(int*)plVar18 = (int)*plVar13;
            lVar19 = 4;
         }

         if (( uVar15 & 2 ) != 0) {
            *(undefined2*)( (long)plVar18 + lVar19 ) = *(undefined2*)( (long)plVar13 + lVar19 );
            lVar19 = lVar19 + 2;
         }

         local_158 = local_148;
         if (( uVar15 & 1 ) != 0) {
            *(undefined1*)( (long)plVar18 + lVar19 ) = *(undefined1*)( (long)plVar13 + lVar19 );
         }

      }
 else {
         local_148[0] = plVar4[2];
         local_158 = (long*)*plVar4;
      }

      local_150 = plVar4[1];
      *plVar4 = (long)plVar1;
      plVar4[1] = 0;
      *(undefined1*)( plVar4 + 2 ) = 0;
      sVar5 = strlen(__s);
      if (sVar5 <= 0x3fffffffffffffffU - local_150) {
         plVar4 = (long*)std::__cxx11::string::_M_append((char*)&local_158, (ulong)__s);
         plVar1 = plVar4 + 2;
         if ((long*)*plVar4 == plVar1) {
            uVar15 = plVar4[1] + 1;
            plVar13 = plVar1;
            plVar18 = local_128;
            if (7 < (uint)uVar15) {
               uVar17 = 0;
               do {
                  uVar16 = (int)uVar17 + 8;
                  uVar12 = (ulong)uVar16;
                  *(undefined8*)( (long)local_128 + uVar17 ) = *(undefined8*)( (long)plVar1 + uVar17 );
                  uVar17 = uVar12;
               }
 while ( uVar16 < ( (uint)uVar15 & 0xfffffff8 ) );
               plVar18 = (long*)( (long)local_128 + uVar12 );
               plVar13 = (long*)( uVar12 + (long)plVar1 );
            }

            lVar19 = 0;
            if (( uVar15 & 4 ) != 0) {
               *(int*)plVar18 = (int)*plVar13;
               lVar19 = 4;
            }

            if (( uVar15 & 2 ) != 0) {
               *(undefined2*)( (long)plVar18 + lVar19 ) = *(undefined2*)( (long)plVar13 + lVar19 );
               lVar19 = lVar19 + 2;
            }

            local_138 = local_128;
            if (( uVar15 & 1 ) != 0) {
               *(undefined1*)( (long)plVar18 + lVar19 ) = *(undefined1*)( (long)plVar13 + lVar19 );
            }

         }
 else {
            local_128[0] = plVar4[2];
            local_138 = (long*)*plVar4;
         }

         local_130 = plVar4[1];
         *plVar4 = (long)plVar1;
         plVar4[1] = 0;
         *(undefined1*)( plVar4 + 2 ) = 0;
         if (local_130 != 0x3fffffffffffffff) {
            puVar6 = (undefined8*)std::__cxx11::string::_M_append((char*)&local_138, 0x103f49);
            pTVar9 = (TSymbolDefinitionCollectingTraverser*)( puVar6 + 2 );
            local_198 = (TSymbolDefinitionCollectingTraverser*)local_188;
            if ((TSymbolDefinitionCollectingTraverser*)*puVar6 == pTVar9) {
               uVar15 = puVar6[1] + 1;
               pTVar14 = pTVar9;
               pTVar11 = (TSymbolDefinitionCollectingTraverser*)local_188;
               if (7 < (uint)uVar15) {
                  uVar17 = 0;
                  do {
                     uVar16 = (int)uVar17 + 8;
                     uVar12 = (ulong)uVar16;
                     *(undefined8*)( (TSymbolDefinitionCollectingTraverser*)local_188 + uVar17 ) = *(undefined8*)( pTVar9 + uVar17 );
                     uVar17 = uVar12;
                  }
 while ( uVar16 < ( (uint)uVar15 & 0xfffffff8 ) );
                  pTVar11 = (TSymbolDefinitionCollectingTraverser*)local_188 + uVar12;
                  pTVar14 = pTVar9 + uVar12;
               }

               lVar19 = 0;
               if (( uVar15 & 4 ) != 0) {
                  *(undefined4*)pTVar11 = *(undefined4*)pTVar14;
                  lVar19 = 4;
               }

               if (( uVar15 & 2 ) != 0) {
                  *(undefined2*)( pTVar11 + lVar19 ) = *(undefined2*)( pTVar14 + lVar19 );
                  lVar19 = lVar19 + 2;
               }

               if (( uVar15 & 1 ) != 0) {
                  pTVar11[lVar19] = pTVar14[lVar19];
               }

            }
 else {
               local_188[0] = puVar6[2];
               local_198 = (TSymbolDefinitionCollectingTraverser*)*puVar6;
            }

            local_190 = puVar6[1];
            *puVar6 = pTVar9;
            puVar6[1] = 0;
            *(undefined1*)( puVar6 + 2 ) = 0;
            if (local_138 != local_128) {
               operator_delete(local_138, local_128[0] + 1);
            }

            if (local_158 != local_148) {
               operator_delete(local_158, local_148[0] + 1);
            }

            if (local_178 == local_168) {
               pTVar9 = *(TSymbolDefinitionCollectingTraverser**)( this + 0x50 );
               pTVar11 = pTVar9;
               if (pTVar9 != this + 0x60) goto LAB_001013d5;
               LAB_001015b0:if (local_198 == (TSymbolDefinitionCollectingTraverser*)local_188) {
                  LAB_001016c0:if (local_190 != 0) {
                     if (local_190 == 1) {
                        *pTVar11 = local_188[0]._0_1_;
                        pTVar9 = *(TSymbolDefinitionCollectingTraverser**)( this + 0x50 );
                     }
 else {
                        uVar15 = local_190 & 0xffffffff;
                        uVar16 = (uint)local_190;
                        if (uVar16 < 8) {
                           if (( local_190 & 4 ) == 0) {
                              if (uVar16 != 0) {
                                 *pTVar11 = local_188[0]._0_1_;
                                 if (( local_190 & 2 ) == 0) goto LAB_00101707;
                                 *(undefined2*)( pTVar11 + ( uVar15 - 2 ) ) = *(undefined2*)( (long)local_188 + ( uVar15 - 2 ) );
                                 pTVar9 = *(TSymbolDefinitionCollectingTraverser**)( this + 0x50 );
                              }

                           }
 else {
                              *(undefined4*)pTVar11 = (undefined4)local_188[0];
                              *(undefined4*)( pTVar11 + ( uVar15 - 4 ) ) = *(undefined4*)( (long)local_188 + ( uVar15 - 4 ) );
                              pTVar9 = *(TSymbolDefinitionCollectingTraverser**)( this + 0x50 );
                           }

                        }
 else {
                           *(long*)pTVar11 = local_188[0];
                           *(undefined8*)( pTVar11 + ( ( local_190 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)local_188 + ( ( local_190 & 0xffffffff ) - 8 ) );
                           lVar19 = (long)pTVar11 - ( ( ulong )(pTVar11 + 8) & 0xfffffffffffffff8 );
                           uVar16 = uVar16 + (int)lVar19 & 0xfffffff8;
                           if (7 < uVar16) {
                              uVar10 = 0;
                              do {
                                 uVar15 = (ulong)uVar10;
                                 uVar10 = uVar10 + 8;
                                 *(undefined8*)( ( ( ulong )(pTVar11 + 8) & 0xfffffffffffffff8 ) + uVar15 ) = *(undefined8*)( (TSymbolDefinitionCollectingTraverser*)local_188 + ( uVar15 - lVar19 ) );
                              }
 while ( uVar10 < uVar16 );
                           }

                           LAB_00101707:pTVar9 = *(TSymbolDefinitionCollectingTraverser**)( this + 0x50 );
                        }

                     }

                  }

                  *(ulong*)( this + 0x58 ) = local_190;
                  pTVar9[local_190] = (TSymbolDefinitionCollectingTraverser)0x0;
                  lVar19 = local_188[0];
               }
 else {
                  *(TSymbolDefinitionCollectingTraverser**)( this + 0x50 ) = local_198;
                  *(ulong*)( this + 0x58 ) = local_190;
                  *(long*)( this + 0x60 ) = local_188[0];
                  LAB_001015d1:local_198 = (TSymbolDefinitionCollectingTraverser*)local_188;
                  lVar19 = local_188[0];
               }

            }
 else {
               operator_delete(local_178, local_168[0] + 1);
               pTVar9 = *(TSymbolDefinitionCollectingTraverser**)( this + 0x50 );
               pTVar11 = this + 0x60;
               if (pTVar9 == this + 0x60) goto LAB_001015b0;
               LAB_001013d5:pTVar11 = pTVar9;
               if (local_198 == (TSymbolDefinitionCollectingTraverser*)local_188) goto LAB_001016c0;
               lVar19 = *(long*)( this + 0x60 );
               *(TSymbolDefinitionCollectingTraverser**)( this + 0x50 ) = local_198;
               *(ulong*)( this + 0x58 ) = local_190;
               *(long*)( this + 0x60 ) = local_188[0];
               local_198 = pTVar9;
               if (pTVar9 == (TSymbolDefinitionCollectingTraverser*)0x0) goto LAB_001015d1;
            }

            local_188[0] = lVar19;
            local_190 = 0;
            *local_198 = (TSymbolDefinitionCollectingTraverser)0x0;
            if (local_198 != (TSymbolDefinitionCollectingTraverser*)local_188) {
               operator_delete(local_198, local_188[0] + 1);
            }

            local_1a0 = param_1;
            psVar7 = (string*)std::__detail::_Map_base<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](*(_Map_base<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)( this + 0x70 ), (TIntermTyped**)&local_1a0);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               std::__cxx11::string::_M_assign(psVar7);
               return;
            }

            goto LAB_0010194b;
         }

      }

   }

   std::__throw_length_error("basic_string::append");
   LAB_0010194b:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* (anonymous namespace)::TNoContractionPropagator::visitBinary(glslang::TVisit,
   glslang::TIntermBinary*) */undefined8 TNoContractionPropagator::visitBinary(TNoContractionPropagator *this, undefined8 param_2, TIntermTyped **param_3) {
   ulong uVar1;
   ulong uVar2;
   uint uVar3;
   undefined8 uVar4;
   long lVar5;
   code *pcVar6;
   TIntermTyped **ppTVar7;
   _AllocNode *extraout_RDX;
   _AllocNode *extraout_RDX_00;
   char *pcVar8;
   long in_FS_OFFSET;
   undefined1 auVar9[16];
   undefined1 uStack_131;
   long *plStack_130;
   long lStack_128;
   long alStack_120[2];
   undefined1 *puStack_110;
   ulong uStack_108;
   undefined1 uStack_100;
   undefined7 uStack_ff;
   long lStack_e8;
   TIntermTyped ***pppTStack_d8;
   TNoContractionPropagator *pTStack_d0;
   string *psStack_c8;
   long *plStack_c0;
   ulong uStack_b8;
   undefined8 uStack_b0;
   ulong local_a8;
   TIntermTyped **local_a0;
   undefined1 local_89;
   long *local_88;
   long local_80;
   long local_78[2];
   TIntermTyped **local_68;
   ulong local_60;
   undefined1 local_58;
   undefined7 uStack_57;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = *(uint*)( param_3 + 0x17 );
   if (uVar3 < 0xba) {
      if (uVar3 < 0xb6) {
         if (0xb2 < uVar3) goto LAB_00101a18;
         if (uVar3 < 0xaf) {
            if (uVar3 < 0x10) {
               if (( 0xb < uVar3 ) || ( uVar3 == 8 )) goto LAB_001019b8;
            }
 else if (uVar3 - 0x9c < 5) goto LAB_001019b8;
            goto LAB_00101a18;
         }

         goto LAB_001019b8;
      }

      LAB_00101a33:uStack_b0 = 0x101a42;
      lVar5 = std::_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find(*(_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>**)( this + 0x98 ), param_3);
      if (lVar5 != 0) {
         uStack_b0 = 0x101a6d;
         local_88 = local_78;
         std::__cxx11::string::_M_construct<char*>((string*)&local_88, *(long*)( lVar5 + 0x10 ), *(long*)( lVar5 + 0x18 ) + *(long*)( lVar5 + 0x10 ));
         uVar1 = *(ulong*)( this + 0x80 );
         if (uVar1 == 0) {
            if (*(code**)( *param_3 + 0xf8 ) == glslang::TIntermTyped::getWritableType) {
               param_3 = param_3 + 4;
            }
 else {
               uStack_b0 = 0x101c65;
               param_3 = (TIntermTyped**)( **(code**)( *param_3 + 0xf8 ) )(param_3);
            }

            if (*(code**)( *param_3 + 0x50 ) == glslang::TType::getQualifier) {
               param_3 = param_3 + 2;
            }
 else {
               uStack_b0 = 0x101c5a;
               param_3 = (TIntermTyped**)( **(code**)( *param_3 + 0x50 ) )();
            }

            *(byte*)( (long)param_3 + 0xc ) = *(byte*)( (long)param_3 + 0xc ) | 0x10;
            LAB_00101aba:uStack_b0 = 0x101ac9;
            auVar9 = std::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::find((_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>*)( this + 0x40 ), (string*)&local_88);
            if (auVar9._0_8_ == 0) {
               uStack_b0 = 0x101c44;
               std::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert_unique<std::__cxx11::string_const&,std::__cxx11::string_const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::__cxx11::string,true>>>>(*(string**)( this + 0x38 ), (string*)&local_88, auVar9._8_8_);
               uStack_b0 = 0x101c4f;
               std::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert_unique<std::__cxx11::string_const&,std::__cxx11::string_const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::__cxx11::string,true>>>>((string*)( this + 0x40 ), (string*)&local_88, extraout_RDX);
            }

            if (local_88 != local_78) {
               uStack_b0 = 0x101aea;
               operator_delete(local_88, local_78[0] + 1);
            }

            uVar4 = 0;
            goto LAB_00101aec;
         }

         local_a8 = *(ulong*)( this + 0x78 );
         ppTVar7 = (TIntermTyped**)( uVar1 + 1 );
         local_89 = 0x2f;
         local_58 = 0;
         local_a0 = (TIntermTyped**)&local_58;
         local_60 = 0;
         uStack_b0 = 0x101b95;
         local_68 = local_a0;
         std::__cxx11::string::reserve(( ulong ) & local_68);
         if (local_60 != 0x3fffffffffffffff) {
            ppTVar7 = (TIntermTyped**)&local_89;
            uStack_b0 = 0x101bb2;
            std::__cxx11::string::_M_append((char*)&local_68, (ulong)ppTVar7);
            if (uVar1 <= 0x3fffffffffffffff - local_60) {
               uStack_b0 = 0x101bd2;
               std::__cxx11::string::_M_append((char*)&local_68, local_a8);
               ppTVar7 = local_68;
               if (local_60 <= 0x3fffffffffffffffU - local_80) {
                  uStack_b0 = 0x101bf5;
                  std::__cxx11::string::_M_append((char*)&local_88, (ulong)local_68);
                  if (local_68 != local_a0) {
                     uStack_b0 = 0x101c16;
                     operator_delete(local_68, CONCAT71(uStack_57, local_58) + 1);
                  }

                  goto LAB_00101aba;
               }

            }

         }

         pcVar8 = "basic_string::append";
         uStack_b0 = 0x101cbe;
         std::__throw_length_error("basic_string::append");
         uStack_b0 = 0x3fffffffffffffff;
         lStack_e8 = *(long*)( in_FS_OFFSET + 0x28 );
         pppTStack_d8 = &local_68;
         pTStack_d0 = this;
         psStack_c8 = (string*)&local_88;
         plStack_c0 = local_78;
         uStack_b8 = uVar1;
         lVar5 = std::_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find(*(_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>**)( pcVar8 + 0x98 ), ppTVar7);
         if (lVar5 == 0) {
            LAB_00101ed3:std::__throw_out_of_range("unordered_map::at");
         }
 else {
            plStack_130 = alStack_120;
            std::__cxx11::string::_M_construct<char*>((string*)&plStack_130, *(long*)( lVar5 + 0x10 ), *(long*)( lVar5 + 0x18 ) + *(long*)( lVar5 + 0x10 ));
            uVar1 = *(ulong*)( pcVar8 + 0x80 );
            if (uVar1 == 0) {
               if (*(code**)( *ppTVar7 + 0xf8 ) == glslang::TIntermTyped::getWritableType) {
                  ppTVar7 = ppTVar7 + 4;
               }
 else {
                  ppTVar7 = (TIntermTyped**)( **(code**)( *ppTVar7 + 0xf8 ) )(ppTVar7);
               }

               if (*(code**)( *ppTVar7 + 0x50 ) == glslang::TType::getQualifier) {
                  ppTVar7 = ppTVar7 + 2;
               }
 else {
                  ppTVar7 = (TIntermTyped**)( **(code**)( *ppTVar7 + 0x50 ) )();
               }

               *(byte*)( (long)ppTVar7 + 0xc ) = *(byte*)( (long)ppTVar7 + 0xc ) | 0x10;
            }
 else {
               uVar2 = *(ulong*)( pcVar8 + 0x78 );
               uStack_131 = 0x2f;
               uStack_100 = 0;
               uStack_108 = 0;
               puStack_110 = &uStack_100;
               std::__cxx11::string::reserve(( ulong ) & puStack_110);
               if (( ( uStack_108 == 0x3fffffffffffffff ) || ( std::__cxx11::string::_M_append((char*)&puStack_110, ( ulong ) & uStack_131),0x3fffffffffffffff - uStack_108 < uVar1 ) ) || ( std::__cxx11::string::_M_append((char*)&puStack_110, uVar2),0x3fffffffffffffffU - lStack_128 < uStack_108 )) {
                  std::__throw_length_error("basic_string::append");
                  goto LAB_00101ed3;
               }

               std::__cxx11::string::_M_append((char*)&plStack_130, (ulong)puStack_110);
               if (puStack_110 != &uStack_100) {
                  operator_delete(puStack_110, CONCAT71(uStack_ff, uStack_100) + 1);
               }

            }

            auVar9 = std::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::find((_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>*)( pcVar8 + 0x40 ), (string*)&plStack_130);
            if (auVar9._0_8_ == 0) {
               std::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert_unique<std::__cxx11::string_const&,std::__cxx11::string_const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::__cxx11::string,true>>>>(*(string**)( pcVar8 + 0x38 ), (string*)&plStack_130, auVar9._8_8_);
               std::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert_unique<std::__cxx11::string_const&,std::__cxx11::string_const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::__cxx11::string,true>>>>((string*)( pcVar8 + 0x40 ), (string*)&plStack_130, extraout_RDX_00);
            }

            if (plStack_130 != alStack_120) {
               operator_delete(plStack_130, alStack_120[0] + 1);
            }

            if (lStack_e8 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return 0;
            }

         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      uStack_b0 = 0x101c79;
      pcVar6 = (code*)std::__throw_out_of_range("unordered_map::at");
      LAB_00101c80:uStack_b0 = 0x101c85;
      uVar3 = ( *pcVar6 )(param_3);
      LAB_001019d6:if (uVar3 != 8) {
         if (*(code**)( *param_3 + 0xf8 ) == glslang::TIntermTyped::getWritableType) {
            param_3 = param_3 + 4;
         }
 else {
            uStack_b0 = 0x101ca5;
            param_3 = (TIntermTyped**)( **(code**)( *param_3 + 0xf8 ) )(param_3);
         }

         if (*(code**)( *param_3 + 0x50 ) == glslang::TType::getQualifier) {
            param_3 = param_3 + 2;
         }
 else {
            uStack_b0 = 0x101c92;
            param_3 = (TIntermTyped**)( **(code**)( *param_3 + 0x50 ) )();
         }

         *(byte*)( (long)param_3 + 0xc ) = *(byte*)( (long)param_3 + 0xc ) | 0x10;
      }

   }
 else {
      if (uVar3 == 0x341) goto LAB_00101a33;
      if (uVar3 == 0x129) {
         LAB_001019b8:pcVar6 = *(code**)( *param_3 + 0x100 );
         if (pcVar6 != glslang::TIntermTyped::getBasicType) goto LAB_00101c80;
         uVar3 = ( uint ) * (byte*)( param_3 + 5 );
         goto LAB_001019d6;
      }

      if (uVar3 < 0x12a) {
         if (uVar3 == 0x113) goto LAB_001019b8;
      }
 else if (uVar3 - 0x24a < 9) goto LAB_001019b8;
   }

   LAB_00101a18:uVar4 = 1;
   LAB_00101aec:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      uStack_b0 = 0x101cb2;
      __stack_chk_fail();
   }

   return uVar4;
}
/* (anonymous namespace)::TNoContractionPropagator::visitSymbol(glslang::TIntermSymbol*) */void TNoContractionPropagator::visitSymbol(TNoContractionPropagator *this, TIntermSymbol *param_1) {
   ulong uVar1;
   ulong uVar2;
   long lVar3;
   TIntermSymbol *pTVar4;
   _AllocNode *extraout_RDX;
   long in_FS_OFFSET;
   undefined1 auVar5[16];
   undefined1 local_89;
   long *local_88;
   long local_80;
   long local_78[2];
   undefined1 *local_68;
   ulong local_60;
   undefined1 local_58;
   undefined7 uStack_57;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = std::_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find(*(_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>**)( this + 0x98 ), (TIntermTyped**)param_1);
   if (lVar3 != 0) {
      local_88 = local_78;
      std::__cxx11::string::_M_construct<char*>((string*)&local_88, *(long*)( lVar3 + 0x10 ), *(long*)( lVar3 + 0x18 ) + *(long*)( lVar3 + 0x10 ));
      uVar1 = *(ulong*)( this + 0x80 );
      if (uVar1 == 0) {
         if (*(code**)( *(long*)param_1 + 0xf8 ) == glslang::TIntermTyped::getWritableType) {
            pTVar4 = param_1 + 0x20;
         }
 else {
            pTVar4 = (TIntermSymbol*)( **(code**)( *(long*)param_1 + 0xf8 ) )(param_1);
         }

         if (*(code**)( *(long*)pTVar4 + 0x50 ) == glslang::TType::getQualifier) {
            pTVar4 = pTVar4 + 0x10;
         }
 else {
            pTVar4 = (TIntermSymbol*)( **(code**)( *(long*)pTVar4 + 0x50 ) )();
         }

         pTVar4[0xc] = ( TIntermSymbol )((byte)pTVar4[0xc] | 0x10);
         LAB_00101d6c:auVar5 = std::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::find((_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>*)( this + 0x40 ), (string*)&local_88);
         if (auVar5._0_8_ == 0) {
            std::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert_unique<std::__cxx11::string_const&,std::__cxx11::string_const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::__cxx11::string,true>>>>(*(string**)( this + 0x38 ), (string*)&local_88, auVar5._8_8_);
            std::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert_unique<std::__cxx11::string_const&,std::__cxx11::string_const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::__cxx11::string,true>>>>((string*)( this + 0x40 ), (string*)&local_88, extraout_RDX);
         }

         if (local_88 != local_78) {
            operator_delete(local_88, local_78[0] + 1);
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00101edf;
      }

      uVar2 = *(ulong*)( this + 0x78 );
      local_89 = 0x2f;
      local_58 = 0;
      local_60 = 0;
      local_68 = &local_58;
      std::__cxx11::string::reserve(( ulong ) & local_68);
      if (local_60 != 0x3fffffffffffffff) {
         std::__cxx11::string::_M_append((char*)&local_68, ( ulong ) & local_89);
         if (uVar1 <= 0x3fffffffffffffff - local_60) {
            std::__cxx11::string::_M_append((char*)&local_68, uVar2);
            if (local_60 <= 0x3fffffffffffffffU - local_80) {
               std::__cxx11::string::_M_append((char*)&local_88, (ulong)local_68);
               if (local_68 != &local_58) {
                  operator_delete(local_68, CONCAT71(uStack_57, local_58) + 1);
               }

               goto LAB_00101d6c;
            }

         }

      }

      std::__throw_length_error("basic_string::append");
   }

   std::__throw_out_of_range("unordered_map::at");
   LAB_00101edf:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Type propagation algorithm not settling *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* glslang::PropagateNoContraction(glslang::TIntermediate const&) */undefined8 glslang::PropagateNoContraction(TIntermediate *param_1) {
   undefined1 uVar1;
   long *******ppppppplVar2;
   size_t sVar3;
   long ******pppppplVar4;
   _Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>> *p_Var5;
   _anonymous_namespace_ *p_Var6;
   undefined4 uVar7;
   _anonymous_namespace_ *p_Var8;
   int iVar9;
   long *plVar10;
   long lVar11;
   _Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> *p_Var12;
   code *pcVar13;
   TIntermTyped **ppTVar14;
   long *plVar15;
   long *******ppppppplVar16;
   long *plVar17;
   undefined8 *puVar18;
   _Hash_node *p_Var19;
   string *psVar20;
   long *******ppppppplVar21;
   uint uVar22;
   ulong uVar25;
   ulong uVar26;
   _Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> *p_Var28;
   TIntermTyped *extraout_RDX;
   uint uVar23;
   uint uVar24;
   long *extraout_RDX_00;
   long ******pppppplVar29;
   char *pcVar30;
   char *pcVar31;
   char cVar32;
   uint uVar33;
   undefined8 *puVar34;
   long in_FS_OFFSET;
   undefined1 auVar35[16];
   undefined1 auVar36[16];
   undefined1 auVar37[16];
   long *plStack_5c8;
   long lStack_5c0;
   long alStack_5b8[2];
   uint *puStack_5a8;
   undefined8 uStack_5a0;
   uint auStack_598[4];
   long *plStack_588;
   long lStack_580;
   char *pcStack_570;
   TIntermTyped *pTStack_568;
   ulong uStack_560;
   uint *puStack_558;
   TIntermTyped *pTStack_548;
   long *plStack_540;
   long lStack_538;
   long alStack_530[2];
   uint *puStack_520;
   undefined8 uStack_518;
   uint auStack_510[4];
   TIntermTyped *pTStack_500;
   undefined8 uStack_4f0;
   undefined8 uStack_4e8;
   undefined8 uStack_4e0;
   undefined8 uStack_4d8;
   undefined8 uStack_4d0;
   undefined8 uStack_4c8;
   undefined8 uStack_4c0;
   undefined8 uStack_4b8;
   undefined8 uStack_4b0;
   undefined8 uStack_4a8;
   undefined8 uStack_4a0;
   undefined8 uStack_498;
   undefined8 uStack_490;
   undefined8 uStack_488;
   undefined8 uStack_480;
   undefined8 uStack_478;
   undefined8 uStack_470;
   undefined8 uStack_468;
   undefined8 uStack_460;
   undefined8 uStack_458;
   undefined8 uStack_450;
   undefined8 uStack_448;
   undefined8 uStack_440;
   undefined1 uStack_438;
   undefined7 uStack_437;
   char cStack_430;
   char acStack_42f[23];
   long lStack_418;
   long *plStack_408;
   undefined1 **ppuStack_400;
   undefined1 *puStack_3f8;
   code *pcStack_3f0;
   undefined8 *puStack_3e8;
   string *psStack_3e0;
   undefined8 *local_3d8;
   _Hashtable<glslang::TIntermBranch*,glslang::TIntermBranch*,std::allocator<glslang::TIntermBranch*>,std::__detail::_Identity,std::equal_to<glslang::TIntermBranch*>,std::hash<glslang::TIntermBranch*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>> *local_3d0;
   _Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> *local_3c8;
   string *local_3c0;
   long *local_3b8;
   _anonymous_namespace_ *local_3b0;
   _Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>> *local_3a8;
   _Hashtable<glslang::TIntermBranch*,glslang::TIntermBranch*,std::allocator<glslang::TIntermBranch*>,std::__detail::_Identity,std::equal_to<glslang::TIntermBranch*>,std::hash<glslang::TIntermBranch*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>> *local_3a0;
   _Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> *local_398;
   undefined1 *local_390;
   undefined1 *local_388;
   undefined8 local_380;
   undefined8 local_378;
   undefined1 local_370[16];
   undefined1 local_360[16];
   undefined1 *local_348;
   undefined8 local_340;
   undefined8 local_338;
   undefined1 local_330[16];
   undefined1 local_320[16];
   undefined1 *local_308;
   undefined8 local_300;
   undefined8 local_2f8;
   undefined1 local_2f0[16];
   undefined1 local_2e0[16];
   undefined **local_2c8;
   undefined4 local_2c0;
   undefined4 uStack_2bc;
   undefined4 local_2b8;
   undefined4 uStack_2b4;
   undefined1 local_2b0[16];
   undefined1 local_2a0[16];
   _Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> *local_290;
   string *local_288;
   undefined8 *local_278;
   ulong local_270;
   long *******local_268;
   long local_260;
   undefined8 local_258;
   undefined8 uStack_250;
   undefined8 local_248;
   undefined8 *local_240;
   ulong local_238;
   long *******local_230;
   ulong local_228;
   undefined8 local_220;
   undefined8 uStack_218;
   undefined8 local_210;
   undefined8 *local_208;
   undefined8 local_200;
   undefined8 local_1f8;
   undefined8 local_1f0;
   undefined8 local_1e8;
   undefined8 uStack_1e0;
   undefined8 local_1d8;
   undefined8 *local_1d0;
   ulong local_1c8;
   undefined8 *local_1c0;
   ulong local_1b8;
   undefined8 local_1b0;
   undefined8 uStack_1a8;
   undefined8 local_1a0;
   long *local_198;
   long ******local_190;
   long local_188[2];
   long *local_178;
   size_t local_170;
   long local_168[2];
   undefined1 *local_158;
   long local_150;
   undefined1 local_148;
   undefined7 uStack_147;
   _Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> *local_138;
   long local_130;
   ulong local_128[2];
   _Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> *local_118;
   long local_110;
   ulong local_108[2];
   char local_f8;
   undefined **local_e8;
   undefined4 local_e0;
   undefined8 local_dc;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8;
   _Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>> *local_b0;
   _Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>> *local_a8;
   _Hashtable<glslang::TIntermBranch*,glslang::TIntermBranch*,std::allocator<glslang::TIntermBranch*>,std::__detail::_Identity,std::equal_to<glslang::TIntermBranch*>,std::hash<glslang::TIntermBranch*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>> *local_a0;
   undefined8 *local_98;
   undefined1 local_90[16];
   undefined1 local_80[16];
   undefined1 *local_70;
   char *local_68;
   undefined1 local_60;
   undefined7 uStack_5f;
   _Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> *local_50;
   long local_40;
   ulong uVar27;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_2c8 = (undefined**)( local_2a0 + 8 );
   local_308 = local_2e0 + 8;
   local_348 = local_320 + 8;
   local_388 = local_360 + 8;
   local_2a0 = (undefined1[16])0x0;
   local_2e0 = (undefined1[16])0x0;
   local_320 = (undefined1[16])0x0;
   local_2c0 = 1;
   uStack_2bc = 0;
   local_2b0._0_12_ = ZEXT412(0x3f800000) << 0x40;
   local_2b0._12_4_ = 0;
   local_300 = 1;
   local_2f0._0_12_ = ZEXT412(0x3f800000) << 0x40;
   local_2f0._12_4_ = 0;
   local_340 = 1;
   local_330._0_12_ = ZEXT412(0x3f800000) << 0x40;
   local_330._12_4_ = 0;
   local_3a0 = (_Hashtable<glslang::TIntermBranch*,glslang::TIntermBranch*,std::allocator<glslang::TIntermBranch*>,std::__detail::_Identity,std::equal_to<glslang::TIntermBranch*>,std::hash<glslang::TIntermBranch*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>*)&local_278;
   local_278 = &local_248;
   local_240 = &local_210;
   local_208 = &local_1d8;
   local_360 = (undefined1[16])0x0;
   local_258 = 0x3f800000;
   uStack_250 = 0;
   local_220 = 0x3f800000;
   uStack_218 = 0;
   local_1e8 = 0x3f800000;
   uStack_1e0 = 0;
   local_1d0 = &local_1a0;
   local_380 = 1;
   local_370._0_12_ = ZEXT412(0x3f800000) << 0x40;
   local_370._12_4_ = 0;
   local_270 = 1;
   local_268 = (long*******)0x0;
   local_260 = 0;
   local_248 = 0;
   local_2b8 = 0;
   uStack_2b4 = 0;
   local_238 = 1;
   local_230 = (long*******)0x0;
   local_228 = 0;
   local_210 = 0;
   local_2f8 = 0;
   local_200 = 1;
   local_1f8 = 0;
   local_1f0 = 0;
   local_1d8 = 0;
   local_338 = 0;
   local_1c8 = 1;
   local_1c0 = (undefined8*)0x0;
   local_1b8 = 0;
   local_1b0 = 0x3f800000;
   uStack_1a8 = 0;
   local_1a0 = 0;
   local_378 = 0;
   psStack_3e0 = (string*)0x10218e;
   local_3d0 = (_Hashtable<glslang::TIntermBranch*,glslang::TIntermBranch*,std::allocator<glslang::TIntermBranch*>,std::__detail::_Identity,std::equal_to<glslang::TIntermBranch*>,std::hash<glslang::TIntermBranch*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>*)&local_2c8;
   std::_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>::~_Hashtable((_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>*)&local_388);
   psStack_3e0 = (string*)0x10219d;
   std::_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::~_Hashtable((_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>*)&local_348);
   psStack_3e0 = (string*)0x1021a5;
   std::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::~_Hashtable((_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>*)&local_308);
   psStack_3e0 = (string*)0x1021ad;
   std::_Hashtable<glslang::TIntermBranch*,glslang::TIntermBranch*,std::allocator<glslang::TIntermBranch*>,std::__detail::_Identity,std::equal_to<glslang::TIntermBranch*>,std::hash<glslang::TIntermBranch*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::~_Hashtable((_Hashtable<glslang::TIntermBranch*,glslang::TIntermBranch*,std::allocator<glslang::TIntermBranch*>,std::__detail::_Identity,std::equal_to<glslang::TIntermBranch*>,std::hash<glslang::TIntermBranch*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>*)&local_2c8);
   uVar7 = _LC21;
   plVar17 = *(long**)( param_1 + 0x80 );
   if (plVar17 == (long*)0x0) {
      local_3a8 = (_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>*)&local_240;
   }
 else {
      local_e8 = &PTR__TIntermTraverser_00104c40;
      local_dc = 0;
      local_e0 = _LC21;
      psStack_3e0 = (string*)0x1021f3;
      local_d0 = glslang::GetThreadPoolAllocator();
      local_90[8] = 0;
      local_b0 = (_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>*)&local_1d0;
      local_3a8 = (_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>*)&local_240;
      local_e8 = &PTR__TSymbolDefinitionCollectingTraverser_00104ca8;
      local_a0 = local_3a0;
      local_3d8 = (undefined8*)( local_90 + 8 );
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = local_90._8_8_;
      local_90 = auVar35 << 0x40;
      local_80._8_8_ = &local_208;
      local_70 = (undefined1*)0x0;
      psStack_3e0 = (string*)0x1022a9;
      local_a8 = local_3a8;
      local_98 = local_3d8;
      ( **(code**)( *plVar17 + 0x10 ) )(plVar17);
      local_e8 = &PTR__TSymbolDefinitionCollectingTraverser_00104ca8;
      if (local_98 != local_3d8) {
         psStack_3e0 = (string*)0x1022da;
         operator_delete(local_98, local_90._8_8_ + 1);
      }

   }

   local_2c8 = &PTR__TIntermTraverser_00104c40;
   local_2c0 = uVar7;
   uStack_2bc = 0;
   local_2b8 = 0;
   psStack_3e0 = (string*)0x1022fa;
   local_2b0._0_8_ = glslang::GetThreadPoolAllocator();
   local_2b0._8_8_ = 0;
   local_2a0 = ZEXT816(0);
   local_2c8 = &PTR__TNoContractionAssigneeCheckingTraverser_00104d10;
   local_288 = (string*)0x0;
   local_e8 = &PTR__TIntermTraverser_00104c40;
   local_e0 = uVar7;
   local_dc = 0;
   psStack_3e0 = (string*)0x102369;
   local_290 = (_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>*)&local_208;
   local_d0 = glslang::GetThreadPoolAllocator();
   local_c8 = 0;
   local_e8 = &PTR__TNoContractionPropagator_00104d78;
   local_b0 = local_3a8;
   local_a8 = (_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>*)( local_80 + 8 );
   local_390 = &local_60;
   local_c0 = 0;
   local_b8 = 0;
   local_a0 = (_Hashtable<glslang::TIntermBranch*,glslang::TIntermBranch*,std::allocator<glslang::TIntermBranch*>,std::__detail::_Identity,std::equal_to<glslang::TIntermBranch*>,std::hash<glslang::TIntermBranch*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>*)0x1;
   local_98 = (undefined8*)0x0;
   local_90._0_12_ = ZEXT412(0x3f800000) << 0x40;
   local_90._12_4_ = 0;
   local_68 = (char*)0x0;
   local_60 = 0;
   local_80 = (undefined1[16])0x0;
   local_70 = local_390;
   local_50 = (_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>*)&local_208;
   if (local_260 != 0) {
      do {
         while (true) {
            pppppplVar29 = local_268[1];
            psStack_3e0 = (string*)0x10247c;
            std::__cxx11::string::_M_replace(( ulong ) & local_70, 0, local_68, 0x103f1c);
            psStack_3e0 = (string*)0x102489;
            ( *(code*)( *pppppplVar29[5] )[2] )();
            ppppppplVar16 = (long*******)&local_268;
            ppppppplVar21 = local_268;
            if (local_260 == 0) break;
            uVar25 = (ulong)pppppplVar29 % local_270;
            ppppppplVar16 = (long*******)local_278[uVar25];
            if (ppppppplVar16 != (long*******)0x0) {
               pppppplVar4 = (long******)( *ppppppplVar16 )[1];
               ppppppplVar21 = (long*******)*ppppppplVar16;
               do {
                  if (pppppplVar29 == pppppplVar4) {
                     pppppplVar29 = *ppppppplVar16;
                     goto LAB_001024e4;
                  }

                  ppppppplVar2 = (long*******)*ppppppplVar21;
               }
 while ( ( ppppppplVar2 != (long*******)0x0 ) && ( pppppplVar4 = ppppppplVar2[1] ),ppppppplVar16 = ppppppplVar21,ppppppplVar21 = ppppppplVar2,uVar25 == (ulong)pppppplVar4 % local_270 );
            }

         }
;
         while (true) {
            if (ppppppplVar21 == (long*******)0x0) goto LAB_00102600;
            if (pppppplVar29 == ppppppplVar21[1]) break;
            ppppppplVar16 = ppppppplVar21;
            ppppppplVar21 = (long*******)*ppppppplVar21;
         }
;
         pppppplVar29 = *ppppppplVar16;
         uVar25 = (ulong)pppppplVar29[1] % local_270;
         LAB_001024e4:ppppppplVar21 = (long*******)*pppppplVar29;
         ppppppplVar2 = (long*******)local_278[uVar25];
         if (ppppppplVar16 == ppppppplVar2) {
            if (ppppppplVar21 != (long*******)0x0) {
               if (uVar25 == (ulong)ppppppplVar21[1] % local_270) goto LAB_0010251d;
               local_278[(ulong)ppppppplVar21[1] % local_270] = ppppppplVar16;
            }

            if ((long********)ppppppplVar2 == &local_268) {
               local_268 = ppppppplVar21;
            }

            local_278[uVar25] = 0;
            ppppppplVar21 = (long*******)*pppppplVar29;
         }
 else if (( ppppppplVar21 != (long*******)0x0 ) && ( uVar25 != (ulong)ppppppplVar21[1] % local_270 )) {
            local_278[(ulong)ppppppplVar21[1] % local_270] = ppppppplVar16;
            ppppppplVar21 = (long*******)*pppppplVar29;
         }

         LAB_0010251d:*ppppppplVar16 = (long******)ppppppplVar21;
         psStack_3e0 = (string*)0x10252d;
         operator_delete(pppppplVar29, 0x10);
         local_260 = local_260 + -1;
      }
 while ( local_260 != 0 );
   }

   LAB_00102600:plVar17 = local_188;
   psVar20 = (string*)&local_198;
   p_Var8 = (_anonymous_namespace_*)&local_178;
   p_Var12 = (_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>*)&local_208;
   p_Var6 = local_3b0;
   do {
      local_3b0 = p_Var8;
      local_3c0 = psVar20;
      if (local_228 == 0) {
         local_e8 = &PTR__TNoContractionPropagator_00104d78;
         local_3b0 = p_Var6;
         if (local_70 != local_390) {
            psStack_3e0 = (string*)0x102d80;
            operator_delete(local_70, CONCAT71(uStack_5f, local_60) + 1);
         }

         psStack_3e0 = (string*)0x102d8d;
         std::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::~_Hashtable((_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>*)&local_a8);
         psStack_3e0 = (string*)0x102d9a;
         std::_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>::~_Hashtable((_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>*)&local_1d0);
         psStack_3e0 = (string*)0x102da2;
         std::_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::~_Hashtable(p_Var12);
         psStack_3e0 = (string*)0x102dac;
         std::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::~_Hashtable(local_3a8);
         psStack_3e0 = (string*)0x102db6;
         std::_Hashtable<glslang::TIntermBranch*,glslang::TIntermBranch*,std::allocator<glslang::TIntermBranch*>,std::__detail::_Identity,std::equal_to<glslang::TIntermBranch*>,std::hash<glslang::TIntermBranch*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::~_Hashtable(local_3a0);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return 0;
         }

         LAB_0010323c:/* WARNING: Subroutine does not return */psStack_3e0 = (string*)0x103241;
         __stack_chk_fail();
      }

      psStack_3e0 = (string*)0x102668;
      local_398 = p_Var12;
      local_198 = plVar17;
      std::__cxx11::string::_M_construct<char*>(psVar20, local_230[1], (long)local_230[2] + (long)local_230[1]);
      psStack_3e0 = (string*)0x102675;
      (anonymous_namespace)::getFrontElement(local_3b0, psVar20);
      sVar3 = local_170;
      plVar10 = local_178;
      puVar18 = local_1c0;
      if (local_1b8 < 0x15) {
         for (; puVar18 != (undefined8*)0x0; puVar18 = (undefined8*)*puVar18) {
            if (sVar3 == puVar18[2]) {
               if (sVar3 == 0) goto LAB_001026da;
               psStack_3e0 = (string*)0x1026d6;
               iVar9 = memcmp(plVar10, (void*)puVar18[1], sVar3);
               if (iVar9 == 0) goto LAB_001026da;
            }

         }

      }
 else {
         psStack_3e0 = (string*)0x10305a;
         uVar25 = std::_Hash_bytes(local_178, local_170, 0xc70f6907);
         psStack_3e0 = (string*)0x10307c;
         puVar18 = (undefined8*)std::_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>::_M_find_before_node((_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>*)&local_1d0, uVar25 % local_1c8, (string*)local_3b0, uVar25);
         if (( puVar18 != (undefined8*)0x0 ) && ( puVar18 = (undefined8*)*puVar18 ),puVar18 != (undefined8*)0x0) {
            LAB_001026da:puVar34 = (undefined8*)*puVar18;
            if (puVar34 != (undefined8*)0x0) {
               lVar11 = puVar18[6];
               do {
                  if (( lVar11 != puVar34[6] ) || ( sVar3 = sVar3 != puVar34[2] )) {
                     LAB_001026fa:if (puVar18 == puVar34) goto LAB_00102bfd;
                     break;
                  }

                  if (sVar3 != 0) {
                     psStack_3e0 = (string*)0x102bd8;
                     iVar9 = memcmp((void*)puVar18[1], (void*)puVar34[1], sVar3);
                     if (iVar9 != 0) goto LAB_001026fa;
                  }

                  puVar34 = (undefined8*)*puVar34;
               }
 while ( puVar34 != (undefined8*)0x0 );
            }

            psVar20 = local_3c0;
            local_3d8 = puVar34;
            local_3b8 = plVar17;
            LAB_0010285a:plVar17 = (long*)puVar18[5];
            local_148 = 0;
            local_288 = psVar20;
            local_150 = 0;
            psStack_3e0 = (string*)0x10288b;
            local_158 = &local_148;
            plVar10 = (long*)( **(code**)( *plVar17 + 0x40 ) )(plVar17);
            if (plVar10 == (long*)0x0) {
               psStack_3e0 = (string*)0x102aa1;
               plVar10 = (long*)( **(code**)( *plVar17 + 0x38 ) )(plVar17);
               if (plVar10 == (long*)0x0) goto LAB_0010295e;
               if (*(code**)( *plVar10 + 0x188 ) == TIntermUnary::getOperand) {
                  plVar15 = (long*)plVar10[0x18];
               }
 else {
                  psStack_3e0 = (string*)0x103035;
                  plVar15 = (long*)( **(code**)( *plVar10 + 0x188 ) )(plVar10);
               }

               psStack_3e0 = (string*)0x102ad9;
               ( **(code**)( *plVar15 + 0x10 ) )(plVar15, local_3d0);
               if (*(code**)( *plVar10 + 0x188 ) == TIntermUnary::getOperand) {
                  plVar15 = (long*)plVar10[0x18];
               }
 else {
                  psStack_3e0 = (string*)0x103025;
                  plVar15 = (long*)( **(code**)( *plVar10 + 0x188 ) )(plVar10);
               }

               if (*(code**)( *plVar15 + 0xf0 ) == TIntermTyped::getType) {
                  plVar15 = plVar15 + 4;
               }
 else {
                  psStack_3e0 = (string*)0x103012;
                  plVar15 = (long*)( **(code**)( *plVar15 + 0xf0 ) )();
               }

               if (*(code**)( *plVar15 + 0x58 ) == TType::getQualifier) {
                  plVar15 = plVar15 + 2;
               }
 else {
                  psStack_3e0 = (string*)0x103002;
                  plVar15 = (long*)( **(code**)( *plVar15 + 0x58 ) )();
               }

               if (( *(byte*)( (long)plVar15 + 0xc ) & 0x10 ) == 0) {
                  pcVar13 = *(code**)( *plVar10 + 0x188 );
                  if (pcVar13 != TIntermUnary::getOperand) goto LAB_00102b61;
                  goto LAB_00102932;
               }

               LAB_00102981:local_108[0] = local_108[0] & 0xffffffffffffff00;
               local_118 = (_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>*)local_108;
               local_110 = 0;
               local_f8 = '\x01';
            }
 else {
               if (*(code**)( *plVar10 + 400 ) == TIntermBinary::getLeft) {
                  plVar15 = (long*)plVar10[0x18];
               }
 else {
                  psStack_3e0 = (string*)0x102e15;
                  plVar15 = (long*)( **(code**)( *plVar10 + 400 ) )(plVar10);
               }

               psStack_3e0 = (string*)0x1028bc;
               ( **(code**)( *plVar15 + 0x10 ) )(plVar15, local_3d0);
               if (*(code**)( *plVar10 + 400 ) == TIntermBinary::getLeft) {
                  plVar15 = (long*)plVar10[0x18];
               }
 else {
                  psStack_3e0 = (string*)0x102e05;
                  plVar15 = (long*)( **(code**)( *plVar10 + 400 ) )(plVar10);
               }

               if (*(code**)( *plVar15 + 0xf0 ) == TIntermTyped::getType) {
                  plVar15 = plVar15 + 4;
               }
 else {
                  psStack_3e0 = (string*)0x102df2;
                  plVar15 = (long*)( **(code**)( *plVar15 + 0xf0 ) )();
               }

               if (*(code**)( *plVar15 + 0x58 ) == TType::getQualifier) {
                  plVar15 = plVar15 + 2;
               }
 else {
                  psStack_3e0 = (string*)0x102de2;
                  plVar15 = (long*)( **(code**)( *plVar15 + 0x58 ) )();
               }

               if (( *(byte*)( (long)plVar15 + 0xc ) & 0x10 ) != 0) goto LAB_00102981;
               pcVar13 = *(code**)( *plVar10 + 400 );
               if (pcVar13 == TIntermBinary::getLeft) {
                  LAB_00102932:ppTVar14 = (TIntermTyped**)plVar10[0x18];
                  p_Var12 = local_290;
               }
 else {
                  LAB_00102b61:local_3c8 = local_290;
                  psStack_3e0 = (string*)0x102b6b;
                  ppTVar14 = (TIntermTyped**)( *pcVar13 )(plVar10);
                  p_Var12 = local_3c8;
               }

               psStack_3e0 = (string*)0x102941;
               lVar11 = std::_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find(p_Var12, ppTVar14);
               if (lVar11 == 0) {
                  psStack_3e0 = (string*)0x10323c;
                  std::__throw_out_of_range("unordered_map::at");
                  goto LAB_0010323c;
               }

               psStack_3e0 = (string*)0x10295e;
               std::__cxx11::string::_M_assign((string*)&local_158);
               LAB_0010295e:psStack_3e0 = (string*)0x102978;
               lVar11 = std::__cxx11::string::find((char*)&local_158, (ulong)local_198, 0);
               if (lVar11 == 0) goto LAB_00102981;
               psStack_3e0 = (string*)0x102742;
               lVar11 = std::__cxx11::string::find((char*)psVar20, (ulong)local_158, 0);
               if (lVar11 == 0) {
                  psStack_3e0 = (string*)0x102765;
                  lVar11 = std::__cxx11::string::find((char*)psVar20, (ulong)local_158, 0);
                  if (lVar11 == 0) {
                     if (local_190 < (long******)( local_150 + 1U )) {
                        pcVar30 = "%s: __pos (which is %zu) > this->size() (which is %zu)";
                        psStack_3e0 = (string*)0x103256;
                        std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::substr");
                        psStack_3e0 = psVar20;
                        pcStack_3f0 = TIntermBinary::getLeft;
                        lStack_418 = *(long*)( in_FS_OFFSET + 0x28 );
                        for (int i = 0; i < 8; i++) {
                           pcVar30[( i + 88 )] = '\0';
                        }

                        **(undefined1**)( pcVar30 + 0x50 ) = 0;
                        plStack_408 = plVar17;
                        ppuStack_400 = &local_158;
                        puStack_3f8 = &local_148;
                        puStack_3e8 = puVar18;
                        if (*(code**)( *(long*)extraout_RDX + 400 ) == TIntermBinary::getLeft) {
                           plVar17 = *(long**)( extraout_RDX + 0xc0 );
                        }
 else {
                           puStack_558 = (uint*)0x103525;
                           plVar17 = (long*)( **(code**)( *(long*)extraout_RDX + 400 ) )(extraout_RDX);
                        }

                        puStack_558 = (uint*)0x1032c7;
                        ( **(code**)( *plVar17 + 0x10 ) )(plVar17, pcVar30);
                        uVar22 = *(uint*)( extraout_RDX + 0xb8 );
                        if (uVar22 < 0x10) {
                           if (uVar22 < 0xc) {
                              LAB_001032d7:pcVar30[0x58] = '\0';
                              for (int i = 0; i < 7; i++) {
                                 pcVar30[( i + 89 )] = '\0';
                              }

                              **(undefined1**)( pcVar30 + 0x50 ) = 0;
                              if (*(code**)( *(long*)extraout_RDX + 0x198 ) == TIntermBinary::getRight) {
                                 plVar17 = *(long**)( extraout_RDX + 200 );
                              }
 else {
                                 puStack_558 = (uint*)0x1039f5;
                                 plVar17 = (long*)( **(code**)( *(long*)extraout_RDX + 0x198 ) )(extraout_RDX);
                              }

                              puStack_558 = (uint*)0x103311;
                              ( **(code**)( *plVar17 + 0x10 ) )(plVar17, pcVar30);
                              goto LAB_001034b4;
                           }

                        }
 else if (0xe < uVar22 - 0x249) {
                           if (0xb9 < uVar22) {
                              if (uVar22 != 0x341) goto LAB_001032d7;
                              goto LAB_001034f6;
                           }

                           if (0xb5 < uVar22) {
                              if (uVar22 != 0xb8) goto LAB_001034f6;
                              if (*(code**)( *(long*)extraout_RDX + 0x198 ) == TIntermBinary::getRight) {
                                 plVar17 = *(long**)( extraout_RDX + 200 );
                              }
 else {
                                 puStack_558 = (uint*)0x103a35;
                                 plVar17 = (long*)( **(code**)( *(long*)extraout_RDX + 0x198 ) )(extraout_RDX);
                              }

                              puStack_558 = (uint*)0x103596;
                              lVar11 = ( **(code**)( *plVar17 + 0x28 ) )();
                              uVar25 = *(ulong*)( pcVar30 + 0x58 );
                              uVar22 = **(uint**)( *(long*)( lVar11 + 0xc0 ) + 8 );
                              pcVar31 = *(char**)( pcVar30 + 0x50 );
                              if (pcVar31 == pcVar30 + 0x60) {
                                 uVar26 = 0xf;
                              }
 else {
                                 uVar26 = *(ulong*)( pcVar30 + 0x60 );
                              }

                              if (uVar26 < uVar25 + 1) {
                                 puStack_558 = (uint*)0x103a15;
                                 std::__cxx11::string::_M_mutate(( ulong )(pcVar30 + 0x50), uVar25, (char*)0x0, 0);
                                 pcVar31 = *(char**)( pcVar30 + 0x50 );
                              }

                              pcVar31[uVar25] = '/';
                              *(ulong*)( pcVar30 + 0x58 ) = uVar25 + 1;
                              *(undefined1*)( *(long*)( pcVar30 + 0x50 ) + 1 + uVar25 ) = 0;
                              if (uVar22 < 10) {
                                 puStack_520 = auStack_510;
                                 puStack_558 = (uint*)0x103a7e;
                                 std::__cxx11::string::_M_construct(( ulong ) & puStack_520, '\x01');
                                 goto LAB_001037a0;
                              }

                              if (99 < uVar22) {
                                 if (uVar22 < 1000) {
                                    cVar32 = '\x03';
                                 }
 else if (uVar22 < 10000) {
                                    cVar32 = '\x04';
                                 }
 else {
                                    cVar32 = '\x05';
                                    if (99999 < uVar22) {
                                       if (uVar22 < 1000000) {
                                          cVar32 = '\x05';
                                          LAB_0010365f:cVar32 = cVar32 + '\x01';
                                       }
 else {
                                          cVar32 = '\a';
                                          if (9999999 < uVar22) {
                                             if (uVar22 < 100000000) {
                                                cVar32 = '\b';
                                             }
 else {
                                                if (999999999 < uVar22) {
                                                   cVar32 = '\t';
                                                   goto LAB_0010365f;
                                                }

                                                cVar32 = '\t';
                                             }

                                          }

                                       }

                                    }

                                 }

                                 puStack_520 = auStack_510;
                                 puStack_558 = (uint*)0x103678;
                                 std::__cxx11::string::_M_construct(( ulong ) & puStack_520, cVar32);
                                 uVar24 = (int)uStack_518 - 1;
                                 uStack_4f0 = __LC7;
                                 uStack_4e8 = _UNK_00104dd8;
                                 uStack_4e0 = __LC8;
                                 uStack_4d8 = _UNK_00104de8;
                                 uStack_4d0 = __LC9;
                                 uStack_4c8 = _UNK_00104df8;
                                 uStack_4c0 = __LC10;
                                 uStack_4b8 = _UNK_00104e08;
                                 uStack_4b0 = __LC11;
                                 uStack_4a8 = _UNK_00104e18;
                                 uStack_4a0 = __LC12;
                                 uStack_498 = _UNK_00104e28;
                                 uStack_490 = __LC13;
                                 uStack_488 = _UNK_00104e38;
                                 uStack_480 = __LC14;
                                 uStack_478 = _UNK_00104e48;
                                 uStack_470 = __LC15;
                                 uStack_468 = _UNK_00104e58;
                                 uStack_460 = __LC16;
                                 uStack_458 = _UNK_00104e68;
                                 uStack_450 = __LC17;
                                 uStack_448 = _UNK_00104e78;
                                 uStack_440 = __LC18;
                                 uStack_438 = (undefined1)_UNK_00104e88;
                                 uStack_437 = (undefined7)_LC19._0_8_;
                                 cStack_430 = SUB81(_LC19._0_8_, 7);
                                 for (int i = 0; i < 8; i++) {
                                    acStack_42f[i] = _LC19[( i + 8 )];
                                 }

                                 uVar26 = (ulong)uVar22;
                                 do {
                                    uVar33 = uVar22;
                                    uVar25 = uVar26;
                                    uVar22 = ( uint )(uVar25 / 100);
                                    uVar23 = ( uVar33 + uVar22 * -100 ) * 2;
                                    uVar1 = *(undefined1*)( (long)&uStack_4f0 + (ulong)uVar23 );
                                    *(undefined1*)( (long)puStack_520 + (ulong)uVar24 ) = *(undefined1*)( (long)&uStack_4f0 + ( ulong )(uVar23 + 1) );
                                    uVar23 = uVar24 - 1;
                                    uVar24 = uVar24 - 2;
                                    *(undefined1*)( (long)puStack_520 + (ulong)uVar23 ) = uVar1;
                                    uVar26 = uVar25 / 100;
                                 }
 while ( 9999 < uVar33 );
                                 if (uVar33 < 1000) {
                                    LAB_001037a0:cVar32 = (char)uVar22 + '0';
                                 }
 else {
                                    LAB_001039d0:cVar32 = *(char*)( (long)&uStack_4f0 + ( ulong )(uVar22 * 2) );
                                    *(undefined1*)( (long)puStack_520 + 1 ) = *(undefined1*)( (long)&uStack_4f0 + ( ulong )(uVar22 * 2 + 1) );
                                 }

                                 *(char*)puStack_520 = cVar32;
                                 if (0x3fffffffffffffffU - *(long*)( pcVar30 + 0x58 ) < uStack_518) {
                                    pcVar31 = "basic_string::append";
                                    puStack_558 = (uint*)0x103abd;
                                    std::__throw_length_error("basic_string::append");
                                    lStack_580 = *(long*)( in_FS_OFFSET + 0x28 );
                                    for (int i = 0; i < 8; i++) {
                                       pcVar31[( i + 88 )] = '\0';
                                    }

                                    **(undefined1**)( pcVar31 + 0x50 ) = 0;
                                    pcStack_570 = pcVar30;
                                    pTStack_568 = extraout_RDX;
                                    uStack_560 = uVar25;
                                    puStack_558 = auStack_510;
                                    if (*(code**)( *extraout_RDX_00 + 0x188 ) == TIntermUnary::getOperand) {
                                       plVar17 = (long*)extraout_RDX_00[0x18];
                                    }
 else {
                                       plVar17 = (long*)( **(code**)( *extraout_RDX_00 + 0x188 ) )(extraout_RDX_00);
                                    }

                                    ( **(code**)( *plVar17 + 0x10 ) )(plVar17, pcVar31);
                                    uVar22 = *(uint*)( extraout_RDX_00 + 0x17 );
                                    if (uVar22 < 0x10) {
                                       if (uVar22 < 0xc) goto LAB_00103b2d;
                                    }
 else if (0xe < uVar22 - 0x249) goto LAB_00103b2d;
                                    if (*(code**)( *extraout_RDX_00 + 0x188 ) == TIntermUnary::getOperand) {
                                       plVar17 = (long*)extraout_RDX_00[0x18];
                                    }
 else {
                                       plVar17 = (long*)( **(code**)( *extraout_RDX_00 + 0x188 ) )(extraout_RDX_00);
                                    }

                                    if (*(code**)( *plVar17 + 0xf0 ) == TIntermTyped::getType) {
                                       plVar17 = plVar17 + 4;
                                    }
 else {
                                       plVar17 = (long*)( **(code**)( *plVar17 + 0xf0 ) )();
                                    }

                                    if (*(code**)( *plVar17 + 0x58 ) == TType::getQualifier) {
                                       auVar37._8_8_ = TType::getQualifier;
                                       auVar37._0_8_ = plVar17 + 2;
                                    }
 else {
                                       auVar37 = ( **(code**)( *plVar17 + 0x58 ) )();
                                    }

                                    if (( *(byte*)( auVar37._0_8_ + 0xc ) & 0x10 ) != 0) {
                                       std::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert_unique<std::__cxx11::string_const&,std::__cxx11::string_const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::__cxx11::string,true>>>>(*(string**)( pcVar31 + 0x40 ), (string*)( pcVar31 + 0x50 ), auVar37._8_8_);
                                    }

                                    (anonymous_namespace)::getFrontElement((_anonymous_namespace_*)&plStack_5c8, (string*)( pcVar31 + 0x50 ));
                                    p_Var5 = *(_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>**)( pcVar31 + 0x38 );
                                    puStack_5a8 = auStack_598;
                                    std::__cxx11::string::_M_construct<char*>(&puStack_5a8, plStack_5c8, lStack_5c0 + (long)plStack_5c8);
                                    plStack_588 = extraout_RDX_00;
                                    p_Var19 = (_Hash_node*)operator_new(0x38);
                                    *(undefined8*)p_Var19 = 0;
                                    *(_Hash_node**)( p_Var19 + 8 ) = p_Var19 + 0x18;
                                    if (puStack_5a8 == auStack_598) {
                                       uVar25 = uStack_5a0 + 1;
                                       uVar22 = (uint)uVar25;
                                       if (uVar22 < 8) {
                                          if (( uVar25 & 4 ) == 0) {
                                             if (uVar22 != 0) {
                                                p_Var19[0x18] = auStack_598[0]._0_1_;
                                                if (( uVar25 & 2 ) != 0) {
                                                   *(undefined2*)( p_Var19 + ( uVar25 & 0xffffffff ) + 0x16 ) = *(undefined2*)( (long)&uStack_5a0 + ( uVar25 & 0xffffffff ) + 6 );
                                                }

                                             }

                                          }
 else {
                                             *(uint*)( p_Var19 + 0x18 ) = auStack_598[0];
                                             *(undefined4*)( p_Var19 + ( uVar25 & 0xffffffff ) + 0x14 ) = *(undefined4*)( (long)&uStack_5a0 + ( uVar25 & 0xffffffff ) + 4 );
                                          }

                                       }
 else {
                                          *(ulong*)( p_Var19 + 0x18 ) = CONCAT44(auStack_598[1], auStack_598[0]);
                                          *(undefined8*)( p_Var19 + ( uVar25 & 0xffffffff ) + 0x10 ) = *(undefined8*)( (long)&uStack_5a0 + ( uVar25 & 0xffffffff ) );
                                          lVar11 = (long)( p_Var19 + 0x18 ) - ( ( ulong )(p_Var19 + 0x20) & 0xfffffffffffffff8 );
                                          uVar22 = uVar22 + (int)lVar11 & 0xfffffff8;
                                          if (7 < uVar22) {
                                             uVar24 = 0;
                                             do {
                                                uVar25 = (ulong)uVar24;
                                                uVar24 = uVar24 + 8;
                                                *(undefined8*)( ( ( ulong )(p_Var19 + 0x20) & 0xfffffffffffffff8 ) + uVar25 ) = *(undefined8*)( (long)auStack_598 + ( uVar25 - lVar11 ) );
                                             }
 while ( uVar24 < uVar22 );
                                          }

                                       }

                                    }
 else {
                                       *(uint**)( p_Var19 + 8 ) = puStack_5a8;
                                       *(ulong*)( p_Var19 + 0x18 ) = CONCAT44(auStack_598[1], auStack_598[0]);
                                    }

                                    *(long*)( p_Var19 + 0x10 ) = uStack_5a0;
                                    *(long**)( p_Var19 + 0x28 ) = plStack_588;
                                    uStack_5a0 = 0;
                                    auStack_598[0] = auStack_598[0] & 0xffffff00;
                                    puStack_5a8 = auStack_598;
                                    auVar35 = std::_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>::_M_compute_hash_code(p_Var5, 0, p_Var19 + 8);
                                    std::_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>::_M_insert_multi_node(p_Var5, auVar35._0_8_, auVar35._8_8_, p_Var19);
                                    if (puStack_5a8 != auStack_598) {
                                       operator_delete(puStack_5a8, CONCAT44(auStack_598[1], auStack_598[0]) + 1);
                                    }

                                    if (plStack_5c8 != alStack_5b8) {
                                       operator_delete(plStack_5c8, alStack_5b8[0] + 1);
                                    }

                                    LAB_00103b2d:pcVar31[0x58] = '\0';
                                    for (int i = 0; i < 7; i++) {
                                       pcVar31[( i + 89 )] = '\0';
                                    }

                                    **(undefined1**)( pcVar31 + 0x50 ) = 0;
                                    if (lStack_580 == *(long*)( in_FS_OFFSET + 0x28 )) {
                                       return 0;
                                    }

                                    /* WARNING: Subroutine does not return */
                                    __stack_chk_fail();
                                 }

                                 puStack_558 = (uint*)0x1037d0;
                                 std::__cxx11::string::_M_append(pcVar30 + 0x50, (ulong)puStack_520);
                                 if (puStack_520 != auStack_510) {
                                    puStack_558 = (uint*)0x1037ec;
                                    operator_delete(puStack_520, CONCAT44(auStack_510[1], auStack_510[0]) + 1);
                                 }

                                 LAB_001034f6:puStack_558 = (uint*)0x103509;
                                 pTStack_548 = extraout_RDX;
                                 psVar20 = (string*)std::__detail::_Map_base<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](*(_Map_base<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)( pcVar30 + 0x70 ), &pTStack_548);
                                 puStack_558 = (uint*)0x103514;
                                 std::__cxx11::string::_M_assign(psVar20);
                                 goto LAB_001034b4;
                              }

                              puStack_520 = auStack_510;
                              puStack_558 = (uint*)0x1038fb;
                              std::__cxx11::string::_M_construct(( ulong ) & puStack_520, '\x02');
                              uStack_4f0 = __LC7;
                              uStack_4e8 = _UNK_00104dd8;
                              uStack_4e0 = __LC8;
                              uStack_4d8 = _UNK_00104de8;
                              uStack_4d0 = __LC9;
                              uStack_4c8 = _UNK_00104df8;
                              uStack_4c0 = __LC10;
                              uStack_4b8 = _UNK_00104e08;
                              uStack_4b0 = __LC11;
                              uStack_4a8 = _UNK_00104e18;
                              uStack_4a0 = __LC12;
                              uStack_498 = _UNK_00104e28;
                              uStack_490 = __LC13;
                              uStack_488 = _UNK_00104e38;
                              uStack_480 = __LC14;
                              uStack_478 = _UNK_00104e48;
                              uStack_470 = __LC15;
                              uStack_468 = _UNK_00104e58;
                              uStack_460 = __LC16;
                              uStack_458 = _UNK_00104e68;
                              uStack_450 = __LC17;
                              uStack_448 = _UNK_00104e78;
                              uStack_440 = __LC18;
                              uStack_438 = (undefined1)_UNK_00104e88;
                              uStack_437 = (undefined7)_LC19._0_8_;
                              cStack_430 = SUB81(_LC19._0_8_, 7);
                              for (int i = 0; i < 8; i++) {
                                 acStack_42f[i] = _LC19[( i + 8 )];
                              }

                              goto LAB_001039d0;
                           }

                           goto LAB_001032d7;
                        }

                        if (*(code**)( *(long*)extraout_RDX + 400 ) == TIntermBinary::getLeft) {
                           plVar17 = *(long**)( extraout_RDX + 0xc0 );
                        }
 else {
                           puStack_558 = (uint*)0x103535;
                           plVar17 = (long*)( **(code**)( *(long*)extraout_RDX + 400 ) )(extraout_RDX);
                        }

                        if (*(code**)( *plVar17 + 0xf0 ) == TIntermTyped::getType) {
                           plVar17 = plVar17 + 4;
                        }
 else {
                           puStack_558 = (uint*)0x10380a;
                           plVar17 = (long*)( **(code**)( *plVar17 + 0xf0 ) )();
                        }

                        if (*(code**)( *plVar17 + 0x58 ) == TType::getQualifier) {
                           auVar36._8_8_ = TType::getQualifier;
                           auVar36._0_8_ = plVar17 + 2;
                        }
 else {
                           puStack_558 = (uint*)0x1037fa;
                           auVar36 = ( **(code**)( *plVar17 + 0x58 ) )();
                        }

                        if (( *(byte*)( auVar36._0_8_ + 0xc ) & 0x10 ) != 0) {
                           puStack_558 = (uint*)0x10354c;
                           std::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert_unique<std::__cxx11::string_const&,std::__cxx11::string_const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::__cxx11::string,true>>>>(*(string**)( pcVar30 + 0x40 ), (string*)( pcVar30 + 0x50 ), auVar36._8_8_);
                        }

                        puStack_558 = (uint*)0x1033a3;
                        (anonymous_namespace)::getFrontElement((_anonymous_namespace_*)&plStack_540, (string*)( pcVar30 + 0x50 ));
                        p_Var5 = *(_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>**)( pcVar30 + 0x38 );
                        puStack_558 = (uint*)0x1033c3;
                        puStack_520 = auStack_510;
                        std::__cxx11::string::_M_construct<char*>(&puStack_520, plStack_540, lStack_538 + (long)plStack_540);
                        puStack_558 = (uint*)0x1033d2;
                        pTStack_500 = extraout_RDX;
                        p_Var19 = (_Hash_node*)operator_new(0x38);
                        *(undefined8*)p_Var19 = 0;
                        *(_Hash_node**)( p_Var19 + 8 ) = p_Var19 + 0x18;
                        if (puStack_520 == auStack_510) {
                           uVar25 = uStack_518 + 1;
                           uVar22 = (uint)uVar25;
                           if (uVar22 < 8) {
                              if (( uVar25 & 4 ) == 0) {
                                 if (uVar22 != 0) {
                                    p_Var19[0x18] = auStack_510[0]._0_1_;
                                    if (( uVar25 & 2 ) != 0) {
                                       *(undefined2*)( p_Var19 + ( uVar25 & 0xffffffff ) + 0x16 ) = *(undefined2*)( (long)&uStack_518 + ( uVar25 & 0xffffffff ) + 6 );
                                    }

                                 }

                              }
 else {
                                 *(uint*)( p_Var19 + 0x18 ) = auStack_510[0];
                                 *(undefined4*)( p_Var19 + ( uVar25 & 0xffffffff ) + 0x14 ) = *(undefined4*)( (long)&uStack_518 + ( uVar25 & 0xffffffff ) + 4 );
                              }

                           }
 else {
                              *(ulong*)( p_Var19 + 0x18 ) = CONCAT44(auStack_510[1], auStack_510[0]);
                              *(undefined8*)( p_Var19 + ( uVar25 & 0xffffffff ) + 0x10 ) = *(undefined8*)( (long)&uStack_518 + ( uVar25 & 0xffffffff ) );
                              lVar11 = (long)( p_Var19 + 0x18 ) - ( ( ulong )(p_Var19 + 0x20) & 0xfffffffffffffff8 );
                              uVar22 = uVar22 + (int)lVar11 & 0xfffffff8;
                              if (7 < uVar22) {
                                 uVar24 = 0;
                                 do {
                                    uVar25 = (ulong)uVar24;
                                    uVar24 = uVar24 + 8;
                                    *(undefined8*)( ( ( ulong )(p_Var19 + 0x20) & 0xfffffffffffffff8 ) + uVar25 ) = *(undefined8*)( (long)auStack_510 + ( uVar25 - lVar11 ) );
                                 }
 while ( uVar24 < uVar22 );
                              }

                           }

                        }
 else {
                           *(uint**)( p_Var19 + 8 ) = puStack_520;
                           *(ulong*)( p_Var19 + 0x18 ) = CONCAT44(auStack_510[1], auStack_510[0]);
                        }

                        *(ulong*)( p_Var19 + 0x10 ) = uStack_518;
                        *(TIntermTyped**)( p_Var19 + 0x28 ) = pTStack_500;
                        uStack_518 = 0;
                        auStack_510[0] = auStack_510[0] & 0xffffff00;
                        puStack_558 = (uint*)0x103437;
                        puStack_520 = auStack_510;
                        auVar35 = std::_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>::_M_compute_hash_code(p_Var5, 0, p_Var19 + 8);
                        puStack_558 = (uint*)0x103445;
                        std::_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>::_M_insert_multi_node(p_Var5, auVar35._0_8_, auVar35._8_8_, p_Var19);
                        if (puStack_520 != auStack_510) {
                           puStack_558 = (uint*)0x10345d;
                           operator_delete(puStack_520, CONCAT44(auStack_510[1], auStack_510[0]) + 1);
                        }

                        for (int i = 0; i < 8; i++) {
                           pcVar30[( i + 88 )] = '\0';
                        }

                        **(undefined1**)( pcVar30 + 0x50 ) = 0;
                        if (*(code**)( *(long*)extraout_RDX + 0x198 ) == TIntermBinary::getRight) {
                           plVar17 = *(long**)( extraout_RDX + 200 );
                        }
 else {
                           puStack_558 = (uint*)0x10381d;
                           plVar17 = (long*)( **(code**)( *(long*)extraout_RDX + 0x198 ) )(extraout_RDX);
                        }

                        puStack_558 = (uint*)0x103497;
                        ( **(code**)( *plVar17 + 0x10 ) )(plVar17, pcVar30);
                        if (plStack_540 != alStack_530) {
                           puStack_558 = (uint*)0x1034b4;
                           operator_delete(plStack_540, alStack_530[0] + 1);
                        }

                        LAB_001034b4:if (lStack_418 == *(long*)( in_FS_OFFSET + 0x28 )) {
                           return 0;
                        }

                        /* WARNING: Subroutine does not return */
                        puStack_558 = (uint*)0x103ab1;
                        __stack_chk_fail();
                     }

                     local_3c8 = (_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>*)local_128;
                     psStack_3e0 = (string*)0x102f48;
                     local_138 = local_3c8;
                     std::__cxx11::string::_M_construct<char_const*>(&local_138, (long)local_198 + (long)( local_150 + 1U ), (long)local_190 + (long)local_198);
                  }
 else {
                     local_3c8 = (_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>*)local_128;
                     psStack_3e0 = (string*)0x1027a3;
                     local_138 = local_3c8;
                     std::__cxx11::string::_M_construct<char*>(&local_138, local_198, (long)local_190 + (long)local_198);
                  }

                  p_Var12 = (_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>*)local_108;
                  local_118 = p_Var12;
                  if (local_138 == local_3c8) {
                     uVar25 = local_130 + 1;
                     p_Var28 = local_3c8;
                     if (7 < (uint)uVar25) {
                        uVar26 = 0;
                        do {
                           uVar22 = (int)uVar26 + 8;
                           uVar27 = (ulong)uVar22;
                           *(undefined8*)( p_Var12 + uVar26 ) = *(undefined8*)( local_3c8 + uVar26 );
                           uVar26 = uVar27;
                        }
 while ( uVar22 < ( (uint)uVar25 & 0xfffffff8 ) );
                        p_Var12 = p_Var12 + uVar27;
                        p_Var28 = local_3c8 + uVar27;
                     }

                     lVar11 = 0;
                     if (( uVar25 & 4 ) != 0) {
                        *(undefined4*)p_Var12 = *(undefined4*)p_Var28;
                        lVar11 = 4;
                     }

                     if (( uVar25 & 2 ) != 0) {
                        *(undefined2*)( p_Var12 + lVar11 ) = *(undefined2*)( p_Var28 + lVar11 );
                        lVar11 = lVar11 + 2;
                     }

                     if (( uVar25 & 1 ) != 0) {
                        p_Var12[lVar11] = p_Var28[lVar11];
                     }

                  }
 else {
                     local_118 = local_138;
                     local_108[0] = local_128[0];
                  }

                  local_110 = local_130;
                  local_f8 = '\x01';
               }
 else {
                  local_108[0] = local_108[0] & 0xffffffffffffff00;
                  local_118 = (_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>*)local_108;
                  local_110 = 0;
                  local_f8 = '\0';
               }

            }

            if (local_158 != &local_148) {
               psStack_3e0 = (string*)0x10281e;
               operator_delete(local_158, CONCAT71(uStack_147, local_148) + 1);
            }

            if (local_f8 != '\0') {
               psStack_3e0 = (string*)0x1029cd;
               std::__cxx11::string::_M_assign((string*)&local_70);
               psStack_3e0 = (string*)0x1029d6;
               p_Var12 = (_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>*)( **(code**)( *plVar17 + 0x40 ) )(plVar17);
               if (p_Var12 == (_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>*)0x0) {
                  psStack_3e0 = (string*)0x102e51;
                  plVar17 = (long*)( **(code**)( *plVar17 + 0x38 ) )(plVar17);
                  if (plVar17 != (long*)0x0) {
                     if (*(code**)( *plVar17 + 0x188 ) == TIntermUnary::getOperand) {
                        plVar10 = (long*)plVar17[0x18];
                     }
 else {
                        psStack_3e0 = (string*)0x103185;
                        plVar10 = (long*)( **(code**)( *plVar17 + 0x188 ) )(plVar17);
                     }

                     psStack_3e0 = (string*)0x102e8c;
                     ( **(code**)( *plVar10 + 0x10 ) )(plVar10, &local_e8);
                     uVar22 = *(uint*)( plVar17 + 0x17 );
                     if (uVar22 < 0xb3) {
                        if (0xae < uVar22) {
                           LAB_00102ec0:if (*(code**)( *plVar17 + 0xf8 ) == TIntermTyped::getWritableType) {
                              p_Var12 = (_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>*)( plVar17 + 4 );
                           }
 else {
                              psStack_3e0 = (string*)0x10320e;
                              p_Var12 = (_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>*)( **(code**)( *plVar17 + 0xf8 ) )(plVar17);
                           }

                           goto LAB_00102a6e;
                        }

                        if (uVar22 < 0x10) {
                           if (( 0xb < uVar22 ) || ( uVar22 == 8 )) goto LAB_00102ec0;
                        }
 else if (uVar22 - 0x9c < 5) goto LAB_00102ec0;
                     }
 else {
                        if (uVar22 == 0x129) goto LAB_00102ec0;
                        if (uVar22 < 0x12a) {
                           if (uVar22 == 0x113) goto LAB_00102ec0;
                        }
 else if (uVar22 - 0x24a < 9) goto LAB_00102ec0;
                     }

                  }

               }
 else {
                  local_3c8 = p_Var12;
                  if (*(code**)( *(long*)p_Var12 + 0x198 ) == TIntermBinary::getRight) {
                     plVar17 = *(long**)( p_Var12 + 200 );
                  }
 else {
                     psStack_3e0 = (string*)0x102fba;
                     plVar17 = (long*)( **(code**)( *(long*)p_Var12 + 0x198 ) )(p_Var12);
                  }

                  psStack_3e0 = (string*)0x102a16;
                  ( **(code**)( *plVar17 + 0x10 ) )(plVar17, &local_e8);
                  uVar22 = *(uint*)( local_3c8 + 0xb8 );
                  if (uVar22 < 0xb3) {
                     if (uVar22 < 0xaf) {
                        if (uVar22 < 0x10) {
                           if (( 0xb < uVar22 ) || ( uVar22 == 8 )) goto LAB_00102a50;
                        }
 else if (uVar22 - 0x9c < 5) goto LAB_00102a50;
                        goto LAB_0010282c;
                     }

                  }
 else if (uVar22 != 0x129) {
                     if (uVar22 < 0x12a) {
                        if (uVar22 == 0x113) goto LAB_00102a50;
                     }
 else if (uVar22 - 0x24a < 9) goto LAB_00102a50;
                     goto LAB_0010282c;
                  }

                  LAB_00102a50:if (*(code**)( *(long*)local_3c8 + 0xf8 ) == TIntermTyped::getWritableType) {
                     p_Var12 = local_3c8 + 0x20;
                  }
 else {
                     psStack_3e0 = (string*)0x103175;
                     p_Var12 = (_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>*)( **(code**)( *(long*)local_3c8 + 0xf8 ) )(local_3c8);
                  }

                  LAB_00102a6e:if (*(code**)( *(long*)p_Var12 + 0x50 ) == TType::getQualifier) {
                     p_Var12 = p_Var12 + 0x10;
                  }
 else {
                     psStack_3e0 = (string*)0x103162;
                     p_Var12 = (_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>*)( **(code**)( *(long*)p_Var12 + 0x50 ) )();
                  }

                  p_Var12[0xc] = ( _Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> )((byte)p_Var12[0xc] | 0x10);
               }

            }

            LAB_0010282c:if (local_118 != (_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>*)local_108) {
               psStack_3e0 = (string*)0x10284a;
               operator_delete(local_118, local_108[0] + 1);
            }

            puVar18 = (undefined8*)*puVar18;
            plVar17 = local_3b8;
            if (puVar18 == local_3d8) goto LAB_00102bfd;
            goto LAB_0010285a;
         }

      }

      LAB_00102bfd:pppppplVar29 = local_190;
      plVar10 = local_198;
      if (local_228 < 0x15) {
         if (local_230 != (long*******)0x0) {
            ppppppplVar16 = (long*******)&local_230;
            ppppppplVar21 = local_230;
            do {
               if (pppppplVar29 == ppppppplVar21[2]) {
                  if (pppppplVar29 != (long******)0x0) {
                     psStack_3e0 = (string*)0x102c6d;
                     iVar9 = memcmp(plVar10, ppppppplVar21[1], (size_t)pppppplVar29);
                     if (iVar9 != 0) goto LAB_00102c40;
                  }

                  pppppplVar29 = *ppppppplVar16;
                  uVar26 = (ulong)pppppplVar29[5] % local_238;
                  goto LAB_00102c86;
               }

               LAB_00102c40:ppppppplVar2 = (long*******)*ppppppplVar21;
               ppppppplVar16 = ppppppplVar21;
               ppppppplVar21 = ppppppplVar2;
            }
 while ( ppppppplVar2 != (long*******)0x0 );
         }

      }
 else {
         psStack_3e0 = (string*)0x102f72;
         uVar25 = std::_Hash_bytes(local_198, (ulong)local_190, 0xc70f6907);
         uVar26 = uVar25 % local_238;
         psStack_3e0 = (string*)0x102f94;
         ppppppplVar16 = (long*******)std::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_find_before_node(local_3a8, uVar26, local_3c0, uVar25);
         if (ppppppplVar16 != (long*******)0x0) {
            pppppplVar29 = *ppppppplVar16;
            LAB_00102c86:ppppppplVar21 = (long*******)*pppppplVar29;
            ppppppplVar2 = (long*******)local_240[uVar26];
            if (ppppppplVar16 == ppppppplVar2) {
               if (ppppppplVar21 != (long*******)0x0) {
                  if (uVar26 == (ulong)ppppppplVar21[5] % local_238) goto LAB_00102cc2;
                  local_240[(ulong)ppppppplVar21[5] % local_238] = ppppppplVar16;
               }

               if ((long********)ppppppplVar2 == &local_230) {
                  local_230 = ppppppplVar21;
               }

               local_240[uVar26] = 0;
               ppppppplVar21 = (long*******)*pppppplVar29;
            }
 else if (( ppppppplVar21 != (long*******)0x0 ) && ( uVar26 != (ulong)ppppppplVar21[5] % local_238 )) {
               local_240[(ulong)ppppppplVar21[5] % local_238] = ppppppplVar16;
               ppppppplVar21 = (long*******)*pppppplVar29;
            }

            LAB_00102cc2:pppppplVar4 = (long******)pppppplVar29[1];
            *ppppppplVar16 = (long******)ppppppplVar21;
            if (pppppplVar4 != pppppplVar29 + 3) {
               psStack_3e0 = (string*)0x102ce0;
               operator_delete(pppppplVar4, (long)pppppplVar29[3] + 1);
            }

            psStack_3e0 = (string*)0x102ced;
            operator_delete(pppppplVar29, 0x30);
            local_228 = local_228 - 1;
         }

      }

      if (local_178 != local_168) {
         psStack_3e0 = (string*)0x102d1c;
         operator_delete(local_178, local_168[0] + 1);
      }

      psVar20 = local_3c0;
      p_Var8 = local_3b0;
      p_Var12 = local_398;
      p_Var6 = local_3b0;
      if (local_198 != plVar17) {
         psStack_3e0 = (string*)0x102d3a;
         operator_delete(local_198, local_188[0] + 1);
         psVar20 = local_3c0;
         p_Var8 = local_3b0;
         p_Var12 = local_398;
         p_Var6 = local_3b0;
      }

   }
 while ( true );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* (anonymous namespace)::TSymbolDefinitionCollectingTraverser::visitBinary(glslang::TVisit,
   glslang::TIntermBinary*) */undefined8 TSymbolDefinitionCollectingTraverser::visitBinary(TSymbolDefinitionCollectingTraverser *this, undefined8 param_2, TIntermTyped *param_3) {
   undefined1 uVar1;
   _Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>> *p_Var2;
   _Hash_node *p_Var3;
   string *psVar4;
   TSymbolDefinitionCollectingTraverser *pTVar5;
   long *plVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   long lVar10;
   ulong uVar11;
   long *extraout_RDX;
   ulong uVar12;
   char *pcVar13;
   char cVar14;
   uint uVar15;
   long in_FS_OFFSET;
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   long *plStack_1f0;
   long lStack_1e8;
   long alStack_1e0[2];
   uint *puStack_1d0;
   undefined8 uStack_1c8;
   uint auStack_1c0[4];
   long *plStack_1b0;
   long lStack_1a8;
   TSymbolDefinitionCollectingTraverser *pTStack_198;
   TIntermTyped *pTStack_190;
   ulong uStack_188;
   uint *puStack_180;
   TIntermTyped *local_170;
   long *local_168;
   long local_160;
   long local_158[2];
   uint *local_148;
   undefined8 local_140;
   uint local_138[4];
   TIntermTyped *local_128;
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
   *(undefined8*)( this + 0x58 ) = 0;
   **(undefined1**)( this + 0x50 ) = 0;
   if (*(code**)( *(long*)param_3 + 400 ) == glslang::TIntermBinary::getLeft) {
      plVar6 = *(long**)( param_3 + 0xc0 );
   }
 else {
      puStack_180 = (uint*)0x103525;
      plVar6 = (long*)( **(code**)( *(long*)param_3 + 400 ) )(param_3);
   }

   puStack_180 = (uint*)0x1032c7;
   ( **(code**)( *plVar6 + 0x10 ) )(plVar6, this);
   uVar7 = *(uint*)( param_3 + 0xb8 );
   if (uVar7 < 0x10) {
      if (uVar7 < 0xc) goto LAB_001032d7;
   }
 else if (0xe < uVar7 - 0x249) {
      if (uVar7 < 0xba) {
         if (0xb5 < uVar7) {
            if (uVar7 != 0xb8) goto LAB_001034f6;
            if (*(code**)( *(long*)param_3 + 0x198 ) == glslang::TIntermBinary::getRight) {
               plVar6 = *(long**)( param_3 + 200 );
            }
 else {
               puStack_180 = (uint*)0x103a35;
               plVar6 = (long*)( **(code**)( *(long*)param_3 + 0x198 ) )(param_3);
            }

            puStack_180 = (uint*)0x103596;
            lVar10 = ( **(code**)( *plVar6 + 0x28 ) )();
            uVar12 = *(ulong*)( this + 0x58 );
            uVar7 = **(uint**)( *(long*)( lVar10 + 0xc0 ) + 8 );
            pTVar5 = *(TSymbolDefinitionCollectingTraverser**)( this + 0x50 );
            if (pTVar5 == this + 0x60) {
               uVar11 = 0xf;
            }
 else {
               uVar11 = *(ulong*)( this + 0x60 );
            }

            if (uVar11 < uVar12 + 1) {
               puStack_180 = (uint*)0x103a15;
               std::__cxx11::string::_M_mutate(( ulong )(this + 0x50), uVar12, (char*)0x0, 0);
               pTVar5 = *(TSymbolDefinitionCollectingTraverser**)( this + 0x50 );
            }

            pTVar5[uVar12] = (TSymbolDefinitionCollectingTraverser)0x2f;
            *(ulong*)( this + 0x58 ) = uVar12 + 1;
            *(undefined1*)( *(long*)( this + 0x50 ) + 1 + uVar12 ) = 0;
            if (uVar7 < 10) {
               local_148 = local_138;
               puStack_180 = (uint*)0x103a7e;
               std::__cxx11::string::_M_construct(( ulong ) & local_148, '\x01');
               LAB_001037a0:cVar14 = (char)uVar7 + '0';
            }
 else {
               if (uVar7 < 100) {
                  local_148 = local_138;
                  puStack_180 = (uint*)0x1038fb;
                  std::__cxx11::string::_M_construct(( ulong ) & local_148, '\x02');
                  local_118 = __LC7;
                  uStack_110 = _UNK_00104dd8;
                  local_108 = __LC8;
                  uStack_100 = _UNK_00104de8;
                  local_f8 = __LC9;
                  uStack_f0 = _UNK_00104df8;
                  local_e8 = __LC10;
                  uStack_e0 = _UNK_00104e08;
                  local_d8 = __LC11;
                  uStack_d0 = _UNK_00104e18;
                  local_c8 = __LC12;
                  uStack_c0 = _UNK_00104e28;
                  local_b8 = __LC13;
                  uStack_b0 = _UNK_00104e38;
                  local_a8 = __LC14;
                  uStack_a0 = _UNK_00104e48;
                  local_98 = __LC15;
                  uStack_90 = _UNK_00104e58;
                  local_88 = __LC16;
                  uStack_80 = _UNK_00104e68;
                  local_78 = __LC17;
                  uStack_70 = _UNK_00104e78;
                  local_68 = __LC18;
                  uStack_60 = (undefined1)_UNK_00104e88;
                  uStack_5f = (undefined7)_LC19._0_8_;
                  cStack_58 = SUB81(_LC19._0_8_, 7);
                  for (int i = 0; i < 8; i++) {
                     acStack_57[i] = _LC19[( i + 8 )];
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
                           LAB_0010365f:cVar14 = cVar14 + '\x01';
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
                                    goto LAB_0010365f;
                                 }

                                 cVar14 = '\t';
                              }

                           }

                        }

                     }

                  }

                  local_148 = local_138;
                  puStack_180 = (uint*)0x103678;
                  std::__cxx11::string::_M_construct(( ulong ) & local_148, cVar14);
                  uVar9 = (int)local_140 - 1;
                  local_118 = __LC7;
                  uStack_110 = _UNK_00104dd8;
                  local_108 = __LC8;
                  uStack_100 = _UNK_00104de8;
                  local_f8 = __LC9;
                  uStack_f0 = _UNK_00104df8;
                  local_e8 = __LC10;
                  uStack_e0 = _UNK_00104e08;
                  local_d8 = __LC11;
                  uStack_d0 = _UNK_00104e18;
                  local_c8 = __LC12;
                  uStack_c0 = _UNK_00104e28;
                  local_b8 = __LC13;
                  uStack_b0 = _UNK_00104e38;
                  local_a8 = __LC14;
                  uStack_a0 = _UNK_00104e48;
                  local_98 = __LC15;
                  uStack_90 = _UNK_00104e58;
                  local_88 = __LC16;
                  uStack_80 = _UNK_00104e68;
                  local_78 = __LC17;
                  uStack_70 = _UNK_00104e78;
                  local_68 = __LC18;
                  uStack_60 = (undefined1)_UNK_00104e88;
                  uStack_5f = (undefined7)_LC19._0_8_;
                  cStack_58 = SUB81(_LC19._0_8_, 7);
                  for (int i = 0; i < 8; i++) {
                     acStack_57[i] = _LC19[( i + 8 )];
                  }

                  uVar11 = (ulong)uVar7;
                  do {
                     uVar15 = uVar7;
                     uVar12 = uVar11;
                     uVar7 = ( uint )(uVar12 / 100);
                     uVar8 = ( uVar15 + uVar7 * -100 ) * 2;
                     uVar1 = *(undefined1*)( (long)&local_118 + (ulong)uVar8 );
                     *(undefined1*)( (long)local_148 + (ulong)uVar9 ) = *(undefined1*)( (long)&local_118 + ( ulong )(uVar8 + 1) );
                     uVar8 = uVar9 - 1;
                     uVar9 = uVar9 - 2;
                     *(undefined1*)( (long)local_148 + (ulong)uVar8 ) = uVar1;
                     uVar11 = uVar12 / 100;
                  }
 while ( 9999 < uVar15 );
                  if (uVar15 < 1000) goto LAB_001037a0;
               }

               cVar14 = *(char*)( (long)&local_118 + ( ulong )(uVar7 * 2) );
               *(undefined1*)( (long)local_148 + 1 ) = *(undefined1*)( (long)&local_118 + ( ulong )(uVar7 * 2 + 1) );
            }

            *(char*)local_148 = cVar14;
            if (0x3fffffffffffffffU - *(long*)( this + 0x58 ) < local_140) {
               pcVar13 = "basic_string::append";
               puStack_180 = (uint*)0x103abd;
               std::__throw_length_error("basic_string::append");
               lStack_1a8 = *(long*)( in_FS_OFFSET + 0x28 );
               for (int i = 0; i < 8; i++) {
                  pcVar13[( i + 88 )] = '\0';
               }

               **(undefined1**)( pcVar13 + 0x50 ) = 0;
               pTStack_198 = this;
               pTStack_190 = param_3;
               uStack_188 = uVar12;
               puStack_180 = local_138;
               if (*(code**)( *extraout_RDX + 0x188 ) == glslang::TIntermUnary::getOperand) {
                  plVar6 = (long*)extraout_RDX[0x18];
               }
 else {
                  plVar6 = (long*)( **(code**)( *extraout_RDX + 0x188 ) )(extraout_RDX);
               }

               ( **(code**)( *plVar6 + 0x10 ) )(plVar6, pcVar13);
               uVar7 = *(uint*)( extraout_RDX + 0x17 );
               if (uVar7 < 0x10) {
                  if (uVar7 < 0xc) goto LAB_00103b2d;
               }
 else if (0xe < uVar7 - 0x249) goto LAB_00103b2d;
               if (*(code**)( *extraout_RDX + 0x188 ) == glslang::TIntermUnary::getOperand) {
                  plVar6 = (long*)extraout_RDX[0x18];
               }
 else {
                  plVar6 = (long*)( **(code**)( *extraout_RDX + 0x188 ) )(extraout_RDX);
               }

               if (*(code**)( *plVar6 + 0xf0 ) == glslang::TIntermTyped::getType) {
                  plVar6 = plVar6 + 4;
               }
 else {
                  plVar6 = (long*)( **(code**)( *plVar6 + 0xf0 ) )();
               }

               if (*(code**)( *plVar6 + 0x58 ) == glslang::TType::getQualifier) {
                  auVar16._8_8_ = glslang::TType::getQualifier;
                  auVar16._0_8_ = plVar6 + 2;
               }
 else {
                  auVar16 = ( **(code**)( *plVar6 + 0x58 ) )();
               }

               if (( *(byte*)( auVar16._0_8_ + 0xc ) & 0x10 ) != 0) {
                  std::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert_unique<std::__cxx11::string_const&,std::__cxx11::string_const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::__cxx11::string,true>>>>(*(string**)( pcVar13 + 0x40 ), (string*)( pcVar13 + 0x50 ), auVar16._8_8_);
               }

               getFrontElement((_anonymous_namespace_*)&plStack_1f0, (string*)( pcVar13 + 0x50 ));
               p_Var2 = *(_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>**)( pcVar13 + 0x38 );
               puStack_1d0 = auStack_1c0;
               std::__cxx11::string::_M_construct<char*>(&puStack_1d0, plStack_1f0, lStack_1e8 + (long)plStack_1f0);
               plStack_1b0 = extraout_RDX;
               p_Var3 = (_Hash_node*)operator_new(0x38);
               *(undefined8*)p_Var3 = 0;
               *(_Hash_node**)( p_Var3 + 8 ) = p_Var3 + 0x18;
               if (puStack_1d0 == auStack_1c0) {
                  uVar12 = uStack_1c8 + 1;
                  uVar7 = (uint)uVar12;
                  if (uVar7 < 8) {
                     if (( uVar12 & 4 ) == 0) {
                        if (uVar7 != 0) {
                           p_Var3[0x18] = auStack_1c0[0]._0_1_;
                           if (( uVar12 & 2 ) != 0) {
                              *(undefined2*)( p_Var3 + ( uVar12 & 0xffffffff ) + 0x16 ) = *(undefined2*)( (long)&uStack_1c8 + ( uVar12 & 0xffffffff ) + 6 );
                           }

                        }

                     }
 else {
                        *(uint*)( p_Var3 + 0x18 ) = auStack_1c0[0];
                        *(undefined4*)( p_Var3 + ( uVar12 & 0xffffffff ) + 0x14 ) = *(undefined4*)( (long)&uStack_1c8 + ( uVar12 & 0xffffffff ) + 4 );
                     }

                  }
 else {
                     *(ulong*)( p_Var3 + 0x18 ) = CONCAT44(auStack_1c0[1], auStack_1c0[0]);
                     *(undefined8*)( p_Var3 + ( uVar12 & 0xffffffff ) + 0x10 ) = *(undefined8*)( (long)&uStack_1c8 + ( uVar12 & 0xffffffff ) );
                     lVar10 = (long)( p_Var3 + 0x18 ) - ( ( ulong )(p_Var3 + 0x20) & 0xfffffffffffffff8 );
                     uVar7 = uVar7 + (int)lVar10 & 0xfffffff8;
                     if (7 < uVar7) {
                        uVar9 = 0;
                        do {
                           uVar12 = (ulong)uVar9;
                           uVar9 = uVar9 + 8;
                           *(undefined8*)( ( ( ulong )(p_Var3 + 0x20) & 0xfffffffffffffff8 ) + uVar12 ) = *(undefined8*)( (long)auStack_1c0 + ( uVar12 - lVar10 ) );
                        }
 while ( uVar9 < uVar7 );
                     }

                  }

               }
 else {
                  *(uint**)( p_Var3 + 8 ) = puStack_1d0;
                  *(ulong*)( p_Var3 + 0x18 ) = CONCAT44(auStack_1c0[1], auStack_1c0[0]);
               }

               *(long*)( p_Var3 + 0x10 ) = uStack_1c8;
               *(long**)( p_Var3 + 0x28 ) = plStack_1b0;
               uStack_1c8 = 0;
               auStack_1c0[0] = auStack_1c0[0] & 0xffffff00;
               puStack_1d0 = auStack_1c0;
               auVar16 = std::_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>::_M_compute_hash_code(p_Var2, 0, p_Var3 + 8);
               std::_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>::_M_insert_multi_node(p_Var2, auVar16._0_8_, auVar16._8_8_, p_Var3);
               if (puStack_1d0 != auStack_1c0) {
                  operator_delete(puStack_1d0, CONCAT44(auStack_1c0[1], auStack_1c0[0]) + 1);
               }

               if (plStack_1f0 != alStack_1e0) {
                  operator_delete(plStack_1f0, alStack_1e0[0] + 1);
               }

               LAB_00103b2d:pcVar13[0x58] = '\0';
               for (int i = 0; i < 7; i++) {
                  pcVar13[( i + 89 )] = '\0';
               }

               **(undefined1**)( pcVar13 + 0x50 ) = 0;
               if (lStack_1a8 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return 0;
            }

            puStack_180 = (uint*)0x1037d0;
            std::__cxx11::string::_M_append((char*)( this + 0x50 ), (ulong)local_148);
            if (local_148 != local_138) {
               puStack_180 = (uint*)0x1037ec;
               operator_delete(local_148, CONCAT44(local_138[1], local_138[0]) + 1);
            }

            goto LAB_001034f6;
         }

      }
 else if (uVar7 == 0x341) {
         LAB_001034f6:puStack_180 = (uint*)0x103509;
         local_170 = param_3;
         psVar4 = (string*)std::__detail::_Map_base<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](*(_Map_base<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)( this + 0x70 ), &local_170);
         puStack_180 = (uint*)0x103514;
         std::__cxx11::string::_M_assign(psVar4);
         goto LAB_001034b4;
      }

      LAB_001032d7:*(undefined8*)( this + 0x58 ) = 0;
      **(undefined1**)( this + 0x50 ) = 0;
      if (*(code**)( *(long*)param_3 + 0x198 ) == glslang::TIntermBinary::getRight) {
         plVar6 = *(long**)( param_3 + 200 );
      }
 else {
         puStack_180 = (uint*)0x1039f5;
         plVar6 = (long*)( **(code**)( *(long*)param_3 + 0x198 ) )(param_3);
      }

      puStack_180 = (uint*)0x103311;
      ( **(code**)( *plVar6 + 0x10 ) )(plVar6, this);
      goto LAB_001034b4;
   }

   if (*(code**)( *(long*)param_3 + 400 ) == glslang::TIntermBinary::getLeft) {
      plVar6 = *(long**)( param_3 + 0xc0 );
   }
 else {
      puStack_180 = (uint*)0x103535;
      plVar6 = (long*)( **(code**)( *(long*)param_3 + 400 ) )(param_3);
   }

   if (*(code**)( *plVar6 + 0xf0 ) == glslang::TIntermTyped::getType) {
      plVar6 = plVar6 + 4;
   }
 else {
      puStack_180 = (uint*)0x10380a;
      plVar6 = (long*)( **(code**)( *plVar6 + 0xf0 ) )();
   }

   if (*(code**)( *plVar6 + 0x58 ) == glslang::TType::getQualifier) {
      auVar17._8_8_ = glslang::TType::getQualifier;
      auVar17._0_8_ = plVar6 + 2;
   }
 else {
      puStack_180 = (uint*)0x1037fa;
      auVar17 = ( **(code**)( *plVar6 + 0x58 ) )();
   }

   if (( *(byte*)( auVar17._0_8_ + 0xc ) & 0x10 ) != 0) {
      puStack_180 = (uint*)0x10354c;
      std::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert_unique<std::__cxx11::string_const&,std::__cxx11::string_const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::__cxx11::string,true>>>>(*(string**)( this + 0x40 ), (string*)( this + 0x50 ), auVar17._8_8_);
   }

   puStack_180 = (uint*)0x1033a3;
   getFrontElement((_anonymous_namespace_*)&local_168, (string*)( this + 0x50 ));
   p_Var2 = *(_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>**)( this + 0x38 );
   puStack_180 = (uint*)0x1033c3;
   local_148 = local_138;
   std::__cxx11::string::_M_construct<char*>(&local_148, local_168, local_160 + (long)local_168);
   puStack_180 = (uint*)0x1033d2;
   local_128 = param_3;
   p_Var3 = (_Hash_node*)operator_new(0x38);
   *(undefined8*)p_Var3 = 0;
   *(_Hash_node**)( p_Var3 + 8 ) = p_Var3 + 0x18;
   if (local_148 == local_138) {
      uVar12 = local_140 + 1;
      uVar7 = (uint)uVar12;
      if (uVar7 < 8) {
         if (( uVar12 & 4 ) == 0) {
            if (uVar7 != 0) {
               p_Var3[0x18] = local_138[0]._0_1_;
               if (( uVar12 & 2 ) != 0) {
                  *(undefined2*)( p_Var3 + ( uVar12 & 0xffffffff ) + 0x16 ) = *(undefined2*)( (long)&local_140 + ( uVar12 & 0xffffffff ) + 6 );
               }

            }

         }
 else {
            *(uint*)( p_Var3 + 0x18 ) = local_138[0];
            *(undefined4*)( p_Var3 + ( uVar12 & 0xffffffff ) + 0x14 ) = *(undefined4*)( (long)&local_140 + ( uVar12 & 0xffffffff ) + 4 );
         }

      }
 else {
         *(ulong*)( p_Var3 + 0x18 ) = CONCAT44(local_138[1], local_138[0]);
         *(undefined8*)( p_Var3 + ( uVar12 & 0xffffffff ) + 0x10 ) = *(undefined8*)( (long)&local_140 + ( uVar12 & 0xffffffff ) );
         lVar10 = (long)( p_Var3 + 0x18 ) - ( ( ulong )(p_Var3 + 0x20) & 0xfffffffffffffff8 );
         uVar7 = uVar7 + (int)lVar10 & 0xfffffff8;
         if (7 < uVar7) {
            uVar9 = 0;
            do {
               uVar12 = (ulong)uVar9;
               uVar9 = uVar9 + 8;
               *(undefined8*)( ( ( ulong )(p_Var3 + 0x20) & 0xfffffffffffffff8 ) + uVar12 ) = *(undefined8*)( (long)local_138 + ( uVar12 - lVar10 ) );
            }
 while ( uVar9 < uVar7 );
         }

      }

   }
 else {
      *(uint**)( p_Var3 + 8 ) = local_148;
      *(ulong*)( p_Var3 + 0x18 ) = CONCAT44(local_138[1], local_138[0]);
   }

   *(ulong*)( p_Var3 + 0x10 ) = local_140;
   *(TIntermTyped**)( p_Var3 + 0x28 ) = local_128;
   local_140 = 0;
   local_138[0] = local_138[0] & 0xffffff00;
   puStack_180 = (uint*)0x103437;
   local_148 = local_138;
   auVar16 = std::_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>::_M_compute_hash_code(p_Var2, 0, p_Var3 + 8);
   puStack_180 = (uint*)0x103445;
   std::_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>::_M_insert_multi_node(p_Var2, auVar16._0_8_, auVar16._8_8_, p_Var3);
   if (local_148 != local_138) {
      puStack_180 = (uint*)0x10345d;
      operator_delete(local_148, CONCAT44(local_138[1], local_138[0]) + 1);
   }

   *(undefined8*)( this + 0x58 ) = 0;
   **(undefined1**)( this + 0x50 ) = 0;
   if (*(code**)( *(long*)param_3 + 0x198 ) == glslang::TIntermBinary::getRight) {
      plVar6 = *(long**)( param_3 + 200 );
   }
 else {
      puStack_180 = (uint*)0x10381d;
      plVar6 = (long*)( **(code**)( *(long*)param_3 + 0x198 ) )(param_3);
   }

   puStack_180 = (uint*)0x103497;
   ( **(code**)( *plVar6 + 0x10 ) )(plVar6, this);
   if (local_168 != local_158) {
      puStack_180 = (uint*)0x1034b4;
      operator_delete(local_168, local_158[0] + 1);
   }

   LAB_001034b4:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      puStack_180 = (uint*)0x103ab1;
      __stack_chk_fail();
   }

   return 0;
}
/* (anonymous namespace)::TSymbolDefinitionCollectingTraverser::visitUnary(glslang::TVisit,
   glslang::TIntermUnary*) */undefined8 TSymbolDefinitionCollectingTraverser::visitUnary(TSymbolDefinitionCollectingTraverser *this, undefined8 param_2, long *param_3) {
   _Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>> *this_00;
   _Hash_node *p_Var1;
   long *plVar2;
   uint uVar3;
   uint uVar4;
   long lVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   undefined1 auVar7[16];
   long *local_78;
   long local_70;
   long local_68[2];
   uint *local_58;
   undefined8 local_50;
   uint local_48[4];
   long *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 0x58 ) = 0;
   **(undefined1**)( this + 0x50 ) = 0;
   if (*(code**)( *param_3 + 0x188 ) == glslang::TIntermUnary::getOperand) {
      plVar2 = (long*)param_3[0x18];
   }
 else {
      plVar2 = (long*)( **(code**)( *param_3 + 0x188 ) )(param_3);
   }

   ( **(code**)( *plVar2 + 0x10 ) )(plVar2, this);
   uVar3 = *(uint*)( param_3 + 0x17 );
   if (uVar3 < 0x10) {
      if (uVar3 < 0xc) goto LAB_00103b2d;
   }
 else if (0xe < uVar3 - 0x249) goto LAB_00103b2d;
   if (*(code**)( *param_3 + 0x188 ) == glslang::TIntermUnary::getOperand) {
      plVar2 = (long*)param_3[0x18];
   }
 else {
      plVar2 = (long*)( **(code**)( *param_3 + 0x188 ) )(param_3);
   }

   if (*(code**)( *plVar2 + 0xf0 ) == glslang::TIntermTyped::getType) {
      plVar2 = plVar2 + 4;
   }
 else {
      plVar2 = (long*)( **(code**)( *plVar2 + 0xf0 ) )();
   }

   if (*(code**)( *plVar2 + 0x58 ) == glslang::TType::getQualifier) {
      auVar7._8_8_ = glslang::TType::getQualifier;
      auVar7._0_8_ = plVar2 + 2;
   }
 else {
      auVar7 = ( **(code**)( *plVar2 + 0x58 ) )();
   }

   if (( *(byte*)( auVar7._0_8_ + 0xc ) & 0x10 ) != 0) {
      std::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert_unique<std::__cxx11::string_const&,std::__cxx11::string_const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::__cxx11::string,true>>>>(*(string**)( this + 0x40 ), (string*)( this + 0x50 ), auVar7._8_8_);
   }

   getFrontElement((_anonymous_namespace_*)&local_78, (string*)( this + 0x50 ));
   this_00 = *(_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>**)( this + 0x38 );
   local_58 = local_48;
   std::__cxx11::string::_M_construct<char*>(&local_58, local_78, local_70 + (long)local_78);
   local_38 = param_3;
   p_Var1 = (_Hash_node*)operator_new(0x38);
   *(undefined8*)p_Var1 = 0;
   *(_Hash_node**)( p_Var1 + 8 ) = p_Var1 + 0x18;
   if (local_58 == local_48) {
      uVar6 = local_50 + 1;
      uVar3 = (uint)uVar6;
      if (uVar3 < 8) {
         if (( uVar6 & 4 ) == 0) {
            if (uVar3 != 0) {
               p_Var1[0x18] = local_48[0]._0_1_;
               if (( uVar6 & 2 ) != 0) {
                  *(undefined2*)( p_Var1 + ( uVar6 & 0xffffffff ) + 0x16 ) = *(undefined2*)( (long)&local_50 + ( uVar6 & 0xffffffff ) + 6 );
               }

            }

         }
 else {
            *(uint*)( p_Var1 + 0x18 ) = local_48[0];
            *(undefined4*)( p_Var1 + ( uVar6 & 0xffffffff ) + 0x14 ) = *(undefined4*)( (long)&local_50 + ( uVar6 & 0xffffffff ) + 4 );
         }

      }
 else {
         *(ulong*)( p_Var1 + 0x18 ) = CONCAT44(local_48[1], local_48[0]);
         *(undefined8*)( p_Var1 + ( uVar6 & 0xffffffff ) + 0x10 ) = *(undefined8*)( (long)&local_50 + ( uVar6 & 0xffffffff ) );
         lVar5 = (long)( p_Var1 + 0x18 ) - ( ( ulong )(p_Var1 + 0x20) & 0xfffffffffffffff8 );
         uVar3 = uVar3 + (int)lVar5 & 0xfffffff8;
         if (7 < uVar3) {
            uVar4 = 0;
            do {
               uVar6 = (ulong)uVar4;
               uVar4 = uVar4 + 8;
               *(undefined8*)( ( ( ulong )(p_Var1 + 0x20) & 0xfffffffffffffff8 ) + uVar6 ) = *(undefined8*)( (long)local_48 + ( uVar6 - lVar5 ) );
            }
 while ( uVar4 < uVar3 );
         }

      }

   }
 else {
      *(uint**)( p_Var1 + 8 ) = local_58;
      *(ulong*)( p_Var1 + 0x18 ) = CONCAT44(local_48[1], local_48[0]);
   }

   *(long*)( p_Var1 + 0x10 ) = local_50;
   *(long**)( p_Var1 + 0x28 ) = local_38;
   local_50 = 0;
   local_48[0] = local_48[0] & 0xffffff00;
   local_58 = local_48;
   auVar7 = std::_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>::_M_compute_hash_code(this_00, 0, p_Var1 + 8);
   std::_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>::_M_insert_multi_node(this_00, auVar7._0_8_, auVar7._8_8_, p_Var1);
   if (local_58 != local_48) {
      operator_delete(local_58, CONCAT44(local_48[1], local_48[0]) + 1);
   }

   if (local_78 != local_68) {
      operator_delete(local_78, local_68[0] + 1);
   }

   LAB_00103b2d:*(undefined8*)( this + 0x58 ) = 0;
   **(undefined1**)( this + 0x50 ) = 0;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return 0;
}
/* glslang::TType::getQualifier() */TType * __thiscall glslang::TType::getQualifier(TType *this){
   return this + 0x10;
}
/* glslang::TType::getQualifier() const */TType * __thiscall glslang::TType::getQualifier(TType *this){
   return this + 0x10;
}
/* glslang::TIntermTyped::getType() const */TIntermTyped * __thiscall glslang::TIntermTyped::getType(TIntermTyped *this){
   return this + 0x20;
}
/* glslang::TIntermTyped::getWritableType() */TIntermTyped * __thiscall glslang::TIntermTyped::getWritableType(TIntermTyped *this){
   return this + 0x20;
}
/* glslang::TIntermTyped::getBasicType() const */TIntermTyped glslang::TIntermTyped::getBasicType(TIntermTyped *this) {
   return this[0x28];
}
/* glslang::TIntermSymbol::getId() const */undefined8 glslang::TIntermSymbol::getId(TIntermSymbol *this) {
   return *(undefined8*)( this + 0xb8 );
}
/* glslang::TIntermSymbol::getName[abi:cxx11]() const */TIntermSymbol * __thiscall glslang::TIntermSymbol::getName_abi_cxx11_(TIntermSymbol *this){
   return this + 200;
}
/* glslang::TIntermBinary::getLeft() const */undefined8 glslang::TIntermBinary::getLeft(TIntermBinary *this) {
   return *(undefined8*)( this + 0xc0 );
}
/* glslang::TIntermBinary::getRight() const */undefined8 glslang::TIntermBinary::getRight(TIntermBinary *this) {
   return *(undefined8*)( this + 200 );
}
/* glslang::TIntermUnary::getOperand() */undefined8 glslang::TIntermUnary::getOperand(TIntermUnary *this) {
   return *(undefined8*)( this + 0xc0 );
}
/* glslang::TIntermAggregate::getSequence() */TIntermAggregate * __thiscall glslang::TIntermAggregate::getSequence(TIntermAggregate *this){
   return this + 0xc0;
}
/* glslang::TIntermTraverser::~TIntermTraverser() */void glslang::TIntermTraverser::~TIntermTraverser(TIntermTraverser *this) {
   return;
}
/* glslang::TIntermTraverser::visitSymbol(glslang::TIntermSymbol*) */void glslang::TIntermTraverser::visitSymbol(TIntermSymbol *param_1) {
   return;
}
/* glslang::TIntermTraverser::visitConstantUnion(glslang::TIntermConstantUnion*) */void glslang::TIntermTraverser::visitConstantUnion(TIntermConstantUnion *param_1) {
   return;
}
/* glslang::TIntermTraverser::visitBinary(glslang::TVisit, glslang::TIntermBinary*) */undefined8 glslang::TIntermTraverser::visitBinary(void) {
   return 1;
}
/* glslang::TIntermTraverser::visitUnary(glslang::TVisit, glslang::TIntermUnary*) */undefined8 glslang::TIntermTraverser::visitUnary(void) {
   return 1;
}
/* glslang::TIntermTraverser::visitSelection(glslang::TVisit, glslang::TIntermSelection*) */undefined8 glslang::TIntermTraverser::visitSelection(void) {
   return 1;
}
/* glslang::TIntermTraverser::visitAggregate(glslang::TVisit, glslang::TIntermAggregate*) */undefined8 glslang::TIntermTraverser::visitAggregate(void) {
   return 1;
}
/* glslang::TIntermTraverser::visitLoop(glslang::TVisit, glslang::TIntermLoop*) */undefined8 glslang::TIntermTraverser::visitLoop(void) {
   return 1;
}
/* glslang::TIntermTraverser::visitBranch(glslang::TVisit, glslang::TIntermBranch*) */undefined8 glslang::TIntermTraverser::visitBranch(void) {
   return 1;
}
/* glslang::TIntermTraverser::visitSwitch(glslang::TVisit, glslang::TIntermSwitch*) */undefined8 glslang::TIntermTraverser::visitSwitch(void) {
   return 1;
}
/* std::_Hashtable<std::__cxx11::string, std::pair<std::__cxx11::string const,
   glslang::TIntermOperator*>, std::allocator<std::pair<std::__cxx11::string const,
   glslang::TIntermOperator*> >, std::__detail::_Select1st, std::equal_to<std::__cxx11::string >,
   std::hash<std::__cxx11::string >, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<true, false, false> >::~_Hashtable() */void std::_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>::~_Hashtable(_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>> *this) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   puVar2 = *(undefined8**)( this + 0x10 );
   while (puVar2 != (undefined8*)0x0) {
      puVar1 = (undefined8*)*puVar2;
      if ((undefined8*)puVar2[1] != puVar2 + 3) {
         operator_delete((undefined8*)puVar2[1], puVar2[3] + 1);
      }

      operator_delete(puVar2, 0x38);
      puVar2 = puVar1;
   }
;
   memset(*(void**)this, 0, *(long*)( this + 8 ) * 8);
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x10 ) = 0;
   if (*(_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>**)this == this + 0x30) {
      return;
   }

   operator_delete(*(_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>**)this, *(long*)( this + 8 ) << 3);
   return;
}
/* std::_Hashtable<glslang::TIntermTyped*, std::pair<glslang::TIntermTyped* const,
   std::__cxx11::string >, std::allocator<std::pair<glslang::TIntermTyped* const,
   std::__cxx11::string > >, std::__detail::_Select1st, std::equal_to<glslang::TIntermTyped*>,
   std::hash<glslang::TIntermTyped*>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true> >::~_Hashtable() */void std::_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::~_Hashtable(_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> *this) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   puVar2 = *(undefined8**)( this + 0x10 );
   while (puVar2 != (undefined8*)0x0) {
      puVar1 = (undefined8*)*puVar2;
      if ((undefined8*)puVar2[2] != puVar2 + 4) {
         operator_delete((undefined8*)puVar2[2], puVar2[4] + 1);
      }

      operator_delete(puVar2, 0x30);
      puVar2 = puVar1;
   }
;
   memset(*(void**)this, 0, *(long*)( this + 8 ) * 8);
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x10 ) = 0;
   if (*(_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>**)this == this + 0x30) {
      return;
   }

   operator_delete(*(_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>**)this, *(long*)( this + 8 ) << 3);
   return;
}
/* std::_Hashtable<std::__cxx11::string, std::__cxx11::string, std::allocator<std::__cxx11::string
   >, std::__detail::_Identity, std::equal_to<std::__cxx11::string >, std::hash<std::__cxx11::string
   >, std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<true, true, true>
   >::~_Hashtable() */void std::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::~_Hashtable(_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>> *this) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   puVar2 = *(undefined8**)( this + 0x10 );
   while (puVar2 != (undefined8*)0x0) {
      puVar1 = (undefined8*)*puVar2;
      if ((undefined8*)puVar2[1] != puVar2 + 3) {
         operator_delete((undefined8*)puVar2[1], puVar2[3] + 1);
      }

      operator_delete(puVar2, 0x30);
      puVar2 = puVar1;
   }
;
   memset(*(void**)this, 0, *(long*)( this + 8 ) * 8);
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x10 ) = 0;
   if (*(_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>**)this == this + 0x30) {
      return;
   }

   operator_delete(*(_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>**)this, *(long*)( this + 8 ) << 3);
   return;
}
/* std::_Hashtable<glslang::TIntermBranch*, glslang::TIntermBranch*,
   std::allocator<glslang::TIntermBranch*>, std::__detail::_Identity,
   std::equal_to<glslang::TIntermBranch*>, std::hash<glslang::TIntermBranch*>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, true, true>
   >::~_Hashtable() */void std::_Hashtable<glslang::TIntermBranch*,glslang::TIntermBranch*,std::allocator<glslang::TIntermBranch*>,std::__detail::_Identity,std::equal_to<glslang::TIntermBranch*>,std::hash<glslang::TIntermBranch*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::~_Hashtable(_Hashtable<glslang::TIntermBranch*,glslang::TIntermBranch*,std::allocator<glslang::TIntermBranch*>,std::__detail::_Identity,std::equal_to<glslang::TIntermBranch*>,std::hash<glslang::TIntermBranch*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>> *this) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   puVar2 = *(undefined8**)( this + 0x10 );
   while (puVar2 != (undefined8*)0x0) {
      puVar1 = (undefined8*)*puVar2;
      operator_delete(puVar2, 0x10);
      puVar2 = puVar1;
   }
;
   memset(*(void**)this, 0, *(long*)( this + 8 ) * 8);
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x10 ) = 0;
   if (*(_Hashtable<glslang::TIntermBranch*,glslang::TIntermBranch*,std::allocator<glslang::TIntermBranch*>,std::__detail::_Identity,std::equal_to<glslang::TIntermBranch*>,std::hash<glslang::TIntermBranch*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>**)this != this + 0x30) {
      operator_delete(*(_Hashtable<glslang::TIntermBranch*,glslang::TIntermBranch*,std::allocator<glslang::TIntermBranch*>,std::__detail::_Identity,std::equal_to<glslang::TIntermBranch*>,std::hash<glslang::TIntermBranch*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>**)this, *(long*)( this + 8 ) << 3);
      return;
   }

   return;
}
/* std::__detail::_Map_base<glslang::TIntermTyped*, std::pair<glslang::TIntermTyped* const,
   std::__cxx11::string >, std::allocator<std::pair<glslang::TIntermTyped* const,
   std::__cxx11::string > >, std::__detail::_Select1st, std::equal_to<glslang::TIntermTyped*>,
   std::hash<glslang::TIntermTyped*>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true>, true>::operator[](glslang::TIntermTyped*&&)
    */long *__thiscallstd::__detail::_Map_base<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](_Map_base<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this, TIntermTyped **param_1) {
   TIntermTyped *pTVar1;
   TIntermTyped *pTVar2;
   ulong uVar3;
   long lVar4;
   char cVar5;
   long *plVar6;
   _Map_base<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *__s;
   ulong uVar7;
   ulong extraout_RDX;
   long *plVar8;
   long *plVar9;
   ulong uVar10;
   _Map_base<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *p_Var11;
   pTVar1 = *param_1;
   uVar7 = (ulong)pTVar1 % *(ulong*)( this + 8 );
   plVar6 = *(long**)( *(long*)this + uVar7 * 8 );
   if (plVar6 != (long*)0x0) {
      pTVar2 = (TIntermTyped*)( (long*)*plVar6 )[1];
      plVar8 = (long*)*plVar6;
      while (pTVar1 != pTVar2) {
         plVar9 = (long*)*plVar8;
         if (( plVar9 == (long*)0x0 ) || ( pTVar2 = (TIntermTyped*)plVar9[1] ),plVar6 = plVar8,plVar8 = plVar9,uVar7 != (ulong)pTVar2 % *(ulong*)( this + 8 )) goto LAB_00104290;
      }
;
      if (*plVar6 != 0) {
         return (long*)( *plVar6 + 0x10 );
      }

   }

   LAB_00104290:plVar6 = (long*)operator_new(0x30);
   uVar10 = *(ulong*)( this + 0x18 );
   uVar3 = *(ulong*)( this + 8 );
   *plVar6 = 0;
   pTVar2 = *param_1;
   plVar6[3] = 0;
   plVar6[1] = (long)pTVar2;
   plVar6[2] = (long)( plVar6 + 4 );
   *(undefined1*)( plVar6 + 4 ) = 0;
   cVar5 = std::__detail::_Prime_rehash_policy::_M_need_rehash(( ulong )(this + 0x20), uVar3, uVar10);
   if (cVar5 == '\0') {
      __s = *(_Map_base<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)this;
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

         __s = (_Map_base<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)operator_new(extraout_RDX * 8);
         memset(__s, 0, extraout_RDX * 8);
      }

      plVar8 = *(long**)( this + 0x10 );
      *(undefined8*)( this + 0x10 ) = 0;
      uVar7 = 0;
      while (uVar10 = uVar7,plVar9 = plVar8,plVar8 != (long*)0x0) {
         while (true) {
            plVar8 = (long*)*plVar9;
            uVar7 = (ulong)plVar9[1] % extraout_RDX;
            p_Var11 = __s + uVar7 * 8;
            if (*(long**)p_Var11 == (long*)0x0) break;
            *plVar9 = **(long**)p_Var11;
            **(undefined8**)p_Var11 = plVar9;
            plVar9 = plVar8;
            if (plVar8 == (long*)0x0) goto LAB_00104397;
         }
;
         *plVar9 = *(long*)( this + 0x10 );
         *(long**)( this + 0x10 ) = plVar9;
         *(_Map_base<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)p_Var11 = this + 0x10;
         if (*plVar9 != 0) {
            *(long**)( __s + uVar10 * 8 ) = plVar9;
         }

      }
;
      LAB_00104397:if (*(_Map_base<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)this != this + 0x30) {
         operator_delete(*(_Map_base<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)this, *(long*)( this + 8 ) << 3);
      }

      *(ulong*)( this + 8 ) = extraout_RDX;
      *(_Map_base<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)this = __s;
      p_Var11 = __s + ( (ulong)pTVar1 % extraout_RDX ) * 8;
      plVar8 = *(long**)p_Var11;
   }

   if (plVar8 == (long*)0x0) {
      lVar4 = *(long*)( this + 0x10 );
      *(long**)( this + 0x10 ) = plVar6;
      *plVar6 = lVar4;
      if (lVar4 != 0) {
         *(long**)( __s + ( *(ulong*)( lVar4 + 8 ) % *(ulong*)( this + 8 ) ) * 8 ) = plVar6;
      }

      *(_Map_base<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>**)p_Var11 = this + 0x10;
   }
 else {
      *plVar6 = *plVar8;
      **(undefined8**)p_Var11 = plVar6;
   }

   *(long*)( this + 0x18 ) = *(long*)( this + 0x18 ) + 1;
   return plVar6 + 2;
}
/* std::_Hashtable<std::__cxx11::string, std::__cxx11::string, std::allocator<std::__cxx11::string
   >, std::__detail::_Identity, std::equal_to<std::__cxx11::string >, std::hash<std::__cxx11::string
   >, std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<true, true, true>
   >::_M_find_before_node(unsigned long, std::__cxx11::string const&, unsigned long) const */long *__thiscallstd::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_find_before_node(_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>> *this, ulong param_1, string *param_2, ulong param_3) {
   long *plVar1;
   size_t __n;
   int iVar2;
   ulong uVar3;
   long *plVar4;
   long *plVar5;
   plVar5 = *(long**)( *(long*)this + param_1 * 8 );
   if (plVar5 != (long*)0x0) {
      uVar3 = ( (long*)*plVar5 )[5];
      plVar1 = (long*)*plVar5;
      do {
         plVar4 = plVar1;
         if (( uVar3 == param_3 ) && ( __n = *(size_t*)( param_2 + 8 ) ),__n == plVar4[2]) {
            if (__n == 0) {
               return plVar5;
            }

            iVar2 = memcmp(*(void**)param_2, (void*)plVar4[1], __n);
            if (iVar2 == 0) {
               return plVar5;
            }

         }

         plVar1 = (long*)*plVar4;
      }
 while ( ( plVar1 != (long*)0x0 ) && ( uVar3 = plVar1[5] ),plVar5 = plVar4,param_1 == uVar3 % *(ulong*)( this + 8 ) );
      plVar5 = (long*)0x0;
   }

   return plVar5;
}
/* std::_Hashtable<std::__cxx11::string, std::__cxx11::string, std::allocator<std::__cxx11::string
   >, std::__detail::_Identity, std::equal_to<std::__cxx11::string >, std::hash<std::__cxx11::string
   >, std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<true, true, true>
   >::find(std::__cxx11::string const&) const */long *__thiscallstd::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::find(_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>> *this, string *param_1) {
   size_t __n;
   void *__s1;
   int iVar1;
   ulong uVar2;
   long *plVar3;
   if (*(ulong*)( this + 0x18 ) < 0x15) {
      plVar3 = *(long**)( this + 0x10 );
      if (plVar3 != (long*)0x0) {
         __n = *(size_t*)( param_1 + 8 );
         do {
            while (__n == plVar3[2]) {
               if (__n == 0) {
                  return plVar3;
               }

               __s1 = *(void**)param_1;
               do {
                  iVar1 = memcmp(__s1, (void*)plVar3[1], __n);
                  if (iVar1 == 0) {
                     return plVar3;
                  }

                  plVar3 = (long*)*plVar3;
                  if (plVar3 == (long*)0x0) {
                     return (long*)0x0;
                  }

               }
 while ( plVar3[2] == __n );
               plVar3 = (long*)*plVar3;
               if (plVar3 == (long*)0x0) {
                  return (long*)0x0;
               }

            }
;
            plVar3 = (long*)*plVar3;
         }
 while ( plVar3 != (long*)0x0 );
      }

   }
 else {
      uVar2 = std::_Hash_bytes(*(void**)param_1, *(ulong*)( param_1 + 8 ), 0xc70f6907);
      plVar3 = (long*)_M_find_before_node(this, uVar2 % *(ulong*)( this + 8 ), param_1, uVar2);
      if (plVar3 != (long*)0x0) {
         return (long*)*plVar3;
      }

   }

   return plVar3;
}
/* std::_Hashtable<std::__cxx11::string, std::pair<std::__cxx11::string const,
   glslang::TIntermOperator*>, std::allocator<std::pair<std::__cxx11::string const,
   glslang::TIntermOperator*> >, std::__detail::_Select1st, std::equal_to<std::__cxx11::string >,
   std::hash<std::__cxx11::string >, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<true, false, false>
   >::_M_compute_hash_code(std::__detail::_Node_const_iterator<std::pair<std::__cxx11::string const,
   glslang::TIntermOperator*>, false, true>, std::__cxx11::string const&) const */undefined1[16];std::_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>::_M_compute_hash_code (_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>
           *this,long *param_2,undefined8 *param_3) {
   ulong __n;
   void *__s1;
   int iVar1;
   undefined8 uVar2;
   long *plVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   __n = param_3[1];
   __s1 = (void*)*param_3;
   if (*(ulong*)( this + 0x18 ) < 0x15) {
      plVar3 = param_2;
      if (param_2 != (long*)0x0) {
         do {
            while (plVar3[2] == __n) {
               if (__n == 0) {
                  LAB_001046b0:auVar5._8_8_ = plVar3[6];
                  auVar5._0_8_ = plVar3;
                  return auVar5;
               }

               do {
                  iVar1 = memcmp(__s1, (void*)plVar3[1], __n);
                  if (iVar1 == 0) goto LAB_001046b0;
                  plVar3 = (long*)*plVar3;
                  if (plVar3 == (long*)0x0) goto LAB_00104638;
               }
 while ( plVar3[2] == __n );
               plVar3 = (long*)*plVar3;
               if (plVar3 == (long*)0x0) goto LAB_00104638;
            }
;
            plVar3 = (long*)*plVar3;
         }
 while ( plVar3 != (long*)0x0 );
      }

      LAB_00104638:for (plVar3 = *(long**)( this + 0x10 ); param_2 != plVar3; plVar3 = (long*)*plVar3) {
         while (plVar3[2] == __n) {
            if (__n == 0) goto LAB_001046b0;
            do {
               iVar1 = memcmp(__s1, (void*)plVar3[1], __n);
               if (iVar1 == 0) goto LAB_001046b0;
               plVar3 = (long*)*plVar3;
               if (param_2 == plVar3) goto LAB_00104684;
            }
 while ( plVar3[2] == __n );
            plVar3 = (long*)*plVar3;
            if (param_2 == plVar3) goto LAB_00104684;
         }
;
      }

   }

   LAB_00104684:uVar2 = std::_Hash_bytes(__s1, __n, 0xc70f6907);
   auVar4._8_8_ = uVar2;
   auVar4._0_8_ = param_2;
   return auVar4;
}
/* std::_Hashtable<std::__cxx11::string, std::pair<std::__cxx11::string const,
   glslang::TIntermOperator*>, std::allocator<std::pair<std::__cxx11::string const,
   glslang::TIntermOperator*> >, std::__detail::_Select1st, std::equal_to<std::__cxx11::string >,
   std::hash<std::__cxx11::string >, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<true, false, false> >::_M_find_before_node(unsigned long,
   std::__cxx11::string const&, unsigned long) const */long *__thiscallstd::_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>::_M_find_before_node(_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>> *this, ulong param_1, string *param_2, ulong param_3) {
   long *plVar1;
   size_t __n;
   int iVar2;
   ulong uVar3;
   long *plVar4;
   long *plVar5;
   plVar5 = *(long**)( *(long*)this + param_1 * 8 );
   if (plVar5 != (long*)0x0) {
      uVar3 = ( (long*)*plVar5 )[6];
      plVar1 = (long*)*plVar5;
      do {
         plVar4 = plVar1;
         if (( uVar3 == param_3 ) && ( __n = *(size_t*)( param_2 + 8 ) ),__n == plVar4[2]) {
            if (__n == 0) {
               return plVar5;
            }

            iVar2 = memcmp(*(void**)param_2, (void*)plVar4[1], __n);
            if (iVar2 == 0) {
               return plVar5;
            }

         }

         plVar1 = (long*)*plVar4;
      }
 while ( ( plVar1 != (long*)0x0 ) && ( uVar3 = plVar1[6] ),plVar5 = plVar4,param_1 == uVar3 % *(ulong*)( this + 8 ) );
      plVar5 = (long*)0x0;
   }

   return plVar5;
}
/* std::_Hashtable<std::__cxx11::string, std::pair<std::__cxx11::string const,
   glslang::TIntermOperator*>, std::allocator<std::pair<std::__cxx11::string const,
   glslang::TIntermOperator*> >, std::__detail::_Select1st, std::equal_to<std::__cxx11::string >,
   std::hash<std::__cxx11::string >, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<true, false, false>
   >::_M_insert_multi_node(std::__detail::_Hash_node<std::pair<std::__cxx11::string const,
   glslang::TIntermOperator*>, true>*, unsigned long,
   std::__detail::_Hash_node<std::pair<std::__cxx11::string const, glslang::TIntermOperator*>,
   true>*) */_Hash_node * __thiscallstd::_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>::_M_insert_multi_node(_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>> * this, _Hash_node * param_1, ulong, param_2, _Hash_node * param_3) < std::__cxx11::string < std::__cxx11::string_const * std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>> < std::__cxx11::string > std::hash<std::__cxx11::string> < true * p_Var1 ;long *plVar2long lVar3size_t sVar4bool bVar5bool bVar6char cVar7int iVar8undefined8 *puVar9_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>> *__s_Hash_node *p_Var10ulong extraout_RDXulong uVar11ulong uVar12ulong uVar13long *plVar14long *plVar15string *unaff_R14bool bVar16bool bVar17ulong local_58ulong local_50cVar7 = std::__detail::_Prime_rehash_policy::_M_need_rehash(( ulong )(this + 0x20), *(ulong*)( this + 8 ), *(ulong*)( this + 0x18 ));if (cVar7 == '\0') {
   local_58 = *(ulong*)( this + 8 );
   LAB_001047a3:*(ulong*)( param_3 + 0x30 ) = param_2;
   unaff_R14 = (string*)( param_3 + 8 );
   uVar11 = param_2 % local_58;
   if (param_1 != (_Hash_node*)0x0) {
      p_Var10 = param_1;
      if (param_2 == *(ulong*)( param_1 + 0x30 )) goto LAB_00104a73;
      goto LAB_0010498f;
   }

   puVar9 = (undefined8*)_M_find_before_node(this, uVar11, unaff_R14, param_2);
   if (puVar9 != (undefined8*)0x0) {
      *(undefined8*)param_3 = *puVar9;
      *puVar9 = param_3;
      goto LAB_001047ea;
   }

   LAB_001049a8:lVar3 = *(long*)this;
   plVar2 = (long*)( lVar3 + uVar11 * 8 );
   if ((undefined8*)*plVar2 == (undefined8*)0x0) {
      *(undefined8*)param_3 = *(undefined8*)( this + 0x10 );
      *(_Hash_node**)( this + 0x10 ) = param_3;
      if (*(long*)param_3 != 0) {
         *(_Hash_node**)( lVar3 + ( *(ulong*)( *(long*)param_3 + 0x30 ) % local_58 ) * 8 ) = param_3;
      }

      *plVar2 = (long)( this + 0x10 );
   }
 else {
      *(undefined8*)param_3 = *(undefined8*)*plVar2;
      *(_Hash_node**)*plVar2 = param_3;
   }

}
 else {
   local_58 = extraout_RDX;
   if (extraout_RDX == 1) {
      __s = this + 0x30;
      *(undefined8*)( this + 0x30 ) = 0;
      LAB_0010484b:plVar2 = *(long**)( this + 0x10 );
      *(undefined8*)( this + 0x10 ) = 0;
      if (plVar2 != (long*)0x0) {
         bVar6 = false;
         local_50 = 0;
         plVar15 = (long*)0x0;
         uVar11 = 0;
         do {
            plVar14 = plVar2;
            plVar2 = (long*)*plVar14;
            uVar13 = (ulong)plVar14[6] % extraout_RDX;
            bVar16 = plVar15 != (long*)0x0;
            bVar17 = uVar13 == uVar11;
            bVar5 = bVar16 && bVar17;
            if (bVar5) {
               *plVar14 = *plVar15;
               *plVar15 = (long)plVar14;
               bVar6 = bVar5;
            }
 else {
               if (( ( bVar6 ) && ( *plVar15 != 0 ) ) && ( uVar12 = uVar12 != uVar11 )) {
                  *(long**)( __s + uVar12 * 8 ) = plVar15;
               }

               p_Var1 = __s + uVar13 * 8;
               if (*(long**)p_Var1 == (long*)0x0) {
                  *plVar14 = *(long*)( this + 0x10 );
                  *(long**)( this + 0x10 ) = plVar14;
                  *(_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>**)p_Var1 = this + 0x10;
                  if (*plVar14 != 0) {
                     *(long**)( __s + local_50 * 8 ) = plVar14;
                  }

                  local_50 = uVar13;
                  bVar6 = false;
               }
 else {
                  *plVar14 = **(long**)p_Var1;
                  **(undefined8**)p_Var1 = plVar14;
                  bVar6 = false;
               }

            }

            plVar15 = plVar14;
            uVar11 = uVar13;
         }
 while ( plVar2 != (long*)0x0 );
         if (( ( bVar16 && bVar17 ) && ( *plVar14 != 0 ) ) && ( uVar11 = uVar13 != uVar11 )) {
            *(long**)( __s + uVar11 * 8 ) = plVar14;
         }

      }

      if (*(_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>**)this != this + 0x30) {
         operator_delete(*(_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>**)this, *(long*)( this + 8 ) << 3);
      }

      *(ulong*)( this + 8 ) = extraout_RDX;
      *(_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>**)this = __s;
      goto LAB_001047a3;
   }

   if (extraout_RDX >> 0x3c == 0) {
      __s = (_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>*)operator_new(extraout_RDX * 8);
      memset(__s, 0, extraout_RDX * 8);
      goto LAB_0010484b;
   }

   uVar11 = extraout_RDX >> 0x3d;
   if (uVar11 == 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_bad_alloc();
   }

   p_Var10 = (_Hash_node*)std::__throw_bad_array_new_length();
   LAB_00104a73:sVar4 = *(size_t*)( param_3 + 0x10 );
   if (sVar4 == *(size_t*)( p_Var10 + 0x10 )) {
      if (( sVar4 != 0 ) && ( iVar8 = memcmp(*(void**)( param_3 + 8 ), *(void**)( p_Var10 + 8 ), sVar4) ),iVar8 != 0) goto LAB_0010498f;
      *(undefined8*)param_3 = *(undefined8*)param_1;
      *(_Hash_node**)param_1 = param_3;
   }
 else {
      LAB_0010498f:p_Var10 = (_Hash_node*)_M_find_before_node(this, uVar11, unaff_R14, param_2);
      if (p_Var10 == (_Hash_node*)0x0) goto LAB_001049a8;
      *(undefined8*)param_3 = *(undefined8*)p_Var10;
      *(_Hash_node**)p_Var10 = param_3;
      if (param_1 != p_Var10) goto LAB_001047ea;
   }

   lVar3 = *(long*)param_3;
   if (lVar3 != 0) {
      uVar13 = *(ulong*)( lVar3 + 0x30 );
      if (( param_2 == uVar13 ) && ( sVar4 = *(size_t*)( param_3 + 0x10 ) ),sVar4 == *(size_t*)( lVar3 + 0x10 )) {
         if (( sVar4 == 0 ) || ( iVar8 = iVar8 == 0 )) goto LAB_001047ea;
      }

      uVar13 = uVar13 % local_58;
      if (uVar11 != uVar13) {
         *(_Hash_node**)( *(long*)this + uVar13 * 8 ) = param_3;
      }

   }

}
LAB_001047ea:*(long*)( this + 0x18 ) = *(long*)( this + 0x18 ) + 1;return param_3;}/* WARNING: Control flow encountered bad instruction data *//* std::_Hashtable<glslang::TIntermBranch*, glslang::TIntermBranch*,
   std::allocator<glslang::TIntermBranch*>, std::__detail::_Identity,
   std::equal_to<glslang::TIntermBranch*>, std::hash<glslang::TIntermBranch*>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, true, true>
   >::~_Hashtable() */void std::_Hashtable<glslang::TIntermBranch*,glslang::TIntermBranch*,std::allocator<glslang::TIntermBranch*>,std::__detail::_Identity,std::equal_to<glslang::TIntermBranch*>,std::hash<glslang::TIntermBranch*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::~_Hashtable(_Hashtable<glslang::TIntermBranch*,glslang::TIntermBranch*,std::allocator<glslang::TIntermBranch*>,std::__detail::_Identity,std::equal_to<glslang::TIntermBranch*>,std::hash<glslang::TIntermBranch*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* std::_Hashtable<std::__cxx11::string, std::__cxx11::string, std::allocator<std::__cxx11::string
   >, std::__detail::_Identity, std::equal_to<std::__cxx11::string >, std::hash<std::__cxx11::string
   >, std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<true, true, true>
   >::~_Hashtable() */void std::_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::~_Hashtable(_Hashtable<std::__cxx11::string,std::__cxx11::string,std::allocator<std::__cxx11::string>,std::__detail::_Identity,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* std::_Hashtable<glslang::TIntermTyped*, std::pair<glslang::TIntermTyped* const,
   std::__cxx11::string >, std::allocator<std::pair<glslang::TIntermTyped* const,
   std::__cxx11::string > >, std::__detail::_Select1st, std::equal_to<glslang::TIntermTyped*>,
   std::hash<glslang::TIntermTyped*>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true> >::~_Hashtable() */void std::_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::~_Hashtable(_Hashtable<glslang::TIntermTyped*,std::pair<glslang::TIntermTyped*const,std::__cxx11::string>,std::allocator<std::pair<glslang::TIntermTyped*const,std::__cxx11::string>>,std::__detail::_Select1st,std::equal_to<glslang::TIntermTyped*>,std::hash<glslang::TIntermTyped*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* std::_Hashtable<std::__cxx11::string, std::pair<std::__cxx11::string const,
   glslang::TIntermOperator*>, std::allocator<std::pair<std::__cxx11::string const,
   glslang::TIntermOperator*> >, std::__detail::_Select1st, std::equal_to<std::__cxx11::string >,
   std::hash<std::__cxx11::string >, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<true, false, false> >::~_Hashtable() */void std::_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>>::~_Hashtable(_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>,std::allocator<std::pair<std::__cxx11::string_const,glslang::TIntermOperator*>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,false>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* glslang::TIntermTraverser::~TIntermTraverser() */void glslang::TIntermTraverser::~TIntermTraverser(TIntermTraverser *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

