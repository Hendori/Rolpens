/* ~TMergeBlockTraverser() */void TMergeBlockTraverser::~TMergeBlockTraverser(TMergeBlockTraverser *this) {
   return;
}
/* ~TFinalLinkTraverser() */void TFinalLinkTraverser::~TFinalLinkTraverser(TFinalLinkTraverser *this) {
   return;
}
/* std::_Rb_tree<unsigned int, std::pair<unsigned int const, unsigned int>,
   std::_Select1st<std::pair<unsigned int const, unsigned int> >, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, unsigned int> > >::_M_get_insert_unique_pos(unsigned
   int const&) [clone .isra.0] */undefined1[16];std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::_M_get_insert_unique_pos(_Rb_tree<unsigned_int,std::pair < unsigned_int_const,unsigned_int>, std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>, std::less<unsigned_int>, std::allocator<std::pair<unsigned_int_const,unsigned_int>> > *this, uint * param_1);{
   undefined1 auVar1[16];
   _Rb_tree_node_base *p_Var2;
   _Rb_tree_node_base *p_Var3;
   _Rb_tree_node_base *p_Var4;
   uint uVar5;
   uint uVar6;
   undefined1 auVar7[16];
   uVar6 = (uint)param_1;
   p_Var2 = *(_Rb_tree_node_base**)( this + 0x10 );
   if (*(_Rb_tree_node_base**)( this + 0x10 ) == (_Rb_tree_node_base*)0x0) {
      p_Var2 = (_Rb_tree_node_base*)( this + 8 );
   }
 else {
      do {
         p_Var4 = p_Var2;
         uVar5 = *(uint*)( p_Var4 + 0x20 );
         p_Var2 = *(_Rb_tree_node_base**)( p_Var4 + 0x18 );
         if (uVar6 < uVar5) {
            p_Var2 = *(_Rb_tree_node_base**)( p_Var4 + 0x10 );
         }

      }
 while ( p_Var2 != (_Rb_tree_node_base*)0x0 );
      p_Var2 = p_Var4;
      if (uVar6 >= uVar5) goto LAB_00100058;
   }

   if (*(_Rb_tree_node_base**)( this + 0x18 ) == p_Var2) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = p_Var2;
      return auVar1 << 0x40;
   }

   p_Var4 = (_Rb_tree_node_base*)std::_Rb_tree_decrement(p_Var2);
   uVar5 = *(uint*)( p_Var4 + 0x20 );
   LAB_00100058:p_Var3 = (_Rb_tree_node_base*)0x0;
   if (uVar5 < uVar6) {
      p_Var4 = p_Var3;
      p_Var3 = p_Var2;
   }

   auVar7._8_8_ = p_Var3;
   auVar7._0_8_ = p_Var4;
   return auVar7;
}
/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_M_get_insert_unique_pos(int
   const&) [clone .isra.0] */undefined1[16];std::_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>::_M_get_insert_unique_pos(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator < std::pair < int_const,int> >> *this, int, *param_1);{
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
      if (iVar5 <= iVar6) goto LAB_001000e8;
   }

   if (*(_Rb_tree_node_base**)( this + 0x18 ) == p_Var2) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = p_Var2;
      return auVar1 << 0x40;
   }

   p_Var4 = (_Rb_tree_node_base*)std::_Rb_tree_decrement(p_Var2);
   iVar5 = *(int*)( p_Var4 + 0x20 );
   LAB_001000e8:p_Var3 = (_Rb_tree_node_base*)0x0;
   if (iVar5 < iVar6) {
      p_Var4 = p_Var3;
      p_Var3 = p_Var2;
   }

   auVar7._8_8_ = p_Var3;
   auVar7._0_8_ = p_Var4;
   return auVar7;
}
/* std::_Rb_tree_iterator<std::pair<unsigned int const, unsigned int> > std::_Rb_tree<unsigned int,
   std::pair<unsigned int const, unsigned int>, std::_Select1st<std::pair<unsigned int const,
   unsigned int> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned
   int> > >::_M_emplace_hint_unique<std::piecewise_construct_t const&, std::tuple<unsigned int
   const&>, std::tuple<> >(std::_Rb_tree_const_iterator<std::pair<unsigned int const, unsigned int>
   >, std::piecewise_construct_t const&, std::tuple<unsigned int const&>&&, std::tuple<>&&) [clone
   .isra.0] */_Rb_tree_node_base * std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<unsigned_int_const&>,std::tuple<>>(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>> * param_1, _Rb_tree_node_base * param_2, undefined8 * param_3) * p_Var1 ;uint *puVar3_Rb_tree_node_base*p_Var4_Rb_tree_node_base*p_Var5boolbVar6undefined1 auVar7[16] = (_Rb_tree_node_base*)( param_1 + 8 );p_Var4 = (_Rb_tree_node_base*)operator_new(0x28);puVar3 = (uint*)*param_3;*(undefined4*)( p_Var4 + 0x24 ) = 0;uVar2 = *puVar3;*(uint*)( p_Var4 + 0x20 ) = uVar2;if (p_Var1 == param_2) {
   if (( *(long*)( param_1 + 0x28 ) == 0 ) || ( p_Var5 = *(_Rb_tree_node_base**)( param_1 + 0x20 ) ),uVar2 <= *(uint*)( p_Var5 + 0x20 )) {
      LAB_00100228:auVar7 = _M_get_insert_unique_pos(param_1, (uint*)(ulong)uVar2);
      param_2 = auVar7._0_8_;
      bVar6 = param_2 != (_Rb_tree_node_base*)0x0;
      p_Var5 = auVar7._8_8_;
      if (auVar7._8_8_ == (_Rb_tree_node_base*)0x0) {
         LAB_00100241:operator_delete(p_Var4, 0x28);
         return param_2;
      }

   }
 else {
      LAB_0010026b:bVar6 = false;
   }

   joined_r0x001001f7:param_2 = p_Var5;
   p_Var5 = param_2;
   if (( p_Var1 == param_2 ) || ( bVar6 )) {
      LAB_001001fd:param_2 = p_Var5;
      bVar6 = true;
      goto LAB_00100202;
   }

}
 else {
   if (uVar2 < *(uint*)( param_2 + 0x20 )) {
      p_Var5 = *(_Rb_tree_node_base**)( param_1 + 0x18 );
      if (*(_Rb_tree_node_base**)( param_1 + 0x18 ) != param_2) {
         p_Var5 = (_Rb_tree_node_base*)std::_Rb_tree_decrement(param_2);
         if (uVar2 <= *(uint*)( p_Var5 + 0x20 )) goto LAB_00100228;
         if (*(long*)( p_Var5 + 0x18 ) != 0) {
            bVar6 = true;
            goto LAB_00100202;
         }

         goto LAB_0010026b;
      }

      goto LAB_001001fd;
   }

   if (uVar2 <= *(uint*)( param_2 + 0x20 )) goto LAB_00100241;
   if (*(_Rb_tree_node_base**)( param_1 + 0x20 ) != param_2) {
      p_Var5 = (_Rb_tree_node_base*)std::_Rb_tree_increment(param_2);
      if (*(uint*)( p_Var5 + 0x20 ) <= uVar2) goto LAB_00100228;
      bVar6 = true;
      if (*(long*)( param_2 + 0x18 ) != 0) goto joined_r0x001001f7;
   }

}
bVar6 = uVar2 < *(uint*)( param_2 + 0x20 );LAB_00100202:std::_Rb_tree_insert_and_rebalance(bVar6, p_Var4, param_2, p_Var1);*(long*)( param_1 + 0x28 ) = *(long*)( param_1 + 0x28 ) + 1;return p_Var4;}/* std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc>
   >::TEMPNAMEPLACEHOLDERVALUE(std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > const&) [clone .isra.0] */void std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>::operator =(vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>> *this, vector *param_1) {
   undefined8 *puVar1;
   undefined8 uVar2;
   long lVar3;
   long lVar4;
   size_t __n;
   ulong uVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   ulong __n_00;
   long lVar8;
   undefined8 *puVar9;
   if (param_1 == (vector*)this) {
      return;
   }

   puVar9 = *(undefined8**)( param_1 + 0x10 );
   puVar6 = *(undefined8**)( param_1 + 8 );
   puVar7 = *(undefined8**)( this + 8 );
   __n_00 = (long)puVar9 - (long)puVar6;
   if (( ulong )(*(long*)( this + 0x18 ) - (long)puVar7) < __n_00) {
      lVar3 = glslang::TPoolAllocator::allocate(*(ulong*)this);
      uVar5 = 0;
      if (puVar9 != puVar6) {
         do {
            uVar2 = ( (undefined8*)( (long)puVar6 + uVar5 ) )[1];
            *(undefined8*)( lVar3 + uVar5 ) = *(undefined8*)( (long)puVar6 + uVar5 );
            ( (undefined8*)( lVar3 + uVar5 ) )[1] = uVar2;
            puVar7 = (undefined8*)( (long)puVar6 + uVar5 + 0x10 );
            uVar2 = puVar7[1];
            puVar9 = (undefined8*)( lVar3 + 0x10 + uVar5 );
            *puVar9 = *puVar7;
            puVar9[1] = uVar2;
            uVar5 = uVar5 + 0x20;
         }
 while ( uVar5 != __n_00 );
      }

      *(long*)( this + 8 ) = lVar3;
      *(ulong*)( this + 0x18 ) = __n_00 + lVar3;
      *(ulong*)( this + 0x10 ) = __n_00 + lVar3;
      return;
   }

   lVar3 = *(long*)( this + 0x10 );
   __n = lVar3 - (long)puVar7;
   if (__n < __n_00) {
      if ((long)__n < 0x21) {
         if (__n == 0x20) {
            uVar2 = puVar6[1];
            *puVar7 = *puVar6;
            puVar7[1] = uVar2;
            uVar2 = puVar6[3];
            puVar7[2] = puVar6[2];
            puVar7[3] = uVar2;
         }

      }
 else {
         memmove(puVar7, puVar6, __n);
         lVar3 = *(long*)( this + 0x10 );
         puVar7 = *(undefined8**)( this + 8 );
         puVar9 = *(undefined8**)( param_1 + 0x10 );
         puVar6 = *(undefined8**)( param_1 + 8 );
         __n = lVar3 - (long)puVar7;
      }

      puVar6 = (undefined8*)( (long)puVar6 + __n );
      lVar8 = __n_00 + (long)puVar7;
      if (puVar6 != puVar9) {
         lVar4 = 0;
         do {
            uVar2 = ( (undefined8*)( (long)puVar6 + lVar4 ) )[1];
            *(undefined8*)( lVar3 + lVar4 ) = *(undefined8*)( (long)puVar6 + lVar4 );
            ( (undefined8*)( lVar3 + lVar4 ) )[1] = uVar2;
            puVar7 = (undefined8*)( (long)puVar6 + lVar4 + 0x10 );
            uVar2 = puVar7[1];
            puVar1 = (undefined8*)( lVar3 + 0x10 + lVar4 );
            *puVar1 = *puVar7;
            puVar1[1] = uVar2;
            lVar4 = lVar4 + 0x20;
         }
 while ( lVar4 != (long)puVar9 - (long)puVar6 );
         *(long*)( this + 0x10 ) = lVar8;
         return;
      }

   }
 else if ((long)__n_00 < 0x21) {
      if (__n_00 == 0x20) {
         uVar2 = puVar6[1];
         *puVar7 = *puVar6;
         puVar7[1] = uVar2;
         uVar2 = puVar6[3];
         puVar7[2] = puVar6[2];
         puVar7[3] = uVar2;
      }

      lVar8 = __n_00 + (long)puVar7;
   }
 else {
      memmove(puVar7, puVar6, __n_00);
      lVar8 = __n_00 + *(long*)( this + 8 );
   }

   *(long*)( this + 0x10 ) = lVar8;
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
         goto LAB_00100444;
      }

      if (__n == 0) goto LAB_00100444;
   }
 else {
      __dest = (undefined1*)std::__cxx11::string::_M_create(param_1, ( ulong ) & local_28);
      *param_1 = (ulong)__dest;
      param_1[2] = local_28;
   }

   memcpy(__dest, param_2, __n);
   __dest = (undefined1*)*param_1;
   LAB_00100444:param_1[1] = local_28;
   __dest[local_28] = 0;
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* glslang::getNameForIdMap(glslang::TIntermSymbol*) */TIntermSymbol *glslang::getNameForIdMap(TIntermSymbol *param_1) {
   byte bVar1;
   code *UNRECOVERED_JUMPTABLE;
   long lVar2;
   TIntermSymbol *pTVar3;
   lVar2 = *(long*)param_1;
   if (*(code**)( lVar2 + 0xf0 ) == TIntermTyped::getType) {
      pTVar3 = param_1 + 0x20;
   }
 else {
      pTVar3 = (TIntermSymbol*)( **(code**)( lVar2 + 0xf0 ) )();
      lVar2 = *(long*)param_1;
   }

   if (( ( pTVar3[8] == (TIntermSymbol)0x10 ) && ( bVar1 = ( (byte)pTVar3[0x18] & 0x7f ) - 3 ),bVar1 < 4 )) {
      if (*(code**)( lVar2 + 0xf0 ) == TIntermTyped::getType) {
         pTVar3 = param_1 + 0x20;
      }
 else {
         pTVar3 = (TIntermSymbol*)( **(code**)( lVar2 + 0xf0 ) )();
      }

      UNRECOVERED_JUMPTABLE = *(code**)( *(long*)pTVar3 + 0x28 );
      if (UNRECOVERED_JUMPTABLE == TType::getTypeName_abi_cxx11_) {
         return *(TIntermSymbol**)( pTVar3 + 0x78 );
      }

   }
 else {
      UNRECOVERED_JUMPTABLE = *(code**)( lVar2 + 400 );
      if (UNRECOVERED_JUMPTABLE == TIntermSymbol::getName_abi_cxx11_) {
         return param_1 + 200;
      }

   }

   /* WARNING: Could not recover jumptable at 0x00100555. Too many branches */
   /* WARNING: Treating indirect jump as call */
   pTVar3 = (TIntermSymbol*)( *UNRECOVERED_JUMPTABLE )();
   return pTVar3;
}
/* glslang::isSameInterface(glslang::TIntermSymbol*, EShLanguage, glslang::TIntermSymbol*,
   EShLanguage) */bool glslang::isSameInterface(long *param_1, int param_2, long *param_3, int param_4) {
   byte bVar1;
   long lVar2;
   long *plVar3;
   int iVar4;
   int iVar5;
   lVar2 = *param_1;
   if (param_2 == param_4) {
      if (*(code**)( lVar2 + 0xf0 ) == TIntermTyped::getType) {
         plVar3 = param_1 + 4;
      }
 else {
         plVar3 = (long*)( **(code**)( lVar2 + 0xf0 ) )();
      }

      iVar5 = 3;
      if (( (char)plVar3[1] == '\x10' ) && ( bVar1 = bVar1 < 4 )) {
         iVar5 = *(int*)( CSWTCH_1270 + (ulong)bVar1 * 4 );
      }

      if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
         plVar3 = param_3 + 4;
      }
 else {
         plVar3 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
      }

      iVar4 = 3;
      if (( (char)plVar3[1] == '\x10' ) && ( bVar1 = bVar1 < 4 )) {
         iVar4 = *(int*)( CSWTCH_1270 + (ulong)bVar1 * 4 );
      }

      if (iVar4 == iVar5) {
         return true;
      }

      lVar2 = *param_1;
   }

   if (*(code**)( lVar2 + 0x108 ) == TIntermTyped::getQualifier) {
      bVar1 = *(byte*)( param_1 + 7 ) & 0x7f;
      if (bVar1 != 5) goto joined_r0x001006c7;
      LAB_00100688:plVar3 = param_3 + 6;
      if (*(code**)( *param_3 + 0x108 ) != TIntermTyped::getQualifier) {
         plVar3 = (long*)( **(code**)( *param_3 + 0x108 ) )(param_3);
      }

      if (( *(byte*)( plVar3 + 1 ) & 0x7f ) == 5) {
         return true;
      }

   }
 else {
      lVar2 = ( **(code**)( lVar2 + 0x108 ) )(param_1);
      if (( *(byte*)( lVar2 + 8 ) & 0x7f ) == 5) goto LAB_00100688;
   }

   if (*(code**)( *param_1 + 0x108 ) == TIntermTyped::getQualifier) {
      bVar1 = *(byte*)( param_1 + 7 ) & 0x7f;
   }
 else {
      lVar2 = ( **(code**)( *param_1 + 0x108 ) )(param_1);
      bVar1 = *(byte*)( lVar2 + 8 ) & 0x7f;
   }

   joined_r0x001006c7:if (bVar1 == 6) {
      if (*(code**)( *param_3 + 0x108 ) == TIntermTyped::getQualifier) {
         plVar3 = param_3 + 6;
      }
 else {
         plVar3 = (long*)( **(code**)( *param_3 + 0x108 ) )(param_3);
      }

      if (( *(byte*)( plVar3 + 1 ) & 0x7f ) == 6) {
         return true;
      }

   }

   if (param_2 < param_4) {
      if (*(code**)( *param_1 + 0x108 ) == TIntermTyped::getQualifier) {
         param_1 = param_1 + 6;
      }
 else {
         param_1 = (long*)( **(code**)( *param_1 + 0x108 ) )(param_1);
      }

      if (( *(byte*)( param_1 + 1 ) & 0x7f ) == 4) {
         if (*(code**)( *param_3 + 0x108 ) == TIntermTyped::getQualifier) {
            param_3 = param_3 + 6;
         }
 else {
            param_3 = (long*)( **(code**)( *param_3 + 0x108 ) )(param_3);
         }

         if (( *(byte*)( param_3 + 1 ) & 0x7f ) == 3) {
            return true;
         }

      }

   }
 else if (param_4 < param_2) {
      if (*(code**)( *param_1 + 0x108 ) == TIntermTyped::getQualifier) {
         param_1 = param_1 + 6;
      }
 else {
         param_1 = (long*)( **(code**)( *param_1 + 0x108 ) )(param_1);
      }

      if (( *(byte*)( param_1 + 1 ) & 0x7f ) == 3) {
         if (*(code**)( *param_3 + 0x108 ) == TIntermTyped::getQualifier) {
            param_3 = param_3 + 6;
         }
 else {
            param_3 = (long*)( **(code**)( *param_3 + 0x108 ) )(param_3);
         }

         return ( *(byte*)( param_3 + 1 ) & 0x7f ) == 4;
      }

   }

   return false;
}
/* std::_Rb_tree<std::__cxx11::string, std::__cxx11::string, std::_Identity<std::__cxx11::string >,
   std::less<std::__cxx11::string >, std::allocator<std::__cxx11::string >
   >::_M_erase(std::_Rb_tree_node<std::__cxx11::string >*) [clone .isra.0] */void std::_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>::_M_erase(_Rb_tree_node *param_1) {
   _Rb_tree_node *p_Var1;
   if (param_1 == (_Rb_tree_node*)0x0) {
      return;
   }

   do {
      _M_erase(*(_Rb_tree_node**)( param_1 + 0x18 ));
      p_Var1 = *(_Rb_tree_node**)( param_1 + 0x10 );
      if (*(_Rb_tree_node**)( param_1 + 0x20 ) != param_1 + 0x30) {
         operator_delete(*(_Rb_tree_node**)( param_1 + 0x20 ), *(long*)( param_1 + 0x30 ) + 1);
      }

      operator_delete(param_1, 0x40);
      param_1 = p_Var1;
   }
 while ( p_Var1 != (_Rb_tree_node*)0x0 );
   return;
}
/* std::_Rb_tree<unsigned int, std::pair<unsigned int const, unsigned int>,
   std::_Select1st<std::pair<unsigned int const, unsigned int> >, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, unsigned int> >
   >::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const, unsigned int> >*) [clone .isra.0] */void std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::_M_erase(_Rb_tree_node *param_1) {
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
                              ;;
                              pvVar2 = *(void**)( (long)pvVar6 + 0x10 );
                              operator_delete(pvVar6, 0x28);
                              pvVar6 = pvVar2;
                           }
;
                           ;;
                           pvVar6 = *(void**)( (long)pvVar4 + 0x10 );
                           operator_delete(pvVar4, 0x28);
                           pvVar4 = pvVar6;
                        }
;
                        ;;
                        pvVar4 = *(void**)( (long)pvVar3 + 0x10 );
                        operator_delete(pvVar3, 0x28);
                        pvVar3 = pvVar4;
                     }
;
                     ;;
                     pvVar3 = *(void**)( (long)pvVar5 + 0x10 );
                     operator_delete(pvVar5, 0x28);
                     pvVar5 = pvVar3;
                  }
;
                  ;;
                  pvVar5 = *(void**)( (long)pvVar7 + 0x10 );
                  operator_delete(pvVar7, 0x28);
                  pvVar7 = pvVar5;
               }
;
               ;;
               pvVar7 = *(void**)( (long)pvVar8 + 0x10 );
               operator_delete(pvVar8, 0x28);
               pvVar8 = pvVar7;
            }
;
            ;;
            pvVar8 = *(void**)( (long)pvVar10 + 0x10 );
            operator_delete(pvVar10, 0x28);
            pvVar10 = pvVar8;
         }
;
         ;;
         p_Var9 = *(_Rb_tree_node**)( local_48 + 0x10 );
         operator_delete(local_48, 0x28);
         local_48 = p_Var9;
      }
 while ( p_Var9 != (_Rb_tree_node*)0x0 );
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
/* std::_Rb_tree_node<std::__cxx11::string >* std::_Rb_tree<std::__cxx11::string,
   std::__cxx11::string, std::_Identity<std::__cxx11::string >, std::less<std::__cxx11::string >,
   std::allocator<std::__cxx11::string > >::_M_copy<false, std::_Rb_tree<std::__cxx11::string,
   std::__cxx11::string, std::_Identity<std::__cxx11::string >, std::less<std::__cxx11::string >,
   std::allocator<std::__cxx11::string >
   >::_Reuse_or_alloc_node>(std::_Rb_tree_node<std::__cxx11::string >*, std::_Rb_tree_node_base*,
   std::_Rb_tree<std::__cxx11::string, std::__cxx11::string, std::_Identity<std::__cxx11::string >,
   std::less<std::__cxx11::string >, std::allocator<std::__cxx11::string > >::_Reuse_or_alloc_node&)
   [clone .isra.0] */_Rb_tree_node *std::_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>::_M_copy<false,std::_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>::_Reuse_or_alloc_node>(_Rb_tree_node *param_1, _Rb_tree_node_base *param_2, _Reuse_or_alloc_node *param_3) {
   undefined4 uVar1;
   long lVar2;
   _Rb_tree_node *p_Var3;
   _Rb_tree_node_base *p_Var4;
   _Rb_tree_node_base *p_Var5;
   long lVar6;
   _Rb_tree_node_base *p_Var7;
   undefined4 *puVar8;
   _Rb_tree_node_base *p_Var9;
   p_Var5 = *(_Rb_tree_node_base**)( param_3 + 8 );
   if (p_Var5 == (_Rb_tree_node_base*)0x0) {
      p_Var5 = (_Rb_tree_node_base*)operator_new(0x40);
      lVar2 = *(long*)( param_1 + 0x20 );
      lVar6 = *(long*)( param_1 + 0x28 );
      *(_Rb_tree_node_base**)( p_Var5 + 0x20 ) = p_Var5 + 0x30;
      __cxx11::string::_M_construct<char*>(p_Var5 + 0x20, lVar2, lVar6 + lVar2);
   }
 else {
      lVar2 = *(long*)( p_Var5 + 8 );
      *(long*)( param_3 + 8 ) = lVar2;
      if (lVar2 == 0) {
         *(undefined8*)param_3 = 0;
      }
 else if (p_Var5 == *(_Rb_tree_node_base**)( lVar2 + 0x18 )) {
         lVar6 = *(long*)( lVar2 + 0x10 );
         *(undefined8*)( lVar2 + 0x18 ) = 0;
         if (lVar6 != 0) {
            lVar2 = *(long*)( lVar6 + 0x18 );
            *(long*)( param_3 + 8 ) = lVar6;
            if (lVar2 != 0) {
               do {
                  lVar6 = lVar2;
                  lVar2 = *(long*)( lVar6 + 0x18 );
               }
 while ( *(long*)( lVar6 + 0x18 ) != 0 );
               *(long*)( param_3 + 8 ) = lVar6;
            }

            if (*(long*)( lVar6 + 0x10 ) != 0) {
               *(long*)( param_3 + 8 ) = *(long*)( lVar6 + 0x10 );
            }

         }

      }
 else {
         *(undefined8*)( lVar2 + 0x10 ) = 0;
      }

      if (*(_Rb_tree_node_base**)( p_Var5 + 0x20 ) != p_Var5 + 0x30) {
         operator_delete(*(_Rb_tree_node_base**)( p_Var5 + 0x20 ), *(long*)( p_Var5 + 0x30 ) + 1);
      }

      *(_Rb_tree_node_base**)( p_Var5 + 0x20 ) = p_Var5 + 0x30;
      __cxx11::string::_M_construct<char*>(p_Var5 + 0x20, *(long*)( param_1 + 0x20 ), *(long*)( param_1 + 0x28 ) + *(long*)( param_1 + 0x20 ));
   }

   uVar1 = *(undefined4*)param_1;
   *(_Rb_tree_node_base**)( p_Var5 + 8 ) = param_2;
   *(undefined8*)( p_Var5 + 0x10 ) = 0;
   *(undefined8*)( p_Var5 + 0x18 ) = 0;
   p_Var3 = *(_Rb_tree_node**)( param_1 + 0x18 );
   *(undefined4*)p_Var5 = uVar1;
   if (p_Var3 != (_Rb_tree_node*)0x0) {
      p_Var3 = _M_copy<false,std::_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>::_Reuse_or_alloc_node>(p_Var3, p_Var5, param_3);
      *(_Rb_tree_node**)( p_Var5 + 0x18 ) = p_Var3;
   }

   puVar8 = *(undefined4**)( param_1 + 0x10 );
   if (puVar8 != (undefined4*)0x0) {
      p_Var7 = *(_Rb_tree_node_base**)( param_3 + 8 );
      p_Var9 = p_Var5;
      if (p_Var7 == (_Rb_tree_node_base*)0x0) goto LAB_00100cb5;
      do {
         lVar2 = *(long*)( p_Var7 + 8 );
         *(long*)( param_3 + 8 ) = lVar2;
         if (lVar2 == 0) {
            *(undefined8*)param_3 = 0;
         }
 else if (p_Var7 == *(_Rb_tree_node_base**)( lVar2 + 0x18 )) {
            lVar6 = *(long*)( lVar2 + 0x10 );
            *(undefined8*)( lVar2 + 0x18 ) = 0;
            if (lVar6 != 0) {
               lVar2 = *(long*)( lVar6 + 0x18 );
               *(long*)( param_3 + 8 ) = lVar6;
               if (lVar2 != 0) {
                  do {
                     lVar6 = lVar2;
                     lVar2 = *(long*)( lVar6 + 0x18 );
                  }
 while ( *(long*)( lVar6 + 0x18 ) != 0 );
                  *(long*)( param_3 + 8 ) = lVar6;
               }

               if (*(long*)( lVar6 + 0x10 ) != 0) {
                  *(long*)( param_3 + 8 ) = *(long*)( lVar6 + 0x10 );
               }

            }

         }
 else {
            *(undefined8*)( lVar2 + 0x10 ) = 0;
         }

         if (*(_Rb_tree_node_base**)( p_Var7 + 0x20 ) != p_Var7 + 0x30) {
            operator_delete(*(_Rb_tree_node_base**)( p_Var7 + 0x20 ), *(long*)( p_Var7 + 0x30 ) + 1);
         }

         *(_Rb_tree_node_base**)( p_Var7 + 0x20 ) = p_Var7 + 0x30;
         __cxx11::string::_M_construct<char*>(p_Var7 + 0x20, *(long*)( puVar8 + 8 ), *(long*)( puVar8 + 10 ) + *(long*)( puVar8 + 8 ));
         p_Var4 = p_Var7;
         while (true) {
            uVar1 = *puVar8;
            *(undefined8*)( p_Var4 + 0x10 ) = 0;
            *(undefined8*)( p_Var4 + 0x18 ) = 0;
            *(undefined4*)p_Var4 = uVar1;
            *(_Rb_tree_node_base**)( p_Var9 + 0x10 ) = p_Var4;
            *(_Rb_tree_node_base**)( p_Var4 + 8 ) = p_Var9;
            if (*(_Rb_tree_node**)( puVar8 + 6 ) != (_Rb_tree_node*)0x0) {
               p_Var3 = _M_copy<false,std::_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>::_Reuse_or_alloc_node>(*(_Rb_tree_node**)( puVar8 + 6 ), p_Var4, param_3);
               *(_Rb_tree_node**)( p_Var4 + 0x18 ) = p_Var3;
            }

            puVar8 = *(undefined4**)( puVar8 + 4 );
            if (puVar8 == (undefined4*)0x0) {
               return (_Rb_tree_node*)p_Var5;
            }

            p_Var7 = *(_Rb_tree_node_base**)( param_3 + 8 );
            p_Var9 = p_Var4;
            if (p_Var7 != (_Rb_tree_node_base*)0x0) break;
            LAB_00100cb5:p_Var4 = (_Rb_tree_node_base*)operator_new(0x40);
            lVar2 = *(long*)( puVar8 + 10 );
            *(_Rb_tree_node_base**)( p_Var4 + 0x20 ) = p_Var4 + 0x30;
            __cxx11::string::_M_construct<char*>(p_Var4 + 0x20, *(long*)( puVar8 + 8 ), lVar2 + *(long*)( puVar8 + 8 ));
         }
;
         ;;
      }
 while ( true );
   }

   return (_Rb_tree_node*)p_Var5;
}
/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, long long>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, long long> >, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, long long> >
   >::_M_erase(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, long long> >*) [clone .isra.0] */void std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>>>::_M_erase(_Rb_tree_node *param_1) {
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
/* glslang::TIntermediate::mergeBlockDefinitions(TInfoSink&, glslang::TIntermSymbol*,
   glslang::TIntermSymbol*,
   glslang::TIntermediate*)::TMergeBlockTraverser::visitSymbol(glslang::TIntermSymbol*) */void TMergeBlockTraverser::visitSymbol(glslang::TIntermSymbol__ (long param_1, long *param_2)) {
   size_t __n;
   code *pcVar1;
   vector *pvVar2;
   byte bVar3;
   int iVar4;
   int iVar5;
   long lVar6;
   long lVar7;
   long *plVar8;
   lVar6 = ( **(code**)( *param_2 + 0x198 ) )(param_2);
   lVar7 = ( **(code**)( **(long**)( param_1 + 0x38 ) + 0x198 ) )();
   __n = *(size_t*)( lVar7 + 0x10 );
   if (__n == *(size_t*)( lVar6 + 0x10 )) {
      if (( __n != 0 ) && ( iVar4 = iVar4 != 0 )) {
         return;
      }

      pcVar1 = *(code**)( **(long**)( param_1 + 0x38 ) + 0x110 );
      if (pcVar1 == TIntermTyped::getQualifier) {
         plVar8 = *(long**)( param_1 + 0x38 ) + 6;
      }
 else {
         plVar8 = (long*)( *pcVar1 )();
      }

      bVar3 = *(byte*)( plVar8 + 1 ) & 0x7f;
      if (bVar3 == 5) {
         iVar4 = ( uint ) * (byte*)( (long)plVar8 + 0x2d ) * 2;
      }
 else {
         iVar4 = ( bVar3 != 6 ) + 1 + ( uint )(bVar3 != 6);
      }

      if (*(code**)( *param_2 + 0x108 ) == TIntermTyped::getQualifier) {
         plVar8 = param_2 + 6;
      }
 else {
         plVar8 = (long*)( **(code**)( *param_2 + 0x108 ) )(param_2);
      }

      bVar3 = *(byte*)( plVar8 + 1 ) & 0x7f;
      if (bVar3 == 5) {
         iVar5 = ( uint ) * (byte*)( (long)plVar8 + 0x2d ) * 2;
      }
 else {
         iVar5 = ( bVar3 != 6 ) + 1 + ( uint )(bVar3 != 6);
      }

      if (iVar4 == iVar5) {
         pcVar1 = *(code**)( **(long**)( param_1 + 0x38 ) + 0xf0 );
         if (pcVar1 == TIntermTyped::getType) {
            plVar8 = *(long**)( param_1 + 0x38 ) + 4;
         }
 else {
            plVar8 = (long*)( *pcVar1 )();
         }

         pvVar2 = (vector*)plVar8[0xd];
         if (*(code**)( *param_2 + 0xf8 ) == TIntermTyped::getWritableType) {
            param_2 = param_2 + 4;
         }
 else {
            param_2 = (long*)( **(code**)( *param_2 + 0xf8 ) )(param_2);
         }

         std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>::operator =((vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>*)param_2[0xd], pvVar2);
         return;
      }

   }

   return;
}
/* glslang::TIntermediate::finalCheck(TInfoSink&,
   bool)::TFinalLinkTraverser::visitSymbol(glslang::TIntermSymbol*) */void TFinalLinkTraverser::visitSymbol(glslang::TIntermSymbol__ (undefined8 param_1, long *param_2)) {
   TType *this;
   if (*(code**)( *param_2 + 0xf8 ) == TIntermTyped::getWritableType) {
      TType::adoptImplicitArraySizes((TType*)( param_2 + 4 ), false);
      return;
   }

   this(TType * )(**(code**)( *param_2 + 0xf8 ))(param_2);
   TType::adoptImplicitArraySizes(this, false);
   return;
}
/* glslang::TIntermediate::mergeBlockDefinitions(TInfoSink&, glslang::TIntermSymbol*,
   glslang::TIntermSymbol*,
   glslang::TIntermediate*)::TMergeBlockTraverser::visitBinary(glslang::TVisit,
   glslang::TIntermBinary*) */undefined8 TMergeBlockTraverser::visitBinary(glslang::TVisit, glslang::TIntermBinary__ (long param_1, undefined8 param_2, long *param_3, long param_4)) {
   uint uVar1;
   TType *pTVar2;
   char cVar3;
   long *plVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   TType *this;
   undefined8 *puVar8;
   undefined8 uVar9;
   int iVar10;
   char *pcVar11;
   long lVar12;
   long lVar13;
   char *pcVar14;
   if (*(long*)( param_1 + 0x48 ) == 0) {
      return 1;
   }

   pTVar2 = *(TType**)( param_1 + 0x40 );
   if (( ( ( pTVar2 != (TType*)0x0 ) && ( *(long*)( param_1 + 0x50 ) != 0 ) ) && ( *(long*)( *(long*)( param_1 + 0x50 ) + 0x28 ) != 0 ) ) && ( (int)param_3[0x17] == 0xb8 )) {
      if (*(code**)( *param_3 + 400 ) == TIntermBinary::getLeft) {
         plVar4 = (long*)param_3[0x18];
      }
 else {
         plVar4 = (long*)( **(code**)( *param_3 + 400 ) )(param_3);
      }

      if (*(code**)( *plVar4 + 0xf0 ) == TIntermTyped::getType) {
         this(TType * )(plVar4 + 4);
      }
 else {
         this(TType * )(**(code**)( *plVar4 + 0xf0 ))();
      }

      cVar3 = TType::operator ==(this, pTVar2);
      if (cVar3 != '\0') {
         if (*(code**)( *param_3 + 0x198 ) == TIntermBinary::getRight) {
            plVar4 = (long*)param_3[0x19];
         }
 else {
            plVar4 = (long*)( **(code**)( *param_3 + 0x198 ) )(param_3);
         }

         plVar4 = (long*)( **(code**)( *plVar4 + 0x28 ) )();
         uVar1 = **(uint**)( plVar4[0x18] + 8 );
         pcVar11 = (char*)(ulong)uVar1;
         lVar7 = *(long*)( param_1 + 0x50 ) + 8;
         lVar6 = *(long*)( *(long*)( param_1 + 0x50 ) + 0x10 );
         lVar13 = lVar7;
         if (lVar6 != 0) {
            do {
               param_4 = *(long*)( lVar6 + 0x10 );
               lVar5 = param_4;
               lVar12 = lVar6;
               if (*(uint*)( lVar6 + 0x20 ) < uVar1) {
                  lVar5 = *(long*)( lVar6 + 0x18 );
                  lVar12 = lVar13;
               }

               lVar6 = lVar5;
               lVar13 = lVar12;
            }
 while ( lVar5 != 0 );
            if (( lVar12 != lVar7 ) && ( *(uint*)( lVar12 + 0x20 ) <= uVar1 )) {
               uVar1 = *(uint*)( lVar12 + 0x24 );
               uVar9 = *(undefined8*)( param_1 + 0x48 );
               if (*(code**)( *param_3 + 0x198 ) == TIntermBinary::getRight) {
                  puVar8 = (undefined8*)param_3[0x19];
               }
 else {
                  puVar8 = (undefined8*)( **(code**)( *param_3 + 0x198 ) )(param_3);
               }

               if (*(code**)*puVar8 == TIntermNode::getLoc) {
                  cVar3 = (char)puVar8 + '\b';
               }
 else {
                  cVar3 = ( **(code**)*puVar8 )();
               }

               lVar7 = glslang::TIntermediate::addConstantUnion((uint)uVar9, (TSourceLoc*)(ulong)uVar1, (bool)cVar3);
               if (*(code**)( *param_3 + 0x188 ) == TIntermBinary::setRight) {
                  param_3[0x19] = lVar7;
               }
 else {
                  ( **(code**)( *param_3 + 0x188 ) )(param_3);
               }

               ( **(code**)( *plVar4 + 0xe0 ) )(plVar4);
               return 1;
            }

         }

         iVar10 = (int)param_4;
         pcVar14 = "map::at";
         std::__throw_out_of_range("map::at");
         glslang::TInfoSinkBase::append(pcVar11);
         if (iVar10 < 0xe) {
            glslang::TInfoSinkBase::append(pcVar11);
            StageName(*(undefined4*)pcVar14);
            glslang::TInfoSinkBase::append(pcVar11);
            glslang::TInfoSinkBase::append(pcVar11);
            StageName(iVar10);
            glslang::TInfoSinkBase::append(pcVar11);
         }
 else {
            glslang::TInfoSinkBase::append(pcVar11);
            StageName(*(undefined4*)pcVar14);
            glslang::TInfoSinkBase::append(pcVar11);
         }

         glslang::TInfoSinkBase::append(pcVar11);
         glslang::TInfoSinkBase::append(pcVar11);
         uVar9 = glslang::TInfoSinkBase::append(pcVar11);
         *(int*)( pcVar14 + 0x264 ) = *(int*)( pcVar14 + 0x264 ) + 1;
         return uVar9;
      }

   }

   return 1;
}
/* glslang::TIntermediate::error(TInfoSink&, char const*, EShLanguage) */void glslang::TIntermediate::error(TIntermediate *this, char *param_1, undefined8 param_3, int param_4) {
   glslang::TInfoSinkBase::append(param_1);
   if (param_4 < 0xe) {
      glslang::TInfoSinkBase::append(param_1);
      StageName(*(undefined4*)this);
      glslang::TInfoSinkBase::append(param_1);
      glslang::TInfoSinkBase::append(param_1);
      StageName(param_4);
      glslang::TInfoSinkBase::append(param_1);
   }
 else {
      glslang::TInfoSinkBase::append(param_1);
      StageName(*(undefined4*)this);
      glslang::TInfoSinkBase::append(param_1);
   }

   for (int i = 0; i < 3; i++) {
      glslang::TInfoSinkBase::append(param_1);
   }

   *(int*)( this + 0x264 ) = *(int*)( this + 0x264 ) + 1;
   return;
}
/* glslang::TIntermediate::warn(TInfoSink&, char const*, EShLanguage) */void glslang::TIntermediate::warn(TIntermediate *this, char *param_1, undefined8 param_3, int param_4) {
   glslang::TInfoSinkBase::append(param_1);
   if (param_4 < 0xe) {
      glslang::TInfoSinkBase::append(param_1);
      StageName(*(undefined4*)this);
      glslang::TInfoSinkBase::append(param_1);
      glslang::TInfoSinkBase::append(param_1);
      StageName(param_4);
      glslang::TInfoSinkBase::append(param_1);
   }
 else {
      glslang::TInfoSinkBase::append(param_1);
      StageName(*(undefined4*)this);
      glslang::TInfoSinkBase::append(param_1);
   }

   for (int i = 0; i < 3; i++) {
      glslang::TInfoSinkBase::append(param_1);
   }

   return;
}
/* glslang::TIntermediate::mergeCallGraphs(TInfoSink&, glslang::TIntermediate&) */void glslang::TIntermediate::mergeCallGraphs(TIntermediate *this, TInfoSink *param_1, TIntermediate *param_2) {
   ulong uVar1;
   _List_node_base *p_Var2;
   long lVar3;
   int iVar4;
   _List_node_base *p_Var5;
   ulong uVar6;
   _List_node_base *p_Var7;
   TIntermediate *pTVar8;
   long in_FS_OFFSET;
   _List_node_base *local_58;
   _List_node_base *p_Stack_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = *(int*)( param_2 + 0x260 );
   if (0 < iVar4) {
      if (*(int*)( this + 0x260 ) < 1) {
         std::__cxx11::string::_M_assign((string*)( this + 8 ));
         std::__cxx11::string::_M_assign((string*)( this + 0x28 ));
         iVar4 = *(int*)( param_2 + 0x260 );
      }
 else {
         error(this, param_1, "can\'t handle multiple entry points per stage", 0xe);
         iVar4 = *(int*)( param_2 + 0x260 );
      }

   }

   pTVar8 = *(TIntermediate**)( param_2 + 0x48 );
   *(int*)( this + 0x260 ) = *(int*)( this + 0x260 ) + iVar4;
   local_48 = 0;
   local_58 = (_List_node_base*)&local_58;
   p_Stack_50 = (_List_node_base*)&local_58;
   if (pTVar8 != param_2 + 0x48) {
      do {
         p_Var5 = (_List_node_base*)operator_new(0x68);
         uVar6 = glslang::GetThreadPoolAllocator();
         uVar1 = *(ulong*)( pTVar8 + 0x20 );
         p_Var7 = p_Var5 + 0x28;
         *(_List_node_base**)( p_Var5 + 0x18 ) = p_Var7;
         p_Var2 = *(_List_node_base**)( pTVar8 + 0x18 );
         *(ulong*)( p_Var5 + 0x10 ) = uVar6;
         if (uVar1 < 0x10) {
            if (uVar1 == 1) {
               p_Var5[0x28] = *p_Var2;
            }
 else if (uVar1 != 0) goto LAB_00101621;
         }
 else {
            if ((long)uVar1 < 0) goto LAB_00101732;
            p_Var7 = (_List_node_base*)glslang::TPoolAllocator::allocate(uVar6);
            *(ulong*)( p_Var5 + 0x28 ) = uVar1;
            *(_List_node_base**)( p_Var5 + 0x18 ) = p_Var7;
            LAB_00101621:memcpy(p_Var7, p_Var2, uVar1);
            p_Var7 = *(_List_node_base**)( p_Var5 + 0x18 );
         }

         *(ulong*)( p_Var5 + 0x20 ) = uVar1;
         p_Var7[uVar1] = (_List_node_base)0x0;
         uVar6 = glslang::GetThreadPoolAllocator();
         uVar1 = *(ulong*)( pTVar8 + 0x48 );
         p_Var7 = p_Var5 + 0x50;
         *(_List_node_base**)( p_Var5 + 0x40 ) = p_Var7;
         p_Var2 = *(_List_node_base**)( pTVar8 + 0x40 );
         *(ulong*)( p_Var5 + 0x38 ) = uVar6;
         if (uVar1 < 0x10) {
            if (uVar1 == 1) {
               p_Var5[0x50] = *p_Var2;
            }
 else if (uVar1 != 0) goto LAB_00101681;
         }
 else {
            if ((long)uVar1 < 0) {
               LAB_00101732:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::_M_create");
            }

            p_Var7 = (_List_node_base*)glslang::TPoolAllocator::allocate(uVar6);
            *(ulong*)( p_Var5 + 0x50 ) = uVar1;
            *(_List_node_base**)( p_Var5 + 0x40 ) = p_Var7;
            LAB_00101681:memcpy(p_Var7, p_Var2, uVar1);
            p_Var7 = *(_List_node_base**)( p_Var5 + 0x40 );
         }

         *(ulong*)( p_Var5 + 0x48 ) = uVar1;
         p_Var7[uVar1] = (_List_node_base)0x0;
         *(undefined2*)( p_Var5 + 0x60 ) = *(undefined2*)( pTVar8 + 0x60 );
         p_Var5[0x62] = *(_List_node_base*)( pTVar8 + 0x62 );
         *(undefined4*)( p_Var5 + 100 ) = *(undefined4*)( pTVar8 + 100 );
         std::__detail::_List_node_base::_M_hook(p_Var5);
         pTVar8 = *(TIntermediate**)pTVar8;
         local_48 = local_48 + 1;
      }
 while ( param_2 + 0x48 != pTVar8 );
      if (local_58 != (_List_node_base*)&local_58) {
         std::__detail::_List_node_base::_M_transfer((_List_node_base*)( this + 0x48 ), local_58);
         lVar3 = local_48;
         local_48 = 0;
         *(long*)( this + 0x58 ) = *(long*)( this + 0x58 ) + lVar3;
         p_Var7 = local_58;
         while (p_Var7 != (_List_node_base*)&local_58) {
            p_Var2 = *(_List_node_base**)p_Var7;
            operator_delete(p_Var7, 0x68);
            p_Var7 = p_Var2;
         }
;
         ;;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TIntermediate::remapIds(glslang::TIdMaps const&, long long, glslang::TIntermediate&) */void glslang::TIntermediate::remapIds(TIntermediate *this, TIdMaps *param_1, longlong param_2, TIntermediate *param_3) {
   long in_FS_OFFSET;
   undefined **local_68;
   undefined4 local_60;
   undefined8 local_5c;
   undefined8 local_50;
   undefined8 local_48;
   undefined8 local_40;
   undefined8 local_38;
   TIdMaps *local_30;
   longlong local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = 1;
   local_5c = 0;
   local_68 = &PTR__TIntermTraverser_00120d00;
   local_50 = glslang::GetThreadPoolAllocator();
   local_68 = &PTR__TRemapIdTraverser_00120e38;
   local_48 = 0;
   local_40 = 0;
   local_38 = 0;
   local_30 = param_1;
   local_28 = param_2;
   ( **(code**)( **(long**)( param_3 + 0x80 ) + 0x10 ) )(*(long**)( param_3 + 0x80 ), &local_68);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TIntermediate::mergeBodies(TInfoSink&, glslang::TVector<TIntermNode*>&,
   glslang::TVector<TIntermNode*> const&) */void glslang::TIntermediate::mergeBodies(TIntermediate *this, TInfoSink *param_1, TVector *param_2, TVector *param_3) {
   undefined8 *puVar1;
   size_t __n;
   undefined8 uVar2;
   int iVar3;
   long *plVar4;
   long *plVar5;
   long lVar6;
   ulong uVar7;
   long lVar8;
   undefined8 *puVar9;
   ulong uVar10;
   ulong uVar11;
   long lVar12;
   long lVar13;
   long lVar14;
   lVar14 = 1;
   lVar13 = *(long*)( param_2 + 0x10 );
   lVar6 = *(long*)( param_2 + 8 );
   lVar8 = *(long*)( param_3 + 0x10 );
   puVar9 = *(undefined8**)( param_3 + 8 );
   uVar10 = lVar13 - lVar6;
   if (uVar10 != 8) {
      uVar11 = 0;
      do {
         uVar10 = 0;
         if (lVar8 - (long)puVar9 != 8) {
            do {
               plVar4 = (long*)( **(code**)( **(long**)( lVar6 + uVar11 * 8 ) + 0x30 ) )();
               plVar5 = (long*)( **(code**)( **(long**)( *(long*)( param_3 + 8 ) + uVar10 * 8 ) + 0x30 ) )();
               if (( ( ( plVar4 != (long*)0x0 ) && ( plVar5 != (long*)0x0 ) ) && ( (int)plVar4[0x17] == 5 ) ) && ( (int)plVar5[0x17] == 5 )) {
                  if (*(code**)( *plVar5 + 0x1a8 ) == TIntermAggregate::getName_abi_cxx11_) {
                     plVar5 = plVar5 + 0x20;
                  }
 else {
                     plVar5 = (long*)( **(code**)( *plVar5 + 0x1a8 ) )(plVar5);
                  }

                  if (*(code**)( *plVar4 + 0x1a8 ) == TIntermAggregate::getName_abi_cxx11_) {
                     plVar4 = plVar4 + 0x20;
                  }
 else {
                     plVar4 = (long*)( **(code**)( *plVar4 + 0x1a8 ) )(plVar4);
                  }

                  __n = plVar4[2];
                  if (__n == plVar5[2]) {
                     if (( __n == 0 ) || ( iVar3 = iVar3 == 0 )) {
                        error(this, param_1, "Multiple function bodies in multiple compilation units for the same signature in the same stage:", 0xe);
                        glslang::TInfoSinkBase::append((char*)param_1);
                        plVar5 = (long*)( **(code**)( **(long**)( *(long*)( param_2 + 8 ) + uVar11 * 8 ) + 0x30 ) )();
                        if (*(code**)( *plVar5 + 0x1a8 ) != TIntermAggregate::getName_abi_cxx11_) {
                           ( **(code**)( *plVar5 + 0x1a8 ) )(plVar5);
                        }

                        glslang::TInfoSinkBase::append((basic_string*)param_1);
                        glslang::TInfoSinkBase::append((char*)param_1);
                     }

                  }

               }

               lVar8 = *(long*)( param_3 + 0x10 );
               puVar9 = *(undefined8**)( param_3 + 8 );
               uVar10 = ( ulong )((int)uVar10 + 1);
               lVar6 = *(long*)( param_2 + 8 );
            }
 while ( uVar10 < ( lVar8 - (long)puVar9 >> 3 ) - 1U );
            lVar13 = *(long*)( param_2 + 0x10 );
         }

         uVar11 = ( ulong )((int)uVar11 + 1);
         uVar10 = lVar13 - lVar6;
         lVar14 = (long)uVar10 >> 3;
      }
 while ( uVar11 < lVar14 - 1U );
   }

   puVar1 = (undefined8*)( lVar8 + -8 );
   if (puVar1 != puVar9) {
      uVar11 = (long)puVar1 - (long)puVar9;
      if (uVar11 <= ( ulong )(*(long*)( param_2 + 0x18 ) - lVar13)) {
         if (7 < uVar11) {
            lVar6 = 0;
            if (puVar1 != puVar9 + 1) {
               do {
                  *(undefined8*)( lVar13 + lVar6 ) = *(undefined8*)( (long)puVar9 + lVar6 + 8 );
                  lVar6 = lVar6 + 8;
               }
 while ( lVar6 != ( lVar8 + -0x10 ) - (long)puVar9 );
            }

            *(undefined8*)( lVar13 + -8 + uVar11 ) = *(undefined8*)( lVar13 + -8 );
            uVar2 = *puVar9;
            *(ulong*)( param_2 + 0x10 ) = uVar11 + lVar13;
            *(undefined8*)( lVar13 + -8 ) = uVar2;
            return;
         }

         lVar6 = 0;
         do {
            *(undefined8*)( lVar13 + lVar6 ) = *(undefined8*)( ( lVar13 - uVar11 ) + lVar6 );
            lVar6 = lVar6 + 8;
         }
 while ( true );
      }

      if (0xfffffffffffffffU - lVar14 < ( ulong )((long)uVar11 >> 3)) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("vector::_M_range_insert");
      }

      uVar7 = lVar14 * 2;
      if (uVar10 < uVar11) {
         uVar7 = ( (long)uVar11 >> 3 ) + lVar14;
      }

      if (0xfffffffffffffff < uVar7) {
         uVar7 = 0xfffffffffffffff;
      }

      lVar14 = glslang::TPoolAllocator::allocate(*(ulong*)param_2);
      lVar8 = lVar14;
      if (lVar6 != lVar13 + -8) {
         lVar8 = ( lVar13 + -8 ) - lVar6;
         lVar12 = 0;
         do {
            *(undefined8*)( lVar14 + lVar12 ) = *(undefined8*)( lVar6 + lVar12 );
            lVar12 = lVar12 + 8;
         }
 while ( lVar8 != lVar12 );
         lVar8 = lVar8 + lVar14;
      }

      lVar6 = 0;
      do {
         *(undefined8*)( lVar8 + lVar6 ) = *(undefined8*)( (long)puVar9 + lVar6 );
         lVar6 = lVar6 + 8;
      }
 while ( lVar6 != (long)puVar1 - (long)puVar9 );
      *(undefined8*)( lVar8 + lVar6 ) = *(undefined8*)( lVar13 + -8 );
      *(long*)( param_2 + 8 ) = lVar14;
      *(undefined8**)( param_2 + 0x10 ) = (undefined8*)( lVar8 + lVar6 ) + 1;
      *(ulong*)( param_2 + 0x18 ) = lVar14 + uVar7 * 8;
   }

   return;
}
/* glslang::TIntermediate::mergeImplicitArraySizes(glslang::TType&, glslang::TType const&) */void glslang::TIntermediate::mergeImplicitArraySizes(TIntermediate *this, TType *param_1, TType *param_2) {
   char cVar1;
   int iVar2;
   int iVar3;
   undefined4 uVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   code *pcVar8;
   lVar7 = *(long*)param_1;
   if (*(code**)( lVar7 + 0xf8 ) == TType::isUnsizedArray) {
      if (*(code**)( lVar7 + 0xe8 ) == TType::isArray) {
         lVar6 = *(long*)( param_1 + 0x60 );
         if (lVar6 == 0) goto LAB_00101c15;
         LAB_00101d01:if (**(int**)( *(long*)( lVar6 + 8 ) + 8 ) == 0) goto LAB_00101d13;
      }
 else {
         cVar1 = ( **(code**)( lVar7 + 0xe8 ) )(param_1);
         if (cVar1 != '\0') {
            lVar6 = *(long*)( param_1 + 0x60 );
            goto LAB_00101d01;
         }

      }

      goto LAB_00101dad;
   }

   cVar1 = ( **(code**)( lVar7 + 0xf8 ) )(param_1);
   if (cVar1 == '\0') {
      lVar7 = *(long*)param_1;
      goto LAB_00101c15;
   }

   LAB_00101d13:lVar7 = *(long*)param_2;
   if (*(code**)( lVar7 + 0xf8 ) == TType::isUnsizedArray) {
      if (*(code**)( lVar7 + 0xe8 ) != TType::isArray) {
         cVar1 = ( **(code**)( lVar7 + 0xe8 ) )(param_2);
         if (cVar1 == '\0') {
            lVar7 = *(long*)param_2;
            goto LAB_00101eab;
         }

         lVar6 = *(long*)( param_2 + 0x60 );
         lVar7 = *(long*)param_2;
         LAB_00101e99:if (**(int**)( *(long*)( lVar6 + 8 ) + 8 ) != 0) goto LAB_00101eab;
         goto LAB_00101de1;
      }

      lVar6 = *(long*)( param_2 + 0x60 );
      if (lVar6 != 0) goto LAB_00101e99;
      pcVar8 = *(code**)( lVar7 + 0xf0 );
      lVar7 = 0;
      if (pcVar8 == TType::isSizedArray) goto LAB_00101d62;
      LAB_00101f20:cVar1 = ( *pcVar8 )(param_2);
      if (cVar1 == '\0') goto LAB_00101dad;
      LAB_00101d75:if (*(code**)( *(long*)param_2 + 0x78 ) == TType::getOuterArraySize) {
         uVar4 = **(undefined4**)( *(long*)( *(long*)( param_2 + 0x60 ) + 8 ) + 8 );
      }
 else {
         uVar4 = ( **(code**)( *(long*)param_2 + 0x78 ) )(param_2);
      }

      lVar7 = *(long*)( param_1 + 0x60 );
      **(undefined4**)( *(long*)( lVar7 + 8 ) + 8 ) = uVar4;
      *(undefined1*)( lVar7 + 0x14 ) = 0;
   }
 else {
      cVar1 = ( **(code**)( lVar7 + 0xf8 ) )(param_2);
      lVar7 = *(long*)param_2;
      if (cVar1 != '\0') {
         LAB_00101de1:pcVar8 = *(code**)( *(long*)param_1 + 0x118 );
         if (*(code**)( lVar7 + 0x90 ) == TType::getImplicitArraySize) {
            iVar3 = *(int*)( *(long*)( param_2 + 0x60 ) + 0x10 );
            if (iVar3 < 1) {
               iVar3 = 1;
            }

         }
 else {
            iVar3 = ( **(code**)( lVar7 + 0x90 ) )(param_2);
         }

         if (pcVar8 == TType::updateImplicitArraySize) {
            iVar2 = *(int*)( *(long*)( param_1 + 0x60 ) + 0x10 );
            if (iVar2 < iVar3) {
               iVar2 = iVar3;
            }

            *(int*)( *(long*)( param_1 + 0x60 ) + 0x10 ) = iVar2;
         }
 else {
            ( *pcVar8 )(param_1);
         }

         if (*(code**)( *(long*)param_2 + 0x108 ) == TType::isArrayVariablyIndexed) {
            cVar1 = *(char*)( *(long*)( param_2 + 0x60 ) + 0x15 );
         }
 else {
            cVar1 = ( **(code**)( *(long*)param_2 + 0x108 ) )(param_2);
         }

         lVar7 = *(long*)param_1;
         if (cVar1 != '\0') {
            if (*(code**)( lVar7 + 0x110 ) == TType::setArrayVariablyIndexed) {
               *(undefined1*)( *(long*)( param_1 + 0x60 ) + 0x15 ) = 1;
            }
 else {
               ( **(code**)( lVar7 + 0x110 ) )(param_1);
               lVar7 = *(long*)param_1;
            }

         }

         goto LAB_00101c15;
      }

      LAB_00101eab:pcVar8 = *(code**)( lVar7 + 0xf0 );
      if (pcVar8 != TType::isSizedArray) goto LAB_00101f20;
      if (*(code**)( lVar7 + 0xe8 ) == TType::isArray) {
         lVar7 = *(long*)( param_2 + 0x60 );
         LAB_00101d62:if (lVar7 != 0) goto LAB_00101d67;
      }
 else {
         cVar1 = ( **(code**)( lVar7 + 0xe8 ) )(param_2);
         if (cVar1 != '\0') {
            lVar7 = *(long*)( param_2 + 0x60 );
            LAB_00101d67:if (**(int**)( *(long*)( lVar7 + 8 ) + 8 ) != 0) goto LAB_00101d75;
         }

      }

   }

   LAB_00101dad:lVar7 = *(long*)param_1;
   LAB_00101c15:if (*(code**)( lVar7 + 0x128 ) == TType::isStruct) {
      if (1 < ( byte )((char)param_1[8] - 0xfU)) {
         return;
      }

   }
 else {
      cVar1 = ( **(code**)( lVar7 + 0x128 ) )(param_1);
      if (cVar1 == '\0') {
         return;
      }

   }

   if (*(code**)( *(long*)param_2 + 0x128 ) == TType::isStruct) {
      if (1 < ( byte )((char)param_2[8] - 0xfU)) {
         return;
      }

   }
 else {
      cVar1 = ( **(code**)( *(long*)param_2 + 0x128 ) )(param_2);
      if (cVar1 == '\0') {
         return;
      }

   }

   lVar7 = *(long*)( *(long*)( param_1 + 0x68 ) + 8 );
   lVar6 = *(long*)( *(long*)( param_2 + 0x68 ) + 8 );
   lVar5 = *(long*)( *(long*)( param_2 + 0x68 ) + 0x10 ) - lVar6;
   if (( lVar5 == *(long*)( *(long*)( param_1 + 0x68 ) + 0x10 ) - lVar7 ) && ( 0 < (int)( lVar5 >> 5 ) )) {
      lVar5 = 0;
      while (true) {
         mergeImplicitArraySizes(this, *(TType**)( lVar7 + lVar5 * 0x20 ), *(TType**)( lVar6 + lVar5 * 0x20 ));
         lVar7 = *(long*)( *(long*)( param_1 + 0x68 ) + 8 );
         if ((int)( *(long*)( *(long*)( param_1 + 0x68 ) + 0x10 ) - lVar7 >> 5 ) <= (int)( lVar5 + 1 )) break;
         lVar6 = *(long*)( *(long*)( param_2 + 0x68 ) + 8 );
         lVar5 = lVar5 + 1;
      }
;
      ;;
   }

   return;
}
/* glslang::TIntermediate::checkCallGraphCycles(TInfoSink&) */void glslang::TIntermediate::checkCallGraphCycles(TIntermediate *this, TInfoSink *param_1) {
   TIntermediate *pTVar1;
   undefined8 ***__n;
   undefined8 ****ppppuVar2;
   int iVar3;
   TIntermediate *pTVar4;
   _List_node_base *p_Var5;
   TIntermediate *pTVar6;
   undefined8 ****ppppuVar7;
   long in_FS_OFFSET;
   undefined8 ****local_58;
   undefined8 ****ppppuStack_50;
   long local_48;
   long local_40;
   pTVar1 = this + 0x48;
   pTVar6 = *(TIntermediate**)( this + 0x48 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pTVar4 = pTVar6;
   if (pTVar6 != pTVar1) {
      do {
         pTVar4[0x62] = (TIntermediate)0x0;
         *(undefined2*)( pTVar4 + 0x60 ) = 0;
         pTVar4 = *(TIntermediate**)pTVar4;
      }
 while ( pTVar4 != pTVar1 );
      LAB_00101ffa:if (pTVar6 != pTVar1) {
         while (pTVar6[0x60] != (TIntermediate)0x0) {
            pTVar6 = *(TIntermediate**)pTVar6;
            if (pTVar6 == pTVar1) goto LAB_001021e1;
         }
;
         ;;
         pTVar6[0x61] = (TIntermediate)0x1;
         local_48 = 0;
         local_58 = &local_58;
         ppppuStack_50 = &local_58;
         p_Var5 = (_List_node_base*)operator_new(0x18);
         *(TIntermediate**)( p_Var5 + 0x10 ) = pTVar6 + 0x10;
         std::__detail::_List_node_base::_M_hook(p_Var5);
         local_48 = local_48 + 1;
         while ((undefined8*****)local_58 != &local_58) {
            LAB_00102070:pTVar6 = *(TIntermediate**)( this + 0x48 );
            ppppuVar7 = (undefined8****)ppppuStack_50[2];
            if (pTVar6 != pTVar1) {
               do {
                  if (( pTVar6[0x60] == (TIntermediate)0x0 ) && ( __n = ppppuVar7[7] ),__n == *(undefined8****)( pTVar6 + 0x20 )) {
                     if (( __n != (undefined8***)0x0 ) && ( iVar3 = iVar3 != 0 )) goto LAB_00102090;
                     if (pTVar6[0x61] == (TIntermediate)0x0) goto LAB_001021a0;
                     if (pTVar6[0x62] != (TIntermediate)0x0) goto LAB_00102090;
                     error(this, param_1, "Recursion detected:", 0xe);
                     glslang::TInfoSinkBase::append((char*)param_1);
                     glslang::TInfoSinkBase::append((basic_string*)param_1);
                     glslang::TInfoSinkBase::append((char*)param_1);
                     glslang::TInfoSinkBase::append((basic_string*)param_1);
                     glslang::TInfoSinkBase::append((char*)param_1);
                     pTVar6[0x62] = (TIntermediate)0x1;
                     pTVar6 = *(TIntermediate**)pTVar6;
                     this[0x26c] = (TIntermediate)0x1;
                  }
 else {
                     LAB_00102090:pTVar6 = *(TIntermediate**)pTVar6;
                  }

                  if (pTVar6 == pTVar1) {
                     ppppuVar7 = ( (undefined8*****)ppppuStack_50 )[2];
                     break;
                  }

               }
 while ( true );
            }

            ppppuVar2 = ppppuStack_50;
            local_48 = local_48 + -1;
            *(undefined2*)( ppppuVar7 + 10 ) = _LC448._4_2_;
            std::__detail::_List_node_base::_M_unhook();
            operator_delete(ppppuVar2, 0x18);
         }
;
         ;;
         pTVar6 = *(TIntermediate**)( this + 0x48 );
         goto LAB_00101ffa;
      }

   }

   LAB_001021e1:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
   LAB_001021a0:pTVar6[0x61] = (TIntermediate)0x1;
   p_Var5 = (_List_node_base*)operator_new(0x18);
   *(TIntermediate**)( p_Var5 + 0x10 ) = pTVar6 + 0x10;
   std::__detail::_List_node_base::_M_hook(p_Var5);
   local_48 = local_48 + 1;
   if ((undefined8*****)local_58 == &local_58) {
      pTVar6 = *(TIntermediate**)( this + 0x48 );
      goto LAB_00101ffa;
   }

   goto LAB_00102070;
}
/* glslang::TIntermediate::findLinkerObjects() const */void glslang::TIntermediate::findLinkerObjects(TIntermediate *this) {
   long *plVar1;
   plVar1 = (long*)( **(code**)( **(long**)( this + 0x80 ) + 0x30 ) )();
   if (*(code**)( *plVar1 + 400 ) == TIntermAggregate::getSequence) {
      plVar1 = plVar1 + 0x18;
   }
 else {
      plVar1 = (long*)( **(code**)( *plVar1 + 400 ) )();
   }

   /* WARNING: Could not recover jumptable at 0x00102258. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( **(long**)( plVar1[2] + -8 ) + 0x30 ) )();
   return;
}
/* glslang::TIntermediate::sharedBlockCheck(TInfoSink&) */void glslang::TIntermediate::sharedBlockCheck(TIntermediate *this, TInfoSink *param_1) {
   bool bVar1;
   bool bVar2;
   uint uVar3;
   long *plVar4;
   long *plVar5;
   long *plVar6;
   long lVar7;
   ulong uVar8;
   plVar4 = (long*)findLinkerObjects(this);
   if (*(code**)( *plVar4 + 400 ) == TIntermAggregate::getSequence) {
      plVar4 = plVar4 + 0x18;
   }
 else {
      plVar4 = (long*)( **(code**)( *plVar4 + 400 ) )();
   }

   lVar7 = plVar4[1];
   if (lVar7 != plVar4[2]) {
      uVar8 = 0;
      bVar2 = false;
      bVar1 = false;
      do {
         plVar5 = (long*)( **(code**)( **(long**)( lVar7 + uVar8 * 8 ) + 0x18 ) )();
         if (*(code**)( *plVar5 + 0xf0 ) == TIntermTyped::getType) {
            plVar5 = plVar5 + 4;
         }
 else {
            plVar5 = (long*)( **(code**)( *plVar5 + 0xf0 ) )();
         }

         if (*(code**)( *plVar5 + 0x58 ) == TType::getQualifier) {
            plVar6 = plVar5 + 2;
         }
 else {
            plVar6 = (long*)( **(code**)( *plVar5 + 0x58 ) )();
         }

         if (( *(byte*)( plVar6 + 1 ) & 0x7f ) == 7) {
            if (*(code**)( *plVar5 + 0x38 ) == TType::getBasicType) {
               uVar3 = ( uint ) * (byte*)( plVar5 + 1 );
            }
 else {
               uVar3 = ( **(code**)( *plVar5 + 0x38 ) )();
            }

            if (uVar3 == 0x10) {
               bVar1 = true;
            }
 else {
               bVar2 = true;
            }

         }

         lVar7 = plVar4[1];
         uVar8 = uVar8 + 1;
      }
 while ( uVar8 < ( ulong )(plVar4[2] - lVar7 >> 3) );
      if (( bVar1 ) && ( bVar2 )) {
         error(this, param_1, "cannot mix use of shared variables inside and outside blocks", 0xe);
         return;
      }

   }

   return;
}
/* glslang::TIntermediate::inOutLocationCheck(TInfoSink&) */void glslang::TIntermediate::inOutLocationCheck(TIntermediate *this, TInfoSink *param_1) {
   bool bVar1;
   long *plVar2;
   long *plVar3;
   long lVar4;
   ulong uVar5;
   int iVar6;
   plVar2 = (long*)findLinkerObjects(this);
   if (*(code**)( *plVar2 + 400 ) == TIntermAggregate::getSequence) {
      plVar2 = plVar2 + 0x18;
   }
 else {
      plVar2 = (long*)( **(code**)( *plVar2 + 400 ) )();
   }

   lVar4 = plVar2[1];
   if (lVar4 != plVar2[2]) {
      bVar1 = false;
      uVar5 = 0;
      iVar6 = 0;
      do {
         plVar3 = (long*)( **(code**)( **(long**)( lVar4 + uVar5 * 8 ) + 0x18 ) )();
         if (*(code**)( *plVar3 + 0xf0 ) == TIntermTyped::getType) {
            plVar3 = plVar3 + 4;
         }
 else {
            plVar3 = (long*)( **(code**)( *plVar3 + 0xf0 ) )();
         }

         if (*(code**)( *plVar3 + 0x58 ) == TType::getQualifier) {
            plVar3 = plVar3 + 2;
         }
 else {
            plVar3 = (long*)( **(code**)( *plVar3 + 0x58 ) )();
         }

         if (( ( ( *(int*)this == 4 ) && ( (short)plVar3[1] == 4 ) ) && ( iVar6 = iVar6 + 1(~*(ushort *)((long)plVar3 + 0x1c) & 0xfff) == 0 ) ) && ( ( ( *(byte*)( (long)plVar3 + 0x1d ) & 0x70 ) == 0x40 && ( *(char*)( (long)plVar3 + 0x22 ) == -1 ) ) )) {
            bVar1 = true;
         }

         lVar4 = plVar2[1];
         uVar5 = uVar5 + 1;
      }
 while ( uVar5 < ( ulong )(plVar2[2] - lVar4 >> 3) );
      if (( ( *(int*)( this + 0x60 ) == 8 ) && ( 1 < iVar6 ) ) && ( bVar1 )) {
         error(this, param_1, "when more than one fragment shader output, all must have location qualifiers", 0xe);
         return;
      }

   }

   return;
}
/* glslang::TIntermediate::seedIdMap(glslang::TIdMaps&, long long&) */void glslang::TIntermediate::seedIdMap(TIntermediate *this, TIdMaps *param_1, longlong *param_2) {
   undefined4 uVar1;
   long *plVar2;
   long in_FS_OFFSET;
   undefined **local_b8;
   undefined4 local_b0;
   undefined8 local_ac;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   TIdMaps *local_80;
   undefined **local_78;
   undefined4 local_70;
   undefined8 local_6c;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48;
   TIdMaps *local_40;
   ulong local_38;
   long local_30;
   uVar1 = _LC448._4_4_;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = &PTR__TIntermTraverser_00120d00;
   local_70 = _LC448._4_4_;
   local_6c = 0;
   local_60 = glslang::GetThreadPoolAllocator();
   local_78 = &PTR__TBuiltInIdTraverser_00120d68;
   local_58 = 0;
   local_50 = 0;
   local_48 = 0;
   local_38 = 0;
   local_40 = param_1;
   ( **(code**)( **(long**)( this + 0x80 ) + 0x10 ) )(*(long**)( this + 0x80 ), &local_78);
   local_b8 = &PTR__TIntermTraverser_00120d00;
   *param_2 = local_38 & 0xffffffffffffff;
   local_b0 = uVar1;
   local_ac = 0;
   local_a0 = glslang::GetThreadPoolAllocator();
   local_98 = 0;
   local_90 = 0;
   local_88 = 0;
   local_b8 = &PTR__TUserIdTraverser_00120dd0;
   local_80 = param_1;
   plVar2 = (long*)findLinkerObjects(this);
   ( **(code**)( *plVar2 + 0x10 ) )(plVar2, &local_b8);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TIntermediate::checkLocationRange(int, glslang::TIoRange const&, glslang::TType const&,
   bool&) */int glslang::TIntermediate::checkLocationRange(TIntermediate *this, int param_1, TIoRange *param_2, TType *param_3, bool *param_4) {
   TType TVar1;
   int iVar2;
   int iVar3;
   uint uVar4;
   long lVar5;
   long lVar6;
   TType *pTVar7;
   long lVar8;
   int *piVar9;
   long lVar10;
   ulong uVar11;
   lVar5 = (long)param_1;
   lVar8 = *(long*)( this + lVar5 * 0x18 + 0x658 );
   if (*(long*)( this + lVar5 * 0x18 + 0x660 ) != lVar8) {
      uVar11 = 0;
      do {
         lVar10 = uVar11 * 0x1c;
         piVar9 = (int*)( lVar8 + lVar10 );
         iVar3 = *piVar9;
         if (( *(int*)( param_2 + 4 ) < iVar3 ) || ( iVar2 = *(int*)param_2 ),piVar9[1] < iVar2) {
            lVar8 = *(long*)( this + lVar5 * 0x18 + 0x658 );
         }
 else {
            if (( ( piVar9[2] <= *(int*)( param_2 + 0xc ) ) && ( *(int*)( param_2 + 8 ) <= piVar9[3] ) ) && ( *(int*)( param_2 + 0x14 ) == piVar9[5] )) {
               if (iVar2 <= iVar3) {
                  return iVar3;
               }

               return iVar2;
            }

            if (*(code**)( *(long*)param_3 + 0x38 ) == TType::getBasicType) {
               uVar4 = (uint)(byte)param_3[8];
            }
 else {
               uVar4 = ( **(code**)( *(long*)param_3 + 0x38 ) )();
            }

            lVar8 = *(long*)( this + lVar5 * 0x18 + 0x658 );
            piVar9 = (int*)( lVar8 + lVar10 );
            if (uVar4 != piVar9[4]) goto LAB_001029e0;
            if (*(code**)( *(long*)param_3 + 0x58 ) == TType::getQualifier) {
               TVar1 = param_3[0x1b];
               if (( (byte)TVar1 >> 5 & 1 ) != *(byte*)( piVar9 + 6 )) goto LAB_001029e0;
               LAB_001027b0:if (( (byte)TVar1 >> 6 & 1 ) != *(byte*)( (long)piVar9 + 0x19 )) goto LAB_001029e0;
               LAB_001027c0:pTVar7 = param_3 + 0x10;
            }
 else {
               lVar6 = ( **(code**)( *(long*)param_3 + 0x58 ) )();
               lVar8 = *(long*)( this + lVar5 * 0x18 + 0x658 );
               piVar9 = (int*)( lVar8 + lVar10 );
               if (( *(byte*)( lVar6 + 0xb ) >> 5 & 1 ) != *(byte*)( piVar9 + 6 )) goto LAB_001029e0;
               if (*(code**)( *(long*)param_3 + 0x58 ) == TType::getQualifier) {
                  TVar1 = param_3[0x1b];
                  goto LAB_001027b0;
               }

               lVar6 = ( **(code**)( *(long*)param_3 + 0x58 ) )();
               lVar8 = *(long*)( this + lVar5 * 0x18 + 0x658 );
               piVar9 = (int*)( lVar8 + lVar10 );
               if (( *(byte*)( lVar6 + 0xb ) >> 6 & 1 ) != *(byte*)( (long)piVar9 + 0x19 )) goto LAB_001029e0;
               if (*(code**)( *(long*)param_3 + 0x58 ) == TType::getQualifier) goto LAB_001027c0;
               pTVar7 = (TType*)( **(code**)( *(long*)param_3 + 0x58 ) )();
               lVar8 = *(long*)( this + lVar5 * 0x18 + 0x658 );
               piVar9 = (int*)( lVar8 + lVar10 );
            }

            if ((byte)pTVar7[0xb] >> 7 != *(byte*)( (long)piVar9 + 0x1a )) {
               LAB_001029e0:iVar3 = *piVar9;
               *param_4 = true;
               iVar2 = *(int*)param_2;
               if (*(int*)param_2 < iVar3) {
                  iVar2 = iVar3;
               }

               return iVar2;
            }

         }

         uVar11 = uVar11 + 1;
      }
 while ( uVar11 < ( ulong )(( *(long*)( this + lVar5 * 0x18 + 0x660 ) - lVar8 >> 2 ) * 0x6db6db6db6db6db7) );
   }

   if (( param_1 == 4 ) || ( param_1 == 1 )) {
      iVar3 = ( uint )(param_1 != 4) * 3 + 1;
      lVar8 = *(long*)( this + (long)iVar3 * 0x18 + 0x658 );
      if (lVar8 != *(long*)( this + (long)iVar3 * 0x18 + 0x660 )) {
         uVar11 = 0;
         do {
            piVar9 = (int*)( lVar8 + uVar11 * 0x1c );
            if (( *(int*)( param_2 + 4 ) < *piVar9 ) || ( piVar9[1] < *(int*)param_2 )) {
               lVar8 = *(long*)( this + (long)iVar3 * 0x18 + 0x658 );
            }
 else {
               if (*(code**)( *(long*)param_3 + 0x38 ) == TType::getBasicType) {
                  uVar4 = (uint)(byte)param_3[8];
               }
 else {
                  uVar4 = ( **(code**)( *(long*)param_3 + 0x38 ) )();
               }

               lVar8 = *(long*)( this + (long)iVar3 * 0x18 + 0x658 );
               piVar9 = (int*)( uVar11 * 0x1c + lVar8 );
               if (uVar4 != piVar9[4]) {
                  iVar3 = *piVar9;
                  *param_4 = true;
                  iVar2 = *(int*)param_2;
                  if (*(int*)param_2 < iVar3) {
                     iVar2 = iVar3;
                  }

                  return iVar2;
               }

            }

            uVar11 = uVar11 + 1;
         }
 while ( uVar11 < ( ulong )(( *(long*)( this + (long)iVar3 * 0x18 + 0x660 ) - lVar8 >> 2 ) * 0x6db6db6db6db6db7) );
      }

   }

   return -1;
}
/* glslang::TIntermediate::checkLocationRT(int, int) */int glslang::TIntermediate::checkLocationRT(TIntermediate *this, int param_1, int param_2) {
   long lVar1;
   ulong uVar2;
   lVar1 = *(long*)( this + (long)param_1 * 0x18 + 0x6d0 );
   if (*(long*)( this + (long)param_1 * 0x18 + 0x6d8 ) != lVar1) {
      uVar2 = 0;
      do {
         if (( *(int*)( lVar1 + uVar2 * 8 ) <= param_2 ) && ( param_2 <= *(int*)( lVar1 + 4 + uVar2 * 8 ) )) {
            return param_2;
         }

         uVar2 = uVar2 + 1;
      }
 while ( uVar2 < ( ulong )(*(long*)( this + (long)param_1 * 0x18 + 0x6d8 ) - lVar1 >> 3) );
   }

   return -1;
}
/* glslang::TIntermediate::addUsedConstantId(int) */int glslang::TIntermediate::addUsedConstantId(TIntermediate *this, int param_1) {
   TIntermediate *pTVar1;
   long *plVar2;
   long *plVar3;
   char cVar4;
   byte bVar5;
   TType TVar6;
   uint uVar7;
   int iVar8;
   int iVar9;
   long *plVar10;
   long *plVar11;
   TIntermediate *pTVar12;
   long lVar13;
   code *pcVar14;
   TType *pTVar15;
   ulong uVar16;
   ulong extraout_RDX;
   ulong uVar17;
   ulong uVar18;
   ulong uVar19;
   long *plVar20;
   ulong uVar21;
   int iVar22;
   long in_FS_OFFSET;
   TType aTStack_100[29];
   byte bStack_e3;
   long lStack_68;
   ulong uStack_60;
   TIntermediate *pTStack_58;
   ulong uStack_50;
   ulong uStack_48;
   long *plStack_40;
   if (*(long*)( this + 0x620 ) == 0) {
      plVar11 = *(long**)( this + 0x618 );
      plVar10 = plVar11;
      if (plVar11 != (long*)0x0) {
         do {
            if ((int)plVar10[1] == param_1) {
               return 0;
            }

            plVar10 = (long*)*plVar10;
         }
 while ( plVar10 != (long*)0x0 );
         do {
            if ((int)plVar11[1] == param_1) {
               return 1;
            }

            plVar11 = (long*)*plVar11;
         }
 while ( plVar11 != (long*)0x0 );
      }

      uVar16 = (ulong)(long)param_1 % *(ulong*)( this + 0x610 );
   }
 else {
      uVar17 = *(ulong*)( this + 0x610 );
      uVar16 = (ulong)(long)param_1 % uVar17;
      plVar11 = *(long**)( *(long*)( this + 0x608 ) + uVar16 * 8 );
      if (plVar11 != (long*)0x0) {
         plVar10 = (long*)*plVar11;
         iVar22 = *(int*)( plVar10 + 1 );
         plVar20 = plVar11;
         plVar3 = plVar10;
         iVar9 = iVar22;
         while (iVar9 != param_1) {
            plVar2 = (long*)*plVar3;
            if (( plVar2 == (long*)0x0 ) || ( iVar9 = (int)plVar2[1] ),plVar20 = plVar3,plVar3 = plVar2,uVar16 != (ulong)(long)iVar9 % uVar17) goto joined_r0x00102b9f;
         }
;
         ;;
         if (*plVar20 != 0) {
            return 0;
         }

         joined_r0x00102b9f:do {
            if (iVar22 == param_1) {
               if (*plVar11 != 0) {
                  return 1;
               }

               break;
            }

            plVar20 = (long*)*plVar10;
            if (( plVar20 == (long*)0x0 ) || ( iVar22 = (int)plVar20[1] ),plVar11 = plVar10,plVar10 = plVar20,uVar16 != (ulong)(long)iVar22 % uVar17) break;
         }
 while ( true );
      }

   }

   uVar21 = (ulong)param_1;
   plStack_40 = (long*)0x102bfc;
   plVar11 = (long*)operator_new(0x10);
   uVar17 = *(ulong*)( this + 0x620 );
   uVar19 = *(ulong*)( this + 0x610 );
   *(int*)( plVar11 + 1 ) = param_1;
   pTVar12 = this + 0x628;
   *plVar11 = 0;
   plStack_40 = (long*)0x102c28;
   cVar4 = std::__detail::_Prime_rehash_policy::_M_need_rehash((ulong)pTVar12, uVar19, uVar17);
   if (cVar4 == '\0') {
      pTVar12 = *(TIntermediate**)( this + 0x608 );
      goto LAB_00102c36;
   }

   if (extraout_RDX == 1) {
      pTVar12 = this + 0x638;
      *(undefined8*)( this + 0x638 ) = 0;
   }
 else {
      if (extraout_RDX >> 0x3c != 0) {
         uVar17 = extraout_RDX >> 0x3d;
         if (uVar17 != 0) {
            plStack_40 = (long*)0x102db1;
            std::__throw_bad_array_new_length();
         }

         plStack_40 = (long*)0x102db6;
         std::__throw_bad_alloc();
         uVar18 = uVar19 & 0xffffffff;
         lVar13 = *(long*)pTVar12;
         lStack_68 = *(long*)( in_FS_OFFSET + 0x28 );
         uStack_60 = uVar17;
         pTStack_58 = this;
         uStack_50 = uVar21;
         uStack_48 = uVar16;
         plStack_40 = plVar11;
         if (*(code**)( lVar13 + 0xe8 ) != TType::isArray) {
            cVar4 = ( **(code**)( lVar13 + 0xe8 ) )();
            if (cVar4 == '\0') {
               lVar13 = *(long*)pTVar12;
               goto LAB_00102e10;
            }

            LAB_00102f9a:TType::TType(aTStack_100, (TType*)pTVar12, 0, false);
            pcVar14 = *(code**)( *(long*)pTVar12 + 0xf0 );
            if (pcVar14 == TType::isSizedArray) {
               pcVar14 = *(code**)( *(long*)pTVar12 + 0xe8 );
               if (pcVar14 == TType::isArray) {
                  lVar13 = *(long*)( (TType*)pTVar12 + 0x60 );
                  if (lVar13 != 0) {
                     LAB_00102fdb:if (**(int**)( *(long*)( lVar13 + 8 ) + 8 ) != 0) goto LAB_00102fe9;
                  }

               }
 else {
                  cVar4 = ( *pcVar14 )(pTVar12);
                  if (cVar4 != '\0') {
                     lVar13 = *(long*)( (TType*)pTVar12 + 0x60 );
                     goto LAB_00102fdb;
                  }

               }

               LAB_00103058:bStack_e3 = bStack_e3 & 0xfb;
               iVar9 = computeTypeLocationSize(aTStack_100, uVar18);
               goto LAB_00102f00;
            }

            cVar4 = ( *pcVar14 )(pTVar12);
            if (cVar4 == '\0') goto LAB_00103058;
            LAB_00102fe9:pTVar15 = (TType*)pTVar12 + 0x10;
            if (*(code**)( *(long*)pTVar12 + 0x58 ) != TType::getQualifier) {
               pTVar15 = (TType*)( **(code**)( *(long*)pTVar12 + 0x58 ) )(pTVar12);
            }

            if (( (byte)pTVar15[0xd] & 4 ) != 0) goto LAB_00103058;
            pcVar14 = *(code**)( *(long*)pTVar12 + 0x78 );
            if (pcVar14 == TType::getOuterArraySize) {
               uVar7 = **(uint**)( *(long*)( *(long*)( (TType*)pTVar12 + 0x60 ) + 8 ) + 8 );
            }
 else {
               LAB_00103260:uVar7 = ( *pcVar14 )(pTVar12);
            }

            LAB_00103030:iVar9 = computeTypeLocationSize(aTStack_100, uVar18);
            iVar9 = uVar7 * iVar9;
            goto LAB_00102f00;
         }

         if (*(long*)( (TType*)pTVar12 + 0x60 ) != 0) goto LAB_00102f9a;
         LAB_00102e10:if (*(code**)( lVar13 + 0x128 ) == TType::isStruct) {
            if (( byte )((char)( (TType*)pTVar12 )[8] - 0xfU) < 2) {
               LAB_00102f30:iVar9 = 0;
               if (0 < (int)( *(long*)( *(long*)( (TType*)pTVar12 + 0x68 ) + 0x10 ) - *(long*)( *(long*)( (TType*)pTVar12 + 0x68 ) + 8 ) >> 5 )) {
                  iVar22 = 0;
                  do {
                     TType::TType(aTStack_100, (TType*)pTVar12, iVar22, false);
                     iVar22 = iVar22 + 1;
                     iVar8 = computeTypeLocationSize(aTStack_100, uVar18);
                     iVar9 = iVar9 + iVar8;
                  }
 while ( iVar22 < (int)( *(long*)( *(long*)( (TType*)pTVar12 + 0x68 ) + 0x10 ) - *(long*)( *(long*)( (TType*)pTVar12 + 0x68 ) + 8 ) >> 5 ) );
               }

               goto LAB_00102f00;
            }

         }
 else {
            cVar4 = ( **(code**)( lVar13 + 0x128 ) )(pTVar12);
            if (cVar4 != '\0') goto LAB_00102f30;
            lVar13 = *(long*)pTVar12;
         }

         if (*(code**)( lVar13 + 0xc0 ) != TType::isScalar) {
            cVar4 = ( **(code**)( lVar13 + 0xc0 ) )(pTVar12);
            if (cVar4 == '\0') {
               lVar13 = *(long*)pTVar12;
               goto LAB_001030d0;
            }

            goto LAB_0010310d;
         }

         if (*(code**)( lVar13 + 0xd8 ) == TType::isVector) {
            if (1 < ( ( byte )((TType*)pTVar12)[9] & 0xf )) goto LAB_00102e73;
            TVar6 = ( (TType*)pTVar12 )[10];
            if (( (byte)TVar6 & 0x10 ) == 0) goto LAB_0010308c;
            LAB_0010314b:bVar5 = (byte)TVar6 >> 4 & 1;
            LAB_001030e4:if (bVar5 != 0) goto LAB_00102e73;
            if (*(code**)( lVar13 + 0xe0 ) == TType::isMatrix) {
               if (0xf < ( byte )((TType*)pTVar12)[9]) {
                  LAB_001031fd:TType::TType(aTStack_100, (TType*)pTVar12, 0, false);
                  pcVar14 = *(code**)( *(long*)pTVar12 + 0x68 );
                  if (pcVar14 != TType::getMatrixCols) goto LAB_00103260;
                  uVar7 = ( uint )(( byte )((TType*)pTVar12)[9] >> 4);
                  goto LAB_00103030;
               }

            }
 else {
               cVar4 = ( **(code**)( lVar13 + 0xe0 ) )(pTVar12);
               if (cVar4 != '\0') goto LAB_001031fd;
            }

         }
 else {
            cVar4 = ( **(code**)( lVar13 + 0xd8 ) )(pTVar12);
            lVar13 = *(long*)pTVar12;
            if (cVar4 == '\0') {
               LAB_0010308c:if (*(code**)( lVar13 + 0xe0 ) != TType::isMatrix) {
                  cVar4 = ( **(code**)( lVar13 + 0xe0 ) )(pTVar12);
                  lVar13 = *(long*)pTVar12;
                  if (cVar4 == '\0') goto LAB_001030a9;
                  goto LAB_001030d0;
               }

               if (0xf < ( byte )((TType*)pTVar12)[9]) goto LAB_001030d0;
               LAB_001030a9:if (*(code**)( lVar13 + 0x128 ) != TType::isStruct) {
                  cVar4 = ( **(code**)( lVar13 + 0x128 ) )(pTVar12);
                  lVar13 = *(long*)pTVar12;
                  if (cVar4 == '\0') goto LAB_001031b0;
                  goto LAB_001030d0;
               }

               if (( byte )((char)( (TType*)pTVar12 )[8] - 0xfU) < 2) goto LAB_001030d0;
               LAB_001031b0:if (*(code**)( lVar13 + 0xe8 ) == TType::isArray) {
                  if (*(long*)( (TType*)pTVar12 + 0x60 ) != 0) goto LAB_001030d0;
               }
 else {
                  cVar4 = ( **(code**)( lVar13 + 0xe8 ) )(pTVar12);
                  if (cVar4 != '\0') {
                     lVar13 = *(long*)pTVar12;
                     goto LAB_001030d0;
                  }

               }

               goto LAB_0010310d;
            }

            LAB_001030d0:if (*(code**)( lVar13 + 0xd8 ) != TType::isVector) {
               bVar5 = ( **(code**)( lVar13 + 0xd8 ) )(pTVar12);
               lVar13 = *(long*)pTVar12;
               goto LAB_001030e4;
            }

            if (( ( byte )((TType*)pTVar12)[9] & 0xf ) < 2) {
               TVar6 = ( (TType*)pTVar12 )[10];
               goto LAB_0010314b;
            }

            LAB_00102e73:if ((int)uVar19 == 0) {
               if (*(code**)( lVar13 + 0x58 ) == TType::getQualifier) {
                  pTVar15 = (TType*)pTVar12 + 0x10;
               }
 else {
                  pTVar15 = (TType*)( **(code**)( lVar13 + 0x58 ) )(pTVar12);
               }

               if (( ( byte )((byte)pTVar15[8] & 0x7f) < 0x1c ) && ( ( 0xe300008UL >> ( ( ulong )((byte)pTVar15[8] & 0x7f) & 0x3f ) & 1 ) != 0 )) goto LAB_0010310d;
               lVar13 = *(long*)pTVar12;
            }

            if (*(code**)( lVar13 + 0x38 ) == TType::getBasicType) {
               uVar7 = ( uint )(byte)((TType*)pTVar12)[8];
            }
 else {
               uVar7 = ( **(code**)( lVar13 + 0x38 ) )(pTVar12);
            }

            if (uVar7 == 2) {
               if (*(code**)( *(long*)pTVar12 + 0x60 ) == TType::getVectorSize) {
                  uVar7 = ( byte )((TType*)pTVar12)[9] & 0xf;
               }
 else {
                  uVar7 = ( **(code**)( *(long*)pTVar12 + 0x60 ) )(pTVar12);
               }

               iVar9 = 2;
               if (2 < (int)uVar7) goto LAB_00102f00;
            }

         }

         LAB_0010310d:iVar9 = 1;
         LAB_00102f00:if (lStack_68 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return iVar9;
      }

      plStack_40 = (long*)0x102c86;
      pTVar12 = (TIntermediate*)operator_new(extraout_RDX * 8);
      plStack_40 = (long*)0x102c96;
      memset(pTVar12, 0, extraout_RDX * 8);
   }

   plVar10 = *(long**)( this + 0x618 );
   *(undefined8*)( this + 0x618 ) = 0;
   uVar17 = 0;
   while (uVar16 = uVar17,plVar20 = plVar10,plVar10 != (long*)0x0) {
      while (true) {
         plVar10 = (long*)*plVar20;
         uVar17 = (ulong)(long)(int)plVar20[1] % extraout_RDX;
         pTVar1 = pTVar12 + uVar17 * 8;
         if (*(long**)pTVar1 == (long*)0x0) break;
         *plVar20 = **(long**)pTVar1;
         **(undefined8**)pTVar1 = plVar20;
         plVar20 = plVar10;
         if (plVar10 == (long*)0x0) goto LAB_00102ce9;
      }
;
      ;;
      *plVar20 = *(long*)( this + 0x618 );
      *(long**)( this + 0x618 ) = plVar20;
      *(TIntermediate**)pTVar1 = this + 0x618;
      if (*plVar20 != 0) {
         *(long**)( pTVar12 + uVar16 * 8 ) = plVar20;
      }

   }
;
   ;;
   LAB_00102ce9:if (*(TIntermediate**)( this + 0x608 ) != this + 0x638) {
      plStack_40 = (long*)0x102d09;
      operator_delete(*(TIntermediate**)( this + 0x608 ), *(long*)( this + 0x610 ) * 8);
   }

   *(ulong*)( this + 0x610 ) = extraout_RDX;
   uVar16 = uVar21 % extraout_RDX;
   *(TIntermediate**)( this + 0x608 ) = pTVar12;
   LAB_00102c36:pTVar1 = pTVar12 + uVar16 * 8;
   if (*(long**)pTVar1 == (long*)0x0) {
      lVar13 = *(long*)( this + 0x618 );
      *(long**)( this + 0x618 ) = plVar11;
      *plVar11 = lVar13;
      if (lVar13 != 0) {
         *(long**)( pTVar12 + ( ( ulong )(long) * (int*)( lVar13 + 8 ) % *(ulong*)( this + 0x610 ) ) * 8 ) = plVar11;
      }

      *(TIntermediate**)pTVar1 = this + 0x618;
   }
 else {
      *plVar11 = **(long**)pTVar1;
      **(undefined8**)pTVar1 = plVar11;
   }

   *(long*)( this + 0x620 ) = *(long*)( this + 0x620 ) + 1;
   return 1;
}
/* glslang::TIntermediate::computeTypeLocationSize(glslang::TType const&, EShLanguage) */int glslang::TIntermediate::computeTypeLocationSize(TType *param_1, int param_2) {
   byte bVar1;
   TType TVar2;
   char cVar3;
   uint uVar4;
   int iVar5;
   int iVar6;
   long lVar7;
   code *pcVar8;
   TType *pTVar9;
   int iVar10;
   long in_FS_OFFSET;
   TType aTStack_c8[29];
   byte local_ab;
   long local_30;
   lVar7 = *(long*)param_1;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( lVar7 + 0xe8 ) != TType::isArray) {
      cVar3 = ( **(code**)( lVar7 + 0xe8 ) )();
      if (cVar3 == '\0') {
         lVar7 = *(long*)param_1;
         goto LAB_00102e10;
      }

      LAB_00102f9a:TType::TType(aTStack_c8, param_1, 0, false);
      pcVar8 = *(code**)( *(long*)param_1 + 0xf0 );
      if (pcVar8 == TType::isSizedArray) {
         pcVar8 = *(code**)( *(long*)param_1 + 0xe8 );
         if (pcVar8 == TType::isArray) {
            lVar7 = *(long*)( param_1 + 0x60 );
            if (lVar7 != 0) {
               LAB_00102fdb:if (**(int**)( *(long*)( lVar7 + 8 ) + 8 ) != 0) goto LAB_00102fe9;
            }

         }
 else {
            cVar3 = ( *pcVar8 )(param_1);
            if (cVar3 != '\0') {
               lVar7 = *(long*)( param_1 + 0x60 );
               goto LAB_00102fdb;
            }

         }

         LAB_00103058:local_ab = local_ab & 0xfb;
         iVar6 = computeTypeLocationSize(aTStack_c8, param_2);
         goto LAB_00102f00;
      }

      cVar3 = ( *pcVar8 )(param_1);
      if (cVar3 == '\0') goto LAB_00103058;
      LAB_00102fe9:pTVar9 = param_1 + 0x10;
      if (*(code**)( *(long*)param_1 + 0x58 ) != TType::getQualifier) {
         pTVar9 = (TType*)( **(code**)( *(long*)param_1 + 0x58 ) )(param_1);
      }

      if (( (byte)pTVar9[0xd] & 4 ) != 0) goto LAB_00103058;
      pcVar8 = *(code**)( *(long*)param_1 + 0x78 );
      if (pcVar8 == TType::getOuterArraySize) {
         uVar4 = **(uint**)( *(long*)( *(long*)( param_1 + 0x60 ) + 8 ) + 8 );
      }
 else {
         LAB_00103260:uVar4 = ( *pcVar8 )(param_1);
      }

      LAB_00103030:iVar6 = computeTypeLocationSize(aTStack_c8, param_2);
      iVar6 = uVar4 * iVar6;
      goto LAB_00102f00;
   }

   if (*(long*)( param_1 + 0x60 ) != 0) goto LAB_00102f9a;
   LAB_00102e10:if (*(code**)( lVar7 + 0x128 ) == TType::isStruct) {
      if (( byte )((char)param_1[8] - 0xfU) < 2) {
         LAB_00102f30:iVar6 = 0;
         if (0 < (int)( *(long*)( *(long*)( param_1 + 0x68 ) + 0x10 ) - *(long*)( *(long*)( param_1 + 0x68 ) + 8 ) >> 5 )) {
            iVar10 = 0;
            do {
               TType::TType(aTStack_c8, param_1, iVar10, false);
               iVar10 = iVar10 + 1;
               iVar5 = computeTypeLocationSize(aTStack_c8, param_2);
               iVar6 = iVar6 + iVar5;
            }
 while ( iVar10 < (int)( *(long*)( *(long*)( param_1 + 0x68 ) + 0x10 ) - *(long*)( *(long*)( param_1 + 0x68 ) + 8 ) >> 5 ) );
         }

         goto LAB_00102f00;
      }

   }
 else {
      cVar3 = ( **(code**)( lVar7 + 0x128 ) )(param_1);
      if (cVar3 != '\0') goto LAB_00102f30;
      lVar7 = *(long*)param_1;
   }

   if (*(code**)( lVar7 + 0xc0 ) != TType::isScalar) {
      cVar3 = ( **(code**)( lVar7 + 0xc0 ) )(param_1);
      if (cVar3 == '\0') {
         lVar7 = *(long*)param_1;
         goto LAB_001030d0;
      }

      goto LAB_0010310d;
   }

   if (*(code**)( lVar7 + 0xd8 ) == TType::isVector) {
      if (1 < ( (byte)param_1[9] & 0xf )) goto LAB_00102e73;
      TVar2 = param_1[10];
      if (( (byte)TVar2 & 0x10 ) == 0) goto LAB_0010308c;
      LAB_0010314b:bVar1 = (byte)TVar2 >> 4 & 1;
      LAB_001030e4:if (bVar1 != 0) goto LAB_00102e73;
      if (*(code**)( lVar7 + 0xe0 ) == TType::isMatrix) {
         if (0xf < (byte)param_1[9]) {
            LAB_001031fd:TType::TType(aTStack_c8, param_1, 0, false);
            pcVar8 = *(code**)( *(long*)param_1 + 0x68 );
            if (pcVar8 != TType::getMatrixCols) goto LAB_00103260;
            uVar4 = ( uint )((byte)param_1[9] >> 4);
            goto LAB_00103030;
         }

      }
 else {
         cVar3 = ( **(code**)( lVar7 + 0xe0 ) )(param_1);
         if (cVar3 != '\0') goto LAB_001031fd;
      }

   }
 else {
      cVar3 = ( **(code**)( lVar7 + 0xd8 ) )(param_1);
      lVar7 = *(long*)param_1;
      if (cVar3 == '\0') {
         LAB_0010308c:if (*(code**)( lVar7 + 0xe0 ) != TType::isMatrix) {
            cVar3 = ( **(code**)( lVar7 + 0xe0 ) )(param_1);
            lVar7 = *(long*)param_1;
            if (cVar3 == '\0') goto LAB_001030a9;
            goto LAB_001030d0;
         }

         if (0xf < (byte)param_1[9]) goto LAB_001030d0;
         LAB_001030a9:if (*(code**)( lVar7 + 0x128 ) != TType::isStruct) {
            cVar3 = ( **(code**)( lVar7 + 0x128 ) )(param_1);
            lVar7 = *(long*)param_1;
            if (cVar3 == '\0') goto LAB_001031b0;
            goto LAB_001030d0;
         }

         if (( byte )((char)param_1[8] - 0xfU) < 2) goto LAB_001030d0;
         LAB_001031b0:if (*(code**)( lVar7 + 0xe8 ) == TType::isArray) {
            if (*(long*)( param_1 + 0x60 ) != 0) goto LAB_001030d0;
         }
 else {
            cVar3 = ( **(code**)( lVar7 + 0xe8 ) )(param_1);
            if (cVar3 != '\0') {
               lVar7 = *(long*)param_1;
               goto LAB_001030d0;
            }

         }

         goto LAB_0010310d;
      }

      LAB_001030d0:if (*(code**)( lVar7 + 0xd8 ) != TType::isVector) {
         bVar1 = ( **(code**)( lVar7 + 0xd8 ) )(param_1);
         lVar7 = *(long*)param_1;
         goto LAB_001030e4;
      }

      if (( (byte)param_1[9] & 0xf ) < 2) {
         TVar2 = param_1[10];
         goto LAB_0010314b;
      }

      LAB_00102e73:if (param_2 == 0) {
         if (*(code**)( lVar7 + 0x58 ) == TType::getQualifier) {
            pTVar9 = param_1 + 0x10;
         }
 else {
            pTVar9 = (TType*)( **(code**)( lVar7 + 0x58 ) )(param_1);
         }

         if (( ( byte )((byte)pTVar9[8] & 0x7f) < 0x1c ) && ( ( 0xe300008UL >> ( ( ulong )((byte)pTVar9[8] & 0x7f) & 0x3f ) & 1 ) != 0 )) goto LAB_0010310d;
         lVar7 = *(long*)param_1;
      }

      if (*(code**)( lVar7 + 0x38 ) == TType::getBasicType) {
         uVar4 = (uint)(byte)param_1[8];
      }
 else {
         uVar4 = ( **(code**)( lVar7 + 0x38 ) )(param_1);
      }

      if (uVar4 == 2) {
         if (*(code**)( *(long*)param_1 + 0x60 ) == TType::getVectorSize) {
            uVar4 = (byte)param_1[9] & 0xf;
         }
 else {
            uVar4 = ( **(code**)( *(long*)param_1 + 0x60 ) )(param_1);
         }

         iVar6 = 2;
         if (2 < (int)uVar4) goto LAB_00102f00;
      }

   }

   LAB_0010310d:iVar6 = 1;
   LAB_00102f00:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar6;
}
/* glslang::TIntermediate::computeTypeUniformLocationSize(glslang::TType const&) */int glslang::TIntermediate::computeTypeUniformLocationSize(TType *param_1) {
   code *pcVar1;
   char cVar2;
   int iVar3;
   long lVar4;
   int iVar5;
   int iVar6;
   long in_FS_OFFSET;
   TType aTStack_c8[152];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar4 = *(long*)param_1;
   if (*(code**)( lVar4 + 0xe8 ) == TType::isArray) {
      if (*(long*)( param_1 + 0x60 ) != 0) {
         LAB_001033ba:TType::TType(aTStack_c8, param_1, 0, false);
         pcVar1 = *(code**)( *(long*)param_1 + 0xf0 );
         if (pcVar1 == TType::isSizedArray) {
            pcVar1 = *(code**)( *(long*)param_1 + 0xe8 );
            if (pcVar1 == TType::isArray) {
               lVar4 = *(long*)( param_1 + 0x60 );
               if (lVar4 != 0) {
                  LAB_001033fb:if (**(int**)( *(long*)( lVar4 + 8 ) + 8 ) != 0) goto LAB_00103409;
               }

            }
 else {
               cVar2 = ( *pcVar1 )(param_1);
               if (cVar2 != '\0') {
                  lVar4 = *(long*)( param_1 + 0x60 );
                  goto LAB_001033fb;
               }

            }

            LAB_00103450:iVar5 = computeTypeUniformLocationSize(aTStack_c8);
         }
 else {
            cVar2 = ( *pcVar1 )(param_1);
            if (cVar2 == '\0') goto LAB_00103450;
            LAB_00103409:if (*(code**)( *(long*)param_1 + 0x78 ) == TType::getOuterArraySize) {
               iVar5 = **(int**)( *(long*)( *(long*)( param_1 + 0x60 ) + 8 ) + 8 );
            }
 else {
               iVar5 = ( **(code**)( *(long*)param_1 + 0x78 ) )(param_1);
            }

            iVar6 = computeTypeUniformLocationSize(aTStack_c8);
            iVar5 = iVar5 * iVar6;
         }

         goto LAB_0010331d;
      }

   }
 else {
      cVar2 = ( **(code**)( lVar4 + 0xe8 ) )();
      if (cVar2 != '\0') goto LAB_001033ba;
      lVar4 = *(long*)param_1;
   }

   if (*(code**)( lVar4 + 0x128 ) == TType::isStruct) {
      if (( byte )((char)param_1[8] - 0xfU) < 2) {
         LAB_00103351:iVar5 = 0;
         if (0 < (int)( *(long*)( *(long*)( param_1 + 0x68 ) + 0x10 ) - *(long*)( *(long*)( param_1 + 0x68 ) + 8 ) >> 5 )) {
            iVar6 = 0;
            iVar5 = 0;
            do {
               TType::TType(aTStack_c8, param_1, iVar6, false);
               iVar6 = iVar6 + 1;
               iVar3 = computeTypeUniformLocationSize(aTStack_c8);
               iVar5 = iVar5 + iVar3;
            }
 while ( iVar6 < (int)( *(long*)( *(long*)( param_1 + 0x68 ) + 0x10 ) - *(long*)( *(long*)( param_1 + 0x68 ) + 8 ) >> 5 ) );
         }

         goto LAB_0010331d;
      }

   }
 else {
      cVar2 = ( **(code**)( lVar4 + 0x128 ) )(param_1);
      if (cVar2 != '\0') goto LAB_00103351;
   }

   iVar5 = 1;
   LAB_0010331d:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar5;
}
/* glslang::TIntermediate::computeTypeXfbSize(glslang::TType const&, bool&, bool&, bool&) const */uint glslang::TIntermediate::computeTypeXfbSize(TIntermediate *this, TType *param_1, bool *param_2, bool *param_3, bool *param_4) {
   byte bVar1;
   TType TVar2;
   char cVar3;
   int iVar4;
   int iVar5;
   uint uVar6;
   long lVar7;
   long lVar8;
   uint uVar9;
   long in_FS_OFFSET;
   char local_ea;
   char local_e9;
   bool local_db;
   bool local_da;
   bool local_d9;
   TType local_d8[152];
   long local_40;
   lVar8 = *(long*)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( lVar8 + 0xf0 ) == TType::isSizedArray) {
      if (*(code**)( lVar8 + 0xe8 ) == TType::isArray) {
         lVar7 = *(long*)( param_1 + 0x60 );
         if (lVar7 != 0) goto LAB_00103519;
         LAB_001035c1:if (*(code**)( lVar8 + 0x128 ) == TType::isStruct) {
            if (( byte )((char)param_1[8] - 0xfU) < 2) {
               LAB_001036c0:uVar9 = 0;
               if (0 < (int)( *(long*)( *(long*)( param_1 + 0x68 ) + 0x10 ) - *(long*)( *(long*)( param_1 + 0x68 ) + 8 ) >> 5 )) {
                  local_e9 = '\0';
                  local_ea = '\0';
                  cVar3 = '\0';
                  uVar6 = uVar9;
                  uVar9 = 0;
                  do {
                     TType::TType(local_d8, param_1, uVar6, false);
                     local_db = false;
                     local_da = false;
                     local_d9 = false;
                     iVar5 = computeTypeXfbSize(this, local_d8, &local_db, &local_da, &local_d9);
                     if (local_db == false) {
                        if (local_da == false) {
                           if (local_d9 != false) {
                              uVar9 = uVar9 + 1 & 0xfffffffe;
                              local_e9 = local_d9;
                           }

                        }
 else {
                           uVar9 = uVar9 + 3 & 0xfffffffc;
                           local_ea = local_da;
                        }

                     }
 else {
                        uVar9 = uVar9 + 7 & 0xfffffff8;
                        cVar3 = local_db;
                     }

                     uVar9 = uVar9 + iVar5;
                     uVar6 = uVar6 + 1;
                  }
 while ( (int)uVar6 < (int)( *(long*)( *(long*)( param_1 + 0x68 ) + 0x10 ) - *(long*)( *(long*)( param_1 + 0x68 ) + 8 ) >> 5 ) );
                  if (cVar3 == '\0') {
                     if (local_ea == '\0') {
                        if (local_e9 != '\0') {
                           *param_4 = true;
                           uVar9 = uVar9 + 1 & 0xfffffffe;
                        }

                     }
 else {
                        uVar9 = uVar9 + 3 & 0xfffffffc;
                        *param_3 = true;
                     }

                  }
 else {
                     uVar9 = uVar9 + 7 & 0xfffffff8;
                     *param_2 = true;
                  }

               }

               goto LAB_00103580;
            }

         }
 else {
            cVar3 = ( **(code**)( lVar8 + 0x128 ) )(param_1);
            if (cVar3 != '\0') goto LAB_001036c0;
            lVar8 = *(long*)param_1;
         }

         if (*(code**)( lVar8 + 0xc0 ) != TType::isScalar) {
            cVar3 = ( **(code**)( lVar8 + 0xc0 ) )(param_1);
            lVar8 = *(long*)param_1;
            if (cVar3 == '\0') goto LAB_001037df;
            goto LAB_00103901;
         }

         if (*(code**)( lVar8 + 0xd8 ) == TType::isVector) {
            if (1 < ( (byte)param_1[9] & 0xf )) goto LAB_00103626;
            TVar2 = param_1[10];
            if (( (byte)TVar2 & 0x10 ) == 0) goto LAB_001037bd;
            LAB_001039a1:bVar1 = (byte)TVar2 >> 4 & 1;
            LAB_001039a7:if (bVar1 != 0) goto LAB_00103626;
            if (*(code**)( lVar8 + 0xe0 ) == TType::isMatrix) {
               if ((byte)param_1[9] < 0x10) goto LAB_00103901;
               LAB_001039d1:if (*(code**)( lVar8 + 0x68 ) == TType::getMatrixCols) {
                  uVar9 = ( uint )((byte)param_1[9] >> 4);
               }
 else {
                  uVar9 = ( **(code**)( lVar8 + 0x68 ) )(param_1);
                  lVar8 = *(long*)param_1;
               }

               if (*(code**)( lVar8 + 0x70 ) == TType::getMatrixRows) {
                  uVar6 = (byte)param_1[10] & 0xf;
               }
 else {
                  uVar6 = ( **(code**)( lVar8 + 0x70 ) )(param_1);
                  lVar8 = *(long*)param_1;
               }

               uVar9 = uVar9 * uVar6;
            }
 else {
               cVar3 = ( **(code**)( lVar8 + 0xe0 ) )(param_1);
               lVar8 = *(long*)param_1;
               if (cVar3 != '\0') goto LAB_001039d1;
               LAB_00103901:uVar9 = 1;
            }

         }
 else {
            cVar3 = ( **(code**)( lVar8 + 0xd8 ) )(param_1);
            lVar8 = *(long*)param_1;
            if (cVar3 == '\0') {
               LAB_001037bd:if (*(code**)( lVar8 + 0xe0 ) != TType::isMatrix) {
                  cVar3 = ( **(code**)( lVar8 + 0xe0 ) )(param_1);
                  lVar8 = *(long*)param_1;
                  if (cVar3 == '\0') goto LAB_00103921;
                  goto LAB_001037df;
               }

               if (0xf < (byte)param_1[9]) goto LAB_001037df;
               LAB_00103921:if (*(code**)( lVar8 + 0x128 ) != TType::isStruct) {
                  cVar3 = ( **(code**)( lVar8 + 0x128 ) )(param_1);
                  lVar8 = *(long*)param_1;
                  if (cVar3 == '\0') goto LAB_00103941;
                  goto LAB_001037df;
               }

               if (( byte )((char)param_1[8] - 0xfU) < 2) goto LAB_001037df;
               LAB_00103941:if (*(code**)( lVar8 + 0xe8 ) == TType::isArray) {
                  if (*(long*)( param_1 + 0x60 ) != 0) goto LAB_001037df;
               }
 else {
                  cVar3 = ( **(code**)( lVar8 + 0xe8 ) )(param_1);
                  lVar8 = *(long*)param_1;
                  if (cVar3 != '\0') goto LAB_001037df;
               }

               goto LAB_00103901;
            }

            LAB_001037df:if (*(code**)( lVar8 + 0xd8 ) != TType::isVector) {
               bVar1 = ( **(code**)( lVar8 + 0xd8 ) )(param_1);
               lVar8 = *(long*)param_1;
               goto LAB_001039a7;
            }

            if (( (byte)param_1[9] & 0xf ) < 2) {
               TVar2 = param_1[10];
               goto LAB_001039a1;
            }

            LAB_00103626:if (*(code**)( lVar8 + 0x60 ) == TType::getVectorSize) {
               uVar9 = (byte)param_1[9] & 0xf;
            }
 else {
               uVar9 = ( **(code**)( lVar8 + 0x60 ) )(param_1);
               lVar8 = *(long*)param_1;
            }

         }

         if (*(code**)( lVar8 + 0x38 ) == TType::getBasicType) {
            TVar2 = param_1[8];
            if (TVar2 != (TType)0x2) {
               LAB_00103669:if (TVar2 != (TType)0xa) {
                  LAB_00103672:if (TVar2 != (TType)0xb) {
                     LAB_0010367b:if (TVar2 != (TType)0x3) {
                        LAB_00103684:if (TVar2 != (TType)0x6) {
                           LAB_0010368d:if (TVar2 != (TType)0x7) {
                              LAB_00103696:uVar6 = (uint)(byte)TVar2;
                              if (TVar2 == (TType)0x4) goto LAB_00103580;
                              LAB_0010369f:if (uVar6 != 5) {
                                 uVar9 = uVar9 << 2;
                                 *param_3 = true;
                              }

                              goto LAB_00103580;
                           }

                        }

                     }

                     LAB_001038e0:*param_4 = true;
                     uVar9 = uVar9 * 2;
                     goto LAB_00103580;
                  }

               }

            }

         }
 else {
            iVar5 = ( **(code**)( lVar8 + 0x38 ) )(param_1);
            if (iVar5 != 2) {
               if (*(code**)( *(long*)param_1 + 0x38 ) == TType::getBasicType) {
                  TVar2 = param_1[8];
                  goto LAB_00103669;
               }

               iVar5 = ( **(code**)( *(long*)param_1 + 0x38 ) )(param_1);
               if (iVar5 != 10) {
                  if (*(code**)( *(long*)param_1 + 0x38 ) == TType::getBasicType) {
                     TVar2 = param_1[8];
                     goto LAB_00103672;
                  }

                  iVar5 = ( **(code**)( *(long*)param_1 + 0x38 ) )(param_1);
                  if (iVar5 != 0xb) {
                     if (*(code**)( *(long*)param_1 + 0x38 ) == TType::getBasicType) {
                        TVar2 = param_1[8];
                        goto LAB_0010367b;
                     }

                     iVar5 = ( **(code**)( *(long*)param_1 + 0x38 ) )(param_1);
                     if (iVar5 != 3) {
                        if (*(code**)( *(long*)param_1 + 0x38 ) == TType::getBasicType) {
                           TVar2 = param_1[8];
                           goto LAB_00103684;
                        }

                        iVar5 = ( **(code**)( *(long*)param_1 + 0x38 ) )(param_1);
                        if (iVar5 != 6) {
                           if (*(code**)( *(long*)param_1 + 0x38 ) == TType::getBasicType) {
                              TVar2 = param_1[8];
                              goto LAB_0010368d;
                           }

                           iVar5 = ( **(code**)( *(long*)param_1 + 0x38 ) )(param_1);
                           if (iVar5 != 7) {
                              if (*(code**)( *(long*)param_1 + 0x38 ) == TType::getBasicType) {
                                 TVar2 = param_1[8];
                                 goto LAB_00103696;
                              }

                              iVar5 = ( **(code**)( *(long*)param_1 + 0x38 ) )(param_1);
                              if (iVar5 == 4) goto LAB_00103580;
                              if (*(code**)( *(long*)param_1 + 0x38 ) == TType::getBasicType) {
                                 uVar6 = (uint)(byte)param_1[8];
                              }
 else {
                                 uVar6 = ( **(code**)( *(long*)param_1 + 0x38 ) )(param_1);
                              }

                              goto LAB_0010369f;
                           }

                        }

                     }

                     goto LAB_001038e0;
                  }

               }

            }

         }

         uVar9 = uVar9 << 3;
         *param_2 = true;
         goto LAB_00103580;
      }

      cVar3 = ( **(code**)( lVar8 + 0xe8 ) )(param_1);
      if (cVar3 == '\0') goto LAB_001035bd;
      lVar7 = *(long*)( param_1 + 0x60 );
      LAB_00103519:if (**(int**)( *(long*)( lVar7 + 8 ) + 8 ) == 0) goto LAB_001035bd;
   }
 else {
      cVar3 = ( **(code**)( lVar8 + 0xf0 ) )(param_1);
      if (cVar3 == '\0') {
         LAB_001035bd:lVar8 = *(long*)param_1;
         goto LAB_001035c1;
      }

   }

   TType::TType(local_d8, param_1, 0, false);
   if (*(code**)( *(long*)param_1 + 0x78 ) == TType::getOuterArraySize) {
      iVar5 = **(int**)( *(long*)( *(long*)( param_1 + 0x60 ) + 8 ) + 8 );
   }
 else {
      iVar5 = ( **(code**)( *(long*)param_1 + 0x78 ) )(param_1);
   }

   iVar4 = computeTypeXfbSize(this, local_d8, param_2, param_4, param_4);
   uVar9 = iVar5 * iVar4;
   LAB_00103580:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar9;
}
/* glslang::TIntermediate::getBaseAlignmentScalar(glslang::TType const&, int&) */void glslang::TIntermediate::getBaseAlignmentScalar(TType *param_1, int *param_2) {
   uint uVar1;
   if (*(code**)( *(long*)param_1 + 0x38 ) == TType::getBasicType) {
      uVar1 = (uint)(byte)param_1[8];
      if (0x12 < (byte)param_1[8]) {
         LAB_00103c57:*param_2 = 4;
         return;
      }

   }
 else {
      uVar1 = ( **(code**)( *(long*)param_1 + 0x38 ) )();
      if (0x12 < uVar1) goto LAB_00103c57;
   }

   /* WARNING: Could not recover jumptable at 0x00103c4c. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *(code*)( &DAT_001192a0 + *(int*)( &DAT_001192a0 + (ulong)uVar1 * 4 ) ) )();
   return;
}
/* glslang::TIntermediate::getBaseAlignment(glslang::TType const&, int&, int&,
   glslang::TLayoutPacking, bool) */ulong glslang::TIntermediate::getBaseAlignment(TType *param_1, uint *param_2, uint *param_3, int param_4, bool param_5) {
   long lVar1;
   byte bVar2;
   TType TVar3;
   char cVar4;
   uint uVar5;
   int iVar6;
   uint uVar7;
   long *plVar8;
   long lVar9;
   code *pcVar10;
   long lVar11;
   ulong uVar12;
   ulong uVar13;
   long in_FS_OFFSET;
   undefined1 uVar14;
   undefined1 local_dc[4];
   int local_d8[38];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar9 = *(long*)param_1;
   *param_3 = 0;
   pcVar10 = *(code**)( lVar9 + 0xe8 );
   if (pcVar10 != TType::isArray) {
      cVar4 = ( *pcVar10 )();
      if (cVar4 == '\0') {
         pcVar10 = *(code**)( *(long*)param_1 + 0x38 );
         if (pcVar10 == TType::getBasicType) goto LAB_00103e7b;
         LAB_0010417b:uVar5 = ( *pcVar10 )(param_1);
         goto LAB_00103e7f;
      }

      LAB_00104085:TType::TType((TType*)local_d8, param_1, 0, false);
      uVar7 = getBaseAlignment((TType*)local_d8, param_2, local_dc, param_4, param_5);
      uVar5 = 0x10;
      if (0xf < (int)uVar7) {
         uVar5 = uVar7;
      }

      if (param_4 == 2) {
         uVar7 = uVar5;
      }

      uVar13 = (ulong)uVar7;
      uVar5 = ( *param_2 + uVar7 ) - 1 & -uVar7;
      *param_2 = uVar5;
      *param_3 = uVar5;
      lVar9 = *(long*)param_1;
      if (*(code**)( lVar9 + 0xf8 ) == TType::isUnsizedArray) {
         if (*(code**)( lVar9 + 0xe8 ) == TType::isArray) {
            lVar11 = *(long*)( param_1 + 0x60 );
            if (lVar11 != 0) {
               LAB_00104118:if (**(int**)( *(long*)( lVar11 + 8 ) + 8 ) == 0) goto LAB_00104258;
            }

         }
 else {
            cVar4 = ( **(code**)( lVar9 + 0xe8 ) )(param_1);
            if (cVar4 != '\0') {
               lVar11 = *(long*)( param_1 + 0x60 );
               lVar9 = *(long*)param_1;
               goto LAB_00104118;
            }

            lVar9 = *(long*)param_1;
         }

         LAB_00104131:if (*(code**)( lVar9 + 0x78 ) == TType::getOuterArraySize) {
            iVar6 = **(int**)( *(long*)( *(long*)( param_1 + 0x60 ) + 8 ) + 8 );
         }
 else {
            iVar6 = ( **(code**)( lVar9 + 0x78 ) )(param_1);
         }

      }
 else {
         cVar4 = ( **(code**)( lVar9 + 0xf8 ) )(param_1);
         lVar9 = *(long*)param_1;
         if (cVar4 == '\0') goto LAB_00104131;
         LAB_00104258:if (*(code**)( lVar9 + 0x78 ) != TType::getOuterArraySize) {
            iVar6 = ( **(code**)( lVar9 + 0x78 ) )(param_1);
            if (iVar6 == 0) goto LAB_00104282;
            lVar9 = *(long*)param_1;
            goto LAB_00104131;
         }

         iVar6 = **(int**)( *(long*)( *(long*)( param_1 + 0x60 ) + 8 ) + 8 );
         if (iVar6 == 0) {
            LAB_00104282:iVar6 = 1;
         }

      }

      *param_2 = iVar6 * *param_3;
      goto LAB_00104021;
   }

   if (*(long*)( param_1 + 0x60 ) != 0) goto LAB_00104085;
   pcVar10 = *(code**)( lVar9 + 0x38 );
   if (pcVar10 != TType::getBasicType) goto LAB_0010417b;
   LAB_00103e7b:uVar5 = (uint)(byte)param_1[8];
   LAB_00103e7f:if (uVar5 == 0xf) {
      LAB_00103f38:lVar9 = *(long*)( param_1 + 0x68 );
      *param_2 = 0;
      iVar6 = ( uint )(param_4 == 2) << 4;
      lVar11 = *(long*)( lVar9 + 8 );
      uVar13 = ( ulong )(param_4 == 2) << 4;
      if (lVar11 != *(long*)( lVar9 + 0x10 )) {
         uVar12 = 0;
         do {
            plVar8 = *(long**)( lVar11 + uVar12 * 0x20 );
            pcVar10 = *(code**)( *plVar8 + 0x50 );
            if (pcVar10 == TType::getQualifier) {
               plVar8 = plVar8 + 2;
            }
 else {
               plVar8 = (long*)( *pcVar10 )();
               lVar11 = *(long*)( lVar9 + 8 );
            }

            bVar2 = *(byte*)( (long)plVar8 + 0xf ) >> 4;
            uVar14 = param_5;
            if (( bVar2 & 7 ) != 0) {
               uVar14 = ( bVar2 & 7 ) == 1;
            }

            uVar5 = getBaseAlignment(*(undefined8*)( lVar11 + uVar12 * 0x20 ), local_d8, local_dc, param_4, uVar14);
            lVar11 = *(long*)( lVar9 + 8 );
            if ((int)uVar13 < (int)uVar5) {
               uVar13 = (ulong)uVar5;
            }

            uVar12 = uVar12 + 1;
            lVar1 = *(long*)( lVar9 + 0x10 );
            uVar5 = ( ( *param_2 + uVar5 ) - 1 & -uVar5 ) + local_d8[0];
            *param_2 = uVar5;
         }
 while ( uVar12 < ( ulong )(lVar1 - lVar11 >> 5) );
         iVar6 = uVar5 + (int)uVar13;
      }

      *param_2 = iVar6 - 1U & -(int)uVar13;
   }
 else {
      if (*(code**)( *(long*)param_1 + 0x38 ) == TType::getBasicType) {
         uVar5 = (uint)(byte)param_1[8];
      }
 else {
         uVar5 = ( **(code**)( *(long*)param_1 + 0x38 ) )(param_1);
      }

      if (uVar5 == 0x10) goto LAB_00103f38;
      lVar9 = *(long*)param_1;
      if (*(code**)( lVar9 + 0xc0 ) != TType::isScalar) {
         cVar4 = ( **(code**)( lVar9 + 0xc0 ) )(param_1);
         if (cVar4 == '\0') {
            lVar9 = *(long*)param_1;
            goto LAB_001041f0;
         }

         goto LAB_001042dd;
      }

      if (*(code**)( lVar9 + 0xd8 ) == TType::isVector) {
         if (( (byte)param_1[9] & 0xf ) < 2) {
            TVar3 = param_1[10];
            if (( (byte)TVar3 & 0x10 ) == 0) goto LAB_001041a4;
            LAB_001042c3:bVar2 = (byte)TVar3 >> 4 & 1;
            goto LAB_00104205;
         }

      }
 else {
         cVar4 = ( **(code**)( lVar9 + 0xd8 ) )(param_1);
         lVar9 = *(long*)param_1;
         if (cVar4 == '\0') {
            LAB_001041a4:if (*(code**)( lVar9 + 0xe0 ) == TType::isMatrix) {
               if ((byte)param_1[9] < 0x10) {
                  LAB_001041c1:if (*(code**)( lVar9 + 0x128 ) == TType::isStruct) {
                     if (1 < ( byte )((char)param_1[8] - 0xfU)) {
                        LAB_001043f7:if (*(code**)( lVar9 + 0xe8 ) == TType::isArray) {
                           if (*(long*)( param_1 + 0x60 ) == 0) {
                              LAB_001042dd:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                                 uVar13 = getBaseAlignmentScalar(param_1, (int*)param_2);
                                 return uVar13;
                              }

                              goto LAB_00104526;
                           }

                        }
 else {
                           cVar4 = ( **(code**)( lVar9 + 0xe8 ) )(param_1);
                           if (cVar4 == '\0') goto LAB_001042dd;
                           lVar9 = *(long*)param_1;
                        }

                     }

                  }
 else {
                     cVar4 = ( **(code**)( lVar9 + 0x128 ) )(param_1);
                     lVar9 = *(long*)param_1;
                     if (cVar4 == '\0') goto LAB_001043f7;
                  }

               }

            }
 else {
               cVar4 = ( **(code**)( lVar9 + 0xe0 ) )(param_1);
               lVar9 = *(long*)param_1;
               if (cVar4 == '\0') goto LAB_001041c1;
            }

         }

         LAB_001041f0:if (*(code**)( lVar9 + 0xd8 ) == TType::isVector) {
            if (( (byte)param_1[9] & 0xf ) < 2) {
               TVar3 = param_1[10];
               goto LAB_001042c3;
            }

         }
 else {
            bVar2 = ( **(code**)( lVar9 + 0xd8 ) )(param_1);
            LAB_00104205:if (bVar2 == 0) {
               if (*(code**)( *(long*)param_1 + 0xe0 ) == TType::isMatrix) {
                  if (0xf < (byte)param_1[9]) {
                     LAB_00104340:TType::TType((TType*)local_d8, param_1, 0, param_5);
                     uVar7 = getBaseAlignment((TType*)local_d8, param_2, local_dc, param_4, param_5);
                     uVar5 = 0x10;
                     if (0xf < (int)uVar7) {
                        uVar5 = uVar7;
                     }

                     if (param_4 == 2) {
                        uVar7 = uVar5;
                     }

                     uVar13 = (ulong)uVar7;
                     uVar5 = ( *param_2 + uVar7 ) - 1 & -uVar7;
                     lVar9 = *(long*)param_1;
                     *param_2 = uVar5;
                     *param_3 = uVar5;
                     if (param_5 == false) {
                        pcVar10 = *(code**)( lVar9 + 0x68 );
                        if (pcVar10 == TType::getMatrixCols) {
                           uVar7 = ( uint )((byte)param_1[9] >> 4);
                        }
 else {
                           LAB_001044f8:uVar7 = ( *pcVar10 )(param_1);
                        }

                     }
 else {
                        pcVar10 = *(code**)( lVar9 + 0x70 );
                        if (pcVar10 != TType::getMatrixRows) goto LAB_001044f8;
                        uVar7 = (byte)param_1[10] & 0xf;
                     }

                     *param_2 = uVar5 * uVar7;
                     goto LAB_00104021;
                  }

               }
 else {
                  cVar4 = ( **(code**)( *(long*)param_1 + 0xe0 ) )(param_1);
                  if (cVar4 != '\0') goto LAB_00104340;
               }

               *param_2 = 0x10;
               uVar13 = 0x10;
               goto LAB_00104021;
            }

         }

      }

      uVar5 = getBaseAlignmentScalar(param_1, (int*)param_2);
      uVar13 = (ulong)uVar5;
      if (*(code**)( *(long*)param_1 + 0x60 ) == TType::getVectorSize) {
         bVar2 = (byte)param_1[9] & 0xf;
         if (bVar2 != 1) {
            if (bVar2 == 2) goto LAB_00104440;
            uVar7 = (uint)bVar2;
            LAB_00103f24:uVar13 = ( ulong )(uVar5 << 2);
            *param_2 = uVar7 * *param_2;
         }

      }
 else {
         iVar6 = ( **(code**)( *(long*)param_1 + 0x60 ) )(param_1);
         if (iVar6 != 1) {
            if (iVar6 != 2) {
               if (*(code**)( *(long*)param_1 + 0x60 ) == TType::getVectorSize) {
                  uVar7 = (byte)param_1[9] & 0xf;
               }
 else {
                  uVar7 = ( **(code**)( *(long*)param_1 + 0x60 ) )(param_1);
               }

               goto LAB_00103f24;
            }

            LAB_00104440:*param_2 = *param_2 << 1;
            uVar13 = ( ulong )(uVar5 * 2);
         }

      }

   }

   LAB_00104021:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar13;
   }

   LAB_00104526:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* glslang::TIntermediate::improperStraddle(glslang::TType const&, int, int, bool) */bool glslang::TIntermediate::improperStraddle(TType *param_1, int param_2, int param_3, bool param_4) {
   char cVar1;
   int iVar2;
   int iVar3;
   if (!param_4) {
      return false;
   }

   if (*(code**)( *(long*)param_1 + 0xe8 ) == TType::isArray) {
      if (*(long*)( param_1 + 0x60 ) != 0) {
         return false;
      }

   }
 else {
      cVar1 = ( **(code**)( *(long*)param_1 + 0xe8 ) )();
      if (cVar1 != '\0') {
         return false;
      }

   }

   if (0x10 < param_2) {
      return ( param_3 & 0xfU ) != 0;
   }

   iVar3 = param_2 + param_3 + -1;
   iVar2 = param_2 + param_3 + 0xe;
   if (-1 < iVar3) {
      iVar2 = iVar3;
   }

   iVar3 = param_3 + 0xf;
   if (-1 < param_3) {
      iVar3 = param_3;
   }

   return iVar2 >> 4 != iVar3 >> 4;
}
/* glslang::TIntermediate::getScalarAlignment(glslang::TType const&, int&, int&, bool) */ulong glslang::TIntermediate::getScalarAlignment(TType *param_1, int *param_2, int *param_3, bool param_4) {
   byte bVar1;
   TType TVar2;
   char cVar3;
   uint uVar4;
   int iVar5;
   long *plVar6;
   code *pcVar7;
   long lVar8;
   long lVar9;
   ulong uVar10;
   ulong uVar11;
   long in_FS_OFFSET;
   bool bVar12;
   int local_dc;
   int local_d8[38];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar9 = *(long*)param_1;
   *param_3 = 0;
   pcVar7 = *(code**)( lVar9 + 0xe8 );
   if (pcVar7 == TType::isArray) {
      if (*(long*)( param_1 + 0x60 ) == 0) {
         pcVar7 = *(code**)( lVar9 + 0x38 );
         if (pcVar7 != TType::getBasicType) goto LAB_00104794;
         LAB_00104643:if (param_1[8] == (TType)0xf) goto LAB_001047ab;
         LAB_00104650:lVar9 = *(long*)param_1;
         if (*(code**)( lVar9 + 0xc0 ) != TType::isScalar) {
            cVar3 = ( **(code**)( lVar9 + 0xc0 ) )(param_1);
            if (cVar3 == '\0') {
               lVar9 = *(long*)param_1;
               goto LAB_001048d8;
            }

            goto LAB_0010493d;
         }

         if (*(code**)( lVar9 + 0xd8 ) == TType::isVector) {
            if (( (byte)param_1[9] & 0xf ) < 2) {
               TVar2 = param_1[10];
               if (( (byte)TVar2 & 0x10 ) == 0) goto LAB_0010487c;
               LAB_0010497c:bVar1 = (byte)TVar2 >> 4 & 1;
               goto LAB_001048ed;
            }

         }
 else {
            cVar3 = ( **(code**)( lVar9 + 0xd8 ) )(param_1);
            lVar9 = *(long*)param_1;
            if (cVar3 == '\0') {
               LAB_0010487c:if (*(code**)( lVar9 + 0xe0 ) == TType::isMatrix) {
                  if ((byte)param_1[9] < 0x10) {
                     LAB_00104899:if (*(code**)( lVar9 + 0x128 ) == TType::isStruct) {
                        if (1 < ( byte )((char)param_1[8] - 0xfU)) {
                           LAB_001048bb:if (*(code**)( lVar9 + 0xe8 ) == TType::isArray) {
                              if (*(long*)( param_1 + 0x60 ) == 0) {
                                 LAB_0010493d:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                                    uVar11 = getBaseAlignmentScalar(param_1, param_2);
                                    return uVar11;
                                 }

                                 goto LAB_00104aed;
                              }

                           }
 else {
                              cVar3 = ( **(code**)( lVar9 + 0xe8 ) )(param_1);
                              if (cVar3 == '\0') goto LAB_0010493d;
                              lVar9 = *(long*)param_1;
                           }

                        }

                     }
 else {
                        cVar3 = ( **(code**)( lVar9 + 0x128 ) )(param_1);
                        lVar9 = *(long*)param_1;
                        if (cVar3 == '\0') goto LAB_001048bb;
                     }

                  }

               }
 else {
                  cVar3 = ( **(code**)( lVar9 + 0xe0 ) )(param_1);
                  lVar9 = *(long*)param_1;
                  if (cVar3 == '\0') goto LAB_00104899;
               }

            }

            LAB_001048d8:if (*(code**)( lVar9 + 0xd8 ) == TType::isVector) {
               if (( (byte)param_1[9] & 0xf ) < 2) {
                  TVar2 = param_1[10];
                  goto LAB_0010497c;
               }

            }
 else {
               bVar1 = ( **(code**)( lVar9 + 0xd8 ) )(param_1);
               LAB_001048ed:if (bVar1 == 0) {
                  if (*(code**)( *(long*)param_1 + 0xe0 ) == TType::isMatrix) {
                     if (0xf < (byte)param_1[9]) {
                        LAB_001049d5:TType::TType((TType*)local_d8, param_1, 0, param_4);
                        uVar4 = getScalarAlignment((TType*)local_d8, param_2, &local_dc, param_4);
                        iVar5 = *param_2;
                        uVar11 = (ulong)uVar4;
                        *param_3 = iVar5;
                        if (param_4) {
                           pcVar7 = *(code**)( *(long*)param_1 + 0x70 );
                           if (pcVar7 != TType::getMatrixRows) goto LAB_00104ac8;
                           uVar4 = (byte)param_1[10] & 0xf;
                        }
 else {
                           pcVar7 = *(code**)( *(long*)param_1 + 0x68 );
                           if (pcVar7 == TType::getMatrixCols) {
                              uVar4 = ( uint )((byte)param_1[9] >> 4);
                           }
 else {
                              LAB_00104ac8:uVar4 = ( *pcVar7 )(param_1);
                           }

                        }

                        *param_2 = iVar5 * uVar4;
                        goto LAB_001046c8;
                     }

                  }
 else {
                     cVar3 = ( **(code**)( *(long*)param_1 + 0xe0 ) )(param_1);
                     if (cVar3 != '\0') goto LAB_001049d5;
                  }

                  *param_2 = 1;
                  uVar11 = 1;
                  goto LAB_001046c8;
               }

            }

         }

         uVar4 = getBaseAlignmentScalar(param_1, param_2);
         uVar11 = (ulong)uVar4;
         if (*(code**)( *(long*)param_1 + 0x60 ) == TType::getVectorSize) {
            uVar4 = (byte)param_1[9] & 0xf;
         }
 else {
            uVar4 = ( **(code**)( *(long*)param_1 + 0x60 ) )(param_1);
         }

         *param_2 = uVar4 * *param_2;
      }
 else {
         LAB_00104702:TType::TType((TType*)local_d8, param_1, 0, false);
         uVar4 = getScalarAlignment((TType*)local_d8, param_2, &local_dc, param_4);
         uVar11 = (ulong)uVar4;
         uVar4 = ( *param_2 + uVar4 ) - 1 & -uVar4;
         lVar9 = *(long*)param_1;
         *param_3 = uVar4;
         if (*(code**)( lVar9 + 0x78 ) == TType::getOuterArraySize) {
            iVar5 = **(int**)( *(long*)( *(long*)( param_1 + 0x60 ) + 8 ) + 8 );
         }
 else {
            iVar5 = ( **(code**)( lVar9 + 0x78 ) )(param_1);
         }

         *param_2 = *param_2 + ( iVar5 + -1 ) * uVar4;
      }

   }
 else {
      cVar3 = ( *pcVar7 )();
      if (cVar3 != '\0') goto LAB_00104702;
      pcVar7 = *(code**)( *(long*)param_1 + 0x38 );
      if (pcVar7 == TType::getBasicType) goto LAB_00104643;
      LAB_00104794:iVar5 = ( *pcVar7 )(param_1);
      if (iVar5 != 0xf) goto LAB_00104650;
      LAB_001047ab:lVar9 = *(long*)( param_1 + 0x68 );
      uVar11 = 0;
      *param_2 = 0;
      lVar8 = *(long*)( lVar9 + 8 );
      if (lVar8 != *(long*)( lVar9 + 0x10 )) {
         uVar10 = 0;
         do {
            plVar6 = *(long**)( lVar8 + uVar10 * 0x20 );
            pcVar7 = *(code**)( *plVar6 + 0x50 );
            if (pcVar7 == TType::getQualifier) {
               plVar6 = plVar6 + 2;
            }
 else {
               plVar6 = (long*)( *pcVar7 )();
               lVar8 = *(long*)( lVar9 + 8 );
            }

            bVar1 = *(byte*)( (long)plVar6 + 0xf ) >> 4;
            bVar12 = param_4;
            if (( bVar1 & 7 ) != 0) {
               bVar12 = ( bVar1 & 7 ) == 1;
            }

            uVar4 = getScalarAlignment(*(TType**)( lVar8 + uVar10 * 0x20 ), local_d8, &local_dc, bVar12);
            if ((int)uVar11 < (int)uVar4) {
               uVar11 = (ulong)uVar4;
            }

            uVar10 = uVar10 + 1;
            lVar8 = *(long*)( lVar9 + 8 );
            *param_2 = ( -uVar4 & ( *param_2 + uVar4 ) - 1 ) + local_d8[0];
         }
 while ( uVar10 < ( ulong )(*(long*)( lVar9 + 0x10 ) - lVar8 >> 5) );
      }

   }

   LAB_001046c8:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar11;
   }

   LAB_00104aed:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* glslang::TIntermediate::getMemberAlignment(glslang::TType const&, int&, int&,
   glslang::TLayoutPacking, bool) */void glslang::TIntermediate::getMemberAlignment(TType *param_1, int *param_2, int *param_3, int param_4, bool param_5) {
   if (param_4 != 5) {
      getBaseAlignment();
      return;
   }

   getScalarAlignment(param_1, param_2, param_3, param_5);
   return;
}
/* glslang::TIntermediate::updateOffset(glslang::TType const&, glslang::TType const&, int&, int&) */void glslang::TIntermediate::updateOffset(TType *param_1, TType *param_2, int *param_3, int *param_4) {
   int iVar1;
   code *pcVar2;
   TType *pTVar3;
   long in_FS_OFFSET;
   bool bVar4;
   int local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *(long*)param_2 + 0x58 ) == TType::getQualifier) {
      pTVar3 = param_2 + 0x10;
   }
 else {
      pTVar3 = (TType*)( **(code**)( *(long*)param_2 + 0x58 ) )(param_2);
   }

   pcVar2 = *(code**)( *(long*)param_1 + 0x58 );
   if (( (byte)pTVar3[0xf] >> 4 & 7 ) == 0) {
      if (pcVar2 == TType::getQualifier) {
         pTVar3 = param_1 + 0x10;
      }
 else {
         pTVar3 = (TType*)( *pcVar2 )(param_1);
         pcVar2 = *(code**)( *(long*)param_1 + 0x58 );
      }

      bVar4 = ( (byte)pTVar3[0xf] & 0x70 ) == 0x10;
   }
 else {
      bVar4 = ( (byte)pTVar3[0xf] >> 4 & 7 ) == 1;
   }

   if (pcVar2 == TType::getQualifier) {
      pTVar3 = param_1 + 0x10;
   }
 else {
      pTVar3 = (TType*)( *pcVar2 )(param_1);
   }

   if (( (byte)pTVar3[0x10] & 0xf ) == 5) {
      iVar1 = getScalarAlignment(param_2, param_4, &local_34, bVar4);
   }
 else {
      iVar1 = getBaseAlignment(param_2, param_4);
   }

   *param_3 = -iVar1 & ( *param_3 + iVar1 ) - 1U;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* glslang::TIntermediate::getOffset(glslang::TType const&, int) */int glslang::TIntermediate::getOffset(TType *param_1, int param_2) {
   long *plVar1;
   code *pcVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   int local_48;
   int local_44;
   long local_40;
   lVar4 = *(long*)( param_1 + 0x68 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar1 = *(long**)( *(long*)( lVar4 + 8 ) + (long)param_2 * 0x20 );
   pcVar2 = *(code**)( *plVar1 + 0x50 );
   if (pcVar2 == TType::getQualifier) {
      iVar3 = *(int*)( (long)plVar1 + 0x24 );
      if (iVar3 != -1) goto LAB_00104ca7;
   }
 else {
      lVar5 = ( *pcVar2 )();
      if (*(int*)( lVar5 + 0x14 ) != -1) {
         plVar1 = *(long**)( *(long*)( lVar4 + 8 ) + (long)param_2 * 0x20 );
         pcVar2 = *(code**)( *plVar1 + 0x50 );
         if (pcVar2 == TType::getQualifier) {
            iVar3 = *(int*)( (long)plVar1 + 0x24 );
         }
 else {
            lVar4 = ( *pcVar2 )();
            iVar3 = *(int*)( lVar4 + 0x14 );
         }

         goto LAB_00104ca7;
      }

   }

   local_48 = 0;
   local_44 = 0;
   if (param_2 < 0) {
      iVar3 = 0;
   }
 else {
      lVar5 = 0;
      do {
         updateOffset(param_1, *(TType**)( lVar5 * 0x20 + *(long*)( lVar4 + 8 ) ), &local_44, &local_48);
         if ((int)lVar5 < param_2) {
            local_44 = local_44 + local_48;
         }

         lVar5 = lVar5 + 1;
         iVar3 = local_44;
      }
 while ( (int)lVar5 <= param_2 );
   }

   LAB_00104ca7:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar3;
}
/* glslang::TIntermediate::getBlockSize(glslang::TType const&) */int glslang::TIntermediate::getBlockSize(TType *param_1) {
   long lVar1;
   int iVar2;
   long lVar3;
   int iVar4;
   TType *pTVar5;
   long in_FS_OFFSET;
   bool bVar6;
   int local_48;
   int local_44;
   long local_40;
   lVar1 = *(long*)( param_1 + 0x68 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = (int)( *(long*)( lVar1 + 0x10 ) - *(long*)( lVar1 + 8 ) >> 5 ) + -1;
   iVar2 = getOffset(param_1, iVar4);
   if (*(code**)( *(long*)param_1 + 0x58 ) == TType::getQualifier) {
      bVar6 = ( (byte)param_1[0x1f] & 0x70 ) == 0x10;
   }
 else {
      lVar3 = ( **(code**)( *(long*)param_1 + 0x58 ) )(param_1);
      bVar6 = ( *(byte*)( lVar3 + 0xf ) & 0x70 ) == 0x10;
      if (*(code**)( *(long*)param_1 + 0x58 ) != TType::getQualifier) {
         pTVar5 = (TType*)( **(code**)( *(long*)param_1 + 0x58 ) )(param_1);
         goto LAB_00104de7;
      }

   }

   pTVar5 = param_1 + 0x10;
   LAB_00104de7:if (( (byte)pTVar5[0x10] & 0xf ) == 5) {
      getScalarAlignment(*(TType**)( (long)iVar4 * 0x20 + *(long*)( lVar1 + 8 ) ), &local_48, &local_44, bVar6);
   }
 else {
      getBaseAlignment();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_48 + iVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TIntermediate::computeBufferReferenceTypeSize(glslang::TType const&) */uint glslang::TIntermediate::computeBufferReferenceTypeSize(TType *param_1) {
   uint uVar1;
   int iVar2;
   TType *pTVar3;
   long *plVar4;
   uint uVar5;
   if (*(code**)( *(long*)param_1 + 0xa8 ) == TType::getReferentType) {
      pTVar3 = *(TType**)( param_1 + 0x68 );
   }
 else {
      pTVar3 = (TType*)( **(code**)( *(long*)param_1 + 0xa8 ) )();
   }

   uVar1 = getBlockSize(pTVar3);
   if (*(code**)( *(long*)param_1 + 0x38 ) == TType::getBasicType) {
      uVar5 = (uint)(byte)param_1[8];
   }
 else {
      uVar5 = ( **(code**)( *(long*)param_1 + 0x38 ) )(param_1);
   }

   if (uVar5 != 0x12) {
      return uVar1;
   }

   if (*(code**)( *(long*)param_1 + 0xa8 ) == TType::getReferentType) {
      plVar4 = *(long**)( param_1 + 0x68 );
   }
 else {
      plVar4 = (long*)( **(code**)( *(long*)param_1 + 0xa8 ) )(param_1);
   }

   if (*(code**)( *plVar4 + 0x50 ) == TType::getQualifier) {
      plVar4 = plVar4 + 2;
   }
 else {
      plVar4 = (long*)( **(code**)( *plVar4 + 0x50 ) )();
   }

   if (( ~*(ushort *)((long)plVar4 + 0x2a) & 0x1f8 ) == 0) {
      uVar5 = 0xfffffff0;
      iVar2 = 0x10;
   }
 else {
      if (*(code**)( *(long*)param_1 + 0xa8 ) == TType::getReferentType) {
         plVar4 = *(long**)( param_1 + 0x68 );
      }
 else {
         plVar4 = (long*)( **(code**)( *(long*)param_1 + 0xa8 ) )(param_1);
      }

      if (*(code**)( *plVar4 + 0x50 ) == TType::getQualifier) {
         plVar4 = plVar4 + 2;
      }
 else {
         plVar4 = (long*)( **(code**)( *plVar4 + 0x50 ) )();
      }

      iVar2 = 1 << ( ( byte )(*(ushort*)( (long)plVar4 + 0x2a ) >> 3) & 0x1f );
      uVar5 = -iVar2;
   }

   return iVar2 + -1 + uVar1 & uVar5;
}
/* glslang::TIntermediate::isIoResizeArray(glslang::TType const&, EShLanguage) */byte glslang::TIntermediate::isIoResizeArray(long *param_1, int param_2) {
   byte bVar1;
   char cVar2;
   long lVar3;
   if (*(code**)( *param_1 + 0xe8 ) == TType::isArray) {
      if (param_1[0xc] == 0) {
         return 0;
      }

   }
 else {
      cVar2 = ( **(code**)( *param_1 + 0xe8 ) )();
      if (cVar2 == '\0') {
         return 0;
      }

   }

   if (param_2 == 3) {
      LAB_00105095:if (*(code**)( *param_1 + 0x58 ) == TType::getQualifier) {
         param_1 = param_1 + 2;
      }
 else {
         param_1 = (long*)( **(code**)( *param_1 + 0x58 ) )(param_1);
      }

      if (( *(byte*)( param_1 + 1 ) & 0x7f ) != 3) {
         return 0;
      }

      return 1;
   }

   if (param_2 == 1) {
      if (*(code**)( *param_1 + 0x58 ) == TType::getQualifier) {
         bVar1 = *(byte*)( param_1 + 3 );
         if (( bVar1 & 0x7f ) != 3) {
            LAB_0010506d:if (( bVar1 & 0x7f ) != 4) {
               return 0;
            }

         }

      }
 else {
         lVar3 = ( **(code**)( *param_1 + 0x58 ) )(param_1);
         if (( *(byte*)( lVar3 + 8 ) & 0x7f ) != 3) {
            if (*(code**)( *param_1 + 0x58 ) == TType::getQualifier) {
               bVar1 = *(byte*)( param_1 + 3 );
               goto LAB_0010506d;
            }

            lVar3 = ( **(code**)( *param_1 + 0x58 ) )(param_1);
            if (( *(byte*)( lVar3 + 8 ) & 0x7f ) != 4) {
               return 0;
            }

         }

         if (*(code**)( *param_1 + 0x58 ) != TType::getQualifier) {
            param_1 = (long*)( **(code**)( *param_1 + 0x58 ) )(param_1);
            goto LAB_00105078;
         }

      }

      param_1 = param_1 + 2;
      LAB_00105078:return *(byte*)( (long)param_1 + 0xd ) >> 4 & 1 ^ 1;
   }

   if (param_2 == 2) goto LAB_00105095;
   if (param_2 != 4) {
      if (param_2 != 0xd) {
         return 0;
      }

      if (*(code**)( *param_1 + 0x58 ) == TType::getQualifier) {
         if (( *(byte*)( param_1 + 3 ) & 0x7f ) != 4) {
            return 0;
         }

      }
 else {
         lVar3 = ( **(code**)( *param_1 + 0x58 ) )(param_1);
         if (( *(byte*)( lVar3 + 8 ) & 0x7f ) != 4) {
            return 0;
         }

         if (*(code**)( *param_1 + 0x58 ) != TType::getQualifier) {
            param_1 = (long*)( **(code**)( *param_1 + 0x58 ) )(param_1);
            goto LAB_00105144;
         }

      }

      param_1 = param_1 + 2;
      LAB_00105144:return *(byte*)( (long)param_1 + 0xd ) >> 3 & 1 ^ 1;
   }

   if (*(code**)( *param_1 + 0x58 ) == TType::getQualifier) {
      if (( *(byte*)( param_1 + 3 ) & 0x7f ) != 3) {
         return 0;
      }

      LAB_001050fb:if (*(char*)( (long)param_1 + 0x1c ) < '\0') {
         return 1;
      }

   }
 else {
      lVar3 = ( **(code**)( *param_1 + 0x58 ) )(param_1);
      if (( *(byte*)( lVar3 + 8 ) & 0x7f ) != 3) {
         return 0;
      }

      if (*(code**)( *param_1 + 0x58 ) == TType::getQualifier) goto LAB_001050fb;
      lVar3 = ( **(code**)( *param_1 + 0x58 ) )(param_1);
      if (*(char*)( lVar3 + 0xc ) < '\0') {
         return 1;
      }

      if (*(code**)( *param_1 + 0x58 ) != TType::getQualifier) {
         param_1 = (long*)( **(code**)( *param_1 + 0x58 ) )(param_1);
         goto LAB_00105105;
      }

   }

   param_1 = param_1 + 2;
   LAB_00105105:return *(byte*)( (long)param_1 + 0xd ) & 1;
}
/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
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
   std::random_access_iterator_tag) [clone .isra.0] */undefined8 * std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsSampler ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( undefined8 * param_1,undefined8 * param_2 ), {
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
               bVar1 = glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(param_1[( 4 * i + 4 )]);
               if (bVar1) {
                  return param_1 + ( 4 * i + 4 );
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

            goto LAB_00105321;
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
      LAB_00105321:bVar1 = glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(*param_1);
      if (!bVar1) {
         return param_2;
      }

      return param_1;
   }
, /* glslang::TIntermediate::mergeLinkerObjects(TInfoSink&, glslang::TVector<TIntermNode*>&,
   glslang::TVector<TIntermNode*> const&, EShLanguage)::{lambda(std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) const */, , void __thiscall
glslang::TIntermediate::
mergeLinkerObjects(TInfoSink&, glslang::TVector<TIntermNode*> & glslang::TVector<TIntermNode*>, const&, EShLanguage) < std::char_traits<char> < code * pcVar1 ;size_t __nbasic_string *pbVar2undefined8 uVar3int iVar4long lVar5long *plVar6long *plVar7uint uVar8ulong uVar9long lVar10long in_FS_OFFSETundefined8 local_c8undefined1 *local_c0undefined1 local_b0[24]undefined8 local_98undefined1 *local_90undefined1 local_80[24]undefined1 local_68[40]long local_40uVar8 = 0;plVar7 = *(long**)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );do, {
      uVar9 = (ulong)uVar8;
      if (*(code**)( *plVar7 + 0xf0 ) == TIntermTyped::getType) {
         lVar5 = *(long*)( plVar7[0x11] + 8 );
         if (( ulong )(*(long*)( plVar7[0x11] + 0x10 ) - lVar5 >> 5) <= uVar9) goto LAB_00105610;
      }
 else {
         lVar5 = ( **(code**)( *plVar7 + 0xf0 ) )();
         if (( ulong )(*(long*)( *(long*)( lVar5 + 0x68 ) + 0x10 ) - *(long*)( *(long*)( lVar5 + 0x68 ) + 8 ) >> 5) <= uVar9) {
            LAB_00105610:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         pcVar1 = *(code**)( **(long**)( this + 8 ) + 0xf0 );
         if (pcVar1 == TIntermTyped::getType) {
            lVar5 = *(long*)( ( *(long**)( this + 8 ) )[0x11] + 8 );
         }
 else {
            lVar5 = ( *pcVar1 )();
            lVar5 = *(long*)( *(long*)( lVar5 + 0x68 ) + 8 );
         }

      }

      lVar10 = uVar9 * 0x20;
      pcVar1 = *(code**)( **(long**)( lVar5 + lVar10 ) + 0x30 );
      if (pcVar1 == TType::getFieldName_abi_cxx11_) {
         lVar5 = ( *(long**)( lVar5 + lVar10 ) )[0xe];
      }
 else {
         lVar5 = ( *pcVar1 )();
      }

      __n = *(size_t*)( param_1 + 0x10 );
      if (__n == *(size_t*)( lVar5 + 0x10 )) {
         if (__n != 0) {
            iVar4 = memcmp(*(void**)( param_1 + 8 ), *(void**)( lVar5 + 8 ), __n);
            if (iVar4 != 0) goto LAB_001053a8;
         }

         pcVar1 = *(code**)( **(long**)( this + 8 ) + 0xf0 );
         if (pcVar1 == TIntermTyped::getType) {
            plVar7 = *(long**)( this + 8 ) + 4;
         }
 else {
            plVar7 = (long*)( *pcVar1 )();
         }

         plVar6 = *(long**)( *(long*)( plVar7[0xd] + 8 ) + lVar10 );
         pcVar1 = *(code**)( *plVar6 + 0x50 );
         if (pcVar1 == TType::getQualifier) {
            plVar6 = plVar6 + 2;
         }
 else {
            plVar6 = (long*)( *pcVar1 )();
         }

         plVar7 = *(long**)( this + 8 );
         if (( ~*(ushort *)((long)plVar6 + 0x1c) & 0xfff ) == 0) {
            if (*(code**)( *plVar7 + 0xf0 ) == TIntermTyped::getType) {
               plVar7 = plVar7 + 4;
            }
 else {
               plVar7 = (long*)( **(code**)( *plVar7 + 0xf0 ) )();
            }

            if (*(code**)( *plVar7 + 0x58 ) == TType::getQualifier) {
               plVar7 = plVar7 + 2;
            }
 else {
               plVar7 = (long*)( **(code**)( *plVar7 + 0x58 ) )();
            }

            if (( ~*(ushort *)((long)plVar7 + 0x1c) & 0xfff ) == 0) {
               error(*(TIntermediate**)this, *(undefined8*)( this + 0x10 ), "Anonymous member name used for global variable or other anonymous member: ", 0xe);
               pbVar2 = *(basic_string**)( this + 0x10 );
               pcVar1 = *(code**)( **(long**)( this + 8 ) + 0xf0 );
               if (pcVar1 == TIntermTyped::getType) {
                  plVar7 = *(long**)( this + 8 ) + 4;
               }
 else {
                  plVar7 = (long*)( *pcVar1 )();
               }

               uVar3 = *(undefined8*)( *(long*)( plVar7[0xd] + 8 ) + lVar10 );
               local_98 = glslang::GetThreadPoolAllocator();
               local_90 = local_80;
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_98, &_LC2, &_LC2);
               local_c8 = glslang::GetThreadPoolAllocator();
               local_c0 = local_b0;
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_c8, &_LC2, &_LC2);
               TType::getCompleteString(local_68, uVar3, 0, 1, 1, 1, &local_c8, &local_98);
               glslang::TInfoSinkBase::append(pbVar2);
               glslang::TInfoSinkBase::append((char*)pbVar2);
            }

            goto LAB_001053a8;
         }

      }
 else {
         LAB_001053a8:plVar7 = *(long**)( this + 8 );
      }

      uVar8 = uVar8 + 1;
   }
, while ( true) * this * param_1 * param_2 * param_3 * puVar6 ;int *piVar7int *piVar8int *piVar9TSpirvTypeParameter *pTVar10bool bVar11undefined1 uVar12bool bVar13char cVar14char cVar15int iVar16uint uVar17code *pcVar18char *pcVar19basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar20long lVar21double *pdVar22TType *pTVar23long *plVar24long *plVar25TType *pTVar26basic_string *pbVar27long *plVar28size_t sVar29double *pdVar30undefined8 extraout_RDXbyte bVar31uint uVar32TSpirvTypeParameter *this_00uint uVar33long lVar34int *piVar35undefined8 uVar36ulong uVar37uint uVar38int *piVar39TSpirvTypeParameter *pTVar40long in_FS_OFFSETbool bVar41bool bVar42ulong *puVar43undefined8 *puVar44long *local_298long *local_288long *local_280ulong local_268char local_260int local_1fcundefined8 local_1f8undefined8 local_1f0ulong local_1e8ulong *local_1e0ulong local_1d8ulong local_1d0[3]undefined8 local_1b8undefined1 *local_1b0undefined1 local_1a0[24]ulong local_188ulong *local_180ulong local_178ulong local_170[3]undefined8 local_158undefined1 *local_150undefined1 local_140[24]ulong local_128ulong *local_120ulong local_118ulong local_110[3]undefined8 local_f8undefined1 *local_f0undefined1 local_e0[24]ulong local_c8ulong *local_c0ulong local_b8ulong local_b0[3]undefined8 local_98undefined1 *local_90undefined1 local_80[24]basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_68[8]undefined8 local_60long local_40local_40 = *(long*)( in_FS_OFFSET + 0x28 );iVar4 = *(int*)this;if (*(code**)( *param_2 + 0xf0 ) == TIntermTyped::getType) {
   plVar28 = param_2 + 4;
}
 else {
   plVar28 = (long*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
}
cVar14 = isIoResizeArray(plVar28, iVar4);if (cVar14 == '\0') {
   if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
      plVar28 = param_3 + 4;
   }
 else {
      plVar28 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
   }

   cVar14 = isIoResizeArray(plVar28, param_5);
   if (cVar14 != '\0') goto LAB_00105f70;
   if (*(code**)( *param_2 + 0xf0 ) == TIntermTyped::getType) {
      pTVar23 = (TType*)( param_2 + 4 );
   }
 else {
      pTVar23 = (TType*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
   }

   if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
      pTVar26 = (TType*)( param_3 + 4 );
   }
 else {
      pTVar26 = (TType*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
   }

   cVar14 = TType::sameArrayness(pTVar23, pTVar26);
   if (cVar14 != '\0') goto LAB_0010577d;
   if (*(code**)( *param_2 + 0xf0 ) == TIntermTyped::getType) {
      plVar28 = param_2 + 4;
   }
 else {
      plVar28 = (long*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
   }

   if (*(code**)( *plVar28 + 0xe8 ) == TType::isArray) {
      if (plVar28[0xc] == 0) goto LAB_00106dd0;
      LAB_00106d91:plVar28 = param_3 + 4;
      if (*(code**)( *param_3 + 0xf0 ) != TIntermTyped::getType) {
         plVar28 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
      }

      if (*(code**)( *plVar28 + 0xe8 ) == TType::isArray) {
         if (plVar28[0xc] == 0) goto LAB_00106dd0;
      }
 else {
         cVar14 = ( **(code**)( *plVar28 + 0xe8 ) )();
         if (cVar14 == '\0') goto LAB_00106dd0;
      }

      plVar28 = param_2 + 4;
      if (*(code**)( *param_2 + 0xf0 ) != TIntermTyped::getType) {
         plVar28 = (long*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
      }

      pcVar18 = *(code**)( *plVar28 + 0x100 );
      if (pcVar18 == TType::isImplicitlySizedArray) {
         pcVar18 = *(code**)( *plVar28 + 0xe8 );
         if (pcVar18 == TType::isArray) {
            lVar21 = plVar28[0xc];
            if (lVar21 != 0) {
               LAB_001081b9:cVar14 = *(char*)( lVar21 + 0x14 );
               goto LAB_001081bd;
            }

         }
 else {
            cVar14 = ( *pcVar18 )(plVar28);
            if (cVar14 != '\0') {
               lVar21 = plVar28[0xc];
               goto LAB_001081b9;
            }

         }

      }
 else {
         cVar14 = ( *pcVar18 )(plVar28);
         LAB_001081bd:if (cVar14 != '\0') goto LAB_0010577d;
      }

      plVar28 = param_3 + 4;
      if (*(code**)( *param_3 + 0xf0 ) != TIntermTyped::getType) {
         plVar28 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
      }

      pcVar18 = *(code**)( *plVar28 + 0x100 );
      if (pcVar18 == TType::isImplicitlySizedArray) {
         pcVar18 = *(code**)( *plVar28 + 0xe8 );
         if (pcVar18 == TType::isArray) {
            lVar21 = plVar28[0xc];
            if (lVar21 != 0) {
               LAB_00108210:cVar14 = *(char*)( lVar21 + 0x14 );
               goto LAB_00108214;
            }

         }
 else {
            cVar14 = ( *pcVar18 )(plVar28);
            if (cVar14 != '\0') {
               lVar21 = plVar28[0xc];
               goto LAB_00108210;
            }

         }

      }
 else {
         cVar14 = ( *pcVar18 )(plVar28);
         LAB_00108214:if (cVar14 != '\0') goto LAB_0010577d;
      }

      plVar28 = param_2 + 4;
      if (*(code**)( *param_2 + 0xf0 ) != TIntermTyped::getType) {
         plVar28 = (long*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
      }

      cVar14 = ( **(code**)( *plVar28 + 0xf8 ) )();
      if (cVar14 != '\0') goto LAB_0010577d;
      if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
         plVar28 = param_3 + 4;
      }
 else {
         plVar28 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
      }

      cVar14 = ( **(code**)( *plVar28 + 0xf8 ) )();
   }
 else {
      cVar14 = ( **(code**)( *plVar28 + 0xe8 ) )();
      if (cVar14 != '\0') goto LAB_00106d91;
      LAB_00106dd0:cVar14 = '\0';
   }

}
 else {
   LAB_00105f70:plVar28 = param_2 + 4;
   uVar5 = *(undefined4*)this;
   if (*(code**)( *param_2 + 0xf0 ) != TIntermTyped::getType) {
      plVar28 = (long*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
   }

   bVar31 = isIoResizeArray(plVar28, uVar5);
   uVar17 = (uint)bVar31;
   if (*(code**)( *param_2 + 0x120 ) == TIntermTyped::getArraySizes) {
      lVar21 = param_2[0x10];
      if (lVar21 == 0) goto LAB_00106100;
      LAB_00105fce:lVar21 = *(long*)( lVar21 + 8 );
      if (lVar21 == 0) goto LAB_00106100;
      LAB_00105fdb:uVar33 = ( uint )(*(long*)( lVar21 + 0x10 ) - *(long*)( lVar21 + 8 ) >> 4);
   }
 else {
      lVar21 = ( **(code**)( *param_2 + 0x120 ) )(param_2);
      if (lVar21 != 0) {
         if (*(code**)( *param_2 + 0x120 ) == TIntermTyped::getArraySizes) {
            lVar21 = param_2[0x10];
            goto LAB_00105fce;
         }

         lVar21 = ( **(code**)( *param_2 + 0x120 ) )(param_2);
         lVar21 = *(long*)( lVar21 + 8 );
         if (lVar21 != 0) goto LAB_00105fdb;
      }

      LAB_00106100:uVar33 = 0;
   }

   if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
      plVar28 = param_3 + 4;
   }
 else {
      plVar28 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
   }

   bVar31 = isIoResizeArray(plVar28, param_5);
   uVar32 = (uint)bVar31;
   if (*(code**)( *param_3 + 0x120 ) == TIntermTyped::getArraySizes) {
      lVar21 = param_3[0x10];
      if (lVar21 == 0) goto LAB_00107150;
      LAB_00106034:lVar21 = *(long*)( lVar21 + 8 );
      if (lVar21 == 0) goto LAB_00107150;
      iVar16 = (int)( *(long*)( lVar21 + 0x10 ) - *(long*)( lVar21 + 8 ) >> 4 );
   }
 else {
      lVar21 = ( **(code**)( *param_3 + 0x120 ) )(param_3);
      if (lVar21 != 0) {
         if (*(code**)( *param_3 + 0x120 ) == TIntermTyped::getArraySizes) {
            lVar21 = param_3[0x10];
         }
 else {
            lVar21 = ( **(code**)( *param_3 + 0x120 ) )(param_3);
         }

         goto LAB_00106034;
      }

      LAB_00107150:iVar16 = 0;
   }

   cVar14 = iVar16 - (uint)bVar31 == uVar33 - uVar17;
   if (( uVar33 != uVar17 ) && ( (bool)cVar14 )) {
      uVar38 = 0;
      do {
         if (*(code**)( *param_2 + 0x120 ) == TIntermTyped::getArraySizes) {
            lVar21 = param_2[0x10];
         }
 else {
            lVar21 = ( **(code**)( *param_2 + 0x120 ) )(param_2);
         }

         iVar16 = *(int*)( (long)(int)( ( uVar17 - bVar31 ) + uVar32 ) * 0x10 + *(long*)( *(long*)( lVar21 + 8 ) + 8 ) );
         if (*(code**)( *param_3 + 0x120 ) == TIntermTyped::getArraySizes) {
            lVar21 = param_3[0x10];
         }
 else {
            lVar21 = ( **(code**)( *param_3 + 0x120 ) )(param_3);
         }

         if (iVar16 != *(int*)( (long)(int)uVar32 * 0x10 + *(long*)( *(long*)( lVar21 + 8 ) + 8 ) )) goto LAB_00106dd0;
         uVar38 = uVar38 + 1;
         uVar32 = uVar32 + 1;
      }
 while ( uVar38 < uVar33 - uVar17 );
      LAB_0010577d:cVar14 = '\x01';
   }

}
local_1fc = -1;local_1f8 = CONCAT44(local_1f8._4_4_, 0xffffffff);if (*(code**)( *param_2 + 0xf0 ) == TIntermTyped::getType) {
   pTVar23 = (TType*)( param_2 + 4 );
}
 else {
   pTVar23 = (TType*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
}
if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
   pTVar26 = (TType*)( param_3 + 4 );
}
 else {
   pTVar26 = (TType*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
}
if (pTVar23[8] == pTVar26[8]) {
   if (pTVar23[8] == (TType)0xe) {
      if (( ( ( *(short*)( pTVar23 + 0x80 ) == *(short*)( pTVar26 + 0x80 ) ) && ( TVar1 = pTVar23[0x82](( (byte)pTVar26[0x82] ^ (byte)TVar1 ) & 3) == 0 ) ) && ( TVar2 = pTVar26[0x82]((byte)TVar1 >> 2 & 1) == ( (byte)TVar2 >> 2 & 1 ) ) ) && ( ( ( ( (byte)TVar1 >> 3 & 1 ) == ( (byte)TVar2 >> 3 & 1 ) && ( ( (byte)TVar1 >> 4 & 1 ) == ( (byte)TVar2 >> 4 & 1 ) ) ) && ( ( (byte)TVar1 >> 5 & 1 ) == ( (byte)TVar2 >> 5 & 1 ) ) ) )) {
         if (( ( (byte)pTVar23[0x83] >> 5 & 1 ) == ( (byte)pTVar26[0x83] >> 5 & 1 ) ) && ( ( (byte)pTVar23[0x83] >> 6 & 1 ) == ( (byte)pTVar26[0x83] >> 6 & 1 ) )) goto LAB_001074d8;
      }

      goto LAB_001057e4;
   }

   LAB_001074d8:bVar31 = (byte)pTVar23[9] ^ (byte)pTVar26[9];
   bVar42 = ( bVar31 & 0xf ) == 0;
   local_260 = bVar42 && bVar31 < 0x10;
   if (( !bVar42 || bVar31 >= 0x10 ) || ( ( ( TVar1 = pTVar23[10](( (byte)pTVar26[10] ^ (byte)TVar1 ) & 0x1f) != 0 || ( ( (byte)TVar1 >> 5 & 1 ) != ( (byte)pTVar26[10] >> 5 & 1 ) ) ) || ( ( (byte)TVar1 >> 6 & 1 ) != ( (byte)pTVar26[10] >> 6 & 1 ) ) ) )) goto LAB_001057e4;
   cVar15 = TType::sameStructType(pTVar23, pTVar26, &local_1fc, (int*)&local_1f8);
   if (( cVar15 != '\0' ) && ( cVar15 = TType::sameReferenceType(pTVar23, pTVar26) ),cVar15 != '\0') {
      if (cVar14 == '\0') {
         error(this, param_1, "Array sizes must be compatible:");
      }
 else {
         if (*(code**)( *param_2 + 0xf0 ) == TIntermTyped::getType) {
            plVar28 = param_2 + 4;
         }
 else {
            plVar28 = (long*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
         }

         if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
            plVar24 = param_3 + 4;
         }
 else {
            plVar24 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
         }

         piVar7 = (int*)plVar28[0x11];
         piVar8 = (int*)plVar24[0x11];
         if (piVar7 == (int*)0x0) {
            if (piVar8 == (int*)0x0) goto LAB_00109781;
         }
 else if (( piVar8 != (int*)0x0 ) && ( iVar16 = iVar16 == *piVar8 )) {
            lVar21 = *(long*)( *(long*)( piVar7 + 2 ) + 8 );
            lVar34 = *(long*)( *(long*)( piVar8 + 2 ) + 8 );
            if (lVar21 == 0) {
               if (lVar34 == 0) {
                  LAB_001097b0:if (iVar16 != 0x16) {
                     LAB_00109781:local_260 = false;
                     bVar42 = false;
                     goto LAB_00105808;
                  }

                  lVar21 = *(long*)( piVar7 + 4 );
                  lVar34 = *(long*)( piVar8 + 4 );
                  sVar29 = *(size_t*)( lVar21 + 0x10 );
                  if (sVar29 == *(size_t*)( lVar34 + 0x10 )) {
                     if (( ( sVar29 == 0 ) || ( iVar16 = memcmp(*(void**)( lVar21 + 8 ), *(void**)( lVar34 + 8 ), sVar29) ),iVar16 == 0 )) {
                        pTVar10 = *(TSpirvTypeParameter**)( lVar21 + 0x40 );
                        this_00 = *(TSpirvTypeParameter**)( lVar21 + 0x38 );
                        pTVar40 = *(TSpirvTypeParameter**)( lVar34 + 0x38 );
                        if ((long)pTVar10 - (long)this_00 == *(long*)( lVar34 + 0x40 ) - (long)pTVar40) {
                           for (; this_00 != pTVar10; this_00 = this_00 + 0x10) {
                              cVar14 = glslang::TSpirvTypeParameter::operator ==(this_00, pTVar40);
                              if (cVar14 == '\0') goto LAB_0010961e;
                              pTVar40 = pTVar40 + 0x10;
                           }

                           goto LAB_00109781;
                        }

                     }

                  }

               }

            }
 else if (lVar34 != 0) {
               piVar9 = *(int**)( lVar21 + 0x10 );
               piVar35 = *(int**)( lVar34 + 8 );
               piVar39 = *(int**)( lVar21 + 8 );
               if ((long)piVar9 - (long)piVar39 == *(long*)( lVar34 + 0x10 ) - (long)piVar35) {
                  if (piVar39 != piVar9) {
                     do {
                        if (*piVar39 != *piVar35) goto LAB_0010961e;
                        plVar28 = *(long**)( piVar39 + 2 );
                        plVar24 = *(long**)( piVar35 + 2 );
                        if (plVar28 == (long*)0x0) {
                           if (plVar24 != (long*)0x0) goto LAB_0010961e;
                        }
 else {
                           if (( ( plVar24 == (long*)0x0 ) || ( lVar21 = ( **(code**)( *plVar28 + 0x60 ) )(plVar28) ),lVar21 == 0 )) goto LAB_0010961e;
                           plVar28 = (long*)( **(code**)( *plVar28 + 0x60 ) )(plVar28);
                           if (*(code**)( *plVar28 + 0x180 ) == TIntermSymbol::getId) {
                              lVar21 = plVar28[0x17];
                           }
 else {
                              lVar21 = ( **(code**)( *plVar28 + 0x180 ) )();
                           }

                           plVar28 = (long*)( **(code**)( *plVar24 + 0x60 ) )(plVar24);
                           if (*(code**)( *plVar28 + 0x180 ) == TIntermSymbol::getId) {
                              lVar34 = plVar28[0x17];
                           }
 else {
                              lVar34 = ( **(code**)( *plVar28 + 0x180 ) )();
                           }

                           if (lVar21 != lVar34) goto LAB_0010961e;
                        }

                        piVar39 = piVar39 + 4;
                        piVar35 = piVar35 + 4;
                     }
 while ( piVar9 != piVar39 );
                     iVar16 = *piVar7;
                  }

                  goto LAB_001097b0;
               }

            }

         }

         LAB_0010961e:error(this, param_1, "Type parameters must match:");
      }

      goto LAB_001057fe;
   }

   iVar16 = local_1fc;
   lVar21 = (long)local_1fc;
   if (local_1fc < 0) {
      if (( local_1fc != -1 ) || ( lVar21 = (long)(int)local_1f8 ),(int)local_1f8 < 0) goto LAB_001057e4;
      local_1f0 = glslang::GetThreadPoolAllocator();
      pcVar19 = (char*)StageName(param_5);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string<glslang::std::allocator<char>>(local_68, pcVar19, (allocator*)&local_1f0);
      pbVar20 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(local_68, " block member has no corresponding member in ");
      pcVar19 = (char*)StageName(*(undefined4*)this);
      pbVar20 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(pbVar20, pcVar19);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(pbVar20, " block:");
      error(this, param_1, local_60, param_5);
      glslang::TInfoSinkBase::append((char*)param_1);
      StageName(param_5);
      glslang::TInfoSinkBase::append((char*)param_1);
      glslang::TInfoSinkBase::append((char*)param_1);
      if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
         plVar28 = param_3 + 4;
      }
 else {
         plVar28 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
      }

      if (*(code**)( *plVar28 + 0x28 ) != TType::getTypeName_abi_cxx11_) {
         ( **(code**)( *plVar28 + 0x28 ) )();
      }

      glslang::TInfoSinkBase::append(param_1);
      glslang::TInfoSinkBase::append((char*)param_1);
      if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
         plVar28 = param_3 + 4;
      }
 else {
         plVar28 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
      }

      pcVar18 = *(code**)( **(long**)( lVar21 * 0x20 + *(long*)( plVar28[0xd] + 8 ) ) + 0x30 );
      if (pcVar18 != TType::getFieldName_abi_cxx11_) {
         ( *pcVar18 )();
      }

      glslang::TInfoSinkBase::append(param_1);
      glslang::TInfoSinkBase::append((char*)param_1);
      glslang::TInfoSinkBase::append((char*)param_1);
      StageName(*(undefined4*)this);
      glslang::TInfoSinkBase::append((char*)param_1);
      glslang::TInfoSinkBase::append((char*)param_1);
      if (*(code**)( *param_2 + 0xf0 ) == TIntermTyped::getType) {
         plVar28 = param_2 + 4;
      }
 else {
         plVar28 = (long*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
      }

      if (*(code**)( *plVar28 + 0x28 ) != TType::getTypeName_abi_cxx11_) {
         ( **(code**)( *plVar28 + 0x28 ) )();
      }

      glslang::TInfoSinkBase::append(param_1);
      glslang::TInfoSinkBase::append((char*)param_1);
      LAB_001086e7:bVar42 = false;
   }
 else {
      lVar34 = (long)(int)local_1f8;
      if (-1 < (int)local_1f8) {
         error(this, param_1, "Member names and types must match:", param_5);
         glslang::TInfoSinkBase::append((char*)param_1);
         if (*(code**)( *param_2 + 0xf0 ) == TIntermTyped::getType) {
            plVar28 = param_2 + 4;
         }
 else {
            plVar28 = (long*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
         }

         if (*(code**)( *plVar28 + 0x28 ) != TType::getTypeName_abi_cxx11_) {
            ( **(code**)( *plVar28 + 0x28 ) )();
         }

         glslang::TInfoSinkBase::append(param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         StageName(*(undefined4*)this);
         glslang::TInfoSinkBase::append((char*)param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         if (*(code**)( *param_2 + 0xf0 ) == TIntermTyped::getType) {
            plVar28 = param_2 + 4;
         }
 else {
            plVar28 = (long*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
         }

         uVar36 = *(undefined8*)( *(long*)( plVar28[0xd] + 8 ) + lVar21 * 0x20 );
         local_1b8 = glslang::GetThreadPoolAllocator();
         local_1b0 = local_1a0;
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_1b8, &_LC2, &_LC2);
         if (*(code**)( *param_2 + 0xf0 ) == TIntermTyped::getType) {
            plVar28 = param_2 + 4;
         }
 else {
            plVar28 = (long*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
         }

         plVar28 = *(long**)( *(long*)( plVar28[0xd] + 8 ) + lVar21 * 0x20 );
         pcVar18 = *(code**)( *plVar28 + 0x30 );
         if (pcVar18 == TType::getFieldName_abi_cxx11_) {
            lVar21 = plVar28[0xe];
         }
 else {
            lVar21 = ( *pcVar18 )();
         }

         local_1e8 = glslang::GetThreadPoolAllocator();
         local_1e0 = local_1d0;
         puVar6 = *(undefined1**)( lVar21 + 8 );
         uVar37 = *(ulong*)( lVar21 + 0x10 );
         if (uVar37 < 0x10) {
            if (uVar37 == 1) {
               local_1d0[0] = CONCAT71(local_1d0[0]._1_7_, *puVar6);
            }
 else if (uVar37 != 0) goto LAB_00108be1;
         }
 else {
            if ((long)uVar37 < 0) goto LAB_00109889;
            local_1e0 = (ulong*)glslang::TPoolAllocator::allocate(local_1e8);
            local_1d0[0] = uVar37;
            LAB_00108be1:memcpy(local_1e0, puVar6, uVar37);
         }

         *(undefined1*)( (long)local_1e0 + uVar37 ) = 0;
         local_1d8 = uVar37;
         TType::getCompleteString(local_68, uVar36, 1, 0, 0, 1, &local_1e8, &local_1b8);
         glslang::TInfoSinkBase::append(param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         StageName(param_5);
         glslang::TInfoSinkBase::append((char*)param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
            plVar28 = param_3 + 4;
         }
 else {
            plVar28 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
         }

         uVar36 = *(undefined8*)( *(long*)( plVar28[0xd] + 8 ) + lVar34 * 0x20 );
         local_158 = glslang::GetThreadPoolAllocator();
         local_150 = local_140;
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_158, &_LC2, &_LC2);
         if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
            plVar28 = param_3 + 4;
         }
 else {
            plVar28 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
         }

         plVar28 = *(long**)( *(long*)( plVar28[0xd] + 8 ) + lVar34 * 0x20 );
         pcVar18 = *(code**)( *plVar28 + 0x30 );
         if (pcVar18 == TType::getFieldName_abi_cxx11_) {
            lVar21 = plVar28[0xe];
         }
 else {
            lVar21 = ( *pcVar18 )();
         }

         local_188 = glslang::GetThreadPoolAllocator();
         local_180 = local_170;
         puVar6 = *(undefined1**)( lVar21 + 8 );
         uVar37 = *(ulong*)( lVar21 + 0x10 );
         if (uVar37 < 0x10) {
            if (uVar37 == 1) {
               local_170[0] = CONCAT71(local_170[0]._1_7_, *puVar6);
            }
 else if (uVar37 != 0) goto LAB_00108c21;
         }
 else {
            if ((long)uVar37 < 0) goto LAB_00109889;
            local_180 = (ulong*)glslang::TPoolAllocator::allocate(local_188);
            local_170[0] = uVar37;
            LAB_00108c21:memcpy(local_180, puVar6, uVar37);
         }

         *(undefined1*)( (long)local_180 + uVar37 ) = 0;
         local_178 = uVar37;
         TType::getCompleteString(local_68, uVar36, 1, 0, 0, 1, &local_188, &local_158);
         glslang::TInfoSinkBase::append(param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         goto LAB_001086e7;
      }

      if ((int)local_1f8 != -1) goto LAB_001057e4;
      local_1f0 = glslang::GetThreadPoolAllocator();
      pcVar19 = (char*)StageName(*(undefined4*)this);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string<glslang::std::allocator<char>>(local_68, pcVar19, (allocator*)&local_1f0);
      pbVar20 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(local_68, " block member has no corresponding member in ");
      pcVar19 = (char*)StageName(param_5);
      pbVar20 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(pbVar20, pcVar19);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(pbVar20, " block:");
      error(this, param_1, local_60, param_5);
      glslang::TInfoSinkBase::append((char*)param_1);
      StageName(*(undefined4*)this);
      glslang::TInfoSinkBase::append((char*)param_1);
      glslang::TInfoSinkBase::append((char*)param_1);
      if (*(code**)( *param_2 + 0xf0 ) == TIntermTyped::getType) {
         plVar28 = param_2 + 4;
      }
 else {
         plVar28 = (long*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
      }

      if (*(code**)( *plVar28 + 0x28 ) != TType::getTypeName_abi_cxx11_) {
         ( **(code**)( *plVar28 + 0x28 ) )();
      }

      glslang::TInfoSinkBase::append(param_1);
      glslang::TInfoSinkBase::append((char*)param_1);
      if (*(code**)( *param_2 + 0xf0 ) == TIntermTyped::getType) {
         plVar28 = param_2 + 4;
      }
 else {
         plVar28 = (long*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
      }

      pcVar18 = *(code**)( **(long**)( (long)iVar16 * 0x20 + *(long*)( plVar28[0xd] + 8 ) ) + 0x30 );
      if (pcVar18 != TType::getFieldName_abi_cxx11_) {
         ( *pcVar18 )();
      }

      glslang::TInfoSinkBase::append(param_1);
      glslang::TInfoSinkBase::append((char*)param_1);
      glslang::TInfoSinkBase::append((char*)param_1);
      StageName(param_5);
      glslang::TInfoSinkBase::append((char*)param_1);
      glslang::TInfoSinkBase::append((char*)param_1);
      if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
         plVar28 = param_3 + 4;
      }
 else {
         plVar28 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
      }

      if (*(code**)( *plVar28 + 0x28 ) != TType::getTypeName_abi_cxx11_) {
         ( **(code**)( *plVar28 + 0x28 ) )();
      }

      glslang::TInfoSinkBase::append(param_1);
      glslang::TInfoSinkBase::append((char*)param_1);
      bVar42 = false;
   }

}
 else {
   LAB_001057e4:error(this, param_1, "Types must match:");
   LAB_001057fe:local_260 = false;
   bVar42 = true;
}
LAB_00105808:if (*(code**)( *param_2 + 0xf0 ) == TIntermTyped::getType) {
   plVar28 = param_2 + 4;
}
 else {
   plVar28 = (long*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
}
if (*(code**)( *plVar28 + 0x38 ) == TType::getBasicType) {
   uVar17 = ( uint ) * (byte*)( plVar28 + 1 );
}
 else {
   uVar17 = ( **(code**)( *plVar28 + 0x38 ) )();
}
if (uVar17 == 0x10) {
   if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
      plVar28 = param_3 + 4;
   }
 else {
      plVar28 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
   }

   if (*(code**)( *plVar28 + 0x38 ) == TType::getBasicType) {
      uVar17 = ( uint ) * (byte*)( plVar28 + 1 );
   }
 else {
      uVar17 = ( **(code**)( *plVar28 + 0x38 ) )();
   }

   lVar21 = *param_2;
   if (uVar17 == 0x10) {
      if (*(code**)( lVar21 + 0xf0 ) == TIntermTyped::getType) {
         plVar28 = param_2 + 4;
      }
 else {
         plVar28 = (long*)( **(code**)( lVar21 + 0xf0 ) )(param_2);
      }

      if (plVar28[0xd] == 0) goto LAB_0010584c;
      if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
         plVar28 = param_3 + 4;
      }
 else {
         plVar28 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
      }

      lVar21 = *param_2;
      if (plVar28[0xd] != 0) {
         if (*(code**)( lVar21 + 0xf0 ) == TIntermTyped::getType) {
            pTVar23 = (TType*)( param_2 + 4 );
         }
 else {
            pTVar23 = (TType*)( **(code**)( lVar21 + 0xf0 ) )(param_2);
         }

         if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
            pTVar26 = (TType*)( param_3 + 4 );
         }
 else {
            pTVar26 = (TType*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
         }

         cVar14 = TType::sameStructType(pTVar23, pTVar26, (int*)0x0, (int*)0x0);
         if (cVar14 == '\0') goto LAB_0010584c;
         plVar28 = param_2 + 4;
         local_268 = 0;
         uVar37 = 0;
         uVar17 = 0;
         while (true) {
            plVar24 = plVar28;
            if (*(code**)( *param_2 + 0xf0 ) != TIntermTyped::getType) {
               plVar24 = (long*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
            }

            if (( ulong )(*(long*)( plVar24[0xd] + 0x10 ) - *(long*)( plVar24[0xd] + 8 ) >> 5) <= uVar37) goto LAB_0010584c;
            if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
               plVar24 = param_3 + 4;
            }
 else {
               plVar24 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
            }

            lVar21 = *param_2;
            if (( ulong )(*(long*)( plVar24[0xd] + 0x10 ) - *(long*)( plVar24[0xd] + 8 ) >> 5) <= local_268) break;
            plVar24 = plVar28;
            if (*(code**)( lVar21 + 0xf0 ) != TIntermTyped::getType) {
               plVar24 = (long*)( **(code**)( lVar21 + 0xf0 ) )(param_2);
            }

            lVar21 = uVar37 * 0x20;
            plVar24 = *(long**)( *(long*)( plVar24[0xd] + 8 ) + lVar21 );
            pcVar18 = *(code**)( *plVar24 + 0x18 );
            if (pcVar18 == TType::hiddenMember) {
               cVar15 = (char)plVar24[1];
            }
 else {
               cVar15 = ( *pcVar18 )();
            }

            if (cVar15 == '\0') {
               if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
                  plVar24 = param_3 + 4;
               }
 else {
                  plVar24 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
               }

               lVar34 = local_268 * 0x20;
               plVar24 = *(long**)( *(long*)( plVar24[0xd] + 8 ) + lVar34 );
               pcVar18 = *(code**)( *plVar24 + 0x18 );
               if (pcVar18 == TType::hiddenMember) {
                  if ((char)plVar24[1] != '\0') {
                     LAB_00106c07:plVar24 = plVar28;
                     if (*(code**)( *param_2 + 0xf0 ) != TIntermTyped::getType) {
                        plVar24 = (long*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
                     }

                     plVar24 = *(long**)( *(long*)( plVar24[0xd] + 8 ) + lVar21 );
                     pcVar18 = *(code**)( *plVar24 + 0x50 );
                     if (pcVar18 == TType::getQualifier) {
                        plVar24 = plVar24 + 2;
                     }
 else {
                        plVar24 = (long*)( *pcVar18 )();
                     }

                     if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
                        plVar25 = param_3 + 4;
                     }
 else {
                        plVar25 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
                     }

                     plVar25 = *(long**)( *(long*)( plVar25[0xd] + 8 ) + lVar34 );
                     pcVar18 = *(code**)( *plVar25 + 0x50 );
                     if (pcVar18 == TType::getQualifier) {
                        plVar25 = plVar25 + 2;
                     }
 else {
                        plVar25 = (long*)( *pcVar18 )();
                     }

                     cVar15 = '\0';
                     if (( ( *(byte*)( (long)plVar24 + 0xf ) ^ *(byte*)( (long)plVar25 + 0xf ) ) & 0x70 ) != 0) {
                        error(this, param_1, "Interface block member layout matrix qualifier must match:");
                        cVar15 = cVar14;
                     }

                     if (*(int*)( (long)plVar24 + 0x14 ) != *(int*)( (long)plVar25 + 0x14 )) {
                        error(this, param_1, "Interface block member layout offset qualifier must match:");
                        cVar15 = cVar14;
                     }

                     if ((int)plVar24[3] != (int)plVar25[3]) {
                        error(this, param_1, "Interface block member layout align qualifier must match:");
                        cVar15 = cVar14;
                     }

                     if (( ( *(ushort*)( (long)plVar24 + 0x1c ) ^ *(ushort*)( (long)plVar25 + 0x1c ) ) & 0xfff ) == 0) {
                        if (( ( *(byte*)( (long)plVar24 + 0x1d ) ^ *(byte*)( (long)plVar25 + 0x1d ) ) & 0x70 ) != 0) {
                           LAB_0010873b:error(this, param_1, "Interface block member layout component qualifier must match:", param_5);
                           goto LAB_00108755;
                        }

                        if (cVar15 != '\0') goto LAB_00108755;
                     }
 else {
                        error(this, param_1, "Interface block member layout location qualifier must match:", param_5);
                        if (( ( *(byte*)( (long)plVar24 + 0x1d ) ^ *(byte*)( (long)plVar25 + 0x1d ) ) & 0x70 ) != 0) goto LAB_0010873b;
                        LAB_00108755:glslang::TInfoSinkBase::append((char*)param_1);
                        StageName(*(undefined4*)this);
                        glslang::TInfoSinkBase::append((char*)param_1);
                        glslang::TInfoSinkBase::append((char*)param_1);
                        plVar24 = plVar28;
                        if (*(code**)( *param_2 + 0xf0 ) != TIntermTyped::getType) {
                           plVar24 = (long*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
                        }

                        if (*(code**)( *plVar24 + 0x28 ) != TType::getTypeName_abi_cxx11_) {
                           ( **(code**)( *plVar24 + 0x28 ) )();
                        }

                        glslang::TInfoSinkBase::append(param_1);
                        glslang::TInfoSinkBase::append((char*)param_1);
                        plVar24 = plVar28;
                        if (*(code**)( *param_2 + 0xf0 ) != TIntermTyped::getType) {
                           plVar24 = (long*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
                        }

                        pcVar18 = *(code**)( **(long**)( *(long*)( plVar24[0xd] + 8 ) + lVar21 ) + 0x30 );
                        if (pcVar18 != TType::getFieldName_abi_cxx11_) {
                           ( *pcVar18 )();
                        }

                        glslang::TInfoSinkBase::append(param_1);
                        glslang::TInfoSinkBase::append((char*)param_1);
                        plVar24 = plVar28;
                        if (*(code**)( *param_2 + 0xf0 ) != TIntermTyped::getType) {
                           plVar24 = (long*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
                        }

                        uVar36 = *(undefined8*)( *(long*)( plVar24[0xd] + 8 ) + lVar21 );
                        local_1f0 = glslang::GetThreadPoolAllocator();
                        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string<glslang::std::allocator<char>>((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, "", (allocator*)&local_1f0);
                        local_1f8 = glslang::GetThreadPoolAllocator();
                        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string<glslang::std::allocator<char>>((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_c8, "", (allocator*)&local_1f8);
                        TType::getCompleteString(local_68, uVar36, 1, 1, 0, 0, (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_c8);
                        glslang::TInfoSinkBase::append(param_1);
                        glslang::TInfoSinkBase::append((char*)param_1);
                        glslang::TInfoSinkBase::append((char*)param_1);
                        StageName(param_5);
                        glslang::TInfoSinkBase::append((char*)param_1);
                        glslang::TInfoSinkBase::append((char*)param_1);
                        if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
                           plVar24 = param_3 + 4;
                        }
 else {
                           plVar24 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
                        }

                        if (*(code**)( *plVar24 + 0x28 ) != TType::getTypeName_abi_cxx11_) {
                           ( **(code**)( *plVar24 + 0x28 ) )();
                        }

                        glslang::TInfoSinkBase::append(param_1);
                        glslang::TInfoSinkBase::append((char*)param_1);
                        if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
                           plVar24 = param_3 + 4;
                        }
 else {
                           plVar24 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
                        }

                        pcVar18 = *(code**)( **(long**)( *(long*)( plVar24[0xd] + 8 ) + lVar34 ) + 0x30 );
                        if (pcVar18 != TType::getFieldName_abi_cxx11_) {
                           ( *pcVar18 )();
                        }

                        glslang::TInfoSinkBase::append(param_1);
                        glslang::TInfoSinkBase::append((char*)param_1);
                        if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
                           plVar24 = param_3 + 4;
                        }
 else {
                           plVar24 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
                        }

                        uVar36 = *(undefined8*)( *(long*)( plVar24[0xd] + 8 ) + lVar34 );
                        local_1f0 = glslang::GetThreadPoolAllocator();
                        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string<glslang::std::allocator<char>>((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, "", (allocator*)&local_1f0);
                        local_1f8 = glslang::GetThreadPoolAllocator();
                        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string<glslang::std::allocator<char>>((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_c8, "", (allocator*)&local_1f8);
                        TType::getCompleteString(local_68, uVar36, 1, 1, 0, 0, (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_c8, (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98);
                        glslang::TInfoSinkBase::append(param_1);
                        glslang::TInfoSinkBase::append((char*)param_1);
                        local_260 = cVar14;
                     }

                     uVar17 = uVar17 + 1;
                     uVar37 = (ulong)uVar17;
                  }

               }
 else {
                  cVar15 = ( *pcVar18 )();
                  if (cVar15 == '\0') goto LAB_00106c07;
               }

               local_268 = ( ulong )((int)local_268 + 1);
            }
 else {
               uVar17 = uVar17 + 1;
               uVar37 = (ulong)uVar17;
            }

         }
;
         ;;
      }

   }

}
 else {
   LAB_0010584c:lVar21 = *param_2;
}
if (param_5 == iVar4) {
   LAB_00106192:if (*(code**)( lVar21 + 0x110 ) == TIntermTyped::getQualifier) {
      bVar31 = *(byte*)( param_2 + 7 );
      pcVar18 = *(code**)( *param_3 + 0x110 );
      if (pcVar18 == TIntermTyped::getQualifier) goto LAB_001058a3;
      LAB_001061bb:lVar21 = ( *pcVar18 )(param_3);
      bVar31 = bVar31 ^ *(byte*)( lVar21 + 8 );
   }
 else {
      lVar21 = ( **(code**)( lVar21 + 0x110 ) )(param_2);
      bVar31 = *(byte*)( lVar21 + 8 );
      LAB_00105890:pcVar18 = *(code**)( *param_3 + 0x110 );
      if (pcVar18 != TIntermTyped::getQualifier) goto LAB_001061bb;
      LAB_001058a3:bVar31 = bVar31 ^ *(byte*)( param_3 + 7 );
   }

   if (( bVar31 & 0x7f ) == 0) {
      bVar11 = false;
      goto LAB_001058c4;
   }

   bVar11 = false;
   error(this, param_1, "Storage qualifiers must match:");
   lVar21 = *param_2;
   uVar12 = 1;
   bVar13 = true;
   pcVar18 = *(code**)( lVar21 + 0x110 );
   if (pcVar18 == TIntermTyped::getQualifier) goto LAB_001058d8;
   LAB_0010620a:lVar21 = ( *pcVar18 )(param_2);
   if (( *(byte*)( lVar21 + 8 ) & 0x7f ) - 5 < 2) {
      lVar21 = *param_2;
      LAB_00106226:if (*(code**)( lVar21 + 400 ) == TIntermSymbol::getName_abi_cxx11_) {
         plVar28 = param_2 + 0x19;
      }
 else {
         plVar28 = (long*)( **(code**)( lVar21 + 400 ) )(param_2);
      }

      uVar37 = plVar28[2];
      local_268._0_1_ = false;
      if (uVar37 != 0) {
         sVar29 = 5;
         if (uVar37 < 6) {
            sVar29 = uVar37;
         }

         iVar16 = memcmp((void*)plVar28[1], "anon@", sVar29);
         if (iVar16 == 0) {
            local_268._0_1_ = (int)sVar29 == 5;
         }

      }

      if (*(code**)( *param_3 + 400 ) == TIntermSymbol::getName_abi_cxx11_) {
         plVar28 = param_3 + 0x19;
      }
 else {
         plVar28 = (long*)( **(code**)( *param_3 + 400 ) )(param_3);
      }

      uVar37 = plVar28[2];
      bVar41 = false;
      if (uVar37 != 0) {
         sVar29 = 5;
         if (uVar37 < 6) {
            sVar29 = uVar37;
         }

         iVar16 = memcmp((void*)plVar28[1], "anon@", sVar29);
         if (iVar16 == 0) {
            bVar41 = (int)sVar29 == 5;
         }

      }

      if (bVar41 != local_268._0_1_) {
         error(this, param_1, "Matched Uniform or Storage blocks must all be anonymous, or all be named:");
         bVar13 = true;
      }

   }

   if (*(code**)( *param_2 + 0x110 ) == TIntermTyped::getQualifier) goto LAB_001058ed;
   plVar28 = (long*)( **(code**)( *param_2 + 0x110 ) )(param_2);
}
 else {
   if (*(code**)( lVar21 + 0x110 ) != TIntermTyped::getQualifier) {
      lVar21 = ( **(code**)( lVar21 + 0x110 ) )(param_2);
      if (( *(byte*)( lVar21 + 8 ) & 0x7f ) == 3) goto LAB_00106140;
      LAB_00106166:if (*(code**)( *param_2 + 0x110 ) == TIntermTyped::getQualifier) {
         bVar31 = *(byte*)( param_2 + 7 );
         if (( bVar31 & 0x7f ) != 4) goto LAB_00105890;
         LAB_00107813:plVar28 = param_3 + 6;
         if (*(code**)( *param_3 + 0x110 ) != TIntermTyped::getQualifier) {
            plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
         }

         if (( *(byte*)( plVar28 + 1 ) & 0x7f ) == 3) goto LAB_00107839;
      }
 else {
         lVar21 = ( **(code**)( *param_2 + 0x110 ) )(param_2);
         if (( *(byte*)( lVar21 + 8 ) & 0x7f ) == 4) goto LAB_00107813;
      }

      lVar21 = *param_2;
      goto LAB_00106192;
   }

   bVar31 = *(byte*)( param_2 + 7 );
   if (( bVar31 & 0x7f ) != 3) {
      if (( bVar31 & 0x7f ) == 4) goto LAB_00107813;
      goto LAB_00105890;
   }

   LAB_00106140:plVar28 = param_3 + 6;
   if (*(code**)( *param_3 + 0x110 ) != TIntermTyped::getQualifier) {
      plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
   }

   if (( *(byte*)( plVar28 + 1 ) & 0x7f ) != 4) goto LAB_00106166;
   LAB_00107839:bVar11 = true;
   LAB_001058c4:uVar12 = 0;
   lVar21 = *param_2;
   pcVar18 = *(code**)( lVar21 + 0x110 );
   bVar13 = bVar42;
   if (pcVar18 != TIntermTyped::getQualifier) goto LAB_0010620a;
   LAB_001058d8:if (( *(byte*)( param_2 + 7 ) & 0x7f ) - 5 < 2) goto LAB_00106226;
   LAB_001058ed:plVar28 = param_2 + 6;
}
bVar31 = *(byte*)( plVar28 + 1 );if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
   plVar28 = param_3 + 6;
}
 else {
   plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
}
if (( ( bVar31 ^ *(byte*)( plVar28 + 1 ) ) & 0x7f ) == 0) {
   if (*(code**)( *param_2 + 400 ) == TIntermSymbol::getName_abi_cxx11_) {
      plVar28 = param_2 + 0x19;
   }
 else {
      plVar28 = (long*)( **(code**)( *param_2 + 400 ) )(param_2);
   }

   uVar37 = plVar28[2];
   local_268._0_1_ = false;
   if (uVar37 != 0) {
      sVar29 = 5;
      if (uVar37 < 6) {
         sVar29 = uVar37;
      }

      iVar16 = memcmp((void*)plVar28[1], "anon@", sVar29);
      if (iVar16 == 0) {
         local_268._0_1_ = (int)sVar29 == 5;
      }

   }

   if (*(code**)( *param_3 + 400 ) == TIntermSymbol::getName_abi_cxx11_) {
      plVar28 = param_3 + 0x19;
   }
 else {
      plVar28 = (long*)( **(code**)( *param_3 + 400 ) )(param_3);
   }

   uVar37 = plVar28[2];
   bVar41 = false;
   if (uVar37 != 0) {
      sVar29 = 5;
      if (uVar37 < 6) {
         sVar29 = uVar37;
      }

      iVar16 = memcmp((void*)plVar28[1], "anon@", sVar29);
      bVar41 = false;
      if (iVar16 == 0) {
         bVar41 = (int)sVar29 == 5;
      }

   }

   if (local_268._0_1_ == bVar41) {
      if (*(code**)( *param_2 + 400 ) == TIntermSymbol::getName_abi_cxx11_) {
         plVar28 = param_2 + 0x19;
      }
 else {
         plVar28 = (long*)( **(code**)( *param_2 + 400 ) )(param_2);
      }

      uVar37 = plVar28[2];
      if (uVar37 != 0) {
         sVar29 = 5;
         if (uVar37 < 6) {
            sVar29 = uVar37;
         }

         iVar16 = memcmp((void*)plVar28[1], "anon@", sVar29);
         if (iVar16 == 0 && (int)sVar29 == 5) goto LAB_00105a15;
      }

      if (*(code**)( *param_3 + 400 ) == TIntermSymbol::getName_abi_cxx11_) {
         plVar28 = param_3 + 0x19;
      }
 else {
         plVar28 = (long*)( **(code**)( *param_3 + 400 ) )(param_3);
      }

      if (*(code**)( *param_2 + 400 ) == TIntermSymbol::getName_abi_cxx11_) {
         plVar24 = param_2 + 0x19;
      }
 else {
         plVar24 = (long*)( **(code**)( *param_2 + 400 ) )(param_2);
      }

      sVar29 = plVar24[2];
      if (( sVar29 == plVar28[2] ) && ( ( sVar29 == 0 || ( iVar16 = memcmp((void*)plVar24[1], (void*)plVar28[1], sVar29) ),iVar16 == 0 ) )) goto LAB_00105a15;
   }

   warn(this, param_1, "Matched shader interfaces are using different instance names.", param_5);
   bVar13 = true;
}
LAB_00105a15:if (bVar11) {
   LAB_00105a1e:local_268 = 0;
   if (param_5 != iVar4) goto LAB_00105a31;
   LAB_0010680a:if (*(code**)( *param_2 + 0x110 ) == TIntermTyped::getQualifier) {
      plVar28 = param_2 + 6;
   }
 else {
      plVar28 = (long*)( **(code**)( *param_2 + 0x110 ) )(param_2);
   }

   bVar31 = *(byte*)( (long)plVar28 + 0xb );
   if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
      plVar28 = param_3 + 6;
   }
 else {
      plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
   }

   if (( ( bVar31 ^ *(byte*)( (long)plVar28 + 0xb ) ) & 0x10 ) != 0) {
      error(this, param_1, "Presence of invariant qualifier must match:", iVar4);
      uVar12 = 1;
      bVar13 = true;
   }

   if (*(code**)( *param_2 + 0x110 ) == TIntermTyped::getQualifier) {
      plVar28 = param_2 + 6;
   }
 else {
      plVar28 = (long*)( **(code**)( *param_2 + 0x110 ) )(param_2);
   }

   bVar31 = *(byte*)( (long)plVar28 + 0xc );
   if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
      plVar28 = param_3 + 6;
   }
 else {
      plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
   }

   if (( *(byte*)( (long)plVar28 + 0xc ) >> 4 & 1 ) != ( bVar31 >> 4 & 1 )) {
      error(this, param_1, "Presence of precise qualifier must match:", iVar4);
      local_268 = 1;
      bVar13 = true;
   }

   if (*(code**)( *param_2 + 0x110 ) == TIntermTyped::getQualifier) {
      plVar28 = param_2 + 6;
   }
 else {
      plVar28 = (long*)( **(code**)( *param_2 + 0x110 ) )(param_2);
   }

   bVar31 = *(byte*)( (long)plVar28 + 0xb );
   if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
      plVar28 = param_3 + 6;
   }
 else {
      plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
   }

   if (( ( bVar31 ^ *(byte*)( (long)plVar28 + 0xb ) ) & 0x20 ) == 0) {
      if (*(code**)( *param_2 + 0x110 ) == TIntermTyped::getQualifier) {
         plVar28 = param_2 + 6;
      }
 else {
         plVar28 = (long*)( **(code**)( *param_2 + 0x110 ) )(param_2);
      }

      bVar31 = *(byte*)( (long)plVar28 + 0xb );
      if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
         plVar28 = param_3 + 6;
      }
 else {
         plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
      }

      if (( ( bVar31 ^ *(byte*)( (long)plVar28 + 0xb ) ) & 0x40 ) == 0) {
         if (*(code**)( *param_2 + 0x110 ) == TIntermTyped::getQualifier) {
            plVar28 = param_2 + 6;
         }
 else {
            plVar28 = (long*)( **(code**)( *param_2 + 0x110 ) )(param_2);
         }

         bVar31 = *(byte*)( (long)plVar28 + 0xb );
         if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
            plVar28 = param_3 + 6;
         }
 else {
            plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
         }

         if (-1 < (char)( bVar31 ^ *(byte*)( (long)plVar28 + 0xb ) )) {
            if (*(code**)( *param_2 + 0x110 ) == TIntermTyped::getQualifier) {
               plVar28 = param_2 + 6;
            }
 else {
               plVar28 = (long*)( **(code**)( *param_2 + 0x110 ) )(param_2);
            }

            bVar31 = *(byte*)( (long)plVar28 + 0xd );
            if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
               plVar28 = param_3 + 6;
            }
 else {
               plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
            }

            if (( *(byte*)( (long)plVar28 + 0xd ) >> 5 & 1 ) == ( bVar31 >> 5 & 1 )) {
               if (*(code**)( *param_2 + 0x110 ) == TIntermTyped::getQualifier) {
                  plVar28 = param_2 + 6;
               }
 else {
                  plVar28 = (long*)( **(code**)( *param_2 + 0x110 ) )(param_2);
               }

               bVar31 = *(byte*)( (long)plVar28 + 0xd );
               if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
                  plVar28 = param_3 + 6;
               }
 else {
                  plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
               }

               if (( *(byte*)( (long)plVar28 + 0xd ) >> 4 & 1 ) == ( bVar31 >> 4 & 1 )) {
                  if (*(code**)( *param_2 + 0x110 ) == TIntermTyped::getQualifier) {
                     plVar28 = param_2 + 6;
                  }
 else {
                     plVar28 = (long*)( **(code**)( *param_2 + 0x110 ) )(param_2);
                  }

                  bVar31 = *(byte*)( (long)plVar28 + 0xc );
                  if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
                     plVar28 = param_3 + 6;
                  }
 else {
                     plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
                  }

                  if (( *(byte*)( (long)plVar28 + 0xc ) >> 5 & 1 ) == ( bVar31 >> 5 & 1 )) goto LAB_00105a31;
               }

            }

         }

      }

   }

   error(this, param_1, "Interpolation and auxiliary storage qualifiers must match:", iVar4);
   uVar12 = 1;
   bVar13 = true;
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 != TIntermTyped::getQualifier) goto LAB_001069d8;
   LAB_00105a45:plVar28 = param_2 + 6;
}
 else {
   if (*(code**)( *param_2 + 0x110 ) == TIntermTyped::getQualifier) {
      plVar28 = param_2 + 6;
   }
 else {
      plVar28 = (long*)( **(code**)( *param_2 + 0x110 ) )(param_2);
   }

   bVar31 = *(byte*)( (long)plVar28 + 0xb );
   if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
      plVar28 = param_3 + 6;
   }
 else {
      plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
   }

   if (( ( bVar31 ^ *(byte*)( (long)plVar28 + 0xb ) ) & 0xe ) == 0) goto LAB_00105a1e;
   error(this, param_1, "Precision qualifiers must match:", param_5);
   local_268 = 1;
   bVar13 = true;
   if (param_5 == iVar4) goto LAB_0010680a;
   LAB_00105a31:pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 == TIntermTyped::getQualifier) goto LAB_00105a45;
   LAB_001069d8:plVar28 = (long*)( *pcVar18 )(param_2);
}
bVar31 = *(byte*)( (long)plVar28 + 0xe );if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
   plVar28 = param_3 + 6;
}
 else {
   plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
}
bVar11 = false;if (( ( bVar31 ^ *(byte*)( (long)plVar28 + 0xe ) ) & 2 ) == 0) {
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 != TIntermTyped::getQualifier) goto LAB_00107083;
   LAB_00105a87:plVar28 = param_2 + 6;
}
 else {
   bVar11 = true;
   error(this, param_1, "Memory coherent qualifier must match:", param_5);
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 == TIntermTyped::getQualifier) goto LAB_00105a87;
   LAB_00107083:plVar28 = (long*)( *pcVar18 )(param_2);
}
bVar31 = *(byte*)( (long)plVar28 + 0xe );if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
   plVar28 = param_3 + 6;
}
 else {
   plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
}
if (( ( bVar31 ^ *(byte*)( (long)plVar28 + 0xe ) ) & 8 ) == 0) {
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 != TIntermTyped::getQualifier) goto LAB_00107043;
   LAB_00105ac7:plVar28 = param_2 + 6;
}
 else {
   bVar11 = true;
   error(this, param_1, "Memory devicecoherent qualifier must match:", param_5);
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 == TIntermTyped::getQualifier) goto LAB_00105ac7;
   LAB_00107043:plVar28 = (long*)( *pcVar18 )(param_2);
}
bVar31 = *(byte*)( (long)plVar28 + 0xe );if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
   plVar28 = param_3 + 6;
}
 else {
   plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
}
if (( ( bVar31 ^ *(byte*)( (long)plVar28 + 0xe ) ) & 0x10 ) == 0) {
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 != TIntermTyped::getQualifier) goto LAB_00107143;
   LAB_00105b07:plVar28 = param_2 + 6;
}
 else {
   bVar11 = true;
   error(this, param_1, "Memory queuefamilycoherent qualifier must match:", param_5);
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 == TIntermTyped::getQualifier) goto LAB_00105b07;
   LAB_00107143:plVar28 = (long*)( *pcVar18 )(param_2);
}
bVar31 = *(byte*)( (long)plVar28 + 0xe );if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
   plVar28 = param_3 + 6;
}
 else {
   plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
}
if (( ( bVar31 ^ *(byte*)( (long)plVar28 + 0xe ) ) & 0x20 ) == 0) {
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 != TIntermTyped::getQualifier) goto LAB_00107103;
   LAB_00105b47:plVar28 = param_2 + 6;
}
 else {
   bVar11 = true;
   error(this, param_1, "Memory workgroupcoherent qualifier must match:", param_5);
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 == TIntermTyped::getQualifier) goto LAB_00105b47;
   LAB_00107103:plVar28 = (long*)( *pcVar18 )(param_2);
}
bVar31 = *(byte*)( (long)plVar28 + 0xe );if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
   plVar28 = param_3 + 6;
}
 else {
   plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
}
if (( ( bVar31 ^ *(byte*)( (long)plVar28 + 0xe ) ) & 0x40 ) == 0) {
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 != TIntermTyped::getQualifier) goto LAB_001070c3;
   LAB_00105b87:plVar28 = param_2 + 6;
}
 else {
   bVar11 = true;
   error(this, param_1, "Memory subgroupcoherent qualifier must match:", param_5);
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 == TIntermTyped::getQualifier) goto LAB_00105b87;
   LAB_001070c3:plVar28 = (long*)( *pcVar18 )(param_2);
}
bVar31 = *(byte*)( (long)plVar28 + 0xe );if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
   plVar28 = param_3 + 6;
}
 else {
   plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
}
if ((char)( bVar31 ^ *(byte*)( (long)plVar28 + 0xe ) ) < '\0') {
   bVar11 = true;
   error(this, param_1, "Memory shadercallcoherent qualifier must match:", param_5);
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 == TIntermTyped::getQualifier) goto LAB_00105bc4;
   LAB_00107243:plVar28 = (long*)( *pcVar18 )(param_2);
}
 else {
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 != TIntermTyped::getQualifier) goto LAB_00107243;
   LAB_00105bc4:plVar28 = param_2 + 6;
}
bVar31 = *(byte*)( (long)plVar28 + 0xf );if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
   plVar28 = param_3 + 6;
}
 else {
   plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
}
if (( ( bVar31 ^ *(byte*)( (long)plVar28 + 0xf ) ) & 1 ) == 0) {
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 != TIntermTyped::getQualifier) goto LAB_00107003;
   LAB_00105c04:plVar28 = param_2 + 6;
}
 else {
   bVar11 = true;
   error(this, param_1, "Memory nonprivate qualifier must match:", param_5);
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 == TIntermTyped::getQualifier) goto LAB_00105c04;
   LAB_00107003:plVar28 = (long*)( *pcVar18 )(param_2);
}
bVar31 = *(byte*)( (long)plVar28 + 0xe );if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
   plVar28 = param_3 + 6;
}
 else {
   plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
}
if (( ( bVar31 ^ *(byte*)( (long)plVar28 + 0xe ) ) & 4 ) == 0) {
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 != TIntermTyped::getQualifier) goto LAB_00106fc3;
   LAB_00105c44:plVar28 = param_2 + 6;
}
 else {
   bVar11 = true;
   error(this, param_1, "Memory volatil qualifier must match:", param_5);
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 == TIntermTyped::getQualifier) goto LAB_00105c44;
   LAB_00106fc3:plVar28 = (long*)( *pcVar18 )(param_2);
}
bVar31 = *(byte*)( (long)plVar28 + 0xd );if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
   plVar28 = param_3 + 6;
}
 else {
   plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
}
if (( ( bVar31 ^ *(byte*)( (long)plVar28 + 0xd ) ) & 0x40 ) == 0) {
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 != TIntermTyped::getQualifier) goto LAB_00106f83;
   LAB_00105c84:plVar28 = param_2 + 6;
}
 else {
   bVar11 = true;
   error(this, param_1, "Memory restrict qualifier must match:", param_5);
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 == TIntermTyped::getQualifier) goto LAB_00105c84;
   LAB_00106f83:plVar28 = (long*)( *pcVar18 )(param_2);
}
bVar31 = *(byte*)( (long)plVar28 + 0xd );if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
   plVar28 = param_3 + 6;
}
 else {
   plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
}
if ((char)( bVar31 ^ *(byte*)( (long)plVar28 + 0xd ) ) < '\0') {
   bVar11 = true;
   error(this, param_1, "Memory readonly qualifier must match:", param_5);
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 == TIntermTyped::getQualifier) goto LAB_00105cc1;
   LAB_00107203:plVar28 = (long*)( *pcVar18 )(param_2);
}
 else {
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 != TIntermTyped::getQualifier) goto LAB_00107203;
   LAB_00105cc1:plVar28 = param_2 + 6;
}
bVar31 = *(byte*)( (long)plVar28 + 0xe );if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
   plVar28 = param_3 + 6;
}
 else {
   plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
}
if (( ( bVar31 ^ *(byte*)( (long)plVar28 + 0xe ) ) & 1 ) == 0) {
   if (bVar11) goto LAB_00105cf2;
}
 else {
   error(this, param_1, "Memory writeonly qualifier must match:", param_5);
   LAB_00105cf2:uVar12 = 1;
   bVar13 = true;
}
if (*(code**)( *param_2 + 0x110 ) == TIntermTyped::getQualifier) {
   plVar28 = param_2 + 6;
}
 else {
   plVar28 = (long*)( **(code**)( *param_2 + 0x110 ) )(param_2);
}
bVar31 = *(byte*)( (long)plVar28 + 0xf );if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
   plVar28 = param_3 + 6;
}
 else {
   plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
}
bVar11 = false;if (( ( bVar31 ^ *(byte*)( (long)plVar28 + 0xf ) ) & 0x70 ) == 0) {
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 != TIntermTyped::getQualifier) goto LAB_00106e93;
   LAB_00105d52:plVar28 = param_2 + 6;
}
 else {
   bVar11 = true;
   error(this, param_1, "Layout matrix qualifier must match:", param_5);
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 == TIntermTyped::getQualifier) goto LAB_00105d52;
   LAB_00106e93:plVar28 = (long*)( *pcVar18 )(param_2);
}
bVar31 = *(byte*)( plVar28 + 2 );if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
   plVar28 = param_3 + 6;
}
 else {
   plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
}
if (( ( bVar31 ^ *(byte*)( plVar28 + 2 ) ) & 0xf ) == 0) {
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 != TIntermTyped::getQualifier) goto LAB_00106f33;
   LAB_00105d92:if (( ~*(ushort *)((long)param_2 + 0x4c) & 0xfff ) != 0) goto LAB_00105da0;
   LAB_00105e1b:plVar28 = param_2 + 6;
}
 else {
   bVar11 = true;
   error(this, param_1, "Layout packing qualifier must match:", param_5);
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 == TIntermTyped::getQualifier) goto LAB_00105d92;
   LAB_00106f33:lVar21 = ( *pcVar18 )(param_2);
   if (( ~*(ushort *)(lVar21 + 0x1c) & 0xfff ) != 0) {
      LAB_00105da0:plVar28 = param_3 + 6;
      if (*(code**)( *param_3 + 0x110 ) != TIntermTyped::getQualifier) {
         plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
      }

      if (( ~*(ushort *)((long)plVar28 + 0x1c) & 0xfff ) != 0) {
         if (*(code**)( *param_2 + 0x110 ) == TIntermTyped::getQualifier) {
            plVar28 = param_2 + 6;
         }
 else {
            plVar28 = (long*)( **(code**)( *param_2 + 0x110 ) )(param_2);
         }

         uVar3 = *(ushort*)( (long)plVar28 + 0x1c );
         if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
            plVar28 = param_3 + 6;
         }
 else {
            plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
         }

         if (( ( uVar3 ^ *(ushort*)( (long)plVar28 + 0x1c ) ) & 0xfff ) != 0) {
            bVar11 = true;
            error(this, param_1, "Layout location qualifier must match:", param_5);
         }

      }

   }

   if (*(code**)( *param_2 + 0x110 ) == TIntermTyped::getQualifier) goto LAB_00105e1b;
   plVar28 = (long*)( **(code**)( *param_2 + 0x110 ) )(param_2);
}
bVar31 = *(byte*)( (long)plVar28 + 0x1d );if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
   plVar28 = param_3 + 6;
}
 else {
   plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
}
if (( ( bVar31 ^ *(byte*)( (long)plVar28 + 0x1d ) ) & 0x70 ) == 0) {
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 != TIntermTyped::getQualifier) goto LAB_00106e53;
   LAB_00105e5b:plVar28 = param_2 + 6;
}
 else {
   bVar11 = true;
   error(this, param_1, "Layout component qualifier must match:", param_5);
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 == TIntermTyped::getQualifier) goto LAB_00105e5b;
   LAB_00106e53:plVar28 = (long*)( *pcVar18 )(param_2);
}
cVar14 = *(char*)( (long)plVar28 + 0x22 );if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
   plVar28 = param_3 + 6;
}
 else {
   plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
}
if (cVar14 == *(char*)( (long)plVar28 + 0x22 )) {
   pcVar18 = *(code**)( *param_2 + 0x110 );
   if (pcVar18 != TIntermTyped::getQualifier) goto LAB_001062d0;
   if ((short)param_2[10] != -1) goto LAB_00105ec4;
   LAB_00106699:if (bVar11) {
      LAB_00106343:lVar21 = *param_2;
      goto LAB_00106347;
   }

   if (bVar13) {
      lVar21 = *param_2;
      goto LAB_0010634c;
   }

   if (( ( ( local_260 == '\0' ) && ( lVar21 = param_2[0x1f] ),lVar21 != 0 ) ) && ( lVar34 = lVar21 != lVar34 )) {
      pdVar22 = *(double**)( lVar21 + 8 );
      pdVar30 = *(double**)( lVar34 + 8 );
      if ((long)*(double**)( lVar21 + 0x10 ) - (long)pdVar22 != *(long*)( lVar34 + 0x10 ) - (long)pdVar30) {
         switchD_001080dc_caseD_0:error(this, param_1, "Initializers must match:", param_5);
         glslang::TInfoSinkBase::append((char*)param_1);
         if (*(code**)( *param_2 + 400 ) != TIntermSymbol::getName_abi_cxx11_) {
            ( **(code**)( *param_2 + 400 ) )(param_2);
         }

         glslang::TInfoSinkBase::append(param_1);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            glslang::TInfoSinkBase::append((char*)param_1);
            return;
         }

         goto LAB_0010987a;
      }

      for (; pdVar22 != *(double**)( lVar21 + 0x10 ); pdVar22 = pdVar22 + 2) {
         if (*(int*)( pdVar30 + 1 ) != *(int*)( pdVar22 + 1 )) goto switchD_001080dc_caseD_0;
         switch (*(int*)( pdVar22 + 1 )) {
            default:
          goto switchD_001080dc_caseD_0;
            case 2:
          if (*pdVar30 != *pdVar22) goto switchD_001080dc_caseD_0;
          break;
            case 4:
            case 5:
            case 0xc:
          if (*(char *)pdVar30 != *(char *)pdVar22) goto switchD_001080dc_caseD_0;
          break;
            case 6:
            case 7:
          if (*(short *)pdVar30 != *(short *)pdVar22) goto switchD_001080dc_caseD_0;
          break;
            case 8:
            case 9:
          if (*(int *)pdVar30 != *(int *)pdVar22) goto switchD_001080dc_caseD_0;
          break;
            case 10:
            case 0xb:
          if (*pdVar30 != *pdVar22) goto switchD_001080dc_caseD_0;
         }

         pdVar30 = pdVar30 + 2;
      }

   }

}
 else {
   bVar11 = true;
   error(this, param_1, "Layout index qualifier must match:", param_5);
   lVar21 = *param_2;
   pcVar18 = *(code**)( lVar21 + 0x110 );
   if (pcVar18 != TIntermTyped::getQualifier) {
      LAB_001062d0:lVar21 = ( *pcVar18 )(param_2);
      if (*(short*)( lVar21 + 0x20 ) != -1) goto LAB_00105ec4;
      goto LAB_001062e0;
   }

   if ((short)param_2[10] != -1) {
      LAB_00105ec4:plVar28 = param_3 + 6;
      if (*(code**)( *param_3 + 0x110 ) != TIntermTyped::getQualifier) {
         plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
      }

      if ((short)plVar28[4] == -1) {
         LAB_001062e0:pcVar18 = *(code**)( *param_2 + 0x110 );
         if (pcVar18 == TIntermTyped::getQualifier) {
            if ((short)param_2[10] == -1) goto LAB_00106699;
            goto LAB_00106301;
         }

         LAB_00107980:lVar21 = ( *pcVar18 )(param_2);
         if (*(short*)( lVar21 + 0x20 ) == -1) goto LAB_00106699;
         if (*(code**)( *param_2 + 0x110 ) == TIntermTyped::getQualifier) goto LAB_00106301;
         plVar28 = (long*)( **(code**)( *param_2 + 0x110 ) )(param_2);
      }
 else {
         if (*(code**)( *param_2 + 0x110 ) == TIntermTyped::getQualifier) {
            plVar28 = param_2 + 6;
         }
 else {
            plVar28 = (long*)( **(code**)( *param_2 + 0x110 ) )(param_2);
         }

         lVar21 = plVar28[4];
         if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
            plVar28 = param_3 + 6;
         }
 else {
            plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
         }

         if ((short)lVar21 == (short)plVar28[4]) goto LAB_001062e0;
         bVar11 = true;
         error(this, param_1, "Layout binding qualifier must match:", param_5);
         lVar21 = *param_2;
         pcVar18 = *(code**)( lVar21 + 0x110 );
         if (pcVar18 != TIntermTyped::getQualifier) goto LAB_00107980;
         if ((short)param_2[10] == -1) goto LAB_00106347;
         LAB_00106301:plVar28 = param_2 + 6;
      }

      iVar4 = *(int*)( (long)plVar28 + 0x14 );
      if (*(code**)( *param_3 + 0x110 ) == TIntermTyped::getQualifier) {
         plVar28 = param_3 + 6;
      }
 else {
         plVar28 = (long*)( **(code**)( *param_3 + 0x110 ) )(param_3);
      }

      if (iVar4 == *(int*)( (long)plVar28 + 0x14 )) goto LAB_00106699;
      error(this, param_1, "Layout offset qualifier must match:", param_5);
      goto LAB_00106343;
   }

   LAB_00106347:uVar12 = 1;
   LAB_0010634c:if (*(code**)( lVar21 + 0xf0 ) == TIntermTyped::getType) {
      plVar28 = param_2 + 4;
   }
 else {
      plVar28 = (long*)( **(code**)( lVar21 + 0xf0 ) )(param_2);
   }

   if (*(code**)( *plVar28 + 0x38 ) == TType::getBasicType) {
      uVar17 = ( uint ) * (byte*)( plVar28 + 1 );
   }
 else {
      uVar17 = ( **(code**)( *plVar28 + 0x38 ) )();
   }

   if (uVar17 == 0x10) {
      if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
         plVar28 = param_3 + 4;
      }
 else {
         plVar28 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
      }

      if (*(code**)( *plVar28 + 0x38 ) == TType::getBasicType) {
         uVar17 = ( uint ) * (byte*)( plVar28 + 1 );
      }
 else {
         uVar17 = ( **(code**)( *plVar28 + 0x38 ) )();
      }

      if (uVar17 != 0x10) goto LAB_00106385;
      if (*(code**)( *param_2 + 0xf0 ) == TIntermTyped::getType) {
         plVar28 = param_2 + 4;
      }
 else {
         plVar28 = (long*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
      }

      if (plVar28[0xd] == 0) goto LAB_00106385;
      if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
         plVar28 = param_3 + 4;
      }
 else {
         plVar28 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
      }

      if (plVar28[0xd] == 0) goto LAB_00106385;
      if (bVar42) {
         glslang::TInfoSinkBase::append((char*)param_1);
         StageName(*(undefined4*)this);
         glslang::TInfoSinkBase::append((char*)param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         if (*(code**)( *param_2 + 0xf0 ) == TIntermTyped::getType) {
            plVar28 = param_2 + 4;
            local_288 = plVar28;
         }
 else {
            local_288 = (long*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
            if (*(code**)( *param_2 + 0xf0 ) == TIntermTyped::getType) {
               plVar28 = param_2 + 4;
            }
 else {
               plVar28 = (long*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
            }

         }

         if (*(code**)( *plVar28 + 0x28 ) == TType::getTypeName_abi_cxx11_) {
            pbVar27 = (basic_string*)plVar28[0xf];
         }
 else {
            pbVar27 = (basic_string*)( **(code**)( *plVar28 + 0x28 ) )();
         }

         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, pbVar27);
         if (*(code**)( *param_2 + 400 ) == TIntermSymbol::getName_abi_cxx11_) {
            pbVar27 = (basic_string*)( param_2 + 0x19 );
         }
 else {
            pbVar27 = (basic_string*)( **(code**)( *param_2 + 400 ) )(param_2);
         }

         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_c8, pbVar27);
         TType::getCompleteString(local_68, local_288, 1, uVar12, local_268, 1, (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_c8);
         glslang::TInfoSinkBase::append(param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         StageName(param_5);
         glslang::TInfoSinkBase::append((char*)param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
            plVar28 = param_3 + 4;
            local_298 = plVar28;
         }
 else {
            local_298 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
            if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
               plVar28 = param_3 + 4;
            }
 else {
               plVar28 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
            }

         }

         if (*(code**)( *plVar28 + 0x28 ) == TType::getTypeName_abi_cxx11_) {
            pbVar27 = (basic_string*)plVar28[0xf];
         }
 else {
            pbVar27 = (basic_string*)( **(code**)( *plVar28 + 0x28 ) )();
         }

         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, pbVar27);
         if (*(code**)( *param_3 + 400 ) == TIntermSymbol::getName_abi_cxx11_) {
            pbVar27 = (basic_string*)( param_3 + 0x19 );
         }
 else {
            pbVar27 = (basic_string*)( **(code**)( *param_3 + 400 ) )(param_3);
         }

         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_c8, pbVar27);
         uVar36 = 1;
      }
 else {
         glslang::TInfoSinkBase::append((char*)param_1);
         StageName(*(undefined4*)this);
         glslang::TInfoSinkBase::append((char*)param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         if (*(code**)( *param_2 + 0xf0 ) == TIntermTyped::getType) {
            plVar28 = param_2 + 4;
         }
 else {
            plVar28 = (long*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
         }

         if (*(code**)( *plVar28 + 0x28 ) != TType::getTypeName_abi_cxx11_) {
            ( **(code**)( *plVar28 + 0x28 ) )();
         }

         glslang::TInfoSinkBase::append(param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         if (*(code**)( *param_2 + 400 ) != TIntermSymbol::getName_abi_cxx11_) {
            ( **(code**)( *param_2 + 400 ) )(param_2);
         }

         glslang::TInfoSinkBase::append(param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         if (*(code**)( *param_2 + 0xf0 ) == TIntermTyped::getType) {
            local_288 = param_2 + 4;
         }
 else {
            local_288 = (long*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
         }

         local_1f0 = glslang::GetThreadPoolAllocator();
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string<glslang::std::allocator<char>>((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, "", (allocator*)&local_1f0);
         local_1f8 = glslang::GetThreadPoolAllocator();
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string<glslang::std::allocator<char>>((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_c8, "", (allocator*)&local_1f8);
         TType::getCompleteString(local_68, local_288, 1, uVar12, local_268, 0, (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_c8, (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98);
         glslang::TInfoSinkBase::append(param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         StageName(param_5);
         glslang::TInfoSinkBase::append((char*)param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
            plVar28 = param_3 + 4;
         }
 else {
            plVar28 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
         }

         if (*(code**)( *plVar28 + 0x28 ) != TType::getTypeName_abi_cxx11_) {
            ( **(code**)( *plVar28 + 0x28 ) )();
         }

         glslang::TInfoSinkBase::append(param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         if (*(code**)( *param_3 + 400 ) != TIntermSymbol::getName_abi_cxx11_) {
            ( **(code**)( *param_3 + 400 ) )(param_3);
         }

         glslang::TInfoSinkBase::append(param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
            local_298 = param_3 + 4;
         }
 else {
            local_298 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
         }

         local_1f0 = glslang::GetThreadPoolAllocator();
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string<glslang::std::allocator<char>>((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, "", (allocator*)&local_1f0);
         local_1f8 = glslang::GetThreadPoolAllocator();
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string<glslang::std::allocator<char>>((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_c8, "", (allocator*)&local_1f8);
         uVar36 = 0;
      }

   }
 else {
      LAB_00106385:if (bVar42) {
         glslang::TInfoSinkBase::append((char*)param_1);
         StageName(*(undefined4*)this);
         glslang::TInfoSinkBase::append((char*)param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         if (*(code**)( *param_2 + 0xf0 ) == TIntermTyped::getType) {
            local_280 = param_2 + 4;
         }
 else {
            local_280 = (long*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
         }

         local_f8 = glslang::GetThreadPoolAllocator();
         local_f0 = local_e0;
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_f8, &_LC2, &_LC2);
         if (*(code**)( *param_2 + 400 ) == TIntermSymbol::getName_abi_cxx11_) {
            param_2 = param_2 + 0x19;
         }
 else {
            param_2 = (long*)( **(code**)( *param_2 + 400 ) )(param_2);
         }

         local_128 = glslang::GetThreadPoolAllocator();
         local_120 = local_110;
         puVar6 = (undefined1*)param_2[1];
         uVar37 = param_2[2];
         if (uVar37 < 0x10) {
            if (uVar37 == 1) {
               local_110[0] = CONCAT71(local_110[0]._1_7_, *puVar6);
            }
 else if (uVar37 != 0) goto LAB_00108008;
         }
 else {
            if ((long)uVar37 < 0) goto LAB_00109889;
            local_120 = (ulong*)glslang::TPoolAllocator::allocate(local_128);
            local_110[0] = uVar37;
            LAB_00108008:memcpy(local_120, puVar6, uVar37);
         }

         *(undefined1*)( (long)local_120 + uVar37 ) = 0;
         local_118 = uVar37;
         TType::getCompleteString(local_68, local_280, 1, uVar12, local_268, 1, &local_128);
         glslang::TInfoSinkBase::append(param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         StageName(param_5);
         glslang::TInfoSinkBase::append((char*)param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
            local_298 = param_3 + 4;
         }
 else {
            local_298 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
         }

         local_98 = glslang::GetThreadPoolAllocator();
         local_90 = local_80;
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_98, &_LC2, &_LC2);
         if (*(code**)( *param_3 + 400 ) == TIntermSymbol::getName_abi_cxx11_) {
            param_3 = param_3 + 0x19;
         }
 else {
            param_3 = (long*)( **(code**)( *param_3 + 400 ) )(param_3);
         }

         local_c8 = glslang::GetThreadPoolAllocator();
         local_c0 = local_b0;
         puVar6 = (undefined1*)param_3[1];
         uVar37 = param_3[2];
         if (uVar37 < 0x10) {
            if (uVar37 == 1) {
               local_b0[0] = CONCAT71(local_b0[0]._1_7_, *puVar6);
            }
 else if (uVar37 != 0) goto LAB_00107fc8;
         }
 else {
            if ((long)uVar37 < 0) {
               LAB_00109889:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::_M_create");
            }

            local_c0 = (ulong*)glslang::TPoolAllocator::allocate(local_c8);
            local_b0[0] = uVar37;
            LAB_00107fc8:memcpy(local_c0, puVar6, uVar37);
         }

         uVar36 = 1;
         *(undefined1*)( (long)local_c0 + uVar37 ) = 0;
         local_b8 = uVar37;
      }
 else {
         glslang::TInfoSinkBase::append((char*)param_1);
         StageName(*(undefined4*)this);
         glslang::TInfoSinkBase::append((char*)param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         if (*(code**)( *param_2 + 400 ) != TIntermSymbol::getName_abi_cxx11_) {
            ( **(code**)( *param_2 + 400 ) )(param_2);
         }

         glslang::TInfoSinkBase::append(param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         if (*(code**)( *param_2 + 0xf0 ) == TIntermTyped::getType) {
            local_280 = param_2 + 4;
         }
 else {
            local_280 = (long*)( **(code**)( *param_2 + 0xf0 ) )(param_2);
         }

         local_98 = glslang::GetThreadPoolAllocator();
         local_90 = local_80;
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_98, &_LC2, &_LC2);
         local_c8 = glslang::GetThreadPoolAllocator();
         local_c0 = local_b0;
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_c8, &_LC2, &_LC2);
         puVar43 = &local_c8;
         puVar44 = &local_98;
         TType::getCompleteString(local_68, local_280, 1, uVar12, local_268, 0);
         glslang::TInfoSinkBase::append(param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         StageName(param_5);
         glslang::TInfoSinkBase::append((char*)param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         if (*(code**)( *param_3 + 400 ) != TIntermSymbol::getName_abi_cxx11_) {
            ( **(code**)( *param_3 + 400 ) )(param_3, puVar44, extraout_RDX, puVar43);
         }

         glslang::TInfoSinkBase::append(param_1);
         glslang::TInfoSinkBase::append((char*)param_1);
         if (*(code**)( *param_3 + 0xf0 ) == TIntermTyped::getType) {
            local_298 = param_3 + 4;
         }
 else {
            local_298 = (long*)( **(code**)( *param_3 + 0xf0 ) )(param_3);
         }

         local_98 = glslang::GetThreadPoolAllocator();
         local_90 = local_80;
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_98, &_LC2, &_LC2);
         local_c8 = glslang::GetThreadPoolAllocator();
         local_c0 = local_b0;
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_c8, &_LC2, &_LC2);
         uVar36 = 0;
      }

   }

   TType::getCompleteString(local_68, local_298, 1, uVar12, local_268, uVar36, &local_c8);
   glslang::TInfoSinkBase::append(param_1);
   glslang::TInfoSinkBase::append((char*)param_1);
}
if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
LAB_0010987a:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* glslang::TIntermediate::mergeBlockDefinitions(TInfoSink&, glslang::TIntermSymbol*,
   glslang::TIntermSymbol*, glslang::TIntermediate*) */void glslang::TIntermediate::mergeBlockDefinitions(TIntermediate *this, TInfoSink *param_1, TIntermSymbol *param_2, TIntermSymbol *param_3, TIntermediate *param_4) {
   _Rb_tree_node *p_Var1;
   undefined8 *puVar2;
   TIntermSymbol TVar3;
   size_t sVar4;
   vector *pvVar5;
   vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>> *this_00;
   long *plVar6;
   code *pcVar7;
   TType *this_01;
   TType *pTVar8;
   undefined8 *puVar9;
   undefined8 uVar10;
   bool bVar11;
   undefined4 uVar12;
   char cVar13;
   ushort uVar14;
   int iVar15;
   uint uVar16;
   _Rb_tree_node *p_Var17;
   long lVar18;
   long lVar19;
   long lVar20;
   long lVar21;
   ulong uVar22;
   _Rb_tree_node *p_Var23;
   _Rb_tree_node *p_Var24;
   TIntermSymbol *pTVar25;
   ulong uVar26;
   undefined8 *puVar27;
   uint uVar28;
   long in_FS_OFFSET;
   undefined ***local_290;
   undefined1 *local_288;
   undefined8 *local_280;
   undefined1 local_258[8];
   undefined4 local_250[2];
   _Rb_tree_node *local_248;
   _Rb_tree_node *local_240;
   _Rb_tree_node *local_238;
   undefined8 local_230;
   undefined **local_228;
   undefined4 local_220;
   undefined8 local_21c;
   undefined8 local_210;
   undefined8 local_208;
   undefined8 local_200;
   undefined8 local_1f8;
   TIntermSymbol *local_1f0;
   undefined8 local_1e8;
   undefined8 local_1e0;
   undefined8 local_1d8;
   undefined8 local_1c8;
   undefined4 local_1c0;
   undefined8 local_1bc;
   undefined8 local_1b0;
   undefined8 local_1a8;
   undefined8 local_1a0;
   undefined8 local_198;
   TIntermSymbol *local_190;
   undefined ***local_188;
   TIntermediate *local_180;
   undefined1 *local_178;
   undefined **local_168;
   undefined4 local_160;
   undefined8 local_158;
   ulong uStack_150;
   uint local_148;
   undefined4 uStack_144;
   undefined4 uStack_140;
   undefined4 uStack_13c;
   undefined4 uStack_138;
   undefined4 uStack_134;
   undefined4 uStack_130;
   undefined4 uStack_12c;
   uint local_128;
   undefined4 uStack_124;
   undefined4 uStack_120;
   undefined4 uStack_11c;
   undefined8 local_118;
   ulong uStack_110;
   undefined1 local_108[16];
   undefined1 local_f8[16];
   uint local_e8;
   undefined1 local_e0[16];
   undefined8 local_c8;
   undefined1 *local_c0;
   undefined1 local_b0[24];
   undefined8 local_98;
   undefined1 *local_90;
   undefined1 local_80[24];
   undefined1 local_68[40];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *(long*)param_3 + 0xf0 ) == TIntermTyped::getType) {
      pTVar25 = param_3 + 0x20;
   }
 else {
      pTVar25 = (TIntermSymbol*)( **(code**)( *(long*)param_3 + 0xf0 ) )(param_3);
   }

   if (*(code**)( *(long*)pTVar25 + 0x28 ) == TType::getTypeName_abi_cxx11_) {
      lVar19 = *(long*)( pTVar25 + 0x78 );
   }
 else {
      lVar19 = ( **(code**)( *(long*)pTVar25 + 0x28 ) )();
   }

   if (*(code**)( *(long*)param_2 + 0xf0 ) == TIntermTyped::getType) {
      pTVar25 = param_2 + 0x20;
   }
 else {
      pTVar25 = (TIntermSymbol*)( **(code**)( *(long*)param_2 + 0xf0 ) )(param_2);
   }

   if (*(code**)( *(long*)pTVar25 + 0x28 ) == TType::getTypeName_abi_cxx11_) {
      lVar18 = *(long*)( pTVar25 + 0x78 );
   }
 else {
      lVar18 = ( **(code**)( *(long*)pTVar25 + 0x28 ) )();
   }

   sVar4 = *(size_t*)( lVar18 + 0x10 );
   if (sVar4 == *(size_t*)( lVar19 + 0x10 )) {
      if (( sVar4 == 0 ) || ( iVar15 = iVar15 == 0 )) {
         if (*(code**)( *(long*)param_2 + 0xf0 ) == TIntermTyped::getType) {
            pTVar25 = param_2 + 0x20;
         }
 else {
            pTVar25 = (TIntermSymbol*)( **(code**)( *(long*)param_2 + 0xf0 ) )(param_2);
         }

         if (*(code**)( *(long*)pTVar25 + 0x38 ) == TType::getBasicType) {
            uVar28 = (uint)(byte)pTVar25[8];
         }
 else {
            uVar28 = ( **(code**)( *(long*)pTVar25 + 0x38 ) )();
         }

         if (*(code**)( *(long*)param_3 + 0xf0 ) == TIntermTyped::getType) {
            pTVar25 = param_3 + 0x20;
         }
 else {
            pTVar25 = (TIntermSymbol*)( **(code**)( *(long*)param_3 + 0xf0 ) )(param_3);
         }

         if (*(code**)( *(long*)pTVar25 + 0x38 ) == TType::getBasicType) {
            uVar16 = (uint)(byte)pTVar25[8];
         }
 else {
            uVar16 = ( **(code**)( *(long*)pTVar25 + 0x38 ) )();
         }

         if (uVar28 == uVar16) {
            if (*(code**)( *(long*)param_2 + 0x108 ) == TIntermTyped::getQualifier) {
               pTVar25 = param_2 + 0x30;
            }
 else {
               pTVar25 = (TIntermSymbol*)( **(code**)( *(long*)param_2 + 0x108 ) )(param_2);
            }

            TVar3 = pTVar25[8];
            if (*(code**)( *(long*)param_3 + 0x108 ) == TIntermTyped::getQualifier) {
               pTVar25 = param_3 + 0x30;
            }
 else {
               pTVar25 = (TIntermSymbol*)( **(code**)( *(long*)param_3 + 0x108 ) )(param_3);
            }

            if (( ( (byte)TVar3 ^ (byte)pTVar25[8] ) & 0x7f ) == 0) {
               if (*(code**)( *(long*)param_2 + 0x108 ) == TIntermTyped::getQualifier) {
                  pTVar25 = param_2 + 0x30;
               }
 else {
                  pTVar25 = (TIntermSymbol*)( **(code**)( *(long*)param_2 + 0x108 ) )(param_2);
               }

               uVar28 = *(uint*)( pTVar25 + 0x1c );
               if (*(code**)( *(long*)param_3 + 0x108 ) == TIntermTyped::getQualifier) {
                  pTVar25 = param_3 + 0x30;
               }
 else {
                  pTVar25 = (TIntermSymbol*)( **(code**)( *(long*)param_3 + 0x108 ) )(param_3);
               }

               if (( ( uVar28 ^ *(uint*)( pTVar25 + 0x1c ) ) & 0x3f8000 ) == 0) {
                  if (*(code**)( *(long*)param_2 + 0xf0 ) == TIntermTyped::getType) {
                     pTVar25 = param_2 + 0x20;
                  }
 else {
                     pTVar25 = (TIntermSymbol*)( **(code**)( *(long*)param_2 + 0xf0 ) )(param_2);
                  }

                  pvVar5 = *(vector**)( pTVar25 + 0x68 );
                  if (*(code**)( *(long*)param_3 + 0xf0 ) == TIntermTyped::getType) {
                     pTVar25 = param_3 + 0x20;
                  }
 else {
                     pTVar25 = (TIntermSymbol*)( **(code**)( *(long*)param_3 + 0xf0 ) )(param_3);
                  }

                  lVar19 = *(long*)( pvVar5 + 8 );
                  this_00 = *(vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>**)( pTVar25 + 0x68 );
                  local_250[0] = 0;
                  lVar18 = *(long*)( pvVar5 + 0x10 );
                  local_248 = (_Rb_tree_node*)0x0;
                  lVar21 = *(long*)( this_00 + 8 );
                  local_230 = 0;
                  local_1c8 = (undefined**)( (ulong)local_1c8._4_4_ << 0x20 );
                  local_240 = (_Rb_tree_node*)local_250;
                  local_238 = (_Rb_tree_node*)local_250;
                  if (lVar21 != *(long*)( this_00 + 0x10 )) {
                     uVar22 = 0;
                     do {
                        if (lVar18 == lVar19) {
                           LAB_0010a400:puVar9 = *(undefined8**)( pvVar5 + 0x10 );
                           puVar2 = (undefined8*)( lVar21 + uVar22 * 0x20 );
                           if (puVar9 == *(undefined8**)( pvVar5 + 0x18 )) {
                              std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>::_M_realloc_insert<glslang::TTypeLoc_const&>((vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>*)pvVar5);
                              puVar27 = *(undefined8**)( pvVar5 + 0x10 );
                           }
 else {
                              uVar10 = puVar2[1];
                              puVar27 = puVar9 + 4;
                              *puVar9 = *puVar2;
                              puVar9[1] = uVar10;
                              uVar10 = puVar2[3];
                              puVar9[2] = puVar2[2];
                              puVar9[3] = uVar10;
                              *(undefined8**)( pvVar5 + 0x10 ) = puVar27;
                           }

                           lVar21 = *(long*)( pvVar5 + 8 );
                           p_Var17 = (_Rb_tree_node*)local_250;
                           if (local_248 == (_Rb_tree_node*)0x0) {
                              LAB_0010a491:local_168 = (undefined**)&local_1c8;
                              p_Var17 = (_Rb_tree_node*)std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<unsigned_int_const&>,std::tuple<>>(local_258, p_Var17, &local_168);
                           }
 else {
                              p_Var24 = local_248;
                              do {
                                 while (true) {
                                    p_Var23 = p_Var24 + 0x10;
                                    p_Var1 = p_Var24 + 0x18;
                                    if (*(uint*)( p_Var24 + 0x20 ) < (uint)local_1c8) break;
                                    p_Var17 = p_Var24;
                                    p_Var24 = *(_Rb_tree_node**)p_Var23;
                                    if (*(_Rb_tree_node**)p_Var23 == (_Rb_tree_node*)0x0) goto LAB_0010a481;
                                 }
;
                                 ;;
                                 p_Var24 = *(_Rb_tree_node**)p_Var1;
                              }
 while ( *(_Rb_tree_node**)p_Var1 != (_Rb_tree_node*)0x0 );
                              LAB_0010a481:if (( p_Var17 == (_Rb_tree_node*)local_250 ) || ( (uint)local_1c8 < *(uint*)( p_Var17 + 0x20 ) )) goto LAB_0010a491;
                           }

                           uVar22 = (ulong)(uint)local_1c8;
                           *(int*)( p_Var17 + 0x24 ) = (int)( (long)puVar27 - lVar21 >> 5 ) + -1;
                           lVar21 = *(long*)( this_00 + 8 );
                        }
 else {
                           uVar26 = 0;
                           bVar11 = true;
                           do {
                              plVar6 = *(long**)( lVar21 + uVar22 * 0x20 );
                              pcVar7 = *(code**)( *plVar6 + 0x30 );
                              if (pcVar7 == TType::getFieldName_abi_cxx11_) {
                                 lVar21 = plVar6[0xe];
                              }
 else {
                                 lVar21 = ( *pcVar7 )();
                              }

                              plVar6 = *(long**)( *(long*)( pvVar5 + 8 ) + uVar26 * 0x20 );
                              pcVar7 = *(code**)( *plVar6 + 0x30 );
                              if (pcVar7 == TType::getFieldName_abi_cxx11_) {
                                 lVar20 = plVar6[0xe];
                              }
 else {
                                 lVar20 = ( *pcVar7 )();
                              }

                              sVar4 = *(size_t*)( lVar20 + 0x10 );
                              uVar22 = (ulong)local_1c8 & 0xffffffff;
                              if (sVar4 == *(size_t*)( lVar21 + 0x10 )) {
                                 if (( sVar4 == 0 ) || ( iVar15 = iVar15 == 0 )) {
                                    this_01 = *(TType**)( *(long*)( pvVar5 + 8 ) + uVar26 * 0x20 );
                                    pTVar8 = *(TType**)( uVar22 * 0x20 + *(long*)( this_00 + 8 ) );
                                    cVar13 = TType::operator ==(this_01, pTVar8);
                                    if (cVar13 == '\0') {
                                       error(this, param_1, "Types must match:", 0xe);
                                       glslang::TInfoSinkBase::append((char*)param_1);
                                       if (*(code**)( *(long*)this_01 + 0x30 ) != TType::getFieldName_abi_cxx11_) {
                                          ( **(code**)( *(long*)this_01 + 0x30 ) )(this_01);
                                       }

                                       glslang::TInfoSinkBase::append((basic_string*)param_1);
                                       glslang::TInfoSinkBase::append((char*)param_1);
                                       glslang::TInfoSinkBase::append((char*)param_1);
                                       local_98 = glslang::GetThreadPoolAllocator();
                                       local_90 = local_80;
                                       std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_98, &_LC2, &_LC2);
                                       local_c8 = glslang::GetThreadPoolAllocator();
                                       local_c0 = local_b0;
                                       std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_c8, &_LC2, &_LC2);
                                       TType::getCompleteString(local_68, this_01, 0, 1, 1, 1, &local_c8, &local_98);
                                       glslang::TInfoSinkBase::append((basic_string*)param_1);
                                       glslang::TInfoSinkBase::append((char*)param_1);
                                       glslang::TInfoSinkBase::append((char*)param_1);
                                       local_98 = glslang::GetThreadPoolAllocator();
                                       local_90 = local_80;
                                       std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_98, &_LC2, &_LC2);
                                       local_c8 = glslang::GetThreadPoolAllocator();
                                       local_c0 = local_b0;
                                       std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_c8, &_LC2, &_LC2);
                                       TType::getCompleteString(local_68, pTVar8, 0, 1, 1, 1, &local_c8, &local_98);
                                       glslang::TInfoSinkBase::append((basic_string*)param_1);
                                       glslang::TInfoSinkBase::append((char*)param_1);
                                    }

                                    p_Var17 = (_Rb_tree_node*)local_250;
                                    if (local_248 == (_Rb_tree_node*)0x0) {
                                       LAB_00109ef9:local_168 = (undefined**)&local_1c8;
                                       p_Var17 = (_Rb_tree_node*)std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<unsigned_int_const&>,std::tuple<>>(local_258, p_Var17, &local_168);
                                    }
 else {
                                       p_Var24 = local_248;
                                       do {
                                          while (true) {
                                             p_Var23 = p_Var24;
                                             if (*(uint*)( p_Var23 + 0x20 ) < (uint)local_1c8) break;
                                             p_Var24 = *(_Rb_tree_node**)( p_Var23 + 0x10 );
                                             p_Var17 = p_Var23;
                                             if (*(_Rb_tree_node**)( p_Var23 + 0x10 ) == (_Rb_tree_node*)0x0) goto LAB_00109ee9;
                                          }
;
                                          ;;
                                          p_Var24 = *(_Rb_tree_node**)( p_Var23 + 0x18 );
                                       }
 while ( *(_Rb_tree_node**)( p_Var23 + 0x18 ) != (_Rb_tree_node*)0x0 );
                                       LAB_00109ee9:if (( p_Var17 == (_Rb_tree_node*)local_250 ) || ( (uint)local_1c8 < *(uint*)( p_Var17 + 0x20 ) )) goto LAB_00109ef9;
                                    }

                                    uVar22 = (ulong)(uint)local_1c8;
                                    *(int*)( p_Var17 + 0x24 ) = (int)uVar26;
                                    bVar11 = false;
                                 }

                              }

                              uVar26 = ( ulong )((int)uVar26 + 1);
                              lVar21 = *(long*)( this_00 + 8 );
                           }
 while ( uVar26 < ( ulong )(lVar18 - lVar19 >> 5) );
                           if (bVar11) goto LAB_0010a400;
                        }

                        uVar28 = (int)uVar22 + 1;
                        uVar22 = (ulong)uVar28;
                        local_1c8 = (undefined**)CONCAT44(local_1c8._4_4_, uVar28);
                     }
 while ( uVar22 < ( ulong )(*(long*)( this_00 + 0x10 ) - lVar21 >> 5) );
                  }

                  local_280 = &local_1c8;
                  local_288 = local_258;
                  local_290 = &local_168;
                  local_228 = &PTR__TIntermTraverser_00120d00;
                  local_220 = 1;
                  local_21c = 0;
                  local_210 = glslang::GetThreadPoolAllocator();
                  local_208 = 0;
                  local_228 = &PTR__TMergeBlockTraverser_00120ea0;
                  local_200 = 0;
                  local_1f8 = 0;
                  local_1e8 = 0;
                  local_1e0 = 0;
                  local_1d8 = 0;
                  local_1f0 = param_2;
                  ( **(code**)( **(long**)( this + 0x80 ) + 0x10 ) )(*(long**)( this + 0x80 ), &local_228);
                  local_168 = &PTR__TType_00120b18;
                  local_148 = local_148 & 0xfffffff0;
                  local_e0 = (undefined1[16])0x0;
                  local_160 = CONCAT22(local_160._2_2_, 0x100) & 0xf800ffff;
                  local_108 = (undefined1[16])0x0;
                  uStack_124 = 0xfffff800;
                  uStack_120 = 0;
                  uStack_110 = uStack_110 & 0xffffffffffff0000;
                  local_f8 = (undefined1[16])0x0;
                  local_e8 = local_e8 & 0x9fc00000;
                  local_128 = local_128 & 0xffffff00;
                  local_158 = 0;
                  uStack_12c = 0;
                  uStack_144 = 0xffffffff;
                  uStack_140 = 0xffffffff;
                  uVar22 = ( (ulong)uStack_13c._1_3_ & 0xffc000 | 0xffff001f80 ) << 8 | 0xffff000000004fff;
                  uStack_13c = (undefined4)uVar22;
                  uStack_138 = ( undefined4 )(uVar22 >> 0x20);
                  uVar22 = CONCAT44(uStack_130, uStack_134) & 0xfe07ff00ffffffff | 0x1ffffff7fffffff;
                  uStack_134 = (undefined4)uVar22;
                  uStack_130 = ( undefined4 )(uVar22 >> 0x20);
                  uStack_150 = uStack_150 & 0x8000000400000000;
                  uStack_11c = 0xffffffff;
                  local_118 = 0;
                  if (*(code**)( *(long*)param_2 + 0xf0 ) == TIntermTyped::getType) {
                     pTVar25 = param_2 + 0x20;
                  }
 else {
                     pTVar25 = (TIntermSymbol*)( **(code**)( *(long*)param_2 + 0xf0 ) )(param_2);
                  }

                  uVar28 = local_160;
                  local_158 = *(undefined8*)( pTVar25 + 0x10 );
                  uStack_150 = *(ulong*)( pTVar25 + 0x18 );
                  local_e8 = *(uint*)( pTVar25 + 0x80 );
                  local_148 = ( uint ) * (undefined8*)( pTVar25 + 0x20 );
                  uStack_144 = ( undefined4 )(( ulong ) * (undefined8*)( pTVar25 + 0x20 ) >> 0x20);
                  uStack_140 = ( undefined4 ) * (undefined8*)( pTVar25 + 0x28 );
                  uStack_13c = ( undefined4 )(( ulong ) * (undefined8*)( pTVar25 + 0x28 ) >> 0x20);
                  uStack_138 = ( undefined4 ) * (undefined8*)( pTVar25 + 0x30 );
                  uStack_134 = ( undefined4 )(( ulong ) * (undefined8*)( pTVar25 + 0x30 ) >> 0x20);
                  uStack_130 = ( undefined4 ) * (undefined8*)( pTVar25 + 0x38 );
                  uStack_12c = ( undefined4 )(( ulong ) * (undefined8*)( pTVar25 + 0x38 ) >> 0x20);
                  local_128 = ( uint ) * (undefined8*)( pTVar25 + 0x40 );
                  uStack_124 = ( undefined4 )(( ulong ) * (undefined8*)( pTVar25 + 0x40 ) >> 0x20);
                  uStack_120 = ( undefined4 ) * (undefined8*)( pTVar25 + 0x48 );
                  uStack_11c = ( undefined4 )(( ulong ) * (undefined8*)( pTVar25 + 0x48 ) >> 0x20);
                  local_118 = *(undefined8*)( pTVar25 + 0x50 );
                  uStack_110 = *(ulong*)( pTVar25 + 0x58 );
                  local_160._0_2_ = CONCAT11((byte)pTVar25[9] & 0xf | (byte)pTVar25[9] & 0xf0, pTVar25[8]);
                  local_160._3_1_ = SUB41(uVar28, 3);
                  local_f8 = *(undefined1(*) [16])( pTVar25 + 0x70 );
                  local_108 = *(undefined1(*) [16])( pTVar25 + 0x60 );
                  local_e0 = *(undefined1(*) [16])( pTVar25 + 0x88 );
                  local_160._0_3_ = CONCAT12((byte)pTVar25[10] & 0xf | (byte)pTVar25[10] & 0x10 | (byte)pTVar25[10] & 0x20 | (byte)pTVar25[10] & 0x40, (undefined2)local_160);
                  uVar14 = local_160._2_2_ & 0xfc7f | *(ushort*)( pTVar25 + 10 ) & 0x380;
                  local_160 = CONCAT22(uVar14, (undefined2)local_160);
                  uVar12 = local_160;
                  local_160._3_1_ = ( byte )(uVar14 >> 8);
                  local_1c8 = &PTR__TIntermTraverser_00120d00;
                  local_1c0 = 0x100;
                  local_1bc = 0;
                  local_160._0_3_ = (undefined3)uVar12;
                  local_160 = CONCAT13(local_160._3_1_ & 0xfb | (byte)pTVar25[0xb] & 4, (undefined3)local_160);
                  local_1b0 = glslang::GetThreadPoolAllocator();
                  local_1a8 = 0;
                  local_188 = local_290;
                  local_1a0 = 0;
                  local_178 = local_288;
                  local_198 = 0;
                  local_1c8 = &PTR__TMergeBlockTraverser_00120ea0;
                  local_190 = param_2;
                  local_180 = param_4;
                  ( **(code**)( **(long**)( param_4 + 0x80 ) + 0x10 ) )(*(long**)( param_4 + 0x80 ), local_280);
                  std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>::operator =(this_00, pvVar5);
                  std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::_M_erase(local_248);
               }

            }

         }

      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* glslang::TIntermediate::mergeLinkerObjects(TInfoSink&, glslang::TVector<TIntermNode*>&,
   glslang::TVector<TIntermNode*> const&, EShLanguage) */void __thiscall
glslang::TIntermediate::mergeLinkerObjects
          (TIntermediate *this,undefined8 param_1,
          vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *param_2,long param_3,
          int param_5)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  code *pcVar14;
  TType *pTVar15;
  TType *pTVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  basic_string *pbVar20;
  size_t sVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  short sVar26;
  long in_FS_OFFSET;
  uint local_8c;
  TIntermediate *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(param_2 + 8);
  lVar24 = lVar3 - lVar4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = lVar24 >> 3;
  if (*(long *)(param_3 + 0x10) != *(long *)(param_3 + 8)) {
    uVar25 = 0;
    local_8c = 0;
    do {
      lVar1 = uVar25 * 8;
      bVar6 = true;
      uVar25 = 0;
      if (lVar24 == 0) {
        bVar6 = *(int *)this == 3 && param_5 == 3;
        if (bVar6) goto LAB_0010b6d0;
LAB_0010b1e7:
        puVar22 = (undefined8 *)(lVar1 + *(long *)(param_3 + 8));
        puVar5 = *(undefined8 **)(param_2 + 0x10);
        if (puVar5 == *(undefined8 **)(param_2 + 0x18)) {
          std::vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>>::
          _M_realloc_insert<TIntermNode*const&>(param_2);
          puVar22 = (undefined8 *)(lVar1 + *(long *)(param_3 + 8));
        }
        else {
          *puVar5 = *puVar22;
          *(undefined8 **)(param_2 + 0x10) = puVar5 + 1;
        }
        plVar12 = (long *)(**(code **)(*(long *)*puVar22 + 0x60))();
        if (*(code **)(*plVar12 + 0x100) == TIntermTyped::getBasicType) {
          uVar10 = (uint)*(byte *)(plVar12 + 5);
        }
        else {
          uVar10 = (**(code **)(*plVar12 + 0x100))();
        }
        if (uVar10 == 0x10) {
          plVar12 = (long *)(**(code **)(**(long **)(*(long *)(param_3 + 8) + lVar1) + 0x60))();
          if (*(code **)(*plVar12 + 400) == TIntermSymbol::getName_abi_cxx11_) {
            plVar12 = plVar12 + 0x19;
          }
          else {
            plVar12 = (long *)(**(code **)(*plVar12 + 400))(plVar12);
          }
          uVar25 = plVar12[2];
          if (uVar25 != 0) {
            sVar21 = 5;
            if (uVar25 < 6) {
              sVar21 = uVar25;
            }
            iVar8 = memcmp((void *)plVar12[1],"anon@",sVar21);
            if ((iVar8 == 0 && (int)sVar21 == 5) && (lVar3 != lVar4)) {
              uVar25 = 0;
              do {
                plVar12 = (long *)(**(code **)(**(long **)(*(long *)(param_2 + 8) + uVar25 * 8) +
                                              0x60))();
                local_50 = (**(code **)(**(long **)(*(long *)(param_3 + 8) + lVar1) + 0x60))();
                local_58 = this;
                local_48 = param_1;
                cVar7 = isSameInterface(plVar12,*(undefined4 *)this,local_50,param_5);
                if (cVar7 != '\0') {
                  if (*(code **)(*plVar12 + 400) == TIntermSymbol::getName_abi_cxx11_) {
                    pbVar20 = (basic_string *)(plVar12 + 0x19);
                  }
                  else {
                    pbVar20 = (basic_string *)(**(code **)(*plVar12 + 400))(plVar12);
                  }
                  mergeLinkerObjects(TInfoSink&,glslang::TVector<TIntermNode*>&,glslang::TVector<TIntermNode*>const&,EShLanguage)
                  ::
                  {lambda(std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const&)#1}
                  ::operator()((_lambda_std____cxx11__basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const___1_
                                *)&local_58,pbVar20);
                  if (*(code **)(*plVar12 + 0x100) == TIntermTyped::getBasicType) {
                    uVar10 = (uint)*(byte *)(plVar12 + 5);
                  }
                  else {
                    uVar10 = (**(code **)(*plVar12 + 0x100))(plVar12);
                  }
                  if (uVar10 == 0x10) {
                    if (*(code **)(*plVar12 + 400) == TIntermSymbol::getName_abi_cxx11_) {
                      plVar13 = plVar12 + 0x19;
                    }
                    else {
                      plVar13 = (long *)(**(code **)(*plVar12 + 400))(plVar12);
                    }
                    uVar23 = plVar13[2];
                    if (uVar23 != 0) {
                      sVar21 = 5;
                      if (uVar23 < 6) {
                        sVar21 = uVar23;
                      }
                      iVar8 = memcmp((void *)plVar13[1],"anon@",sVar21);
                      uVar23 = 0;
                      if (iVar8 == 0 && (int)sVar21 == 5) {
                        do {
                          if (*(code **)(*plVar12 + 0xf0) == TIntermTyped::getType) {
                            lVar17 = *(long *)(plVar12[0x11] + 8);
                            if ((ulong)(*(long *)(plVar12[0x11] + 0x10) - lVar17 >> 5) <= uVar23)
                            break;
                          }
                          else {
                            lVar17 = (**(code **)(*plVar12 + 0xf0))(plVar12);
                            if ((ulong)(*(long *)(*(long *)(lVar17 + 0x68) + 0x10) -
                                        *(long *)(*(long *)(lVar17 + 0x68) + 8) >> 5) <= uVar23)
                            break;
                            if (*(code **)(*plVar12 + 0xf0) == TIntermTyped::getType) {
                              lVar17 = *(long *)(plVar12[0x11] + 8);
                            }
                            else {
                              lVar17 = (**(code **)(*plVar12 + 0xf0))(plVar12);
                              lVar17 = *(long *)(*(long *)(lVar17 + 0x68) + 8);
                            }
                          }
                          plVar13 = *(long **)(lVar17 + uVar23 * 0x20);
                          pcVar14 = *(code **)(*plVar13 + 0x30);
                          if (pcVar14 == TType::getFieldName_abi_cxx11_) {
                            pbVar20 = (basic_string *)plVar13[0xe];
                          }
                          else {
                            pbVar20 = (basic_string *)(*pcVar14)();
                          }
                          uVar23 = (ulong)((int)uVar23 + 1);
                          mergeLinkerObjects(TInfoSink&,glslang::TVector<TIntermNode*>&,glslang::TVector<TIntermNode*>const&,EShLanguage)
                          ::
                          {lambda(std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const&)#1}
                          ::operator()((_lambda_std____cxx11__basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const___1_
                                        *)&local_58,pbVar20);
                        } while( true );
                      }
                    }
                  }
                }
                uVar25 = uVar25 + 1;
              } while (uVar25 < uVar11);
            }
          }
        }
      }
      else {
        do {
          while( true ) {
            plVar12 = (long *)(**(code **)(**(long **)(*(long *)(param_2 + 8) + uVar25 * 8) + 0x60))
                                        ();
            plVar13 = (long *)(**(code **)(**(long **)(*(long *)(param_3 + 8) + lVar1) + 0x60))();
            if (*(code **)(*plVar12 + 0xf0) == TIntermTyped::getType) {
              plVar19 = plVar12 + 4;
            }
            else {
              plVar19 = (long *)(**(code **)(*plVar12 + 0xf0))(plVar12);
            }
            if (*(code **)(*plVar19 + 0x38) == TType::getBasicType) {
              uVar10 = (uint)*(byte *)(plVar19 + 1);
            }
            else {
              uVar10 = (**(code **)(*plVar19 + 0x38))();
            }
            lVar17 = *plVar13;
            if (uVar10 != 0x10) break;
            if (*(code **)(lVar17 + 0xf0) == TIntermTyped::getType) {
              plVar19 = plVar13 + 4;
            }
            else {
              plVar19 = (long *)(**(code **)(lVar17 + 0xf0))(plVar13);
            }
            if (*(code **)(*plVar19 + 0x38) == TType::getBasicType) {
              uVar10 = (uint)*(byte *)(plVar19 + 1);
            }
            else {
              uVar10 = (**(code **)(*plVar19 + 0x38))();
            }
            if (uVar10 != 0x10) {
              lVar17 = *plVar13;
              break;
            }
            cVar7 = isSameInterface(plVar12,*(undefined4 *)this,plVar13,param_5);
            if (cVar7 != '\0') {
              if (*(code **)(*plVar13 + 0xf0) == TIntermTyped::getType) {
                plVar19 = plVar13 + 4;
              }
              else {
                plVar19 = (long *)(**(code **)(*plVar13 + 0xf0))(plVar13);
              }
              if (*(code **)(*plVar19 + 0x28) == TType::getTypeName_abi_cxx11_) {
                plVar19 = (long *)plVar19[0xf];
              }
              else {
                plVar19 = (long *)(**(code **)(*plVar19 + 0x28))();
              }
              if (*(code **)(*plVar12 + 0xf0) == TIntermTyped::getType) {
                plVar18 = plVar12 + 4;
              }
              else {
                plVar18 = (long *)(**(code **)(*plVar12 + 0xf0))(plVar12);
              }
              if (*(code **)(*plVar18 + 0x28) == TType::getTypeName_abi_cxx11_) {
                plVar18 = (long *)plVar18[0xf];
              }
              else {
                plVar18 = (long *)(**(code **)(*plVar18 + 0x28))();
              }
              sVar21 = plVar18[2];
              lVar17 = *plVar12;
              if (sVar21 != plVar19[2]) goto LAB_0010a747;
              goto LAB_0010a8f0;
            }
            lVar17 = *plVar12;
LAB_0010a747:
            if (*(code **)(lVar17 + 0x108) == TIntermTyped::getQualifier) {
              plVar12 = plVar12 + 6;
            }
            else {
              plVar12 = (long *)(**(code **)(lVar17 + 0x108))(plVar12);
            }
            if (*(char *)((long)plVar12 + 0x2d) != '\0') {
              if (*(code **)(*plVar13 + 0x108) == TIntermTyped::getQualifier) {
                plVar13 = plVar13 + 6;
              }
              else {
                plVar13 = (long *)(**(code **)(*plVar13 + 0x108))(plVar13);
              }
              if ((*(char *)((long)plVar13 + 0x2d) != '\0') && (param_5 == *(int *)this)) {
                error(this,param_1,"Only one push_constant block is allowed per stage",0xe);
              }
            }
            uVar25 = uVar25 + 1;
            if (uVar11 <= uVar25) goto LAB_0010abb0;
          }
          if (*(code **)(lVar17 + 400) == TIntermSymbol::getName_abi_cxx11_) {
            lVar17 = *plVar12;
            plVar19 = plVar13 + 0x19;
            pcVar14 = *(code **)(lVar17 + 400);
            if (pcVar14 != TIntermSymbol::getName_abi_cxx11_) goto LAB_0010af56;
LAB_0010a732:
            plVar18 = plVar12 + 0x19;
          }
          else {
            plVar19 = (long *)(**(code **)(lVar17 + 400))(plVar13);
            lVar17 = *plVar12;
            pcVar14 = *(code **)(lVar17 + 400);
            if (pcVar14 == TIntermSymbol::getName_abi_cxx11_) goto LAB_0010a732;
LAB_0010af56:
            plVar18 = (long *)(*pcVar14)(plVar12);
            lVar17 = *plVar12;
          }
          sVar21 = plVar18[2];
          if (sVar21 != plVar19[2]) goto LAB_0010a747;
LAB_0010a8f0:
          if ((sVar21 != 0) &&
             (iVar8 = memcmp((void *)plVar18[1],(void *)plVar19[1],sVar21), iVar8 != 0))
          goto LAB_0010a747;
          if ((plVar12[0x1f] == 0) && (plVar13[0x1f] != 0)) {
            plVar12[0x1f] = plVar13[0x1f];
            pcVar14 = *(code **)(lVar17 + 0x108);
            if (pcVar14 == TIntermTyped::getQualifier) goto LAB_0010a936;
LAB_0010b073:
            lVar17 = (*pcVar14)(plVar12);
            if (*(short *)(lVar17 + 0x20) == -1) goto LAB_0010afe0;
LAB_0010b083:
            pcVar14 = *(code **)(*plVar12 + 0x108);
LAB_0010b02b:
            if (pcVar14 == TIntermTyped::getQualifier) goto LAB_0010a942;
            plVar19 = (long *)(*pcVar14)(plVar12);
          }
          else {
            pcVar14 = *(code **)(lVar17 + 0x108);
            if (pcVar14 != TIntermTyped::getQualifier) goto LAB_0010b073;
LAB_0010a936:
            if ((short)plVar12[10] == -1) {
LAB_0010afe0:
              if (*(code **)(*plVar13 + 0x108) == TIntermTyped::getQualifier) {
                lVar17 = *plVar12;
                sVar26 = (short)plVar13[10];
                pcVar14 = *(code **)(lVar17 + 0x108);
                if (sVar26 == -1) goto LAB_0010b02b;
LAB_0010b00e:
                pcVar14 = *(code **)(lVar17 + 0x108);
                if (pcVar14 != TIntermTyped::getQualifier) goto LAB_0010b559;
LAB_0010b022:
                plVar19 = plVar12 + 6;
              }
              else {
                lVar17 = (**(code **)(*plVar13 + 0x108))(plVar13);
                if (*(short *)(lVar17 + 0x20) == -1) goto LAB_0010b083;
                if (*(code **)(*plVar13 + 0x108) == TIntermTyped::getQualifier) {
                  sVar26 = (short)plVar13[10];
                  lVar17 = *plVar12;
                  goto LAB_0010b00e;
                }
                lVar17 = (**(code **)(*plVar13 + 0x108))(plVar13);
                sVar26 = *(short *)(lVar17 + 0x20);
                pcVar14 = *(code **)(*plVar12 + 0x108);
                if (pcVar14 == TIntermTyped::getQualifier) goto LAB_0010b022;
LAB_0010b559:
                plVar19 = (long *)(*pcVar14)(plVar12);
                pcVar14 = *(code **)(*plVar12 + 0x108);
              }
              *(short *)(plVar19 + 4) = sVar26;
              goto LAB_0010b02b;
            }
LAB_0010a942:
            plVar19 = plVar12 + 6;
          }
          if ((~*(ushort *)((long)plVar19 + 0x1c) & 0xfff) == 0) {
            if (*(code **)(*plVar13 + 0x108) != TIntermTyped::getQualifier) {
              lVar17 = (**(code **)(*plVar13 + 0x108))(plVar13);
              if ((~*(ushort *)(lVar17 + 0x1c) & 0xfff) != 0) {
                if (*(code **)(*plVar13 + 0x108) == TIntermTyped::getQualifier) {
                  lVar17 = *plVar12;
                  goto LAB_0010af9f;
                }
                plVar19 = (long *)(**(code **)(*plVar13 + 0x108))(plVar13);
                lVar17 = *plVar12;
                goto LAB_0010afa3;
              }
              goto LAB_0010a956;
            }
            lVar17 = *plVar12;
            if ((~*(ushort *)((long)plVar13 + 0x4c) & 0xfff) != 0) {
LAB_0010af9f:
              plVar19 = plVar13 + 6;
LAB_0010afa3:
              uVar2 = *(ushort *)((long)plVar19 + 0x1c);
              if (*(code **)(lVar17 + 0x108) == TIntermTyped::getQualifier) {
                plVar19 = plVar12 + 6;
              }
              else {
                plVar19 = (long *)(**(code **)(lVar17 + 0x108))(plVar12);
                lVar17 = *plVar12;
              }
              *(ushort *)((long)plVar19 + 0x1c) =
                   *(ushort *)((long)plVar19 + 0x1c) & 0xf000 | uVar2 & 0xfff;
            }
          }
          else {
LAB_0010a956:
            lVar17 = *plVar12;
          }
          if (*(code **)(lVar17 + 0xf8) == TIntermTyped::getWritableType) {
            plVar19 = plVar12 + 4;
          }
          else {
            plVar19 = (long *)(**(code **)(lVar17 + 0xf8))(plVar12);
          }
          pcVar14 = *(code **)(*plVar19 + 0x100);
          if (pcVar14 != TType::isImplicitlySizedArray) {
            cVar7 = (*pcVar14)(plVar19);
LAB_0010a9b7:
            if (cVar7 == '\0') goto LAB_0010ac18;
            if (*(code **)(*plVar13 + 0xf0) == TIntermTyped::getType) {
              plVar19 = plVar13 + 4;
            }
            else {
              plVar19 = (long *)(**(code **)(*plVar13 + 0xf0))(plVar13);
            }
            pcVar14 = *(code **)(*plVar19 + 0x100);
            if (pcVar14 == TType::isImplicitlySizedArray) {
              pcVar14 = *(code **)(*plVar19 + 0xe8);
              if (pcVar14 == TType::isArray) {
                lVar17 = plVar19[0xc];
                if (lVar17 != 0) {
LAB_0010aa14:
                  cVar7 = *(char *)(lVar17 + 0x14);
                  goto LAB_0010aa18;
                }
              }
              else {
                cVar7 = (*pcVar14)(plVar19);
                if (cVar7 != '\0') {
                  lVar17 = plVar19[0xc];
                  goto LAB_0010aa14;
                }
              }
              goto LAB_0010ac18;
            }
            cVar7 = (*pcVar14)(plVar19);
LAB_0010aa18:
            if (cVar7 == '\0') goto LAB_0010ac18;
            if (*(code **)(*plVar13 + 0xf0) == TIntermTyped::getType) {
              plVar19 = plVar13 + 4;
            }
            else {
              plVar19 = (long *)(**(code **)(*plVar13 + 0xf0))(plVar13);
            }
            if (*(code **)(*plVar19 + 0x90) == TType::getImplicitArraySize) {
              iVar8 = *(int *)(plVar19[0xc] + 0x10);
              if (iVar8 < 1) {
                iVar8 = 1;
              }
            }
            else {
              iVar8 = (**(code **)(*plVar19 + 0x90))();
            }
            if (*(code **)(*plVar12 + 0xf0) == TIntermTyped::getType) {
              plVar19 = plVar12 + 4;
            }
            else {
              plVar19 = (long *)(**(code **)(*plVar12 + 0xf0))(plVar12);
            }
            if (*(code **)(*plVar19 + 0x90) == TType::getImplicitArraySize) {
              iVar9 = *(int *)(plVar19[0xc] + 0x10);
              if (iVar9 < 1) {
                iVar9 = 1;
              }
            }
            else {
              iVar9 = (**(code **)(*plVar19 + 0x90))();
            }
            if (iVar9 < iVar8) {
              if (*(code **)(*plVar12 + 0xf8) == TIntermTyped::getWritableType) {
                plVar19 = plVar12 + 4;
              }
              else {
                plVar19 = (long *)(**(code **)(*plVar12 + 0xf8))(plVar12);
              }
              pcVar14 = *(code **)(*plVar19 + 0x118);
              if (*(code **)(*plVar13 + 0xf0) == TIntermTyped::getType) {
                plVar18 = plVar13 + 4;
              }
              else {
                plVar18 = (long *)(**(code **)(*plVar13 + 0xf0))(plVar13);
              }
              if (*(code **)(*plVar18 + 0x90) == TType::getImplicitArraySize) {
                iVar8 = *(int *)(plVar18[0xc] + 0x10);
                if (iVar8 < 1) {
                  iVar8 = 1;
                }
              }
              else {
                iVar8 = (**(code **)(*plVar18 + 0x90))();
              }
              if (pcVar14 == TType::updateImplicitArraySize) {
                iVar9 = *(int *)(plVar19[0xc] + 0x10);
                if (iVar9 < iVar8) {
                  iVar9 = iVar8;
                }
                *(int *)(plVar19[0xc] + 0x10) = iVar9;
              }
              else {
                (*pcVar14)(plVar19);
              }
            }
            goto LAB_0010ab40;
          }
          pcVar14 = *(code **)(*plVar19 + 0xe8);
          if (pcVar14 == TType::isArray) {
            lVar17 = plVar19[0xc];
            if (lVar17 != 0) {
LAB_0010a9b3:
              cVar7 = *(char *)(lVar17 + 0x14);
              goto LAB_0010a9b7;
            }
          }
          else {
            cVar7 = (*pcVar14)(plVar19);
            if (cVar7 != '\0') {
              lVar17 = plVar19[0xc];
              goto LAB_0010a9b3;
            }
          }
LAB_0010ac18:
          plVar19 = plVar12 + 4;
          if (*(code **)(*plVar12 + 0xf8) != TIntermTyped::getWritableType) {
            plVar19 = (long *)(**(code **)(*plVar12 + 0xf8))(plVar12);
          }
          pcVar14 = *(code **)(*plVar19 + 0x100);
          if (pcVar14 == TType::isImplicitlySizedArray) {
            pcVar14 = *(code **)(*plVar19 + 0xe8);
            if (pcVar14 == TType::isArray) {
              lVar17 = plVar19[0xc];
              if (lVar17 != 0) {
LAB_0010ac75:
                cVar7 = *(char *)(lVar17 + 0x14);
                goto LAB_0010ac79;
              }
            }
            else {
              cVar7 = (*pcVar14)(plVar19);
              if (cVar7 != '\0') {
                lVar17 = plVar19[0xc];
                goto LAB_0010ac75;
              }
            }
            goto LAB_0010add0;
          }
          cVar7 = (*pcVar14)(plVar19);
LAB_0010ac79:
          lVar17 = *plVar13;
          if (cVar7 == '\0') {
LAB_0010add3:
            plVar19 = plVar13 + 4;
            if (*(code **)(lVar17 + 0xf0) != TIntermTyped::getType) {
              plVar19 = (long *)(**(code **)(lVar17 + 0xf0))(plVar13);
            }
            pcVar14 = *(code **)(*plVar19 + 0x100);
            if (pcVar14 == TType::isImplicitlySizedArray) {
              pcVar14 = *(code **)(*plVar19 + 0xe8);
              if (pcVar14 == TType::isArray) {
                lVar17 = plVar19[0xc];
                if (lVar17 != 0) {
LAB_0010ae25:
                  cVar7 = *(char *)(lVar17 + 0x14);
                  goto LAB_0010ae29;
                }
              }
              else {
                cVar7 = (*pcVar14)(plVar19);
                if (cVar7 != '\0') {
                  lVar17 = plVar19[0xc];
                  goto LAB_0010ae25;
                }
              }
            }
            else {
              cVar7 = (*pcVar14)(plVar19);
LAB_0010ae29:
              if (cVar7 != '\0') {
                if (*(code **)(*plVar12 + 0xf8) == TIntermTyped::getWritableType) {
                  plVar19 = plVar12 + 4;
                }
                else {
                  plVar19 = (long *)(**(code **)(*plVar12 + 0xf8))(plVar12);
                }
                pcVar14 = *(code **)(*plVar19 + 0xf0);
                if (pcVar14 == TType::isSizedArray) {
                  pcVar14 = *(code **)(*plVar19 + 0xe8);
                  if (pcVar14 == TType::isArray) {
                    lVar17 = plVar19[0xc];
                    if (lVar17 != 0) {
LAB_0010ae8e:
                      if (**(int **)(*(long *)(lVar17 + 8) + 8) != 0) goto LAB_0010aea0;
                    }
                  }
                  else {
                    cVar7 = (*pcVar14)(plVar19);
                    if (cVar7 != '\0') {
                      lVar17 = plVar19[0xc];
                      goto LAB_0010ae8e;
                    }
                  }
                }
                else {
                  cVar7 = (*pcVar14)(plVar19);
                  if (cVar7 != '\0') {
LAB_0010aea0:
                    plVar19 = plVar13 + 4;
                    if (*(code **)(*plVar13 + 0xf0) != TIntermTyped::getType) {
                      plVar19 = (long *)(**(code **)(*plVar13 + 0xf0))(plVar13);
                    }
                    if (*(code **)(*plVar19 + 0x90) == TType::getImplicitArraySize) {
                      iVar8 = 1;
                      if (0 < *(int *)(plVar19[0xc] + 0x10)) {
                        iVar8 = *(int *)(plVar19[0xc] + 0x10);
                      }
                    }
                    else {
                      iVar8 = (**(code **)(*plVar19 + 0x90))();
                    }
                    if (*(code **)(*plVar12 + 0xf8) == TIntermTyped::getWritableType) {
                      plVar19 = plVar12 + 4;
                    }
                    else {
                      plVar19 = (long *)(**(code **)(*plVar12 + 0xf8))(plVar12);
                    }
                    goto LAB_0010ad4c;
                  }
                }
              }
            }
LAB_0010ab40:
            pcVar14 = *(code **)(*plVar13 + 0xf0);
            if (pcVar14 == TIntermTyped::getType) goto LAB_0010ab53;
LAB_0010adb0:
            pTVar15 = (TType *)(*pcVar14)(plVar13);
          }
          else {
            if (*(code **)(lVar17 + 0xf0) == TIntermTyped::getType) {
              plVar19 = plVar13 + 4;
            }
            else {
              plVar19 = (long *)(**(code **)(lVar17 + 0xf0))(plVar13);
            }
            pcVar14 = *(code **)(*plVar19 + 0xf0);
            if (pcVar14 == TType::isSizedArray) {
              pcVar14 = *(code **)(*plVar19 + 0xe8);
              if (pcVar14 == TType::isArray) {
                lVar17 = plVar19[0xc];
                if (lVar17 != 0) {
LAB_0010acd6:
                  if (**(int **)(*(long *)(lVar17 + 8) + 8) != 0) goto LAB_0010ace8;
                }
              }
              else {
                cVar7 = (*pcVar14)(plVar19);
                if (cVar7 != '\0') {
                  lVar17 = plVar19[0xc];
                  goto LAB_0010acd6;
                }
              }
LAB_0010add0:
              lVar17 = *plVar13;
              goto LAB_0010add3;
            }
            cVar7 = (*pcVar14)(plVar19);
            if (cVar7 == '\0') goto LAB_0010add0;
LAB_0010ace8:
            if (*(code **)(*plVar12 + 0xf8) == TIntermTyped::getWritableType) {
              plVar19 = plVar12 + 4;
            }
            else {
              plVar19 = (long *)(**(code **)(*plVar12 + 0xf8))(plVar12);
            }
            if (*(code **)(*plVar19 + 0x90) == TType::getImplicitArraySize) {
              iVar8 = 1;
              if (0 < *(int *)(plVar19[0xc] + 0x10)) {
                iVar8 = *(int *)(plVar19[0xc] + 0x10);
              }
            }
            else {
              iVar8 = (**(code **)(*plVar19 + 0x90))();
            }
            if (*(code **)(*plVar13 + 0xf0) == TIntermTyped::getType) {
              plVar19 = plVar13 + 4;
            }
            else {
              plVar19 = (long *)(**(code **)(*plVar13 + 0xf0))(plVar13);
            }
LAB_0010ad4c:
            if (*(code **)(*plVar19 + 0x78) == TType::getOuterArraySize) {
              iVar9 = **(int **)(*(long *)(plVar19[0xc] + 8) + 8);
            }
            else {
              iVar9 = (**(code **)(*plVar19 + 0x78))();
            }
            if (iVar8 <= iVar9) goto LAB_0010ab40;
            error(this,param_1,
                  "Implicit size of unsized array doesn\'t match same symbol among multiple shaders."
                  ,0xe);
            pcVar14 = *(code **)(*plVar13 + 0xf0);
            if (pcVar14 != TIntermTyped::getType) goto LAB_0010adb0;
LAB_0010ab53:
            pTVar15 = (TType *)(plVar13 + 4);
          }
          if (*(code **)(*plVar12 + 0xf8) == TIntermTyped::getWritableType) {
            pTVar16 = (TType *)(plVar12 + 4);
          }
          else {
            pTVar16 = (TType *)(**(code **)(*plVar12 + 0xf8))(plVar12);
          }
          uVar25 = uVar25 + 1;
          mergeImplicitArraySizes(this,pTVar16,pTVar15);
          bVar6 = false;
          mergeErrorCheck(this,param_1,plVar12,plVar13,param_5);
        } while (uVar25 < uVar11);
LAB_0010abb0:
        if ((*(int *)this == 3) && (param_5 == 3)) {
LAB_0010b6d0:
          plVar12 = (long *)(**(code **)(**(long **)(*(long *)(param_3 + 8) + lVar1) + 0x60))();
          lVar17 = *plVar12;
          if (*(code **)(lVar17 + 0x150) == TIntermTyped::isArray) {
            if (plVar12[0x10] != 0) {
LAB_0010b70f:
              if (*(code **)(lVar17 + 0x108) == TIntermTyped::getQualifier) {
                if ((*(byte *)(plVar12 + 7) & 0x7f) == 3) {
LAB_0010b737:
                  plVar13 = plVar12 + 6;
LAB_0010b73c:
                  if (*(ushort *)(plVar13 + 1) < 0x80) {
                    if (*(code **)(*plVar12 + 0x118) == TIntermTyped::getArraySizes) {
                      lVar17 = plVar12[0x10];
                      if (*(char *)(lVar17 + 0x14) == '\0') goto LAB_0010b994;
LAB_0010b777:
                      if (*(int *)(this + 0x310) - 1U < 6) {
                        iVar8 = *(int *)(lVar17 + 0x10);
                        if (*(int *)(lVar17 + 0x10) < 1) {
                          iVar8 = 1;
                        }
                        if (*(int *)(CSWTCH_1265 + (ulong)(*(int *)(this + 0x310) - 1U) * 4) ==
                            iVar8) goto LAB_0010b955;
                      }
LAB_0010b7aa:
                      error(this,param_1,
                            "Not all array sizes match across all geometry shaders in the program",
                            0xe);
                    }
                    else {
                      lVar17 = (**(code **)(*plVar12 + 0x118))(plVar12);
                      if (*(char *)(lVar17 + 0x14) != '\0') {
                        if (*(code **)(*plVar12 + 0x118) == TIntermTyped::getArraySizes) {
                          lVar17 = plVar12[0x10];
                        }
                        else {
                          lVar17 = (**(code **)(*plVar12 + 0x118))(plVar12);
                        }
                        goto LAB_0010b777;
                      }
LAB_0010b955:
                      if (*(code **)(*plVar12 + 0x118) == TIntermTyped::getArraySizes) {
                        lVar17 = plVar12[0x10];
                        if (*(char *)(lVar17 + 0x14) == '\0') goto LAB_0010b994;
                      }
                      else {
                        lVar17 = (**(code **)(*plVar12 + 0x118))(plVar12);
                        if (*(char *)(lVar17 + 0x14) == '\0') {
                          if (*(code **)(*plVar12 + 0x118) == TIntermTyped::getArraySizes) {
                            lVar17 = plVar12[0x10];
                          }
                          else {
                            lVar17 = (**(code **)(*plVar12 + 0x118))(plVar12);
                          }
LAB_0010b994:
                          iVar8 = 0;
                          if (*(int *)(this + 0x310) - 1U < 6) {
                            iVar8 = *(int *)(CSWTCH_1265 + (ulong)(*(int *)(this + 0x310) - 1U) * 4)
                            ;
                          }
                          if (iVar8 != **(int **)(*(long *)(lVar17 + 8) + 8)) goto LAB_0010b7aa;
                        }
                      }
                    }
                  }
                }
              }
              else {
                lVar17 = (**(code **)(lVar17 + 0x108))(plVar12);
                if ((*(byte *)(lVar17 + 8) & 0x7f) == 3) {
                  if (*(code **)(*plVar12 + 0x108) == TIntermTyped::getQualifier) goto LAB_0010b737;
                  plVar13 = (long *)(**(code **)(*plVar12 + 0x108))(plVar12);
                  goto LAB_0010b73c;
                }
              }
            }
          }
          else {
            cVar7 = (**(code **)(lVar17 + 0x150))(plVar12);
            if (cVar7 != '\0') {
              lVar17 = *plVar12;
              goto LAB_0010b70f;
            }
          }
        }
        if (bVar6) goto LAB_0010b1e7;
      }
      local_8c = local_8c + 1;
      uVar25 = (ulong)local_8c;
    } while (uVar25 < (ulong)(*(long *)(param_3 + 0x10) - *(long *)(param_3 + 8) >> 3));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* glslang::TIntermediate::mergeGlobalUniformBlocks(TInfoSink&, glslang::TIntermediate&, bool) */

void __thiscall
glslang::TIntermediate::mergeGlobalUniformBlocks
          (TIntermediate *this,TInfoSink *param_1,TIntermediate *param_2,bool param_3)

{
  TIntermSymbol TVar1;
  undefined8 *puVar2;
  size_t __n;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  TIntermSymbol *pTVar9;
  TIntermSymbol *pTVar10;
  long lVar11;
  long lVar12;
  TIntermSymbol *pTVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long in_FS_OFFSET;
  vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *local_a0;
  long *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar6 = (long *)findLinkerObjects(this);
  if (*(code **)(*plVar6 + 400) == TIntermAggregate::getSequence) {
    local_a0 = (vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *)(plVar6 + 0x18);
  }
  else {
    local_a0 = (vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *)
               (**(code **)(*plVar6 + 400))(plVar6);
  }
  plVar6 = (long *)findLinkerObjects(param_2);
  if (*(code **)(*plVar6 + 400) == TIntermAggregate::getSequence) {
    plVar6 = plVar6 + 0x18;
  }
  else {
    plVar6 = (long *)(**(code **)(*plVar6 + 400))(plVar6);
  }
  local_88 = glslang::GetThreadPoolAllocator();
  local_80 = (undefined8 *)0x0;
  local_78 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  local_68 = glslang::GetThreadPoolAllocator();
  local_60 = (undefined8 *)0x0;
  local_58 = (undefined8 *)0x0;
  puVar2 = *(undefined8 **)(local_a0 + 0x10);
  puVar14 = *(undefined8 **)(local_a0 + 8);
  local_50 = (undefined8 *)0x0;
joined_r0x0010bb60:
  if (puVar2 != puVar14) {
    do {
      plVar8 = (long *)*puVar14;
      local_90 = plVar8;
      plVar7 = (long *)(**(code **)(*plVar8 + 0x60))(plVar8);
      if (*(code **)(*plVar7 + 0x108) == TIntermTyped::getQualifier) {
        plVar7 = plVar7 + 6;
      }
      else {
        plVar7 = (long *)(**(code **)(*plVar7 + 0x108))();
      }
      if ((*(byte *)((long)plVar7 + 0xc) & 8) != 0) {
        if (local_78 != local_70) goto code_r0x0010bbb3;
        std::vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>>::
        _M_realloc_insert<TIntermNode*const&>
                  ((vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *)&local_88,local_78,
                   &local_90);
      }
      puVar14 = puVar14 + 1;
      if (puVar2 == puVar14) break;
    } while( true );
  }
  puVar2 = (undefined8 *)plVar6[2];
  puVar14 = (undefined8 *)plVar6[1];
  puVar16 = (undefined8 *)0x0;
  if (puVar2 == puVar14) goto LAB_0010bdfb;
  do {
    while( true ) {
      plVar6 = (long *)*puVar14;
      local_90 = plVar6;
      plVar8 = (long *)(**(code **)(*plVar6 + 0x60))(plVar6);
      if (*(code **)(*plVar8 + 0x108) == TIntermTyped::getQualifier) {
        plVar8 = plVar8 + 6;
      }
      else {
        plVar8 = (long *)(**(code **)(*plVar8 + 0x108))();
      }
      if ((*(byte *)((long)plVar8 + 0xc) & 8) != 0) break;
LAB_0010bbf0:
      puVar14 = puVar14 + 1;
      if (puVar2 == puVar14) goto LAB_0010bc52;
    }
    if (local_50 == puVar16) {
      std::vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>>::
      _M_realloc_insert<TIntermNode*const&>
                ((vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *)&local_68,puVar16,
                 &local_90);
      puVar16 = local_58;
      goto LAB_0010bbf0;
    }
    *puVar16 = plVar6;
    puVar14 = puVar14 + 1;
    puVar16 = puVar16 + 1;
    local_58 = puVar16;
  } while (puVar2 != puVar14);
LAB_0010bc52:
  puVar14 = local_78;
  puVar2 = local_80;
  if (local_60 != puVar16) {
    puVar3 = puVar2;
    puVar15 = local_60;
    bVar4 = !param_3;
joined_r0x0010bc94:
    do {
      if (puVar14 != puVar3) {
        pTVar9 = (TIntermSymbol *)(**(code **)(*(long *)*puVar3 + 0x60))();
        pTVar10 = (TIntermSymbol *)(**(code **)(*(long *)*puVar15 + 0x60))();
        if (*(code **)(*(long *)pTVar10 + 0xf0) == TIntermTyped::getType) {
          pTVar13 = pTVar10 + 0x20;
        }
        else {
          pTVar13 = (TIntermSymbol *)(**(code **)(*(long *)pTVar10 + 0xf0))(pTVar10);
        }
        if (*(code **)(*(long *)pTVar13 + 0x28) == TType::getTypeName_abi_cxx11_) {
          lVar12 = *(long *)(pTVar13 + 0x78);
        }
        else {
          lVar12 = (**(code **)(*(long *)pTVar13 + 0x28))();
        }
        if (*(code **)(*(long *)pTVar9 + 0xf0) == TIntermTyped::getType) {
          pTVar13 = pTVar9 + 0x20;
        }
        else {
          pTVar13 = (TIntermSymbol *)(**(code **)(*(long *)pTVar9 + 0xf0))(pTVar9);
        }
        if (*(code **)(*(long *)pTVar13 + 0x28) == TType::getTypeName_abi_cxx11_) {
          lVar11 = *(long *)(pTVar13 + 0x78);
        }
        else {
          lVar11 = (**(code **)(*(long *)pTVar13 + 0x28))();
        }
        __n = *(size_t *)(lVar11 + 0x10);
        if (__n == *(size_t *)(lVar12 + 0x10)) {
          if ((__n == 0) ||
             (iVar5 = memcmp(*(void **)(lVar11 + 8),*(void **)(lVar12 + 8),__n), iVar5 == 0)) {
            if (*(code **)(*(long *)pTVar9 + 0x108) == TIntermTyped::getQualifier) {
              pTVar13 = pTVar9 + 0x30;
            }
            else {
              pTVar13 = (TIntermSymbol *)(**(code **)(*(long *)pTVar9 + 0x108))(pTVar9);
            }
            TVar1 = pTVar13[8];
            if (*(code **)(*(long *)pTVar10 + 0x108) == TIntermTyped::getQualifier) {
              pTVar13 = pTVar10 + 0x30;
            }
            else {
              pTVar13 = (TIntermSymbol *)(**(code **)(*(long *)pTVar10 + 0x108))(pTVar10);
            }
            if ((((byte)TVar1 ^ (byte)pTVar13[8]) & 0x7f) == 0) {
              mergeBlockDefinitions(this,param_1,pTVar9,pTVar10,param_2);
              puVar3 = puVar3 + 1;
              bVar4 = false;
              goto joined_r0x0010bc94;
            }
          }
        }
        puVar3 = puVar3 + 1;
        goto joined_r0x0010bc94;
      }
      if (bVar4) {
        puVar3 = *(undefined8 **)(local_a0 + 0x10);
        if (puVar3 == *(undefined8 **)(local_a0 + 0x18)) {
          std::vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>>::
          _M_realloc_insert<TIntermNode*const&>(local_a0,puVar3,puVar15);
        }
        else {
          *puVar3 = *puVar15;
          *(undefined8 **)(local_a0 + 0x10) = puVar3 + 1;
        }
      }
      puVar15 = puVar15 + 1;
      puVar3 = puVar2;
      bVar4 = !param_3;
    } while (puVar16 != puVar15);
  }
LAB_0010bdfb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x0010bbb3:
  *local_78 = plVar8;
  puVar14 = puVar14 + 1;
  local_78 = local_78 + 1;
  goto joined_r0x0010bb60;
}



/* glslang::TIntermediate::userOutputUsed() const */

undefined8 __thiscall glslang::TIntermediate::userOutputUsed(TIntermediate *this)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  TIntermediate *pTVar4;
  long lVar5;
  ulong uVar6;
  basic_string *pbVar7;
  long *plVar8;
  size_t __n;
  void *__s1;
  ulong uVar9;
  
  plVar2 = (long *)findLinkerObjects(this);
  if (*(code **)(*plVar2 + 400) == TIntermAggregate::getSequence) {
    plVar2 = plVar2 + 0x18;
  }
  else {
    plVar2 = (long *)(**(code **)(*plVar2 + 400))();
  }
  lVar5 = plVar2[1];
  if (plVar2[2] != lVar5) {
    uVar9 = 0;
    do {
      plVar3 = (long *)(**(code **)(**(long **)(lVar5 + uVar9 * 8) + 0x60))();
      if (*(code **)(*plVar3 + 0x110) == TIntermTyped::getQualifier) {
        plVar8 = plVar3 + 6;
      }
      else {
        plVar8 = (long *)(**(code **)(*plVar3 + 0x110))(plVar3);
      }
      if ((*(byte *)(plVar8 + 1) & 0x7f) == 4) {
        if (*(code **)(*plVar3 + 400) == TIntermSymbol::getName_abi_cxx11_) {
          uVar6 = plVar3[0x1b];
          __s1 = (void *)plVar3[0x1a];
          if (uVar6 != 0) {
LAB_0010c0b0:
            __n = 3;
            if (uVar6 < 4) {
              __n = uVar6;
            }
            iVar1 = memcmp(__s1,&_LC445,__n);
            if (iVar1 == 0 && (int)__n == 3) goto LAB_0010bff0;
            goto LAB_0010c0d9;
          }
LAB_0010c061:
          pbVar7 = (basic_string *)(plVar3 + 0x19);
        }
        else {
          lVar5 = (**(code **)(*plVar3 + 400))(plVar3);
          __s1 = *(void **)(lVar5 + 8);
          uVar6 = *(ulong *)(lVar5 + 0x10);
          if (uVar6 != 0) goto LAB_0010c0b0;
LAB_0010c0d9:
          if (*(code **)(*plVar3 + 400) == TIntermSymbol::getName_abi_cxx11_) goto LAB_0010c061;
          pbVar7 = (basic_string *)(**(code **)(*plVar3 + 400))(plVar3);
        }
        pTVar4 = (TIntermediate *)
                 std::
                 _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
                 ::find((_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
                         *)(this + 0x730),pbVar7);
        if (this + 0x738 != pTVar4) {
          return 1;
        }
      }
LAB_0010bff0:
      lVar5 = plVar2[1];
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(plVar2[2] - lVar5 >> 3));
  }
  return 0;
}



/* glslang::TIntermediate::mergeUniformObjects(TInfoSink&, glslang::TIntermediate&) */

void __thiscall
glslang::TIntermediate::mergeUniformObjects
          (TIntermediate *this,TInfoSink *param_1,TIntermediate *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  long *local_78;
  ulong local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_2 + 0x80) == 0) || (*(long *)(this + 0x80) == 0)) goto LAB_0010c3e7;
  local_78 = (long *)findLinkerObjects(this);
  if (*(code **)(*local_78 + 400) == TIntermAggregate::getSequence) {
    local_78 = local_78 + 0x18;
  }
  else {
    local_78 = (long *)(**(code **)(*local_78 + 400))();
  }
  plVar3 = (long *)findLinkerObjects(param_2);
  if (*(code **)(*plVar3 + 400) == TIntermAggregate::getSequence) {
    plVar3 = plVar3 + 0x18;
  }
  else {
    plVar3 = (long *)(**(code **)(*plVar3 + 400))();
  }
  local_68 = glslang::GetThreadPoolAllocator();
  lVar8 = plVar3[2];
  lVar9 = plVar3[1];
  local_50 = lVar8 - lVar9;
  if (local_50 == 0) {
    local_50 = 0;
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)glslang::TPoolAllocator::allocate(local_68);
    lVar8 = plVar3[2];
    lVar9 = plVar3[1];
  }
  local_50 = local_50 + (long)puVar4;
  local_60 = puVar4;
  local_58 = puVar4;
  if (lVar9 != lVar8) {
    uVar13 = lVar8 - lVar9;
    uVar5 = 0;
    do {
      *(undefined8 *)((long)puVar4 + uVar5) = *(undefined8 *)(lVar9 + uVar5);
      uVar5 = uVar5 + 8;
    } while (uVar5 != uVar13);
    puVar1 = (undefined8 *)((long)puVar4 + uVar13);
    lVar8 = (long)uVar13 >> 3;
    puVar10 = puVar4;
    local_58 = puVar1;
    if (0 < (long)uVar13 >> 5) {
      do {
        plVar3 = (long *)*puVar10;
        plVar6 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3);
        if (*(code **)(*plVar6 + 0x108) == TIntermTyped::getQualifier) {
          plVar6 = plVar6 + 6;
        }
        else {
          plVar6 = (long *)(**(code **)(*plVar6 + 0x108))();
        }
        if ((*(byte *)(plVar6 + 1) & 0x7f) != 5) {
          plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3);
          if (*(code **)(*plVar3 + 0x108) == TIntermTyped::getQualifier) {
            plVar3 = plVar3 + 6;
          }
          else {
            plVar3 = (long *)(**(code **)(*plVar3 + 0x108))();
          }
          if ((*(byte *)(plVar3 + 1) & 0x7f) != 6) goto joined_r0x0010c47b;
        }
        plVar6 = (long *)puVar10[1];
        plVar7 = (long *)(**(code **)(*plVar6 + 0x60))(plVar6);
        plVar3 = plVar7 + 6;
        if (*(code **)(*plVar7 + 0x108) != TIntermTyped::getQualifier) {
          plVar3 = (long *)(**(code **)(*plVar7 + 0x108))();
        }
        if ((*(byte *)(plVar3 + 1) & 0x7f) != 5) {
          plVar3 = (long *)(**(code **)(*plVar6 + 0x60))(plVar6);
          if (*(code **)(*plVar3 + 0x108) == TIntermTyped::getQualifier) {
            plVar3 = plVar3 + 6;
          }
          else {
            plVar3 = (long *)(**(code **)(*plVar3 + 0x108))();
          }
          if ((*(byte *)(plVar3 + 1) & 0x7f) != 6) {
            puVar10 = puVar10 + 1;
            goto joined_r0x0010c47b;
          }
        }
        plVar6 = (long *)puVar10[2];
        plVar7 = (long *)(**(code **)(*plVar6 + 0x60))(plVar6);
        plVar3 = plVar7 + 6;
        if (*(code **)(*plVar7 + 0x108) != TIntermTyped::getQualifier) {
          plVar3 = (long *)(**(code **)(*plVar7 + 0x108))();
        }
        if ((*(byte *)(plVar3 + 1) & 0x7f) != 5) {
          plVar3 = (long *)(**(code **)(*plVar6 + 0x60))(plVar6);
          if (*(code **)(*plVar3 + 0x108) == TIntermTyped::getQualifier) {
            plVar3 = plVar3 + 6;
          }
          else {
            plVar3 = (long *)(**(code **)(*plVar3 + 0x108))();
          }
          if ((*(byte *)(plVar3 + 1) & 0x7f) != 6) {
            puVar10 = puVar10 + 2;
            goto joined_r0x0010c47b;
          }
        }
        plVar6 = (long *)puVar10[3];
        plVar7 = (long *)(**(code **)(*plVar6 + 0x60))(plVar6);
        plVar3 = plVar7 + 6;
        if (*(code **)(*plVar7 + 0x108) != TIntermTyped::getQualifier) {
          plVar3 = (long *)(**(code **)(*plVar7 + 0x108))();
        }
        if ((*(byte *)(plVar3 + 1) & 0x7f) != 5) {
          plVar3 = (long *)(**(code **)(*plVar6 + 0x60))(plVar6);
          if (*(code **)(*plVar3 + 0x108) == TIntermTyped::getQualifier) {
            plVar3 = plVar3 + 6;
          }
          else {
            plVar3 = (long *)(**(code **)(*plVar3 + 0x108))();
          }
          if ((*(byte *)(plVar3 + 1) & 0x7f) != 6) {
            puVar10 = puVar10 + 3;
            goto joined_r0x0010c47b;
          }
        }
        puVar10 = puVar10 + 4;
      } while (puVar10 != puVar4 + ((long)uVar13 >> 5) * 4);
      lVar8 = (long)puVar1 - (long)puVar10 >> 3;
    }
    puVar12 = puVar1;
    if (lVar8 == 2) {
LAB_0010c778:
      plVar3 = (long *)*puVar10;
      plVar6 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3);
      if (*(code **)(*plVar6 + 0x108) == TIntermTyped::getQualifier) {
        plVar6 = plVar6 + 6;
      }
      else {
        plVar6 = (long *)(**(code **)(*plVar6 + 0x108))(plVar6);
      }
      if ((*(byte *)(plVar6 + 1) & 0x7f) != 5) {
        plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3);
        if (*(code **)(*plVar3 + 0x108) == TIntermTyped::getQualifier) {
          plVar3 = plVar3 + 6;
        }
        else {
          plVar3 = (long *)(**(code **)(*plVar3 + 0x108))();
        }
        if ((*(byte *)(plVar3 + 1) & 0x7f) != 6) goto joined_r0x0010c47b;
      }
      puVar10 = puVar10 + 1;
LAB_0010c5d8:
      plVar3 = (long *)*puVar10;
      plVar6 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3);
      if (*(code **)(*plVar6 + 0x108) == TIntermTyped::getQualifier) {
        plVar6 = plVar6 + 6;
      }
      else {
        plVar6 = (long *)(**(code **)(*plVar6 + 0x108))(plVar6);
      }
      if ((*(byte *)(plVar6 + 1) & 0x7f) != 5) {
        plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3);
        if (*(code **)(*plVar3 + 0x108) == TIntermTyped::getQualifier) {
          plVar3 = plVar3 + 6;
        }
        else {
          plVar3 = (long *)(**(code **)(*plVar3 + 0x108))(plVar3);
        }
        if ((*(byte *)(plVar3 + 1) & 0x7f) != 6) goto joined_r0x0010c47b;
      }
LAB_0010c481:
      uVar5 = (long)puVar12 - (long)puVar4;
      if (uVar5 <= uVar13) goto LAB_0010c3b2;
    }
    else {
      if (lVar8 != 3) {
        if (lVar8 == 1) goto LAB_0010c5d8;
        goto LAB_0010c481;
      }
      plVar3 = (long *)*puVar10;
      plVar6 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3);
      if (*(code **)(*plVar6 + 0x108) == TIntermTyped::getQualifier) {
        plVar6 = plVar6 + 6;
      }
      else {
        plVar6 = (long *)(**(code **)(*plVar6 + 0x108))();
      }
      if ((*(byte *)(plVar6 + 1) & 0x7f) == 5) {
LAB_0010c774:
        puVar10 = puVar10 + 1;
        goto LAB_0010c778;
      }
      plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3);
      if (*(code **)(*plVar3 + 0x108) == TIntermTyped::getQualifier) {
        plVar3 = plVar3 + 6;
      }
      else {
        plVar3 = (long *)(**(code **)(*plVar3 + 0x108))();
      }
      if ((*(byte *)(plVar3 + 1) & 0x7f) == 6) goto LAB_0010c774;
joined_r0x0010c47b:
      puVar12 = puVar10;
      if (puVar10 == puVar1) goto LAB_0010c481;
joined_r0x0010c30b:
      puVar10 = puVar10 + 1;
      puVar11 = puVar12;
      if (puVar10 != puVar1) {
        do {
          plVar3 = (long *)*puVar10;
          plVar6 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3);
          if (*(code **)(*plVar6 + 0x108) == TIntermTyped::getQualifier) {
            plVar6 = plVar6 + 6;
          }
          else {
            plVar6 = (long *)(**(code **)(*plVar6 + 0x108))();
          }
          if ((*(byte *)(plVar6 + 1) & 0x7f) != 5) {
            plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3);
            if (*(code **)(*plVar3 + 0x108) == TIntermTyped::getQualifier) {
              plVar3 = plVar3 + 6;
            }
            else {
              plVar3 = (long *)(**(code **)(*plVar3 + 0x108))();
            }
            puVar12 = puVar11;
            if ((*(byte *)(plVar3 + 1) & 0x7f) != 6) goto joined_r0x0010c30b;
          }
          uVar2 = *puVar10;
          puVar12 = puVar11 + 1;
          puVar10 = puVar10 + 1;
          *puVar11 = uVar2;
          puVar11 = puVar12;
          if (puVar1 == puVar10) break;
        } while( true );
      }
      uVar5 = (long)puVar12 - (long)puVar4;
      if (uVar5 <= uVar13) {
        if ((uVar5 < uVar13) && (puVar1 != puVar12)) {
          local_58 = puVar12;
        }
        goto LAB_0010c3b2;
      }
    }
    std::vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>>::_M_default_append
              ((vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *)&local_68,
               ((long)uVar5 >> 3) - ((long)uVar13 >> 3));
  }
LAB_0010c3b2:
  mergeGlobalUniformBlocks(this,param_1,param_2,false);
  mergeLinkerObjects(this,param_1,local_78,&local_68,*(undefined4 *)param_2);
LAB_0010c3e7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::checkStageIO(TInfoSink&, glslang::TIntermediate&) */

void __thiscall
glslang::TIntermediate::checkStageIO(TIntermediate *this,TInfoSink *param_1,TIntermediate *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  undefined8 *local_d8;
  undefined8 *local_d0;
  ulong local_b0;
  ulong local_a8;
  long local_a0;
  long local_98;
  ulong local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  ulong local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_2 + 0x80) == 0) || (*(long *)(this + 0x80) == 0)) goto LAB_0010cbc6;
  plVar3 = (long *)findLinkerObjects(this);
  if (*(code **)(*plVar3 + 400) == TIntermAggregate::getSequence) {
    plVar3 = plVar3 + 0x18;
  }
  else {
    plVar3 = (long *)(**(code **)(*plVar3 + 400))();
  }
  local_88 = glslang::GetThreadPoolAllocator();
  lVar5 = plVar3[2];
  lVar7 = plVar3[1];
  local_70 = lVar5 - lVar7;
  if (local_70 == 0) {
    local_70 = 0;
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)glslang::TPoolAllocator::allocate(local_88);
    lVar5 = plVar3[2];
    lVar7 = plVar3[1];
  }
  local_70 = local_70 + (long)puVar4;
  if (lVar7 == lVar5) {
    lVar5 = 0;
    local_a0 = 0;
    local_a8 = 0;
    local_d8 = puVar4;
  }
  else {
    local_a8 = 0;
    do {
      *(undefined8 *)((long)puVar4 + local_a8) = *(undefined8 *)(lVar7 + local_a8);
      local_a8 = local_a8 + 8;
    } while (local_a8 != lVar5 - lVar7);
    lVar5 = (long)local_a8 >> 5;
    local_a0 = (long)local_a8 >> 3;
    local_d8 = (undefined8 *)((long)puVar4 + local_a8);
  }
  local_78 = local_d8;
  local_80 = puVar4;
  plVar3 = (long *)findLinkerObjects(param_2);
  if (*(code **)(*plVar3 + 400) == TIntermAggregate::getSequence) {
    plVar3 = plVar3 + 0x18;
  }
  else {
    plVar3 = (long *)(**(code **)(*plVar3 + 400))();
  }
  local_68 = glslang::GetThreadPoolAllocator();
  lVar7 = plVar3[2];
  lVar8 = plVar3[1];
  local_50 = lVar7 - lVar8;
  if (local_50 == 0) {
    local_50 = 0;
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)glslang::TPoolAllocator::allocate(local_68);
    lVar7 = plVar3[2];
    lVar8 = plVar3[1];
  }
  local_50 = local_50 + (long)puVar6;
  if (lVar8 == lVar7) {
    lVar7 = 0;
    local_98 = 0;
    local_b0 = 0;
    local_d0 = puVar6;
  }
  else {
    local_b0 = 0;
    do {
      *(undefined8 *)((long)puVar6 + local_b0) = *(undefined8 *)(lVar8 + local_b0);
      local_b0 = local_b0 + 8;
    } while (local_b0 != lVar7 - lVar8);
    lVar7 = (long)local_b0 >> 5;
    local_98 = (long)local_b0 >> 3;
    local_d0 = (undefined8 *)((long)puVar6 + local_b0);
  }
  local_58 = local_d0;
  lVar8 = local_a0;
  puVar10 = puVar4;
  local_60 = puVar6;
  if (0 < lVar5) {
    do {
      plVar3 = (long *)(**(code **)(*(long *)*puVar10 + 0x60))();
      if (*(code **)(*plVar3 + 0x108) == TIntermTyped::getQualifier) {
        bVar1 = *(byte *)(plVar3 + 7);
      }
      else {
        lVar8 = (**(code **)(*plVar3 + 0x108))();
        bVar1 = *(byte *)(lVar8 + 8);
      }
      if ((bVar1 & 0x7f) != 4) goto joined_r0x0010cc0f;
      plVar3 = (long *)(**(code **)(*(long *)puVar10[1] + 0x60))();
      if (*(code **)(*plVar3 + 0x108) == TIntermTyped::getQualifier) {
        bVar1 = *(byte *)(plVar3 + 7);
      }
      else {
        lVar8 = (**(code **)(*plVar3 + 0x108))();
        bVar1 = *(byte *)(lVar8 + 8);
      }
      if ((bVar1 & 0x7f) != 4) {
        puVar10 = puVar10 + 1;
        goto joined_r0x0010cc0f;
      }
      plVar3 = (long *)(**(code **)(*(long *)puVar10[2] + 0x60))();
      if (*(code **)(*plVar3 + 0x108) == TIntermTyped::getQualifier) {
        bVar1 = *(byte *)(plVar3 + 7);
      }
      else {
        lVar8 = (**(code **)(*plVar3 + 0x108))();
        bVar1 = *(byte *)(lVar8 + 8);
      }
      if ((bVar1 & 0x7f) != 4) {
        puVar10 = puVar10 + 2;
        goto joined_r0x0010cc0f;
      }
      plVar3 = (long *)(**(code **)(*(long *)puVar10[3] + 0x60))();
      if (*(code **)(*plVar3 + 0x108) == TIntermTyped::getQualifier) {
        bVar1 = *(byte *)(plVar3 + 7);
      }
      else {
        lVar8 = (**(code **)(*plVar3 + 0x108))();
        bVar1 = *(byte *)(lVar8 + 8);
      }
      if ((bVar1 & 0x7f) != 4) {
        puVar10 = puVar10 + 3;
        goto joined_r0x0010cc0f;
      }
      puVar10 = puVar10 + 4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    lVar8 = (long)local_d8 - (long)puVar10 >> 3;
  }
  if (lVar8 == 2) {
LAB_0010d0bc:
    plVar3 = (long *)(**(code **)(*(long *)*puVar10 + 0x60))();
    if (*(code **)(*plVar3 + 0x108) == TIntermTyped::getQualifier) {
      plVar3 = plVar3 + 6;
    }
    else {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x108))(plVar3);
    }
    if ((*(byte *)(plVar3 + 1) & 0x7f) == 4) {
      puVar10 = puVar10 + 1;
LAB_0010cff7:
      plVar3 = (long *)(**(code **)(*(long *)*puVar10 + 0x60))();
      if (*(code **)(*plVar3 + 0x108) == TIntermTyped::getQualifier) {
        plVar3 = plVar3 + 6;
      }
      else {
        plVar3 = (long *)(**(code **)(*plVar3 + 0x108))(plVar3);
      }
      if ((*(byte *)(plVar3 + 1) & 0x7f) == 4) goto LAB_0010cc1d;
    }
joined_r0x0010cc0f:
    puVar2 = puVar10;
    if (puVar10 != local_d8) {
      while (puVar10 = puVar10 + 1, puVar10 != local_d8) {
        plVar3 = (long *)(**(code **)(*(long *)*puVar10 + 0x60))();
        if (*(code **)(*plVar3 + 0x108) == TIntermTyped::getQualifier) {
          plVar3 = plVar3 + 6;
        }
        else {
          plVar3 = (long *)(**(code **)(*plVar3 + 0x108))();
        }
        if ((*(byte *)(plVar3 + 1) & 0x7f) == 4) {
          *puVar2 = *puVar10;
          puVar2 = puVar2 + 1;
        }
      }
      uVar9 = (long)puVar2 - (long)puVar4;
      if (local_a8 < uVar9) {
        std::vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>>::_M_default_append
                  ((vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *)&local_88,
                   ((long)uVar9 >> 3) - local_a0);
      }
      else if ((puVar2 != local_d8) && (uVar9 < local_a8)) {
        local_78 = puVar2;
      }
    }
  }
  else {
    if (lVar8 == 3) {
      plVar3 = (long *)(**(code **)(*(long *)*puVar10 + 0x60))();
      if (*(code **)(*plVar3 + 0x108) == TIntermTyped::getQualifier) {
        plVar3 = plVar3 + 6;
      }
      else {
        plVar3 = (long *)(**(code **)(*plVar3 + 0x108))();
      }
      if ((*(byte *)(plVar3 + 1) & 0x7f) == 4) {
        puVar10 = puVar10 + 1;
        goto LAB_0010d0bc;
      }
      goto joined_r0x0010cc0f;
    }
    if (lVar8 == 1) goto LAB_0010cff7;
  }
LAB_0010cc1d:
  lVar5 = local_98;
  puVar4 = puVar6;
  if (0 < lVar7) {
    do {
      plVar3 = (long *)(**(code **)(*(long *)*puVar4 + 0x60))();
      if (*(code **)(*plVar3 + 0x108) == TIntermTyped::getQualifier) {
        bVar1 = *(byte *)(plVar3 + 7);
      }
      else {
        lVar5 = (**(code **)(*plVar3 + 0x108))();
        bVar1 = *(byte *)(lVar5 + 8);
      }
      if ((bVar1 & 0x7f) != 3) goto joined_r0x0010ce50;
      plVar3 = (long *)(**(code **)(*(long *)puVar4[1] + 0x60))();
      if (*(code **)(*plVar3 + 0x108) == TIntermTyped::getQualifier) {
        bVar1 = *(byte *)(plVar3 + 7);
      }
      else {
        lVar5 = (**(code **)(*plVar3 + 0x108))();
        bVar1 = *(byte *)(lVar5 + 8);
      }
      if ((bVar1 & 0x7f) != 3) {
        puVar4 = puVar4 + 1;
        goto joined_r0x0010ce50;
      }
      plVar3 = (long *)(**(code **)(*(long *)puVar4[2] + 0x60))();
      if (*(code **)(*plVar3 + 0x108) == TIntermTyped::getQualifier) {
        bVar1 = *(byte *)(plVar3 + 7);
      }
      else {
        lVar5 = (**(code **)(*plVar3 + 0x108))();
        bVar1 = *(byte *)(lVar5 + 8);
      }
      if ((bVar1 & 0x7f) != 3) {
        puVar4 = puVar4 + 2;
        goto joined_r0x0010ce50;
      }
      plVar3 = (long *)(**(code **)(*(long *)puVar4[3] + 0x60))();
      if (*(code **)(*plVar3 + 0x108) == TIntermTyped::getQualifier) {
        bVar1 = *(byte *)(plVar3 + 7);
      }
      else {
        lVar5 = (**(code **)(*plVar3 + 0x108))();
        bVar1 = *(byte *)(lVar5 + 8);
      }
      if ((bVar1 & 0x7f) != 3) {
        puVar4 = puVar4 + 3;
        goto joined_r0x0010ce50;
      }
      puVar4 = puVar4 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    lVar5 = (long)local_d0 - (long)puVar4 >> 3;
  }
  if (lVar5 == 2) {
LAB_0010d132:
    plVar3 = (long *)(**(code **)(*(long *)*puVar4 + 0x60))();
    if (*(code **)(*plVar3 + 0x108) == TIntermTyped::getQualifier) {
      plVar3 = plVar3 + 6;
    }
    else {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x108))(plVar3);
    }
    if ((*(byte *)(plVar3 + 1) & 0x7f) == 3) {
      puVar4 = puVar4 + 1;
LAB_0010cf88:
      plVar3 = (long *)(**(code **)(*(long *)*puVar4 + 0x60))();
      if (*(code **)(*plVar3 + 0x108) == TIntermTyped::getQualifier) {
        plVar3 = plVar3 + 6;
      }
      else {
        plVar3 = (long *)(**(code **)(*plVar3 + 0x108))(plVar3);
      }
      if ((*(byte *)(plVar3 + 1) & 0x7f) == 3) goto LAB_0010cba9;
    }
joined_r0x0010ce50:
    puVar10 = puVar4;
    if (puVar4 != local_d0) {
      while (puVar4 = puVar4 + 1, puVar4 != local_d0) {
        plVar3 = (long *)(**(code **)(*(long *)*puVar4 + 0x60))();
        if (*(code **)(*plVar3 + 0x108) == TIntermTyped::getQualifier) {
          plVar3 = plVar3 + 6;
        }
        else {
          plVar3 = (long *)(**(code **)(*plVar3 + 0x108))();
        }
        if ((*(byte *)(plVar3 + 1) & 0x7f) == 3) {
          *puVar10 = *puVar4;
          puVar10 = puVar10 + 1;
        }
      }
      uVar9 = (long)puVar10 - (long)puVar6;
      if (local_b0 < uVar9) {
        std::vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>>::_M_default_append
                  ((vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *)&local_68,
                   ((long)uVar9 >> 3) - local_98);
      }
      else if ((uVar9 < local_b0) && (local_d0 != puVar10)) {
        local_58 = puVar10;
      }
    }
  }
  else {
    if (lVar5 == 3) {
      plVar3 = (long *)(**(code **)(*(long *)*puVar4 + 0x60))();
      if (*(code **)(*plVar3 + 0x108) == TIntermTyped::getQualifier) {
        plVar3 = plVar3 + 6;
      }
      else {
        plVar3 = (long *)(**(code **)(*plVar3 + 0x108))();
      }
      if ((*(byte *)(plVar3 + 1) & 0x7f) == 3) {
        puVar4 = puVar4 + 1;
        goto LAB_0010d132;
      }
      goto joined_r0x0010ce50;
    }
    if (lVar5 == 1) goto LAB_0010cf88;
  }
LAB_0010cba9:
  mergeLinkerObjects(this,param_1,&local_88,&local_68,*(undefined4 *)param_2);
LAB_0010cbc6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* glslang::TIntermediate::addXfbBufferOffset(glslang::TType const&) */

uint __thiscall glslang::TIntermediate::addXfbBufferOffset(TIntermediate *this,TType *param_1)

{
  vector<glslang::TRange,std::allocator<glslang::TRange>> *pvVar1;
  ushort uVar2;
  ulong *puVar3;
  ulong *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  TType *pTVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  uint local_28;
  int iStack_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)param_1 + 0x58) == TType::getQualifier) {
    pTVar8 = param_1 + 0x10;
  }
  else {
    pTVar8 = (TType *)(**(code **)(*(long *)param_1 + 0x58))(param_1);
  }
  pvVar1 = (vector<glslang::TRange,std::allocator<glslang::TRange>> *)
           (*(long *)(this + 0x348) + (ulong)((byte)pTVar8[0x24] & 0xf) * 0x28);
  iVar5 = computeTypeXfbSize(this,param_1,(bool *)(pvVar1 + 0x20),(bool *)(pvVar1 + 0x21),
                             (bool *)(pvVar1 + 0x22));
  uVar2 = *(ushort *)(pTVar8 + 0x26);
  puVar3 = *(ulong **)(pvVar1 + 8);
  puVar4 = *(ulong **)pvVar1;
  local_28 = uVar2 >> 2 & 0x1fff;
  uVar6 = iVar5 + local_28;
  uVar7 = *(uint *)(pvVar1 + 0x1c);
  if (*(uint *)(pvVar1 + 0x1c) < uVar6) {
    uVar7 = uVar6;
  }
  iStack_24 = uVar6 - 1;
  *(uint *)(pvVar1 + 0x1c) = uVar7;
  if (puVar4 != puVar3) {
    uVar9 = 0;
    do {
      uVar7 = (uint)puVar4[uVar9];
      if (((int)uVar7 <= iStack_24) && ((int)local_28 <= *(int *)((long)puVar4 + uVar9 * 8 + 4))) {
        if ((int)uVar7 <= (int)local_28) {
          uVar7 = local_28;
        }
        goto LAB_0010d268;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)((long)puVar3 - (long)puVar4 >> 3));
  }
  if (puVar3 == *(ulong **)(pvVar1 + 0x10)) {
    std::vector<glslang::TRange,std::allocator<glslang::TRange>>::
    _M_realloc_insert<glslang::TRange_const&>(pvVar1,puVar3,&local_28);
  }
  else {
    *puVar3 = CONCAT44(iStack_24,(uint)(uVar2 >> 2)) & 0xffffffff00001fff;
    *(ulong **)(pvVar1 + 8) = puVar3 + 1;
  }
  uVar7 = 0xffffffff;
LAB_0010d268:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::addUsedLocation(glslang::TQualifier const&, glslang::TType const&, bool&)
    */

ulong __thiscall
glslang::TIntermediate::addUsedLocation
          (TIntermediate *this,TQualifier *param_1,TType *param_2,bool *param_3)

{
  int *piVar1;
  ushort uVar2;
  ulong *puVar3;
  ulong *puVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  TType *pTVar13;
  TQualifier TVar14;
  code *pcVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  uint uVar20;
  long in_FS_OFFSET;
  ulong local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint local_e8;
  undefined4 local_e4;
  ushort local_e0;
  byte local_de;
  undefined1 uStack_dd;
  ulong local_d8;
  uint uStack_d0;
  int iStack_cc;
  uint local_c8;
  uint local_c4;
  ushort local_c0;
  byte local_be;
  undefined1 uStack_bd;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = false;
  TVar14 = param_1[8];
  uVar7 = (byte)TVar14 & 0x7f;
  bVar5 = (byte)uVar7;
  if (0x1b < bVar5) {
    if (0x1e < bVar5) goto LAB_0010d4ab;
LAB_0010d4f4:
    lVar18 = 1;
    if ((byte)(bVar5 - 9) < 2) goto LAB_0010d3e8;
    goto LAB_0010d34e;
  }
  lVar18 = 0;
  if ((0xe300008UL >> ((ulong)uVar7 & 0x3f) & 1) == 0) {
    if ((0x71c00010UL >> ((ulong)uVar7 & 0x3f) & 1) != 0) goto LAB_0010d4f4;
LAB_0010d4ab:
    if (bVar5 < 0xb) {
      if (bVar5 < 9) {
        if (bVar5 == 5) {
          lVar18 = 2;
        }
        else {
          lVar18 = 3;
          if (bVar5 != 6) {
            if (((byte)TVar14 & 0x7e) != 0xc) goto LAB_0010d496;
            goto LAB_0010d4dc;
          }
        }
        goto LAB_0010d34e;
      }
      lVar18 = 0;
      goto LAB_0010d3e8;
    }
    lVar18 = 4;
    if (bVar5 == 0x1f) {
LAB_0010d34e:
      if (((byte)TVar14 & 0x7e) == 0xc) goto LAB_0010d3e8;
LAB_0010d358:
      lVar12 = *(long *)param_2;
      if ((1 < uVar7 - 5) && (((byte)param_1[0xd] & 8) == 0)) {
        if (*(code **)(lVar12 + 0xe8) == TType::isArray) {
          uVar8 = *(undefined4 *)this;
          if (*(long *)(param_2 + 0x60) != 0) {
LAB_0010d39a:
            cVar6 = TQualifier::isArrayedIo(param_1,uVar8);
            if (cVar6 == '\0') goto LAB_0010d3b7;
            TType::TType((TType *)&local_d8,param_2,0,false);
            iVar9 = computeTypeLocationSize((TType *)&local_d8,*(undefined4 *)this);
            TVar14 = param_1[8];
            goto LAB_0010d567;
          }
        }
        else {
          cVar6 = (**(code **)(lVar12 + 0xe8))(param_2);
          if (cVar6 != '\0') {
            uVar8 = *(undefined4 *)this;
            goto LAB_0010d39a;
          }
          uVar8 = *(undefined4 *)this;
        }
LAB_0010d3b7:
        iVar9 = computeTypeLocationSize(param_2,uVar8);
        TVar14 = param_1[8];
        goto LAB_0010d567;
      }
      if (*(code **)(lVar12 + 0xf0) == TType::isSizedArray) {
        if (*(code **)(lVar12 + 0xe8) == TType::isArray) {
          lVar12 = *(long *)(param_2 + 0x60);
          if (lVar12 != 0) goto LAB_0010d54b;
          goto LAB_0010da78;
        }
        cVar6 = (**(code **)(lVar12 + 0xe8))(param_2);
        if (cVar6 == '\0') goto LAB_0010d55d;
        lVar12 = *(long *)(param_2 + 0x60);
LAB_0010d54b:
        if (**(int **)(*(long *)(lVar12 + 8) + 8) != 0) goto LAB_0010da05;
LAB_0010d55d:
        TVar14 = param_1[8];
        iVar9 = 1;
      }
      else {
        cVar6 = (**(code **)(lVar12 + 0xf0))(param_2);
        if (cVar6 == '\0') goto LAB_0010d55d;
LAB_0010da05:
        if (*(code **)(*(long *)param_2 + 0x88) == TType::getCumulativeArraySize) {
          TVar14 = param_1[8];
          lVar12 = *(long *)(*(long *)(param_2 + 0x60) + 8);
          if (lVar12 != 0) {
            piVar11 = *(int **)(lVar12 + 8);
            iVar16 = (int)(*(long *)(lVar12 + 0x10) - (long)piVar11 >> 4);
            if (0 < iVar16) {
              iVar9 = 1;
              piVar1 = piVar11 + (ulong)(iVar16 - 1) * 4 + 4;
              do {
                iVar9 = iVar9 * *piVar11;
                piVar11 = piVar11 + 4;
              } while (piVar11 != piVar1);
              goto LAB_0010d567;
            }
          }
LAB_0010da78:
          iVar9 = 1;
        }
        else {
          iVar9 = (**(code **)(*(long *)param_2 + 0x88))(param_2);
          TVar14 = param_1[8];
        }
      }
LAB_0010d567:
      if ((((byte)(((byte)TVar14 & 0x7f) - 9) < 2) || (((byte)TVar14 & 0x7e) == 0xc)) ||
         (((byte)TVar14 & 0x7f) == 0xe)) goto LAB_0010d3e8;
      lVar12 = *(long *)param_2;
      iVar16 = (int)lVar18;
      if (iVar9 == 2) {
        if (*(code **)(lVar12 + 0x38) == TType::getBasicType) {
          uVar7 = (uint)(byte)param_2[8];
        }
        else {
          uVar7 = (**(code **)(lVar12 + 0x38))(param_2);
          lVar12 = *(long *)param_2;
        }
        if (uVar7 == 2) {
          if (*(code **)(lVar12 + 0x60) == TType::getVectorSize) {
            uVar7 = (byte)param_2[9] & 0xf;
          }
          else {
            uVar7 = (**(code **)(lVar12 + 0x60))(param_2);
            lVar12 = *(long *)param_2;
          }
          if (uVar7 == 3) {
            uVar7 = (byte)param_1[8] & 0x7f;
            if ((byte)uVar7 < 0x1c) {
              if (((0xe300008UL >> ((ulong)uVar7 & 0x3f) & 1) != 0) ||
                 ((0x71c00010UL >> ((ulong)uVar7 & 0x3f) & 1) != 0)) {
LAB_0010d7c3:
                uVar2 = *(ushort *)(param_1 + 0x1c);
                TVar14 = param_1[0xb];
                if (*(code **)(lVar12 + 0x38) == TType::getBasicType) {
                  local_e8 = (uint)(byte)param_2[8];
                }
                else {
                  local_e8 = (**(code **)(lVar12 + 0x38))(param_2);
                }
                local_e0 = CONCAT11((byte)TVar14 >> 6,(byte)TVar14 >> 5) & 0x101;
                uStack_f0 = (undefined4)_LC447;
                uStack_ec = (undefined4)((ulong)_LC447 >> 0x20);
                local_e4 = 0;
                local_f8 = (ulong)CONCAT24(uVar2,(uint)uVar2) & 0xfff00000fff;
                local_de = (byte)TVar14 >> 7;
                uVar10 = checkLocationRange(this,iVar16,(TIoRange *)&local_f8,param_2,param_3);
                if ((int)uVar10 < 0) {
                  lVar12 = (long)iVar16;
                  lVar18 = lVar12 * 0x18;
                  puVar4 = *(ulong **)(this + lVar18 + 0x660);
                  if (puVar4 == *(ulong **)(this + lVar18 + 0x668)) {
                    std::vector<glslang::TIoRange,std::allocator<glslang::TIoRange>>::
                    _M_realloc_insert<glslang::TIoRange_const&>
                              ((vector<glslang::TIoRange,std::allocator<glslang::TIoRange>> *)
                               (this + lVar18 + 0x658),puVar4,(TIoRange *)&local_f8);
                  }
                  else {
                    *puVar4 = local_f8;
                    puVar4[1] = CONCAT44(uStack_ec,uStack_f0);
                    *(ulong *)((long)puVar4 + 0xc) = CONCAT44(local_e8,uStack_ec);
                    *(ulong *)((long)puVar4 + 0x14) =
                         CONCAT17(uStack_dd,CONCAT16(local_de,CONCAT24(local_e0,local_e4)));
                    *(long *)(this + lVar18 + 0x660) = (long)puVar4 + 0x1c;
                  }
                  iVar9 = (*(ushort *)(param_1 + 0x1c) & 0xfff) + 1;
                  TVar14 = param_1[0xb];
                  if (*(code **)(*(long *)param_2 + 0x38) == TType::getBasicType) {
                    local_c8 = (uint)(byte)param_2[8];
                  }
                  else {
                    local_c8 = (**(code **)(*(long *)param_2 + 0x38))(param_2);
                  }
                  uStack_d0 = (uint)_LC448;
                  iStack_cc = (int)((ulong)_LC448 >> 0x20);
                  local_c4 = 0;
                  local_d8 = CONCAT44(iVar9,iVar9);
                  local_c0 = CONCAT11((byte)TVar14 >> 6,(byte)TVar14 >> 5) & 0x101;
                  local_be = (byte)TVar14 >> 7;
                  uVar10 = checkLocationRange(this,iVar16,(TIoRange *)&local_d8,param_2,param_3);
                  if ((int)uVar10 < 0) {
                    puVar4 = *(ulong **)(this + lVar12 * 0x18 + 0x660);
                    if (puVar4 == *(ulong **)(this + lVar12 * 0x18 + 0x668)) {
                      std::vector<glslang::TIoRange,std::allocator<glslang::TIoRange>>::
                      _M_realloc_insert<glslang::TIoRange_const&>
                                ((vector<glslang::TIoRange,std::allocator<glslang::TIoRange>> *)
                                 (this + lVar18 + 0x658),puVar4,(TIoRange *)&local_d8);
                      uVar10 = uVar10 & 0xffffffff;
                    }
                    else {
                      *puVar4 = local_d8;
                      puVar4[1] = CONCAT44(iStack_cc,uStack_d0);
                      *(ulong *)((long)puVar4 + 0xc) = CONCAT44(local_c8,iStack_cc);
                      *(ulong *)((long)puVar4 + 0x14) =
                           CONCAT17(uStack_bd,CONCAT16(local_be,CONCAT24(local_c0,local_c4)));
                      *(long *)(this + lVar12 * 0x18 + 0x660) = (long)puVar4 + 0x1c;
                    }
                  }
                }
                goto LAB_0010d435;
              }
            }
            else if ((byte)uVar7 < 0x1f) goto LAB_0010d7c3;
          }
        }
      }
      uVar2 = *(ushort *)(param_1 + 0x1c);
      if (((byte)param_1[0x1d] & 0x70) == 0x40) {
        if (*(code **)(lVar12 + 0x60) == TType::getVectorSize) {
          pcVar15 = *(code **)(lVar12 + 0x38);
          uVar20 = (byte)param_2[9] & 0xf;
          if (((byte)param_2[9] & 0xf) != 0) goto LAB_0010d5e2;
          iVar19 = 3;
          uVar7 = 0;
        }
        else {
          iVar19 = (**(code **)(lVar12 + 0x60))(param_2);
          if (0 < iVar19) {
            lVar12 = *(long *)param_2;
            goto LAB_0010d5cc;
          }
          pcVar15 = *(code **)(*(long *)param_2 + 0x38);
          iVar19 = 3;
          uVar7 = 0;
        }
      }
      else {
LAB_0010d5cc:
        if (*(code **)(lVar12 + 0x60) == TType::getVectorSize) {
          uVar20 = (byte)param_2[9] & 0xf;
        }
        else {
          uVar20 = (**(code **)(lVar12 + 0x60))(param_2);
          lVar12 = *(long *)param_2;
        }
LAB_0010d5e2:
        if (*(code **)(lVar12 + 0x38) == TType::getBasicType) {
          uVar7 = (uint)(byte)param_2[8];
          pcVar15 = TType::getBasicType;
        }
        else {
          uVar7 = (**(code **)(lVar12 + 0x38))(param_2);
          pcVar15 = *(code **)(*(long *)param_2 + 0x38);
        }
        if (uVar7 == 2) {
          uVar20 = uVar20 * 2;
        }
        uVar7 = 0;
        if (((byte)param_1[0x1d] & 0x70) != 0x40) {
          uVar7 = (byte)param_1[0x1d] >> 4 & 7;
          uVar20 = uVar20 + uVar7;
        }
        iVar19 = uVar20 - 1;
      }
      uVar10 = CONCAT44(((uVar2 & 0xfff) - 1) + iVar9,(uint)uVar2) & 0xffffffff00000fff;
      if (pcVar15 == TType::getBasicType) {
        local_c8 = (uint)(byte)param_2[8];
      }
      else {
        local_c8 = (*pcVar15)(param_2);
      }
      if (local_c8 == 0xe) {
        if (*(code **)(*(long *)param_2 + 0x40) == TType::getSampler) {
          if (param_2[0x81] == (TType)0x8) {
LAB_0010d9ad:
            pTVar13 = param_2 + 0x80;
LAB_0010d9b4:
            local_c8 = (uint)(byte)*pTVar13;
          }
        }
        else {
          lVar12 = (**(code **)(*(long *)param_2 + 0x40))(param_2);
          if (*(char *)(lVar12 + 1) == '\b') {
            if (*(code **)(*(long *)param_2 + 0x40) == TType::getSampler) goto LAB_0010d9ad;
            pTVar13 = (TType *)(**(code **)(*(long *)param_2 + 0x40))(param_2);
            goto LAB_0010d9b4;
          }
        }
      }
      TVar14 = param_1[0xb];
      local_be = (byte)TVar14 >> 7;
      local_c0 = CONCAT11((byte)TVar14 >> 6,(byte)TVar14 >> 5) & 0x101;
      local_c4 = (uint)(byte)param_1[0x22];
      if (param_1[0x22] == (TQualifier)0xff) {
        local_c4 = 0;
      }
      local_d8 = uVar10;
      uStack_d0 = uVar7;
      iStack_cc = iVar19;
      if ((((*(int *)(this + 0x60) == 8) || (*(int *)this != 0)) ||
          (0x1b < (byte)((byte)param_1[8] & 0x7f))) ||
         (((0xe300008UL >> ((ulong)((byte)param_1[8] & 0x7f) & 0x3f) & 1) == 0 ||
          (0 < *(int *)(this + 0x70))))) {
        uVar10 = checkLocationRange(this,iVar16,(TIoRange *)&local_d8,param_2,param_3);
        if (-1 < (int)uVar10) goto LAB_0010d435;
      }
      else {
        uVar10 = 0xffffffff;
      }
      lVar18 = lVar18 * 0x18;
      puVar4 = *(ulong **)(this + lVar18 + 0x660);
      if (puVar4 == *(ulong **)(this + lVar18 + 0x668)) {
        std::vector<glslang::TIoRange,std::allocator<glslang::TIoRange>>::
        _M_realloc_insert<glslang::TIoRange_const&>
                  ((vector<glslang::TIoRange,std::allocator<glslang::TIoRange>> *)
                   (this + lVar18 + 0x658),puVar4,&local_d8);
        uVar10 = uVar10 & 0xffffffff;
      }
      else {
        *puVar4 = local_d8;
        puVar4[1] = CONCAT44(iStack_cc,uStack_d0);
        *(ulong *)((long)puVar4 + 0xc) = CONCAT44(local_c8,iStack_cc);
        *(ulong *)((long)puVar4 + 0x14) =
             CONCAT17(uStack_bd,CONCAT16(local_be,CONCAT24(local_c0,local_c4)));
        *(long *)(this + lVar18 + 0x660) = (long)puVar4 + 0x1c;
      }
      goto LAB_0010d435;
    }
    if (((byte)TVar14 & 0x7e) == 0xc) {
LAB_0010d4dc:
      lVar18 = 1;
      goto LAB_0010d34e;
    }
    if (bVar5 == 0xe) {
      lVar18 = 2;
      goto LAB_0010d358;
    }
  }
  else {
    if (1 < (byte)(bVar5 - 9)) goto LAB_0010d34e;
LAB_0010d3e8:
    lVar18 = (long)(int)lVar18;
    uVar2 = *(ushort *)(param_1 + 0x1c);
    uVar7 = uVar2 & 0xfff;
    uVar10 = (ulong)uVar7;
    puVar4 = *(ulong **)(this + lVar18 * 0x18 + 0x6d8);
    puVar3 = *(ulong **)(this + lVar18 * 0x18 + 0x6d0);
    local_d8 = (ulong)CONCAT24(uVar2,(uint)uVar2) & 0xfff00000fff;
    if (puVar3 != puVar4) {
      uVar17 = 0;
      do {
        if (((int)puVar3[uVar17] <= (int)uVar7) &&
           ((int)uVar7 <= *(int *)((long)puVar3 + uVar17 * 8 + 4))) goto LAB_0010d435;
        uVar17 = uVar17 + 1;
      } while (uVar17 < (ulong)((long)puVar4 - (long)puVar3 >> 3));
    }
    lVar18 = lVar18 * 0x18;
    if (puVar4 == *(ulong **)(this + lVar18 + 0x6e0)) {
      std::vector<glslang::TRange,std::allocator<glslang::TRange>>::
      _M_realloc_insert<glslang::TRange_const&>
                ((vector<glslang::TRange,std::allocator<glslang::TRange>> *)(this + lVar18 + 0x6d0),
                 puVar4,&local_d8);
    }
    else {
      *puVar4 = local_d8;
      *(ulong **)(this + lVar18 + 0x6d8) = puVar4 + 1;
    }
  }
LAB_0010d496:
  uVar10 = 0xffffffff;
LAB_0010d435:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



/* glslang::TIntermediate::addUsedOffsets(int, int, int) */

int __thiscall
glslang::TIntermediate::addUsedOffsets(TIntermediate *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  piVar2 = *(int **)(this + 0x648);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = param_2 + -1 + param_3;
  piVar4 = *(int **)(this + 0x640);
  local_28 = CONCAT44(param_1,param_1);
  uStack_20 = CONCAT44(iVar6,param_2);
  lVar5 = (long)piVar2 - (long)piVar4;
  if (piVar4 != piVar2) {
    uVar3 = 0;
    do {
      if ((((*piVar4 <= param_1) && (param_1 <= piVar4[1])) && (iVar1 = piVar4[2], iVar1 <= iVar6))
         && (param_2 <= piVar4[3])) {
        if (param_2 < iVar1) {
          param_2 = iVar1;
        }
        goto LAB_0010de3e;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 < (ulong)(lVar5 >> 4));
  }
  if (piVar2 == *(int **)(this + 0x650)) {
    std::vector<glslang::TOffsetRange,std::allocator<glslang::TOffsetRange>>::
    _M_realloc_insert<glslang::TOffsetRange_const&>
              ((vector<glslang::TOffsetRange,std::allocator<glslang::TOffsetRange>> *)(this + 0x640)
               ,piVar2,&local_28);
  }
  else {
    *(undefined8 *)piVar2 = local_28;
    *(undefined8 *)(piVar2 + 2) = uStack_20;
    *(int **)(this + 0x648) = piVar2 + 4;
  }
  param_2 = -1;
LAB_0010de3e:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::checkCallGraphBodies(TInfoSink&, bool) */

void __thiscall
glslang::TIntermediate::checkCallGraphBodies(TIntermediate *this,TInfoSink *param_1,bool param_2)

{
  TIntermediate *pTVar1;
  TIntermediate TVar2;
  char *pcVar3;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  size_t sVar8;
  _Rb_tree_node_base *p_Var9;
  int *piVar10;
  long *plVar11;
  basic_string *pbVar12;
  void *pvVar13;
  byte bVar14;
  size_t sVar15;
  long lVar16;
  TIntermediate *pTVar17;
  TIntermediate *pTVar18;
  ulong *puVar19;
  long lVar20;
  TIntermediate *pTVar21;
  TIntermediate TVar22;
  long in_FS_OFFSET;
  long *local_90;
  void *local_88;
  void *local_78;
  byte local_70;
  undefined8 local_48;
  long local_40;
  
  pTVar1 = this + 0x48;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (pTVar21 = *(TIntermediate **)(this + 0x48); pTVar21 != pTVar1;
      pTVar21 = *(TIntermediate **)pTVar21) {
    pTVar21[0x60] = (TIntermediate)0x0;
    *(undefined4 *)(pTVar21 + 100) = 0xffffffff;
  }
  plVar6 = (long *)(**(code **)(**(long **)(this + 0x80) + 0x30))();
  local_90 = plVar6 + 0x18;
  if (*(code **)(*plVar6 + 400) != TIntermAggregate::getSequence) {
    local_90 = (long *)(**(code **)(*plVar6 + 400))();
  }
  lVar16 = local_90[2];
  lVar7 = lVar16 - local_90[1] >> 3;
  if (lVar7 == 0) {
    local_78 = (void *)0x0;
    local_88 = (void *)0x0;
    pTVar21 = *(TIntermediate **)(this + 0x48);
    if (pTVar21 != pTVar1) goto LAB_0010df7d;
    if (!param_2) {
      lVar7 = local_90[1];
LAB_0010e10a:
      if (0 < (int)(lVar16 - lVar7 >> 3)) {
        lVar20 = 0;
        do {
          if ((1L << ((byte)lVar20 & 0x3f) & *(ulong *)((long)local_88 + (lVar20 >> 6) * 8)) == 0) {
            plVar6 = (long *)(**(code **)(**(long **)(lVar7 + lVar20 * 8) + 0x30))();
            if (*(code **)(*plVar6 + 0x1a8) == TIntermAggregate::getName_abi_cxx11_) {
              pbVar12 = (basic_string *)(plVar6 + 0x20);
            }
            else {
              pbVar12 = (basic_string *)(**(code **)(*plVar6 + 0x1a8))();
            }
            if (*(long *)(this + 0x550) != 0) {
              p_Var9 = (_Rb_tree_node_base *)
                       std::
                       _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
                       ::find((_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
                               *)(this + 0x528),pbVar12);
              if ((p_Var9 != (_Rb_tree_node_base *)(this + 0x530)) &&
                 (piVar10 = (int *)std::
                                   map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::AstRefType,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
                                   ::operator[]((map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::AstRefType,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
                                                 *)(this + 0x528),pbVar12), *piVar10 == 1)) {
                pvVar13 = (void *)std::_Rb_tree_rebalance_for_erase
                                            (p_Var9,(_Rb_tree_node_base *)(this + 0x530));
                operator_delete(pvVar13,0x50);
                *(long *)(this + 0x550) = *(long *)(this + 0x550) + -1;
              }
            }
            if (*(long *)(this + 0x580) != 0) {
              p_Var9 = (_Rb_tree_node_base *)
                       std::
                       _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
                       ::find((_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
                               *)(this + 0x558),pbVar12);
              if ((p_Var9 != (_Rb_tree_node_base *)(this + 0x560)) &&
                 (piVar10 = (int *)std::
                                   map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::AstRefType,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
                                   ::operator[]((map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::AstRefType,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
                                                 *)(this + 0x558),pbVar12), *piVar10 == 1)) {
                pvVar13 = (void *)std::_Rb_tree_rebalance_for_erase
                                            (p_Var9,(_Rb_tree_node_base *)(this + 0x560));
                operator_delete(pvVar13,0x50);
                *(long *)(this + 0x580) = *(long *)(this + 0x580) + -1;
              }
            }
            lVar7 = local_90[1];
            lVar16 = local_90[2];
            *(undefined8 *)(lVar7 + lVar20 * 8) = 0;
          }
          lVar20 = lVar20 + 1;
        } while ((int)lVar20 < (int)(lVar16 - lVar7 >> 3));
      }
      local_48 = 0;
      lVar7 = std::
              __remove_if<__gnu_cxx::__normal_iterator<TIntermNode**,std::vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>>>,__gnu_cxx::__ops::_Iter_equals_val<decltype(nullptr)const>>
                        (lVar7,lVar16,&local_48);
      if (lVar7 != lVar16) {
        local_90[2] = lVar7;
      }
      goto LAB_0010e27d;
    }
LAB_0010e51e:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    uVar4 = (lVar7 + 0x3fU >> 6) * 8;
    local_88 = operator_new(uVar4);
    local_78 = (void *)((long)local_88 + uVar4);
    memset(local_88,-1,uVar4);
    lVar16 = local_90[2];
    lVar7 = local_90[1];
    if ((int)(lVar16 - lVar7 >> 3) < 1) {
      pTVar21 = *(TIntermediate **)(this + 0x48);
      if (pTVar21 != pTVar1) goto LAB_0010df7d;
      if (!param_2) goto LAB_0010e10a;
    }
    else {
      lVar16 = 0;
      do {
        plVar6 = (long *)(**(code **)(**(long **)(lVar7 + lVar16 * 8) + 0x30))();
        if ((plVar6 != (long *)0x0) && ((int)plVar6[0x17] == 5)) {
          if (*(code **)(*plVar6 + 0x1a8) == TIntermAggregate::getName_abi_cxx11_) {
            plVar11 = plVar6 + 0x20;
          }
          else {
            plVar11 = (long *)(**(code **)(*plVar6 + 0x1a8))(plVar6);
          }
          uVar4 = plVar11[2];
          pcVar3 = *(char **)(this + 0x28);
          pvVar13 = (void *)plVar11[1];
          sVar8 = strlen(pcVar3);
          sVar15 = sVar8;
          if (uVar4 <= sVar8) {
            sVar15 = uVar4;
          }
          if ((((sVar15 != 0) && (iVar5 = memcmp(pvVar13,pcVar3,sVar15), iVar5 != 0)) ||
              (lVar7 = uVar4 - sVar8, 0x7fffffff < lVar7)) ||
             ((lVar7 < -0x80000000 || ((int)lVar7 != 0)))) {
            local_70 = (byte)lVar16;
            puVar19 = (ulong *)((long)local_88 + (lVar16 >> 6) * 8);
            *puVar19 = *puVar19 &
                       (-2L << (local_70 & 0x3f) | 0xfffffffffffffffeU >> 0x40 - (local_70 & 0x3f));
          }
          pTVar21 = *(TIntermediate **)(this + 0x48);
          if (pTVar21 != pTVar1) {
            do {
              while( true ) {
                plVar11 = plVar6 + 0x20;
                if (*(code **)(*plVar6 + 0x1a8) != TIntermAggregate::getName_abi_cxx11_) {
                  plVar11 = (long *)(**(code **)(*plVar6 + 0x1a8))(plVar6);
                }
                sVar15 = *(size_t *)(pTVar21 + 0x48);
                if (sVar15 == plVar11[2]) break;
LAB_0010e440:
                pTVar21 = *(TIntermediate **)pTVar21;
                if (pTVar21 == pTVar1) goto LAB_0010e330;
              }
              if ((sVar15 != 0) &&
                 (iVar5 = memcmp(*(void **)(pTVar21 + 0x40),(void *)plVar11[1],sVar15), iVar5 != 0))
              goto LAB_0010e440;
              *(int *)(pTVar21 + 100) = (int)lVar16;
              pTVar21 = *(TIntermediate **)pTVar21;
            } while (pTVar21 != pTVar1);
          }
        }
LAB_0010e330:
        lVar7 = local_90[1];
        lVar16 = lVar16 + 1;
      } while ((int)lVar16 < (int)(local_90[2] - lVar7 >> 3));
      pTVar21 = *(TIntermediate **)(this + 0x48);
      if (pTVar21 != pTVar1) {
LAB_0010df7d:
        pcVar3 = *(char **)(this + 0x28);
        pTVar18 = pTVar21;
        do {
          uVar4 = *(ulong *)(pTVar18 + 0x20);
          pvVar13 = *(void **)(pTVar18 + 0x18);
          sVar8 = strlen(pcVar3);
          sVar15 = sVar8;
          if (uVar4 <= sVar8) {
            sVar15 = uVar4;
          }
          if ((((sVar15 == 0) || (iVar5 = memcmp(pvVar13,pcVar3,sVar15), iVar5 == 0)) &&
              (lVar16 = uVar4 - sVar8, lVar16 < 0x80000000)) &&
             ((-0x80000001 < lVar16 && ((int)lVar16 == 0)))) {
            pTVar18[0x60] = (TIntermediate)0x1;
          }
          pTVar18 = *(TIntermediate **)pTVar18;
        } while (pTVar18 != pTVar1);
        do {
          if (pTVar21 == pTVar1) goto LAB_0010e0f2;
          TVar22 = (TIntermediate)0x0;
          pTVar18 = pTVar21;
          do {
            TVar2 = pTVar18[0x60];
            pTVar17 = pTVar21;
            if (TVar2 != (TIntermediate)0x0) {
              do {
                if ((pTVar17[0x60] == (TIntermediate)0x0) &&
                   (sVar15 = *(size_t *)(pTVar18 + 0x48), sVar15 == *(size_t *)(pTVar17 + 0x20))) {
                  if ((sVar15 == 0) ||
                     (iVar5 = memcmp(*(void **)(pTVar18 + 0x40),*(void **)(pTVar17 + 0x18),sVar15),
                     iVar5 == 0)) {
                    pTVar17[0x60] = (TIntermediate)0x1;
                    TVar22 = TVar2;
                  }
                }
                pTVar17 = *(TIntermediate **)pTVar17;
              } while (pTVar17 != pTVar1);
            }
            pTVar18 = *(TIntermediate **)pTVar18;
          } while (pTVar18 != pTVar1);
        } while (TVar22 != (TIntermediate)0x0);
        do {
          if (pTVar21[0x60] != (TIntermediate)0x0) {
            iVar5 = *(int *)(pTVar21 + 100);
            lVar16 = (long)iVar5;
            if (iVar5 == -1) {
              error(this,param_1,"No function definition (body) found: ",0xe);
              glslang::TInfoSinkBase::append((char *)param_1);
              glslang::TInfoSinkBase::append((basic_string *)param_1);
              glslang::TInfoSinkBase::append((char *)param_1);
            }
            else {
              lVar7 = lVar16 + 0x3f;
              if (-1 < lVar16) {
                lVar7 = lVar16;
              }
              puVar19 = (ulong *)((long)local_88 + (lVar7 >> 6) * 8);
              lVar16 = (ulong)(iVar5 + ((uint)(iVar5 >> 0x1f) >> 0x1a) & 0x3f) -
                       ((ulong)(lVar16 >> 0x3f) >> 0x3a);
              bVar14 = (byte)lVar16;
              if (lVar16 < 0) {
                puVar19 = puVar19 + -1;
                bVar14 = bVar14 + 0x40;
              }
              *puVar19 = *puVar19 | 1L << (bVar14 & 0x3f);
            }
          }
          pTVar21 = *(TIntermediate **)pTVar21;
        } while (pTVar21 != pTVar1);
      }
LAB_0010e0f2:
      if (!param_2) {
        lVar16 = local_90[2];
        lVar7 = local_90[1];
        goto LAB_0010e10a;
      }
LAB_0010e27d:
      if (local_88 == (void *)0x0) goto LAB_0010e51e;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      operator_delete((void *)((long)local_78 - ((long)local_78 - (long)local_88)),
                      (long)local_78 - (long)local_88);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermediate::finalCheck(TInfoSink&, bool) */

void __thiscall
glslang::TIntermediate::finalCheck(TIntermediate *this,TInfoSink *param_1,bool param_2)

{
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
  *this_00;
  TIntermediate *pTVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  TIntermediate *pTVar5;
  size_t sVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  undefined **local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined1 local_a0 [24];
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 local_70 [24];
  char local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x80) == 0) goto LAB_0010f0bc;
  if (*(int *)(this + 0x260) < 1) {
    error(this,param_1,"Missing entry point: Each stage requires one entry point",0xe);
  }
  checkCallGraphCycles(this,param_1);
  checkCallGraphBodies(this,param_1,param_2);
  inOutLocationCheck(this,param_1);
  if (1 < *(int *)(this + 0x268)) {
    error(this,param_1,"Only one push_constant block is allowed per stage",0xe);
  }
  if (*(int *)(this + 0x308) == -1) {
    *(undefined4 *)(this + 0x308) = 1;
  }
  local_b8 = glslang::GetThreadPoolAllocator();
  this_00 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
             *)(this + 0x730);
  pTVar1 = this + 0x738;
  local_b0 = local_a0;
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  _M_construct<char_const*>((basic_string *)&local_b8,"gl_ClipDistance");
  pTVar5 = (TIntermediate *)
           std::
           _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
           ::find(this_00,(basic_string *)&local_b8);
  if (pTVar1 != pTVar5) {
    local_88 = glslang::GetThreadPoolAllocator();
    local_80 = local_70;
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
    _M_construct<char_const*>((basic_string *)&local_88,"gl_ClipVertex");
    pTVar5 = (TIntermediate *)
             std::
             _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
             ::find(this_00,(basic_string *)&local_88);
    if (pTVar1 != pTVar5) {
      error(this,param_1,
            "Can only use one of gl_ClipDistance or gl_ClipVertex (gl_ClipDistance is preferred)",
            0xe);
    }
  }
  local_b8 = glslang::GetThreadPoolAllocator();
  local_b0 = local_a0;
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  _M_construct<char_const*>((basic_string *)&local_b8,"gl_CullDistance");
  pTVar5 = (TIntermediate *)
           std::
           _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
           ::find(this_00,(basic_string *)&local_b8);
  if (pTVar1 != pTVar5) {
    local_88 = glslang::GetThreadPoolAllocator();
    local_80 = local_70;
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
    _M_construct<char_const*>((basic_string *)&local_88,"gl_ClipVertex");
    pTVar5 = (TIntermediate *)
             std::
             _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
             ::find(this_00,(basic_string *)&local_88);
    if (pTVar1 != pTVar5) {
      error(this,param_1,
            "Can only use one of gl_CullDistance or gl_ClipVertex (gl_ClipDistance is preferred)",
            0xe);
    }
  }
  cVar3 = userOutputUsed(this);
  if (cVar3 != '\0') {
    local_b8 = glslang::GetThreadPoolAllocator();
    local_b0 = local_a0;
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
    _M_construct<char_const*>((basic_string *)&local_b8,"gl_FragColor","");
    pTVar5 = (TIntermediate *)
             std::
             _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
             ::find(this_00,(basic_string *)&local_b8);
    if (pTVar1 == pTVar5) {
      local_88 = glslang::GetThreadPoolAllocator();
      local_80 = local_70;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_construct<char_const*>((basic_string *)&local_88,"gl_FragData");
      pTVar5 = (TIntermediate *)
               std::
               _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
               ::find(this_00,(basic_string *)&local_88);
      if (pTVar1 == pTVar5) goto LAB_0010e810;
    }
    error(this,param_1,"Cannot use gl_FragColor or gl_FragData when using user-defined outputs",0xe)
    ;
  }
LAB_0010e810:
  local_b8 = glslang::GetThreadPoolAllocator();
  local_b0 = local_a0;
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  _M_construct<char_const*>((basic_string *)&local_b8,"gl_FragColor","");
  pTVar5 = (TIntermediate *)
           std::
           _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
           ::find(this_00,(basic_string *)&local_b8);
  if (pTVar1 != pTVar5) {
    local_88 = glslang::GetThreadPoolAllocator();
    local_80 = local_70;
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
    _M_construct<char_const*>((basic_string *)&local_88,"gl_FragData");
    pTVar5 = (TIntermediate *)
             std::
             _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
             ::find(this_00,(basic_string *)&local_88);
    if (pTVar1 != pTVar5) {
      error(this,param_1,"Cannot use both gl_FragColor and gl_FragData",0xe);
    }
  }
  lVar7 = *(long *)(this + 0x348);
  uVar10 = 0;
  if (lVar7 != *(long *)(this + 0x350)) {
    do {
      lVar9 = uVar10 * 0x28;
      lVar2 = lVar7 + lVar9;
      if (*(char *)(lVar2 + 0x20) == '\0') {
        if (*(char *)(lVar2 + 0x21) == '\0') {
          if (*(char *)(lVar2 + 0x22) != '\0') {
            *(uint *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1U & 0xfffffffe;
          }
        }
        else {
          *(uint *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 3U & 0xfffffffc;
        }
      }
      else {
        *(uint *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 7U & 0xfffffff8;
      }
      if ((*(uint *)(lVar2 + 0x18) != 0x3fff) && (*(uint *)(lVar2 + 0x18) < *(uint *)(lVar2 + 0x1c))
         ) {
        error(this,param_1,"xfb_stride is too small to hold all buffer entries:",0xe);
        glslang::TInfoSinkBase::append((char *)param_1);
        glslang::TInfoSinkBase::append((char *)param_1);
        __snprintf_chk(local_58,0x10,2,0x10,&_LC461,uVar10 & 0xffffffff);
        local_88 = glslang::GetThreadPoolAllocator();
        local_80 = local_70;
        sVar6 = strlen(local_58);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_construct<char_const*>(&local_88,local_58,local_58 + sVar6);
        glslang::TInfoSinkBase::append((basic_string *)param_1);
        glslang::TInfoSinkBase::append((char *)param_1);
        __snprintf_chk(local_58,0x10,2,0x10,&_LC461,
                       *(undefined4 *)(*(long *)(this + 0x348) + 0x18 + lVar9));
        local_88 = glslang::GetThreadPoolAllocator();
        local_80 = local_70;
        sVar6 = strlen(local_58);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_construct<char_const*>(&local_88,local_58,local_58 + sVar6);
        glslang::TInfoSinkBase::append((basic_string *)param_1);
        glslang::TInfoSinkBase::append((char *)param_1);
        __snprintf_chk(local_58,0x10,2,0x10,&_LC461,
                       *(undefined4 *)(*(long *)(this + 0x348) + 0x1c + lVar9));
        local_88 = glslang::GetThreadPoolAllocator();
        local_80 = local_70;
        sVar6 = strlen(local_58);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_construct<char_const*>(&local_88,local_58,local_58 + sVar6);
        glslang::TInfoSinkBase::append((basic_string *)param_1);
        glslang::TInfoSinkBase::append((char *)param_1);
        lVar7 = *(long *)(this + 0x348);
      }
      lVar2 = lVar7 + lVar9;
      uVar4 = *(uint *)(lVar2 + 0x18);
      if (uVar4 == 0x3fff) {
        uVar4 = *(uint *)(lVar2 + 0x1c);
        *(uint *)(lVar2 + 0x18) = uVar4;
      }
      if (*(char *)(lVar2 + 0x20) == '\0') {
        if (*(char *)(lVar2 + 0x21) == '\0') {
          if ((*(char *)(lVar2 + 0x22) != '\0') && ((uVar4 & 1) != 0)) {
            pcVar8 = 
            "xfb_stride must be multiple of 2 for buffer holding a half float or 16-bit integer:";
            goto LAB_0010e9a6;
          }
        }
        else if ((uVar4 & 3) != 0) {
          pcVar8 = "xfb_stride must be multiple of 4:";
LAB_0010e9a6:
          error(this,param_1,pcVar8,0xe);
          glslang::TInfoSinkBase::append((char *)param_1);
          glslang::TInfoSinkBase::append((char *)param_1);
          __snprintf_chk(local_58,0x10,2,0x10,&_LC461,uVar10 & 0xffffffff);
          local_88 = glslang::GetThreadPoolAllocator();
          local_80 = local_70;
          sVar6 = strlen(local_58);
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_construct<char_const*>(&local_88,local_58,local_58 + sVar6);
          glslang::TInfoSinkBase::append((basic_string *)param_1);
          glslang::TInfoSinkBase::append((char *)param_1);
          __snprintf_chk(local_58,0x10,2,0x10,&_LC461,
                         *(undefined4 *)(*(long *)(this + 0x348) + 0x18 + lVar9));
          local_88 = glslang::GetThreadPoolAllocator();
          local_80 = local_70;
          sVar6 = strlen(local_58);
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_construct<char_const*>(&local_88,local_58,local_58 + sVar6);
          glslang::TInfoSinkBase::append((basic_string *)param_1);
          glslang::TInfoSinkBase::append((char *)param_1);
          lVar7 = *(long *)(this + 0x348);
          uVar4 = *(uint *)(lVar7 + 0x18 + lVar9);
        }
      }
      else if ((uVar4 & 7) != 0) {
        pcVar8 = "xfb_stride must be multiple of 8 for buffer holding a double or 64-bit integer:";
        goto LAB_0010e9a6;
      }
      if ((uint)(*(int *)(this + 500) * 4) < uVar4) {
        error(this,param_1,"xfb_stride is too large:",0xe);
        glslang::TInfoSinkBase::append((char *)param_1);
        glslang::TInfoSinkBase::append((char *)param_1);
        __snprintf_chk(local_58,0x10,2,0x10,&_LC461,uVar10 & 0xffffffff);
        local_88 = glslang::GetThreadPoolAllocator();
        local_80 = local_70;
        sVar6 = strlen(local_58);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_construct<char_const*>(&local_88,local_58,local_58 + sVar6);
        glslang::TInfoSinkBase::append((basic_string *)param_1);
        glslang::TInfoSinkBase::append((char *)param_1);
        __snprintf_chk(local_58,0x10,2,0x10,&_LC461,
                       *(uint *)(*(long *)(this + 0x348) + 0x18 + lVar9) >> 2);
        local_88 = glslang::GetThreadPoolAllocator();
        local_80 = local_70;
        sVar6 = strlen(local_58);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_construct<char_const*>(&local_88,local_58,local_58 + sVar6);
        glslang::TInfoSinkBase::append((basic_string *)param_1);
        glslang::TInfoSinkBase::append((char *)param_1);
        __snprintf_chk(local_58,0x10,2,0x10,&_LC461,*(undefined4 *)(this + 500));
        local_88 = glslang::GetThreadPoolAllocator();
        local_80 = local_70;
        sVar6 = strlen(local_58);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_construct<char_const*>(&local_88,local_58,local_58 + sVar6);
        glslang::TInfoSinkBase::append((basic_string *)param_1);
        glslang::TInfoSinkBase::append((char *)param_1);
        lVar7 = *(long *)(this + 0x348);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulong)((*(long *)(this + 0x350) - lVar7 >> 3) * -0x3333333333333333));
  }
  switch(*(undefined4 *)this) {
  case 0:
    break;
  case 1:
    if (*(int *)(this + 0x30c) == -1) {
      error(this,param_1,"At least one shader must specify an output layout(vertices=...)",0xe);
    }
    break;
  case 2:
    if (*(int *)(this + 0x310) == 0) {
      error(this,param_1,"At least one shader must specify an input layout primitive",0xe);
    }
    if (*(int *)(this + 0x31c) == 0) {
      *(undefined4 *)(this + 0x31c) = 1;
    }
    if (*(int *)(this + 800) == 0) {
      *(undefined4 *)(this + 800) = 2;
    }
    break;
  case 3:
    if (*(int *)(this + 0x310) == 0) {
      error(this,param_1,"At least one shader must specify an input layout primitive",0xe);
    }
    if (*(int *)(this + 0x314) == 0) {
      error(this,param_1,"At least one shader must specify an output layout primitive",0xe);
    }
    if (*(int *)(this + 0x30c) == -1) {
      error(this,param_1,"At least one shader must specify a layout(max_vertices = value)",0xe);
    }
    break;
  case 4:
    if ((this[0x32a] != (TIntermediate)0x0) && (this[0x329] == (TIntermediate)0x0)) {
      error(this,param_1,"post_depth_coverage requires early_fragment_tests",0xe);
    }
    break;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    if (1 < *(int *)(this + 0x364)) {
      error(this,param_1,"Only one shaderRecordNV buffer block is allowed per stage",0xe);
    }
    break;
  case 0xd:
    local_b8 = glslang::GetThreadPoolAllocator();
    local_b0 = local_a0;
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
    _M_construct<char_const*>((basic_string *)&local_b8,"gl_Position");
    pTVar5 = (TIntermediate *)
             std::
             _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
             ::find(this_00,(basic_string *)&local_b8);
    if (pTVar1 != pTVar5) {
      local_88 = glslang::GetThreadPoolAllocator();
      local_80 = local_70;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_construct<char_const*>((basic_string *)&local_88,"gl_PositionPerViewNV");
      pTVar5 = (TIntermediate *)
               std::
               _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
               ::find(this_00,(basic_string *)&local_88);
      if (pTVar1 != pTVar5) {
        error(this,param_1,"Can only use one of gl_Position or gl_PositionPerViewNV",0xe);
      }
    }
    local_b8 = glslang::GetThreadPoolAllocator();
    local_b0 = local_a0;
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
    _M_construct<char_const*>((basic_string *)&local_b8,"gl_ClipDistance");
    pTVar5 = (TIntermediate *)
             std::
             _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
             ::find(this_00,(basic_string *)&local_b8);
    if (pTVar1 != pTVar5) {
      local_88 = glslang::GetThreadPoolAllocator();
      local_80 = local_70;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_construct<char_const*>((basic_string *)&local_88,"gl_ClipDistancePerViewNV");
      pTVar5 = (TIntermediate *)
               std::
               _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
               ::find(this_00,(basic_string *)&local_88);
      if (pTVar1 != pTVar5) {
        error(this,param_1,"Can only use one of gl_ClipDistance or gl_ClipDistancePerViewNV",0xe);
      }
    }
    local_b8 = glslang::GetThreadPoolAllocator();
    local_b0 = local_a0;
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
    _M_construct<char_const*>((basic_string *)&local_b8,"gl_CullDistance");
    pTVar5 = (TIntermediate *)
             std::
             _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
             ::find(this_00,(basic_string *)&local_b8);
    if (pTVar1 != pTVar5) {
      local_88 = glslang::GetThreadPoolAllocator();
      local_80 = local_70;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_construct<char_const*>((basic_string *)&local_88,"gl_CullDistancePerViewNV");
      pTVar5 = (TIntermediate *)
               std::
               _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
               ::find(this_00,(basic_string *)&local_88);
      if (pTVar1 != pTVar5) {
        error(this,param_1,"Can only use one of gl_CullDistance or gl_CullDistancePerViewNV",0xe);
      }
    }
    local_b8 = glslang::GetThreadPoolAllocator();
    local_b0 = local_a0;
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
    _M_construct<char_const*>((basic_string *)&local_b8,"gl_Layer");
    pTVar5 = (TIntermediate *)
             std::
             _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
             ::find(this_00,(basic_string *)&local_b8);
    if (pTVar1 != pTVar5) {
      local_88 = glslang::GetThreadPoolAllocator();
      local_80 = local_70;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_construct<char_const*>((basic_string *)&local_88,"gl_LayerPerViewNV");
      pTVar5 = (TIntermediate *)
               std::
               _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
               ::find(this_00,(basic_string *)&local_88);
      if (pTVar1 != pTVar5) {
        error(this,param_1,"Can only use one of gl_Layer or gl_LayerPerViewNV",0xe);
      }
    }
    local_b8 = glslang::GetThreadPoolAllocator();
    local_b0 = local_a0;
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
    _M_construct<char_const*>((basic_string *)&local_b8,"gl_ViewportMask");
    pTVar5 = (TIntermediate *)
             std::
             _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
             ::find(this_00,(basic_string *)&local_b8);
    if (pTVar1 != pTVar5) {
      local_88 = glslang::GetThreadPoolAllocator();
      local_80 = local_70;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_construct<char_const*>((basic_string *)&local_88,"gl_ViewportMaskPerViewNV");
      pTVar5 = (TIntermediate *)
               std::
               _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
               ::find(this_00,(basic_string *)&local_88);
      if (pTVar1 != pTVar5) {
        error(this,param_1,"Can only use one of gl_ViewportMask or gl_ViewportMaskPerViewNV",0xe);
      }
    }
    if (*(int *)(this + 0x314) == 0) {
      error(this,param_1,"At least one shader must specify an output layout primitive",0xe);
    }
    if (*(int *)(this + 0x30c) == -1) {
      error(this,param_1,"At least one shader must specify a layout(max_vertices = value)",0xe);
    }
    if (*(int *)(this + 0x36c) == -1) {
      error(this,param_1,"At least one shader must specify a layout(max_primitives = value)",0xe);
    }
  case 0xc:
    if (1 < *(int *)(this + 0x370)) {
      error(this,param_1,"Only one taskNV interface block is allowed per shader",0xe);
    }
    if (1 < *(int *)(this + 0x378)) {
      error(this,param_1,"Only single variable of type taskPayloadSharedEXT is allowed per shader",
            0xe);
    }
  case 5:
    sharedBlockCheck(this,param_1);
    break;
  default:
    error(this,param_1,"Unknown Stage.",0xe);
  }
  local_f0 = 1;
  local_f8 = &PTR__TIntermTraverser_00120d00;
  local_ec = 0;
  local_e0 = glslang::GetThreadPoolAllocator();
  local_d8 = 0;
  local_f8 = &PTR__TFinalLinkTraverser_00120f08;
  local_d0 = 0;
  local_c8 = 0;
  (**(code **)(**(long **)(this + 0x80) + 0x10))(*(long **)(this + 0x80),&local_f8);
LAB_0010f0bc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* glslang::TIntermediate::mergeModes(TInfoSink&, glslang::TIntermediate&) */

void __thiscall
glslang::TIntermediate::mergeModes(TIntermediate *this,TInfoSink *param_1,TIntermediate *param_2)

{
  _Rb_tree_node_base *p_Var1;
  long lVar2;
  TIntermediate TVar3;
  char cVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  _Rb_tree_node_base *p_Var11;
  TIntermediate *pTVar12;
  ulong uVar13;
  char *pcVar14;
  _Rb_tree_node *p_Var15;
  _Rb_tree_node_base *p_Var16;
  long *plVar17;
  _Rb_tree_node_base *p_Var18;
  _Rb_tree_node *p_Var19;
  _Rb_tree_node *p_Var20;
  undefined8 *puVar21;
  long *plVar22;
  _Rb_tree_node **pp_Var23;
  ulong uVar24;
  undefined8 *puVar25;
  long lVar26;
  long *plVar27;
  long *plVar28;
  uint uVar29;
  long *plVar30;
  long lVar31;
  long lVar32;
  _Rb_tree_node_base *p_Var33;
  _Rb_tree_node_base *p_Var34;
  undefined8 *puVar35;
  uint uVar36;
  ulong uVar37;
  long in_FS_OFFSET;
  bool bVar38;
  undefined1 auVar39 [16];
  long local_108;
  _Rb_tree_node *local_c8;
  long lStack_c0;
  TIntermediate *local_b8;
  long *local_a8;
  ulong local_a0;
  long local_98 [2];
  long *local_88;
  ulong local_80;
  long local_78 [2];
  _Rb_tree_node **local_68;
  undefined8 local_60;
  _Rb_tree_node *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)this != *(int *)param_2) {
    error(this,param_1,"stages must match when linking into a single stage",0xe);
  }
  iVar7 = *(int *)(param_2 + 0x60);
  if (*(long *)(this + 0x80) == 0) {
    *(int *)(this + 0x60) = iVar7;
    *(undefined4 *)(this + 100) = *(undefined4 *)(param_2 + 100);
    pTVar12 = this + 0x88;
    if (pTVar12 != param_2 + 0x88) {
      local_c8 = *(_Rb_tree_node **)(this + 0x98);
      lStack_c0 = *(long *)(this + 0xa8);
      if (local_c8 == (_Rb_tree_node *)0x0) {
        lStack_c0 = 0;
      }
      else {
        *(undefined8 *)(local_c8 + 8) = 0;
        lVar26 = *(long *)(lStack_c0 + 0x10);
        if (lVar26 != 0) {
          lStack_c0 = lVar26;
        }
      }
      *(undefined8 *)(this + 0x98) = 0;
      p_Var15 = *(_Rb_tree_node **)(param_2 + 0x98);
      p_Var33 = (_Rb_tree_node_base *)(this + 0x90);
      *(_Rb_tree_node_base **)(this + 0xa0) = p_Var33;
      *(_Rb_tree_node_base **)(this + 0xa8) = p_Var33;
      *(undefined8 *)(this + 0xb0) = 0;
      local_b8 = pTVar12;
      if (p_Var15 != (_Rb_tree_node *)0x0) {
        p_Var19 = std::
                  _Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
                  ::
                  _M_copy<false,std::_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>::_Reuse_or_alloc_node>
                            (p_Var15,p_Var33,(_Reuse_or_alloc_node *)&local_c8);
        p_Var15 = p_Var19;
        do {
          p_Var20 = p_Var15;
          p_Var15 = *(_Rb_tree_node **)(p_Var20 + 0x10);
        } while (p_Var15 != (_Rb_tree_node *)0x0);
        *(_Rb_tree_node **)(this + 0xa0) = p_Var20;
        p_Var15 = p_Var19;
        do {
          p_Var20 = p_Var15;
          p_Var15 = *(_Rb_tree_node **)(p_Var20 + 0x18);
        } while (p_Var15 != (_Rb_tree_node *)0x0);
        uVar6 = *(undefined8 *)(param_2 + 0xb0);
        *(_Rb_tree_node **)(this + 0xa8) = p_Var20;
        *(_Rb_tree_node **)(this + 0x98) = p_Var19;
        *(undefined8 *)(this + 0xb0) = uVar6;
      }
      std::
      _Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
      ::_M_erase(local_c8);
    }
  }
  else {
    if ((iVar7 == 8) == (*(int *)(this + 0x60) == 8)) {
      if (iVar7 == 4) {
        *(undefined4 *)(this + 0x60) = 4;
      }
    }
    else {
      error(this,param_1,"Cannot cross link ES and desktop profiles",0xe);
    }
    pTVar12 = *(TIntermediate **)(param_2 + 0xa0);
    iVar7 = *(int *)(this + 100);
    if (*(int *)(this + 100) < *(int *)(param_2 + 100)) {
      iVar7 = *(int *)(param_2 + 100);
    }
    *(int *)(this + 100) = iVar7;
    if (pTVar12 != param_2 + 0x90) {
      p_Var33 = (_Rb_tree_node_base *)(this + 0x90);
      do {
        auVar39 = std::
                  _Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
                  ::_M_get_insert_hint_unique_pos
                            ((_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
                              *)(this + 0x88),p_Var33,(_Rb_tree_node_base *)pTVar12 + 0x20);
        p_Var18 = auVar39._8_8_;
        if (p_Var18 != (_Rb_tree_node_base *)0x0) {
          if ((auVar39._0_8_ == 0) && (p_Var33 != p_Var18)) {
            uVar37 = *(ulong *)((_Rb_tree_node_base *)pTVar12 + 0x28);
            uVar24 = *(ulong *)(p_Var18 + 0x28);
            uVar13 = uVar24;
            if (uVar37 <= uVar24) {
              uVar13 = uVar37;
            }
            if (uVar13 == 0) {
LAB_0010f76d:
              bVar38 = false;
              uVar13 = uVar37 - uVar24;
              if (0x7fffffff < (long)uVar13) goto LAB_0010f6ce;
              if ((long)uVar13 < -0x80000000) goto LAB_0010f6c8;
            }
            else {
              uVar8 = memcmp(*(void **)((_Rb_tree_node_base *)pTVar12 + 0x20),
                             *(void **)(p_Var18 + 0x20),uVar13);
              uVar13 = (ulong)uVar8;
              if (uVar8 == 0) goto LAB_0010f76d;
            }
            bVar38 = (bool)((byte)(uVar13 >> 0x1f) & 1);
          }
          else {
LAB_0010f6c8:
            bVar38 = true;
          }
LAB_0010f6ce:
          p_Var11 = (_Rb_tree_node_base *)operator_new(0x40);
          *(_Rb_tree_node_base **)(p_Var11 + 0x20) = p_Var11 + 0x30;
          std::__cxx11::string::_M_construct<char*>
                    (p_Var11 + 0x20,*(long *)((_Rb_tree_node_base *)pTVar12 + 0x20),
                     *(long *)((_Rb_tree_node_base *)pTVar12 + 0x28) +
                     *(long *)((_Rb_tree_node_base *)pTVar12 + 0x20));
          std::_Rb_tree_insert_and_rebalance(bVar38,p_Var11,p_Var18,p_Var33);
          *(long *)(this + 0xb0) = *(long *)(this + 0xb0) + 1;
        }
        pTVar12 = (TIntermediate *)std::_Rb_tree_increment((_Rb_tree_node_base *)pTVar12);
      } while (param_2 + 0x90 != pTVar12);
    }
  }
  uVar8 = *(uint *)(this + 0x68);
  if (*(uint *)(this + 0x68) < *(uint *)(param_2 + 0x68)) {
    uVar8 = *(uint *)(param_2 + 0x68);
  }
  *(uint *)(this + 0x68) = uVar8;
  iVar7 = *(int *)(this + 0x6c);
  if (*(int *)(this + 0x6c) < *(int *)(param_2 + 0x6c)) {
    iVar7 = *(int *)(param_2 + 0x6c);
  }
  *(int *)(this + 0x6c) = iVar7;
  iVar7 = *(int *)(this + 0x70);
  if (*(int *)(this + 0x70) < *(int *)(param_2 + 0x70)) {
    iVar7 = *(int *)(param_2 + 0x70);
  }
  *(int *)(this + 0x70) = iVar7;
  iVar7 = *(int *)(this + 0x74);
  if (*(int *)(this + 0x74) < *(int *)(param_2 + 0x74)) {
    iVar7 = *(int *)(param_2 + 0x74);
  }
  TVar3 = param_2[0x78];
  *(int *)(this + 0x74) = iVar7;
  if (TVar3 != (TIntermediate)0x0) {
    this[0x78] = (TIntermediate)0x1;
  }
  iVar7 = *(int *)(this + 0x268);
  *(int *)(this + 0x264) = *(int *)(this + 0x264) + *(int *)(param_2 + 0x264);
  if ((1 < iVar7) || (iVar9 = *(int *)(param_2 + 0x268), 1 < iVar9)) {
    error(this,param_1,"Only one push_constant block is allowed per stage",0xe);
    iVar7 = *(int *)(this + 0x268);
    iVar9 = *(int *)(param_2 + 0x268);
  }
  iVar9 = iVar9 + iVar7;
  if (0 < iVar9) {
    iVar9 = 1;
  }
  *(int *)(this + 0x268) = iVar9;
  iVar7 = *(int *)(param_2 + 0x308);
  if (iVar7 != -1) {
    if (*(int *)(this + 0x308) == -1) {
      *(int *)(this + 0x308) = iVar7;
    }
    else if (iVar7 != *(int *)(this + 0x308)) {
      error(this,param_1,"number of invocations must match between compilation units",0xe);
    }
  }
  iVar7 = *(int *)(param_2 + 0x30c);
  if (*(int *)(this + 0x30c) == -1) {
    *(int *)(this + 0x30c) = iVar7;
  }
  else if ((*(int *)(this + 0x30c) != iVar7) && (iVar7 != -1)) {
    iVar7 = *(int *)this;
    if ((iVar7 == 3) || (iVar7 == 0xd)) {
      error(this,param_1,"Contradictory layout max_vertices values",0xe);
    }
    else if (iVar7 == 1) {
      error(this,param_1,"Contradictory layout vertices values",0xe);
    }
  }
  if (*(int *)(this + 0x36c) == -1) {
    *(int *)(this + 0x36c) = *(int *)(param_2 + 0x36c);
  }
  else if ((*(int *)(this + 0x36c) != *(int *)(param_2 + 0x36c)) && (*(int *)this == 0xd)) {
    error(this,param_1,"Contradictory layout max_primitives values",0xe);
  }
  iVar7 = *(int *)(param_2 + 0x310);
  if (*(int *)(this + 0x310) == 0) {
    *(int *)(this + 0x310) = iVar7;
  }
  else if ((iVar7 != 0) && (*(int *)(this + 0x310) != iVar7)) {
    error(this,param_1,"Contradictory input layout primitives",0xe);
  }
  iVar7 = *(int *)(param_2 + 0x314);
  if (*(int *)(this + 0x314) == 0) {
    *(int *)(this + 0x314) = iVar7;
  }
  else if ((iVar7 != 0) && (*(int *)(this + 0x314) != iVar7)) {
    error(this,param_1,"Contradictory output layout primitives",0xe);
  }
  if (*(short *)(this + 0x318) != *(short *)(param_2 + 0x318)) {
    error(this,param_1,"gl_FragCoord redeclarations must match across shaders",0xe);
  }
  if (*(int *)(this + 0x31c) == 0) {
    *(int *)(this + 0x31c) = *(int *)(param_2 + 0x31c);
  }
  else if (*(int *)(this + 0x31c) != *(int *)(param_2 + 0x31c)) {
    error(this,param_1,"Contradictory input vertex spacing",0xe);
  }
  if (*(int *)(this + 800) == 0) {
    *(int *)(this + 800) = *(int *)(param_2 + 800);
  }
  else if (*(int *)(this + 800) != *(int *)(param_2 + 800)) {
    error(this,param_1,"Contradictory triangle ordering",0xe);
  }
  if (param_2[0x328] != (TIntermediate)0x0) {
    this[0x328] = (TIntermediate)0x1;
  }
  lVar26 = 0x284;
  do {
    if (param_2[lVar26] != (TIntermediate)0x0) {
      if (this[lVar26] == (TIntermediate)0x0) {
        *(int *)(this + lVar26 * 4 + -0x798) = *(int *)(param_2 + lVar26 * 4 + -0x798);
        this[lVar26] = (TIntermediate)0x1;
      }
      else if (*(int *)(this + lVar26 * 4 + -0x798) != *(int *)(param_2 + lVar26 * 4 + -0x798)) {
        error(this,param_1,"Contradictory local size",0xe);
      }
    }
    if (*(int *)(this + lVar26 * 4 + -0x788) == -1) {
      *(int *)(this + lVar26 * 4 + -0x788) = *(int *)(param_2 + lVar26 * 4 + -0x788);
    }
    else if (*(int *)(this + lVar26 * 4 + -0x788) != *(int *)(param_2 + lVar26 * 4 + -0x788)) {
      error(this,param_1,"Contradictory local size specialization ids",0xe);
    }
    lVar26 = lVar26 + 1;
  } while (lVar26 != 0x287);
  if (param_2[0x329] != (TIntermediate)0x0) {
    this[0x329] = (TIntermediate)0x1;
  }
  if (param_2[0x32a] != (TIntermediate)0x0) {
    this[0x32a] = (TIntermediate)0x1;
  }
  if (param_2[0x32c] != (TIntermediate)0x0) {
    this[0x32c] = (TIntermediate)0x1;
  }
  if (param_2[0x32d] != (TIntermediate)0x0) {
    this[0x32d] = (TIntermediate)0x1;
  }
  if (param_2[0x32e] != (TIntermediate)0x0) {
    this[0x32e] = (TIntermediate)0x1;
  }
  if (*(int *)(this + 0x330) == 0) {
    *(int *)(this + 0x330) = *(int *)(param_2 + 0x330);
  }
  else if (*(int *)(this + 0x330) != *(int *)(param_2 + 0x330)) {
    error(this,param_1,"Contradictory depth layouts",0xe);
  }
  if (param_2[0x274] != (TIntermediate)0x0) {
    this[0x274] = (TIntermediate)0x1;
  }
  if (param_2[0x338] != (TIntermediate)0x0) {
    this[0x338] = (TIntermediate)0x1;
  }
  *(uint *)(this + 0x33c) = *(uint *)(this + 0x33c) | *(uint *)(param_2 + 0x33c);
  if (param_2[0x340] != (TIntermediate)0x0) {
    this[0x340] = (TIntermediate)0x1;
  }
  lVar26 = *(long *)(this + 0x348);
  if (*(long *)(this + 0x350) != lVar26) {
    lVar31 = *(long *)(param_2 + 0x348);
    uVar37 = 0;
    do {
      lVar2 = uVar37 * 0x28;
      lVar32 = lVar31 + lVar2;
      iVar7 = *(int *)(lVar26 + lVar2 + 0x18);
      if (iVar7 == 0x3fff) {
        *(int *)(lVar26 + lVar2 + 0x18) = *(int *)(lVar32 + 0x18);
      }
      else if (iVar7 != *(int *)(lVar32 + 0x18)) {
        error(this,param_1,"Contradictory xfb_stride",0xe);
        lVar31 = *(long *)(param_2 + 0x348);
        lVar26 = *(long *)(this + 0x348);
        lVar32 = lVar31 + lVar2;
      }
      lVar2 = lVar26 + lVar2;
      uVar8 = *(uint *)(lVar2 + 0x1c);
      if (*(uint *)(lVar2 + 0x1c) < *(uint *)(lVar32 + 0x1c)) {
        uVar8 = *(uint *)(lVar32 + 0x1c);
      }
      cVar4 = *(char *)(lVar32 + 0x20);
      *(uint *)(lVar2 + 0x1c) = uVar8;
      if (cVar4 != '\0') {
        *(undefined1 *)(lVar2 + 0x20) = 1;
      }
      if (*(char *)(lVar32 + 0x21) != '\0') {
        *(undefined1 *)(lVar2 + 0x21) = 1;
      }
      if (*(char *)(lVar32 + 0x22) != '\0') {
        *(undefined1 *)(lVar2 + 0x22) = 1;
      }
      uVar37 = uVar37 + 1;
    } while (uVar37 < (ulong)((*(long *)(this + 0x350) - lVar26 >> 3) * -0x3333333333333333));
  }
  if (param_2[0x360] != (TIntermediate)0x0) {
    this[0x360] = (TIntermediate)0x1;
  }
  if (param_2[0x361] != (TIntermediate)0x0) {
    this[0x361] = (TIntermediate)0x1;
  }
  if (param_2[0x362] != (TIntermediate)0x0) {
    this[0x362] = (TIntermediate)0x1;
  }
  uVar37 = 0;
  do {
    while (uVar8 = *(uint *)(param_2 + uVar37 * 4 + 0x37c), uVar8 == 0) {
LAB_0010fc00:
      uVar37 = uVar37 + 1;
      if (uVar37 == 6) goto LAB_0010fe30;
    }
    *(uint *)(this + uVar37 * 4 + 0x37c) = uVar8;
    pcVar14 = (char *)glslang::TIntermediate::getResourceName(uVar37 & 0xffffffff);
    if (pcVar14 == (char *)0x0) goto LAB_0010fc00;
    local_68 = local_58;
    p_Var15 = (_Rb_tree_node *)strlen(pcVar14);
    local_c8 = p_Var15;
    if (p_Var15 < (_Rb_tree_node *)0x10) {
      pp_Var23 = local_58;
      if (p_Var15 == (_Rb_tree_node *)0x1) {
        local_58[0] = (_Rb_tree_node *)CONCAT71(local_58[0]._1_7_,*pcVar14);
      }
      else if (p_Var15 != (_Rb_tree_node *)0x0) goto LAB_00110b0d;
    }
    else {
      local_68 = (_Rb_tree_node **)
                 std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_c8);
      local_58[0] = local_c8;
      pp_Var23 = local_68;
LAB_00110b0d:
      memcpy(pp_Var23,pcVar14,(size_t)p_Var15);
      pp_Var23 = local_68;
    }
    *(_Rb_tree_node *)((long)pp_Var23 + (long)local_c8) = (_Rb_tree_node)0x0;
    plVar17 = *(long **)(this + 0x7d8);
    local_60 = local_c8;
    if (plVar17 == *(long **)(this + 0x7e0)) {
      std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
      _M_realloc_insert<std::__cxx11::string>
                ((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)(this + 2000),
                 plVar17,&local_68);
      if (local_68 != local_58) {
        operator_delete(local_68,(ulong)(local_58[0] + 1));
      }
      plVar17 = *(long **)(this + 0x7d8);
      plVar30 = plVar17 + -4;
    }
    else {
      *plVar17 = (long)(plVar17 + 2);
      if (local_68 == local_58) {
        p_Var15 = local_c8 + 1;
        uVar29 = (uint)p_Var15;
        if (7 < uVar29) {
          plVar17[2] = (long)local_58[0];
          *(undefined8 *)((long)plVar17 + ((ulong)p_Var15 & 0xffffffff) + 8) =
               *(undefined8 *)((long)local_58 + (((ulong)p_Var15 & 0xffffffff) - 8));
          lVar26 = (long)(plVar17 + 2) - ((ulong)(plVar17 + 3) & 0xfffffffffffffff8);
          uVar29 = uVar29 + (int)lVar26 & 0xfffffff8;
          if (7 < uVar29) {
            uVar36 = 0;
            do {
              uVar24 = (ulong)uVar36;
              uVar36 = uVar36 + 8;
              *(undefined8 *)(((ulong)(plVar17 + 3) & 0xfffffffffffffff8) + uVar24) =
                   *(undefined8 *)((long)local_58 + (uVar24 - lVar26));
            } while (uVar36 < uVar29);
          }
          goto LAB_0010fcce;
        }
        if (((ulong)p_Var15 & 4) == 0) {
          plVar30 = plVar17;
          if (uVar29 != 0) {
            *(undefined1 *)(plVar17 + 2) = local_58[0]._0_1_;
            if (((ulong)p_Var15 & 2) == 0) goto LAB_0010fcce;
            *(undefined2 *)((long)plVar17 + ((ulong)p_Var15 & 0xffffffff) + 0xe) =
                 *(undefined2 *)((long)local_58 + (((ulong)p_Var15 & 0xffffffff) - 2));
            plVar30 = *(long **)(this + 0x7d8);
          }
        }
        else {
          *(undefined4 *)(plVar17 + 2) = local_58[0]._0_4_;
          *(undefined4 *)((long)plVar17 + ((ulong)p_Var15 & 0xffffffff) + 0xc) =
               *(undefined4 *)((long)local_58 + (((ulong)p_Var15 & 0xffffffff) - 4));
          plVar30 = *(long **)(this + 0x7d8);
        }
      }
      else {
        *plVar17 = (long)local_68;
        plVar17[2] = (long)local_58[0];
LAB_0010fcce:
        plVar30 = *(long **)(this + 0x7d8);
      }
      plVar17[1] = (long)local_c8;
      plVar17 = plVar30 + 4;
      *(long **)(this + 0x7d8) = plVar17;
    }
    if (plVar17[-3] == 0x3fffffffffffffff) {
LAB_00110e2a:
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::append");
    }
    std::__cxx11::string::_M_append((char *)plVar30,0x11adc5);
    uVar29 = uVar8;
    if ((int)uVar8 < 1) {
      uVar29 = -uVar8;
    }
    if (uVar29 < 10) {
      uVar36 = 1;
    }
    else if (uVar29 < 100) {
      uVar36 = 2;
    }
    else if (uVar29 < 1000) {
      uVar36 = 3;
    }
    else if (uVar29 < 10000) {
      uVar36 = 4;
    }
    else {
      uVar36 = 5;
      if (99999 < uVar29) {
        if (uVar29 < 1000000) {
          iVar7 = 5;
LAB_0010fd97:
          uVar36 = iVar7 + 1;
        }
        else {
          uVar36 = 7;
          if (9999999 < uVar29) {
            if (uVar29 < 100000000) {
              uVar36 = 8;
            }
            else {
              if (999999999 < uVar29) {
                iVar7 = 9;
                goto LAB_0010fd97;
              }
              uVar36 = 9;
            }
          }
        }
      }
    }
    local_a8 = local_98;
    std::__cxx11::string::_M_construct((ulong)&local_a8,(char)uVar36 - (char)((int)uVar8 >> 0x1f));
    std::__detail::__to_chars_10_impl<unsigned_int>
              ((char *)((ulong)(uVar8 >> 0x1f) + (long)local_a8),uVar36,uVar29);
    if (0x3fffffffffffffffU - *(long *)(*(long *)(this + 0x7d8) + -0x18) < local_a0)
    goto LAB_00110e2a;
    std::__cxx11::string::_M_append((char *)(*(long *)(this + 0x7d8) + -0x20),(ulong)local_a8);
    if (local_a8 == local_98) goto LAB_0010fc00;
    uVar37 = uVar37 + 1;
    operator_delete(local_a8,local_98[0] + 1);
  } while (uVar37 != 6);
LAB_0010fe30:
  iVar7 = 0;
  p_Var33 = (_Rb_tree_node_base *)(param_2 + 0x3a0);
  pTVar12 = this + 0x3a0;
  do {
    for (p_Var18 = *(_Rb_tree_node_base **)(p_Var33 + 0x10); p_Var18 != p_Var33;
        p_Var18 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var18)) {
      uVar8 = *(uint *)(p_Var18 + 0x24);
      uVar29 = *(uint *)(p_Var18 + 0x20);
      if (uVar8 != 0) {
        p_Var11 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)pTVar12 + 8);
        p_Var16 = (_Rb_tree_node_base *)pTVar12;
        if (*(_Rb_tree_node_base **)((_Rb_tree_node_base *)pTVar12 + 8) == (_Rb_tree_node_base *)0x0
           ) {
LAB_00110540:
          p_Var11 = (_Rb_tree_node_base *)operator_new(0x28);
          lVar26 = *(long *)((_Rb_tree_node_base *)pTVar12 + 0x20);
          *(uint *)(p_Var11 + 0x20) = uVar29;
          *(undefined4 *)(p_Var11 + 0x24) = 0;
          if ((lVar26 != 0) &&
             (p_Var16 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)pTVar12 + 0x18),
             *(int *)(p_Var16 + 0x20) < (int)uVar29)) {
            bVar38 = false;
LAB_00110576:
            if ((p_Var16 == (_Rb_tree_node_base *)pTVar12) || (p_Var34 = p_Var16, bVar38)) {
              bVar38 = true;
            }
            else {
LAB_0011052a:
              p_Var16 = p_Var34;
              bVar38 = (int)uVar29 < *(int *)(p_Var16 + 0x20);
            }
            goto LAB_0010ff35;
          }
LAB_001104b0:
          auVar39 = std::
                    _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                    ::_M_get_insert_unique_pos
                              ((_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                *)((_Rb_tree_node_base *)pTVar12 + -8),(int *)(ulong)uVar29);
          p_Var16 = auVar39._8_8_;
          p_Var34 = auVar39._0_8_;
          if (p_Var16 != (_Rb_tree_node_base *)0x0) {
            bVar38 = p_Var34 != (_Rb_tree_node_base *)0x0;
            goto LAB_00110576;
          }
LAB_001104d6:
          operator_delete(p_Var11,0x28);
        }
        else {
          do {
            while( true ) {
              p_Var34 = p_Var11;
              p_Var1 = p_Var34 + 0x18;
              if ((int)uVar29 <= *(int *)(p_Var34 + 0x20)) break;
              p_Var11 = *(_Rb_tree_node_base **)p_Var1;
              p_Var34 = p_Var16;
              if (*(_Rb_tree_node_base **)p_Var1 == (_Rb_tree_node_base *)0x0) goto LAB_0010fec9;
            }
            p_Var11 = *(_Rb_tree_node_base **)(p_Var34 + 0x10);
            p_Var16 = p_Var34;
          } while (*(_Rb_tree_node_base **)(p_Var34 + 0x10) != (_Rb_tree_node_base *)0x0);
LAB_0010fec9:
          if (pTVar12 == (TIntermediate *)p_Var34) goto LAB_00110540;
          if (*(int *)(p_Var34 + 0x20) <= (int)uVar29) goto LAB_0010ff45;
          p_Var11 = (_Rb_tree_node_base *)operator_new(0x28);
          *(uint *)(p_Var11 + 0x20) = uVar29;
          *(undefined4 *)(p_Var11 + 0x24) = 0;
          if (*(int *)(p_Var34 + 0x20) <= (int)uVar29) {
            if ((int)uVar29 <= *(int *)(p_Var34 + 0x20)) goto LAB_001104d6;
            if (*(_Rb_tree_node_base **)((_Rb_tree_node_base *)pTVar12 + 0x18) != p_Var34) {
              p_Var16 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var34);
              if (*(int *)(p_Var16 + 0x20) <= (int)uVar29) goto LAB_001104b0;
              if (*(long *)(p_Var34 + 0x18) != 0) {
                bVar38 = true;
                goto LAB_00110576;
              }
            }
            goto LAB_0011052a;
          }
          if (*(_Rb_tree_node_base **)((_Rb_tree_node_base *)pTVar12 + 0x10) != p_Var34) {
            p_Var16 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var34);
            if ((int)uVar29 <= *(int *)(p_Var16 + 0x20)) goto LAB_001104b0;
            if (*(long *)(p_Var16 + 0x18) != 0) goto LAB_0010ff2a;
            bVar38 = false;
            goto LAB_00110576;
          }
LAB_0010ff2a:
          bVar38 = true;
          p_Var16 = p_Var34;
LAB_0010ff35:
          std::_Rb_tree_insert_and_rebalance(bVar38,p_Var11,p_Var16,(_Rb_tree_node_base *)pTVar12);
          *(long *)((_Rb_tree_node_base *)pTVar12 + 0x20) =
               *(long *)((_Rb_tree_node_base *)pTVar12 + 0x20) + 1;
          p_Var34 = p_Var11;
        }
LAB_0010ff45:
        *(uint *)(p_Var34 + 0x24) = uVar8;
        pcVar14 = (char *)glslang::TIntermediate::getResourceName(iVar7);
        if (pcVar14 != (char *)0x0) {
          local_68 = local_58;
          p_Var15 = (_Rb_tree_node *)strlen(pcVar14);
          local_c8 = p_Var15;
          if (p_Var15 < (_Rb_tree_node *)0x10) {
            pp_Var23 = local_58;
            if (p_Var15 == (_Rb_tree_node *)0x1) {
              local_58[0] = (_Rb_tree_node *)CONCAT71(local_58[0]._1_7_,*pcVar14);
            }
            else if (p_Var15 != (_Rb_tree_node *)0x0) goto LAB_001105d8;
          }
          else {
            local_68 = (_Rb_tree_node **)
                       std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_c8);
            local_58[0] = local_c8;
            pp_Var23 = local_68;
LAB_001105d8:
            memcpy(pp_Var23,pcVar14,(size_t)p_Var15);
            pp_Var23 = local_68;
          }
          local_60 = local_c8;
          *(_Rb_tree_node *)((long)pp_Var23 + (long)local_c8) = (_Rb_tree_node)0x0;
          plVar17 = *(long **)(this + 0x7d8);
          if (plVar17 == *(long **)(this + 0x7e0)) {
            std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
            _M_realloc_insert<std::__cxx11::string>
                      ((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)
                       (this + 2000),plVar17,&local_68);
            if (local_68 != local_58) {
              operator_delete(local_68,(ulong)(local_58[0] + 1));
            }
            plVar17 = *(long **)(this + 0x7d8);
            plVar30 = plVar17 + -4;
          }
          else {
            *plVar17 = (long)(plVar17 + 2);
            p_Var15 = local_c8;
            if (local_68 == local_58) {
              p_Var19 = local_c8 + 1;
              uVar36 = (uint)p_Var19;
              if (7 < uVar36) {
                plVar17[2] = (long)local_58[0];
                *(undefined8 *)((long)plVar17 + ((ulong)p_Var19 & 0xffffffff) + 8) =
                     *(undefined8 *)((long)local_58 + (((ulong)p_Var19 & 0xffffffff) - 8));
                lVar26 = (long)(plVar17 + 2) - ((ulong)(plVar17 + 3) & 0xfffffffffffffff8);
                uVar36 = uVar36 + (int)lVar26 & 0xfffffff8;
                if (7 < uVar36) {
                  uVar10 = 0;
                  do {
                    uVar37 = (ulong)uVar10;
                    uVar10 = uVar10 + 8;
                    *(undefined8 *)(((ulong)(plVar17 + 3) & 0xfffffffffffffff8) + uVar37) =
                         *(undefined8 *)((long)local_58 + (uVar37 - lVar26));
                  } while (uVar10 < uVar36);
                }
                goto LAB_0010fff9;
              }
              if (((ulong)p_Var19 & 4) == 0) {
                plVar30 = plVar17;
                if (uVar36 != 0) {
                  *(undefined1 *)(plVar17 + 2) = local_58[0]._0_1_;
                  if (((ulong)p_Var19 & 2) == 0) goto LAB_0010fff9;
                  *(undefined2 *)((long)plVar17 + ((ulong)p_Var19 & 0xffffffff) + 0xe) =
                       *(undefined2 *)((long)local_58 + (((ulong)p_Var19 & 0xffffffff) - 2));
                  plVar30 = *(long **)(this + 0x7d8);
                }
              }
              else {
                *(undefined4 *)(plVar17 + 2) = local_58[0]._0_4_;
                *(undefined4 *)((long)plVar17 + ((ulong)p_Var19 & 0xffffffff) + 0xc) =
                     *(undefined4 *)((long)local_58 + (((ulong)p_Var19 & 0xffffffff) - 4));
                plVar30 = *(long **)(this + 0x7d8);
              }
            }
            else {
              *plVar17 = (long)local_68;
              plVar17[2] = (long)local_58[0];
LAB_0010fff9:
              plVar30 = *(long **)(this + 0x7d8);
            }
            plVar17[1] = (long)p_Var15;
            plVar17 = plVar30 + 4;
            *(long **)(this + 0x7d8) = plVar17;
          }
          if (plVar17[-3] == 0x3fffffffffffffff) goto LAB_00110e2a;
          std::__cxx11::string::_M_append((char *)plVar30,0x11adc5);
          uVar36 = uVar8;
          if ((int)uVar8 < 1) {
            uVar36 = -uVar8;
          }
          if (uVar36 < 10) {
            uVar10 = 1;
          }
          else if (uVar36 < 100) {
            uVar10 = 2;
          }
          else if (uVar36 < 1000) {
            uVar10 = 3;
          }
          else if (uVar36 < 10000) {
            uVar10 = 4;
          }
          else if (uVar36 < 100000) {
            uVar10 = 5;
          }
          else if (uVar36 < 1000000) {
            uVar10 = 5;
LAB_001100ae:
            uVar10 = uVar10 + 1;
          }
          else if (uVar36 < 10000000) {
            uVar10 = 7;
          }
          else if (uVar36 < 100000000) {
            uVar10 = 8;
          }
          else {
            uVar10 = 9;
            if (999999999 < uVar36) goto LAB_001100ae;
          }
          local_68 = local_58;
          std::__cxx11::string::_M_construct
                    ((ulong)&local_68,(char)uVar10 - (char)((int)uVar8 >> 0x1f));
          std::__detail::__to_chars_10_impl<unsigned_int>
                    ((char *)((ulong)(uVar8 >> 0x1f) + (long)local_68),uVar10,uVar36);
          if ((_Rb_tree_node *)(0x3fffffffffffffffU - *(long *)(*(long *)(this + 0x7d8) + -0x18)) <
              local_60) goto LAB_00110e2a;
          std::__cxx11::string::_M_append((char *)(*(long *)(this + 0x7d8) + -0x20),(ulong)local_68)
          ;
          if (local_68 != local_58) {
            operator_delete(local_68,(ulong)(local_58[0] + 1));
          }
          if (*(long *)(*(long *)(this + 0x7d8) + -0x18) == 0x3fffffffffffffff) goto LAB_00110e2a;
          std::__cxx11::string::_M_append((char *)(*(long *)(this + 0x7d8) + -0x20),0x11adc5);
          uVar8 = -uVar29;
          if (0 < (int)uVar29) {
            uVar8 = uVar29;
          }
          if (uVar8 < 10) {
            uVar36 = 1;
          }
          else if (uVar8 < 100) {
            uVar36 = 2;
          }
          else if (uVar8 < 1000) {
            uVar36 = 3;
          }
          else if (uVar8 < 10000) {
            uVar36 = 4;
          }
          else {
            uVar36 = 5;
            if (99999 < uVar8) {
              if (uVar8 < 1000000) {
                iVar9 = 5;
LAB_001101fe:
                uVar36 = iVar9 + 1;
              }
              else {
                uVar36 = 7;
                if (9999999 < uVar8) {
                  if (uVar8 < 100000000) {
                    uVar36 = 8;
                  }
                  else {
                    if (999999999 < uVar8) {
                      iVar9 = 9;
                      goto LAB_001101fe;
                    }
                    uVar36 = 9;
                  }
                }
              }
            }
          }
          local_88 = local_78;
          std::__cxx11::string::_M_construct
                    ((ulong)&local_88,(char)uVar36 - (char)((int)uVar29 >> 0x1f));
          std::__detail::__to_chars_10_impl<unsigned_int>
                    ((char *)((ulong)(uVar29 >> 0x1f) + (long)local_88),uVar36,uVar8);
          if (0x3fffffffffffffffU - *(long *)(*(long *)(this + 0x7d8) + -0x18) < local_80)
          goto LAB_00110e2a;
          std::__cxx11::string::_M_append((char *)(*(long *)(this + 0x7d8) + -0x20),(ulong)local_88)
          ;
          if (local_88 != local_78) {
            operator_delete(local_88,local_78[0] + 1);
          }
        }
      }
    }
    iVar7 = iVar7 + 1;
    p_Var33 = p_Var33 + 0x30;
    pTVar12 = (TIntermediate *)((_Rb_tree_node_base *)pTVar12 + 0x30);
  } while (iVar7 != 6);
  plVar17 = *(long **)(this + 0x4c0);
  plVar30 = *(long **)(this + 0x4b8);
  plVar5 = *(long **)(param_2 + 0x4c0);
  plVar27 = *(long **)(param_2 + 0x4b8);
  if (plVar27 == plVar5) goto LAB_00110342;
  uVar37 = (long)plVar5 - (long)plVar27;
  if (uVar37 <= (ulong)(*(long *)(this + 0x4c8) - (long)plVar17)) {
    do {
      lVar26 = plVar27[1];
      plVar30 = plVar27 + 4;
      *plVar17 = (long)(plVar17 + 2);
      std::__cxx11::string::_M_construct<char*>(plVar17,*plVar27,lVar26 + *plVar27);
      plVar27 = plVar30;
      plVar17 = plVar17 + 4;
    } while (plVar5 != plVar30);
    *(ulong *)(this + 0x4c0) = *(long *)(this + 0x4c0) + uVar37;
    goto LAB_00110342;
  }
  uVar24 = (long)plVar17 - (long)plVar30 >> 5;
  if (0x3ffffffffffffff - uVar24 < (ulong)((long)uVar37 >> 5)) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_range_insert");
  }
  if ((ulong)((long)plVar17 - (long)plVar30) < uVar37) {
    uVar37 = ((long)uVar37 >> 5) + uVar24;
LAB_001109d1:
    if (uVar37 != 0) {
      if (0x3ffffffffffffff < uVar37) {
        uVar37 = 0x3ffffffffffffff;
      }
      uVar13 = uVar37 << 5;
      goto LAB_00110993;
    }
    local_108 = 0;
    puVar21 = (undefined8 *)0x0;
  }
  else {
    uVar13 = 0x7fffffffffffffe0;
    uVar37 = uVar24 * 2;
    if (uVar24 <= uVar37) goto LAB_001109d1;
LAB_00110993:
    puVar21 = (undefined8 *)operator_new(uVar13);
    local_108 = (long)puVar21 + uVar13;
  }
  puVar35 = puVar21;
  if (plVar17 != plVar30) {
    puVar35 = (undefined8 *)(((long)plVar17 - (long)plVar30) + (long)puVar21);
    plVar22 = plVar30 + 2;
    puVar25 = puVar21;
    do {
      plVar28 = puVar25 + 2;
      lVar26 = plVar22[-1];
      *puVar25 = plVar28;
      if (plVar22 == (long *)plVar22[-2]) {
        uVar37 = lVar26 + 1;
        uVar8 = (uint)uVar37;
        if (uVar8 < 8) {
          if ((uVar37 & 4) == 0) {
            if (uVar8 != 0) {
              *(char *)plVar28 = (char)*plVar22;
              if ((uVar37 & 2) == 0) goto LAB_00110ced;
              *(undefined2 *)((long)puVar25 + (uVar37 & 0xffffffff) + 0xe) =
                   *(undefined2 *)((long)plVar22 + ((uVar37 & 0xffffffff) - 2));
              lVar26 = plVar22[-1];
            }
          }
          else {
            *(int *)plVar28 = (int)*plVar22;
            *(undefined4 *)((long)puVar25 + (uVar37 & 0xffffffff) + 0xc) =
                 *(undefined4 *)((long)plVar22 + ((uVar37 & 0xffffffff) - 4));
            lVar26 = plVar22[-1];
          }
        }
        else {
          *plVar28 = *plVar22;
          *(undefined8 *)((long)puVar25 + (uVar37 & 0xffffffff) + 8) =
               *(undefined8 *)((long)plVar22 + ((uVar37 & 0xffffffff) - 8));
          lVar26 = (long)plVar28 - ((ulong)(puVar25 + 3) & 0xfffffffffffffff8);
          uVar8 = (int)lVar26 + uVar8 & 0xfffffff8;
          if (7 < uVar8) {
            uVar29 = 0;
            do {
              uVar37 = (ulong)uVar29;
              uVar29 = uVar29 + 8;
              *(undefined8 *)(((ulong)(puVar25 + 3) & 0xfffffffffffffff8) + uVar37) =
                   *(undefined8 *)((long)plVar22 + (uVar37 - lVar26));
            } while (uVar29 < uVar8);
          }
LAB_00110ced:
          lVar26 = plVar22[-1];
        }
      }
      else {
        lVar31 = *plVar22;
        *puVar25 = (long *)plVar22[-2];
        puVar25[2] = lVar31;
      }
      puVar25[1] = lVar26;
      puVar25 = puVar25 + 4;
      plVar22[-2] = (long)plVar22;
      plVar22[-1] = 0;
      *(undefined1 *)plVar22 = 0;
      plVar22 = plVar22 + 4;
    } while (puVar25 != puVar35);
  }
  do {
    plVar28 = plVar27 + 4;
    puVar25 = puVar35 + 4;
    *puVar35 = puVar35 + 2;
    std::__cxx11::string::_M_construct<char*>(puVar35,*plVar27,plVar27[1] + *plVar27);
    puVar35 = puVar25;
    plVar27 = plVar28;
    plVar22 = plVar30;
  } while (plVar5 != plVar28);
  for (; plVar17 != plVar22; plVar22 = plVar22 + 4) {
    if ((long *)*plVar22 != plVar22 + 2) {
      operator_delete((long *)*plVar22,plVar22[2] + 1);
    }
  }
  if (plVar30 != (long *)0x0) {
    operator_delete(plVar30,*(long *)(this + 0x4c8) - (long)plVar30);
  }
  *(undefined8 **)(this + 0x4b8) = puVar21;
  *(undefined8 **)(this + 0x4c0) = puVar25;
  *(long *)(this + 0x4c8) = local_108;
LAB_00110342:
  if (param_2[0x4d0] != (TIntermediate)0x0) {
    this[0x4d0] = (TIntermediate)0x1;
  }
  if (param_2[0x4d1] != (TIntermediate)0x0) {
    this[0x4d1] = (TIntermediate)0x1;
  }
  if (param_2[0x26d] != (TIntermediate)0x0) {
    this[0x26d] = (TIntermediate)0x1;
  }
  if (param_2[0x26e] != (TIntermediate)0x0) {
    this[0x26e] = (TIntermediate)0x1;
  }
  if (param_2[0x270] != (TIntermediate)0x0) {
    this[0x270] = (TIntermediate)0x1;
  }
  if (param_2[0x4d2] != (TIntermediate)0x0) {
    this[0x4d2] = (TIntermediate)0x1;
  }
  if (param_2[0x4d3] != (TIntermediate)0x0) {
    this[0x4d3] = (TIntermediate)0x1;
  }
  if (param_2[0x4d4] != (TIntermediate)0x0) {
    this[0x4d4] = (TIntermediate)0x1;
  }
  if (param_2[0x271] != (TIntermediate)0x0) {
    this[0x271] = (TIntermediate)0x1;
  }
  if (param_2[0x272] != (TIntermediate)0x0) {
    this[0x272] = (TIntermediate)0x1;
  }
  if (param_2[0x4d5] != (TIntermediate)0x0) {
    this[0x4d5] = (TIntermediate)0x1;
  }
  if (param_2[0x50c] != (TIntermediate)0x0) {
    this[0x50c] = (TIntermediate)0x1;
  }
  if (param_2[0x50d] != (TIntermediate)0x0) {
    this[0x50d] = (TIntermediate)0x1;
  }
  if (param_2[0x510] != (TIntermediate)0x0) {
    this[0x510] = (TIntermediate)0x1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* glslang::TIntermediate::mergeTrees(TInfoSink&, glslang::TIntermediate&) */

void __thiscall
glslang::TIntermediate::mergeTrees(TIntermediate *this,TInfoSink *param_1,TIntermediate *param_2)

{
  _Rb_tree_node_base *p_Var1;
  ulong uVar2;
  _Rb_tree_node_base *__src;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  _Rb_tree_node_base *p_Var6;
  _Rb_tree_node_base *p_Var7;
  ulong uVar8;
  _Rb_tree_node_base *__dest;
  TVector *pTVar9;
  long lVar10;
  _Rb_tree_node_base *p_Var11;
  ulong __n;
  TIdMaps *pTVar12;
  TIdMaps *pTVar13;
  TIdMaps *pTVar14;
  long in_FS_OFFSET;
  bool bVar15;
  undefined1 auVar16 [16];
  TVector *local_1b8;
  long *local_1b0;
  long local_180;
  undefined **local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  TIdMaps *local_140;
  long local_138;
  TIdMaps local_128 [224];
  TIdMaps local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_2 + 0x80) != 0) {
    if (*(long **)(this + 0x80) == (long *)0x0) {
      *(long *)(this + 0x80) = *(long *)(param_2 + 0x80);
    }
    else {
      *(int *)(this + 0x364) = *(int *)(this + 0x364) + *(int *)(param_2 + 0x364);
      *(int *)(this + 0x370) = *(int *)(this + 0x370) + *(int *)(param_2 + 0x370);
      plVar4 = (long *)(**(code **)(**(long **)(this + 0x80) + 0x30))();
      if (*(code **)(*plVar4 + 400) == TIntermAggregate::getSequence) {
        local_1b8 = (TVector *)(plVar4 + 0x18);
      }
      else {
        local_1b8 = (TVector *)(**(code **)(*plVar4 + 400))();
      }
      plVar4 = (long *)(**(code **)(**(long **)(param_2 + 0x80) + 0x30))();
      if (*(code **)(*plVar4 + 400) == TIntermAggregate::getSequence) {
        pTVar9 = (TVector *)(plVar4 + 0x18);
      }
      else {
        pTVar9 = (TVector *)(**(code **)(*plVar4 + 400))();
      }
      local_1b0 = (long *)findLinkerObjects(this);
      if (*(code **)(*local_1b0 + 400) == TIntermAggregate::getSequence) {
        local_1b0 = local_1b0 + 0x18;
      }
      else {
        local_1b0 = (long *)(**(code **)(*local_1b0 + 400))();
      }
      plVar4 = (long *)findLinkerObjects(param_2);
      if (*(code **)(*plVar4 + 400) == TIntermAggregate::getSequence) {
        plVar4 = plVar4 + 0x18;
      }
      else {
        plVar4 = (long *)(**(code **)(*plVar4 + 400))();
      }
      pTVar14 = local_48;
      pTVar12 = local_128;
      do {
        uVar5 = glslang::GetThreadPoolAllocator();
        *(undefined4 *)(pTVar12 + 0x10) = 0;
        *(undefined8 *)pTVar12 = uVar5;
        pTVar13 = pTVar12 + 0x38;
        *(undefined8 *)(pTVar12 + 0x18) = 0;
        *(TIdMaps **)(pTVar12 + 0x20) = pTVar12 + 0x10;
        *(TIdMaps **)(pTVar12 + 0x28) = pTVar12 + 0x10;
        *(undefined8 *)(pTVar12 + 0x30) = 0;
        pTVar12 = pTVar13;
      } while (pTVar14 != pTVar13);
      seedIdMap(this,local_128,&local_180);
      local_170 = 1;
      local_16c = 0;
      local_178 = &PTR__TIntermTraverser_00120d00;
      local_160 = glslang::GetThreadPoolAllocator();
      local_178 = &PTR__TRemapIdTraverser_00120e38;
      local_158 = 0;
      local_150 = 0;
      local_148 = 0;
      local_140 = local_128;
      local_138 = local_180 + 1;
      (**(code **)(**(long **)(param_2 + 0x80) + 0x10))(*(long **)(param_2 + 0x80),&local_178);
      mergeBodies(this,param_1,local_1b8,pTVar9);
      mergeGlobalUniformBlocks(this,param_1,param_2,false);
      p_Var1 = (_Rb_tree_node_base *)(this + 0x738);
      mergeLinkerObjects(this,param_1,local_1b0,plVar4,*(undefined4 *)param_2);
      for (p_Var6 = *(_Rb_tree_node_base **)(param_2 + 0x748);
          p_Var6 != (_Rb_tree_node_base *)(param_2 + 0x738);
          p_Var6 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var6)) {
        auVar16 = std::
                  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
                  ::_M_get_insert_hint_unique_pos
                            ((_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
                              *)(this + 0x730),p_Var1,p_Var6 + 0x20);
        p_Var11 = auVar16._8_8_;
        if (p_Var11 != (_Rb_tree_node_base *)0x0) {
          bVar15 = auVar16._0_8_ != 0;
          local_1b0._0_1_ = p_Var1 == p_Var11 || bVar15;
          if (p_Var1 != p_Var11 && !bVar15) {
            uVar2 = *(ulong *)(p_Var6 + 0x30);
            uVar8 = *(ulong *)(p_Var11 + 0x30);
            __n = uVar8;
            if (uVar2 <= uVar8) {
              __n = uVar2;
            }
            if ((__n == 0) ||
               (iVar3 = memcmp(*(void **)(p_Var6 + 0x28),*(void **)(p_Var11 + 0x28),__n), iVar3 == 0
               )) {
              lVar10 = uVar2 - uVar8;
              if (lVar10 < 0x80000000) {
                if (-0x80000001 < lVar10) {
                  iVar3 = (int)lVar10;
                  goto LAB_001112df;
                }
                local_1b0._0_1_ = true;
              }
            }
            else {
LAB_001112df:
              local_1b0._0_1_ = SUB41((uint)iVar3 >> 0x1f,0);
            }
          }
          p_Var7 = (_Rb_tree_node_base *)operator_new(0x48);
          uVar8 = glslang::GetThreadPoolAllocator();
          uVar2 = *(ulong *)(p_Var6 + 0x30);
          __dest = p_Var7 + 0x38;
          *(_Rb_tree_node_base **)(p_Var7 + 0x28) = __dest;
          __src = *(_Rb_tree_node_base **)(p_Var6 + 0x28);
          *(ulong *)(p_Var7 + 0x20) = uVar8;
          if (uVar2 < 0x10) {
            if (uVar2 == 1) {
              p_Var7[0x38] = *__src;
            }
            else if (uVar2 != 0) goto LAB_00111204;
          }
          else {
            if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
              std::__throw_length_error("basic_string::_M_create");
            }
            __dest = (_Rb_tree_node_base *)glslang::TPoolAllocator::allocate(uVar8);
            *(_Rb_tree_node_base **)(p_Var7 + 0x28) = __dest;
            *(ulong *)(p_Var7 + 0x38) = uVar2;
LAB_00111204:
            memcpy(__dest,__src,uVar2);
            __dest = *(_Rb_tree_node_base **)(p_Var7 + 0x28);
          }
          *(ulong *)(p_Var7 + 0x30) = uVar2;
          __dest[uVar2] = (_Rb_tree_node_base)0x0;
          std::_Rb_tree_insert_and_rebalance(local_1b0._0_1_,p_Var7,p_Var11,p_Var1);
          *(long *)(this + 0x758) = *(long *)(this + 0x758) + 1;
        }
      }
      do {
        pTVar12 = pTVar14 + -0x20;
        pTVar14 = pTVar14 + -0x38;
        for (lVar10 = *(long *)pTVar12; lVar10 != 0; lVar10 = *(long *)(lVar10 + 0x10)) {
          std::
          _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>>>
          ::_M_erase(*(_Rb_tree_node **)(lVar10 + 0x18));
        }
      } while (pTVar14 != local_128);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* glslang::TIntermediate::merge(TInfoSink&, glslang::TIntermediate&) */

void __thiscall
glslang::TIntermediate::merge(TIntermediate *this,TInfoSink *param_1,TIntermediate *param_2)

{
  mergeCallGraphs(this,param_1,param_2);
  mergeModes(this,param_1,param_2);
  mergeTrees(this,param_1,param_2);
  return;
}



/* std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, long long> >
   std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, long long>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, long long> >, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, long long> >
   >::_M_emplace_hint_unique<std::piecewise_construct_t const&,
   std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > const&>, std::tuple<> >(std::_Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, long long> >,
   std::piecewise_construct_t const&, std::tuple<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&>&&, std::tuple<>&&) [clone
   .isra.0] */

_Rb_tree_node_base *
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>>>
::
_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const&>,std::tuple<>>
          (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>>>
           *param_1,undefined8 param_2,long *param_3)

{
  _Rb_tree_node_base *__src;
  ulong uVar1;
  int iVar2;
  _Rb_tree_node_base *p_Var3;
  ulong uVar4;
  _Rb_tree_node_base *p_Var5;
  ulong __n;
  bool bVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  p_Var3 = (_Rb_tree_node_base *)glslang::TPoolAllocator::allocate(*(ulong *)param_1);
  lVar7 = *param_3;
  uVar4 = glslang::GetThreadPoolAllocator();
  p_Var5 = p_Var3 + 0x38;
  *(_Rb_tree_node_base **)(p_Var3 + 0x28) = p_Var5;
  __src = *(_Rb_tree_node_base **)(lVar7 + 8);
  uVar1 = *(ulong *)(lVar7 + 0x10);
  *(ulong *)(p_Var3 + 0x20) = uVar4;
  if (uVar1 < 0x10) {
    if (uVar1 == 1) {
      p_Var3[0x38] = *__src;
    }
    else if (uVar1 != 0) goto LAB_00111481;
  }
  else {
    if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    p_Var5 = (_Rb_tree_node_base *)glslang::TPoolAllocator::allocate(uVar4);
    *(ulong *)(p_Var3 + 0x38) = uVar1;
    *(_Rb_tree_node_base **)(p_Var3 + 0x28) = p_Var5;
LAB_00111481:
    memcpy(p_Var5,__src,uVar1);
    p_Var5 = *(_Rb_tree_node_base **)(p_Var3 + 0x28);
  }
  *(ulong *)(p_Var3 + 0x30) = uVar1;
  p_Var5[uVar1] = (_Rb_tree_node_base)0x0;
  *(undefined8 *)(p_Var3 + 0x48) = 0;
  auVar8 = _M_get_insert_hint_unique_pos(param_1,param_2,p_Var3 + 0x20);
  p_Var5 = auVar8._8_8_;
  if (p_Var5 == (_Rb_tree_node_base *)0x0) {
    return auVar8._0_8_;
  }
  bVar6 = true;
  if ((auVar8._0_8_ != (_Rb_tree_node_base *)0x0) ||
     (p_Var5 == (_Rb_tree_node_base *)(param_1 + 0x10))) goto LAB_00111430;
  uVar1 = *(ulong *)(p_Var3 + 0x30);
  uVar4 = *(ulong *)(p_Var5 + 0x30);
  __n = uVar4;
  if (uVar1 <= uVar4) {
    __n = uVar1;
  }
  if ((__n == 0) ||
     (iVar2 = memcmp(*(void **)(p_Var3 + 0x28),*(void **)(p_Var5 + 0x28),__n), iVar2 == 0)) {
    lVar7 = uVar1 - uVar4;
    bVar6 = false;
    if (0x7fffffff < lVar7) goto LAB_00111430;
    if (lVar7 < -0x80000000) {
      bVar6 = true;
      goto LAB_00111430;
    }
    iVar2 = (int)lVar7;
  }
  bVar6 = SUB41((uint)iVar2 >> 0x1f,0);
LAB_00111430:
  std::_Rb_tree_insert_and_rebalance(bVar6,p_Var3,p_Var5,(_Rb_tree_node_base *)(param_1 + 0x10));
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  return p_Var3;
}



/* glslang::TSmallArrayVector::~TSmallArrayVector() */

void __thiscall glslang::TSmallArrayVector::~TSmallArrayVector(TSmallArrayVector *this)

{
  return;
}



/* glslang::TType::~TType() */

void __thiscall glslang::TType::~TType(TType *this)

{
  return;
}



/* glslang::TType::hideMember() */

void __thiscall glslang::TType::hideMember(TType *this)

{
  *(ushort *)(this + 8) = *(ushort *)(this + 8) & 0xf000 | 0x100;
  return;
}



/* glslang::TType::hiddenMember() const */

bool __thiscall glslang::TType::hiddenMember(TType *this)

{
  return this[8] == (TType)0x0;
}



/* glslang::TType::getTypeName[abi:cxx11]() const */

undefined8 __thiscall glslang::TType::getTypeName_abi_cxx11_(TType *this)

{
  return *(undefined8 *)(this + 0x78);
}



/* glslang::TType::getFieldName[abi:cxx11]() const */

undefined8 __thiscall glslang::TType::getFieldName_abi_cxx11_(TType *this)

{
  return *(undefined8 *)(this + 0x70);
}



/* glslang::TType::getBasicType() const */

TType __thiscall glslang::TType::getBasicType(TType *this)

{
  return this[8];
}



/* glslang::TType::getSampler() const */

TType * __thiscall glslang::TType::getSampler(TType *this)

{
  return this + 0x80;
}



/* glslang::TType::getSampler() */

TType * __thiscall glslang::TType::getSampler(TType *this)

{
  return this + 0x80;
}



/* glslang::TType::getQualifier() */

TType * __thiscall glslang::TType::getQualifier(TType *this)

{
  return this + 0x10;
}



/* glslang::TType::getQualifier() const */

TType * __thiscall glslang::TType::getQualifier(TType *this)

{
  return this + 0x10;
}



/* glslang::TType::getVectorSize() const */

byte __thiscall glslang::TType::getVectorSize(TType *this)

{
  return (byte)this[9] & 0xf;
}



/* glslang::TType::getMatrixCols() const */

byte __thiscall glslang::TType::getMatrixCols(TType *this)

{
  return (byte)this[9] >> 4;
}



/* glslang::TType::getMatrixRows() const */

byte __thiscall glslang::TType::getMatrixRows(TType *this)

{
  return (byte)this[10] & 0xf;
}



/* glslang::TType::getOuterArraySize() const */

undefined4 __thiscall glslang::TType::getOuterArraySize(TType *this)

{
  return **(undefined4 **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
}



/* glslang::TType::getOuterArrayNode() const */

undefined8 __thiscall glslang::TType::getOuterArrayNode(TType *this)

{
  return *(undefined8 *)(*(long *)(*(long *)(*(long *)(this + 0x60) + 8) + 8) + 8);
}



/* glslang::TType::getCumulativeArraySize() const */

int __thiscall glslang::TType::getCumulativeArraySize(TType *this)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  
  lVar2 = *(long *)(*(long *)(this + 0x60) + 8);
  if (lVar2 != 0) {
    piVar3 = *(int **)(lVar2 + 8);
    iVar4 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar3 >> 4);
    if (0 < iVar4) {
      piVar1 = piVar3 + (ulong)(iVar4 - 1) * 4 + 4;
      iVar4 = 1;
      do {
        iVar4 = iVar4 * *piVar3;
        piVar3 = piVar3 + 4;
      } while (piVar3 != piVar1);
      return iVar4;
    }
  }
  return 1;
}



/* glslang::TType::getImplicitArraySize() const */

int __thiscall glslang::TType::getImplicitArraySize(TType *this)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(this + 0x60) + 0x10);
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  return iVar1;
}



/* glslang::TType::getArraySizes() const */

undefined8 __thiscall glslang::TType::getArraySizes(TType *this)

{
  return *(undefined8 *)(this + 0x60);
}



/* glslang::TType::getArraySizes() */

undefined8 __thiscall glslang::TType::getArraySizes(TType *this)

{
  return *(undefined8 *)(this + 0x60);
}



/* glslang::TType::getReferentType() const */

undefined8 __thiscall glslang::TType::getReferentType(TType *this)

{
  return *(undefined8 *)(this + 0x68);
}



/* glslang::TType::getTypeParameters() const */

undefined8 __thiscall glslang::TType::getTypeParameters(TType *this)

{
  return *(undefined8 *)(this + 0x88);
}



/* glslang::TType::getTypeParameters() */

undefined8 __thiscall glslang::TType::getTypeParameters(TType *this)

{
  return *(undefined8 *)(this + 0x88);
}



/* glslang::TType::isVector() const */

byte __thiscall glslang::TType::isVector(TType *this)

{
  if (1 < ((byte)this[9] & 0xf)) {
    return 1;
  }
  return (byte)this[10] >> 4 & 1;
}



/* glslang::TType::isMatrix() const */

bool __thiscall glslang::TType::isMatrix(TType *this)

{
  return 0xf < (byte)this[9];
}



/* glslang::TType::isArray() const */

bool __thiscall glslang::TType::isArray(TType *this)

{
  return *(long *)(this + 0x60) != 0;
}



/* glslang::TType::isArrayVariablyIndexed() const */

undefined1 __thiscall glslang::TType::isArrayVariablyIndexed(TType *this)

{
  return *(undefined1 *)(*(long *)(this + 0x60) + 0x15);
}



/* glslang::TType::setArrayVariablyIndexed() */

void __thiscall glslang::TType::setArrayVariablyIndexed(TType *this)

{
  *(undefined1 *)(*(long *)(this + 0x60) + 0x15) = 1;
  return;
}



/* glslang::TType::updateImplicitArraySize(int) */

void __thiscall glslang::TType::updateImplicitArraySize(TType *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(this + 0x60) + 0x10);
  if (iVar1 < param_1) {
    iVar1 = param_1;
  }
  *(int *)(*(long *)(this + 0x60) + 0x10) = iVar1;
  return;
}



/* glslang::TType::setImplicitlySized(bool) */

void __thiscall glslang::TType::setImplicitlySized(TType *this,bool param_1)

{
  *(bool *)(*(long *)(this + 0x60) + 0x14) = param_1;
  return;
}



/* glslang::TType::isStruct() const */

undefined4 __thiscall glslang::TType::isStruct(TType *this)

{
  return CONCAT31((int3)((byte)this[8] - 0xf >> 8),(byte)((byte)this[8] - 0xf) < 2);
}



/* glslang::TType::isFloatingDomain() const */

undefined4 __thiscall glslang::TType::isFloatingDomain(TType *this)

{
  return CONCAT31((int3)((byte)this[8] - 1 >> 8),(byte)((byte)this[8] - 1) < 3);
}



/* glslang::TType::isIntegerDomain() const */

bool __thiscall glslang::TType::isIntegerDomain(TType *this)

{
  TType TVar1;
  
  TVar1 = this[8];
  if ((byte)TVar1 < 0xc) {
    return 3 < (byte)TVar1;
  }
  return TVar1 == (TType)0xd;
}



/* glslang::TType::isOpaque() const */

undefined8 __thiscall glslang::TType::isOpaque(TType *this)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((byte)this[8] < 0x15) {
    uVar1 = CONCAT71(0x1a60,(0x1a6000UL >> ((ulong)(byte)this[8] & 0x3f) & 1) != 0);
  }
  return uVar1;
}



/* glslang::TType::isParameterized() const */

bool __thiscall glslang::TType::isParameterized(TType *this)

{
  return *(long *)(this + 0x88) != 0;
}



/* TIntermNode::getLoc() const */

TIntermNode * __thiscall TIntermNode::getLoc(TIntermNode *this)

{
  return this + 8;
}



/* glslang::TIntermTyped::getType() const */

TIntermTyped * __thiscall glslang::TIntermTyped::getType(TIntermTyped *this)

{
  return this + 0x20;
}



/* glslang::TIntermTyped::getWritableType() */

TIntermTyped * __thiscall glslang::TIntermTyped::getWritableType(TIntermTyped *this)

{
  return this + 0x20;
}



/* glslang::TIntermTyped::getBasicType() const */

TIntermTyped __thiscall glslang::TIntermTyped::getBasicType(TIntermTyped *this)

{
  return this[0x28];
}



/* glslang::TIntermTyped::getQualifier() */

TIntermTyped * __thiscall glslang::TIntermTyped::getQualifier(TIntermTyped *this)

{
  return this + 0x30;
}



/* glslang::TIntermTyped::getQualifier() const */

TIntermTyped * __thiscall glslang::TIntermTyped::getQualifier(TIntermTyped *this)

{
  return this + 0x30;
}



/* glslang::TIntermTyped::getArraySizes() */

undefined8 __thiscall glslang::TIntermTyped::getArraySizes(TIntermTyped *this)

{
  return *(undefined8 *)(this + 0x80);
}



/* glslang::TIntermTyped::getArraySizes() const */

undefined8 __thiscall glslang::TIntermTyped::getArraySizes(TIntermTyped *this)

{
  return *(undefined8 *)(this + 0x80);
}



/* glslang::TIntermTyped::isArray() const */

bool __thiscall glslang::TIntermTyped::isArray(TIntermTyped *this)

{
  return *(long *)(this + 0x80) != 0;
}



/* glslang::TIntermSymbol::getId() const */

undefined8 __thiscall glslang::TIntermSymbol::getId(TIntermSymbol *this)

{
  return *(undefined8 *)(this + 0xb8);
}



/* glslang::TIntermSymbol::changeId(long long) */

void __thiscall glslang::TIntermSymbol::changeId(TIntermSymbol *this,longlong param_1)

{
  *(longlong *)(this + 0xb8) = param_1;
  return;
}



/* glslang::TIntermSymbol::getName[abi:cxx11]() const */

TIntermSymbol * __thiscall glslang::TIntermSymbol::getName_abi_cxx11_(TIntermSymbol *this)

{
  return this + 200;
}



/* glslang::TIntermBinary::setRight(glslang::TIntermTyped*) */

void __thiscall glslang::TIntermBinary::setRight(TIntermBinary *this,TIntermTyped *param_1)

{
  *(TIntermTyped **)(this + 200) = param_1;
  return;
}



/* glslang::TIntermBinary::getLeft() const */

undefined8 __thiscall glslang::TIntermBinary::getLeft(TIntermBinary *this)

{
  return *(undefined8 *)(this + 0xc0);
}



/* glslang::TIntermBinary::getRight() const */

undefined8 __thiscall glslang::TIntermBinary::getRight(TIntermBinary *this)

{
  return *(undefined8 *)(this + 200);
}



/* glslang::TIntermAggregate::getSequence() */

TIntermAggregate * __thiscall glslang::TIntermAggregate::getSequence(TIntermAggregate *this)

{
  return this + 0xc0;
}



/* glslang::TIntermAggregate::getName[abi:cxx11]() const */

TIntermAggregate * __thiscall glslang::TIntermAggregate::getName_abi_cxx11_(TIntermAggregate *this)

{
  return this + 0x100;
}



/* glslang::TIntermTraverser::~TIntermTraverser() */

void __thiscall glslang::TIntermTraverser::~TIntermTraverser(TIntermTraverser *this)

{
  return;
}



/* glslang::TIntermTraverser::visitSymbol(glslang::TIntermSymbol*) */

void glslang::TIntermTraverser::visitSymbol(TIntermSymbol *param_1)

{
  return;
}



/* glslang::TIntermTraverser::visitConstantUnion(glslang::TIntermConstantUnion*) */

void glslang::TIntermTraverser::visitConstantUnion(TIntermConstantUnion *param_1)

{
  return;
}



/* glslang::TIntermTraverser::visitBinary(glslang::TVisit, glslang::TIntermBinary*) */

undefined8 glslang::TIntermTraverser::visitBinary(void)

{
  return 1;
}



/* glslang::TIntermTraverser::visitUnary(glslang::TVisit, glslang::TIntermUnary*) */

undefined8 glslang::TIntermTraverser::visitUnary(void)

{
  return 1;
}



/* glslang::TIntermTraverser::visitSelection(glslang::TVisit, glslang::TIntermSelection*) */

undefined8 glslang::TIntermTraverser::visitSelection(void)

{
  return 1;
}



/* glslang::TIntermTraverser::visitAggregate(glslang::TVisit, glslang::TIntermAggregate*) */

undefined8 glslang::TIntermTraverser::visitAggregate(void)

{
  return 1;
}



/* glslang::TIntermTraverser::visitLoop(glslang::TVisit, glslang::TIntermLoop*) */

undefined8 glslang::TIntermTraverser::visitLoop(void)

{
  return 1;
}



/* glslang::TIntermTraverser::visitBranch(glslang::TVisit, glslang::TIntermBranch*) */

undefined8 glslang::TIntermTraverser::visitBranch(void)

{
  return 1;
}



/* glslang::TIntermTraverser::visitSwitch(glslang::TVisit, glslang::TIntermSwitch*) */

undefined8 glslang::TIntermTraverser::visitSwitch(void)

{
  return 1;
}



/* glslang::TBuiltInIdTraverser::~TBuiltInIdTraverser() */

void __thiscall glslang::TBuiltInIdTraverser::~TBuiltInIdTraverser(TBuiltInIdTraverser *this)

{
  return;
}



/* glslang::TUserIdTraverser::~TUserIdTraverser() */

void __thiscall glslang::TUserIdTraverser::~TUserIdTraverser(TUserIdTraverser *this)

{
  return;
}



/* glslang::TRemapIdTraverser::~TRemapIdTraverser() */

void __thiscall glslang::TRemapIdTraverser::~TRemapIdTraverser(TRemapIdTraverser *this)

{
  return;
}



/* glslang::TType::isBuiltIn() const */

bool __thiscall glslang::TType::isBuiltIn(TType *this)

{
  long lVar1;
  
  if (*(code **)(*(long *)this + 0x58) == getQualifier) {
    return 0x7f < *(ushort *)(this + 0x18);
  }
  lVar1 = (**(code **)(*(long *)this + 0x58))();
  return 0x7f < *(ushort *)(lVar1 + 8);
}



/* glslang::TType::isAttachmentEXT() const */

bool __thiscall glslang::TType::isAttachmentEXT(TType *this)

{
  long lVar1;
  
  if (this[8] != (TType)0xe) {
    return false;
  }
  if (*(code **)(*(long *)this + 0x40) == getSampler) {
    return this[0x81] == (TType)0x8;
  }
  lVar1 = (**(code **)(*(long *)this + 0x40))();
  return *(char *)(lVar1 + 1) == '\b';
}



/* glslang::TType::isImage() const */

undefined4 __thiscall glslang::TType::isImage(TType *this)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (this[8] == (TType)0xe) {
    if (*(code **)(*(long *)this + 0x40) != getSampler) {
      lVar3 = (**(code **)(*(long *)this + 0x40))();
      uVar2 = 0;
      if ((*(byte *)(lVar3 + 2) & 8) != 0) {
        iVar1 = *(byte *)(lVar3 + 1) - 7;
        uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1 < (byte)iVar1);
      }
      return uVar2;
    }
    if (((byte)this[0x82] & 8) != 0) {
      return CONCAT31((int3)((byte)this[0x81] - 7 >> 8),1 < (byte)((byte)this[0x81] - 7));
    }
  }
  return 0;
}



/* glslang::TType::isSubpass() const */

bool __thiscall glslang::TType::isSubpass(TType *this)

{
  long lVar1;
  
  if (this[8] != (TType)0xe) {
    return false;
  }
  if (*(code **)(*(long *)this + 0x40) == getSampler) {
    return this[0x81] == (TType)0x7;
  }
  lVar1 = (**(code **)(*(long *)this + 0x40))();
  return *(char *)(lVar1 + 1) == '\a';
}



/* glslang::TType::isTexture() const */

byte __thiscall glslang::TType::isTexture(TType *this)

{
  byte bVar1;
  long lVar2;
  
  if (this[8] == (TType)0xe) {
    if (*(code **)(*(long *)this + 0x40) != getSampler) {
      lVar2 = (**(code **)(*(long *)this + 0x40))();
      if ((*(byte *)(lVar2 + 2) & 0x20) == 0) {
        bVar1 = *(byte *)(lVar2 + 2) >> 3 & 1 ^ 1;
      }
      else {
        bVar1 = 0;
      }
      return bVar1;
    }
    if (((byte)this[0x82] & 0x20) == 0) {
      return (byte)this[0x82] >> 3 & 1 ^ 1;
    }
  }
  return 0;
}



/* glslang::TType::isSizedArray() const */

undefined4 __thiscall glslang::TType::isSizedArray(TType *this)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  if (*(code **)(*(long *)this + 0xe8) == isArray) {
    if (*(long *)(this + 0x60) == 0) {
      return 0;
    }
    iVar1 = **(int **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0xe8))();
    if (cVar3 == '\0') {
      return 0;
    }
    iVar1 = **(int **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
  }
  return uVar2;
}



/* glslang::TType::isUnsizedArray() const */

undefined4 __thiscall glslang::TType::isUnsizedArray(TType *this)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  if (*(code **)(*(long *)this + 0xe8) == isArray) {
    if (*(long *)(this + 0x60) == 0) {
      return 0;
    }
    iVar1 = **(int **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0xe8))();
    if (cVar3 == '\0') {
      return 0;
    }
    iVar1 = **(int **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
  }
  return uVar2;
}



/* glslang::TType::isImplicitlySizedArray() const */

undefined1 __thiscall glslang::TType::isImplicitlySizedArray(TType *this)

{
  undefined1 uVar1;
  char cVar2;
  
  if (*(code **)(*(long *)this + 0xe8) == isArray) {
    if (*(long *)(this + 0x60) == 0) {
      return 0;
    }
    uVar1 = *(undefined1 *)(*(long *)(this + 0x60) + 0x14);
  }
  else {
    cVar2 = (**(code **)(*(long *)this + 0xe8))();
    if (cVar2 == '\0') {
      return 0;
    }
    uVar1 = *(undefined1 *)(*(long *)(this + 0x60) + 0x14);
  }
  return uVar1;
}



/* glslang::TType::isScalarOrVector() const */

uint __thiscall glslang::TType::isScalarOrVector(TType *this)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)this;
  if (*(code **)(lVar3 + 0xe0) == isMatrix) {
    if (0xf < (byte)this[9]) {
      return 0;
    }
  }
  else {
    cVar1 = (**(code **)(lVar3 + 0xe0))();
    if (cVar1 != '\0') {
      return 0;
    }
    lVar3 = *(long *)this;
  }
  if (*(code **)(lVar3 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
      return 0;
    }
  }
  else {
    cVar1 = (**(code **)(lVar3 + 0x128))(this);
    if (cVar1 != '\0') {
      return 0;
    }
    lVar3 = *(long *)this;
  }
  if (*(code **)(lVar3 + 0xe8) == isArray) {
    uVar2 = (uint)CONCAT71(0x1117,*(long *)(this + 0x60) != 0);
  }
  else {
    uVar2 = (**(code **)(lVar3 + 0xe8))(this);
  }
  return uVar2 ^ 1;
}



/* glslang::TType::isUnusableName() const */

bool __thiscall glslang::TType::isUnusableName(TType *this)

{
  char cVar1;
  
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if (1 < (byte)((char)this[8] - 0xfU)) {
      return false;
    }
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x128))();
    if (cVar1 == '\0') {
      return false;
    }
  }
  return *(long *)(this + 0x68) == 0;
}



/* glslang::TType::isScalar() const */

uint __thiscall glslang::TType::isScalar(TType *this)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  
  if (*(code **)(*(long *)this + 0xd8) == isVector) {
    if (1 < ((byte)this[9] & 0xf)) {
      return 0;
    }
    bVar1 = (byte)this[10] >> 4 & 1;
  }
  else {
    bVar1 = (**(code **)(*(long *)this + 0xd8))();
  }
  if (bVar1 == 0) {
    lVar4 = *(long *)this;
    if (*(code **)(lVar4 + 0xe0) == isMatrix) {
      if (0xf < (byte)this[9]) {
        return 0;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0xe0))(this);
      if (cVar2 != '\0') {
        return 0;
      }
      lVar4 = *(long *)this;
    }
    if (*(code **)(lVar4 + 0x128) == isStruct) {
      if (1 < (byte)((char)this[8] - 0xfU)) {
LAB_00111e81:
        if (*(code **)(lVar4 + 0xe8) == isArray) {
          uVar3 = (uint)CONCAT71(0x1117,*(long *)(this + 0x60) != 0);
        }
        else {
          uVar3 = (**(code **)(lVar4 + 0xe8))(this);
        }
        return uVar3 ^ 1;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0x128))(this);
      if (cVar2 == '\0') {
        lVar4 = *(long *)this;
        goto LAB_00111e81;
      }
    }
  }
  return 0;
}



/* glslang::TType::isBindlessTexture() const */

TType __thiscall glslang::TType::isBindlessTexture(TType *this)

{
  code *pcVar1;
  char cVar2;
  TType *pTVar3;
  
  pcVar1 = *(code **)(*(long *)this + 0x168);
  if (pcVar1 == isTexture) {
    if (this[8] == (TType)0xe) {
      pcVar1 = *(code **)(*(long *)this + 0x40);
      if (pcVar1 == getSampler) {
        pTVar3 = this + 0x80;
      }
      else {
        pTVar3 = (TType *)(*pcVar1)();
      }
      if ((((byte)pTVar3[2] & 0x20) == 0) && (((byte)pTVar3[2] & 8) == 0)) {
        return this[0x58];
      }
    }
  }
  else {
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return this[0x58];
    }
  }
  return (TType)0x0;
}



/* glslang::TType::isBindlessImage() const */

TType __thiscall glslang::TType::isBindlessImage(TType *this)

{
  code *pcVar1;
  char cVar2;
  TType *pTVar3;
  
  pcVar1 = *(code **)(*(long *)this + 0x158);
  if (pcVar1 == isImage) {
    if (this[8] == (TType)0xe) {
      pcVar1 = *(code **)(*(long *)this + 0x40);
      if (pcVar1 == getSampler) {
        pTVar3 = this + 0x80;
      }
      else {
        pTVar3 = (TType *)(*pcVar1)();
      }
      if ((((byte)pTVar3[2] & 8) != 0) && (1 < (byte)((char)pTVar3[1] - 7U))) {
        return this[0x59];
      }
    }
  }
  else {
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return this[0x59];
    }
  }
  return (TType)0x0;
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TType::setFieldName(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */

void __thiscall glslang::TType::setFieldName(TType *this,basic_string *param_1)

{
  char *__s;
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  size_t sVar4;
  
  __s = *(char **)(param_1 + 8);
  uVar1 = glslang::GetThreadPoolAllocator();
  puVar2 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar1);
  uVar3 = glslang::GetThreadPoolAllocator();
  *puVar2 = uVar3;
  puVar2[1] = puVar2 + 3;
  if (__s != (char *)0x0) {
    sVar4 = strlen(__s);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
    _M_construct<char_const*>(puVar2,__s,__s + sVar4);
    *(undefined8 **)(this + 0x70) = puVar2;
    return;
  }
  std::__throw_logic_error("basic_string: construction from null is not valid");
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* glslang::TType::isScalarOrVec1() const */

byte __thiscall glslang::TType::isScalarOrVec1(TType *this)

{
  TType TVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  
  pcVar2 = *(code **)(*(long *)this + 0xc0);
  if (pcVar2 == isScalar) {
    pcVar2 = *(code **)(*(long *)this + 0xd8);
    if (pcVar2 == isVector) {
      TVar1 = this[10];
      bVar3 = (byte)TVar1 >> 4 & 1;
      if (1 < ((byte)this[9] & 0xf)) goto LAB_00112383;
    }
    else {
      bVar3 = (*pcVar2)();
    }
    if (bVar3 == 0) {
      lVar5 = *(long *)this;
      if (*(code **)(lVar5 + 0xe0) == isMatrix) {
        if ((byte)this[9] < 0x10) {
LAB_001123ac:
          if (*(code **)(lVar5 + 0x128) == isStruct) {
            if (1 < (byte)((char)this[8] - 0xfU)) {
LAB_001123cb:
              if (*(code **)(lVar5 + 0xe8) == isArray) {
                if (*(long *)(this + 0x60) == 0) {
                  return 1;
                }
              }
              else {
                cVar4 = (**(code **)(lVar5 + 0xe8))(this);
                if (cVar4 == '\0') {
                  return 1;
                }
              }
            }
          }
          else {
            cVar4 = (**(code **)(lVar5 + 0x128))(this);
            if (cVar4 == '\0') {
              lVar5 = *(long *)this;
              goto LAB_001123cb;
            }
          }
        }
      }
      else {
        cVar4 = (**(code **)(lVar5 + 0xe0))(this);
        if (cVar4 == '\0') {
          lVar5 = *(long *)this;
          goto LAB_001123ac;
        }
      }
    }
  }
  else {
    cVar4 = (*pcVar2)();
    if (cVar4 != '\0') {
      return 1;
    }
  }
  TVar1 = this[10];
LAB_00112383:
  return (byte)TVar1 >> 4 & 1;
}



/* glslang::TRemapIdTraverser::visitSymbol(glslang::TIntermSymbol*) */

void __thiscall
glslang::TRemapIdTraverser::visitSymbol(TRemapIdTraverser *this,TIntermSymbol *param_1)

{
  long *plVar1;
  void *__s2;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  TIntermSymbol *pTVar10;
  long lVar11;
  long local_40;
  
  if (*(code **)(*(long *)param_1 + 0xf0) == TIntermTyped::getType) {
    pTVar10 = param_1 + 0x20;
  }
  else {
    pTVar10 = (TIntermSymbol *)(**(code **)(*(long *)param_1 + 0xf0))(param_1);
  }
  if (*(code **)(*(long *)pTVar10 + 0x58) == TType::getQualifier) {
    pTVar10 = pTVar10 + 0x10;
  }
  else {
    pTVar10 = (TIntermSymbol *)(**(code **)(*(long *)pTVar10 + 0x58))();
  }
  if (((((byte)pTVar10[8] & 0x7f) == 1) || ((((byte)pTVar10[8] & 0x7f) + 0x7d & 0x7f) < 5)) ||
     (0x7f < *(ushort *)(pTVar10 + 8))) {
    if (*(code **)(*(long *)param_1 + 0xf0) == TIntermTyped::getType) {
      pTVar10 = param_1 + 0x20;
    }
    else {
      pTVar10 = (TIntermSymbol *)(**(code **)(*(long *)param_1 + 0xf0))(param_1);
    }
    if ((pTVar10[8] == (TIntermSymbol)0x10) && (bVar3 = ((byte)pTVar10[0x18] & 0x7f) - 3, bVar3 < 4)
       ) {
      uVar9 = (ulong)*(uint *)(CSWTCH_1270 + (ulong)bVar3 * 4);
      lVar11 = uVar9 * 8;
      local_40 = uVar9 * 0x38;
      lVar8 = local_40 + 0x10;
    }
    else {
      local_40 = 0xa8;
      lVar8 = 0xb8;
      uVar9 = 3;
      lVar11 = 0x18;
    }
    lVar6 = *(long *)(this + 0x38);
    lVar5 = getNameForIdMap(param_1);
    lVar11 = *(long *)(lVar6 + 0x18 + (lVar11 - uVar9) * 8);
    lVar8 = lVar8 + lVar6;
    lVar6 = lVar8;
    if (lVar11 != 0) {
      __s2 = *(void **)(lVar5 + 8);
      uVar9 = *(ulong *)(lVar5 + 0x10);
      lVar5 = lVar8;
      do {
        while( true ) {
          uVar2 = *(ulong *)(lVar11 + 0x30);
          uVar7 = uVar9;
          if (uVar2 <= uVar9) {
            uVar7 = uVar2;
          }
          if ((uVar7 != 0) && (iVar4 = memcmp(*(void **)(lVar11 + 0x28),__s2,uVar7), iVar4 != 0))
          break;
          lVar6 = uVar2 - uVar9;
          if (lVar6 < 0x80000000) {
            if (-0x80000001 < lVar6) {
              iVar4 = (int)lVar6;
              break;
            }
            goto LAB_00112550;
          }
LAB_001125a1:
          plVar1 = (long *)(lVar11 + 0x10);
          lVar5 = lVar11;
          lVar11 = *plVar1;
          if (*plVar1 == 0) goto LAB_001125ad;
        }
        if (-1 < iVar4) goto LAB_001125a1;
LAB_00112550:
        lVar11 = *(long *)(lVar11 + 0x18);
      } while (lVar11 != 0);
LAB_001125ad:
      lVar6 = lVar5;
      if (lVar8 != lVar5) {
        uVar2 = *(ulong *)(lVar5 + 0x30);
        uVar7 = uVar9;
        if (uVar2 <= uVar9) {
          uVar7 = uVar2;
        }
        if ((uVar7 == 0) || (iVar4 = memcmp(__s2,*(void **)(lVar5 + 0x28),uVar7), iVar4 == 0)) {
          lVar11 = uVar9 - uVar2;
          if ((0x7fffffff < lVar11) || (lVar6 = lVar8, lVar11 < -0x80000000)) goto LAB_001125e7;
          iVar4 = (int)lVar11;
        }
        lVar6 = lVar5;
        if (iVar4 < 0) {
          lVar6 = lVar8;
        }
      }
    }
LAB_001125e7:
    lVar8 = *(long *)param_1;
    if (lVar6 != local_40 + *(long *)(this + 0x38) + 0x10) {
      if (*(code **)(lVar8 + 0x180) == TIntermSymbol::getId) {
        uVar9 = *(ulong *)(param_1 + 0xb8);
      }
      else {
        uVar9 = (**(code **)(lVar8 + 0x180))(param_1);
        lVar8 = *(long *)param_1;
      }
      uVar9 = *(ulong *)(lVar6 + 0x48) & 0xffffffffffffff | uVar9 & 0xff00000000000000;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 0x188);
      if (UNRECOVERED_JUMPTABLE == TIntermSymbol::changeId) goto LAB_001126dc;
      goto LAB_0011265e;
    }
  }
  else {
    lVar8 = *(long *)param_1;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 0x188);
  if (*(code **)(lVar8 + 0x180) == TIntermSymbol::getId) {
    lVar8 = *(long *)(param_1 + 0xb8);
  }
  else {
    lVar8 = (**(code **)(lVar8 + 0x180))(param_1);
  }
  uVar9 = lVar8 + *(long *)(this + 0x40);
  if (UNRECOVERED_JUMPTABLE == TIntermSymbol::changeId) {
LAB_001126dc:
    *(ulong *)(param_1 + 0xb8) = uVar9;
    return;
  }
LAB_0011265e:
                    /* WARNING: Could not recover jumptable at 0x0011266c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
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

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = (long)param_2 - (long)param_1;
  if (0 < lVar5 >> 7) {
    plVar6 = param_1 + (lVar5 >> 7) * 0x10;
    do {
      plVar2 = (long *)*param_1;
      bVar1 = *(byte *)(plVar2 + 1);
      if (bVar1 < 0xd) {
        return param_1;
      }
      if (bVar1 == 0x12) {
        return param_1;
      }
      if (*(code **)(*plVar2 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(bVar1 - 0xf) < 2) {
LAB_0011291d:
          lVar5 = *(long *)(plVar2[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar2[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
            return param_1;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x128))(plVar2);
        if (cVar3 != '\0') goto LAB_0011291d;
      }
      plVar2 = (long *)param_1[4];
      bVar1 = *(byte *)(plVar2 + 1);
      if ((bVar1 < 0xd) || (bVar1 == 0x12)) goto LAB_0011281f;
      if (*(code **)(*plVar2 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(bVar1 - 0xf) < 2) {
LAB_0011295d:
          lVar5 = *(long *)(plVar2[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar2[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_0011281f:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x128))(plVar2);
        if (cVar3 != '\0') goto LAB_0011295d;
      }
      plVar2 = (long *)param_1[8];
      bVar1 = *(byte *)(plVar2 + 1);
      if ((bVar1 < 0xd) || (bVar1 == 0x12)) goto LAB_0011285f;
      if (*(code **)(*plVar2 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(bVar1 - 0xf) < 2) {
LAB_0011298d:
          lVar5 = *(long *)(plVar2[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar2[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_0011285f:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x128))(plVar2);
        if (cVar3 != '\0') goto LAB_0011298d;
      }
      plVar2 = (long *)param_1[0xc];
      bVar1 = *(byte *)(plVar2 + 1);
      if ((bVar1 < 0xd) || (bVar1 == 0x12)) goto LAB_0011289f;
      if (*(code **)(*plVar2 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(bVar1 - 0xf) < 2) {
LAB_001129bd:
          lVar5 = *(long *)(plVar2[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar2[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_0011289f:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x128))(plVar2);
        if (cVar3 != '\0') goto LAB_001129bd;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar6);
    lVar5 = (long)param_2 - (long)param_1;
  }
  lVar5 = lVar5 >> 5;
  if (lVar5 != 2) {
    if (lVar5 != 3) {
      if (lVar5 != 1) {
        return param_2;
      }
      goto LAB_00112a59;
    }
    plVar6 = (long *)*param_1;
    bVar1 = *(byte *)(plVar6 + 1);
    if (bVar1 < 0xd) {
      return param_1;
    }
    if (bVar1 == 0x12) {
      return param_1;
    }
    if (*(code **)(*plVar6 + 0x128) == glslang::TType::isStruct) {
      if ((byte)(bVar1 - 0xf) < 2) {
LAB_00112afb:
        lVar5 = *(long *)(plVar6[0xd] + 0x10);
        lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar6[0xd] + 8),lVar5);
        if (lVar5 != lVar4) {
          return param_1;
        }
      }
    }
    else {
      cVar3 = (**(code **)(*plVar6 + 0x128))(plVar6);
      if (cVar3 != '\0') goto LAB_00112afb;
    }
    param_1 = param_1 + 4;
  }
  plVar6 = (long *)*param_1;
  bVar1 = *(byte *)(plVar6 + 1);
  if (bVar1 < 0xd) {
    return param_1;
  }
  if (bVar1 == 0x12) {
    return param_1;
  }
  if (*(code **)(*plVar6 + 0x128) == glslang::TType::isStruct) {
    if ((byte)(bVar1 - 0xf) < 2) {
LAB_00112abd:
      lVar5 = *(long *)(plVar6[0xd] + 0x10);
      lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(plVar6[0xd] + 8),lVar5);
      if (lVar5 != lVar4) {
        return param_1;
      }
    }
  }
  else {
    cVar3 = (**(code **)(*plVar6 + 0x128))(plVar6);
    if (cVar3 != '\0') goto LAB_00112abd;
  }
  param_1 = param_1 + 4;
LAB_00112a59:
  plVar6 = (long *)*param_1;
  bVar1 = *(byte *)(plVar6 + 1);
  if (bVar1 < 0xd) {
    return param_1;
  }
  if (bVar1 == 0x12) {
    return param_1;
  }
  if (*(code **)(*plVar6 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)(bVar1 - 0xf)) {
      return param_2;
    }
  }
  else {
    cVar3 = (**(code **)(*plVar6 + 0x128))(plVar6);
    if (cVar3 == '\0') {
      return param_2;
    }
  }
  lVar5 = *(long *)(plVar6[0xd] + 0x10);
  lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar6[0xd] + 8),lVar5);
  if (lVar5 == lVar4) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsNonOpaque() const */

ulong __thiscall glslang::TType::containsNonOpaque(TType *this)

{
  TType TVar1;
  long lVar2;
  char cVar3;
  undefined1 auVar4 [16];
  
  TVar1 = this[8];
  if (((byte)TVar1 < 0xd) || (TVar1 == (TType)0x12)) {
    return 1;
  }
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if ((byte)((char)TVar1 - 0xfU) < 2) {
LAB_00112b80:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      auVar4 = std::
               __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                         (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return CONCAT71(auVar4._9_7_,lVar2 != auVar4._0_8_) & 0xffffffff;
    }
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0x128))();
    if (cVar3 != '\0') goto LAB_00112b80;
  }
  return 0;
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

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (0 < lVar4 >> 7) {
    plVar5 = param_1 + (lVar4 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      if (*(byte *)(plVar1 + 1) == param_3) {
        return param_1;
      }
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(*(byte *)(plVar1 + 1) - 0xf) < 2) {
LAB_00112ced:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4,param_3);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00112ced;
      }
      plVar1 = (long *)param_1[4];
      if (*(byte *)(plVar1 + 1) == param_3) goto LAB_00112d3c;
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(*(byte *)(plVar1 + 1) - 0xf) < 2) {
LAB_00112d1d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4,param_3);
          if (lVar4 != lVar3) {
LAB_00112d3c:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00112d1d;
      }
      plVar1 = (long *)param_1[8];
      if (*(byte *)(plVar1 + 1) == param_3) goto LAB_00112d74;
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(*(byte *)(plVar1 + 1) - 0xf) < 2) {
LAB_00112d55:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4,param_3);
          if (lVar4 != lVar3) {
LAB_00112d74:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00112d55;
      }
      plVar1 = (long *)param_1[0xc];
      if (*(byte *)(plVar1 + 1) == param_3) goto LAB_00112dac;
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(*(byte *)(plVar1 + 1) - 0xf) < 2) {
LAB_00112d8d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4,param_3);
          if (lVar4 != lVar3) {
LAB_00112dac:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00112d8d;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar5);
    lVar4 = (long)param_2 - (long)param_1;
  }
  lVar4 = lVar4 >> 5;
  if (lVar4 != 2) {
    if (lVar4 != 3) {
      if (lVar4 != 1) {
        return param_2;
      }
      goto LAB_00112e4e;
    }
    plVar5 = (long *)*param_1;
    if (*(byte *)(plVar5 + 1) == param_3) {
      return param_1;
    }
    if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
      if ((byte)(*(byte *)(plVar5 + 1) - 0xf) < 2) {
LAB_00112ef2:
        lVar4 = *(long *)(plVar5[0xd] + 0x10);
        lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar5[0xd] + 8),lVar4,param_3);
        if (lVar4 != lVar3) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
      if (cVar2 != '\0') goto LAB_00112ef2;
    }
    param_1 = param_1 + 4;
  }
  plVar5 = (long *)*param_1;
  if (*(byte *)(plVar5 + 1) == param_3) {
    return param_1;
  }
  if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
    if ((byte)(*(byte *)(plVar5 + 1) - 0xf) < 2) {
LAB_00112eb1:
      lVar4 = *(long *)(plVar5[0xd] + 0x10);
      lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(plVar5[0xd] + 8),lVar4,param_3);
      if (lVar4 != lVar3) {
        return param_1;
      }
    }
  }
  else {
    cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
    if (cVar2 != '\0') goto LAB_00112eb1;
  }
  param_1 = param_1 + 4;
LAB_00112e4e:
  plVar5 = (long *)*param_1;
  if (param_3 == *(byte *)(plVar5 + 1)) {
    return param_1;
  }
  if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)(*(byte *)(plVar5 + 1) - 0xf)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar4 = *(long *)(plVar5[0xd] + 0x10);
  lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar5[0xd] + 8),lVar4,param_3);
  if (lVar4 == lVar3) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsBasicType(glslang::TBasicType) const */

ulong __thiscall glslang::TType::containsBasicType(TType *this,uint param_2)

{
  long lVar1;
  char cVar2;
  undefined1 auVar3 [16];
  
  if ((byte)this[8] == param_2) {
    return 1;
  }
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00112f76:
      lVar1 = *(long *)(*(long *)(this + 0x68) + 0x10);
      auVar3 = std::
               __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                         (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar1,param_2);
      return CONCAT71(auVar3._9_7_,lVar1 != auVar3._0_8_) & 0xffffffff;
    }
  }
  else {
    cVar2 = (**(code **)(*(long *)this + 0x128))();
    if (cVar2 != '\0') goto LAB_00112f76;
  }
  return 0;
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

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (0 < lVar4 >> 7) {
    plVar5 = param_1 + (lVar4 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        if (plVar1[0xc] != 0) {
          return param_1;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          return param_1;
        }
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_001131ed:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_001131ed;
      }
      plVar1 = (long *)param_1[4];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        if (plVar1[0xc] != 0) goto LAB_00113163;
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') goto LAB_00113163;
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00113145:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_00113163:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00113145;
      }
      plVar1 = (long *)param_1[8];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        if (plVar1[0xc] != 0) goto LAB_0011319b;
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') goto LAB_0011319b;
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0011317d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_0011319b:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0011317d;
      }
      plVar1 = (long *)param_1[0xc];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        if (plVar1[0xc] != 0) goto LAB_001131d3;
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') goto LAB_001131d3;
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_001131b5:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_001131d3:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_001131b5;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar5);
    lVar4 = (long)param_2 - (long)param_1;
  }
  lVar4 = lVar4 >> 5;
  if (lVar4 != 2) {
    if (lVar4 != 3) {
      if (lVar4 != 1) {
        return param_2;
      }
      goto LAB_001132be;
    }
    plVar5 = (long *)*param_1;
    lVar4 = *plVar5;
    if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
      if (plVar5[0xc] != 0) {
        return param_1;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
      if (cVar2 != '\0') {
        return param_1;
      }
      lVar4 = *plVar5;
    }
    if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
      if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_0011345c:
        lVar4 = *(long *)(plVar5[0xd] + 0x10);
        lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
        if (lVar4 != lVar3) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
      if (cVar2 != '\0') goto LAB_0011345c;
    }
    param_1 = param_1 + 4;
  }
  plVar5 = (long *)*param_1;
  lVar4 = *plVar5;
  if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
    if (plVar5[0xc] != 0) {
      return param_1;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
    if (cVar2 != '\0') {
      return param_1;
    }
    lVar4 = *plVar5;
  }
  if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
    if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_00113403:
      lVar4 = *(long *)(plVar5[0xd] + 0x10);
      lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
      if (lVar4 != lVar3) {
        return param_1;
      }
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
    if (cVar2 != '\0') goto LAB_00113403;
  }
  param_1 = param_1 + 4;
LAB_001132be:
  plVar5 = (long *)*param_1;
  lVar4 = *plVar5;
  if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
    if (plVar5[0xc] != 0) {
      return param_1;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
    if (cVar2 != '\0') {
      return param_1;
    }
    lVar4 = *plVar5;
  }
  if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)((char)plVar5[1] - 0xfU)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar4 = *(long *)(plVar5[0xd] + 0x10);
  lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
  if (lVar4 == lVar3) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsArray() const */

bool __thiscall glslang::TType::containsArray(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0xe8) == isArray) {
    if (*(long *)(this + 0x60) != 0) {
      return true;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0xe8))();
    if (cVar1 != '\0') {
      return true;
    }
    lVar2 = *(long *)this;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_001134d9:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_001134d9;
  }
  return false;
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
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  code *pcVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  lVar6 = (long)param_2 - (long)param_1;
  if (0 < lVar6 >> 7) {
    plVar7 = param_1 + (lVar6 >> 7) * 0x10;
    do {
      plVar5 = (long *)*param_1;
      pcVar1 = *(code **)(*plVar5 + 0x148);
      if (pcVar1 == glslang::TType::isBuiltIn) {
        pcVar1 = *(code **)(*plVar5 + 0x58);
        if (pcVar1 == glslang::TType::getQualifier) {
          plVar3 = plVar5 + 2;
        }
        else {
          plVar3 = (long *)(*pcVar1)(plVar5);
        }
        if (0x7f < *(ushort *)(plVar3 + 1)) {
          return param_1;
        }
      }
      else {
        cVar2 = (*pcVar1)(plVar5);
        if (cVar2 != '\0') {
          return param_1;
        }
      }
      if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_00113785:
          lVar6 = *(long *)(plVar5[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar5[0xd] + 8),lVar6);
          if (lVar6 != lVar4) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
        if (cVar2 != '\0') goto LAB_00113785;
      }
      plVar5 = (long *)param_1[4];
      pcVar1 = *(code **)(*plVar5 + 0x148);
      if (pcVar1 == glslang::TType::isBuiltIn) {
        pcVar1 = *(code **)(*plVar5 + 0x58);
        if (pcVar1 == glslang::TType::getQualifier) {
          plVar3 = plVar5 + 2;
        }
        else {
          plVar3 = (long *)(*pcVar1)(plVar5);
        }
        if (0x7f < *(ushort *)(plVar3 + 1)) goto LAB_0011370a;
      }
      else {
        cVar2 = (*pcVar1)(plVar5);
        if (cVar2 != '\0') {
          return param_1 + 4;
        }
      }
      if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_001136ed:
          lVar6 = *(long *)(plVar5[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar5[0xd] + 8),lVar6);
          if (lVar6 != lVar4) {
LAB_0011370a:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
        if (cVar2 != '\0') goto LAB_001136ed;
      }
      plVar5 = (long *)param_1[8];
      pcVar1 = *(code **)(*plVar5 + 0x148);
      if (pcVar1 == glslang::TType::isBuiltIn) {
        pcVar1 = *(code **)(*plVar5 + 0x58);
        if (pcVar1 == glslang::TType::getQualifier) {
          plVar3 = plVar5 + 2;
        }
        else {
          plVar3 = (long *)(*pcVar1)(plVar5);
        }
        if (0x7f < *(ushort *)(plVar3 + 1)) goto LAB_0011373a;
      }
      else {
        cVar2 = (*pcVar1)(plVar5);
        if (cVar2 != '\0') {
          return param_1 + 8;
        }
      }
      if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_0011371d:
          lVar6 = *(long *)(plVar5[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar5[0xd] + 8),lVar6);
          if (lVar6 != lVar4) {
LAB_0011373a:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
        if (cVar2 != '\0') goto LAB_0011371d;
      }
      plVar5 = (long *)param_1[0xc];
      pcVar1 = *(code **)(*plVar5 + 0x148);
      if (pcVar1 == glslang::TType::isBuiltIn) {
        pcVar1 = *(code **)(*plVar5 + 0x58);
        if (pcVar1 == glslang::TType::getQualifier) {
          plVar3 = plVar5 + 2;
        }
        else {
          plVar3 = (long *)(*pcVar1)(plVar5);
        }
        if (0x7f < *(ushort *)(plVar3 + 1)) goto LAB_0011376a;
      }
      else {
        cVar2 = (*pcVar1)(plVar5);
        if (cVar2 != '\0') {
          return param_1 + 0xc;
        }
      }
      if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_0011374d:
          lVar6 = *(long *)(plVar5[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar5[0xd] + 8),lVar6);
          if (lVar6 != lVar4) {
LAB_0011376a:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
        if (cVar2 != '\0') goto LAB_0011374d;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar7);
    lVar6 = (long)param_2 - (long)param_1;
  }
  lVar6 = lVar6 >> 5;
  if (lVar6 != 2) {
    if (lVar6 != 3) {
      if (lVar6 != 1) {
        return param_2;
      }
      goto LAB_00113898;
    }
    plVar7 = (long *)*param_1;
    pcVar1 = *(code **)(*plVar7 + 0x148);
    if (pcVar1 == glslang::TType::isBuiltIn) {
      pcVar1 = *(code **)(*plVar7 + 0x58);
      if (pcVar1 == glslang::TType::getQualifier) {
        plVar5 = plVar7 + 2;
      }
      else {
        plVar5 = (long *)(*pcVar1)(plVar7);
      }
      if (0x7f < *(ushort *)(plVar5 + 1)) {
        return param_1;
      }
    }
    else {
      cVar2 = (*pcVar1)(plVar7);
      if (cVar2 != '\0') {
        return param_1;
      }
    }
    if (*(code **)(*plVar7 + 0x128) == glslang::TType::isStruct) {
      if ((byte)((char)plVar7[1] - 0xfU) < 2) {
LAB_00113a96:
        lVar6 = *(long *)(plVar7[0xd] + 0x10);
        lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar7[0xd] + 8),lVar6);
        if (lVar6 != lVar4) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(*plVar7 + 0x128))(plVar7);
      if (cVar2 != '\0') goto LAB_00113a96;
    }
    param_1 = param_1 + 4;
  }
  plVar7 = (long *)*param_1;
  pcVar1 = *(code **)(*plVar7 + 0x148);
  if (pcVar1 == glslang::TType::isBuiltIn) {
    pcVar1 = *(code **)(*plVar7 + 0x58);
    if (pcVar1 == glslang::TType::getQualifier) {
      plVar5 = plVar7 + 2;
    }
    else {
      plVar5 = (long *)(*pcVar1)(plVar7);
    }
    if (0x7f < *(ushort *)(plVar5 + 1)) {
      return param_1;
    }
  }
  else {
    cVar2 = (*pcVar1)(plVar7);
    if (cVar2 != '\0') {
      return param_1;
    }
  }
  if (*(code **)(*plVar7 + 0x128) == glslang::TType::isStruct) {
    if ((byte)((char)plVar7[1] - 0xfU) < 2) {
LAB_00113a1f:
      lVar6 = *(long *)(plVar7[0xd] + 0x10);
      lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(plVar7[0xd] + 8),lVar6);
      if (lVar6 != lVar4) {
        return param_1;
      }
    }
  }
  else {
    cVar2 = (**(code **)(*plVar7 + 0x128))(plVar7);
    if (cVar2 != '\0') goto LAB_00113a1f;
  }
  param_1 = param_1 + 4;
LAB_00113898:
  plVar7 = (long *)*param_1;
  pcVar1 = *(code **)(*plVar7 + 0x148);
  if (pcVar1 == glslang::TType::isBuiltIn) {
    pcVar1 = *(code **)(*plVar7 + 0x58);
    if (pcVar1 == glslang::TType::getQualifier) {
      plVar5 = plVar7 + 2;
    }
    else {
      plVar5 = (long *)(*pcVar1)(plVar7);
    }
    if (0x7f < *(ushort *)(plVar5 + 1)) {
      return param_1;
    }
  }
  else {
    cVar2 = (*pcVar1)(plVar7);
    if (cVar2 != '\0') {
      return param_1;
    }
  }
  if (*(code **)(*plVar7 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)((char)plVar7[1] - 0xfU)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(*plVar7 + 0x128))(plVar7);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar6 = *(long *)(plVar7[0xd] + 0x10);
  lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar7[0xd] + 8),lVar6);
  if (lVar6 == lVar4) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsBuiltIn() const */

bool __thiscall glslang::TType::containsBuiltIn(TType *this)

{
  code *pcVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  TType *pTVar5;
  
  pcVar1 = *(code **)(*(long *)this + 0x148);
  if (pcVar1 == isBuiltIn) {
    pcVar1 = *(code **)(*(long *)this + 0x58);
    if (pcVar1 == getQualifier) {
      pTVar5 = this + 0x10;
    }
    else {
      pTVar5 = (TType *)(*pcVar1)();
    }
    if (0x7f < *(ushort *)(pTVar5 + 8)) {
      return true;
    }
  }
  else {
    cVar3 = (*pcVar1)();
    if (cVar3 != '\0') {
      return true;
    }
  }
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00113b39:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar4 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar4;
    }
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0x128))(this);
    if (cVar3 != '\0') goto LAB_00113b39;
  }
  return false;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
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
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (0 < lVar4 >> 7) {
    plVar5 = param_1 + (lVar4 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_00113bd8:
          if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) {
            return param_1;
          }
          goto LAB_00113c00;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar3 = plVar1[0xc];
          goto LAB_00113bd8;
        }
LAB_00113c00:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00113e1d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00113e1d;
      }
      plVar1 = (long *)param_1[4];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_00113c44:
          if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) goto LAB_00113c53;
          goto LAB_00113c60;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar3 = plVar1[0xc];
          goto LAB_00113c44;
        }
LAB_00113c60:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00113e4d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_00113c53:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00113e4d;
      }
      plVar1 = (long *)param_1[8];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_00113ca4:
          if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) goto LAB_00113cb3;
          goto LAB_00113cc0;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar3 = plVar1[0xc];
          goto LAB_00113ca4;
        }
LAB_00113cc0:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00113e7d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_00113cb3:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00113e7d;
      }
      plVar1 = (long *)param_1[0xc];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_00113d04:
          if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) goto LAB_00113d13;
          goto LAB_00113d20;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar3 = plVar1[0xc];
          goto LAB_00113d04;
        }
LAB_00113d20:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00113ead:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_00113d13:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00113ead;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar5);
    lVar4 = (long)param_2 - (long)param_1;
  }
  lVar4 = lVar4 >> 5;
  if (lVar4 == 2) {
LAB_00113fae:
    plVar5 = (long *)*param_1;
    lVar4 = *plVar5;
    if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
      lVar3 = plVar5[0xc];
      if (lVar3 != 0) {
LAB_00113fce:
        if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) {
          return param_1;
        }
        goto LAB_00113fe1;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
      if (cVar2 != '\0') {
        lVar3 = plVar5[0xc];
        goto LAB_00113fce;
      }
LAB_00113fe1:
      lVar4 = *plVar5;
    }
    if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
      if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_00114027:
        lVar4 = *(long *)(plVar5[0xd] + 0x10);
        lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
        if (lVar4 != lVar3) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
      if (cVar2 != '\0') goto LAB_00114027;
    }
    param_1 = param_1 + 4;
  }
  else {
    if (lVar4 == 3) {
      plVar5 = (long *)*param_1;
      lVar4 = *plVar5;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        lVar3 = plVar5[0xc];
        if (lVar3 != 0) {
LAB_00113f6d:
          if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) {
            return param_1;
          }
          goto LAB_00113f80;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
        if (cVar2 != '\0') {
          lVar3 = plVar5[0xc];
          goto LAB_00113f6d;
        }
LAB_00113f80:
        lVar4 = *plVar5;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_00114095:
          lVar4 = *(long *)(plVar5[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
        if (cVar2 != '\0') goto LAB_00114095;
      }
      param_1 = param_1 + 4;
      goto LAB_00113fae;
    }
    if (lVar4 != 1) {
      return param_2;
    }
  }
  plVar5 = (long *)*param_1;
  lVar4 = *plVar5;
  if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
    lVar3 = plVar5[0xc];
    if (lVar3 == 0) goto LAB_00113db9;
LAB_00113da2:
    if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) {
      return param_1;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
    if (cVar2 != '\0') {
      lVar3 = plVar5[0xc];
      goto LAB_00113da2;
    }
  }
  lVar4 = *plVar5;
LAB_00113db9:
  if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)((char)plVar5[1] - 0xfU)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar4 = *(long *)(plVar5[0xd] + 0x10);
  lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
  if (lVar4 == lVar3) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsSpecializationSize() const */

bool __thiscall glslang::TType::containsSpecializationSize(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0xe8) == isArray) {
    lVar3 = *(long *)(this + 0x60);
    if (lVar3 != 0) {
LAB_0011411a:
      if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) {
        return true;
      }
      goto LAB_0011412e;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0xe8))();
    if (cVar1 != '\0') {
      lVar3 = *(long *)(this + 0x60);
      goto LAB_0011411a;
    }
LAB_0011412e:
    lVar2 = *(long *)this;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00114141:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_00114141;
  }
  return false;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (0 < lVar4 >> 7) {
    plVar5 = param_1 + (lVar4 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
        if ((*(byte *)(plVar1 + 1) < 0x15) &&
           ((0x1a6000UL >> ((ulong)*(byte *)(plVar1 + 1) & 0x3f) & 1) != 0)) {
          return param_1;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x140))(plVar1);
        if (cVar2 != '\0') {
          return param_1;
        }
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0011441d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0011441d;
      }
      plVar1 = (long *)param_1[4];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
        if ((*(byte *)(plVar1 + 1) < 0x15) &&
           ((0x1a6000UL >> ((ulong)*(byte *)(plVar1 + 1) & 0x3f) & 1) != 0)) goto LAB_00114240;
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x140))(plVar1);
        if (cVar2 != '\0') goto LAB_00114240;
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0011444d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_00114240:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0011444d;
      }
      plVar1 = (long *)param_1[8];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
        if ((*(byte *)(plVar1 + 1) < 0x15) &&
           ((0x1a6000UL >> ((ulong)*(byte *)(plVar1 + 1) & 0x3f) & 1) != 0)) goto LAB_001142a8;
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x140))(plVar1);
        if (cVar2 != '\0') goto LAB_001142a8;
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0011447d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_001142a8:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0011447d;
      }
      plVar1 = (long *)param_1[0xc];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
        if ((*(byte *)(plVar1 + 1) < 0x15) &&
           ((0x1a6000UL >> ((ulong)*(byte *)(plVar1 + 1) & 0x3f) & 1) != 0)) goto LAB_00114310;
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x140))(plVar1);
        if (cVar2 != '\0') goto LAB_00114310;
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_001144ad:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_00114310:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_001144ad;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar5);
    lVar4 = (long)param_2 - (long)param_1;
  }
  lVar4 = lVar4 >> 5;
  if (lVar4 != 2) {
    if (lVar4 != 3) {
      if (lVar4 != 1) {
        return param_2;
      }
      goto LAB_0011438d;
    }
    plVar5 = (long *)*param_1;
    lVar4 = *plVar5;
    if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
      if ((*(byte *)(plVar5 + 1) < 0x15) &&
         ((0x1a6000UL >> ((ulong)*(byte *)(plVar5 + 1) & 0x3f) & 1) != 0)) {
        return param_1;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0x140))(plVar5);
      if (cVar2 != '\0') {
        return param_1;
      }
      lVar4 = *plVar5;
    }
    if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
      if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_00114618:
        lVar4 = *(long *)(plVar5[0xd] + 0x10);
        lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
        if (lVar4 != lVar3) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
      if (cVar2 != '\0') goto LAB_00114618;
    }
    param_1 = param_1 + 4;
  }
  plVar5 = (long *)*param_1;
  lVar4 = *plVar5;
  if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
    if ((*(byte *)(plVar5 + 1) < 0x15) &&
       ((0x1a6000UL >> ((ulong)*(byte *)(plVar5 + 1) & 0x3f) & 1) != 0)) {
      return param_1;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x140))(plVar5);
    if (cVar2 != '\0') {
      return param_1;
    }
    lVar4 = *plVar5;
  }
  if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
    if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_001145bf:
      lVar4 = *(long *)(plVar5[0xd] + 0x10);
      lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
      if (lVar4 != lVar3) {
        return param_1;
      }
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
    if (cVar2 != '\0') goto LAB_001145bf;
  }
  param_1 = param_1 + 4;
LAB_0011438d:
  plVar5 = (long *)*param_1;
  lVar4 = *plVar5;
  if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
    if ((*(byte *)(plVar5 + 1) < 0x15) &&
       ((0x1a6000UL >> ((ulong)*(byte *)(plVar5 + 1) & 0x3f) & 1) != 0)) {
      return param_1;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x140))(plVar5);
    if (cVar2 != '\0') {
      return param_1;
    }
    lVar4 = *plVar5;
  }
  if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)((char)plVar5[1] - 0xfU)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar4 = *(long *)(plVar5[0xd] + 0x10);
  lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
  if (lVar4 == lVar3) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsOpaque() const */

bool __thiscall glslang::TType::containsOpaque(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0x140) == isOpaque) {
    if (((byte)this[8] < 0x15) && ((0x1a6000UL >> ((ulong)(byte)this[8] & 0x3f) & 1) != 0)) {
      return true;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x140))();
    if (cVar1 != '\0') {
      return true;
    }
    lVar2 = *(long *)this;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_001146b9:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_001146b9;
  }
  return false;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (0 < lVar4 >> 7) {
    plVar5 = param_1 + (lVar4 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar4 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
          if (cVar2 != '\0') {
            lVar3 = plVar1[0xc];
            goto LAB_0011475b;
          }
          goto LAB_00114789;
        }
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_0011475b:
          if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) {
            return param_1;
          }
          goto LAB_00114789;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xf8))(plVar1);
        if (cVar2 != '\0') {
          return param_1;
        }
LAB_00114789:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00114a05:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00114a05;
      }
      plVar1 = (long *)param_1[4];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar4 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
          if (cVar2 != '\0') {
            lVar3 = plVar1[0xc];
            goto LAB_001147d8;
          }
          goto LAB_00114801;
        }
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_001147d8:
          if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) goto LAB_001147e8;
          goto LAB_00114801;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xf8))(plVar1);
        if (cVar2 != '\0') goto LAB_001147e8;
LAB_00114801:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00114a3d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_001147e8:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00114a3d;
      }
      plVar1 = (long *)param_1[8];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar4 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
          if (cVar2 != '\0') {
            lVar3 = plVar1[0xc];
            goto LAB_00114850;
          }
          goto LAB_00114879;
        }
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_00114850:
          if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) goto LAB_0011485e;
          goto LAB_00114879;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xf8))(plVar1);
        if (cVar2 != '\0') goto LAB_0011485e;
LAB_00114879:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00114a6d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_0011485e:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00114a6d;
      }
      plVar1 = (long *)param_1[0xc];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar4 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
          if (cVar2 != '\0') {
            lVar3 = plVar1[0xc];
            goto LAB_001148c8;
          }
          goto LAB_001148e9;
        }
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_001148c8:
          if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) goto LAB_001148d6;
          goto LAB_001148e9;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xf8))(plVar1);
        if (cVar2 != '\0') goto LAB_001148d6;
LAB_001148e9:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00114a9d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_001148d6:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00114a9d;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar5);
    lVar4 = (long)param_2 - (long)param_1;
  }
  lVar4 = lVar4 >> 5;
  if (lVar4 == 2) {
LAB_00114bb7:
    plVar5 = (long *)*param_1;
    lVar4 = *plVar5;
    if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
      if (*(code **)(lVar4 + 0xe8) != glslang::TType::isArray) {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
        if (cVar2 != '\0') {
          lVar3 = plVar5[0xc];
          goto LAB_00114bef;
        }
        goto LAB_00114c01;
      }
      lVar3 = plVar5[0xc];
      if (lVar3 != 0) {
LAB_00114bef:
        if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) {
          return param_1;
        }
        goto LAB_00114c01;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0xf8))(plVar5);
      if (cVar2 != '\0') {
        return param_1;
      }
LAB_00114c01:
      lVar4 = *plVar5;
    }
    if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
      if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_00114c49:
        lVar4 = *(long *)(plVar5[0xd] + 0x10);
        lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
        if (lVar4 != lVar3) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
      if (cVar2 != '\0') goto LAB_00114c49;
    }
    param_1 = param_1 + 4;
  }
  else {
    if (lVar4 == 3) {
      plVar5 = (long *)*param_1;
      lVar4 = *plVar5;
      if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar4 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
          if (cVar2 != '\0') {
            lVar3 = plVar5[0xc];
            goto LAB_00114b75;
          }
          goto LAB_00114b87;
        }
        lVar3 = plVar5[0xc];
        if (lVar3 != 0) {
LAB_00114b75:
          if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) {
            return param_1;
          }
          goto LAB_00114b87;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xf8))(plVar5);
        if (cVar2 != '\0') {
          return param_1;
        }
LAB_00114b87:
        lVar4 = *plVar5;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_00114cda:
          lVar4 = *(long *)(plVar5[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
        if (cVar2 != '\0') goto LAB_00114cda;
      }
      param_1 = param_1 + 4;
      goto LAB_00114bb7;
    }
    if (lVar4 != 1) {
      return param_2;
    }
  }
  plVar5 = (long *)*param_1;
  lVar4 = *plVar5;
  if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
    if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
      lVar3 = plVar5[0xc];
      if (lVar3 == 0) goto LAB_0011499f;
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
      if (cVar2 == '\0') goto LAB_0011499b;
      lVar3 = plVar5[0xc];
    }
    if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) {
      return param_1;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0xf8))(plVar5);
    if (cVar2 != '\0') {
      return param_1;
    }
  }
LAB_0011499b:
  lVar4 = *plVar5;
LAB_0011499f:
  if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)((char)plVar5[1] - 0xfU)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar4 = *(long *)(plVar5[0xd] + 0x10);
  lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
  if (lVar4 == lVar3) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsUnsizedArray() const */

bool __thiscall glslang::TType::containsUnsizedArray(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0xf8) == isUnsizedArray) {
    if (*(code **)(lVar2 + 0xe8) != isArray) {
      cVar1 = (**(code **)(lVar2 + 0xe8))();
      if (cVar1 != '\0') {
        lVar3 = *(long *)(this + 0x60);
        goto LAB_00114d8a;
      }
      goto LAB_00114da6;
    }
    lVar3 = *(long *)(this + 0x60);
    if (lVar3 != 0) {
LAB_00114d8a:
      if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) {
        return true;
      }
      goto LAB_00114da6;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0xf8))();
    if (cVar1 != '\0') {
      return true;
    }
LAB_00114da6:
    lVar2 = *(long *)this;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00114db9:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_00114db9;
  }
  return false;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
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
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = (long)param_2 - (long)param_1;
  if (0 < lVar7 >> 7) {
    plVar1 = param_1;
LAB_00114e20:
    do {
      plVar6 = plVar1;
      plVar1 = (long *)*plVar6;
      lVar5 = *plVar1;
      if (plVar1 == param_3) {
LAB_00114e70:
        if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
          if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00114e8d:
            lVar5 = *(long *)(plVar1[0xd] + 0x10);
            lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                              (*(undefined8 *)(plVar1[0xd] + 8),lVar5,param_3);
            if (lVar5 != lVar3) {
              return plVar6;
            }
          }
        }
        else {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_00114e8d;
        }
      }
      else {
        if (*(code **)(lVar5 + 0x128) != glslang::TType::isStruct) {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') {
            return plVar6;
          }
          lVar5 = *plVar1;
          goto LAB_00114e70;
        }
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
          return plVar6;
        }
      }
      plVar1 = (long *)plVar6[4];
      lVar5 = *plVar1;
      if (plVar1 == param_3) {
LAB_00114ef0:
        if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
          if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00114f0d:
            lVar5 = *(long *)(plVar1[0xd] + 0x10);
            lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                              (*(undefined8 *)(plVar1[0xd] + 8),lVar5,param_3);
            if (lVar5 != lVar3) {
LAB_00114ed6:
              return plVar6 + 4;
            }
          }
        }
        else {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_00114f0d;
        }
      }
      else {
        if (*(code **)(lVar5 + 0x128) != glslang::TType::isStruct) {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_00114ed6;
          lVar5 = *plVar1;
          goto LAB_00114ef0;
        }
        if ((byte)((char)plVar1[1] - 0xfU) < 2) goto LAB_00114ed6;
      }
      plVar1 = (long *)plVar6[8];
      lVar5 = *plVar1;
      if (plVar1 == param_3) {
LAB_00114f70:
        if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
          if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00114f8d:
            lVar5 = *(long *)(plVar1[0xd] + 0x10);
            lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                              (*(undefined8 *)(plVar1[0xd] + 8),lVar5,param_3);
            if (lVar5 != lVar3) {
LAB_00114f56:
              return plVar6 + 8;
            }
          }
        }
        else {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_00114f8d;
        }
      }
      else {
        if (*(code **)(lVar5 + 0x128) != glslang::TType::isStruct) {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_00114f56;
          lVar5 = *plVar1;
          goto LAB_00114f70;
        }
        if ((byte)((char)plVar1[1] - 0xfU) < 2) goto LAB_00114f56;
      }
      plVar1 = (long *)plVar6[0xc];
      lVar5 = *plVar1;
      if (plVar1 == param_3) {
LAB_00114ff0:
        if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
          if (1 < (byte)((char)plVar1[1] - 0xfU)) goto LAB_0011502a;
        }
        else {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 == '\0') {
            plVar1 = plVar6 + 0x10;
            if (plVar6 + 0x10 == param_1 + (lVar7 >> 7) * 0x10) break;
            goto LAB_00114e20;
          }
        }
        lVar5 = *(long *)(plVar1[0xd] + 0x10);
        lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar1[0xd] + 8),lVar5,param_3);
        if (lVar5 != lVar3) {
LAB_00114fd6:
          return plVar6 + 0xc;
        }
      }
      else {
        if (*(code **)(lVar5 + 0x128) != glslang::TType::isStruct) {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_00114fd6;
          lVar5 = *plVar1;
          goto LAB_00114ff0;
        }
        if ((byte)((char)plVar1[1] - 0xfU) < 2) goto LAB_00114fd6;
      }
LAB_0011502a:
      plVar1 = plVar6 + 0x10;
    } while (plVar6 + 0x10 != param_1 + (lVar7 >> 7) * 0x10);
    param_1 = plVar6 + 0x10;
    lVar7 = (long)param_2 - (long)param_1;
  }
  lVar7 = lVar7 >> 5;
  if (lVar7 != 2) {
    if (lVar7 != 3) {
      if (lVar7 != 1) {
        return param_2;
      }
      goto LAB_00115062;
    }
    plVar1 = (long *)*param_1;
    pcVar4 = *(code **)(*plVar1 + 0x128);
    if (param_3 == plVar1) {
LAB_001151a2:
      if (pcVar4 == glslang::TType::isStruct) {
        cVar2 = (char)plVar1[1];
        goto LAB_00115179;
      }
      cVar2 = (*pcVar4)(plVar1);
      if (cVar2 != '\0') goto LAB_0011527b;
    }
    else {
      if (pcVar4 != glslang::TType::isStruct) {
        cVar2 = (*pcVar4)(plVar1);
        if (cVar2 != '\0') {
          return param_1;
        }
        pcVar4 = *(code **)(*plVar1 + 0x128);
        goto LAB_001151a2;
      }
      cVar2 = (char)plVar1[1];
      if ((byte)(cVar2 - 0xfU) < 2) {
        return param_1;
      }
LAB_00115179:
      if ((byte)(cVar2 - 0xfU) < 2) {
LAB_0011527b:
        lVar7 = *(long *)(plVar1[0xd] + 0x10);
        lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar1[0xd] + 8),lVar7,param_3);
        if (lVar7 != lVar5) {
          return param_1;
        }
      }
    }
    param_1 = param_1 + 4;
  }
  plVar1 = (long *)*param_1;
  lVar7 = *plVar1;
  if (plVar1 == param_3) {
LAB_001151c4:
    if (*(code **)(lVar7 + 0x128) == glslang::TType::isStruct) {
      if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_001151e5:
        lVar7 = *(long *)(plVar1[0xd] + 0x10);
        lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar1[0xd] + 8),lVar7,param_3);
        if (lVar7 != lVar5) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(lVar7 + 0x128))(plVar1);
      if (cVar2 != '\0') goto LAB_001151e5;
    }
  }
  else {
    if (*(code **)(lVar7 + 0x128) != glslang::TType::isStruct) {
      cVar2 = (**(code **)(lVar7 + 0x128))(plVar1);
      if (cVar2 != '\0') {
        return param_1;
      }
      lVar7 = *plVar1;
      goto LAB_001151c4;
    }
    if ((byte)((char)plVar1[1] - 0xfU) < 2) {
      return param_1;
    }
  }
  param_1 = param_1 + 4;
LAB_00115062:
  plVar1 = (long *)*param_1;
  lVar7 = *plVar1;
  if (plVar1 != param_3) {
    if (*(code **)(lVar7 + 0x128) == glslang::TType::isStruct) {
      if (1 < (byte)((char)plVar1[1] - 0xfU)) {
        return param_2;
      }
      return param_1;
    }
    cVar2 = (**(code **)(lVar7 + 0x128))(plVar1);
    if (cVar2 != '\0') {
      return param_1;
    }
    lVar7 = *plVar1;
  }
  if (*(code **)(lVar7 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)((char)plVar1[1] - 0xfU)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(lVar7 + 0x128))(plVar1);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar7 = *(long *)(plVar1[0xd] + 0x10);
  lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar1[0xd] + 8),lVar7,param_3);
  if (lVar7 == lVar5) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsStructure() const */

bool __thiscall glslang::TType::containsStructure(TType *this)

{
  long lVar1;
  char cVar2;
  long lVar3;
  
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00115306:
      lVar1 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar1,this);
      return lVar1 != lVar3;
    }
  }
  else {
    cVar2 = (**(code **)(*(long *)this + 0x128))();
    if (cVar2 != '\0') goto LAB_00115306;
  }
  return false;
}



/* glslang::GetBuiltInVariableString(glslang::TBuiltInVariable) */

char * glslang::GetBuiltInVariableString(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "";
  case 1:
    return "NumWorkGroups";
  case 2:
    return "WorkGroupSize";
  case 3:
    return "WorkGroupID";
  case 4:
    return "LocalInvocationID";
  case 5:
    return "GlobalInvocationID";
  case 6:
    return "LocalInvocationIndex";
  case 7:
    return "NumSubgroups";
  case 8:
    return "SubgroupID";
  case 9:
    return "SubGroupSize";
  case 10:
    return "SubGroupInvocation";
  case 0xb:
    return "SubGroupEqMask";
  case 0xc:
    return "SubGroupGeMask";
  case 0xd:
    return "SubGroupGtMask";
  case 0xe:
    return "SubGroupLeMask";
  case 0xf:
    return "SubGroupLtMask";
  case 0x10:
    return "SubgroupSize";
  case 0x11:
    return "SubgroupInvocationID";
  case 0x12:
    return "SubgroupEqMask";
  case 0x13:
    return "SubgroupGeMask";
  case 0x14:
    return "SubgroupGtMask";
  case 0x15:
    return "SubgroupLeMask";
  case 0x16:
    return "SubgroupLtMask";
  case 0x17:
    return "VertexId";
  case 0x18:
    return "InstanceId";
  case 0x19:
    return "VertexIndex";
  case 0x1a:
    return "InstanceIndex";
  case 0x1b:
    return "BaseVertex";
  case 0x1c:
    return "BaseInstance";
  case 0x1d:
    return "DrawId";
  case 0x1e:
    return "Position";
  case 0x1f:
    return "PointSize";
  case 0x20:
    return "ClipVertex";
  case 0x21:
    return "ClipDistance";
  case 0x22:
    return "CullDistance";
  case 0x23:
    return "Normal";
  case 0x24:
    return "Vertex";
  case 0x25:
    return "MultiTexCoord0";
  case 0x26:
    return "MultiTexCoord1";
  case 0x27:
    return "MultiTexCoord2";
  case 0x28:
    return "MultiTexCoord3";
  case 0x29:
    return "MultiTexCoord4";
  case 0x2a:
    return "MultiTexCoord5";
  case 0x2b:
    return "MultiTexCoord6";
  case 0x2c:
    return "MultiTexCoord7";
  case 0x2d:
    return "FrontColor";
  case 0x2e:
    return "BackColor";
  case 0x2f:
    return "FrontSecondaryColor";
  case 0x30:
    return "BackSecondaryColor";
  case 0x31:
    return "TexCoord";
  case 0x32:
    return "FogFragCoord";
  case 0x33:
    return "InvocationID";
  case 0x34:
    return "PrimitiveID";
  case 0x35:
    return "Layer";
  case 0x36:
    return "ViewportIndex";
  case 0x37:
    return "PatchVertices";
  case 0x38:
    return "TessLevelOuter";
  case 0x39:
    return "TessLevelInner";
  case 0x3a:
    return "BoundingBox";
  case 0x3b:
    return "TessCoord";
  case 0x3c:
    return "Color";
  case 0x3d:
    return "SecondaryColor";
  case 0x3e:
    return "Face";
  case 0x3f:
    return "FragCoord";
  case 0x40:
    return "PointCoord";
  case 0x41:
    return "FragColor";
  case 0x42:
    return "FragData";
  case 0x43:
    return "FragDepth";
  case 0x44:
    return "FragStencilRef";
  case 0x45:
    return "SampleId";
  case 0x46:
    return "SamplePosition";
  case 0x47:
    return "SampleMaskIn";
  case 0x48:
    return "HelperInvocation";
  case 0x49:
    return "BaryCoordNoPersp";
  case 0x4a:
    return "BaryCoordNoPerspCentroid";
  case 0x4b:
    return "BaryCoordNoPerspSample";
  case 0x4c:
    return "BaryCoordSmooth";
  case 0x4d:
    return "BaryCoordSmoothCentroid";
  case 0x4e:
    return "BaryCoordSmoothSample";
  case 0x4f:
    return "BaryCoordPullModel";
  case 0x50:
    return "ViewIndex";
  case 0x51:
    return "DeviceIndex";
  case 0x52:
    return "ShadingRateKHR";
  case 0x53:
    return "PrimitiveShadingRateKHR";
  case 0x54:
    return "FragSizeEXT";
  case 0x55:
    return "FragInvocationCountEXT";
  case 0x56:
    return "SecondaryFragDataEXT";
  case 0x57:
    return "SecondaryFragColorEXT";
  case 0x58:
    return "ViewportMaskNV";
  case 0x59:
    return "SecondaryPositionNV";
  case 0x5a:
    return "SecondaryViewportMaskNV";
  case 0x5b:
    return "PositionPerViewNV";
  case 0x5c:
    return "ViewportMaskPerViewNV";
  case 0x5d:
    return "FragFullyCoveredNV";
  case 0x5e:
    return "FragmentSizeNV";
  case 0x5f:
    return "InvocationsPerPixelNV";
  case 0x60:
    return "LaunchIdNV";
  case 0x61:
    return "LaunchSizeNV";
  case 0x62:
    return "InstanceCustomIndexNV";
  case 99:
    return "GeometryIndexEXT";
  case 100:
    return "WorldRayOriginNV";
  case 0x65:
    return "WorldRayDirectionNV";
  case 0x66:
    return "ObjectRayOriginNV";
  case 0x67:
    return "ObjectRayDirectionNV";
  case 0x68:
    return "ObjectRayTminNV";
  case 0x69:
    return "ObjectRayTmaxNV";
  default:
    return "unknown built-in variable";
  case 0x6b:
    return "HitTNV";
  case 0x6c:
    return "HitKindNV";
  case 0x6d:
    return "ObjectToWorldNV";
  case 0x6f:
    return "WorldToObjectNV";
  case 0x71:
    return "IncomingRayFlagsNV";
  case 0x72:
    return "CurrentRayTimeNV";
  case 0x73:
  case 0x75:
    return "BaryCoordKHR";
  case 0x74:
  case 0x76:
    return "BaryCoordNoPerspKHR";
  case 0x77:
    return "TaskCountNV";
  case 0x78:
    return "PrimitiveCountNV";
  case 0x79:
    return "PrimitiveIndicesNV";
  case 0x7a:
    return "ClipDistancePerViewNV";
  case 0x7b:
    return "CullDistancePerViewNV";
  case 0x7c:
    return "LayerPerViewNV";
  case 0x7d:
    return "MeshViewCountNV";
  case 0x7e:
    return "MeshViewIndicesNV";
  case 0x81:
    return "HitKindFrontFacingMicroTriangleNV";
  case 0x82:
    return "HitKindBackFacingMicroTriangleNV";
  case 0x83:
    return "PrimitivePointIndicesEXT";
  case 0x84:
    return "PrimitiveLineIndicesEXT";
  case 0x85:
    return "PrimitiveTriangleIndicesEXT";
  case 0x86:
    return "CullPrimitiveEXT";
  case 0x87:
    return "WarpsPerSMNV";
  case 0x88:
    return "SMCountNV";
  case 0x89:
    return "WarpIDNV";
  case 0x8a:
    return "SMIDNV";
  }
}



/* glslang::TSpirvType::TEMPNAMEPLACEHOLDERVALUE(glslang::TSpirvType const&) const */

undefined4 __thiscall glslang::TSpirvType::operator==(TSpirvType *this,TSpirvType *param_1)

{
  size_t __n;
  TSpirvTypeParameter *pTVar1;
  int iVar2;
  undefined4 uVar3;
  TSpirvTypeParameter *pTVar4;
  TSpirvTypeParameter *this_00;
  
  uVar3 = 0;
  __n = *(size_t *)(this + 0x10);
  if (__n == *(size_t *)(param_1 + 0x10)) {
    if (((__n == 0) ||
        (iVar2 = memcmp(*(void **)(this + 8),*(void **)(param_1 + 8),__n), iVar2 == 0)) &&
       (uVar3 = 0, *(int *)(this + 0x28) == *(int *)(param_1 + 0x28))) {
      pTVar1 = *(TSpirvTypeParameter **)(this + 0x40);
      this_00 = *(TSpirvTypeParameter **)(this + 0x38);
      pTVar4 = *(TSpirvTypeParameter **)(param_1 + 0x38);
      if ((long)pTVar1 - (long)this_00 == *(long *)(param_1 + 0x40) - (long)pTVar4) {
        for (; this_00 != pTVar1; this_00 = this_00 + 0x10) {
          uVar3 = glslang::TSpirvTypeParameter::operator==(this_00,pTVar4);
          if ((char)uVar3 == '\0') {
            return uVar3;
          }
          pTVar4 = pTVar4 + 0x10;
        }
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}



/* glslang::TQualifier::isArrayedIo(EShLanguage) const */

ulong __thiscall glslang::TQualifier::isArrayedIo(TQualifier *this,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  
  switch(param_2) {
  default:
    return 0;
  case 1:
    if (((byte)this[0xd] & 0x10) != 0) {
      return 0;
    }
    uVar3 = (ulong)((byte)this[8] & 0x7f);
    bVar1 = (byte)((byte)this[8] & 0x7f);
    if (0x1b < bVar1) {
      return (ulong)(bVar1 < 0x1f);
    }
    bVar4 = (0xe300008UL >> (uVar3 & 0x3f) & 1) != 0;
    if (bVar4) {
      return CONCAT71(0xe3000,bVar4);
    }
    break;
  case 2:
    if (((byte)this[0xd] >> 4 & 1) != 0) {
      return 0;
    }
    uVar2 = (byte)this[8] & 0x7f;
    if (0x1b < (byte)uVar2) {
      return (ulong)((byte)this[0xd] >> 4 & 1);
    }
    goto LAB_001162b5;
  case 4:
    if ((-1 < (char)this[0xc]) && (((byte)this[0xd] & 1) == 0)) {
      return (ulong)((byte)this[0xd] & 1);
    }
  case 3:
    uVar2 = (byte)this[8] & 0x7f;
    if (0x1b < (byte)uVar2) {
      return 0;
    }
LAB_001162b5:
    return CONCAT71(0xe3000,(0xe300008UL >> ((ulong)uVar2 & 0x3f) & 1) != 0);
  case 0xd:
    if (((byte)this[0xd] >> 3 & 1) != 0) {
      return 0;
    }
    uVar3 = (ulong)((byte)this[8] & 0x7f);
    if (0x1e < (byte)((byte)this[8] & 0x7f)) {
      return (ulong)((byte)this[0xd] >> 3 & 1);
    }
  }
  return CONCAT71(0x71c000,(0x71c00010UL >> (uVar3 & 0x3f) & 1) != 0);
}



/* glslang::TQualifier::getLayoutFormatString(glslang::TLayoutFormat) */

char * glslang::TQualifier::getLayoutFormatString(undefined4 param_1)

{
  switch(param_1) {
  default:
    return "none";
  case 1:
    return "rgba32f";
  case 2:
    return "rgba16f";
  case 3:
    return "r32f";
  case 4:
    return "rgba8";
  case 5:
    return "rgba8_snorm";
  case 7:
    return "rg32f";
  case 8:
    return "rg16f";
  case 9:
    return "r11f_g11f_b10f";
  case 10:
    return "r16f";
  case 0xb:
    return "rgba16";
  case 0xc:
    return "rgb10_a2";
  case 0xd:
    return "rg16";
  case 0xe:
    return "rg8";
  case 0xf:
    return "r16";
  case 0x10:
    return "r8";
  case 0x11:
    return "rgba16_snorm";
  case 0x12:
    return "rg16_snorm";
  case 0x13:
    return "rg8_snorm";
  case 0x14:
    return "r16_snorm";
  case 0x15:
    return "r8_snorm";
  case 0x17:
    return "rgba32i";
  case 0x18:
    return "rgba16i";
  case 0x19:
    return "rgba8i";
  case 0x1a:
    return "r32i";
  case 0x1c:
    return "rg32i";
  case 0x1d:
    return "rg16i";
  case 0x1e:
    return "rg8i";
  case 0x1f:
    return "r16i";
  case 0x20:
    return "r8i";
  case 0x21:
    return "r64i";
  case 0x23:
    return "rgba32ui";
  case 0x24:
    return "rgba16ui";
  case 0x25:
    return "rgba8ui";
  case 0x26:
    return "r32ui";
  case 0x28:
    return "rg32ui";
  case 0x29:
    return "rg16ui";
  case 0x2a:
    return "rgb10_a2ui";
  case 0x2b:
    return "rg8ui";
  case 0x2c:
    return "r16ui";
  case 0x2d:
    return "r8ui";
  case 0x2e:
    return "r64ui";
  case 0x30:
    return "size1x8";
  case 0x31:
    return "size1x16";
  case 0x32:
    return "size1x32";
  case 0x33:
    return "size2x32";
  case 0x34:
    return "size4x32";
  }
}



/* glslang::TType::TType(glslang::TType const&, int, bool) */

void __thiscall glslang::TType::TType(TType *this,TType *param_1,int param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TType TVar4;
  TType TVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char cVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong *puVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  byte bVar27;
  ulong uVar28;
  
  lVar26 = *(long *)param_1;
  *(undefined ***)this = &PTR__TType_00120b18;
  if (*(code **)(lVar26 + 0xe8) == isArray) {
    lVar23 = *(long *)(param_1 + 0x60);
    if (lVar23 != 0) {
LAB_00116a3d:
      uVar9 = *(undefined4 *)(param_1 + 0x80);
      uVar7 = *(uint *)(param_1 + 8);
      *(long *)(this + 0x60) = lVar23;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      uVar13 = *(undefined8 *)(param_1 + 0x18);
      uVar17 = *(undefined8 *)(param_1 + 0x20);
      uVar18 = *(undefined8 *)(param_1 + 0x28);
      *(undefined4 *)(this + 0x80) = uVar9;
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      uVar11 = *(undefined8 *)(param_1 + 0x40);
      uVar12 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(this + 0x10) = uVar1;
      *(undefined8 *)(this + 0x18) = uVar13;
      uVar13 = *(undefined8 *)(param_1 + 0x50);
      uVar14 = *(undefined8 *)(param_1 + 0x58);
      uVar15 = *(undefined8 *)(param_1 + 0x70);
      uVar16 = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(this + 0x20) = uVar17;
      *(undefined8 *)(this + 0x28) = uVar18;
      uVar1 = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(this + 0x30) = uVar2;
      *(undefined8 *)(this + 0x38) = uVar3;
      *(uint *)(this + 8) = *(uint *)(this + 8) & 0xffe00000 | uVar7 & 0x1fffff;
      *(undefined8 *)(this + 0x68) = uVar1;
      uVar6 = *(ushort *)(param_1 + 10);
      uVar1 = *(undefined8 *)(param_1 + 0x88);
      uVar2 = *(undefined8 *)(param_1 + 0x90);
      *(undefined8 *)(this + 0x40) = uVar11;
      *(undefined8 *)(this + 0x48) = uVar12;
      *(undefined8 *)(this + 0x50) = uVar13;
      *(undefined8 *)(this + 0x58) = uVar14;
      *(undefined8 *)(this + 0x70) = uVar15;
      *(undefined8 *)(this + 0x78) = uVar16;
      *(ushort *)(this + 10) = *(ushort *)(this + 10) & 0xf81f | uVar6 & 0x7e0;
      pcVar10 = *(code **)(lVar26 + 0x98);
      *(undefined8 *)(this + 0x88) = uVar1;
      *(undefined8 *)(this + 0x90) = uVar2;
      if (pcVar10 != getArraySizes) {
        lVar23 = (*pcVar10)(param_1);
      }
      lVar26 = *(long *)(lVar23 + 8);
      if ((lVar26 != 0) && ((int)(*(long *)(lVar26 + 0x10) - *(long *)(lVar26 + 8) >> 4) == 1)) {
        *(undefined8 *)(this + 0x60) = 0;
        return;
      }
      uVar20 = glslang::GetThreadPoolAllocator();
      puVar21 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar20);
      *puVar21 = &PTR__TSmallArrayVector_00120af8;
      puVar21[1] = 0;
      *(undefined4 *)(puVar21 + 2) = 0;
      *(undefined2 *)((long)puVar21 + 0x14) = 1;
      *(undefined8 **)(this + 0x60) = puVar21;
      lVar26 = *(long *)(param_1 + 0x60);
      lVar23 = *(long *)(lVar26 + 8);
      if (lVar23 == 0) {
        return;
      }
      if ((int)(*(long *)(lVar23 + 0x10) - *(long *)(lVar23 + 8) >> 4) < 2) {
        return;
      }
      uVar20 = glslang::GetThreadPoolAllocator();
      puVar22 = (ulong *)glslang::TPoolAllocator::allocate(uVar20);
      uVar20 = glslang::GetThreadPoolAllocator();
      puVar22[1] = 0;
      puVar22[2] = 0;
      puVar22[3] = 0;
      *puVar22 = uVar20;
      puVar21[1] = puVar22;
      lVar26 = *(long *)(lVar26 + 8);
      lVar23 = *(long *)(lVar26 + 8);
      lVar26 = *(long *)(lVar26 + 0x10);
      if (lVar26 == lVar23 + 0x10) {
        return;
      }
      uVar28 = lVar26 - (lVar23 + 0x10);
      if (uVar28 < 0x7ffffffffffffff1) {
        if (uVar28 == 0) {
          uVar20 = 0;
        }
        else {
          uVar20 = glslang::TPoolAllocator::allocate(uVar20);
        }
        lVar25 = 0;
        lVar26 = (lVar26 + -0x10) - lVar23;
        do {
          puVar21 = (undefined8 *)(lVar23 + 0x10 + lVar25);
          uVar1 = puVar21[1];
          *(undefined8 *)(uVar20 + lVar25) = *puVar21;
          ((undefined8 *)(uVar20 + lVar25))[1] = uVar1;
          lVar25 = lVar25 + 0x10;
        } while (lVar26 != lVar25);
        puVar22[1] = uVar20;
        puVar22[2] = lVar26 + uVar20;
        puVar22[3] = uVar20 + uVar28;
        return;
      }
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_range_insert");
    }
  }
  else {
    cVar19 = (**(code **)(lVar26 + 0xe8))(param_1);
    if (cVar19 != '\0') {
      lVar26 = *(long *)param_1;
      lVar23 = *(long *)(param_1 + 0x60);
      goto LAB_00116a3d;
    }
  }
  lVar26 = *(long *)(param_1 + 0x68);
  if ((byte)((char)param_1[8] - 0xfU) < 2) {
    lVar26 = *(long *)((long)param_2 * 0x20 + *(long *)(lVar26 + 8));
    uVar7 = *(uint *)(lVar26 + 8);
    uVar1 = *(undefined8 *)(lVar26 + 0x10);
    uVar2 = *(undefined8 *)(lVar26 + 0x18);
    uVar3 = *(undefined8 *)(lVar26 + 0x20);
    uVar11 = *(undefined8 *)(lVar26 + 0x28);
    *(undefined4 *)(this + 0x80) = *(undefined4 *)(lVar26 + 0x80);
    uVar12 = *(undefined8 *)(lVar26 + 0x30);
    uVar13 = *(undefined8 *)(lVar26 + 0x38);
    uVar14 = *(undefined8 *)(lVar26 + 0x70);
    uVar15 = *(undefined8 *)(lVar26 + 0x78);
    *(undefined8 *)(this + 0x10) = uVar1;
    *(undefined8 *)(this + 0x18) = uVar2;
    uVar16 = *(undefined8 *)(lVar26 + 0x40);
    uVar17 = *(undefined8 *)(lVar26 + 0x48);
    *(undefined8 *)(this + 0x20) = uVar3;
    *(undefined8 *)(this + 0x28) = uVar11;
    uVar3 = *(undefined8 *)(lVar26 + 0x50);
    uVar11 = *(undefined8 *)(lVar26 + 0x58);
    uVar1 = *(undefined8 *)(lVar26 + 0x68);
    *(undefined8 *)(this + 0x30) = uVar12;
    *(undefined8 *)(this + 0x38) = uVar13;
    *(uint *)(this + 8) = *(uint *)(this + 8) & 0xffe00000 | uVar7 & 0x1fffff;
    uVar2 = *(undefined8 *)(lVar26 + 0x60);
    *(undefined8 *)(this + 0x68) = uVar1;
    uVar1 = *(undefined8 *)(lVar26 + 0x88);
    uVar12 = *(undefined8 *)(lVar26 + 0x90);
    *(undefined8 *)(this + 0x60) = uVar2;
    uVar6 = *(ushort *)(lVar26 + 10);
    *(undefined8 *)(this + 0x40) = uVar16;
    *(undefined8 *)(this + 0x48) = uVar17;
    *(undefined8 *)(this + 0x50) = uVar3;
    *(undefined8 *)(this + 0x58) = uVar11;
    *(undefined8 *)(this + 0x70) = uVar14;
    *(undefined8 *)(this + 0x78) = uVar15;
    *(undefined8 *)(this + 0x88) = uVar1;
    *(undefined8 *)(this + 0x90) = uVar12;
    *(ushort *)(this + 10) = uVar6 & 0x7e0 | *(ushort *)(this + 10) & 0xf81f;
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(uint *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  TVar4 = param_1[9];
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  uVar15 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x10) = uVar3;
  *(undefined8 *)(this + 0x18) = uVar11;
  uVar24 = uVar7 & 0x7ffffff;
  uVar11 = *(undefined8 *)(param_1 + 0x40);
  uVar16 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(this + 0x20) = uVar12;
  *(undefined8 *)(this + 0x28) = uVar13;
  uVar12 = *(undefined8 *)(param_1 + 0x50);
  uVar13 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x30) = uVar14;
  *(undefined8 *)(this + 0x38) = uVar15;
  TVar5 = param_1[10];
  *(undefined8 *)(this + 0x40) = uVar11;
  *(undefined8 *)(this + 0x48) = uVar16;
  uVar11 = *(undefined8 *)(param_1 + 0x88);
  uVar14 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(this + 0x50) = uVar12;
  *(undefined8 *)(this + 0x58) = uVar13;
  uVar8 = *(uint *)(this + 8);
  *(undefined8 *)(this + 0x60) = uVar2;
  *(long *)(this + 0x68) = lVar26;
  *(undefined8 *)(this + 0x70) = uVar1;
  *(undefined8 *)(this + 0x78) = uVar3;
  *(undefined8 *)(this + 0x88) = uVar11;
  *(undefined8 *)(this + 0x90) = uVar14;
  *(uint *)(this + 8) = uVar8 & 0xf8000000 | uVar24;
  if ((byte)(uVar24 >> 8) < 0x10) {
    if ((1 < ((byte)TVar4 & 0xf)) || (((byte)TVar5 >> 4 & 1) != 0)) {
      *(uint *)(this + 8) = *(uint *)(this + 8) & 0xffeff0ff | 0x100;
      return;
    }
    if ((((byte)TVar5 >> 5 & 1) != 0) || (((byte)TVar5 >> 6 & 1) != 0)) {
      *(ushort *)(this + 10) = *(ushort *)(this + 10) & 0xf81f;
      *(undefined8 *)(this + 0x88) = 0;
    }
  }
  else {
    bVar27 = (byte)TVar5 & 0xf;
    if (param_3) {
      bVar27 = (byte)TVar4 >> 4;
    }
    *(uint *)(this + 8) = uVar8 & 0xf8000000 | uVar7 & 0x7f000ff | (uint)bVar27 << 8;
    if (bVar27 == 1) {
      this[10] = (TType)((byte)this[10] | 0x10);
    }
  }
  return;
}



/* glslang::TType::adoptImplicitArraySizes(bool) */

void __thiscall glslang::TType::adoptImplicitArraySizes(TType *this,bool param_1)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  TType *pTVar4;
  char cVar5;
  int *piVar6;
  long lVar7;
  int iVar8;
  TType *pTVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  
  do {
    lVar10 = *(long *)this;
    if (*(code **)(lVar10 + 0xf8) == isUnsizedArray) {
      if (*(code **)(lVar10 + 0xe8) != isArray) {
        cVar5 = (**(code **)(lVar10 + 0xe8))();
        if (cVar5 != '\0') {
          lVar7 = *(long *)(this + 0x60);
          lVar10 = *(long *)this;
          goto LAB_00116dbd;
        }
LAB_00116f6a:
        lVar10 = *(long *)this;
        goto LAB_00116f6d;
      }
      lVar7 = *(long *)(this + 0x60);
      if (lVar7 != 0) {
LAB_00116dbd:
        if (**(int **)(*(long *)(lVar7 + 8) + 8) == 0) goto LAB_00116ed5;
LAB_00116dd1:
        if (((byte)this[0x1d] & 4) == 0) goto LAB_00116e38;
        goto LAB_00116dd7;
      }
    }
    else {
      cVar5 = (**(code **)(lVar10 + 0xf8))();
      lVar10 = *(long *)this;
      if (cVar5 != '\0') {
LAB_00116ed5:
        if ((*(ushort *)(this + 0x18) & 0xff80) == 0x2380) {
LAB_00116f0e:
          if (*(code **)(lVar10 + 0x90) == getImplicitArraySize) {
            lVar7 = *(long *)(this + 0x60);
            iVar8 = *(int *)(lVar7 + 0x10);
            if (iVar8 < 1) {
              iVar8 = 1;
            }
          }
          else {
            iVar8 = (**(code **)(lVar10 + 0x90))(this);
            lVar10 = *(long *)this;
            lVar7 = *(long *)(this + 0x60);
          }
          **(int **)(*(long *)(lVar7 + 8) + 8) = iVar8;
          pcVar3 = *(code **)(lVar10 + 0x120);
          *(undefined1 *)(lVar7 + 0x14) = 0;
          if (pcVar3 == setImplicitlySized) {
            *(undefined1 *)(lVar7 + 0x14) = 1;
            goto LAB_00116dd1;
          }
          (*pcVar3)(this);
          goto LAB_00116f6a;
        }
        if (param_1 == false) {
          if (*(code **)(lVar10 + 0x108) == isArrayVariablyIndexed) {
            cVar5 = *(char *)(*(long *)(this + 0x60) + 0x15);
          }
          else {
            cVar5 = (**(code **)(lVar10 + 0x108))(this);
            lVar10 = *(long *)this;
          }
          if (cVar5 == '\0') goto LAB_00116f0e;
        }
      }
LAB_00116f6d:
      if ((((byte)this[0x1d] & 4) != 0) && (lVar7 = *(long *)(this + 0x60), lVar7 != 0)) {
LAB_00116dd7:
        lVar7 = *(long *)(lVar7 + 8);
        if (lVar7 != 0) {
          lVar2 = *(long *)(lVar7 + 8);
          iVar8 = 1;
          piVar11 = (int *)(lVar2 + 0x10);
          iVar12 = (int)(*(long *)(lVar7 + 0x10) - lVar2 >> 4);
          piVar6 = piVar11;
LAB_00116e03:
          if (iVar8 < iVar12) {
            iVar1 = *piVar6;
            piVar6 = piVar6 + 4;
            if (iVar1 != 0) break;
            do {
              if (*piVar11 == 0) {
                *piVar11 = 1;
              }
              piVar11 = piVar11 + 4;
            } while ((int *)(lVar2 + 0x20 + (ulong)(iVar12 - 2) * 0x10) != piVar11);
          }
        }
      }
    }
LAB_00116e38:
    if (*(code **)(lVar10 + 0x128) == isStruct) {
      if (1 < (byte)((char)this[8] - 0xfU)) {
        return;
      }
    }
    else {
      cVar5 = (**(code **)(lVar10 + 0x128))(this);
      if (cVar5 == '\0') {
        return;
      }
    }
    lVar10 = *(long *)(*(long *)(this + 0x68) + 0x10);
    lVar7 = *(long *)(*(long *)(this + 0x68) + 8);
    if (lVar10 == lVar7) {
      return;
    }
    iVar8 = (int)(lVar10 - lVar7 >> 5);
    iVar12 = iVar8 + -1;
    if (0 < iVar12) {
      lVar10 = 0;
      while( true ) {
        adoptImplicitArraySizes(*(TType **)(lVar7 + lVar10),false);
        lVar7 = *(long *)(*(long *)(this + 0x68) + 8);
        if ((ulong)(iVar8 - 2) << 5 == lVar10) break;
        lVar10 = lVar10 + 0x20;
      }
    }
    pTVar4 = *(TType **)(lVar7 + (long)iVar12 * 0x20);
    if (*(code **)(*(long *)this + 0x50) == getQualifier) {
      pTVar9 = this + 0x10;
    }
    else {
      pTVar9 = (TType *)(**(code **)(*(long *)this + 0x50))(this);
    }
    param_1 = ((byte)pTVar9[8] & 0x7f) == 6;
    this = pTVar4;
  } while( true );
  iVar8 = iVar8 + 1;
  goto LAB_00116e03;
}



/* glslang::TType::sameArrayness(glslang::TType const&) const */

ulong __thiscall glslang::TType::sameArrayness(TType *this,TType *param_1)

{
  long lVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  
  lVar4 = *(long *)(this + 0x60);
  lVar6 = *(long *)(param_1 + 0x60);
  if (lVar4 == 0) {
    return (ulong)(lVar6 == 0);
  }
  if (lVar6 != 0) {
    lVar1 = *(long *)(lVar4 + 8);
    lVar6 = *(long *)(lVar6 + 8);
    if (lVar1 == 0) {
      if (lVar6 == 0) {
        return 1;
      }
    }
    else if (lVar6 != 0) {
      piVar2 = *(int **)(lVar1 + 0x10);
      piVar7 = *(int **)(lVar1 + 8);
      piVar8 = *(int **)(lVar6 + 8);
      if ((long)piVar2 - (long)piVar7 == *(long *)(lVar6 + 0x10) - (long)piVar8) {
        for (; piVar7 != piVar2; piVar7 = piVar7 + 4) {
          if (*piVar7 != *piVar8) {
LAB_001171d0:
            lVar4 = *(long *)(this + 0x60);
            goto LAB_00117088;
          }
          plVar5 = *(long **)(piVar7 + 2);
          plVar3 = *(long **)(piVar8 + 2);
          if (plVar5 != (long *)0x0) {
            if (((plVar3 != (long *)0x0) &&
                (lVar4 = (**(code **)(*plVar5 + 0x60))(plVar5), lVar4 != 0)) &&
               (lVar4 = (**(code **)(*plVar3 + 0x60))(plVar3), lVar4 != 0)) {
              plVar5 = (long *)(**(code **)(*plVar5 + 0x60))(plVar5);
              if (*(code **)(*plVar5 + 0x180) == TIntermSymbol::getId) {
                lVar4 = plVar5[0x17];
              }
              else {
                lVar4 = (**(code **)(*plVar5 + 0x180))(plVar5);
              }
              plVar5 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3);
              if (*(code **)(*plVar5 + 0x180) == TIntermSymbol::getId) {
                lVar6 = plVar5[0x17];
              }
              else {
                lVar6 = (**(code **)(*plVar5 + 0x180))(plVar5);
              }
              if (lVar4 == lVar6) goto LAB_001171de;
            }
            goto LAB_001171d0;
          }
          if (plVar3 != (long *)0x0) goto LAB_001171d0;
LAB_001171de:
          piVar8 = piVar8 + 4;
        }
      }
      else {
LAB_00117088:
        if ((*(char *)(lVar4 + 0x14) == '\0') ||
           (*(char *)(*(long *)(param_1 + 0x60) + 0x14) == '\0')) {
          return 0;
        }
        if (*(int *)(*(long *)(param_1 + 0x60) + 0x10) != 0) {
          return CONCAT71((int7)((ulong)lVar4 >> 8),*(int *)(lVar4 + 0x10) == 0);
        }
      }
      return 1;
    }
    if ((*(char *)(lVar4 + 0x14) != '\0') && (*(char *)(*(long *)(param_1 + 0x60) + 0x14) != '\0'))
    {
      if (*(int *)(*(long *)(param_1 + 0x60) + 0x10) == 0) {
        return 1;
      }
      return (ulong)CONCAT31((int3)((uint)*(int *)(lVar4 + 0x10) >> 8),*(int *)(lVar4 + 0x10) == 0);
    }
  }
  return 0;
}



/* glslang::SameSpecializationConstants(glslang::TIntermTyped*, glslang::TIntermTyped*) */

bool glslang::SameSpecializationConstants(TIntermTyped *param_1,TIntermTyped *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = (**(code **)(*(long *)param_1 + 0x60))();
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*(long *)param_2 + 0x60))(param_2);
    if (lVar1 != 0) {
      plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x60))(param_1);
      if (*(code **)(*plVar2 + 0x180) == TIntermSymbol::getId) {
        lVar1 = plVar2[0x17];
      }
      else {
        lVar1 = (**(code **)(*plVar2 + 0x180))();
      }
      plVar2 = (long *)(**(code **)(*(long *)param_2 + 0x60))(param_2);
      if (*(code **)(*plVar2 + 0x180) == TIntermSymbol::getId) {
        lVar3 = plVar2[0x17];
      }
      else {
        lVar3 = (**(code **)(*plVar2 + 0x180))();
      }
      return lVar1 == lVar3;
    }
  }
  return false;
}



/* glslang::TType::TEMPNAMEPLACEHOLDERVALUE(glslang::TType const&) const */

ulong __thiscall glslang::TType::operator==(TType *this,TType *param_1)

{
  TType TVar1;
  TType TVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  TIntermTyped *pTVar8;
  size_t __n;
  TSpirvTypeParameter *pTVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  int *piVar14;
  TSpirvTypeParameter *pTVar15;
  TSpirvTypeParameter *this_00;
  int *piVar16;
  
  if (this[8] != param_1[8]) {
    return 0;
  }
  if (this[8] == (TType)0xe) {
    if (*(short *)(this + 0x80) != *(short *)(param_1 + 0x80)) {
      return 0;
    }
    TVar2 = this[0x82];
    if ((((byte)param_1[0x82] ^ (byte)TVar2) & 3) != 0) {
      return 0;
    }
    TVar1 = param_1[0x82];
    if (((byte)TVar2 >> 2 & 1) != ((byte)TVar1 >> 2 & 1)) {
      return 0;
    }
    if (((byte)TVar2 >> 3 & 1) != ((byte)TVar1 >> 3 & 1)) {
      return 0;
    }
    if (((byte)TVar2 >> 4 & 1) != ((byte)TVar1 >> 4 & 1)) {
      return 0;
    }
    if (((byte)TVar2 >> 5 & 1) != ((byte)TVar1 >> 5 & 1)) {
      return 0;
    }
    if (((byte)this[0x83] >> 5 & 1) != ((byte)param_1[0x83] >> 5 & 1)) {
      return 0;
    }
    if (((byte)this[0x83] >> 6 & 1) != ((byte)param_1[0x83] >> 6 & 1)) {
      return 0;
    }
  }
  if ((((((((byte)this[9] ^ (byte)param_1[9]) & 0xf) == 0) &&
        (((byte)this[9] ^ (byte)param_1[9]) < 0x10)) &&
       (TVar2 = this[10], (((byte)param_1[10] ^ (byte)TVar2) & 0x1f) == 0)) &&
      ((((byte)TVar2 >> 5 & 1) == ((byte)param_1[10] >> 5 & 1) &&
       (((byte)TVar2 >> 6 & 1) == ((byte)param_1[10] >> 6 & 1))))) &&
     ((cVar10 = sameStructType(this,param_1,(int *)0x0,(int *)0x0), cVar10 != '\0' &&
      (cVar10 = sameReferenceType(this,param_1), cVar10 != '\0')))) {
    uVar11 = sameArrayness(this,param_1);
    if ((char)uVar11 != '\0') {
      piVar3 = *(int **)(this + 0x88);
      piVar4 = *(int **)(param_1 + 0x88);
      if (piVar3 == (int *)0x0) {
        if (piVar4 != (int *)0x0) {
          return 0;
        }
      }
      else {
        if (piVar4 == (int *)0x0) {
          return 0;
        }
        if (*piVar3 != *piVar4) {
          return 0;
        }
        lVar5 = *(long *)(*(long *)(piVar3 + 2) + 8);
        lVar6 = *(long *)(*(long *)(piVar4 + 2) + 8);
        if (lVar5 == 0) {
          if (lVar6 != 0) {
            return 0;
          }
        }
        else {
          if (lVar6 == 0) {
            return 0;
          }
          piVar7 = *(int **)(lVar5 + 0x10);
          piVar16 = *(int **)(lVar5 + 8);
          piVar14 = *(int **)(lVar6 + 8);
          if ((long)piVar7 - (long)piVar16 != *(long *)(lVar6 + 0x10) - (long)piVar14) {
            return 0;
          }
          for (; piVar16 != piVar7; piVar16 = piVar16 + 4) {
            if (*piVar16 != *piVar14) {
              return 0;
            }
            pTVar8 = *(TIntermTyped **)(piVar14 + 2);
            if (*(TIntermTyped **)(piVar16 + 2) == (TIntermTyped *)0x0) {
              if (pTVar8 != (TIntermTyped *)0x0) {
                return 0;
              }
            }
            else {
              if (pTVar8 == (TIntermTyped *)0x0) {
                return 0;
              }
              cVar10 = SameSpecializationConstants(*(TIntermTyped **)(piVar16 + 2),pTVar8);
              if (cVar10 == '\0') {
                return 0;
              }
            }
            piVar14 = piVar14 + 4;
          }
        }
        if ((*piVar3 == 0x16) &&
           (cVar10 = TSpirvType::operator==
                               (*(TSpirvType **)(piVar3 + 4),*(TSpirvType **)(piVar4 + 4)),
           cVar10 == '\0')) {
          return 0;
        }
      }
      if (((*(ushort *)(this + 10) ^ *(ushort *)(param_1 + 10)) & 0x380) == 0) {
        lVar5 = *(long *)(param_1 + 0x90);
        lVar6 = *(long *)(this + 0x90);
        if (lVar6 == 0) {
          return (ulong)CONCAT11((char)((*(ushort *)(this + 10) ^ *(ushort *)(param_1 + 10)) >> 8),
                                 lVar5 == 0);
        }
        if ((lVar5 != 0) && (__n = *(size_t *)(lVar6 + 0x10), __n == *(size_t *)(lVar5 + 0x10))) {
          if (((__n == 0) ||
              (iVar12 = memcmp(*(void **)(lVar6 + 8),*(void **)(lVar5 + 8),__n), iVar12 == 0)) &&
             (*(int *)(lVar6 + 0x28) == *(int *)(lVar5 + 0x28))) {
            pTVar9 = *(TSpirvTypeParameter **)(lVar6 + 0x40);
            this_00 = *(TSpirvTypeParameter **)(lVar6 + 0x38);
            pTVar15 = *(TSpirvTypeParameter **)(lVar5 + 0x38);
            if ((long)pTVar9 - (long)this_00 == *(long *)(lVar5 + 0x40) - (long)pTVar15) {
              while( true ) {
                if (this_00 == pTVar9) {
                  return (ulong)uVar11;
                }
                uVar13 = glslang::TSpirvTypeParameter::operator==(this_00,pTVar15);
                if ((char)uVar13 == '\0') break;
                this_00 = this_00 + 0x10;
                pTVar15 = pTVar15 + 0x10;
              }
              return uVar13;
            }
          }
        }
      }
    }
  }
  return 0;
}



/* WARNING: Type propagation algorithm not settling */
/* glslang::TType::sameStructType(glslang::TType const&, int*, int*) const */

undefined8 __thiscall
glslang::TType::sameStructType(TType *this,TType *param_1,int *param_2,int *param_3)

{
  size_t sVar1;
  bool bVar2;
  TType TVar3;
  char cVar4;
  int iVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  TType *this_00;
  
  if (param_2 != (int *)0x0) {
    *param_2 = -1;
    *param_3 = -1;
  }
  if (*(code **)(*(long *)this + 0x128) != isStruct) {
    cVar4 = (**(code **)(*(long *)this + 0x128))(this);
    if (cVar4 == '\0') {
      pcVar6 = *(code **)(*(long *)param_1 + 0x128);
      if (pcVar6 != isStruct) goto LAB_00117a48;
LAB_001176fa:
      if (1 < (byte)((char)param_1[8] - 0xfU)) {
        return 1;
      }
    }
LAB_0011770a:
    if (*(code **)(*(long *)this + 0x128) == isStruct) {
      TVar3 = this[8];
      goto LAB_00117722;
    }
    cVar4 = (**(code **)(*(long *)this + 0x128))(this);
    if (cVar4 != '\0') goto LAB_0011772a;
    goto LAB_00117745;
  }
  TVar3 = this[8];
  if (1 < (byte)((char)TVar3 - 0xfU)) {
    pcVar6 = *(code **)(*(long *)param_1 + 0x128);
    if (pcVar6 == isStruct) goto LAB_001176fa;
LAB_00117a48:
    cVar4 = (*pcVar6)(param_1);
    if (cVar4 == '\0') {
      return 1;
    }
    goto LAB_0011770a;
  }
LAB_00117722:
  if ((byte)((char)TVar3 - 0xfU) < 2) {
LAB_0011772a:
    if (*(code **)(*(long *)param_1 + 0x128) == isStruct) {
      if ((byte)((char)param_1[8] - 0xfU) < 2) {
LAB_001177b0:
        if (*(long *)(this + 0x68) == *(long *)(param_1 + 0x68)) {
          return 1;
        }
      }
    }
    else {
      cVar4 = (**(code **)(*(long *)param_1 + 0x128))(param_1);
      if (cVar4 != '\0') goto LAB_001177b0;
    }
LAB_00117745:
    if (*(code **)(*(long *)this + 0x128) == isStruct) {
      TVar3 = this[8];
      goto LAB_0011775d;
    }
    cVar4 = (**(code **)(*(long *)this + 0x128))(this);
    if (cVar4 == '\0') {
      return 0;
    }
    pcVar6 = *(code **)(*(long *)param_1 + 0x128);
    if (pcVar6 != isStruct) goto LAB_00117a30;
  }
  else {
LAB_0011775d:
    if (1 < (byte)((char)TVar3 - 0xfU)) {
      return 0;
    }
    pcVar6 = *(code **)(*(long *)param_1 + 0x128);
    if (pcVar6 != isStruct) {
LAB_00117a30:
      cVar4 = (*pcVar6)(param_1);
      if (cVar4 == '\0') {
        return 0;
      }
      goto LAB_00117783;
    }
  }
  if (1 < (byte)((char)param_1[8] - 0xfU)) {
    return 0;
  }
LAB_00117783:
  sVar1 = *(size_t *)(*(long *)(this + 0x78) + 0x10);
  if (sVar1 == *(size_t *)(*(long *)(param_1 + 0x78) + 0x10)) {
    plVar14 = *(long **)(*(long *)(this + 0x78) + 8);
    if (sVar1 == 0) {
      bVar2 = false;
    }
    else {
      iVar5 = memcmp(plVar14,*(void **)(*(long *)(param_1 + 0x78) + 8),sVar1);
      if (iVar5 != 0) {
        return 0;
      }
      bVar2 = false;
      if (sVar1 == 0xc) {
        if ((*plVar14 != 0x65567265505f6c67) || (bVar2 = false, (int)plVar14[1] != 0x78657472)) {
          bVar2 = true;
        }
        bVar2 = !bVar2;
      }
    }
    lVar9 = *(long *)(this + 0x68);
    lVar12 = *(long *)(lVar9 + 8);
    lVar16 = *(long *)(*(long *)(param_1 + 0x68) + 0x10);
    lVar7 = *(long *)(lVar9 + 0x10);
    lVar8 = *(long *)(*(long *)(param_1 + 0x68) + 8);
    if (((param_2 != (int *)0x0) || (lVar16 - lVar8 == lVar7 - lVar12)) || (bVar2)) {
      uVar10 = 0;
      uVar11 = 0;
LAB_00117860:
      uVar13 = lVar16 - lVar8 >> 5;
      if (uVar11 < (ulong)(lVar7 - lVar12 >> 5)) {
        if (param_2 != (int *)0x0) {
          *param_2 = (int)uVar11;
          *param_3 = (int)uVar10;
        }
        lVar15 = uVar11 * 0x20;
        if (uVar13 <= uVar10) {
          plVar14 = *(long **)(lVar12 + lVar15);
          pcVar6 = *(code **)(*plVar14 + 0x18);
          if (pcVar6 == hiddenMember) {
            if ((char)plVar14[1] == '\0') goto LAB_00117ba0;
            pcVar6 = *(code **)(*plVar14 + 0x30);
            if (pcVar6 == getFieldName_abi_cxx11_) goto LAB_00117b3f;
LAB_00117c90:
            lVar9 = (*pcVar6)();
            lVar12 = *(long *)(lVar9 + 0x10);
          }
          else {
            cVar4 = (*pcVar6)();
            if (cVar4 != '\0') goto LAB_00117c22;
            plVar14 = *(long **)(*(long *)(*(long *)(this + 0x68) + 8) + lVar15);
            pcVar6 = *(code **)(*plVar14 + 0x30);
            if (pcVar6 != getFieldName_abi_cxx11_) goto LAB_00117c90;
LAB_00117b3f:
            lVar9 = plVar14[0xe];
            lVar12 = *(long *)(lVar9 + 0x10);
          }
          if (lVar12 == 0x16) {
            plVar14 = *(long **)(lVar9 + 8);
            if ((*plVar14 != 0x6e6f6365535f6c67 || plVar14[1] != 0x69736f5079726164) ||
               (*(long *)((long)plVar14 + 0xe) != 0x564e6e6f69746973)) goto LAB_00117b80;
          }
          else if ((lVar12 != 0x14) ||
                  ((plVar14 = *(long **)(lVar9 + 8),
                   *plVar14 != 0x7469736f505f6c67 || plVar14[1] != 0x69567265506e6f69 ||
                   ((int)plVar14[2] != 0x564e7765)))) {
LAB_00117b80:
            if (param_2 == (int *)0x0) {
              return 0;
            }
            *param_3 = -1;
            return 0;
          }
          goto LAB_00117c22;
        }
        lVar16 = uVar10 * 0x20;
        pcVar6 = *(code **)(**(long **)(lVar8 + lVar16) + 0x30);
        if (pcVar6 == getFieldName_abi_cxx11_) {
          lVar7 = (*(long **)(lVar8 + lVar16))[0xe];
        }
        else {
          lVar7 = (*pcVar6)();
          lVar9 = *(long *)(this + 0x68);
          lVar12 = *(long *)(lVar9 + 8);
        }
        this_00 = *(TType **)(lVar12 + lVar15);
        if (*(code **)(*(long *)this_00 + 0x30) == getFieldName_abi_cxx11_) {
          lVar8 = *(long *)(this_00 + 0x70);
        }
        else {
          lVar8 = (**(code **)(*(long *)this_00 + 0x30))(this_00);
          lVar9 = *(long *)(this + 0x68);
          lVar12 = *(long *)(lVar9 + 8);
          this_00 = *(TType **)(lVar12 + lVar15);
        }
        sVar1 = *(size_t *)(lVar8 + 0x10);
        if (sVar1 == *(size_t *)(lVar7 + 0x10)) {
          if ((sVar1 == 0) ||
             (iVar5 = memcmp(*(void **)(lVar8 + 8),*(void **)(lVar7 + 8),sVar1), iVar5 == 0)) {
            cVar4 = operator==(this_00,*(TType **)
                                        (*(long *)(*(long *)(param_1 + 0x68) + 8) + lVar16));
            if (cVar4 == '\0') {
              return 0;
            }
            goto LAB_00117c22;
          }
        }
        if (*(code **)(*(long *)this_00 + 0x18) == hiddenMember) {
          if (this_00[8] != (TType)0x0) goto LAB_0011790e;
LAB_00117de0:
          lVar7 = *(long *)(lVar9 + 0x10);
          uVar11 = uVar11 + 1;
          lVar16 = *(long *)(*(long *)(param_1 + 0x68) + 0x10);
          lVar8 = *(long *)(*(long *)(param_1 + 0x68) + 8);
          goto LAB_00117860;
        }
        cVar4 = (**(code **)(*(long *)this_00 + 0x18))(this_00);
        if (cVar4 != '\0') {
          lVar9 = *(long *)(this + 0x68);
          lVar12 = *(long *)(lVar9 + 8);
          goto LAB_00117de0;
        }
LAB_0011790e:
        lVar12 = *(long *)(param_1 + 0x68);
        lVar8 = *(long *)(lVar12 + 8);
        pcVar6 = *(code **)(**(long **)(lVar8 + lVar16) + 0x18);
        if (pcVar6 == hiddenMember) {
          if ((char)(*(long **)(lVar8 + lVar16))[1] == '\0') {
LAB_00117ea0:
            lVar9 = *(long *)(this + 0x68);
            lVar16 = *(long *)(lVar12 + 0x10);
            uVar10 = uVar10 + 1;
            lVar7 = *(long *)(lVar9 + 0x10);
            lVar12 = *(long *)(lVar9 + 8);
            goto LAB_00117860;
          }
        }
        else {
          cVar4 = (*pcVar6)();
          if (cVar4 != '\0') {
            lVar12 = *(long *)(param_1 + 0x68);
            lVar8 = *(long *)(lVar12 + 8);
            goto LAB_00117ea0;
          }
        }
        if (!bVar2) {
          return 0;
        }
        plVar14 = *(long **)(*(long *)(*(long *)(this + 0x68) + 8) + lVar15);
        pcVar6 = *(code **)(*plVar14 + 0x30);
        if (pcVar6 == getFieldName_abi_cxx11_) {
          lVar9 = plVar14[0xe];
        }
        else {
          lVar9 = (*pcVar6)();
        }
        if (*(long *)(lVar9 + 0x10) == 0x16) {
          plVar14 = *(long **)(lVar9 + 8);
          if ((*plVar14 == 0x6e6f6365535f6c67 && plVar14[1] == 0x69736f5079726164) &&
             (*(long *)((long)plVar14 + 0xe) == 0x564e6e6f69746973)) goto LAB_00117c2a;
LAB_001179a8:
          lVar12 = *(long *)(param_1 + 0x68);
          lVar8 = *(long *)(lVar12 + 8);
          pcVar6 = *(code **)(**(long **)(lVar8 + lVar16) + 0x30);
          if (pcVar6 == getFieldName_abi_cxx11_) {
            lVar15 = (*(long **)(lVar8 + lVar16))[0xe];
          }
          else {
            lVar15 = (*pcVar6)();
            lVar12 = *(long *)(param_1 + 0x68);
            lVar8 = *(long *)(lVar12 + 8);
          }
          lVar9 = *(long *)(this + 0x68);
          uVar10 = uVar10 + 1;
          lVar16 = *(long *)(lVar12 + 0x10);
          lVar7 = *(long *)(lVar9 + 0x10);
          lVar12 = *(long *)(lVar9 + 8);
          if (*(long *)(lVar15 + 0x10) == 0x16) {
            plVar14 = *(long **)(lVar15 + 8);
            if ((*plVar14 == 0x6e6f6365535f6c67 && plVar14[1] == 0x69736f5079726164) &&
               (*(long *)((long)plVar14 + 0xe) == 0x564e6e6f69746973)) goto LAB_00117860;
          }
          else if ((*(long *)(lVar15 + 0x10) == 0x14) &&
                  ((plVar14 = *(long **)(lVar15 + 8),
                   *plVar14 == 0x7469736f505f6c67 && plVar14[1] == 0x69567265506e6f69 &&
                   ((int)plVar14[2] == 0x564e7765)))) goto LAB_00117860;
          uVar11 = uVar11 + 1;
          goto LAB_00117860;
        }
        if (((*(long *)(lVar9 + 0x10) != 0x14) ||
            (plVar14 = *(long **)(lVar9 + 8),
            *plVar14 != 0x7469736f505f6c67 || plVar14[1] != 0x69567265506e6f69)) ||
           ((int)plVar14[2] != 0x564e7765)) goto LAB_001179a8;
      }
      else {
        if (uVar13 <= uVar10) {
          return 1;
        }
        if (param_2 != (int *)0x0) {
          *param_2 = (int)uVar11;
          *param_3 = (int)uVar10;
        }
        plVar14 = *(long **)(lVar8 + uVar10 * 0x20);
        pcVar6 = *(code **)(*plVar14 + 0x18);
        if (pcVar6 == hiddenMember) {
          if ((char)plVar14[1] == '\0') {
LAB_00117ba0:
            uVar11 = uVar11 + 1;
            uVar10 = uVar10 + 1;
            goto LAB_00117860;
          }
          pcVar6 = *(code **)(*plVar14 + 0x30);
          if (pcVar6 == getFieldName_abi_cxx11_) goto LAB_00117ab1;
LAB_00117d40:
          lVar9 = (*pcVar6)();
          lVar12 = *(long *)(lVar9 + 0x10);
        }
        else {
          cVar4 = (*pcVar6)();
          if (cVar4 != '\0') goto LAB_00117c22;
          plVar14 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 8) + uVar10 * 0x20);
          pcVar6 = *(code **)(*plVar14 + 0x30);
          if (pcVar6 != getFieldName_abi_cxx11_) goto LAB_00117d40;
LAB_00117ab1:
          lVar9 = plVar14[0xe];
          lVar12 = *(long *)(lVar9 + 0x10);
        }
        if (lVar12 == 0x16) {
          plVar14 = *(long **)(lVar9 + 8);
          if ((*plVar14 != 0x6e6f6365535f6c67 || plVar14[1] != 0x69736f5079726164) ||
             (*(long *)((long)plVar14 + 0xe) != 0x564e6e6f69746973)) goto LAB_00117af8;
        }
        else if ((lVar12 != 0x14) ||
                ((plVar14 = *(long **)(lVar9 + 8),
                 *plVar14 != 0x7469736f505f6c67 || plVar14[1] != 0x69567265506e6f69 ||
                 ((int)plVar14[2] != 0x564e7765)))) {
LAB_00117af8:
          if (param_2 == (int *)0x0) {
            return 0;
          }
          *param_2 = -1;
          return 0;
        }
LAB_00117c22:
        uVar10 = uVar10 + 1;
      }
LAB_00117c2a:
      uVar11 = uVar11 + 1;
      lVar9 = *(long *)(this + 0x68);
      lVar7 = *(long *)(lVar9 + 0x10);
      lVar16 = *(long *)(*(long *)(param_1 + 0x68) + 0x10);
      lVar12 = *(long *)(lVar9 + 8);
      lVar8 = *(long *)(*(long *)(param_1 + 0x68) + 8);
      goto LAB_00117860;
    }
  }
  return 0;
}



/* glslang::TType::sameReferenceType(glslang::TType const&) const */

undefined8 __thiscall glslang::TType::sameReferenceType(TType *this,TType *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (*(code **)(*(long *)this + 0x38) == getBasicType) {
    uVar2 = (uint)(byte)this[8];
  }
  else {
    uVar2 = (**(code **)(*(long *)this + 0x38))();
  }
  if (*(code **)(*(long *)param_1 + 0x38) == getBasicType) {
    uVar1 = (uint)(byte)param_1[8];
  }
  else {
    uVar1 = (**(code **)(*(long *)param_1 + 0x38))(param_1);
  }
  if ((uVar1 == 0x12) == (uVar2 == 0x12)) {
    if (*(code **)(*(long *)this + 0x38) == getBasicType) {
      uVar2 = (uint)(byte)this[8];
    }
    else {
      uVar2 = (**(code **)(*(long *)this + 0x38))(this);
    }
    if (uVar2 != 0x12) {
      if (*(code **)(*(long *)param_1 + 0x38) == getBasicType) {
        uVar2 = (uint)(byte)param_1[8];
      }
      else {
        uVar2 = (**(code **)(*(long *)param_1 + 0x38))(param_1);
      }
      if (uVar2 != 0x12) {
        return 1;
      }
    }
    if (*(TType **)(this + 0x68) == *(TType **)(param_1 + 0x68)) {
      return 1;
    }
    uVar3 = operator==(*(TType **)(this + 0x68),*(TType **)(param_1 + 0x68));
    return uVar3;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void std::__detail::__to_chars_10_impl<unsigned int>(char*, unsigned int, unsigned int) */

void std::__detail::__to_chars_10_impl<unsigned_int>(char *param_1,uint param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long in_FS_OFFSET;
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
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  char cStack_28;
  char acStack_27 [23];
  long local_10;
  
  uVar5 = param_2 - 1;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = __LC203;
  uStack_e0 = _UNK_00120f68;
  local_d8 = __LC204;
  uStack_d0 = _UNK_00120f78;
  local_c8 = __LC205;
  uStack_c0 = _UNK_00120f88;
  local_b8 = __LC206;
  uStack_b0 = _UNK_00120f98;
  local_a8 = __LC207;
  uStack_a0 = _UNK_00120fa8;
  local_98 = __LC208;
  uStack_90 = _UNK_00120fb8;
  local_88 = __LC209;
  uStack_80 = _UNK_00120fc8;
  local_78 = __LC210;
  uStack_70 = _UNK_00120fd8;
  local_68 = __LC211;
  uStack_60 = _UNK_00120fe8;
  local_58 = __LC212;
  uStack_50 = _UNK_00120ff8;
  local_48 = __LC213;
  uStack_40 = _UNK_00121008;
  local_38 = __LC214;
  uStack_30 = (undefined1)_UNK_00121018;
  uStack_2f = (undefined7)_LC215._0_8_;
  cStack_28 = SUB81(_LC215._0_8_,7);
  acStack_27._0_8_ = _LC215._8_8_;
  uVar3 = (ulong)param_3;
  if (99 < param_3) {
    do {
      param_3 = (uint)(uVar3 / 100);
      uVar2 = (uint)uVar3;
      uVar4 = (uVar2 + param_3 * -100) * 2;
      cVar1 = *(char *)((long)&local_e8 + (ulong)uVar4);
      param_1[uVar5] = *(char *)((long)&local_e8 + (ulong)(uVar4 + 1));
      uVar4 = uVar5 - 1;
      uVar5 = uVar5 - 2;
      param_1[uVar4] = cVar1;
      uVar3 = uVar3 / 100;
    } while (9999 < uVar2);
  }
  cVar1 = (char)param_3 + '0';
  if (9 < param_3) {
    param_1[1] = *(char *)((long)&local_e8 + (ulong)(param_3 * 2 + 1));
    cVar1 = *(char *)((long)&local_e8 + (ulong)(param_3 * 2));
  }
  *param_1 = cVar1;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::basic_string<glslang::std::allocator<char> >(char const*, glslang::std::allocator<char>
   const&) */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
basic_string<glslang::std::allocator<char>>
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          char *param_1,allocator *param_2)

{
  size_t sVar1;
  
  *(undefined8 *)this = *(undefined8 *)param_2;
  *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8) =
       this + 0x18;
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    _M_construct<char_const*>(this,param_1,param_1 + sVar1);
    return;
  }
  std::__throw_logic_error("basic_string: construction from null is not valid");
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          basic_string *param_1)

{
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> bVar1;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *__src;
  ulong __n;
  ulong uVar2;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *__dest;
  
  uVar2 = glslang::GetThreadPoolAllocator();
  __dest = this + 0x18;
  *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8) = __dest;
  __src = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(param_1 + 8)
  ;
  __n = *(ulong *)(param_1 + 0x10);
  *(ulong *)this = uVar2;
  if (__n < 0x10) {
    if (__n == 1) {
      bVar1 = *__src;
      *(undefined8 *)(this + 0x10) = 1;
      this[0x18] = bVar1;
      this[0x19] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
      return;
    }
    if (__n == 0) {
      *(undefined8 *)(this + 0x10) = 0;
      *__dest = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
      return;
    }
  }
  else {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    __dest = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
             glslang::TPoolAllocator::allocate(uVar2);
    *(ulong *)(this + 0x18) = __n;
    *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8) = __dest
    ;
  }
  memcpy(__dest,__src,__n);
  *(ulong *)(this + 0x10) = __n;
  *(undefined1 *)(*(long *)(this + 8) + __n) = 0;
  return;
}



/* bool glslang::TType::contains<glslang::TType::containsSampler() const::{lambda(glslang::TType
   const*)#1}>(glslang::TType::containsSampler() const::{lambda(glslang::TType const*)#1}) const */

bool glslang::TType::
     contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
               (long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0x168) == isTexture) {
    if ((char)param_1[1] == '\x0e') {
      if (*(code **)(lVar2 + 0x40) == getSampler) {
        plVar4 = param_1 + 0x10;
      }
      else {
        plVar4 = (long *)(**(code **)(lVar2 + 0x40))();
      }
      if (((*plVar4 & 0x200000) == 0) && ((*plVar4 & 0x80000) == 0)) {
        return true;
      }
      goto LAB_001197b0;
    }
    pcVar5 = *(code **)(lVar2 + 0x158);
    if (pcVar5 != isImage) goto LAB_00119800;
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x168))();
    if (cVar1 != '\0') {
      return true;
    }
LAB_001197b0:
    lVar2 = *param_1;
    pcVar5 = *(code **)(lVar2 + 0x158);
    if (pcVar5 == isImage) {
      if ((char)param_1[1] != '\x0e') goto LAB_0011971f;
      if (*(code **)(lVar2 + 0x40) == getSampler) {
        plVar4 = param_1 + 0x10;
      }
      else {
        plVar4 = (long *)(**(code **)(lVar2 + 0x40))(param_1);
      }
      if (((*plVar4 & 0x80000) != 0) && (1 < (byte)(*(char *)((long)plVar4 + 1) - 7U))) {
        return true;
      }
    }
    else {
LAB_00119800:
      cVar1 = (*pcVar5)(param_1);
      if (cVar1 != '\0') {
        return true;
      }
    }
    lVar2 = *param_1;
  }
LAB_0011971f:
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)param_1[1] - 0xfU) < 2) {
LAB_00119751:
      lVar2 = *(long *)(param_1[0xd] + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(param_1[0xd] + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(param_1);
    if (cVar1 != '\0') goto LAB_00119751;
  }
  return false;
}



/* glslang::TType::containsSampler() const */

bool __thiscall glslang::TType::containsSampler(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  TType *pTVar4;
  code *pcVar5;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0x168) == isTexture) {
    if (this[8] == (TType)0xe) {
      if (*(code **)(lVar2 + 0x40) == getSampler) {
        pTVar4 = this + 0x80;
      }
      else {
        pTVar4 = (TType *)(**(code **)(lVar2 + 0x40))();
      }
      if ((((byte)pTVar4[2] & 0x20) == 0) && (((byte)pTVar4[2] & 8) == 0)) {
        return true;
      }
      goto LAB_00119900;
    }
    pcVar5 = *(code **)(lVar2 + 0x158);
    if (pcVar5 != isImage) goto LAB_00119950;
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x168))();
    if (cVar1 != '\0') {
      return true;
    }
LAB_00119900:
    lVar2 = *(long *)this;
    pcVar5 = *(code **)(lVar2 + 0x158);
    if (pcVar5 == isImage) {
      if (this[8] != (TType)0xe) goto LAB_0011986f;
      if (*(code **)(lVar2 + 0x40) == getSampler) {
        pTVar4 = this + 0x80;
      }
      else {
        pTVar4 = (TType *)(**(code **)(lVar2 + 0x40))(this);
      }
      if ((((byte)pTVar4[2] & 8) != 0) && (1 < (byte)((char)pTVar4[1] - 7U))) {
        return true;
      }
    }
    else {
LAB_00119950:
      cVar1 = (*pcVar5)(this);
      if (cVar1 != '\0') {
        return true;
      }
    }
    lVar2 = *(long *)this;
  }
LAB_0011986f:
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_001198a1:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_001198a1;
  }
  return false;
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_append(char const*, unsigned long) */

basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> * __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *__dest;
  ulong uVar3;
  
  __n = *(size_t *)(this + 0x10);
  __dest = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8);
  uVar1 = param_2 + __n;
  if (__dest == this + 0x18) {
    uVar2 = 0xf;
    if (0xf < uVar1) goto LAB_00119a10;
  }
  else {
    uVar2 = *(ulong *)(this + 0x18);
    if (uVar2 < uVar1) {
LAB_00119a10:
      if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("basic_string::_M_create");
      }
      uVar2 = uVar2 * 2;
      uVar3 = 0x7fffffffffffffff;
      if (uVar2 < 0x8000000000000000) {
        uVar3 = uVar2;
      }
      if (uVar2 <= uVar1) {
        uVar3 = uVar1;
      }
      __dest = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               glslang::TPoolAllocator::allocate(*(ulong *)this);
      if (__n != 0) {
        if (__n == 1) {
          *__dest = **(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                      (this + 8);
        }
        else {
          memcpy(__dest,*(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **
                         )(this + 8),__n);
        }
      }
      if ((param_1 != (char *)0x0) && (param_2 != 0)) {
        if (param_2 == 1) {
          __dest[__n] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)
                        *param_1;
        }
        else {
          memcpy(__dest + __n,param_1,param_2);
        }
      }
      *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8) =
           __dest;
      *(ulong *)(this + 0x18) = uVar3;
      goto LAB_001199dc;
    }
  }
  if (param_2 != 0) {
    if (param_2 == 1) {
      __dest[__n] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)
                    *param_1;
      __dest = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                (this + 8);
    }
    else {
      memcpy(__dest + __n,param_1,param_2);
      __dest = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                (this + 8);
    }
  }
LAB_001199dc:
  *(ulong *)(this + 0x10) = uVar1;
  __dest[uVar1] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
  return this;
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::append(char const*) */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  if (sVar1 <= 0x7fffffffffffffffU - *(long *)(this + 0x10)) {
    _M_append(this,param_1,sVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_length_error("basic_string::append");
}



/* glslang::TType::getCompleteString(bool, bool, bool, bool, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >) const::{lambda(unsigned
   int)#2}::TEMPNAMEPLACEHOLDERVALUE(unsigned int) const */

_func_getCompleteString_bool_bool_bool_bool_basic_string_basic_string * __thiscall
const::{lambda(unsigned_int)#2}::operator()(_lambda_unsigned_int__2_ *this,uint param_1)

{
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this_00;
  long *plVar1;
  size_t sVar2;
  char cVar3;
  long in_FS_OFFSET;
  long *local_48;
  uint local_40;
  long local_38 [3];
  long local_20;
  
  this_00 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)this;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 10) {
    cVar3 = '\x01';
  }
  else if (param_1 < 100) {
    cVar3 = '\x02';
  }
  else if (param_1 < 1000) {
    cVar3 = '\x03';
  }
  else if (param_1 < 10000) {
    cVar3 = '\x04';
  }
  else {
    cVar3 = '\x05';
    if (99999 < param_1) {
      if (param_1 < 1000000) {
        cVar3 = '\x05';
      }
      else {
        cVar3 = '\a';
        if (param_1 < 10000000) goto LAB_00119bd3;
        if (param_1 < 100000000) {
          cVar3 = '\b';
          goto LAB_00119bd3;
        }
        if (param_1 < 1000000000) {
          cVar3 = '\t';
          goto LAB_00119bd3;
        }
        cVar3 = '\t';
      }
      cVar3 = cVar3 + '\x01';
    }
  }
LAB_00119bd3:
  local_48 = local_38;
  std::__cxx11::string::_M_construct((ulong)&local_48,cVar3);
  std::__detail::__to_chars_10_impl<unsigned_int>((char *)local_48,local_40,param_1);
  plVar1 = local_48;
  sVar2 = strlen((char *)local_48);
  if (0x7fffffffffffffffU - *(long *)(this_00 + 0x10) < sVar2) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::append");
  }
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
            (this_00,(char *)plVar1,sVar2);
  if (local_48 != local_38) {
    operator_delete(local_48,local_38[0] + 1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (_func_getCompleteString_bool_bool_bool_bool_basic_string_basic_string *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TType::getCompleteString(bool, bool, bool, bool, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >)
   const::{lambda(int)#3}::TEMPNAMEPLACEHOLDERVALUE(int) const */

_func_getCompleteString_bool_bool_bool_bool_basic_string_basic_string * __thiscall
const::{lambda(int)#3}::operator()(_lambda_int__3_ *this,int param_1)

{
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this_00;
  long *plVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  long in_FS_OFFSET;
  long *local_58 [2];
  long local_48 [3];
  long local_30;
  
  this_00 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)this;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = -param_1;
  if (0 < param_1) {
    uVar4 = param_1;
  }
  if (uVar4 < 10) {
    uVar5 = 1;
  }
  else if (uVar4 < 100) {
    uVar5 = 2;
  }
  else if (uVar4 < 1000) {
    uVar5 = 3;
  }
  else if (uVar4 < 10000) {
    uVar5 = 4;
  }
  else {
    uVar5 = 5;
    if (99999 < uVar4) {
      if (uVar4 < 1000000) {
        iVar2 = 5;
      }
      else {
        uVar5 = 7;
        if (uVar4 < 10000000) goto LAB_00119d63;
        if (uVar4 < 100000000) {
          uVar5 = 8;
          goto LAB_00119d63;
        }
        if (uVar4 < 1000000000) {
          uVar5 = 9;
          goto LAB_00119d63;
        }
        iVar2 = 9;
      }
      uVar5 = iVar2 + 1;
    }
  }
LAB_00119d63:
  local_58[0] = local_48;
  std::__cxx11::string::_M_construct((ulong)local_58,(char)uVar5 - (char)(param_1 >> 0x1f));
  std::__detail::__to_chars_10_impl<unsigned_int>
            ((char *)((long)local_58[0] + (ulong)((uint)param_1 >> 0x1f)),uVar5,uVar4);
  plVar1 = local_58[0];
  sVar3 = strlen((char *)local_58[0]);
  if (0x7fffffffffffffffU - *(long *)(this_00 + 0x10) < sVar3) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::append");
  }
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
            (this_00,(char *)plVar1,sVar3);
  if (local_58[0] != local_48) {
    operator_delete(local_58[0],local_48[0] + 1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (_func_getCompleteString_bool_bool_bool_bool_basic_string_basic_string *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TSampler::getString[abi:cxx11]() const */

void glslang::TSampler::getString_abi_cxx11_(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  ulong *__dest;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  undefined1 *in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  undefined8 local_88;
  uint *local_80;
  undefined8 local_78;
  uint local_70 [6];
  ulong local_58;
  ulong *local_50;
  long local_48;
  ulong local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = glslang::GetThreadPoolAllocator();
  bVar3 = in_RSI[2];
  local_78 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  local_80 = local_70;
  if ((bVar3 & 0x20) != 0) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "sampler",7);
    *in_RDI = local_88;
    in_RDI[1] = in_RDI + 3;
    if (local_80 == local_70) {
      uVar5 = local_78 + 1;
      uVar4 = (uint)uVar5;
      if (uVar4 < 8) {
        if ((uVar5 & 4) == 0) {
          if ((uVar4 != 0) && (*(char *)(in_RDI + 3) = (char)*local_80, (uVar5 & 2) != 0)) {
            *(undefined2 *)((long)in_RDI + (uVar5 & 0xffffffff) + 0x16) =
                 *(undefined2 *)((long)local_80 + ((uVar5 & 0xffffffff) - 2));
          }
        }
        else {
          *(uint *)(in_RDI + 3) = *local_80;
          *(undefined4 *)((long)in_RDI + (uVar5 & 0xffffffff) + 0x14) =
               *(undefined4 *)((long)local_80 + ((uVar5 & 0xffffffff) - 4));
        }
      }
      else {
        in_RDI[3] = *(undefined8 *)local_80;
        *(undefined8 *)((long)in_RDI + (uVar5 & 0xffffffff) + 0x10) =
             *(undefined8 *)((long)local_80 + ((uVar5 & 0xffffffff) - 8));
        lVar10 = (long)(in_RDI + 3) - ((ulong)(in_RDI + 4) & 0xfffffffffffffff8);
        uVar4 = uVar4 + (int)lVar10 & 0xfffffff8;
        if (7 < uVar4) {
          uVar5 = 0;
          do {
            uVar7 = (int)uVar5 + 8;
            *(undefined8 *)(((ulong)(in_RDI + 4) & 0xfffffffffffffff8) + uVar5) =
                 *(undefined8 *)((long)local_80 + (uVar5 - lVar10));
            uVar5 = (ulong)uVar7;
          } while (uVar7 < uVar4);
        }
      }
    }
    else {
      in_RDI[1] = local_80;
      in_RDI[3] = CONCAT44(local_70[1],local_70[0]);
    }
LAB_00119fc9:
    in_RDI[2] = local_78;
    goto LAB_00119fcd;
  }
  switch(*in_RSI) {
  case 3:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "f16",3);
    uVar5 = 0x7fffffffffffffff - local_78;
    break;
  case 4:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "i8",2);
    uVar5 = 0x7fffffffffffffff - local_78;
    break;
  case 5:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "u16",3);
    uVar5 = 0x7fffffffffffffff - local_78;
    break;
  case 6:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "i16",3);
    uVar5 = 0x7fffffffffffffff - local_78;
    break;
  case 7:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "u8",2);
    uVar5 = 0x7fffffffffffffff - local_78;
    break;
  case 8:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "i",1);
    uVar5 = 0x7fffffffffffffff - local_78;
    break;
  case 9:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "u",1);
    uVar5 = 0x7fffffffffffffff - local_78;
    break;
  case 10:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "i64",3);
    uVar5 = 0x7fffffffffffffff - local_78;
    break;
  case 0xb:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "u64",3);
    uVar5 = 0x7fffffffffffffff - local_78;
    break;
  default:
    if ((bVar3 & 8) != 0) {
      if (in_RSI[1] == '\b') goto LAB_0011a5da;
      if (in_RSI[1] == '\a') goto LAB_0011a5b2;
      goto LAB_0011a04d;
    }
    if ((bVar3 & 0x10) == 0) goto LAB_0011a33a;
    goto LAB_0011a223;
  }
  if ((in_RSI[2] & 8) == 0) {
    if ((in_RSI[2] & 0x10) == 0) {
      if (uVar5 < 7) goto LAB_0011a893;
LAB_0011a33a:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88
                ,"texture",7);
      goto LAB_0011a061;
    }
    if (uVar5 < 7) goto LAB_0011a893;
LAB_0011a223:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "sampler",7);
    bVar3 = in_RSI[3];
    puVar9 = local_80;
    uVar5 = local_78;
  }
  else {
    if (in_RSI[1] == '\b') {
      if (uVar5 < 0xd) goto LAB_0011a893;
LAB_0011a5da:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88
                ,"attachmentEXT",0xd);
    }
    else if (in_RSI[1] == '\a') {
      if (uVar5 < 7) goto LAB_0011a893;
LAB_0011a5b2:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88
                ,"subpass",7);
    }
    else {
      if (uVar5 < 5) goto LAB_0011a893;
LAB_0011a04d:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88
                ,"image",5);
    }
LAB_0011a061:
    bVar3 = in_RSI[3];
    puVar9 = local_80;
    uVar5 = local_78;
  }
  local_80 = puVar9;
  local_78 = uVar5;
  if ((bVar3 & 0x20) != 0) {
    if (0x7fffffffffffffff - uVar5 < 0xb) goto LAB_0011a893;
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "ExternalOES",0xb);
    *in_RDI = local_88;
    in_RDI[1] = in_RDI + 3;
    if (local_80 == local_70) {
      uVar5 = local_78 + 1;
      uVar4 = (uint)uVar5;
      if (uVar4 < 8) {
        if ((uVar5 & 4) == 0) {
          if (uVar4 != 0) {
            *(undefined1 *)(in_RDI + 3) = (undefined1)local_70[0];
            if ((uVar5 & 2) != 0) {
              *(undefined2 *)((long)in_RDI + (uVar5 & 0xffffffff) + 0x16) =
                   *(undefined2 *)((long)&local_78 + (uVar5 & 0xffffffff) + 6);
            }
          }
        }
        else {
          *(uint *)(in_RDI + 3) = local_70[0];
          *(undefined4 *)((long)in_RDI + (uVar5 & 0xffffffff) + 0x14) =
               *(undefined4 *)((long)&local_78 + (uVar5 & 0xffffffff) + 4);
        }
      }
      else {
        in_RDI[3] = CONCAT44(local_70[1],local_70[0]);
        *(undefined8 *)((long)in_RDI + (uVar5 & 0xffffffff) + 0x10) =
             *(undefined8 *)((long)&local_78 + (uVar5 & 0xffffffff));
        lVar10 = (long)(in_RDI + 3) - ((ulong)(in_RDI + 4) & 0xfffffffffffffff8);
        uVar4 = uVar4 + (int)lVar10 & 0xfffffff8;
        if (7 < uVar4) {
          uVar5 = 0;
          do {
            uVar7 = (int)uVar5 + 8;
            *(undefined8 *)(((ulong)(in_RDI + 4) & 0xfffffffffffffff8) + uVar5) =
                 *(undefined8 *)((long)local_70 + (uVar5 - lVar10));
            uVar5 = (ulong)uVar7;
          } while (uVar7 < uVar4);
        }
      }
    }
    else {
      in_RDI[1] = local_80;
      in_RDI[3] = CONCAT44(local_70[1],local_70[0]);
    }
    in_RDI[2] = local_78;
    goto LAB_00119fcd;
  }
  if ((bVar3 & 0x40) == 0) {
    switch(in_RSI[1]) {
    case 1:
      if (0x7fffffffffffffff - uVar5 < 2) goto LAB_0011a893;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88
                ,"1D",2);
      break;
    case 2:
      if (0x7fffffffffffffff - uVar5 < 2) goto LAB_0011a893;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88
                ,"2D",2);
      break;
    case 3:
      if (0x7fffffffffffffff - uVar5 < 2) goto LAB_0011a893;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88
                ,"3D",2);
      break;
    case 4:
      if (0x7fffffffffffffff - uVar5 < 4) goto LAB_0011a893;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88
                ,"Cube",4);
      break;
    case 5:
      if (0x7fffffffffffffff - uVar5 < 6) goto LAB_0011a893;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88
                ,"2DRect",6);
      break;
    case 6:
      if (0x7fffffffffffffff - uVar5 < 6) goto LAB_0011a893;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88
                ,"Buffer",6);
      break;
    case 7:
      if (0x7fffffffffffffff - uVar5 < 5) goto LAB_0011a893;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88
                ,"Input",5);
      break;
    case 8:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88
                ,"",0);
    }
    bVar3 = in_RSI[2];
    if ((bVar3 & 4) != 0) {
      if (0x7fffffffffffffff - local_78 < 2) goto LAB_0011a893;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88
                ,"MS",2);
      bVar3 = in_RSI[2];
    }
    if ((bVar3 & 1) != 0) {
      if (0x7fffffffffffffff - local_78 < 5) goto LAB_0011a893;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88
                ,"Array",5);
      bVar3 = in_RSI[2];
    }
    if ((bVar3 & 2) == 0) {
      *in_RDI = local_88;
      in_RDI[1] = in_RDI + 3;
    }
    else {
      if (0x7fffffffffffffff - local_78 < 6) goto LAB_0011a893;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88
                ,"Shadow",6);
      *in_RDI = local_88;
      in_RDI[1] = in_RDI + 3;
    }
    if (local_80 == local_70) {
      puVar9 = (uint *)(in_RDI + 3);
      uVar5 = local_78 + 1;
      uVar4 = (uint)uVar5;
      if (uVar4 < 8) {
        if ((uVar5 & 4) == 0) {
          if (uVar4 != 0) {
            *(undefined1 *)puVar9 = (undefined1)local_70[0];
            if ((uVar5 & 2) != 0) {
              *(undefined2 *)((long)in_RDI + (uVar5 & 0xffffffff) + 0x16) =
                   *(undefined2 *)((long)&local_78 + (uVar5 & 0xffffffff) + 6);
            }
          }
        }
        else {
          *puVar9 = local_70[0];
          *(undefined4 *)((long)in_RDI + (uVar5 & 0xffffffff) + 0x14) =
               *(undefined4 *)((long)&local_78 + (uVar5 & 0xffffffff) + 4);
        }
      }
      else {
        *(ulong *)puVar9 = CONCAT44(local_70[1],local_70[0]);
        *(undefined8 *)((long)in_RDI + (uVar5 & 0xffffffff) + 0x10) =
             *(undefined8 *)((long)&local_78 + (uVar5 & 0xffffffff));
        lVar10 = (long)puVar9 - ((ulong)(in_RDI + 4) & 0xfffffffffffffff8);
        uVar4 = uVar4 + (int)lVar10 & 0xfffffff8;
        if (7 < uVar4) {
          uVar5 = 0;
          do {
            uVar7 = (int)uVar5 + 8;
            *(undefined8 *)(((ulong)(in_RDI + 4) & 0xfffffffffffffff8) + uVar5) =
                 *(undefined8 *)((long)local_70 + (uVar5 - lVar10));
            uVar5 = (ulong)uVar7;
          } while (uVar7 < uVar4);
        }
      }
    }
    else {
      in_RDI[1] = local_80;
      in_RDI[3] = CONCAT44(local_70[1],local_70[0]);
    }
    goto LAB_00119fc9;
  }
  local_58 = glslang::GetThreadPoolAllocator();
  local_40[0] = local_40[0] & 0xffffffffffffff00;
  local_50 = local_40;
  uVar2 = uVar5 + 2;
  local_48 = 0;
  __dest = local_50;
  uVar8 = local_40[0];
  if (0xf < uVar2) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    uVar8 = 0x1e;
    if (0x1d < uVar2) {
      uVar8 = uVar2;
    }
    __dest = (ulong *)glslang::TPoolAllocator::allocate(local_58);
    if (local_48 == 0) {
      *(char *)__dest = (char)*local_50;
    }
    else {
      if (local_48 + 1U == 0) goto LAB_0011a3e0;
      __dest = (ulong *)memcpy(__dest,local_50,local_48 + 1U);
    }
    local_50 = __dest;
    local_40[0] = uVar8;
    if (0x7fffffffffffffffU - local_48 < 2) goto LAB_0011a893;
  }
LAB_0011a3e0:
  local_40[0] = uVar8;
  local_50 = __dest;
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_58,
             "__",2);
  if ((0x7fffffffffffffffU - local_48 < uVar5) ||
     (std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_58
                ,(char *)puVar9,uVar5), 0x7fffffffffffffffU - local_48 < 0x10)) {
LAB_0011a893:
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::append");
  }
  puVar6 = (undefined8 *)
           std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
           _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                     &local_58,"External2DY2YEXT",0x10);
  puVar1 = puVar6 + 3;
  *in_RDI = *puVar6;
  in_RDI[1] = in_RDI + 3;
  if ((undefined8 *)puVar6[1] == puVar1) {
    lVar10 = puVar6[2];
    uVar5 = lVar10 + 1;
    uVar4 = (uint)uVar5;
    if (7 < uVar4) {
      in_RDI[3] = puVar6[3];
      *(undefined8 *)((long)in_RDI + (uVar5 & 0xffffffff) + 0x10) =
           *(undefined8 *)((long)puVar6 + (uVar5 & 0xffffffff) + 0x10);
      lVar10 = (long)(in_RDI + 3) - ((ulong)(in_RDI + 4) & 0xfffffffffffffff8);
      uVar4 = uVar4 + (int)lVar10 & 0xfffffff8;
      if (7 < uVar4) {
        uVar5 = 0;
        do {
          uVar7 = (int)uVar5 + 8;
          *(undefined8 *)(((ulong)(in_RDI + 4) & 0xfffffffffffffff8) + uVar5) =
               *(undefined8 *)((long)puVar1 + (uVar5 - lVar10));
          uVar5 = (ulong)uVar7;
        } while (uVar7 < uVar4);
      }
      goto LAB_0011a476;
    }
    if ((uVar5 & 4) == 0) {
      if (uVar4 != 0) {
        *(undefined1 *)(in_RDI + 3) = *(undefined1 *)(puVar6 + 3);
        if ((uVar5 & 2) == 0) goto LAB_0011a476;
        *(undefined2 *)((long)in_RDI + (uVar5 & 0xffffffff) + 0x16) =
             *(undefined2 *)((long)puVar6 + (uVar5 & 0xffffffff) + 0x16);
        lVar10 = puVar6[2];
      }
    }
    else {
      *(undefined4 *)(in_RDI + 3) = *(undefined4 *)(puVar6 + 3);
      *(undefined4 *)((long)in_RDI + (uVar5 & 0xffffffff) + 0x14) =
           *(undefined4 *)((long)puVar6 + (uVar5 & 0xffffffff) + 0x14);
      lVar10 = puVar6[2];
    }
  }
  else {
    in_RDI[1] = (undefined8 *)puVar6[1];
    in_RDI[3] = puVar6[3];
LAB_0011a476:
    lVar10 = puVar6[2];
  }
  in_RDI[2] = lVar10;
  puVar6[1] = puVar1;
  puVar6[2] = 0;
  *(undefined1 *)(puVar6 + 3) = 0;
LAB_00119fcd:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* glslang::TType::getCompleteString(bool, bool, bool, bool, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >) const */

basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *
glslang::TType::getCompleteString
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *param_1,
          long *param_2,char param_3,char param_4,char param_5,char param_6,long param_7,
          long param_8)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 *__src;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  undefined8 uVar8;
  size_t sVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  char *pcVar16;
  uint uVar17;
  long in_FS_OFFSET;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_2b8;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_2b0;
  long local_2a8;
  long lStack_2a0;
  long local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  long lStack_280;
  long local_278;
  long lStack_270;
  long local_268;
  long lStack_260;
  long *local_258 [2];
  long local_248 [2];
  long *local_238 [2];
  long local_228 [2];
  long *local_218 [2];
  long local_208 [2];
  long *local_1f8 [2];
  long local_1e8 [2];
  long *local_1d8 [2];
  long local_1c8 [3];
  char *local_1b0;
  ulong local_188;
  ulong *local_180;
  ulong local_178;
  ulong local_170 [3];
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_158 [48];
  undefined1 local_128 [8];
  char *local_120;
  ulong local_118;
  undefined8 local_f8;
  char *local_f0;
  ulong local_e8;
  char local_e0 [24];
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined1 local_b0 [24];
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 local_80 [24];
  undefined1 local_68 [8];
  char *local_60;
  ulong local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = glslang::GetThreadPoolAllocator();
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = uVar8;
  *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(param_1 + 8) =
       param_1 + 0x18;
  param_1[0x18] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
  local_2b8 = param_1;
  local_2b0 = param_1;
  if (param_4 != '\0') {
    if (param_2[10] != 0) {
      glslang::TQualifier::getSpirvDecorateQualifierString_abi_cxx11_();
      sVar9 = strlen(local_1b0);
      if (0x7fffffffffffffffU - *(long *)(param_1 + 0x10) < sVar9) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1,local_1b0,sVar9);
    }
    if (((*(byte *)((long)param_2 + 0x1f) & 0x70) == 0) && ((*(byte *)(param_2 + 4) & 0xf) == 0)) {
      if ((((*(int *)((long)param_2 + 0x24) != -1) ||
           ((((((short)param_2[6] != -1 ||
               ((*(uint *)((long)param_2 + 0x2c) & 0x3f8000) != 0x1f8000)) ||
              ((int)param_2[5] != -1)) ||
             (((~*(ushort *)((long)param_2 + 0x2c) & 0xfff) != 0 ||
              ((*(byte *)((long)param_2 + 0x2d) & 0x70) != 0x40)))) ||
            (*(char *)((long)param_2 + 0x32) != -1)))) ||
          (((*(char *)((long)param_2 + 0x33) != -1 || (*(char *)((long)param_2 + 0x3c) != '\0')) ||
           ((char)param_2[9] != '\0')))) ||
         ((((*(char *)((long)param_2 + 0x3d) != '\0' || (*(char *)((long)param_2 + 0x3e) != '\0'))
           || ((~*(byte *)((long)param_2 + 0x34) & 0xf) != 0)) ||
          (((~*(uint *)((long)param_2 + 0x34) & 0x3fff0) != 0 ||
           ((~*(ushort *)((long)param_2 + 0x36) & 0x7ffc) != 0)))))) {
        local_2a8 = param_2[2];
        lStack_2a0 = param_2[3];
        local_298 = param_2[4];
        lVar10 = param_2[5];
        uVar12 = param_2[6];
        lStack_280 = param_2[7];
        local_278 = param_2[8];
        lStack_270 = param_2[9];
        local_268 = param_2[10];
        lStack_260 = param_2[0xb];
        uStack_290 = lVar10;
        local_288 = uVar12;
        if (((((*(char *)((long)param_2 + 0x3c) == '\0') &&
              (((short)param_2[6] == -1 &&
               (uStack_290._4_4_ = (uint)((ulong)lVar10 >> 0x20),
               uVar15 = uStack_290._4_4_ & 0x3f8000, uVar15 == 0x1f8000)))) &&
             ((*(uint *)(param_2 + 5) & *(uint *)((long)param_2 + 0x24)) == 0xffffffff)) &&
            (((uStack_290._4_2_ = (ushort)((ulong)lVar10 >> 0x20), uVar6 = ~uStack_290._4_2_,
              (uVar6 & 0xfff) == 0 &&
              (uStack_290._5_1_ = (byte)((ulong)lVar10 >> 0x28), bVar5 = uStack_290._5_1_ & 0x70,
              bVar5 == 0x40)) &&
             ((*(byte *)((long)param_2 + 0x33) & *(byte *)((long)param_2 + 0x32)) == 0xff)))) &&
           ((((char)param_2[9] == '\0' && (*(char *)((long)param_2 + 0x3d) == '\0')) &&
            (*(char *)((long)param_2 + 0x3e) == '\0')))) {
          local_288 = uVar12 | 0xf00000000;
          uVar3 = local_288;
          uVar15 = ~local_288._4_4_;
          local_288 = uVar3;
          if (((uVar15 & 0x3fff0) == 0) &&
             (local_288._6_2_ = (ushort)(uVar12 >> 0x30), uVar6 = ~local_288._6_2_,
             (uVar6 & 0x7ffc) == 0)) goto LAB_0011b5f5;
        }
        goto LAB_0011b2c0;
      }
    }
    else {
LAB_0011b2c0:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (param_1,"layout(");
      if (((~*(ushort *)((long)param_2 + 0x2c) & 0xfff) != 0) ||
         (((*(byte *)((long)param_2 + 0x2d) & 0x70) != 0x40 ||
          (*(char *)((long)param_2 + 0x32) != -1)))) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1," location=");
        const::{lambda(unsigned_int)#2}::operator()
                  ((_lambda_unsigned_int__2_ *)&local_2b8,*(ushort *)((long)param_2 + 0x2c) & 0xfff)
        ;
        if ((*(byte *)((long)param_2 + 0x2d) & 0x70) != 0x40) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(param_1," component=");
          const::{lambda(unsigned_int)#2}::operator()
                    ((_lambda_unsigned_int__2_ *)&local_2b8,*(byte *)((long)param_2 + 0x2d) >> 4 & 7
                    );
        }
        if (*(char *)((long)param_2 + 0x32) != -1) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(param_1," index=");
          const::{lambda(unsigned_int)#2}::operator()
                    ((_lambda_unsigned_int__2_ *)&local_2b8,(uint)*(byte *)((long)param_2 + 0x32));
        }
      }
      if ((*(uint *)((long)param_2 + 0x2c) & 0x3f8000) != 0x1f8000) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1," set=");
        const::{lambda(unsigned_int)#2}::operator()
                  ((_lambda_unsigned_int__2_ *)&local_2b8,
                   *(uint *)((long)param_2 + 0x2c) >> 0xf & 0x7f);
      }
      if ((short)param_2[6] != -1) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1," binding=");
        const::{lambda(unsigned_int)#2}::operator()
                  ((_lambda_unsigned_int__2_ *)&local_2b8,(uint)*(ushort *)(param_2 + 6));
      }
      if (*(char *)((long)param_2 + 0x33) != -1) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1," stream=");
        const::{lambda(unsigned_int)#2}::operator()
                  ((_lambda_unsigned_int__2_ *)&local_2b8,(uint)*(byte *)((long)param_2 + 0x33));
      }
      if ((*(byte *)((long)param_2 + 0x1f) & 0x70) != 0) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1," ");
        pcVar16 = "row_major";
        bVar5 = *(byte *)((long)param_2 + 0x1f) >> 4 & 7;
        if ((bVar5 != 1) && (pcVar16 = "column_major", bVar5 != 2)) {
          pcVar16 = "none";
        }
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1,pcVar16);
      }
      if ((*(byte *)(param_2 + 4) & 0xf) != 0) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1," ");
        switch(*(byte *)(param_2 + 4) & 0xf) {
        case 1:
          pcVar16 = "shared";
          break;
        case 2:
          pcVar16 = "std140";
          break;
        case 3:
          pcVar16 = "std430";
          break;
        case 4:
          pcVar16 = "packed";
          break;
        case 5:
          pcVar16 = "scalar";
          break;
        default:
          pcVar16 = "none";
        }
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1,pcVar16);
      }
      if (*(int *)((long)param_2 + 0x24) != -1) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1," offset=");
        const::{lambda(int)#3}::operator()
                  ((_lambda_int__3_ *)&local_2b0,*(int *)((long)param_2 + 0x24));
      }
      if ((int)param_2[5] != -1) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1," align=");
        const::{lambda(int)#3}::operator()((_lambda_int__3_ *)&local_2b0,(int)param_2[5]);
      }
      if (*(char *)((long)param_2 + 0x3c) != '\0') {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1," ");
        pcVar16 = (char *)TQualifier::getLayoutFormatString(*(undefined1 *)((long)param_2 + 0x3c));
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1,pcVar16);
      }
      uVar6 = *(ushort *)((long)param_2 + 0x36);
      if ((~*(byte *)((long)param_2 + 0x34) & 0xf) == 0) {
LAB_0011b460:
        if ((~uVar6 & 0x7ffc) != 0) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(param_1," xfb_offset=");
          const::{lambda(unsigned_int)#2}::operator()
                    ((_lambda_unsigned_int__2_ *)&local_2b8,
                     *(ushort *)((long)param_2 + 0x36) >> 2 & 0x1fff);
        }
      }
      else if ((~uVar6 & 0x7ffc) != 0) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1," xfb_buffer=");
        const::{lambda(unsigned_int)#2}::operator()
                  ((_lambda_unsigned_int__2_ *)&local_2b8,*(byte *)((long)param_2 + 0x34) & 0xf);
        uVar6 = *(ushort *)((long)param_2 + 0x36);
        goto LAB_0011b460;
      }
      if ((~*(uint *)((long)param_2 + 0x34) & 0x3fff0) != 0) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1," xfb_stride=");
        const::{lambda(unsigned_int)#2}::operator()
                  ((_lambda_unsigned_int__2_ *)&local_2b8,
                   *(uint *)((long)param_2 + 0x34) >> 4 & 0x3fff);
      }
      if ((char)param_2[7] != -1) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1," input_attachment_index=");
        const::{lambda(unsigned_int)#2}::operator()
                  ((_lambda_unsigned_int__2_ *)&local_2b8,(uint)*(byte *)(param_2 + 7));
      }
      if ((~*(uint *)(param_2 + 7) & 0x7ff00) != 0) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1," constant_id=");
        const::{lambda(unsigned_int)#2}::operator()
                  ((_lambda_unsigned_int__2_ *)&local_2b8,*(uint *)(param_2 + 7) >> 8 & 0x7ff);
      }
      if (*(char *)((long)param_2 + 0x3d) != '\0') {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1," push_constant");
      }
      if (*(char *)((long)param_2 + 0x3e) != '\0') {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1," buffer_reference");
      }
      if ((~*(ushort *)((long)param_2 + 0x3a) & 0x1f8) != 0) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1," buffer_reference_align=");
        const::{lambda(unsigned_int)#2}::operator()
                  ((_lambda_unsigned_int__2_ *)&local_2b8,
                   1 << ((byte)(*(ushort *)((long)param_2 + 0x3a) >> 3) & 0x1f));
      }
      if (*(char *)((long)param_2 + 0x3f) != '\0') {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1," passthrough");
      }
      if ((char)param_2[8] != '\0') {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1," layoutViewportRelative");
      }
      if (*(int *)((long)param_2 + 0x44) != -0x800) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1," layoutSecondaryViewportRelativeOffset=");
        const::{lambda(int)#3}::operator()
                  ((_lambda_int__3_ *)&local_2b0,*(int *)((long)param_2 + 0x44));
      }
      if ((char)param_2[9] != '\0') {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1," shaderRecordNV");
      }
      if (*(char *)((long)param_2 + 0x49) != '\0') {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1," full_quads");
      }
      if (*(char *)((long)param_2 + 0x4a) != '\0') {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1," quad_derivatives");
      }
      if (*(char *)((long)param_2 + 0x4b) != '\0') {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1," hitobjectshaderrecordnv");
      }
      if ((char)param_2[0xb] != '\0') {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1," layoutBindlessSampler");
      }
      if (*(char *)((long)param_2 + 0x59) != '\0') {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1," layoutBindlessImage");
      }
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (param_1,")");
    }
LAB_0011b5f5:
    lVar10 = *(long *)(param_1 + 0x10);
    if ((*(byte *)((long)param_2 + 0x1b) & 0x10) != 0) {
      if (0x7fffffffffffffffU - lVar10 < 10) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," invariant",10);
      lVar10 = *(long *)(param_1 + 0x10);
    }
    if ((*(byte *)((long)param_2 + 0x1c) & 0x10) != 0) {
      if (0x7fffffffffffffffU - lVar10 < 0xe) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," noContraction",0xe);
      lVar10 = *(long *)(param_1 + 0x10);
    }
    bVar5 = *(byte *)((long)param_2 + 0x1b);
    if ((bVar5 & 0x20) != 0) {
      if (0x7fffffffffffffffU - lVar10 < 9) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," centroid",9);
      lVar10 = *(long *)(param_1 + 0x10);
      bVar5 = *(byte *)((long)param_2 + 0x1b);
    }
    if ((bVar5 & 0x40) != 0) {
      if (0x7fffffffffffffffU - lVar10 < 7) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," smooth",7);
      lVar10 = *(long *)(param_1 + 0x10);
      bVar5 = *(byte *)((long)param_2 + 0x1b);
    }
    if ((char)bVar5 < '\0') {
      if (0x7fffffffffffffffU - lVar10 < 5) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," flat",5);
      lVar10 = *(long *)(param_1 + 0x10);
    }
    bVar5 = *(byte *)((long)param_2 + 0x1c);
    if ((bVar5 & 0x20) != 0) {
      if (0x7fffffffffffffffU - lVar10 < 0xe) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," noperspective",0xe);
      lVar10 = *(long *)(param_1 + 0x10);
      bVar5 = *(byte *)((long)param_2 + 0x1c);
    }
    if ((bVar5 & 0x40) != 0) {
      if (0x7fffffffffffffffU - lVar10 < 0x14) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," __explicitInterpAMD",0x14);
      lVar10 = *(long *)(param_1 + 0x10);
      bVar5 = *(byte *)((long)param_2 + 0x1c);
    }
    if ((char)bVar5 < '\0') {
      if (0x7fffffffffffffffU - lVar10 < 0xc) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," pervertexNV",0xc);
      lVar10 = *(long *)(param_1 + 0x10);
    }
    bVar5 = *(byte *)((long)param_2 + 0x1d);
    if ((bVar5 & 1) != 0) {
      if (0x7fffffffffffffffU - lVar10 < 0xd) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," pervertexEXT",0xd);
      lVar10 = *(long *)(param_1 + 0x10);
      bVar5 = *(byte *)((long)param_2 + 0x1d);
    }
    if ((bVar5 & 2) != 0) {
      if (0x7fffffffffffffffU - lVar10 < 0xf) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," perprimitiveNV",0xf);
      lVar10 = *(long *)(param_1 + 0x10);
      bVar5 = *(byte *)((long)param_2 + 0x1d);
    }
    if ((bVar5 & 4) != 0) {
      if (0x7fffffffffffffffU - lVar10 < 10) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," perviewNV",10);
      lVar10 = *(long *)(param_1 + 0x10);
      bVar5 = *(byte *)((long)param_2 + 0x1d);
    }
    if ((bVar5 & 8) != 0) {
      if (0x7fffffffffffffffU - lVar10 < 7) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," taskNV",7);
      lVar10 = *(long *)(param_1 + 0x10);
      bVar5 = *(byte *)((long)param_2 + 0x1d);
    }
    if ((bVar5 & 0x10) != 0) {
      if (0x7fffffffffffffffU - lVar10 < 6) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," patch",6);
      lVar10 = *(long *)(param_1 + 0x10);
      bVar5 = *(byte *)((long)param_2 + 0x1d);
    }
    if ((bVar5 & 0x20) != 0) {
      if (0x7fffffffffffffffU - lVar10 < 7) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," sample",7);
      lVar10 = *(long *)(param_1 + 0x10);
    }
    bVar5 = *(byte *)((long)param_2 + 0x1e);
    if ((bVar5 & 2) != 0) {
      if (0x7fffffffffffffffU - lVar10 < 9) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," coherent",9);
      lVar10 = *(long *)(param_1 + 0x10);
      bVar5 = *(byte *)((long)param_2 + 0x1e);
    }
    if ((bVar5 & 8) != 0) {
      if (0x7fffffffffffffffU - lVar10 < 0xf) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," devicecoherent",0xf);
      lVar10 = *(long *)(param_1 + 0x10);
      bVar5 = *(byte *)((long)param_2 + 0x1e);
    }
    if ((bVar5 & 0x10) != 0) {
      if (0x7fffffffffffffffU - lVar10 < 0x14) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," queuefamilycoherent",0x14);
      lVar10 = *(long *)(param_1 + 0x10);
      bVar5 = *(byte *)((long)param_2 + 0x1e);
    }
    if ((bVar5 & 0x20) != 0) {
      if (0x7fffffffffffffffU - lVar10 < 0x12) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," workgroupcoherent",0x12);
      lVar10 = *(long *)(param_1 + 0x10);
      bVar5 = *(byte *)((long)param_2 + 0x1e);
    }
    if ((bVar5 & 0x40) != 0) {
      if (0x7fffffffffffffffU - lVar10 < 0x11) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," subgroupcoherent",0x11);
      lVar10 = *(long *)(param_1 + 0x10);
      bVar5 = *(byte *)((long)param_2 + 0x1e);
    }
    if ((char)bVar5 < '\0') {
      if (0x7fffffffffffffffU - lVar10 < 0x13) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," shadercallcoherent",0x13);
      lVar10 = *(long *)(param_1 + 0x10);
    }
    if ((*(byte *)((long)param_2 + 0x1f) & 1) != 0) {
      if (0x7fffffffffffffffU - lVar10 < 0xb) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," nonprivate",0xb);
      lVar10 = *(long *)(param_1 + 0x10);
    }
    if ((*(byte *)((long)param_2 + 0x1e) & 4) != 0) {
      if (0x7fffffffffffffffU - lVar10 < 9) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," volatile",9);
      lVar10 = *(long *)(param_1 + 0x10);
    }
    bVar5 = *(byte *)((long)param_2 + 0x1d);
    if ((bVar5 & 0x40) != 0) {
      if (0x7fffffffffffffffU - lVar10 < 9) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," restrict",9);
      lVar10 = *(long *)(param_1 + 0x10);
      bVar5 = *(byte *)((long)param_2 + 0x1d);
    }
    if ((char)bVar5 < '\0') {
      if (0x7fffffffffffffffU - lVar10 < 9) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," readonly",9);
      lVar10 = *(long *)(param_1 + 0x10);
    }
    if ((*(byte *)((long)param_2 + 0x1e) & 1) != 0) {
      if (0x7fffffffffffffffU - lVar10 < 10) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," writeonly",10);
      lVar10 = *(long *)(param_1 + 0x10);
    }
    bVar5 = *(byte *)((long)param_2 + 0x1c);
    if ((bVar5 & 1) != 0) {
      if (0x7fffffffffffffffU - lVar10 < 0x18) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," specialization-constant",0x18);
      lVar10 = *(long *)(param_1 + 0x10);
      bVar5 = *(byte *)((long)param_2 + 0x1c);
    }
    if ((bVar5 & 2) != 0) {
      if (0x7fffffffffffffffU - lVar10 < 0xb) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," nonuniform",0xb);
      lVar10 = *(long *)(param_1 + 0x10);
    }
    bVar5 = *(byte *)((long)param_2 + 0x1f);
    if ((bVar5 & 2) != 0) {
      if (0x7fffffffffffffffU - lVar10 < 10) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," null-init",10);
      bVar5 = *(byte *)((long)param_2 + 0x1f);
      lVar10 = *(long *)(param_1 + 0x10);
    }
    if ((bVar5 & 4) != 0) {
      if (0x7fffffffffffffffU - lVar10 < 0x13) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," spirv_by_reference",0x13);
      bVar5 = *(byte *)((long)param_2 + 0x1f);
      lVar10 = *(long *)(param_1 + 0x10);
    }
    if ((bVar5 & 8) != 0) {
      if (0x7fffffffffffffffU - lVar10 < 0xe) goto LAB_0011bf10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append(param_1," spirv_literal",0xe);
    }
    if (*(long *)(param_1 + 0x10) == 0x7fffffffffffffff) goto LAB_0011bf10;
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
              (param_1," ",1);
    switch(*(byte *)(param_2 + 3) & 0x7f) {
    case 0:
      uVar12 = 4;
      pcVar16 = "temp";
      break;
    case 1:
      uVar12 = 6;
      pcVar16 = "global";
      break;
    case 2:
      uVar12 = 5;
      pcVar16 = "const";
      break;
    case 3:
    case 0x10:
      uVar12 = 2;
      pcVar16 = "in";
      break;
    case 4:
    case 0x11:
      uVar12 = 3;
      pcVar16 = "out";
      break;
    case 5:
      uVar12 = 7;
      pcVar16 = "uniform";
      break;
    case 6:
      uVar12 = 6;
      pcVar16 = "buffer";
      break;
    case 7:
      uVar12 = 6;
      pcVar16 = "shared";
      break;
    case 8:
      uVar12 = 0x13;
      pcVar16 = "spirv_storage_class";
      break;
    case 9:
      uVar12 = 0xc;
      pcVar16 = "rayPayloadNV";
      break;
    case 10:
      uVar12 = 0xe;
      pcVar16 = "rayPayloadInNV";
      break;
    case 0xb:
      uVar12 = 0xe;
      pcVar16 = "hitAttributeNV";
      break;
    case 0xc:
      uVar12 = 0xe;
      pcVar16 = "callableDataNV";
      break;
    case 0xd:
      uVar12 = 0x10;
      pcVar16 = "callableDataInNV";
      break;
    case 0xe:
      uVar12 = 0x14;
      pcVar16 = "hitObjectAttributeNV";
      break;
    case 0xf:
      uVar12 = 0x14;
      pcVar16 = "taskPayloadSharedEXT";
      break;
    case 0x12:
      uVar12 = 5;
      pcVar16 = "inout";
      break;
    case 0x13:
      uVar12 = 0x11;
      pcVar16 = "const (read only)";
      break;
    case 0x14:
      uVar12 = 0xb;
      pcVar16 = "gl_VertexId";
      break;
    case 0x15:
      uVar12 = 0xd;
      pcVar16 = "gl_InstanceId";
      break;
    case 0x16:
      uVar12 = 0xb;
      pcVar16 = "gl_Position";
      break;
    case 0x17:
      uVar12 = 0xc;
      pcVar16 = "gl_PointSize";
      break;
    case 0x18:
      uVar12 = 0xd;
      pcVar16 = "gl_ClipVertex";
      break;
    case 0x19:
      uVar12 = 0xe;
      pcVar16 = "gl_FrontFacing";
      break;
    case 0x1a:
      uVar12 = 0xc;
      pcVar16 = "gl_FragCoord";
      break;
    case 0x1b:
      uVar12 = 0xd;
      pcVar16 = "gl_PointCoord";
      break;
    case 0x1c:
      uVar12 = 9;
      pcVar16 = "fragColor";
      break;
    case 0x1d:
      uVar12 = 0xc;
      pcVar16 = "gl_FragDepth";
      break;
    case 0x1e:
      uVar12 = 0x14;
      pcVar16 = "gl_FragStencilRefARB";
      break;
    default:
      uVar12 = 0x11;
      pcVar16 = "unknown qualifier";
    }
    if (0x7fffffffffffffffU - *(long *)(param_1 + 0x10) < uVar12) goto LAB_0011bf10;
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
              (param_1,pcVar16,uVar12);
  }
  if (param_6 == '\0') goto LAB_0011be50;
  if (param_3 == '\0') {
    lVar10 = *param_2;
    if (*(code **)(lVar10 + 0xe8) == isArray) {
      lVar14 = param_2[0xc];
      if (lVar14 != 0) {
LAB_0011bea7:
        lVar13 = 0;
        lVar10 = *(long *)(lVar14 + 8);
        while (lVar10 != 0) {
          if ((int)(*(long *)(lVar10 + 0x10) - *(long *)(lVar10 + 8) >> 4) <= (int)lVar13) break;
          iVar11 = *(int *)(*(long *)(lVar10 + 8) + lVar13 * 0x10);
          lVar10 = *(long *)(param_1 + 0x10);
          if (iVar11 == 0 && (int)lVar13 == 0) {
            if (*(char *)(lVar14 + 0x15) == '\0') {
              if (7 < 0x7fffffffffffffffU - lVar10) {
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
                          (param_1," unsized",8);
LAB_0011c454:
                if (*(long *)(param_1 + 0x10) != 0x7fffffffffffffff) {
                  std::__cxx11::
                  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
                            (param_1," ",1);
                  uVar15 = *(uint *)(param_2[0xc] + 0x10);
                  uVar17 = 1;
                  if (0 < (int)uVar15) {
                    uVar17 = uVar15;
                  }
                  if ((int)uVar15 < 10) {
                    uVar15 = 1;
                  }
                  else if ((int)uVar15 < 100) {
                    uVar15 = 2;
                  }
                  else if ((int)uVar15 < 1000) {
                    uVar15 = 3;
                  }
                  else if ((int)uVar15 < 10000) {
                    uVar15 = 4;
                  }
                  else {
                    uVar15 = 5;
                    if (99999 < uVar17) {
                      if (uVar17 < 1000000) {
                        iVar11 = 5;
LAB_0011c4f8:
                        uVar15 = iVar11 + 1;
                      }
                      else {
                        uVar15 = 7;
                        if (9999999 < uVar17) {
                          if (uVar17 < 100000000) {
                            uVar15 = 8;
                          }
                          else {
                            if (999999999 < uVar17) {
                              iVar11 = 9;
                              goto LAB_0011c4f8;
                            }
                            uVar15 = 9;
                          }
                        }
                      }
                    }
                  }
                  local_218[0] = local_208;
                  std::__cxx11::string::_M_construct((ulong)local_218,(char)uVar15);
                  std::__detail::__to_chars_10_impl<unsigned_int>
                            ((char *)local_218[0],uVar15,uVar17);
                  plVar2 = local_218[0];
                  sVar9 = strlen((char *)local_218[0]);
                  if (sVar9 <= 0x7fffffffffffffffU - *(long *)(param_1 + 0x10)) {
                    std::__cxx11::
                    basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
                    _M_append(param_1,(char *)plVar2,sVar9);
                    if (local_218[0] != local_208) {
                      operator_delete(local_218[0],local_208[0] + 1);
                    }
                    goto LAB_0011c061;
                  }
                }
              }
              goto LAB_0011bf10;
            }
            if (0x7fffffffffffffffU - lVar10 < 0x17) goto LAB_0011bf10;
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            _M_append(param_1," runtime-sized array of",0x17);
          }
          else {
            if (iVar11 == 0) {
              if (0x7fffffffffffffffU - lVar10 < 8) goto LAB_0011bf10;
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::_M_append(param_1," unsized",8);
              if (lVar13 == 0) goto LAB_0011c454;
            }
            else {
              if (lVar10 == 0x7fffffffffffffff) goto LAB_0011bf10;
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::_M_append(param_1," ",1);
              uVar15 = *(uint *)(*(long *)(*(long *)(param_2[0xc] + 8) + 8) + lVar13 * 0x10);
              uVar17 = uVar15;
              if ((int)uVar15 < 1) {
                uVar17 = -uVar15;
              }
              if (uVar17 < 10) {
                uVar7 = 1;
              }
              else if (uVar17 < 100) {
                uVar7 = 2;
              }
              else if (uVar17 < 1000) {
                uVar7 = 3;
              }
              else if (uVar17 < 10000) {
                uVar7 = 4;
              }
              else {
                uVar7 = 5;
                if (99999 < uVar17) {
                  if (uVar17 < 1000000) {
                    iVar11 = 5;
LAB_0011bfc9:
                    uVar7 = iVar11 + 1;
                  }
                  else {
                    uVar7 = 7;
                    if (9999999 < uVar17) {
                      if (uVar17 < 100000000) {
                        uVar7 = 8;
                      }
                      else {
                        if (999999999 < uVar17) {
                          iVar11 = 9;
                          goto LAB_0011bfc9;
                        }
                        uVar7 = 9;
                      }
                    }
                  }
                }
              }
              local_1f8[0] = local_1e8;
              std::__cxx11::string::_M_construct
                        ((ulong)local_1f8,(char)uVar7 - (char)((int)uVar15 >> 0x1f));
              std::__detail::__to_chars_10_impl<unsigned_int>
                        ((char *)((long)local_1f8[0] + (ulong)(uVar15 >> 0x1f)),uVar7,uVar17);
              plVar2 = local_1f8[0];
              sVar9 = strlen((char *)local_1f8[0]);
              if (0x7fffffffffffffffU - *(long *)(param_1 + 0x10) < sVar9) goto LAB_0011bf10;
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::_M_append(param_1,(char *)plVar2,sVar9);
              if (local_1f8[0] != local_1e8) {
                operator_delete(local_1f8[0],local_1e8[0] + 1);
              }
            }
LAB_0011c061:
            if (0x7fffffffffffffffU - *(long *)(param_1 + 0x10) < 0x11) goto LAB_0011bf10;
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            _M_append(param_1,"-element array of",0x11);
          }
          lVar14 = param_2[0xc];
          lVar13 = lVar13 + 1;
          lVar10 = *(long *)(lVar14 + 8);
        }
        goto LAB_0011c09f;
      }
    }
    else {
      cVar4 = (**(code **)(lVar10 + 0xe8))(param_2);
      if (cVar4 != '\0') {
        lVar14 = param_2[0xc];
        goto LAB_0011bea7;
      }
LAB_0011c09f:
      lVar10 = *param_2;
    }
    if (*(code **)(lVar10 + 0x188) == isParameterized) {
      if (param_2[0x11] != 0) {
LAB_0011c0c7:
        if ((*(byte *)((long)param_2 + 10) & 0x40) != 0) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(param_1," ");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(param_1,"coopmat");
        }
        if (*(long *)(param_1 + 0x10) == 0x7fffffffffffffff) goto LAB_0011bf10;
        lVar14 = 0;
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_append(param_1,"<",1);
        lVar10 = *(long *)(*(long *)(param_2[0x11] + 8) + 8);
        if (lVar10 != 0) {
          while( true ) {
            if ((int)(*(long *)(lVar10 + 0x10) - *(long *)(lVar10 + 8) >> 4) <= (int)lVar14) break;
            uVar15 = *(uint *)(*(long *)(lVar10 + 8) + lVar14 * 0x10);
            uVar17 = uVar15;
            if ((int)uVar15 < 1) {
              uVar17 = -uVar15;
            }
            if (uVar17 < 10) {
              uVar7 = 1;
            }
            else if (uVar17 < 100) {
              uVar7 = 2;
            }
            else if (uVar17 < 1000) {
              uVar7 = 3;
            }
            else if (uVar17 < 10000) {
              uVar7 = 4;
            }
            else {
              uVar7 = 5;
              if (99999 < uVar17) {
                if (uVar17 < 1000000) {
                  iVar11 = 5;
LAB_0011c1d3:
                  uVar7 = iVar11 + 1;
                }
                else {
                  uVar7 = 7;
                  if (9999999 < uVar17) {
                    if (uVar17 < 100000000) {
                      uVar7 = 8;
                    }
                    else {
                      if (999999999 < uVar17) {
                        iVar11 = 9;
                        goto LAB_0011c1d3;
                      }
                      uVar7 = 9;
                    }
                  }
                }
              }
            }
            local_1d8[0] = local_1c8;
            std::__cxx11::string::_M_construct
                      ((ulong)local_1d8,(char)uVar7 - (char)((int)uVar15 >> 0x1f));
            std::__detail::__to_chars_10_impl<unsigned_int>
                      ((char *)((long)local_1d8[0] + (ulong)(uVar15 >> 0x1f)),uVar7,uVar17);
            plVar2 = local_1d8[0];
            sVar9 = strlen((char *)local_1d8[0]);
            if (0x7fffffffffffffffU - *(long *)(param_1 + 0x10) < sVar9) goto LAB_0011bf10;
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            _M_append(param_1,(char *)plVar2,sVar9);
            if (local_1d8[0] != local_1c8) {
              operator_delete(local_1d8[0],local_1c8[0] + 1);
            }
            lVar10 = *(long *)(*(long *)(param_2[0x11] + 8) + 8);
            if ((lVar10 == 0) ||
               ((int)(*(long *)(lVar10 + 0x10) - *(long *)(lVar10 + 8) >> 4) + -1 != (int)lVar14)) {
              if (0x7fffffffffffffffU - *(long *)(param_1 + 0x10) < 2) goto LAB_0011bf10;
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::_M_append(param_1,", ",2);
              lVar10 = *(long *)(*(long *)(param_2[0x11] + 8) + 8);
              if (lVar10 == 0) break;
            }
            lVar14 = lVar14 + 1;
          }
        }
        if ((*(byte *)((long)param_2 + 0xb) & 4) != 0) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(param_1,", ");
          const::{lambda(int)#3}::operator()
                    ((_lambda_int__3_ *)&local_2b0,*(ushort *)((long)param_2 + 10) >> 7 & 7);
        }
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1,">");
      }
    }
    else {
      cVar4 = (**(code **)(lVar10 + 0x188))(param_2);
      if (cVar4 != '\0') goto LAB_0011c0c7;
    }
    if ((param_5 != '\0') && ((*(byte *)((long)param_2 + 0x1b) & 0xe) != 0)) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (param_1," ");
      pcVar16 = "mediump";
      bVar5 = *(byte *)((long)param_2 + 0x1b) >> 1 & 7;
      if (bVar5 != 2) {
        if (bVar5 < 3) {
          pcVar16 = "";
          if (bVar5 != 0) {
            pcVar16 = "lowp";
          }
        }
        else {
          pcVar16 = "highp";
          if (bVar5 != 3) {
            pcVar16 = "unknown precision qualifier";
          }
        }
      }
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (param_1,pcVar16);
    }
    lVar10 = *param_2;
    if (*(code **)(lVar10 + 0xe0) == isMatrix) {
      if (*(byte *)((long)param_2 + 9) < 0x10) goto LAB_0011c333;
LAB_0011c893:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (param_1," ");
      const::{lambda(int)#3}::operator()
                ((_lambda_int__3_ *)&local_2b0,(uint)(*(byte *)((long)param_2 + 9) >> 4));
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (param_1,"X");
      const::{lambda(int)#3}::operator()
                ((_lambda_int__3_ *)&local_2b0,*(byte *)((long)param_2 + 10) & 0xf);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (param_1," matrix of");
    }
    else {
      cVar4 = (**(code **)(lVar10 + 0xe0))(param_2);
      if (cVar4 != '\0') goto LAB_0011c893;
      lVar10 = *param_2;
LAB_0011c333:
      if (*(code **)(lVar10 + 0xd8) == isVector) {
        if ((*(byte *)((long)param_2 + 9) & 0xf) < 2) {
          bVar5 = *(byte *)((long)param_2 + 10) >> 4 & 1;
          goto LAB_0011c8fa;
        }
      }
      else {
        bVar5 = (**(code **)(lVar10 + 0xd8))(param_2);
LAB_0011c8fa:
        if (bVar5 == 0) goto LAB_0011c38a;
      }
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (param_1," ");
      const::{lambda(int)#3}::operator()
                ((_lambda_int__3_ *)&local_2b0,*(byte *)((long)param_2 + 9) & 0xf);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (param_1,"-component vector of");
    }
LAB_0011c38a:
    if (*(long *)(param_1 + 0x10) == 0x7fffffffffffffff) goto LAB_0011bf10;
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
              (param_1," ",1);
    if ((char)param_2[1] == '\x0e') {
      TSampler::getString_abi_cxx11_();
    }
    else {
      local_f8 = glslang::GetThreadPoolAllocator();
      switch((char)param_2[1]) {
      case '\0':
        lVar10 = 4;
        pcVar16 = "void";
        break;
      case '\x01':
        lVar10 = 5;
        pcVar16 = "float";
        break;
      case '\x02':
        lVar10 = 6;
        pcVar16 = "double";
        break;
      case '\x03':
        lVar10 = 9;
        pcVar16 = "float16_t";
        break;
      case '\x04':
        lVar10 = 6;
        pcVar16 = "int8_t";
        break;
      case '\x05':
        lVar10 = 7;
        pcVar16 = "uint8_t";
        break;
      case '\x06':
        lVar10 = 7;
        pcVar16 = "int16_t";
        break;
      case '\a':
        lVar10 = 8;
        pcVar16 = "uint16_t";
        break;
      case '\b':
        lVar10 = 3;
        pcVar16 = "int";
        break;
      case '\t':
        lVar10 = 4;
        pcVar16 = "uint";
        break;
      case '\n':
        lVar10 = 7;
        pcVar16 = "int64_t";
        break;
      case '\v':
        lVar10 = 8;
        pcVar16 = "uint64_t";
        break;
      case '\f':
        lVar10 = 4;
        pcVar16 = "bool";
        break;
      case '\r':
        lVar10 = 0xb;
        pcVar16 = "atomic_uint";
        break;
      case '\x0e':
        lVar10 = 0xd;
        pcVar16 = "sampler/image";
        break;
      case '\x0f':
        lVar10 = 9;
        pcVar16 = "structure";
        break;
      case '\x10':
        lVar10 = 5;
        pcVar16 = "block";
        break;
      case '\x11':
        lVar10 = 0x17;
        pcVar16 = "accelerationStructureNV";
        break;
      case '\x12':
        lVar10 = 9;
        pcVar16 = "reference";
        break;
      case '\x13':
        lVar10 = 0xb;
        pcVar16 = "rayQueryEXT";
        break;
      default:
        lVar10 = 0xc;
        pcVar16 = "unknown type";
        break;
      case '\x15':
        lVar10 = 7;
        pcVar16 = "coopmat";
        break;
      case '\x16':
        lVar10 = 10;
        pcVar16 = "spirv_type";
        break;
      case '\x17':
        lVar10 = 6;
        pcVar16 = "string";
      }
      local_f0 = local_e0;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_construct<char_const*>(&local_f8,pcVar16,pcVar16 + lVar10);
    }
    if (0x7fffffffffffffffU - *(long *)(param_1 + 0x10) < local_e8) goto LAB_0011bf10;
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
              (param_1,local_f0,local_e8);
    if (0x7f < *(ushort *)(param_2 + 3)) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (param_1," ");
      pcVar16 = (char *)GetBuiltInVariableString(*(ushort *)(param_2 + 3) >> 7);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (param_1,pcVar16);
    }
    if (*(code **)(*param_2 + 0x128) == isStruct) {
      if (1 < (byte)((char)param_2[1] - 0xfU)) goto LAB_0011be50;
    }
    else {
      cVar4 = (**(code **)(*param_2 + 0x128))(param_2);
      if (cVar4 == '\0') goto LAB_0011be50;
    }
    if (param_2[0xd] != 0) {
      uVar12 = 0;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (param_1,"{");
      lVar10 = param_2[0xd];
      lVar14 = *(long *)(lVar10 + 8);
      if (*(long *)(lVar10 + 0x10) != lVar14) {
        do {
          lVar13 = uVar12 * 0x20;
          pcVar1 = *(code **)(**(long **)(lVar14 + lVar13) + 0x18);
          if (pcVar1 == hiddenMember) {
            if ((char)(*(long **)(lVar14 + lVar13))[1] != '\0') {
LAB_0011bcda:
              if (param_6 == '\0') {
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          (param_1,", ");
              }
              uVar8 = *(undefined8 *)(*(long *)(param_2[0xd] + 8) + lVar13);
              local_98 = glslang::GetThreadPoolAllocator();
              local_90 = local_80;
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::_M_construct<char_const*>(&local_98,&_LC2);
              local_c8 = glslang::GetThreadPoolAllocator();
              local_c0 = local_b0;
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::_M_construct<char_const*>(&local_c8,&_LC2);
              getCompleteString(local_68,uVar8,0,1,1,1,&local_c8,&local_98);
              if (local_58 <= 0x7fffffffffffffffU - *(long *)(param_1 + 0x10)) {
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
                          (param_1,local_60,local_58);
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          (param_1," ");
                plVar2 = *(long **)(*(long *)(param_2[0xd] + 8) + lVar13);
                pcVar1 = *(code **)(*plVar2 + 0x30);
                if (pcVar1 == getFieldName_abi_cxx11_) {
                  lVar10 = plVar2[0xe];
                }
                else {
                  lVar10 = (*pcVar1)();
                }
                if (*(ulong *)(lVar10 + 0x10) <= 0x7fffffffffffffffU - *(long *)(param_1 + 0x10)) {
                  std::__cxx11::
                  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
                            (param_1,*(char **)(lVar10 + 8),*(ulong *)(lVar10 + 0x10));
                  param_6 = '\0';
                  goto LAB_0011be18;
                }
              }
              goto LAB_0011bf10;
            }
          }
          else {
            cVar4 = (*pcVar1)();
            if (cVar4 == '\0') goto LAB_0011bcda;
LAB_0011be18:
            lVar10 = param_2[0xd];
          }
          lVar14 = *(long *)(lVar10 + 8);
          uVar12 = uVar12 + 1;
        } while (uVar12 < (ulong)(*(long *)(lVar10 + 0x10) - lVar14 >> 5));
      }
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (param_1,"}");
    }
    goto LAB_0011be50;
  }
  if ((param_5 != '\0') && ((*(byte *)((long)param_2 + 0x1b) & 0xe) != 0)) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (param_1," ");
    pcVar16 = "mediump";
    bVar5 = *(byte *)((long)param_2 + 0x1b) >> 1 & 7;
    if (bVar5 != 2) {
      if (bVar5 < 3) {
        pcVar16 = "";
        if (bVar5 != 0) {
          pcVar16 = "lowp";
        }
      }
      else {
        pcVar16 = "highp";
        if (bVar5 != 3) {
          pcVar16 = "unknown precision qualifier";
        }
      }
    }
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (param_1,pcVar16);
  }
  if (*(code **)(*param_2 + 0xd8) == isVector) {
    if ((*(byte *)((long)param_2 + 9) & 0xf) < 2) {
      bVar5 = *(byte *)((long)param_2 + 10) >> 4 & 1;
      goto LAB_0011c5eb;
    }
LAB_0011b7fa:
    if (*(long *)(param_1 + 0x10) == 0x7fffffffffffffff) {
LAB_0011bf10:
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::append");
    }
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
              (param_1," ",1);
    bVar5 = *(byte *)(param_2 + 1);
    if (bVar5 == 9) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (param_1,"u");
    }
    else if (bVar5 < 10) {
      if (bVar5 == 2) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1,"d");
      }
      else if (bVar5 == 8) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1,"i");
      }
    }
    else if (bVar5 == 0xc) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (param_1,"b");
    }
    if (*(code **)(*param_2 + 0xd8) == isVector) {
      if ((*(byte *)((long)param_2 + 9) & 0xf) < 2) {
        bVar5 = *(byte *)((long)param_2 + 10) >> 4 & 1;
        goto LAB_0011d855;
      }
    }
    else {
      bVar5 = (**(code **)(*param_2 + 0xd8))(param_2);
LAB_0011d855:
      if (bVar5 == 0) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1,"mat");
        const::{lambda(int)#3}::operator()
                  ((_lambda_int__3_ *)&local_2b0,(uint)(*(byte *)((long)param_2 + 9) >> 4));
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(param_1,"x");
        const::{lambda(int)#3}::operator()
                  ((_lambda_int__3_ *)&local_2b0,*(byte *)((long)param_2 + 10) & 0xf);
        goto LAB_0011b8a4;
      }
    }
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (param_1,"vec");
    const::{lambda(int)#3}::operator()
              ((_lambda_int__3_ *)&local_2b0,*(byte *)((long)param_2 + 9) & 0xf);
  }
  else {
    bVar5 = (**(code **)(*param_2 + 0xd8))(param_2);
LAB_0011c5eb:
    if (bVar5 != 0) goto LAB_0011b7fa;
    lVar10 = *param_2;
    if (*(code **)(lVar10 + 0xe0) != isMatrix) {
      cVar4 = (**(code **)(lVar10 + 0xe0))(param_2);
      if (cVar4 == '\0') {
        lVar10 = *param_2;
        goto LAB_0011c618;
      }
      goto LAB_0011b7fa;
    }
    if (0xf < *(byte *)((long)param_2 + 9)) goto LAB_0011b7fa;
LAB_0011c618:
    if (*(code **)(lVar10 + 0x128) == isStruct) {
      if (1 < (byte)((char)param_2[1] - 0xfU)) goto LAB_0011c82d;
LAB_0011c63f:
      if (param_2[0xd] == 0) goto LAB_0011c82d;
      uVar12 = 0;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (param_1," ");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (param_1,*(char **)(param_8 + 8));
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (param_1,"{");
      lVar10 = param_2[0xd];
      lVar14 = *(long *)(lVar10 + 8);
      if (lVar14 != *(long *)(lVar10 + 0x10)) {
        do {
          lVar13 = uVar12 * 0x20;
          pcVar1 = *(code **)(**(long **)(lVar14 + lVar13) + 0x18);
          if (pcVar1 == hiddenMember) {
            if ((char)(*(long **)(lVar14 + lVar13))[1] != '\0') {
LAB_0011c6d0:
              if (param_3 == '\0') {
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          (param_1,", ");
              }
              uVar8 = *(undefined8 *)(*(long *)(param_2[0xd] + 8) + lVar13);
              local_2a8 = glslang::GetThreadPoolAllocator();
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::basic_string<glslang::std::allocator<char>>(local_158,"",(allocator *)&local_2a8);
              plVar2 = *(long **)(*(long *)(param_2[0xd] + 8) + lVar13);
              pcVar1 = *(code **)(*plVar2 + 0x30);
              if (pcVar1 == getFieldName_abi_cxx11_) {
                lVar10 = plVar2[0xe];
              }
              else {
                lVar10 = (*pcVar1)();
              }
              local_188 = glslang::GetThreadPoolAllocator();
              uVar3 = *(ulong *)(lVar10 + 0x10);
              local_180 = local_170;
              __src = *(undefined1 **)(lVar10 + 8);
              if (uVar3 < 0x10) {
                if (uVar3 == 1) {
                  local_170[0] = CONCAT71(local_170[0]._1_7_,*__src);
                }
                else if (uVar3 != 0) goto LAB_0011dd6c;
              }
              else {
                if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
                  std::__throw_length_error("basic_string::_M_create");
                }
                local_180 = (ulong *)glslang::TPoolAllocator::allocate(local_188);
                local_170[0] = uVar3;
LAB_0011dd6c:
                memcpy(local_180,__src,uVar3);
              }
              *(undefined1 *)((long)local_180 + uVar3) = 0;
              local_178 = uVar3;
              getCompleteString(local_128,uVar8,1,param_4,param_5,1,&local_188,local_158);
              if (local_118 <= 0x7fffffffffffffffU - *(long *)(param_1 + 0x10)) {
                param_3 = '\0';
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
                          (param_1,local_120,local_118);
                goto LAB_0011c7ec;
              }
              goto LAB_0011bf10;
            }
          }
          else {
            cVar4 = (*pcVar1)();
            if (cVar4 == '\0') goto LAB_0011c6d0;
LAB_0011c7ec:
            lVar10 = param_2[0xd];
          }
          lVar14 = *(long *)(lVar10 + 8);
          uVar12 = uVar12 + 1;
        } while (uVar12 < (ulong)(*(long *)(lVar10 + 0x10) - lVar14 >> 5));
      }
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (param_1,"}");
    }
    else {
      cVar4 = (**(code **)(lVar10 + 0x128))(param_2);
      if (cVar4 != '\0') goto LAB_0011c63f;
LAB_0011c82d:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (param_1," ");
      switch((char)param_2[1]) {
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
LAB_0011b8a4:
  if (*(long *)(param_7 + 0x10) != 0) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (param_1," ");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (param_1,*(char **)(param_7 + 8));
  }
  if (*(code **)(*param_2 + 0xe8) == isArray) {
    lVar10 = param_2[0xc];
    if (lVar10 == 0) goto LAB_0011be50;
  }
  else {
    cVar4 = (**(code **)(*param_2 + 0xe8))(param_2);
    if (cVar4 == '\0') goto LAB_0011be50;
    lVar10 = param_2[0xc];
  }
  lVar14 = *(long *)(lVar10 + 8);
  if (lVar14 != 0) {
    lVar13 = 0;
    do {
      if ((int)(*(long *)(lVar14 + 0x10) - *(long *)(lVar14 + 8) >> 4) <= (int)lVar13) break;
      iVar11 = *(int *)(*(long *)(lVar14 + 8) + lVar13 * 0x10);
      lVar14 = *(long *)(param_1 + 0x10);
      if (iVar11 == 0 && (int)lVar13 == 0) {
        if (*(char *)(lVar10 + 0x15) == '\0') {
          if (lVar14 != 0x7fffffffffffffff) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            _M_append(param_1,"[",1);
LAB_0011b927:
            uVar15 = *(uint *)(param_2[0xc] + 0x10);
            uVar17 = 1;
            if (0 < (int)uVar15) {
              uVar17 = uVar15;
            }
            if ((int)uVar15 < 10) {
              uVar15 = 1;
            }
            else if ((int)uVar15 < 100) {
              uVar15 = 2;
            }
            else if ((int)uVar15 < 1000) {
              uVar15 = 3;
            }
            else if ((int)uVar15 < 10000) {
              uVar15 = 4;
            }
            else if (uVar17 < 100000) {
              uVar15 = 5;
            }
            else if (uVar17 < 1000000) {
              uVar15 = 5;
LAB_0011b9aa:
              uVar15 = uVar15 + 1;
            }
            else if (uVar17 < 10000000) {
              uVar15 = 7;
            }
            else if (uVar17 < 100000000) {
              uVar15 = 8;
            }
            else {
              uVar15 = 9;
              if (999999999 < uVar17) goto LAB_0011b9aa;
            }
            local_258[0] = local_248;
            std::__cxx11::string::_M_construct((ulong)local_258,(char)uVar15);
            std::__detail::__to_chars_10_impl<unsigned_int>((char *)local_258[0],uVar15,uVar17);
            plVar2 = local_258[0];
            sVar9 = strlen((char *)local_258[0]);
            if (sVar9 <= 0x7fffffffffffffffU - *(long *)(param_1 + 0x10)) {
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::_M_append(param_1,(char *)plVar2,sVar9);
              if (local_258[0] != local_248) {
                operator_delete(local_258[0],local_248[0] + 1);
              }
              goto LAB_0011ba38;
            }
          }
          goto LAB_0011bf10;
        }
        if (0x7fffffffffffffffU - lVar14 < 2) goto LAB_0011bf10;
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_append(param_1,"[]",2);
      }
      else {
        if (iVar11 == 0) {
          if (lVar14 == 0x7fffffffffffffff) goto LAB_0011bf10;
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_append(param_1,"[",1);
          if (lVar13 == 0) goto LAB_0011b927;
        }
        else {
          if (lVar14 == 0x7fffffffffffffff) goto LAB_0011bf10;
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_append(param_1,"[",1);
          uVar15 = *(uint *)(*(long *)(*(long *)(param_2[0xc] + 8) + 8) + lVar13 * 0x10);
          uVar17 = uVar15;
          if ((int)uVar15 < 1) {
            uVar17 = -uVar15;
          }
          if (uVar17 < 10) {
            uVar7 = 1;
          }
          else if (uVar17 < 100) {
            uVar7 = 2;
          }
          else if (uVar17 < 1000) {
            uVar7 = 3;
          }
          else if (uVar17 < 10000) {
            uVar7 = 4;
          }
          else if (uVar17 < 100000) {
            uVar7 = 5;
          }
          else if (uVar17 < 1000000) {
            uVar7 = 5;
LAB_0011bb51:
            uVar7 = uVar7 + 1;
          }
          else if (uVar17 < 10000000) {
            uVar7 = 7;
          }
          else if (uVar17 < 100000000) {
            uVar7 = 8;
          }
          else {
            uVar7 = 9;
            if (999999999 < uVar17) goto LAB_0011bb51;
          }
          local_238[0] = local_228;
          std::__cxx11::string::_M_construct
                    ((ulong)local_238,(char)uVar7 - (char)((int)uVar15 >> 0x1f));
          std::__detail::__to_chars_10_impl<unsigned_int>
                    ((char *)((long)local_238[0] + (ulong)(uVar15 >> 0x1f)),uVar7,uVar17);
          plVar2 = local_238[0];
          sVar9 = strlen((char *)local_238[0]);
          if (0x7fffffffffffffffU - *(long *)(param_1 + 0x10) < sVar9) goto LAB_0011bf10;
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_append(param_1,(char *)plVar2,sVar9);
          if (local_238[0] != local_228) {
            operator_delete(local_238[0],local_228[0] + 1);
          }
        }
LAB_0011ba38:
        if (*(long *)(param_1 + 0x10) == 0x7fffffffffffffff) goto LAB_0011bf10;
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_append(param_1,"]",1);
      }
      lVar10 = param_2[0xc];
      lVar13 = lVar13 + 1;
      lVar14 = *(long *)(lVar10 + 8);
    } while (lVar14 != 0);
  }
LAB_0011be50:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc>
   >::_M_realloc_insert<glslang::TTypeLoc const&>(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >, glslang::TTypeLoc
   const&) */

void __thiscall
std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>::
_M_realloc_insert<glslang::TTypeLoc_const&>
          (vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>> *this,long param_2,
          undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  lVar2 = *(long *)(this + 0x10);
  lVar10 = *(long *)(this + 8);
  uVar4 = lVar2 - lVar10 >> 5;
  if (uVar4 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  puVar9 = (undefined8 *)(param_2 - lVar10);
  if (lVar10 == lVar2) {
    if (0xfffffffffffffffe < uVar4) goto LAB_0011e160;
    uVar7 = 0x3ffffffffffffff;
    if (uVar4 + 1 < 0x400000000000000) {
      uVar7 = uVar4 + 1;
    }
    lVar8 = uVar7 << 5;
LAB_0011e16a:
    lVar5 = glslang::TPoolAllocator::allocate(*(ulong *)this);
    uVar3 = param_3[1];
    lVar8 = lVar5 + lVar8;
    lVar6 = lVar5 + 0x20;
    *(undefined8 *)(lVar5 + (long)puVar9) = *param_3;
    ((undefined8 *)(lVar5 + (long)puVar9))[1] = uVar3;
    uVar3 = param_3[3];
    puVar9 = (undefined8 *)(lVar5 + 0x10 + (long)puVar9);
    *puVar9 = param_3[2];
    puVar9[1] = uVar3;
    if (param_2 != lVar10) {
LAB_0011e0e5:
      lVar6 = 0;
      do {
        uVar3 = ((undefined8 *)(lVar10 + lVar6))[1];
        *(undefined8 *)(lVar5 + lVar6) = *(undefined8 *)(lVar10 + lVar6);
        ((undefined8 *)(lVar5 + lVar6))[1] = uVar3;
        puVar9 = (undefined8 *)(lVar10 + 0x10 + lVar6);
        uVar3 = puVar9[1];
        puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar6);
        *puVar1 = *puVar9;
        puVar1[1] = uVar3;
        lVar6 = lVar6 + 0x20;
      } while (lVar6 != param_2 - lVar10);
      lVar6 = lVar5 + 0x20 + lVar6;
    }
    if (param_2 == lVar2) goto LAB_0011e140;
  }
  else {
    uVar7 = uVar4 * 2;
    if (uVar7 < uVar4) {
LAB_0011e160:
      lVar8 = 0x7fffffffffffffe0;
      goto LAB_0011e16a;
    }
    if (uVar7 != 0) {
      if (0x3ffffffffffffff < uVar7) {
        uVar7 = 0x3ffffffffffffff;
      }
      lVar8 = uVar7 << 5;
      goto LAB_0011e16a;
    }
    uVar3 = param_3[1];
    lVar5 = 0;
    lVar8 = 0;
    lVar6 = 0x20;
    *puVar9 = *param_3;
    puVar9[1] = uVar3;
    uVar3 = param_3[3];
    puVar9[2] = param_3[2];
    puVar9[3] = uVar3;
    if (param_2 != lVar10) goto LAB_0011e0e5;
  }
  lVar10 = 0;
  do {
    uVar3 = ((undefined8 *)(param_2 + lVar10))[1];
    *(undefined8 *)(lVar6 + lVar10) = *(undefined8 *)(param_2 + lVar10);
    ((undefined8 *)(lVar6 + lVar10))[1] = uVar3;
    puVar9 = (undefined8 *)(param_2 + 0x10 + lVar10);
    uVar3 = puVar9[1];
    puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar10);
    *puVar1 = *puVar9;
    puVar1[1] = uVar3;
    lVar10 = lVar10 + 0x20;
  } while (lVar10 != lVar2 - param_2);
  lVar6 = lVar6 + lVar10;
LAB_0011e140:
  *(long *)(this + 8) = lVar5;
  *(long *)(this + 0x10) = lVar6;
  *(long *)(this + 0x18) = lVar8;
  return;
}



/* void std::vector<TIntermNode*, glslang::pool_allocator<TIntermNode*>
   >::_M_realloc_insert<TIntermNode* const&>(__gnu_cxx::__normal_iterator<TIntermNode**,
   std::vector<TIntermNode*, glslang::pool_allocator<TIntermNode*> > >, TIntermNode* const&) */

void __thiscall
std::vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>>::
_M_realloc_insert<TIntermNode*const&>
          (vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *this,long param_2,
          undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = *(long *)(this + 0x10);
  lVar3 = *(long *)(this + 8);
  uVar2 = lVar1 - lVar3 >> 3;
  if (uVar2 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (lVar3 == lVar1) {
    uVar5 = uVar2 + 1;
    if (0xfffffffffffffffe < uVar2) goto LAB_0011e2e0;
    if (0xfffffffffffffff < uVar5) {
      uVar5 = 0xfffffffffffffff;
    }
    lVar7 = uVar5 * 8;
LAB_0011e2ea:
    lVar4 = glslang::TPoolAllocator::allocate(*(ulong *)this);
    lVar7 = lVar4 + lVar7;
    lVar6 = lVar4 + 8;
    *(undefined8 *)(lVar4 + (param_2 - lVar3)) = *param_3;
    if (param_2 != lVar3) {
LAB_0011e279:
      lVar6 = 0;
      do {
        *(undefined8 *)(lVar4 + lVar6) = *(undefined8 *)(lVar3 + lVar6);
        lVar6 = lVar6 + 8;
      } while (lVar6 != param_2 - lVar3);
      lVar6 = lVar4 + 8 + lVar6;
    }
    if (param_2 == lVar1) goto LAB_0011e2c4;
  }
  else {
    uVar5 = uVar2 * 2;
    if (uVar5 < uVar2) {
LAB_0011e2e0:
      lVar7 = 0x7ffffffffffffff8;
      goto LAB_0011e2ea;
    }
    if (uVar5 != 0) {
      if (0xfffffffffffffff < uVar5) {
        uVar5 = 0xfffffffffffffff;
      }
      lVar7 = uVar5 * 8;
      goto LAB_0011e2ea;
    }
    lVar4 = 0;
    lVar7 = 0;
    lVar6 = 8;
    *(undefined8 *)(param_2 - lVar3) = *param_3;
    if (param_2 != lVar3) goto LAB_0011e279;
  }
  lVar3 = 0;
  do {
    *(undefined8 *)(lVar6 + lVar3) = *(undefined8 *)(param_2 + lVar3);
    lVar3 = lVar3 + 8;
  } while (lVar3 != lVar1 - param_2);
  lVar6 = lVar6 + lVar3;
LAB_0011e2c4:
  *(long *)(this + 8) = lVar4;
  *(long *)(this + 0x10) = lVar6;
  *(long *)(this + 0x18) = lVar7;
  return;
}



/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::AstRefType>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::AstRefType> >,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::AstRefType> >
   >::find(std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> >
   const&) */

_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
* __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
::find(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
       *this,basic_string *param_1)

{
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
  *p_Var1;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
  *p_Var2;
  void *__s2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
  *p_Var8;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
  *p_Var9;
  
  p_Var1 = this + 8;
  p_Var8 = p_Var1;
  if (*(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
        **)(this + 0x10) !=
      (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
       *)0x0) {
    __s2 = *(void **)(param_1 + 8);
    uVar3 = *(ulong *)(param_1 + 0x10);
    p_Var9 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
               **)(this + 0x10);
    do {
      while( true ) {
        uVar4 = *(ulong *)(p_Var9 + 0x30);
        uVar6 = uVar3;
        if (uVar4 <= uVar3) {
          uVar6 = uVar4;
        }
        if ((uVar6 != 0) && (iVar5 = memcmp(*(void **)(p_Var9 + 0x28),__s2,uVar6), iVar5 != 0))
        break;
        lVar7 = uVar4 - uVar3;
        if (lVar7 < 0x80000000) {
          if (-0x80000001 < lVar7) {
            iVar5 = (int)lVar7;
            break;
          }
          goto LAB_0011e3b0;
        }
LAB_0011e3f9:
        p_Var2 = p_Var9 + 0x10;
        p_Var8 = p_Var9;
        p_Var9 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
                   **)p_Var2;
        if (*(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
              **)p_Var2 ==
            (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
             *)0x0) goto LAB_0011e405;
      }
      if (-1 < iVar5) goto LAB_0011e3f9;
LAB_0011e3b0:
      p_Var9 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
                 **)(p_Var9 + 0x18);
    } while (p_Var9 != (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
                        *)0x0);
LAB_0011e405:
    if (p_Var1 != p_Var8) {
      uVar4 = *(ulong *)(p_Var8 + 0x30);
      uVar6 = uVar3;
      if (uVar4 <= uVar3) {
        uVar6 = uVar4;
      }
      if ((uVar6 == 0) || (iVar5 = memcmp(__s2,*(void **)(p_Var8 + 0x28),uVar6), iVar5 == 0)) {
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
  return p_Var8;
}



/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::_Identity<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >::find(std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&) const */

_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
* __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
::find(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
       *this,basic_string *param_1)

{
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
  *p_Var1;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
  *p_Var2;
  void *__s2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
  *p_Var8;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
  *p_Var9;
  
  p_Var1 = this + 8;
  p_Var8 = p_Var1;
  if (*(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
        **)(this + 0x10) !=
      (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
       *)0x0) {
    __s2 = *(void **)(param_1 + 8);
    uVar3 = *(ulong *)(param_1 + 0x10);
    p_Var9 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
               **)(this + 0x10);
    do {
      while( true ) {
        uVar4 = *(ulong *)(p_Var9 + 0x30);
        uVar6 = uVar3;
        if (uVar4 <= uVar3) {
          uVar6 = uVar4;
        }
        if ((uVar6 != 0) && (iVar5 = memcmp(*(void **)(p_Var9 + 0x28),__s2,uVar6), iVar5 != 0))
        break;
        lVar7 = uVar4 - uVar3;
        if (lVar7 < 0x80000000) {
          if (-0x80000001 < lVar7) {
            iVar5 = (int)lVar7;
            break;
          }
          goto LAB_0011e4b0;
        }
LAB_0011e4f9:
        p_Var2 = p_Var9 + 0x10;
        p_Var8 = p_Var9;
        p_Var9 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
                   **)p_Var2;
        if (*(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
              **)p_Var2 ==
            (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
             *)0x0) goto LAB_0011e505;
      }
      if (-1 < iVar5) goto LAB_0011e4f9;
LAB_0011e4b0:
      p_Var9 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
                 **)(p_Var9 + 0x18);
    } while (p_Var9 != (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
                        *)0x0);
LAB_0011e505:
    if (p_Var1 != p_Var8) {
      uVar4 = *(ulong *)(p_Var8 + 0x30);
      uVar6 = uVar3;
      if (uVar4 <= uVar3) {
        uVar6 = uVar4;
      }
      if ((uVar6 == 0) || (iVar5 = memcmp(__s2,*(void **)(p_Var8 + 0x28),uVar6), iVar5 == 0)) {
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
  return p_Var8;
}



/* std::vector<TIntermNode*, glslang::pool_allocator<TIntermNode*> >::_M_default_append(unsigned
   long) */

void __thiscall
std::vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>>::_M_default_append
          (vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>> *this,ulong param_1)

{
  ulong uVar1;
  void *__s;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_1 == 0) {
    return;
  }
  __s = *(void **)(this + 0x10);
  pvVar2 = *(void **)(this + 8);
  if ((ulong)(*(long *)(this + 0x18) - (long)__s >> 3) < param_1) {
    uVar6 = (long)__s - (long)pvVar2 >> 3;
    if (0xfffffffffffffff - uVar6 < param_1) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_default_append");
    }
    uVar1 = param_1 + uVar6;
    uVar3 = 0xfffffffffffffff;
    if (uVar1 < 0x1000000000000000) {
      uVar3 = uVar1;
    }
    if ((param_1 <= uVar6) && (uVar3 = uVar6 * 2, 0xfffffffffffffff < uVar3)) {
      uVar3 = 0xfffffffffffffff;
    }
    lVar4 = glslang::TPoolAllocator::allocate(*(ulong *)this);
    memset((void *)(lVar4 + ((long)__s - (long)pvVar2)),0,param_1 * 8);
    lVar5 = 0;
    if (pvVar2 != __s) {
      do {
        *(undefined8 *)(lVar4 + lVar5) = *(undefined8 *)((long)pvVar2 + lVar5);
        lVar5 = lVar5 + 8;
      } while ((long)__s - (long)pvVar2 != lVar5);
    }
    *(long *)(this + 8) = lVar4;
    *(ulong *)(this + 0x10) = lVar4 + uVar1 * 8;
    *(ulong *)(this + 0x18) = lVar4 + uVar3 * 8;
    return;
  }
  memset(__s,0,param_1 * 8);
  *(void **)(this + 0x10) = (void *)(param_1 * 8 + (long)__s);
  return;
}



/* __gnu_cxx::__normal_iterator<TIntermNode**, std::vector<TIntermNode*,
   glslang::pool_allocator<TIntermNode*> > >
   std::__remove_if<__gnu_cxx::__normal_iterator<TIntermNode**, std::vector<TIntermNode*,
   glslang::pool_allocator<TIntermNode*> > >, __gnu_cxx::__ops::_Iter_equals_val<decltype(nullptr)
   const> >(__gnu_cxx::__normal_iterator<TIntermNode**, std::vector<TIntermNode*,
   glslang::pool_allocator<TIntermNode*> > >, __gnu_cxx::__normal_iterator<TIntermNode**,
   std::vector<TIntermNode*, glslang::pool_allocator<TIntermNode*> > >,
   __gnu_cxx::__ops::_Iter_equals_val<decltype(nullptr) const>) */

long * std::
       __remove_if<__gnu_cxx::__normal_iterator<TIntermNode**,std::vector<TIntermNode*,glslang::pool_allocator<TIntermNode*>>>,__gnu_cxx::__ops::_Iter_equals_val<decltype(nullptr)const>>
                 (long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = (long)param_2 - (long)param_1;
  if (0 < lVar1 >> 5) {
    plVar2 = param_1 + (lVar1 >> 5) * 4;
    do {
      if (*param_1 == 0) goto LAB_0011e740;
      if (param_1[1] == 0) {
        param_1 = param_1 + 1;
        goto LAB_0011e740;
      }
      if (param_1[2] == 0) {
        param_1 = param_1 + 2;
        goto LAB_0011e740;
      }
      if (param_1[3] == 0) {
        param_1 = param_1 + 3;
        goto LAB_0011e740;
      }
      param_1 = param_1 + 4;
    } while (plVar2 != param_1);
    lVar1 = (long)param_2 - (long)param_1;
  }
  lVar1 = lVar1 >> 3;
  if (lVar1 == 2) {
LAB_0011e7a0:
    if (*param_1 == 0) goto LAB_0011e740;
    param_1 = param_1 + 1;
  }
  else {
    if (lVar1 == 3) {
      if (*param_1 == 0) goto LAB_0011e740;
      param_1 = param_1 + 1;
      goto LAB_0011e7a0;
    }
    if (lVar1 != 1) {
      return param_2;
    }
  }
  if (*param_1 != 0) {
    return param_2;
  }
LAB_0011e740:
  plVar2 = param_1;
  if (param_1 == param_2) {
    return param_2;
  }
  while (plVar2 = plVar2 + 1, plVar2 != param_2) {
    if (*plVar2 != 0) {
      *param_1 = *plVar2;
      param_1 = param_1 + 1;
    }
  }
  return param_1;
}



/* void std::vector<glslang::TRange, std::allocator<glslang::TRange>
   >::_M_realloc_insert<glslang::TRange const&>(__gnu_cxx::__normal_iterator<glslang::TRange*,
   std::vector<glslang::TRange, std::allocator<glslang::TRange> > >, glslang::TRange const&) */

void __thiscall
std::vector<glslang::TRange,std::allocator<glslang::TRange>>::
_M_realloc_insert<glslang::TRange_const&>
          (vector<glslang::TRange,std::allocator<glslang::TRange>> *this,undefined8 *param_2,
          undefined8 *param_3)

{
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
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar5 = (long)puVar1 - (long)puVar2 >> 3;
  if (uVar5 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar5) goto LAB_0011e8e0;
    uVar7 = 0xfffffffffffffff;
    if (uVar5 + 1 < 0x1000000000000000) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = uVar7 << 3;
LAB_0011e8ea:
    puVar6 = (undefined8 *)operator_new(uVar7);
    lVar10 = uVar7 + (long)puVar6;
    puVar9 = puVar6 + 1;
    *(undefined8 *)((long)puVar6 + ((long)param_2 - (long)puVar2)) = *param_3;
    if (param_2 != puVar2) {
LAB_0011e859:
      puVar4 = puVar6;
      puVar8 = puVar2;
      do {
        puVar9 = puVar4;
        uVar3 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar9 = uVar3;
        puVar4 = puVar9 + 1;
      } while (puVar9 + 1 != (undefined8 *)(((long)param_2 - (long)puVar2) + (long)puVar6));
      puVar9 = puVar9 + 2;
    }
    if (param_2 == puVar1) goto LAB_0011e8a9;
  }
  else {
    uVar7 = uVar5 * 2;
    if (uVar7 < uVar5) {
LAB_0011e8e0:
      uVar7 = 0x7ffffffffffffff8;
      goto LAB_0011e8ea;
    }
    if (uVar7 != 0) {
      if (0xfffffffffffffff < uVar7) {
        uVar7 = 0xfffffffffffffff;
      }
      uVar7 = uVar7 * 8;
      goto LAB_0011e8ea;
    }
    lVar10 = 0;
    puVar6 = (undefined8 *)0x0;
    puVar9 = (undefined8 *)&DAT_00000008;
    *(undefined8 *)((long)param_2 - (long)puVar2) = *param_3;
    if (param_2 != puVar2) goto LAB_0011e859;
  }
  memcpy(puVar9,param_2,(long)puVar1 - (long)param_2);
  puVar9 = (undefined8 *)((long)puVar9 + ((long)puVar1 - (long)param_2));
LAB_0011e8a9:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar9;
  *(long *)(this + 0x10) = lVar10;
  return;
}



/* void std::vector<glslang::TIoRange, std::allocator<glslang::TIoRange>
   >::_M_realloc_insert<glslang::TIoRange const&>(__gnu_cxx::__normal_iterator<glslang::TIoRange*,
   std::vector<glslang::TIoRange, std::allocator<glslang::TIoRange> > >, glslang::TIoRange const&)
    */

void __thiscall
std::vector<glslang::TIoRange,std::allocator<glslang::TIoRange>>::
_M_realloc_insert<glslang::TIoRange_const&>
          (vector<glslang::TIoRange,std::allocator<glslang::TIoRange>> *this,undefined8 *param_2,
          undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  void *__dest;
  void *pvVar12;
  undefined8 *puVar13;
  size_t __n;
  long local_50;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  lVar6 = (long)puVar1 - (long)puVar2 >> 2;
  uVar7 = lVar6 * 0x6db6db6db6db6db7;
  if (uVar7 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  puVar10 = (undefined8 *)((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    uVar11 = uVar7 + 1;
    if (0xfffffffffffffffe < uVar7) goto LAB_0011eaf0;
    if (0x492492492492492 < uVar11) {
      uVar11 = 0x492492492492492;
    }
    uVar11 = uVar11 * 0x1c;
LAB_0011eafa:
    puVar9 = (undefined8 *)operator_new(uVar11);
    local_50 = (long)puVar9 + uVar11;
    uVar3 = param_3[1];
    uVar4 = *(undefined8 *)((long)param_3 + 0xc);
    uVar5 = *(undefined8 *)((long)param_3 + 0x14);
    __dest = (void *)((long)puVar9 + 0x1c);
    *(undefined8 *)((long)puVar9 + (long)puVar10) = *param_3;
    ((undefined8 *)((long)puVar9 + (long)puVar10))[1] = uVar3;
    puVar10 = (undefined8 *)((long)puVar9 + 0xc + (long)puVar10);
    *puVar10 = uVar4;
    puVar10[1] = uVar5;
    puVar10 = puVar2;
    puVar13 = puVar9;
    if (param_2 != puVar2) {
LAB_0011ea10:
      do {
        uVar3 = puVar10[1];
        uVar4 = *(undefined8 *)((long)puVar10 + 0xc);
        uVar5 = *(undefined8 *)((long)puVar10 + 0x14);
        puVar8 = (undefined8 *)((long)puVar10 + 0x1c);
        *puVar9 = *puVar10;
        puVar9[1] = uVar3;
        *(undefined8 *)((long)puVar9 + 0xc) = uVar4;
        *(undefined8 *)((long)puVar9 + 0x14) = uVar5;
        puVar10 = puVar8;
        puVar9 = (undefined8 *)((long)puVar9 + 0x1c);
      } while (puVar8 != param_2);
      __dest = (void *)((long)puVar13 +
                       (((ulong)((long)param_2 + (-0x1c - (long)puVar2)) >> 2) * 0x2db6db6db6db6db7
                       & 0x3fffffffffffffff) * 0x1c + 0x38);
      puVar9 = puVar13;
    }
    pvVar12 = __dest;
    if (param_2 == puVar1) goto LAB_0011eab3;
  }
  else {
    uVar11 = lVar6 * -0x2492492492492492;
    if (uVar11 < uVar7) {
LAB_0011eaf0:
      uVar11 = 0x7ffffffffffffff8;
      goto LAB_0011eafa;
    }
    if (uVar11 != 0) {
      if (0x492492492492492 < uVar11) {
        uVar11 = 0x492492492492492;
      }
      uVar11 = uVar11 * 0x1c;
      goto LAB_0011eafa;
    }
    uVar3 = param_3[1];
    uVar4 = *(undefined8 *)((long)param_3 + 0xc);
    uVar5 = *(undefined8 *)((long)param_3 + 0x14);
    puVar9 = (undefined8 *)0x0;
    local_50 = 0;
    __dest = (void *)0x1c;
    *puVar10 = *param_3;
    puVar10[1] = uVar3;
    *(undefined8 *)((long)puVar10 + 0xc) = uVar4;
    *(undefined8 *)((long)puVar10 + 0x14) = uVar5;
    puVar10 = puVar2;
    puVar13 = puVar9;
    if (param_2 != puVar2) goto LAB_0011ea10;
  }
  __n = ((((ulong)((long)puVar1 + (-0x1c - (long)param_2)) >> 2) * 0x2db6db6db6db6db7 &
         0x3fffffffffffffff) + 1) * 0x1c;
  pvVar12 = (void *)((long)__dest + __n);
  memcpy(__dest,param_2,__n);
LAB_0011eab3:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar9;
  *(void **)(this + 8) = pvVar12;
  *(long *)(this + 0x10) = local_50;
  return;
}



/* void std::vector<glslang::TOffsetRange, std::allocator<glslang::TOffsetRange>
   >::_M_realloc_insert<glslang::TOffsetRange
   const&>(__gnu_cxx::__normal_iterator<glslang::TOffsetRange*, std::vector<glslang::TOffsetRange,
   std::allocator<glslang::TOffsetRange> > >, glslang::TOffsetRange const&) */

void __thiscall
std::vector<glslang::TOffsetRange,std::allocator<glslang::TOffsetRange>>::
_M_realloc_insert<glslang::TOffsetRange_const&>
          (vector<glslang::TOffsetRange,std::allocator<glslang::TOffsetRange>> *this,
          undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar5 = (long)puVar1 - (long)puVar2 >> 4;
  if (uVar5 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  puVar8 = (undefined8 *)((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar5) goto LAB_0011ecb8;
    uVar7 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = uVar7 << 4;
LAB_0011ecc2:
    puVar6 = (undefined8 *)operator_new(uVar7);
    uVar3 = param_3[1];
    lVar11 = uVar7 + (long)puVar6;
    puVar10 = puVar6 + 2;
    *(undefined8 *)((long)puVar6 + (long)puVar8) = *param_3;
    ((undefined8 *)((long)puVar6 + (long)puVar8))[1] = uVar3;
    if (param_2 != puVar2) {
LAB_0011ec2a:
      puVar8 = puVar6;
      puVar9 = puVar2;
      do {
        puVar10 = puVar8;
        uVar3 = *puVar9;
        uVar4 = puVar9[1];
        puVar9 = puVar9 + 2;
        *puVar10 = uVar3;
        puVar10[1] = uVar4;
        puVar8 = puVar10 + 2;
      } while (puVar10 + 2 != (undefined8 *)(((long)param_2 - (long)puVar2) + (long)puVar6));
      puVar10 = puVar10 + 4;
    }
    puVar8 = puVar10;
    if (param_2 == puVar1) goto LAB_0011ec7c;
  }
  else {
    uVar7 = uVar5 * 2;
    if (uVar7 < uVar5) {
LAB_0011ecb8:
      uVar7 = 0x7ffffffffffffff0;
      goto LAB_0011ecc2;
    }
    if (uVar7 != 0) {
      if (0x7ffffffffffffff < uVar7) {
        uVar7 = 0x7ffffffffffffff;
      }
      uVar7 = uVar7 << 4;
      goto LAB_0011ecc2;
    }
    uVar3 = param_3[1];
    lVar11 = 0;
    puVar6 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x10;
    *puVar8 = *param_3;
    puVar8[1] = uVar3;
    if (param_2 != puVar2) goto LAB_0011ec2a;
  }
  puVar8 = (undefined8 *)((long)puVar10 + ((long)puVar1 - (long)param_2));
  memcpy(puVar10,param_2,(long)puVar1 - (long)param_2);
LAB_0011ec7c:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = lVar11;
  return;
}



/* void std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string >
   >::_M_realloc_insert<std::__cxx11::string >(__gnu_cxx::__normal_iterator<std::__cxx11::string*,
   std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string > > >,
   std::__cxx11::string&&) */

void __thiscall
std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
_M_realloc_insert<std::__cxx11::string>
          (vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *this,void *param_2,
          long *param_3)

{
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
  
  pvVar2 = *(void **)(this + 8);
  pvVar3 = *(void **)this;
  uVar5 = (long)pvVar2 - (long)pvVar3 >> 5;
  if (uVar5 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (pvVar3 == pvVar2) {
    if (0xfffffffffffffffe < uVar5) goto LAB_0011ee78;
    uVar8 = 0x3ffffffffffffff;
    if (uVar5 + 1 < 0x400000000000000) {
      uVar8 = uVar5 + 1;
    }
    uVar8 = uVar8 << 5;
  }
  else {
    uVar8 = uVar5 * 2;
    if (uVar8 < uVar5) {
LAB_0011ee78:
      uVar8 = 0x7fffffffffffffe0;
    }
    else {
      if (uVar8 == 0) {
        plVar6 = (long *)&DAT_00000020;
        lVar11 = 0;
        plVar7 = (long *)0x0;
        goto LAB_0011edad;
      }
      if (0x3ffffffffffffff < uVar8) {
        uVar8 = 0x3ffffffffffffff;
      }
      uVar8 = uVar8 << 5;
    }
  }
  plVar7 = (long *)operator_new(uVar8);
  lVar11 = uVar8 + (long)plVar7;
  plVar6 = plVar7 + 4;
LAB_0011edad:
  plVar9 = (long *)(((long)param_2 - (long)pvVar3) + (long)plVar7);
  lVar15 = *param_3;
  plVar10 = param_3 + 2;
  lVar14 = param_3[1];
  *plVar9 = (long)(plVar9 + 2);
  if ((long *)lVar15 == plVar10) {
    uVar5 = lVar14 + 1;
    uVar12 = (uint)uVar5;
    if (uVar12 < 8) {
      if ((uVar5 & 4) == 0) {
        if ((uVar12 != 0) && (*(char *)(plVar9 + 2) = (char)param_3[2], (uVar5 & 2) != 0)) {
          *(undefined2 *)((long)plVar9 + (uVar5 & 0xffffffff) + 0xe) =
               *(undefined2 *)((long)param_3 + (uVar5 & 0xffffffff) + 0xe);
        }
      }
      else {
        *(int *)(plVar9 + 2) = (int)param_3[2];
        *(undefined4 *)((long)plVar9 + (uVar5 & 0xffffffff) + 0xc) =
             *(undefined4 *)((long)param_3 + (uVar5 & 0xffffffff) + 0xc);
      }
    }
    else {
      plVar9[2] = param_3[2];
      *(undefined8 *)((long)plVar9 + (uVar5 & 0xffffffff) + 8) =
           *(undefined8 *)((long)param_3 + (uVar5 & 0xffffffff) + 8);
      lVar15 = (long)(plVar9 + 2) - ((ulong)(plVar9 + 3) & 0xfffffffffffffff8);
      uVar12 = uVar12 + (int)lVar15 & 0xfffffff8;
      if (7 < uVar12) {
        uVar13 = 0;
        do {
          uVar5 = (ulong)uVar13;
          uVar13 = uVar13 + 8;
          *(undefined8 *)(((ulong)(plVar9 + 3) & 0xfffffffffffffff8) + uVar5) =
               *(undefined8 *)((long)plVar10 + (uVar5 - lVar15));
        } while (uVar13 < uVar12);
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
  *(undefined1 *)(param_3 + 2) = 0;
  if (param_2 != pvVar3) {
    plVar10 = (long *)((long)pvVar3 + 0x10);
    plVar6 = (long *)(((long)param_2 - (long)pvVar3) + (long)plVar7);
    plVar9 = plVar7;
    do {
      plVar1 = plVar9 + 2;
      lVar15 = plVar10[-1];
      *plVar9 = (long)plVar1;
      if (plVar10 == (long *)plVar10[-2]) {
        uVar5 = lVar15 + 1;
        uVar12 = (uint)uVar5;
        if (uVar12 < 8) {
          if ((uVar5 & 4) == 0) {
            if (uVar12 != 0) {
              *(char *)plVar1 = (char)*plVar10;
              if ((uVar5 & 2) == 0) goto LAB_0011ee6b;
              *(undefined2 *)((long)plVar9 + (uVar5 & 0xffffffff) + 0xe) =
                   *(undefined2 *)((long)plVar10 + ((uVar5 & 0xffffffff) - 2));
              lVar15 = plVar10[-1];
            }
          }
          else {
            *(int *)plVar1 = (int)*plVar10;
            *(undefined4 *)((long)plVar9 + (uVar5 & 0xffffffff) + 0xc) =
                 *(undefined4 *)((long)plVar10 + ((uVar5 & 0xffffffff) - 4));
            lVar15 = plVar10[-1];
          }
        }
        else {
          *plVar1 = *plVar10;
          *(undefined8 *)((long)plVar9 + (uVar5 & 0xffffffff) + 8) =
               *(undefined8 *)((long)plVar10 + ((uVar5 & 0xffffffff) - 8));
          lVar15 = (long)plVar1 - ((ulong)(plVar9 + 3) & 0xfffffffffffffff8);
          uVar12 = uVar12 + (int)lVar15 & 0xfffffff8;
          if (7 < uVar12) {
            uVar13 = 0;
            do {
              uVar5 = (ulong)uVar13;
              uVar13 = uVar13 + 8;
              *(undefined8 *)(((ulong)(plVar9 + 3) & 0xfffffffffffffff8) + uVar5) =
                   *(undefined8 *)((long)plVar10 + (uVar5 - lVar15));
            } while (uVar13 < uVar12);
          }
LAB_0011ee6b:
          lVar15 = plVar10[-1];
        }
      }
      else {
        *plVar9 = plVar10[-2];
        plVar9[2] = *plVar10;
      }
      plVar9[1] = lVar15;
      plVar9 = plVar9 + 4;
      plVar10 = plVar10 + 4;
    } while (plVar6 != plVar9);
    plVar6 = plVar6 + 4;
  }
  plVar10 = plVar6;
  if (param_2 != pvVar2) {
    plVar9 = (long *)((long)param_2 + 0x10);
    plVar10 = (long *)(((long)pvVar2 - (long)param_2) + (long)plVar6);
    do {
      plVar4 = (long *)plVar9[-2];
      plVar1 = plVar6 + 2;
      lVar15 = plVar9[-1];
      *plVar6 = (long)plVar1;
      if (plVar9 == plVar4) {
        uVar5 = lVar15 + 1;
        uVar12 = (uint)uVar5;
        if (uVar12 < 8) {
          if ((uVar5 & 4) == 0) {
            if ((uVar12 != 0) && (*(char *)plVar1 = (char)*plVar9, (uVar5 & 2) != 0)) {
              *(undefined2 *)((long)plVar6 + (uVar5 & 0xffffffff) + 0xe) =
                   *(undefined2 *)((long)plVar9 + ((uVar5 & 0xffffffff) - 2));
            }
          }
          else {
            *(int *)plVar1 = (int)*plVar9;
            *(undefined4 *)((long)plVar6 + (uVar5 & 0xffffffff) + 0xc) =
                 *(undefined4 *)((long)plVar9 + ((uVar5 & 0xffffffff) - 4));
          }
        }
        else {
          *plVar1 = *plVar9;
          *(undefined8 *)((long)plVar6 + (uVar5 & 0xffffffff) + 8) =
               *(undefined8 *)((long)plVar9 + ((uVar5 & 0xffffffff) - 8));
          lVar14 = (long)plVar1 - ((ulong)(plVar6 + 3) & 0xfffffffffffffff8);
          uVar12 = uVar12 + (int)lVar14 & 0xfffffff8;
          if (7 < uVar12) {
            uVar13 = 0;
            do {
              uVar5 = (ulong)uVar13;
              uVar13 = uVar13 + 8;
              *(undefined8 *)(((ulong)(plVar6 + 3) & 0xfffffffffffffff8) + uVar5) =
                   *(undefined8 *)((long)plVar9 + (uVar5 - lVar14));
            } while (uVar13 < uVar12);
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
    } while (plVar6 != plVar10);
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3,*(long *)(this + 0x10) - (long)pvVar3);
  }
  *(long **)this = plVar7;
  *(long **)(this + 8) = plVar10;
  *(long *)(this + 0x10) = lVar11;
  return;
}



/* std::_Rb_tree<std::__cxx11::string, std::__cxx11::string, std::_Identity<std::__cxx11::string >,
   std::less<std::__cxx11::string >, std::allocator<std::__cxx11::string >
   >::_M_get_insert_unique_pos(std::__cxx11::string const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
::_M_get_insert_unique_pos
          (_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
           *this,string *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  _Rb_tree_node_base *p_Var5;
  long lVar6;
  size_t __n;
  _Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
  *p_Var7;
  _Rb_tree_node_base *p_Var8;
  ulong uVar9;
  void *__s2;
  ulong uVar10;
  undefined1 auVar11 [16];
  void *local_50;
  
  if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
    p_Var7 = this + 8;
LAB_0011f2a4:
    if (*(_Rb_tree_node_base **)(this + 0x18) == (_Rb_tree_node_base *)p_Var7) {
      p_Var5 = (_Rb_tree_node_base *)0x0;
      p_Var8 = (_Rb_tree_node_base *)p_Var7;
      goto LAB_0011f26a;
    }
    p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_decrement((_Rb_tree_node_base *)p_Var7);
    uVar9 = *(ulong *)(p_Var5 + 0x28);
    __s2 = *(void **)(p_Var5 + 0x20);
    uVar10 = *(ulong *)(param_1 + 8);
    local_50 = *(void **)param_1;
    __n = uVar9;
    if (uVar10 <= uVar9) {
      __n = uVar10;
    }
  }
  else {
    local_50 = *(void **)param_1;
    uVar10 = *(ulong *)(param_1 + 8);
    p_Var5 = *(_Rb_tree_node_base **)(this + 0x10);
    do {
      p_Var7 = (_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
                *)p_Var5;
      uVar9 = *(ulong *)((_Rb_tree_node_base *)p_Var7 + 0x28);
      __s2 = *(void **)((_Rb_tree_node_base *)p_Var7 + 0x20);
      __n = uVar9;
      if (uVar10 <= uVar9) {
        __n = uVar10;
      }
      if (__n == 0) {
LAB_0011f214:
        uVar4 = uVar10 - uVar9;
        if (0x7fffffff < (long)uVar4) goto LAB_0011f232;
        if (-0x80000001 < (long)uVar4) goto LAB_0011f22e;
LAB_0011f1d8:
        p_Var5 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var7 + 0x10);
        bVar1 = true;
      }
      else {
        uVar2 = memcmp(local_50,__s2,__n);
        uVar4 = (ulong)uVar2;
        if (uVar2 == 0) goto LAB_0011f214;
LAB_0011f22e:
        if ((int)uVar4 < 0) goto LAB_0011f1d8;
LAB_0011f232:
        p_Var5 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var7 + 0x18);
        bVar1 = false;
      }
    } while (p_Var5 != (_Rb_tree_node_base *)0x0);
    p_Var5 = (_Rb_tree_node_base *)p_Var7;
    if (bVar1) goto LAB_0011f2a4;
  }
  if ((__n == 0) || (iVar3 = memcmp(__s2,local_50,__n), iVar3 == 0)) {
    lVar6 = uVar9 - uVar10;
    if (0x7fffffff < lVar6) {
      p_Var8 = (_Rb_tree_node_base *)0x0;
      goto LAB_0011f26a;
    }
    if (lVar6 < -0x80000000) {
      p_Var5 = (_Rb_tree_node_base *)0x0;
      p_Var8 = (_Rb_tree_node_base *)p_Var7;
      goto LAB_0011f26a;
    }
    iVar3 = (int)lVar6;
  }
  p_Var8 = (_Rb_tree_node_base *)0x0;
  if (iVar3 < 0) {
    p_Var8 = (_Rb_tree_node_base *)p_Var7;
    p_Var5 = (_Rb_tree_node_base *)0x0;
  }
LAB_0011f26a:
  auVar11._8_8_ = p_Var8;
  auVar11._0_8_ = p_Var5;
  return auVar11;
}



/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::_Identity<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >::_M_get_insert_unique_pos(std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
::_M_get_insert_unique_pos
          (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
           *this,basic_string *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  _Rb_tree_node_base *p_Var5;
  long lVar6;
  size_t __n;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
  *p_Var7;
  _Rb_tree_node_base *p_Var8;
  ulong uVar9;
  void *__s2;
  ulong uVar10;
  undefined1 auVar11 [16];
  void *local_50;
  
  if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
    p_Var7 = this + 8;
LAB_0011f424:
    if (*(_Rb_tree_node_base **)(this + 0x18) == (_Rb_tree_node_base *)p_Var7) {
      p_Var5 = (_Rb_tree_node_base *)0x0;
      p_Var8 = (_Rb_tree_node_base *)p_Var7;
      goto LAB_0011f3ea;
    }
    p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_decrement((_Rb_tree_node_base *)p_Var7);
    uVar9 = *(ulong *)(p_Var5 + 0x30);
    __s2 = *(void **)(p_Var5 + 0x28);
    uVar10 = *(ulong *)(param_1 + 0x10);
    local_50 = *(void **)(param_1 + 8);
    __n = uVar9;
    if (uVar10 <= uVar9) {
      __n = uVar10;
    }
  }
  else {
    local_50 = *(void **)(param_1 + 8);
    uVar10 = *(ulong *)(param_1 + 0x10);
    p_Var5 = *(_Rb_tree_node_base **)(this + 0x10);
    do {
      p_Var7 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
                *)p_Var5;
      uVar9 = *(ulong *)((_Rb_tree_node_base *)p_Var7 + 0x30);
      __s2 = *(void **)((_Rb_tree_node_base *)p_Var7 + 0x28);
      __n = uVar9;
      if (uVar10 <= uVar9) {
        __n = uVar10;
      }
      if (__n == 0) {
LAB_0011f394:
        uVar4 = uVar10 - uVar9;
        if (0x7fffffff < (long)uVar4) goto LAB_0011f3b2;
        if (-0x80000001 < (long)uVar4) goto LAB_0011f3ae;
LAB_0011f358:
        p_Var5 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var7 + 0x10);
        bVar1 = true;
      }
      else {
        uVar2 = memcmp(local_50,__s2,__n);
        uVar4 = (ulong)uVar2;
        if (uVar2 == 0) goto LAB_0011f394;
LAB_0011f3ae:
        if ((int)uVar4 < 0) goto LAB_0011f358;
LAB_0011f3b2:
        p_Var5 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var7 + 0x18);
        bVar1 = false;
      }
    } while (p_Var5 != (_Rb_tree_node_base *)0x0);
    p_Var5 = (_Rb_tree_node_base *)p_Var7;
    if (bVar1) goto LAB_0011f424;
  }
  if ((__n == 0) || (iVar3 = memcmp(__s2,local_50,__n), iVar3 == 0)) {
    lVar6 = uVar9 - uVar10;
    if (0x7fffffff < lVar6) {
      p_Var8 = (_Rb_tree_node_base *)0x0;
      goto LAB_0011f3ea;
    }
    if (lVar6 < -0x80000000) {
      p_Var5 = (_Rb_tree_node_base *)0x0;
      p_Var8 = (_Rb_tree_node_base *)p_Var7;
      goto LAB_0011f3ea;
    }
    iVar3 = (int)lVar6;
  }
  p_Var8 = (_Rb_tree_node_base *)0x0;
  if (iVar3 < 0) {
    p_Var8 = (_Rb_tree_node_base *)p_Var7;
    p_Var5 = (_Rb_tree_node_base *)0x0;
  }
LAB_0011f3ea:
  auVar11._8_8_ = p_Var8;
  auVar11._0_8_ = p_Var5;
  return auVar11;
}



/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::AstRefType>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::AstRefType> >,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::AstRefType> >
   >::_M_get_insert_unique_pos(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
::_M_get_insert_unique_pos
          (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
           *this,basic_string *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  _Rb_tree_node_base *p_Var5;
  long lVar6;
  size_t __n;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
  *p_Var7;
  _Rb_tree_node_base *p_Var8;
  ulong uVar9;
  void *__s2;
  ulong uVar10;
  undefined1 auVar11 [16];
  void *local_50;
  
  if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
    p_Var7 = this + 8;
LAB_0011f5a4:
    if (*(_Rb_tree_node_base **)(this + 0x18) == (_Rb_tree_node_base *)p_Var7) {
      p_Var5 = (_Rb_tree_node_base *)0x0;
      p_Var8 = (_Rb_tree_node_base *)p_Var7;
      goto LAB_0011f56a;
    }
    p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_decrement((_Rb_tree_node_base *)p_Var7);
    uVar9 = *(ulong *)(p_Var5 + 0x30);
    __s2 = *(void **)(p_Var5 + 0x28);
    uVar10 = *(ulong *)(param_1 + 0x10);
    local_50 = *(void **)(param_1 + 8);
    __n = uVar9;
    if (uVar10 <= uVar9) {
      __n = uVar10;
    }
  }
  else {
    local_50 = *(void **)(param_1 + 8);
    uVar10 = *(ulong *)(param_1 + 0x10);
    p_Var5 = *(_Rb_tree_node_base **)(this + 0x10);
    do {
      p_Var7 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
                *)p_Var5;
      uVar9 = *(ulong *)((_Rb_tree_node_base *)p_Var7 + 0x30);
      __s2 = *(void **)((_Rb_tree_node_base *)p_Var7 + 0x28);
      __n = uVar9;
      if (uVar10 <= uVar9) {
        __n = uVar10;
      }
      if (__n == 0) {
LAB_0011f514:
        uVar4 = uVar10 - uVar9;
        if (0x7fffffff < (long)uVar4) goto LAB_0011f532;
        if (-0x80000001 < (long)uVar4) goto LAB_0011f52e;
LAB_0011f4d8:
        p_Var5 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var7 + 0x10);
        bVar1 = true;
      }
      else {
        uVar2 = memcmp(local_50,__s2,__n);
        uVar4 = (ulong)uVar2;
        if (uVar2 == 0) goto LAB_0011f514;
LAB_0011f52e:
        if ((int)uVar4 < 0) goto LAB_0011f4d8;
LAB_0011f532:
        p_Var5 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var7 + 0x18);
        bVar1 = false;
      }
    } while (p_Var5 != (_Rb_tree_node_base *)0x0);
    p_Var5 = (_Rb_tree_node_base *)p_Var7;
    if (bVar1) goto LAB_0011f5a4;
  }
  if ((__n == 0) || (iVar3 = memcmp(__s2,local_50,__n), iVar3 == 0)) {
    lVar6 = uVar9 - uVar10;
    if (0x7fffffff < lVar6) {
      p_Var8 = (_Rb_tree_node_base *)0x0;
      goto LAB_0011f56a;
    }
    if (lVar6 < -0x80000000) {
      p_Var5 = (_Rb_tree_node_base *)0x0;
      p_Var8 = (_Rb_tree_node_base *)p_Var7;
      goto LAB_0011f56a;
    }
    iVar3 = (int)lVar6;
  }
  p_Var8 = (_Rb_tree_node_base *)0x0;
  if (iVar3 < 0) {
    p_Var8 = (_Rb_tree_node_base *)p_Var7;
    p_Var5 = (_Rb_tree_node_base *)0x0;
  }
LAB_0011f56a:
  auVar11._8_8_ = p_Var8;
  auVar11._0_8_ = p_Var5;
  return auVar11;
}



/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::AstRefType>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::AstRefType> >,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::AstRefType> >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::AstRefType> >,
   std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> > const&)
    */

undefined1  [16] __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
           *this,_Rb_tree_node_base *param_2,basic_string *param_3)

{
  ulong uVar1;
  ulong uVar2;
  void *__s1;
  void *__s2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  _Rb_tree_node_base *p_Var7;
  _Rb_tree_node_base *p_Var8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_2 == (_Rb_tree_node_base *)(this + 8)) {
    if (*(long *)(this + 0x28) != 0) {
      param_2 = *(_Rb_tree_node_base **)(this + 0x20);
      uVar1 = *(ulong *)(param_3 + 0x10);
      uVar2 = *(ulong *)(param_2 + 0x30);
      uVar6 = uVar1;
      if (uVar2 <= uVar1) {
        uVar6 = uVar2;
      }
      if ((uVar6 == 0) ||
         (iVar3 = memcmp(*(void **)(param_2 + 0x28),*(void **)(param_3 + 8),uVar6), iVar3 == 0)) {
        lVar5 = uVar2 - uVar1;
        if (0x7fffffff < lVar5) goto LAB_0011f846;
        if (lVar5 < -0x80000000) goto LAB_0011f7d7;
        iVar3 = (int)lVar5;
      }
      if (-1 < iVar3) goto LAB_0011f846;
      goto LAB_0011f7d7;
    }
    goto LAB_0011f846;
  }
  uVar1 = *(ulong *)(param_3 + 0x10);
  uVar2 = *(ulong *)(param_2 + 0x30);
  __s1 = *(void **)(param_3 + 8);
  __s2 = *(void **)(param_2 + 0x28);
  uVar6 = uVar2;
  if (uVar1 <= uVar2) {
    uVar6 = uVar1;
  }
  p_Var7 = param_2;
  if (uVar6 == 0) {
    lVar5 = uVar1 - uVar2;
    if ((lVar5 < 0x80000000) && ((lVar5 < -0x80000000 || ((int)lVar5 < 0)))) {
LAB_0011f6fa:
      if (*(_Rb_tree_node_base **)(this + 0x18) == param_2) goto LAB_0011f6cc;
      p_Var8 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_2);
      uVar2 = *(ulong *)(p_Var8 + 0x30);
      uVar6 = uVar1;
      if (uVar2 <= uVar1) {
        uVar6 = uVar2;
      }
      if ((uVar6 == 0) || (iVar3 = memcmp(*(void **)(p_Var8 + 0x28),__s1,uVar6), iVar3 == 0)) {
        lVar5 = uVar2 - uVar1;
        if (0x7fffffff < lVar5) goto LAB_0011f846;
        if (-0x80000001 < lVar5) {
          iVar3 = (int)lVar5;
          goto LAB_0011f758;
        }
      }
      else {
LAB_0011f758:
        if (-1 < iVar3) goto LAB_0011f846;
      }
      if (*(long *)(p_Var8 + 0x18) == 0) {
        p_Var7 = (_Rb_tree_node_base *)0x0;
        param_2 = p_Var8;
      }
      goto LAB_0011f6cc;
    }
LAB_0011f6a5:
    uVar6 = uVar2 - uVar1;
    if ((long)uVar6 < 0x80000000) {
      if (-0x80000001 < (long)uVar6) goto LAB_0011f6bf;
      goto LAB_0011f7f0;
    }
  }
  else {
    iVar3 = memcmp(__s1,__s2,uVar6);
    if (iVar3 == 0) {
      lVar5 = uVar1 - uVar2;
      if (lVar5 < 0x80000000) {
        if (lVar5 < -0x80000000) goto LAB_0011f6fa;
        iVar3 = (int)lVar5;
        goto LAB_0011f694;
      }
    }
    else {
LAB_0011f694:
      if (iVar3 < 0) goto LAB_0011f6fa;
    }
    uVar4 = memcmp(__s2,__s1,uVar6);
    uVar6 = (ulong)uVar4;
    if (uVar4 == 0) goto LAB_0011f6a5;
LAB_0011f6bf:
    if ((int)uVar6 < 0) {
LAB_0011f7f0:
      if (*(_Rb_tree_node_base **)(this + 0x20) == param_2) {
LAB_0011f7d7:
        auVar10._8_8_ = 0;
        auVar10._0_8_ = param_2;
        return auVar10 << 0x40;
      }
      p_Var8 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
      uVar2 = *(ulong *)(p_Var8 + 0x30);
      uVar6 = uVar1;
      if (uVar2 <= uVar1) {
        uVar6 = uVar2;
      }
      if (uVar6 == 0) {
LAB_0011f82c:
        uVar6 = uVar1 - uVar2;
        if (0x7fffffff < (long)uVar6) goto LAB_0011f846;
        if (-0x80000001 < (long)uVar6) goto LAB_0011f842;
      }
      else {
        uVar4 = memcmp(__s1,*(void **)(p_Var8 + 0x28),uVar6);
        uVar6 = (ulong)uVar4;
        if (uVar4 == 0) goto LAB_0011f82c;
LAB_0011f842:
        if (-1 < (int)uVar6) {
LAB_0011f846:
          auVar10 = _M_get_insert_unique_pos(this,param_3);
          return auVar10;
        }
      }
      p_Var7 = (_Rb_tree_node_base *)0x0;
      if (*(long *)(param_2 + 0x18) != 0) {
        p_Var7 = p_Var8;
        param_2 = p_Var8;
      }
      goto LAB_0011f6cc;
    }
  }
  param_2 = (_Rb_tree_node_base *)0x0;
LAB_0011f6cc:
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = p_Var7;
  return auVar9;
}



/* std::map<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >, glslang::AstRefType, std::less<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::AstRefType> >
   >::operator[](std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */

_Rb_tree_node_base * __thiscall
std::
map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::AstRefType,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
::operator[](map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::AstRefType,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
             *this,basic_string *param_1)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  void *__s2;
  ulong uVar3;
  int iVar4;
  _Rb_tree_node_base *p_Var5;
  ulong uVar6;
  _Rb_tree_node_base *p_Var7;
  long lVar8;
  ulong uVar9;
  _Rb_tree_node_base *p_Var10;
  bool bVar11;
  undefined1 auVar12 [16];
  
  p_Var1 = (_Rb_tree_node_base *)(this + 8);
  p_Var10 = p_Var1;
  if (*(_Rb_tree_node_base **)(this + 0x10) != (_Rb_tree_node_base *)0x0) {
    __s2 = *(void **)(param_1 + 8);
    uVar3 = *(ulong *)(param_1 + 0x10);
    p_Var7 = *(_Rb_tree_node_base **)(this + 0x10);
    do {
      while( true ) {
        uVar6 = *(ulong *)(p_Var7 + 0x30);
        uVar9 = uVar3;
        if (uVar6 <= uVar3) {
          uVar9 = uVar6;
        }
        if ((uVar9 != 0) && (iVar4 = memcmp(*(void **)(p_Var7 + 0x28),__s2,uVar9), iVar4 != 0))
        break;
        lVar8 = uVar6 - uVar3;
        if (lVar8 < 0x80000000) {
          if (-0x80000001 < lVar8) {
            iVar4 = (int)lVar8;
            break;
          }
          goto LAB_0011f8c8;
        }
LAB_0011f914:
        p_Var2 = p_Var7 + 0x10;
        p_Var10 = p_Var7;
        p_Var7 = *(_Rb_tree_node_base **)p_Var2;
        if (*(_Rb_tree_node_base **)p_Var2 == (_Rb_tree_node_base *)0x0) goto LAB_0011f920;
      }
      if (-1 < iVar4) goto LAB_0011f914;
LAB_0011f8c8:
      p_Var7 = *(_Rb_tree_node_base **)(p_Var7 + 0x18);
    } while (p_Var7 != (_Rb_tree_node_base *)0x0);
LAB_0011f920:
    if (p_Var1 != p_Var10) {
      uVar6 = *(ulong *)(p_Var10 + 0x30);
      uVar9 = uVar3;
      if (uVar6 <= uVar3) {
        uVar9 = uVar6;
      }
      if ((uVar9 == 0) || (iVar4 = memcmp(__s2,*(void **)(p_Var10 + 0x28),uVar9), iVar4 == 0)) {
        lVar8 = uVar3 - uVar6;
        if (0x7fffffff < lVar8) goto LAB_0011f969;
        if (lVar8 < -0x80000000) goto LAB_0011f985;
        iVar4 = (int)lVar8;
      }
      if (-1 < iVar4) goto LAB_0011f969;
    }
  }
LAB_0011f985:
  p_Var5 = (_Rb_tree_node_base *)operator_new(0x50);
  uVar6 = glslang::GetThreadPoolAllocator();
  p_Var7 = p_Var5 + 0x38;
  *(ulong *)(p_Var5 + 0x20) = uVar6;
  uVar3 = *(ulong *)(param_1 + 0x10);
  p_Var2 = *(_Rb_tree_node_base **)(param_1 + 8);
  *(_Rb_tree_node_base **)(p_Var5 + 0x28) = p_Var7;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      p_Var5[0x38] = *p_Var2;
    }
    else if (uVar3 != 0) goto LAB_0011fa68;
  }
  else {
    if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    p_Var7 = (_Rb_tree_node_base *)glslang::TPoolAllocator::allocate(uVar6);
    *(ulong *)(p_Var5 + 0x38) = uVar3;
    *(_Rb_tree_node_base **)(p_Var5 + 0x28) = p_Var7;
LAB_0011fa68:
    memcpy(p_Var7,p_Var2,uVar3);
    p_Var7 = *(_Rb_tree_node_base **)(p_Var5 + 0x28);
  }
  *(ulong *)(p_Var5 + 0x30) = uVar3;
  p_Var7[uVar3] = (_Rb_tree_node_base)0x0;
  *(undefined4 *)(p_Var5 + 0x48) = 0;
  auVar12 = _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
            ::_M_get_insert_hint_unique_pos
                      ((_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::AstRefType>>>
                        *)this,p_Var10,p_Var5 + 0x20);
  p_Var7 = auVar12._8_8_;
  p_Var10 = auVar12._0_8_;
  if (p_Var7 == (_Rb_tree_node_base *)0x0) {
    operator_delete(p_Var5,0x50);
    goto LAB_0011f969;
  }
  if ((p_Var10 == (_Rb_tree_node_base *)0x0) && (p_Var1 != p_Var7)) {
    uVar3 = *(ulong *)(p_Var5 + 0x30);
    uVar6 = *(ulong *)(p_Var7 + 0x30);
    uVar9 = uVar6;
    if (uVar3 <= uVar6) {
      uVar9 = uVar3;
    }
    if ((uVar9 == 0) ||
       (iVar4 = memcmp(*(void **)(p_Var5 + 0x28),*(void **)(p_Var7 + 0x28),uVar9), iVar4 == 0)) {
      lVar8 = uVar3 - uVar6;
      bVar11 = false;
      if (0x7fffffff < lVar8) goto LAB_0011fa10;
      if (lVar8 < -0x80000000) goto LAB_0011fa0b;
      iVar4 = (int)lVar8;
    }
    bVar11 = SUB41((uint)iVar4 >> 0x1f,0);
  }
  else {
LAB_0011fa0b:
    bVar11 = true;
  }
LAB_0011fa10:
  std::_Rb_tree_insert_and_rebalance(bVar11,p_Var5,p_Var7,p_Var1);
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  p_Var10 = p_Var5;
LAB_0011f969:
  return p_Var10 + 0x48;
}



/* std::_Rb_tree<std::__cxx11::string, std::__cxx11::string, std::_Identity<std::__cxx11::string >,
   std::less<std::__cxx11::string >, std::allocator<std::__cxx11::string >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::__cxx11::string >,
   std::__cxx11::string const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
           *this,_Rb_tree_node_base *param_2,string *param_3)

{
  ulong uVar1;
  ulong uVar2;
  void *__s1;
  void *__s2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  _Rb_tree_node_base *p_Var7;
  _Rb_tree_node_base *p_Var8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_2 == (_Rb_tree_node_base *)(this + 8)) {
    if (*(long *)(this + 0x28) != 0) {
      param_2 = *(_Rb_tree_node_base **)(this + 0x20);
      uVar1 = *(ulong *)(param_3 + 8);
      uVar2 = *(ulong *)(param_2 + 0x28);
      uVar6 = uVar1;
      if (uVar2 <= uVar1) {
        uVar6 = uVar2;
      }
      if ((uVar6 == 0) ||
         (iVar3 = memcmp(*(void **)(param_2 + 0x20),*(void **)param_3,uVar6), iVar3 == 0)) {
        lVar5 = uVar2 - uVar1;
        if (0x7fffffff < lVar5) goto LAB_0011fd26;
        if (lVar5 < -0x80000000) goto LAB_0011fcb6;
        iVar3 = (int)lVar5;
      }
      if (-1 < iVar3) goto LAB_0011fd26;
      goto LAB_0011fcb6;
    }
    goto LAB_0011fd26;
  }
  uVar1 = *(ulong *)(param_3 + 8);
  uVar2 = *(ulong *)(param_2 + 0x28);
  __s1 = *(void **)param_3;
  __s2 = *(void **)(param_2 + 0x20);
  uVar6 = uVar2;
  if (uVar1 <= uVar2) {
    uVar6 = uVar1;
  }
  p_Var7 = param_2;
  if (uVar6 == 0) {
    lVar5 = uVar1 - uVar2;
    if ((lVar5 < 0x80000000) && ((lVar5 < -0x80000000 || ((int)lVar5 < 0)))) {
LAB_0011fbda:
      if (*(_Rb_tree_node_base **)(this + 0x18) == param_2) goto LAB_0011fbab;
      p_Var8 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_2);
      uVar2 = *(ulong *)(p_Var8 + 0x28);
      uVar6 = uVar1;
      if (uVar2 <= uVar1) {
        uVar6 = uVar2;
      }
      if ((uVar6 == 0) || (iVar3 = memcmp(*(void **)(p_Var8 + 0x20),__s1,uVar6), iVar3 == 0)) {
        lVar5 = uVar2 - uVar1;
        if (0x7fffffff < lVar5) goto LAB_0011fd26;
        if (-0x80000001 < lVar5) {
          iVar3 = (int)lVar5;
          goto LAB_0011fc38;
        }
      }
      else {
LAB_0011fc38:
        if (-1 < iVar3) goto LAB_0011fd26;
      }
      if (*(long *)(p_Var8 + 0x18) == 0) {
        p_Var7 = (_Rb_tree_node_base *)0x0;
        param_2 = p_Var8;
      }
      goto LAB_0011fbab;
    }
LAB_0011fb84:
    uVar6 = uVar2 - uVar1;
    if ((long)uVar6 < 0x80000000) {
      if (-0x80000001 < (long)uVar6) goto LAB_0011fb9e;
      goto LAB_0011fcd0;
    }
  }
  else {
    iVar3 = memcmp(__s1,__s2,uVar6);
    if (iVar3 == 0) {
      lVar5 = uVar1 - uVar2;
      if (lVar5 < 0x80000000) {
        if (lVar5 < -0x80000000) goto LAB_0011fbda;
        iVar3 = (int)lVar5;
        goto LAB_0011fb73;
      }
    }
    else {
LAB_0011fb73:
      if (iVar3 < 0) goto LAB_0011fbda;
    }
    uVar4 = memcmp(__s2,__s1,uVar6);
    uVar6 = (ulong)uVar4;
    if (uVar4 == 0) goto LAB_0011fb84;
LAB_0011fb9e:
    if ((int)uVar6 < 0) {
LAB_0011fcd0:
      if (*(_Rb_tree_node_base **)(this + 0x20) == param_2) {
LAB_0011fcb6:
        auVar10._8_8_ = 0;
        auVar10._0_8_ = param_2;
        return auVar10 << 0x40;
      }
      p_Var8 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
      uVar2 = *(ulong *)(p_Var8 + 0x28);
      uVar6 = uVar1;
      if (uVar2 <= uVar1) {
        uVar6 = uVar2;
      }
      if (uVar6 == 0) {
LAB_0011fd0c:
        uVar6 = uVar1 - uVar2;
        if (0x7fffffff < (long)uVar6) goto LAB_0011fd26;
        if (-0x80000001 < (long)uVar6) goto LAB_0011fd22;
      }
      else {
        uVar4 = memcmp(__s1,*(void **)(p_Var8 + 0x20),uVar6);
        uVar6 = (ulong)uVar4;
        if (uVar4 == 0) goto LAB_0011fd0c;
LAB_0011fd22:
        if (-1 < (int)uVar6) {
LAB_0011fd26:
          auVar10 = _M_get_insert_unique_pos(this,param_3);
          return auVar10;
        }
      }
      p_Var7 = (_Rb_tree_node_base *)0x0;
      if (*(long *)(param_2 + 0x18) != 0) {
        p_Var7 = p_Var8;
        param_2 = p_Var8;
      }
      goto LAB_0011fbab;
    }
  }
  param_2 = (_Rb_tree_node_base *)0x0;
LAB_0011fbab:
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = p_Var7;
  return auVar9;
}



/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::_Identity<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::_Identity<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
           *this,_Rb_tree_node_base *param_2,basic_string *param_3)

{
  ulong uVar1;
  ulong uVar2;
  void *__s1;
  void *__s2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  _Rb_tree_node_base *p_Var7;
  _Rb_tree_node_base *p_Var8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_2 == (_Rb_tree_node_base *)(this + 8)) {
    if (*(long *)(this + 0x28) != 0) {
      param_2 = *(_Rb_tree_node_base **)(this + 0x20);
      uVar1 = *(ulong *)(param_3 + 0x10);
      uVar2 = *(ulong *)(param_2 + 0x30);
      uVar6 = uVar1;
      if (uVar2 <= uVar1) {
        uVar6 = uVar2;
      }
      if ((uVar6 == 0) ||
         (iVar3 = memcmp(*(void **)(param_2 + 0x28),*(void **)(param_3 + 8),uVar6), iVar3 == 0)) {
        lVar5 = uVar2 - uVar1;
        if (0x7fffffff < lVar5) goto LAB_0011ff96;
        if (lVar5 < -0x80000000) goto LAB_0011ff27;
        iVar3 = (int)lVar5;
      }
      if (-1 < iVar3) goto LAB_0011ff96;
      goto LAB_0011ff27;
    }
    goto LAB_0011ff96;
  }
  uVar1 = *(ulong *)(param_3 + 0x10);
  uVar2 = *(ulong *)(param_2 + 0x30);
  __s1 = *(void **)(param_3 + 8);
  __s2 = *(void **)(param_2 + 0x28);
  uVar6 = uVar2;
  if (uVar1 <= uVar2) {
    uVar6 = uVar1;
  }
  p_Var7 = param_2;
  if (uVar6 == 0) {
    lVar5 = uVar1 - uVar2;
    if ((lVar5 < 0x80000000) && ((lVar5 < -0x80000000 || ((int)lVar5 < 0)))) {
LAB_0011fe4a:
      if (*(_Rb_tree_node_base **)(this + 0x18) == param_2) goto LAB_0011fe1c;
      p_Var8 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_2);
      uVar2 = *(ulong *)(p_Var8 + 0x30);
      uVar6 = uVar1;
      if (uVar2 <= uVar1) {
        uVar6 = uVar2;
      }
      if ((uVar6 == 0) || (iVar3 = memcmp(*(void **)(p_Var8 + 0x28),__s1,uVar6), iVar3 == 0)) {
        lVar5 = uVar2 - uVar1;
        if (0x7fffffff < lVar5) goto LAB_0011ff96;
        if (-0x80000001 < lVar5) {
          iVar3 = (int)lVar5;
          goto LAB_0011fea8;
        }
      }
      else {
LAB_0011fea8:
        if (-1 < iVar3) goto LAB_0011ff96;
      }
      if (*(long *)(p_Var8 + 0x18) == 0) {
        p_Var7 = (_Rb_tree_node_base *)0x0;
        param_2 = p_Var8;
      }
      goto LAB_0011fe1c;
    }
LAB_0011fdf5:
    uVar6 = uVar2 - uVar1;
    if ((long)uVar6 < 0x80000000) {
      if (-0x80000001 < (long)uVar6) goto LAB_0011fe0f;
      goto LAB_0011ff40;
    }
  }
  else {
    iVar3 = memcmp(__s1,__s2,uVar6);
    if (iVar3 == 0) {
      lVar5 = uVar1 - uVar2;
      if (lVar5 < 0x80000000) {
        if (lVar5 < -0x80000000) goto LAB_0011fe4a;
        iVar3 = (int)lVar5;
        goto LAB_0011fde4;
      }
    }
    else {
LAB_0011fde4:
      if (iVar3 < 0) goto LAB_0011fe4a;
    }
    uVar4 = memcmp(__s2,__s1,uVar6);
    uVar6 = (ulong)uVar4;
    if (uVar4 == 0) goto LAB_0011fdf5;
LAB_0011fe0f:
    if ((int)uVar6 < 0) {
LAB_0011ff40:
      if (*(_Rb_tree_node_base **)(this + 0x20) == param_2) {
LAB_0011ff27:
        auVar10._8_8_ = 0;
        auVar10._0_8_ = param_2;
        return auVar10 << 0x40;
      }
      p_Var8 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
      uVar2 = *(ulong *)(p_Var8 + 0x30);
      uVar6 = uVar1;
      if (uVar2 <= uVar1) {
        uVar6 = uVar2;
      }
      if (uVar6 == 0) {
LAB_0011ff7c:
        uVar6 = uVar1 - uVar2;
        if (0x7fffffff < (long)uVar6) goto LAB_0011ff96;
        if (-0x80000001 < (long)uVar6) goto LAB_0011ff92;
      }
      else {
        uVar4 = memcmp(__s1,*(void **)(p_Var8 + 0x28),uVar6);
        uVar6 = (ulong)uVar4;
        if (uVar4 == 0) goto LAB_0011ff7c;
LAB_0011ff92:
        if (-1 < (int)uVar6) {
LAB_0011ff96:
          auVar10 = _M_get_insert_unique_pos(this,param_3);
          return auVar10;
        }
      }
      p_Var7 = (_Rb_tree_node_base *)0x0;
      if (*(long *)(param_2 + 0x18) != 0) {
        p_Var7 = p_Var8;
        param_2 = p_Var8;
      }
      goto LAB_0011fe1c;
    }
  }
  param_2 = (_Rb_tree_node_base *)0x0;
LAB_0011fe1c:
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = p_Var7;
  return auVar9;
}



/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, long long>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, long long> >, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, long long> >
   >::_M_get_insert_unique_pos(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>>>
::_M_get_insert_unique_pos
          (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>>>
           *this,basic_string *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  _Rb_tree_node_base *p_Var5;
  long lVar6;
  size_t __n;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>>>
  *p_Var7;
  _Rb_tree_node_base *p_Var8;
  ulong uVar9;
  void *__s2;
  ulong uVar10;
  undefined1 auVar11 [16];
  void *local_50;
  
  if (*(_Rb_tree_node_base **)(this + 0x18) == (_Rb_tree_node_base *)0x0) {
    p_Var7 = this + 0x10;
LAB_001200e4:
    if (*(_Rb_tree_node_base **)(this + 0x20) == (_Rb_tree_node_base *)p_Var7) {
      p_Var5 = (_Rb_tree_node_base *)0x0;
      p_Var8 = (_Rb_tree_node_base *)p_Var7;
      goto LAB_001200aa;
    }
    p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_decrement((_Rb_tree_node_base *)p_Var7);
    uVar9 = *(ulong *)(p_Var5 + 0x30);
    __s2 = *(void **)(p_Var5 + 0x28);
    uVar10 = *(ulong *)(param_1 + 0x10);
    local_50 = *(void **)(param_1 + 8);
    __n = uVar9;
    if (uVar10 <= uVar9) {
      __n = uVar10;
    }
  }
  else {
    local_50 = *(void **)(param_1 + 8);
    uVar10 = *(ulong *)(param_1 + 0x10);
    p_Var5 = *(_Rb_tree_node_base **)(this + 0x18);
    do {
      p_Var7 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>>>
                *)p_Var5;
      uVar9 = *(ulong *)((_Rb_tree_node_base *)p_Var7 + 0x30);
      __s2 = *(void **)((_Rb_tree_node_base *)p_Var7 + 0x28);
      __n = uVar9;
      if (uVar10 <= uVar9) {
        __n = uVar10;
      }
      if (__n == 0) {
LAB_00120054:
        uVar4 = uVar10 - uVar9;
        if (0x7fffffff < (long)uVar4) goto LAB_00120072;
        if (-0x80000001 < (long)uVar4) goto LAB_0012006e;
LAB_00120018:
        p_Var5 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var7 + 0x10);
        bVar1 = true;
      }
      else {
        uVar2 = memcmp(local_50,__s2,__n);
        uVar4 = (ulong)uVar2;
        if (uVar2 == 0) goto LAB_00120054;
LAB_0012006e:
        if ((int)uVar4 < 0) goto LAB_00120018;
LAB_00120072:
        p_Var5 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var7 + 0x18);
        bVar1 = false;
      }
    } while (p_Var5 != (_Rb_tree_node_base *)0x0);
    p_Var5 = (_Rb_tree_node_base *)p_Var7;
    if (bVar1) goto LAB_001200e4;
  }
  if ((__n == 0) || (iVar3 = memcmp(__s2,local_50,__n), iVar3 == 0)) {
    lVar6 = uVar9 - uVar10;
    if (0x7fffffff < lVar6) {
      p_Var8 = (_Rb_tree_node_base *)0x0;
      goto LAB_001200aa;
    }
    if (lVar6 < -0x80000000) {
      p_Var5 = (_Rb_tree_node_base *)0x0;
      p_Var8 = (_Rb_tree_node_base *)p_Var7;
      goto LAB_001200aa;
    }
    iVar3 = (int)lVar6;
  }
  p_Var8 = (_Rb_tree_node_base *)0x0;
  if (iVar3 < 0) {
    p_Var8 = (_Rb_tree_node_base *)p_Var7;
    p_Var5 = (_Rb_tree_node_base *)0x0;
  }
LAB_001200aa:
  auVar11._8_8_ = p_Var8;
  auVar11._0_8_ = p_Var5;
  return auVar11;
}



/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, long long>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, long long> >, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, long long> >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, long long> >,
   std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> > const&)
    */

undefined1  [16] __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>>>
           *this,_Rb_tree_node_base *param_2,basic_string *param_3)

{
  ulong uVar1;
  ulong uVar2;
  void *__s1;
  void *__s2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  _Rb_tree_node_base *p_Var7;
  _Rb_tree_node_base *p_Var8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_2 == (_Rb_tree_node_base *)(this + 0x10)) {
    if (*(long *)(this + 0x30) != 0) {
      param_2 = *(_Rb_tree_node_base **)(this + 0x28);
      uVar1 = *(ulong *)(param_3 + 0x10);
      uVar2 = *(ulong *)(param_2 + 0x30);
      uVar6 = uVar1;
      if (uVar2 <= uVar1) {
        uVar6 = uVar2;
      }
      if ((uVar6 == 0) ||
         (iVar3 = memcmp(*(void **)(param_2 + 0x28),*(void **)(param_3 + 8),uVar6), iVar3 == 0)) {
        lVar5 = uVar2 - uVar1;
        if (0x7fffffff < lVar5) goto LAB_00120386;
        if (lVar5 < -0x80000000) goto LAB_00120317;
        iVar3 = (int)lVar5;
      }
      if (-1 < iVar3) goto LAB_00120386;
      goto LAB_00120317;
    }
    goto LAB_00120386;
  }
  uVar1 = *(ulong *)(param_3 + 0x10);
  uVar2 = *(ulong *)(param_2 + 0x30);
  __s1 = *(void **)(param_3 + 8);
  __s2 = *(void **)(param_2 + 0x28);
  uVar6 = uVar2;
  if (uVar1 <= uVar2) {
    uVar6 = uVar1;
  }
  p_Var7 = param_2;
  if (uVar6 == 0) {
    lVar5 = uVar1 - uVar2;
    if ((lVar5 < 0x80000000) && ((lVar5 < -0x80000000 || ((int)lVar5 < 0)))) {
LAB_0012023a:
      if (*(_Rb_tree_node_base **)(this + 0x20) == param_2) goto LAB_0012020c;
      p_Var8 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_2);
      uVar2 = *(ulong *)(p_Var8 + 0x30);
      uVar6 = uVar1;
      if (uVar2 <= uVar1) {
        uVar6 = uVar2;
      }
      if ((uVar6 == 0) || (iVar3 = memcmp(*(void **)(p_Var8 + 0x28),__s1,uVar6), iVar3 == 0)) {
        lVar5 = uVar2 - uVar1;
        if (0x7fffffff < lVar5) goto LAB_00120386;
        if (-0x80000001 < lVar5) {
          iVar3 = (int)lVar5;
          goto LAB_00120298;
        }
      }
      else {
LAB_00120298:
        if (-1 < iVar3) goto LAB_00120386;
      }
      if (*(long *)(p_Var8 + 0x18) == 0) {
        p_Var7 = (_Rb_tree_node_base *)0x0;
        param_2 = p_Var8;
      }
      goto LAB_0012020c;
    }
LAB_001201e5:
    uVar6 = uVar2 - uVar1;
    if ((long)uVar6 < 0x80000000) {
      if (-0x80000001 < (long)uVar6) goto LAB_001201ff;
      goto LAB_00120330;
    }
  }
  else {
    iVar3 = memcmp(__s1,__s2,uVar6);
    if (iVar3 == 0) {
      lVar5 = uVar1 - uVar2;
      if (lVar5 < 0x80000000) {
        if (lVar5 < -0x80000000) goto LAB_0012023a;
        iVar3 = (int)lVar5;
        goto LAB_001201d4;
      }
    }
    else {
LAB_001201d4:
      if (iVar3 < 0) goto LAB_0012023a;
    }
    uVar4 = memcmp(__s2,__s1,uVar6);
    uVar6 = (ulong)uVar4;
    if (uVar4 == 0) goto LAB_001201e5;
LAB_001201ff:
    if ((int)uVar6 < 0) {
LAB_00120330:
      if (*(_Rb_tree_node_base **)(this + 0x28) == param_2) {
LAB_00120317:
        auVar10._8_8_ = 0;
        auVar10._0_8_ = param_2;
        return auVar10 << 0x40;
      }
      p_Var8 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
      uVar2 = *(ulong *)(p_Var8 + 0x30);
      uVar6 = uVar1;
      if (uVar2 <= uVar1) {
        uVar6 = uVar2;
      }
      if (uVar6 == 0) {
LAB_0012036c:
        uVar6 = uVar1 - uVar2;
        if (0x7fffffff < (long)uVar6) goto LAB_00120386;
        if (-0x80000001 < (long)uVar6) goto LAB_00120382;
      }
      else {
        uVar4 = memcmp(__s1,*(void **)(p_Var8 + 0x28),uVar6);
        uVar6 = (ulong)uVar4;
        if (uVar4 == 0) goto LAB_0012036c;
LAB_00120382:
        if (-1 < (int)uVar6) {
LAB_00120386:
          auVar10 = _M_get_insert_unique_pos(this,param_3);
          return auVar10;
        }
      }
      p_Var7 = (_Rb_tree_node_base *)0x0;
      if (*(long *)(param_2 + 0x18) != 0) {
        p_Var7 = p_Var8;
        param_2 = p_Var8;
      }
      goto LAB_0012020c;
    }
  }
  param_2 = (_Rb_tree_node_base *)0x0;
LAB_0012020c:
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = p_Var7;
  return auVar9;
}



/* glslang::TBuiltInIdTraverser::visitSymbol(glslang::TIntermSymbol*) */

void __thiscall
glslang::TBuiltInIdTraverser::visitSymbol(TBuiltInIdTraverser *this,TIntermSymbol *param_1)

{
  void *__s2;
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  TIntermSymbol *pTVar12;
  long in_FS_OFFSET;
  bool bVar13;
  undefined8 local_70;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)param_1 + 0xf0) == TIntermTyped::getType) {
    pTVar12 = param_1 + 0x20;
  }
  else {
    pTVar12 = (TIntermSymbol *)(**(code **)(*(long *)param_1 + 0xf0))(param_1);
  }
  if (*(code **)(*(long *)pTVar12 + 0x58) == TType::getQualifier) {
    pTVar12 = pTVar12 + 0x10;
  }
  else {
    pTVar12 = (TIntermSymbol *)(**(code **)(*(long *)pTVar12 + 0x58))();
  }
  if (*(ushort *)(pTVar12 + 8) < 0x80) goto LAB_001205bd;
  lVar4 = *(long *)param_1;
  if (*(code **)(lVar4 + 0xf0) == TIntermTyped::getType) {
    pTVar12 = param_1 + 0x20;
  }
  else {
    pTVar12 = (TIntermSymbol *)(**(code **)(lVar4 + 0xf0))(param_1);
    lVar4 = *(long *)param_1;
  }
  lVar9 = 0xa8;
  if ((pTVar12[8] == (TIntermSymbol)0x10) && (bVar1 = ((byte)pTVar12[0x18] & 0x7f) - 3, bVar1 < 4))
  {
    lVar9 = (ulong)*(uint *)(CSWTCH_1270 + (ulong)bVar1 * 4) * 0x38;
  }
  if (*(code **)(lVar4 + 0x180) == TIntermSymbol::getId) {
    local_70 = *(undefined8 *)(param_1 + 0xb8);
  }
  else {
    local_70 = (**(code **)(lVar4 + 0x180))(param_1);
  }
  lVar9 = *(long *)(this + 0x38) + lVar9;
  lVar3 = getNameForIdMap(param_1);
  lVar4 = lVar9 + 0x10;
  if (*(long *)(lVar9 + 0x18) != 0) {
    __s2 = *(void **)(lVar3 + 8);
    uVar11 = *(ulong *)(lVar3 + 0x10);
    lVar6 = *(long *)(lVar9 + 0x18);
    lVar10 = lVar4;
    do {
      while( true ) {
        lVar8 = lVar6;
        uVar5 = *(ulong *)(lVar8 + 0x30);
        uVar7 = uVar11;
        if (uVar5 <= uVar11) {
          uVar7 = uVar5;
        }
        if ((uVar7 != 0) && (iVar2 = memcmp(*(void **)(lVar8 + 0x28),__s2,uVar7), iVar2 != 0))
        break;
        lVar6 = uVar5 - uVar11;
        if (lVar6 < 0x80000000) {
          if (-0x80000001 < lVar6) {
            iVar2 = (int)lVar6;
            break;
          }
          goto LAB_001204f0;
        }
LAB_00120541:
        lVar6 = *(long *)(lVar8 + 0x10);
        lVar10 = lVar8;
        if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0012054d;
      }
      if (-1 < iVar2) goto LAB_00120541;
LAB_001204f0:
      lVar6 = *(long *)(lVar8 + 0x18);
    } while (*(long *)(lVar8 + 0x18) != 0);
LAB_0012054d:
    bVar13 = lVar4 != lVar10;
    lVar4 = lVar10;
    if (bVar13) {
      uVar5 = *(ulong *)(lVar10 + 0x30);
      uVar7 = uVar11;
      if (uVar5 <= uVar11) {
        uVar7 = uVar5;
      }
      if ((uVar7 == 0) || (iVar2 = memcmp(__s2,*(void **)(lVar10 + 0x28),uVar7), iVar2 == 0)) {
        lVar6 = uVar11 - uVar5;
        if (lVar6 < 0x80000000) {
          if (lVar6 < -0x80000000) goto LAB_00120633;
          iVar2 = (int)lVar6;
          goto LAB_001205ac;
        }
      }
      else {
LAB_001205ac:
        if (iVar2 < 0) goto LAB_00120633;
      }
      *(undefined8 *)(lVar10 + 0x48) = local_70;
      goto LAB_001205bd;
    }
  }
LAB_00120633:
  local_48 = lVar3;
  lVar4 = std::
          _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>>>
          ::
          _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const&>,std::tuple<>>
                    (lVar9,lVar4,&local_48);
  *(undefined8 *)(lVar4 + 0x48) = local_70;
LAB_001205bd:
  if (*(code **)(*(long *)param_1 + 0x180) == TIntermSymbol::getId) {
    uVar5 = *(ulong *)(param_1 + 0xb8);
    uVar11 = uVar5 & 0xff00000000000000;
  }
  else {
    uVar11 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
    uVar11 = uVar11 & 0xff00000000000000;
    if (*(code **)(*(long *)param_1 + 0x180) == TIntermSymbol::getId) {
      uVar5 = *(ulong *)(param_1 + 0xb8);
    }
    else {
      uVar5 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
    }
  }
  uVar7 = *(ulong *)(this + 0x40) & 0xffffffffffffff;
  if ((*(ulong *)(this + 0x40) & 0xffffffffffffff) < (uVar5 & 0xffffffffffffff)) {
    uVar7 = uVar5 & 0xffffffffffffff;
  }
  *(ulong *)(this + 0x40) = uVar7 | uVar11;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* glslang::TUserIdTraverser::visitSymbol(glslang::TIntermSymbol*) */

void __thiscall
glslang::TUserIdTraverser::visitSymbol(TUserIdTraverser *this,TIntermSymbol *param_1)

{
  long *plVar1;
  void *__s2;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  TIntermSymbol *pTVar12;
  long lVar13;
  long in_FS_OFFSET;
  bool bVar14;
  undefined8 local_68;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)param_1 + 0xf0) == TIntermTyped::getType) {
    pTVar12 = param_1 + 0x20;
  }
  else {
    pTVar12 = (TIntermSymbol *)(**(code **)(*(long *)param_1 + 0xf0))(param_1);
  }
  if (*(code **)(*(long *)pTVar12 + 0x58) == TType::getQualifier) {
    pTVar12 = pTVar12 + 0x10;
  }
  else {
    pTVar12 = (TIntermSymbol *)(**(code **)(*(long *)pTVar12 + 0x58))();
  }
  if (0x7f < *(ushort *)(pTVar12 + 8)) goto LAB_001208b9;
  lVar7 = *(long *)param_1;
  if (*(code **)(lVar7 + 0xf0) == TIntermTyped::getType) {
    pTVar12 = param_1 + 0x20;
  }
  else {
    pTVar12 = (TIntermSymbol *)(**(code **)(lVar7 + 0xf0))(param_1);
    lVar7 = *(long *)param_1;
  }
  lVar11 = 0xa8;
  if ((pTVar12[8] == (TIntermSymbol)0x10) && (bVar4 = ((byte)pTVar12[0x18] & 0x7f) - 3, bVar4 < 4))
  {
    lVar11 = (ulong)*(uint *)(CSWTCH_1270 + (ulong)bVar4 * 4) * 0x38;
  }
  if (*(code **)(lVar7 + 0x180) == TIntermSymbol::getId) {
    local_68 = *(undefined8 *)(param_1 + 0xb8);
  }
  else {
    local_68 = (**(code **)(lVar7 + 0x180))(param_1);
  }
  lVar11 = *(long *)(this + 0x38) + lVar11;
  lVar7 = lVar11 + 0x10;
  lVar6 = getNameForIdMap(param_1);
  if (*(long *)(lVar11 + 0x18) != 0) {
    __s2 = *(void **)(lVar6 + 8);
    uVar2 = *(ulong *)(lVar6 + 0x10);
    lVar10 = lVar7;
    lVar13 = *(long *)(lVar11 + 0x18);
    do {
      while( true ) {
        uVar3 = *(ulong *)(lVar13 + 0x30);
        uVar9 = uVar2;
        if (uVar3 <= uVar2) {
          uVar9 = uVar3;
        }
        if ((uVar9 != 0) && (iVar5 = memcmp(*(void **)(lVar13 + 0x28),__s2,uVar9), iVar5 != 0))
        break;
        lVar8 = uVar3 - uVar2;
        if (lVar8 < 0x80000000) {
          if (-0x80000001 < lVar8) {
            iVar5 = (int)lVar8;
            break;
          }
          goto LAB_00120810;
        }
LAB_0012085c:
        plVar1 = (long *)(lVar13 + 0x10);
        lVar10 = lVar13;
        lVar13 = *plVar1;
        if (*plVar1 == 0) goto LAB_00120868;
      }
      if (-1 < iVar5) goto LAB_0012085c;
LAB_00120810:
      lVar13 = *(long *)(lVar13 + 0x18);
    } while (lVar13 != 0);
LAB_00120868:
    bVar14 = lVar7 != lVar10;
    lVar7 = lVar10;
    if (bVar14) {
      uVar3 = *(ulong *)(lVar10 + 0x30);
      uVar9 = uVar2;
      if (uVar3 <= uVar2) {
        uVar9 = uVar3;
      }
      if ((uVar9 == 0) || (iVar5 = memcmp(__s2,*(void **)(lVar10 + 0x28),uVar9), iVar5 == 0)) {
        lVar13 = uVar2 - uVar3;
        if (lVar13 < 0x80000000) {
          if (lVar13 < -0x80000000) goto LAB_001208e5;
          iVar5 = (int)lVar13;
          goto LAB_001208ad;
        }
      }
      else {
LAB_001208ad:
        if (iVar5 < 0) goto LAB_001208e5;
      }
      *(undefined8 *)(lVar10 + 0x48) = local_68;
      goto LAB_001208b9;
    }
  }
LAB_001208e5:
  local_48 = lVar6;
  lVar7 = std::
          _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,long_long>>>
          ::
          _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const&>,std::tuple<>>
                    (lVar11,lVar7,&local_48);
  *(undefined8 *)(lVar7 + 0x48) = local_68;
LAB_001208b9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TType::~TType() */

void __thiscall glslang::TType::~TType(TType *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TSmallArrayVector::~TSmallArrayVector() */

void __thiscall glslang::TSmallArrayVector::~TSmallArrayVector(TSmallArrayVector *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */

void std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
     basic_string(basic_string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::basic_string<glslang::std::allocator<char> >(char const*, glslang::std::allocator<char>
   const&) */

void std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
     basic_string<glslang::std::allocator<char>>(char *param_1,allocator *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TType::TType(glslang::TType const&, int, bool) */

void __thiscall glslang::TType::TType(TType *this,TType *param_1,int param_2,bool param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TRemapIdTraverser::~TRemapIdTraverser() */

void __thiscall glslang::TRemapIdTraverser::~TRemapIdTraverser(TRemapIdTraverser *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TUserIdTraverser::~TUserIdTraverser() */

void __thiscall glslang::TUserIdTraverser::~TUserIdTraverser(TUserIdTraverser *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TBuiltInIdTraverser::~TBuiltInIdTraverser() */

void __thiscall glslang::TBuiltInIdTraverser::~TBuiltInIdTraverser(TBuiltInIdTraverser *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TIntermTraverser::~TIntermTraverser() */

void __thiscall glslang::TIntermTraverser::~TIntermTraverser(TIntermTraverser *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
