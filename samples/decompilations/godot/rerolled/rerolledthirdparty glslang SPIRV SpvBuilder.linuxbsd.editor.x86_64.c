/* std::_Rb_tree<unsigned int, std::pair<unsigned int const, unsigned int>,
   std::_Select1st<std::pair<unsigned int const, unsigned int> >, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, unsigned int> > >::_M_get_insert_unique_pos(unsigned
   int const&) [clone .isra.0] */undefined1[16];std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::_M_get_insert_unique_pos (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
           *this,uint *param_1) {
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
      if (uVar6 >= uVar5) goto LAB_00100038;
   }

   if (*(_Rb_tree_node_base**)( this + 0x18 ) == p_Var2) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = p_Var2;
      return auVar1 << 0x40;
   }

   p_Var4 = (_Rb_tree_node_base*)std::_Rb_tree_decrement(p_Var2);
   uVar5 = *(uint*)( p_Var4 + 0x20 );
   LAB_00100038:p_Var3 = (_Rb_tree_node_base*)0x0;
   if (uVar5 < uVar6) {
      p_Var4 = p_Var3;
      p_Var3 = p_Var2;
   }

   auVar7._8_8_ = p_Var3;
   auVar7._0_8_ = p_Var4;
   return auVar7;
}
/* std::_Rb_tree<unsigned int, std::pair<unsigned int const, unsigned int>,
   std::_Select1st<std::pair<unsigned int const, unsigned int> >, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, unsigned int> >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<unsigned int const,
   unsigned int> >, unsigned int const&) [clone .isra.0] */undefined1[16];std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::_M_get_insert_hint_unique_pos (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
           *this,_Rb_tree_node_base *param_2,uint param_3) {
   undefined1 auVar1[16];
   _Rb_tree_node_base *p_Var2;
   _Rb_tree_node_base *p_Var3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   if (param_2 != (_Rb_tree_node_base*)( this + 8 )) {
      if (param_3 < *(uint*)( param_2 + 0x20 )) {
         p_Var3 = param_2;
         if (*(_Rb_tree_node_base**)( this + 0x18 ) != param_2) {
            p_Var2 = (_Rb_tree_node_base*)std::_Rb_tree_decrement(param_2);
            if (param_3 <= *(uint*)( p_Var2 + 0x20 )) goto LAB_00100127;
            if (*(long*)( p_Var2 + 0x18 ) == 0) {
               p_Var3 = (_Rb_tree_node_base*)0x0;
               param_2 = p_Var2;
            }

         }

      }
 else {
         if (param_3 <= *(uint*)( param_2 + 0x20 )) {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = param_2;
            return auVar5;
         }

         if (*(_Rb_tree_node_base**)( this + 0x20 ) == param_2) goto LAB_00100159;
         p_Var2 = (_Rb_tree_node_base*)std::_Rb_tree_increment(param_2);
         if (*(uint*)( p_Var2 + 0x20 ) <= param_3) goto LAB_00100127;
         p_Var3 = (_Rb_tree_node_base*)0x0;
         if (*(long*)( param_2 + 0x18 ) != 0) {
            p_Var3 = p_Var2;
            param_2 = p_Var2;
         }

      }

      auVar4._8_8_ = param_2;
      auVar4._0_8_ = p_Var3;
      return auVar4;
   }

   if (( *(long*)( this + 0x28 ) == 0 ) || ( param_2 = *(_Rb_tree_node_base**)( this + 0x20 ) ),param_3 <= *(uint*)( param_2 + 0x20 )) {
      LAB_00100127:auVar5 = _M_get_insert_unique_pos(this, (uint*)(ulong)param_3);
      return auVar5;
   }

   LAB_00100159:auVar1._8_8_ = 0;
   auVar1._0_8_ = param_2;
   return auVar1 << 0x40;
}
/* std::_Rb_tree_iterator<std::pair<unsigned int const, unsigned int> > std::_Rb_tree<unsigned int,
   std::pair<unsigned int const, unsigned int>, std::_Select1st<std::pair<unsigned int const,
   unsigned int> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned
   int> > >::_M_emplace_hint_unique<std::piecewise_construct_t const&, std::tuple<unsigned int&&>,
   std::tuple<> >(std::_Rb_tree_const_iterator<std::pair<unsigned int const, unsigned int> >,
   std::piecewise_construct_t const&, std::tuple<unsigned int&&>&&, std::tuple<>&&) [clone .isra.0]
    */_Rb_tree_node_base * std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<unsigned_int&&>,std::tuple<>>(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>> * param_1, undefined8, param_2, undefined8 * param_3) * puVar2 ;_Rb_tree_node_base *p_Var3_Rb_tree_node_base *p_Var4bool bVar5undefined1 auVar6[16]p_Var3 = (_Rb_tree_node_base*)operator_new(0x28);puVar2 = (uint*)*param_3;*(undefined4*)( p_Var3 + 0x24 ) = 0;uVar1 = *puVar2;*(uint*)( p_Var3 + 0x20 ) = uVar1;auVar6 = _M_get_insert_hint_unique_pos(param_1, param_2, uVar1);p_Var4 = auVar6._8_8_;if (p_Var4 != (_Rb_tree_node_base*)0x0) {
   bVar5 = true;
   if (( auVar6._0_8_ == (_Rb_tree_node_base*)0x0 ) && ( p_Var4 != (_Rb_tree_node_base*)( param_1 + 8 ) )) {
      bVar5 = uVar1 < *(uint*)( p_Var4 + 0x20 );
   }

   std::_Rb_tree_insert_and_rebalance(bVar5, p_Var3, p_Var4, (_Rb_tree_node_base*)( param_1 + 8 ));
   *(long*)( param_1 + 0x28 ) = *(long*)( param_1 + 0x28 ) + 1;
   return p_Var3;
}
operator_delete(p_Var3, 0x28);return auVar6._0_8_;}/* std::set<spv::Capability, std::less<spv::Capability>, std::allocator<spv::Capability>
   >::insert(spv::Capability const&) [clone .isra.0] */void std::set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>::insert(set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>> *this, Capability *param_1) {
   _Rb_tree_node_base *p_Var1;
   int iVar2;
   _Rb_tree_node_base *p_Var3;
   long lVar4;
   int iVar5;
   _Rb_tree_node_base *p_Var6;
   bool bVar7;
   p_Var1 = (_Rb_tree_node_base*)( this + 8 );
   iVar2 = *(int*)param_1;
   p_Var3 = *(_Rb_tree_node_base**)( this + 0x10 );
   p_Var6 = p_Var1;
   if (*(_Rb_tree_node_base**)( this + 0x10 ) == (_Rb_tree_node_base*)0x0) {
      LAB_001002c3:if (p_Var6 == *(_Rb_tree_node_base**)( this + 0x18 )) goto LAB_00100279;
      lVar4 = std::_Rb_tree_decrement(p_Var6);
      iVar5 = *(int*)( lVar4 + 0x20 );
   }
 else {
      do {
         p_Var6 = p_Var3;
         iVar5 = *(int*)( p_Var6 + 0x20 );
         p_Var3 = *(_Rb_tree_node_base**)( p_Var6 + 0x18 );
         if (iVar2 < iVar5) {
            p_Var3 = *(_Rb_tree_node_base**)( p_Var6 + 0x10 );
         }

      }
 while ( p_Var3 != (_Rb_tree_node_base*)0x0 );
      if (iVar2 < iVar5) goto LAB_001002c3;
   }

   if (iVar2 <= iVar5) {
      return;
   }

   LAB_00100279:bVar7 = true;
   if (p_Var1 != p_Var6) {
      bVar7 = iVar2 < *(int*)( p_Var6 + 0x20 );
   }

   p_Var3 = (_Rb_tree_node_base*)operator_new(0x28);
   *(undefined4*)( p_Var3 + 0x20 ) = *(undefined4*)param_1;
   std::_Rb_tree_insert_and_rebalance(bVar7, p_Var3, p_Var6, p_Var1);
   *(long*)( this + 0x28 ) = *(long*)( this + 0x28 ) + 1;
   return;
}
/* std::_Rb_tree_iterator<std::pair<unsigned int const, unsigned int> > std::_Rb_tree<unsigned int,
   std::pair<unsigned int const, unsigned int>, std::_Select1st<std::pair<unsigned int const,
   unsigned int> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned
   int> > >::_M_emplace_hint_unique<std::piecewise_construct_t const&, std::tuple<unsigned int
   const&>, std::tuple<> >(std::_Rb_tree_const_iterator<std::pair<unsigned int const, unsigned int>
   >, std::piecewise_construct_t const&, std::tuple<unsigned int const&>&&, std::tuple<>&&) [clone
   .isra.0] */_Rb_tree_node_base * std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<unsigned_int_const&>,std::tuple<>>(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>> * param_1, undefined8, param_2, undefined8 * param_3) * puVar2 ;_Rb_tree_node_base *p_Var3_Rb_tree_node_base *p_Var4bool bVar5undefined1 auVar6[16]p_Var3 = (_Rb_tree_node_base*)operator_new(0x28);puVar2 = (uint*)*param_3;*(undefined4*)( p_Var3 + 0x24 ) = 0;uVar1 = *puVar2;*(uint*)( p_Var3 + 0x20 ) = uVar1;auVar6 = _M_get_insert_hint_unique_pos(param_1, param_2, uVar1);p_Var4 = auVar6._8_8_;if (p_Var4 != (_Rb_tree_node_base*)0x0) {
   bVar5 = true;
   if (( auVar6._0_8_ == (_Rb_tree_node_base*)0x0 ) && ( p_Var4 != (_Rb_tree_node_base*)( param_1 + 8 ) )) {
      bVar5 = uVar1 < *(uint*)( p_Var4 + 0x20 );
   }

   std::_Rb_tree_insert_and_rebalance(bVar5, p_Var3, p_Var4, (_Rb_tree_node_base*)( param_1 + 8 ));
   *(long*)( param_1 + 0x28 ) = *(long*)( param_1 + 0x28 ) + 1;
   return p_Var3;
}
operator_delete(p_Var3, 0x28);return auVar6._0_8_;}/* void std::__cxx11::string::_M_construct<char const*>(char const*, char const*,
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
         goto LAB_001003f4;
      }

      if (__n == 0) goto LAB_001003f4;
   }
 else {
      __dest = (undefined1*)std::__cxx11::string::_M_create(param_1, ( ulong ) & local_28);
      *param_1 = (ulong)__dest;
      param_1[2] = local_28;
   }

   memcpy(__dest, param_2, __n);
   __dest = (undefined1*)*param_1;
   LAB_001003f4:param_1[1] = local_28;
   __dest[local_28] = 0;
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* std::_Rb_tree<spv::Capability, spv::Capability, std::_Identity<spv::Capability>,
   std::less<spv::Capability>, std::allocator<spv::Capability>
   >::_M_erase(std::_Rb_tree_node<spv::Capability>*) [clone .isra.0] */void std::_Rb_tree<spv::Capability,spv::Capability,std::_Identity<spv::Capability>,std::less<spv::Capability>,std::allocator<spv::Capability>>::_M_erase(_Rb_tree_node *param_1) {
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
/* std::_Rb_tree<unsigned int, std::pair<unsigned int const, std::__cxx11::string const*>,
   std::_Select1st<std::pair<unsigned int const, std::__cxx11::string const*> >, std::less<unsigned
   int>, std::allocator<std::pair<unsigned int const, std::__cxx11::string const*> >
   >::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const, std::__cxx11::string const*> >*)
   [clone .isra.0] */void std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,std::__cxx11::string_const*>,std::_Select1st<std::pair<unsigned_int_const,std::__cxx11::string_const*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::__cxx11::string_const*>>>::_M_erase(_Rb_tree_node *param_1) {
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
   _Rb_tree_node *local_40;
   local_40 = param_1;
   if (param_1 != (_Rb_tree_node*)0x0) {
      do {
         pvVar10 = *(void**)( local_40 + 0x18 );
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
                                 if (*(void**)( (long)pvVar2 + 0x20 ) != (void*)( (long)pvVar2 + 0x30 )) {
                                    operator_delete(*(void**)( (long)pvVar2 + 0x20 ), *(long*)( (long)pvVar2 + 0x30 ) + 1);
                                 }

                                 operator_delete(pvVar2, 0x40);
                                 pvVar2 = pvVar1;
                              }
;
                              pvVar2 = *(void**)( (long)pvVar6 + 0x10 );
                              if (*(void**)( (long)pvVar6 + 0x20 ) != (void*)( (long)pvVar6 + 0x30 )) {
                                 operator_delete(*(void**)( (long)pvVar6 + 0x20 ), *(long*)( (long)pvVar6 + 0x30 ) + 1);
                              }

                              operator_delete(pvVar6, 0x40);
                              pvVar6 = pvVar2;
                           }
;
                           pvVar6 = *(void**)( (long)pvVar4 + 0x10 );
                           if (*(void**)( (long)pvVar4 + 0x20 ) != (void*)( (long)pvVar4 + 0x30 )) {
                              operator_delete(*(void**)( (long)pvVar4 + 0x20 ), *(long*)( (long)pvVar4 + 0x30 ) + 1);
                           }

                           operator_delete(pvVar4, 0x40);
                           pvVar4 = pvVar6;
                        }
;
                        pvVar4 = *(void**)( (long)pvVar3 + 0x10 );
                        if (*(void**)( (long)pvVar3 + 0x20 ) != (void*)( (long)pvVar3 + 0x30 )) {
                           operator_delete(*(void**)( (long)pvVar3 + 0x20 ), *(long*)( (long)pvVar3 + 0x30 ) + 1);
                        }

                        operator_delete(pvVar3, 0x40);
                        pvVar3 = pvVar4;
                     }
;
                     pvVar3 = *(void**)( (long)pvVar5 + 0x10 );
                     if (*(void**)( (long)pvVar5 + 0x20 ) != (void*)( (long)pvVar5 + 0x30 )) {
                        operator_delete(*(void**)( (long)pvVar5 + 0x20 ), *(long*)( (long)pvVar5 + 0x30 ) + 1);
                     }

                     operator_delete(pvVar5, 0x40);
                     pvVar5 = pvVar3;
                  }
;
                  pvVar5 = *(void**)( (long)pvVar7 + 0x10 );
                  if (*(void**)( (long)pvVar7 + 0x20 ) != (void*)( (long)pvVar7 + 0x30 )) {
                     operator_delete(*(void**)( (long)pvVar7 + 0x20 ), *(long*)( (long)pvVar7 + 0x30 ) + 1);
                  }

                  operator_delete(pvVar7, 0x40);
                  pvVar7 = pvVar5;
               }
;
               pvVar7 = *(void**)( (long)pvVar8 + 0x10 );
               if (*(void**)( (long)pvVar8 + 0x20 ) != (void*)( (long)pvVar8 + 0x30 )) {
                  operator_delete(*(void**)( (long)pvVar8 + 0x20 ), *(long*)( (long)pvVar8 + 0x30 ) + 1);
               }

               operator_delete(pvVar8, 0x40);
               pvVar8 = pvVar7;
            }
;
            pvVar8 = *(void**)( (long)pvVar10 + 0x10 );
            if (*(void**)( (long)pvVar10 + 0x20 ) != (void*)( (long)pvVar10 + 0x30 )) {
               operator_delete(*(void**)( (long)pvVar10 + 0x20 ), *(long*)( (long)pvVar10 + 0x30 ) + 1);
            }

            operator_delete(pvVar10, 0x40);
            pvVar10 = pvVar8;
         }
;
         p_Var9 = *(_Rb_tree_node**)( local_40 + 0x10 );
         if (*(_Rb_tree_node**)( local_40 + 0x20 ) != local_40 + 0x30) {
            operator_delete(*(_Rb_tree_node**)( local_40 + 0x20 ), *(long*)( local_40 + 0x30 ) + 1);
         }

         operator_delete(local_40, 0x40);
         local_40 = p_Var9;
      }
 while ( p_Var9 != (_Rb_tree_node*)0x0 );
   }

   return;
}
/* spv::Builder::Builder(unsigned int, unsigned int, spv::SpvBuildLogger*) */void spv::Builder::Builder(Builder *this, uint param_1, uint param_2, SpvBuildLogger *param_3) {
   undefined8 *puVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   void *pvVar4;
   *(undefined***)this = &PTR__Builder_0011c670;
   uVar2 = _LC0;
   *(Builder**)( this + 8 ) = this + 0x38;
   *(undefined1(*) [16])( this + 0x4c ) = (undefined1[16])0x0;
   *(uint*)( this + 0x40 ) = param_1;
   *(undefined4*)( this + 0x28 ) = uVar2;
   for (int i = 0; i < 4; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 168 ) ) = (undefined1[16])0;
   }

   *(Builder**)( this + 0x60 ) = this + 0x70;
   *(undefined8*)( this + 0x10 ) = 1;
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined8*)( this + 0x30 ) = 0;
   *(undefined8*)( this + 0x38 ) = 0;
   *(undefined8*)( this + 0x44 ) = 0;
   *(undefined8*)( this + 0x68 ) = 0;
   this[0x70] = (Builder)0x0;
   *(undefined4*)( this + 0x84 ) = 0;
   *(undefined8*)( this + 0x88 ) = 0;
   *(undefined8*)( this + 0x98 ) = 0;
   *(undefined8*)( this + 0xa0 ) = 8;
   pvVar4 = operator_new(0x40);
   *(void**)( this + 0x98 ) = pvVar4;
   puVar1 = (undefined8*)( (long)pvVar4 + ( *(long*)( this + 0xa0 ) * 4 - 4U & 0xfffffffffffffff8 ) );
   pvVar4 = operator_new(0x200);
   *(undefined4*)( this + 0xe8 ) = 0;
   *puVar1 = pvVar4;
   *(undefined1(*) [16])( this + 0x120 ) = (undefined1[16])0x0;
   *(Builder**)( this + 0x108 ) = this + 0xf8;
   *(Builder**)( this + 0x110 ) = this + 0xf8;
   uVar3 = _LC1;
   *(void**)( this + 0xa8 ) = pvVar4;
   *(void**)( this + 0xb0 ) = pvVar4;
   *(undefined8*)( this + 0x150 ) = uVar3;
   *(Builder**)( this + 0x170 ) = this + 0x160;
   *(Builder**)( this + 0x178 ) = this + 0x160;
   *(undefined***)( this + 400 ) = &PTR__Module_0011c650;
   *(long*)( this + 0xb8 ) = (long)pvVar4 + 0x200;
   *(undefined8**)( this + 0xc0 ) = puVar1;
   *(void**)( this + 200 ) = pvVar4;
   *(void**)( this + 0xd0 ) = pvVar4;
   *(long*)( this + 0xd8 ) = (long)pvVar4 + 0x200;
   *(undefined8**)( this + 0xe0 ) = puVar1;
   *(undefined1(*) [16])( this + 0x130 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x140 ) = (undefined1[16])0x0;
   this[0xec] = (Builder)0x0;
   *(undefined4*)( this + 0xf8 ) = 0;
   *(undefined8*)( this + 0x100 ) = 0;
   *(undefined8*)( this + 0x118 ) = 0;
   *(undefined4*)( this + 0x160 ) = 0;
   *(undefined8*)( this + 0x168 ) = 0;
   *(undefined8*)( this + 0x180 ) = 0;
   *(uint*)( this + 0x188 ) = param_2;
   for (int i = 0; i < 7; i++) {
      *(undefined8*)( this + ( 8*i + 408 ) ) = 0;
   }

   *(undefined4*)( this + 0x1d0 ) = 0;
   *(undefined8*)( this + 0x1d8 ) = 0;
   uVar2 = _LC0;
   *(Builder**)( this + 0x318 ) = this + 0x348;
   *(Builder**)( this + 0x350 ) = this + 0x380;
   *(undefined4*)( this + 0x338 ) = uVar2;
   *(undefined1(*) [16])( this + 0x1f0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x210 ) = (undefined1[16])0x0;
   for (int i = 0; i < 4; i++) {
      *(undefined1(*) [16])( this + ( 48*i + 576 ) ) = (undefined1[16])0;
      *(undefined1(*) [16])( this + ( 48*i + 592 ) ) = (undefined1[16])0;
      *(undefined1(*) [16])( this + ( 48*i + 608 ) ) = (undefined1[16])0;
   }

   *(undefined1(*) [16])( this + 0x300 ) = (undefined1[16])0x0;
   *(ushort*)( this + 0x238 ) = *(ushort*)( this + 0x238 ) & 0xfc00;
   this[0x1e0] = (Builder)0x0;
   *(undefined8*)( this + 0x200 ) = 0;
   *(undefined8*)( this + 0x220 ) = 0;
   *(undefined8*)( this + 0x310 ) = 0;
   *(undefined8*)( this + 800 ) = 1;
   *(undefined8*)( this + 0x328 ) = 0;
   *(undefined8*)( this + 0x330 ) = 0;
   *(undefined8*)( this + 0x340 ) = 0;
   *(undefined8*)( this + 0x348 ) = 0;
   *(undefined8*)( this + 0x358 ) = 1;
   *(undefined8*)( this + 0x360 ) = 0;
   *(undefined8*)( this + 0x368 ) = 0;
   *(Builder**)( this + 0x388 ) = this + 0x3b8;
   *(undefined8*)( this + 0x378 ) = 0;
   *(undefined8*)( this + 0x380 ) = 0;
   *(undefined8*)( this + 0x390 ) = 1;
   *(undefined8*)( this + 0x398 ) = 0;
   *(undefined8*)( this + 0x3a0 ) = 0;
   *(undefined8*)( this + 0x3b0 ) = 0;
   *(undefined8*)( this + 0x3b8 ) = 0;
   *(Builder**)( this + 0x3c0 ) = this + 0x3f0;
   *(undefined8*)( this + 0x3c8 ) = 1;
   *(undefined8*)( this + 0x3d0 ) = 0;
   *(undefined8*)( this + 0x3d8 ) = 0;
   *(undefined8*)( this + 1000 ) = 0;
   *(undefined8*)( this + 0x410 ) = 0;
   *(undefined8*)( this + 0x418 ) = 8;
   for (int i = 0; i < 3; i++) {
      *(undefined4*)( this + ( 56*i + 880 ) ) = uVar2;
   }

   *(undefined1(*) [16])( this + 0x3f0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x400 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x420 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x430 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x440 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x450 ) = (undefined1[16])0x0;
   pvVar4 = operator_new(0x40);
   *(void**)( this + 0x410 ) = pvVar4;
   puVar1 = (undefined8*)( (long)pvVar4 + ( *(long*)( this + 0x418 ) * 4 - 4U & 0xfffffffffffffff8 ) );
   pvVar4 = operator_new(0x200);
   *(undefined8*)( this + 0x460 ) = 0;
   *puVar1 = pvVar4;
   *(undefined8*)( this + 0x468 ) = 8;
   *(undefined1(*) [16])( this + 0x470 ) = (undefined1[16])0x0;
   *(long*)( this + 0x430 ) = (long)pvVar4 + 0x200;
   *(undefined8**)( this + 0x438 ) = puVar1;
   *(long*)( this + 0x450 ) = (long)pvVar4 + 0x200;
   *(undefined8**)( this + 0x458 ) = puVar1;
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 1152 ) ) = (undefined1[16])0;
   }

   *(void**)( this + 0x420 ) = pvVar4;
   *(void**)( this + 0x428 ) = pvVar4;
   *(void**)( this + 0x440 ) = pvVar4;
   *(void**)( this + 0x448 ) = pvVar4;
   pvVar4 = operator_new(0x40);
   *(void**)( this + 0x460 ) = pvVar4;
   puVar1 = (undefined8*)( (long)pvVar4 + ( *(long*)( this + 0x468 ) * 4 - 4U & 0xfffffffffffffff8 ) );
   pvVar4 = operator_new(0x200);
   uVar2 = _LC0;
   *(undefined8*)( this + 0x4b8 ) = 1;
   *puVar1 = pvVar4;
   *(undefined8*)( this + 0x4c0 ) = 0;
   *(Builder**)( this + 0x4b0 ) = this + 0x4e0;
   *(Builder**)( this + 0x500 ) = this + 0x4f0;
   *(Builder**)( this + 0x508 ) = this + 0x4f0;
   *(Builder**)( this + 0x530 ) = this + 0x520;
   *(Builder**)( this + 0x538 ) = this + 0x520;
   *(undefined8*)( this + 0x4c8 ) = 0;
   *(undefined8*)( this + 0x4d8 ) = 0;
   *(undefined8*)( this + 0x4e0 ) = 0;
   *(undefined4*)( this + 0x4f0 ) = 0;
   *(undefined8*)( this + 0x4f8 ) = 0;
   *(undefined8*)( this + 0x510 ) = 0;
   *(undefined4*)( this + 0x520 ) = 0;
   *(undefined8*)( this + 0x528 ) = 0;
   *(undefined8*)( this + 0x540 ) = 0;
   *(Builder**)( this + 0x548 ) = this + 0x578;
   *(undefined8*)( this + 0x550 ) = 1;
   *(undefined8*)( this + 0x558 ) = 0;
   *(undefined8*)( this + 0x560 ) = 0;
   *(undefined8*)( this + 0x570 ) = 0;
   *(undefined8*)( this + 0x578 ) = 0;
   *(SpvBuildLogger**)( this + 0x580 ) = param_3;
   *(undefined4*)( this + 0x1e8 ) = 0;
   *(void**)( this + 0x470 ) = pvVar4;
   *(void**)( this + 0x478 ) = pvVar4;
   *(long*)( this + 0x480 ) = (long)pvVar4 + 0x200;
   *(undefined8**)( this + 0x488 ) = puVar1;
   *(void**)( this + 0x490 ) = pvVar4;
   *(void**)( this + 0x498 ) = pvVar4;
   *(long*)( this + 0x4a0 ) = (long)pvVar4 + 0x200;
   *(undefined8**)( this + 0x4a8 ) = puVar1;
   *(undefined4*)( this + 0x4d0 ) = uVar2;
   *(undefined4*)( this + 0x568 ) = uVar2;
   if (*(long*)( this + 0x1f0 ) != *(long*)( this + 0x1f8 )) {
      *(long*)( this + 0x1f8 ) = *(long*)( this + 0x1f0 );
   }

   *(undefined4*)( this + 0x208 ) = 0;
   if (*(long*)( this + 0x210 ) != *(long*)( this + 0x218 )) {
      *(long*)( this + 0x218 ) = *(long*)( this + 0x210 );
   }

   *(ushort*)( this + 0x238 ) = *(ushort*)( this + 0x238 ) & 0xfc00;
   *(undefined8*)( this + 0x228 ) = 0;
   this[0x230] = (Builder)0x0;
   *(undefined4*)( this + 0x234 ) = 0;
   return;
}
/* spv::Builder::getDerefTypeId(unsigned int) const */undefined4 spv::Builder::getDerefTypeId(Builder *this, uint param_1) {
   long *plVar1;
   plVar1 = *(long**)( this + 0x1b0 );
   if (plVar1[param_1] != 0) {
      plVar1 = plVar1 + *(uint*)( plVar1[param_1] + 0xc );
   }

   return *(undefined4*)( *(long*)( *plVar1 + 0x18 ) + 4 );
}
/* spv::Builder::getMostBasicTypeClass(unsigned int) const */void spv::Builder::getMostBasicTypeClass(Builder *this, uint param_1) {
   uint uVar1;
   long lVar2;
   do {
      lVar2 = *(long*)( *(long*)( this + 0x1b0 ) + (ulong)param_1 * 8 );
      uVar1 = *(uint*)( lVar2 + 0x10 );
      while (uVar1 < 0x1e) {
         if (( uVar1 < 0x1c ) && ( 1 < uVar1 - 0x17 )) {
            return;
         }

         lVar2 = *(long*)( *(long*)( this + 0x1b0 ) + ( ulong ) * *(uint**)( lVar2 + 0x18 ) * 8 );
         uVar1 = *(uint*)( lVar2 + 0x10 );
      }
;
      if (uVar1 != 0x20) {
         return;
      }

      param_1 = *(uint*)( *(long*)( lVar2 + 0x18 ) + 4 );
   }
 while ( true );
}
/* spv::Builder::getNumTypeConstituents(unsigned int) const */ulong spv::Builder::getNumTypeConstituents(Builder *this, uint param_1) {
   uint uVar1;
   long lVar2;
   lVar2 = *(long*)( *(long*)( this + 0x1b0 ) + (ulong)param_1 * 8 );
   uVar1 = *(uint*)( lVar2 + 0x10 );
   if (uVar1 == 0x1c) {
      return ( ulong ) * *(uint**)( *(long*)( *(long*)( this + 0x1b0 ) + ( ulong ) * (uint*)( *(long*)( lVar2 + 0x18 ) + 4 ) * 8 ) + 0x18 );
   }

   if (uVar1 < 0x1d) {
      if (uVar1 - 0x17 < 2) {
         return ( ulong ) * (uint*)( *(long*)( lVar2 + 0x18 ) + 4 );
      }

      return 1;
   }

   if (uVar1 == 0x1e) {
      return *(long*)( lVar2 + 0x20 ) - *(long*)( lVar2 + 0x18 ) >> 2;
   }

   return 1;
}
/* spv::Builder::getContainedTypeId(unsigned int, int) const */undefined4 spv::Builder::getContainedTypeId(Builder *this, uint param_1, int param_2) {
   uint uVar1;
   long lVar2;
   lVar2 = *(long*)( *(long*)( this + 0x1b0 ) + (ulong)param_1 * 8 );
   uVar1 = *(uint*)( lVar2 + 0x10 );
   if (uVar1 == 0x20) {
      return *(undefined4*)( *(long*)( lVar2 + 0x18 ) + 4 );
   }

   if (uVar1 < 0x21) {
      if (uVar1 == 0x1e) {
         return *(undefined4*)( *(long*)( lVar2 + 0x18 ) + (long)param_2 * 4 );
      }

      if (uVar1 == 0x1f) {
         return 0;
      }

      if (uVar1 < 0x19) {
         if (uVar1 < 0x17) {
            return 0;
         }

      }
 else if (1 < uVar1 - 0x1c) {
         return 0;
      }

   }
 else if (( uVar1 != 0x1168 ) && ( uVar1 != 0x14ee )) {
      return 0;
   }

   return **(undefined4**)( lVar2 + 0x18 );
}
/* spv::Builder::getScalarTypeId(unsigned int) const */undefined4 spv::Builder::getScalarTypeId(Builder *this, uint param_1) {
   uint uVar1;
   long lVar2;
   undefined4 uVar3;
   ulong uVar4;
   long lVar5;
   ulong uVar6;
   long lVar7;
   lVar5 = *(long*)( this + 0x1b0 );
   lVar7 = 1;
   uVar6 = 0x131800000;
   lVar2 = *(long*)( lVar5 + (ulong)param_1 * 8 );
   uVar1 = *(uint*)( lVar2 + 0x10 );
   while (true) {
      if (0x20 < uVar1) {
         return 0;
      }

      uVar4 = lVar7 << ( (byte)uVar1 & 0x3f );
      if (( uVar4 & uVar6 ) == 0) break;
      param_1 = getContainedTypeId(this, param_1, 0);
      lVar2 = *(long*)( lVar5 + (ulong)param_1 * 8 );
      uVar1 = *(uint*)( lVar2 + 0x10 );
   }
;
   uVar3 = 0;
   if (( uVar4 & 0x40780000 ) != 0) {
      uVar3 = *(undefined4*)( lVar2 + 8 );
   }

   return uVar3;
}
/* spv::Builder::getResultingAccessChainType() const */ulong spv::Builder::getResultingAccessChainType(Builder *this) {
   long lVar1;
   uint uVar2;
   int iVar3;
   ulong uVar4;
   uint *puVar5;
   long lVar6;
   uint *puVar7;
   lVar6 = *(long*)( this + 0x1b0 );
   uVar2 = 0;
   lVar1 = *(long*)( lVar6 + ( ulong ) * (uint*)( this + 0x1e8 ) * 8 );
   if (lVar1 != 0) {
      uVar2 = *(uint*)( lVar1 + 0xc );
   }

   uVar2 = getContainedTypeId(this, uVar2, 0);
   puVar5 = *(uint**)( this + 0x1f0 );
   uVar4 = (ulong)uVar2;
   iVar3 = (int)( *(long*)( this + 0x1f8 ) - (long)puVar5 >> 2 );
   if (0 < iVar3) {
      puVar7 = puVar5 + ( ulong )(iVar3 - 1) + 1;
      do {
         while (true) {
            uVar2 = *puVar5;
            if (*(int*)( *(long*)( lVar6 + uVar4 * 8 ) + 0x10 ) != 0x1e) break;
            puVar5 = puVar5 + 1;
            uVar2 = getContainedTypeId(this, (uint)uVar4, **(int**)( *(long*)( lVar6 + (ulong)uVar2 * 8 ) + 0x18 ));
            uVar4 = (ulong)uVar2;
            if (puVar7 == puVar5) {
               return uVar4;
            }

         }
;
         uVar2 = getContainedTypeId(this, (uint)uVar4, uVar2);
         puVar5 = puVar5 + 1;
         uVar4 = (ulong)uVar2;
      }
 while ( puVar7 != puVar5 );
   }

   return uVar4;
}
/* spv::Builder::getContainedTypeId(unsigned int) const */void spv::Builder::getContainedTypeId(Builder *this, uint param_1) {
   getContainedTypeId(this, param_1, 0);
   return;
}
/* spv::Builder::containsType(unsigned int, spv::Op, unsigned int) const */undefined8 spv::Builder::containsType(Builder *this, uint param_1, int param_3, int param_4) {
   undefined4 *puVar1;
   long lVar2;
   int iVar3;
   ulong uVar4;
   undefined8 uVar5;
   uint *puVar6;
   long lVar7;
   undefined4 *puVar8;
   puVar6 = &switchD_001016b9::switchdataD_00117da8;
   lVar7 = *(long*)( this + 0x1b0 );
   while (true) {
      lVar2 = *(long*)( lVar7 + (ulong)param_1 * 8 );
      iVar3 = *(int*)( lVar2 + 0x10 );
      uVar4 = ( ulong )(iVar3 - 0x15U);
      if (0xb < iVar3 - 0x15U) break;
      uVar4 = (long)(int)puVar6[uVar4] + (long)puVar6;
      switch (uVar4) {
         case 0x1016c0:
      param_1 = getContainedTypeId(this,param_1,0);
      break;
         case 0x1016d0:
      if (param_3 != iVar3) {
        return 0;
      }
      return CONCAT71((int7)((ulong)*(int **)(lVar2 + 0x18) >> 8),
                      **(int **)(lVar2 + 0x18) == param_4);
         case 0x1016e8:
      goto switchD_001016b9_caseD_1016e8;
         case 0x101700:
      puVar8 = *(undefined4 **)(lVar2 + 0x18);
      iVar3 = (int)(*(long *)(lVar2 + 0x20) - (long)puVar8 >> 2);
      if (iVar3 < 1) {
        return 0;
      }
      puVar1 = puVar8 + (ulong)(iVar3 - 1) + 1;
      do {
        uVar5 = containsType(this,*puVar8,param_3,param_4);
        if ((char)uVar5 != '\0') {
          return uVar5;
        }
        puVar8 = puVar8 + 1;
      } while (puVar8 != puVar1);
      return uVar5;
         case 0x101740:
      return 0;
      }

   }
;
   switchD_001016b9_caseD_1016e8:return CONCAT71(( int7 )(uVar4 >> 8), param_3 == iVar3);
}
/* spv::Builder::containsPhysicalStorageBufferOrArray(unsigned int) const */undefined8 spv::Builder::containsPhysicalStorageBufferOrArray(Builder *this, uint param_1) {
   uint *puVar1;
   long lVar2;
   int iVar3;
   undefined8 uVar4;
   uint *puVar5;
   long lVar6;
   lVar6 = *(long*)( this + 0x1b0 );
   lVar2 = *(long*)( lVar6 + (ulong)param_1 * 8 );
   iVar3 = *(int*)( lVar2 + 0x10 );
   while (iVar3 != 0x1e) {
      if (iVar3 == 0x20) {
         return CONCAT71(( int7 )(( ulong ) * (int**)( lVar2 + 0x18 ) >> 8), **(int**)( lVar2 + 0x18 ) == 0x14e5);
      }

      if (iVar3 != 0x1c) goto LAB_0010177a;
      param_1 = getContainedTypeId(this, param_1, 0);
      lVar2 = *(long*)( lVar6 + (ulong)param_1 * 8 );
      iVar3 = *(int*)( lVar2 + 0x10 );
   }
;
   puVar5 = *(uint**)( lVar2 + 0x18 );
   iVar3 = (int)( *(long*)( lVar2 + 0x20 ) - (long)puVar5 >> 2 );
   if (iVar3 < 1) {
      LAB_0010177a:uVar4 = 0;
   }
 else {
      puVar1 = puVar5 + ( ulong )(iVar3 - 1) + 1;
      while (uVar4 = containsPhysicalStorageBufferOrArray(this, *puVar5),(char)uVar4 == '\0') {
         puVar5 = puVar5 + 1;
         if (puVar5 == puVar1) {
            return uVar4;
         }

      }
;
   }

   return uVar4;
}
/* spv::Builder::isConstantOpCode(spv::Op) const */undefined8 spv::Builder::isConstantOpCode(undefined8 param_1, uint param_2) {
   undefined8 uVar1;
   uVar1 = 0;
   if (param_2 < 0x35) {
      uVar1 = CONCAT71(0x1f7e00000000, ( 0x1f7e0000000002U >> ( (ulong)param_2 & 0x3f ) & 1 ) != 0);
   }

   return uVar1;
}
/* spv::Builder::isSpecConstantOpCode(spv::Op) const */bool spv::Builder::isSpecConstantOpCode(undefined8 param_1, int param_2) {
   return param_2 - 0x30U < 5;
}
/* spv::Builder::unmangleFunctionName(std::__cxx11::string const&) const */string *spv::Builder::unmangleFunctionName(string *param_1) {
   string *__src;
   long lVar1;
   ulong uVar2;
   string *__dest;
   long *in_RDX;
   long in_FS_OFFSET;
   ulong local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = std::__cxx11::string::rfind((char)in_RDX, 0x28);
   if (lVar1 != -1) {
      uVar2 = std::__cxx11::string::rfind((char)in_RDX, 0x28);
      *(string**)param_1 = param_1 + 0x10;
      if ((ulong)in_RDX[1] < uVar2) {
         uVar2 = in_RDX[1];
      }

      std::__cxx11::string::_M_construct<char_const*>(param_1, *in_RDX, *in_RDX + uVar2);
      goto LAB_001018a2;
   }

   __dest = param_1 + 0x10;
   *(string**)param_1 = __dest;
   __src = (string*)*in_RDX;
   uVar2 = in_RDX[1];
   local_28 = uVar2;
   if (uVar2 < 0x10) {
      if (uVar2 == 1) {
         param_1[0x10] = *__src;
      }
 else if (uVar2 != 0) goto LAB_0010191b;
   }
 else {
      __dest = (string*)std::__cxx11::string::_M_create((ulong*)param_1, ( ulong ) & local_28);
      *(string**)param_1 = __dest;
      *(ulong*)( param_1 + 0x10 ) = local_28;
      LAB_0010191b:memcpy(__dest, __src, uVar2);
      __dest = *(string**)param_1;
   }

   *(ulong*)( param_1 + 8 ) = local_28;
   __dest[local_28] = (string)0x0;
   LAB_001018a2:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* spv::Builder::leaveLexicalBlock() */void spv::Builder::leaveLexicalBlock(Builder *this) {
   void *pvVar1;
   long lVar2;
   pvVar1 = *(void**)( this + 200 );
   if (pvVar1 != *(void**)( this + 0xd0 )) {
      this[0x90] = (Builder)0x1;
      *(long*)( this + 200 ) = (long)pvVar1 + -4;
      return;
   }

   operator_delete(pvVar1, 0x200);
   lVar2 = *(long*)( *(long*)( this + 0xe0 ) + -8 );
   this[0x90] = (Builder)0x1;
   *(long*)( this + 0xe0 ) = *(long*)( this + 0xe0 ) + -8;
   *(long*)( this + 0xd0 ) = lVar2;
   *(long*)( this + 0xd8 ) = lVar2 + 0x200;
   *(long*)( this + 200 ) = lVar2 + 0x1fc;
   return;
}
/* spv::Builder::sanitizeMemoryAccessForStorageClass(spv::MemoryAccessMask, spv::StorageClass) const
    */uint spv::Builder::sanitizeMemoryAccessForStorageClass(undefined8 param_1, uint param_2, uint param_3) {
   if (param_3 < 0xd) {
      if (( param_3 < 2 ) || ( ( 0x1014UL >> ( (ulong)param_3 & 0x3f ) & 1 ) == 0 )) {
         LAB_001019ea:return param_2 & 0xffffffc7;
      }

   }
 else if (param_3 != 0x14e5) goto LAB_001019ea;
   return param_2;
}
/* spv::Builder::closeLoop() */void spv::Builder::closeLoop(Builder *this) {
   void *pvVar1;
   long lVar2;
   pvVar1 = *(void**)( this + 0x490 );
   if (pvVar1 != *(void**)( this + 0x498 )) {
      *(long*)( this + 0x490 ) = (long)pvVar1 + -0x20;
      return;
   }

   operator_delete(pvVar1, 0x200);
   lVar2 = *(long*)( *(long*)( this + 0x4a8 ) + -8 );
   *(long*)( this + 0x4a8 ) = *(long*)( this + 0x4a8 ) + -8;
   *(long*)( this + 0x498 ) = lVar2;
   *(long*)( this + 0x4a0 ) = lVar2 + 0x200;
   *(long*)( this + 0x490 ) = lVar2 + 0x1e0;
   return;
}
/* spv::Builder::clearAccessChain() */void spv::Builder::clearAccessChain(Builder *this) {
   *(undefined4*)( this + 0x1e8 ) = 0;
   if (*(long*)( this + 0x1f0 ) != *(long*)( this + 0x1f8 )) {
      *(long*)( this + 0x1f8 ) = *(long*)( this + 0x1f0 );
   }

   *(undefined4*)( this + 0x208 ) = 0;
   if (*(long*)( this + 0x210 ) != *(long*)( this + 0x218 )) {
      *(long*)( this + 0x218 ) = *(long*)( this + 0x210 );
   }

   *(ushort*)( this + 0x238 ) = *(ushort*)( this + 0x238 ) & 0xfc00;
   *(undefined8*)( this + 0x228 ) = 0;
   this[0x230] = (Builder)0x0;
   *(undefined4*)( this + 0x234 ) = 0;
   return;
}
/* spv::Builder::simplifyAccessChainSwizzle() */void spv::Builder::simplifyAccessChainSwizzle(Builder *this) {
   long lVar1;
   int iVar2;
   ulong uVar3;
   ulong uVar4;
   iVar2 = getNumTypeConstituents(this, *(uint*)( this + 0x22c ));
   lVar1 = *(long*)( this + 0x210 );
   uVar3 = *(long*)( this + 0x218 ) - lVar1 >> 2;
   if (iVar2 <= (int)uVar3) {
      if (*(long*)( this + 0x218 ) != lVar1) {
         uVar4 = 0;
         do {
            if (*(int*)( lVar1 + uVar4 * 4 ) != (int)uVar4) {
               return;
            }

            uVar4 = ( ulong )((int)uVar4 + 1);
         }
 while ( uVar4 < uVar3 );
         *(long*)( this + 0x218 ) = lVar1;
      }

      if (*(int*)( this + 0x228 ) == 0) {
         *(undefined4*)( this + 0x22c ) = 0;
         return;
      }

   }

   return;
}
/* spv::Builder::~Builder() */void spv::Builder::~Builder(Builder *this) {
   void *pvVar1;
   long lVar2;
   Function *this_00;
   unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>> *puVar3;
   long *plVar4;
   undefined8 *puVar5;
   unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>> *puVar6;
   unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>> *puVar7;
   undefined8 *puVar8;
   void *pvVar9;
   *(undefined***)this = &PTR__Builder_0011c670;
   puVar8 = *(undefined8**)( this + 0x558 );
   while (puVar8 != (undefined8*)0x0) {
      puVar5 = (undefined8*)*puVar8;
      operator_delete(puVar8, 0x10);
      puVar8 = puVar5;
   }
;
   memset(*(void**)( this + 0x548 ), 0, *(long*)( this + 0x550 ) * 8);
   *(undefined8*)( this + 0x560 ) = 0;
   *(undefined8*)( this + 0x558 ) = 0;
   if (*(Builder**)( this + 0x548 ) != this + 0x578) {
      operator_delete(*(Builder**)( this + 0x548 ), *(long*)( this + 0x550 ) << 3);
   }

   pvVar9 = *(void**)( this + 0x528 );
   while (pvVar9 != (void*)0x0) {
      std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::_M_erase(*(_Rb_tree_node**)( (long)pvVar9 + 0x18 ));
      pvVar1 = *(void**)( (long)pvVar9 + 0x10 );
      operator_delete(pvVar9, 0x28);
      pvVar9 = pvVar1;
   }
;
   pvVar9 = *(void**)( this + 0x4f8 );
   while (pvVar9 != (void*)0x0) {
      std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,std::__cxx11::string_const*>,std::_Select1st<std::pair<unsigned_int_const,std::__cxx11::string_const*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::__cxx11::string_const*>>>::_M_erase(*(_Rb_tree_node**)( (long)pvVar9 + 0x18 ));
      pvVar1 = *(void**)( (long)pvVar9 + 0x10 );
      operator_delete(pvVar9, 0x30);
      pvVar9 = pvVar1;
   }
;
   puVar8 = *(undefined8**)( this + 0x4c0 );
   while (puVar8 != (undefined8*)0x0) {
      puVar5 = (undefined8*)*puVar8;
      if ((undefined8*)puVar8[1] != puVar8 + 3) {
         operator_delete((undefined8*)puVar8[1], puVar8[3] + 1);
      }

      operator_delete(puVar8, 0x38);
      puVar8 = puVar5;
   }
;
   memset(*(void**)( this + 0x4b0 ), 0, *(long*)( this + 0x4b8 ) * 8);
   *(undefined8*)( this + 0x4c8 ) = 0;
   *(undefined8*)( this + 0x4c0 ) = 0;
   if (*(Builder**)( this + 0x4b0 ) != this + 0x4e0) {
      operator_delete(*(Builder**)( this + 0x4b0 ), *(long*)( this + 0x4b8 ) << 3);
   }

   pvVar9 = *(void**)( this + 0x460 );
   if (pvVar9 != (void*)0x0) {
      lVar2 = *(long*)( this + 0x4a8 );
      puVar8 = *(undefined8**)( this + 0x488 );
      if (puVar8 < (undefined8*)( lVar2 + 8U )) {
         do {
            pvVar9 = (void*)*puVar8;
            puVar8 = puVar8 + 1;
            operator_delete(pvVar9, 0x200);
         }
 while ( puVar8 < (undefined8*)( lVar2 + 8U ) );
         pvVar9 = *(void**)( this + 0x460 );
      }

      operator_delete(pvVar9, *(long*)( this + 0x468 ) * 8);
   }

   pvVar9 = *(void**)( this + 0x410 );
   if (pvVar9 != (void*)0x0) {
      lVar2 = *(long*)( this + 0x458 );
      puVar8 = *(undefined8**)( this + 0x438 );
      if (puVar8 < (undefined8*)( lVar2 + 8U )) {
         do {
            pvVar9 = (void*)*puVar8;
            puVar8 = puVar8 + 1;
            operator_delete(pvVar9, 0x200);
         }
 while ( puVar8 < (undefined8*)( lVar2 + 8U ) );
         pvVar9 = *(void**)( this + 0x410 );
      }

      operator_delete(pvVar9, *(long*)( this + 0x418 ) * 8);
   }

   pvVar9 = *(void**)( this + 0x3f8 );
   if (pvVar9 != (void*)0x0) {
      operator_delete(pvVar9, *(long*)( this + 0x408 ) - (long)pvVar9);
   }

   for (int i = 0; i < 4; i++) {
      std::_Hashtable<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::~_Hashtable((_Hashtable<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>*)( this + ( -56*i + 960 ) ));
   }

   puVar8 = *(undefined8**)( this + 0x308 );
   puVar5 = *(undefined8**)( this + 0x300 );
   if (puVar8 != puVar5) {
      do {
         while (this_00 = (Function*)*puVar5,this_00 == (Function*)0x0) {
            LAB_00101e0a:puVar5 = puVar5 + 1;
            if (puVar8 == puVar5) goto LAB_00101e40;
         }
;
         if (*(code**)( *(long*)this_00 + 8 ) == Function::~Function) {
            Function::~Function(this_00);
            operator_delete(this_00, 0x108);
            goto LAB_00101e0a;
         }

         ( **(code**)( *(long*)this_00 + 8 ) )();
         puVar5 = puVar5 + 1;
      }
 while ( puVar8 != puVar5 );
      LAB_00101e40:puVar5 = *(undefined8**)( this + 0x300 );
   }

   if (puVar5 != (undefined8*)0x0) {
      operator_delete(puVar5, *(long*)( this + 0x310 ) - (long)puVar5);
   }

   for (int i = 0; i < 3; i++) {
      puVar3 = *(unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>**)( this + ( -24*i + 752 ) );
      puVar7 = *(unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>**)( this + ( -24*i + 744 ) );
      if (puVar3 != puVar7) {
         do {
            puVar6 = puVar7 + 8;
            std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr(puVar7);
            puVar7 = puVar6;
         }
 while ( puVar3 != puVar6 );
         puVar7 = *(unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>**)( this + ( -24*i + 744 ) );
      }

      if (puVar7 != (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)0) {
         operator_delete(puVar7, *(long*)( this + ( -24*i + 760 ) ) - (long)puVar7);
      }

   }

   puVar8 = *(undefined8**)( this + 0x2a8 );
   puVar5 = *(undefined8**)( this + 0x2a0 );
   if (puVar8 != puVar5) {
      do {
         while (plVar4 = (long*)*puVar5,plVar4 == (long*)0x0) {
            LAB_00101f9b:puVar5 = puVar5 + 1;
            if (puVar8 == puVar5) goto LAB_00101fd0;
         }
;
         if (*(code**)( *plVar4 + 8 ) == Instruction::~Instruction) {
            pvVar9 = (void*)plVar4[6];
            *plVar4 = (long)&PTR__Instruction_0011c5f0;
            if (pvVar9 != (void*)0x0) {
               operator_delete(pvVar9, plVar4[10] - (long)pvVar9);
            }

            pvVar9 = (void*)plVar4[3];
            if (pvVar9 != (void*)0x0) {
               operator_delete(pvVar9, plVar4[5] - (long)pvVar9);
            }

            operator_delete(plVar4, 0x60);
            goto LAB_00101f9b;
         }

         puVar5 = puVar5 + 1;
         ( **(code**)( *plVar4 + 8 ) )(plVar4);
      }
 while ( puVar8 != puVar5 );
      LAB_00101fd0:puVar5 = *(undefined8**)( this + 0x2a0 );
   }

   if (puVar5 != (undefined8*)0x0) {
      operator_delete(puVar5, *(long*)( this + 0x2b0 ) - (long)puVar5);
   }

   puVar8 = *(undefined8**)( this + 0x290 );
   puVar5 = *(undefined8**)( this + 0x288 );
   if (puVar8 != puVar5) {
      do {
         while (plVar4 = (long*)*puVar5,plVar4 == (long*)0x0) {
            LAB_00102053:puVar5 = puVar5 + 1;
            if (puVar8 == puVar5) goto LAB_00102080;
         }
;
         if (*(code**)( *plVar4 + 8 ) == Instruction::~Instruction) {
            pvVar9 = (void*)plVar4[6];
            *plVar4 = (long)&PTR__Instruction_0011c5f0;
            if (pvVar9 != (void*)0x0) {
               operator_delete(pvVar9, plVar4[10] - (long)pvVar9);
            }

            pvVar9 = (void*)plVar4[3];
            if (pvVar9 != (void*)0x0) {
               operator_delete(pvVar9, plVar4[5] - (long)pvVar9);
            }

            operator_delete(plVar4, 0x60);
            goto LAB_00102053;
         }

         puVar5 = puVar5 + 1;
         ( **(code**)( *plVar4 + 8 ) )(plVar4);
      }
 while ( puVar8 != puVar5 );
      LAB_00102080:puVar5 = *(undefined8**)( this + 0x288 );
   }

   if (puVar5 != (undefined8*)0x0) {
      operator_delete(puVar5, *(long*)( this + 0x298 ) - (long)puVar5);
   }

   for (int i = 0; i < 3; i++) {
      puVar3 = *(unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>**)( this + ( -24*i + 632 ) );
      puVar7 = *(unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>**)( this + ( -24*i + 624 ) );
      if (puVar3 != puVar7) {
         do {
            puVar6 = puVar7 + 8;
            std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr(puVar7);
            puVar7 = puVar6;
         }
 while ( puVar3 != puVar6 );
         puVar7 = *(unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>**)( this + ( -24*i + 624 ) );
      }

      if (puVar7 != (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)0) {
         operator_delete(puVar7, *(long*)( this + ( -24*i + 640 ) ) - (long)puVar7);
      }

   }

   pvVar9 = *(void**)( this + 0x210 );
   if (pvVar9 != (void*)0x0) {
      operator_delete(pvVar9, *(long*)( this + 0x220 ) - (long)pvVar9);
   }

   pvVar9 = *(void**)( this + 0x1f0 );
   if (pvVar9 != (void*)0x0) {
      operator_delete(pvVar9, *(long*)( this + 0x200 ) - (long)pvVar9);
   }

   pvVar9 = *(void**)( this + 0x1b0 );
   *(undefined***)( this + 400 ) = &PTR__Module_0011c650;
   if (pvVar9 != (void*)0x0) {
      operator_delete(pvVar9, *(long*)( this + 0x1c0 ) - (long)pvVar9);
   }

   pvVar9 = *(void**)( this + 0x198 );
   if (pvVar9 != (void*)0x0) {
      operator_delete(pvVar9, *(long*)( this + 0x1a8 ) - (long)pvVar9);
   }

   pvVar9 = *(void**)( this + 0x168 );
   while (pvVar9 != (void*)0x0) {
      std::_Rb_tree<spv::Capability,spv::Capability,std::_Identity<spv::Capability>,std::less<spv::Capability>,std::allocator<spv::Capability>>::_M_erase(*(_Rb_tree_node**)( (long)pvVar9 + 0x18 ));
      pvVar1 = *(void**)( (long)pvVar9 + 0x10 );
      operator_delete(pvVar9, 0x28);
      pvVar9 = pvVar1;
   }
;
   pvVar9 = *(void**)( this + 0x138 );
   if (pvVar9 != (void*)0x0) {
      operator_delete(pvVar9, *(long*)( this + 0x148 ) - (long)pvVar9);
   }

   pvVar9 = *(void**)( this + 0x120 );
   if (pvVar9 != (void*)0x0) {
      operator_delete(pvVar9, *(long*)( this + 0x130 ) - (long)pvVar9);
   }

   pvVar9 = *(void**)( this + 0x100 );
   while (pvVar9 != (void*)0x0) {
      std::_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>::_M_erase(*(_Rb_tree_node**)( (long)pvVar9 + 0x18 ));
      pvVar1 = *(void**)( (long)pvVar9 + 0x10 );
      std::__cxx11::string::_M_dispose();
      operator_delete(pvVar9, 0x40);
      pvVar9 = pvVar1;
   }
;
   pvVar9 = *(void**)( this + 0x98 );
   if (pvVar9 != (void*)0x0) {
      lVar2 = *(long*)( this + 0xe0 );
      puVar8 = *(undefined8**)( this + 0xc0 );
      if (puVar8 < (undefined8*)( lVar2 + 8U )) {
         do {
            pvVar9 = (void*)*puVar8;
            puVar8 = puVar8 + 1;
            operator_delete(pvVar9, 0x200);
         }
 while ( puVar8 < (undefined8*)( lVar2 + 8U ) );
         pvVar9 = *(void**)( this + 0x98 );
      }

      operator_delete(pvVar9, *(long*)( this + 0xa0 ) * 8);
   }

   if (*(Builder**)( this + 0x60 ) != this + 0x70) {
      operator_delete(*(Builder**)( this + 0x60 ), *(long*)( this + 0x70 ) + 1);
   }

   puVar8 = *(undefined8**)( this + 0x18 );
   while (puVar8 != (undefined8*)0x0) {
      puVar5 = (undefined8*)*puVar8;
      if ((undefined8*)puVar8[2] != puVar8 + 4) {
         operator_delete((undefined8*)puVar8[2], puVar8[4] + 1);
      }

      operator_delete(puVar8, 0x38);
      puVar8 = puVar5;
   }
;
   memset(*(void**)( this + 8 ), 0, *(long*)( this + 0x10 ) * 8);
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined8*)( this + 0x18 ) = 0;
   if (*(Builder**)( this + 8 ) == this + 0x38) {
      return;
   }

   operator_delete(*(Builder**)( this + 8 ), *(long*)( this + 0x10 ) << 3);
   return;
}
/* spv::Builder::~Builder() */void spv::Builder::~Builder(Builder *this) {
   ~Builder(this)
   ;;
   operator_delete(this, 0x588);
   return;
}
/* unsigned int& std::vector<unsigned int, std::allocator<unsigned int> >::emplace_back<unsigned
   int>(unsigned int&&) [clone .isra.0] */uint * __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::emplace_back<unsigned_int>
          (vector<unsigned_int,std::allocator<unsigned_int>> *this,uint *param_1){
   uint uVar1;
   uint *puVar2;
   uint *extraout_RAX;
   puVar2 = *(uint**)( this + 8 );
   if (puVar2 != *(uint**)( this + 0x10 )) {
      uVar1 = *param_1;
      *puVar2 = uVar1;
      *(uint**)( this + 8 ) = puVar2 + 1;
      return (uint*)(ulong)uVar1;
   }

   _M_realloc_insert<unsigned_int>();
   return extraout_RAX;
}
/* spv::Builder::dumpInstructions(std::vector<unsigned int, std::allocator<unsigned int> >&,
   std::vector<std::unique_ptr<spv::Instruction, std::default_delete<spv::Instruction> >,
   std::allocator<std::unique_ptr<spv::Instruction, std::default_delete<spv::Instruction> > > >
   const&) const */void spv::Builder::dumpInstructions(Builder *this, vector *param_1, vector *param_2) {
   undefined4 *puVar1;
   undefined4 *puVar2;
   int *piVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   uint *puVar7;
   long lVar8;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   lVar4 = *(long*)param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0 < (int)( *(long*)( param_2 + 8 ) - lVar4 >> 3 )) {
      lVar8 = 0;
      do {
         lVar4 = *(long*)( lVar4 + lVar8 * 8 );
         puVar7 = *(uint**)( param_1 + 8 );
         local_44 = ( ( ( 3 - ( uint )(*(int*)( lVar4 + 0xc ) == 0) ) - ( uint )(*(int*)( lVar4 + 8 ) == 0) ) + (int)( *(long*)( lVar4 + 0x20 ) - *(long*)( lVar4 + 0x18 ) >> 2 ) ) * 0x10000 | *(uint*)( lVar4 + 0x10 );
         if (puVar7 == *(uint**)( param_1 + 0x10 )) {
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>((vector<unsigned_int,std::allocator<unsigned_int>>*)param_1, puVar7, &local_44);
            puVar7 = *(uint**)( param_1 + 8 );
         }
 else {
            *puVar7 = local_44;
            puVar7 = puVar7 + 1;
            *(uint**)( param_1 + 8 ) = puVar7;
         }

         if (*(uint*)( lVar4 + 0xc ) != 0) {
            if (*(uint**)( param_1 + 0x10 ) == puVar7) {
               std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)param_1, puVar7, lVar4 + 0xc);
            }
 else {
               *puVar7 = *(uint*)( lVar4 + 0xc );
               *(uint**)( param_1 + 8 ) = puVar7 + 1;
            }

         }

         if (*(int*)( lVar4 + 8 ) != 0) {
            piVar3 = *(int**)( param_1 + 8 );
            if (piVar3 == *(int**)( param_1 + 0x10 )) {
               std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)param_1, piVar3, lVar4 + 8);
            }
 else {
               *piVar3 = *(int*)( lVar4 + 8 );
               *(int**)( param_1 + 8 ) = piVar3 + 1;
            }

         }

         lVar5 = *(long*)( lVar4 + 0x18 );
         lVar6 = 0;
         if (0 < (int)( *(long*)( lVar4 + 0x20 ) - lVar5 >> 2 )) {
            do {
               puVar2 = *(undefined4**)( param_1 + 8 );
               puVar1 = (undefined4*)( lVar5 + lVar6 * 4 );
               if (puVar2 == *(undefined4**)( param_1 + 0x10 )) {
                  std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)param_1, puVar2, puVar1);
                  lVar5 = *(long*)( lVar4 + 0x18 );
               }
 else {
                  *puVar2 = *puVar1;
                  *(undefined4**)( param_1 + 8 ) = puVar2 + 1;
               }

               lVar6 = lVar6 + 1;
            }
 while ( (int)lVar6 < (int)( *(long*)( lVar4 + 0x20 ) - lVar5 >> 2 ) );
         }

         lVar4 = *(long*)param_2;
         lVar8 = lVar8 + 1;
      }
 while ( (int)lVar8 < (int)( *(long*)( param_2 + 8 ) - lVar4 >> 3 ) );
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* spv::Builder::dumpModuleProcesses(std::vector<unsigned int, std::allocator<unsigned int> >&)
   const */void spv::Builder::dumpModuleProcesses(Builder *this, vector *param_1) {
   char cVar1;
   undefined4 uVar2;
   undefined4 *puVar3;
   int *piVar4;
   undefined8 uVar5;
   ulong *puVar6;
   byte bVar7;
   int iVar8;
   long lVar9;
   long lVar10;
   uint uVar11;
   uint *puVar12;
   int iVar13;
   char *pcVar14;
   undefined4 *puVar15;
   undefined4 *puVar16;
   long in_FS_OFFSET;
   uint local_bc;
   ulong *local_b8;
   int local_b0;
   undefined4 uStack_ac;
   undefined **local_a8;
   undefined8 local_a0;
   uint local_98;
   undefined1 local_90[16];
   undefined1 local_80[16];
   undefined4 local_70;
   ulong *local_68;
   int local_60;
   undefined1 local_58[16];
   long local_40;
   lVar9 = *(long*)( this + 0x138 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0 < (int)( *(long*)( this + 0x140 ) - lVar9 >> 3 )) {
      lVar10 = 0;
      do {
         iVar8 = 0;
         uVar11 = 0;
         local_a8 = &PTR__Instruction_0011c5f0;
         pcVar14 = *(char**)( lVar9 + lVar10 * 8 );
         local_a0 = 0;
         local_98 = 0x14a;
         local_70 = 0;
         local_68 = (ulong*)0x0;
         local_60 = 0;
         local_90 = (undefined1[16])0x0;
         local_80 = (undefined1[16])0x0;
         local_58 = (undefined1[16])0x0;
         do {
            while (true) {
               cVar1 = *pcVar14;
               pcVar14 = pcVar14 + 1;
               bVar7 = (byte)iVar8;
               iVar8 = iVar8 + 8;
               uVar11 = uVar11 | (int)cVar1 << ( bVar7 & 0x1f );
               if (iVar8 != 0x20) break;
               local_bc = uVar11;
               if (local_90._8_8_ == local_80._0_8_) {
                  std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)local_90, local_90._8_8_, &local_bc);
               }
 else {
                  *(uint*)local_90._8_8_ = uVar11;
                  local_90._8_8_ = (uint*)( local_90._8_8_ + 4 );
               }

               iVar8 = local_60;
               puVar6 = local_68;
               if (local_68 == (ulong*)local_58._0_8_) {
                  local_b8 = local_68;
                  local_b0 = local_60;
                  std::vector<bool,std::allocator<bool>>::_M_insert_aux(local_80 + 8, local_68, CONCAT44(uStack_ac, local_60));
               }
 else {
                  if (local_60 == 0x3f) {
                     local_68 = local_68 + 1;
                     local_60 = 0;
                  }
 else {
                     local_60 = local_60 + 1;
                  }

                  *puVar6 = *puVar6 & ~(1L << ((byte)iVar8 & 0x3f));
               }

               iVar8 = 0;
               uVar11 = 0;
               if (cVar1 == '\0') goto LAB_0010270a;
            }
;
         }
 while ( cVar1 != '\0' );
         LAB_0010270a:if (iVar8 != 0) {
            Instruction::addImmediateOperand((Instruction*)&local_a8, uVar11);
         }

         uVar11 = local_a0._4_4_;
         iVar8 = (int)local_a0;
         uVar5 = local_90._0_8_;
         puVar12 = *(uint**)( param_1 + 8 );
         iVar13 = (int)( (long)( local_90._8_8_ - local_90._0_8_ ) >> 2 );
         local_bc = ( ( ( 3 - ( uint )(local_a0._4_4_ == 0) ) - ( uint )((int)local_a0 == 0) ) + iVar13 ) * 0x10000 | local_98;
         if (puVar12 == *(uint**)( param_1 + 0x10 )) {
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>((vector<unsigned_int,std::allocator<unsigned_int>>*)param_1, puVar12, &local_bc);
            puVar12 = *(uint**)( param_1 + 8 );
         }
 else {
            *puVar12 = local_bc;
            puVar12 = puVar12 + 1;
            *(uint**)( param_1 + 8 ) = puVar12;
         }

         if (uVar11 != 0) {
            if (*(uint**)( param_1 + 0x10 ) == puVar12) {
               std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)param_1, puVar12, (long)&local_a0 + 4);
            }
 else {
               *puVar12 = uVar11;
               *(uint**)( param_1 + 8 ) = puVar12 + 1;
            }

         }

         if (iVar8 != 0) {
            piVar4 = *(int**)( param_1 + 8 );
            if (piVar4 == *(int**)( param_1 + 0x10 )) {
               std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)param_1, piVar4, &local_a0);
            }
 else {
               *piVar4 = iVar8;
               *(int**)( param_1 + 8 ) = piVar4 + 1;
            }

         }

         if (0 < iVar13) {
            puVar15 = (undefined4*)uVar5;
            do {
               while (puVar3 = *(undefined4**)( param_1 + 8 ),puVar3 != *(undefined4**)( param_1 + 0x10 )) {
                  uVar2 = *puVar15;
                  puVar15 = puVar15 + 1;
                  *puVar3 = uVar2;
                  *(undefined4**)( param_1 + 8 ) = puVar3 + 1;
                  if (puVar15 == (undefined4*)( uVar5 + ( ( ulong )(iVar13 - 1) + 1 ) * 4 )) goto LAB_001027d0;
               }
;
               puVar16 = puVar15 + 1;
               std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)param_1, puVar3, puVar15);
               puVar15 = puVar16;
            }
 while ( puVar16 != (undefined4*)( uVar5 + ( ( ulong )(iVar13 - 1) + 1 ) * 4 ) );
         }

         LAB_001027d0:if ((void*)local_80._8_8_ != (void*)0x0) {
            operator_delete((void*)local_80._8_8_, local_58._0_8_ - local_80._8_8_);
         }

         if ((undefined4*)uVar5 != (undefined4*)0x0) {
            operator_delete((void*)uVar5, local_80._0_8_ - uVar5);
         }

         lVar9 = *(long*)( this + 0x138 );
         lVar10 = lVar10 + 1;
      }
 while ( (int)lVar10 < (int)( *(long*)( this + 0x140 ) - lVar9 >> 3 ) );
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Restarted to delay deadcode elimination for space: stack *//* spv::Builder::dumpSourceInstructions(unsigned int, std::__cxx11::string const&,
   std::vector<unsigned int, std::allocator<unsigned int> >&) const [clone .part.0] */void spv::Builder::dumpSourceInstructions(Builder *this, uint param_1, string *param_2, vector *param_3) {
   ulong *puVar1;
   ulong uVar2;
   long lVar3;
   byte bVar4;
   int iVar5;
   ulong uVar6;
   uint uVar7;
   ulong *extraout_RDX;
   ulong uVar8;
   uint uVar9;
   ulong *puVar10;
   long in_FS_OFFSET;
   bool bVar11;
   ulong extraout_XMM0_Qb;
   undefined **local_148;
   undefined8 local_140;
   undefined4 local_138;
   undefined1 local_130[16];
   undefined1 local_120[16];
   undefined4 local_110;
   undefined8 local_108;
   undefined4 local_100;
   undefined1 local_f8[16];
   undefined **local_e8;
   undefined8 local_e0;
   undefined4 local_d8;
   undefined1 local_d0[16];
   undefined1 local_c0[16];
   undefined4 local_b0;
   undefined8 local_a8;
   undefined4 local_a0;
   undefined1 local_98[16];
   ulong *local_88;
   ulong local_80;
   ulong auStack_78[2];
   ulong *local_68;
   undefined8 local_60;
   ulong auStack_58[5];
   auStack_58[3] = *(long*)( in_FS_OFFSET + 0x28 );
   local_130 = (undefined1[16])0x0;
   local_120 = (undefined1[16])0x0;
   local_f8 = (undefined1[16])0x0;
   local_140 = 0;
   local_138 = 3;
   local_110 = 0;
   local_148 = &PTR__Instruction_0011c5f0;
   local_108 = 0;
   local_100 = 0;
   Instruction::reserveOperands((Instruction*)&local_148, 3);
   Instruction::addImmediateOperand((Instruction*)&local_148, *(uint*)( this + 0x44 ));
   Instruction::addImmediateOperand((Instruction*)&local_148, *(uint*)( this + 0x48 ));
   if (param_1 != 0) {
      Instruction::addIdOperand((Instruction*)&local_148, param_1);
      uVar6 = *(ulong*)( param_2 + 8 );
      if (uVar6 != 0) {
         uVar8 = 0;
         local_80 = 0;
         auStack_78[0] = auStack_78[0] & 0xffffffffffffff00;
         local_88 = auStack_78;
         if (0 < (int)uVar6) {
            LAB_00102a60:uVar6 = uVar6 - uVar8;
            if (0x3ffeb < uVar6) {
               uVar6 = 0x3ffeb;
            }

            local_68 = auStack_58;
            std::__cxx11::string::_M_construct<char_const*>(&local_68, *(long*)param_2 + uVar8, *(long*)param_2 + uVar8 + uVar6);
            uVar2 = local_60;
            uVar6 = auStack_78[0];
            puVar10 = local_88;
            puVar1 = auStack_58;
            if (local_68 == auStack_58) {
               if (local_60 != 0) {
                  if (local_60 == 1) {
                     *(undefined1*)local_88 = (undefined1)auStack_58[0];
                  }
 else {
                     uVar9 = (uint)local_60;
                     uVar6 = local_60 & 0xffffffff;
                     if (uVar9 < 8) {
                        if (( local_60 & 4 ) == 0) {
                           if (( uVar9 != 0 ) && ( *(undefined1*)local_88 = (undefined1)auStack_58[0](uVar2 & 2) != 0 )) {
                              *(undefined2*)( (long)local_88 + ( uVar6 - 2 ) ) = *(undefined2*)( (long)auStack_58 + ( uVar6 - 2 ) );
                           }

                        }
 else {
                           *(undefined4*)local_88 = (undefined4)auStack_58[0];
                           *(undefined4*)( (long)local_88 + ( uVar6 - 4 ) ) = *(undefined4*)( (long)auStack_58 + ( uVar6 - 4 ) );
                        }

                     }
 else {
                        *local_88 = auStack_58[0];
                        uVar2 = uVar2 & 0xffffffff;
                        *(undefined8*)( (long)local_88 + ( uVar2 - 8 ) ) = *(undefined8*)( (long)auStack_58 + ( uVar2 - 8 ) );
                        lVar3 = (long)local_88 - ( ( ulong )(local_88 + 1) & 0xfffffffffffffff8 );
                        uVar9 = (int)lVar3 + uVar9 & 0xfffffff8;
                        if (7 < uVar9) {
                           uVar6 = 0;
                           do {
                              uVar7 = (int)uVar6 + 8;
                              *(undefined8*)( ( ( ulong )(local_88 + 1) & 0xfffffffffffffff8 ) + uVar6 ) = *(undefined8*)( (long)auStack_58 + ( uVar6 - lVar3 ) );
                              uVar6 = (ulong)uVar7;
                           }
 while ( uVar7 < uVar9 );
                        }

                     }

                  }

               }

               *(undefined1*)( (long)local_88 + local_60 ) = 0;
               local_80 = local_60;
               puVar1 = local_68;
            }
 else {
               bVar11 = local_88 != auStack_78;
               local_88 = local_68;
               local_80 = local_60;
               auStack_78[0] = auStack_58[0];
               if (bVar11) {
                  if (puVar10 != (ulong*)0x0) {
                     local_68 = puVar10;
                     auStack_58[0] = uVar6;
                     puVar1 = local_68;
                  }

               }

            }

            LAB_00102aef:local_68 = puVar1;
            local_60 = 0;
            *(undefined1*)local_68 = 0;
            if (local_68 != auStack_58) {
               operator_delete(local_68, auStack_58[0] + 1);
            }

            if (uVar8 == 0) {
               iVar5 = 0;
               uVar9 = 0;
               puVar10 = local_88;
               do {
                  uVar6 = *puVar10;
                  puVar10 = (ulong*)( (long)puVar10 + 1 );
                  bVar4 = (byte)iVar5;
                  iVar5 = iVar5 + 8;
                  uVar9 = uVar9 | (int)(char)uVar6 << ( bVar4 & 0x1f );
                  if (iVar5 == 0x20) {
                     Instruction::addImmediateOperand((Instruction*)&local_148, uVar9);
                     iVar5 = 0;
                     uVar9 = 0;
                  }

               }
 while ( (char)uVar6 != '\0' );
               if (iVar5 != 0) {
                  Instruction::addImmediateOperand((Instruction*)&local_148, uVar9);
               }

               Instruction::dump((Instruction*)&local_148, param_3);
               uVar6 = *(ulong*)( param_2 + 8 );
               if ((int)uVar6 < 0x3ffec) goto LAB_00102de8;
               uVar8 = 0x3ffeb;
            }
 else {
               local_e8 = &PTR__Instruction_0011c5f0;
               local_d0 = (undefined1[16])0x0;
               local_c0 = (undefined1[16])0x0;
               local_98 = (undefined1[16])0x0;
               local_e0 = 0;
               local_d8 = 2;
               local_b0 = 0;
               local_a8 = 0;
               local_a0 = 0;
               Instruction::addStringOperand((Instruction*)&local_e8, (char*)local_88);
               Instruction::dump((Instruction*)&local_e8, param_3);
               if ((void*)local_c0._8_8_ != (void*)0x0) {
                  operator_delete((void*)local_c0._8_8_, local_98._0_8_ - local_c0._8_8_);
               }

               if ((void*)local_d0._0_8_ != (void*)0x0) {
                  operator_delete((void*)local_d0._0_8_, local_c0._0_8_ - local_d0._0_8_);
               }

               uVar6 = *(ulong*)( param_2 + 8 );
               iVar5 = (int)uVar8;
               uVar8 = uVar8 + 0x3ffeb;
               if ((int)uVar6 - ( iVar5 + 0x3ffeb ) < 1) goto LAB_00102de8;
               if (uVar6 < uVar8) goto code_r0x00102cde;
            }

            goto LAB_00102a60;
         }

         LAB_00102de8:std::__cxx11::string::_M_dispose();
         goto LAB_00102b9b;
      }

   }

   Instruction::dump((Instruction*)&local_148, param_3);
   LAB_00102b9b:if ((void*)local_120._8_8_ != (void*)0x0) {
      operator_delete((void*)local_120._8_8_, local_f8._0_8_ - local_120._8_8_);
   }

   if ((void*)local_130._0_8_ == (void*)0x0) {
      if (auStack_58[3] == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (auStack_58[3] == *(long*)( in_FS_OFFSET + 0x28 )) {
      operator_delete((void*)local_130._0_8_, local_120._0_8_ - local_130._0_8_);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   code_r0x00102cde:local_80 = std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::substr", uVar8);
   local_88 = extraout_RDX;
   auStack_78[0] = extraout_XMM0_Qb;
   puVar1 = auStack_58;
   goto LAB_00102aef;
}
/* spv::Builder::dumpSourceInstructions(unsigned int, std::__cxx11::string const&,
   std::vector<unsigned int, std::allocator<unsigned int> >&) const */void spv::Builder::dumpSourceInstructions(Builder *this, uint param_1, string *param_2, vector *param_3) {
   if (*(int*)( this + 0x44 ) == 0) {
      return;
   }

   dumpSourceInstructions(this, param_1, param_2, param_3);
   return;
}
/* spv::Builder::dumpSourceInstructions(std::vector<unsigned int, std::allocator<unsigned int> >&)
   const [clone .part.0] */void spv::Builder::dumpSourceInstructions(Builder *this, vector *param_1) {
   _Rb_tree_node_base *p_Var1;
   if (*(int*)( this + 0x44 ) != 0) {
      dumpSourceInstructions(this, *(uint*)( this + 0x8c ), (string*)( this + 0x60 ), param_1);
   }

   p_Var1 = *(_Rb_tree_node_base**)( this + 0x500 );
   do {
      if (p_Var1 == (_Rb_tree_node_base*)( this + 0x4f0 )) {
         return;
      }

      while (*(int*)( this + 0x44 ) == 0) {
         p_Var1 = (_Rb_tree_node_base*)std::_Rb_tree_increment(p_Var1);
         if (p_Var1 == (_Rb_tree_node_base*)( this + 0x4f0 )) {
            return;
         }

      }
;
      dumpSourceInstructions(this, *(uint*)( p_Var1 + 0x20 ), *(string**)( p_Var1 + 0x28 ), param_1);
      p_Var1 = (_Rb_tree_node_base*)std::_Rb_tree_increment(p_Var1);
   }
 while ( true );
}
/* spv::Builder::dumpSourceInstructions(std::vector<unsigned int, std::allocator<unsigned int> >&)
   const */void spv::Builder::dumpSourceInstructions(Builder *this, vector *param_1) {
   if (this[0xea] == (Builder)0x0) {
      dumpSourceInstructions(this, param_1);
      return;
   }

   return;
}
/* spv::Builder::dump(std::vector<unsigned int, std::allocator<unsigned int> >&) const */void spv::Builder::dump(Builder *this, vector *param_1) {
   char cVar1;
   undefined4 *puVar2;
   undefined4 *puVar3;
   int *piVar4;
   ulong *puVar5;
   _Rb_tree_node_base *p_Var6;
   int iVar7;
   int iVar8;
   long lVar9;
   long lVar10;
   uint uVar11;
   uint *puVar12;
   long lVar13;
   long lVar14;
   long lVar15;
   char *pcVar16;
   long in_FS_OFFSET;
   long local_180;
   uint local_14c;
   ulong *local_148;
   int local_140;
   undefined4 uStack_13c;
   ulong *local_138;
   int local_130;
   undefined4 uStack_12c;
   undefined **local_128;
   undefined8 local_120;
   undefined4 local_118;
   undefined1 local_110[16];
   undefined1 local_100[16];
   undefined4 local_f0;
   undefined8 local_e8;
   undefined4 local_e0;
   undefined1 local_d8[16];
   undefined8 local_c8;
   undefined8 local_c0;
   undefined4 local_b8;
   undefined1 local_b0[16];
   undefined1 local_a0[16];
   undefined4 local_90;
   ulong *local_88;
   int local_80;
   undefined1 local_78[16];
   vector *local_68;
   undefined8 local_60;
   code *local_58;
   code *pcStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back((vector<unsigned_int,std::allocator<unsigned_int>>*)param_1, &MagicNumber);
   std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back((vector<unsigned_int,std::allocator<unsigned_int>>*)param_1, (uint*)( this + 0x40 ));
   local_c8._0_4_ = *(int*)( this + 0x188 );
   std::vector<unsigned_int,std::allocator<unsigned_int>>::emplace_back<unsigned_int>((vector<unsigned_int,std::allocator<unsigned_int>>*)param_1, (uint*)&local_c8);
   local_c8._0_4_ = *(int*)( this + 0x1d0 ) + 1;
   std::vector<unsigned_int,std::allocator<unsigned_int>>::emplace_back<unsigned_int>((vector<unsigned_int,std::allocator<unsigned_int>>*)param_1, (uint*)&local_c8);
   local_c8 = (undefined**)( (ulong)local_c8._4_4_ << 0x20 );
   std::vector<unsigned_int,std::allocator<unsigned_int>>::emplace_back<unsigned_int>((vector<unsigned_int,std::allocator<unsigned_int>>*)param_1, (uint*)&local_c8);
   for (p_Var6 = *(_Rb_tree_node_base**)( this + 0x170 ); p_Var6 != (_Rb_tree_node_base*)( this + 0x160 ); p_Var6 = (_Rb_tree_node_base*)std::_Rb_tree_increment(p_Var6)) {
      local_c8 = &PTR__Instruction_0011c5f0;
      local_b0 = (undefined1[16])0x0;
      local_a0 = (undefined1[16])0x0;
      local_78 = (undefined1[16])0x0;
      local_c0 = 0;
      local_b8 = 0x11;
      local_90 = 0;
      local_88 = (ulong*)0x0;
      local_80 = 0;
      Instruction::addImmediateOperand((Instruction*)&local_c8, *(uint*)( p_Var6 + 0x20 ));
      Instruction::dump((Instruction*)&local_c8, param_1);
      if ((void*)local_a0._8_8_ != (void*)0x0) {
         operator_delete((void*)local_a0._8_8_, local_78._0_8_ - local_a0._8_8_);
      }

      if ((void*)local_b0._0_8_ != (void*)0x0) {
         operator_delete((void*)local_b0._0_8_, local_a0._0_8_ - local_b0._0_8_);
      }

   }

   for (p_Var6 = *(_Rb_tree_node_base**)( this + 0x108 ); p_Var6 != (_Rb_tree_node_base*)( this + 0xf8 ); p_Var6 = (_Rb_tree_node_base*)std::_Rb_tree_increment(p_Var6)) {
      local_c8 = &PTR__Instruction_0011c5f0;
      uVar11 = 0;
      local_b8 = 10;
      pcVar16 = *(char**)( p_Var6 + 0x20 );
      local_c0 = 0;
      local_90 = 0;
      local_88 = (ulong*)0x0;
      local_80 = 0;
      local_b0 = (undefined1[16])0x0;
      local_a0 = (undefined1[16])0x0;
      local_78 = (undefined1[16])0x0;
      iVar7 = 0;
      do {
         while (true) {
            cVar1 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            iVar8 = iVar7 + 8;
            uVar11 = uVar11 | (int)cVar1 << ( (byte)iVar7 & 0x1f );
            if (iVar8 != 0x20) break;
            local_128 = (undefined**)CONCAT44(local_128._4_4_, uVar11);
            if (local_b0._8_8_ == local_a0._0_8_) {
               std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)local_b0, local_b0._8_8_, (Instruction*)&local_128);
            }
 else {
               *(uint*)local_b0._8_8_ = uVar11;
               local_b0._8_8_ = (uint*)( local_b0._8_8_ + 4 );
            }

            iVar7 = local_80;
            puVar5 = local_88;
            if (local_88 == (ulong*)local_78._0_8_) {
               local_148 = local_88;
               local_140 = local_80;
               std::vector<bool,std::allocator<bool>>::_M_insert_aux(local_a0 + 8, local_88, CONCAT44(uStack_13c, local_80));
            }
 else {
               if (local_80 == 0x3f) {
                  local_80 = 0;
                  local_88 = local_88 + 1;
               }
 else {
                  local_80 = local_80 + 1;
               }

               *puVar5 = *puVar5 & ~(1L << ((byte)iVar7 & 0x3f));
            }

            iVar8 = 0;
            uVar11 = 0;
            iVar7 = 0;
            if (cVar1 == '\0') goto LAB_00103253;
         }
;
         iVar7 = iVar8;
      }
 while ( cVar1 != '\0' );
      LAB_00103253:if (iVar8 != 0) {
         Instruction::addImmediateOperand((Instruction*)&local_c8, uVar11);
      }

      Instruction::dump((Instruction*)&local_c8, param_1);
      if ((void*)local_a0._8_8_ != (void*)0x0) {
         operator_delete((void*)local_a0._8_8_, local_78._0_8_ - local_a0._8_8_);
      }

      if ((void*)local_b0._0_8_ != (void*)0x0) {
         operator_delete((void*)local_b0._0_8_, local_a0._0_8_ - local_b0._0_8_);
      }

   }

   dumpInstructions(this, param_1, (vector*)( this + 600 ));
   local_110 = (undefined1[16])0x0;
   local_100 = (undefined1[16])0x0;
   local_d8 = (undefined1[16])0x0;
   local_128 = &PTR__Instruction_0011c5f0;
   local_120 = 0;
   local_118 = 0xe;
   local_f0 = 0;
   local_e8 = 0;
   local_e0 = 0;
   Instruction::addImmediateOperand((Instruction*)&local_128, *(uint*)( this + 0x150 ));
   Instruction::addImmediateOperand((Instruction*)&local_128, *(uint*)( this + 0x154 ));
   Instruction::dump((Instruction*)&local_128, param_1);
   dumpInstructions(this, param_1, (vector*)( this + 0x270 ));
   dumpInstructions(this, param_1, (vector*)( this + 0x288 ));
   dumpInstructions(this, param_1, (vector*)( this + 0x240 ));
   if (this[0xea] == (Builder)0x0) {
      dumpSourceInstructions(this, param_1);
   }

   lVar9 = *(long*)( this + 0x120 );
   lVar13 = 0;
   if (0 < (int)( *(long*)( this + 0x128 ) - lVar9 >> 3 )) {
      do {
         local_c8 = &PTR__Instruction_0011c5f0;
         uVar11 = 0;
         local_c0 = 0;
         pcVar16 = *(char**)( lVar9 + lVar13 * 8 );
         local_b8 = 4;
         local_90 = 0;
         local_88 = (ulong*)0x0;
         local_80 = 0;
         local_b0 = (undefined1[16])0x0;
         local_a0 = (undefined1[16])0x0;
         local_78 = (undefined1[16])0x0;
         iVar7 = 0;
         do {
            while (true) {
               cVar1 = *pcVar16;
               pcVar16 = pcVar16 + 1;
               iVar8 = iVar7 + 8;
               uVar11 = uVar11 | (int)cVar1 << ( (byte)iVar7 & 0x1f );
               if (iVar8 != 0x20) break;
               local_14c = uVar11;
               if (local_b0._8_8_ == local_a0._0_8_) {
                  std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)local_b0, local_b0._8_8_, &local_14c);
               }
 else {
                  *(uint*)local_b0._8_8_ = uVar11;
                  local_b0._8_8_ = (uint*)( local_b0._8_8_ + 4 );
               }

               iVar7 = local_80;
               puVar5 = local_88;
               if (local_88 == (ulong*)local_78._0_8_) {
                  local_138 = local_88;
                  local_130 = local_80;
                  std::vector<bool,std::allocator<bool>>::_M_insert_aux(local_a0 + 8, local_88, CONCAT44(uStack_12c, local_80));
               }
 else {
                  if (local_80 == 0x3f) {
                     local_80 = 0;
                     local_88 = local_88 + 1;
                  }
 else {
                     local_80 = local_80 + 1;
                  }

                  *puVar5 = *puVar5 & ~(1L << ((byte)iVar7 & 0x3f));
               }

               iVar8 = 0;
               uVar11 = 0;
               iVar7 = 0;
               if (cVar1 == '\0') goto LAB_001034c3;
            }
;
            iVar7 = iVar8;
         }
 while ( cVar1 != '\0' );
         LAB_001034c3:if (iVar8 != 0) {
            Instruction::addImmediateOperand((Instruction*)&local_c8, uVar11);
         }

         Instruction::dump((Instruction*)&local_c8, param_1);
         if ((void*)local_a0._8_8_ != (void*)0x0) {
            operator_delete((void*)local_a0._8_8_, local_78._0_8_ - local_a0._8_8_);
         }

         if ((void*)local_b0._0_8_ != (void*)0x0) {
            operator_delete((void*)local_b0._0_8_, local_a0._0_8_ - local_b0._0_8_);
         }

         lVar9 = *(long*)( this + 0x120 );
         lVar13 = lVar13 + 1;
      }
 while ( (int)lVar13 < (int)( *(long*)( this + 0x128 ) - lVar9 >> 3 ) );
   }

   dumpInstructions(this, param_1, (vector*)( this + 0x2a0 ));
   dumpModuleProcesses(this, param_1);
   for (int i = 0; i < 3; i++) {
      dumpInstructions(this, param_1, (vector*)( this + ( 24*i + 696 ) ));
   }

   lVar9 = *(long*)( this + 0x198 );
   local_180 = 0;
   if (0 < (int)( *(long*)( this + 0x1a0 ) - lVar9 >> 3 )) {
      do {
         lVar9 = *(long*)( lVar9 + local_180 * 8 );
         if (*(Instruction**)( lVar9 + 0x10 ) != (Instruction*)0x0) {
            Instruction::dump(*(Instruction**)( lVar9 + 0x10 ), param_1);
         }

         lVar14 = 0;
         Instruction::dump((Instruction*)( lVar9 + 0x18 ), param_1);
         lVar13 = *(long*)( lVar9 + 0x78 );
         if (0 < (int)( *(long*)( lVar9 + 0x80 ) - lVar13 >> 3 )) {
            do {
               lVar13 = *(long*)( lVar13 + lVar14 * 8 );
               puVar12 = *(uint**)( param_1 + 8 );
               uVar11 = ( ( ( 3 - ( uint )(*(int*)( lVar13 + 0xc ) == 0) ) - ( uint )(*(int*)( lVar13 + 8 ) == 0) ) + (int)( *(long*)( lVar13 + 0x20 ) - *(long*)( lVar13 + 0x18 ) >> 2 ) ) * 0x10000 | *(uint*)( lVar13 + 0x10 );
               local_c8 = (undefined**)CONCAT44(local_c8._4_4_, uVar11);
               if (puVar12 == *(uint**)( param_1 + 0x10 )) {
                  std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>((vector<unsigned_int,std::allocator<unsigned_int>>*)param_1, puVar12, (Instruction*)&local_c8);
                  puVar12 = *(uint**)( param_1 + 8 );
               }
 else {
                  *puVar12 = uVar11;
                  puVar12 = puVar12 + 1;
                  *(uint**)( param_1 + 8 ) = puVar12;
               }

               if (*(uint*)( lVar13 + 0xc ) != 0) {
                  if (*(uint**)( param_1 + 0x10 ) == puVar12) {
                     std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)param_1, puVar12, lVar13 + 0xc);
                  }
 else {
                     *puVar12 = *(uint*)( lVar13 + 0xc );
                     *(uint**)( param_1 + 8 ) = puVar12 + 1;
                  }

               }

               if (*(int*)( lVar13 + 8 ) != 0) {
                  piVar4 = *(int**)( param_1 + 8 );
                  if (piVar4 == *(int**)( param_1 + 0x10 )) {
                     std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)param_1, piVar4, lVar13 + 8);
                  }
 else {
                     *piVar4 = *(int*)( lVar13 + 8 );
                     *(int**)( param_1 + 8 ) = piVar4 + 1;
                  }

               }

               lVar10 = *(long*)( lVar13 + 0x18 );
               lVar15 = 0;
               if (0 < (int)( *(long*)( lVar13 + 0x20 ) - lVar10 >> 2 )) {
                  do {
                     puVar2 = *(undefined4**)( param_1 + 8 );
                     puVar3 = (undefined4*)( lVar10 + lVar15 * 4 );
                     if (puVar2 == *(undefined4**)( param_1 + 0x10 )) {
                        std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)param_1, puVar2, puVar3);
                        lVar10 = *(long*)( lVar13 + 0x18 );
                     }
 else {
                        *puVar2 = *puVar3;
                        *(undefined4**)( param_1 + 8 ) = puVar2 + 1;
                     }

                     lVar15 = lVar15 + 1;
                  }
 while ( (int)lVar15 < (int)( *(long*)( lVar13 + 0x20 ) - lVar10 >> 2 ) );
               }

               lVar13 = *(long*)( lVar9 + 0x78 );
               lVar14 = lVar14 + 1;
            }
 while ( (int)lVar14 < (int)( *(long*)( lVar9 + 0x80 ) - lVar13 >> 3 ) );
         }

         local_60 = 0;
         local_58 = std::_Function_handler<void(spv::Block *, spv::ReachReason, spv::Block *),spv::Function::dump(std::vector<unsigned_int,std::allocator<unsigned_int>>&)const::{lambda(spv::Block_const *, spv::ReachReason, spv::Block *)#1}>::_M_manager;
         pcStack_50 = std::_Function_handler<void(spv::Block *, spv::ReachReason, spv::Block *),spv::Function::dump(std::vector<unsigned_int,std::allocator<unsigned_int>>&)const::{lambda(spv::Block_const *, spv::ReachReason, spv::Block *)#1}>::_M_invoke;
         local_68 = param_1;
         spv::inReadableOrder(**(undefined8**)( lVar9 + 0x90 ), &local_68);
         if (local_58 != (code*)0x0) {
            ( *local_58 )(&local_68, &local_68, 3);
         }

         local_c8 = (undefined**)CONCAT44(local_c8._4_4_, 0x10038);
         puVar3 = *(undefined4**)( param_1 + 8 );
         if (puVar3 == *(undefined4**)( param_1 + 0x10 )) {
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>((vector<unsigned_int,std::allocator<unsigned_int>>*)param_1, puVar3, (Instruction*)&local_c8);
         }
 else {
            *puVar3 = 0x10038;
            *(undefined4**)( param_1 + 8 ) = puVar3 + 1;
         }

         lVar9 = *(long*)( this + 0x198 );
         local_180 = local_180 + 1;
      }
 while ( (int)local_180 < (int)( *(long*)( this + 0x1a0 ) - lVar9 >> 3 ) );
   }

   if ((void*)local_100._8_8_ != (void*)0x0) {
      operator_delete((void*)local_100._8_8_, local_d8._0_8_ - local_100._8_8_);
   }

   if ((void*)local_110._0_8_ == (void*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      operator_delete((void*)local_110._0_8_, local_100._0_8_ - local_110._0_8_);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::accessChainPushSwizzle(std::vector<unsigned int, std::allocator<unsigned int> >&,
   unsigned int, spv::Builder::AccessChain::CoherentFlags, unsigned int) */void spv::Builder::accessChainPushSwizzle(Builder *this, Builder *param_1, undefined4 param_2, ushort param_4, uint param_5) {
   void *pvVar1;
   undefined4 *__dest;
   undefined4 *puVar2;
   long lVar3;
   size_t __n;
   ulong uVar4;
   ulong uVar5;
   undefined4 *puVar6;
   ulong unaff_R12;
   undefined4 *unaff_R13;
   undefined1 uVar7;
   *(uint*)( this + 0x234 ) = *(uint*)( this + 0x234 ) | param_5;
   *(ushort*)( this + 0x238 ) = ( param_4 | *(ushort*)( this + 0x238 ) ) & 0x3ff | *(ushort*)( this + 0x238 ) & 0xfc00;
   if (*(int*)( this + 0x22c ) == 0) {
      *(undefined4*)( this + 0x22c ) = param_2;
   }

   puVar2 = *(undefined4**)( this + 0x218 );
   puVar6 = *(undefined4**)( this + 0x210 );
   if (puVar2 == puVar6) {
      if (param_1 == this + 0x210) goto LAB_00103a63;
      unaff_R13 = *(undefined4**)param_1;
      unaff_R12 = *(long*)( param_1 + 8 ) - (long)unaff_R13;
      if (( ulong )(*(long*)( this + 0x220 ) - (long)puVar2) < unaff_R12) {
         uVar5 = unaff_R12;
         if (0x7ffffffffffffffc < unaff_R12) goto LAB_00103ba8;
         puVar2 = (undefined4*)operator_new(unaff_R12);
         if ((long)unaff_R12 < 5) {
            *puVar2 = *unaff_R13;
         }
 else {
            memmove(puVar2, unaff_R13, unaff_R12);
         }

         pvVar1 = *(void**)( this + 0x210 );
         if (pvVar1 != (void*)0x0) {
            operator_delete(pvVar1, *(long*)( this + 0x220 ) - (long)pvVar1);
         }

         puVar6 = (undefined4*)( (long)puVar2 + unaff_R12 );
         *(undefined4**)( this + 0x210 ) = puVar2;
         *(undefined4**)( this + 0x220 ) = puVar6;
      }
 else if (unaff_R12 != 0) {
         uVar7 = unaff_R12 == 4;
         if ((long)unaff_R12 < 5) goto LAB_00103bad;
         memmove(puVar6, unaff_R13, unaff_R12);
         puVar6 = (undefined4*)( *(long*)( this + 0x210 ) + unaff_R12 );
      }

   }
 else {
      uVar5 = (long)puVar2 - (long)puVar6;
      if (uVar5 < 0x7ffffffffffffffd) {
         __dest = (undefined4*)operator_new(uVar5);
         puVar6 = *(undefined4**)( this + 0x218 );
         puVar2 = *(undefined4**)( this + 0x210 );
         __n = (long)puVar6 - (long)puVar2;
         if ((long)__n < 5) {
            if (__n == 4) {
               *__dest = *puVar2;
            }

         }
 else {
            memmove(__dest, puVar2, __n);
         }

         if (puVar6 != puVar2) {
            *(undefined4**)( this + 0x218 ) = puVar2;
         }

         lVar3 = *(long*)param_1;
         uVar4 = 0;
         if (lVar3 != *(long*)( param_1 + 8 )) {
            do {
               puVar6 = *(undefined4**)( this + 0x218 );
               if (puVar6 == *(undefined4**)( this + 0x220 )) {
                  std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this + 0x210 ));
                  lVar3 = *(long*)param_1;
               }
 else {
                  *puVar6 = __dest[*(uint*)( lVar3 + uVar4 * 4 )];
                  *(undefined4**)( this + 0x218 ) = puVar6 + 1;
               }

               uVar4 = ( ulong )((int)uVar4 + 1);
            }
 while ( uVar4 < ( ulong )(*(long*)( param_1 + 8 ) - lVar3 >> 2) );
         }

         operator_delete(__dest, uVar5);
         goto LAB_00103a63;
      }

      LAB_00103ba8:uVar7 = uVar5 == 0x7ffffffffffffffc;
      std::__throw_bad_array_new_length();
      LAB_00103bad:if ((bool)uVar7) {
         *puVar6 = *unaff_R13;
      }

      puVar6 = (undefined4*)( (long)puVar6 + unaff_R12 );
   }

   *(undefined4**)( this + 0x218 ) = puVar6;
   LAB_00103a63:simplifyAccessChainSwizzle(this);
   return;
}
/* std::unique_ptr<spv::Instruction, std::default_delete<spv::Instruction> >&
   std::vector<std::unique_ptr<spv::Instruction, std::default_delete<spv::Instruction> >,
   std::allocator<std::unique_ptr<spv::Instruction, std::default_delete<spv::Instruction> > >
   >::emplace_back<std::unique_ptr<spv::Instruction, std::default_delete<spv::Instruction> >
   >(std::unique_ptr<spv::Instruction, std::default_delete<spv::Instruction> >&&) [clone .isra.0] */unique_ptr * __thiscallstd::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>(vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>> * this, unique_ptr * param_1) * puVar1 ;unique_ptr *puVar2unique_ptr *extraout_RAXpuVar1 = *(undefined8**)( this + 8 );if (puVar1 != *(undefined8**)( this + 0x10 )) {
   puVar2 = *(unique_ptr**)param_1;
   *puVar1 = puVar2;
   *(undefined8*)param_1 = 0;
   *(undefined8**)( this + 8 ) = puVar1 + 1;
   return puVar2;
}
_M_realloc_insert<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>();return extraout_RAX;}/* spv::Builder::createSpecConstantOp(spv::Op, unsigned int, std::vector<unsigned int,
   std::allocator<unsigned int> > const&, std::vector<unsigned int, std::allocator<unsigned int> >
   const&) */undefined4 spv::Builder::createSpecConstantOp(Builder *this, uint param_2, undefined4 param_3, long *param_4, long *param_5) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   undefined4 *puVar6;
   ulong *puVar7;
   byte bVar8;
   char cVar9;
   Instruction *this_00;
   undefined4 *puVar10;
   long in_FS_OFFSET;
   Instruction *local_70;
   ulong *local_68;
   undefined4 local_60;
   undefined4 uStack_5c;
   ulong *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   lVar2 = param_5[1];
   lVar3 = *param_5;
   iVar1 = *(int*)( this + 0x1d0 );
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_00 + 0xc ) = param_3;
   *(int*)( this + 0x1d0 ) = iVar1 + 1;
   *(int*)( this_00 + 8 ) = iVar1 + 1;
   lVar4 = param_4[1];
   *(undefined4*)( this_00 + 0x10 ) = 0x34;
   lVar5 = *param_4;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, ( lVar2 - lVar3 >> 2 ) + 1 + ( lVar4 - lVar5 >> 2 ));
   Instruction::addImmediateOperand(this_00, param_2);
   puVar10 = (undefined4*)*param_4;
   if (puVar10 != (undefined4*)param_4[1]) {
      do {
         while (true) {
            puVar6 = *(undefined4**)( this_00 + 0x20 );
            local_58 = (ulong*)CONCAT44(local_58._4_4_, *puVar10);
            if (puVar6 == *(undefined4**)( this_00 + 0x28 )) {
               std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar6, &local_58);
            }
 else {
               *puVar6 = *puVar10;
               *(undefined4**)( this_00 + 0x20 ) = puVar6 + 1;
            }

            puVar7 = *(ulong**)( this_00 + 0x40 );
            if (puVar7 != *(ulong**)( this_00 + 0x50 )) break;
            local_60 = *(undefined4*)( this_00 + 0x48 );
            puVar10 = puVar10 + 1;
            local_68 = puVar7;
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar7, CONCAT44(uStack_5c, local_60), 1);
            if ((undefined4*)param_4[1] == puVar10) goto LAB_00103d65;
         }
;
         iVar1 = *(int*)( this_00 + 0x48 );
         if (iVar1 == 0x3f) {
            *(undefined4*)( this_00 + 0x48 ) = 0;
            *(ulong**)( this_00 + 0x40 ) = puVar7 + 1;
         }
 else {
            *(int*)( this_00 + 0x48 ) = iVar1 + 1;
         }

         puVar10 = puVar10 + 1;
         *puVar7 = *puVar7 | 1L << ( (byte)iVar1 & 0x3f );
      }
 while ( (undefined4*)param_4[1] != puVar10 );
   }

   LAB_00103d65:puVar10 = (undefined4*)*param_5;
   if (puVar10 != (undefined4*)param_5[1]) {
      do {
         while (true) {
            puVar6 = *(undefined4**)( this_00 + 0x20 );
            local_70 = (Instruction*)CONCAT44(local_70._4_4_, *puVar10);
            if (puVar6 == *(undefined4**)( this_00 + 0x28 )) {
               std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar6, &local_70);
            }
 else {
               *puVar6 = *puVar10;
               *(undefined4**)( this_00 + 0x20 ) = puVar6 + 1;
            }

            puVar7 = *(ulong**)( this_00 + 0x40 );
            if (puVar7 != *(ulong**)( this_00 + 0x50 )) break;
            local_50 = *(undefined4*)( this_00 + 0x48 );
            puVar10 = puVar10 + 1;
            local_58 = puVar7;
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar7, CONCAT44(uStack_4c, local_50), 0);
            if ((undefined4*)param_5[1] == puVar10) goto LAB_00103e0c;
         }
;
         iVar1 = *(int*)( this_00 + 0x48 );
         if (iVar1 == 0x3f) {
            *(undefined4*)( this_00 + 0x48 ) = 0;
            *(ulong**)( this_00 + 0x40 ) = puVar7 + 1;
         }
 else {
            *(int*)( this_00 + 0x48 ) = iVar1 + 1;
         }

         puVar10 = puVar10 + 1;
         bVar8 = (byte)iVar1 & 0x3f;
         *puVar7 = *puVar7 & ( -2L << bVar8 | 0xfffffffffffffffeU >> 0x40 - bVar8 );
      }
 while ( (undefined4*)param_5[1] != puVar10 );
   }

   LAB_00103e0c:Module::mapInstruction((Module*)( this + 400 ), this_00);
   local_70 = this_00;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_70);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_70);
   cVar9 = containsType(this, param_3, 0x15, 8);
   if (cVar9 != '\0') {
      local_70 = (Instruction*)CONCAT44(local_70._4_4_, 0x27);
      std::set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>::insert((set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>*)( this + 0x158 ), (Capability*)&local_70);
   }

   cVar9 = containsType(this, param_3, 0x15, 0x10);
   if (cVar9 != '\0') {
      local_70 = (Instruction*)CONCAT44(local_70._4_4_, 0x16);
      std::set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>::insert((set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>*)( this + 0x158 ), (Capability*)&local_70);
   }

   cVar9 = containsType(this, param_3, 0x16, 0x10);
   if (cVar9 != '\0') {
      local_70 = (Instruction*)CONCAT44(local_70._4_4_, 9);
      std::set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>::insert((set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>*)( this + 0x158 ), (Capability*)&local_70);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return *(undefined4*)( this_00 + 8 );
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeNullConstant(unsigned int) */int spv::Builder::makeNullConstant(Builder *this, uint param_1) {
   long *plVar1;
   undefined8 *puVar2;
   long *plVar3;
   Instruction *pIVar4;
   int iVar5;
   int iVar6;
   long in_FS_OFFSET;
   Instruction *local_30;
   Instruction *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar3 = *(long**)( this + 0x3f8 );
   iVar5 = (int)( *(long*)( this + 0x400 ) - (long)plVar3 >> 3 );
   if (0 < iVar5) {
      iVar6 = 0;
      plVar1 = plVar3 + ( ulong )(iVar5 - 1) + 1;
      do {
         if (param_1 == *(uint*)( *plVar3 + 0xc )) {
            iVar6 = *(int*)( *plVar3 + 8 );
         }

         plVar3 = plVar3 + 1;
      }
 while ( plVar3 != plVar1 );
      if (iVar6 != 0) goto LAB_00103fe0;
   }

   pIVar4 = (Instruction*)operator_new(0x60);
   iVar5 = *(int*)( this + 0x1d0 );
   *(undefined***)pIVar4 = &PTR__Instruction_0011c5f0;
   *(uint*)( pIVar4 + 0xc ) = param_1;
   *(int*)( this + 0x1d0 ) = iVar5 + 1;
   *(int*)( pIVar4 + 8 ) = iVar5 + 1;
   *(undefined4*)( pIVar4 + 0x10 ) = 0x2e;
   *(undefined4*)( pIVar4 + 0x38 ) = 0;
   *(undefined8*)( pIVar4 + 0x40 ) = 0;
   *(undefined4*)( pIVar4 + 0x48 ) = 0;
   *(undefined1(*) [16])( pIVar4 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pIVar4 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pIVar4 + 0x50 ) = (undefined1[16])0x0;
   local_30 = pIVar4;
   local_28 = pIVar4;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_28);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_28);
   puVar2 = *(undefined8**)( this + 0x400 );
   if (puVar2 == *(undefined8**)( this + 0x408 )) {
      std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>((vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)( this + 0x3f8 ), puVar2, &local_30);
   }
 else {
      *puVar2 = pIVar4;
      *(undefined8**)( this + 0x400 ) = puVar2 + 1;
   }

   Module::mapInstruction((Module*)( this + 400 ), pIVar4);
   iVar6 = *(int*)( pIVar4 + 8 );
   LAB_00103fe0:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeForwardPointer(spv::StorageClass) */ulong spv::Builder::makeForwardPointer(Builder *this, uint param_2) {
   long lVar1;
   int iVar2;
   Instruction *this_00;
   ulong uVar3;
   long lVar4;
   ulong uVar5;
   ulong uVar6;
   ulong uVar7;
   long in_FS_OFFSET;
   Instruction *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   iVar2 = *(int*)( this + 0x1d0 );
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(int*)( this + 0x1d0 ) = iVar2 + 1;
   *(int*)( this_00 + 8 ) = iVar2 + 1;
   *(undefined8*)( this_00 + 0xc ) = 0x2700000000;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::addImmediateOperand(this_00, param_2);
   local_28 = this_00;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_28);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_28);
   lVar4 = *(long*)( this + 0x1b0 );
   uVar7 = ( ulong ) * (uint*)( this_00 + 8 );
   uVar3 = *(long*)( this + 0x1b8 ) - lVar4 >> 3;
   uVar5 = uVar7;
   if (uVar3 <= uVar7) {
      uVar6 = ( ulong )(*(uint*)( this_00 + 8 ) + 0x10);
      if (uVar3 < uVar6) {
         std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_default_append((vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)( this + 0x1b0 ), uVar6 - uVar3);
         uVar5 = ( ulong ) * (uint*)( this_00 + 8 );
         lVar4 = *(long*)( this + 0x1b0 );
      }
 else if (( uVar6 < uVar3 ) && ( lVar1 = lVar4 + uVar6 * 8 * (long*)( this + 0x1b8 ) != lVar1 )) {
         *(long*)( this + 0x1b8 ) = lVar1;
      }

   }

   *(Instruction**)( lVar4 + uVar7 * 8 ) = this_00;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::import(char const*) */undefined4 spv::Builder::import(Builder *this, char *param_1) {
   long lVar1;
   char cVar2;
   Instruction *this_00;
   ulong uVar3;
   int iVar4;
   int iVar5;
   long lVar6;
   uint uVar7;
   uint uVar8;
   ulong uVar9;
   long in_FS_OFFSET;
   Instruction *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   iVar4 = *(int*)( this + 0x1d0 );
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(int*)( this + 0x1d0 ) = iVar4 + 1;
   *(int*)( this_00 + 8 ) = iVar4 + 1;
   *(undefined8*)( this_00 + 0xc ) = 0xb00000000;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   iVar4 = 0;
   uVar7 = 0;
   do {
      while (true) {
         cVar2 = *param_1;
         param_1 = param_1 + 1;
         iVar5 = iVar4 + 8;
         uVar8 = uVar7 | (int)cVar2 << ( (byte)iVar4 & 0x1f );
         if (iVar5 != 0x20) break;
         Instruction::addImmediateOperand(this_00, uVar8);
         iVar5 = 0;
         uVar8 = 0;
         iVar4 = 0;
         uVar7 = 0;
         if (cVar2 == '\0') goto LAB_001042eb;
      }
;
      iVar4 = iVar5;
      uVar7 = uVar8;
   }
 while ( cVar2 != '\0' );
   LAB_001042eb:if (iVar5 != 0) {
      Instruction::addImmediateOperand(this_00, uVar8);
   }

   lVar6 = *(long*)( this + 0x1b0 );
   uVar7 = *(uint*)( this_00 + 8 );
   uVar3 = *(long*)( this + 0x1b8 ) - lVar6 >> 3;
   if (uVar3 <= uVar7) {
      uVar9 = ( ulong )(uVar7 + 0x10);
      if (uVar3 < uVar9) {
         std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_default_append((vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)( this + 0x1b0 ), uVar9 - uVar3);
         lVar6 = *(long*)( this + 0x1b0 );
      }
 else if (( uVar9 < uVar3 ) && ( lVar1 = lVar6 + uVar9 * 8 * (long*)( this + 0x1b8 ) != lVar1 )) {
         *(long*)( this + 0x1b8 ) = lVar1;
      }

   }

   *(Instruction**)( lVar6 + (ulong)uVar7 * 8 ) = this_00;
   local_38 = this_00;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 600 ), (unique_ptr*)&local_38);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return *(undefined4*)( this_00 + 8 );
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* spv::Builder::importNonSemanticShaderDebugInfoInstructions() */void spv::Builder::importNonSemanticShaderDebugInfoInstructions(Builder *this) {
   long lVar1;
   undefined8 uVar2;
   undefined4 uVar3;
   long in_FS_OFFSET;
   long local_50;
   long *local_48;
   long local_40;
   long local_38[3];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x50 ) == 0) {
      local_50 = 0x19;
      local_48 = local_38;
      local_48 = (long*)std::__cxx11::string::_M_create((ulong*)&local_48, ( ulong ) & local_50);
      lVar1 = _UNK_0011c6a8;
      local_38[0] = local_50;
      *local_48 = __LC12;
      local_48[1] = lVar1;
      uVar2 = _UNK_0011c6b8;
      *(undefined8*)( (long)local_48 + 9 ) = __LC13;
      *(undefined8*)( (long)local_48 + 0x11 ) = uVar2;
      local_40 = local_50;
      *(undefined1*)( (long)local_48 + local_50 ) = 0;
      std::_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>::_M_insert_unique<std::__cxx11::string>((_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>*)( this + 0xf0 ), (string*)&local_48);
      if (local_48 != local_38) {
         operator_delete(local_48, local_38[0] + 1);
      }

      uVar3 = import(this, "NonSemantic.Shader.DebugInfo.100");
      *(undefined4*)( this + 0x50 ) = uVar3;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::addMemberDecoration(unsigned int, unsigned int, spv::Decoration, std::vector<char
   const*, std::allocator<char const*> > const&) */void spv::Builder::addMemberDecoration(Builder *this, uint param_1, uint param_2, uint param_4, long *param_5) {
   char cVar1;
   long lVar2;
   long lVar3;
   undefined8 *puVar4;
   uint *puVar5;
   ulong *puVar6;
   Instruction *this_00;
   int iVar7;
   int iVar8;
   uint uVar9;
   undefined8 *puVar10;
   char *pcVar11;
   long in_FS_OFFSET;
   unique_ptr *local_80;
   Instruction *local_60;
   ulong *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_4 != 0x7fffffff) {
      this_00 = (Instruction*)operator_new(0x60);
      lVar2 = param_5[1];
      lVar3 = *param_5;
      *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
      *(undefined8*)( this_00 + 8 ) = 0;
      *(undefined4*)( this_00 + 0x10 ) = 0x1601;
      *(undefined4*)( this_00 + 0x38 ) = 0;
      *(undefined8*)( this_00 + 0x40 ) = 0;
      *(undefined4*)( this_00 + 0x48 ) = 0;
      *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
      Instruction::reserveOperands(this_00, ( lVar2 - lVar3 >> 3 ) + 3);
      Instruction::addIdOperand(this_00, param_1);
      Instruction::addImmediateOperand(this_00, param_2);
      Instruction::addImmediateOperand(this_00, param_4);
      puVar10 = (undefined8*)*param_5;
      puVar4 = (undefined8*)param_5[1];
      if (puVar4 != puVar10) {
         do {
            pcVar11 = (char*)*puVar10;
            uVar9 = 0;
            iVar7 = 0;
            do {
               while (true) {
                  cVar1 = *pcVar11;
                  pcVar11 = pcVar11 + 1;
                  iVar8 = iVar7 + 8;
                  uVar9 = uVar9 | (int)cVar1 << ( (byte)iVar7 & 0x1f );
                  if (iVar8 != 0x20) break;
                  local_60 = (Instruction*)CONCAT44(local_60._4_4_, uVar9);
                  puVar5 = *(uint**)( this_00 + 0x20 );
                  if (puVar5 == *(uint**)( this_00 + 0x28 )) {
                     std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar5, &local_60);
                  }
 else {
                     *puVar5 = uVar9;
                     *(uint**)( this_00 + 0x20 ) = puVar5 + 1;
                  }

                  puVar6 = *(ulong**)( this_00 + 0x40 );
                  if (puVar6 == *(ulong**)( this_00 + 0x50 )) {
                     local_50 = *(undefined4*)( this_00 + 0x48 );
                     local_58 = puVar6;
                     std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar6, CONCAT44(uStack_4c, local_50));
                  }
 else {
                     iVar7 = *(int*)( this_00 + 0x48 );
                     if (iVar7 == 0x3f) {
                        *(undefined4*)( this_00 + 0x48 ) = 0;
                        *(ulong**)( this_00 + 0x40 ) = puVar6 + 1;
                     }
 else {
                        *(int*)( this_00 + 0x48 ) = iVar7 + 1;
                     }

                     *puVar6 = *puVar6 & ~(1L << ((byte)iVar7 & 0x3f));
                  }

                  iVar8 = 0;
                  uVar9 = 0;
                  iVar7 = 0;
                  if (cVar1 == '\0') goto LAB_00104626;
               }
;
               iVar7 = iVar8;
            }
 while ( cVar1 != '\0' );
            LAB_00104626:if (iVar8 != 0) {
               Instruction::addImmediateOperand(this_00, uVar9);
            }

            puVar10 = puVar10 + 1;
         }
 while ( puVar4 != puVar10 );
      }

      local_80 = (unique_ptr*)&local_60;
      local_60 = this_00;
      std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2b8 ), local_80);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)local_80);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* spv::Builder::addMemberDecoration(unsigned int, unsigned int, spv::Decoration,
   std::vector<unsigned int, std::allocator<unsigned int> > const&) */void spv::Builder::addMemberDecoration(Builder *this, uint param_1, uint param_2, uint param_4, long *param_5) {
   int iVar1;
   long lVar2;
   long lVar3;
   undefined4 *puVar4;
   undefined4 *puVar5;
   ulong *puVar6;
   byte bVar7;
   Instruction *this_00;
   undefined4 *puVar8;
   long in_FS_OFFSET;
   Instruction *local_60;
   ulong *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_4 != 0x7fffffff) {
      this_00 = (Instruction*)operator_new(0x60);
      lVar2 = param_5[1];
      lVar3 = *param_5;
      *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
      *(undefined8*)( this_00 + 8 ) = 0;
      *(undefined4*)( this_00 + 0x10 ) = 0x48;
      *(undefined4*)( this_00 + 0x38 ) = 0;
      *(undefined8*)( this_00 + 0x40 ) = 0;
      *(undefined4*)( this_00 + 0x48 ) = 0;
      *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
      Instruction::reserveOperands(this_00, ( lVar2 - lVar3 >> 2 ) + 3);
      Instruction::addIdOperand(this_00, param_1);
      Instruction::addImmediateOperand(this_00, param_2);
      Instruction::addImmediateOperand(this_00, param_4);
      puVar4 = (undefined4*)param_5[1];
      for (puVar8 = (undefined4*)*param_5; puVar4 != puVar8; puVar8 = puVar8 + 1) {
         while (true) {
            puVar5 = *(undefined4**)( this_00 + 0x20 );
            local_60 = (Instruction*)CONCAT44(local_60._4_4_, *puVar8);
            if (puVar5 == *(undefined4**)( this_00 + 0x28 )) {
               std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar5, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
            }
 else {
               *puVar5 = *puVar8;
               *(undefined4**)( this_00 + 0x20 ) = puVar5 + 1;
            }

            puVar6 = *(ulong**)( this_00 + 0x40 );
            if (puVar6 != *(ulong**)( this_00 + 0x50 )) break;
            local_50 = *(undefined4*)( this_00 + 0x48 );
            puVar8 = puVar8 + 1;
            local_58 = puVar6;
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar6, CONCAT44(uStack_4c, local_50), 0);
            if (puVar4 == puVar8) goto LAB_0010486d;
         }
;
         iVar1 = *(int*)( this_00 + 0x48 );
         if (iVar1 == 0x3f) {
            *(undefined4*)( this_00 + 0x48 ) = 0;
            *(ulong**)( this_00 + 0x40 ) = puVar6 + 1;
         }
 else {
            *(int*)( this_00 + 0x48 ) = iVar1 + 1;
         }

         bVar7 = (byte)iVar1 & 0x3f;
         *puVar6 = *puVar6 & ( -2L << bVar7 | 0xfffffffffffffffeU >> 0x40 - bVar7 );
      }

      LAB_0010486d:local_60 = this_00;
      std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2b8 ), (unique_ptr*)&local_60);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::addMemberDecoration(unsigned int, unsigned int, spv::Decoration, char const*) */void spv::Builder::addMemberDecoration(Builder *this, uint param_1, uint param_2, uint param_4, char *param_5) {
   char cVar1;
   Instruction *this_00;
   int iVar2;
   int iVar3;
   uint uVar4;
   uint uVar5;
   long in_FS_OFFSET;
   Instruction *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_4 != 0x7fffffff) {
      this_00 = (Instruction*)operator_new(0x60);
      *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
      *(undefined8*)( this_00 + 8 ) = 0;
      *(undefined4*)( this_00 + 0x10 ) = 0x1601;
      *(undefined4*)( this_00 + 0x38 ) = 0;
      *(undefined8*)( this_00 + 0x40 ) = 0;
      *(undefined4*)( this_00 + 0x48 ) = 0;
      *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
      Instruction::reserveOperands(this_00, 4);
      Instruction::addIdOperand(this_00, param_1);
      Instruction::addImmediateOperand(this_00, param_2);
      Instruction::addImmediateOperand(this_00, param_4);
      iVar2 = 0;
      uVar4 = 0;
      do {
         while (true) {
            cVar1 = *param_5;
            param_5 = param_5 + 1;
            iVar3 = iVar2 + 8;
            uVar5 = uVar4 | (int)cVar1 << ( (byte)iVar2 & 0x1f );
            if (iVar3 != 0x20) break;
            Instruction::addImmediateOperand(this_00, uVar5);
            iVar3 = 0;
            uVar5 = 0;
            iVar2 = 0;
            uVar4 = 0;
            if (cVar1 == '\0') goto LAB_001049d3;
         }
;
         iVar2 = iVar3;
         uVar4 = uVar5;
      }
 while ( cVar1 != '\0' );
      LAB_001049d3:if (iVar3 != 0) {
         Instruction::addImmediateOperand(this_00, uVar5);
      }

      local_48 = this_00;
      std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2b8 ), (unique_ptr*)&local_48);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::addMemberDecoration(unsigned int, unsigned int, spv::Decoration, int) */void spv::Builder::addMemberDecoration(Builder *this, uint param_1, uint param_2, uint param_4, uint param_5) {
   Instruction *this_00;
   long in_FS_OFFSET;
   Instruction *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_4 != 0x7fffffff) {
      this_00 = (Instruction*)operator_new(0x60);
      *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
      *(undefined8*)( this_00 + 8 ) = 0;
      *(undefined4*)( this_00 + 0x10 ) = 0x48;
      *(undefined4*)( this_00 + 0x38 ) = 0;
      *(undefined8*)( this_00 + 0x40 ) = 0;
      *(undefined4*)( this_00 + 0x48 ) = 0;
      *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
      Instruction::reserveOperands(this_00, 3);
      Instruction::addIdOperand(this_00, param_1);
      Instruction::addImmediateOperand(this_00, param_2);
      Instruction::addImmediateOperand(this_00, param_4);
      if (-1 < (int)param_5) {
         Instruction::addImmediateOperand(this_00, param_5);
      }

      local_48 = this_00;
      std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2b8 ), (unique_ptr*)&local_48);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::addDecorationId(unsigned int, spv::Decoration, std::vector<unsigned int,
   std::allocator<unsigned int> > const&) */void spv::Builder::addDecorationId(Builder *this, uint param_1, uint param_3, long *param_4) {
   int iVar1;
   long lVar2;
   long lVar3;
   undefined4 *puVar4;
   undefined4 *puVar5;
   ulong *puVar6;
   Instruction *this_00;
   undefined4 *puVar7;
   long in_FS_OFFSET;
   Instruction *local_60;
   ulong *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 != 0x7fffffff) {
      this_00 = (Instruction*)operator_new(0x60);
      lVar2 = param_4[1];
      lVar3 = *param_4;
      *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
      *(undefined8*)( this_00 + 8 ) = 0;
      *(undefined4*)( this_00 + 0x10 ) = 0x14c;
      *(undefined4*)( this_00 + 0x38 ) = 0;
      *(undefined8*)( this_00 + 0x40 ) = 0;
      *(undefined4*)( this_00 + 0x48 ) = 0;
      *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
      Instruction::reserveOperands(this_00, ( lVar2 - lVar3 >> 2 ) + 2);
      Instruction::addIdOperand(this_00, param_1);
      Instruction::addImmediateOperand(this_00, param_3);
      puVar4 = (undefined4*)param_4[1];
      for (puVar7 = (undefined4*)*param_4; puVar4 != puVar7; puVar7 = puVar7 + 1) {
         while (true) {
            puVar5 = *(undefined4**)( this_00 + 0x20 );
            local_60 = (Instruction*)CONCAT44(local_60._4_4_, *puVar7);
            if (puVar5 == *(undefined4**)( this_00 + 0x28 )) {
               std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar5, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
            }
 else {
               *puVar5 = *puVar7;
               *(undefined4**)( this_00 + 0x20 ) = puVar5 + 1;
            }

            puVar6 = *(ulong**)( this_00 + 0x40 );
            if (puVar6 != *(ulong**)( this_00 + 0x50 )) break;
            local_50 = *(undefined4*)( this_00 + 0x48 );
            puVar7 = puVar7 + 1;
            local_58 = puVar6;
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar6, CONCAT44(uStack_4c, local_50), 1);
            if (puVar4 == puVar7) goto LAB_00104ca6;
         }
;
         iVar1 = *(int*)( this_00 + 0x48 );
         if (iVar1 == 0x3f) {
            *(undefined4*)( this_00 + 0x48 ) = 0;
            *(ulong**)( this_00 + 0x40 ) = puVar6 + 1;
         }
 else {
            *(int*)( this_00 + 0x48 ) = iVar1 + 1;
         }

         *puVar6 = *puVar6 | 1L << ( (byte)iVar1 & 0x3f );
      }

      LAB_00104ca6:local_60 = this_00;
      std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2b8 ), (unique_ptr*)&local_60);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::addDecorationId(unsigned int, spv::Decoration, unsigned int) */void spv::Builder::addDecorationId(Builder *this, uint param_1, uint param_3, uint param_4) {
   Instruction *this_00;
   long in_FS_OFFSET;
   Instruction *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 != 0x7fffffff) {
      this_00 = (Instruction*)operator_new(0x60);
      *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
      *(undefined8*)( this_00 + 8 ) = 0;
      *(undefined4*)( this_00 + 0x10 ) = 0x14c;
      *(undefined4*)( this_00 + 0x38 ) = 0;
      *(undefined8*)( this_00 + 0x40 ) = 0;
      *(undefined4*)( this_00 + 0x48 ) = 0;
      *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
      Instruction::reserveOperands(this_00, 3);
      Instruction::addIdOperand(this_00, param_1);
      Instruction::addImmediateOperand(this_00, param_3);
      Instruction::addIdOperand(this_00, param_4);
      local_38 = this_00;
      std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2b8 ), (unique_ptr*)&local_38);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::addLinkageDecoration(unsigned int, char const*, spv::LinkageType) */void spv::Builder::addLinkageDecoration(Builder *this, uint param_1, char *param_2, uint param_4) {
   char cVar1;
   uint *puVar2;
   ulong *puVar3;
   Instruction *this_00;
   int iVar4;
   int iVar5;
   uint uVar6;
   long in_FS_OFFSET;
   Instruction *local_60;
   ulong *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined8*)( this_00 + 8 ) = 0;
   *(undefined4*)( this_00 + 0x10 ) = 0x47;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, 4);
   Instruction::addIdOperand(this_00, param_1);
   Instruction::addImmediateOperand(this_00, 0x29);
   uVar6 = 0;
   iVar4 = 0;
   do {
      while (true) {
         cVar1 = *param_2;
         param_2 = param_2 + 1;
         iVar5 = iVar4 + 8;
         uVar6 = uVar6 | (int)cVar1 << ( (byte)iVar4 & 0x1f );
         if (iVar5 != 0x20) break;
         local_60 = (Instruction*)CONCAT44(local_60._4_4_, uVar6);
         puVar2 = *(uint**)( this_00 + 0x20 );
         if (puVar2 == *(uint**)( this_00 + 0x28 )) {
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar2, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
         }
 else {
            *puVar2 = uVar6;
            *(uint**)( this_00 + 0x20 ) = puVar2 + 1;
         }

         puVar3 = *(ulong**)( this_00 + 0x40 );
         if (puVar3 == *(ulong**)( this_00 + 0x50 )) {
            local_50 = *(undefined4*)( this_00 + 0x48 );
            local_58 = puVar3;
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar3, CONCAT44(uStack_4c, local_50));
         }
 else {
            iVar4 = *(int*)( this_00 + 0x48 );
            if (iVar4 == 0x3f) {
               *(undefined4*)( this_00 + 0x48 ) = 0;
               *(ulong**)( this_00 + 0x40 ) = puVar3 + 1;
            }
 else {
               *(int*)( this_00 + 0x48 ) = iVar4 + 1;
            }

            *puVar3 = *puVar3 & ~(1L << ((byte)iVar4 & 0x3f));
         }

         iVar5 = 0;
         uVar6 = 0;
         iVar4 = 0;
         if (cVar1 == '\0') goto LAB_00104f3a;
      }
;
      iVar4 = iVar5;
   }
 while ( cVar1 != '\0' );
   LAB_00104f3a:if (iVar5 != 0) {
      Instruction::addImmediateOperand(this_00, uVar6);
   }

   Instruction::addImmediateOperand(this_00, param_4);
   local_60 = this_00;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2b8 ), (unique_ptr*)&local_60);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::addDecoration(unsigned int, spv::Decoration, std::vector<char const*,
   std::allocator<char const*> > const&) */void spv::Builder::addDecoration(Builder *this, uint param_1, uint param_3, long *param_4) {
   char cVar1;
   long lVar2;
   long lVar3;
   undefined8 *puVar4;
   uint *puVar5;
   ulong *puVar6;
   Instruction *this_00;
   int iVar7;
   int iVar8;
   uint uVar9;
   undefined8 *puVar10;
   char *pcVar11;
   long in_FS_OFFSET;
   unique_ptr *local_80;
   Instruction *local_60;
   ulong *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 != 0x7fffffff) {
      this_00 = (Instruction*)operator_new(0x60);
      lVar2 = param_4[1];
      lVar3 = *param_4;
      *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
      *(undefined8*)( this_00 + 8 ) = 0;
      *(undefined4*)( this_00 + 0x10 ) = 0x1600;
      *(undefined4*)( this_00 + 0x38 ) = 0;
      *(undefined8*)( this_00 + 0x40 ) = 0;
      *(undefined4*)( this_00 + 0x48 ) = 0;
      *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
      Instruction::reserveOperands(this_00, ( lVar2 - lVar3 >> 3 ) + 2);
      Instruction::addIdOperand(this_00, param_1);
      Instruction::addImmediateOperand(this_00, param_3);
      puVar10 = (undefined8*)*param_4;
      puVar4 = (undefined8*)param_4[1];
      if (puVar4 != puVar10) {
         do {
            pcVar11 = (char*)*puVar10;
            uVar9 = 0;
            iVar7 = 0;
            do {
               while (true) {
                  cVar1 = *pcVar11;
                  pcVar11 = pcVar11 + 1;
                  iVar8 = iVar7 + 8;
                  uVar9 = uVar9 | (int)cVar1 << ( (byte)iVar7 & 0x1f );
                  if (iVar8 != 0x20) break;
                  local_60 = (Instruction*)CONCAT44(local_60._4_4_, uVar9);
                  puVar5 = *(uint**)( this_00 + 0x20 );
                  if (puVar5 == *(uint**)( this_00 + 0x28 )) {
                     std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar5, &local_60);
                  }
 else {
                     *puVar5 = uVar9;
                     *(uint**)( this_00 + 0x20 ) = puVar5 + 1;
                  }

                  puVar6 = *(ulong**)( this_00 + 0x40 );
                  if (puVar6 == *(ulong**)( this_00 + 0x50 )) {
                     local_50 = *(undefined4*)( this_00 + 0x48 );
                     local_58 = puVar6;
                     std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar6, CONCAT44(uStack_4c, local_50));
                  }
 else {
                     iVar7 = *(int*)( this_00 + 0x48 );
                     if (iVar7 == 0x3f) {
                        *(undefined4*)( this_00 + 0x48 ) = 0;
                        *(ulong**)( this_00 + 0x40 ) = puVar6 + 1;
                     }
 else {
                        *(int*)( this_00 + 0x48 ) = iVar7 + 1;
                     }

                     *puVar6 = *puVar6 & ~(1L << ((byte)iVar7 & 0x3f));
                  }

                  iVar8 = 0;
                  uVar9 = 0;
                  iVar7 = 0;
                  if (cVar1 == '\0') goto LAB_00105176;
               }
;
               iVar7 = iVar8;
            }
 while ( cVar1 != '\0' );
            LAB_00105176:if (iVar8 != 0) {
               Instruction::addImmediateOperand(this_00, uVar9);
            }

            puVar10 = puVar10 + 1;
         }
 while ( puVar4 != puVar10 );
      }

      local_80 = (unique_ptr*)&local_60;
      local_60 = this_00;
      std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2b8 ), local_80);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)local_80);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* spv::Builder::addDecoration(unsigned int, spv::Decoration, std::vector<unsigned int,
   std::allocator<unsigned int> > const&) */void spv::Builder::addDecoration(Builder *this, uint param_1, uint param_3, long *param_4) {
   int iVar1;
   long lVar2;
   long lVar3;
   undefined4 *puVar4;
   undefined4 *puVar5;
   ulong *puVar6;
   byte bVar7;
   Instruction *this_00;
   undefined4 *puVar8;
   long in_FS_OFFSET;
   Instruction *local_60;
   ulong *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 != 0x7fffffff) {
      this_00 = (Instruction*)operator_new(0x60);
      lVar2 = param_4[1];
      lVar3 = *param_4;
      *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
      *(undefined8*)( this_00 + 8 ) = 0;
      *(undefined4*)( this_00 + 0x10 ) = 0x47;
      *(undefined4*)( this_00 + 0x38 ) = 0;
      *(undefined8*)( this_00 + 0x40 ) = 0;
      *(undefined4*)( this_00 + 0x48 ) = 0;
      *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
      Instruction::reserveOperands(this_00, ( lVar2 - lVar3 >> 2 ) + 2);
      Instruction::addIdOperand(this_00, param_1);
      Instruction::addImmediateOperand(this_00, param_3);
      puVar4 = (undefined4*)param_4[1];
      for (puVar8 = (undefined4*)*param_4; puVar4 != puVar8; puVar8 = puVar8 + 1) {
         while (true) {
            puVar5 = *(undefined4**)( this_00 + 0x20 );
            local_60 = (Instruction*)CONCAT44(local_60._4_4_, *puVar8);
            if (puVar5 == *(undefined4**)( this_00 + 0x28 )) {
               std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar5, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
            }
 else {
               *puVar5 = *puVar8;
               *(undefined4**)( this_00 + 0x20 ) = puVar5 + 1;
            }

            puVar6 = *(ulong**)( this_00 + 0x40 );
            if (puVar6 != *(ulong**)( this_00 + 0x50 )) break;
            local_50 = *(undefined4*)( this_00 + 0x48 );
            puVar8 = puVar8 + 1;
            local_58 = puVar6;
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar6, CONCAT44(uStack_4c, local_50), 0);
            if (puVar4 == puVar8) goto LAB_001053b5;
         }
;
         iVar1 = *(int*)( this_00 + 0x48 );
         if (iVar1 == 0x3f) {
            *(undefined4*)( this_00 + 0x48 ) = 0;
            *(ulong**)( this_00 + 0x40 ) = puVar6 + 1;
         }
 else {
            *(int*)( this_00 + 0x48 ) = iVar1 + 1;
         }

         bVar7 = (byte)iVar1 & 0x3f;
         *puVar6 = *puVar6 & ( -2L << bVar7 | 0xfffffffffffffffeU >> 0x40 - bVar7 );
      }

      LAB_001053b5:local_60 = this_00;
      std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2b8 ), (unique_ptr*)&local_60);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::addDecoration(unsigned int, spv::Decoration, char const*) */void spv::Builder::addDecoration(Builder *this, uint param_1, uint param_3, char *param_4) {
   char cVar1;
   Instruction *this_00;
   int iVar2;
   int iVar3;
   uint uVar4;
   uint uVar5;
   long in_FS_OFFSET;
   Instruction *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 != 0x7fffffff) {
      this_00 = (Instruction*)operator_new(0x60);
      *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
      *(undefined8*)( this_00 + 8 ) = 0;
      *(undefined4*)( this_00 + 0x10 ) = 0x1600;
      *(undefined4*)( this_00 + 0x38 ) = 0;
      *(undefined8*)( this_00 + 0x40 ) = 0;
      *(undefined4*)( this_00 + 0x48 ) = 0;
      *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
      Instruction::reserveOperands(this_00, 3);
      Instruction::addIdOperand(this_00, param_1);
      Instruction::addImmediateOperand(this_00, param_3);
      iVar2 = 0;
      uVar4 = 0;
      do {
         while (true) {
            cVar1 = *param_4;
            param_4 = param_4 + 1;
            iVar3 = iVar2 + 8;
            uVar5 = uVar4 | (int)cVar1 << ( (byte)iVar2 & 0x1f );
            if (iVar3 != 0x20) break;
            Instruction::addImmediateOperand(this_00, uVar5);
            iVar3 = 0;
            uVar5 = 0;
            iVar2 = 0;
            uVar4 = 0;
            if (cVar1 == '\0') goto LAB_00105503;
         }
;
         iVar2 = iVar3;
         uVar4 = uVar5;
      }
 while ( cVar1 != '\0' );
      LAB_00105503:if (iVar3 != 0) {
         Instruction::addImmediateOperand(this_00, uVar5);
      }

      local_38 = this_00;
      std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2b8 ), (unique_ptr*)&local_38);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::addDecoration(unsigned int, spv::Decoration, int) [clone .part.0] */void spv::Builder::addDecoration(Builder *this, uint param_1, uint param_3, uint param_4) {
   void *__src;
   Instruction *this_00;
   void *__dest;
   ulong uVar1;
   long in_FS_OFFSET;
   Instruction *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined8*)( this_00 + 8 ) = 0;
   *(undefined4*)( this_00 + 0x10 ) = 0x47;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   __dest = operator_new(8);
   __src = *(void**)( this_00 + 0x18 );
   if (*(long*)( this_00 + 0x20 ) - (long)__src < 1) {
      if (__src == (void*)0x0) goto LAB_00105609;
      uVar1 = *(long*)( this_00 + 0x28 ) - (long)__src;
   }
 else {
      memmove(__dest, __src, *(long*)( this_00 + 0x20 ) - (long)__src);
      uVar1 = *(long*)( this_00 + 0x28 ) - (long)__src;
   }

   operator_delete(__src, uVar1);
   LAB_00105609:*(void**)( this_00 + 0x18 ) = __dest;
   *(void**)( this_00 + 0x20 ) = __dest;
   *(long*)( this_00 + 0x28 ) = (long)__dest + 8;
   if (( ulong )(( *(long*)( this_00 + 0x50 ) - *(long*)( this_00 + 0x30 ) ) * 8) < 2) {
      std::vector<bool,std::allocator<bool>>::_M_reallocate((vector<bool,std::allocator<bool>>*)( this_00 + 0x30 ), 2);
   }

   Instruction::addIdOperand(this_00, param_1);
   Instruction::addImmediateOperand(this_00, param_3);
   if (-1 < (int)param_4) {
      Instruction::addImmediateOperand(this_00, param_4);
   }

   local_48 = this_00;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2b8 ), (unique_ptr*)&local_48);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::addDecoration(unsigned int, spv::Decoration, int) */void spv::Builder::addDecoration(undefined8 param_1, undefined8 param_2, int param_3) {
   if (param_3 != 0x7fffffff) {
      addDecoration();
      return;
   }

   return;
}
/* spv::Builder::addMemberName(unsigned int, int, char const*) */void spv::Builder::addMemberName(Builder *this, uint param_1, int param_2, char *param_3) {
   char cVar1;
   uint *puVar2;
   ulong *puVar3;
   Instruction *this_00;
   int iVar4;
   int iVar5;
   uint uVar6;
   long in_FS_OFFSET;
   Instruction *local_60;
   ulong *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined8*)( this_00 + 8 ) = 0;
   *(undefined4*)( this_00 + 0x10 ) = 6;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, 3);
   Instruction::addIdOperand(this_00, param_1);
   Instruction::addImmediateOperand(this_00, param_2);
   uVar6 = 0;
   iVar4 = 0;
   do {
      while (true) {
         cVar1 = *param_3;
         param_3 = param_3 + 1;
         iVar5 = iVar4 + 8;
         uVar6 = uVar6 | (int)cVar1 << ( (byte)iVar4 & 0x1f );
         if (iVar5 != 0x20) break;
         local_60 = (Instruction*)CONCAT44(local_60._4_4_, uVar6);
         puVar2 = *(uint**)( this_00 + 0x20 );
         if (puVar2 == *(uint**)( this_00 + 0x28 )) {
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar2, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
         }
 else {
            *puVar2 = uVar6;
            *(uint**)( this_00 + 0x20 ) = puVar2 + 1;
         }

         puVar3 = *(ulong**)( this_00 + 0x40 );
         if (puVar3 == *(ulong**)( this_00 + 0x50 )) {
            local_50 = *(undefined4*)( this_00 + 0x48 );
            local_58 = puVar3;
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar3, CONCAT44(uStack_4c, local_50));
         }
 else {
            iVar4 = *(int*)( this_00 + 0x48 );
            if (iVar4 == 0x3f) {
               *(undefined4*)( this_00 + 0x48 ) = 0;
               *(ulong**)( this_00 + 0x40 ) = puVar3 + 1;
            }
 else {
               *(int*)( this_00 + 0x48 ) = iVar4 + 1;
            }

            *puVar3 = *puVar3 & ~(1L << ((byte)iVar4 & 0x3f));
         }

         iVar5 = 0;
         uVar6 = 0;
         iVar4 = 0;
         if (cVar1 == '\0') goto LAB_0010584b;
      }
;
      iVar4 = iVar5;
   }
 while ( cVar1 != '\0' );
   LAB_0010584b:if (iVar5 != 0) {
      Instruction::addImmediateOperand(this_00, uVar6);
   }

   local_60 = this_00;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2a0 ), (unique_ptr*)&local_60);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::addName(unsigned int, char const*) */void spv::Builder::addName(Builder *this, uint param_1, char *param_2) {
   char cVar1;
   uint *puVar2;
   ulong *puVar3;
   Instruction *this_00;
   int iVar4;
   int iVar5;
   uint uVar6;
   long in_FS_OFFSET;
   Instruction *local_60;
   ulong *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined8*)( this_00 + 8 ) = 0;
   *(undefined4*)( this_00 + 0x10 ) = 5;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, 2);
   Instruction::addIdOperand(this_00, param_1);
   uVar6 = 0;
   iVar4 = 0;
   do {
      while (true) {
         cVar1 = *param_2;
         param_2 = param_2 + 1;
         iVar5 = iVar4 + 8;
         uVar6 = uVar6 | (int)cVar1 << ( (byte)iVar4 & 0x1f );
         if (iVar5 != 0x20) break;
         local_60 = (Instruction*)CONCAT44(local_60._4_4_, uVar6);
         puVar2 = *(uint**)( this_00 + 0x20 );
         if (puVar2 == *(uint**)( this_00 + 0x28 )) {
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar2, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
         }
 else {
            *puVar2 = uVar6;
            *(uint**)( this_00 + 0x20 ) = puVar2 + 1;
         }

         puVar3 = *(ulong**)( this_00 + 0x40 );
         if (puVar3 == *(ulong**)( this_00 + 0x50 )) {
            local_50 = *(undefined4*)( this_00 + 0x48 );
            local_58 = puVar3;
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar3, CONCAT44(uStack_4c, local_50));
         }
 else {
            iVar4 = *(int*)( this_00 + 0x48 );
            if (iVar4 == 0x3f) {
               *(undefined4*)( this_00 + 0x48 ) = 0;
               *(ulong**)( this_00 + 0x40 ) = puVar3 + 1;
            }
 else {
               *(int*)( this_00 + 0x48 ) = iVar4 + 1;
            }

            *puVar3 = *puVar3 & ~(1L << ((byte)iVar4 & 0x3f));
         }

         iVar5 = 0;
         uVar6 = 0;
         iVar4 = 0;
         if (cVar1 == '\0') goto LAB_00105a1c;
      }
;
      iVar4 = iVar5;
   }
 while ( cVar1 != '\0' );
   LAB_00105a1c:if (iVar5 != 0) {
      Instruction::addImmediateOperand(this_00, uVar6);
   }

   local_60 = this_00;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2a0 ), (unique_ptr*)&local_60);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::addExecutionModeId(spv::Function*, spv::ExecutionMode, std::vector<unsigned int,
   std::allocator<unsigned int> > const&) */void spv::Builder::addExecutionModeId(Builder *this, long param_1, uint param_3, long *param_4) {
   int iVar1;
   long lVar2;
   long lVar3;
   undefined4 *puVar4;
   undefined4 *puVar5;
   ulong *puVar6;
   Instruction *this_00;
   undefined4 *puVar7;
   long in_FS_OFFSET;
   Instruction *local_60;
   ulong *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != 0) {
      this_00 = (Instruction*)operator_new(0x60);
      lVar2 = param_4[1];
      lVar3 = *param_4;
      *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
      *(undefined8*)( this_00 + 8 ) = 0;
      *(undefined4*)( this_00 + 0x10 ) = 0x14b;
      *(undefined4*)( this_00 + 0x38 ) = 0;
      *(undefined8*)( this_00 + 0x40 ) = 0;
      *(undefined4*)( this_00 + 0x48 ) = 0;
      *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
      Instruction::reserveOperands(this_00, ( lVar2 - lVar3 >> 2 ) + 2);
      Instruction::addIdOperand(this_00, *(uint*)( param_1 + 0x20 ));
      Instruction::addImmediateOperand(this_00, param_3);
      puVar4 = (undefined4*)param_4[1];
      for (puVar7 = (undefined4*)*param_4; puVar4 != puVar7; puVar7 = puVar7 + 1) {
         while (true) {
            puVar5 = *(undefined4**)( this_00 + 0x20 );
            local_60 = (Instruction*)CONCAT44(local_60._4_4_, *puVar7);
            if (puVar5 == *(undefined4**)( this_00 + 0x28 )) {
               std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar5, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
            }
 else {
               *puVar5 = *puVar7;
               *(undefined4**)( this_00 + 0x20 ) = puVar5 + 1;
            }

            puVar6 = *(ulong**)( this_00 + 0x40 );
            if (puVar6 != *(ulong**)( this_00 + 0x50 )) break;
            local_50 = *(undefined4*)( this_00 + 0x48 );
            puVar7 = puVar7 + 1;
            local_58 = puVar6;
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar6, CONCAT44(uStack_4c, local_50), 1);
            if (puVar4 == puVar7) goto LAB_00105c1e;
         }
;
         iVar1 = *(int*)( this_00 + 0x48 );
         if (iVar1 == 0x3f) {
            *(undefined4*)( this_00 + 0x48 ) = 0;
            *(ulong**)( this_00 + 0x40 ) = puVar6 + 1;
         }
 else {
            *(int*)( this_00 + 0x48 ) = iVar1 + 1;
         }

         *puVar6 = *puVar6 | 1L << ( (byte)iVar1 & 0x3f );
      }

      LAB_00105c1e:local_60 = this_00;
      std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x288 ), (unique_ptr*)&local_60);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::addExecutionMode(spv::Function*, spv::ExecutionMode, std::vector<unsigned int,
   std::allocator<unsigned int> > const&) */void spv::Builder::addExecutionMode(Builder *this, long param_1, uint param_3, long *param_4) {
   int iVar1;
   long lVar2;
   long lVar3;
   undefined4 *puVar4;
   undefined4 *puVar5;
   ulong *puVar6;
   byte bVar7;
   Instruction *this_00;
   undefined4 *puVar8;
   long in_FS_OFFSET;
   Instruction *local_60;
   ulong *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != 0) {
      this_00 = (Instruction*)operator_new(0x60);
      lVar2 = param_4[1];
      lVar3 = *param_4;
      *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
      *(undefined8*)( this_00 + 8 ) = 0;
      *(undefined4*)( this_00 + 0x10 ) = 0x10;
      *(undefined4*)( this_00 + 0x38 ) = 0;
      *(undefined8*)( this_00 + 0x40 ) = 0;
      *(undefined4*)( this_00 + 0x48 ) = 0;
      *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
      Instruction::reserveOperands(this_00, ( lVar2 - lVar3 >> 2 ) + 2);
      Instruction::addIdOperand(this_00, *(uint*)( param_1 + 0x20 ));
      Instruction::addImmediateOperand(this_00, param_3);
      puVar4 = (undefined4*)param_4[1];
      for (puVar8 = (undefined4*)*param_4; puVar4 != puVar8; puVar8 = puVar8 + 1) {
         while (true) {
            puVar5 = *(undefined4**)( this_00 + 0x20 );
            local_60 = (Instruction*)CONCAT44(local_60._4_4_, *puVar8);
            if (puVar5 == *(undefined4**)( this_00 + 0x28 )) {
               std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar5, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
            }
 else {
               *puVar5 = *puVar8;
               *(undefined4**)( this_00 + 0x20 ) = puVar5 + 1;
            }

            puVar6 = *(ulong**)( this_00 + 0x40 );
            if (puVar6 != *(ulong**)( this_00 + 0x50 )) break;
            local_50 = *(undefined4*)( this_00 + 0x48 );
            puVar8 = puVar8 + 1;
            local_58 = puVar6;
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar6, CONCAT44(uStack_4c, local_50), 0);
            if (puVar4 == puVar8) goto LAB_00105ddd;
         }
;
         iVar1 = *(int*)( this_00 + 0x48 );
         if (iVar1 == 0x3f) {
            *(undefined4*)( this_00 + 0x48 ) = 0;
            *(ulong**)( this_00 + 0x40 ) = puVar6 + 1;
         }
 else {
            *(int*)( this_00 + 0x48 ) = iVar1 + 1;
         }

         bVar7 = (byte)iVar1 & 0x3f;
         *puVar6 = *puVar6 & ( -2L << bVar7 | 0xfffffffffffffffeU >> 0x40 - bVar7 );
      }

      LAB_00105ddd:local_60 = this_00;
      std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x288 ), (unique_ptr*)&local_60);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::addExecutionMode(spv::Function*, spv::ExecutionMode, int, int, int) */void spv::Builder::addExecutionMode(Builder *this, long param_1, uint param_3, uint param_4, uint param_5, uint param_6) {
   Instruction *this_00;
   long in_FS_OFFSET;
   Instruction *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != 0) {
      this_00 = (Instruction*)operator_new(0x60);
      *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
      *(undefined8*)( this_00 + 8 ) = 0;
      *(undefined4*)( this_00 + 0x10 ) = 0x10;
      *(undefined4*)( this_00 + 0x38 ) = 0;
      *(undefined8*)( this_00 + 0x40 ) = 0;
      *(undefined4*)( this_00 + 0x48 ) = 0;
      *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
      Instruction::reserveOperands(this_00, 3);
      Instruction::addIdOperand(this_00, *(uint*)( param_1 + 0x20 ));
      Instruction::addImmediateOperand(this_00, param_3);
      if (-1 < (int)param_4) {
         Instruction::addImmediateOperand(this_00, param_4);
      }

      if (-1 < (int)param_5) {
         Instruction::addImmediateOperand(this_00, param_5);
      }

      if (-1 < (int)param_6) {
         Instruction::addImmediateOperand(this_00, param_6);
      }

      local_48 = this_00;
      std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x288 ), (unique_ptr*)&local_48);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* spv::Builder::addEntryPoint(spv::ExecutionModel, spv::Function*, char const*) */Instruction * __thiscall
spv::Builder::addEntryPoint(Builder *this,uint param_2,long param_3,char *param_4){
   char cVar1;
   uint *puVar2;
   ulong *puVar3;
   Instruction *this_00;
   int iVar4;
   int iVar5;
   uint uVar6;
   long in_FS_OFFSET;
   Instruction *local_60;
   ulong *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined8*)( this_00 + 8 ) = 0;
   *(undefined4*)( this_00 + 0x10 ) = 0xf;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, 3);
   Instruction::addImmediateOperand(this_00, param_2);
   Instruction::addIdOperand(this_00, *(uint*)( param_3 + 0x20 ));
   uVar6 = 0;
   iVar4 = 0;
   do {
      while (true) {
         cVar1 = *param_4;
         param_4 = param_4 + 1;
         iVar5 = iVar4 + 8;
         uVar6 = uVar6 | (int)cVar1 << ( (byte)iVar4 & 0x1f );
         if (iVar5 != 0x20) break;
         local_60 = (Instruction*)CONCAT44(local_60._4_4_, uVar6);
         puVar2 = *(uint**)( this_00 + 0x20 );
         if (puVar2 == *(uint**)( this_00 + 0x28 )) {
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar2, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
         }
 else {
            *puVar2 = uVar6;
            *(uint**)( this_00 + 0x20 ) = puVar2 + 1;
         }

         puVar3 = *(ulong**)( this_00 + 0x40 );
         if (puVar3 == *(ulong**)( this_00 + 0x50 )) {
            local_50 = *(undefined4*)( this_00 + 0x48 );
            local_58 = puVar3;
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar3, CONCAT44(uStack_4c, local_50));
         }
 else {
            iVar4 = *(int*)( this_00 + 0x48 );
            if (iVar4 == 0x3f) {
               *(undefined4*)( this_00 + 0x48 ) = 0;
               *(ulong**)( this_00 + 0x40 ) = puVar3 + 1;
            }
 else {
               *(int*)( this_00 + 0x48 ) = iVar4 + 1;
            }

            *puVar3 = *puVar3 & ~(1L << ((byte)iVar4 & 0x3f));
         }

         iVar5 = 0;
         uVar6 = 0;
         iVar4 = 0;
         if (cVar1 == '\0') goto LAB_001060cb;
      }
;
      iVar4 = iVar5;
   }
 while ( cVar1 != '\0' );
   LAB_001060cb:if (iVar5 != 0) {
      Instruction::addImmediateOperand(this_00, uVar6);
   }

   local_60 = this_00;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x270 ), (unique_ptr*)&local_60);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this_00;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeNewBlock() */undefined8 * __thiscall spv::Builder::makeNewBlock(Builder *this){
   long lVar1;
   int iVar2;
   uint uVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   undefined8 *puVar8;
   undefined8 *puVar9;
   ulong uVar10;
   long lVar11;
   ulong uVar12;
   long in_FS_OFFSET;
   undefined8 *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar4 = *(long*)( *(long*)( this + 0x1c8 ) + 0x68 );
   puVar9 = (undefined8*)operator_new(0x90);
   iVar2 = *(int*)( this + 0x1d0 );
   puVar9[1] = 0;
   puVar9[2] = 0;
   *(int*)( this + 0x1d0 ) = iVar2 + 1;
   *puVar9 = &PTR__Block_0011c610;
   for (int i = 0; i < 10; i++) {
      puVar9[( i + 3 )] = 0;
   }

   puVar9[0xd] = lVar4;
   *(undefined1*)( (long)puVar9 + 0x7c ) = 0;
   *(undefined1*)( (long)puVar9 + 0x84 ) = 0;
   *(undefined1*)( puVar9 + 0x11 ) = 0;
   local_48 = (undefined8*)operator_new(0x60);
   *(int*)( local_48 + 1 ) = iVar2 + 1;
   *(undefined8*)( (long)local_48 + 0xc ) = 0xf800000000;
   *local_48 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( local_48 + 7 ) = 0;
   local_48[8] = 0;
   *(undefined4*)( local_48 + 9 ) = 0;
   *(undefined1(*) [16])( local_48 + 3 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( local_48 + 5 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( local_48 + 10 ) = (undefined1[16])0x0;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( puVar9 + 1 ), (unique_ptr*)&local_48);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   lVar5 = *(long*)( lVar4 + 8 );
   lVar6 = *(long*)( lVar5 + 0x28 );
   lVar7 = *(long*)( puVar9[2] + -8 );
   lVar11 = *(long*)( lVar5 + 0x20 );
   uVar3 = *(uint*)( lVar7 + 8 );
   *(undefined8**)( lVar7 + 0x58 ) = puVar9;
   uVar10 = lVar6 - lVar11 >> 3;
   if (uVar10 <= uVar3) {
      uVar12 = ( ulong )(uVar3 + 0x10);
      if (uVar10 < uVar12) {
         std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_default_append((vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)( lVar5 + 0x20 ), uVar12 - uVar10);
         lVar11 = *(long*)( lVar5 + 0x20 );
      }
 else if (( uVar12 < uVar10 ) && ( lVar1 = lVar6 != lVar1 )) {
         *(long*)( lVar5 + 0x28 ) = lVar1;
      }

   }

   *(long*)( lVar11 + (ulong)uVar3 * 8 ) = lVar7;
   puVar8 = *(undefined8**)( lVar4 + 0x98 );
   local_48 = puVar9;
   if (puVar8 == *(undefined8**)( lVar4 + 0xa0 )) {
      std::vector<spv::Block*,std::allocator<spv::Block*>>::_M_realloc_insert<spv::Block*const&>((vector<spv::Block*,std::allocator<spv::Block*>>*)( lVar4 + 0x90 ), puVar8, &local_48);
   }
 else {
      *puVar8 = puVar9;
      *(undefined8**)( lVar4 + 0x98 ) = puVar8 + 1;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeNewLoop() */undefined8 * __thiscall spv::Builder::makeNewLoop(Builder *this){
   undefined8 *puVar1;
   long lVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   void *pvVar7;
   undefined8 *puVar8;
   long *__dest;
   size_t sVar9;
   long *__src;
   ulong uVar10;
   long lVar11;
   long *plVar12;
   ulong uVar13;
   undefined1 uVar14;
   void *local_50;
   uVar3 = makeNewBlock(this);
   uVar4 = makeNewBlock(this);
   uVar5 = makeNewBlock(this);
   uVar6 = makeNewBlock(this);
   puVar1 = *(undefined8**)( this + 0x490 );
   if (puVar1 == (undefined8*)( *(long*)( this + 0x4a0 ) + -0x20 )) {
      plVar12 = *(long**)( this + 0x4a8 );
      __src = *(long**)( this + 0x488 );
      lVar11 = (long)plVar12 - (long)__src;
      if (( (long)puVar1 - *(long*)( this + 0x498 ) >> 5 ) + ( ( lVar11 >> 3 ) + -1 + ( ulong )(plVar12 == (long*)0x0) ) * 0x10 + ( *(long*)( this + 0x480 ) - *(long*)( this + 0x470 ) >> 5 ) == 0x3ffffffffffffff) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("cannot create std::deque larger than max_size()");
      }

      uVar10 = *(ulong*)( this + 0x468 );
      if (uVar10 - ( (long)plVar12 - *(long*)( this + 0x460 ) >> 3 ) < 2) {
         __dest = (long*)( ( lVar11 >> 3 ) + 2 );
         if (( ulong )((long)__dest * 2) < uVar10) {
            __dest = (long*)( *(long*)( this + 0x460 ) + ( uVar10 - (long)__dest >> 1 ) * 8 );
            sVar9 = (long)plVar12 + ( 8 - (long)__src );
            if (__dest < __src) {
               if ((long)sVar9 < 9) {
                  if (sVar9 == 8) {
                     *__dest = *__src;
                  }

               }
 else {
                  __dest = (long*)memmove(__dest, __src, sVar9);
               }

            }
 else if ((long)sVar9 < 9) {
               if (sVar9 == 8) {
                  *(long*)( (long)__dest + lVar11 ) = *__src;
               }

            }
 else {
               memmove((void*)( (long)__dest + ( ( lVar11 + 8 ) - sVar9 ) ), __src, sVar9);
            }

         }
 else {
            if (uVar10 == 0) {
               uVar10 = 0x18;
               uVar13 = 3;
               LAB_00106563:local_50 = operator_new(uVar10);
               __dest = (long*)( (long)local_50 + ( uVar13 - (long)__dest >> 1 ) * 8 );
               __src = *(long**)( this + 0x488 );
               sVar9 = ( *(long*)( this + 0x4a8 ) + 8 ) - (long)__src;
               uVar14 = sVar9 == 8;
               if ((long)sVar9 < 9) goto LAB_001066e7;
               __dest = (long*)memmove(__dest, __src, sVar9);
            }
 else {
               uVar13 = ( uVar10 + 1 ) * 2;
               if (uVar13 >> 0x3c == 0) {
                  uVar10 = ( uVar10 + 1 ) * 0x10;
                  goto LAB_00106563;
               }

               uVar13 = uVar13 >> 0x3d;
               uVar14 = uVar13 == 0;
               if ((bool)uVar14) {
                  /* WARNING: Subroutine does not return */
                  std::__throw_bad_alloc();
               }

               std::__throw_bad_array_new_length();
               LAB_001066e7:if ((bool)uVar14) {
                  *__dest = *__src;
               }

            }

            operator_delete(*(void**)( this + 0x460 ), *(long*)( this + 0x468 ) * 8);
            *(ulong*)( this + 0x468 ) = uVar13;
            *(void**)( this + 0x460 ) = local_50;
         }

         lVar2 = *__dest;
         plVar12 = (long*)( (long)__dest + lVar11 );
         *(long**)( this + 0x488 ) = __dest;
         *(long**)( this + 0x4a8 ) = plVar12;
         *(long*)( this + 0x478 ) = lVar2;
         *(long*)( this + 0x480 ) = lVar2 + 0x200;
         lVar11 = *plVar12;
         *(long*)( this + 0x498 ) = lVar11;
         *(long*)( this + 0x4a0 ) = lVar11 + 0x200;
      }

      pvVar7 = operator_new(0x200);
      plVar12[1] = (long)pvVar7;
      puVar1 = *(undefined8**)( this + 0x490 );
      puVar1[1] = uVar4;
      *puVar1 = uVar3;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      lVar11 = *(long*)( this + 0x4a8 ) + 8;
      lVar2 = *(long*)( *(long*)( this + 0x4a8 ) + 8 );
      *(long*)( this + 0x490 ) = lVar2;
      *(long*)( this + 0x498 ) = lVar2;
      *(long*)( this + 0x4a0 ) = lVar2 + 0x200;
      *(long*)( this + 0x4a8 ) = lVar11;
   }
 else {
      *puVar1 = uVar3;
      puVar8 = puVar1 + 4;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      *(undefined8**)( this + 0x490 ) = puVar8;
      if (puVar8 != *(undefined8**)( this + 0x498 )) goto LAB_0010640c;
      lVar11 = *(long*)( this + 0x4a8 );
   }

   puVar8 = (undefined8*)( *(long*)( lVar11 + -8 ) + 0x200 );
   LAB_0010640c:return puVar8 + -4;
}
/* spv::Builder::createAndSetNoPredecessorBlock(char const*) */void spv::Builder::createAndSetNoPredecessorBlock(char *param_1) {
   long lVar1;
   int iVar2;
   uint uVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   ulong uVar9;
   long lVar10;
   ulong uVar11;
   long in_FS_OFFSET;
   undefined8 *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar8 = (undefined8*)operator_new(0x90);
   lVar4 = *(long*)( *(long*)( param_1 + 0x1c8 ) + 0x68 );
   iVar2 = *(int*)( param_1 + 0x1d0 );
   *(undefined1*)( (long)puVar8 + 0x7c ) = 0;
   puVar8[1] = 0;
   puVar8[0xd] = lVar4;
   *(int*)( param_1 + 0x1d0 ) = iVar2 + 1;
   *puVar8 = &PTR__Block_0011c610;
   for (int i = 0; i < 11; i++) {
      puVar8[( i + 2 )] = 0;
   }

   *(undefined1*)( (long)puVar8 + 0x84 ) = 0;
   *(undefined1*)( puVar8 + 0x11 ) = 0;
   local_48 = (undefined8*)operator_new(0x60);
   *(int*)( local_48 + 1 ) = iVar2 + 1;
   *(undefined8*)( (long)local_48 + 0xc ) = 0xf800000000;
   *local_48 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( local_48 + 7 ) = 0;
   local_48[8] = 0;
   *(undefined4*)( local_48 + 9 ) = 0;
   *(undefined1(*) [16])( local_48 + 3 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( local_48 + 5 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( local_48 + 10 ) = (undefined1[16])0x0;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( puVar8 + 1 ), (unique_ptr*)&local_48);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   lVar4 = *(long*)( lVar4 + 8 );
   lVar5 = *(long*)( lVar4 + 0x28 );
   lVar6 = *(long*)( puVar8[2] + -8 );
   lVar10 = *(long*)( lVar4 + 0x20 );
   uVar3 = *(uint*)( lVar6 + 8 );
   *(undefined8**)( lVar6 + 0x58 ) = puVar8;
   uVar9 = lVar5 - lVar10 >> 3;
   if (uVar9 <= uVar3) {
      uVar11 = ( ulong )(uVar3 + 0x10);
      if (uVar9 < uVar11) {
         std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_default_append((vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)( lVar4 + 0x20 ), uVar11 - uVar9);
         lVar10 = *(long*)( lVar4 + 0x20 );
      }
 else if (( uVar11 < uVar9 ) && ( lVar1 = lVar5 != lVar1 )) {
         *(long*)( lVar4 + 0x28 ) = lVar1;
      }

   }

   lVar4 = *(long*)( param_1 + 0x1c8 );
   *(long*)( lVar10 + (ulong)uVar3 * 8 ) = lVar6;
   lVar4 = *(long*)( lVar4 + 0x68 );
   *(undefined1*)( puVar8 + 0x11 ) = 1;
   puVar7 = *(undefined8**)( lVar4 + 0x98 );
   local_48 = puVar8;
   if (puVar7 == *(undefined8**)( lVar4 + 0xa0 )) {
      std::vector<spv::Block*,std::allocator<spv::Block*>>::_M_realloc_insert<spv::Block*const&>((vector<spv::Block*,std::allocator<spv::Block*>>*)( lVar4 + 0x90 ), puVar7, &local_48);
   }
 else {
      *puVar7 = puVar8;
      *(undefined8**)( lVar4 + 0x98 ) = puVar7 + 1;
   }

   *(undefined8**)( param_1 + 0x1c8 ) = puVar8;
   param_1[0x90] = '\x01';
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::If::If(unsigned int, unsigned int, spv::Builder&) */void spv::Builder::If::If(If *this, uint param_1, uint param_2, Builder *param_3) {
   uint uVar1;
   int iVar2;
   undefined8 uVar3;
   Function *pFVar4;
   long lVar5;
   Module *this_00;
   Instruction *pIVar6;
   Block *this_01;
   undefined8 *puVar7;
   long lVar8;
   undefined8 *puVar9;
   long in_FS_OFFSET;
   undefined8 *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar8 = *(long*)( param_3 + 0x1c8 );
   *(Builder**)this = param_3;
   *(uint*)( this + 8 ) = param_1;
   uVar3 = *(undefined8*)( lVar8 + 0x68 );
   *(uint*)( this + 0xc ) = param_2;
   *(undefined8*)( this + 0x28 ) = 0;
   *(undefined8*)( this + 0x10 ) = uVar3;
   this_01 = (Block*)operator_new(0x90);
   pFVar4 = *(Function**)( this + 0x10 );
   uVar1 = *(int*)( *(long*)this + 0x1d0 ) + 1;
   *(uint*)( *(long*)this + 0x1d0 ) = uVar1;
   Block::Block(this_01, uVar1, pFVar4);
   *(Block**)( this + 0x20 ) = this_01;
   puVar7 = (undefined8*)operator_new(0x90);
   lVar8 = *(long*)( this + 0x10 );
   lVar5 = *(long*)this;
   puVar7[1] = 0;
   iVar2 = *(int*)( lVar5 + 0x1d0 );
   puVar7[2] = 0;
   puVar7[3] = 0;
   iVar2 = iVar2 + 1;
   puVar7[4] = 0;
   *(int*)( lVar5 + 0x1d0 ) = iVar2;
   *puVar7 = &PTR__Block_0011c610;
   for (int i = 0; i < 8; i++) {
      puVar7[( i + 5 )] = 0;
   }

   puVar7[0xd] = lVar8;
   *(undefined1*)( (long)puVar7 + 0x7c ) = 0;
   *(undefined1*)( (long)puVar7 + 0x84 ) = 0;
   *(undefined1*)( puVar7 + 0x11 ) = 0;
   local_38 = (undefined8*)operator_new(0x60);
   *local_38 = &PTR__Instruction_0011c5f0;
   *(int*)( local_38 + 1 ) = iVar2;
   *(undefined8*)( (long)local_38 + 0xc ) = 0xf800000000;
   *(undefined4*)( local_38 + 7 ) = 0;
   local_38[8] = 0;
   *(undefined4*)( local_38 + 9 ) = 0;
   *(undefined1(*) [16])( local_38 + 3 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( local_38 + 5 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( local_38 + 10 ) = (undefined1[16])0x0;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( puVar7 + 1 ), (unique_ptr*)&local_38);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
   this_00 = *(Module**)( lVar8 + 8 );
   pIVar6 = *(Instruction**)( puVar7[2] + -8 );
   *(undefined8**)( pIVar6 + 0x58 ) = puVar7;
   Module::mapInstruction(this_00, pIVar6);
   lVar8 = *(long*)this;
   lVar5 = *(long*)( this + 0x10 );
   *(undefined8**)( this + 0x30 ) = puVar7;
   puVar7 = *(undefined8**)( lVar5 + 0x98 );
   *(undefined8*)( this + 0x18 ) = *(undefined8*)( lVar8 + 0x1c8 );
   puVar9 = *(undefined8**)( this + 0x20 );
   local_38 = puVar9;
   if (puVar7 == *(undefined8**)( lVar5 + 0xa0 )) {
      std::vector<spv::Block*,std::allocator<spv::Block*>>::_M_realloc_insert<spv::Block*const&>((vector<spv::Block*,std::allocator<spv::Block*>>*)( lVar5 + 0x90 ), puVar7, &local_38);
      lVar8 = *(long*)this;
      puVar9 = *(undefined8**)( this + 0x20 );
   }
 else {
      *puVar7 = puVar9;
      *(undefined8**)( lVar5 + 0x98 ) = puVar7 + 1;
   }

   *(undefined8**)( lVar8 + 0x1c8 ) = puVar9;
   *(undefined1*)( lVar8 + 0x90 ) = 1;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::findScalarConstant(spv::Op, spv::Op, unsigned int, unsigned int) */undefined4 spv::Builder::findScalarConstant(Builder *this, uint param_2, int param_3, int param_4, int param_5) {
   long lVar1;
   undefined4 uVar2;
   long *plVar3;
   long lVar4;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   lVar4 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      local_44 = param_2;
      plVar3 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x318 ), &local_44);
      if ((int)( plVar3[1] - *plVar3 >> 3 ) <= (int)lVar4) {
         uVar2 = 0;
         LAB_00106c22:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return uVar2;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      local_44 = param_2;
      plVar3 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x318 ), &local_44);
      lVar1 = *(long*)( *plVar3 + lVar4 * 8 );
      if (( ( *(int*)( lVar1 + 0x10 ) == param_3 ) && ( param_4 == *(int*)( lVar1 + 0xc ) ) ) && ( param_5 == **(int**)( lVar1 + 0x18 ) )) {
         uVar2 = *(undefined4*)( lVar1 + 8 );
         goto LAB_00106c22;
      }

      lVar4 = lVar4 + 1;
   }
 while ( true );
}
/* spv::Builder::findScalarConstant(spv::Op, spv::Op, unsigned int, unsigned int, unsigned int) */undefined4 spv::Builder::findScalarConstant(Builder *this, uint param_2, int param_3, int param_4, int param_5, int param_6) {
   long lVar1;
   undefined4 uVar2;
   long *plVar3;
   long lVar4;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   lVar4 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      local_44 = param_2;
      plVar3 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x318 ), &local_44);
      if ((int)( plVar3[1] - *plVar3 >> 3 ) <= (int)lVar4) {
         uVar2 = 0;
         LAB_00106d02:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return uVar2;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      local_44 = param_2;
      plVar3 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x318 ), &local_44);
      lVar1 = *(long*)( *plVar3 + lVar4 * 8 );
      if (( ( ( *(int*)( lVar1 + 0x10 ) == param_3 ) && ( *(int*)( lVar1 + 0xc ) == param_4 ) ) && ( param_5 == **(int**)( lVar1 + 0x18 ) ) ) && ( param_6 == ( *(int**)( lVar1 + 0x18 ) )[1] )) {
         uVar2 = *(undefined4*)( lVar1 + 8 );
         goto LAB_00106d02;
      }

      lVar4 = lVar4 + 1;
   }
 while ( true );
}
/* spv::Builder::findCompositeConstant(spv::Op, unsigned int, std::vector<unsigned int,
   std::allocator<unsigned int> > const&) */undefined4 spv::Builder::findCompositeConstant(Builder *this, uint param_2, int param_3, long *param_4) {
   long lVar1;
   int iVar2;
   undefined4 uVar3;
   long *plVar4;
   ulong uVar5;
   long lVar6;
   long in_FS_OFFSET;
   bool bVar7;
   uint local_44;
   long local_40;
   lVar6 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      local_44 = param_2;
      plVar4 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x318 ), &local_44);
      if ((int)( plVar4[1] - *plVar4 >> 3 ) <= (int)lVar6) {
         uVar3 = 0;
         LAB_00106de7:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return uVar3;
      }

      local_44 = param_2;
      plVar4 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x318 ), &local_44);
      lVar1 = *(long*)( *plVar4 + lVar6 * 8 );
      if (param_3 == *(int*)( lVar1 + 0xc )) {
         iVar2 = (int)( *(long*)( lVar1 + 0x20 ) - *(long*)( lVar1 + 0x18 ) >> 2 );
         if (iVar2 < 1) {
            LAB_00106de4:uVar3 = *(undefined4*)( lVar1 + 8 );
            goto LAB_00106de7;
         }

         uVar5 = 0;
         while (*(int*)( *param_4 + uVar5 * 4 ) == *(int*)( *(long*)( lVar1 + 0x18 ) + uVar5 * 4 )) {
            bVar7 = uVar5 == iVar2 - 1;
            uVar5 = uVar5 + 1;
            if (bVar7) goto LAB_00106de4;
         }
;
      }

      lVar6 = lVar6 + 1;
   }
 while ( true );
}
/* spv::Builder::makeVoidType() */undefined4 spv::Builder::makeVoidType(Builder *this) {
   _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this_00;
   undefined8 *puVar1;
   uint uVar2;
   long *plVar3;
   long lVar4;
   Instruction *pIVar5;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar6;
   uint *puVar7;
   long in_FS_OFFSET;
   uint local_44;
   Instruction *local_40;
   Instruction *local_38;
   long local_30;
   this_00 = (_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x388 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38._0_4_ = 0x13;
   plVar3 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_38);
   if (*plVar3 == plVar3[1]) {
      local_44 = *(int*)( this + 0x1d0 ) + 1;
      *(uint*)( this + 0x1d0 ) = local_44;
      pIVar5 = (Instruction*)operator_new(0x60);
      local_38 = (Instruction*)CONCAT44(local_38._4_4_, 0x13);
      *(undefined***)pIVar5 = &PTR__Instruction_0011c5f0;
      *(undefined4*)( pIVar5 + 0x38 ) = 0;
      *(uint*)( pIVar5 + 8 ) = local_44;
      *(undefined8*)( pIVar5 + 0xc ) = 0x1300000000;
      *(undefined8*)( pIVar5 + 0x40 ) = 0;
      *(undefined4*)( pIVar5 + 0x48 ) = 0;
      *(undefined1(*) [16])( pIVar5 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( pIVar5 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( pIVar5 + 0x50 ) = (undefined1[16])0x0;
      local_40 = pIVar5;
      pvVar6 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_38);
      puVar1 = *(undefined8**)( pvVar6 + 8 );
      if (puVar1 == *(undefined8**)( pvVar6 + 0x10 )) {
         std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar6, puVar1, &local_40);
      }
 else {
         *puVar1 = pIVar5;
         *(undefined8**)( pvVar6 + 8 ) = puVar1 + 1;
      }

      local_38 = pIVar5;
      std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_38);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
      Module::mapInstruction((Module*)( this + 400 ), pIVar5);
      uVar2 = local_44;
      if (this[0xea] != (Builder)0x0) {
         puVar7 = (uint*)std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator []((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)( this + 0x518 ), &local_44);
         *puVar7 = uVar2;
      }

   }
 else {
      local_38 = (Instruction*)CONCAT44(local_38._4_4_, 0x13);
      lVar4 = std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_38);
      pIVar5 = *(Instruction**)( *(long*)( lVar4 + 8 ) + -8 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return *(undefined4*)( pIVar5 + 8 );
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeDebugInfoNone() [clone .part.0] */ulong spv::Builder::makeDebugInfoNone(Builder *this) {
   long lVar1;
   int iVar2;
   undefined4 uVar3;
   Instruction *this_00;
   ulong uVar4;
   long lVar5;
   ulong uVar6;
   ulong uVar7;
   ulong uVar8;
   long in_FS_OFFSET;
   Instruction *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   uVar3 = makeVoidType(this);
   *(undefined4*)( this_00 + 0x10 ) = 0xc;
   iVar2 = *(int*)( this + 0x1d0 );
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_00 + 0xc ) = uVar3;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(int*)( this + 0x1d0 ) = iVar2 + 1;
   *(int*)( this_00 + 8 ) = iVar2 + 1;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, 2);
   Instruction::addIdOperand(this_00, *(uint*)( this + 0x50 ));
   Instruction::addImmediateOperand(this_00, 0);
   local_28 = this_00;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_28);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_28);
   lVar5 = *(long*)( this + 0x1b0 );
   uVar8 = ( ulong ) * (uint*)( this_00 + 8 );
   uVar4 = *(long*)( this + 0x1b8 ) - lVar5 >> 3;
   uVar6 = uVar8;
   if (uVar4 <= uVar8) {
      uVar7 = ( ulong )(*(uint*)( this_00 + 8 ) + 0x10);
      if (uVar4 < uVar7) {
         std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_default_append((vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)( this + 0x1b0 ), uVar7 - uVar4);
         uVar6 = ( ulong ) * (uint*)( this_00 + 8 );
         lVar5 = *(long*)( this + 0x1b0 );
      }
 else if (( uVar7 < uVar4 ) && ( lVar1 = lVar5 + uVar7 * 8 * (long*)( this + 0x1b8 ) != lVar1 )) {
         *(long*)( this + 0x1b8 ) = lVar1;
      }

   }

   *(Instruction**)( lVar5 + uVar8 * 8 ) = this_00;
   *(int*)( this + 0x54 ) = (int)uVar6;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeDebugInfoNone() */void spv::Builder::makeDebugInfoNone(Builder *this) {
   if (*(int*)( this + 0x54 ) != 0) {
      return;
   }

   makeDebugInfoNone(this);
   return;
}
/* spv::Builder::makeDebugExpression() [clone .part.0] */ulong spv::Builder::makeDebugExpression(Builder *this) {
   long lVar1;
   int iVar2;
   undefined4 uVar3;
   Instruction *this_00;
   ulong uVar4;
   long lVar5;
   ulong uVar6;
   ulong uVar7;
   ulong uVar8;
   long in_FS_OFFSET;
   Instruction *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   uVar3 = makeVoidType(this);
   *(undefined4*)( this_00 + 0x10 ) = 0xc;
   iVar2 = *(int*)( this + 0x1d0 );
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_00 + 0xc ) = uVar3;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(int*)( this + 0x1d0 ) = iVar2 + 1;
   *(int*)( this_00 + 8 ) = iVar2 + 1;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, 2);
   Instruction::addIdOperand(this_00, *(uint*)( this + 0x50 ));
   Instruction::addImmediateOperand(this_00, 0x1f);
   local_28 = this_00;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_28);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_28);
   lVar5 = *(long*)( this + 0x1b0 );
   uVar8 = ( ulong ) * (uint*)( this_00 + 8 );
   uVar4 = *(long*)( this + 0x1b8 ) - lVar5 >> 3;
   uVar6 = uVar8;
   if (uVar4 <= uVar8) {
      uVar7 = ( ulong )(*(uint*)( this_00 + 8 ) + 0x10);
      if (uVar4 < uVar7) {
         std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_default_append((vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)( this + 0x1b0 ), uVar7 - uVar4);
         uVar6 = ( ulong ) * (uint*)( this_00 + 8 );
         lVar5 = *(long*)( this + 0x1b0 );
      }
 else if (( uVar7 < uVar4 ) && ( lVar1 = lVar5 + uVar7 * 8 * (long*)( this + 0x1b8 ) != lVar1 )) {
         *(long*)( this + 0x1b8 ) = lVar1;
      }

   }

   *(Instruction**)( lVar5 + uVar8 * 8 ) = this_00;
   *(int*)( this + 0x58 ) = (int)uVar6;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeDebugExpression() */void spv::Builder::makeDebugExpression(Builder *this) {
   if (*(int*)( this + 0x58 ) != 0) {
      return;
   }

   makeDebugExpression(this);
   return;
}
/* spv::Builder::makePointerFromForwardPointer(spv::StorageClass, unsigned int, unsigned int) */undefined4 spv::Builder::makePointerFromForwardPointer(Builder *this, uint param_2, undefined4 param_3, uint param_4) {
   _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this_00;
   undefined4 uVar1;
   undefined8 *puVar2;
   long *plVar3;
   Instruction *this_01;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar4;
   long lVar5;
   long in_FS_OFFSET;
   Instruction *local_50;
   Instruction *local_48;
   long local_40;
   this_00 = (_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x388 );
   lVar5 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      local_48._0_4_ = 0x20;
      plVar3 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
      if ((int)( plVar3[1] - *plVar3 >> 3 ) <= (int)lVar5) {
         this_01 = (Instruction*)operator_new(0x60);
         *(undefined***)this_01 = &PTR__Instruction_0011c5f0;
         *(undefined4*)( this_01 + 0x38 ) = 0;
         *(undefined4*)( this_01 + 8 ) = param_3;
         *(undefined8*)( this_01 + 0xc ) = 0x2000000000;
         *(undefined8*)( this_01 + 0x40 ) = 0;
         *(undefined4*)( this_01 + 0x48 ) = 0;
         *(undefined1(*) [16])( this_01 + 0x18 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_01 + 0x28 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_01 + 0x50 ) = (undefined1[16])0x0;
         local_50 = this_01;
         Instruction::reserveOperands(this_01, 2);
         Instruction::addImmediateOperand(this_01, param_2);
         Instruction::addIdOperand(this_01, param_4);
         local_48 = (Instruction*)CONCAT44(local_48._4_4_, 0x20);
         pvVar4 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
         puVar2 = *(undefined8**)( pvVar4 + 8 );
         if (puVar2 == *(undefined8**)( pvVar4 + 0x10 )) {
            std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar4, puVar2, &local_50);
         }
 else {
            *puVar2 = this_01;
            *(undefined8**)( pvVar4 + 8 ) = puVar2 + 1;
         }

         local_48 = this_01;
         std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_48);
         std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
         Module::mapInstruction((Module*)( this + 400 ), this_01);
         uVar1 = *(undefined4*)( this_01 + 8 );
         LAB_00107420:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return uVar1;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      local_48 = (Instruction*)CONCAT44(local_48._4_4_, 0x20);
      plVar3 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
      local_50 = *(Instruction**)( *plVar3 + lVar5 * 8 );
      if (( param_2 == **(uint**)( local_50 + 0x18 ) ) && ( param_4 == ( *(uint**)( local_50 + 0x18 ) )[1] )) {
         uVar1 = *(undefined4*)( local_50 + 8 );
         goto LAB_00107420;
      }

      lVar5 = lVar5 + 1;
   }
 while ( true );
}
/* spv::Builder::makeCooperativeMatrixTypeKHR(unsigned int, unsigned int, unsigned int, unsigned
   int, unsigned int) */undefined4 spv::Builder::makeCooperativeMatrixTypeKHR(Builder *this, uint param_1, uint param_2, uint param_3, uint param_4, uint param_5) {
   _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this_00;
   undefined4 uVar1;
   int iVar2;
   uint *puVar3;
   undefined8 *puVar4;
   long *plVar5;
   Instruction *this_01;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar6;
   long lVar7;
   long in_FS_OFFSET;
   Instruction *local_50;
   Instruction *local_48;
   long local_40;
   this_00 = (_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x388 );
   lVar7 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      local_48._0_4_ = 0x1168;
      plVar5 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
      if ((int)( plVar5[1] - *plVar5 >> 3 ) <= (int)lVar7) {
         this_01 = (Instruction*)operator_new(0x60);
         iVar2 = *(int*)( this + 0x1d0 );
         *(undefined***)this_01 = &PTR__Instruction_0011c5f0;
         *(undefined4*)( this_01 + 0x38 ) = 0;
         *(int*)( this + 0x1d0 ) = iVar2 + 1;
         *(int*)( this_01 + 8 ) = iVar2 + 1;
         *(undefined8*)( this_01 + 0xc ) = 0x116800000000;
         *(undefined8*)( this_01 + 0x40 ) = 0;
         *(undefined4*)( this_01 + 0x48 ) = 0;
         *(undefined1(*) [16])( this_01 + 0x18 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_01 + 0x28 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_01 + 0x50 ) = (undefined1[16])0x0;
         local_50 = this_01;
         Instruction::reserveOperands(this_01, 5);
         Instruction::addIdOperand(this_01, param_1);
         Instruction::addIdOperand(this_01, param_2);
         Instruction::addIdOperand(this_01, param_3);
         Instruction::addIdOperand(this_01, param_4);
         Instruction::addIdOperand(this_01, param_5);
         local_48 = (Instruction*)CONCAT44(local_48._4_4_, 0x1168);
         pvVar6 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
         puVar4 = *(undefined8**)( pvVar6 + 8 );
         if (puVar4 == *(undefined8**)( pvVar6 + 0x10 )) {
            std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar6, puVar4, &local_50);
         }
 else {
            *puVar4 = this_01;
            *(undefined8**)( pvVar6 + 8 ) = puVar4 + 1;
         }

         local_48 = this_01;
         std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_48);
         std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
         Module::mapInstruction((Module*)( this + 400 ), this_01);
         uVar1 = *(undefined4*)( this_01 + 8 );
         LAB_00107631:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return uVar1;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      local_48 = (Instruction*)CONCAT44(local_48._4_4_, 0x1168);
      plVar5 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
      local_50 = *(Instruction**)( *plVar5 + lVar7 * 8 );
      puVar3 = *(uint**)( local_50 + 0x18 );
      if (( ( ( param_1 == *puVar3 ) && ( param_2 == puVar3[1] ) ) && ( param_3 == puVar3[2] ) ) && ( ( param_4 == puVar3[3] && ( param_5 == puVar3[4] ) ) )) {
         uVar1 = *(undefined4*)( local_50 + 8 );
         goto LAB_00107631;
      }

      lVar7 = lVar7 + 1;
   }
 while ( true );
}
/* spv::Builder::makeCooperativeMatrixTypeNV(unsigned int, unsigned int, unsigned int, unsigned int)
    */undefined4 spv::Builder::makeCooperativeMatrixTypeNV(Builder *this, uint param_1, uint param_2, uint param_3, uint param_4) {
   _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this_00;
   undefined4 uVar1;
   int iVar2;
   uint *puVar3;
   undefined8 *puVar4;
   long *plVar5;
   Instruction *this_01;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar6;
   long lVar7;
   long in_FS_OFFSET;
   Instruction *local_50;
   Instruction *local_48;
   long local_40;
   this_00 = (_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x388 );
   lVar7 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      local_48._0_4_ = 0x14ee;
      plVar5 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
      if ((int)( plVar5[1] - *plVar5 >> 3 ) <= (int)lVar7) {
         this_01 = (Instruction*)operator_new(0x60);
         iVar2 = *(int*)( this + 0x1d0 );
         *(undefined***)this_01 = &PTR__Instruction_0011c5f0;
         *(undefined4*)( this_01 + 0x38 ) = 0;
         *(int*)( this + 0x1d0 ) = iVar2 + 1;
         *(int*)( this_01 + 8 ) = iVar2 + 1;
         *(undefined8*)( this_01 + 0xc ) = 0x14ee00000000;
         *(undefined8*)( this_01 + 0x40 ) = 0;
         *(undefined4*)( this_01 + 0x48 ) = 0;
         *(undefined1(*) [16])( this_01 + 0x18 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_01 + 0x28 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_01 + 0x50 ) = (undefined1[16])0x0;
         local_50 = this_01;
         Instruction::reserveOperands(this_01, 4);
         Instruction::addIdOperand(this_01, param_1);
         Instruction::addIdOperand(this_01, param_2);
         Instruction::addIdOperand(this_01, param_3);
         Instruction::addIdOperand(this_01, param_4);
         local_48 = (Instruction*)CONCAT44(local_48._4_4_, 0x14ee);
         pvVar6 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
         puVar4 = *(undefined8**)( pvVar6 + 8 );
         if (puVar4 == *(undefined8**)( pvVar6 + 0x10 )) {
            std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar6, puVar4, &local_50);
         }
 else {
            *puVar4 = this_01;
            *(undefined8**)( pvVar6 + 8 ) = puVar4 + 1;
         }

         local_48 = this_01;
         std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_48);
         std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
         Module::mapInstruction((Module*)( this + 400 ), this_01);
         uVar1 = *(undefined4*)( this_01 + 8 );
         LAB_00107825:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return uVar1;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      local_48 = (Instruction*)CONCAT44(local_48._4_4_, 0x14ee);
      plVar5 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
      local_50 = *(Instruction**)( *plVar5 + lVar7 * 8 );
      puVar3 = *(uint**)( local_50 + 0x18 );
      if (( ( ( param_1 == *puVar3 ) && ( param_2 == puVar3[1] ) ) && ( param_3 == puVar3[2] ) ) && ( param_4 == puVar3[3] )) {
         uVar1 = *(undefined4*)( local_50 + 8 );
         goto LAB_00107825;
      }

      lVar7 = lVar7 + 1;
   }
 while ( true );
}
/* spv::Builder::makeCooperativeMatrixTypeWithSameShape(unsigned int, unsigned int) */void spv::Builder::makeCooperativeMatrixTypeWithSameShape(Builder *this, uint param_1, uint param_2) {
   long lVar1;
   long lVar2;
   lVar1 = *(long*)( *(long*)( this + 0x1b0 ) + (ulong)param_2 * 8 );
   lVar2 = *(long*)( lVar1 + 0x18 );
   if (*(int*)( lVar1 + 0x10 ) != 0x14ee) {
      makeCooperativeMatrixTypeKHR(this, param_1, *(uint*)( lVar2 + 4 ), *(uint*)( lVar2 + 8 ), *(uint*)( lVar2 + 0xc ), *(uint*)( lVar2 + 0x10 ));
      return;
   }

   makeCooperativeMatrixTypeNV(this, param_1, *(uint*)( lVar2 + 4 ), *(uint*)( lVar2 + 8 ), *(uint*)( lVar2 + 0xc ));
   return;
}
/* spv::Builder::makeGenericType(spv::Op, std::vector<spv::IdImmediate,
   std::allocator<spv::IdImmediate> >&) */undefined4 spv::Builder::makeGenericType(Builder *this, undefined4 param_2, long *param_3) {
   _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this_00;
   char *pcVar1;
   undefined4 uVar2;
   uint uVar3;
   long lVar4;
   uint *puVar5;
   ulong *puVar6;
   undefined8 *puVar7;
   byte bVar8;
   int iVar9;
   long *plVar10;
   ulong uVar11;
   ulong uVar12;
   Instruction *this_01;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar13;
   long lVar14;
   long in_FS_OFFSET;
   Instruction *local_68;
   Instruction *local_60;
   ulong *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   lVar14 = 0;
   this_00 = (_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x388 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      local_58 = (ulong*)CONCAT44(local_58._4_4_, param_2);
      plVar10 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_58);
      if ((int)( plVar10[1] - *plVar10 >> 3 ) <= (int)lVar14) {
         uVar11 = 0;
         this_01 = (Instruction*)operator_new(0x60);
         lVar14 = param_3[1];
         iVar9 = *(int*)( this + 0x1d0 );
         lVar4 = *param_3;
         *(undefined***)this_01 = &PTR__Instruction_0011c5f0;
         *(undefined4*)( this_01 + 0xc ) = 0;
         *(int*)( this + 0x1d0 ) = iVar9 + 1;
         *(int*)( this_01 + 8 ) = iVar9 + 1;
         *(undefined4*)( this_01 + 0x10 ) = param_2;
         *(undefined4*)( this_01 + 0x38 ) = 0;
         *(undefined8*)( this_01 + 0x40 ) = 0;
         *(undefined4*)( this_01 + 0x48 ) = 0;
         *(undefined1(*) [16])( this_01 + 0x18 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_01 + 0x28 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_01 + 0x50 ) = (undefined1[16])0x0;
         local_68 = this_01;
         Instruction::reserveOperands(this_01, lVar14 - lVar4 >> 3);
         lVar14 = *param_3;
         if (lVar14 != param_3[1]) {
            do {
               pcVar1 = (char*)( lVar14 + uVar11 * 8 );
               uVar3 = *(uint*)( pcVar1 + 4 );
               if (*pcVar1 == '\0') {
                  local_60 = (Instruction*)CONCAT44(local_60._4_4_, uVar3);
                  puVar5 = *(uint**)( this_01 + 0x20 );
                  if (puVar5 == *(uint**)( this_01 + 0x28 )) {
                     std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_01 + 0x18 ), puVar5, (unique_ptr*)&local_60);
                  }
 else {
                     *puVar5 = uVar3;
                     *(uint**)( this_01 + 0x20 ) = puVar5 + 1;
                  }

                  puVar6 = *(ulong**)( this_01 + 0x40 );
                  if (puVar6 == *(ulong**)( this_01 + 0x50 )) {
                     local_50 = *(undefined4*)( this_01 + 0x48 );
                     local_58 = puVar6;
                     std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_01 + 0x30, puVar6, CONCAT44(uStack_4c, local_50), 0);
                  }
 else {
                     iVar9 = *(int*)( this_01 + 0x48 );
                     if (iVar9 == 0x3f) {
                        *(undefined4*)( this_01 + 0x48 ) = 0;
                        *(ulong**)( this_01 + 0x40 ) = puVar6 + 1;
                     }
 else {
                        *(int*)( this_01 + 0x48 ) = iVar9 + 1;
                     }

                     bVar8 = (byte)iVar9 & 0x3f;
                     *puVar6 = *puVar6 & ( -2L << bVar8 | 0xfffffffffffffffeU >> 0x40 - bVar8 );
                  }

               }
 else {
                  Instruction::addIdOperand(this_01, uVar3);
               }

               lVar14 = *param_3;
               uVar11 = uVar11 + 1;
            }
 while ( uVar11 < ( ulong )(param_3[1] - lVar14 >> 3) );
         }

         local_60 = (Instruction*)CONCAT44(local_60._4_4_, param_2);
         pvVar13 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_60);
         puVar7 = *(undefined8**)( pvVar13 + 8 );
         if (puVar7 == *(undefined8**)( pvVar13 + 0x10 )) {
            std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar13, puVar7, &local_68);
         }
 else {
            *puVar7 = this_01;
            *(undefined8**)( pvVar13 + 8 ) = puVar7 + 1;
         }

         local_60 = this_01;
         std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_60);
         std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
         Module::mapInstruction((Module*)( this + 400 ), this_01);
         uVar2 = *(undefined4*)( this_01 + 8 );
         LAB_00107b26:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return uVar2;
      }

      local_58 = (ulong*)CONCAT44(local_58._4_4_, param_2);
      plVar10 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_58);
      local_68 = *(Instruction**)( *plVar10 + lVar14 * 8 );
      uVar11 = *(long*)( local_68 + 0x20 ) - *(long*)( local_68 + 0x18 ) >> 2;
      iVar9 = (int)uVar11;
      if ((long)iVar9 == param_3[1] - *param_3 >> 3) {
         if (iVar9 < 1) {
            LAB_00107964:uVar2 = *(undefined4*)( local_68 + 8 );
            goto LAB_00107b26;
         }

         uVar12 = 0;
         while (*(int*)( *param_3 + 4 + uVar12 * 8 ) == *(int*)( *(long*)( local_68 + 0x18 ) + uVar12 * 4 )) {
            uVar12 = uVar12 + 1;
            if (uVar12 == ( uVar11 & 0xffffffff )) goto LAB_00107964;
         }
;
      }

      lVar14 = lVar14 + 1;
   }
 while ( true );
}
/* spv::Builder::makeHitObjectNVType() */undefined4 spv::Builder::makeHitObjectNVType(Builder *this) {
   _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this_00;
   int iVar1;
   undefined8 *puVar2;
   long *plVar3;
   long lVar4;
   Instruction *pIVar5;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar6;
   long in_FS_OFFSET;
   Instruction *local_40;
   Instruction *local_38;
   long local_30;
   this_00 = (_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x388 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38._0_4_ = 0x14a1;
   plVar3 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_38);
   if (*plVar3 == plVar3[1]) {
      pIVar5 = (Instruction*)operator_new(0x60);
      iVar1 = *(int*)( this + 0x1d0 );
      local_38 = (Instruction*)CONCAT44(local_38._4_4_, 0x14a1);
      *(undefined***)pIVar5 = &PTR__Instruction_0011c5f0;
      *(undefined4*)( pIVar5 + 0x38 ) = 0;
      *(int*)( this + 0x1d0 ) = iVar1 + 1;
      *(int*)( pIVar5 + 8 ) = iVar1 + 1;
      *(undefined8*)( pIVar5 + 0xc ) = 0x14a100000000;
      *(undefined8*)( pIVar5 + 0x40 ) = 0;
      *(undefined4*)( pIVar5 + 0x48 ) = 0;
      *(undefined1(*) [16])( pIVar5 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( pIVar5 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( pIVar5 + 0x50 ) = (undefined1[16])0x0;
      local_40 = pIVar5;
      pvVar6 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_38);
      puVar2 = *(undefined8**)( pvVar6 + 8 );
      if (puVar2 == *(undefined8**)( pvVar6 + 0x10 )) {
         std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar6, puVar2, &local_40);
      }
 else {
         *puVar2 = pIVar5;
         *(undefined8**)( pvVar6 + 8 ) = puVar2 + 1;
      }

      local_38 = pIVar5;
      std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_38);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
      Module::mapInstruction((Module*)( this + 400 ), pIVar5);
   }
 else {
      local_38 = (Instruction*)CONCAT44(local_38._4_4_, 0x14a1);
      lVar4 = std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_38);
      pIVar5 = *(Instruction**)( *(long*)( lVar4 + 8 ) + -8 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return *(undefined4*)( pIVar5 + 8 );
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeIntConstant(unsigned int, unsigned int, bool) */ulong spv::Builder::makeIntConstant(Builder *this, uint param_1, uint param_2, bool param_3) {
   long lVar1;
   int iVar2;
   undefined8 *puVar3;
   ulong uVar4;
   Instruction *this_00;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar5;
   long lVar6;
   ulong uVar7;
   ulong uVar8;
   ulong uVar9;
   undefined4 uVar10;
   long in_FS_OFFSET;
   Instruction *local_40;
   Instruction *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3) {
      uVar10 = 0x32;
   }
 else {
      uVar4 = findScalarConstant(this, 0x15, 0x2b, param_1, param_2);
      uVar10 = 0x2b;
      if ((int)uVar4 != 0) goto LAB_00107e33;
   }

   this_00 = (Instruction*)operator_new(0x60);
   iVar2 = *(int*)( this + 0x1d0 );
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(uint*)( this_00 + 0xc ) = param_1;
   *(int*)( this + 0x1d0 ) = iVar2 + 1;
   *(int*)( this_00 + 8 ) = iVar2 + 1;
   *(undefined4*)( this_00 + 0x10 ) = uVar10;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   local_40 = this_00;
   Instruction::addImmediateOperand(this_00, param_2);
   local_38 = this_00;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_38);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
   local_38 = (Instruction*)CONCAT44(local_38._4_4_, 0x15);
   pvVar5 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x318 ), (uint*)&local_38);
   puVar3 = *(undefined8**)( pvVar5 + 8 );
   if (puVar3 == *(undefined8**)( pvVar5 + 0x10 )) {
      std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar5, puVar3, &local_40);
   }
 else {
      *puVar3 = this_00;
      *(undefined8**)( pvVar5 + 8 ) = puVar3 + 1;
   }

   lVar6 = *(long*)( this + 0x1b0 );
   uVar9 = ( ulong ) * (uint*)( this_00 + 8 );
   uVar7 = *(long*)( this + 0x1b8 ) - lVar6 >> 3;
   uVar4 = uVar9;
   if (uVar7 <= uVar9) {
      uVar8 = ( ulong )(*(uint*)( this_00 + 8 ) + 0x10);
      if (uVar7 < uVar8) {
         std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_default_append((vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)( this + 0x1b0 ), uVar8 - uVar7);
         uVar4 = ( ulong ) * (uint*)( this_00 + 8 );
         lVar6 = *(long*)( this + 0x1b0 );
      }
 else if (( uVar8 < uVar7 ) && ( lVar1 = lVar6 + uVar8 * 8 * (long*)( this + 0x1b8 ) != lVar1 )) {
         *(long*)( this + 0x1b8 ) = lVar1;
      }

   }

   *(Instruction**)( lVar6 + uVar9 * 8 ) = this_00;
   LAB_00107e33:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeInt64Constant(unsigned int, unsigned long long, bool) */ulong spv::Builder::makeInt64Constant(Builder *this, uint param_1, ulonglong param_2, bool param_3) {
   int iVar1;
   undefined8 *puVar2;
   ulong uVar3;
   Instruction *this_00;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar4;
   undefined4 uVar5;
   long in_FS_OFFSET;
   Instruction *local_50;
   Instruction *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3) {
      uVar5 = 0x32;
   }
 else {
      uVar3 = findScalarConstant(this, 0x15, 0x2b, param_1, param_2 & 0xffffffff);
      uVar5 = 0x2b;
      if ((int)uVar3 != 0) goto LAB_00107ffd;
   }

   this_00 = (Instruction*)operator_new(0x60);
   iVar1 = *(int*)( this + 0x1d0 );
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(uint*)( this_00 + 0xc ) = param_1;
   *(int*)( this + 0x1d0 ) = iVar1 + 1;
   *(int*)( this_00 + 8 ) = iVar1 + 1;
   *(undefined4*)( this_00 + 0x10 ) = uVar5;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   local_50 = this_00;
   Instruction::reserveOperands(this_00, 2);
   Instruction::addImmediateOperand(this_00, (uint)param_2);
   Instruction::addImmediateOperand(this_00, ( uint )(param_2 >> 0x20));
   local_48 = this_00;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_48);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   local_48 = (Instruction*)CONCAT44(local_48._4_4_, 0x15);
   pvVar4 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x318 ), (uint*)&local_48);
   puVar2 = *(undefined8**)( pvVar4 + 8 );
   if (puVar2 == *(undefined8**)( pvVar4 + 0x10 )) {
      std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar4, puVar2, &local_50);
   }
 else {
      *puVar2 = this_00;
      *(undefined8**)( pvVar4 + 8 ) = puVar2 + 1;
   }

   Module::mapInstruction((Module*)( this + 400 ), this_00);
   uVar3 = ( ulong ) * (uint*)( this_00 + 8 );
   LAB_00107ffd:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::findStructConstant(unsigned int, std::vector<unsigned int, std::allocator<unsigned
   int> > const&) */undefined4 spv::Builder::findStructConstant(Builder *this, uint param_1, vector *param_2) {
   long lVar1;
   int iVar2;
   long *plVar3;
   ulong uVar4;
   long lVar5;
   bool bVar6;
   uint local_2c[3];
   lVar5 = 0;
   local_2c[0] = param_1;
   while (true) {
      plVar3 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x350 ), local_2c);
      if ((int)( plVar3[1] - *plVar3 >> 3 ) <= (int)lVar5) {
         return 0;
      }

      plVar3 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x350 ), local_2c);
      lVar1 = *(long*)( *plVar3 + lVar5 * 8 );
      iVar2 = (int)( *(long*)( lVar1 + 0x20 ) - *(long*)( lVar1 + 0x18 ) >> 2 );
      if (iVar2 < 1) break;
      uVar4 = 0;
      while (*(int*)( *(long*)param_2 + uVar4 * 4 ) == *(int*)( *(long*)( lVar1 + 0x18 ) + uVar4 * 4 )) {
         bVar6 = uVar4 == iVar2 - 1;
         uVar4 = uVar4 + 1;
         if (bVar6) goto LAB_001080f0;
      }
;
      lVar5 = lVar5 + 1;
   }
;
   LAB_001080f0:return *(undefined4*)( lVar1 + 8 );
}
/* spv::Builder::makeDebugSource(unsigned int) */int spv::Builder::makeDebugSource(Builder *this, uint param_1) {
   undefined8 *puVar1;
   long *plVar2;
   long *plVar3;
   long *plVar4;
   Builder *pBVar5;
   undefined4 uVar6;
   uint uVar7;
   Instruction *this_00;
   Builder *pBVar8;
   int *piVar9;
   ulong uVar10;
   Builder *pBVar11;
   int iVar12;
   long in_FS_OFFSET;
   uint local_3c;
   Instruction *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_3c = param_1;
   if (*(long*)( this + 0x560 ) == 0) {
      for (puVar1 = *(undefined8**)( this + 0x558 ); puVar1 != (undefined8*)0x0; puVar1 = (undefined8*)*puVar1) {
         if (param_1 == *(uint*)( puVar1 + 1 )) goto LAB_00108161;
      }

   }
 else {
      uVar10 = (ulong)param_1 % *(ulong*)( this + 0x550 );
      plVar2 = *(long**)( *(long*)( this + 0x548 ) + uVar10 * 8 );
      if (plVar2 != (long*)0x0) {
         uVar7 = *(uint*)( (long*)*plVar2 + 1 );
         plVar4 = (long*)*plVar2;
         while (param_1 != uVar7) {
            plVar3 = (long*)*plVar4;
            if (( plVar3 == (long*)0x0 ) || ( uVar7 = *(uint*)( plVar3 + 1 ) ),plVar2 = plVar4,plVar4 = plVar3,uVar10 != (ulong)uVar7 % *(ulong*)( this + 0x550 )) goto LAB_001081f0;
         }
;
         if (*plVar2 != 0) goto LAB_00108161;
      }

   }

   LAB_001081f0:iVar12 = *(int*)( this + 0x1d0 ) + 1;
   *(int*)( this + 0x1d0 ) = iVar12;
   this_00 = (Instruction*)operator_new(0x60);
   uVar6 = makeVoidType(this);
   *(int*)( this_00 + 8 ) = iVar12;
   *(undefined4*)( this_00 + 0xc ) = uVar6;
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_00 + 0x10 ) = 0xc;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, 3);
   Instruction::addIdOperand(this_00, *(uint*)( this + 0x50 ));
   Instruction::addImmediateOperand(this_00, 0x23);
   Instruction::addIdOperand(this_00, param_1);
   if (this[0xec] != (Builder)0x0) {
      if (*(uint*)( this + 0x8c ) == param_1) {
         uVar7 = getStringId(this, (string*)( this + 0x60 ));
         LAB_001082ee:if (uVar7 != 0) {
            Instruction::addIdOperand(this_00, uVar7);
         }

      }
 else {
         pBVar5 = *(Builder**)( this + 0x4f8 );
         pBVar11 = this + 0x4f0;
         if (*(Builder**)( this + 0x4f8 ) != (Builder*)0x0) {
            do {
               while (true) {
                  pBVar8 = pBVar5;
                  if (*(uint*)( pBVar8 + 0x20 ) < param_1) break;
                  pBVar5 = *(Builder**)( pBVar8 + 0x10 );
                  pBVar11 = pBVar8;
                  if (*(Builder**)( pBVar8 + 0x10 ) == (Builder*)0x0) goto LAB_001082d8;
               }
;
               pBVar5 = *(Builder**)( pBVar8 + 0x18 );
            }
 while ( *(Builder**)( pBVar8 + 0x18 ) != (Builder*)0x0 );
            LAB_001082d8:if (( this + 0x4f0 != pBVar11 ) && ( *(uint*)( pBVar11 + 0x20 ) <= param_1 )) {
               uVar7 = getStringId(this, *(string**)( pBVar11 + 0x28 ));
               goto LAB_001082ee;
            }

         }

      }

   }

   local_38 = this_00;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_38);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
   Module::mapInstruction((Module*)( this + 400 ), this_00);
   piVar9 = (int*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x548 ), &local_3c);
   *piVar9 = iVar12;
   LAB_00108171:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar12;
   LAB_00108161:piVar9 = (int*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x548 ), &local_3c);
   iVar12 = *piVar9;
   goto LAB_00108171;
}
/* WARNING: Removing unreachable block (ram,0x0010850a) *//* spv::Builder::makeIntegerDebugType(int, bool) */undefined4 spv::Builder::makeIntegerDebugType(Builder *this, int param_1, bool param_2) {
   _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this_00;
   int iVar1;
   uint *puVar2;
   undefined8 *puVar3;
   uint uVar4;
   undefined4 uVar5;
   long *plVar6;
   ulong uVar7;
   ulong uVar8;
   Instruction *this_01;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar9;
   long lVar10;
   char *pcVar11;
   long in_FS_OFFSET;
   Instruction *local_78;
   Instruction *local_70;
   long *local_68;
   ulong local_60;
   long local_58[5];
   local_58[3] = *(long*)( in_FS_OFFSET + 0x28 );
   plVar6 = local_58;
   if (param_1 == 0x10) {
      local_60 = 7;
      pcVar11 = "int16_t";
      if (!param_2) {
         local_60 = 8;
         pcVar11 = "uint16_t";
      }

   }
 else if (param_1 == 0x40) {
      local_60 = 7;
      pcVar11 = "int64_t";
      if (!param_2) {
         local_60 = 8;
         pcVar11 = "uint64_t";
      }

   }
 else if (param_1 == 8) {
      if (param_2) {
         local_60 = 6;
         pcVar11 = "int8_t";
         goto LAB_001083e1;
      }

      local_60 = 7;
      pcVar11 = "uint8_t";
   }
 else {
      local_60 = 3;
      pcVar11 = "int";
      if (!param_2) {
         local_60 = 4;
         pcVar11 = (char*)( (long)&_LC20 + 4 );
      }

   }

   if (7 < (uint)local_60) {
      uVar7 = 0;
      do {
         uVar4 = (int)uVar7 + 8;
         uVar8 = (ulong)uVar4;
         *(undefined8*)( (long)local_58 + uVar7 ) = *(undefined8*)( pcVar11 + uVar7 );
         uVar7 = uVar8;
      }
 while ( uVar4 < ( (uint)local_60 & 0xfffffff8 ) );
      pcVar11 = pcVar11 + uVar8;
      plVar6 = (long*)( (long)local_58 + uVar8 );
   }

   LAB_001083e1:lVar10 = 0;
   if (( local_60 & 4 ) != 0) {
      *(undefined4*)plVar6 = *(undefined4*)pcVar11;
      lVar10 = 4;
   }

   if (( local_60 & 2 ) != 0) {
      *(undefined2*)( (long)plVar6 + lVar10 ) = *(undefined2*)( pcVar11 + lVar10 );
      lVar10 = lVar10 + 2;
   }

   if (( local_60 & 1 ) != 0) {
      *(char*)( (long)plVar6 + lVar10 ) = pcVar11[lVar10];
   }

   *(undefined1*)( (long)local_58 + local_60 ) = 0;
   local_68 = local_58;
   uVar4 = getStringId(this, (string*)&local_68);
   if (local_68 != local_58) {
      operator_delete(local_68, local_58[0] + 1);
   }

   this_00 = (_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x3c0 );
   lVar10 = 0;
   do {
      local_70._0_4_ = 2;
      plVar6 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_70);
      if ((int)( plVar6[1] - *plVar6 >> 3 ) <= (int)lVar10) {
         this_01 = (Instruction*)operator_new(0x60);
         uVar5 = makeVoidType(this);
         *(undefined4*)( this_01 + 0x10 ) = 0xc;
         iVar1 = *(int*)( this + 0x1d0 );
         *(undefined***)this_01 = &PTR__Instruction_0011c5f0;
         *(undefined4*)( this_01 + 0xc ) = uVar5;
         *(undefined4*)( this_01 + 0x38 ) = 0;
         *(int*)( this + 0x1d0 ) = iVar1 + 1;
         *(int*)( this_01 + 8 ) = iVar1 + 1;
         *(undefined8*)( this_01 + 0x40 ) = 0;
         *(undefined4*)( this_01 + 0x48 ) = 0;
         *(undefined1(*) [16])( this_01 + 0x18 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_01 + 0x28 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_01 + 0x50 ) = (undefined1[16])0x0;
         local_78 = this_01;
         Instruction::reserveOperands(this_01, 6);
         Instruction::addIdOperand(this_01, *(uint*)( this + 0x50 ));
         Instruction::addImmediateOperand(this_01, 2);
         Instruction::addIdOperand(this_01, uVar4);
         uVar4 = makeUintConstant(this, param_1, false);
         Instruction::addIdOperand(this_01, uVar4);
         uVar4 = 4;
         if (!param_2) {
            uVar4 = 6;
         }

         uVar4 = makeUintConstant(this, uVar4, false);
         Instruction::addIdOperand(this_01, uVar4);
         uVar4 = makeUintConstant(this, 0, false);
         Instruction::addIdOperand(this_01, uVar4);
         local_70 = (Instruction*)CONCAT44(local_70._4_4_, 2);
         pvVar9 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_70);
         puVar3 = *(undefined8**)( pvVar9 + 8 );
         if (puVar3 == *(undefined8**)( pvVar9 + 0x10 )) {
            std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar9, puVar3, &local_78);
         }
 else {
            *puVar3 = this_01;
            *(undefined8**)( pvVar9 + 8 ) = puVar3 + 1;
         }

         local_70 = this_01;
         std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_70);
         std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_70);
         Module::mapInstruction((Module*)( this + 400 ), this_01);
         uVar5 = *(undefined4*)( this_01 + 8 );
         LAB_00108687:if (local_58[3] == *(long*)( in_FS_OFFSET + 0x28 )) {
            return uVar5;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      local_70 = (Instruction*)CONCAT44(local_70._4_4_, 2);
      plVar6 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_70);
      local_78 = *(Instruction**)( *plVar6 + lVar10 * 8 );
      puVar2 = *(uint**)( local_78 + 0x18 );
      if (( ( uVar4 == *puVar2 ) && ( puVar2[1] == param_1 ) ) && ( ( -(uint)!param_2 & 2 ) + 4 == puVar2[2] )) {
         uVar5 = *(undefined4*)( local_78 + 8 );
         goto LAB_00108687;
      }

      lVar10 = lVar10 + 1;
   }
 while ( true );
}
/* spv::Builder::makeIntegerType(int, bool) */undefined4 spv::Builder::makeIntegerType(Builder *this, int param_1, bool param_2) {
   _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this_00;
   int iVar1;
   undefined8 *puVar2;
   undefined4 uVar3;
   long *plVar4;
   Instruction *this_01;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar5;
   undefined4 *puVar6;
   long lVar7;
   long in_FS_OFFSET;
   Instruction *local_50;
   Instruction *local_48;
   long local_40;
   this_00 = (_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x388 );
   lVar7 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      local_48._0_4_ = 0x15;
      plVar4 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
      if ((int)( plVar4[1] - *plVar4 >> 3 ) <= (int)lVar7) {
         this_01 = (Instruction*)operator_new(0x60);
         iVar1 = *(int*)( this + 0x1d0 );
         *(undefined***)this_01 = &PTR__Instruction_0011c5f0;
         *(undefined4*)( this_01 + 0x38 ) = 0;
         *(int*)( this + 0x1d0 ) = iVar1 + 1;
         *(int*)( this_01 + 8 ) = iVar1 + 1;
         *(undefined8*)( this_01 + 0xc ) = 0x1500000000;
         *(undefined8*)( this_01 + 0x40 ) = 0;
         *(undefined4*)( this_01 + 0x48 ) = 0;
         *(undefined1(*) [16])( this_01 + 0x18 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_01 + 0x28 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_01 + 0x50 ) = (undefined1[16])0x0;
         local_50 = this_01;
         Instruction::reserveOperands(this_01, 2);
         Instruction::addImmediateOperand(this_01, param_1);
         Instruction::addImmediateOperand(this_01, (uint)param_2);
         local_48 = (Instruction*)CONCAT44(local_48._4_4_, 0x15);
         pvVar5 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
         puVar2 = *(undefined8**)( pvVar5 + 8 );
         if (puVar2 == *(undefined8**)( pvVar5 + 0x10 )) {
            std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar5, puVar2, &local_50);
         }
 else {
            *puVar2 = this_01;
            *(undefined8**)( pvVar5 + 8 ) = puVar2 + 1;
         }

         local_48 = this_01;
         std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_48);
         std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
         Module::mapInstruction((Module*)( this + 400 ), this_01);
         if (param_1 == 0x40) {
            local_48 = (Instruction*)CONCAT44(local_48._4_4_, 0xb);
            std::set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>::insert((set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>*)( this + 0x158 ), (Capability*)&local_48);
         }

         if (this[0xea] != (Builder)0x0) {
            uVar3 = makeIntegerDebugType(this, param_1, param_2);
            local_48 = (Instruction*)CONCAT44(local_48._4_4_, *(undefined4*)( this_01 + 8 ));
            puVar6 = (undefined4*)std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator []((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)( this + 0x518 ), (uint*)&local_48);
            *puVar6 = uVar3;
         }

         uVar3 = *(undefined4*)( this_01 + 8 );
         LAB_001088e1:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return uVar3;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      local_48 = (Instruction*)CONCAT44(local_48._4_4_, 0x15);
      plVar4 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
      local_50 = *(Instruction**)( *plVar4 + lVar7 * 8 );
      if (( param_1 == **(int**)( local_50 + 0x18 ) ) && ( ( *(int**)( local_50 + 0x18 ) )[1] == (uint)param_2 )) {
         uVar3 = *(undefined4*)( local_50 + 8 );
         goto LAB_001088e1;
      }

      lVar7 = lVar7 + 1;
   }
 while ( true );
}
/* spv::Builder::makeDebugFunctionType(unsigned int, std::vector<unsigned int,
   std::allocator<unsigned int> > const&) */int spv::Builder::makeDebugFunctionType(Builder *this, uint param_1, vector *param_2) {
   int iVar1;
   Builder *pBVar2;
   map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>> *this_00;
   Builder *pBVar3;
   int iVar4;
   long lVar5;
   long lVar6;
   uint *puVar7;
   undefined4 *puVar8;
   ulong *puVar9;
   undefined4 uVar10;
   uint uVar11;
   Instruction *this_01;
   uint *puVar12;
   Builder *pBVar13;
   Builder *pBVar14;
   Builder *pBVar15;
   long in_FS_OFFSET;
   uint local_6c;
   uint local_68;
   uint local_64;
   Instruction *local_60;
   ulong *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = *(int*)( this + 0x1d0 ) + 1;
   *(int*)( this + 0x1d0 ) = iVar1;
   local_6c = param_1;
   this_01 = (Instruction*)operator_new(0x60);
   uVar10 = makeVoidType(this);
   lVar5 = *(long*)( param_2 + 8 );
   *(int*)( this_01 + 8 ) = iVar1;
   lVar6 = *(long*)param_2;
   *(undefined***)this_01 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_01 + 0xc ) = uVar10;
   *(undefined4*)( this_01 + 0x10 ) = 0xc;
   *(undefined4*)( this_01 + 0x38 ) = 0;
   *(undefined8*)( this_01 + 0x40 ) = 0;
   *(undefined4*)( this_01 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_01 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_01 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_01 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_01, ( lVar5 - lVar6 >> 2 ) + 4);
   Instruction::addIdOperand(this_01, *(uint*)( this + 0x50 ));
   Instruction::addImmediateOperand(this_01, 8);
   uVar11 = makeUintConstant(this, 3, false);
   Instruction::addIdOperand(this_01, uVar11);
   this_00 = (map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)( this + 0x518 );
   puVar12 = (uint*)std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator [](this_00, &local_6c);
   Instruction::addIdOperand(this_01, *puVar12);
   puVar12 = *(uint**)param_2;
   puVar7 = *(uint**)( param_2 + 8 );
   pBVar3 = this + 0x520;
   do {
      if (puVar7 == puVar12) {
         local_60 = this_01;
         std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_60);
         std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
         Module::mapInstruction((Module*)( this + 400 ), this_01);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return iVar1;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      local_68 = *puVar12;
      pBVar15 = *(Builder**)( this + 0x528 );
      if (( *(int*)( *(long*)( *(long*)( this + 0x1b0 ) + (ulong)local_68 * 8 ) + 0x10 ) - 0x1cU & 0xfffffffb ) == 0) {
         local_64 = getContainedTypeId(this, local_68, 0);
         pBVar14 = pBVar3;
         pBVar13 = pBVar3;
         if (pBVar15 == (Builder*)0x0) {
            LAB_00108b13:local_60 = (Instruction*)&local_64;
            pBVar13 = (Builder*)std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<unsigned_int&&>,std::tuple<>>(this_00, pBVar13, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
         }
 else {
            do {
               while (true) {
                  pBVar13 = pBVar15;
                  pBVar2 = pBVar13 + 0x18;
                  if (local_64 <= *(uint*)( pBVar13 + 0x20 )) break;
                  pBVar13 = pBVar14;
                  pBVar15 = *(Builder**)pBVar2;
                  if (*(Builder**)pBVar2 == (Builder*)0x0) goto LAB_00108b09;
               }
;
               pBVar14 = pBVar13;
               pBVar15 = *(Builder**)( pBVar13 + 0x10 );
            }
 while ( *(Builder**)( pBVar13 + 0x10 ) != (Builder*)0x0 );
            LAB_00108b09:if (( pBVar3 == pBVar13 ) || ( local_64 < *(uint*)( pBVar13 + 0x20 ) )) goto LAB_00108b13;
         }

         puVar8 = *(undefined4**)( this_01 + 0x20 );
         local_60 = (Instruction*)CONCAT44(local_60._4_4_, *(undefined4*)( pBVar13 + 0x24 ));
         if (puVar8 == *(undefined4**)( this_01 + 0x28 )) {
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_01 + 0x18 ), puVar8, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
         }
 else {
            *puVar8 = *(undefined4*)( pBVar13 + 0x24 );
            *(undefined4**)( this_01 + 0x20 ) = puVar8 + 1;
         }

         puVar9 = *(ulong**)( this_01 + 0x40 );
         if (puVar9 == *(ulong**)( this_01 + 0x50 )) {
            local_50 = *(undefined4*)( this_01 + 0x48 );
            local_58 = puVar9;
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_01 + 0x30, puVar9, CONCAT44(uStack_4c, local_50), 1);
         }
 else {
            iVar4 = *(int*)( this_01 + 0x48 );
            if (iVar4 == 0x3f) {
               *(undefined4*)( this_01 + 0x48 ) = 0;
               *(ulong**)( this_01 + 0x40 ) = puVar9 + 1;
            }
 else {
               *(int*)( this_01 + 0x48 ) = iVar4 + 1;
            }

            *puVar9 = *puVar9 | 1L << ( (byte)iVar4 & 0x3f );
         }

      }
 else {
         pBVar14 = pBVar3;
         pBVar13 = pBVar3;
         if (pBVar15 == (Builder*)0x0) {
            LAB_00108c1b:local_60 = (Instruction*)&local_68;
            pBVar13 = (Builder*)std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<unsigned_int_const&>,std::tuple<>>(this_00, pBVar13, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
         }
 else {
            do {
               while (true) {
                  pBVar13 = pBVar15;
                  pBVar2 = pBVar13 + 0x18;
                  if (local_68 <= *(uint*)( pBVar13 + 0x20 )) break;
                  pBVar13 = pBVar14;
                  pBVar15 = *(Builder**)pBVar2;
                  if (*(Builder**)pBVar2 == (Builder*)0x0) goto LAB_00108c11;
               }
;
               pBVar14 = pBVar13;
               pBVar15 = *(Builder**)( pBVar13 + 0x10 );
            }
 while ( *(Builder**)( pBVar13 + 0x10 ) != (Builder*)0x0 );
            LAB_00108c11:if (( pBVar3 == pBVar13 ) || ( local_68 < *(uint*)( pBVar13 + 0x20 ) )) goto LAB_00108c1b;
         }

         Instruction::addIdOperand(this_01, *(uint*)( pBVar13 + 0x24 ));
      }

      puVar12 = puVar12 + 1;
   }
 while ( true );
}
/* spv::Builder::makeFunctionType(unsigned int, std::vector<unsigned int, std::allocator<unsigned
   int> > const&) */undefined4 spv::Builder::makeFunctionType(Builder *this, uint param_1, vector *param_2) {
   _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this_00;
   uint *puVar1;
   ulong *puVar2;
   undefined8 *puVar3;
   undefined4 uVar4;
   long *plVar5;
   long lVar6;
   int *piVar7;
   Instruction *pIVar8;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar9;
   undefined4 *puVar10;
   int iVar11;
   long lVar12;
   long lVar13;
   long in_FS_OFFSET;
   uint local_6c;
   Instruction *local_68;
   Instruction *local_60;
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   lVar12 = 0;
   this_00 = (_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x388 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      local_58._0_4_ = 0x21;
      plVar5 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)local_58);
      if ((int)( plVar5[1] - *plVar5 >> 3 ) <= (int)lVar12) {
         lVar13 = 0;
         local_6c = *(int*)( this + 0x1d0 ) + 1;
         *(uint*)( this + 0x1d0 ) = local_6c;
         pIVar8 = (Instruction*)operator_new(0x60);
         lVar12 = *(long*)( param_2 + 8 );
         lVar6 = *(long*)param_2;
         *(undefined***)pIVar8 = &PTR__Instruction_0011c5f0;
         *(undefined4*)( pIVar8 + 0x38 ) = 0;
         *(uint*)( pIVar8 + 8 ) = local_6c;
         *(undefined8*)( pIVar8 + 0xc ) = 0x2100000000;
         *(undefined8*)( pIVar8 + 0x40 ) = 0;
         *(undefined4*)( pIVar8 + 0x48 ) = 0;
         *(undefined1(*) [16])( pIVar8 + 0x18 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( pIVar8 + 0x28 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( pIVar8 + 0x50 ) = (undefined1[16])0x0;
         local_68 = pIVar8;
         Instruction::reserveOperands(pIVar8, ( lVar12 - lVar6 >> 2 ) + 1);
         Instruction::addIdOperand(pIVar8, param_1);
         lVar12 = *(long*)param_2;
         if (0 < (int)( *(long*)( param_2 + 8 ) - lVar12 >> 2 )) {
            do {
               uVar4 = *(undefined4*)( lVar12 + lVar13 * 4 );
               puVar10 = *(undefined4**)( pIVar8 + 0x20 );
               local_60 = (Instruction*)CONCAT44(local_60._4_4_, uVar4);
               if (puVar10 == *(undefined4**)( pIVar8 + 0x28 )) {
                  std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( pIVar8 + 0x18 ), puVar10, (unique_ptr*)&local_60);
               }
 else {
                  *puVar10 = uVar4;
                  *(undefined4**)( pIVar8 + 0x20 ) = puVar10 + 1;
               }

               puVar2 = *(ulong**)( pIVar8 + 0x40 );
               if (puVar2 == *(ulong**)( pIVar8 + 0x50 )) {
                  local_58._8_4_ = *(undefined4*)( pIVar8 + 0x48 );
                  local_58._0_8_ = puVar2;
                  std::vector<bool,std::allocator<bool>>::_M_insert_aux(pIVar8 + 0x30, puVar2, local_58._8_8_, 1);
               }
 else {
                  iVar11 = *(int*)( pIVar8 + 0x48 );
                  if (iVar11 == 0x3f) {
                     *(undefined4*)( pIVar8 + 0x48 ) = 0;
                     *(ulong**)( pIVar8 + 0x40 ) = puVar2 + 1;
                  }
 else {
                     *(int*)( pIVar8 + 0x48 ) = iVar11 + 1;
                  }

                  *puVar2 = *puVar2 | 1L << ( (byte)iVar11 & 0x3f );
               }

               lVar12 = *(long*)param_2;
               lVar13 = lVar13 + 1;
            }
 while ( (int)lVar13 < (int)( *(long*)( param_2 + 8 ) - lVar12 >> 2 ) );
         }

         local_60 = (Instruction*)CONCAT44(local_60._4_4_, 0x21);
         pvVar9 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_60);
         puVar3 = *(undefined8**)( pvVar9 + 8 );
         if (puVar3 == *(undefined8**)( pvVar9 + 0x10 )) {
            std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar9, puVar3, &local_68);
         }
 else {
            *puVar3 = pIVar8;
            *(undefined8**)( pvVar9 + 8 ) = puVar3 + 1;
         }

         local_60 = pIVar8;
         std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_60);
         std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
         Module::mapInstruction((Module*)( this + 400 ), pIVar8);
         if (this[0xea] != (Builder)0x0) {
            uVar4 = makeDebugFunctionType(this, param_1, param_2);
            puVar10 = (undefined4*)std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator []((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)( this + 0x518 ), &local_6c);
            *puVar10 = uVar4;
         }

         uVar4 = *(undefined4*)( pIVar8 + 8 );
         LAB_00108fac:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return uVar4;
      }

      local_58._0_4_ = 0x21;
      plVar5 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)local_58);
      pIVar8 = *(Instruction**)( *plVar5 + lVar12 * 8 );
      puVar1 = *(uint**)( pIVar8 + 0x18 );
      local_68 = pIVar8;
      if (*puVar1 == param_1) {
         iVar11 = (int)( *(long*)( param_2 + 8 ) - *(long*)param_2 >> 2 );
         if (iVar11 == (int)( *(long*)( pIVar8 + 0x20 ) - (long)puVar1 >> 2 ) + -1) {
            lVar6 = 0;
            do {
               if (iVar11 <= (int)lVar6) {
                  uVar4 = *(undefined4*)( pIVar8 + 8 );
                  if (this[0xea] != (Builder)0x0) {
                     local_58._0_4_ = uVar4;
                     piVar7 = (int*)std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator []((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)( this + 0x518 ), (uint*)local_58);
                     if (*piVar7 == 0) {
                        local_58 = (undefined1[16])0x0;
                        local_48 = 0;
                        uVar4 = makeDebugFunctionType(this, param_1, (vector*)local_58);
                        std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector((vector<unsigned_int,std::allocator<unsigned_int>>*)local_58);
                        local_58._0_4_ = *(undefined4*)( pIVar8 + 8 );
                        puVar10 = (undefined4*)std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator []((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)( this + 0x518 ), (uint*)local_58);
                        *puVar10 = uVar4;
                     }

                     uVar4 = *(undefined4*)( pIVar8 + 8 );
                  }

                  goto LAB_00108fac;
               }

               lVar13 = lVar6 * 4;
               lVar6 = lVar6 + 1;
            }
 while ( *(uint*)( *(long*)param_2 + lVar13 ) == puVar1[lVar6] );
         }

      }

      lVar12 = lVar12 + 1;
   }
 while ( true );
}
/* spv::Builder::makeFunctionEntry(spv::Decoration, unsigned int, char const*, spv::LinkageType,
   std::vector<unsigned int, std::allocator<unsigned int> > const&,
   std::vector<std::vector<spv::Decoration, std::allocator<spv::Decoration> >,
   std::allocator<std::vector<spv::Decoration, std::allocator<spv::Decoration> > > > const&,
   spv::Block**) */Function * __thiscall
spv::Builder::makeFunctionEntry
          (Builder *this,int param_2,uint param_3,char *param_4,undefined4 param_5,vector *param_6,
          long *param_7,undefined8 *param_8){
   _Rb_tree_node_base *p_Var1;
   long lVar2;
   uint uVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   undefined4 uVar6;
   Function *pFVar7;
   Block *pBVar8;
   _Rb_tree_node_base *p_Var9;
   long lVar10;
   long lVar11;
   int iVar12;
   Block **ppBVar13;
   _Rb_tree_node_base *p_Var14;
   long lVar15;
   long lVar16;
   long *plVar17;
   int iVar18;
   bool bVar19;
   int iVar20;
   long lVar21;
   long in_FS_OFFSET;
   Block *local_70;
   Block **local_68;
   Block *local_60;
   Block *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = makeFunctionType(this, param_3, param_6);
   if (*(long*)param_6 == *(long*)( param_6 + 8 )) {
      iVar20 = 0;
      iVar12 = *(int*)( this + 0x1d0 );
   }
 else {
      iVar20 = *(int*)( this + 0x1d0 ) + 1;
      iVar12 = *(int*)( this + 0x1d0 ) + (int)( *(long*)( param_6 + 8 ) - *(long*)param_6 >> 2 );
   }

   *(int*)( this + 0x1d0 ) = iVar12 + 1;
   pFVar7 = (Function*)operator_new(0x108);
   local_68 = local_58;
   if (param_4 == (char*)0x0) {
      /* WARNING: Subroutine does not return */
      std::__throw_logic_error("basic_string: construction from null is not valid");
   }

   pBVar8 = (Block*)strlen(param_4);
   local_70 = pBVar8;
   if (pBVar8 < (Block*)0x10) {
      ppBVar13 = local_58;
      if (pBVar8 == (Block*)0x1) {
         local_58[0] = (Block*)CONCAT71(local_58[0]._1_7_, *param_4);
         goto LAB_00109172;
      }

      if (pBVar8 == (Block*)0x0) goto LAB_00109172;
   }
 else {
      local_68 = (Block**)std::__cxx11::string::_M_create((ulong*)&local_68, ( ulong ) & local_70);
      local_58[0] = local_70;
      ppBVar13 = local_68;
   }

   memcpy(ppBVar13, param_4, (size_t)pBVar8);
   ppBVar13 = local_68;
   LAB_00109172:*(Block*)( (long)ppBVar13 + (long)local_70 ) = (Block)0x0;
   local_60 = local_70;
   Function::Function(pFVar7, iVar12 + 1, param_3, uVar6, iVar20, param_5, &local_68, this + 400);
   if (local_68 != local_58) {
      operator_delete(local_68, ( ulong )(local_58[0] + 1));
   }

   if (( param_2 != 0x7fffffff ) && ( *(int*)( pFVar7 + 0x20 ) != 0 )) {
      addDecoration(this, *(int*)( pFVar7 + 0x20 ), param_2, 0xffffffff);
   }

   if (param_2 == 0) {
      pFVar7[0xa9] = (Function)0x1;
   }

   lVar10 = param_7[1];
   lVar11 = *param_7;
   if ((int)( lVar10 - lVar11 >> 3 ) * -0x55555555 != 0) {
      lVar16 = 0;
      do {
         lVar15 = 0;
         lVar2 = lVar16 * 0x18;
         lVar21 = *(long*)( lVar11 + lVar2 );
         iVar12 = (int)lVar16;
         if (0 < (int)( ( (long*)( lVar11 + lVar2 ) )[1] - lVar21 >> 2 )) {
            do {
               iVar18 = *(int*)( lVar21 + lVar15 * 4 );
               if (iVar18 != 0x7fffffff) {
                  addDecoration(this, iVar20 + iVar12, iVar18, 0xffffffff);
                  lVar11 = *param_7;
               }

               plVar17 = (long*)( lVar11 + lVar2 );
               lVar21 = *plVar17;
               if (*(int*)( lVar21 + lVar15 * 4 ) == 0) {
                  p_Var1 = (_Rb_tree_node_base*)( pFVar7 + 0xb8 );
                  p_Var9 = *(_Rb_tree_node_base**)( pFVar7 + 0xc0 );
                  if (*(_Rb_tree_node_base**)( pFVar7 + 0xc0 ) == (_Rb_tree_node_base*)0x0) {
                     p_Var14 = p_Var1;
                     if (p_Var1 != *(_Rb_tree_node_base**)( pFVar7 + 200 )) {
                        LAB_00109391:lVar10 = std::_Rb_tree_decrement(p_Var14);
                        iVar18 = *(int*)( lVar10 + 0x20 );
                        LAB_00109310:if (iVar12 <= iVar18) goto LAB_00109280;
                        goto LAB_00109319;
                     }

                     bVar19 = true;
                  }
 else {
                     do {
                        p_Var14 = p_Var9;
                        iVar18 = *(int*)( p_Var14 + 0x20 );
                        p_Var9 = *(_Rb_tree_node_base**)( p_Var14 + 0x18 );
                        if (iVar12 < iVar18) {
                           p_Var9 = *(_Rb_tree_node_base**)( p_Var14 + 0x10 );
                        }

                     }
 while ( p_Var9 != (_Rb_tree_node_base*)0x0 );
                     if (iVar18 <= iVar12) goto LAB_00109310;
                     if (*(_Rb_tree_node_base**)( pFVar7 + 200 ) != p_Var14) goto LAB_00109391;
                     LAB_00109319:bVar19 = true;
                     if (p_Var1 != p_Var14) {
                        bVar19 = iVar12 < *(int*)( p_Var14 + 0x20 );
                     }

                  }

                  p_Var9 = (_Rb_tree_node_base*)operator_new(0x28);
                  *(int*)( p_Var9 + 0x20 ) = iVar12;
                  std::_Rb_tree_insert_and_rebalance(bVar19, p_Var9, p_Var14, p_Var1);
                  *(long*)( pFVar7 + 0xd8 ) = *(long*)( pFVar7 + 0xd8 ) + 1;
                  lVar11 = *param_7;
                  plVar17 = (long*)( lVar11 + lVar2 );
                  lVar21 = *plVar17;
               }

               LAB_00109280:lVar15 = lVar15 + 1;
            }
 while ( (int)lVar15 < (int)( plVar17[1] - lVar21 >> 2 ) );
            lVar10 = param_7[1];
         }

         lVar16 = lVar16 + 1;
      }
 while ( (uint)lVar16 < ( uint )((int)( lVar10 - lVar11 >> 3 ) * -0x55555555) );
   }

   if (this[0xea] != (Builder)0x0) {
      this[0x90] = (Builder)0x1;
   }

   pBVar8 = (Block*)operator_new(0x90);
   iVar20 = *(int*)( this + 0x1d0 );
   *(uint*)( this + 0x1d0 ) = iVar20 + 1U;
   Block::Block(pBVar8, iVar20 + 1U, pFVar7);
   puVar4 = *(undefined8**)( pFVar7 + 0x98 );
   *param_8 = pBVar8;
   if (puVar4 == *(undefined8**)( pFVar7 + 0xa0 )) {
      local_70 = pBVar8;
      std::vector<spv::Block*,std::allocator<spv::Block*>>::_M_realloc_insert<spv::Block*const&>((vector<spv::Block*,std::allocator<spv::Block*>>*)( pFVar7 + 0x90 ), puVar4, &local_70);
   }
 else {
      *puVar4 = pBVar8;
      *(undefined8**)( pFVar7 + 0x98 ) = puVar4 + 1;
      local_70 = pBVar8;
   }

   uVar3 = *(uint*)( pFVar7 + 0x20 );
   uVar5 = *param_8;
   this[0x90] = (Builder)0x1;
   *(undefined8*)( this + 0x1c8 ) = uVar5;
   addName(this, uVar3, param_4);
   puVar4 = *(undefined8**)( this + 0x308 );
   local_70 = (Block*)pFVar7;
   if (puVar4 == *(undefined8**)( this + 0x310 )) {
      std::vector<std::unique_ptr<spv::Function,std::default_delete<spv::Function>>,std::allocator<std::unique_ptr<spv::Function,std::default_delete<spv::Function>>>>::_M_realloc_insert<std::unique_ptr<spv::Function,std::default_delete<spv::Function>>>((vector<std::unique_ptr<spv::Function,std::default_delete<spv::Function>>,std::allocator<std::unique_ptr<spv::Function,std::default_delete<spv::Function>>>>*)( this + 0x300 ), puVar4, &local_70);
      pBVar8 = local_70;
      if (local_70 != (Block*)0x0) {
         if (*(code**)( *(long*)local_70 + 8 ) == Function::~Function) {
            Function::~Function((Function*)local_70);
            operator_delete(pBVar8, 0x108);
         }
 else {
            ( **(code**)( *(long*)local_70 + 8 ) )();
         }

      }

   }
 else {
      *puVar4 = pFVar7;
      *(undefined8**)( this + 0x308 ) = puVar4 + 1;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pFVar7;
}
/* spv::Builder::makeEntryPoint(char const*) */void spv::Builder::makeEntryPoint(Builder *this, char *param_1) {
   undefined4 uVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined1 local_58[16];
   undefined8 local_48;
   undefined1 local_38[16];
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = makeVoidType(this);
   this[0xeb] = this[0xea];
   if (*(int*)( this + 0x44 ) == 5) {
      this[0xea] = (Builder)0x0;
   }

   local_38 = (undefined1[16])0x0;
   local_28 = 0;
   local_48 = 0;
   local_58 = (undefined1[16])0x0;
   uVar2 = makeFunctionEntry(this, 0x7fffffff, uVar1, param_1, 0x7fffffff, local_58, local_38);
   *(undefined8*)( this + 0x1d8 ) = uVar2;
   this[0xea] = this[0xeb];
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeBoolDebugType(int) */undefined4 spv::Builder::makeBoolDebugType(Builder *this, int param_1) {
   _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this_00;
   int iVar1;
   int iVar2;
   undefined4 uVar3;
   uint uVar4;
   long *plVar5;
   Instruction *pIVar6;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *this_01;
   long lVar7;
   long in_FS_OFFSET;
   Instruction *local_78;
   Instruction *local_70;
   undefined4 *local_68;
   undefined8 local_60;
   undefined4 local_58;
   uint uStack_54;
   long local_40;
   this_00 = (_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x3c0 );
   lVar7 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      local_70._0_4_ = 2;
      plVar5 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_70);
      if ((int)( plVar5[1] - *plVar5 >> 3 ) <= (int)lVar7) {
         pIVar6 = (Instruction*)operator_new(0x60);
         uVar3 = makeVoidType(this);
         *(undefined4*)( pIVar6 + 0x10 ) = 0xc;
         iVar1 = *(int*)( this + 0x1d0 );
         *(undefined***)pIVar6 = &PTR__Instruction_0011c5f0;
         *(undefined4*)( pIVar6 + 0xc ) = uVar3;
         *(int*)( this + 0x1d0 ) = iVar1 + 1;
         *(int*)( pIVar6 + 8 ) = iVar1 + 1;
         *(undefined4*)( pIVar6 + 0x38 ) = 0;
         *(undefined8*)( pIVar6 + 0x40 ) = 0;
         *(undefined4*)( pIVar6 + 0x48 ) = 0;
         *(undefined1(*) [16])( pIVar6 + 0x18 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( pIVar6 + 0x28 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( pIVar6 + 0x50 ) = (undefined1[16])0x0;
         local_78 = pIVar6;
         Instruction::reserveOperands(pIVar6, 6);
         Instruction::addIdOperand(pIVar6, *(uint*)( this + 0x50 ));
         Instruction::addImmediateOperand(pIVar6, 2);
         local_58 = 0x6c6f6f62;
         local_60 = 4;
         uStack_54 = uStack_54 & 0xffffff00;
         local_68 = &local_58;
         uVar4 = getStringId(this, (string*)&local_68);
         Instruction::addIdOperand(pIVar6, uVar4);
         if (local_68 != &local_58) {
            operator_delete(local_68, CONCAT44(uStack_54, local_58) + 1);
         }

         uVar4 = makeUintConstant(this, param_1, false);
         Instruction::addIdOperand(pIVar6, uVar4);
         uVar4 = makeUintConstant(this, 2, false);
         Instruction::addIdOperand(pIVar6, uVar4);
         uVar4 = makeUintConstant(this, 0, false);
         Instruction::addIdOperand(pIVar6, uVar4);
         local_70 = (Instruction*)CONCAT44(local_70._4_4_, 2);
         this_01 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_70);
         std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::push_back(this_01, &local_78);
         local_70 = pIVar6;
         std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_70);
         std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_70);
         Module::mapInstruction((Module*)( this + 400 ), pIVar6);
         uVar3 = *(undefined4*)( pIVar6 + 8 );
         LAB_0010998d:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return uVar3;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      local_70 = (Instruction*)CONCAT44(local_70._4_4_, 2);
      plVar5 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_70);
      pIVar6 = *(Instruction**)( *plVar5 + lVar7 * 8 );
      iVar1 = **(int**)( pIVar6 + 0x18 );
      local_58 = 0x6c6f6f62;
      local_60 = 4;
      uStack_54 = uStack_54 & 0xffffff00;
      local_78 = pIVar6;
      local_68 = &local_58;
      iVar2 = getStringId(this, (string*)&local_68);
      if (iVar2 == iVar1) {
         if (( *(int*)( *(long*)( pIVar6 + 0x18 ) + 4 ) == param_1 ) && ( *(int*)( *(long*)( pIVar6 + 0x18 ) + 8 ) == 2 )) {
            if (local_68 != &local_58) {
               operator_delete(local_68, CONCAT44(uStack_54, local_58) + 1);
            }

            uVar3 = *(undefined4*)( pIVar6 + 8 );
            goto LAB_0010998d;
         }

      }

      if (local_68 != &local_58) {
         operator_delete(local_68, CONCAT44(uStack_54, local_58) + 1);
      }

      lVar7 = lVar7 + 1;
   }
 while ( true );
}
/* spv::Builder::makeBoolType() */undefined4 spv::Builder::makeBoolType(Builder *this) {
   _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this_00;
   int iVar1;
   undefined8 *puVar2;
   undefined4 uVar3;
   long *plVar4;
   long lVar5;
   Instruction *pIVar6;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar7;
   undefined4 *puVar8;
   long in_FS_OFFSET;
   Instruction *local_40;
   Instruction *local_38;
   long local_30;
   this_00 = (_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x388 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38._0_4_ = 0x14;
   plVar4 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_38);
   if (*plVar4 == plVar4[1]) {
      pIVar6 = (Instruction*)operator_new(0x60);
      iVar1 = *(int*)( this + 0x1d0 );
      local_38 = (Instruction*)CONCAT44(local_38._4_4_, 0x14);
      *(undefined***)pIVar6 = &PTR__Instruction_0011c5f0;
      *(undefined4*)( pIVar6 + 0x38 ) = 0;
      *(int*)( this + 0x1d0 ) = iVar1 + 1;
      *(int*)( pIVar6 + 8 ) = iVar1 + 1;
      *(undefined8*)( pIVar6 + 0xc ) = 0x1400000000;
      *(undefined8*)( pIVar6 + 0x40 ) = 0;
      *(undefined4*)( pIVar6 + 0x48 ) = 0;
      *(undefined1(*) [16])( pIVar6 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( pIVar6 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( pIVar6 + 0x50 ) = (undefined1[16])0x0;
      local_40 = pIVar6;
      pvVar7 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_38);
      puVar2 = *(undefined8**)( pvVar7 + 8 );
      if (puVar2 == *(undefined8**)( pvVar7 + 0x10 )) {
         std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar7, puVar2, &local_40);
      }
 else {
         *puVar2 = pIVar6;
         *(undefined8**)( pvVar7 + 8 ) = puVar2 + 1;
      }

      local_38 = pIVar6;
      std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_38);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
      Module::mapInstruction((Module*)( this + 400 ), pIVar6);
      if (this[0xea] != (Builder)0x0) {
         uVar3 = makeBoolDebugType(this, 0x20);
         local_38 = (Instruction*)CONCAT44(local_38._4_4_, *(undefined4*)( pIVar6 + 8 ));
         puVar8 = (undefined4*)std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator []((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)( this + 0x518 ), (uint*)&local_38);
         *puVar8 = uVar3;
      }

   }
 else {
      local_38 = (Instruction*)CONCAT44(local_38._4_4_, 0x14);
      lVar5 = std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_38);
      pIVar6 = *(Instruction**)( *(long*)( lVar5 + 8 ) + -8 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return *(undefined4*)( pIVar6 + 8 );
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeBoolConstant(bool, bool) */int spv::Builder::makeBoolConstant(Builder *this, bool param_1, bool param_2) {
   int iVar1;
   undefined8 *puVar2;
   long lVar3;
   int iVar4;
   Instruction *pIVar5;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar6;
   long *plVar7;
   long lVar8;
   int iVar9;
   long in_FS_OFFSET;
   int local_5c;
   Instruction *local_50;
   Instruction *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = makeBoolType(this);
   if (param_2) {
      iVar9 = 0x31 - (uint)param_1;
   }
 else {
      lVar8 = 0;
      local_5c = 0;
      iVar9 = 0x2a - (uint)param_1;
      while (true) {
         local_48 = (Instruction*)CONCAT44(local_48._4_4_, 0x14);
         plVar7 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x318 ), (uint*)&local_48);
         if ((int)( plVar7[1] - *plVar7 >> 3 ) <= (int)lVar8) break;
         local_48 = (Instruction*)CONCAT44(local_48._4_4_, 0x14);
         plVar7 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x318 ), (uint*)&local_48);
         lVar3 = *(long*)( *plVar7 + lVar8 * 8 );
         if (( iVar4 == *(int*)( lVar3 + 0xc ) ) && ( *(int*)( lVar3 + 0x10 ) == iVar9 )) {
            local_5c = *(int*)( lVar3 + 8 );
         }

         lVar8 = lVar8 + 1;
      }
;
      if (local_5c != 0) goto LAB_00109c6e;
   }

   pIVar5 = (Instruction*)operator_new(0x60);
   iVar1 = *(int*)( this + 0x1d0 );
   *(undefined***)pIVar5 = &PTR__Instruction_0011c5f0;
   *(int*)( pIVar5 + 0xc ) = iVar4;
   *(int*)( this + 0x1d0 ) = iVar1 + 1;
   *(int*)( pIVar5 + 8 ) = iVar1 + 1;
   *(int*)( pIVar5 + 0x10 ) = iVar9;
   *(undefined4*)( pIVar5 + 0x38 ) = 0;
   *(undefined8*)( pIVar5 + 0x40 ) = 0;
   *(undefined4*)( pIVar5 + 0x48 ) = 0;
   *(undefined1(*) [16])( pIVar5 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pIVar5 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pIVar5 + 0x50 ) = (undefined1[16])0x0;
   local_50 = pIVar5;
   local_48 = pIVar5;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_48);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   local_48 = (Instruction*)CONCAT44(local_48._4_4_, 0x14);
   pvVar6 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x318 ), (uint*)&local_48);
   puVar2 = *(undefined8**)( pvVar6 + 8 );
   if (puVar2 == *(undefined8**)( pvVar6 + 0x10 )) {
      std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar6, puVar2, &local_50);
   }
 else {
      *puVar2 = pIVar5;
      *(undefined8**)( pvVar6 + 8 ) = puVar2 + 1;
   }

   Module::mapInstruction((Module*)( this + 400 ), pIVar5);
   local_5c = *(int*)( pIVar5 + 8 );
   LAB_00109c6e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_5c;
}
/* spv::Builder::transferAccessChainSwizzle(bool) */void spv::Builder::transferAccessChainSwizzle(Builder *this, bool param_1) {
   uint *puVar1;
   ulong uVar2;
   long in_FS_OFFSET;
   uint local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar1 = *(uint**)( this + 0x210 );
   uVar2 = (long)*(uint**)( this + 0x218 ) - (long)puVar1;
   if (( ( puVar1 != *(uint**)( this + 0x218 ) ) || ( *(int*)( this + 0x228 ) != 0 ) ) && ( uVar2 < 5 )) {
      if (uVar2 == 4) {
         local_14 = makeUintConstant(this, *puVar1, false);
         std::vector<unsigned_int,std::allocator<unsigned_int>>::emplace_back<unsigned_int>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this + 0x1f0 ), &local_14);
         if (*(long*)( this + 0x210 ) != *(long*)( this + 0x218 )) {
            *(long*)( this + 0x218 ) = *(long*)( this + 0x210 );
         }

         *(undefined4*)( this + 0x22c ) = 0;
      }
 else if (( param_1 ) && ( *(int*)( this + 0x228 ) != 0 )) {
         std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back((vector<unsigned_int,std::allocator<unsigned_int>>*)( this + 0x1f0 ), (uint*)( this + 0x228 ));
         *(undefined8*)( this + 0x228 ) = 0;
      }

   }

   if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* spv::Builder::makePointerDebugType(spv::StorageClass, unsigned int) */ulong spv::Builder::makePointerDebugType(Builder *this, uint param_2, uint param_3) {
   int iVar1;
   Builder *pBVar2;
   uint uVar3;
   undefined4 uVar4;
   uint uVar5;
   long lVar6;
   undefined8 *puVar7;
   long *plVar8;
   ulong uVar9;
   Instruction *this_00;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *this_01;
   Builder *pBVar10;
   Builder *pBVar11;
   Builder *pBVar12;
   long in_FS_OFFSET;
   bool bVar13;
   uint local_5c[3];
   Instruction *local_50;
   Instruction *local_48;
   long local_40;
   pBVar12 = this + 0x520;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pBVar2 = *(Builder**)( this + 0x528 );
   pBVar11 = pBVar12;
   local_5c[0] = param_3;
   if (*(Builder**)( this + 0x528 ) != (Builder*)0x0) {
      do {
         while (true) {
            pBVar10 = pBVar2;
            if (*(uint*)( pBVar10 + 0x20 ) < param_3) break;
            pBVar2 = *(Builder**)( pBVar10 + 0x10 );
            pBVar11 = pBVar10;
            if (*(Builder**)( pBVar10 + 0x10 ) == (Builder*)0x0) goto LAB_00109eb0;
         }
;
         pBVar2 = *(Builder**)( pBVar10 + 0x18 );
      }
 while ( *(Builder**)( pBVar10 + 0x18 ) != (Builder*)0x0 );
      LAB_00109eb0:bVar13 = pBVar12 != pBVar11;
      pBVar12 = pBVar11;
      if (( bVar13 ) && ( *(uint*)( pBVar11 + 0x20 ) <= param_3 )) {
         uVar5 = *(uint*)( pBVar11 + 0x24 );
         goto joined_r0x00109f25;
      }

   }

   local_48 = (Instruction*)local_5c;
   lVar6 = std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<unsigned_int_const&>,std::tuple<>>(this + 0x518, pBVar12, &local_48);
   uVar5 = *(uint*)( lVar6 + 0x24 );
   joined_r0x00109f25:if (uVar5 == 0) {
      uVar9 = ( ulong ) * (uint*)( this + 0x54 );
      if (*(uint*)( this + 0x54 ) == 0) {
         uVar9 = makeDebugInfoNone(this);
      }

   }
 else {
      uVar3 = makeUintConstant(this, param_2, false);
      local_48 = (Instruction*)CONCAT44(local_48._4_4_, 3);
      puVar7 = (undefined8*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x3c0 ), (uint*)&local_48);
      for (plVar8 = (long*)*puVar7; plVar8 != (long*)puVar7[1]; plVar8 = plVar8 + 1) {
         lVar6 = *(long*)( *plVar8 + 0x18 );
         if (( uVar5 == *(uint*)( lVar6 + 8 ) ) && ( uVar3 == *(uint*)( lVar6 + 0xc ) )) {
            uVar9 = ( ulong ) * (uint*)( *plVar8 + 8 );
            goto LAB_00109ece;
         }

      }

      this_00 = (Instruction*)operator_new(0x60);
      uVar4 = makeVoidType(this);
      *(undefined4*)( this_00 + 0x10 ) = 0xc;
      iVar1 = *(int*)( this + 0x1d0 );
      *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
      *(undefined4*)( this_00 + 0xc ) = uVar4;
      *(undefined4*)( this_00 + 0x38 ) = 0;
      *(int*)( this + 0x1d0 ) = iVar1 + 1;
      *(int*)( this_00 + 8 ) = iVar1 + 1;
      *(undefined8*)( this_00 + 0x40 ) = 0;
      *(undefined4*)( this_00 + 0x48 ) = 0;
      *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
      local_50 = this_00;
      Instruction::reserveOperands(this_00, 5);
      Instruction::addIdOperand(this_00, *(uint*)( this + 0x50 ));
      Instruction::addImmediateOperand(this_00, 3);
      Instruction::addIdOperand(this_00, uVar5);
      Instruction::addIdOperand(this_00, uVar3);
      uVar5 = makeUintConstant(this, 0, false);
      Instruction::addIdOperand(this_00, uVar5);
      local_48 = (Instruction*)CONCAT44(local_48._4_4_, 3);
      this_01 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x3c0 ), (uint*)&local_48);
      std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::push_back(this_01, &local_50);
      local_48 = this_00;
      std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_48);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
      Module::mapInstruction((Module*)( this + 400 ), this_00);
      uVar9 = ( ulong ) * (uint*)( this_00 + 8 );
   }

   LAB_00109ece:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar9;
}
/* spv::Builder::makePointer(spv::StorageClass, unsigned int) */undefined4 spv::Builder::makePointer(Builder *this, uint param_2, uint param_3) {
   _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this_00;
   int iVar1;
   undefined8 *puVar2;
   undefined4 uVar3;
   long *plVar4;
   Instruction *this_01;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar5;
   undefined4 *puVar6;
   long lVar7;
   long in_FS_OFFSET;
   Instruction *local_50;
   Instruction *local_48;
   long local_40;
   this_00 = (_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x388 );
   lVar7 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      local_48._0_4_ = 0x20;
      plVar4 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
      if ((int)( plVar4[1] - *plVar4 >> 3 ) <= (int)lVar7) {
         this_01 = (Instruction*)operator_new(0x60);
         iVar1 = *(int*)( this + 0x1d0 );
         *(undefined***)this_01 = &PTR__Instruction_0011c5f0;
         *(undefined4*)( this_01 + 0x38 ) = 0;
         *(int*)( this + 0x1d0 ) = iVar1 + 1;
         *(int*)( this_01 + 8 ) = iVar1 + 1;
         *(undefined8*)( this_01 + 0xc ) = 0x2000000000;
         *(undefined8*)( this_01 + 0x40 ) = 0;
         *(undefined4*)( this_01 + 0x48 ) = 0;
         *(undefined1(*) [16])( this_01 + 0x18 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_01 + 0x28 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_01 + 0x50 ) = (undefined1[16])0x0;
         local_50 = this_01;
         Instruction::reserveOperands(this_01, 2);
         Instruction::addImmediateOperand(this_01, param_2);
         Instruction::addIdOperand(this_01, param_3);
         local_48 = (Instruction*)CONCAT44(local_48._4_4_, 0x20);
         pvVar5 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
         puVar2 = *(undefined8**)( pvVar5 + 8 );
         if (puVar2 == *(undefined8**)( pvVar5 + 0x10 )) {
            std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar5, puVar2, &local_50);
         }
 else {
            *puVar2 = this_01;
            *(undefined8**)( pvVar5 + 8 ) = puVar2 + 1;
         }

         local_48 = this_01;
         std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_48);
         std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
         Module::mapInstruction((Module*)( this + 400 ), this_01);
         if (this[0xea] != (Builder)0x0) {
            uVar3 = makePointerDebugType(this, param_2, param_3);
            local_48 = (Instruction*)CONCAT44(local_48._4_4_, *(undefined4*)( this_01 + 8 ));
            puVar6 = (undefined4*)std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator []((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)( this + 0x518 ), (uint*)&local_48);
            *puVar6 = uVar3;
         }

         uVar3 = *(undefined4*)( this_01 + 8 );
         LAB_0010a25b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return uVar3;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      local_48 = (Instruction*)CONCAT44(local_48._4_4_, 0x20);
      plVar4 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
      local_50 = *(Instruction**)( *plVar4 + lVar7 * 8 );
      if (( param_2 == **(uint**)( local_50 + 0x18 ) ) && ( param_3 == ( *(uint**)( local_50 + 0x18 ) )[1] )) {
         uVar3 = *(undefined4*)( local_50 + 8 );
         goto LAB_0010a25b;
      }

      lVar7 = lVar7 + 1;
   }
 while ( true );
}
/* spv::Builder::addInstruction(std::unique_ptr<spv::Instruction,
   std::default_delete<spv::Instruction> >) */void spv::Builder::addInstruction(Builder *this, undefined8 *param_2) {
   int iVar1;
   int iVar2;
   undefined4 uVar3;
   uint uVar4;
   long lVar5;
   long lVar6;
   Instruction *pIVar7;
   long in_FS_OFFSET;
   Instruction *local_48;
   long local_40;
   lVar6 = *(long*)( this + 0x1c8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( this[0xea] != (Builder)0x0 ) && ( this[0x90] != (Builder)0x0 )) {
      lVar5 = *(long*)( this + 200 );
      if (lVar5 == *(long*)( this + 0xd0 )) {
         lVar5 = *(long*)( *(long*)( this + 0xe0 ) + -8 ) + 0x200;
      }

      if (( *(char*)( lVar6 + 0x84 ) == '\0' ) || ( *(int*)( lVar5 + -4 ) != *(int*)( lVar6 + 0x80 ) )) {
         *(int*)( lVar6 + 0x80 ) = *(int*)( lVar5 + -4 );
         *(undefined1*)( lVar6 + 0x84 ) = 1;
         uVar3 = makeVoidType(this);
         iVar1 = *(int*)( this + 0x1d0 );
         *(int*)( this + 0x1d0 ) = iVar1 + 1;
         pIVar7 = (Instruction*)operator_new(0x60);
         *(undefined***)pIVar7 = &PTR__Instruction_0011c5f0;
         *(int*)( pIVar7 + 8 ) = iVar1 + 1;
         *(undefined4*)( pIVar7 + 0xc ) = uVar3;
         *(undefined4*)( pIVar7 + 0x10 ) = 0xc;
         *(undefined4*)( pIVar7 + 0x38 ) = 0;
         *(undefined8*)( pIVar7 + 0x40 ) = 0;
         *(undefined4*)( pIVar7 + 0x48 ) = 0;
         *(undefined1(*) [16])( pIVar7 + 0x18 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( pIVar7 + 0x28 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( pIVar7 + 0x50 ) = (undefined1[16])0x0;
         Instruction::reserveOperands(pIVar7, 3);
         Instruction::addIdOperand(pIVar7, *(uint*)( this + 0x50 ));
         Instruction::addImmediateOperand(pIVar7, 0x17);
         lVar6 = *(long*)( this + 200 );
         if (lVar6 == *(long*)( this + 0xd0 )) {
            lVar6 = *(long*)( *(long*)( this + 0xe0 ) + -8 ) + 0x200;
         }

         Instruction::addIdOperand(pIVar7, *(uint*)( lVar6 + -4 ));
         lVar6 = *(long*)( this + 0x1c8 );
         local_48 = pIVar7;
         std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( lVar6 + 8 ), (unique_ptr*)&local_48);
         *(long*)( pIVar7 + 0x58 ) = lVar6;
         if (*(int*)( pIVar7 + 8 ) != 0) {
            Module::mapInstruction(*(Module**)( *(long*)( lVar6 + 0x68 ) + 8 ), pIVar7);
         }

         std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
         lVar6 = *(long*)( this + 0x1c8 );
      }

      this[0x90] = (Builder)0x0;
   }

   if (( this[0xe8] == (Builder)0x0 ) || ( this[0x80] == (Builder)0x0 )) goto LAB_0010a32a;
   iVar1 = *(int*)( this + 0x88 );
   iVar2 = *(int*)( this + 0x84 );
   if (*(char*)( lVar6 + 0x7c ) == '\0') {
      *(int*)( lVar6 + 0x70 ) = iVar2;
      *(undefined4*)( lVar6 + 0x74 ) = 0;
      *(int*)( lVar6 + 0x78 ) = iVar1;
      *(undefined1*)( lVar6 + 0x7c ) = 1;
      LAB_0010a504:if (this[0xe9] != (Builder)0x0) {
         pIVar7 = (Instruction*)operator_new(0x60);
         *(undefined***)pIVar7 = &PTR__Instruction_0011c5f0;
         *(undefined8*)( pIVar7 + 8 ) = 0;
         *(undefined4*)( pIVar7 + 0x10 ) = 8;
         *(undefined4*)( pIVar7 + 0x38 ) = 0;
         *(undefined8*)( pIVar7 + 0x40 ) = 0;
         *(undefined4*)( pIVar7 + 0x48 ) = 0;
         *(undefined1(*) [16])( pIVar7 + 0x18 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( pIVar7 + 0x28 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( pIVar7 + 0x50 ) = (undefined1[16])0x0;
         Instruction::reserveOperands(pIVar7, 3);
         Instruction::addIdOperand(pIVar7, *(uint*)( this + 0x88 ));
         Instruction::addImmediateOperand(pIVar7, *(uint*)( this + 0x84 ));
         Instruction::addImmediateOperand(pIVar7, 0);
         lVar6 = *(long*)( this + 0x1c8 );
         local_48 = pIVar7;
         std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( lVar6 + 8 ), (unique_ptr*)&local_48);
         *(long*)( pIVar7 + 0x58 ) = lVar6;
         if (*(int*)( pIVar7 + 8 ) != 0) {
            Module::mapInstruction(*(Module**)( *(long*)( lVar6 + 0x68 ) + 8 ), pIVar7);
         }

         std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
      }

      if (this[0xea] != (Builder)0x0) {
         uVar3 = makeVoidType(this);
         iVar1 = *(int*)( this + 0x1d0 );
         *(int*)( this + 0x1d0 ) = iVar1 + 1;
         pIVar7 = (Instruction*)operator_new(0x60);
         *(undefined***)pIVar7 = &PTR__Instruction_0011c5f0;
         *(int*)( pIVar7 + 8 ) = iVar1 + 1;
         *(undefined4*)( pIVar7 + 0xc ) = uVar3;
         *(undefined4*)( pIVar7 + 0x10 ) = 0xc;
         *(undefined4*)( pIVar7 + 0x38 ) = 0;
         *(undefined8*)( pIVar7 + 0x40 ) = 0;
         *(undefined4*)( pIVar7 + 0x48 ) = 0;
         *(undefined1(*) [16])( pIVar7 + 0x18 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( pIVar7 + 0x28 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( pIVar7 + 0x50 ) = (undefined1[16])0x0;
         Instruction::reserveOperands(pIVar7, 7);
         Instruction::addIdOperand(pIVar7, *(uint*)( this + 0x50 ));
         Instruction::addImmediateOperand(pIVar7, 0x67);
         uVar4 = makeDebugSource(this, *(uint*)( this + 0x88 ));
         Instruction::addIdOperand(pIVar7, uVar4);
         uVar4 = makeUintConstant(this, *(uint*)( this + 0x84 ), false);
         Instruction::addIdOperand(pIVar7, uVar4);
         uVar4 = makeUintConstant(this, *(uint*)( this + 0x84 ), false);
         Instruction::addIdOperand(pIVar7, uVar4);
         uVar4 = makeUintConstant(this, 0, false);
         Instruction::addIdOperand(pIVar7, uVar4);
         uVar4 = makeUintConstant(this, 0, false);
         Instruction::addIdOperand(pIVar7, uVar4);
         lVar6 = *(long*)( this + 0x1c8 );
         local_48 = pIVar7;
         std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( lVar6 + 8 ), (unique_ptr*)&local_48);
         *(long*)( pIVar7 + 0x58 ) = lVar6;
         if (*(int*)( pIVar7 + 8 ) != 0) {
            Module::mapInstruction(*(Module**)( *(long*)( lVar6 + 0x68 ) + 8 ), pIVar7);
         }

         std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
      }

      lVar6 = *(long*)( this + 0x1c8 );
   }
 else if (( ( iVar2 != *(int*)( lVar6 + 0x70 ) ) || ( *(int*)( lVar6 + 0x74 ) != 0 ) ) || ( iVar1 != *(int*)( lVar6 + 0x78 ) )) {
      *(int*)( lVar6 + 0x70 ) = iVar2;
      *(undefined4*)( lVar6 + 0x74 ) = 0;
      *(int*)( lVar6 + 0x78 ) = iVar1;
      goto LAB_0010a504;
   }

   this[0x80] = (Builder)0x0;
   LAB_0010a32a:pIVar7 = (Instruction*)*param_2;
   *param_2 = 0;
   local_48 = pIVar7;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( lVar6 + 8 ), (unique_ptr*)&local_48);
   *(long*)( pIVar7 + 0x58 ) = lVar6;
   if (*(int*)( pIVar7 + 8 ) != 0) {
      Module::mapInstruction(*(Module**)( *(long*)( lVar6 + 0x68 ) + 8 ), pIVar7);
   }

   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* spv::Builder::makeDebugDeclare(unsigned int, unsigned int) */undefined4 spv::Builder::makeDebugDeclare(Builder *this, uint param_1, uint param_2) {
   int iVar1;
   undefined4 uVar2;
   uint uVar3;
   Instruction *this_00;
   long in_FS_OFFSET;
   Instruction *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   uVar2 = makeVoidType(this);
   *(undefined4*)( this_00 + 0x10 ) = 0xc;
   iVar1 = *(int*)( this + 0x1d0 );
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_00 + 0xc ) = uVar2;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(int*)( this + 0x1d0 ) = iVar1 + 1;
   *(int*)( this_00 + 8 ) = iVar1 + 1;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, 5);
   Instruction::addIdOperand(this_00, *(uint*)( this + 0x50 ));
   Instruction::addImmediateOperand(this_00, 0x1c);
   Instruction::addIdOperand(this_00, param_1);
   Instruction::addIdOperand(this_00, param_2);
   uVar3 = *(uint*)( this + 0x58 );
   if (uVar3 == 0) {
      uVar3 = makeDebugExpression(this);
   }

   Instruction::addIdOperand(this_00, uVar3);
   local_38 = this_00;
   addInstruction(this, &local_38);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return *(undefined4*)( this_00 + 8 );
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeDebugValue(unsigned int, unsigned int) */undefined4 spv::Builder::makeDebugValue(Builder *this, uint param_1, uint param_2) {
   int iVar1;
   undefined4 uVar2;
   uint uVar3;
   Instruction *this_00;
   long in_FS_OFFSET;
   Instruction *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   uVar2 = makeVoidType(this);
   *(undefined4*)( this_00 + 0x10 ) = 0xc;
   iVar1 = *(int*)( this + 0x1d0 );
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_00 + 0xc ) = uVar2;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(int*)( this + 0x1d0 ) = iVar1 + 1;
   *(int*)( this_00 + 8 ) = iVar1 + 1;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, 5);
   Instruction::addIdOperand(this_00, *(uint*)( this + 0x50 ));
   Instruction::addImmediateOperand(this_00, 0x1d);
   Instruction::addIdOperand(this_00, param_1);
   Instruction::addIdOperand(this_00, param_2);
   uVar3 = *(uint*)( this + 0x58 );
   if (uVar3 == 0) {
      uVar3 = makeDebugExpression(this);
   }

   Instruction::addIdOperand(this_00, uVar3);
   local_38 = this_00;
   addInstruction(this, &local_38);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return *(undefined4*)( this_00 + 8 );
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createUndefined(unsigned int) */undefined4 spv::Builder::createUndefined(Builder *this, uint param_1) {
   int iVar1;
   void *pvVar2;
   long *plVar3;
   long *plVar4;
   long in_FS_OFFSET;
   long *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar4 = (long*)operator_new(0x60);
   iVar1 = *(int*)( this + 0x1d0 );
   *plVar4 = (long)&PTR__Instruction_0011c5f0;
   *(uint*)( (long)plVar4 + 0xc ) = param_1;
   *(int*)( this + 0x1d0 ) = iVar1 + 1;
   *(int*)( plVar4 + 1 ) = iVar1 + 1;
   *(undefined4*)( plVar4 + 2 ) = 1;
   *(undefined4*)( plVar4 + 7 ) = 0;
   plVar4[8] = 0;
   *(undefined4*)( plVar4 + 9 ) = 0;
   *(undefined1(*) [16])( plVar4 + 3 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( plVar4 + 5 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( plVar4 + 10 ) = (undefined1[16])0x0;
   local_38 = plVar4;
   addInstruction(this, &local_38);
   plVar3 = local_38;
   if (local_38 != (long*)0x0) {
      if (*(code**)( *local_38 + 8 ) == Instruction::~Instruction) {
         pvVar2 = (void*)local_38[6];
         *local_38 = (long)&PTR__Instruction_0011c5f0;
         if (pvVar2 != (void*)0x0) {
            operator_delete(pvVar2, local_38[10] - (long)pvVar2);
         }

         pvVar2 = (void*)plVar3[3];
         if (pvVar2 != (void*)0x0) {
            operator_delete(pvVar2, plVar3[5] - (long)pvVar2);
         }

         operator_delete(plVar3, 0x60);
      }
 else {
         ( **(code**)( *local_38 + 8 ) )(local_38);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (int)plVar4[1];
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createAccessChain(spv::StorageClass, unsigned int, std::vector<unsigned int,
   std::allocator<unsigned int> > const&) */undefined4 spv::Builder::createAccessChain(Builder *this, undefined8 param_2, uint param_3, long *param_4) {
   int iVar1;
   undefined4 *puVar2;
   ulong *puVar3;
   undefined4 uVar4;
   Instruction *this_00;
   long lVar5;
   long lVar6;
   long in_FS_OFFSET;
   Instruction *local_60;
   ulong *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   getResultingAccessChainType(this);
   uVar4 = makePointer();
   this_00 = (Instruction*)operator_new(0x60);
   lVar5 = param_4[1];
   lVar6 = *param_4;
   iVar1 = *(int*)( this + 0x1d0 );
   *(undefined4*)( this_00 + 0xc ) = uVar4;
   *(undefined4*)( this_00 + 0x10 ) = 0x41;
   *(int*)( this + 0x1d0 ) = iVar1 + 1;
   *(int*)( this_00 + 8 ) = iVar1 + 1;
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, ( lVar5 - lVar6 >> 2 ) + 1);
   Instruction::addIdOperand(this_00, param_3);
   lVar5 = *param_4;
   if (0 < (int)( param_4[1] - lVar5 >> 2 )) {
      lVar6 = 0;
      do {
         uVar4 = *(undefined4*)( lVar5 + lVar6 * 4 );
         puVar2 = *(undefined4**)( this_00 + 0x20 );
         local_60 = (Instruction*)CONCAT44(local_60._4_4_, uVar4);
         if (puVar2 == *(undefined4**)( this_00 + 0x28 )) {
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar2, &local_60);
         }
 else {
            *puVar2 = uVar4;
            *(undefined4**)( this_00 + 0x20 ) = puVar2 + 1;
         }

         puVar3 = *(ulong**)( this_00 + 0x40 );
         if (puVar3 == *(ulong**)( this_00 + 0x50 )) {
            local_50 = *(undefined4*)( this_00 + 0x48 );
            local_58 = puVar3;
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar3, CONCAT44(uStack_4c, local_50), 1);
         }
 else {
            iVar1 = *(int*)( this_00 + 0x48 );
            if (iVar1 == 0x3f) {
               *(undefined4*)( this_00 + 0x48 ) = 0;
               *(ulong**)( this_00 + 0x40 ) = puVar3 + 1;
            }
 else {
               *(int*)( this_00 + 0x48 ) = iVar1 + 1;
            }

            *puVar3 = *puVar3 | 1L << ( (byte)iVar1 & 0x3f );
         }

         lVar5 = *param_4;
         lVar6 = lVar6 + 1;
      }
 while ( (int)lVar6 < (int)( param_4[1] - lVar5 >> 2 ) );
   }

   local_60 = this_00;
   addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return *(undefined4*)( this_00 + 8 );
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createCompositeInsert(unsigned int, unsigned int, unsigned int, unsigned int) */undefined4 spv::Builder::createCompositeInsert(Builder *this, uint param_1, uint param_2, uint param_3, uint param_4) {
   int iVar1;
   void *__src;
   Instruction *this_00;
   void *__dest;
   ulong uVar2;
   long in_FS_OFFSET;
   Instruction *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   iVar1 = *(int*)( this + 0x1d0 );
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(uint*)( this_00 + 0xc ) = param_3;
   *(int*)( this + 0x1d0 ) = iVar1 + 1;
   *(int*)( this_00 + 8 ) = iVar1 + 1;
   *(undefined4*)( this_00 + 0x10 ) = 0x52;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   __dest = operator_new(0xc);
   __src = *(void**)( this_00 + 0x18 );
   if (*(long*)( this_00 + 0x20 ) - (long)__src < 1) {
      if (__src == (void*)0x0) goto LAB_0010ade0;
      uVar2 = *(long*)( this_00 + 0x28 ) - (long)__src;
   }
 else {
      memmove(__dest, __src, *(long*)( this_00 + 0x20 ) - (long)__src);
      uVar2 = *(long*)( this_00 + 0x28 ) - (long)__src;
   }

   operator_delete(__src, uVar2);
   LAB_0010ade0:*(void**)( this_00 + 0x18 ) = __dest;
   *(void**)( this_00 + 0x20 ) = __dest;
   *(long*)( this_00 + 0x28 ) = (long)__dest + 0xc;
   if (( ulong )(( *(long*)( this_00 + 0x50 ) - *(long*)( this_00 + 0x30 ) ) * 8) < 3) {
      std::vector<bool,std::allocator<bool>>::_M_reallocate((vector<bool,std::allocator<bool>>*)( this_00 + 0x30 ), 3);
   }

   Instruction::addIdOperand(this_00, param_1);
   Instruction::addIdOperand(this_00, param_2);
   Instruction::addImmediateOperand(this_00, param_4);
   local_48 = this_00;
   addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return *(undefined4*)( this_00 + 8 );
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createCompositeInsert(unsigned int, unsigned int, unsigned int,
   std::vector<unsigned int, std::allocator<unsigned int> > const&) */undefined4 spv::Builder::createCompositeInsert(Builder *this, uint param_1, uint param_2, uint param_3, vector *param_4) {
   int iVar1;
   undefined4 uVar2;
   undefined4 *puVar3;
   ulong *puVar4;
   byte bVar5;
   Instruction *this_00;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   Instruction *local_60;
   ulong *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   lVar6 = *(long*)( param_4 + 8 );
   lVar7 = *(long*)param_4;
   iVar1 = *(int*)( this + 0x1d0 );
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(uint*)( this_00 + 0xc ) = param_3;
   *(int*)( this + 0x1d0 ) = iVar1 + 1;
   *(int*)( this_00 + 8 ) = iVar1 + 1;
   *(undefined4*)( this_00 + 0x10 ) = 0x52;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, ( lVar6 - lVar7 >> 2 ) + 2);
   Instruction::addIdOperand(this_00, param_1);
   Instruction::addIdOperand(this_00, param_2);
   lVar6 = *(long*)param_4;
   if (0 < (int)( *(long*)( param_4 + 8 ) - lVar6 >> 2 )) {
      lVar7 = 0;
      do {
         uVar2 = *(undefined4*)( lVar6 + lVar7 * 4 );
         puVar3 = *(undefined4**)( this_00 + 0x20 );
         local_60 = (Instruction*)CONCAT44(local_60._4_4_, uVar2);
         if (puVar3 == *(undefined4**)( this_00 + 0x28 )) {
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar3, &local_60);
         }
 else {
            *puVar3 = uVar2;
            *(undefined4**)( this_00 + 0x20 ) = puVar3 + 1;
         }

         puVar4 = *(ulong**)( this_00 + 0x40 );
         if (puVar4 == *(ulong**)( this_00 + 0x50 )) {
            local_50 = *(undefined4*)( this_00 + 0x48 );
            local_58 = puVar4;
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar4, CONCAT44(uStack_4c, local_50), 0);
         }
 else {
            iVar1 = *(int*)( this_00 + 0x48 );
            if (iVar1 == 0x3f) {
               *(undefined4*)( this_00 + 0x48 ) = 0;
               *(ulong**)( this_00 + 0x40 ) = puVar4 + 1;
            }
 else {
               *(int*)( this_00 + 0x48 ) = iVar1 + 1;
            }

            bVar5 = (byte)iVar1 & 0x3f;
            *puVar4 = *puVar4 & ( -2L << bVar5 | 0xfffffffffffffffeU >> 0x40 - bVar5 );
         }

         lVar6 = *(long*)param_4;
         lVar7 = lVar7 + 1;
      }
 while ( (int)lVar7 < (int)( *(long*)( param_4 + 8 ) - lVar6 >> 2 ) );
   }

   local_60 = this_00;
   addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return *(undefined4*)( this_00 + 8 );
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createVectorExtractDynamic(unsigned int, unsigned int, unsigned int) */undefined4 spv::Builder::createVectorExtractDynamic(Builder *this, uint param_1, uint param_2, uint param_3) {
   int iVar1;
   void *__src;
   Instruction *this_00;
   void *__dest;
   ulong uVar2;
   long in_FS_OFFSET;
   Instruction *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   iVar1 = *(int*)( this + 0x1d0 );
   *(uint*)( this_00 + 0xc ) = param_2;
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(int*)( this + 0x1d0 ) = iVar1 + 1;
   *(int*)( this_00 + 8 ) = iVar1 + 1;
   *(undefined4*)( this_00 + 0x10 ) = 0x4d;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   __dest = operator_new(8);
   __src = *(void**)( this_00 + 0x18 );
   if (*(long*)( this_00 + 0x20 ) - (long)__src < 1) {
      if (__src == (void*)0x0) goto LAB_0010b14d;
      uVar2 = *(long*)( this_00 + 0x28 ) - (long)__src;
   }
 else {
      memmove(__dest, __src, *(long*)( this_00 + 0x20 ) - (long)__src);
      uVar2 = *(long*)( this_00 + 0x28 ) - (long)__src;
   }

   operator_delete(__src, uVar2);
   LAB_0010b14d:*(void**)( this_00 + 0x18 ) = __dest;
   *(void**)( this_00 + 0x20 ) = __dest;
   *(long*)( this_00 + 0x28 ) = (long)__dest + 8;
   if (( ulong )(( *(long*)( this_00 + 0x50 ) - *(long*)( this_00 + 0x30 ) ) * 8) < 2) {
      std::vector<bool,std::allocator<bool>>::_M_reallocate((vector<bool,std::allocator<bool>>*)( this_00 + 0x30 ), 2);
   }

   Instruction::addIdOperand(this_00, param_1);
   Instruction::addIdOperand(this_00, param_3);
   local_48 = this_00;
   addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return *(undefined4*)( this_00 + 8 );
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createVectorInsertDynamic(unsigned int, unsigned int, unsigned int, unsigned int)
    */undefined4 spv::Builder::createVectorInsertDynamic(Builder *this, uint param_1, uint param_2, uint param_3, uint param_4) {
   int iVar1;
   void *__src;
   Instruction *this_00;
   void *__dest;
   ulong uVar2;
   long in_FS_OFFSET;
   Instruction *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   iVar1 = *(int*)( this + 0x1d0 );
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(uint*)( this_00 + 0xc ) = param_2;
   *(int*)( this + 0x1d0 ) = iVar1 + 1;
   *(int*)( this_00 + 8 ) = iVar1 + 1;
   *(undefined4*)( this_00 + 0x10 ) = 0x4e;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   __dest = operator_new(0xc);
   __src = *(void**)( this_00 + 0x18 );
   if (*(long*)( this_00 + 0x20 ) - (long)__src < 1) {
      if (__src == (void*)0x0) goto LAB_0010b2e0;
      uVar2 = *(long*)( this_00 + 0x28 ) - (long)__src;
   }
 else {
      memmove(__dest, __src, *(long*)( this_00 + 0x20 ) - (long)__src);
      uVar2 = *(long*)( this_00 + 0x28 ) - (long)__src;
   }

   operator_delete(__src, uVar2);
   LAB_0010b2e0:*(void**)( this_00 + 0x18 ) = __dest;
   *(void**)( this_00 + 0x20 ) = __dest;
   *(long*)( this_00 + 0x28 ) = (long)__dest + 0xc;
   if (( ulong )(( *(long*)( this_00 + 0x50 ) - *(long*)( this_00 + 0x30 ) ) * 8) < 3) {
      std::vector<bool,std::allocator<bool>>::_M_reallocate((vector<bool,std::allocator<bool>>*)( this_00 + 0x30 ), 3);
   }

   Instruction::addIdOperand(this_00, param_1);
   Instruction::addIdOperand(this_00, param_3);
   Instruction::addIdOperand(this_00, param_4);
   local_48 = this_00;
   addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return *(undefined4*)( this_00 + 8 );
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createNoResultOp(spv::Op) */void spv::Builder::createNoResultOp(Builder *this, undefined4 param_2) {
   void *pvVar1;
   long *plVar2;
   long in_FS_OFFSET;
   long *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = (long*)operator_new(0x60);
   *local_28 = (long)&PTR__Instruction_0011c5f0;
   local_28[1] = 0;
   *(undefined4*)( local_28 + 2 ) = param_2;
   *(undefined4*)( local_28 + 7 ) = 0;
   local_28[8] = 0;
   *(undefined4*)( local_28 + 9 ) = 0;
   *(undefined1(*) [16])( local_28 + 3 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( local_28 + 5 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( local_28 + 10 ) = (undefined1[16])0x0;
   addInstruction(this, &local_28);
   plVar2 = local_28;
   if (local_28 == (long*)0x0) {
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (*(code**)( *local_28 + 8 ) == Instruction::~Instruction) {
      pvVar1 = (void*)local_28[6];
      *local_28 = (long)&PTR__Instruction_0011c5f0;
      if (pvVar1 != (void*)0x0) {
         operator_delete(pvVar1, local_28[10] - (long)pvVar1);
      }

      pvVar1 = (void*)plVar2[3];
      if (pvVar1 != (void*)0x0) {
         operator_delete(pvVar1, plVar2[5] - (long)pvVar1);
      }

      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         operator_delete(plVar2, 0x60);
         return;
      }

   }
 else if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0010b4e3. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *local_28 + 8 ) )(local_28);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createNoResultOp(spv::Op, unsigned int) */void spv::Builder::createNoResultOp(Builder *this, undefined4 param_2, uint param_3) {
   void *pvVar1;
   Instruction *pIVar2;
   long in_FS_OFFSET;
   Instruction *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pIVar2 = (Instruction*)operator_new(0x60);
   *(undefined***)pIVar2 = &PTR__Instruction_0011c5f0;
   *(undefined8*)( pIVar2 + 8 ) = 0;
   *(undefined4*)( pIVar2 + 0x10 ) = param_2;
   *(undefined4*)( pIVar2 + 0x38 ) = 0;
   *(undefined8*)( pIVar2 + 0x40 ) = 0;
   *(undefined4*)( pIVar2 + 0x48 ) = 0;
   *(undefined1(*) [16])( pIVar2 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pIVar2 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pIVar2 + 0x50 ) = (undefined1[16])0x0;
   Instruction::addIdOperand(pIVar2, param_3);
   local_38 = pIVar2;
   addInstruction(this, &local_38);
   pIVar2 = local_38;
   if (local_38 == (Instruction*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (*(code**)( *(long*)local_38 + 8 ) == Instruction::~Instruction) {
      pvVar1 = *(void**)( local_38 + 0x30 );
      *(undefined***)local_38 = &PTR__Instruction_0011c5f0;
      if (pvVar1 != (void*)0x0) {
         operator_delete(pvVar1, *(long*)( local_38 + 0x50 ) - (long)pvVar1);
      }

      pvVar1 = *(void**)( pIVar2 + 0x18 );
      if (pvVar1 != (void*)0x0) {
         operator_delete(pvVar1, *(long*)( pIVar2 + 0x28 ) - (long)pvVar1);
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         operator_delete(pIVar2, 0x60);
         return;
      }

   }
 else if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0010b62f. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *(long*)local_38 + 8 ) )(local_38);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createNoResultOp(spv::Op, std::vector<unsigned int, std::allocator<unsigned int> >
   const&) */void spv::Builder::createNoResultOp(Builder *this, undefined4 param_2, long *param_3) {
   int iVar1;
   long lVar2;
   long lVar3;
   undefined4 *puVar4;
   undefined4 *puVar5;
   ulong *puVar6;
   Instruction *this_00;
   undefined4 *puVar7;
   long in_FS_OFFSET;
   Instruction *local_60;
   ulong *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   lVar2 = param_3[1];
   lVar3 = *param_3;
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined8*)( this_00 + 8 ) = 0;
   *(undefined4*)( this_00 + 0x10 ) = param_2;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, lVar2 - lVar3 >> 2);
   puVar7 = (undefined4*)*param_3;
   puVar4 = (undefined4*)param_3[1];
   if (puVar4 != puVar7) {
      do {
         while (true) {
            puVar5 = *(undefined4**)( this_00 + 0x20 );
            local_60 = (Instruction*)CONCAT44(local_60._4_4_, *puVar7);
            if (puVar5 == *(undefined4**)( this_00 + 0x28 )) {
               std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar5, &local_60);
            }
 else {
               *puVar5 = *puVar7;
               *(undefined4**)( this_00 + 0x20 ) = puVar5 + 1;
            }

            puVar6 = *(ulong**)( this_00 + 0x40 );
            if (puVar6 != *(ulong**)( this_00 + 0x50 )) break;
            local_50 = *(undefined4*)( this_00 + 0x48 );
            puVar7 = puVar7 + 1;
            local_58 = puVar6;
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar6, CONCAT44(uStack_4c, local_50), 1);
            if (puVar4 == puVar7) goto LAB_0010b766;
         }
;
         iVar1 = *(int*)( this_00 + 0x48 );
         if (iVar1 == 0x3f) {
            *(undefined4*)( this_00 + 0x48 ) = 0;
            *(ulong**)( this_00 + 0x40 ) = puVar6 + 1;
         }
 else {
            *(int*)( this_00 + 0x48 ) = iVar1 + 1;
         }

         puVar7 = puVar7 + 1;
         *puVar6 = *puVar6 | 1L << ( (byte)iVar1 & 0x3f );
      }
 while ( puVar4 != puVar7 );
   }

   LAB_0010b766:local_60 = this_00;
   addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeStatementTerminator(spv::Op, std::vector<unsigned int, std::allocator<unsigned
   int> > const&, char const*) */void spv::Builder::makeStatementTerminator(char *param_1) {
   createNoResultOp();
   createAndSetNoPredecessorBlock(param_1);
   return;
}
/* spv::Builder::createNoResultOp(spv::Op, std::vector<spv::IdImmediate,
   std::allocator<spv::IdImmediate> > const&) */void spv::Builder::createNoResultOp(Builder *this, undefined4 param_2, long *param_3) {
   undefined4 uVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   undefined4 *puVar5;
   undefined4 *puVar6;
   ulong *puVar7;
   byte bVar8;
   Instruction *this_00;
   char *pcVar9;
   long in_FS_OFFSET;
   Instruction *local_70;
   ulong *local_68;
   undefined4 local_60;
   undefined4 uStack_5c;
   ulong *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   lVar3 = param_3[1];
   lVar4 = *param_3;
   *(undefined4*)( this_00 + 0x10 ) = param_2;
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined8*)( this_00 + 8 ) = 0;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, lVar3 - lVar4 >> 3);
   pcVar9 = (char*)*param_3;
   if (pcVar9 != (char*)param_3[1]) {
      do {
         while (true) {
            uVar1 = *(undefined4*)( pcVar9 + 4 );
            puVar5 = *(undefined4**)( this_00 + 0x20 );
            puVar6 = *(undefined4**)( this_00 + 0x28 );
            local_70 = (Instruction*)CONCAT44(local_70._4_4_, uVar1);
            if (*pcVar9 == '\0') break;
            if (puVar6 == puVar5) {
               std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar6, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_70);
            }
 else {
               *puVar5 = uVar1;
               *(undefined4**)( this_00 + 0x20 ) = puVar5 + 1;
            }

            puVar7 = *(ulong**)( this_00 + 0x40 );
            if (puVar7 == *(ulong**)( this_00 + 0x50 )) {
               local_60 = *(undefined4*)( this_00 + 0x48 );
               local_68 = puVar7;
               std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar7, CONCAT44(uStack_5c, local_60), 1);
            }
 else {
               iVar2 = *(int*)( this_00 + 0x48 );
               if (iVar2 == 0x3f) {
                  *(undefined4*)( this_00 + 0x48 ) = 0;
                  *(ulong**)( this_00 + 0x40 ) = puVar7 + 1;
               }
 else {
                  *(int*)( this_00 + 0x48 ) = iVar2 + 1;
               }

               *puVar7 = *puVar7 | 1L << ( (byte)iVar2 & 0x3f );
            }

            LAB_0010b8ee:pcVar9 = pcVar9 + 8;
            if ((char*)param_3[1] == pcVar9) goto LAB_0010b95a;
         }
;
         if (puVar6 == puVar5) {
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar6, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_70);
         }
 else {
            *puVar5 = uVar1;
            *(undefined4**)( this_00 + 0x20 ) = puVar5 + 1;
         }

         puVar7 = *(ulong**)( this_00 + 0x40 );
         if (puVar7 == *(ulong**)( this_00 + 0x50 )) {
            local_50 = *(undefined4*)( this_00 + 0x48 );
            local_58 = puVar7;
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar7, CONCAT44(uStack_4c, local_50), 0);
            goto LAB_0010b8ee;
         }

         iVar2 = *(int*)( this_00 + 0x48 );
         if (iVar2 == 0x3f) {
            *(undefined4*)( this_00 + 0x48 ) = 0;
            *(ulong**)( this_00 + 0x40 ) = puVar7 + 1;
         }
 else {
            *(int*)( this_00 + 0x48 ) = iVar2 + 1;
         }

         pcVar9 = pcVar9 + 8;
         bVar8 = (byte)iVar2 & 0x3f;
         *puVar7 = *puVar7 & ( -2L << bVar8 | 0xfffffffffffffffeU >> 0x40 - bVar8 );
      }
 while ( (char*)param_3[1] != pcVar9 );
   }

   LAB_0010b95a:local_70 = this_00;
   addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_70);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_70);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* spv::Builder::createOp(spv::Op, unsigned int, std::vector<unsigned int, std::allocator<unsigned
   int> > const&) */undefined4 spv::Builder::createOp(Builder *this, undefined4 param_2, undefined4 param_3, long *param_4) {
   int iVar1;
   long lVar2;
   long lVar3;
   undefined4 *puVar4;
   undefined4 *puVar5;
   ulong *puVar6;
   Instruction *this_00;
   undefined4 *puVar7;
   long in_FS_OFFSET;
   Instruction *local_60;
   ulong *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   lVar2 = param_4[1];
   iVar1 = *(int*)( this + 0x1d0 );
   lVar3 = *param_4;
   *(undefined4*)( this_00 + 0xc ) = param_3;
   *(undefined4*)( this_00 + 0x10 ) = param_2;
   *(int*)( this + 0x1d0 ) = iVar1 + 1;
   *(int*)( this_00 + 8 ) = iVar1 + 1;
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, lVar2 - lVar3 >> 2);
   puVar4 = (undefined4*)param_4[1];
   for (puVar7 = (undefined4*)*param_4; puVar7 != puVar4; puVar7 = puVar7 + 1) {
      while (true) {
         puVar5 = *(undefined4**)( this_00 + 0x20 );
         local_60 = (Instruction*)CONCAT44(local_60._4_4_, *puVar7);
         if (puVar5 == *(undefined4**)( this_00 + 0x28 )) {
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar5, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
         }
 else {
            *puVar5 = *puVar7;
            *(undefined4**)( this_00 + 0x20 ) = puVar5 + 1;
         }

         puVar6 = *(ulong**)( this_00 + 0x40 );
         if (puVar6 != *(ulong**)( this_00 + 0x50 )) break;
         local_50 = *(undefined4*)( this_00 + 0x48 );
         puVar7 = puVar7 + 1;
         local_58 = puVar6;
         std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar6, CONCAT44(uStack_4c, local_50), 1);
         if (puVar4 == puVar7) goto LAB_0010bb86;
      }
;
      iVar1 = *(int*)( this_00 + 0x48 );
      if (iVar1 == 0x3f) {
         *(undefined4*)( this_00 + 0x48 ) = 0;
         *(ulong**)( this_00 + 0x40 ) = puVar6 + 1;
      }
 else {
         *(int*)( this_00 + 0x48 ) = iVar1 + 1;
      }

      *puVar6 = *puVar6 | 1L << ( (byte)iVar1 & 0x3f );
   }

   LAB_0010bb86:local_60 = this_00;
   addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return *(undefined4*)( this_00 + 8 );
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createOp(spv::Op, unsigned int, std::vector<spv::IdImmediate,
   std::allocator<spv::IdImmediate> > const&) */undefined4 spv::Builder::createOp(Builder *this, undefined4 param_2, undefined4 param_3, long *param_4) {
   int iVar1;
   undefined4 uVar2;
   long lVar3;
   long lVar4;
   undefined4 *puVar5;
   undefined4 *puVar6;
   ulong *puVar7;
   byte bVar8;
   Instruction *this_00;
   char *pcVar9;
   long in_FS_OFFSET;
   Instruction *local_70;
   ulong *local_68;
   undefined4 local_60;
   undefined4 uStack_5c;
   ulong *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   lVar3 = param_4[1];
   iVar1 = *(int*)( this + 0x1d0 );
   lVar4 = *param_4;
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_00 + 0xc ) = param_3;
   *(int*)( this + 0x1d0 ) = iVar1 + 1;
   *(int*)( this_00 + 8 ) = iVar1 + 1;
   *(undefined4*)( this_00 + 0x10 ) = param_2;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, lVar3 - lVar4 >> 3);
   pcVar9 = (char*)*param_4;
   if (pcVar9 != (char*)param_4[1]) {
      do {
         while (true) {
            uVar2 = *(undefined4*)( pcVar9 + 4 );
            puVar5 = *(undefined4**)( this_00 + 0x20 );
            puVar6 = *(undefined4**)( this_00 + 0x28 );
            local_70 = (Instruction*)CONCAT44(local_70._4_4_, uVar2);
            if (*pcVar9 == '\0') break;
            if (puVar6 == puVar5) {
               std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar6, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_70);
            }
 else {
               *puVar5 = uVar2;
               *(undefined4**)( this_00 + 0x20 ) = puVar5 + 1;
            }

            puVar7 = *(ulong**)( this_00 + 0x40 );
            if (puVar7 == *(ulong**)( this_00 + 0x50 )) {
               local_60 = *(undefined4*)( this_00 + 0x48 );
               local_68 = puVar7;
               std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar7, CONCAT44(uStack_5c, local_60), 1);
            }
 else {
               iVar1 = *(int*)( this_00 + 0x48 );
               if (iVar1 == 0x3f) {
                  *(undefined4*)( this_00 + 0x48 ) = 0;
                  *(ulong**)( this_00 + 0x40 ) = puVar7 + 1;
               }
 else {
                  *(int*)( this_00 + 0x48 ) = iVar1 + 1;
               }

               *puVar7 = *puVar7 | 1L << ( (byte)iVar1 & 0x3f );
            }

            LAB_0010bcee:pcVar9 = pcVar9 + 8;
            if ((char*)param_4[1] == pcVar9) goto LAB_0010bd58;
         }
;
         if (puVar6 == puVar5) {
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar6, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_70);
         }
 else {
            *puVar5 = uVar2;
            *(undefined4**)( this_00 + 0x20 ) = puVar5 + 1;
         }

         puVar7 = *(ulong**)( this_00 + 0x40 );
         if (puVar7 == *(ulong**)( this_00 + 0x50 )) {
            local_50 = *(undefined4*)( this_00 + 0x48 );
            local_58 = puVar7;
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar7, CONCAT44(uStack_4c, local_50), 0);
            goto LAB_0010bcee;
         }

         iVar1 = *(int*)( this_00 + 0x48 );
         if (iVar1 == 0x3f) {
            *(undefined4*)( this_00 + 0x48 ) = 0;
            *(ulong**)( this_00 + 0x40 ) = puVar7 + 1;
         }
 else {
            *(int*)( this_00 + 0x48 ) = iVar1 + 1;
         }

         pcVar9 = pcVar9 + 8;
         bVar8 = (byte)iVar1 & 0x3f;
         *puVar7 = *puVar7 & ( -2L << bVar8 | 0xfffffffffffffffeU >> 0x40 - bVar8 );
      }
 while ( (char*)param_4[1] != pcVar9 );
   }

   LAB_0010bd58:local_70 = this_00;
   addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_70);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_70);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return *(undefined4*)( this_00 + 8 );
}
/* spv::Builder::createFunctionCall(spv::Function*, std::vector<unsigned int,
   std::allocator<unsigned int> > const&) */undefined4 spv::Builder::createFunctionCall(Builder *this, Function *param_1, vector *param_2) {
   undefined4 uVar1;
   int iVar2;
   undefined4 *puVar3;
   ulong *puVar4;
   Instruction *this_00;
   long lVar5;
   long lVar6;
   long in_FS_OFFSET;
   Instruction *local_60;
   ulong *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   uVar1 = *(undefined4*)( param_1 + 0x24 );
   lVar5 = *(long*)( param_2 + 8 );
   iVar2 = *(int*)( this + 0x1d0 );
   lVar6 = *(long*)param_2;
   *(undefined4*)( this_00 + 0x10 ) = 0x39;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(int*)( this + 0x1d0 ) = iVar2 + 1;
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(ulong*)( this_00 + 8 ) = CONCAT44(uVar1, iVar2 + 1);
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, ( lVar5 - lVar6 >> 2 ) + 1);
   Instruction::addIdOperand(this_00, *(uint*)( param_1 + 0x20 ));
   lVar5 = *(long*)param_2;
   if (0 < (int)( *(long*)( param_2 + 8 ) - lVar5 >> 2 )) {
      lVar6 = 0;
      do {
         uVar1 = *(undefined4*)( lVar5 + lVar6 * 4 );
         puVar3 = *(undefined4**)( this_00 + 0x20 );
         local_60 = (Instruction*)CONCAT44(local_60._4_4_, uVar1);
         if (puVar3 == *(undefined4**)( this_00 + 0x28 )) {
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar3, &local_60);
         }
 else {
            *puVar3 = uVar1;
            *(undefined4**)( this_00 + 0x20 ) = puVar3 + 1;
         }

         puVar4 = *(ulong**)( this_00 + 0x40 );
         if (puVar4 == *(ulong**)( this_00 + 0x50 )) {
            local_50 = *(undefined4*)( this_00 + 0x48 );
            local_58 = puVar4;
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar4, CONCAT44(uStack_4c, local_50), 1);
         }
 else {
            iVar2 = *(int*)( this_00 + 0x48 );
            if (iVar2 == 0x3f) {
               *(undefined4*)( this_00 + 0x48 ) = 0;
               *(ulong**)( this_00 + 0x40 ) = puVar4 + 1;
            }
 else {
               *(int*)( this_00 + 0x48 ) = iVar2 + 1;
            }

            *puVar4 = *puVar4 | 1L << ( (byte)iVar2 & 0x3f );
         }

         lVar5 = *(long*)param_2;
         lVar6 = lVar6 + 1;
      }
 while ( (int)lVar6 < (int)( *(long*)( param_2 + 8 ) - lVar5 >> 2 ) );
   }

   local_60 = this_00;
   addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return *(undefined4*)( this_00 + 8 );
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createLvalueSwizzle(unsigned int, unsigned int, unsigned int, std::vector<unsigned
   int, std::allocator<unsigned int> > const&) */ulong spv::Builder::createLvalueSwizzle(Builder *this, uint param_1, uint param_2, uint param_3, vector *param_4) {
   int *piVar1;
   long lVar2;
   int *piVar3;
   ulong *puVar4;
   byte bVar5;
   int iVar6;
   int iVar7;
   Instruction *this_00;
   ulong uVar8;
   int iVar9;
   uint *puVar10;
   uint uVar11;
   Builder *this_01;
   int *piVar12;
   long in_FS_OFFSET;
   Instruction *local_70;
   ulong *local_68;
   undefined4 local_60;
   undefined4 uStack_5c;
   int local_58[6];
   long local_40;
   puVar10 = *(uint**)param_4;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( param_4 + 8 ) - (long)puVar10 == 4) {
      uVar11 = 0;
      lVar2 = *(long*)( *(long*)( this + 0x1b0 ) + (ulong)param_3 * 8 );
      if (lVar2 != 0) {
         uVar11 = *(uint*)( lVar2 + 0xc );
      }

      this_01 = this;
      iVar6 = getNumTypeConstituents(this, uVar11);
      if (iVar6 == 1) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar8 = createCompositeInsert(this_01, param_3, param_2, param_1, *puVar10);
            return uVar8;
         }

         goto LAB_0010c31a;
      }

   }

   this_00 = (Instruction*)operator_new(0x60);
   iVar6 = *(int*)( this + 0x1d0 );
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(uint*)( this_00 + 0xc ) = param_1;
   *(int*)( this + 0x1d0 ) = iVar6 + 1;
   *(int*)( this_00 + 8 ) = iVar6 + 1;
   *(undefined4*)( this_00 + 0x10 ) = 0x4f;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, 2);
   Instruction::addIdOperand(this_00, param_2);
   Instruction::addIdOperand(this_00, param_3);
   uVar11 = 0;
   lVar2 = *(long*)( *(long*)( this + 0x1b0 ) + (ulong)param_2 * 8 );
   if (lVar2 != 0) {
      uVar11 = *(uint*)( lVar2 + 0xc );
   }

   iVar6 = getNumTypeConstituents(this, uVar11);
   if (iVar6 < 1) {
      puVar10 = *(uint**)param_4;
      iVar9 = (int)( *(long*)( param_4 + 8 ) - (long)puVar10 >> 2 );
      if (0 < iVar9) goto LAB_0010c177;
      Instruction::reserveOperands(this_00, (long)iVar6);
   }
 else {
      uVar8 = 0;
      do {
         local_58[uVar8] = (int)uVar8;
         uVar8 = uVar8 + 1;
      }
 while ( uVar8 != (long)iVar6 );
      puVar10 = *(uint**)param_4;
      iVar9 = (int)( *(long*)( param_4 + 8 ) - (long)puVar10 >> 2 );
      if (iVar9 < 1) {
         Instruction::reserveOperands(this_00, (long)iVar6);
      }
 else {
         LAB_0010c177:iVar7 = iVar6;
         do {
            uVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            local_58[uVar11] = iVar7;
            iVar7 = iVar7 + 1;
         }
 while ( iVar7 != iVar9 + iVar6 );
         Instruction::reserveOperands(this_00, (long)iVar6);
         if (iVar6 < 1) goto LAB_0010c206;
      }

      piVar12 = local_58;
      piVar1 = piVar12 + iVar6;
      do {
         piVar3 = *(int**)( this_00 + 0x20 );
         local_70 = (Instruction*)CONCAT44(local_70._4_4_, *piVar12);
         if (piVar3 == *(int**)( this_00 + 0x28 )) {
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), piVar3, &local_70);
         }
 else {
            *piVar3 = *piVar12;
            *(int**)( this_00 + 0x20 ) = piVar3 + 1;
         }

         puVar4 = *(ulong**)( this_00 + 0x40 );
         if (puVar4 == *(ulong**)( this_00 + 0x50 )) {
            local_60 = *(undefined4*)( this_00 + 0x48 );
            local_68 = puVar4;
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar4, CONCAT44(uStack_5c, local_60), 0);
         }
 else {
            iVar6 = *(int*)( this_00 + 0x48 );
            if (iVar6 == 0x3f) {
               *(undefined4*)( this_00 + 0x48 ) = 0;
               *(ulong**)( this_00 + 0x40 ) = puVar4 + 1;
            }
 else {
               *(int*)( this_00 + 0x48 ) = iVar6 + 1;
            }

            bVar5 = (byte)iVar6 & 0x3f;
            *puVar4 = *puVar4 & ( -2L << bVar5 | 0xfffffffffffffffeU >> 0x40 - bVar5 );
         }

         piVar12 = piVar12 + 1;
      }
 while ( piVar12 != piVar1 );
   }

   LAB_0010c206:local_70 = this_00;
   addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_70);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_70);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return ( ulong ) * (uint*)( this_00 + 8 );
   }

   LAB_0010c31a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* spv::Builder::createBuiltinCall(unsigned int, unsigned int, int, std::vector<unsigned int,
   std::allocator<unsigned int> > const&) */undefined4 spv::Builder::createBuiltinCall(Builder *this, uint param_1, uint param_2, int param_3, vector *param_4) {
   int iVar1;
   undefined4 uVar2;
   undefined4 *puVar3;
   ulong *puVar4;
   Instruction *this_00;
   long lVar5;
   long lVar6;
   long in_FS_OFFSET;
   Instruction *local_60;
   ulong *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   lVar5 = *(long*)( param_4 + 8 );
   lVar6 = *(long*)param_4;
   iVar1 = *(int*)( this + 0x1d0 );
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(uint*)( this_00 + 0xc ) = param_1;
   *(int*)( this + 0x1d0 ) = iVar1 + 1;
   *(int*)( this_00 + 8 ) = iVar1 + 1;
   *(undefined4*)( this_00 + 0x10 ) = 0xc;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, ( lVar5 - lVar6 >> 2 ) + 2);
   Instruction::addIdOperand(this_00, param_2);
   Instruction::addImmediateOperand(this_00, param_3);
   lVar5 = *(long*)param_4;
   if (0 < (int)( *(long*)( param_4 + 8 ) - lVar5 >> 2 )) {
      lVar6 = 0;
      do {
         uVar2 = *(undefined4*)( lVar5 + lVar6 * 4 );
         puVar3 = *(undefined4**)( this_00 + 0x20 );
         local_60 = (Instruction*)CONCAT44(local_60._4_4_, uVar2);
         if (puVar3 == *(undefined4**)( this_00 + 0x28 )) {
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar3, &local_60);
         }
 else {
            *puVar3 = uVar2;
            *(undefined4**)( this_00 + 0x20 ) = puVar3 + 1;
         }

         puVar4 = *(ulong**)( this_00 + 0x40 );
         if (puVar4 == *(ulong**)( this_00 + 0x50 )) {
            local_50 = *(undefined4*)( this_00 + 0x48 );
            local_58 = puVar4;
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar4, CONCAT44(uStack_4c, local_50), 1);
         }
 else {
            iVar1 = *(int*)( this_00 + 0x48 );
            if (iVar1 == 0x3f) {
               *(undefined4*)( this_00 + 0x48 ) = 0;
               *(ulong**)( this_00 + 0x40 ) = puVar4 + 1;
            }
 else {
               *(int*)( this_00 + 0x48 ) = iVar1 + 1;
            }

            *puVar4 = *puVar4 | 1L << ( (byte)iVar1 & 0x3f );
         }

         lVar5 = *(long*)param_4;
         lVar6 = lVar6 + 1;
      }
 while ( (int)lVar6 < (int)( *(long*)( param_4 + 8 ) - lVar5 >> 2 ) );
   }

   local_60 = this_00;
   addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return *(undefined4*)( this_00 + 8 );
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createBranch(spv::Block*) */void spv::Builder::createBranch(Builder *this, Block *param_1) {
   uint uVar1;
   long *plVar2;
   long lVar3;
   Instruction *this_00;
   undefined8 *puVar4;
   long in_FS_OFFSET;
   long local_40;
   Instruction *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   plVar2 = *(long**)( param_1 + 8 );
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   lVar3 = *plVar2;
   *(undefined8*)( this_00 + 8 ) = 0;
   *(undefined4*)( this_00 + 0x10 ) = 0xf9;
   uVar1 = *(uint*)( lVar3 + 8 );
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   Instruction::addIdOperand(this_00, uVar1);
   local_38 = this_00;
   addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
   lVar3 = *(long*)( this + 0x1c8 );
   plVar2 = *(long**)( param_1 + 0x28 );
   local_40 = lVar3;
   if (plVar2 == *(long**)( param_1 + 0x30 )) {
      std::vector<spv::Block*,std::allocator<spv::Block*>>::_M_realloc_insert<spv::Block*const&>((vector<spv::Block*,std::allocator<spv::Block*>>*)( param_1 + 0x20 ), plVar2, &local_40);
      puVar4 = *(undefined8**)( lVar3 + 0x40 );
      if (puVar4 == *(undefined8**)( lVar3 + 0x48 )) goto LAB_0010c618;
   }
 else {
      *plVar2 = lVar3;
      *(long**)( param_1 + 0x28 ) = plVar2 + 1;
      puVar4 = *(undefined8**)( lVar3 + 0x40 );
      if (puVar4 == *(undefined8**)( lVar3 + 0x48 )) {
         LAB_0010c618:local_38 = (Instruction*)param_1;
         std::vector<spv::Block*,std::allocator<spv::Block*>>::_M_realloc_insert<spv::Block*>((vector<spv::Block*,std::allocator<spv::Block*>>*)( lVar3 + 0x38 ), puVar4, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
         goto LAB_0010c5da;
      }

   }

   *puVar4 = param_1;
   *(undefined8**)( lVar3 + 0x40 ) = puVar4 + 1;
   local_38 = (Instruction*)param_1;
   LAB_0010c5da:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::nextSwitchSegment(std::vector<spv::Block*, std::allocator<spv::Block*> >&, int) */void spv::Builder::nextSwitchSegment(Builder *this, vector *param_1, int param_2) {
   uint uVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0 < param_2) {
      uVar1 = *(uint*)( *(long*)( *(long*)( *(long*)( this + 0x1c8 ) + 0x10 ) + -8 ) + 0x10 );
      if (uVar1 < 0x100) {
         if (0xf8 < uVar1) goto LAB_0010c680;
      }
 else if (uVar1 == 0x1140) goto LAB_0010c680;
      createBranch(this, *(Block**)( *(long*)param_1 + (long)param_2 * 8 ));
   }

   LAB_0010c680:lVar2 = *(long*)( *(long*)param_1 + (long)param_2 * 8 );
   lVar3 = *(long*)( lVar2 + 0x68 );
   plVar4 = *(long**)( lVar3 + 0x98 );
   local_28 = lVar2;
   if (plVar4 == *(long**)( lVar3 + 0xa0 )) {
      std::vector<spv::Block*,std::allocator<spv::Block*>>::_M_realloc_insert<spv::Block*const&>((vector<spv::Block*,std::allocator<spv::Block*>>*)( lVar3 + 0x90 ), plVar4, &local_28);
   }
 else {
      *plVar4 = lVar2;
      *(long**)( lVar3 + 0x98 ) = plVar4 + 1;
   }

   *(long*)( this + 0x1c8 ) = lVar2;
   this[0x90] = (Builder)0x1;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::If::makeBeginElse() */void spv::Builder::If::makeBeginElse(If *this) {
   int iVar1;
   long lVar2;
   uint uVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   undefined8 *puVar7;
   undefined8 uVar8;
   undefined8 *puVar9;
   ulong uVar10;
   long lVar11;
   ulong uVar12;
   long in_FS_OFFSET;
   undefined8 *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   createBranch(*(Builder**)this, *(Block**)( this + 0x30 ));
   puVar9 = (undefined8*)operator_new(0x90);
   lVar4 = *(long*)( this + 0x10 );
   iVar1 = *(int*)( *(long*)this + 0x1d0 ) + 1;
   *(int*)( *(long*)this + 0x1d0 ) = iVar1;
   puVar9[0xd] = lVar4;
   *puVar9 = &PTR__Block_0011c610;
   for (int i = 0; i < 12; i++) {
      puVar9[( i + 1 )] = 0;
   }

   *(undefined1*)( (long)puVar9 + 0x7c ) = 0;
   *(undefined1*)( (long)puVar9 + 0x84 ) = 0;
   *(undefined1*)( puVar9 + 0x11 ) = 0;
   local_48 = (undefined8*)operator_new(0x60);
   *(int*)( local_48 + 1 ) = iVar1;
   *(undefined8*)( (long)local_48 + 0xc ) = 0xf800000000;
   *local_48 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( local_48 + 7 ) = 0;
   local_48[8] = 0;
   *(undefined4*)( local_48 + 9 ) = 0;
   *(undefined1(*) [16])( local_48 + 3 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( local_48 + 5 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( local_48 + 10 ) = (undefined1[16])0x0;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( puVar9 + 1 ), (unique_ptr*)&local_48);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   lVar4 = *(long*)( lVar4 + 8 );
   lVar5 = *(long*)( lVar4 + 0x28 );
   lVar6 = *(long*)( puVar9[2] + -8 );
   lVar11 = *(long*)( lVar4 + 0x20 );
   uVar3 = *(uint*)( lVar6 + 8 );
   *(undefined8**)( lVar6 + 0x58 ) = puVar9;
   uVar10 = lVar5 - lVar11 >> 3;
   if (uVar10 <= uVar3) {
      uVar12 = ( ulong )(uVar3 + 0x10);
      if (uVar10 < uVar12) {
         std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_default_append((vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)( lVar4 + 0x20 ), uVar12 - uVar10);
         lVar11 = *(long*)( lVar4 + 0x20 );
      }
 else if (( uVar12 < uVar10 ) && ( lVar2 = lVar5 != lVar2 )) {
         *(long*)( lVar4 + 0x28 ) = lVar2;
      }

   }

   lVar4 = *(long*)( this + 0x10 );
   *(long*)( lVar11 + (ulong)uVar3 * 8 ) = lVar6;
   *(undefined8**)( this + 0x28 ) = puVar9;
   puVar7 = *(undefined8**)( lVar4 + 0x98 );
   local_48 = puVar9;
   if (puVar7 == *(undefined8**)( lVar4 + 0xa0 )) {
      std::vector<spv::Block*,std::allocator<spv::Block*>>::_M_realloc_insert<spv::Block*const&>((vector<spv::Block*,std::allocator<spv::Block*>>*)( lVar4 + 0x90 ), puVar7, &local_48);
   }
 else {
      *puVar7 = puVar9;
      *(undefined8**)( lVar4 + 0x98 ) = puVar7 + 1;
   }

   lVar4 = *(long*)this;
   uVar8 = *(undefined8*)( this + 0x28 );
   *(undefined1*)( lVar4 + 0x90 ) = 1;
   *(undefined8*)( lVar4 + 0x1c8 ) = uVar8;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::addSwitchBreak() */void spv::Builder::addSwitchBreak(Builder *this) {
   long lVar1;
   lVar1 = *(long*)( this + 0x440 );
   if (lVar1 == *(long*)( this + 0x448 )) {
      lVar1 = *(long*)( *(long*)( this + 0x458 ) + -8 ) + 0x200;
   }

   createBranch(this, *(Block**)( lVar1 + -8 ));
   createAndSetNoPredecessorBlock((char*)this);
   return;
}
/* spv::Builder::endSwitch(std::vector<spv::Block*, std::allocator<spv::Block*> >&) */void spv::Builder::endSwitch(vector *param_1) {
   uint uVar1;
   long lVar2;
   long *plVar3;
   undefined8 uVar4;
   void *pvVar5;
   void *pvVar6;
   void *pvVar7;
   long lVar8;
   long in_FS_OFFSET;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = *(uint*)( *(long*)( *(long*)( *(long*)( param_1 + 0x1c8 ) + 0x10 ) + -8 ) + 0x10 );
   if (uVar1 < 0x100) {
      if (0xf8 < uVar1) goto LAB_0010c9d2;
   }
 else if (uVar1 == 0x1140) goto LAB_0010c9d2;
   addSwitchBreak((Builder*)param_1);
   LAB_0010c9d2:pvVar5 = *(void**)( param_1 + 0x440 );
   pvVar6 = *(void**)( param_1 + 0x448 );
   lVar8 = *(long*)( param_1 + 0x458 );
   pvVar7 = pvVar5;
   if (pvVar5 == pvVar6) {
      pvVar7 = (void*)( *(long*)( lVar8 + -8 ) + 0x200 );
   }

   local_18 = *(long*)( (long)pvVar7 + -8 );
   lVar2 = *(long*)( local_18 + 0x68 );
   plVar3 = *(long**)( lVar2 + 0x98 );
   if (plVar3 == *(long**)( lVar2 + 0xa0 )) {
      std::vector<spv::Block*,std::allocator<spv::Block*>>::_M_realloc_insert<spv::Block*const&>((vector<spv::Block*,std::allocator<spv::Block*>>*)( lVar2 + 0x90 ), plVar3, &local_18);
      pvVar5 = *(void**)( param_1 + 0x440 );
      pvVar6 = *(void**)( param_1 + 0x448 );
      lVar8 = *(long*)( param_1 + 0x458 );
   }
 else {
      *plVar3 = local_18;
      *(long**)( lVar2 + 0x98 ) = plVar3 + 1;
   }

   if (pvVar6 == pvVar5) {
      uVar4 = *(undefined8*)( *(long*)( lVar8 + -8 ) + 0x1f8 );
      param_1[0x90] = (vector)0x1;
      *(undefined8*)( param_1 + 0x1c8 ) = uVar4;
      operator_delete(pvVar6, 0x200);
      lVar8 = *(long*)( *(long*)( param_1 + 0x458 ) + -8 );
      *(long*)( param_1 + 0x458 ) = *(long*)( param_1 + 0x458 ) + -8;
      *(long*)( param_1 + 0x448 ) = lVar8;
      *(long*)( param_1 + 0x450 ) = lVar8 + 0x200;
      *(long*)( param_1 + 0x440 ) = lVar8 + 0x1f8;
   }
 else {
      uVar4 = *(undefined8*)( (long)pvVar5 + -8 );
      param_1[0x90] = (vector)0x1;
      *(long*)( param_1 + 0x440 ) = (long)pvVar5 + -8;
      *(undefined8*)( param_1 + 0x1c8 ) = uVar4;
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createLoopContinue() */void spv::Builder::createLoopContinue(Builder *this) {
   long lVar1;
   lVar1 = *(long*)( this + 0x490 );
   if (lVar1 == *(long*)( this + 0x498 )) {
      lVar1 = *(long*)( *(long*)( this + 0x4a8 ) + -8 ) + 0x200;
   }

   createBranch(this, *(Block**)( lVar1 + -8 ));
   createAndSetNoPredecessorBlock((char*)this);
   return;
}
/* spv::Builder::createLoopExit() */void spv::Builder::createLoopExit(Builder *this) {
   long lVar1;
   lVar1 = *(long*)( this + 0x490 );
   if (lVar1 == *(long*)( this + 0x498 )) {
      lVar1 = *(long*)( *(long*)( this + 0x4a8 ) + -8 ) + 0x200;
   }

   createBranch(this, *(Block**)( lVar1 + -0x10 ));
   createAndSetNoPredecessorBlock((char*)this);
   return;
}
/* spv::Builder::createSelectionMerge(spv::Block*, unsigned int) */void spv::Builder::createSelectionMerge(Builder *this, Block *param_1, uint param_2) {
   void *__src;
   Instruction *this_00;
   void *__dest;
   ulong uVar1;
   long in_FS_OFFSET;
   Instruction *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined8*)( this_00 + 8 ) = 0;
   *(undefined4*)( this_00 + 0x10 ) = 0xf7;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   __dest = operator_new(8);
   __src = *(void**)( this_00 + 0x18 );
   if (*(long*)( this_00 + 0x20 ) - (long)__src < 1) {
      if (__src == (void*)0x0) goto LAB_0010cc7a;
      uVar1 = *(long*)( this_00 + 0x28 ) - (long)__src;
   }
 else {
      memmove(__dest, __src, *(long*)( this_00 + 0x20 ) - (long)__src);
      uVar1 = *(long*)( this_00 + 0x28 ) - (long)__src;
   }

   operator_delete(__src, uVar1);
   LAB_0010cc7a:*(void**)( this_00 + 0x18 ) = __dest;
   *(void**)( this_00 + 0x20 ) = __dest;
   *(long*)( this_00 + 0x28 ) = (long)__dest + 8;
   if (( ulong )(( *(long*)( this_00 + 0x50 ) - *(long*)( this_00 + 0x30 ) ) * 8) < 2) {
      std::vector<bool,std::allocator<bool>>::_M_reallocate((vector<bool,std::allocator<bool>>*)( this_00 + 0x30 ), 2);
   }

   Instruction::addIdOperand(this_00, *(uint*)( **(long**)( param_1 + 8 ) + 8 ));
   Instruction::addImmediateOperand(this_00, param_2);
   local_48 = this_00;
   addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createLoopMerge(spv::Block*, spv::Block*, unsigned int, std::vector<unsigned int,
   std::allocator<unsigned int> > const&) */void spv::Builder::createLoopMerge(Builder *this, Block *param_1, Block *param_2, uint param_3, vector *param_4) {
   int iVar1;
   undefined4 uVar2;
   undefined4 *puVar3;
   ulong *puVar4;
   byte bVar5;
   Instruction *this_00;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   Instruction *local_60;
   ulong *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   lVar6 = *(long*)( param_4 + 8 );
   lVar7 = *(long*)param_4;
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined8*)( this_00 + 8 ) = 0;
   *(undefined4*)( this_00 + 0x10 ) = 0xf6;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, ( lVar6 - lVar7 >> 2 ) + 3);
   Instruction::addIdOperand(this_00, *(uint*)( **(long**)( param_1 + 8 ) + 8 ));
   Instruction::addIdOperand(this_00, *(uint*)( **(long**)( param_2 + 8 ) + 8 ));
   Instruction::addImmediateOperand(this_00, param_3);
   lVar6 = *(long*)param_4;
   if (0 < (int)( *(long*)( param_4 + 8 ) - lVar6 >> 2 )) {
      lVar7 = 0;
      do {
         uVar2 = *(undefined4*)( lVar6 + lVar7 * 4 );
         puVar3 = *(undefined4**)( this_00 + 0x20 );
         local_60 = (Instruction*)CONCAT44(local_60._4_4_, uVar2);
         if (puVar3 == *(undefined4**)( this_00 + 0x28 )) {
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar3, &local_60);
         }
 else {
            *puVar3 = uVar2;
            *(undefined4**)( this_00 + 0x20 ) = puVar3 + 1;
         }

         puVar4 = *(ulong**)( this_00 + 0x40 );
         if (puVar4 == *(ulong**)( this_00 + 0x50 )) {
            local_50 = *(undefined4*)( this_00 + 0x48 );
            local_58 = puVar4;
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar4, CONCAT44(uStack_4c, local_50), 0);
         }
 else {
            iVar1 = *(int*)( this_00 + 0x48 );
            if (iVar1 == 0x3f) {
               *(undefined4*)( this_00 + 0x48 ) = 0;
               *(ulong**)( this_00 + 0x40 ) = puVar4 + 1;
            }
 else {
               *(int*)( this_00 + 0x48 ) = iVar1 + 1;
            }

            bVar5 = (byte)iVar1 & 0x3f;
            *puVar4 = *puVar4 & ( -2L << bVar5 | 0xfffffffffffffffeU >> 0x40 - bVar5 );
         }

         lVar6 = *(long*)param_4;
         lVar7 = lVar7 + 1;
      }
 while ( (int)lVar7 < (int)( *(long*)( param_4 + 8 ) - lVar6 >> 2 ) );
   }

   local_60 = this_00;
   addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createConditionalBranch(unsigned int, spv::Block*, spv::Block*) */void spv::Builder::createConditionalBranch(Builder *this, uint param_1, Block *param_2, Block *param_3) {
   long lVar1;
   long *plVar2;
   Instruction *this_00;
   undefined8 *puVar3;
   long in_FS_OFFSET;
   long local_40;
   Instruction *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined8*)( this_00 + 8 ) = 0;
   *(undefined4*)( this_00 + 0x10 ) = 0xfa;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, 3);
   Instruction::addIdOperand(this_00, param_1);
   Instruction::addIdOperand(this_00, *(uint*)( **(long**)( param_2 + 8 ) + 8 ));
   Instruction::addIdOperand(this_00, *(uint*)( **(long**)( param_3 + 8 ) + 8 ));
   local_38 = this_00;
   addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
   lVar1 = *(long*)( this + 0x1c8 );
   plVar2 = *(long**)( param_2 + 0x28 );
   local_40 = lVar1;
   if (plVar2 == *(long**)( param_2 + 0x30 )) {
      std::vector<spv::Block*,std::allocator<spv::Block*>>::_M_realloc_insert<spv::Block*const&>((vector<spv::Block*,std::allocator<spv::Block*>>*)( param_2 + 0x20 ), plVar2, &local_40);
      puVar3 = *(undefined8**)( lVar1 + 0x40 );
      if (puVar3 != *(undefined8**)( lVar1 + 0x48 )) goto LAB_0010d04d;
      LAB_0010d0e8:local_38 = (Instruction*)param_2;
      std::vector<spv::Block*,std::allocator<spv::Block*>>::_M_realloc_insert<spv::Block*>((vector<spv::Block*,std::allocator<spv::Block*>>*)( lVar1 + 0x38 ), puVar3, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
   }
 else {
      *plVar2 = lVar1;
      *(long**)( param_2 + 0x28 ) = plVar2 + 1;
      puVar3 = *(undefined8**)( lVar1 + 0x40 );
      if (puVar3 == *(undefined8**)( lVar1 + 0x48 )) goto LAB_0010d0e8;
      LAB_0010d04d:*puVar3 = param_2;
      *(undefined8**)( lVar1 + 0x40 ) = puVar3 + 1;
      local_38 = (Instruction*)param_2;
   }

   lVar1 = *(long*)( this + 0x1c8 );
   plVar2 = *(long**)( param_3 + 0x28 );
   local_40 = lVar1;
   if (plVar2 == *(long**)( param_3 + 0x30 )) {
      std::vector<spv::Block*,std::allocator<spv::Block*>>::_M_realloc_insert<spv::Block*const&>((vector<spv::Block*,std::allocator<spv::Block*>>*)( param_3 + 0x20 ), plVar2, &local_40);
      puVar3 = *(undefined8**)( lVar1 + 0x40 );
      if (puVar3 == *(undefined8**)( lVar1 + 0x48 )) goto LAB_0010d128;
   }
 else {
      *plVar2 = lVar1;
      *(long**)( param_3 + 0x28 ) = plVar2 + 1;
      puVar3 = *(undefined8**)( lVar1 + 0x40 );
      if (puVar3 == *(undefined8**)( lVar1 + 0x48 )) {
         LAB_0010d128:local_38 = (Instruction*)param_3;
         std::vector<spv::Block*,std::allocator<spv::Block*>>::_M_realloc_insert<spv::Block*>((vector<spv::Block*,std::allocator<spv::Block*>>*)( lVar1 + 0x38 ), puVar3, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
         goto LAB_0010d09b;
      }

   }

   *puVar3 = param_3;
   *(undefined8**)( lVar1 + 0x40 ) = puVar3 + 1;
   local_38 = (Instruction*)param_3;
   LAB_0010d09b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* spv::Builder::If::makeEndIf() */void spv::Builder::If::makeEndIf(If *this) {
   uint uVar1;
   Builder *this_00;
   long lVar2;
   undefined8 *puVar3;
   undefined8 uVar4;
   Block *pBVar5;
   long in_FS_OFFSET;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   createBranch(*(Builder**)this, *(Block**)( this + 0x30 ));
   this_00 = *(Builder**)this;
   uVar1 = *(uint*)( this + 0xc );
   *(undefined8*)( this_00 + 0x1c8 ) = *(undefined8*)( this + 0x18 );
   pBVar5 = *(Block**)( this + 0x30 );
   this_00[0x90] = (Builder)0x1;
   createSelectionMerge(this_00, pBVar5, uVar1);
   pBVar5 = *(Block**)( this + 0x28 );
   if (pBVar5 == (Block*)0x0) {
      pBVar5 = *(Block**)( this + 0x30 );
   }

   createConditionalBranch(*(Builder**)this, *(uint*)( this + 8 ), *(Block**)( this + 0x20 ), pBVar5);
   lVar2 = *(long*)( this + 0x10 );
   local_18 = *(undefined8*)( this + 0x30 );
   puVar3 = *(undefined8**)( lVar2 + 0x98 );
   if (puVar3 == *(undefined8**)( lVar2 + 0xa0 )) {
      std::vector<spv::Block*,std::allocator<spv::Block*>>::_M_realloc_insert<spv::Block*const&>((vector<spv::Block*,std::allocator<spv::Block*>>*)( lVar2 + 0x90 ), puVar3, &local_18);
   }
 else {
      *puVar3 = local_18;
      *(undefined8**)( lVar2 + 0x98 ) = puVar3 + 1;
   }

   lVar2 = *(long*)this;
   uVar4 = *(undefined8*)( this + 0x30 );
   *(undefined1*)( lVar2 + 0x90 ) = 1;
   *(undefined8*)( lVar2 + 0x1c8 ) = uVar4;
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeReturn(bool, unsigned int) */void spv::Builder::makeReturn(Builder *this, bool param_1, uint param_2) {
   Instruction *this_00;
   long in_FS_OFFSET;
   Instruction *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == 0) {
      local_38 = (Instruction*)operator_new(0x60);
      *(undefined***)local_38 = &PTR__Instruction_0011c5f0;
      *(undefined8*)( local_38 + 8 ) = 0;
      *(undefined4*)( local_38 + 0x10 ) = 0xfd;
      *(undefined4*)( local_38 + 0x38 ) = 0;
      *(undefined8*)( local_38 + 0x40 ) = 0;
      *(undefined4*)( local_38 + 0x48 ) = 0;
      *(undefined1(*) [16])( local_38 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( local_38 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( local_38 + 0x50 ) = (undefined1[16])0x0;
   }
 else {
      this_00 = (Instruction*)operator_new(0x60);
      *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
      *(undefined8*)( this_00 + 8 ) = 0;
      *(undefined4*)( this_00 + 0x10 ) = 0xfe;
      *(undefined4*)( this_00 + 0x38 ) = 0;
      *(undefined8*)( this_00 + 0x40 ) = 0;
      *(undefined4*)( this_00 + 0x48 ) = 0;
      *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
      Instruction::addIdOperand(this_00, param_2);
      local_38 = this_00;
   }

   addInstruction(this, &local_38);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
   if (param_1) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      createAndSetNoPredecessorBlock((char*)this);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::leaveFunction() */void spv::Builder::leaveFunction(Builder *this) {
   Builder BVar1;
   int iVar2;
   void *pvVar3;
   long lVar4;
   int iVar5;
   uint uVar6;
   uVar6 = *(uint*)( *(long*)( *(long*)( *(long*)( this + 0x1c8 ) + 0x10 ) + -8 ) + 0x10 );
   if (uVar6 < 0x100) {
      if (uVar6 < 0xf9) {
         LAB_0010d3d7:lVar4 = *(long*)( *(long*)( this + 0x1c8 ) + 0x68 );
         iVar2 = *(int*)( lVar4 + 0x24 );
         iVar5 = makeVoidType(this);
         if (iVar5 != iVar2) {
            uVar6 = createUndefined(this, *(uint*)( lVar4 + 0x24 ));
            makeReturn(this, true, uVar6);
            BVar1 = this[0xea];
            goto joined_r0x0010d40d;
         }

         makeReturn(this, true, 0);
      }

   }
 else if (uVar6 != 0x1140) goto LAB_0010d3d7;
   BVar1 = this[0xea];
   joined_r0x0010d40d:if (BVar1 != (Builder)0x0) {
      pvVar3 = *(void**)( this + 200 );
      if (pvVar3 == *(void**)( this + 0xd0 )) {
         operator_delete(pvVar3, 0x200);
         lVar4 = *(long*)( *(long*)( this + 0xe0 ) + -8 );
         *(long*)( this + 0xe0 ) = *(long*)( this + 0xe0 ) + -8;
         *(long*)( this + 0xd0 ) = lVar4;
         *(long*)( this + 0xd8 ) = lVar4 + 0x200;
         *(long*)( this + 200 ) = lVar4 + 0x1fc;
      }
 else {
         *(long*)( this + 200 ) = (long)pvVar3 + -4;
      }

   }

   this[0xea] = this[0xeb];
   return;
}
/* spv::Builder::makeStatementTerminator(spv::Op, char const*) */void spv::Builder::makeStatementTerminator(Builder *param_1, undefined4 param_2) {
   void *pvVar1;
   long *plVar2;
   long in_FS_OFFSET;
   long *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = (long*)operator_new(0x60);
   *(undefined4*)( local_38 + 2 ) = param_2;
   *local_38 = (long)&PTR__Instruction_0011c5f0;
   local_38[1] = 0;
   *(undefined4*)( local_38 + 7 ) = 0;
   local_38[8] = 0;
   *(undefined4*)( local_38 + 9 ) = 0;
   *(undefined1(*) [16])( local_38 + 3 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( local_38 + 5 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( local_38 + 10 ) = (undefined1[16])0x0;
   addInstruction(param_1, &local_38);
   plVar2 = local_38;
   if (local_38 != (long*)0x0) {
      if (*(code**)( *local_38 + 8 ) == Instruction::~Instruction) {
         pvVar1 = (void*)local_38[6];
         *local_38 = (long)&PTR__Instruction_0011c5f0;
         if (pvVar1 != (void*)0x0) {
            operator_delete(pvVar1, local_38[10] - (long)pvVar1);
         }

         pvVar1 = (void*)plVar2[3];
         if (pvVar1 != (void*)0x0) {
            operator_delete(pvVar1, plVar2[5] - (long)pvVar1);
         }

         operator_delete(plVar2, 0x60);
      }
 else {
         ( **(code**)( *local_38 + 8 ) )(local_38);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      createAndSetNoPredecessorBlock((char*)param_1);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createCompositeExtract(unsigned int, unsigned int, unsigned int) */undefined4 spv::Builder::createCompositeExtract(Builder *this, uint param_1, uint param_2, uint param_3) {
   int iVar1;
   undefined4 uVar2;
   Instruction *pIVar3;
   uint *puVar4;
   long in_FS_OFFSET;
   uint *local_68;
   uint *local_60;
   uint *local_58;
   Instruction *local_48;
   Instruction *local_40;
   Instruction *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x1e0] == (Builder)0x0) {
      pIVar3 = (Instruction*)operator_new(0x60);
      iVar1 = *(int*)( this + 0x1d0 );
      *(undefined***)pIVar3 = &PTR__Instruction_0011c5f0;
      *(uint*)( pIVar3 + 0xc ) = param_2;
      *(int*)( this + 0x1d0 ) = iVar1 + 1;
      *(int*)( pIVar3 + 8 ) = iVar1 + 1;
      *(undefined4*)( pIVar3 + 0x10 ) = 0x51;
      *(undefined4*)( pIVar3 + 0x38 ) = 0;
      *(undefined8*)( pIVar3 + 0x40 ) = 0;
      *(undefined4*)( pIVar3 + 0x48 ) = 0;
      *(undefined1(*) [16])( pIVar3 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( pIVar3 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( pIVar3 + 0x50 ) = (undefined1[16])0x0;
      Instruction::reserveOperands(pIVar3, 2);
      Instruction::addIdOperand(pIVar3, param_1);
      Instruction::addImmediateOperand(pIVar3, param_3);
      local_48 = pIVar3;
      addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
      uVar2 = *(undefined4*)( pIVar3 + 8 );
   }
 else {
      pIVar3 = (Instruction*)operator_new(4);
      local_40 = pIVar3 + 4;
      *(uint*)pIVar3 = param_3;
      local_48 = pIVar3;
      local_38 = local_40;
      puVar4 = (uint*)operator_new(4);
      local_60 = puVar4 + 1;
      *puVar4 = param_1;
      local_68 = puVar4;
      local_58 = local_60;
      uVar2 = createSpecConstantOp(this, 0x51, param_2, &local_68, &local_48);
      operator_delete(puVar4, 4);
      operator_delete(pIVar3, 4);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createCompositeExtract(unsigned int, unsigned int, std::vector<unsigned int,
   std::allocator<unsigned int> > const&) */undefined4 spv::Builder::createCompositeExtract(Builder *this, uint param_1, uint param_2, vector *param_3) {
   int iVar1;
   undefined4 *puVar2;
   byte bVar3;
   undefined4 uVar4;
   ulong *puVar5;
   Instruction *this_00;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   Instruction *local_60;
   ulong *local_58;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x1e0] == (Builder)0x0) {
      this_00 = (Instruction*)operator_new(0x60);
      lVar6 = *(long*)( param_3 + 8 );
      lVar7 = *(long*)param_3;
      iVar1 = *(int*)( this + 0x1d0 );
      *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
      *(uint*)( this_00 + 0xc ) = param_2;
      *(int*)( this + 0x1d0 ) = iVar1 + 1;
      *(int*)( this_00 + 8 ) = iVar1 + 1;
      *(undefined4*)( this_00 + 0x10 ) = 0x51;
      *(undefined4*)( this_00 + 0x38 ) = 0;
      *(undefined8*)( this_00 + 0x40 ) = 0;
      *(undefined4*)( this_00 + 0x48 ) = 0;
      *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
      Instruction::reserveOperands(this_00, ( lVar6 - lVar7 >> 2 ) + 1);
      Instruction::addIdOperand(this_00, param_1);
      lVar6 = *(long*)param_3;
      if (0 < (int)( *(long*)( param_3 + 8 ) - lVar6 >> 2 )) {
         lVar7 = 0;
         do {
            uVar4 = *(undefined4*)( lVar6 + lVar7 * 4 );
            puVar2 = *(undefined4**)( this_00 + 0x20 );
            local_60 = (Instruction*)CONCAT44(local_60._4_4_, uVar4);
            if (puVar2 == *(undefined4**)( this_00 + 0x28 )) {
               std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar2, &local_60);
            }
 else {
               *puVar2 = uVar4;
               *(undefined4**)( this_00 + 0x20 ) = puVar2 + 1;
            }

            puVar5 = *(ulong**)( this_00 + 0x40 );
            if (puVar5 == *(ulong**)( this_00 + 0x50 )) {
               local_50 = CONCAT44(local_50._4_4_, *(undefined4*)( this_00 + 0x48 ));
               local_58 = puVar5;
               std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar5, local_50, 0);
            }
 else {
               iVar1 = *(int*)( this_00 + 0x48 );
               if (iVar1 == 0x3f) {
                  *(undefined4*)( this_00 + 0x48 ) = 0;
                  *(ulong**)( this_00 + 0x40 ) = puVar5 + 1;
               }
 else {
                  *(int*)( this_00 + 0x48 ) = iVar1 + 1;
               }

               bVar3 = (byte)iVar1 & 0x3f;
               *puVar5 = *puVar5 & ( -2L << bVar3 | 0xfffffffffffffffeU >> 0x40 - bVar3 );
            }

            lVar6 = *(long*)param_3;
            lVar7 = lVar7 + 1;
         }
 while ( (int)lVar7 < (int)( *(long*)( param_3 + 8 ) - lVar6 >> 2 ) );
      }

      local_60 = this_00;
      addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
      uVar4 = *(undefined4*)( this_00 + 8 );
   }
 else {
      puVar5 = (ulong*)operator_new(4);
      *(uint*)puVar5 = param_1;
      local_50 = (long)puVar5 + 4;
      local_58 = puVar5;
      local_48 = local_50;
      uVar4 = createSpecConstantOp(this, 0x51, param_2, &local_58, param_3);
      operator_delete(puVar5, 4);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createUnaryOp(spv::Op, unsigned int, unsigned int) */undefined4 spv::Builder::createUnaryOp(Builder *this, undefined4 param_2, undefined4 param_3, uint param_4) {
   int iVar1;
   undefined4 uVar2;
   uint *puVar3;
   Instruction *this_00;
   long in_FS_OFFSET;
   uint *local_68;
   uint *local_60;
   uint *local_58;
   undefined1 local_48[16];
   undefined8 local_38;
   long local_30;
   local_48._8_8_ = local_48._0_8_;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x1e0] == (Builder)0x0) {
      this_00 = (Instruction*)operator_new(0x60);
      iVar1 = *(int*)( this + 0x1d0 );
      *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
      *(undefined4*)( this_00 + 0xc ) = param_3;
      *(int*)( this + 0x1d0 ) = iVar1 + 1;
      *(int*)( this_00 + 8 ) = iVar1 + 1;
      *(undefined4*)( this_00 + 0x10 ) = param_2;
      *(undefined4*)( this_00 + 0x38 ) = 0;
      *(undefined8*)( this_00 + 0x40 ) = 0;
      *(undefined4*)( this_00 + 0x48 ) = 0;
      *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
      Instruction::addIdOperand(this_00, param_4);
      local_48._0_8_ = this_00;
      addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)local_48);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)local_48);
      uVar2 = *(undefined4*)( this_00 + 8 );
   }
 else {
      local_38 = 0;
      local_48 = (undefined1[16])0x0;
      puVar3 = (uint*)operator_new(4);
      local_60 = puVar3 + 1;
      *puVar3 = param_4;
      local_68 = puVar3;
      local_58 = local_60;
      uVar2 = createSpecConstantOp(this, param_2, param_3, &local_68, local_48);
      operator_delete(puVar3, 4);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createBinOp(spv::Op, unsigned int, unsigned int, unsigned int) */undefined4 spv::Builder::createBinOp(Builder *this, undefined4 param_2, undefined4 param_3, uint param_4, uint param_5) {
   int iVar1;
   undefined4 uVar2;
   uint *puVar3;
   Instruction *this_00;
   long in_FS_OFFSET;
   uint *local_78;
   uint *local_70;
   uint *local_68;
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   local_58._8_8_ = local_58._0_8_;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x1e0] == (Builder)0x0) {
      this_00 = (Instruction*)operator_new(0x60);
      iVar1 = *(int*)( this + 0x1d0 );
      *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
      *(undefined4*)( this_00 + 0xc ) = param_3;
      *(int*)( this + 0x1d0 ) = iVar1 + 1;
      *(int*)( this_00 + 8 ) = iVar1 + 1;
      *(undefined4*)( this_00 + 0x10 ) = param_2;
      *(undefined4*)( this_00 + 0x38 ) = 0;
      *(undefined8*)( this_00 + 0x40 ) = 0;
      *(undefined4*)( this_00 + 0x48 ) = 0;
      *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
      Instruction::reserveOperands(this_00, 2);
      Instruction::addIdOperand(this_00, param_4);
      Instruction::addIdOperand(this_00, param_5);
      local_58._0_8_ = this_00;
      addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)local_58);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)local_58);
      uVar2 = *(undefined4*)( this_00 + 8 );
   }
 else {
      puVar3 = (uint*)operator_new(8);
      local_70 = puVar3 + 2;
      *puVar3 = param_4;
      puVar3[1] = param_5;
      local_48 = 0;
      local_58 = (undefined1[16])0x0;
      local_78 = puVar3;
      local_68 = local_70;
      uVar2 = createSpecConstantOp(this, param_2, param_3, &local_78, local_58);
      operator_delete(puVar3, 8);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createTriOp(spv::Op, unsigned int, unsigned int, unsigned int, unsigned int) */undefined4 spv::Builder::createTriOp(Builder *this, undefined4 param_2, undefined4 param_3, uint param_4, uint param_5, uint param_6) {
   int iVar1;
   undefined4 uVar2;
   uint *puVar3;
   Instruction *this_00;
   long in_FS_OFFSET;
   uint *local_78;
   uint *local_70;
   uint *local_68;
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   local_58._8_8_ = local_58._0_8_;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x1e0] == (Builder)0x0) {
      this_00 = (Instruction*)operator_new(0x60);
      iVar1 = *(int*)( this + 0x1d0 );
      *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
      *(undefined4*)( this_00 + 0xc ) = param_3;
      *(int*)( this + 0x1d0 ) = iVar1 + 1;
      *(int*)( this_00 + 8 ) = iVar1 + 1;
      *(undefined4*)( this_00 + 0x10 ) = param_2;
      *(undefined4*)( this_00 + 0x38 ) = 0;
      *(undefined8*)( this_00 + 0x40 ) = 0;
      *(undefined4*)( this_00 + 0x48 ) = 0;
      *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
      Instruction::reserveOperands(this_00, 3);
      Instruction::addIdOperand(this_00, param_4);
      Instruction::addIdOperand(this_00, param_5);
      Instruction::addIdOperand(this_00, param_6);
      local_58._0_8_ = this_00;
      addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)local_58);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)local_58);
      uVar2 = *(undefined4*)( this_00 + 8 );
   }
 else {
      puVar3 = (uint*)operator_new(0xc);
      local_70 = puVar3 + 3;
      puVar3[2] = param_6;
      *puVar3 = param_4;
      puVar3[1] = param_5;
      local_48 = 0;
      local_58 = (undefined1[16])0x0;
      local_78 = puVar3;
      local_68 = local_70;
      uVar2 = createSpecConstantOp(this, param_2, param_3, &local_78, local_58);
      operator_delete(puVar3, 0xc);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createRvalueSwizzle(spv::Decoration, unsigned int, unsigned int,
   std::vector<unsigned int, std::allocator<unsigned int> > const&) */int spv::Builder::createRvalueSwizzle(Builder *this, int param_2, uint param_3, uint param_4, long *param_5) {
   undefined4 uVar1;
   long lVar2;
   undefined4 *puVar3;
   byte bVar4;
   int iVar5;
   Instruction *this_00;
   ulong *puVar6;
   long lVar7;
   long lVar8;
   long in_FS_OFFSET;
   Instruction *local_60;
   ulong *local_58;
   ulong *local_50;
   ulong *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_5[1] - *param_5 == 4) {
      iVar5 = createCompositeExtract(this, param_4, param_3, *(uint*)*param_5);
   }
 else {
      if (this[0x1e0] != (Builder)0x0) {
         puVar6 = (ulong*)operator_new(8);
         local_50 = puVar6 + 1;
         *puVar6 = CONCAT44(param_4, param_4);
         local_58 = puVar6;
         local_48 = local_50;
         iVar5 = createSpecConstantOp(this, 0x4f, param_3, &local_58, param_5);
         if (( iVar5 != 0 ) && ( param_2 != 0x7fffffff )) {
            addDecoration(this, iVar5, param_2, 0xffffffff);
         }

         operator_delete(puVar6, 8);
         goto LAB_0010dfc6;
      }

      this_00 = (Instruction*)operator_new(0x60);
      lVar7 = param_5[1];
      lVar2 = *param_5;
      iVar5 = *(int*)( this + 0x1d0 );
      *(uint*)( this_00 + 0xc ) = param_3;
      lVar8 = 0;
      *(undefined4*)( this_00 + 0x10 ) = 0x4f;
      *(int*)( this + 0x1d0 ) = iVar5 + 1;
      *(int*)( this_00 + 8 ) = iVar5 + 1;
      *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
      *(undefined4*)( this_00 + 0x38 ) = 0;
      *(undefined8*)( this_00 + 0x40 ) = 0;
      *(undefined4*)( this_00 + 0x48 ) = 0;
      *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
      Instruction::reserveOperands(this_00, ( lVar7 - lVar2 >> 2 ) + 2);
      Instruction::addIdOperand(this_00, param_4);
      Instruction::addIdOperand(this_00, param_4);
      lVar7 = *param_5;
      if (0 < (int)( param_5[1] - lVar7 >> 2 )) {
         do {
            uVar1 = *(undefined4*)( lVar7 + lVar8 * 4 );
            puVar3 = *(undefined4**)( this_00 + 0x20 );
            local_60 = (Instruction*)CONCAT44(local_60._4_4_, uVar1);
            if (puVar3 == *(undefined4**)( this_00 + 0x28 )) {
               std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar3, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
            }
 else {
               *puVar3 = uVar1;
               *(undefined4**)( this_00 + 0x20 ) = puVar3 + 1;
            }

            puVar6 = *(ulong**)( this_00 + 0x40 );
            if (puVar6 == *(ulong**)( this_00 + 0x50 )) {
               local_50 = (ulong*)CONCAT44(local_50._4_4_, *(undefined4*)( this_00 + 0x48 ));
               local_58 = puVar6;
               std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar6, local_50, 0);
            }
 else {
               iVar5 = *(int*)( this_00 + 0x48 );
               if (iVar5 == 0x3f) {
                  *(undefined4*)( this_00 + 0x48 ) = 0;
                  *(ulong**)( this_00 + 0x40 ) = puVar6 + 1;
               }
 else {
                  *(int*)( this_00 + 0x48 ) = iVar5 + 1;
               }

               bVar4 = (byte)iVar5 & 0x3f;
               *puVar6 = *puVar6 & ( -2L << bVar4 | 0xfffffffffffffffeU >> 0x40 - bVar4 );
            }

            lVar7 = *param_5;
            lVar8 = lVar8 + 1;
         }
 while ( (int)lVar8 < (int)( param_5[1] - lVar7 >> 2 ) );
      }

      local_60 = this_00;
      addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
      iVar5 = *(int*)( this_00 + 8 );
   }

   if (( iVar5 != 0 ) && ( param_2 != 0x7fffffff )) {
      addDecoration(this, iVar5, param_2, 0xffffffff);
   }

   LAB_0010dfc6:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::enterFunction(spv::Function const*) */void spv::Builder::enterFunction(Builder *this, Function *param_1) {
   _Rb_tree_node_base *p_Var1;
   int iVar2;
   undefined4 uVar3;
   _Rb_tree_node_base *p_Var4;
   uint *puVar5;
   Instruction *this_00;
   uint *puVar6;
   long lVar7;
   int iVar8;
   _Rb_tree_node_base *p_Var9;
   long in_FS_OFFSET;
   bool local_5c;
   uint local_4c;
   Instruction *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this[0xeb] = this[0xea];
   if (( *(int*)( this + 0x44 ) == 5 ) && ( *(Function**)( this + 0x1d8 ) == param_1 )) {
      this[0xea] = (Builder)0x0;
   }
 else if (this[0xea] != (Builder)0x0) {
      local_4c = *(uint*)( param_1 + 0x20 );
      puVar5 = (uint*)std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator []((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)( this + 0x518 ), &local_4c);
      puVar6 = *(uint**)( this + 200 );
      if (puVar6 == (uint*)( *(long*)( this + 0xd8 ) + -4 )) {
         std::deque<unsigned_int,std::allocator<unsigned_int>>::_M_push_back_aux<unsigned_int_const&>((deque<unsigned_int,std::allocator<unsigned_int>>*)( this + 0x98 ), puVar5);
      }
 else {
         *puVar6 = *puVar5;
         *(uint**)( this + 200 ) = puVar6 + 1;
      }

      iVar2 = *(int*)( this + 0x1d0 );
      *(int*)( this + 0x1d0 ) = iVar2 + 1;
      this_00 = (Instruction*)operator_new(0x60);
      uVar3 = makeVoidType(this);
      *(int*)( this_00 + 8 ) = iVar2 + 1;
      *(undefined4*)( this_00 + 0xc ) = uVar3;
      *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
      *(undefined4*)( this_00 + 0x10 ) = 0xc;
      *(undefined4*)( this_00 + 0x38 ) = 0;
      *(undefined8*)( this_00 + 0x40 ) = 0;
      *(undefined4*)( this_00 + 0x48 ) = 0;
      *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
      Instruction::reserveOperands(this_00, 4);
      Instruction::addIdOperand(this_00, *(uint*)( this + 0x50 ));
      Instruction::addImmediateOperand(this_00, 0x65);
      puVar6 = (uint*)std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator []((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)( this + 0x518 ), &local_4c);
      Instruction::addIdOperand(this_00, *puVar6);
      Instruction::addIdOperand(this_00, local_4c);
      local_48 = this_00;
      addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   }

   iVar2 = *(int*)( param_1 + 0xe0 );
   if (iVar2 == 0x7fffffff) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      goto LAB_0010e399;
   }

   uVar3 = *(undefined4*)( param_1 + 0x20 );
   p_Var1 = (_Rb_tree_node_base*)( this + 0x160 );
   p_Var4 = *(_Rb_tree_node_base**)( this + 0x168 );
   if (*(_Rb_tree_node_base**)( this + 0x168 ) == (_Rb_tree_node_base*)0x0) {
      p_Var9 = p_Var1;
      if (p_Var1 == *(_Rb_tree_node_base**)( this + 0x170 )) {
         local_5c = true;
         goto LAB_0010e188;
      }

      LAB_0010e355:lVar7 = std::_Rb_tree_decrement(p_Var9);
      iVar8 = *(int*)( lVar7 + 0x20 );
      LAB_0010e172:if (iVar8 < 5) goto LAB_0010e177;
   }
 else {
      do {
         p_Var9 = p_Var4;
         iVar8 = *(int*)( p_Var9 + 0x20 );
         p_Var4 = *(_Rb_tree_node_base**)( p_Var9 + 0x18 );
         if (5 < iVar8) {
            p_Var4 = *(_Rb_tree_node_base**)( p_Var9 + 0x10 );
         }

      }
 while ( p_Var4 != (_Rb_tree_node_base*)0x0 );
      if (iVar8 < 6) goto LAB_0010e172;
      if (*(_Rb_tree_node_base**)( this + 0x170 ) != p_Var9) goto LAB_0010e355;
      LAB_0010e177:local_5c = true;
      if (p_Var1 != p_Var9) {
         local_5c = 5 < *(int*)( p_Var9 + 0x20 );
      }

      LAB_0010e188:p_Var4 = (_Rb_tree_node_base*)operator_new(0x28);
      *(undefined4*)( p_Var4 + 0x20 ) = 5;
      std::_Rb_tree_insert_and_rebalance(local_5c, p_Var4, p_Var9, p_Var1);
      *(long*)( this + 0x180 ) = *(long*)( this + 0x180 ) + 1;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      addLinkageDecoration(this, uVar3, *(undefined8*)( param_1 + 0xe8 ), iVar2);
      return;
   }

   LAB_0010e399:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* spv::Builder::makeSwitch(unsigned int, unsigned int, int, std::vector<int, std::allocator<int> >
   const&, std::vector<int, std::allocator<int> > const&, int, std::vector<spv::Block*,
   std::allocator<spv::Block*> >&) */void spv::Builder::makeSwitch(Builder *this, uint param_1, uint param_2, int param_3, vector *param_4, vector *param_5, int param_6, vector *param_7) {
   long lVar1;
   int iVar2;
   uint uVar3;
   undefined4 uVar4;
   Function *pFVar5;
   long lVar6;
   ulong *puVar7;
   undefined4 *puVar8;
   Block *pBVar9;
   ulong uVar10;
   Instruction *this_00;
   undefined8 *puVar11;
   void *pvVar12;
   size_t sVar13;
   long *plVar14;
   ulong uVar15;
   int iVar16;
   Block *pBVar17;
   long lVar18;
   long *__src;
   long lVar19;
   long *__dest;
   long lVar20;
   long in_FS_OFFSET;
   undefined1 uVar21;
   long local_78;
   Instruction *local_70;
   ulong *local_68;
   undefined4 local_60;
   undefined4 uStack_5c;
   Block *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pFVar5 = *(Function**)( *(long*)( this + 0x1c8 ) + 0x68 );
   if (0 < param_3) {
      iVar16 = 0;
      do {
         while (true) {
            pBVar9 = (Block*)operator_new(0x90);
            iVar2 = *(int*)( this + 0x1d0 );
            *(undefined8*)( pBVar9 + 8 ) = 0;
            *(undefined8*)( pBVar9 + 0x10 ) = 0;
            *(int*)( this + 0x1d0 ) = iVar2 + 1;
            *(undefined***)pBVar9 = &PTR__Block_0011c610;
            for (int i = 0; i < 10; i++) {
               *(undefined8*)( pBVar9 + ( 8*i + 24 ) ) = 0;
            }

            *(Function**)( pBVar9 + 0x68 ) = pFVar5;
            pBVar9[0x7c] = (Block)0x0;
            pBVar9[0x84] = (Block)0x0;
            pBVar9[0x88] = (Block)0x0;
            local_58 = (Block*)operator_new(0x60);
            *(undefined***)local_58 = &PTR__Instruction_0011c5f0;
            *(int*)( local_58 + 8 ) = iVar2 + 1;
            *(undefined8*)( local_58 + 0xc ) = 0xf800000000;
            *(undefined4*)( local_58 + 0x38 ) = 0;
            *(long*)( local_58 + 0x40 ) = 0;
            *(undefined4*)( local_58 + 0x48 ) = 0;
            *(undefined1(*) [16])( local_58 + 0x18 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( local_58 + 0x28 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( local_58 + 0x50 ) = (undefined1[16])0x0;
            std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( pBVar9 + 8 ), (unique_ptr*)&local_58);
            pBVar17 = local_58;
            if (local_58 != (Block*)0x0) {
               if (*(code**)( *(long*)local_58 + 8 ) == Instruction::~Instruction) {
                  *(undefined***)local_58 = &PTR__Instruction_0011c5f0;
                  pvVar12 = *(void**)( local_58 + 0x30 );
                  if (pvVar12 != (void*)0x0) {
                     operator_delete(pvVar12, *(long*)( local_58 + 0x50 ) - (long)pvVar12);
                  }

                  pvVar12 = *(void**)( pBVar17 + 0x18 );
                  if (pvVar12 != (void*)0x0) {
                     operator_delete(pvVar12, *(long*)( pBVar17 + 0x28 ) - (long)pvVar12);
                  }

                  operator_delete(pBVar17, 0x60);
               }
 else {
                  ( **(code**)( *(long*)local_58 + 8 ) )(local_58);
               }

            }

            lVar18 = *(long*)( pFVar5 + 8 );
            lVar20 = *(long*)( lVar18 + 0x28 );
            lVar6 = *(long*)( *(long*)( pBVar9 + 0x10 ) + -8 );
            lVar19 = *(long*)( lVar18 + 0x20 );
            uVar3 = *(uint*)( lVar6 + 8 );
            *(Block**)( lVar6 + 0x58 ) = pBVar9;
            uVar10 = lVar20 - lVar19 >> 3;
            if (uVar10 <= uVar3) {
               uVar15 = ( ulong )(uVar3 + 0x10);
               if (uVar10 < uVar15) {
                  std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_default_append((vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)( lVar18 + 0x20 ), uVar15 - uVar10);
                  lVar19 = *(long*)( lVar18 + 0x20 );
               }
 else if (( uVar15 < uVar10 ) && ( lVar1 = lVar20 != lVar1 )) {
                  *(long*)( lVar18 + 0x28 ) = lVar1;
               }

            }

            *(long*)( lVar19 + (ulong)uVar3 * 8 ) = lVar6;
            puVar11 = *(undefined8**)( param_7 + 8 );
            local_58 = pBVar9;
            if (puVar11 == *(undefined8**)( param_7 + 0x10 )) break;
            *puVar11 = pBVar9;
            iVar16 = iVar16 + 1;
            *(undefined8**)( param_7 + 8 ) = puVar11 + 1;
            if (param_3 == iVar16) goto LAB_0010e63a;
         }
;
         iVar16 = iVar16 + 1;
         std::vector<spv::Block*,std::allocator<spv::Block*>>::_M_realloc_insert<spv::Block*>((vector<spv::Block*,std::allocator<spv::Block*>>*)param_7, puVar11, (unique_ptr*)&local_58);
      }
 while ( param_3 != iVar16 );
   }

   LAB_0010e63a:pBVar9 = (Block*)operator_new(0x90);
   iVar16 = *(int*)( this + 0x1d0 );
   *(uint*)( this + 0x1d0 ) = iVar16 + 1U;
   Block::Block(pBVar9, iVar16 + 1U, pFVar5);
   createSelectionMerge(this, pBVar9, param_2);
   this_00 = (Instruction*)operator_new(0x60);
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   lVar18 = *(long*)( param_4 + 8 );
   *(undefined8*)( this_00 + 8 ) = 0;
   lVar20 = *(long*)param_4;
   *(undefined4*)( this_00 + 0x10 ) = 0xfb;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, ( lVar18 - lVar20 >> 2 ) * 2 + 2);
   Instruction::addIdOperand(this_00, param_1);
   pBVar17 = pBVar9;
   if (-1 < param_6) {
      pBVar17 = *(Block**)( *(long*)param_7 + (long)param_6 * 8 );
   }

   Instruction::addIdOperand(this_00, *(uint*)( **(long**)( pBVar17 + 8 ) + 8 ));
   puVar7 = *(ulong**)( this + 0x1c8 );
   puVar11 = *(undefined8**)( pBVar17 + 0x28 );
   local_68 = puVar7;
   if (puVar11 == *(undefined8**)( pBVar17 + 0x30 )) {
      std::vector<spv::Block*,std::allocator<spv::Block*>>::_M_realloc_insert<spv::Block*const&>((vector<spv::Block*,std::allocator<spv::Block*>>*)( pBVar17 + 0x20 ), puVar11, &local_68);
      puVar11 = (undefined8*)puVar7[8];
      if (puVar11 != (undefined8*)puVar7[9]) goto LAB_0010e77d;
      LAB_0010ebc8:local_58 = pBVar17;
      std::vector<spv::Block*,std::allocator<spv::Block*>>::_M_realloc_insert<spv::Block*>((vector<spv::Block*,std::allocator<spv::Block*>>*)( puVar7 + 7 ), puVar11, &local_58);
   }
 else {
      *puVar11 = puVar7;
      *(undefined8**)( pBVar17 + 0x28 ) = puVar11 + 1;
      puVar11 = (undefined8*)puVar7[8];
      if (puVar11 == (undefined8*)puVar7[9]) goto LAB_0010ebc8;
      LAB_0010e77d:*puVar11 = pBVar17;
      puVar7[8] = ( ulong )(puVar11 + 1);
      local_58 = pBVar17;
   }

   lVar18 = *(long*)param_4;
   lVar20 = 0;
   if (0 < (int)( *(long*)( param_4 + 8 ) - lVar18 >> 2 )) {
      do {
         uVar4 = *(undefined4*)( lVar18 + lVar20 * 4 );
         puVar8 = *(undefined4**)( this_00 + 0x20 );
         local_70 = (Instruction*)CONCAT44(local_70._4_4_, uVar4);
         if (puVar8 == *(undefined4**)( this_00 + 0x28 )) {
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar8, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_70);
         }
 else {
            *puVar8 = uVar4;
            *(undefined4**)( this_00 + 0x20 ) = puVar8 + 1;
         }

         puVar7 = *(ulong**)( this_00 + 0x40 );
         if (puVar7 == *(ulong**)( this_00 + 0x50 )) {
            local_60 = *(undefined4*)( this_00 + 0x48 );
            local_68 = puVar7;
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar7, CONCAT44(uStack_5c, local_60), 0);
         }
 else {
            iVar16 = *(int*)( this_00 + 0x48 );
            if (iVar16 == 0x3f) {
               *(undefined4*)( this_00 + 0x48 ) = 0;
               *(ulong**)( this_00 + 0x40 ) = puVar7 + 1;
            }
 else {
               *(int*)( this_00 + 0x48 ) = iVar16 + 1;
            }

            *puVar7 = *puVar7 & ~(1L << ((byte)iVar16 & 0x3f));
         }

         puVar8 = *(undefined4**)( this_00 + 0x20 );
         uVar4 = *(undefined4*)( **(long**)( *(long*)( *(long*)param_7 + (long)*(int*)( *(long*)param_5 + lVar20 * 4 ) * 8 ) + 8 ) + 8 );
         local_70 = (Instruction*)CONCAT44(local_70._4_4_, uVar4);
         if (puVar8 == *(undefined4**)( this_00 + 0x28 )) {
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar8, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_70);
         }
 else {
            *puVar8 = uVar4;
            *(undefined4**)( this_00 + 0x20 ) = puVar8 + 1;
         }

         pBVar17 = *(Block**)( this_00 + 0x40 );
         if (pBVar17 == *(Block**)( this_00 + 0x50 )) {
            local_50 = *(undefined4*)( this_00 + 0x48 );
            local_58 = pBVar17;
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, pBVar17, CONCAT44(uStack_4c, local_50), 1);
         }
 else {
            iVar16 = *(int*)( this_00 + 0x48 );
            if (iVar16 == 0x3f) {
               *(undefined4*)( this_00 + 0x48 ) = 0;
               *(Block**)( this_00 + 0x40 ) = pBVar17 + 8;
            }
 else {
               *(int*)( this_00 + 0x48 ) = iVar16 + 1;
            }

            *(ulong*)pBVar17 = *(ulong*)pBVar17 | 1L << ( (byte)iVar16 & 0x3f );
         }

         lVar18 = *(long*)( *(long*)param_7 + (long)*(int*)( *(long*)param_5 + lVar20 * 4 ) * 8 );
         lVar6 = *(long*)( this + 0x1c8 );
         plVar14 = *(long**)( lVar18 + 0x28 );
         local_78 = lVar6;
         if (plVar14 == *(long**)( lVar18 + 0x30 )) {
            std::vector<spv::Block*,std::allocator<spv::Block*>>::_M_realloc_insert<spv::Block*const&>((vector<spv::Block*,std::allocator<spv::Block*>>*)( lVar18 + 0x20 ), plVar14, &local_78);
            plVar14 = *(long**)( lVar6 + 0x40 );
            if (plVar14 != *(long**)( lVar6 + 0x48 )) goto LAB_0010e838;
            LAB_0010e9d8:local_70 = (Instruction*)lVar18;
            std::vector<spv::Block*,std::allocator<spv::Block*>>::_M_realloc_insert<spv::Block*>((vector<spv::Block*,std::allocator<spv::Block*>>*)( lVar6 + 0x38 ), plVar14, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_70);
         }
 else {
            *plVar14 = lVar6;
            *(long**)( lVar18 + 0x28 ) = plVar14 + 1;
            plVar14 = *(long**)( lVar6 + 0x40 );
            if (plVar14 == *(long**)( lVar6 + 0x48 )) goto LAB_0010e9d8;
            LAB_0010e838:*plVar14 = lVar18;
            *(long**)( lVar6 + 0x40 ) = plVar14 + 1;
            local_70 = (Instruction*)lVar18;
         }

         lVar18 = *(long*)param_4;
         lVar20 = lVar20 + 1;
      }
 while ( (int)lVar20 < (int)( *(long*)( param_4 + 8 ) - lVar18 >> 2 ) );
   }

   local_70 = this_00;
   addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_70);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_70);
   puVar11 = *(undefined8**)( this + 0x440 );
   if (puVar11 != (undefined8*)( *(long*)( this + 0x450 ) + -8 )) {
      *puVar11 = pBVar9;
      puVar11 = puVar11 + 1;
      goto LAB_0010ea4c;
   }

   plVar14 = *(long**)( this + 0x458 );
   __src = *(long**)( this + 0x438 );
   lVar18 = (long)plVar14 - (long)__src;
   if (( (long)puVar11 - *(long*)( this + 0x448 ) >> 3 ) + ( ( lVar18 >> 3 ) + -1 + ( ulong )(plVar14 == (long*)0x0) ) * 0x40 + ( *(long*)( this + 0x430 ) - *(long*)( this + 0x420 ) >> 3 ) == 0xfffffffffffffff) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("cannot create std::deque larger than max_size()");
   }

   uVar10 = *(ulong*)( this + 0x418 );
   if (uVar10 - ( (long)plVar14 - *(long*)( this + 0x410 ) >> 3 ) < 2) {
      __dest = (long*)( ( lVar18 >> 3 ) + 2 );
      if (( ulong )((long)__dest * 2) < uVar10) {
         __dest = (long*)( *(long*)( this + 0x410 ) + ( uVar10 - (long)__dest >> 1 ) * 8 );
         sVar13 = (long)plVar14 + ( 8 - (long)__src );
         if (__dest < __src) {
            uVar21 = sVar13 == 8;
            if ((long)sVar13 < 9) goto LAB_0010ed4a;
            memmove(__dest, __src, sVar13);
         }
 else if ((long)sVar13 < 9) {
            if (sVar13 == 8) {
               *(long*)( (long)__dest + lVar18 ) = *__src;
            }

         }
 else {
            memmove((void*)( (long)__dest + ( ( lVar18 + 8 ) - sVar13 ) ), __src, sVar13);
         }

      }
 else {
         if (uVar10 == 0) {
            uVar10 = 0x18;
            uVar15 = 3;
         }
 else {
            uVar15 = ( uVar10 + 1 ) * 2;
            if (0xfffffffffffffff < uVar15) {
               uVar21 = uVar15 >> 0x3d == 0;
               if ((bool)uVar21) {
                  /* WARNING: Subroutine does not return */
                  std::__throw_bad_alloc();
               }

               std::__throw_bad_array_new_length();
               LAB_0010ed4a:if ((bool)uVar21) {
                  *__dest = *__src;
               }

               goto LAB_0010ec85;
            }

            uVar10 = ( uVar10 + 1 ) * 0x10;
         }

         pvVar12 = operator_new(uVar10);
         plVar14 = *(long**)( this + 0x438 );
         __dest = (long*)( (long)pvVar12 + ( uVar15 - (long)__dest >> 1 ) * 8 );
         sVar13 = ( *(long*)( this + 0x458 ) + 8 ) - (long)plVar14;
         if ((long)sVar13 < 9) {
            if (sVar13 == 8) {
               *__dest = *plVar14;
            }

         }
 else {
            memmove(__dest, plVar14, sVar13);
         }

         operator_delete(*(void**)( this + 0x410 ), *(long*)( this + 0x418 ) * 8);
         *(void**)( this + 0x410 ) = pvVar12;
         *(ulong*)( this + 0x418 ) = uVar15;
      }

      LAB_0010ec85:lVar20 = *__dest;
      plVar14 = (long*)( (long)__dest + lVar18 );
      *(long**)( this + 0x438 ) = __dest;
      *(long**)( this + 0x458 ) = plVar14;
      *(long*)( this + 0x428 ) = lVar20;
      *(long*)( this + 0x430 ) = lVar20 + 0x200;
      lVar18 = *plVar14;
      *(long*)( this + 0x448 ) = lVar18;
      *(long*)( this + 0x450 ) = lVar18 + 0x200;
   }

   pvVar12 = operator_new(0x200);
   plVar14[1] = (long)pvVar12;
   **(undefined8**)( this + 0x440 ) = pBVar9;
   puVar11 = *(undefined8**)( *(long*)( this + 0x458 ) + 8 );
   *(long*)( this + 0x458 ) = *(long*)( this + 0x458 ) + 8;
   *(undefined8**)( this + 0x448 ) = puVar11;
   *(undefined8**)( this + 0x450 ) = puVar11 + 0x40;
   LAB_0010ea4c:*(undefined8**)( this + 0x440 ) = puVar11;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* spv::Builder::createStore(unsigned int, unsigned int, spv::MemoryAccessMask, spv::Scope, unsigned
   int) */void spv::Builder::createStore(Builder *this, uint param_1, uint param_2, uint param_4, uint param_5, uint param_6) {
   uint uVar1;
   Instruction *this_00;
   long *plVar2;
   long in_FS_OFFSET;
   Instruction *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined8*)( this_00 + 8 ) = 0;
   *(undefined4*)( this_00 + 0x10 ) = 0x3e;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, 2);
   Instruction::addIdOperand(this_00, param_2);
   Instruction::addIdOperand(this_00, param_1);
   plVar2 = *(long**)( this + 0x1b0 );
   if (plVar2[param_2] != 0) {
      plVar2 = plVar2 + *(uint*)( plVar2[param_2] + 0xc );
   }

   uVar1 = **(uint**)( *plVar2 + 0x18 );
   if (uVar1 < 0xd) {
      if (( 1 < uVar1 ) && ( ( 0x1014UL >> ( (ulong)uVar1 & 0x3f ) & 1 ) != 0 )) goto LAB_0010ee69;
      LAB_0010eeb7:param_4 = param_4 & 0xffffffc7;
      if (param_4 == 0) goto LAB_0010ee6e;
   }
 else {
      if (uVar1 != 0x14e5) goto LAB_0010eeb7;
      LAB_0010ee69:if (param_4 == 0) goto LAB_0010ee6e;
   }

   Instruction::addImmediateOperand(this_00, param_4);
   if (( param_4 & 2 ) != 0) {
      Instruction::addImmediateOperand(this_00, param_6);
   }

   if (( param_4 & 8 ) != 0) {
      uVar1 = makeUintConstant(this, param_5, false);
      Instruction::addIdOperand(this_00, uVar1);
   }

   LAB_0010ee6e:local_48 = this_00;
   addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createLoad(unsigned int, spv::Decoration, spv::MemoryAccessMask, spv::Scope,
   unsigned int) */int spv::Builder::createLoad(Builder *this, uint param_1, int param_3, uint param_4, uint param_5, uint param_6) {
   undefined4 uVar1;
   int iVar2;
   uint uVar3;
   Instruction *this_00;
   long *plVar4;
   long in_FS_OFFSET;
   Instruction *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   plVar4 = *(long**)( this + 0x1b0 );
   if (plVar4[param_1] != 0) {
      plVar4 = plVar4 + *(uint*)( plVar4[param_1] + 0xc );
   }

   iVar2 = *(int*)( this + 0x1d0 );
   uVar1 = *(undefined4*)( *(long*)( *plVar4 + 0x18 ) + 4 );
   *(int*)( this + 0x1d0 ) = iVar2 + 1;
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_00 + 0x10 ) = 0x3d;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(ulong*)( this_00 + 8 ) = CONCAT44(uVar1, iVar2 + 1);
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::addIdOperand(this_00, param_1);
   plVar4 = *(long**)( this + 0x1b0 );
   if (plVar4[param_1] != 0) {
      plVar4 = plVar4 + *(uint*)( plVar4[param_1] + 0xc );
   }

   uVar3 = **(uint**)( *plVar4 + 0x18 );
   if (uVar3 < 0xd) {
      if (( 1 < uVar3 ) && ( ( 0x1014UL >> ( (ulong)uVar3 & 0x3f ) & 1 ) != 0 )) goto LAB_0010f00e;
      LAB_0010f07f:param_4 = param_4 & 0xffffffc7;
      if (param_4 == 0) goto LAB_0010f013;
   }
 else {
      if (uVar3 != 0x14e5) goto LAB_0010f07f;
      LAB_0010f00e:if (param_4 == 0) goto LAB_0010f013;
   }

   Instruction::addImmediateOperand(this_00, param_4);
   if (( param_4 & 2 ) != 0) {
      Instruction::addImmediateOperand(this_00, param_6);
   }

   if (( param_4 & 0x10 ) != 0) {
      uVar3 = makeUintConstant(this, param_5, false);
      Instruction::addIdOperand(this_00, uVar3);
   }

   LAB_0010f013:local_48 = this_00;
   addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   iVar2 = *(int*)( this_00 + 8 );
   if (( param_3 != 0x7fffffff ) && ( iVar2 != 0 )) {
      addDecoration(this, iVar2, param_3, 0xffffffff);
      iVar2 = *(int*)( this_00 + 8 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createArrayLength(unsigned int, unsigned int) */undefined4 spv::Builder::createArrayLength(Builder *this, uint param_1, uint param_2) {
   int iVar1;
   void *__src;
   undefined4 uVar2;
   Instruction *this_00;
   void *__dest;
   ulong uVar3;
   long in_FS_OFFSET;
   Instruction *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = makeIntegerType(this, 0x20, false);
   this_00 = (Instruction*)operator_new(0x60);
   iVar1 = *(int*)( this + 0x1d0 );
   *(undefined4*)( this_00 + 0xc ) = uVar2;
   *(undefined4*)( this_00 + 0x10 ) = 0x44;
   *(int*)( this + 0x1d0 ) = iVar1 + 1;
   *(int*)( this_00 + 8 ) = iVar1 + 1;
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   __dest = operator_new(8);
   __src = *(void**)( this_00 + 0x18 );
   if (*(long*)( this_00 + 0x20 ) - (long)__src < 1) {
      if (__src == (void*)0x0) goto LAB_0010f1a9;
      uVar3 = *(long*)( this_00 + 0x28 ) - (long)__src;
   }
 else {
      memmove(__dest, __src, *(long*)( this_00 + 0x20 ) - (long)__src);
      uVar3 = *(long*)( this_00 + 0x28 ) - (long)__src;
   }

   operator_delete(__src, uVar3);
   LAB_0010f1a9:*(void**)( this_00 + 0x18 ) = __dest;
   *(void**)( this_00 + 0x20 ) = __dest;
   *(long*)( this_00 + 0x28 ) = (long)__dest + 8;
   if (( ulong )(( *(long*)( this_00 + 0x50 ) - *(long*)( this_00 + 0x30 ) ) * 8) < 2) {
      std::vector<bool,std::allocator<bool>>::_M_reallocate((vector<bool,std::allocator<bool>>*)( this_00 + 0x30 ), 2);
   }

   Instruction::addIdOperand(this_00, param_1);
   Instruction::addImmediateOperand(this_00, param_2);
   local_48 = this_00;
   addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return *(undefined4*)( this_00 + 8 );
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createCooperativeMatrixLengthKHR(unsigned int) */undefined4 spv::Builder::createCooperativeMatrixLengthKHR(Builder *this, uint param_1) {
   int iVar1;
   undefined4 uVar2;
   uint *puVar3;
   Instruction *this_00;
   long in_FS_OFFSET;
   uint *local_68;
   uint *local_60;
   uint *local_58;
   undefined1 local_48[16];
   undefined8 local_38;
   long local_30;
   local_48._8_8_ = local_48._0_8_;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = makeIntegerType(this, 0x20, false);
   if (this[0x1e0] == (Builder)0x0) {
      this_00 = (Instruction*)operator_new(0x60);
      iVar1 = *(int*)( this + 0x1d0 );
      *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
      *(undefined4*)( this_00 + 0xc ) = uVar2;
      *(int*)( this + 0x1d0 ) = iVar1 + 1;
      *(int*)( this_00 + 8 ) = iVar1 + 1;
      *(undefined4*)( this_00 + 0x10 ) = 0x116c;
      *(undefined4*)( this_00 + 0x38 ) = 0;
      *(undefined8*)( this_00 + 0x40 ) = 0;
      *(undefined4*)( this_00 + 0x48 ) = 0;
      *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
      Instruction::addIdOperand(this_00, param_1);
      local_48._0_8_ = this_00;
      addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)local_48);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)local_48);
      uVar2 = *(undefined4*)( this_00 + 8 );
   }
 else {
      local_38 = 0;
      local_48 = (undefined1[16])0x0;
      puVar3 = (uint*)operator_new(4);
      local_60 = puVar3 + 1;
      *puVar3 = param_1;
      local_68 = puVar3;
      local_58 = local_60;
      uVar2 = createSpecConstantOp(this, 0x116c, uVar2, &local_68, local_48);
      operator_delete(puVar3, 4);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createCooperativeMatrixLengthNV(unsigned int) */undefined4 spv::Builder::createCooperativeMatrixLengthNV(Builder *this, uint param_1) {
   int iVar1;
   undefined4 uVar2;
   uint *puVar3;
   Instruction *this_00;
   long in_FS_OFFSET;
   uint *local_68;
   uint *local_60;
   uint *local_58;
   undefined1 local_48[16];
   undefined8 local_38;
   long local_30;
   local_48._8_8_ = local_48._0_8_;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = makeIntegerType(this, 0x20, false);
   if (this[0x1e0] == (Builder)0x0) {
      this_00 = (Instruction*)operator_new(0x60);
      iVar1 = *(int*)( this + 0x1d0 );
      *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
      *(undefined4*)( this_00 + 0xc ) = uVar2;
      *(int*)( this + 0x1d0 ) = iVar1 + 1;
      *(int*)( this_00 + 8 ) = iVar1 + 1;
      *(undefined4*)( this_00 + 0x10 ) = 0x14f2;
      *(undefined4*)( this_00 + 0x38 ) = 0;
      *(undefined8*)( this_00 + 0x40 ) = 0;
      *(undefined4*)( this_00 + 0x48 ) = 0;
      *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
      Instruction::addIdOperand(this_00, param_1);
      local_48._0_8_ = this_00;
      addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)local_48);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)local_48);
      uVar2 = *(undefined4*)( this_00 + 8 );
   }
 else {
      local_38 = 0;
      local_48 = (undefined1[16])0x0;
      puVar3 = (uint*)operator_new(4);
      local_60 = puVar3 + 1;
      *puVar3 = param_1;
      local_68 = puVar3;
      local_58 = local_60;
      uVar2 = createSpecConstantOp(this, 0x14f2, uVar2, &local_68, local_48);
      operator_delete(puVar3, 4);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeSequentialDebugType(unsigned int, unsigned int,
   spv::NonSemanticShaderDebugInfo100Instructions) */undefined4 spv::Builder::makeSequentialDebugType(Builder *this, uint param_1, uint param_2, uint param_4) {
   _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this_00;
   uint uVar1;
   int iVar2;
   undefined8 *puVar3;
   Builder *pBVar4;
   uint uVar5;
   undefined4 uVar6;
   long *plVar7;
   Instruction *pIVar8;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar9;
   Builder *pBVar10;
   Builder *pBVar11;
   long lVar12;
   Builder *pBVar13;
   long in_FS_OFFSET;
   bool bVar14;
   uint local_5c[3];
   Instruction *local_50;
   Instruction *local_48;
   long local_40;
   this_00 = (_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x3c0 );
   lVar12 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_5c[0] = param_1;
   while (true) {
      local_48 = (Instruction*)CONCAT44(local_48._4_4_, param_4);
      plVar7 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
      if ((int)( plVar7[1] - *plVar7 >> 3 ) <= (int)lVar12) break;
      local_48 = (Instruction*)CONCAT44(local_48._4_4_, param_4);
      plVar7 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
      pIVar8 = *(Instruction**)( *plVar7 + lVar12 * 8 );
      local_50 = pIVar8;
      if (local_5c[0] == **(uint**)( pIVar8 + 0x18 )) {
         uVar1 = ( *(uint**)( pIVar8 + 0x18 ) )[1];
         uVar5 = makeIntegerType(this, 0x20, false);
         uVar5 = makeIntConstant(this, uVar5, param_2, false);
         if (uVar1 == uVar5) {
            uVar6 = *(undefined4*)( pIVar8 + 8 );
            goto LAB_0010f733;
         }

      }

      lVar12 = lVar12 + 1;
   }
;
   pIVar8 = (Instruction*)operator_new(0x60);
   uVar6 = makeVoidType(this);
   *(undefined4*)( pIVar8 + 0x10 ) = 0xc;
   iVar2 = *(int*)( this + 0x1d0 );
   *(undefined***)pIVar8 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( pIVar8 + 0xc ) = uVar6;
   *(undefined4*)( pIVar8 + 0x38 ) = 0;
   *(int*)( this + 0x1d0 ) = iVar2 + 1;
   *(int*)( pIVar8 + 8 ) = iVar2 + 1;
   *(undefined8*)( pIVar8 + 0x40 ) = 0;
   *(undefined4*)( pIVar8 + 0x48 ) = 0;
   *(undefined1(*) [16])( pIVar8 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pIVar8 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pIVar8 + 0x50 ) = (undefined1[16])0x0;
   local_50 = pIVar8;
   Instruction::reserveOperands(pIVar8, 4);
   Instruction::addIdOperand(pIVar8, *(uint*)( this + 0x50 ));
   Instruction::addImmediateOperand(pIVar8, param_4);
   pBVar13 = this + 0x520;
   pBVar4 = *(Builder**)( this + 0x528 );
   pBVar10 = pBVar13;
   if (*(Builder**)( this + 0x528 ) != (Builder*)0x0) {
      do {
         while (true) {
            pBVar11 = pBVar4;
            if (*(uint*)( pBVar11 + 0x20 ) < local_5c[0]) break;
            pBVar4 = *(Builder**)( pBVar11 + 0x10 );
            pBVar10 = pBVar11;
            if (*(Builder**)( pBVar11 + 0x10 ) == (Builder*)0x0) goto LAB_0010f6b8;
         }
;
         pBVar4 = *(Builder**)( pBVar11 + 0x18 );
      }
 while ( *(Builder**)( pBVar11 + 0x18 ) != (Builder*)0x0 );
      LAB_0010f6b8:bVar14 = pBVar13 != pBVar10;
      pBVar13 = pBVar10;
      if (( bVar14 ) && ( *(uint*)( pBVar10 + 0x20 ) <= local_5c[0] )) goto LAB_0010f6ca;
   }

   local_48 = (Instruction*)local_5c;
   pBVar10 = (Builder*)std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<unsigned_int_const&>,std::tuple<>>(this + 0x518, pBVar13, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   LAB_0010f6ca:Instruction::addIdOperand(pIVar8, *(uint*)( pBVar10 + 0x24 ));
   Instruction::addIdOperand(pIVar8, param_2);
   local_48 = (Instruction*)CONCAT44(local_48._4_4_, param_4);
   pvVar9 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
   puVar3 = *(undefined8**)( pvVar9 + 8 );
   if (puVar3 == *(undefined8**)( pvVar9 + 0x10 )) {
      std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar9, puVar3, &local_50);
   }
 else {
      *puVar3 = pIVar8;
      *(undefined8**)( pvVar9 + 8 ) = puVar3 + 1;
   }

   local_48 = pIVar8;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_48);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   Module::mapInstruction((Module*)( this + 400 ), pIVar8);
   uVar6 = *(undefined4*)( pIVar8 + 8 );
   LAB_0010f733:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
}
/* spv::Builder::makeArrayDebugType(unsigned int, unsigned int) */void spv::Builder::makeArrayDebugType(uint param_1, uint param_2) {
   makeSequentialDebugType();
   return;
}
/* spv::Builder::makeVectorDebugType(unsigned int, int) */void spv::Builder::makeVectorDebugType(Builder *this, uint param_1, int param_2) {
   uint uVar1;
   undefined4 uVar2;
   uVar1 = makeIntegerType(this, 0x20, false);
   uVar2 = makeIntConstant(this, uVar1, param_2, false);
   makeSequentialDebugType(this, param_1, uVar2, 6);
   return;
}
/* spv::Builder::makeArrayType(unsigned int, unsigned int, int) */undefined4 spv::Builder::makeArrayType(Builder *this, uint param_1, uint param_2, int param_3) {
   int iVar1;
   undefined8 *puVar2;
   undefined4 uVar3;
   long *plVar4;
   Instruction *this_00;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar5;
   undefined4 *puVar6;
   long lVar7;
   long in_FS_OFFSET;
   Instruction *local_50;
   Instruction *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == 0) {
      lVar7 = 0;
      while (true) {
         local_48 = (Instruction*)CONCAT44(local_48._4_4_, 0x1c);
         plVar4 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x388 ), (uint*)&local_48);
         if ((int)( plVar4[1] - *plVar4 >> 3 ) <= (int)lVar7) break;
         local_48 = (Instruction*)CONCAT44(local_48._4_4_, 0x1c);
         plVar4 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x388 ), (uint*)&local_48);
         local_50 = *(Instruction**)( *plVar4 + lVar7 * 8 );
         if (( param_1 == **(uint**)( local_50 + 0x18 ) ) && ( param_2 == ( *(uint**)( local_50 + 0x18 ) )[1] )) {
            uVar3 = *(undefined4*)( local_50 + 8 );
            goto LAB_0010f977;
         }

         lVar7 = lVar7 + 1;
      }
;
   }

   this_00 = (Instruction*)operator_new(0x60);
   iVar1 = *(int*)( this + 0x1d0 );
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(int*)( this + 0x1d0 ) = iVar1 + 1;
   *(int*)( this_00 + 8 ) = iVar1 + 1;
   *(undefined8*)( this_00 + 0xc ) = 0x1c00000000;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   local_50 = this_00;
   Instruction::reserveOperands(this_00, 2);
   Instruction::addIdOperand(this_00, param_1);
   Instruction::addIdOperand(this_00, param_2);
   local_48 = (Instruction*)CONCAT44(local_48._4_4_, 0x1c);
   pvVar5 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x388 ), (uint*)&local_48);
   puVar2 = *(undefined8**)( pvVar5 + 8 );
   if (puVar2 == *(undefined8**)( pvVar5 + 0x10 )) {
      std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar5, puVar2, &local_50);
   }
 else {
      *puVar2 = this_00;
      *(undefined8**)( pvVar5 + 8 ) = puVar2 + 1;
   }

   local_48 = this_00;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_48);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   Module::mapInstruction((Module*)( this + 400 ), this_00);
   if (this[0xea] != (Builder)0x0) {
      uVar3 = makeSequentialDebugType(this, param_1, param_2, 5);
      local_48 = (Instruction*)CONCAT44(local_48._4_4_, *(undefined4*)( this_00 + 8 ));
      puVar6 = (undefined4*)std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator []((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)( this + 0x518 ), (uint*)&local_48);
      *puVar6 = uVar3;
   }

   uVar3 = *(undefined4*)( this_00 + 8 );
   LAB_0010f977:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
/* spv::Builder::makeRuntimeArray(unsigned int) */undefined4 spv::Builder::makeRuntimeArray(Builder *this, uint param_1) {
   long lVar1;
   Builder BVar2;
   int iVar3;
   uint uVar4;
   undefined4 uVar5;
   Instruction *this_00;
   ulong uVar6;
   undefined4 *puVar7;
   long lVar8;
   ulong uVar9;
   long in_FS_OFFSET;
   Instruction *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   iVar3 = *(int*)( this + 0x1d0 );
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(int*)( this + 0x1d0 ) = iVar3 + 1;
   *(int*)( this_00 + 8 ) = iVar3 + 1;
   *(undefined8*)( this_00 + 0xc ) = 0x1d00000000;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::addIdOperand(this_00, param_1);
   local_38 = this_00;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_38);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
   lVar8 = *(long*)( this + 0x1b0 );
   uVar4 = *(uint*)( this_00 + 8 );
   uVar6 = *(long*)( this + 0x1b8 ) - lVar8 >> 3;
   if (uVar6 <= uVar4) {
      uVar9 = ( ulong )(uVar4 + 0x10);
      if (uVar6 < uVar9) {
         std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_default_append((vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)( this + 0x1b0 ), uVar9 - uVar6);
         lVar8 = *(long*)( this + 0x1b0 );
      }
 else if (( uVar9 < uVar6 ) && ( lVar1 = lVar8 + uVar9 * 8 * (long*)( this + 0x1b8 ) != lVar1 )) {
         *(long*)( this + 0x1b8 ) = lVar1;
      }

   }

   BVar2 = this[0xea];
   *(Instruction**)( lVar8 + (ulong)uVar4 * 8 ) = this_00;
   if (BVar2 != (Builder)0x0) {
      uVar5 = makeUintConstant(this, 0, false);
      uVar5 = makeSequentialDebugType(this, param_1, uVar5, 5);
      local_38 = (Instruction*)CONCAT44(local_38._4_4_, *(undefined4*)( this_00 + 8 ));
      puVar7 = (undefined4*)std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator []((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)( this + 0x518 ), (uint*)&local_38);
      *puVar7 = uVar5;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return *(undefined4*)( this_00 + 8 );
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeVectorType(unsigned int, int) */undefined4 spv::Builder::makeVectorType(Builder *this, uint param_1, int param_2) {
   _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this_00;
   int iVar1;
   undefined8 *puVar2;
   undefined4 uVar3;
   long *plVar4;
   Instruction *this_01;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar5;
   undefined4 *puVar6;
   long lVar7;
   long in_FS_OFFSET;
   Instruction *local_50;
   Instruction *local_48;
   long local_40;
   this_00 = (_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x388 );
   lVar7 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      local_48._0_4_ = 0x17;
      plVar4 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
      if ((int)( plVar4[1] - *plVar4 >> 3 ) <= (int)lVar7) {
         this_01 = (Instruction*)operator_new(0x60);
         iVar1 = *(int*)( this + 0x1d0 );
         *(undefined***)this_01 = &PTR__Instruction_0011c5f0;
         *(undefined4*)( this_01 + 0x38 ) = 0;
         *(int*)( this + 0x1d0 ) = iVar1 + 1;
         *(int*)( this_01 + 8 ) = iVar1 + 1;
         *(undefined8*)( this_01 + 0xc ) = 0x1700000000;
         *(undefined8*)( this_01 + 0x40 ) = 0;
         *(undefined4*)( this_01 + 0x48 ) = 0;
         *(undefined1(*) [16])( this_01 + 0x18 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_01 + 0x28 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_01 + 0x50 ) = (undefined1[16])0x0;
         local_50 = this_01;
         Instruction::reserveOperands(this_01, 2);
         Instruction::addIdOperand(this_01, param_1);
         Instruction::addImmediateOperand(this_01, param_2);
         local_48 = (Instruction*)CONCAT44(local_48._4_4_, 0x17);
         pvVar5 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
         puVar2 = *(undefined8**)( pvVar5 + 8 );
         if (puVar2 == *(undefined8**)( pvVar5 + 0x10 )) {
            std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar5, puVar2, &local_50);
         }
 else {
            *puVar2 = this_01;
            *(undefined8**)( pvVar5 + 8 ) = puVar2 + 1;
         }

         local_48 = this_01;
         std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_48);
         std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
         Module::mapInstruction((Module*)( this + 400 ), this_01);
         if (this[0xea] != (Builder)0x0) {
            uVar3 = makeUintConstant(this, param_2, false);
            uVar3 = makeSequentialDebugType(this, param_1, uVar3, 6);
            local_48 = (Instruction*)CONCAT44(local_48._4_4_, *(undefined4*)( this_01 + 8 ));
            puVar6 = (undefined4*)std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator []((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)( this + 0x518 ), (uint*)&local_48);
            *puVar6 = uVar3;
         }

         uVar3 = *(undefined4*)( this_01 + 8 );
         LAB_0010fcfb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return uVar3;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      local_48 = (Instruction*)CONCAT44(local_48._4_4_, 0x17);
      plVar4 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
      local_50 = *(Instruction**)( *plVar4 + lVar7 * 8 );
      if (( param_1 == **(uint**)( local_50 + 0x18 ) ) && ( param_2 == ( *(uint**)( local_50 + 0x18 ) )[1] )) {
         uVar3 = *(undefined4*)( local_50 + 8 );
         goto LAB_0010fcfb;
      }

      lVar7 = lVar7 + 1;
   }
 while ( true );
}
/* spv::Builder::accessChainGetInferredType() */ulong spv::Builder::accessChainGetInferredType(Builder *this) {
   uint uVar1;
   int iVar2;
   long lVar3;
   uint uVar4;
   Builder *this_00;
   uint *puVar5;
   ulong uVar6;
   long lVar7;
   uint *puVar8;
   if (*(uint*)( this + 0x1e8 ) == 0) {
      return 0;
   }

   lVar7 = *(long*)( this + 0x1b0 );
   uVar4 = 0;
   lVar3 = *(long*)( lVar7 + ( ulong ) * (uint*)( this + 0x1e8 ) * 8 );
   if (lVar3 != 0) {
      uVar4 = *(uint*)( lVar3 + 0xc );
   }

   if (this[0x230] == (Builder)0x0) {
      uVar4 = getContainedTypeId(this, uVar4, 0);
   }

   puVar5 = *(uint**)( this + 0x1f0 );
   puVar8 = *(uint**)( this + 0x1f8 );
   if (puVar5 != puVar8) {
      do {
         while (*(int*)( *(long*)( lVar7 + (ulong)uVar4 * 8 ) + 0x10 ) == 0x1e) {
            uVar1 = *puVar5;
            puVar5 = puVar5 + 1;
            uVar4 = getContainedTypeId(this, uVar4, **(int**)( *(long*)( lVar7 + (ulong)uVar1 * 8 ) + 0x18 ));
            if (puVar5 == puVar8) goto LAB_0010fe11;
         }
;
         puVar5 = puVar5 + 1;
         uVar4 = getContainedTypeId(this, uVar4, 0);
      }
 while ( puVar5 != puVar8 );
   }

   LAB_0010fe11:uVar6 = *(long*)( this + 0x218 ) - *(long*)( this + 0x210 );
   if (uVar6 == 4) {
      uVar4 = getContainedTypeId(this, uVar4, 0);
      iVar2 = *(int*)( this + 0x228 );
   }
 else {
      if (4 < uVar6) {
         this_00 = this;
         uVar4 = getContainedTypeId(this, uVar4, 0);
         uVar4 = makeVectorType(this_00, uVar4, (int)( (long)uVar6 >> 2 ));
      }

      iVar2 = *(int*)( this + 0x228 );
   }

   if (iVar2 == 0) {
      return (ulong)uVar4;
   }

   uVar6 = getContainedTypeId(this, uVar4, 0);
   return uVar6;
}
/* spv::Builder::createTextureQueryCall(spv::Op, spv::Builder::TextureParameters const&, bool) */undefined4 spv::Builder::createTextureQueryCall(Builder *this, uint param_2, uint *param_3, char param_4) {
   _Rb_tree_node_base *p_Var1;
   long *plVar2;
   uint uVar3;
   Instruction *this_00;
   _Rb_tree_node_base *p_Var4;
   long lVar5;
   long *plVar6;
   ulong uVar7;
   _Rb_tree_node_base *p_Var8;
   int iVar9;
   Builder *this_01;
   bool bVar10;
   long in_FS_OFFSET;
   Instruction *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == 0x69) {
      uVar3 = 0;
      lVar5 = *(long*)( *(long*)( this + 0x1b0 ) + (ulong)param_3[1] * 8 );
      if (lVar5 != 0) {
         uVar3 = *(uint*)( lVar5 + 0xc );
      }

      this_01 = this;
      uVar3 = getScalarTypeId(this, uVar3);
      uVar3 = makeVectorType(this_01, uVar3, 2);
   }
 else if (param_2 < 0x6a) {
      uVar3 = 0;
      if (param_2 - 0x67 < 2) {
         plVar2 = *(long**)( this + 0x1b0 );
         plVar6 = plVar2;
         if (plVar2[*param_3] != 0) {
            plVar6 = plVar2 + *(uint*)( plVar2[*param_3] + 0xc );
         }

         lVar5 = *plVar6;
         if (*(int*)( lVar5 + 0x10 ) == 0x1b) {
            lVar5 = plVar2[**(uint**)( lVar5 + 0x18 )];
         }

         uVar3 = *(uint*)( *(long*)( lVar5 + 0x18 ) + 4 );
         if (uVar3 < 7) {
            iVar9 = 2;
            uVar7 = 1L << ( (byte)uVar3 & 0x3f );
            if (( uVar7 & 0x5a ) == 0) {
               iVar9 = ( -(uint)((uVar7 & 0x21) == 0) & 2 ) + 1;
            }

         }
 else {
            iVar9 = 0;
         }

         iVar9 = ( iVar9 + 1 ) - ( uint )(*(int*)( *(long*)( lVar5 + 0x18 ) + 0xc ) == 0);
         if (param_4 == '\0') {
            uVar3 = makeIntegerType(this, 0x20, true);
         }
 else {
            uVar3 = makeIntegerType(this, 0x20, false);
         }

         if (iVar9 != 1) {
            uVar3 = makeVectorType(this, uVar3, iVar9);
         }

      }

   }
 else {
      uVar3 = 0;
      if (param_2 - 0x6a < 2) {
         if (param_4 == '\0') {
            uVar3 = makeIntegerType(this, 0x20, true);
         }
 else {
            uVar3 = makeIntegerType(this, 0x20, false);
         }

      }

   }

   this_00 = (Instruction*)operator_new(0x60);
   iVar9 = *(int*)( this + 0x1d0 );
   *(uint*)( this_00 + 0xc ) = uVar3;
   *(uint*)( this_00 + 0x10 ) = param_2;
   *(int*)( this + 0x1d0 ) = iVar9 + 1;
   uVar3 = *param_3;
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(int*)( this_00 + 8 ) = iVar9 + 1;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::addIdOperand(this_00, uVar3);
   if (param_3[1] != 0) {
      Instruction::addIdOperand(this_00, param_3[1]);
   }

   if (param_3[3] != 0) {
      Instruction::addIdOperand(this_00, param_3[3]);
   }

   p_Var1 = (_Rb_tree_node_base*)( this + 0x160 );
   local_38 = this_00;
   addInstruction(this, &local_38);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
   p_Var4 = *(_Rb_tree_node_base**)( this + 0x168 );
   if (*(_Rb_tree_node_base**)( this + 0x168 ) == (_Rb_tree_node_base*)0x0) {
      p_Var8 = p_Var1;
      if (*(_Rb_tree_node_base**)( this + 0x170 ) != p_Var1) {
         LAB_001100f6:lVar5 = std::_Rb_tree_decrement(p_Var8);
         iVar9 = *(int*)( lVar5 + 0x20 );
         LAB_00110052:if (0x31 < iVar9) goto LAB_00110091;
         goto LAB_00110057;
      }

      bVar10 = true;
   }
 else {
      do {
         p_Var8 = p_Var4;
         iVar9 = *(int*)( p_Var8 + 0x20 );
         p_Var4 = *(_Rb_tree_node_base**)( p_Var8 + 0x18 );
         if (0x32 < iVar9) {
            p_Var4 = *(_Rb_tree_node_base**)( p_Var8 + 0x10 );
         }

      }
 while ( p_Var4 != (_Rb_tree_node_base*)0x0 );
      if (iVar9 < 0x33) goto LAB_00110052;
      if (*(_Rb_tree_node_base**)( this + 0x170 ) != p_Var8) goto LAB_001100f6;
      LAB_00110057:bVar10 = true;
      if (p_Var1 != p_Var8) {
         bVar10 = 0x32 < *(int*)( p_Var8 + 0x20 );
      }

   }

   p_Var4 = (_Rb_tree_node_base*)operator_new(0x28);
   *(undefined4*)( p_Var4 + 0x20 ) = 0x32;
   std::_Rb_tree_insert_and_rebalance(bVar10, p_Var4, p_Var8, p_Var1);
   *(long*)( this + 0x180 ) = *(long*)( this + 0x180 ) + 1;
   LAB_00110091:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return *(undefined4*)( this_00 + 8 );
}
/* spv::Builder::createCompositeCompare(spv::Decoration, unsigned int, unsigned int, bool) */ulong spv::Builder::createCompositeCompare(Builder *this, int param_2, uint param_3, uint param_4, byte param_5) {
   bool bVar1;
   uint uVar2;
   int iVar3;
   undefined4 uVar4;
   uint uVar5;
   uint uVar6;
   uint uVar7;
   undefined4 uVar8;
   ulong uVar9;
   int *piVar10;
   long lVar11;
   Builder *this_00;
   long *plVar12;
   long lVar13;
   long *plVar14;
   int iVar15;
   long in_FS_OFFSET;
   bool bVar16;
   int *local_58;
   int *local_50;
   int *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = makeBoolType(this);
   plVar12 = *(long**)( this + 0x1b0 );
   lVar13 = (ulong)param_3 * 8;
   if (plVar12[param_3] == 0) {
      uVar5 = 0;
      plVar14 = plVar12;
   }
 else {
      uVar5 = *(uint*)( plVar12[param_3] + 0xc );
      plVar14 = plVar12 + uVar5;
   }

   iVar3 = getNumTypeConstituents(this, uVar5);
   lVar11 = *plVar14;
   bVar1 = true;
   uVar5 = *(uint*)( lVar11 + 0x10 );
   if (2 < uVar5 - 0x14) {
      if (uVar5 != 0x17) {
         uVar9 = 0;
         if (0 < iVar3) {
            iVar15 = 0;
            uVar5 = 0;
            do {
               piVar10 = (int*)operator_new(4);
               lVar11 = *(long*)( this + 0x1b0 );
               uVar7 = 0;
               local_50 = piVar10 + 1;
               *piVar10 = iVar15;
               if (*(long*)( lVar11 + lVar13 ) != 0) {
                  uVar7 = *(uint*)( *(long*)( lVar11 + lVar13 ) + 0xc );
               }

               local_58 = piVar10;
               local_48 = local_50;
               uVar6 = getContainedTypeId(this, uVar7, iVar15);
               uVar7 = 0;
               lVar11 = *(long*)( lVar11 + (ulong)param_4 * 8 );
               if (lVar11 != 0) {
                  uVar7 = *(uint*)( lVar11 + 0xc );
               }

               this_00 = this;
               uVar7 = getContainedTypeId(this, uVar7, iVar15);
               uVar4 = createCompositeExtract(this_00, param_3, uVar6, (vector*)&local_58);
               uVar8 = createCompositeExtract(this, param_4, uVar7, (vector*)&local_58);
               uVar7 = createCompositeCompare(this, param_2, uVar4, uVar8, param_5);
               if (( ( iVar15 != 0 ) && ( uVar7 = createBinOp(this, param_5 + 0xa6, uVar2, uVar5, uVar7) ),param_2 != 0x7fffffff )) {
                  addDecoration(this, uVar7, param_2, 0xffffffff);
               }

               uVar5 = uVar7;
               iVar15 = iVar15 + 1;
               operator_delete(piVar10, 4);
            }
 while ( iVar3 != iVar15 );
            uVar9 = (ulong)uVar5;
         }

         goto LAB_00110338;
      }

      bVar1 = false;
   }

   if (0x1d < uVar5) goto LAB_00110376;
   while (( 0x1b < uVar5 || ( uVar5 - 0x17 < 2 ) )) {
      uVar5 = **(uint**)( lVar11 + 0x18 );
      while (true) {
         lVar11 = plVar12[uVar5];
         uVar5 = *(uint*)( lVar11 + 0x10 );
         if (uVar5 < 0x1e) break;
         LAB_00110376:if (uVar5 != 0x20) goto LAB_00110570;
         uVar5 = *(uint*)( *(long*)( lVar11 + 0x18 ) + 4 );
      }
;
   }
;
   if (uVar5 == 0x14) {
      iVar15 = 0xa5 - (uint)param_5;
      if (bVar1) {
         bVar16 = false;
         param_2 = 0x7fffffff;
         goto LAB_00110506;
      }

      bVar16 = false;
      param_2 = 0x7fffffff;
      uVar4 = makeVectorType(this, uVar2, iVar3);
      iVar3 = createBinOp(this, iVar15, uVar4, param_3, param_4);
      LAB_00110314:uVar9 = createUnaryOp(this, param_5 + 0x9a, uVar2, iVar3);
      iVar3 = (int)uVar9;
   }
 else {
      if (uVar5 == 0x16) {
         iVar15 = ( -(uint)(param_5 == 0) & 3 ) + 0xb4;
      }
 else {
         LAB_00110570:iVar15 = 0xab - (uint)param_5;
      }

      bVar16 = param_2 != 0x7fffffff;
      if (!bVar1) {
         uVar4 = makeVectorType(this, uVar2, iVar3);
         iVar3 = createBinOp(this, iVar15, uVar4, param_3, param_4);
         if (( iVar3 != 0 ) && ( bVar16 )) {
            addDecoration(this, iVar3, param_2, 0xffffffff);
         }

         goto LAB_00110314;
      }

      LAB_00110506:uVar9 = createBinOp(this, iVar15, uVar2, param_3, param_4);
      iVar3 = (int)uVar9;
   }

   if (( iVar3 != 0 ) && ( bVar16 )) {
      addDecoration(this, uVar9 & 0xffffffff, param_2, 0xffffffff);
      uVar9 = uVar9 & 0xffffffff;
   }

   LAB_00110338:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeMatrixDebugType(unsigned int, int, bool) */undefined4 spv::Builder::makeMatrixDebugType(Builder *this, uint param_1, int param_2, bool param_3) {
   _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this_00;
   int iVar1;
   undefined8 *puVar2;
   Builder *pBVar3;
   uint uVar4;
   undefined4 uVar5;
   uint uVar6;
   long *plVar7;
   Instruction *pIVar8;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar9;
   Builder *pBVar10;
   Builder *pBVar11;
   long lVar12;
   Builder *pBVar13;
   long in_FS_OFFSET;
   bool bVar14;
   uint local_5c[3];
   Instruction *local_50;
   Instruction *local_48;
   long local_40;
   this_00 = (_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x3c0 );
   lVar12 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_5c[0] = param_1;
   while (true) {
      local_48 = (Instruction*)CONCAT44(local_48._4_4_, 0x6c);
      plVar7 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
      if ((int)( plVar7[1] - *plVar7 >> 3 ) <= (int)lVar12) break;
      local_48 = (Instruction*)CONCAT44(local_48._4_4_, 0x6c);
      plVar7 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
      pIVar8 = *(Instruction**)( *plVar7 + lVar12 * 8 );
      local_50 = pIVar8;
      if (local_5c[0] == **(uint**)( pIVar8 + 0x18 )) {
         uVar6 = ( *(uint**)( pIVar8 + 0x18 ) )[1];
         uVar4 = makeIntegerType(this, 0x20, false);
         uVar4 = makeIntConstant(this, uVar4, param_2, false);
         if (uVar6 == uVar4) {
            uVar5 = *(undefined4*)( pIVar8 + 8 );
            goto LAB_00110838;
         }

      }

      lVar12 = lVar12 + 1;
   }
;
   pIVar8 = (Instruction*)operator_new(0x60);
   uVar5 = makeVoidType(this);
   *(undefined4*)( pIVar8 + 0x10 ) = 0xc;
   iVar1 = *(int*)( this + 0x1d0 );
   *(undefined***)pIVar8 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( pIVar8 + 0xc ) = uVar5;
   *(undefined4*)( pIVar8 + 0x38 ) = 0;
   *(int*)( this + 0x1d0 ) = iVar1 + 1;
   *(int*)( pIVar8 + 8 ) = iVar1 + 1;
   *(undefined8*)( pIVar8 + 0x40 ) = 0;
   *(undefined4*)( pIVar8 + 0x48 ) = 0;
   *(undefined1(*) [16])( pIVar8 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pIVar8 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pIVar8 + 0x50 ) = (undefined1[16])0x0;
   local_50 = pIVar8;
   Instruction::reserveOperands(pIVar8, 5);
   Instruction::addIdOperand(pIVar8, *(uint*)( this + 0x50 ));
   Instruction::addImmediateOperand(pIVar8, 0x6c);
   pBVar13 = this + 0x520;
   pBVar3 = *(Builder**)( this + 0x528 );
   pBVar10 = pBVar13;
   if (*(Builder**)( this + 0x528 ) != (Builder*)0x0) {
      do {
         while (true) {
            pBVar11 = pBVar3;
            if (*(uint*)( pBVar11 + 0x20 ) < local_5c[0]) break;
            pBVar3 = *(Builder**)( pBVar11 + 0x10 );
            pBVar10 = pBVar11;
            if (*(Builder**)( pBVar11 + 0x10 ) == (Builder*)0x0) goto LAB_00110790;
         }
;
         pBVar3 = *(Builder**)( pBVar11 + 0x18 );
      }
 while ( *(Builder**)( pBVar11 + 0x18 ) != (Builder*)0x0 );
      LAB_00110790:bVar14 = pBVar13 != pBVar10;
      pBVar13 = pBVar10;
      if (( bVar14 ) && ( *(uint*)( pBVar10 + 0x20 ) <= local_5c[0] )) goto LAB_001107a2;
   }

   local_48 = (Instruction*)local_5c;
   pBVar10 = (Builder*)std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<unsigned_int_const&>,std::tuple<>>(this + 0x518, pBVar13, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   LAB_001107a2:Instruction::addIdOperand(pIVar8, *(uint*)( pBVar10 + 0x24 ));
   uVar6 = makeUintConstant(this, param_2, false);
   Instruction::addIdOperand(pIVar8, uVar6);
   uVar6 = makeBoolConstant(this, param_3, false);
   Instruction::addIdOperand(pIVar8, uVar6);
   local_48 = (Instruction*)CONCAT44(local_48._4_4_, 0x6c);
   pvVar9 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
   puVar2 = *(undefined8**)( pvVar9 + 8 );
   if (puVar2 == *(undefined8**)( pvVar9 + 0x10 )) {
      std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar9, puVar2, &local_50);
   }
 else {
      *puVar2 = pIVar8;
      *(undefined8**)( pvVar9 + 8 ) = puVar2 + 1;
   }

   local_48 = pIVar8;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_48);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   Module::mapInstruction((Module*)( this + 400 ), pIVar8);
   uVar5 = *(undefined4*)( pIVar8 + 8 );
   LAB_00110838:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar5;
}
/* spv::Builder::makeMatrixType(unsigned int, int, int) */undefined4 spv::Builder::makeMatrixType(Builder *this, uint param_1, int param_2, int param_3) {
   _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this_00;
   int iVar1;
   undefined8 *puVar2;
   uint uVar3;
   undefined4 uVar4;
   long *plVar5;
   Instruction *this_01;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar6;
   undefined4 *puVar7;
   long lVar8;
   long in_FS_OFFSET;
   Instruction *local_50;
   Instruction *local_48;
   long local_40;
   this_00 = (_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x388 );
   lVar8 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = makeVectorType(this, param_1, param_3);
   do {
      local_48._0_4_ = 0x18;
      plVar5 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
      if ((int)( plVar5[1] - *plVar5 >> 3 ) <= (int)lVar8) {
         this_01 = (Instruction*)operator_new(0x60);
         iVar1 = *(int*)( this + 0x1d0 );
         *(undefined***)this_01 = &PTR__Instruction_0011c5f0;
         *(undefined4*)( this_01 + 0x38 ) = 0;
         *(int*)( this + 0x1d0 ) = iVar1 + 1;
         *(int*)( this_01 + 8 ) = iVar1 + 1;
         *(undefined8*)( this_01 + 0xc ) = 0x1800000000;
         *(undefined8*)( this_01 + 0x40 ) = 0;
         *(undefined4*)( this_01 + 0x48 ) = 0;
         *(undefined1(*) [16])( this_01 + 0x18 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_01 + 0x28 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_01 + 0x50 ) = (undefined1[16])0x0;
         local_50 = this_01;
         Instruction::reserveOperands(this_01, 2);
         Instruction::addIdOperand(this_01, uVar3);
         Instruction::addImmediateOperand(this_01, param_2);
         local_48 = (Instruction*)CONCAT44(local_48._4_4_, 0x18);
         pvVar6 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
         puVar2 = *(undefined8**)( pvVar6 + 8 );
         if (puVar2 == *(undefined8**)( pvVar6 + 0x10 )) {
            std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar6, puVar2, &local_50);
         }
 else {
            *puVar2 = this_01;
            *(undefined8**)( pvVar6 + 8 ) = puVar2 + 1;
         }

         local_48 = this_01;
         std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_48);
         std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
         Module::mapInstruction((Module*)( this + 400 ), this_01);
         if (this[0xea] != (Builder)0x0) {
            uVar4 = makeMatrixDebugType(this, uVar3, param_2, true);
            local_48 = (Instruction*)CONCAT44(local_48._4_4_, *(undefined4*)( this_01 + 8 ));
            puVar7 = (undefined4*)std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator []((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)( this + 0x518 ), (uint*)&local_48);
            *puVar7 = uVar4;
         }

         uVar4 = *(undefined4*)( this_01 + 8 );
         LAB_00110a3b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return uVar4;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      local_48 = (Instruction*)CONCAT44(local_48._4_4_, 0x18);
      plVar5 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_48);
      local_50 = *(Instruction**)( *plVar5 + lVar8 * 8 );
      if (( uVar3 == **(uint**)( local_50 + 0x18 ) ) && ( param_2 == ( *(uint**)( local_50 + 0x18 ) )[1] )) {
         uVar4 = *(undefined4*)( local_50 + 8 );
         goto LAB_00110a3b;
      }

      lVar8 = lVar8 + 1;
   }
 while ( true );
}
/* spv::Builder::createMemoryBarrier(unsigned int, unsigned int) */void spv::Builder::createMemoryBarrier(Builder *this, uint param_1, uint param_2) {
   uint uVar1;
   Instruction *this_00;
   long in_FS_OFFSET;
   Instruction *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined8*)( this_00 + 8 ) = 0;
   *(undefined4*)( this_00 + 0x10 ) = 0xe1;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, 2);
   uVar1 = makeIntegerType(this, 0x20, false);
   uVar1 = makeIntConstant(this, uVar1, param_1, false);
   Instruction::addIdOperand(this_00, uVar1);
   uVar1 = makeIntegerType(this, 0x20, false);
   uVar1 = makeIntConstant(this, uVar1, param_2, false);
   Instruction::addIdOperand(this_00, uVar1);
   local_38 = this_00;
   addInstruction(this, &local_38);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createControlBarrier(spv::Scope, spv::Scope, spv::MemorySemanticsMask) */void spv::Builder::createControlBarrier(Builder *this, uint param_2, uint param_3, uint param_4) {
   uint uVar1;
   Instruction *this_00;
   long in_FS_OFFSET;
   Instruction *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined8*)( this_00 + 8 ) = 0;
   *(undefined4*)( this_00 + 0x10 ) = 0xe0;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, 3);
   uVar1 = makeIntegerType(this, 0x20, false);
   uVar1 = makeIntConstant(this, uVar1, param_2, false);
   Instruction::addIdOperand(this_00, uVar1);
   uVar1 = makeIntegerType(this, 0x20, false);
   uVar1 = makeIntConstant(this, uVar1, param_3, false);
   Instruction::addIdOperand(this_00, uVar1);
   uVar1 = makeIntegerType(this, 0x20, false);
   uVar1 = makeIntConstant(this, uVar1, param_4, false);
   Instruction::addIdOperand(this_00, uVar1);
   local_38 = this_00;
   addInstruction(this, &local_38);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeDebugLexicalBlock(unsigned int) */int spv::Builder::makeDebugLexicalBlock(Builder *this, uint param_1) {
   int iVar1;
   undefined4 uVar2;
   uint uVar3;
   Instruction *this_00;
   long lVar4;
   long in_FS_OFFSET;
   Instruction *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = *(int*)( this + 0x1d0 ) + 1;
   *(int*)( this + 0x1d0 ) = iVar1;
   this_00 = (Instruction*)operator_new(0x60);
   uVar2 = makeVoidType(this);
   *(int*)( this_00 + 8 ) = iVar1;
   *(undefined4*)( this_00 + 0xc ) = uVar2;
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_00 + 0x10 ) = 0xc;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, 6);
   Instruction::addIdOperand(this_00, *(uint*)( this + 0x50 ));
   Instruction::addImmediateOperand(this_00, 0x15);
   uVar3 = makeDebugSource(this, *(uint*)( this + 0x88 ));
   Instruction::addIdOperand(this_00, uVar3);
   uVar3 = makeUintConstant(this, param_1, false);
   Instruction::addIdOperand(this_00, uVar3);
   uVar3 = makeIntegerType(this, 0x20, false);
   uVar3 = makeIntConstant(this, uVar3, 0, false);
   Instruction::addIdOperand(this_00, uVar3);
   lVar4 = *(long*)( this + 200 );
   if (lVar4 == *(long*)( this + 0xd0 )) {
      lVar4 = *(long*)( *(long*)( this + 0xe0 ) + -8 ) + 0x200;
   }

   Instruction::addIdOperand(this_00, *(uint*)( lVar4 + -4 ));
   local_38 = this_00;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_38);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
   Module::mapInstruction((Module*)( this + 400 ), this_00);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::enterLexicalBlock(unsigned int) */void spv::Builder::enterLexicalBlock(Builder *this, uint param_1) {
   uint *puVar1;
   long in_FS_OFFSET;
   uint local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_14 = makeDebugLexicalBlock(this, param_1);
   puVar1 = *(uint**)( this + 200 );
   if (puVar1 == (uint*)( *(long*)( this + 0xd8 ) + -4 )) {
      std::deque<unsigned_int,std::allocator<unsigned_int>>::_M_push_back_aux<unsigned_int_const&>((deque<unsigned_int,std::allocator<unsigned_int>>*)( this + 0x98 ), &local_14);
   }
 else {
      *puVar1 = local_14;
      *(uint**)( this + 200 ) = puVar1 + 1;
   }

   this[0x90] = (Builder)0x1;
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeDebugCompilationUnit() [clone .part.0] */int spv::Builder::makeDebugCompilationUnit(Builder *this) {
   int iVar1;
   int *piVar2;
   undefined4 uVar3;
   uint uVar4;
   Instruction *this_00;
   long in_FS_OFFSET;
   Instruction *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = *(int*)( this + 0x1d0 ) + 1;
   *(int*)( this + 0x1d0 ) = iVar1;
   this_00 = (Instruction*)operator_new(0x60);
   uVar3 = makeVoidType(this);
   *(int*)( this_00 + 8 ) = iVar1;
   *(undefined4*)( this_00 + 0xc ) = uVar3;
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_00 + 0x10 ) = 0xc;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, 6);
   Instruction::addIdOperand(this_00, *(uint*)( this + 0x50 ));
   Instruction::addImmediateOperand(this_00, 1);
   uVar4 = makeIntegerType(this, 0x20, false);
   uVar4 = makeIntConstant(this, uVar4, 1, false);
   Instruction::addIdOperand(this_00, uVar4);
   uVar4 = makeIntegerType(this, 0x20, false);
   uVar4 = makeIntConstant(this, uVar4, 4, false);
   Instruction::addIdOperand(this_00, uVar4);
   uVar4 = makeDebugSource(this, *(uint*)( this + 0x8c ));
   Instruction::addIdOperand(this_00, uVar4);
   uVar4 = makeUintConstant(this, *(uint*)( this + 0x44 ), false);
   Instruction::addIdOperand(this_00, uVar4);
   local_38 = this_00;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_38);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
   Module::mapInstruction((Module*)( this + 400 ), this_00);
   piVar2 = *(int**)( this + 200 );
   *(int*)( this + 0x4c ) = iVar1;
   if (piVar2 == (int*)( *(long*)( this + 0xd8 ) + -4 )) {
      std::deque<unsigned_int,std::allocator<unsigned_int>>::_M_push_back_aux<unsigned_int_const&>((deque<unsigned_int,std::allocator<unsigned_int>>*)( this + 0x98 ), (uint*)( this + 0x4c ));
   }
 else {
      *piVar2 = iVar1;
      *(int**)( this + 200 ) = piVar2 + 1;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeDebugCompilationUnit() */void spv::Builder::makeDebugCompilationUnit(Builder *this) {
   if (*(int*)( this + 0x4c ) != 0) {
      return;
   }

   makeDebugCompilationUnit(this);
   return;
}
/* spv::Builder::makeDebugFunction(spv::Function*, unsigned int, unsigned int) */int spv::Builder::makeDebugFunction(Builder *this, Function *param_1, uint param_2, uint param_3) {
   int iVar1;
   Builder *pBVar2;
   undefined4 uVar3;
   uint uVar4;
   Instruction *this_00;
   Builder *pBVar5;
   Builder *pBVar6;
   Builder *pBVar7;
   long in_FS_OFFSET;
   bool bVar8;
   uint local_3c;
   Instruction *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = *(int*)( this + 0x1d0 ) + 1;
   *(int*)( this + 0x1d0 ) = iVar1;
   local_3c = param_3;
   this_00 = (Instruction*)operator_new(0x60);
   uVar3 = makeVoidType(this);
   *(int*)( this_00 + 8 ) = iVar1;
   *(undefined4*)( this_00 + 0xc ) = uVar3;
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_00 + 0x10 ) = 0xc;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, 0xb);
   Instruction::addIdOperand(this_00, *(uint*)( this + 0x50 ));
   Instruction::addImmediateOperand(this_00, 0x14);
   Instruction::addIdOperand(this_00, param_2);
   pBVar7 = this + 0x520;
   pBVar2 = *(Builder**)( this + 0x528 );
   pBVar5 = pBVar7;
   if (*(Builder**)( this + 0x528 ) != (Builder*)0x0) {
      do {
         while (true) {
            pBVar6 = pBVar2;
            if (*(uint*)( pBVar6 + 0x20 ) < local_3c) break;
            pBVar2 = *(Builder**)( pBVar6 + 0x10 );
            pBVar5 = pBVar6;
            if (*(Builder**)( pBVar6 + 0x10 ) == (Builder*)0x0) goto LAB_00111200;
         }
;
         pBVar2 = *(Builder**)( pBVar6 + 0x18 );
      }
 while ( *(Builder**)( pBVar6 + 0x18 ) != (Builder*)0x0 );
      LAB_00111200:bVar8 = pBVar7 != pBVar5;
      pBVar7 = pBVar5;
      if (( bVar8 ) && ( *(uint*)( pBVar5 + 0x20 ) <= local_3c )) goto LAB_00111217;
   }

   local_38 = (Instruction*)&local_3c;
   pBVar5 = (Builder*)std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<unsigned_int_const&>,std::tuple<>>(this + 0x518, pBVar7, &local_38);
   LAB_00111217:Instruction::addIdOperand(this_00, *(uint*)( pBVar5 + 0x24 ));
   uVar4 = makeDebugSource(this, *(uint*)( this + 0x88 ));
   Instruction::addIdOperand(this_00, uVar4);
   uVar4 = makeUintConstant(this, *(uint*)( this + 0x84 ), false);
   Instruction::addIdOperand(this_00, uVar4);
   uVar4 = makeUintConstant(this, 0, false);
   Instruction::addIdOperand(this_00, uVar4);
   uVar4 = *(uint*)( this + 0x4c );
   if (uVar4 == 0) {
      uVar4 = makeDebugCompilationUnit(this);
   }

   Instruction::addIdOperand(this_00, uVar4);
   Instruction::addIdOperand(this_00, param_2);
   uVar4 = makeUintConstant(this, 3, false);
   Instruction::addIdOperand(this_00, uVar4);
   uVar4 = makeUintConstant(this, *(uint*)( this + 0x84 ), false);
   Instruction::addIdOperand(this_00, uVar4);
   local_38 = this_00;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_38);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
   Module::mapInstruction((Module*)( this + 400 ), this_00);
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}
/* spv::Builder::makeFloatDebugType(int) */undefined4 spv::Builder::makeFloatDebugType(Builder *this, int param_1) {
   _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this_00;
   int iVar1;
   uint *puVar2;
   undefined8 *puVar3;
   uint uVar4;
   undefined4 uVar5;
   long *plVar6;
   ulong uVar7;
   ulong uVar8;
   Instruction *this_01;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar9;
   long lVar10;
   char *pcVar11;
   long in_FS_OFFSET;
   Instruction *local_78;
   Instruction *local_70;
   long *local_68;
   ulong local_60;
   long local_58[5];
   local_58[3] = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0x10) {
      local_60 = 9;
      pcVar11 = "float16_t";
   }
 else {
      if (param_1 != 0x40) {
         plVar6 = local_58;
         local_60 = 5;
         pcVar11 = "float";
         goto LAB_001113b1;
      }

      local_60 = 6;
      pcVar11 = "double";
   }

   plVar6 = local_58;
   if (7 < (uint)local_60) {
      uVar7 = 0;
      do {
         uVar4 = (int)uVar7 + 8;
         uVar8 = (ulong)uVar4;
         *(undefined8*)( (long)local_58 + uVar7 ) = *(undefined8*)( pcVar11 + uVar7 );
         uVar7 = uVar8;
      }
 while ( uVar4 < ( (uint)local_60 & 0xfffffff8 ) );
      plVar6 = (long*)( (long)local_58 + uVar8 );
      pcVar11 = pcVar11 + uVar8;
   }

   LAB_001113b1:lVar10 = 0;
   if (( local_60 & 4 ) != 0) {
      *(undefined4*)plVar6 = *(undefined4*)pcVar11;
      lVar10 = 4;
   }

   if (( local_60 & 2 ) != 0) {
      *(undefined2*)( (long)plVar6 + lVar10 ) = *(undefined2*)( pcVar11 + lVar10 );
      lVar10 = lVar10 + 2;
   }

   if (( local_60 & 1 ) != 0) {
      *(char*)( (long)plVar6 + lVar10 ) = pcVar11[lVar10];
   }

   *(undefined1*)( (long)local_58 + local_60 ) = 0;
   local_68 = local_58;
   uVar4 = getStringId(this, (string*)&local_68);
   if (local_68 != local_58) {
      operator_delete(local_68, local_58[0] + 1);
   }

   lVar10 = 0;
   this_00 = (_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x3c0 );
   do {
      local_70._0_4_ = 2;
      plVar6 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_70);
      if ((int)( plVar6[1] - *plVar6 >> 3 ) <= (int)lVar10) {
         this_01 = (Instruction*)operator_new(0x60);
         uVar5 = makeVoidType(this);
         *(undefined4*)( this_01 + 0x10 ) = 0xc;
         iVar1 = *(int*)( this + 0x1d0 );
         *(undefined***)this_01 = &PTR__Instruction_0011c5f0;
         *(undefined4*)( this_01 + 0xc ) = uVar5;
         *(undefined4*)( this_01 + 0x38 ) = 0;
         *(int*)( this + 0x1d0 ) = iVar1 + 1;
         *(int*)( this_01 + 8 ) = iVar1 + 1;
         *(undefined8*)( this_01 + 0x40 ) = 0;
         *(undefined4*)( this_01 + 0x48 ) = 0;
         *(undefined1(*) [16])( this_01 + 0x18 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_01 + 0x28 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_01 + 0x50 ) = (undefined1[16])0x0;
         local_78 = this_01;
         Instruction::reserveOperands(this_01, 6);
         Instruction::addIdOperand(this_01, *(uint*)( this + 0x50 ));
         Instruction::addImmediateOperand(this_01, 2);
         Instruction::addIdOperand(this_01, uVar4);
         uVar4 = makeUintConstant(this, param_1, false);
         Instruction::addIdOperand(this_01, uVar4);
         uVar4 = makeUintConstant(this, 3, false);
         Instruction::addIdOperand(this_01, uVar4);
         uVar4 = makeUintConstant(this, 0, false);
         Instruction::addIdOperand(this_01, uVar4);
         local_70 = (Instruction*)CONCAT44(local_70._4_4_, 2);
         pvVar9 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_70);
         puVar3 = *(undefined8**)( pvVar9 + 8 );
         if (puVar3 == *(undefined8**)( pvVar9 + 0x10 )) {
            std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar9, puVar3, &local_78);
         }
 else {
            *puVar3 = this_01;
            *(undefined8**)( pvVar9 + 8 ) = puVar3 + 1;
         }

         local_70 = this_01;
         std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_70);
         std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_70);
         Module::mapInstruction((Module*)( this + 400 ), this_01);
         uVar5 = *(undefined4*)( this_01 + 8 );
         LAB_00111626:if (local_58[3] != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return uVar5;
      }

      local_70 = (Instruction*)CONCAT44(local_70._4_4_, 2);
      plVar6 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_70);
      local_78 = *(Instruction**)( *plVar6 + lVar10 * 8 );
      puVar2 = *(uint**)( local_78 + 0x18 );
      if (( ( uVar4 == *puVar2 ) && ( puVar2[1] == param_1 ) ) && ( puVar2[2] == 3 )) {
         uVar5 = *(undefined4*)( local_78 + 8 );
         goto LAB_00111626;
      }

      lVar10 = lVar10 + 1;
   }
 while ( true );
}
/* spv::Builder::makeFloatType(int) */undefined4 spv::Builder::makeFloatType(Builder *this, int param_1) {
   _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this_00;
   int iVar1;
   undefined8 *puVar2;
   undefined4 uVar3;
   long *plVar4;
   Instruction *this_01;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar5;
   undefined4 *puVar6;
   long lVar7;
   long in_FS_OFFSET;
   Instruction *local_40;
   Instruction *local_38;
   long local_30;
   this_00 = (_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x388 );
   lVar7 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      local_38._0_4_ = 0x16;
      plVar4 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_38);
      if ((int)( plVar4[1] - *plVar4 >> 3 ) <= (int)lVar7) {
         this_01 = (Instruction*)operator_new(0x60);
         iVar1 = *(int*)( this + 0x1d0 );
         *(undefined***)this_01 = &PTR__Instruction_0011c5f0;
         *(undefined4*)( this_01 + 0x38 ) = 0;
         *(int*)( this + 0x1d0 ) = iVar1 + 1;
         *(int*)( this_01 + 8 ) = iVar1 + 1;
         *(undefined8*)( this_01 + 0xc ) = 0x1600000000;
         *(undefined8*)( this_01 + 0x40 ) = 0;
         *(undefined4*)( this_01 + 0x48 ) = 0;
         *(undefined1(*) [16])( this_01 + 0x18 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_01 + 0x28 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_01 + 0x50 ) = (undefined1[16])0x0;
         local_40 = this_01;
         Instruction::addImmediateOperand(this_01, param_1);
         local_38 = (Instruction*)CONCAT44(local_38._4_4_, 0x16);
         pvVar5 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_38);
         puVar2 = *(undefined8**)( pvVar5 + 8 );
         if (puVar2 == *(undefined8**)( pvVar5 + 0x10 )) {
            std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar5, puVar2, &local_40);
         }
 else {
            *puVar2 = this_01;
            *(undefined8**)( pvVar5 + 8 ) = puVar2 + 1;
         }

         local_38 = this_01;
         std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_38);
         std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
         Module::mapInstruction((Module*)( this + 400 ), this_01);
         if (param_1 == 0x40) {
            local_38 = (Instruction*)CONCAT44(local_38._4_4_, 10);
            std::set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>::insert((set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>*)( this + 0x158 ), (Capability*)&local_38);
         }

         if (this[0xea] != (Builder)0x0) {
            uVar3 = makeFloatDebugType(this, param_1);
            local_38 = (Instruction*)CONCAT44(local_38._4_4_, *(undefined4*)( this_01 + 8 ));
            puVar6 = (undefined4*)std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator []((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)( this + 0x518 ), (uint*)&local_38);
            *puVar6 = uVar3;
         }

         uVar3 = *(undefined4*)( this_01 + 8 );
         goto LAB_001117ea;
      }

      local_38 = (Instruction*)CONCAT44(local_38._4_4_, 0x16);
      plVar4 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)&local_38);
      local_40 = *(Instruction**)( *plVar4 + lVar7 * 8 );
      lVar7 = lVar7 + 1;
   }
 while ( param_1 != **(int**)( local_40 + 0x18 ) );
   uVar3 = *(undefined4*)( local_40 + 8 );
   LAB_001117ea:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeFloatConstant(float, bool) */ulong spv::Builder::makeFloatConstant(Builder *this, float param_1, bool param_2) {
   int iVar1;
   undefined8 *puVar2;
   undefined4 uVar3;
   Instruction *this_00;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar4;
   ulong uVar5;
   undefined4 uVar6;
   long in_FS_OFFSET;
   Instruction *local_40;
   Instruction *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2) {
      uVar3 = makeFloatType(this, 0x20);
      uVar6 = 0x32;
   }
 else {
      uVar3 = makeFloatType(this, 0x20);
      uVar5 = findScalarConstant(this, 0x16, 0x2b, uVar3, param_1);
      if ((int)uVar5 != 0) goto LAB_0011198a;
      uVar6 = 0x2b;
   }

   this_00 = (Instruction*)operator_new(0x60);
   iVar1 = *(int*)( this + 0x1d0 );
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_00 + 0xc ) = uVar3;
   *(int*)( this + 0x1d0 ) = iVar1 + 1;
   *(int*)( this_00 + 8 ) = iVar1 + 1;
   *(undefined4*)( this_00 + 0x10 ) = uVar6;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   local_40 = this_00;
   Instruction::addImmediateOperand(this_00, (uint)param_1);
   local_38 = this_00;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_38);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
   local_38 = (Instruction*)CONCAT44(local_38._4_4_, 0x16);
   pvVar4 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x318 ), (uint*)&local_38);
   puVar2 = *(undefined8**)( pvVar4 + 8 );
   if (puVar2 == *(undefined8**)( pvVar4 + 0x10 )) {
      std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar4, puVar2, &local_40);
   }
 else {
      *puVar2 = this_00;
      *(undefined8**)( pvVar4 + 8 ) = puVar2 + 1;
   }

   Module::mapInstruction((Module*)( this + 400 ), this_00);
   uVar5 = ( ulong ) * (uint*)( this_00 + 8 );
   LAB_0011198a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeCompositeConstant(unsigned int, std::vector<unsigned int,
   std::allocator<unsigned int> > const&, bool) */ulong spv::Builder::makeCompositeConstant(Builder *this, uint param_1, vector *param_2, bool param_3) {
   uint uVar1;
   long lVar2;
   undefined4 *puVar3;
   ulong *puVar4;
   int iVar5;
   Instruction *this_00;
   ulong uVar6;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar7;
   long lVar8;
   undefined4 uVar9;
   long lVar10;
   long in_FS_OFFSET;
   uint local_6c;
   Instruction *local_68;
   Instruction *local_60;
   ulong *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = *(uint*)( *(long*)( *(long*)( this + 0x1b0 ) + (ulong)param_1 * 8 ) + 0x10 );
   local_6c = param_1;
   if (param_3) {
      if (uVar1 < 0x1f) {
         if (( uVar1 < 0x17 ) || ( uVar9 = 0x33(0x51800000UL >> ( (ulong)uVar1 & 0x3f ) & 1) == 0 )) {
            LAB_00111be2:uVar6 = makeFloatConstant(this, 0.0, false);
            goto LAB_00111bf0;
         }

      }
 else {
         uVar9 = 0x33;
         if (( uVar1 != 0x1168 ) && ( uVar1 != 0x14ee )) goto LAB_00111be2;
      }

   }
 else {
      if (uVar1 != 0x1e) {
         if (uVar1 < 0x1f) {
            if (uVar1 < 0x19) {
               if (0x16 < uVar1) {
                  LAB_00111d08:uVar6 = findCompositeConstant(this, (ulong)uVar1, param_1, param_2);
                  iVar5 = (int)uVar6;
                  goto joined_r0x00111d28;
               }

            }
 else if (uVar1 == 0x1c) goto LAB_00111d08;
         }
 else if (( uVar1 == 0x1168 ) || ( uVar1 == 0x14ee )) goto LAB_00111d08;
         goto LAB_00111be2;
      }

      uVar6 = findStructConstant(this, param_1, param_2);
      iVar5 = (int)uVar6;
      joined_r0x00111d28:if (iVar5 != 0) goto LAB_00111bf0;
      uVar9 = 0x2c;
   }

   lVar10 = 0;
   this_00 = (Instruction*)operator_new(0x60);
   lVar8 = *(long*)( param_2 + 8 );
   iVar5 = *(int*)( this + 0x1d0 );
   lVar2 = *(long*)param_2;
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_00 + 0x10 ) = uVar9;
   *(int*)( this + 0x1d0 ) = iVar5 + 1;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(ulong*)( this_00 + 8 ) = CONCAT44(param_1, iVar5 + 1);
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   local_68 = this_00;
   Instruction::reserveOperands(this_00, lVar8 - lVar2 >> 2);
   lVar8 = *(long*)param_2;
   if (0 < (int)( *(long*)( param_2 + 8 ) - lVar8 >> 2 )) {
      do {
         uVar9 = *(undefined4*)( lVar8 + lVar10 * 4 );
         puVar3 = *(undefined4**)( this_00 + 0x20 );
         local_60 = (Instruction*)CONCAT44(local_60._4_4_, uVar9);
         if (puVar3 == *(undefined4**)( this_00 + 0x28 )) {
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar3, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
         }
 else {
            *puVar3 = uVar9;
            *(undefined4**)( this_00 + 0x20 ) = puVar3 + 1;
         }

         puVar4 = *(ulong**)( this_00 + 0x40 );
         if (puVar4 == *(ulong**)( this_00 + 0x50 )) {
            local_50 = *(undefined4*)( this_00 + 0x48 );
            local_58 = puVar4;
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar4, CONCAT44(uStack_4c, local_50), 1);
         }
 else {
            iVar5 = *(int*)( this_00 + 0x48 );
            if (iVar5 == 0x3f) {
               *(undefined4*)( this_00 + 0x48 ) = 0;
               *(ulong**)( this_00 + 0x40 ) = puVar4 + 1;
            }
 else {
               *(int*)( this_00 + 0x48 ) = iVar5 + 1;
            }

            *puVar4 = *puVar4 | 1L << ( (byte)iVar5 & 0x3f );
         }

         lVar8 = *(long*)param_2;
         lVar10 = lVar10 + 1;
      }
 while ( (int)lVar10 < (int)( *(long*)( param_2 + 8 ) - lVar8 >> 2 ) );
   }

   local_60 = this_00;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_60);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
   if (uVar1 == 0x1e) {
      pvVar7 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x350 ), &local_6c);
      std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::push_back(pvVar7, &local_68);
   }
 else {
      local_60 = (Instruction*)CONCAT44(local_60._4_4_, uVar1);
      pvVar7 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x318 ), (uint*)&local_60);
      std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::push_back(pvVar7, &local_68);
   }

   Module::mapInstruction((Module*)( this + 400 ), this_00);
   uVar6 = ( ulong ) * (uint*)( this_00 + 8 );
   LAB_00111bf0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::remapDynamicSwizzle() */void spv::Builder::remapDynamicSwizzle(Builder *this) {
   undefined8 uVar1;
   int iVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   undefined4 uVar6;
   long lVar7;
   undefined4 *puVar8;
   long lVar9;
   undefined4 *puVar10;
   long in_FS_OFFSET;
   undefined4 local_5c;
   undefined1 local_58[16];
   undefined4 *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x228 ) != 0) {
      lVar7 = *(long*)( this + 0x210 );
      if (4 < ( ulong )(*(long*)( this + 0x218 ) - lVar7)) {
         local_48 = (undefined4*)0x0;
         local_58 = (undefined1[16])0x0;
         iVar2 = (int)( *(long*)( this + 0x218 ) - lVar7 >> 2 );
         if (iVar2 < 1) {
            uVar4 = makeIntegerType(this, 0x20, false);
            uVar4 = makeVectorType(this, uVar4, iVar2);
            uVar3 = makeCompositeConstant(this, uVar4, (vector*)local_58, false);
            uVar4 = *(uint*)( this + 0x228 );
            uVar5 = makeIntegerType(this, 0x20, false);
            uVar6 = createVectorExtractDynamic(this, uVar3, uVar5, uVar4);
            *(undefined4*)( this + 0x228 ) = uVar6;
            if (*(long*)( this + 0x218 ) != *(long*)( this + 0x210 )) {
               *(long*)( this + 0x218 ) = *(long*)( this + 0x210 );
            }

         }
 else {
            lVar9 = 0;
            puVar8 = (undefined4*)0x0;
            puVar10 = (undefined4*)0x0;
            while (true) {
               uVar4 = *(uint*)( lVar7 + lVar9 * 4 );
               uVar3 = makeIntegerType(this, 0x20, false);
               local_5c = makeIntConstant(this, uVar3, uVar4, false);
               if (puVar10 == puVar8) {
                  std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>((vector<unsigned_int,std::allocator<unsigned_int>>*)local_58, puVar8, &local_5c);
                  puVar8 = local_48;
               }
 else {
                  *puVar10 = local_5c;
                  local_58._8_8_ = puVar10 + 1;
               }

               lVar7 = *(long*)( this + 0x210 );
               lVar9 = lVar9 + 1;
               iVar2 = (int)( *(long*)( this + 0x218 ) - lVar7 >> 2 );
               if (iVar2 <= (int)lVar9) break;
               puVar10 = (undefined4*)local_58._8_8_;
            }
;
            uVar1 = local_58._0_8_;
            uVar4 = makeIntegerType(this, 0x20, false);
            uVar4 = makeVectorType(this, uVar4, iVar2);
            uVar3 = makeCompositeConstant(this, uVar4, (vector*)local_58, false);
            uVar4 = *(uint*)( this + 0x228 );
            uVar5 = makeIntegerType(this, 0x20, false);
            uVar6 = createVectorExtractDynamic(this, uVar3, uVar5, uVar4);
            *(undefined4*)( this + 0x228 ) = uVar6;
            if (*(long*)( this + 0x210 ) != *(long*)( this + 0x218 )) {
               *(long*)( this + 0x218 ) = *(long*)( this + 0x210 );
            }

            if ((void*)uVar1 != (void*)0x0) {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  operator_delete((void*)uVar1, (long)puVar8 - uVar1);
                  return;
               }

               goto LAB_00111fd6;
            }

         }

      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00111fd6:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* spv::Builder::collapseAccessChain() */void spv::Builder::collapseAccessChain(Builder *this) {
   undefined4 uVar1;
   long *plVar2;
   int *piVar3;
   if (*(int*)( this + 0x208 ) != 0) {
      return;
   }

   remapDynamicSwizzle(this);
   piVar3 = *(int**)( this + 0x1f8 );
   if (*(int*)( this + 0x228 ) != 0) {
      if (piVar3 == *(int**)( this + 0x200 )) {
         std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this + 0x1f0 ), piVar3, this + 0x228);
         piVar3 = *(int**)( this + 0x1f8 );
      }
 else {
         *piVar3 = *(int*)( this + 0x228 );
         piVar3 = piVar3 + 1;
         *(int**)( this + 0x1f8 ) = piVar3;
      }

      *(undefined4*)( this + 0x228 ) = 0;
   }

   if (*(int**)( this + 0x1f0 ) != piVar3) {
      plVar2 = *(long**)( this + 0x1b0 );
      if (plVar2[*(uint*)( this + 0x1e8 )] != 0) {
         plVar2 = plVar2 + *(uint*)( plVar2[*(uint*)( this + 0x1e8 )] + 0xc );
      }

      uVar1 = createAccessChain(this, **(undefined4**)( *plVar2 + 0x18 ), *(uint*)( this + 0x1e8 ), this + 0x1f0);
      *(undefined4*)( this + 0x208 ) = uVar1;
   }

   return;
}
/* spv::Builder::accessChainGetLValue() */void spv::Builder::accessChainGetLValue(Builder *this) {
   uint *puVar1;
   ulong uVar2;
   long in_FS_OFFSET;
   uint local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar1 = *(uint**)( this + 0x210 );
   uVar2 = (long)*(uint**)( this + 0x218 ) - (long)puVar1;
   if (( ( *(uint**)( this + 0x218 ) != puVar1 ) || ( *(int*)( this + 0x228 ) != 0 ) ) && ( uVar2 < 5 )) {
      if (uVar2 == 4) {
         local_14 = makeUintConstant(this, *puVar1, false);
         std::vector<unsigned_int,std::allocator<unsigned_int>>::emplace_back<unsigned_int>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this + 0x1f0 ), &local_14);
         if (*(long*)( this + 0x210 ) != *(long*)( this + 0x218 )) {
            *(long*)( this + 0x218 ) = *(long*)( this + 0x210 );
         }

         *(undefined4*)( this + 0x22c ) = 0;
      }
 else if (*(int*)( this + 0x228 ) != 0) {
         std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back((vector<unsigned_int,std::allocator<unsigned_int>>*)( this + 0x1f0 ), (uint*)( this + 0x228 ));
         *(undefined8*)( this + 0x228 ) = 0;
      }

   }

   if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   collapseAccessChain(this);
   return;
}
/* spv::Builder::accessChainStore(unsigned int, spv::Decoration, spv::MemoryAccessMask, spv::Scope,
   unsigned int) */void spv::Builder::accessChainStore(Builder *this, uint param_1, int param_3, uint param_4, undefined4 param_5, uint param_6) {
   undefined4 *puVar1;
   uint uVar2;
   int iVar3;
   undefined4 uVar4;
   uint uVar5;
   long lVar6;
   long *plVar7;
   ulong uVar8;
   Builder *pBVar9;
   long lVar10;
   long in_FS_OFFSET;
   uint local_60;
   undefined4 local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   transferAccessChainSwizzle(this, true);
   lVar10 = *(long*)( this + 0x210 );
   lVar6 = *(long*)( this + 0x218 ) - lVar10;
   if (lVar10 != *(long*)( this + 0x218 )) {
      pBVar9 = this;
      uVar2 = getResultingAccessChainType(this);
      iVar3 = getNumTypeConstituents(pBVar9, uVar2);
      if (( iVar3 != (int)( lVar6 >> 2 ) ) && ( *(int*)( this + 0x228 ) == 0 )) {
         uVar8 = 0;
         do {
            uVar2 = *(uint*)( lVar10 + uVar8 * 4 );
            uVar5 = makeIntegerType(this, 0x20, false);
            local_44 = makeIntConstant(this, uVar5, uVar2, false);
            puVar1 = *(undefined4**)( this + 0x1f8 );
            if (puVar1 == *(undefined4**)( this + 0x200 )) {
               std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this + 0x1f0 ), puVar1, &local_44);
            }
 else {
               *puVar1 = local_44;
               *(undefined4**)( this + 0x1f8 ) = puVar1 + 1;
            }

            *(undefined4*)( this + 0x208 ) = 0;
            uVar2 = collapseAccessChain(this);
            if (param_3 != 0x7fffffff) {
               addDecoration(this, uVar2, param_3, 0xffffffff);
            }

            uVar5 = 0;
            *(undefined4*)( this + 0x208 ) = 0;
            *(long*)( this + 0x1f8 ) = *(long*)( this + 0x1f8 ) + -4;
            lVar10 = *(long*)( *(long*)( this + 0x1b0 ) + (ulong)param_1 * 8 );
            if (lVar10 != 0) {
               uVar5 = *(uint*)( lVar10 + 0xc );
            }

            pBVar9 = this;
            uVar5 = getContainedTypeId(this, uVar5, 0);
            uVar4 = createCompositeExtract(pBVar9, param_1, uVar5, (uint)uVar8);
            param_6 = param_6 & -param_6;
            plVar7 = *(long**)( this + 0x1b0 );
            if (plVar7[uVar2] != 0) {
               plVar7 = plVar7 + *(uint*)( plVar7[uVar2] + 0xc );
            }

            if (**(int**)( *plVar7 + 0x18 ) == 0x14e5) {
               param_4 = param_4 | 2;
            }

            createStore(this, uVar4, uVar2, param_4, param_5, param_6);
            lVar10 = *(long*)( this + 0x210 );
            uVar8 = ( ulong )((uint)uVar8 + 1);
         }
 while ( uVar8 < ( ulong )(*(long*)( this + 0x218 ) - lVar10 >> 2) );
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0011248f;
      }

   }

   uVar2 = collapseAccessChain(this);
   uVar8 = (ulong)uVar2;
   if (param_3 != 0x7fffffff) {
      addDecoration(this, uVar2, param_3, 0xffffffff);
   }

   local_60 = param_1;
   if (*(long*)( this + 0x218 ) != *(long*)( this + 0x210 )) {
      uVar5 = createLoad(this, uVar8, 0x7fffffff, 0, 0x7fffffff, 0);
      uVar2 = 0;
      lVar10 = *(long*)( *(long*)( this + 0x1b0 ) + (ulong)uVar5 * 8 );
      if (lVar10 != 0) {
         uVar2 = *(uint*)( lVar10 + 0xc );
      }

      local_60 = createLvalueSwizzle(this, uVar2, uVar5, param_1, (vector*)( this + 0x210 ));
   }

   plVar7 = *(long**)( this + 0x1b0 );
   if (plVar7[uVar8] != 0) {
      plVar7 = plVar7 + *(uint*)( plVar7[uVar8] + 0xc );
   }

   if (**(int**)( *plVar7 + 0x18 ) == 0x14e5) {
      param_4 = param_4 | 2;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      createStore(this, local_60, uVar8, param_4, param_5, -param_6 & param_6);
      return;
   }

   LAB_0011248f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* spv::Builder::createCompositeConstruct(unsigned int, std::vector<unsigned int,
   std::allocator<unsigned int> > const&) */ulong spv::Builder::createCompositeConstruct(Builder *this, uint param_1, vector *param_2) {
   int iVar1;
   undefined4 uVar2;
   uint *puVar3;
   long lVar4;
   undefined4 *puVar5;
   ulong *puVar6;
   long lVar7;
   uint *puVar8;
   Instruction *this_00;
   ulong uVar9;
   uint *puVar10;
   long lVar11;
   long in_FS_OFFSET;
   bool bVar12;
   Instruction *local_60;
   ulong *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x1e0] == (Builder)0x0) {
      lVar11 = 0;
      this_00 = (Instruction*)operator_new(0x60);
      lVar7 = *(long*)( param_2 + 8 );
      iVar1 = *(int*)( this + 0x1d0 );
      lVar4 = *(long*)param_2;
      *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
      *(uint*)( this_00 + 0xc ) = param_1;
      *(int*)( this + 0x1d0 ) = iVar1 + 1;
      *(int*)( this_00 + 8 ) = iVar1 + 1;
      *(undefined4*)( this_00 + 0x10 ) = 0x50;
      *(undefined4*)( this_00 + 0x38 ) = 0;
      *(undefined8*)( this_00 + 0x40 ) = 0;
      *(undefined4*)( this_00 + 0x48 ) = 0;
      *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
      Instruction::reserveOperands(this_00, lVar7 - lVar4 >> 2);
      lVar7 = *(long*)param_2;
      if (0 < (int)( *(long*)( param_2 + 8 ) - lVar7 >> 2 )) {
         do {
            uVar2 = *(undefined4*)( lVar7 + lVar11 * 4 );
            puVar5 = *(undefined4**)( this_00 + 0x20 );
            local_60 = (Instruction*)CONCAT44(local_60._4_4_, uVar2);
            if (puVar5 == *(undefined4**)( this_00 + 0x28 )) {
               std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar5, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
            }
 else {
               *puVar5 = uVar2;
               *(undefined4**)( this_00 + 0x20 ) = puVar5 + 1;
            }

            puVar6 = *(ulong**)( this_00 + 0x40 );
            if (puVar6 == *(ulong**)( this_00 + 0x50 )) {
               local_50 = *(undefined4*)( this_00 + 0x48 );
               local_58 = puVar6;
               std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar6, CONCAT44(uStack_4c, local_50), 1);
            }
 else {
               iVar1 = *(int*)( this_00 + 0x48 );
               if (iVar1 == 0x3f) {
                  *(undefined4*)( this_00 + 0x48 ) = 0;
                  *(ulong**)( this_00 + 0x40 ) = puVar6 + 1;
               }
 else {
                  *(int*)( this_00 + 0x48 ) = iVar1 + 1;
               }

               *puVar6 = *puVar6 | 1L << ( (byte)iVar1 & 0x3f );
            }

            lVar7 = *(long*)param_2;
            lVar11 = lVar11 + 1;
         }
 while ( (int)lVar11 < (int)( *(long*)( param_2 + 8 ) - lVar7 >> 2 ) );
      }

      local_60 = this_00;
      addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return ( ulong ) * (uint*)( this_00 + 8 );
      }

      goto LAB_00112802;
   }

   puVar3 = *(uint**)( param_2 + 8 );
   puVar10 = *(uint**)param_2;
   lVar7 = (long)puVar3 - (long)puVar10;
   if (0 < lVar7 >> 4) {
      lVar4 = *(long*)( this + 0x1b0 );
      puVar8 = puVar10 + ( lVar7 >> 4 ) * 4;
      do {
         if (*(int*)( *(long*)( lVar4 + ( ulong ) * puVar10 * 8 ) + 0x10 ) - 0x30U < 5) goto LAB_00112720;
         if (*(int*)( *(long*)( lVar4 + (ulong)puVar10[1] * 8 ) + 0x10 ) - 0x30U < 5) {
            bVar12 = puVar3 != puVar10 + 1;
            goto LAB_00112728;
         }

         if (*(int*)( *(long*)( lVar4 + (ulong)puVar10[2] * 8 ) + 0x10 ) - 0x30U < 5) {
            bVar12 = puVar3 != puVar10 + 2;
            goto LAB_00112728;
         }

         if (*(int*)( *(long*)( lVar4 + (ulong)puVar10[3] * 8 ) + 0x10 ) - 0x30U < 5) {
            bVar12 = puVar3 != puVar10 + 3;
            goto LAB_00112728;
         }

         puVar10 = puVar10 + 4;
      }
 while ( puVar10 != puVar8 );
      lVar7 = (long)puVar3 - (long)puVar10;
   }

   lVar7 = lVar7 >> 2;
   if (lVar7 == 2) {
      lVar7 = *(long*)( this + 0x1b0 );
      LAB_001126ee:if (4 < *(int*)( *(long*)( lVar7 + ( ulong ) * puVar10 * 8 ) + 0x10 ) - 0x30U) {
         puVar10 = puVar10 + 1;
         LAB_00112703:bVar12 = false;
         if (4 < *(int*)( *(long*)( lVar7 + ( ulong ) * puVar10 * 8 ) + 0x10 ) - 0x30U) goto LAB_00112728;
      }

      LAB_00112720:bVar12 = puVar3 != puVar10;
   }
 else {
      if (lVar7 == 3) {
         lVar7 = *(long*)( this + 0x1b0 );
         if (4 < *(int*)( *(long*)( lVar7 + ( ulong ) * puVar10 * 8 ) + 0x10 ) - 0x30U) {
            puVar10 = puVar10 + 1;
            goto LAB_001126ee;
         }

         goto LAB_00112720;
      }

      if (lVar7 == 1) {
         lVar7 = *(long*)( this + 0x1b0 );
         goto LAB_00112703;
      }

      bVar12 = false;
   }

   LAB_00112728:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar9 = makeCompositeConstant(this, param_1, param_2, bVar12);
      return uVar9;
   }

   LAB_00112802:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* spv::Builder::smearScalar(spv::Decoration, unsigned int, unsigned int) */uint spv::Builder::smearScalar(Builder *this, int param_2, uint param_3, uint param_4) {
   int iVar1;
   uint *puVar2;
   int iVar3;
   uint uVar4;
   Instruction *this_00;
   ulong *puVar5;
   ulong *puVar6;
   int iVar7;
   ulong uVar8;
   long in_FS_OFFSET;
   Instruction *local_60;
   ulong *local_58;
   undefined1 local_50[8];
   ulong *puStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar3 = getNumTypeConstituents(this, param_4);
   if (iVar3 == 1) goto LAB_001129a5;
   uVar8 = (ulong)iVar3;
   if (this[0x1e0] == (Builder)0x0) {
      this_00 = (Instruction*)operator_new(0x60);
      iVar1 = *(int*)( this + 0x1d0 );
      iVar7 = 0;
      *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
      *(uint*)( this_00 + 0xc ) = param_4;
      *(int*)( this + 0x1d0 ) = iVar1 + 1;
      *(int*)( this_00 + 8 ) = iVar1 + 1;
      *(undefined4*)( this_00 + 0x10 ) = 0x50;
      *(undefined4*)( this_00 + 0x38 ) = 0;
      *(undefined8*)( this_00 + 0x40 ) = 0;
      *(undefined4*)( this_00 + 0x48 ) = 0;
      *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
      Instruction::reserveOperands(this_00, uVar8);
      if (0 < iVar3) {
         do {
            while (true) {
               local_60 = (Instruction*)CONCAT44(local_60._4_4_, param_3);
               puVar2 = *(uint**)( this_00 + 0x20 );
               if (puVar2 == *(uint**)( this_00 + 0x28 )) {
                  std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar2, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
               }
 else {
                  *puVar2 = param_3;
                  *(uint**)( this_00 + 0x20 ) = puVar2 + 1;
               }

               puVar5 = *(ulong**)( this_00 + 0x40 );
               if (puVar5 != *(ulong**)( this_00 + 0x50 )) break;
               iVar7 = iVar7 + 1;
               local_50._0_4_ = *(undefined4*)( this_00 + 0x48 );
               local_58 = puVar5;
               std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar5, local_50, 1);
               if (iVar7 == iVar3) goto LAB_00112967;
            }
;
            iVar1 = *(int*)( this_00 + 0x48 );
            if (iVar1 == 0x3f) {
               *(undefined4*)( this_00 + 0x48 ) = 0;
               *(ulong**)( this_00 + 0x40 ) = puVar5 + 1;
            }
 else {
               *(int*)( this_00 + 0x48 ) = iVar1 + 1;
            }

            iVar7 = iVar7 + 1;
            *puVar5 = *puVar5 | 1L << ( (byte)iVar1 & 0x3f );
         }
 while ( iVar7 != iVar3 );
      }

      LAB_00112967:local_60 = this_00;
      addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
   }
 else {
      if (uVar8 >> 0x3d != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("cannot create std::vector larger than max_size()");
      }

      _local_50 = (undefined1[16])0x0;
      if (uVar8 == 0) {
         local_58 = (ulong*)0x0;
         puStack_48 = (ulong*)0x0;
         uVar8 = 0;
      }
 else {
         uVar8 = uVar8 * 4;
         local_58 = (ulong*)operator_new(uVar8);
         puStack_48 = (ulong*)( (long)local_58 + uVar8 );
         puVar5 = local_58;
         if (( (int)puStack_48 - (int)local_58 & 4U ) != 0) {
            *(uint*)local_58 = param_3;
            puVar5 = (ulong*)( (long)local_58 + 4 );
            if (puStack_48 == puVar5) goto LAB_00112a38;
         }

         do {
            *(uint*)puVar5 = param_3;
            puVar6 = puVar5 + 1;
            *(uint*)( (long)puVar5 + 4 ) = param_3;
            puVar5 = puVar6;
         }
 while ( puStack_48 != puVar6 );
      }

      LAB_00112a38:puVar5 = local_58;
      local_50 = (undefined1[8])puStack_48;
      uVar4 = makeCompositeConstant(this, param_4, (vector*)&local_58, *(int*)( *(long*)( *(long*)( this + 0x1b0 ) + (ulong)param_3 * 8 ) + 0x10 ) - 0x30U < 5);
      this_00 = *(Instruction**)( *(long*)( this + 0x1b0 ) + (ulong)uVar4 * 8 );
      if (puVar5 != (ulong*)0x0) {
         operator_delete(puVar5, uVar8);
      }

   }

   param_3 = *(uint*)( this_00 + 8 );
   if (( param_2 != 0x7fffffff ) && ( param_3 != 0 )) {
      addDecoration(this, param_3, param_2, 0xffffffff);
   }

   LAB_001129a5:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_3;
}
/* spv::Builder::promoteScalar(spv::Decoration, unsigned int&, unsigned int&) */void spv::Builder::promoteScalar(Builder *this, undefined4 param_2, uint *param_3, uint *param_4) {
   long lVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   undefined4 uVar5;
   uint uVar6;
   Builder *this_00;
   uint uVar7;
   long lVar8;
   uVar6 = 0;
   lVar8 = *(long*)( this + 0x1b0 );
   lVar1 = *(long*)( lVar8 + ( ulong ) * param_4 * 8 );
   if (lVar1 != 0) {
      uVar6 = *(uint*)( lVar1 + 0xc );
   }

   this_00 = this;
   iVar2 = getNumTypeConstituents(this, uVar6);
   lVar8 = *(long*)( lVar8 + ( ulong ) * param_3 * 8 );
   if (lVar8 == 0) {
      uVar7 = 0;
      iVar3 = getNumTypeConstituents(this_00, 0);
      iVar4 = iVar2 - iVar3;
   }
 else {
      uVar7 = *(uint*)( lVar8 + 0xc );
      iVar3 = getNumTypeConstituents(this_00, uVar7);
      iVar4 = iVar2 - iVar3;
   }

   if (iVar4 < 1) {
      if (iVar4 != 0) {
         uVar5 = makeVectorType(this, uVar6, iVar3);
         uVar6 = smearScalar(this, param_2, *param_4, uVar5);
         *param_4 = uVar6;
         return;
      }

   }
 else {
      uVar5 = makeVectorType(this, uVar7, iVar2);
      uVar6 = smearScalar(this, param_2, *param_3, uVar5);
      *param_3 = uVar6;
   }

   return;
}
/* spv::Builder::createConstructor(spv::Decoration, std::vector<unsigned int,
   std::allocator<unsigned int> > const&, unsigned int) */ulong spv::Builder::createConstructor(Builder *this, int param_2, undefined8 *param_3, uint param_4) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   int iVar4;
   uint uVar5;
   int iVar6;
   int iVar7;
   uint uVar8;
   long *plVar9;
   ulong uVar10;
   uint uVar11;
   ulong uVar12;
   Builder *pBVar13;
   long lVar14;
   uint *puVar15;
   long lVar16;
   uint *puVar17;
   long in_FS_OFFSET;
   uint local_c4;
   uint local_b8;
   int local_80;
   uint local_7c;
   undefined1 local_78[16];
   uint *local_68;
   undefined1 local_58[16];
   uint *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pBVar13 = this;
   uVar2 = getNumTypeConstituents(this, param_4);
   puVar17 = (uint*)param_3[1];
   puVar15 = (uint*)*param_3;
   if ((long)puVar17 - (long)puVar15 == 4) {
      plVar9 = *(long**)( pBVar13 + 0x1b0 );
      if (plVar9[*puVar15] != 0) {
         plVar9 = plVar9 + *(uint*)( plVar9[*puVar15] + 0xc );
      }

      if (( *(int*)( *plVar9 + 0x10 ) - 0x14U < 3 ) && ( 1 < uVar2 )) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar10 = smearScalar(this, param_2, ( ulong ) * puVar15, param_4);
            return uVar10;
         }

         goto LAB_00113245;
      }

   }

   local_68 = (uint*)0x0;
   local_78 = (undefined1[16])0x0;
   uVar3 = getScalarTypeId(this, param_4);
   if (puVar15 == puVar17) {
      uVar10 = 0;
   }
 else {
      local_c4 = 0;
      puVar17 = (uint*)0x0;
      uVar11 = 0;
      uVar12 = 0;
      do {
         uVar1 = puVar15[uVar12];
         uVar10 = (ulong)uVar1;
         plVar9 = *(long**)( this + 0x1b0 );
         lVar16 = plVar9[uVar10];
         lVar14 = uVar10 * 8;
         if (lVar16 == 0) {
            iVar4 = *(int*)( *plVar9 + 0x10 );
            if (( iVar4 - 0x14U < 3 ) || ( iVar4 == 0x20 )) goto LAB_00112cb5;
            if (iVar4 == 0x17) {
               uVar5 = 0;
               goto LAB_00112e33;
            }

            if (iVar4 == 0x18) {
               uVar5 = 0;
               iVar4 = getNumTypeConstituents(this, 0);
               goto LAB_00112f86;
            }

         }
 else {
            uVar5 = *(uint*)( lVar16 + 0xc );
            iVar4 = *(int*)( plVar9[uVar5] + 0x10 );
            if (( iVar4 - 0x14U < 3 ) || ( iVar4 == 0x20 )) {
               LAB_00112cb5:local_58._0_4_ = uVar1;
               if (uVar2 < 2) {
                  puVar15 = (uint*)local_78._0_8_;
                  if ((uint*)local_78._0_8_ == puVar17) goto LAB_00112db8;
                  goto LAB_00112cd9;
               }

               if (puVar17 == local_68) {
                  std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)local_78, puVar17, local_58);
                  puVar17 = (uint*)local_78._8_8_;
               }
 else {
                  *puVar17 = uVar1;
                  local_78._8_8_ = puVar17 + 1;
                  puVar17 = puVar17 + 1;
               }

               uVar11 = uVar11 + 1;
            }
 else if (iVar4 == 0x17) {
               LAB_00112e33:pBVar13 = this;
               iVar4 = getNumTypeConstituents(this, uVar5);
               local_80 = 0;
               if (uVar2 < uVar11 + iVar4) {
                  iVar4 = uVar2 - uVar11;
               }

               if (iVar4 != 0) {
                  iVar7 = 1;
                  do {
                     iVar6 = iVar7;
                     local_58 = (undefined1[16])0x0;
                     local_48 = (uint*)0x0;
                     std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)local_58, 0, &local_80);
                     local_7c = createRvalueSwizzle(pBVar13, param_2, uVar3, uVar1, (vector<unsigned_int,std::allocator<unsigned_int>>*)local_58);
                     uVar5 = local_7c;
                     if (1 < uVar2) {
                        uVar5 = local_c4;
                        if (local_68 == puVar17) {
                           std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)local_78, puVar17, &local_7c);
                           puVar17 = (uint*)local_78._8_8_;
                        }
 else {
                           *puVar17 = local_7c;
                           local_78._8_8_ = puVar17 + 1;
                           puVar17 = puVar17 + 1;
                        }

                     }

                     local_c4 = uVar5;
                     if ((void*)local_58._0_8_ != (void*)0x0) {
                        operator_delete((void*)local_58._0_8_, (long)local_48 - local_58._0_8_);
                     }

                     iVar7 = iVar6 + 1;
                     local_80 = iVar6;
                  }
 while ( iVar6 != iVar4 );
                  uVar12 = uVar12 & 0xffffffff;
                  uVar11 = uVar11 + iVar6;
                  this =
                  pBVar13;
               }

            }
 else if (iVar4 == 0x18) {
               iVar4 = getNumTypeConstituents(this, uVar5);
               LAB_00112f86:pBVar13 = this;
               uVar5 = getContainedTypeId(this, uVar5, 0);
               iVar6 = getNumTypeConstituents(pBVar13, uVar5);
               iVar7 = uVar2 - uVar11;
               if (uVar11 + iVar4 * iVar6 <= uVar2) {
                  iVar7 = iVar4 * iVar6;
               }

               if (iVar7 != 0) {
                  local_b8 = 0;
                  iVar4 = 0;
                  uVar5 = 0;
                  while (true) {
                     uVar8 = 0;
                     if (lVar16 != 0) {
                        uVar8 = *(uint*)( lVar16 + 0xc );
                     }

                     pBVar13 = this;
                     uVar8 = getContainedTypeId(this, uVar8, 0);
                     iVar6 = getNumTypeConstituents(pBVar13, uVar8);
                     if ((int)uVar5 < iVar6) {
                        uVar8 = uVar5 + 1;
                     }
 else {
                        local_b8 = local_b8 + 1;
                        uVar8 = 1;
                        uVar5 = 0;
                     }

                     local_58 = (undefined1[16])0x0;
                     local_7c = local_b8;
                     local_48 = (uint*)0x0;
                     std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>((vector<unsigned_int,std::allocator<unsigned_int>>*)local_58, 0, &local_7c);
                     local_7c = uVar5;
                     if (local_48 == (uint*)local_58._8_8_) {
                        std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>((vector<unsigned_int,std::allocator<unsigned_int>>*)local_58, local_48, &local_7c);
                     }
 else {
                        *(uint*)local_58._8_8_ = uVar5;
                        local_58._8_8_ = (uint*)( local_58._8_8_ + 4 );
                     }

                     puVar15 = local_48;
                     local_7c = createCompositeExtract(this, uVar1, uVar3, (vector*)local_58);
                     uVar5 = local_7c;
                     if (1 < uVar2) {
                        uVar5 = local_c4;
                        if (puVar17 == local_68) {
                           std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)local_78, puVar17, &local_7c);
                           puVar17 = (uint*)local_78._8_8_;
                        }
 else {
                           *puVar17 = local_7c;
                           local_78._8_8_ = puVar17 + 1;
                           puVar17 = puVar17 + 1;
                        }

                     }

                     local_c4 = uVar5;
                     if ((void*)local_58._0_8_ != (void*)0x0) {
                        operator_delete((void*)local_58._0_8_, (long)puVar15 - local_58._0_8_);
                     }

                     iVar4 = iVar4 + 1;
                     if (iVar4 == iVar7) break;
                     lVar16 = *(long*)( *(long*)( this + 0x1b0 ) + lVar14 );
                     uVar5 = uVar8;
                  }
;
                  uVar12 = uVar12 & 0xffffffff;
                  uVar11 = uVar11 + iVar4;
               }

            }

         }

         if (uVar2 <= uVar11) break;
         puVar15 = (uint*)*param_3;
         uVar12 = ( ulong )((int)uVar12 + 1);
      }
 while ( uVar12 < ( ulong )(param_3[1] - (long)puVar15 >> 2) );
      uVar10 = (ulong)local_c4;
      puVar15 = (uint*)local_78._0_8_;
      if ((uint*)local_78._0_8_ == puVar17) {
         LAB_00112db8:puVar15 = puVar17;
         uVar12 = (long)local_68 - (long)puVar15;
      }
 else {
         LAB_00112cd9:uVar2 = createCompositeConstruct(this, param_4, (vector*)local_78);
         puVar17 = local_68;
         uVar10 = (ulong)uVar2;
         if (( param_2 != 0x7fffffff ) && ( uVar2 != 0 )) {
            addDecoration(this, uVar2, param_2, 0xffffffff);
         }

         uVar12 = (long)puVar17 - (long)puVar15;
      }

      if (puVar15 != (uint*)0x0) {
         operator_delete(puVar15, uVar12);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar10;
   }

   LAB_00113245:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* spv::Builder::makeDoubleConstant(double, bool) */ulong spv::Builder::makeDoubleConstant(Builder *this, double param_1, bool param_2) {
   int iVar1;
   undefined8 *puVar2;
   undefined4 uVar3;
   Instruction *this_00;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar4;
   ulong uVar5;
   undefined4 uVar6;
   long in_FS_OFFSET;
   Instruction *local_50;
   Instruction *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2) {
      uVar3 = makeFloatType(this, 0x40);
      uVar6 = 0x32;
   }
 else {
      uVar3 = makeFloatType(this, 0x40);
      uVar5 = findScalarConstant(this, 0x16, 0x2b, uVar3, (ulong)param_1 & 0xffffffff, (ulong)param_1 >> 0x20);
      if ((int)uVar5 != 0) goto LAB_00113381;
      uVar6 = 0x2b;
   }

   this_00 = (Instruction*)operator_new(0x60);
   iVar1 = *(int*)( this + 0x1d0 );
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_00 + 0xc ) = uVar3;
   *(int*)( this + 0x1d0 ) = iVar1 + 1;
   *(int*)( this_00 + 8 ) = iVar1 + 1;
   *(undefined4*)( this_00 + 0x10 ) = uVar6;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   local_50 = this_00;
   Instruction::reserveOperands(this_00, 2);
   Instruction::addImmediateOperand(this_00, SUB84(param_1, 0));
   Instruction::addImmediateOperand(this_00, ( uint )((ulong)param_1 >> 0x20));
   local_48 = this_00;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_48);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
   local_48 = (Instruction*)CONCAT44(local_48._4_4_, 0x16);
   pvVar4 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x318 ), (uint*)&local_48);
   puVar2 = *(undefined8**)( pvVar4 + 8 );
   if (puVar2 == *(undefined8**)( pvVar4 + 0x10 )) {
      std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar4, puVar2, &local_50);
   }
 else {
      *puVar2 = this_00;
      *(undefined8**)( pvVar4 + 8 ) = puVar2 + 1;
   }

   Module::mapInstruction((Module*)( this + 400 ), this_00);
   uVar5 = ( ulong ) * (uint*)( this_00 + 8 );
   LAB_00113381:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* spv::Builder::createMatrixConstructor(spv::Decoration, std::vector<unsigned int,
   std::allocator<unsigned int> > const&, unsigned int) */int spv::Builder::createMatrixConstructor(Builder *this, int param_2, undefined8 *param_3, uint param_4) {
   undefined8 uVar1;
   uint uVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   int iVar6;
   uint uVar7;
   uint uVar8;
   int iVar9;
   uint uVar10;
   undefined4 uVar11;
   ulong uVar12;
   uint *puVar13;
   int iVar14;
   long *plVar15;
   long lVar16;
   uint *puVar17;
   void *pvVar18;
   long lVar19;
   uint *puVar20;
   Builder *pBVar21;
   uint uVar22;
   long *plVar23;
   int *piVar24;
   int *piVar25;
   ulong uVar26;
   long lVar27;
   long in_FS_OFFSET;
   undefined8 extraout_XMM0_Qa;
   undefined8 extraout_XMM0_Qa_00;
   undefined8 extraout_XMM0_Qb;
   undefined8 extraout_XMM0_Qb_00;
   ulong local_140;
   vector *local_110;
   uint local_108;
   uint local_f0;
   uint local_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined1 local_c8[16];
   int *local_b8;
   undefined1 local_a8[16];
   uint *local_98;
   uint local_88[10];
   uint local_60;
   uint local_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pBVar21 = this;
   uVar3 = getScalarTypeId(this, param_4);
   uVar12 = (ulong)uVar3;
   uVar4 = getNumTypeConstituents(pBVar21, param_4);
   uVar5 = getContainedTypeId(pBVar21, param_4, 0);
   iVar6 = getNumTypeConstituents(pBVar21, uVar5);
   plVar23 = *(long**)( pBVar21 + 0x1b0 );
   iVar9 = **(int**)( plVar23[uVar12 & 0xffffffff] + 0x18 );
   uVar5 = *(uint*)*param_3;
   lVar27 = (ulong)uVar5 * 8;
   if (plVar23[uVar5] == 0) {
      if (( *(int*)( *plVar23 + 0x10 ) == 0x18 ) && ( iVar14 = getNumTypeConstituents(pBVar21, 0) ),(int)uVar4 <= iVar14) {
         uVar7 = 0;
         goto LAB_00113881;
      }

   }
 else {
      uVar7 = *(uint*)( plVar23[uVar5] + 0xc );
      if (( *(int*)( plVar23[uVar7] + 0x10 ) == 0x18 ) && ( iVar14 = getNumTypeConstituents(pBVar21, uVar7) ),(int)uVar4 <= iVar14) {
         LAB_00113881:pBVar21 = this;
         uVar7 = getContainedTypeId(this, uVar7, 0);
         iVar14 = getNumTypeConstituents(pBVar21, uVar7);
         if (iVar6 <= iVar14) {
            iVar9 = 0;
            local_d8 = 0;
            local_e8 = (undefined1[16])0x0;
            if (0 < iVar6) {
               do {
                  local_a8._0_4_ = iVar9;
                  iVar9 = iVar9 + 1;
                  std::vector<unsigned_int,std::allocator<unsigned_int>>::emplace_back<unsigned_int>((vector<unsigned_int,std::allocator<unsigned_int>>*)local_e8, (uint*)local_a8);
               }
 while ( iVar9 != iVar6 );
            }

            local_b8 = (int*)0x0;
            local_c8 = (undefined1[16])0x0;
            if (0 < (int)uVar4) {
               uVar3 = 0;
               do {
                  local_a8 = (undefined1[16])0x0;
                  local_98 = (uint*)0x0;
                  local_ec = uVar3;
                  std::vector<unsigned_int,std::allocator<unsigned_int>>::emplace_back<unsigned_int>((vector<unsigned_int,std::allocator<unsigned_int>>*)local_a8, &local_ec);
                  local_f0 = createCompositeExtract(this, uVar5, uVar7, (vector*)local_a8);
                  if (( local_f0 != 0 ) && ( param_2 != 0x7fffffff )) {
                     addDecoration(this, local_f0, param_2, 0xffffffff);
                  }

                  uVar8 = 0;
                  if (*(long*)( *(long*)( this + 0x1b0 ) + lVar27 ) != 0) {
                     uVar8 = *(uint*)( *(long*)( *(long*)( this + 0x1b0 ) + lVar27 ) + 0xc );
                  }

                  pBVar21 = this;
                  uVar8 = getContainedTypeId(this, uVar8, 0);
                  iVar9 = getNumTypeConstituents(pBVar21, uVar8);
                  if (iVar6 == iVar9) {
                     std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back((vector<unsigned_int,std::allocator<unsigned_int>>*)local_c8, &local_f0);
                  }
 else {
                     local_ec = createRvalueSwizzle();
                     std::vector<unsigned_int,std::allocator<unsigned_int>>::emplace_back<unsigned_int>((vector<unsigned_int,std::allocator<unsigned_int>>*)local_c8, &local_ec);
                  }

                  if ((void*)local_a8._0_8_ != (void*)0x0) {
                     operator_delete((void*)local_a8._0_8_, (long)local_98 - local_a8._0_8_);
                  }

                  uVar3 = uVar3 + 1;
               }
 while ( uVar4 != uVar3 );
            }

            local_110 = (vector*)local_c8;
            uVar11 = createCompositeConstruct(this, param_4, local_110);
            iVar9 = setPrecision(this, uVar11, param_2);
            std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector((vector<unsigned_int,std::allocator<unsigned_int>>*)local_110);
            std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector((vector<unsigned_int,std::allocator<unsigned_int>>*)local_e8);
            goto LAB_00113cd0;
         }

      }

   }

   if (iVar9 == 0x40) {
      uVar7 = makeDoubleConstant(this, _LC32, false);
      uVar5 = makeDoubleConstant(this, 0.0, false);
   }
 else {
      uVar7 = makeFloatConstant(this, _LC0, false);
      uVar5 = makeFloatConstant(this, 0.0, false);
   }

   puVar13 = local_88;
   iVar9 = 0;
   do {
      iVar14 = iVar9 + 1;
      *puVar13 = ~-(uint)(iVar9 == (int)_LC1) & uVar5 | uVar7 & -(uint)(iVar9 == (int)_LC1);
      puVar13[1] = ~-(uint)(iVar9 == _LC1._4_4_) & uVar5 | uVar7 & -(uint)(iVar9 == _LC1._4_4_);
      puVar13[2] = ~-(uint)(iVar9 == _UNK_0011c6c8) & uVar5 | uVar7 & -(uint)(iVar9 == _UNK_0011c6c8);
      puVar13[3] = ~-(uint)(iVar9 == _UNK_0011c6cc) & uVar5 | uVar7 & -(uint)(iVar9 == _UNK_0011c6cc);
      puVar13 = puVar13 + 4;
      iVar9 = iVar14;
   }
 while ( iVar14 != 4 );
   puVar13 = (uint*)*param_3;
   plVar23 = *(long**)( this + 0x1b0 );
   uVar5 = *puVar13;
   uVar12 = (ulong)uVar5;
   lVar27 = plVar23[uVar12];
   if (param_3[1] - (long)puVar13 == 4) {
      uVar7 = uVar5;
      uVar8 = uVar5;
      uVar22 = uVar5;
      uVar2 = uVar5;
      if (lVar27 == 0) {
         if (2 < *(int*)( *plVar23 + 0x10 ) - 0x14U) goto LAB_00113a7c;
      }
 else if (2 < *(int*)( plVar23[*(uint*)( lVar27 + 0xc )] + 0x10 ) - 0x14U) goto LAB_0011354e;
      LAB_001137ff:local_4c = uVar2;
      local_60 = uVar22;
      local_88[5] = uVar8;
      local_88[0] = uVar7;
      local_110 = (vector*)local_c8;
      pBVar21 = this;
      uVar5 = getContainedTypeId(this, param_4, 0);
      local_c8._8_8_ = extraout_XMM0_Qb;
      local_c8._0_8_ = extraout_XMM0_Qa;
      local_b8 = (int*)0x0;
      if ((int)uVar4 < 1) {
         iVar9 = createCompositeConstruct(pBVar21, param_4, local_110);
         if (( iVar9 != 0 ) && ( param_2 != 0x7fffffff )) {
            addDecoration(this, iVar9, param_2, 0xffffffff);
         }

         goto LAB_00113cd0;
      }

   }
 else {
      if (lVar27 == 0) {
         LAB_00113a7c:uVar7 = 0;
         plVar15 = plVar23;
      }
 else {
         LAB_0011354e:uVar7 = *(uint*)( lVar27 + 0xc );
         plVar15 = plVar23 + uVar7;
      }

      if (*(int*)( *plVar15 + 0x10 ) == 0x18) {
         uVar10 = getNumTypeConstituents(this, uVar7);
         if ((int)uVar4 <= (int)uVar10) {
            uVar10 = uVar4;
         }

         pBVar21 = this;
         uVar7 = getContainedTypeId(this, uVar7, 0);
         iVar9 = getNumTypeConstituents(pBVar21, uVar7);
         if (iVar6 <= iVar9) {
            iVar9 = iVar6;
         }

         uVar7 = local_88[0];
         uVar8 = local_88[5];
         uVar22 = local_60;
         uVar2 = local_4c;
         if (0 < (int)uVar10) {
            local_108 = 0;
            puVar13 = local_88;
            do {
               local_98 = (uint*)0x0;
               local_c8._0_4_ = local_108;
               local_a8 = (undefined1[16])0x0;
               std::vector<unsigned_int,std::allocator<unsigned_int>>::emplace_back<unsigned_int>((vector<unsigned_int,std::allocator<unsigned_int>>*)local_a8, (uint*)local_c8);
               puVar17 = local_98;
               if (0 < iVar9) {
                  lVar27 = 0;
                  puVar20 = (uint*)local_a8._8_8_;
                  do {
                     local_c8._0_4_ = (uint)lVar27;
                     if (puVar20 == puVar17) {
                        std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>((vector<unsigned_int,std::allocator<unsigned_int>>*)local_a8, puVar20, local_c8);
                        puVar20 = (uint*)( local_a8._8_8_ + -4 );
                        puVar17 = local_98;
                     }
 else {
                        *puVar20 = (uint)lVar27;
                        local_a8._8_8_ = puVar20 + 1;
                     }

                     uVar7 = createCompositeExtract(this, uVar5, uVar3, (vector*)local_a8);
                     local_a8._8_8_ = puVar20;
                     puVar13[lVar27] = uVar7;
                     if (( uVar7 != 0 ) && ( param_2 != 0x7fffffff )) {
                        addDecoration(this, uVar7, param_2, 0xffffffff);
                     }

                     lVar27 = lVar27 + 1;
                  }
 while ( iVar9 != lVar27 );
               }

               if ((void*)local_a8._0_8_ != (void*)0x0) {
                  operator_delete((void*)local_a8._0_8_, (long)puVar17 - local_a8._0_8_);
               }

               local_108 = local_108 + 1;
               puVar13 = puVar13 + 4;
               uVar7 = local_88[0];
               uVar8 = local_88[5];
               uVar22 = local_60;
               uVar2 = local_4c;
            }
 while ( local_108 != uVar10 );
         }

         goto LAB_001137ff;
      }

      uVar7 = local_88[0];
      uVar8 = local_88[5];
      uVar22 = local_60;
      uVar2 = local_4c;
      if ((int)( param_3[1] - (long)puVar13 >> 2 ) < 1) goto LAB_001137ff;
      uVar5 = 0;
      lVar16 = 0;
      lVar19 = 0;
      if ((int)uVar4 < 1) goto LAB_001137ff;
      while (true) {
         uVar7 = 0;
         uVar26 = uVar12;
         while (true) {
            uVar22 = (uint)uVar12;
            uVar8 = 0;
            if (lVar27 != 0) {
               uVar8 = *(uint*)( lVar27 + 0xc );
            }

            iVar9 = getNumTypeConstituents(this, uVar8);
            if (iVar9 <= (int)uVar7) break;
            if (iVar9 != 1) {
               uVar8 = createCompositeExtract(this, uVar22, uVar3, uVar7);
               uVar26 = (ulong)uVar8;
               if (( uVar8 != 0 ) && ( param_2 != 0x7fffffff )) {
                  addDecoration(this, uVar8, param_2, 0xffffffff);
               }

            }

            iVar9 = (int)lVar16 + 1;
            local_88[lVar16 + (long)(int)uVar5 * 4] = (uint)uVar26;
            if (iVar9 == iVar6) {
               uVar5 = uVar5 + 1;
               iVar9 = 0;
            }

            if (uVar5 == uVar4) goto LAB_00113ac0;
            puVar13 = (uint*)*param_3;
            uVar7 = uVar7 + 1;
            lVar16 = (long)iVar9;
            plVar23 = *(long**)( this + 0x1b0 );
            uVar12 = (ulong)puVar13[lVar19];
            lVar27 = plVar23[uVar12];
         }
;
         if ((int)( param_3[1] - (long)puVar13 >> 2 ) <= (int)lVar19 + 1 || (int)uVar4 <= (int)uVar5) break;
         uVar12 = (ulong)puVar13[lVar19 + 1];
         lVar27 = plVar23[uVar12];
         lVar19 = lVar19 + 1;
      }
;
      LAB_00113ac0:uVar5 = getContainedTypeId(this, param_4, 0);
      local_c8._8_8_ = extraout_XMM0_Qb_00;
      local_c8._0_8_ = extraout_XMM0_Qa_00;
   }

   local_110 = (vector*)local_c8;
   local_b8 = (int*)0x0;
   lVar27 = 0;
   puVar13 = local_88 + iVar6;
   piVar25 = (int*)0x0;
   piVar24 = (int*)0x0;
   while (true) {
      local_98 = (uint*)0x0;
      local_a8 = (undefined1[16])0x0;
      if (iVar6 < 1) {
         local_140 = 0;
         pvVar18 = (void*)0x0;
      }
 else {
         puVar20 = (uint*)0x0;
         puVar17 = local_88 + lVar27;
         local_a8._8_8_ = (uint*)0x0;
         while (true) {
            if ((uint*)local_a8._8_8_ == puVar20) {
               std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)local_a8, puVar20, puVar17);
               puVar20 = local_98;
            }
 else {
               *(uint*)local_a8._8_8_ = *puVar17;
               local_a8._8_8_ = (uint*)( local_a8._8_8_ + 4 );
            }

            if (puVar13 == puVar17 + 1) break;
            puVar17 = puVar17 + 1;
         }
;
         local_140 = (long)puVar20 - local_a8._0_8_;
         pvVar18 = (void*)local_a8._0_8_;
      }

      iVar9 = createCompositeConstruct(this, uVar5, (vector*)local_a8);
      local_e8._0_4_ = iVar9;
      if (( iVar9 != 0 ) && ( param_2 != 0x7fffffff )) {
         addDecoration(this, iVar9, param_2, 0xffffffff);
      }

      if (piVar24 == piVar25) {
         std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)local_110, piVar25, local_e8);
         piVar25 = local_b8;
      }
 else {
         *piVar24 = iVar9;
         local_c8._8_8_ = piVar24 + 1;
      }

      if (pvVar18 != (void*)0x0) {
         operator_delete(pvVar18, local_140);
      }

      puVar13 = puVar13 + 4;
      lVar27 = lVar27 + 4;
      if ((long)(int)uVar4 * 4 == lVar27) break;
      piVar24 = (int*)local_c8._8_8_;
   }
;
   uVar1 = local_c8._0_8_;
   iVar9 = createCompositeConstruct(this, param_4, local_110);
   if (( iVar9 != 0 ) && ( param_2 != 0x7fffffff )) {
      addDecoration(this, iVar9, param_2, 0xffffffff);
   }

   if ((void*)uVar1 != (void*)0x0) {
      operator_delete((void*)uVar1, (long)piVar25 - uVar1);
   }

   LAB_00113cd0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeFloat16Constant(float, bool) */ulong spv::Builder::makeFloat16Constant(Builder *this, float param_1, bool param_2) {
   int iVar1;
   undefined8 *puVar2;
   undefined4 uVar3;
   Instruction *this_00;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar4;
   ulong uVar5;
   uint uVar6;
   undefined4 uVar7;
   long in_FS_OFFSET;
   ushort local_46;
   float local_44;
   Instruction *local_40;
   Instruction *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_44 = param_1;
   if (param_2) {
      uVar7 = 0x32;
      uVar3 = makeFloatType(this, 0x10);
      local_46 = 0;
      spvutils::HexFloat<spvutils::FloatProxy<float>,spvutils::HexFloatTraits<spvutils::FloatProxy<float>>>::castTo<spvutils::HexFloat<spvutils::FloatProxy<spvutils::Float16>,spvutils::HexFloatTraits<spvutils::FloatProxy<spvutils::Float16>>>>((HexFloat<spvutils::FloatProxy<float>,spvutils::HexFloatTraits<spvutils::FloatProxy<float>>>*)&local_44, &local_46, 0);
      uVar6 = (uint)local_46;
   }
 else {
      uVar7 = 0x2b;
      uVar3 = makeFloatType(this, 0x10);
      local_46 = 0;
      spvutils::HexFloat<spvutils::FloatProxy<float>,spvutils::HexFloatTraits<spvutils::FloatProxy<float>>>::castTo<spvutils::HexFloat<spvutils::FloatProxy<spvutils::Float16>,spvutils::HexFloatTraits<spvutils::FloatProxy<spvutils::Float16>>>>((HexFloat<spvutils::FloatProxy<float>,spvutils::HexFloatTraits<spvutils::FloatProxy<float>>>*)&local_44, &local_46, 0);
      uVar6 = (uint)local_46;
      uVar5 = findScalarConstant(this, 0x16, 0x2b, uVar3, uVar6);
      if ((int)uVar5 != 0) goto LAB_00113f4f;
   }

   this_00 = (Instruction*)operator_new(0x60);
   iVar1 = *(int*)( this + 0x1d0 );
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_00 + 0xc ) = uVar3;
   *(int*)( this + 0x1d0 ) = iVar1 + 1;
   *(int*)( this_00 + 8 ) = iVar1 + 1;
   *(undefined4*)( this_00 + 0x10 ) = uVar7;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   local_40 = this_00;
   Instruction::addImmediateOperand(this_00, uVar6);
   local_38 = this_00;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_38);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
   local_38 = (Instruction*)CONCAT44(local_38._4_4_, 0x16);
   pvVar4 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x318 ), (uint*)&local_38);
   puVar2 = *(undefined8**)( pvVar4 + 8 );
   if (puVar2 == *(undefined8**)( pvVar4 + 0x10 )) {
      std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar4, puVar2, &local_40);
   }
 else {
      *puVar2 = this_00;
      *(undefined8**)( pvVar4 + 8 ) = puVar2 + 1;
   }

   Module::mapInstruction((Module*)( this + 400 ), this_00);
   uVar5 = ( ulong ) * (uint*)( this_00 + 8 );
   LAB_00113f4f:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar5;
}
/* spv::Builder::makeFpConstant(unsigned int, double, bool) */undefined8 spv::Builder::makeFpConstant(uint param_1, double param_2, bool param_3) {
   int iVar1;
   uint uVar2;
   undefined8 extraout_RAX;
   undefined8 extraout_RAX_00;
   undefined8 extraout_RAX_01;
   undefined1 in_DL;
   undefined7 in_register_00000031;
   undefined4 in_register_0000003c;
   undefined4 extraout_XMM0_Da;
   undefined4 extraout_XMM0_Db;
   uVar2 = getScalarTypeId((Builder*)CONCAT44(in_register_0000003c, param_1), (uint)CONCAT71(in_register_00000031, param_3));
   iVar1 = **(int**)( *(long*)( *(long*)( CONCAT44(in_register_0000003c, param_1) + 0x1b0 ) + (ulong)uVar2 * 8 ) + 0x18 );
   if (iVar1 == 0x20) {
      makeFloatConstant((Builder*)CONCAT44(in_register_0000003c, param_1), (float)(double)CONCAT44(extraout_XMM0_Db, extraout_XMM0_Da), (bool)in_DL);
      return extraout_RAX_01;
   }

   if (iVar1 != 0x40) {
      if (iVar1 == 0x10) {
         makeFloat16Constant((Builder*)CONCAT44(in_register_0000003c, param_1), (float)(double)CONCAT44(extraout_XMM0_Db, extraout_XMM0_Da), (bool)in_DL);
         return extraout_RAX;
      }

      return 0;
   }

   makeDoubleConstant((Builder*)CONCAT44(in_register_0000003c, param_1), (double)CONCAT44(extraout_XMM0_Db, extraout_XMM0_Da), (bool)in_DL);
   return extraout_RAX_00;
}
/* spv::Builder::makeMemberDebugType(unsigned int, spv::Builder::DebugTypeLoc const&) */undefined4 spv::Builder::makeMemberDebugType(Builder *this, uint param_1, DebugTypeLoc *param_2) {
   int iVar1;
   undefined8 *puVar2;
   Builder *pBVar3;
   undefined4 uVar4;
   uint uVar5;
   Instruction *this_00;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar6;
   Builder *pBVar7;
   Builder *pBVar8;
   Builder *pBVar9;
   long in_FS_OFFSET;
   bool bVar10;
   uint local_4c[3];
   Instruction *local_40;
   Instruction *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_4c[0] = param_1;
   this_00 = (Instruction*)operator_new(0x60);
   uVar4 = makeVoidType(this);
   *(undefined4*)( this_00 + 0x10 ) = 0xc;
   iVar1 = *(int*)( this + 0x1d0 );
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_00 + 0xc ) = uVar4;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(int*)( this + 0x1d0 ) = iVar1 + 1;
   *(int*)( this_00 + 8 ) = iVar1 + 1;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   local_40 = this_00;
   Instruction::reserveOperands(this_00, 10);
   Instruction::addIdOperand(this_00, *(uint*)( this + 0x50 ));
   Instruction::addImmediateOperand(this_00, 0xb);
   uVar5 = getStringId(this, (string*)param_2);
   Instruction::addIdOperand(this_00, uVar5);
   pBVar9 = this + 0x520;
   pBVar3 = *(Builder**)( this + 0x528 );
   pBVar7 = pBVar9;
   if (*(Builder**)( this + 0x528 ) != (Builder*)0x0) {
      do {
         while (true) {
            pBVar8 = pBVar3;
            if (*(uint*)( pBVar8 + 0x20 ) < local_4c[0]) break;
            pBVar3 = *(Builder**)( pBVar8 + 0x10 );
            pBVar7 = pBVar8;
            if (*(Builder**)( pBVar8 + 0x10 ) == (Builder*)0x0) goto LAB_00114180;
         }
;
         pBVar3 = *(Builder**)( pBVar8 + 0x18 );
      }
 while ( *(Builder**)( pBVar8 + 0x18 ) != (Builder*)0x0 );
      LAB_00114180:bVar10 = pBVar9 != pBVar7;
      pBVar9 = pBVar7;
      if (( bVar10 ) && ( *(uint*)( pBVar7 + 0x20 ) <= local_4c[0] )) goto LAB_00114197;
   }

   local_38 = (Instruction*)local_4c;
   pBVar7 = (Builder*)std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<unsigned_int_const&>,std::tuple<>>(this + 0x518, pBVar9, &local_38);
   LAB_00114197:Instruction::addIdOperand(this_00, *(uint*)( pBVar7 + 0x24 ));
   uVar5 = makeDebugSource(this, *(uint*)( this + 0x88 ));
   Instruction::addIdOperand(this_00, uVar5);
   uVar5 = makeUintConstant(this, *(uint*)( param_2 + 0x20 ), false);
   Instruction::addIdOperand(this_00, uVar5);
   uVar5 = makeUintConstant(this, *(uint*)( param_2 + 0x24 ), false);
   Instruction::addIdOperand(this_00, uVar5);
   uVar5 = makeUintConstant(this, 0, false);
   Instruction::addIdOperand(this_00, uVar5);
   uVar5 = makeUintConstant(this, 0, false);
   Instruction::addIdOperand(this_00, uVar5);
   uVar5 = makeUintConstant(this, 3, false);
   Instruction::addIdOperand(this_00, uVar5);
   local_38 = (Instruction*)CONCAT44(local_38._4_4_, 0xb);
   pvVar6 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x3c0 ), (uint*)&local_38);
   puVar2 = *(undefined8**)( pvVar6 + 8 );
   if (puVar2 == *(undefined8**)( pvVar6 + 0x10 )) {
      std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar6, puVar2, &local_40);
   }
 else {
      *puVar2 = this_00;
      *(undefined8**)( pvVar6 + 8 ) = puVar2 + 1;
   }

   local_38 = this_00;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_38);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_38);
   Module::mapInstruction((Module*)( this + 400 ), this_00);
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return *(undefined4*)( this_00 + 8 );
}
/* spv::Builder::createDebugLocalVariable(unsigned int, char const*, unsigned long) */undefined4 spv::Builder::createDebugLocalVariable(Builder *this, uint param_1, char *param_2, ulong param_3) {
   int iVar1;
   undefined4 uVar2;
   uint uVar3;
   Instruction *this_00;
   Instruction *__n;
   long lVar4;
   Instruction **ppIVar5;
   long in_FS_OFFSET;
   Instruction *local_70;
   Instruction **local_68;
   Instruction *local_60;
   Instruction *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   uVar2 = makeVoidType(this);
   *(undefined4*)( this_00 + 0x10 ) = 0xc;
   iVar1 = *(int*)( this + 0x1d0 );
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_00 + 0xc ) = uVar2;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(int*)( this + 0x1d0 ) = iVar1 + 1;
   *(int*)( this_00 + 8 ) = iVar1 + 1;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, 9);
   Instruction::addIdOperand(this_00, *(uint*)( this + 0x50 ));
   Instruction::addImmediateOperand(this_00, 0x1a);
   local_68 = local_58;
   if (param_2 == (char*)0x0) {
      /* WARNING: Subroutine does not return */
      std::__throw_logic_error("basic_string: construction from null is not valid");
   }

   __n = (Instruction*)strlen(param_2);
   local_70 = __n;
   if (__n < (Instruction*)0x10) {
      ppIVar5 = local_58;
      if (__n == (Instruction*)0x1) {
         local_58[0] = (Instruction*)CONCAT71(local_58[0]._1_7_, *param_2);
         goto LAB_00114409;
      }

      if (__n == (Instruction*)0x0) goto LAB_00114409;
   }
 else {
      local_68 = (Instruction**)std::__cxx11::string::_M_create((ulong*)&local_68, ( ulong ) & local_70);
      local_58[0] = local_70;
      ppIVar5 = local_68;
   }

   memcpy(ppIVar5, param_2, (size_t)__n);
   ppIVar5 = local_68;
   LAB_00114409:*(Instruction*)( (long)ppIVar5 + (long)local_70 ) = (Instruction)0x0;
   local_60 = local_70;
   uVar3 = getStringId(this, (string*)&local_68);
   Instruction::addIdOperand(this_00, uVar3);
   if (local_68 != local_58) {
      operator_delete(local_68, ( ulong )(local_58[0] + 1));
   }

   Instruction::addIdOperand(this_00, param_1);
   uVar3 = makeDebugSource(this, *(uint*)( this + 0x88 ));
   Instruction::addIdOperand(this_00, uVar3);
   uVar3 = makeUintConstant(this, *(uint*)( this + 0x84 ), false);
   Instruction::addIdOperand(this_00, uVar3);
   uVar3 = makeUintConstant(this, 0, false);
   Instruction::addIdOperand(this_00, uVar3);
   lVar4 = *(long*)( this + 200 );
   if (lVar4 == *(long*)( this + 0xd0 )) {
      lVar4 = *(long*)( *(long*)( this + 0xe0 ) + -8 ) + 0x200;
   }

   Instruction::addIdOperand(this_00, *(uint*)( lVar4 + -4 ));
   uVar3 = makeUintConstant(this, 4, false);
   Instruction::addIdOperand(this_00, uVar3);
   if (param_3 != 0) {
      uVar3 = makeUintConstant(this, (uint)param_3, false);
      Instruction::addIdOperand(this_00, uVar3);
   }

   local_70 = this_00;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_70);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_70);
   Module::mapInstruction((Module*)( this + 400 ), this_00);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return *(undefined4*)( this_00 + 8 );
}
/* spv::Builder::makeCompositeDebugType(std::vector<unsigned int, std::allocator<unsigned int> >
   const&, char const*, spv::NonSemanticShaderDebugInfo100DebugCompositeType, bool) */undefined4 spv::Builder::makeCompositeDebugType(Builder *this, undefined8 *param_1, char *param_2, uint param_4, char param_5) {
   Builder *pBVar1;
   Builder *pBVar2;
   int iVar3;
   uint *puVar4;
   undefined4 *puVar5;
   Builder *pBVar6;
   undefined4 uVar7;
   uint uVar8;
   Builder *pBVar9;
   Instruction *this_00;
   Instruction **ppIVar10;
   long *plVar11;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *this_01;
   DebugTypeLoc *pDVar12;
   Instruction ***pppIVar13;
   ulong uVar14;
   ulong uVar15;
   Instruction ***pppIVar16;
   undefined4 *puVar17;
   Builder *pBVar18;
   long lVar19;
   Instruction ***pppIVar20;
   ulong uVar21;
   uint *puVar22;
   undefined4 *puVar23;
   long in_FS_OFFSET;
   undefined4 *local_f0;
   Instruction *local_c8;
   Instruction *local_c0;
   Instruction **local_b8;
   undefined4 local_b0;
   undefined4 uStack_ac;
   undefined1 local_a8[16];
   long local_98;
   string local_88[32];
   Instruction ***local_68;
   Instruction **local_60;
   Instruction **local_58[3];
   long local_40;
   puVar22 = (uint*)*param_1;
   puVar4 = (uint*)param_1[1];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a8 = (undefined1[16])0x0;
   local_98 = 0;
   if (puVar22 == puVar4) {
      local_f0 = (undefined4*)0x0;
      uVar21 = 0xb;
      puVar17 = (undefined4*)0x0;
   }
 else {
      pBVar2 = this + 0x520;
      do {
         uVar8 = *puVar22;
         local_c0 = (Instruction*)CONCAT44(local_c0._4_4_, uVar8);
         pBVar6 = *(Builder**)( this + 0x528 );
         pBVar18 = pBVar2;
         pBVar9 = pBVar2;
         if (*(Builder**)( this + 0x528 ) == (Builder*)0x0) {
            LAB_001146ac:local_b8 = &local_c0;
            pBVar9 = (Builder*)std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<unsigned_int_const&>,std::tuple<>>(this + 0x518, pBVar9, &local_b8);
         }
 else {
            do {
               while (true) {
                  pBVar9 = pBVar6;
                  pBVar1 = pBVar9 + 0x18;
                  if (uVar8 <= *(uint*)( pBVar9 + 0x20 )) break;
                  pBVar6 = *(Builder**)pBVar1;
                  pBVar9 = pBVar18;
                  if (*(Builder**)pBVar1 == (Builder*)0x0) goto LAB_001146a1;
               }
;
               pBVar6 = *(Builder**)( pBVar9 + 0x10 );
               pBVar18 = pBVar9;
            }
 while ( *(Builder**)( pBVar9 + 0x10 ) != (Builder*)0x0 );
            LAB_001146a1:if (( pBVar2 == pBVar9 ) || ( uVar8 < *(uint*)( pBVar9 + 0x20 ) )) goto LAB_001146ac;
         }

         if (*(int*)( pBVar9 + 0x24 ) != 0) {
            pDVar12 = (DebugTypeLoc*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,spv::Builder::DebugTypeLoc>,std::allocator<std::pair<unsigned_int_const,spv::Builder::DebugTypeLoc>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,spv::Builder::DebugTypeLoc>,std::allocator<std::pair<unsigned_int_const,spv::Builder::DebugTypeLoc>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 8 ), (uint*)&local_c0);
            uVar7 = makeMemberDebugType(this, (uint)local_c0, pDVar12);
            local_b8 = (Instruction**)CONCAT44(local_b8._4_4_, uVar7);
            std::vector<unsigned_int,std::allocator<unsigned_int>>::emplace_back<unsigned_int>((vector<unsigned_int,std::allocator<unsigned_int>>*)local_a8, (uint*)&local_b8);
         }

         puVar22 = puVar22 + 1;
      }
 while ( puVar4 != puVar22 );
      local_f0 = (undefined4*)local_a8._0_8_;
      uVar21 = ( (long)( local_a8._8_8_ - local_a8._0_8_ ) >> 2 ) + 0xb;
      puVar17 = (undefined4*)local_a8._8_8_;
   }

   this_00 = (Instruction*)operator_new(0x60);
   uVar7 = makeVoidType(this);
   *(undefined4*)( this_00 + 0x10 ) = 0xc;
   iVar3 = *(int*)( this + 0x1d0 );
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_00 + 0xc ) = uVar7;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(int*)( this + 0x1d0 ) = iVar3 + 1;
   *(int*)( this_00 + 8 ) = iVar3 + 1;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   local_c8 = this_00;
   Instruction::reserveOperands(this_00, uVar21);
   Instruction::addIdOperand(this_00, *(uint*)( this + 0x50 ));
   Instruction::addImmediateOperand(this_00, 10);
   local_68 = local_58;
   if (param_2 == (char*)0x0) {
      /* WARNING: Subroutine does not return */
      std::__throw_logic_error("basic_string: construction from null is not valid");
   }

   ppIVar10 = (Instruction**)strlen(param_2);
   local_b8 = ppIVar10;
   if (ppIVar10 < (Instruction**)0x10) {
      pppIVar13 = local_58;
      if (ppIVar10 == (Instruction**)0x1) {
         local_58[0] = (Instruction**)CONCAT71(local_58[0]._1_7_, *param_2);
         goto LAB_001147f4;
      }

      if (ppIVar10 == (Instruction**)0x0) goto LAB_001147f4;
   }
 else {
      local_68 = (Instruction***)std::__cxx11::string::_M_create((ulong*)&local_68, ( ulong ) & local_b8);
      local_58[0] = local_b8;
      pppIVar13 = local_68;
   }

   memcpy(pppIVar13, param_2, (size_t)ppIVar10);
   pppIVar13 = local_68;
   LAB_001147f4:*(undefined1*)( (long)pppIVar13 + (long)local_b8 ) = 0;
   local_60 = local_b8;
   uVar8 = getStringId(this, (string*)&local_68);
   Instruction::addIdOperand(this_00, uVar8);
   if (local_68 != local_58) {
      operator_delete(local_68, (long)local_58[0] + 1);
   }

   uVar8 = makeUintConstant(this, param_4, false);
   Instruction::addIdOperand(this_00, uVar8);
   uVar8 = makeDebugSource(this, *(uint*)( this + 0x88 ));
   Instruction::addIdOperand(this_00, uVar8);
   uVar8 = makeUintConstant(this, *(uint*)( this + 0x84 ), false);
   Instruction::addIdOperand(this_00, uVar8);
   uVar8 = makeUintConstant(this, 0, false);
   Instruction::addIdOperand(this_00, uVar8);
   uVar8 = *(uint*)( this + 0x4c );
   if (uVar8 == 0) {
      uVar8 = makeDebugCompilationUnit(this);
   }

   Instruction::addIdOperand(this_00, uVar8);
   if (param_5 == '\0') {
      std::__cxx11::string::string<std::allocator<char>>((string*)&local_68, param_2, (allocator*)&local_b8);
      uVar8 = getStringId(this, (string*)&local_68);
      Instruction::addIdOperand(this_00, uVar8);
      std::__cxx11::string::_M_dispose();
      uVar8 = makeUintConstant(this, 0, false);
   }
 else {
      std::__cxx11::string::string<std::allocator<char>>(local_88, param_2, (allocator*)&local_b8);
      plVar11 = (long*)std::__cxx11::string::_M_replace_aux((ulong)local_88, 0, 0, '\x01');
      pppIVar13 = (Instruction***)( plVar11 + 2 );
      if ((Instruction***)*plVar11 == pppIVar13) {
         uVar21 = plVar11[1] + 1;
         pppIVar16 = pppIVar13;
         pppIVar20 = local_58;
         if (7 < (uint)uVar21) {
            uVar14 = 0;
            do {
               uVar8 = (int)uVar14 + 8;
               uVar15 = (ulong)uVar8;
               *(undefined8*)( (long)local_58 + uVar14 ) = *(undefined8*)( (long)pppIVar13 + uVar14 );
               uVar14 = uVar15;
            }
 while ( uVar8 < ( (uint)uVar21 & 0xfffffff8 ) );
            pppIVar20 = (Instruction***)( (long)local_58 + uVar15 );
            pppIVar16 = (Instruction***)( uVar15 + (long)pppIVar13 );
         }

         lVar19 = 0;
         if (( uVar21 & 4 ) != 0) {
            *(undefined4*)pppIVar20 = *(undefined4*)pppIVar16;
            lVar19 = 4;
         }

         if (( uVar21 & 2 ) != 0) {
            *(undefined2*)( (long)pppIVar20 + lVar19 ) = *(undefined2*)( (long)pppIVar16 + lVar19 );
            lVar19 = lVar19 + 2;
         }

         local_68 = local_58;
         if (( uVar21 & 1 ) != 0) {
            *(undefined1*)( (long)pppIVar20 + lVar19 ) = *(undefined1*)( (long)pppIVar16 + lVar19 );
         }

      }
 else {
         local_58[0] = (Instruction**)plVar11[2];
         local_68 = (Instruction***)*plVar11;
      }

      local_60 = (Instruction**)plVar11[1];
      *plVar11 = (long)pppIVar13;
      plVar11[1] = 0;
      *(undefined1*)( plVar11 + 2 ) = 0;
      uVar8 = getStringId(this, (string*)&local_68);
      Instruction::addIdOperand(this_00, uVar8);
      std::__cxx11::string::_M_dispose();
      std::__cxx11::string::_M_dispose();
      uVar8 = *(uint*)( this + 0x54 );
      if (uVar8 == 0) {
         uVar8 = makeDebugInfoNone(this);
      }

   }

   Instruction::addIdOperand(this_00, uVar8);
   uVar8 = makeUintConstant(this, 3, false);
   Instruction::addIdOperand(this_00, uVar8);
   for (puVar23 = local_f0; puVar17 != puVar23; puVar23 = puVar23 + 1) {
      while (true) {
         puVar5 = *(undefined4**)( this_00 + 0x20 );
         local_c0 = (Instruction*)CONCAT44(local_c0._4_4_, *puVar23);
         if (puVar5 == *(undefined4**)( this_00 + 0x28 )) {
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar5, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_c0);
         }
 else {
            *puVar5 = *puVar23;
            *(undefined4**)( this_00 + 0x20 ) = puVar5 + 1;
         }

         ppIVar10 = *(Instruction***)( this_00 + 0x40 );
         if (ppIVar10 != *(Instruction***)( this_00 + 0x50 )) break;
         local_b0 = *(undefined4*)( this_00 + 0x48 );
         puVar23 = puVar23 + 1;
         local_b8 = ppIVar10;
         std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, ppIVar10, CONCAT44(uStack_ac, local_b0), 1);
         if (puVar17 == puVar23) goto LAB_00114a21;
      }
;
      iVar3 = *(int*)( this_00 + 0x48 );
      if (iVar3 == 0x3f) {
         *(undefined4*)( this_00 + 0x48 ) = 0;
         *(Instruction***)( this_00 + 0x40 ) = ppIVar10 + 1;
      }
 else {
         *(int*)( this_00 + 0x48 ) = iVar3 + 1;
      }

      *ppIVar10 = (Instruction*)( ( ulong ) * ppIVar10 | 1L << ( (byte)iVar3 & 0x3f ) );
   }

   LAB_00114a21:local_c0 = (Instruction*)CONCAT44(local_c0._4_4_, 10);
   this_01 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x3c0 ), (uint*)&local_c0);
   std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::push_back(this_01, &local_c8);
   local_c0 = this_00;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_c0);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_c0);
   Module::mapInstruction((Module*)( this + 400 ), this_00);
   uVar7 = *(undefined4*)( this_00 + 8 );
   if (local_f0 != (undefined4*)0x0) {
      operator_delete(local_f0, local_98 - (long)local_f0);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar7;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeSamplerType() */undefined4 spv::Builder::makeSamplerType(Builder *this) {
   _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this_00;
   int iVar1;
   undefined4 uVar2;
   long *plVar3;
   long lVar4;
   undefined4 *puVar5;
   Instruction *pIVar6;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *this_01;
   long in_FS_OFFSET;
   Instruction *local_50;
   undefined1 local_48[16];
   undefined8 local_38;
   long local_30;
   this_00 = (_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x388 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48._0_4_ = 0x1a;
   plVar3 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)local_48);
   if (*plVar3 == plVar3[1]) {
      pIVar6 = (Instruction*)operator_new(0x60);
      iVar1 = *(int*)( this + 0x1d0 );
      local_48._0_4_ = 0x1a;
      *(undefined***)pIVar6 = &PTR__Instruction_0011c5f0;
      *(undefined4*)( pIVar6 + 0x38 ) = 0;
      *(int*)( this + 0x1d0 ) = iVar1 + 1;
      *(int*)( pIVar6 + 8 ) = iVar1 + 1;
      *(undefined8*)( pIVar6 + 0xc ) = 0x1a00000000;
      *(undefined8*)( pIVar6 + 0x40 ) = 0;
      *(undefined4*)( pIVar6 + 0x48 ) = 0;
      *(undefined1(*) [16])( pIVar6 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( pIVar6 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( pIVar6 + 0x50 ) = (undefined1[16])0x0;
      local_50 = pIVar6;
      this_01 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)local_48);
      std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::push_back(this_01, &local_50);
      local_48._0_8_ = pIVar6;
      std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)local_48);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)local_48);
      Module::mapInstruction((Module*)( this + 400 ), pIVar6);
   }
 else {
      local_48._0_4_ = 0x1a;
      lVar4 = std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)local_48);
      pIVar6 = *(Instruction**)( *(long*)( lVar4 + 8 ) + -8 );
      local_50 = pIVar6;
   }

   if (this[0xea] != (Builder)0x0) {
      local_48 = (undefined1[16])0x0;
      local_38 = 0;
      uVar2 = makeCompositeDebugType(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)local_48, "type.sampler", 1, 1);
      local_48._0_4_ = *(undefined4*)( pIVar6 + 8 );
      puVar5 = (undefined4*)std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator []((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)( this + 0x518 ), (uint*)local_48);
      *puVar5 = uVar2;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return *(undefined4*)( pIVar6 + 8 );
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeStructType(std::vector<unsigned int, std::allocator<unsigned int> > const&,
   char const*, bool) */undefined4 spv::Builder::makeStructType(Builder *this, vector *param_1, char *param_2, bool param_3) {
   int iVar1;
   ulong *puVar2;
   undefined8 *puVar3;
   undefined4 uVar4;
   Instruction *pIVar5;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar6;
   undefined4 *puVar7;
   undefined4 *puVar8;
   long lVar9;
   long lVar10;
   long in_FS_OFFSET;
   Instruction *local_68;
   Instruction *local_60;
   ulong *local_58;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pIVar5 = (Instruction*)operator_new(0x60);
   lVar9 = *(long*)param_1;
   iVar1 = *(int*)( this + 0x1d0 );
   *(undefined***)pIVar5 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( pIVar5 + 0x38 ) = 0;
   *(int*)( this + 0x1d0 ) = iVar1 + 1;
   *(int*)( pIVar5 + 8 ) = iVar1 + 1;
   *(undefined8*)( pIVar5 + 0xc ) = 0x1e00000000;
   lVar10 = *(long*)( param_1 + 8 );
   *(undefined8*)( pIVar5 + 0x40 ) = 0;
   *(undefined4*)( pIVar5 + 0x48 ) = 0;
   *(undefined1(*) [16])( pIVar5 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pIVar5 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pIVar5 + 0x50 ) = (undefined1[16])0x0;
   local_68 = pIVar5;
   if (0 < (int)( lVar10 - lVar9 >> 2 )) {
      lVar10 = 0;
      puVar8 = (undefined4*)0x0;
      puVar7 = (undefined4*)0x0;
      while (true) {
         uVar4 = *(undefined4*)( lVar9 + lVar10 * 4 );
         local_60 = (Instruction*)CONCAT44(local_60._4_4_, uVar4);
         if (puVar7 == puVar8) {
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( pIVar5 + 0x18 ), puVar7, &local_60);
         }
 else {
            *puVar7 = uVar4;
            *(undefined4**)( pIVar5 + 0x20 ) = puVar7 + 1;
         }

         puVar2 = *(ulong**)( pIVar5 + 0x40 );
         if (puVar2 == *(ulong**)( pIVar5 + 0x50 )) {
            local_50 = *(undefined4*)( pIVar5 + 0x48 );
            local_58 = puVar2;
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(pIVar5 + 0x30, puVar2, CONCAT44(uStack_4c, local_50), 1);
         }
 else {
            iVar1 = *(int*)( pIVar5 + 0x48 );
            if (iVar1 == 0x3f) {
               *(undefined4*)( pIVar5 + 0x48 ) = 0;
               *(ulong**)( pIVar5 + 0x40 ) = puVar2 + 1;
            }
 else {
               *(int*)( pIVar5 + 0x48 ) = iVar1 + 1;
            }

            *puVar2 = *puVar2 | 1L << ( (byte)iVar1 & 0x3f );
         }

         lVar9 = *(long*)param_1;
         lVar10 = lVar10 + 1;
         if ((int)( *(long*)( param_1 + 8 ) - lVar9 >> 2 ) <= (int)lVar10) break;
         puVar7 = *(undefined4**)( pIVar5 + 0x20 );
         puVar8 = *(undefined4**)( pIVar5 + 0x28 );
      }
;
   }

   local_60 = (Instruction*)CONCAT44(local_60._4_4_, 0x1e);
   pvVar6 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x388 ), (uint*)&local_60);
   puVar3 = *(undefined8**)( pvVar6 + 8 );
   if (puVar3 == *(undefined8**)( pvVar6 + 0x10 )) {
      std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar6, puVar3, &local_68);
   }
 else {
      *puVar3 = pIVar5;
      *(undefined8**)( pvVar6 + 8 ) = puVar3 + 1;
   }

   local_60 = pIVar5;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_60);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_60);
   Module::mapInstruction((Module*)( this + 400 ), pIVar5);
   addName(this, *(uint*)( pIVar5 + 8 ), param_2);
   if (( this[0xea] == (Builder)0x1 ) && ( !param_3 )) {
      uVar4 = makeCompositeDebugType(this, param_1, param_2, 1, 0);
      local_60 = (Instruction*)CONCAT44(local_60._4_4_, *(undefined4*)( pIVar5 + 8 ));
      puVar7 = (undefined4*)std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator []((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)( this + 0x518 ), (uint*)&local_60);
      *puVar7 = uVar4;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return *(undefined4*)( pIVar5 + 8 );
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeStructResultType(unsigned int, unsigned int) */ulong spv::Builder::makeStructResultType(Builder *this, uint param_1, uint param_2) {
   long lVar1;
   uint *puVar2;
   long *plVar3;
   ulong uVar4;
   long lVar5;
   long in_FS_OFFSET;
   uint local_50;
   uint local_4c;
   undefined1 local_48[16];
   uint *local_38;
   long local_30;
   lVar5 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = param_2;
   local_4c = param_1;
   do {
      local_48._0_4_ = 0x1e;
      plVar3 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x388 ), (uint*)local_48);
      if ((int)( plVar3[1] - *plVar3 >> 3 ) <= (int)lVar5) {
         local_38 = (uint*)0x0;
         local_48 = (undefined1[16])0x0;
         std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)local_48, 0, &local_4c);
         if ((uint*)local_48._8_8_ == local_38) {
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)local_48, local_38, &local_50);
         }
 else {
            *(uint*)local_48._8_8_ = local_50;
            local_48._8_8_ = (uint*)( local_48._8_8_ + 4 );
         }

         puVar2 = local_38;
         uVar4 = makeStructType(this, (vector*)local_48, "ResType", true);
         if ((void*)local_48._0_8_ != (void*)0x0) {
            operator_delete((void*)local_48._0_8_, (long)puVar2 - local_48._0_8_);
            uVar4 = uVar4 & 0xffffffff;
         }

         LAB_00115157:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return uVar4;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      local_48._0_4_ = 0x1e;
      plVar3 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator []((_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x388 ), (uint*)local_48);
      lVar1 = *(long*)( *plVar3 + lVar5 * 8 );
      puVar2 = *(uint**)( lVar1 + 0x18 );
      if (( ( (int)( *(long*)( lVar1 + 0x20 ) - (long)puVar2 >> 2 ) == 2 ) && ( local_4c == *puVar2 ) ) && ( local_50 == puVar2[1] )) {
         uVar4 = ( ulong ) * (uint*)( lVar1 + 8 );
         goto LAB_00115157;
      }

      lVar5 = lVar5 + 1;
   }
 while ( true );
}
/* spv::Builder::createTextureCall(spv::Decoration, unsigned int, bool, bool, bool, bool, bool,
   spv::Builder::TextureParameters const&, spv::ImageOperandsMask) */uint spv::Builder::createTextureCall(Builder *this, int param_2, uint param_3, char param_4, char param_5, char param_6, char param_7, char param_8, long param_9, uint param_10) {
   uint *puVar1;
   long lVar2;
   uint *__src;
   int iVar3;
   undefined4 *puVar4;
   ulong *puVar5;
   bool bVar6;
   undefined8 uVar7;
   uint uVar8;
   undefined4 uVar9;
   undefined4 uVar10;
   ulong uVar11;
   Instruction *this_00;
   long *plVar12;
   size_t __n;
   ulong uVar13;
   void *pvVar14;
   ulong uVar15;
   uint uVar16;
   uint *puVar17;
   ulong uVar18;
   long in_FS_OFFSET;
   uint local_a8;
   uint *local_88;
   uint local_80;
   Instruction *local_70;
   ulong *local_68;
   undefined4 local_60;
   undefined4 uStack_5c;
   undefined1 local_58[16];
   uint *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   local_48 = (uint*)0x0;
   std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)local_58, 0, param_9);
   if ((uint*)local_58._8_8_ == local_48) {
      std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)local_58, local_58._8_8_, param_9 + 4);
   }
 else {
      *(uint*)local_58._8_8_ = *(uint*)( param_9 + 4 );
      local_58._8_8_ = (uint*)( local_58._8_8_ + 4 );
   }

   if (*(int*)( param_9 + 0x10 ) != 0) {
      std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back((vector<unsigned_int,std::allocator<unsigned_int>>*)local_58, (uint*)( param_9 + 0x10 ));
   }

   if (*(int*)( param_9 + 0x28 ) != 0) {
      std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back((vector<unsigned_int,std::allocator<unsigned_int>>*)local_58, (uint*)( param_9 + 0x28 ));
   }

   if (*(int*)( param_9 + 0x34 ) == 0) {
      iVar3 = *(int*)( param_9 + 0x38 );
   }
 else {
      std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back((vector<unsigned_int,std::allocator<unsigned_int>>*)local_58, (uint*)( param_9 + 0x34 ));
      iVar3 = *(int*)( param_9 + 0x38 );
   }

   if (iVar3 != 0) {
      std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back((vector<unsigned_int,std::allocator<unsigned_int>>*)local_58, (uint*)( param_9 + 0x38 ));
   }

   uVar16 = *(uint*)( param_9 + 8 );
   uVar11 = local_58._8_8_ - local_58._0_8_;
   uVar13 = (long)uVar11 >> 2;
   if (uVar16 != 0) {
      uVar16 = 1;
      std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back((vector<unsigned_int,std::allocator<unsigned_int>>*)local_58, (uint*)( param_9 + 8 ));
   }

   if (*(int*)( param_9 + 0xc ) == 0) {
      if (*(int*)( param_9 + 0x1c ) == 0) {
         if (( param_8 == '\x01' && param_5 == '\0' ) && ( param_7 == '\0' )) {
            uVar16 = uVar16 | 2;
            uVar10 = makeFloatConstant(this, 0.0, false);
            local_68 = (ulong*)CONCAT44(local_68._4_4_, uVar10);
            std::vector<unsigned_int,std::allocator<unsigned_int>>::emplace_back<unsigned_int>((vector<unsigned_int,std::allocator<unsigned_int>>*)local_58, (uint*)&local_68);
            bVar6 = true;
         }
 else {
            bVar6 = false;
         }

      }
 else {
         uVar16 = uVar16 | 4;
         std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back((vector<unsigned_int,std::allocator<unsigned_int>>*)local_58, (uint*)( param_9 + 0x1c ));
         std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back((vector<unsigned_int,std::allocator<unsigned_int>>*)local_58, (uint*)( param_9 + 0x20 ));
         bVar6 = true;
      }

   }
 else {
      uVar16 = uVar16 | 2;
      std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back((vector<unsigned_int,std::allocator<unsigned_int>>*)local_58, (uint*)( param_9 + 0xc ));
      bVar6 = true;
   }

   if (*(uint*)( param_9 + 0x14 ) != 0) {
      uVar8 = *(uint*)( *(long*)( *(long*)( this + 0x1b0 ) + ( ulong ) * (uint*)( param_9 + 0x14 ) * 8 ) + 0x10 );
      if (( uVar8 < 0x35 ) && ( ( 0x1f7e0000000002U >> ( (ulong)uVar8 & 0x3f ) & 1 ) != 0 )) {
         uVar16 = uVar16 | 8;
      }
 else {
         local_68 = (ulong*)CONCAT44(local_68._4_4_, 0x19);
         uVar16 = uVar16 | 0x10;
         std::set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>::insert((set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>*)( this + 0x158 ), (Capability*)&local_68);
      }

      std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back((vector<unsigned_int,std::allocator<unsigned_int>>*)local_58, (uint*)( param_9 + 0x14 ));
   }

   if (*(int*)( param_9 + 0x18 ) != 0) {
      local_68 = (ulong*)CONCAT44(local_68._4_4_, 0x19);
      uVar16 = uVar16 | 0x20;
      std::set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>::insert((set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>*)( this + 0x158 ), (Capability*)&local_68);
      std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back((vector<unsigned_int,std::allocator<unsigned_int>>*)local_58, (uint*)( param_9 + 0x18 ));
   }

   if (*(int*)( param_9 + 0x24 ) != 0) {
      uVar16 = uVar16 | 0x40;
      std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back((vector<unsigned_int,std::allocator<unsigned_int>>*)local_58, (uint*)( param_9 + 0x24 ));
   }

   if (*(int*)( param_9 + 0x30 ) != 0) {
      local_68 = (ulong*)CONCAT44(local_68._4_4_, 0x2a);
      uVar16 = uVar16 | 0x80;
      std::set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>::insert((set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>*)( this + 0x158 ), (Capability*)&local_68);
      std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back((vector<unsigned_int,std::allocator<unsigned_int>>*)local_58, (uint*)( param_9 + 0x30 ));
   }

   pvVar14 = (void*)local_58._0_8_;
   local_88 = local_48;
   uVar7 = local_58._8_8_;
   local_a8 = param_3;
   if (*(char*)( param_9 + 0x3c ) == '\0') {
      if (*(char*)( param_9 + 0x3d ) != '\0') goto LAB_001154e8;
      param_10 = uVar16 | param_10;
      puVar17 = (uint*)local_58._8_8_;
      if (param_10 != 0) goto LAB_0011542b;
      LAB_00115514:pvVar14 = (void*)local_58._0_8_;
      local_88 = local_48;
      if (param_5 == '\0') goto LAB_001154a0;
      LAB_0011551b:if (param_4 == '\0') {
         local_80 = 0;
         uVar8 = 0x5f;
         uVar16 = 0;
         goto LAB_00115544;
      }

      uVar8 = 0x139;
      plVar12 = *(long**)( this + 0x1b0 );
   }
 else {
      uVar16 = uVar16 | 0x400;
      if (*(char*)( param_9 + 0x3d ) == '\0') {
         param_10 = param_10 | uVar16;
      }
 else {
         LAB_001154e8:param_10 = param_10 | uVar16 | 0x800;
      }

      LAB_0011542b:local_68 = (ulong*)CONCAT44(local_68._4_4_, param_10);
      __src = (uint*)( local_58._0_8_ + uVar11 );
      if ((uint*)local_58._8_8_ == local_48) {
         std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>((vector<unsigned_int,std::allocator<unsigned_int>>*)local_58, __src, &local_68);
         puVar17 = (uint*)local_58._8_8_;
         goto LAB_00115514;
      }

      puVar17 = (uint*)( local_58._8_8_ + 4 );
      if (__src == (uint*)local_58._8_8_) {
         *(uint*)local_58._8_8_ = param_10;
         local_58._8_8_ = puVar17;
      }
 else {
         puVar1 = (uint*)( local_58._8_8_ + -4 );
         local_58._8_8_ = puVar17;
         __n = uVar7 + ( -4 - (long)__src );
         *(uint*)uVar7 = *puVar1;
         if ((long)__n < 5) {
            if (__n == 4) {
               *(uint*)( uVar7 + -4 ) = *__src;
            }

         }
 else {
            memmove((void*)( uVar7 - __n ), __src, __n);
         }

         *__src = param_10;
      }

      if (param_5 != '\0') goto LAB_0011551b;
      LAB_001154a0:if (( *(int*)( param_9 + 0x34 ) == 0 ) || ( *(int*)( param_9 + 0x38 ) == 0 )) {
         iVar3 = *(int*)( param_9 + 0x10 );
         if (param_7 == '\0') {
            if (!bVar6) {
               if (iVar3 == 0) {
                  if (param_6 == '\0') {
                     uVar8 = 0x57;
                     if (param_4 != '\0') {
                        uVar8 = 0x131;
                        goto LAB_00115b16;
                     }

                  }
 else {
                     uVar8 = 0x5b;
                     if (param_4 != '\0') {
                        uVar8 = 0x135;
                        LAB_00115b16:plVar12 = *(long**)( this + 0x1b0 );
                        goto LAB_001159e2;
                     }

                  }

               }
 else if (param_6 == '\0') {
                  uVar8 = 0x59;
                  if (param_4 != '\0') {
                     uVar8 = 0x133;
                     goto LAB_00115b16;
                  }

               }
 else {
                  uVar8 = 0x5d;
                  if (param_4 != '\0') {
                     uVar8 = 0x137;
                     goto LAB_00115b16;
                  }

               }

               LAB_00115c07:if (2 < *(int*)( *(long*)( *(long*)( this + 0x1b0 ) + (ulong)param_3 * 8 ) + 0x10 ) - 0x14U) {
                  if (uVar8 < 0x5b) {
                     if (uVar8 == 0x59) {
                        LAB_00115c4f:local_a8 = getScalarTypeId(this, param_3);
                        local_80 = 0;
                        uVar16 = 0;
                        goto LAB_00115544;
                     }

                  }
 else if (uVar8 - 0x5d < 2) {
                     uVar8 = 0x5d;
                     local_a8 = getScalarTypeId(this, param_3);
                     local_80 = 0;
                     uVar16 = 0;
                     goto LAB_00115544;
                  }

               }

               LAB_00115c26:local_80 = 0;
               uVar16 = 0;
               goto LAB_00115544;
            }

            if (iVar3 == 0) {
               if (param_6 == '\0') {
                  uVar8 = 0x58;
                  if (param_4 != '\0') {
                     uVar8 = 0x132;
                     goto LAB_00115b16;
                  }

               }
 else {
                  if (param_4 != '\0') {
                     uVar8 = 0x136;
                     plVar12 = *(long**)( this + 0x1b0 );
                     goto LAB_001159e2;
                  }

                  uVar8 = 0x5c;
               }

               goto LAB_00115c07;
            }

            if (param_6 == '\0') {
               if (param_4 == '\0') {
                  uVar8 = 0x5a;
                  goto LAB_00115d3f;
               }

               uVar8 = 0x134;
               plVar12 = *(long**)( this + 0x1b0 );
            }
 else {
               if (param_4 == '\0') {
                  uVar8 = 0x5e;
                  LAB_00115d3f:if (2 < *(int*)( *(long*)( *(long*)( this + 0x1b0 ) + (ulong)param_3 * 8 ) + 0x10 ) - 0x14U) goto LAB_00115c4f;
                  goto LAB_00115c26;
               }

               uVar8 = 0x138;
               plVar12 = *(long**)( this + 0x1b0 );
            }

         }
 else if (iVar3 == 0) {
            if (param_4 == '\0') {
               local_80 = 0;
               uVar8 = 0x60;
               uVar16 = 0;
               goto LAB_00115544;
            }

            uVar8 = 0x13a;
            plVar12 = *(long**)( this + 0x1b0 );
         }
 else {
            if (param_4 == '\0') {
               local_80 = 0;
               uVar8 = 0x61;
               uVar16 = 0;
               goto LAB_00115544;
            }

            uVar8 = 0x13b;
            plVar12 = *(long**)( this + 0x1b0 );
         }

      }
 else {
         if (param_4 == '\0') {
            local_80 = 0;
            uVar8 = 0x14a3;
            uVar16 = 0;
            goto LAB_00115544;
         }

         uVar8 = 0x14a3;
         plVar12 = *(long**)( this + 0x1b0 );
      }

   }

   LAB_001159e2:if (plVar12[*(uint*)( param_9 + 0x2c )] != 0) {
      plVar12 = plVar12 + *(uint*)( plVar12[*(uint*)( param_9 + 0x2c )] + 0xc );
   }

   local_80 = *(uint*)( *(long*)( *plVar12 + 0x18 ) + 4 );
   local_a8 = makeStructResultType(this, param_3, local_80);
   uVar16 = param_3;
   LAB_00115544:this_00 = (Instruction*)operator_new(0x60);
   *(uint*)( this_00 + 0x10 ) = uVar8;
   uVar18 = 0;
   iVar3 = *(int*)( this + 0x1d0 );
   *(undefined4*)( this_00 + 0x38 ) = 0;
   uVar15 = (long)puVar17 - (long)pvVar14 >> 2;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(int*)( this + 0x1d0 ) = iVar3 + 1;
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(int*)( this_00 + 8 ) = iVar3 + 1;
   *(uint*)( this_00 + 0xc ) = local_a8;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, uVar15 - 1);
   if (uVar11 != 0) {
      do {
         lVar2 = uVar18 * 4;
         uVar18 = uVar18 + 1;
         Instruction::addIdOperand(this_00, *(uint*)( (long)pvVar14 + lVar2 ));
      }
 while ( uVar18 < uVar13 );
   }

   if (uVar11 < ( ulong )((long)puVar17 - (long)pvVar14)) {
      Instruction::addImmediateOperand(this_00, *(uint*)( (long)pvVar14 + uVar11 ));
   }

   while (uVar13 = uVar13 + 1,uVar13 < uVar15) {
      while (true) {
         uVar10 = *(undefined4*)( (long)pvVar14 + uVar13 * 4 );
         puVar4 = *(undefined4**)( this_00 + 0x20 );
         local_70 = (Instruction*)CONCAT44(local_70._4_4_, uVar10);
         if (puVar4 == *(undefined4**)( this_00 + 0x28 )) {
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this_00 + 0x18 ), puVar4, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_70);
         }
 else {
            *puVar4 = uVar10;
            *(undefined4**)( this_00 + 0x20 ) = puVar4 + 1;
         }

         puVar5 = *(ulong**)( this_00 + 0x40 );
         if (puVar5 != *(ulong**)( this_00 + 0x50 )) break;
         local_60 = *(undefined4*)( this_00 + 0x48 );
         uVar13 = uVar13 + 1;
         local_68 = puVar5;
         std::vector<bool,std::allocator<bool>>::_M_insert_aux(this_00 + 0x30, puVar5, CONCAT44(uStack_5c, local_60), 1);
         if (uVar15 <= uVar13) goto LAB_001156af;
      }
;
      iVar3 = *(int*)( this_00 + 0x48 );
      if (iVar3 == 0x3f) {
         *(undefined4*)( this_00 + 0x48 ) = 0;
         *(ulong**)( this_00 + 0x40 ) = puVar5 + 1;
      }
 else {
         *(int*)( this_00 + 0x48 ) = iVar3 + 1;
      }

      *puVar5 = *puVar5 | 1L << ( (byte)iVar3 & 0x3f );
   }
;
   LAB_001156af:if (( *(int*)( this_00 + 8 ) != 0 ) && ( param_2 != 0x7fffffff )) {
      addDecoration(this, *(int*)( this_00 + 8 ), param_2, 0xffffffff);
   }

   local_70 = this_00;
   addInstruction(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_70);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_70);
   uVar8 = *(uint*)( this_00 + 8 );
   if (param_4 == '\0') {
      if (local_a8 != param_3) {
         uVar8 = smearScalar(this, param_2, uVar8, param_3);
      }

   }
 else {
      local_70 = (Instruction*)CONCAT44(local_70._4_4_, 0x29);
      std::set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>::insert((set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>*)( this + 0x158 ), (Capability*)&local_70);
      uVar10 = *(undefined4*)( param_9 + 0x2c );
      uVar9 = createCompositeExtract(this, uVar8, local_80, 1);
      createStore(this, uVar9, uVar10, 0, 0x7fffffff, 0);
      uVar8 = createCompositeExtract(this, uVar8, uVar16, 0);
      if (( uVar8 != 0 ) && ( param_2 != 0x7fffffff )) {
         addDecoration(this, uVar8, param_2, 0xffffffff);
      }

   }

   if (pvVar14 != (void*)0x0) {
      operator_delete(pvVar14, (long)local_88 - (long)pvVar14);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar8;
}
/* spv::Builder::makeImageType(unsigned int, spv::Dim, bool, bool, bool, unsigned int,
   spv::ImageFormat) */undefined4 spv::Builder::makeImageType(Builder *this, uint param_1, uint param_3, byte param_4, byte param_5, byte param_6, uint param_7, uint param_8) {
   _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this_00;
   int iVar1;
   uint *puVar2;
   undefined8 *puVar3;
   undefined4 uVar4;
   long *plVar5;
   Instruction *this_01;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar6;
   undefined4 *puVar7;
   char *pcVar8;
   long lVar9;
   long in_FS_OFFSET;
   Instruction *local_60;
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   this_00 = (_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x388 );
   lVar9 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   while (true) {
      local_58._0_4_ = 0x19;
      plVar5 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)local_58);
      if ((int)( plVar5[1] - *plVar5 >> 3 ) <= (int)lVar9) break;
      local_58._0_4_ = 0x19;
      plVar5 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)local_58);
      local_60 = *(Instruction**)( *plVar5 + lVar9 * 8 );
      puVar2 = *(uint**)( local_60 + 0x18 );
      if (( ( ( ( param_1 == *puVar2 ) && ( param_3 == puVar2[1] ) ) && ( (uint)param_4 == puVar2[2] ) ) && ( ( puVar2[3] == (uint)param_5 && ( puVar2[4] == (uint)param_6 ) ) ) ) && ( ( param_7 == puVar2[5] && ( param_8 == puVar2[6] ) ) )) {
         uVar4 = *(undefined4*)( local_60 + 8 );
         goto LAB_00116001;
      }

      lVar9 = lVar9 + 1;
   }
;
   this_01 = (Instruction*)operator_new(0x60);
   iVar1 = *(int*)( this + 0x1d0 );
   *(undefined***)this_01 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_01 + 0x38 ) = 0;
   *(int*)( this + 0x1d0 ) = iVar1 + 1;
   *(int*)( this_01 + 8 ) = iVar1 + 1;
   *(undefined8*)( this_01 + 0xc ) = 0x1900000000;
   *(undefined8*)( this_01 + 0x40 ) = 0;
   *(undefined4*)( this_01 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_01 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_01 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_01 + 0x50 ) = (undefined1[16])0x0;
   local_60 = this_01;
   Instruction::reserveOperands(this_01, 7);
   Instruction::addIdOperand(this_01, param_1);
   Instruction::addImmediateOperand(this_01, param_3);
   Instruction::addImmediateOperand(this_01, (uint)param_4);
   Instruction::addImmediateOperand(this_01, (uint)param_5);
   Instruction::addImmediateOperand(this_01, (uint)param_6);
   Instruction::addImmediateOperand(this_01, param_7);
   Instruction::addImmediateOperand(this_01, param_8);
   local_58._0_4_ = 0x19;
   pvVar6 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)local_58);
   puVar3 = *(undefined8**)( pvVar6 + 8 );
   if (puVar3 == *(undefined8**)( pvVar6 + 0x10 )) {
      std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar6, puVar3, &local_60);
   }
 else {
      *puVar3 = this_01;
      *(undefined8**)( pvVar6 + 8 ) = puVar3 + 1;
   }

   local_58._0_8_ = this_01;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)local_58);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)local_58);
   Module::mapInstruction((Module*)( this + 400 ), this_01);
   switch (param_3) {
      case 0:
    if (param_7 == 1) {
      local_58._0_4_ = 0x2b;
      std::set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>::insert
                ((set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>> *)
                 (this + 0x158),(Capability *)local_58);
    }
    else {
      local_58._0_4_ = 0x2c;
      std::set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>::insert
                ((set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>> *)
                 (this + 0x158),(Capability *)local_58);
      if ((param_6 != 0) && (param_7 == 2)) goto LAB_0011613d;
    }
    if (this[0xea] == (Builder)0x0) goto LAB_00115ffe;
LAB_0011606b:
    pcVar8 = "type.1d.image";
    break;
      default:
    if ((param_7 == 2) && (param_6 != 0)) {
LAB_0011613d:
      local_58._0_4_ = 0x1b;
      std::set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>::insert
                ((set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>> *)
                 (this + 0x158),(Capability *)local_58);
      if (param_5 != 0) {
        local_58._0_4_ = 0x30;
        std::set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>::insert
                  ((set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>
                    *)(this + 0x158),(Capability *)local_58);
      }
      if (this[0xea] == (Builder)0x0) goto LAB_00115ffe;
      if (param_3 != 2) goto LAB_0011626a;
    }
    else {
      if (this[0xea] == (Builder)0x0) goto LAB_00115ffe;
      if (param_3 != 2) {
        if (param_3 < 3) goto LAB_001162e7;
        goto LAB_001161f1;
      }
    }
    pcVar8 = "type.3d.image";
    break;
      case 3:
    if (param_5 == 0) {
      if ((param_6 != 0) && (param_7 == 2)) {
        local_58._0_4_ = 0x1b;
        std::set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>::insert
                  ((set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>
                    *)(this + 0x158),(Capability *)local_58);
      }
    }
    else if (param_7 == 1) {
      local_58._0_4_ = 0x2d;
      std::set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>::insert
                ((set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>> *)
                 (this + 0x158),(Capability *)local_58);
    }
    else {
      local_58._0_4_ = 0x22;
      std::set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>::insert
                ((set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>> *)
                 (this + 0x158),(Capability *)local_58);
      if ((param_6 != 0) && (param_7 == 2)) {
        local_58._0_4_ = 0x1b;
        std::set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>::insert
                  ((set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>
                    *)(this + 0x158),(Capability *)local_58);
        goto LAB_00116249;
      }
    }
    if (this[0xea] == (Builder)0x0) goto LAB_00115ffe;
LAB_001161cd:
    pcVar8 = "type.cube.image";
    break;
      case 4:
    if (param_7 == 1) {
      local_58._0_4_ = 0x25;
      std::set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>::insert
                ((set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>> *)
                 (this + 0x158),(Capability *)local_58);
    }
    else {
      local_58._0_4_ = 0x24;
LAB_00116112:
      std::set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>::insert
                ((set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>> *)
                 (this + 0x158),(Capability *)local_58);
      if ((param_6 != 0) && (param_7 == 2)) goto LAB_0011613d;
    }
    goto LAB_00115ff0;
      case 5:
    if (param_7 != 1) {
      local_58._0_4_ = 0x2f;
      goto LAB_00116112;
    }
    local_58._0_4_ = 0x2e;
    std::set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>::insert
              ((set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>> *)
               (this + 0x158),(Capability *)local_58);
LAB_00115ff0:
    if (this[0xea] == (Builder)0x0) goto LAB_00115ffe;
LAB_001161f1:
    pcVar8 = "type.image";
    break;
      case 6:
    local_58._0_4_ = 0x28;
    std::set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>::insert
              ((set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>> *)
               (this + 0x158),(Capability *)local_58);
    if (((param_6 == 0) || (param_7 != 2)) || (param_5 == 0)) goto LAB_00115ff0;
LAB_00116249:
    local_58._0_4_ = 0x30;
    std::set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>>::insert
              ((set<spv::Capability,std::less<spv::Capability>,std::allocator<spv::Capability>> *)
               (this + 0x158),(Capability *)local_58);
    if (this[0xea] == (Builder)0x0) goto LAB_00115ffe;
LAB_0011626a:
    if (param_3 < 3) {
      if (param_3 == 0) goto LAB_0011606b;
LAB_001162e7:
      pcVar8 = "type.2d.image";
      break;
    }
    if (param_3 == 3) goto LAB_001161cd;
    goto LAB_001161f1;
   }

   local_58 = (undefined1[16])0x0;
   local_48 = 0;
   uVar4 = makeCompositeDebugType(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)local_58, pcVar8, 0, 1);
   local_58._0_4_ = *(undefined4*)( this_01 + 8 );
   puVar7 = (undefined4*)std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator []((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)( this + 0x518 ), (uint*)local_58);
   *puVar7 = uVar4;
   LAB_00115ffe:uVar4 = *(undefined4*)( this_01 + 8 );
   LAB_00116001:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeSampledImageType(unsigned int) */undefined4 spv::Builder::makeSampledImageType(Builder *this, uint param_1) {
   _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this_00;
   int iVar1;
   undefined8 *puVar2;
   undefined4 uVar3;
   long *plVar4;
   Instruction *this_01;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *pvVar5;
   undefined4 *puVar6;
   long lVar7;
   long in_FS_OFFSET;
   Instruction *local_50;
   undefined1 local_48[16];
   undefined8 local_38;
   long local_30;
   this_00 = (_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x388 );
   lVar7 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      local_48._0_4_ = 0x1b;
      plVar4 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)local_48);
      if ((int)( plVar4[1] - *plVar4 >> 3 ) <= (int)lVar7) {
         this_01 = (Instruction*)operator_new(0x60);
         iVar1 = *(int*)( this + 0x1d0 );
         *(undefined***)this_01 = &PTR__Instruction_0011c5f0;
         *(undefined4*)( this_01 + 0x38 ) = 0;
         *(int*)( this + 0x1d0 ) = iVar1 + 1;
         *(int*)( this_01 + 8 ) = iVar1 + 1;
         *(undefined8*)( this_01 + 0xc ) = 0x1b00000000;
         *(undefined8*)( this_01 + 0x40 ) = 0;
         *(undefined4*)( this_01 + 0x48 ) = 0;
         *(undefined1(*) [16])( this_01 + 0x18 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_01 + 0x28 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_01 + 0x50 ) = (undefined1[16])0x0;
         local_50 = this_01;
         Instruction::addIdOperand(this_01, param_1);
         local_48._0_4_ = 0x1b;
         pvVar5 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)local_48);
         puVar2 = *(undefined8**)( pvVar5 + 8 );
         if (puVar2 == *(undefined8**)( pvVar5 + 0x10 )) {
            std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(pvVar5, puVar2, &local_50);
         }
 else {
            *puVar2 = this_01;
            *(undefined8**)( pvVar5 + 8 ) = puVar2 + 1;
         }

         local_48._0_8_ = this_01;
         std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)local_48);
         std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)local_48);
         Module::mapInstruction((Module*)( this + 400 ), this_01);
         if (this[0xea] != (Builder)0x0) {
            local_48 = (undefined1[16])0x0;
            local_38 = 0;
            uVar3 = makeCompositeDebugType(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)local_48, "type.sampled.image", 0, 1);
            local_48._0_4_ = *(undefined4*)( this_01 + 8 );
            puVar6 = (undefined4*)std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator []((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)( this + 0x518 ), (uint*)local_48);
            *puVar6 = uVar3;
         }

         uVar3 = *(undefined4*)( this_01 + 8 );
         goto LAB_001164a4;
      }

      local_48._0_4_ = 0x1b;
      plVar4 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)local_48);
      local_50 = *(Instruction**)( *plVar4 + lVar7 * 8 );
      lVar7 = lVar7 + 1;
   }
 while ( param_1 != **(uint**)( local_50 + 0x18 ) );
   uVar3 = *(undefined4*)( local_50 + 8 );
   LAB_001164a4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeAccelerationStructureType() */undefined4 spv::Builder::makeAccelerationStructureType(Builder *this) {
   _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this_00;
   int iVar1;
   undefined4 uVar2;
   long *plVar3;
   long lVar4;
   Instruction *pIVar5;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *this_01;
   undefined4 *puVar6;
   long in_FS_OFFSET;
   Instruction *local_50;
   undefined1 local_48[16];
   undefined8 local_38;
   long local_30;
   this_00 = (_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x388 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48._0_4_ = 0x14dd;
   plVar3 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)local_48);
   if (*plVar3 == plVar3[1]) {
      pIVar5 = (Instruction*)operator_new(0x60);
      iVar1 = *(int*)( this + 0x1d0 );
      local_48._0_4_ = 0x14dd;
      *(undefined***)pIVar5 = &PTR__Instruction_0011c5f0;
      *(undefined4*)( pIVar5 + 0x38 ) = 0;
      *(int*)( this + 0x1d0 ) = iVar1 + 1;
      *(int*)( pIVar5 + 8 ) = iVar1 + 1;
      *(undefined8*)( pIVar5 + 0xc ) = 0x14dd00000000;
      *(undefined8*)( pIVar5 + 0x40 ) = 0;
      *(undefined4*)( pIVar5 + 0x48 ) = 0;
      *(undefined1(*) [16])( pIVar5 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( pIVar5 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( pIVar5 + 0x50 ) = (undefined1[16])0x0;
      local_50 = pIVar5;
      this_01 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)local_48);
      std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::push_back(this_01, &local_50);
      local_48._0_8_ = pIVar5;
      std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)local_48);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)local_48);
      Module::mapInstruction((Module*)( this + 400 ), pIVar5);
      if (this[0xea] != (Builder)0x0) {
         local_48 = (undefined1[16])0x0;
         local_38 = 0;
         uVar2 = makeCompositeDebugType(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)local_48, "accelerationStructure", 1, 1);
         local_48._0_4_ = *(undefined4*)( pIVar5 + 8 );
         puVar6 = (undefined4*)std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator []((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)( this + 0x518 ), (uint*)local_48);
         *puVar6 = uVar2;
      }

   }
 else {
      local_48._0_4_ = 0x14dd;
      lVar4 = std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)local_48);
      pIVar5 = *(Instruction**)( *(long*)( lVar4 + 8 ) + -8 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return *(undefined4*)( pIVar5 + 8 );
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::makeRayQueryType() */undefined4 spv::Builder::makeRayQueryType(Builder *this) {
   _Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *this_00;
   int iVar1;
   undefined4 uVar2;
   long *plVar3;
   long lVar4;
   Instruction *pIVar5;
   vector<spv::Instruction*,std::allocator<spv::Instruction*>> *this_01;
   undefined4 *puVar6;
   long in_FS_OFFSET;
   Instruction *local_50;
   undefined1 local_48[16];
   undefined8 local_38;
   long local_30;
   this_00 = (_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>*)( this + 0x388 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48._0_4_ = 0x1178;
   plVar3 = (long*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)local_48);
   if (*plVar3 == plVar3[1]) {
      pIVar5 = (Instruction*)operator_new(0x60);
      iVar1 = *(int*)( this + 0x1d0 );
      local_48._0_4_ = 0x1178;
      *(undefined***)pIVar5 = &PTR__Instruction_0011c5f0;
      *(undefined4*)( pIVar5 + 0x38 ) = 0;
      *(int*)( this + 0x1d0 ) = iVar1 + 1;
      *(int*)( pIVar5 + 8 ) = iVar1 + 1;
      *(undefined8*)( pIVar5 + 0xc ) = 0x117800000000;
      *(undefined8*)( pIVar5 + 0x40 ) = 0;
      *(undefined4*)( pIVar5 + 0x48 ) = 0;
      *(undefined1(*) [16])( pIVar5 + 0x18 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( pIVar5 + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( pIVar5 + 0x50 ) = (undefined1[16])0x0;
      local_50 = pIVar5;
      this_01 = (vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)local_48);
      std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::push_back(this_01, &local_50);
      local_48._0_8_ = pIVar5;
      std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)local_48);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)local_48);
      Module::mapInstruction((Module*)( this + 400 ), pIVar5);
      if (this[0xea] != (Builder)0x0) {
         local_48 = (undefined1[16])0x0;
         local_38 = 0;
         uVar2 = makeCompositeDebugType(this, (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)local_48, "rayQuery", 1, 1);
         local_48._0_4_ = *(undefined4*)( pIVar5 + 8 );
         puVar6 = (undefined4*)std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator []((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)( this + 0x518 ), (uint*)local_48);
         *puVar6 = uVar2;
      }

   }
 else {
      local_48._0_4_ = 0x1178;
      lVar4 = std::__detail::_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator [](this_00, (uint*)local_48);
      pIVar5 = *(Instruction**)( *(long*)( lVar4 + 8 ) + -8 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return *(undefined4*)( pIVar5 + 8 );
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::createDebugGlobalVariable(unsigned int, char const*, unsigned int) */undefined4 spv::Builder::createDebugGlobalVariable(Builder *this, uint param_1, char *param_2, uint param_3) {
   int iVar1;
   undefined4 uVar2;
   uint uVar3;
   Instruction *this_00;
   Instruction *pIVar4;
   Instruction **ppIVar5;
   long in_FS_OFFSET;
   Instruction *local_70;
   Instruction **local_68;
   Instruction *local_60;
   Instruction *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Instruction*)operator_new(0x60);
   uVar2 = makeVoidType(this);
   *(undefined4*)( this_00 + 0x10 ) = 0xc;
   iVar1 = *(int*)( this + 0x1d0 );
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(undefined4*)( this_00 + 0xc ) = uVar2;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(int*)( this + 0x1d0 ) = iVar1 + 1;
   *(int*)( this_00 + 8 ) = iVar1 + 1;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, 0xb);
   Instruction::addIdOperand(this_00, *(uint*)( this + 0x50 ));
   Instruction::addImmediateOperand(this_00, 0x12);
   local_68 = local_58;
   if (param_2 == (char*)0x0) {
      /* WARNING: Subroutine does not return */
      std::__throw_logic_error("basic_string: construction from null is not valid");
   }

   pIVar4 = (Instruction*)strlen(param_2);
   local_70 = pIVar4;
   if (pIVar4 < (Instruction*)0x10) {
      ppIVar5 = local_58;
      if (pIVar4 == (Instruction*)0x1) {
         local_58[0] = (Instruction*)CONCAT71(local_58[0]._1_7_, *param_2);
      }
 else if (pIVar4 != (Instruction*)0x0) goto LAB_00116b76;
   }
 else {
      local_68 = (Instruction**)std::__cxx11::string::_M_create((ulong*)&local_68, ( ulong ) & local_70);
      local_58[0] = local_70;
      ppIVar5 = local_68;
      LAB_00116b76:memcpy(ppIVar5, param_2, (size_t)pIVar4);
      ppIVar5 = local_68;
   }

   *(Instruction*)( (long)ppIVar5 + (long)local_70 ) = (Instruction)0x0;
   local_60 = local_70;
   uVar3 = getStringId(this, (string*)&local_68);
   Instruction::addIdOperand(this_00, uVar3);
   if (local_68 != local_58) {
      operator_delete(local_68, ( ulong )(local_58[0] + 1));
   }

   Instruction::addIdOperand(this_00, param_1);
   uVar3 = makeDebugSource(this, *(uint*)( this + 0x88 ));
   Instruction::addIdOperand(this_00, uVar3);
   uVar3 = makeUintConstant(this, *(uint*)( this + 0x84 ), false);
   Instruction::addIdOperand(this_00, uVar3);
   uVar3 = makeUintConstant(this, 0, false);
   Instruction::addIdOperand(this_00, uVar3);
   uVar3 = *(uint*)( this + 0x4c );
   if (uVar3 == 0) {
      uVar3 = makeDebugCompilationUnit(this);
   }

   Instruction::addIdOperand(this_00, uVar3);
   local_68 = local_58;
   pIVar4 = (Instruction*)strlen(param_2);
   local_70 = pIVar4;
   if (pIVar4 < (Instruction*)0x10) {
      ppIVar5 = local_58;
      if (pIVar4 == (Instruction*)0x1) {
         local_58[0] = (Instruction*)CONCAT71(local_58[0]._1_7_, *param_2);
         goto LAB_00116a5d;
      }

      if (pIVar4 == (Instruction*)0x0) goto LAB_00116a5d;
   }
 else {
      local_68 = (Instruction**)std::__cxx11::string::_M_create((ulong*)&local_68, ( ulong ) & local_70);
      local_58[0] = local_70;
      ppIVar5 = local_68;
   }

   memcpy(ppIVar5, param_2, (size_t)pIVar4);
   ppIVar5 = local_68;
   LAB_00116a5d:*(Instruction*)( (long)ppIVar5 + (long)local_70 ) = (Instruction)0x0;
   local_60 = local_70;
   uVar3 = getStringId(this, (string*)&local_68);
   Instruction::addIdOperand(this_00, uVar3);
   if (local_68 != local_58) {
      operator_delete(local_68, ( ulong )(local_58[0] + 1));
   }

   Instruction::addIdOperand(this_00, param_3);
   uVar3 = makeUintConstant(this, 8, false);
   Instruction::addIdOperand(this_00, uVar3);
   local_70 = this_00;
   std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_70);
   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_70);
   Module::mapInstruction((Module*)( this + 400 ), this_00);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return *(undefined4*)( this_00 + 8 );
}
/* spv::Builder::createVariable(spv::Decoration, spv::StorageClass, unsigned int, char const*,
   unsigned int, bool) */int spv::Builder::createVariable(Builder *this, int param_2, uint param_3, uint param_4, char *param_5, uint param_6, char param_7) {
   long lVar1;
   undefined4 uVar2;
   int iVar3;
   uint uVar4;
   Instruction *this_00;
   uint *puVar5;
   undefined4 *puVar6;
   long in_FS_OFFSET;
   uint local_5c[3];
   undefined8 local_50;
   Instruction *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_5c[0] = param_4;
   uVar2 = makePointer(this, param_3, param_4);
   this_00 = (Instruction*)operator_new(0x60);
   iVar3 = *(int*)( this + 0x1d0 );
   *(undefined4*)( this_00 + 0xc ) = uVar2;
   *(undefined4*)( this_00 + 0x10 ) = 0x3b;
   *(int*)( this + 0x1d0 ) = iVar3 + 1;
   *(undefined***)this_00 = &PTR__Instruction_0011c5f0;
   *(int*)( this_00 + 8 ) = iVar3 + 1;
   *(undefined4*)( this_00 + 0x38 ) = 0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined4*)( this_00 + 0x48 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x50 ) = (undefined1[16])0x0;
   Instruction::addImmediateOperand(this_00, param_3);
   if (param_6 != 0) {
      Instruction::addIdOperand(this_00, param_6);
   }

   local_48 = this_00;
   if (param_3 == 7) {
      local_50 = 0;
      lVar1 = *(long*)( *(long*)( this + 0x1c8 ) + 0x68 );
      std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( **(long**)( lVar1 + 0x90 ) + 0x50 ), (unique_ptr*)&local_48);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
      Module::mapInstruction(*(Module**)( lVar1 + 8 ), this_00);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_50);
      if (( this[0xea] == (Builder)0x1 ) && ( param_7 == '\0' )) {
         puVar5 = (uint*)std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator []((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)( this + 0x518 ), local_5c);
         uVar4 = createDebugLocalVariable(this, *puVar5, param_5, 0);
         local_48 = (Instruction*)CONCAT44(local_48._4_4_, *(undefined4*)( this_00 + 8 ));
         puVar5 = (uint*)std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator []((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)( this + 0x518 ), (uint*)&local_48);
         *puVar5 = uVar4;
         makeDebugDeclare(this, uVar4, *(uint*)( this_00 + 8 ));
      }

   }
 else {
      std::vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>*)( this + 0x2d0 ), (unique_ptr*)&local_48);
      std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)&local_48);
      Module::mapInstruction((Module*)( this + 400 ), this_00);
      if (this[0xea] != (Builder)0x0) {
         uVar4 = *(uint*)( this_00 + 8 );
         puVar5 = (uint*)std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator []((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)( this + 0x518 ), local_5c);
         uVar2 = createDebugGlobalVariable(this, *puVar5, param_5, uVar4);
         local_48 = (Instruction*)CONCAT44(local_48._4_4_, *(undefined4*)( this_00 + 8 ));
         puVar6 = (undefined4*)std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator []((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)( this + 0x518 ), (uint*)&local_48);
         *puVar6 = uVar2;
      }

   }

   if (param_5 != (char*)0x0) {
      addName(this, *(uint*)( this_00 + 8 ), param_5);
   }

   iVar3 = *(int*)( this_00 + 8 );
   if (( param_2 != 0x7fffffff ) && ( iVar3 != 0 )) {
      addDecoration(this, iVar3, param_2, 0xffffffff);
      iVar3 = *(int*)( this_00 + 8 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* spv::Builder::accessChainLoad(spv::Decoration, spv::Decoration, spv::Decoration, unsigned int,
   spv::MemoryAccessMask, spv::Scope, unsigned int) */ulong spv::Builder::accessChainLoad(Builder *this, int param_2, int param_3, int param_4, uint param_5, uint param_6, undefined4 param_7, uint param_8) {
   long lVar1;
   long lVar2;
   undefined4 uVar3;
   uint uVar4;
   long *plVar5;
   ulong uVar6;
   uint uVar7;
   long lVar8;
   long lVar9;
   undefined4 *puVar10;
   ulong uVar11;
   Builder *this_00;
   long lVar12;
   void *pvVar13;
   long in_FS_OFFSET;
   undefined4 local_5c;
   undefined1 local_58[16];
   undefined4 *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x230] == (Builder)0x0) {
      transferAccessChainSwizzle(this, true);
      plVar5 = *(long**)( this + 0x1b0 );
      if (plVar5[*(uint*)( this + 0x1e8 )] != 0) {
         plVar5 = plVar5 + *(uint*)( plVar5[*(uint*)( this + 0x1e8 )] + 0xc );
      }

      if (**(int**)( *plVar5 + 0x18 ) == 0x14e5) {
         param_6 = param_6 | 2;
      }

      uVar3 = collapseAccessChain(this);
      if (param_3 != 0x7fffffff) {
         addDecoration(this, uVar3, param_3, 0xffffffff);
      }

      uVar4 = createLoad(this, uVar3, param_2, param_6, param_7, -param_8 & param_8);
      uVar6 = (ulong)uVar4;
      if (param_4 != 0x7fffffff) {
         addDecoration(this, uVar4, param_4, 0xffffffff);
      }

   }
 else {
      transferAccessChainSwizzle(this, false);
      lVar8 = *(long*)( this + 0x1f8 );
      lVar9 = *(long*)( this + 0x1f0 );
      if (lVar9 == lVar8) {
         uVar6 = ( ulong ) * (uint*)( this + 0x1e8 );
      }
 else {
         local_48 = (undefined4*)0x0;
         local_58 = (undefined1[16])0x0;
         uVar4 = *(uint*)( this + 0x22c );
         if (*(uint*)( this + 0x22c ) == 0) {
            uVar4 = param_5;
         }

         if ((int)( lVar8 - lVar9 >> 2 ) < 1) {
            uVar11 = 0;
            pvVar13 = (void*)0x0;
         }
 else {
            lVar12 = 0;
            puVar10 = (undefined4*)0x0;
            do {
               lVar1 = *(long*)( this + 0x1b0 );
               lVar2 = *(long*)( lVar1 + ( ulong ) * (uint*)( lVar9 + lVar12 * 4 ) * 8 );
               pvVar13 = (void*)local_58._0_8_;
               if (*(int*)( lVar2 + 0x10 ) != 0x2b) {
                  uVar11 = (long)puVar10 - local_58._0_8_;
                  lVar8 = *(long*)( lVar1 + ( ulong ) * (uint*)( this + 0x1e8 ) * 8 );
                  if (*(uint*)( this + 0x40 ) < 0x10400) {
                     uVar6 = 0;
                     if (lVar8 != 0) goto LAB_0011718e;
                     LAB_00117191:uVar3 = createVariable(this, 0x7fffffff, 7, uVar6, "indexable", 0, 1);
                     createStore(this, *(undefined4*)( this + 0x1e8 ), uVar3, 0, 0x7fffffff, 0);
                  }
 else {
                     uVar4 = *(uint*)( lVar8 + 0x10 );
                     if (0x34 < uVar4) {
                        if (uVar4 == 0x3b) {
                           uVar6 = ( ulong ) * (uint*)( lVar8 + 0xc );
                           if (**(int**)( *(long*)( lVar1 + uVar6 * 8 ) + 0x18 ) == 7) goto LAB_00117191;
                           goto LAB_00117263;
                        }

                        LAB_0011718e:uVar6 = ( ulong ) * (uint*)( lVar8 + 0xc );
                        goto LAB_00117191;
                     }

                     if (( 0x1f7e0000000002U >> ( (ulong)uVar4 & 0x3f ) & 1 ) == 0) goto LAB_0011718e;
                     uVar6 = ( ulong ) * (uint*)( lVar8 + 0xc );
                     LAB_00117263:uVar3 = createVariable(this, 0x7fffffff, 7, uVar6, "indexable", ( ulong ) * (uint*)( this + 0x1e8 ), 1);
                     addDecoration(this, uVar3, 0x18, 0xffffffff);
                  }

                  *(undefined4*)( this + 0x1e8 ) = uVar3;
                  this[0x230] = (Builder)0x0;
                  uVar3 = collapseAccessChain(this);
                  uVar4 = createLoad(this, uVar3, param_2, 0, 0x7fffffff, 0);
                  goto LAB_00117205;
               }

               local_5c = **(undefined4**)( lVar2 + 0x18 );
               if ((undefined4*)local_58._8_8_ == puVar10) {
                  std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>((vector<unsigned_int,std::allocator<unsigned_int>>*)local_58, puVar10, &local_5c);
                  lVar8 = *(long*)( this + 0x1f8 );
                  lVar9 = *(long*)( this + 0x1f0 );
                  puVar10 = local_48;
               }
 else {
                  *(undefined4*)local_58._8_8_ = local_5c;
                  local_58._8_8_ = (undefined4*)( local_58._8_8_ + 4 );
               }

               lVar12 = lVar12 + 1;
            }
 while ( (int)lVar12 < (int)( lVar8 - lVar9 >> 2 ) );
            uVar11 = (long)puVar10 - local_58._0_8_;
            pvVar13 = (void*)local_58._0_8_;
         }

         uVar4 = createCompositeExtract(this, *(uint*)( this + 0x1e8 ), uVar4, (vector*)local_58);
         setPrecision(this, uVar4, param_2);
         LAB_00117205:uVar6 = (ulong)uVar4;
         if (pvVar13 != (void*)0x0) {
            operator_delete(pvVar13, uVar11);
         }

      }

   }

   uVar4 = (uint)uVar6;
   if (*(long*)( this + 0x218 ) == *(long*)( this + 0x210 )) {
      uVar7 = *(uint*)( this + 0x228 );
      if (uVar7 == 0) goto LAB_001170d9;
      LAB_0011711b:uVar4 = createVectorExtractDynamic(this, uVar4, param_5, uVar7);
      uVar6 = (ulong)uVar4;
      if (( param_2 != 0x7fffffff ) && ( uVar4 != 0 )) {
         addDecoration(this, uVar4, param_2, 0xffffffff);
      }

   }
 else {
      uVar4 = 0;
      lVar8 = *(long*)( *(long*)( this + 0x1b0 ) + uVar6 * 8 );
      if (lVar8 != 0) {
         uVar4 = *(uint*)( lVar8 + 0xc );
      }

      uVar11 = *(long*)( this + 0x218 ) - *(long*)( this + 0x210 );
      this_00 = this;
      uVar4 = getScalarTypeId(this, uVar4);
      if (4 < uVar11) {
         uVar4 = makeVectorType(this_00, uVar4, (int)( (long)uVar11 >> 2 ));
      }

      uVar4 = createRvalueSwizzle(this, param_2, uVar4, uVar6, this + 0x210);
      uVar7 = *(uint*)( this + 0x228 );
      uVar6 = (ulong)uVar4;
      if (uVar7 != 0) goto LAB_0011711b;
   }

   if (param_4 != 0x7fffffff) {
      addDecoration(this, uVar6, param_4, 0xffffffff);
   }

   LAB_001170d9:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
}
/* spv::Builder::setupDebugFunctionEntry(spv::Function*, char const*, int, std::vector<unsigned int,
   std::allocator<unsigned int> > const&, std::vector<char const*, std::allocator<char const*> >
   const&) */void spv::Builder::setupDebugFunctionEntry(Builder *this, Function *param_1, char *param_2, int param_3, vector *param_4, vector *param_5) {
   map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>> *this_00;
   Builder *pBVar1;
   Builder BVar2;
   char *pcVar3;
   void *pvVar4;
   Builder *pBVar5;
   uint uVar6;
   uint uVar7;
   uint *puVar8;
   Builder *pBVar9;
   long lVar10;
   Builder *pBVar11;
   ulong uVar12;
   Builder BVar13;
   long in_FS_OFFSET;
   uint local_a0;
   uint local_9c;
   uint local_98;
   uint local_94;
   uint *local_90;
   long *local_88[2];
   long local_78[2];
   long *local_68[2];
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   BVar2 = this[0xea];
   if (BVar2 != (Builder)0x0) {
      *(int*)( this + 0x84 ) = param_3;
      std::__cxx11::string::string<std::allocator<char>>((string*)local_88, param_2, (allocator*)&local_90);
      unmangleFunctionName((string*)local_68);
      uVar6 = getStringId(this, (string*)local_68);
      if (local_68[0] != local_58) {
         operator_delete(local_68[0], local_58[0] + 1);
      }

      if (local_88[0] != local_78) {
         operator_delete(local_88[0], local_78[0] + 1);
      }

      local_a0 = *(uint*)( param_1 + 0x20 );
      uVar6 = makeDebugFunction(this, param_1, uVar6, *(uint*)( *(long*)( param_1 + 0x30 ) + 4 ));
      this_00 = (map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)( this + 0x518 );
      local_9c = uVar6;
      puVar8 = (uint*)std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator [](this_00, &local_a0);
      lVar10 = *(long*)( this + 0xd8 );
      *puVar8 = uVar6;
      puVar8 = *(uint**)( this + 200 );
      if (puVar8 == (uint*)( lVar10 + -4 )) {
         std::deque<unsigned_int,std::allocator<unsigned_int>>::_M_push_back_aux<unsigned_int_const&>((deque<unsigned_int,std::allocator<unsigned_int>>*)( this + 0x98 ), &local_9c);
      }
 else {
         *puVar8 = uVar6;
         *(uint**)( this + 200 ) = puVar8 + 1;
      }

      lVar10 = *(long*)param_4;
      if (( 0 < (int)( *(long*)( param_4 + 8 ) - lVar10 >> 2 ) ) && ( uVar6 = *(uint*)( **(long**)( param_1 + 0x78 ) + 8 ) * (long*)( param_4 + 8 ) != lVar10 )) {
         uVar12 = 0;
         pBVar1 = this + 0x520;
         do {
            local_98 = *(uint*)( lVar10 + uVar12 * 4 );
            BVar13 = (Builder)0x0;
            if (( *(int*)( *(long*)( *(long*)( this + 0x1b0 ) + (ulong)local_98 * 8 ) + 0x10 ) - 0x1cU & 0xfffffffb ) == 0) {
               local_98 = getContainedTypeId(this, local_98, 0);
               BVar13 = BVar2;
            }

            lVar10 = uVar12 * 8;
            uVar12 = uVar12 + 1;
            pcVar3 = *(char**)( *(long*)param_5 + lVar10 );
            pBVar5 = *(Builder**)( this + 0x528 );
            pBVar9 = pBVar1;
            if (*(Builder**)( this + 0x528 ) == (Builder*)0x0) {
               LAB_00117532:local_90 = &local_98;
               pBVar9 = (Builder*)std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<unsigned_int_const&>,std::tuple<>>(this_00, pBVar9, (allocator*)&local_90);
            }
 else {
               do {
                  while (true) {
                     pBVar11 = pBVar5;
                     if (*(uint*)( pBVar11 + 0x20 ) < local_98) break;
                     pBVar5 = *(Builder**)( pBVar11 + 0x10 );
                     pBVar9 = pBVar11;
                     if (*(Builder**)( pBVar11 + 0x10 ) == (Builder*)0x0) goto LAB_00117528;
                  }
;
                  pBVar5 = *(Builder**)( pBVar11 + 0x18 );
               }
 while ( *(Builder**)( pBVar11 + 0x18 ) != (Builder*)0x0 );
               LAB_00117528:if (( pBVar1 == pBVar9 ) || ( local_98 < *(uint*)( pBVar9 + 0x20 ) )) goto LAB_00117532;
            }

            uVar7 = createDebugLocalVariable(this, *(uint*)( pBVar9 + 0x24 ), pcVar3, uVar12);
            pBVar5 = *(Builder**)( this + 0x528 );
            pBVar9 = pBVar1;
            local_94 = uVar6;
            if (*(Builder**)( this + 0x528 ) == (Builder*)0x0) {
               LAB_001175b7:local_90 = &local_94;
               pBVar9 = (Builder*)std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<unsigned_int_const&>,std::tuple<>>(this_00, pBVar9, (allocator*)&local_90);
            }
 else {
               do {
                  while (true) {
                     pBVar11 = pBVar5;
                     if (*(uint*)( pBVar11 + 0x20 ) < uVar6) break;
                     pBVar5 = *(Builder**)( pBVar11 + 0x10 );
                     pBVar9 = pBVar11;
                     if (*(Builder**)( pBVar11 + 0x10 ) == (Builder*)0x0) goto LAB_001175a9;
                  }
;
                  pBVar5 = *(Builder**)( pBVar11 + 0x18 );
               }
 while ( *(Builder**)( pBVar11 + 0x18 ) != (Builder*)0x0 );
               LAB_001175a9:if (( pBVar9 == pBVar1 ) || ( uVar6 < *(uint*)( pBVar9 + 0x20 ) )) goto LAB_001175b7;
            }

            *(uint*)( pBVar9 + 0x24 ) = uVar7;
            if (BVar13 == (Builder)0x0) {
               makeDebugValue(this, uVar7, local_94);
            }
 else {
               makeDebugDeclare(this, uVar7, local_94);
            }

            lVar10 = *(long*)param_4;
            uVar6 = uVar6 + 1;
         }
 while ( uVar12 < ( ulong )(*(long*)( param_4 + 8 ) - lVar10 >> 2) );
      }

      if (this[0xea] != (Builder)0x0) {
         pvVar4 = *(void**)( this + 200 );
         if (pvVar4 == *(void**)( this + 0xd0 )) {
            operator_delete(pvVar4, 0x200);
            lVar10 = *(long*)( *(long*)( this + 0xe0 ) + -8 );
            *(long*)( this + 0xe0 ) = *(long*)( this + 0xe0 ) + -8;
            *(long*)( this + 0xd0 ) = lVar10;
            *(long*)( this + 0xd8 ) = lVar10 + 0x200;
            *(long*)( this + 200 ) = lVar10 + 0x1fc;
         }
 else {
            *(long*)( this + 200 ) = (long)pvVar4 + -4;
         }

      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* std::_Function_handler<void (spv::Block*, spv::ReachReason, spv::Block*),
   spv::Function::dump(std::vector<unsigned int, std::allocator<unsigned int> >&)
   const::{lambda(spv::Block const*, spv::ReachReason, spv::Block*)#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */undefined8 std::_Function_handler<void(spv::Block *, spv::ReachReason, spv::Block *),spv::Function::dump(std::vector<unsigned_int,std::allocator<unsigned_int>>&)const::{lambda(spv::Block_const*,spv::ReachReason,spv::Block*)#1}>::_M_manager(undefined8 *param_1, undefined8 *param_2, int param_3) {
   if (param_3 != 0) {
      if (param_3 == 1) {
         *param_1 = param_2;
      }
 else if (param_3 == 2) {
         *param_1 = *param_2;
      }

      return 0;
   }

   *param_1 = &const::{lambda;
   return 0;
}
/* spv::Module::~Module() */void spv::Module::~Module(Module *this) {
   void *pvVar1;
   *(undefined***)this = &PTR__Module_0011c650;
   pvVar1 = *(void**)( this + 0x20 );
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, *(long*)( this + 0x30 ) - (long)pvVar1);
   }

   pvVar1 = *(void**)( this + 8 );
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, *(long*)( this + 0x18 ) - (long)pvVar1);
      return;
   }

   return;
}
/* spv::Module::~Module() */void spv::Module::~Module(Module *this) {
   void *pvVar1;
   *(undefined***)this = &PTR__Module_0011c650;
   pvVar1 = *(void**)( this + 0x20 );
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, *(long*)( this + 0x30 ) - (long)pvVar1);
   }

   pvVar1 = *(void**)( this + 8 );
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, *(long*)( this + 0x18 ) - (long)pvVar1);
   }

   operator_delete(this, 0x38);
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
/* spv::Instruction::~Instruction() */void spv::Instruction::~Instruction(Instruction *this) {
   void *pvVar1;
   *(undefined***)this = &PTR__Instruction_0011c5f0;
   pvVar1 = *(void**)( this + 0x30 );
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, *(long*)( this + 0x50 ) - (long)pvVar1);
   }

   pvVar1 = *(void**)( this + 0x18 );
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, *(long*)( this + 0x28 ) - (long)pvVar1);
      return;
   }

   return;
}
/* spv::Instruction::~Instruction() */void spv::Instruction::~Instruction(Instruction *this) {
   void *pvVar1;
   *(undefined***)this = &PTR__Instruction_0011c5f0;
   pvVar1 = *(void**)( this + 0x30 );
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, *(long*)( this + 0x50 ) - (long)pvVar1);
   }

   pvVar1 = *(void**)( this + 0x18 );
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, *(long*)( this + 0x28 ) - (long)pvVar1);
   }

   operator_delete(this, 0x60);
   return;
}
/* spv::Block::~Block() */void spv::Block::~Block(Block *this) {
   undefined8 *puVar1;
   long *plVar2;
   void *pvVar3;
   undefined8 *puVar4;
   puVar1 = *(undefined8**)( this + 0x58 );
   puVar4 = *(undefined8**)( this + 0x50 );
   *(undefined***)this = &PTR__Block_0011c610;
   if (puVar1 != puVar4) {
      do {
         while (plVar2 = (long*)*puVar4,plVar2 == (long*)0x0) {
            LAB_00117a8a:puVar4 = puVar4 + 1;
            if (puVar1 == puVar4) goto LAB_00117ac0;
         }
;
         if (*(code**)( *plVar2 + 8 ) == Instruction::~Instruction) {
            pvVar3 = (void*)plVar2[6];
            *plVar2 = (long)&PTR__Instruction_0011c5f0;
            if (pvVar3 != (void*)0x0) {
               operator_delete(pvVar3, plVar2[10] - (long)pvVar3);
            }

            pvVar3 = (void*)plVar2[3];
            if (pvVar3 != (void*)0x0) {
               operator_delete(pvVar3, plVar2[5] - (long)pvVar3);
            }

            operator_delete(plVar2, 0x60);
            goto LAB_00117a8a;
         }

         puVar4 = puVar4 + 1;
         ( **(code**)( *plVar2 + 8 ) )(plVar2);
      }
 while ( puVar1 != puVar4 );
      LAB_00117ac0:puVar4 = *(undefined8**)( this + 0x50 );
   }

   if (puVar4 != (undefined8*)0x0) {
      operator_delete(puVar4, *(long*)( this + 0x60 ) - (long)puVar4);
   }

   pvVar3 = *(void**)( this + 0x38 );
   if (pvVar3 != (void*)0x0) {
      operator_delete(pvVar3, *(long*)( this + 0x48 ) - (long)pvVar3);
   }

   pvVar3 = *(void**)( this + 0x20 );
   if (pvVar3 != (void*)0x0) {
      operator_delete(pvVar3, *(long*)( this + 0x30 ) - (long)pvVar3);
   }

   puVar1 = *(undefined8**)( this + 0x10 );
   puVar4 = *(undefined8**)( this + 8 );
   if (puVar1 != puVar4) {
      do {
         while (plVar2 = (long*)*puVar4,plVar2 == (long*)0x0) {
            LAB_00117b6a:puVar4 = puVar4 + 1;
            if (puVar1 == puVar4) goto LAB_00117ba0;
         }
;
         if (*(code**)( *plVar2 + 8 ) == Instruction::~Instruction) {
            pvVar3 = (void*)plVar2[6];
            *plVar2 = (long)&PTR__Instruction_0011c5f0;
            if (pvVar3 != (void*)0x0) {
               operator_delete(pvVar3, plVar2[10] - (long)pvVar3);
            }

            pvVar3 = (void*)plVar2[3];
            if (pvVar3 != (void*)0x0) {
               operator_delete(pvVar3, plVar2[5] - (long)pvVar3);
            }

            operator_delete(plVar2, 0x60);
            goto LAB_00117b6a;
         }

         puVar4 = puVar4 + 1;
         ( **(code**)( *plVar2 + 8 ) )(plVar2);
      }
 while ( puVar1 != puVar4 );
      LAB_00117ba0:puVar4 = *(undefined8**)( this + 8 );
   }

   if (puVar4 == (undefined8*)0x0) {
      return;
   }

   operator_delete(puVar4, *(long*)( this + 0x18 ) - (long)puVar4);
   return;
}
/* spv::Block::~Block() */void spv::Block::~Block(Block *this) {
   undefined8 *puVar1;
   long *plVar2;
   void *pvVar3;
   undefined8 *puVar4;
   puVar1 = *(undefined8**)( this + 0x58 );
   puVar4 = *(undefined8**)( this + 0x50 );
   *(undefined***)this = &PTR__Block_0011c610;
   if (puVar1 != puVar4) {
      do {
         while (plVar2 = (long*)*puVar4,plVar2 == (long*)0x0) {
            LAB_00117c5a:puVar4 = puVar4 + 1;
            if (puVar1 == puVar4) goto LAB_00117c90;
         }
;
         if (*(code**)( *plVar2 + 8 ) == Instruction::~Instruction) {
            pvVar3 = (void*)plVar2[6];
            *plVar2 = (long)&PTR__Instruction_0011c5f0;
            if (pvVar3 != (void*)0x0) {
               operator_delete(pvVar3, plVar2[10] - (long)pvVar3);
            }

            pvVar3 = (void*)plVar2[3];
            if (pvVar3 != (void*)0x0) {
               operator_delete(pvVar3, plVar2[5] - (long)pvVar3);
            }

            operator_delete(plVar2, 0x60);
            goto LAB_00117c5a;
         }

         puVar4 = puVar4 + 1;
         ( **(code**)( *plVar2 + 8 ) )(plVar2);
      }
 while ( puVar1 != puVar4 );
      LAB_00117c90:puVar4 = *(undefined8**)( this + 0x50 );
   }

   if (puVar4 != (undefined8*)0x0) {
      operator_delete(puVar4, *(long*)( this + 0x60 ) - (long)puVar4);
   }

   pvVar3 = *(void**)( this + 0x38 );
   if (pvVar3 != (void*)0x0) {
      operator_delete(pvVar3, *(long*)( this + 0x48 ) - (long)pvVar3);
   }

   pvVar3 = *(void**)( this + 0x20 );
   if (pvVar3 != (void*)0x0) {
      operator_delete(pvVar3, *(long*)( this + 0x30 ) - (long)pvVar3);
   }

   puVar1 = *(undefined8**)( this + 0x10 );
   puVar4 = *(undefined8**)( this + 8 );
   if (puVar1 != puVar4) {
      do {
         while (plVar2 = (long*)*puVar4,plVar2 == (long*)0x0) {
            LAB_00117d3a:puVar4 = puVar4 + 1;
            if (puVar1 == puVar4) goto LAB_00117d70;
         }
;
         if (*(code**)( *plVar2 + 8 ) == Instruction::~Instruction) {
            pvVar3 = (void*)plVar2[6];
            *plVar2 = (long)&PTR__Instruction_0011c5f0;
            if (pvVar3 != (void*)0x0) {
               operator_delete(pvVar3, plVar2[10] - (long)pvVar3);
            }

            pvVar3 = (void*)plVar2[3];
            if (pvVar3 != (void*)0x0) {
               operator_delete(pvVar3, plVar2[5] - (long)pvVar3);
            }

            operator_delete(plVar2, 0x60);
            goto LAB_00117d3a;
         }

         puVar4 = puVar4 + 1;
         ( **(code**)( *plVar2 + 8 ) )(plVar2);
      }
 while ( puVar1 != puVar4 );
      LAB_00117d70:puVar4 = *(undefined8**)( this + 8 );
   }

   if (puVar4 != (undefined8*)0x0) {
      operator_delete(puVar4, *(long*)( this + 0x18 ) - (long)puVar4);
   }

   operator_delete(this, 0x90);
   return;
}
/* std::vector<unsigned int, std::allocator<unsigned int> >::~vector() */void std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector(vector<unsigned_int,std::allocator<unsigned_int>> *this) {
   void *pvVar1;
   pvVar1 = *(void**)this;
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, *(long*)( this + 0x10 ) - (long)pvVar1);
      return;
   }

   return;
}
/* std::unique_ptr<spv::Instruction, std::default_delete<spv::Instruction> >::~unique_ptr() */void std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr(unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>> *this) {
   long *plVar1;
   void *pvVar2;
   plVar1 = *(long**)this;
   if (plVar1 == (long*)0x0) {
      return;
   }

   if (*(code**)( *plVar1 + 8 ) == spv::Instruction::~Instruction) {
      pvVar2 = (void*)plVar1[6];
      *plVar1 = (long)&PTR__Instruction_0011c5f0;
      if (pvVar2 != (void*)0x0) {
         operator_delete(pvVar2, plVar1[10] - (long)pvVar2);
      }

      pvVar2 = (void*)plVar1[3];
      if (pvVar2 != (void*)0x0) {
         operator_delete(pvVar2, plVar1[5] - (long)pvVar2);
      }

      operator_delete(plVar1, 0x60);
      return;
   }

   /* WARNING: Could not recover jumptable at 0x00117ea4. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 8 ) )(plVar1);
   return;
}
/* spv::Function::~Function() */void spv::Function::~Function(Function *this) {
   long *plVar1;
   undefined8 *puVar2;
   void *pvVar3;
   long *plVar4;
   void *pvVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   undefined8 *puVar9;
   long local_40;
   lVar8 = 0;
   lVar6 = *(long*)( this + 0x80 );
   lVar7 = *(long*)( this + 0x78 );
   *(undefined***)this = &PTR__Function_0011c630;
   if (0 < (int)( lVar6 - lVar7 >> 3 )) {
      do {
         plVar1 = *(long**)( lVar7 + lVar8 * 8 );
         if (plVar1 != (long*)0x0) {
            if (*(code**)( *plVar1 + 8 ) == Instruction::~Instruction) {
               pvVar3 = (void*)plVar1[6];
               *plVar1 = (long)&PTR__Instruction_0011c5f0;
               if (pvVar3 != (void*)0x0) {
                  operator_delete(pvVar3, plVar1[10] - (long)pvVar3);
               }

               pvVar3 = (void*)plVar1[3];
               if (pvVar3 != (void*)0x0) {
                  operator_delete(pvVar3, plVar1[5] - (long)pvVar3);
               }

               operator_delete(plVar1, 0x60);
               lVar7 = *(long*)( this + 0x78 );
               lVar6 = *(long*)( this + 0x80 );
            }
 else {
               ( **(code**)( *plVar1 + 8 ) )(plVar1);
               lVar7 = *(long*)( this + 0x78 );
               lVar6 = *(long*)( this + 0x80 );
            }

         }

         lVar8 = lVar8 + 1;
      }
 while ( (int)lVar8 < (int)( lVar6 - lVar7 >> 3 ) );
   }

   lVar6 = *(long*)( this + 0x98 );
   lVar7 = *(long*)( this + 0x90 );
   local_40 = 0;
   if (0 < (int)( lVar6 - lVar7 >> 3 )) {
      do {
         plVar1 = *(long**)( lVar7 + local_40 * 8 );
         if (plVar1 != (long*)0x0) {
            if (*(code**)( *plVar1 + 8 ) == Block::~Block) {
               puVar9 = (undefined8*)plVar1[10];
               *plVar1 = (long)&PTR__Block_0011c610;
               puVar2 = (undefined8*)plVar1[0xb];
               if (puVar2 != puVar9) {
                  LAB_00118045:do {
                     plVar4 = (long*)*puVar9;
                     if (plVar4 != (long*)0x0) {
                        if (*(code**)( *plVar4 + 8 ) != Instruction::~Instruction) {
                           puVar9 = puVar9 + 1;
                           ( **(code**)( *plVar4 + 8 ) )(plVar4);
                           if (puVar2 == puVar9) break;
                           goto LAB_00118045;
                        }

                        pvVar3 = (void*)plVar4[6];
                        *plVar4 = (long)&PTR__Instruction_0011c5f0;
                        if (pvVar3 != (void*)0x0) {
                           operator_delete(pvVar3, plVar4[10] - (long)pvVar3);
                        }

                        pvVar3 = (void*)plVar4[3];
                        if (pvVar3 != (void*)0x0) {
                           operator_delete(pvVar3, plVar4[5] - (long)pvVar3);
                        }

                        operator_delete(plVar4, 0x60);
                     }

                     puVar9 = puVar9 + 1;
                  }
 while ( puVar2 != puVar9 );
                  puVar9 = (undefined8*)plVar1[10];
               }

               if (puVar9 != (undefined8*)0x0) {
                  operator_delete(puVar9, plVar1[0xc] - (long)puVar9);
               }

               pvVar3 = (void*)plVar1[7];
               if (pvVar3 != (void*)0x0) {
                  operator_delete(pvVar3, plVar1[9] - (long)pvVar3);
               }

               pvVar3 = (void*)plVar1[4];
               if (pvVar3 != (void*)0x0) {
                  operator_delete(pvVar3, plVar1[6] - (long)pvVar3);
               }

               puVar2 = (undefined8*)plVar1[2];
               puVar9 = (undefined8*)plVar1[1];
               if (puVar2 != puVar9) {
                  LAB_0011810d:do {
                     plVar4 = (long*)*puVar9;
                     if (plVar4 != (long*)0x0) {
                        if (*(code**)( *plVar4 + 8 ) != Instruction::~Instruction) {
                           puVar9 = puVar9 + 1;
                           ( **(code**)( *plVar4 + 8 ) )(plVar4);
                           if (puVar2 == puVar9) break;
                           goto LAB_0011810d;
                        }

                        pvVar3 = (void*)plVar4[6];
                        *plVar4 = (long)&PTR__Instruction_0011c5f0;
                        if (pvVar3 != (void*)0x0) {
                           operator_delete(pvVar3, plVar4[10] - (long)pvVar3);
                        }

                        pvVar3 = (void*)plVar4[3];
                        if (pvVar3 != (void*)0x0) {
                           operator_delete(pvVar3, plVar4[5] - (long)pvVar3);
                        }

                        operator_delete(plVar4, 0x60);
                     }

                     puVar9 = puVar9 + 1;
                  }
 while ( puVar2 != puVar9 );
                  puVar9 = (undefined8*)plVar1[1];
               }

               if (puVar9 != (undefined8*)0x0) {
                  operator_delete(puVar9, plVar1[3] - (long)puVar9);
               }

               operator_delete(plVar1, 0x90);
               lVar7 = *(long*)( this + 0x90 );
               lVar6 = *(long*)( this + 0x98 );
            }
 else {
               ( **(code**)( *plVar1 + 8 ) )(plVar1);
               lVar7 = *(long*)( this + 0x90 );
               lVar6 = *(long*)( this + 0x98 );
            }

         }

         local_40 = local_40 + 1;
      }
 while ( (int)local_40 < (int)( lVar6 - lVar7 >> 3 ) );
   }

   if (*(Function**)( this + 0xe8 ) != this + 0xf8) {
      operator_delete(*(Function**)( this + 0xe8 ), *(long*)( this + 0xf8 ) + 1);
   }

   pvVar3 = *(void**)( this + 0xc0 );
   while (pvVar3 != (void*)0x0) {
      std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(*(_Rb_tree_node**)( (long)pvVar3 + 0x18 ));
      pvVar5 = *(void**)( (long)pvVar3 + 0x10 );
      operator_delete(pvVar3, 0x28);
      pvVar3 = pvVar5;
   }
;
   pvVar3 = *(void**)( this + 0x90 );
   if (pvVar3 != (void*)0x0) {
      operator_delete(pvVar3, *(long*)( this + 0xa0 ) - (long)pvVar3);
   }

   pvVar3 = *(void**)( this + 0x78 );
   if (pvVar3 != (void*)0x0) {
      operator_delete(pvVar3, *(long*)( this + 0x88 ) - (long)pvVar3);
   }

   pvVar3 = *(void**)( this + 0x48 );
   *(undefined***)( this + 0x18 ) = &PTR__Instruction_0011c5f0;
   if (pvVar3 != (void*)0x0) {
      operator_delete(pvVar3, *(long*)( this + 0x68 ) - (long)pvVar3);
   }

   pvVar3 = *(void**)( this + 0x30 );
   if (pvVar3 != (void*)0x0) {
      operator_delete(pvVar3, *(long*)( this + 0x40 ) - (long)pvVar3);
   }

   std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>*)( this + 0x10 ));
   return;
}
/* spv::Function::~Function() */void spv::Function::~Function(Function *this) {
   ~Function(this)
   ;;
   operator_delete(this, 0x108);
   return;
}
/* std::__cxx11::string::string<std::allocator<char> >(char const*, std::allocator<char> const&) */void std::__cxx11::string::string<std::allocator<char>>(string *this, char *param_1, allocator *param_2) {
   size_t __n;
   string *__dest;
   long in_FS_OFFSET;
   size_t local_38;
   long local_30;
   __dest = this + 0x10;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(string**)this = __dest;
   if (param_1 == (char*)0x0) {
      /* WARNING: Subroutine does not return */
      std::__throw_logic_error("basic_string: construction from null is not valid");
   }

   __n = strlen(param_1);
   local_38 = __n;
   if (__n < 0x10) {
      if (__n == 1) {
         this[0x10] = ( string ) * param_1;
         goto LAB_00118327;
      }

      if (__n == 0) goto LAB_00118327;
   }
 else {
      __dest = (string*)std::__cxx11::string::_M_create((ulong*)this, ( ulong ) & local_38);
      *(string**)this = __dest;
      *(size_t*)( this + 0x10 ) = local_38;
   }

   memcpy(__dest, param_1, __n);
   __dest = *(string**)this;
   LAB_00118327:*(size_t*)( this + 8 ) = local_38;
   __dest[local_38] = (string)0x0;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* std::_Hashtable<unsigned int, std::pair<unsigned int const, std::vector<spv::Instruction*,
   std::allocator<spv::Instruction*> > >, std::allocator<std::pair<unsigned int const,
   std::vector<spv::Instruction*, std::allocator<spv::Instruction*> > > >,
   std::__detail::_Select1st, std::equal_to<unsigned int>, std::hash<unsigned int>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, false, true>
   >::~_Hashtable() */void std::_Hashtable<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::~_Hashtable(_Hashtable<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> *this) {
   undefined8 *puVar1;
   void *pvVar2;
   undefined8 *puVar3;
   puVar3 = *(undefined8**)( this + 0x10 );
   while (puVar3 != (undefined8*)0x0) {
      puVar1 = (undefined8*)*puVar3;
      pvVar2 = (void*)puVar3[2];
      if (pvVar2 != (void*)0x0) {
         operator_delete(pvVar2, puVar3[4] - (long)pvVar2);
      }

      operator_delete(puVar3, 0x28);
      puVar3 = puVar1;
   }
;
   memset(*(void**)this, 0, *(long*)( this + 8 ) * 8);
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x10 ) = 0;
   if (*(_Hashtable<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>**)this == this + 0x30) {
      return;
   }

   operator_delete(*(_Hashtable<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>**)this, *(long*)( this + 8 ) << 3);
   return;
}
/* std::map<unsigned int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<unsigned
   int const, unsigned int> > >::operator[](unsigned int const&) */map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>> * __thiscallstd::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator [](map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>> * this, uint * param_1) < unsigned_int < unsigned_int > std::allocator<std::pair<unsigned_int_const,unsigned_int>> > *pmVar1 ;map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>> *pmVar2map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>> *pmVar3map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>> *pmVar4long in_FS_OFFSETbool bVar5uint *local_18long local_10pmVar4 = this + 8;local_10 = *(long*)( in_FS_OFFSET + 0x28 );if (*(map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>**)( this + 0x10 ) != (map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)0x0) {
   pmVar1 = *(map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>**)( this + 0x10 );
   pmVar2 = pmVar4;
   do {
      while (true) {
         pmVar3 = pmVar1;
         if (*(uint*)( pmVar3 + 0x20 ) < *param_1) break;
         pmVar1 = *(map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>**)( pmVar3 + 0x10 );
         pmVar2 = pmVar3;
         if (*(map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>**)( pmVar3 + 0x10 ) == (map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)0x0) goto LAB_001184a0;
      }
;
      pmVar1 = *(map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>**)( pmVar3 + 0x18 );
   }
 while ( *(map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>**)( pmVar3 + 0x18 ) != (map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)0x0 );
   LAB_001184a0:bVar5 = pmVar4 != pmVar2;
   pmVar4 = pmVar2;
   if (( bVar5 ) && ( *(uint*)( pmVar2 + 0x20 ) <= *param_1 )) goto LAB_001184aa;
}
local_18 = param_1;pmVar2 = (map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<unsigned_int_const&>,std::tuple<>>(this, pmVar4, &local_18);LAB_001184aa:if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return pmVar2 + 0x24;}/* std::map<unsigned int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<unsigned
   int const, unsigned int> > >::operator[](unsigned int&&) */map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>> * __thiscallstd::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::operator [](map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>> * this, uint * param_1) < unsigned_int < unsigned_int > std::allocator<std::pair<unsigned_int_const,unsigned_int>> > *pmVar1 ;map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>> *pmVar2map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>> *pmVar3map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>> *pmVar4long in_FS_OFFSETbool bVar5uint *local_18long local_10pmVar4 = this + 8;local_10 = *(long*)( in_FS_OFFSET + 0x28 );if (*(map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>**)( this + 0x10 ) != (map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)0x0) {
   pmVar1 = *(map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>**)( this + 0x10 );
   pmVar2 = pmVar4;
   do {
      while (true) {
         pmVar3 = pmVar1;
         if (*(uint*)( pmVar3 + 0x20 ) < *param_1) break;
         pmVar1 = *(map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>**)( pmVar3 + 0x10 );
         pmVar2 = pmVar3;
         if (*(map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>**)( pmVar3 + 0x10 ) == (map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)0x0) goto LAB_00118540;
      }
;
      pmVar1 = *(map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>**)( pmVar3 + 0x18 );
   }
 while ( *(map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>**)( pmVar3 + 0x18 ) != (map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)0x0 );
   LAB_00118540:bVar5 = pmVar4 != pmVar2;
   pmVar4 = pmVar2;
   if (( bVar5 ) && ( *(uint*)( pmVar2 + 0x20 ) <= *param_1 )) goto LAB_0011854a;
}
local_18 = param_1;pmVar2 = (map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>*)_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<unsigned_int&&>,std::tuple<>>(this, pmVar4, &local_18);LAB_0011854a:if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return pmVar2 + 0x24;}/* std::vector<bool, std::allocator<bool> >::_M_reallocate(unsigned long) */void std::vector<bool,std::allocator<bool>>::_M_reallocate(vector<bool,std::allocator<bool>> *this, ulong param_1) {
   uint uVar1;
   undefined8 *__src;
   undefined8 *__dest;
   ulong uVar2;
   ulong uVar3;
   int iVar4;
   ulong uVar5;
   ulong uVar6;
   ulong *puVar7;
   ulong *puVar8;
   size_t __n;
   uVar6 = param_1 + 0x3f >> 6;
   __dest = (undefined8*)operator_new(uVar6 * 8);
   puVar7 = *(ulong**)( this + 0x10 );
   __src = *(undefined8**)this;
   uVar1 = *(uint*)( this + 0x18 );
   __n = (long)puVar7 - (long)__src;
   if ((long)__n < 9) {
      if (__n == 8) {
         *__dest = *__src;
      }

   }
 else {
      memmove(__dest, __src, __n);
   }

   puVar8 = (ulong*)( (long)__dest + __n );
   iVar4 = 0;
   for (uVar5 = (ulong)uVar1; uVar5 != 0; uVar5 = uVar5 - 1) {
      while (true) {
         uVar2 = 1L << ( (byte)iVar4 & 0x3f );
         uVar3 = ~uVar2 & *puVar8;
         if (( *puVar7 & uVar2 ) != 0) {
            uVar3 = uVar2 | *puVar8;
         }

         *puVar8 = uVar3;
         if (iVar4 != 0x3f) break;
         puVar7 = puVar7 + 1;
         puVar8 = puVar8 + 1;
         iVar4 = 0;
         uVar5 = uVar5 - 1;
         if (uVar5 == 0) goto LAB_00118654;
      }
;
      iVar4 = iVar4 + 1;
   }

   LAB_00118654:if (__src != (undefined8*)0x0) {
      operator_delete(__src, *(long*)( this + 0x20 ) - (long)__src);
   }

   *(undefined8**)this = __dest;
   *(undefined4*)( this + 8 ) = 0;
   *(ulong**)( this + 0x10 ) = puVar8;
   *(undefined8**)( this + 0x20 ) = __dest + uVar6;
   *(int*)( this + 0x18 ) = iVar4;
   return;
}
/* spv::Instruction::reserveOperands(unsigned long) */void spv::Instruction::reserveOperands(Instruction *this, ulong param_1) {
   long lVar1;
   long lVar2;
   void *__src;
   void *__dest;
   ulong uVar3;
   if (param_1 >> 0x3d != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::reserve");
   }

   lVar1 = *(long*)( this + 0x18 );
   if (param_1 <= ( ulong )(*(long*)( this + 0x28 ) - lVar1 >> 2)) goto LAB_0011871d;
   lVar2 = *(long*)( this + 0x20 );
   __dest = operator_new(param_1 * 4);
   __src = *(void**)( this + 0x18 );
   if (*(long*)( this + 0x20 ) - (long)__src < 1) {
      if (__src != (void*)0x0) {
         uVar3 = *(long*)( this + 0x28 ) - (long)__src;
         goto LAB_001187c2;
      }

   }
 else {
      memmove(__dest, __src, *(long*)( this + 0x20 ) - (long)__src);
      uVar3 = *(long*)( this + 0x28 ) - (long)__src;
      LAB_001187c2:operator_delete(__src, uVar3);
   }

   *(void**)( this + 0x18 ) = __dest;
   *(long*)( this + 0x20 ) = ( lVar2 - lVar1 ) + (long)__dest;
   *(void**)( this + 0x28 ) = (void*)( (long)__dest + param_1 * 4 );
   LAB_0011871d:if (param_1 <= ( ulong )(( *(long*)( this + 0x50 ) - *(long*)( this + 0x30 ) ) * 8)) {
      return;
   }

   std::vector<bool,std::allocator<bool>>::_M_reallocate((vector<bool,std::allocator<bool>>*)( this + 0x30 ), param_1);
   return;
}
/* void std::vector<unsigned int, std::allocator<unsigned int> >::_M_realloc_insert<unsigned int
   const&>(__gnu_cxx::__normal_iterator<unsigned int*, std::vector<unsigned int,
   std::allocator<unsigned int> > >, unsigned int const&) */void std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>(vector<unsigned_int,std::allocator<unsigned_int>> *this, void *param_2, undefined4 *param_3) {
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
   uVar2 = (long)pvVar1 - (long)__src >> 2;
   if (uVar2 == 0x1fffffffffffffff) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   __n = (long)param_2 - (long)__src;
   if (__src == pvVar1) {
      if (0xfffffffffffffffe < uVar2) goto LAB_001188c0;
      uVar3 = 0x1fffffffffffffff;
      if (uVar2 + 1 < 0x2000000000000000) {
         uVar3 = uVar2 + 1;
      }

      uVar3 = uVar3 << 2;
      LAB_001188ca:__dest_00 = operator_new(uVar3);
      lVar4 = uVar3 + (long)__dest_00;
   }
 else {
      uVar3 = uVar2 * 2;
      if (uVar3 < uVar2) {
         LAB_001188c0:uVar3 = 0x7ffffffffffffffc;
         goto LAB_001188ca;
      }

      if (uVar3 != 0) {
         if (0x1fffffffffffffff < uVar3) {
            uVar3 = 0x1fffffffffffffff;
         }

         uVar3 = uVar3 * 4;
         goto LAB_001188ca;
      }

      lVar4 = 0;
      __dest_00 = (void*)0x0;
   }

   __dest = (void*)( (long)__dest_00 + __n + 4 );
   __n_00 = (long)pvVar1 - (long)param_2;
   *(undefined4*)( (long)__dest_00 + __n ) = *param_3;
   if ((long)__n < 1) {
      if (0 < (long)__n_00) {
         memcpy(__dest, param_2, __n_00);
      }

      if (__src == (void*)0x0) goto LAB_0011889b;
   }
 else {
      __dest_00 = memmove(__dest_00, __src, __n);
      if (0 < (long)__n_00) {
         memcpy(__dest, param_2, __n_00);
      }

   }

   operator_delete(__src, *(long*)( this + 0x10 ) - (long)__src);
   LAB_0011889b:*(void**)this = __dest_00;
   *(size_t*)( this + 8 ) = (long)__dest + __n_00;
   *(long*)( this + 0x10 ) = lVar4;
   return;
}
/* std::vector<unsigned int, std::allocator<unsigned int> >::push_back(unsigned int const&) */void std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back(vector<unsigned_int,std::allocator<unsigned_int>> *this, uint *param_1) {
   uint *puVar1;
   puVar1 = *(uint**)( this + 8 );
   if (puVar1 != *(uint**)( this + 0x10 )) {
      *puVar1 = *param_1;
      *(uint**)( this + 8 ) = puVar1 + 1;
      return;
   }

   _M_realloc_insert<unsigned_int_const&>();
   return;
}
/* std::vector<bool, std::allocator<bool> >::_M_insert_aux(std::_Bit_iterator, bool) */void std::vector<bool,std::allocator<bool>>::_M_insert_aux(long *param_1, ulong *param_2, uint param_3, char param_4) {
   uint uVar1;
   undefined8 *__src;
   ulong uVar2;
   ulong uVar3;
   undefined8 *__dest;
   int iVar4;
   int iVar5;
   ulong *puVar6;
   size_t __n;
   ulong uVar7;
   ulong uVar8;
   ulong uVar9;
   ulong *puVar10;
   long lVar11;
   ulong *puVar12;
   uint uVar13;
   uint uVar14;
   ulong local_70;
   puVar10 = (ulong*)param_1[2];
   if (puVar10 == (ulong*)param_1[4]) {
      uVar9 = ( ulong ) * (uint*)( param_1 + 3 ) + ( (long)puVar10 - *param_1 ) * 8;
      if (uVar9 == 0x7fffffffffffffc0) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("vector<bool>::_M_insert_aux");
      }

      local_70 = 8;
      if (uVar9 != 0) {
         uVar3 = uVar9 * 2;
         local_70 = 0xffffffffffffff8;
         if (uVar9 <= uVar3) {
            uVar9 = 0x7fffffffffffffc0;
            if (uVar3 < 0x7fffffffffffffc1) {
               uVar9 = uVar3;
            }

            local_70 = ( uVar9 + 0x3f >> 6 ) << 3;
         }

      }

      __dest = (undefined8*)operator_new(local_70);
      __src = (undefined8*)*param_1;
      __n = (long)param_2 - (long)__src;
      if ((long)__n < 9) {
         if (__n == 8) {
            *__dest = *__src;
         }

      }
 else {
         memmove(__dest, __src, __n);
      }

      puVar10 = (ulong*)( (long)__dest + __n );
      uVar3 = (ulong)param_3;
      uVar9 = *puVar10;
      if (uVar3 == 0) {
         uVar2 = 1;
         iVar5 = 1;
         puVar12 = puVar10;
      }
 else {
         iVar4 = 0;
         uVar2 = uVar3;
         puVar6 = param_2;
         do {
            while (true) {
               uVar7 = 1L << ( (byte)iVar4 & 0x3f );
               uVar8 = ~uVar7 & uVar9;
               uVar9 = uVar9 | uVar7;
               if (( *puVar6 & uVar7 ) == 0) {
                  uVar9 = uVar8;
               }

               *puVar10 = uVar9;
               if (iVar4 != 0x3f) break;
               uVar9 = puVar10[1];
               puVar6 = puVar6 + 1;
               puVar10 = puVar10 + 1;
               iVar4 = 0;
               uVar2 = uVar2 - 1;
               puVar12 = puVar10;
               if (uVar2 == 0) goto LAB_00118c77;
            }
;
            iVar4 = iVar4 + 1;
            uVar2 = uVar2 - 1;
            puVar12 = puVar10;
         }
 while ( uVar2 != 0 );
         LAB_00118c77:if (iVar4 == 0x3f) {
            uVar2 = 0x8000000000000000;
            puVar10 = puVar12 + 1;
            iVar5 = 0;
         }
 else {
            iVar5 = iVar4 + 1;
            uVar2 = 1L << ( (byte)iVar4 & 0x3f );
            puVar10 = puVar12;
         }

      }

      uVar1 = *(uint*)( param_1 + 3 );
      uVar7 = uVar2 | uVar9;
      if (param_4 == '\0') {
         uVar7 = ~uVar2 & uVar9;
      }

      *puVar12 = uVar7;
      lVar11 = ( (ulong)uVar1 + ( param_1[2] - (long)param_2 ) * 8 ) - uVar3;
      iVar4 = iVar5;
      if (0 < lVar11) {
         do {
            while (true) {
               uVar3 = 1L << ( (byte)iVar4 & 0x3f );
               uVar9 = ~uVar3 & *puVar10;
               if (( *param_2 & 1L << ( (byte)param_3 & 0x3f ) ) != 0) {
                  uVar9 = uVar3 | *puVar10;
               }

               *puVar10 = uVar9;
               if (param_3 != 0x3f) break;
               param_2 = param_2 + 1;
               param_3 = 0;
               if (iVar4 != 0x3f) goto LAB_00118cd8;
               LAB_00118d21:puVar10 = puVar10 + 1;
               iVar5 = 0;
               lVar11 = lVar11 + -1;
               iVar4 = 0;
               if (lVar11 == 0) goto LAB_00118d2d;
            }
;
            param_3 = param_3 + 1;
            if (iVar4 == 0x3f) goto LAB_00118d21;
            LAB_00118cd8:iVar5 = iVar4 + 1;
            lVar11 = lVar11 + -1;
            iVar4 = iVar5;
         }
 while ( lVar11 != 0 );
      }

      LAB_00118d2d:if (__src != (undefined8*)0x0) {
         operator_delete(__src, param_1[4] - (long)__src);
      }

      *param_1 = (long)__dest;
      *(undefined4*)( param_1 + 1 ) = 0;
      param_1[4] = local_70 + (long)__dest;
      param_1[2] = (long)puVar10;
      *(int*)( param_1 + 3 ) = iVar5;
      return;
   }

   uVar1 = *(uint*)( param_1 + 3 );
   lVar11 = (ulong)uVar1 + 1;
   uVar13 = (uint)lVar11 & 0x3f;
   puVar12 = puVar10 + ( lVar11 >> 6 );
   lVar11 = ( (ulong)uVar1 + ( (long)puVar10 - (long)param_2 ) * 8 ) - (ulong)param_3;
   puVar6 = puVar10;
   uVar14 = uVar1;
   if (0 < lVar11) {
      do {
         if (uVar14 == 0) {
            puVar6 = puVar6 + -1;
            uVar14 = 0x3f;
            uVar9 = 0x8000000000000000;
            uVar3 = 0x8000000000000000;
            if (uVar13 != 0) goto LAB_00118a82;
            LAB_00118acb:puVar12 = puVar12 + -1;
            uVar13 = 0x3f;
            uVar2 = 0x8000000000000000;
            uVar9 = uVar3;
         }
 else {
            uVar14 = uVar14 - 1;
            uVar9 = 1L << ( (byte)uVar14 & 0x3f );
            uVar3 = uVar9;
            if (uVar13 == 0) goto LAB_00118acb;
            LAB_00118a82:uVar13 = uVar13 - 1;
            uVar2 = 1L << ( (byte)uVar13 & 0x3f );
         }

         uVar3 = ~uVar2 & *puVar12;
         if (( uVar9 & *puVar6 ) != 0) {
            uVar3 = *puVar12 | uVar2;
         }

         *puVar12 = uVar3;
         lVar11 = lVar11 + -1;
      }
 while ( lVar11 != 0 );
   }

   uVar3 = 1L << ( (byte)param_3 & 0x3f );
   uVar9 = uVar3 | *param_2;
   if (param_4 == '\0') {
      uVar9 = ~uVar3 & *param_2;
   }

   *param_2 = uVar9;
   if (uVar1 == 0x3f) {
      *(undefined4*)( param_1 + 3 ) = 0;
      param_1[2] = (long)( puVar10 + 1 );
      return;
   }

   *(uint*)( param_1 + 3 ) = uVar1 + 1;
   return;
}
/* spv::Instruction::addImmediateOperand(unsigned int) */void spv::Instruction::addImmediateOperand(Instruction *this, uint param_1) {
   int iVar1;
   uint *puVar2;
   ulong *puVar3;
   byte bVar4;
   uint local_1c[3];
   undefined4 local_10;
   undefined4 uStack_c;
   puVar2 = *(uint**)( this + 0x20 );
   local_1c[0] = param_1;
   if (puVar2 == *(uint**)( this + 0x28 )) {
      std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this + 0x18 ), puVar2, local_1c);
   }
 else {
      *puVar2 = param_1;
      *(uint**)( this + 0x20 ) = puVar2 + 1;
   }

   puVar3 = *(ulong**)( this + 0x40 );
   if (puVar3 != *(ulong**)( this + 0x50 )) {
      iVar1 = *(int*)( this + 0x48 );
      if (iVar1 == 0x3f) {
         *(undefined4*)( this + 0x48 ) = 0;
         *(ulong**)( this + 0x40 ) = puVar3 + 1;
      }
 else {
         *(int*)( this + 0x48 ) = iVar1 + 1;
      }

      bVar4 = (byte)iVar1 & 0x3f;
      *puVar3 = *puVar3 & ( -2L << bVar4 | 0xfffffffffffffffeU >> 0x40 - bVar4 );
      return;
   }

   local_10 = *(undefined4*)( this + 0x48 );
   std::vector<bool,std::allocator<bool>>::_M_insert_aux(this + 0x30, puVar3, CONCAT44(uStack_c, local_10), 0);
   return;
}
/* spv::Instruction::addIdOperand(unsigned int) */void spv::Instruction::addIdOperand(Instruction *this, uint param_1) {
   int iVar1;
   uint *puVar2;
   ulong *puVar3;
   uint local_1c[3];
   undefined4 local_10;
   undefined4 uStack_c;
   puVar2 = *(uint**)( this + 0x20 );
   local_1c[0] = param_1;
   if (puVar2 == *(uint**)( this + 0x28 )) {
      std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this + 0x18 ), puVar2, local_1c);
   }
 else {
      *puVar2 = param_1;
      *(uint**)( this + 0x20 ) = puVar2 + 1;
   }

   puVar3 = *(ulong**)( this + 0x40 );
   if (puVar3 != *(ulong**)( this + 0x50 )) {
      iVar1 = *(int*)( this + 0x48 );
      if (iVar1 == 0x3f) {
         *(undefined4*)( this + 0x48 ) = 0;
         *(ulong**)( this + 0x40 ) = puVar3 + 1;
      }
 else {
         *(int*)( this + 0x48 ) = iVar1 + 1;
      }

      *puVar3 = *puVar3 | 1L << ( (byte)iVar1 & 0x3f );
      return;
   }

   local_10 = *(undefined4*)( this + 0x48 );
   std::vector<bool,std::allocator<bool>>::_M_insert_aux(this + 0x30, puVar3, CONCAT44(uStack_c, local_10), 1);
   return;
}
/* spv::Instruction::addStringOperand(char const*) */void spv::Instruction::addStringOperand(Instruction *this, char *param_1) {
   char cVar1;
   uint *puVar2;
   ulong *puVar3;
   byte bVar4;
   int iVar5;
   uint uVar6;
   long in_FS_OFFSET;
   uint local_4c;
   ulong *local_48;
   undefined4 local_40;
   undefined4 uStack_3c;
   long local_30;
   iVar5 = 0;
   uVar6 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      while (true) {
         cVar1 = *param_1;
         param_1 = param_1 + 1;
         bVar4 = (byte)iVar5;
         iVar5 = iVar5 + 8;
         uVar6 = uVar6 | (int)cVar1 << ( bVar4 & 0x1f );
         if (iVar5 != 0x20) break;
         puVar2 = *(uint**)( this + 0x20 );
         local_4c = uVar6;
         if (puVar2 == *(uint**)( this + 0x28 )) {
            std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>((vector<unsigned_int,std::allocator<unsigned_int>>*)( this + 0x18 ), puVar2, &local_4c);
         }
 else {
            *puVar2 = uVar6;
            *(uint**)( this + 0x20 ) = puVar2 + 1;
         }

         puVar3 = *(ulong**)( this + 0x40 );
         if (puVar3 == *(ulong**)( this + 0x50 )) {
            local_40 = *(undefined4*)( this + 0x48 );
            local_48 = puVar3;
            std::vector<bool,std::allocator<bool>>::_M_insert_aux(this + 0x30, puVar3, CONCAT44(uStack_3c, local_40));
         }
 else {
            iVar5 = *(int*)( this + 0x48 );
            if (iVar5 == 0x3f) {
               *(undefined4*)( this + 0x48 ) = 0;
               *(ulong**)( this + 0x40 ) = puVar3 + 1;
            }
 else {
               *(int*)( this + 0x48 ) = iVar5 + 1;
            }

            *puVar3 = *puVar3 & ~(1L << ((byte)iVar5 & 0x3f));
         }

         iVar5 = 0;
         uVar6 = 0;
         if (cVar1 == '\0') goto LAB_00118fac;
      }
;
   }
 while ( cVar1 != '\0' );
   LAB_00118fac:if (iVar5 == 0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      addImmediateOperand(this, uVar6);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void std::vector<spv::Block*, std::allocator<spv::Block*> >::_M_realloc_insert<spv::Block*
   const&>(__gnu_cxx::__normal_iterator<spv::Block**, std::vector<spv::Block*,
   std::allocator<spv::Block*> > >, spv::Block* const&) */void std::vector<spv::Block*,std::allocator<spv::Block*>>::_M_realloc_insert<spv::Block*const&>(vector<spv::Block*,std::allocator<spv::Block*>> *this, void *param_2, undefined8 *param_3) {
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
      if (0xfffffffffffffffe < uVar2) goto LAB_00119120;
      uVar3 = 0xfffffffffffffff;
      if (uVar2 + 1 < 0x1000000000000000) {
         uVar3 = uVar2 + 1;
      }

      uVar3 = uVar3 << 3;
      LAB_0011912a:__dest_00 = operator_new(uVar3);
      lVar4 = uVar3 + (long)__dest_00;
   }
 else {
      uVar3 = uVar2 * 2;
      if (uVar3 < uVar2) {
         LAB_00119120:uVar3 = 0x7ffffffffffffff8;
         goto LAB_0011912a;
      }

      if (uVar3 != 0) {
         if (0xfffffffffffffff < uVar3) {
            uVar3 = 0xfffffffffffffff;
         }

         uVar3 = uVar3 * 8;
         goto LAB_0011912a;
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

      if (__src == (void*)0x0) goto LAB_001190fc;
   }
 else {
      __dest_00 = memmove(__dest_00, __src, __n);
      if (0 < (long)__n_00) {
         memcpy(__dest, param_2, __n_00);
      }

   }

   operator_delete(__src, *(long*)( this + 0x10 ) - (long)__src);
   LAB_001190fc:*(void**)this = __dest_00;
   *(size_t*)( this + 8 ) = (long)__dest + __n_00;
   *(long*)( this + 0x10 ) = lVar4;
   return;
}
/* void std::vector<spv::Function*, std::allocator<spv::Function*>
   >::_M_realloc_insert<spv::Function* const&>(__gnu_cxx::__normal_iterator<spv::Function**,
   std::vector<spv::Function*, std::allocator<spv::Function*> > >, spv::Function* const&) */void std::vector<spv::Function*,std::allocator<spv::Function*>>::_M_realloc_insert<spv::Function*const&>(vector<spv::Function*,std::allocator<spv::Function*>> *this, void *param_2, undefined8 *param_3) {
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
      if (0xfffffffffffffffe < uVar2) goto LAB_001192b0;
      uVar3 = 0xfffffffffffffff;
      if (uVar2 + 1 < 0x1000000000000000) {
         uVar3 = uVar2 + 1;
      }

      uVar3 = uVar3 << 3;
      LAB_001192ba:__dest_00 = operator_new(uVar3);
      lVar4 = uVar3 + (long)__dest_00;
   }
 else {
      uVar3 = uVar2 * 2;
      if (uVar3 < uVar2) {
         LAB_001192b0:uVar3 = 0x7ffffffffffffff8;
         goto LAB_001192ba;
      }

      if (uVar3 != 0) {
         if (0xfffffffffffffff < uVar3) {
            uVar3 = 0xfffffffffffffff;
         }

         uVar3 = uVar3 * 8;
         goto LAB_001192ba;
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

      if (__src == (void*)0x0) goto LAB_0011928c;
   }
 else {
      __dest_00 = memmove(__dest_00, __src, __n);
      if (0 < (long)__n_00) {
         memcpy(__dest, param_2, __n_00);
      }

   }

   operator_delete(__src, *(long*)( this + 0x10 ) - (long)__src);
   LAB_0011928c:*(void**)this = __dest_00;
   *(size_t*)( this + 8 ) = (long)__dest + __n_00;
   *(long*)( this + 0x10 ) = lVar4;
   return;
}
/* std::vector<spv::Instruction*, std::allocator<spv::Instruction*> >::_M_default_append(unsigned
   long) */void std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_default_append(vector<spv::Instruction*,std::allocator<spv::Instruction*>> *this, ulong param_1) {
   ulong uVar1;
   ulong uVar2;
   void *__dest;
   void *pvVar3;
   undefined8 *__s;
   size_t sVar4;
   ulong uVar5;
   undefined8 *puVar6;
   if (param_1 == 0) {
      return;
   }

   puVar6 = *(undefined8**)( this + 8 );
   pvVar3 = *(void**)this;
   if (param_1 <= ( ulong )(*(long*)( this + 0x10 ) - (long)puVar6 >> 3)) {
      *puVar6 = 0;
      __s = puVar6 + 1;
      if (param_1 - 1 != 0) {
         sVar4 = (long)__s + ( ( param_1 - 1 ) * 8 - (long)puVar6 ) + -8;
         pvVar3 = memset(__s, 0, sVar4);
         __s = (undefined8*)( (long)pvVar3 + sVar4 );
      }

      *(undefined8**)( this + 8 ) = __s;
      return;
   }

   sVar4 = (long)puVar6 - (long)pvVar3;
   uVar2 = (long)sVar4 >> 3;
   if (0xfffffffffffffff - uVar2 < param_1) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_default_append");
   }

   uVar1 = param_1 + uVar2;
   if (uVar2 < param_1) {
      uVar2 = 0xfffffffffffffff;
      if (uVar1 < 0x1000000000000000) {
         uVar2 = uVar1;
      }

      uVar2 = uVar2 * 8;
      __dest = operator_new(uVar2);
      puVar6 = (undefined8*)( (long)__dest + sVar4 );
      *puVar6 = 0;
      if (param_1 - 1 != 0) goto LAB_00119445;
      LAB_00119459:if (sVar4 != 0) goto LAB_00119530;
      if (pvVar3 == (void*)0x0) goto LAB_0011946b;
      uVar5 = *(long*)( this + 0x10 ) - (long)pvVar3;
   }
 else {
      uVar2 = uVar2 * 2;
      if (0xfffffffffffffff < uVar2) {
         uVar2 = 0xfffffffffffffff;
      }

      uVar2 = uVar2 * 8;
      __dest = operator_new(uVar2);
      puVar6 = (undefined8*)( (long)__dest + sVar4 );
      *puVar6 = 0;
      if (param_1 != 1) {
         LAB_00119445:memset(puVar6 + 1, 0, ( param_1 - 1 ) * 8);
         goto LAB_00119459;
      }

      LAB_00119530:memmove(__dest, pvVar3, sVar4);
      uVar5 = *(long*)( this + 0x10 ) - (long)pvVar3;
   }

   operator_delete(pvVar3, uVar5);
   LAB_0011946b:*(void**)this = __dest;
   *(void**)( this + 8 ) = (void*)( (long)__dest + uVar1 * 8 );
   *(ulong*)( this + 0x10 ) = (long)__dest + uVar2;
   return;
}
/* spv::Module::mapInstruction(spv::Instruction*) */void spv::Module::mapInstruction(Module *this, Instruction *param_1) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   ulong uVar4;
   ulong uVar5;
   lVar2 = *(long*)( this + 0x20 );
   uVar5 = ( ulong ) * (uint*)( param_1 + 8 );
   uVar3 = *(long*)( this + 0x28 ) - lVar2 >> 3;
   if (uVar3 <= uVar5) {
      uVar4 = ( ulong )(*(uint*)( param_1 + 8 ) + 0x10);
      if (uVar3 < uVar4) {
         std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_default_append((vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)( this + 0x20 ), uVar4 - uVar3);
         *(Instruction**)( *(long*)( this + 0x20 ) + uVar5 * 8 ) = param_1;
         return;
      }

      if (( uVar4 < uVar3 ) && ( lVar1 = lVar2 + uVar4 * 8 * (long*)( this + 0x28 ) != lVar1 )) {
         *(long*)( this + 0x28 ) = lVar1;
      }

   }

   *(Instruction**)( lVar2 + uVar5 * 8 ) = param_1;
   return;
}
/* void std::vector<spv::Instruction*, std::allocator<spv::Instruction*>
   >::_M_realloc_insert<spv::Instruction* const&>(__gnu_cxx::__normal_iterator<spv::Instruction**,
   std::vector<spv::Instruction*, std::allocator<spv::Instruction*> > >, spv::Instruction* const&)
    */void std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>(vector<spv::Instruction*,std::allocator<spv::Instruction*>> *this, void *param_2, undefined8 *param_3) {
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
      if (0xfffffffffffffffe < uVar2) goto LAB_001196b0;
      uVar3 = 0xfffffffffffffff;
      if (uVar2 + 1 < 0x1000000000000000) {
         uVar3 = uVar2 + 1;
      }

      uVar3 = uVar3 << 3;
      LAB_001196ba:__dest_00 = operator_new(uVar3);
      lVar4 = uVar3 + (long)__dest_00;
   }
 else {
      uVar3 = uVar2 * 2;
      if (uVar3 < uVar2) {
         LAB_001196b0:uVar3 = 0x7ffffffffffffff8;
         goto LAB_001196ba;
      }

      if (uVar3 != 0) {
         if (0xfffffffffffffff < uVar3) {
            uVar3 = 0xfffffffffffffff;
         }

         uVar3 = uVar3 * 8;
         goto LAB_001196ba;
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

      if (__src == (void*)0x0) goto LAB_0011968c;
   }
 else {
      __dest_00 = memmove(__dest_00, __src, __n);
      if (0 < (long)__n_00) {
         memcpy(__dest, param_2, __n_00);
      }

   }

   operator_delete(__src, *(long*)( this + 0x10 ) - (long)__src);
   LAB_0011968c:*(void**)this = __dest_00;
   *(size_t*)( this + 8 ) = (long)__dest + __n_00;
   *(long*)( this + 0x10 ) = lVar4;
   return;
}
/* std::vector<spv::Instruction*, std::allocator<spv::Instruction*> >::push_back(spv::Instruction*
   const&) */void std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::push_back(vector<spv::Instruction*,std::allocator<spv::Instruction*>> *this, Instruction **param_1) {
   undefined8 *puVar1;
   puVar1 = *(undefined8**)( this + 8 );
   if (puVar1 != *(undefined8**)( this + 0x10 )) {
      *puVar1 = *param_1;
      *(undefined8**)( this + 8 ) = puVar1 + 1;
      return;
   }

   _M_realloc_insert<spv::Instruction*const&>();
   return;
}
/* spv::Function::Function(unsigned int, unsigned int, unsigned int, unsigned int, spv::LinkageType,
   std::__cxx11::string const&, spv::Module&) */void spv::Function::Function(Function *this, undefined4 param_1, undefined4 param_2, uint param_3, uint param_4, undefined4 param_6, long *param_7, Module *param_8) {
   Instruction *this_00;
   long lVar1;
   undefined4 uVar2;
   undefined8 *puVar3;
   long lVar4;
   int iVar5;
   uint uVar6;
   Function *pFVar7;
   ulong uVar8;
   ulong uVar9;
   long lVar10;
   uint uVar11;
   ulong uVar12;
   long lVar13;
   int iVar14;
   long lVar15;
   long in_FS_OFFSET;
   Function *local_70;
   Function *local_68;
   undefined8 local_60;
   long alStack_58[3];
   long local_40;
   uVar9 = (ulong)param_4;
   this_00 = (Instruction*)( this + 0x18 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)( this + 0x24 ) = param_2;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x40 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x68 ) = (undefined1[16])0x0;
   *(undefined4*)( this + 0x20 ) = param_1;
   *(Module**)( this + 8 ) = param_8;
   *(undefined***)this = &PTR__Function_0011c630;
   *(undefined***)( this + 0x18 ) = &PTR__Instruction_0011c5f0;
   *(undefined8*)( this + 0x10 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x36;
   *(undefined4*)( this + 0x50 ) = 0;
   *(undefined8*)( this + 0x58 ) = 0;
   *(undefined4*)( this + 0x60 ) = 0;
   *(undefined1(*) [16])( this + 0x78 ) = (undefined1[16])0x0;
   *(undefined2*)( this + 0xa8 ) = 0;
   *(Function**)( this + 200 ) = this + 0xb8;
   *(Function**)( this + 0xd0 ) = this + 0xb8;
   *(undefined4*)( this + 0xe0 ) = param_6;
   *(Function**)( this + 0xe8 ) = this + 0xf8;
   *(undefined4*)( this + 0xb8 ) = 0;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 24*i + 192 ) ) = 0;
   }

   this[0xf8] = (Function)0x0;
   *(undefined1(*) [16])( this + 0x88 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x98 ) = (undefined1[16])0x0;
   Instruction::reserveOperands(this_00, 2);
   Instruction::addImmediateOperand(this_00, 0);
   Instruction::addIdOperand(this_00, param_3);
   Module::mapInstruction(param_8, this_00);
   puVar3 = *(undefined8**)( param_8 + 0x10 );
   local_70 = this;
   if (puVar3 == *(undefined8**)( param_8 + 0x18 )) {
      std::vector<spv::Function*,std::allocator<spv::Function*>>::_M_realloc_insert<spv::Function*const&>((vector<spv::Function*,std::allocator<spv::Function*>>*)( param_8 + 8 ), puVar3, &local_70);
   }
 else {
      *puVar3 = this;
      *(undefined8**)( param_8 + 0x10 ) = puVar3 + 1;
   }

   lVar15 = 4;
   lVar10 = *(long*)( *(long*)( param_8 + 0x20 ) + (ulong)param_3 * 8 );
   iVar5 = (int)( *(long*)( lVar10 + 0x20 ) - *(long*)( lVar10 + 0x18 ) >> 2 );
   if (1 < iVar5) {
      do {
         pFVar7 = (Function*)operator_new(0x60);
         lVar4 = *(long*)( param_8 + 0x28 );
         iVar14 = (int)uVar9;
         lVar13 = *(long*)( param_8 + 0x20 );
         uVar2 = *(undefined4*)( *(long*)( lVar10 + 0x18 ) + lVar15 );
         *(undefined4*)( pFVar7 + 0x10 ) = 0x37;
         *(undefined***)pFVar7 = &PTR__Instruction_0011c5f0;
         *(undefined4*)( pFVar7 + 0x38 ) = 0;
         uVar8 = lVar4 - lVar13 >> 3;
         *(undefined8*)( pFVar7 + 0x40 ) = 0;
         *(undefined4*)( pFVar7 + 0x48 ) = 0;
         *(ulong*)( pFVar7 + 8 ) = CONCAT44(uVar2, iVar14);
         *(undefined1(*) [16])( pFVar7 + 0x18 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( pFVar7 + 0x28 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( pFVar7 + 0x50 ) = (undefined1[16])0x0;
         local_70 = pFVar7;
         if (uVar8 <= uVar9) {
            uVar12 = ( ulong )(iVar14 + 0x10);
            if (uVar8 < uVar12) {
               std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_default_append((vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)( param_8 + 0x20 ), uVar12 - uVar8);
               lVar13 = *(long*)( param_8 + 0x20 );
            }
 else if (( uVar12 < uVar8 ) && ( lVar1 = lVar4 != lVar1 )) {
               *(long*)( param_8 + 0x28 ) = lVar1;
            }

         }

         *(Function**)( lVar13 + uVar9 * 8 ) = pFVar7;
         puVar3 = *(undefined8**)( this + 0x80 );
         if (puVar3 == *(undefined8**)( this + 0x88 )) {
            std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_realloc_insert<spv::Instruction*const&>((vector<spv::Instruction*,std::allocator<spv::Instruction*>>*)( this + 0x78 ), puVar3, &local_70);
         }
 else {
            *puVar3 = pFVar7;
            *(undefined8**)( this + 0x80 ) = puVar3 + 1;
         }

         uVar9 = ( ulong )(iVar14 + 1U);
         lVar15 = lVar15 + 4;
      }
 while ( iVar14 + 1U != ( param_4 - 1 ) + iVar5 );
   }

   if (*(int*)( this + 0xe0 ) == 0x7fffffff) goto LAB_00119a4d;
   uVar9 = std::__cxx11::string::find((char)param_7, 0x28);
   if ((ulong)param_7[1] < uVar9) {
      uVar9 = param_7[1];
   }

   local_68 = (Function*)alStack_58;
   std::__cxx11::string::_M_construct<char_const*>((Function*)&local_68, *param_7, *param_7 + uVar9);
   pFVar7 = *(Function**)( this + 0xe8 );
   if (this + 0xf8 == pFVar7) {
      if (local_68 == (Function*)alStack_58) goto LAB_00119b8d;
      *(Function**)( this + 0xe8 ) = local_68;
      *(ulong*)( this + 0xf0 ) = local_60;
      *(long*)( this + 0xf8 ) = alStack_58[0];
      local_68 = (Function*)alStack_58;
   }
 else if (local_68 == (Function*)alStack_58) {
      LAB_00119b8d:if ((Function*)&local_68 != this + 0xe8) {
         if (local_60 != 0) {
            if (local_60 == 1) {
               *pFVar7 = alStack_58[0]._0_1_;
               pFVar7 = *(Function**)( this + 0xe8 );
            }
 else {
               uVar6 = (uint)local_60;
               uVar9 = local_60 & 0xffffffff;
               if (uVar6 < 8) {
                  if (( local_60 & 4 ) == 0) {
                     if (uVar6 != 0) {
                        *pFVar7 = alStack_58[0]._0_1_;
                        if (( local_60 & 2 ) == 0) goto LAB_00119bd4;
                        *(undefined2*)( pFVar7 + ( uVar9 - 2 ) ) = *(undefined2*)( (long)alStack_58 + ( uVar9 - 2 ) );
                        pFVar7 = *(Function**)( this + 0xe8 );
                     }

                  }
 else {
                     *(undefined4*)pFVar7 = (undefined4)alStack_58[0];
                     *(undefined4*)( pFVar7 + ( uVar9 - 4 ) ) = *(undefined4*)( (long)alStack_58 + ( uVar9 - 4 ) );
                     pFVar7 = *(Function**)( this + 0xe8 );
                  }

               }
 else {
                  *(long*)pFVar7 = alStack_58[0];
                  *(undefined8*)( pFVar7 + ( ( local_60 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)alStack_58 + ( ( local_60 & 0xffffffff ) - 8 ) );
                  lVar10 = (long)pFVar7 - ( ( ulong )(pFVar7 + 8) & 0xfffffffffffffff8 );
                  uVar6 = (int)lVar10 + uVar6 & 0xfffffff8;
                  if (7 < uVar6) {
                     uVar9 = 0;
                     do {
                        uVar11 = (int)uVar9 + 8;
                        *(undefined8*)( ( ( ulong )(pFVar7 + 8) & 0xfffffffffffffff8 ) + uVar9 ) = *(undefined8*)( (Function*)alStack_58 + ( uVar9 - lVar10 ) );
                        uVar9 = (ulong)uVar11;
                     }
 while ( uVar11 < uVar6 );
                  }

                  LAB_00119bd4:pFVar7 = *(Function**)( this + 0xe8 );
               }

            }

         }

         *(ulong*)( this + 0xf0 ) = local_60;
         pFVar7[local_60] = (Function)0x0;
      }

   }
 else {
      lVar10 = *(long*)( this + 0xf8 );
      *(Function**)( this + 0xe8 ) = local_68;
      *(ulong*)( this + 0xf0 ) = local_60;
      *(long*)( this + 0xf8 ) = alStack_58[0];
      local_68 = (Function*)alStack_58;
      if (pFVar7 != (Function*)0x0) {
         local_68 = pFVar7;
         alStack_58[0] = lVar10;
      }

   }

   local_60 = 0;
   *local_68 = (Function)0x0;
   if (local_68 != (Function*)alStack_58) {
      operator_delete(local_68, alStack_58[0] + 1);
   }

   LAB_00119a4d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* std::pair<std::_Rb_tree_iterator<std::__cxx11::string >, bool>
   std::_Rb_tree<std::__cxx11::string, std::__cxx11::string, std::_Identity<std::__cxx11::string >,
   std::less<std::__cxx11::string >, std::allocator<std::__cxx11::string >
   >::_M_insert_unique<std::__cxx11::string >(std::__cxx11::string&&) */undefined1[16];std::_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>::_M_insert_unique<std::__cxx11::string> (_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
           *this,string *param_1) {
   bool bVar1;
   uint uVar2;
   int iVar3;
   _Rb_tree_node_base *p_Var4;
   ulong uVar5;
   _Rb_tree_node_base *p_Var6;
   ulong uVar7;
   string *psVar8;
   uint uVar9;
   long lVar10;
   string *psVar11;
   void *__s2;
   undefined1 uVar12;
   ulong uVar13;
   _Rb_tree_node_base *p_Var14;
   ulong uVar15;
   undefined1 auVar16[16];
   void *local_58;
   p_Var4 = (_Rb_tree_node_base*)( this + 8 );
   if (*(_Rb_tree_node_base**)( this + 0x10 ) == (_Rb_tree_node_base*)0x0) {
      p_Var14 = p_Var4;
      if (p_Var4 != *(_Rb_tree_node_base**)( this + 0x18 )) {
         local_58 = *(void**)param_1;
         uVar13 = *(ulong*)( param_1 + 8 );
         LAB_00119e5f:p_Var6 = (_Rb_tree_node_base*)std::_Rb_tree_decrement(p_Var14);
         uVar15 = *(ulong*)( p_Var6 + 0x28 );
         __s2 = *(void**)( p_Var6 + 0x20 );
         uVar7 = uVar13;
         if (uVar15 <= uVar13) {
            uVar7 = uVar15;
         }

         LAB_00119d70:if (( uVar7 == 0 ) || ( iVar3 = iVar3 == 0 )) {
            uVar12 = 0;
            lVar10 = uVar15 - uVar13;
            if (0x7fffffff < lVar10) goto LAB_00119daa;
            if (lVar10 < -0x80000000) goto LAB_00119dc0;
            iVar3 = (int)lVar10;
         }

         uVar12 = 0;
         if (-1 < iVar3) goto LAB_00119daa;
         goto LAB_00119dc0;
      }

      LAB_00119dcb:p_Var6 = (_Rb_tree_node_base*)operator_new(0x40);
      psVar11 = (string*)( p_Var6 + 0x30 );
      *(string**)( p_Var6 + 0x20 ) = psVar11;
      psVar8 = *(string**)param_1;
      if (psVar8 != param_1 + 0x10) {
         bVar1 = true;
         goto LAB_00119dfa;
      }

      bVar1 = true;
      lVar10 = *(long*)( param_1 + 8 );
      LAB_00119f42:psVar8 = param_1 + 0x10;
      uVar13 = lVar10 + 1;
      uVar2 = (uint)uVar13;
      if (uVar2 < 8) {
         if (( uVar13 & 4 ) == 0) {
            if (uVar2 != 0) {
               *psVar11 = *psVar8;
               if (( uVar13 & 2 ) == 0) goto LAB_00119f6c;
               *(undefined2*)( psVar11 + ( ( uVar13 & 0xffffffff ) - 2 ) ) = *(undefined2*)( param_1 + ( uVar13 & 0xffffffff ) + 0xe );
               lVar10 = *(long*)( param_1 + 8 );
            }

         }
 else {
            *(undefined4*)psVar11 = *(undefined4*)psVar8;
            *(undefined4*)( psVar11 + ( ( uVar13 & 0xffffffff ) - 4 ) ) = *(undefined4*)( param_1 + ( uVar13 & 0xffffffff ) + 0xc );
            lVar10 = *(long*)( param_1 + 8 );
         }

      }
 else {
         *(undefined8*)psVar11 = *(undefined8*)psVar8;
         *(undefined8*)( psVar11 + ( ( uVar13 & 0xffffffff ) - 8 ) ) = *(undefined8*)( param_1 + ( uVar13 & 0xffffffff ) + 8 );
         lVar10 = (long)psVar11 - ( ( ulong )(psVar11 + 8) & 0xfffffffffffffff8 );
         uVar2 = uVar2 + (int)lVar10 & 0xfffffff8;
         if (7 < uVar2) {
            uVar9 = 0;
            do {
               uVar13 = (ulong)uVar9;
               uVar9 = uVar9 + 8;
               *(undefined8*)( ( ( ulong )(psVar11 + 8) & 0xfffffffffffffff8 ) + uVar13 ) = *(undefined8*)( psVar8 + ( uVar13 - lVar10 ) );
            }
 while ( uVar9 < uVar2 );
         }

         LAB_00119f6c:lVar10 = *(long*)( param_1 + 8 );
      }

   }
 else {
      local_58 = *(void**)param_1;
      uVar13 = *(ulong*)( param_1 + 8 );
      p_Var6 = *(_Rb_tree_node_base**)( this + 0x10 );
      do {
         p_Var14 = p_Var6;
         uVar15 = *(ulong*)( p_Var14 + 0x28 );
         __s2 = *(void**)( p_Var14 + 0x20 );
         uVar7 = uVar15;
         if (uVar13 <= uVar15) {
            uVar7 = uVar13;
         }

         if (uVar7 == 0) {
            LAB_00119d3b:uVar5 = uVar13 - uVar15;
            if ((long)uVar5 < 0x80000000) {
               if (-0x80000001 < (long)uVar5) goto LAB_00119d55;
               goto LAB_00119d00;
            }

            LAB_00119d59:p_Var6 = *(_Rb_tree_node_base**)( p_Var14 + 0x18 );
            bVar1 = false;
         }
 else {
            uVar2 = memcmp(local_58, __s2, uVar7);
            uVar5 = (ulong)uVar2;
            if (uVar2 == 0) goto LAB_00119d3b;
            LAB_00119d55:if (-1 < (int)uVar5) goto LAB_00119d59;
            LAB_00119d00:p_Var6 = *(_Rb_tree_node_base**)( p_Var14 + 0x10 );
            bVar1 = true;
         }

      }
 while ( p_Var6 != (_Rb_tree_node_base*)0x0 );
      p_Var6 = p_Var14;
      if (!bVar1) goto LAB_00119d70;
      if (*(_Rb_tree_node_base**)( this + 0x18 ) != p_Var14) goto LAB_00119e5f;
      LAB_00119dc0:if (p_Var4 == p_Var14) goto LAB_00119dcb;
      uVar15 = *(ulong*)( p_Var14 + 0x28 );
      uVar7 = uVar15;
      if (uVar13 <= uVar15) {
         uVar7 = uVar13;
      }

      if (uVar7 == 0) {
         LAB_00119eac:bVar1 = false;
         uVar7 = uVar13 - uVar15;
         if ((long)uVar7 < 0x80000000) {
            if (-0x80000001 < (long)uVar7) goto LAB_00119ec8;
            bVar1 = true;
         }

      }
 else {
         uVar2 = memcmp(local_58, *(void**)( p_Var14 + 0x20 ), uVar7);
         uVar7 = (ulong)uVar2;
         if (uVar2 == 0) goto LAB_00119eac;
         LAB_00119ec8:bVar1 = (bool)( ( byte )(uVar7 >> 0x1f) & 1 );
      }

      p_Var6 = (_Rb_tree_node_base*)operator_new(0x40);
      psVar11 = (string*)( p_Var6 + 0x30 );
      *(string**)( p_Var6 + 0x20 ) = psVar11;
      psVar8 = *(string**)param_1;
      if (psVar8 == param_1 + 0x10) {
         lVar10 = *(long*)( param_1 + 8 );
         goto LAB_00119f42;
      }

      LAB_00119dfa:*(string**)( p_Var6 + 0x20 ) = psVar8;
      *(undefined8*)( p_Var6 + 0x30 ) = *(undefined8*)( param_1 + 0x10 );
      lVar10 = *(long*)( param_1 + 8 );
   }

   *(long*)( p_Var6 + 0x28 ) = lVar10;
   *(string**)param_1 = param_1 + 0x10;
   *(undefined8*)( param_1 + 8 ) = 0;
   param_1[0x10] = (string)0x0;
   std::_Rb_tree_insert_and_rebalance(bVar1, p_Var6, p_Var14, p_Var4);
   uVar12 = 1;
   *(long*)( this + 0x28 ) = *(long*)( this + 0x28 ) + 1;
   LAB_00119daa:auVar16[8] = uVar12;
   auVar16._0_8_ = p_Var6;
   auVar16._9_7_ = 0;
   return auVar16;
}
/* spvutils::HexFloat<spvutils::FloatProxy<spvutils::Float16>,
   spvutils::HexFloatTraits<spvutils::FloatProxy<spvutils::Float16> > >::uint_type
   spvutils::HexFloat<spvutils::FloatProxy<float>,
   spvutils::HexFloatTraits<spvutils::FloatProxy<float> >
   >::getRoundedNormalizedSignificand<spvutils::HexFloat<spvutils::FloatProxy<spvutils::Float16>,
   spvutils::HexFloatTraits<spvutils::FloatProxy<spvutils::Float16> > > >(spvutils::round_direction,
   bool*) */uint __thiscall
spvutils::
HexFloat<spvutils::FloatProxy<float>,spvutils::HexFloatTraits<spvutils::FloatProxy<float>>>::
getRoundedNormalizedSignificand<spvutils::HexFloat<spvutils::FloatProxy<spvutils::Float16>,spvutils::HexFloatTraits<spvutils::FloatProxy<spvutils::Float16>>>>
          (HexFloat<spvutils::FloatProxy<float>,spvutils::HexFloatTraits<spvutils::FloatProxy<float>>>
           *this,int param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if ((getRoundedNormalizedSignificand<spvutils::HexFloat<spvutils::FloatProxy<spvutils::Float16>,spvutils::HexFloatTraits<spvutils::FloatProxy<spvutils::Float16>>>>(spvutils::round_direction,bool*)
       ::last_significant_bit == '\0') &&
     (iVar4 = __cxa_guard_acquire(&getRoundedNormalizedSignificand<spvutils::HexFloat<spvutils::FloatProxy<spvutils::Float16>,spvutils::HexFloatTraits<spvutils::FloatProxy<spvutils::Float16>>>>(spvutils::round_direction,bool*)
                                   ::last_significant_bit), iVar4 != 0)) {
    getRoundedNormalizedSignificand<spvutils::HexFloat<spvutils::FloatProxy<spvutils::Float16>,spvutils::HexFloatTraits<spvutils::FloatProxy<spvutils::Float16>>>>(spvutils::round_direction,bool*)
    ::last_significant_bit = 0x2000;
    __cxa_guard_release(&getRoundedNormalizedSignificand<spvutils::HexFloat<spvutils::FloatProxy<spvutils::Float16>,spvutils::HexFloatTraits<spvutils::FloatProxy<spvutils::Float16>>>>(spvutils::round_direction,bool*)
                         ::last_significant_bit);
  }
  if ((getRoundedNormalizedSignificand<spvutils::HexFloat<spvutils::FloatProxy<spvutils::Float16>,spvutils::HexFloatTraits<spvutils::FloatProxy<spvutils::Float16>>>>(spvutils::round_direction,bool*)
       ::first_rounded_bit == '\0') &&
     (iVar4 = __cxa_guard_acquire(&getRoundedNormalizedSignificand<spvutils::HexFloat<spvutils::FloatProxy<spvutils::Float16>,spvutils::HexFloatTraits<spvutils::FloatProxy<spvutils::Float16>>>>(spvutils::round_direction,bool*)
                                   ::first_rounded_bit), iVar4 != 0)) {
    getRoundedNormalizedSignificand<spvutils::HexFloat<spvutils::FloatProxy<spvutils::Float16>,spvutils::HexFloatTraits<spvutils::FloatProxy<spvutils::Float16>>>>(spvutils::round_direction,bool*)
    ::first_rounded_bit = 0x1000;
    __cxa_guard_release(&getRoundedNormalizedSignificand<spvutils::HexFloat<spvutils::FloatProxy<spvutils::Float16>,spvutils::HexFloatTraits<spvutils::FloatProxy<spvutils::Float16>>>>(spvutils::round_direction,bool*)
                         ::first_rounded_bit);
  }
  uVar1 = *(uint *)this;
  *param_3 = 0;
  if ((uVar1 & 0x7fffffff) == 0) {
    return 0;
  }
  uVar6 = uVar1 & 0x7fffff;
  uVar5 = uVar6;
  if ((uVar1 & 0x7f800000) == 0) {
    if ((uVar1 & 0x400000) == 0) {
      uVar3 = 0xffffff81;
      do {
        uVar2 = uVar3;
        uVar5 = uVar5 * 2;
        uVar3 = uVar2 - 1;
      } while ((uVar5 & 0x400000) == 0);
      if ((uVar3 & 1) == 0) goto LAB_0011a0f8;
      uVar6 = uVar6 * 2;
      for (uVar3 = uVar2; uVar3 != 0xffffff82; uVar3 = uVar3 + 2) {
LAB_0011a0f8:
        uVar6 = uVar6 << 2;
      }
    }
    else {
      uVar6 = uVar6 * 2;
    }
    uVar5 = uVar6 & 0x7fffff;
  }
  if ((uVar6 & 0x1fff) != 0) {
    if (param_2 == 2) {
      if ((int)uVar1 < 0) goto LAB_0011a0b0;
    }
    else if (param_2 == 3) {
      if (-1 < (int)uVar1) goto LAB_0011a0b0;
    }
    else if (((param_2 != 1) ||
             ((getRoundedNormalizedSignificand<spvutils::HexFloat<spvutils::FloatProxy<spvutils::Float16>,spvutils::HexFloatTraits<spvutils::FloatProxy<spvutils::Float16>>>>(spvutils::round_direction,bool*)
               ::first_rounded_bit & uVar5) == 0)) ||
            ((~getRoundedNormalizedSignificand<spvutils::HexFloat<spvutils::FloatProxy<spvutils::Float16>,spvutils::HexFloatTraits<spvutils::FloatProxy<spvutils::Float16>>>>(spvutils::round_direction,bool*)
               ::first_rounded_bit & uVar5 & 0x1fff) == 0 &&
             (getRoundedNormalizedSignificand<spvutils::HexFloat<spvutils::FloatProxy<spvutils::Float16>,spvutils::HexFloatTraits<spvutils::FloatProxy<spvutils::Float16>>>>(spvutils::round_direction,bool*)
              ::last_significant_bit & uVar5) == 0)) goto LAB_0011a0b0;
    uVar5 = uVar5 + getRoundedNormalizedSignificand<spvutils::HexFloat<spvutils::FloatProxy<spvutils::Float16>,spvutils::HexFloatTraits<spvutils::FloatProxy<spvutils::Float16>>>>(spvutils::round_direction,bool*)
                    ::last_significant_bit;
    if ((uVar5 & 0x800000) != 0) {
      *param_3 = 1;
      uVar5 = uVar5 >> 1 & 0x7fbfffff;
    }
  }
LAB_0011a0b0:
  return uVar5 >> 0xd;
}



/* void spvutils::HexFloat<spvutils::FloatProxy<float>,
   spvutils::HexFloatTraits<spvutils::FloatProxy<float> >
   >::castTo<spvutils::HexFloat<spvutils::FloatProxy<spvutils::Float16>,
   spvutils::HexFloatTraits<spvutils::FloatProxy<spvutils::Float16> > >
   >(spvutils::HexFloat<spvutils::FloatProxy<spvutils::Float16>,
   spvutils::HexFloatTraits<spvutils::FloatProxy<spvutils::Float16> > >&, spvutils::round_direction)
    */

void __thiscall
spvutils::
HexFloat<spvutils::FloatProxy<float>,spvutils::HexFloatTraits<spvutils::FloatProxy<float>>>::
castTo<spvutils::HexFloat<spvutils::FloatProxy<spvutils::Float16>,spvutils::HexFloatTraits<spvutils::FloatProxy<spvutils::Float16>>>>
          (HexFloat<spvutils::FloatProxy<float>,spvutils::HexFloatTraits<spvutils::FloatProxy<float>>>
           *this,ushort *param_1,int param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  byte local_31;
  long local_30;
  
  uVar1 = *(uint *)this;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = 0;
  if ((uVar1 & 0x7fffffff) == 0) {
    if (uVar1 != 0) {
      *param_1 = 0x8000;
    }
    goto LAB_0011a1e6;
  }
  local_31 = 0;
  uVar5 = getRoundedNormalizedSignificand<spvutils::HexFloat<spvutils::FloatProxy<spvutils::Float16>,spvutils::HexFloatTraits<spvutils::FloatProxy<spvutils::Float16>>>>
                    (this,param_3,&local_31);
  uVar2 = *(uint *)this;
  uVar9 = uVar1 & 0x7fffff;
  uVar7 = uVar2 >> 0x17 & 0xff;
  iVar6 = uVar7 - 0x7f;
  bVar3 = (byte)(uVar5 >> 8);
  if (uVar7 != 0) {
    uVar8 = (ushort)((int)uVar1 >> 0x1f);
    if ((~uVar2 & 0x7f800000) == 0) {
      if (uVar9 != 0) {
        uVar5 = (ushort)(uVar9 >> 0xd);
        if (uVar9 >> 0xd == 0) {
          uVar5 = 1;
        }
        *param_1 = (uVar8 & 0x8000) + 0x7c00 | uVar5;
        goto LAB_0011a1e6;
      }
    }
    else if ((int)((uint)local_31 + iVar6) < 0x10) goto LAB_0011a2e9;
    *param_1 = (uVar8 & 0x8000) + 0x7c00;
    goto LAB_0011a1e6;
  }
  if ((uVar1 & 0x400000) == 0) {
    uVar7 = 0x400000;
    do {
      uVar7 = uVar7 >> 1;
      if (iVar6 == -0x95) break;
      iVar6 = iVar6 + -1;
    } while ((uVar7 & uVar9) == 0);
LAB_0011a2e9:
    bVar10 = param_3 == 2;
    if ((int)uVar2 < 0) {
      bVar10 = param_3 == 3;
    }
    uVar8 = uVar5 & 0x3ff;
    if (iVar6 < -0xe) {
      uVar5 = CONCAT11(bVar3 >> 1,(char)(uVar5 >> 1)) | 0x200;
      iVar4 = iVar6;
      if ((short)iVar6 != -0xf) goto LAB_0011a320;
      goto LAB_0011a358;
    }
  }
  else {
    bVar10 = param_3 == 2;
    if ((int)uVar2 < 0) {
      bVar10 = param_3 == 3;
    }
    iVar6 = -0x7f;
    uVar5 = CONCAT11(bVar3 >> 1,(char)(uVar5 >> 1)) | 0x200;
LAB_0011a320:
    do {
      iVar6 = iVar6 + 1;
      uVar5 = uVar5 >> 1;
    } while ((short)iVar6 != -0xf);
    uVar8 = (ushort)bVar10;
    iVar6 = -0xf;
    iVar4 = -0xf;
    if (uVar5 != 0) {
LAB_0011a358:
      iVar6 = iVar4;
      uVar8 = uVar5 & 0x3ff;
    }
  }
  *param_1 = (ushort)((uVar1 >> 0x1f) << 0xf) | uVar8 | ((short)iVar6 + 0xf) * 0x400;
LAB_0011a1e6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::__detail::_Map_base<unsigned int, std::pair<unsigned int const, spv::Builder::DebugTypeLoc>,
   std::allocator<std::pair<unsigned int const, spv::Builder::DebugTypeLoc> >,
   std::__detail::_Select1st, std::equal_to<unsigned int>, std::hash<unsigned int>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, false, true>,
   true>::operator[](unsigned int const&) */

long * __thiscall
std::__detail::
_Map_base<unsigned_int,std::pair<unsigned_int_const,spv::Builder::DebugTypeLoc>,std::allocator<std::pair<unsigned_int_const,spv::Builder::DebugTypeLoc>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
::operator[](_Map_base<unsigned_int,std::pair<unsigned_int_const,spv::Builder::DebugTypeLoc>,std::allocator<std::pair<unsigned_int_const,spv::Builder::DebugTypeLoc>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
             *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  char cVar5;
  long *plVar6;
  _Map_base<unsigned_int,std::pair<unsigned_int_const,spv::Builder::DebugTypeLoc>,std::allocator<std::pair<unsigned_int_const,spv::Builder::DebugTypeLoc>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
  *__s;
  ulong uVar7;
  ulong extraout_RDX;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  _Map_base<unsigned_int,std::pair<unsigned_int_const,spv::Builder::DebugTypeLoc>,std::allocator<std::pair<unsigned_int_const,spv::Builder::DebugTypeLoc>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
  *p_Var11;
  
  uVar1 = *param_1;
  uVar7 = (ulong)uVar1 % *(ulong *)(this + 8);
  plVar6 = *(long **)(*(long *)this + uVar7 * 8);
  if (plVar6 != (long *)0x0) {
    uVar2 = *(uint *)((long *)*plVar6 + 1);
    plVar8 = (long *)*plVar6;
    while (uVar2 != uVar1) {
      plVar9 = (long *)*plVar8;
      if ((plVar9 == (long *)0x0) ||
         (uVar2 = *(uint *)(plVar9 + 1), plVar6 = plVar8, plVar8 = plVar9,
         uVar7 != (ulong)uVar2 % *(ulong *)(this + 8))) goto LAB_0011a420;
    }
    if (*plVar6 != 0) {
      return (long *)(*plVar6 + 0x10);
    }
  }
LAB_0011a420:
  plVar6 = (long *)operator_new(0x38);
  uVar10 = *(ulong *)(this + 0x18);
  uVar3 = *(ulong *)(this + 8);
  *plVar6 = 0;
  uVar2 = *param_1;
  plVar6[6] = 0;
  *(uint *)(plVar6 + 1) = uVar2;
  plVar6[2] = (long)(plVar6 + 4);
  plVar6[3] = 0;
  *(undefined1 (*) [16])(plVar6 + 4) = (undefined1  [16])0x0;
  cVar5 = std::__detail::_Prime_rehash_policy::_M_need_rehash((ulong)(this + 0x20),uVar3,uVar10);
  if (cVar5 == '\0') {
    __s = *(_Map_base<unsigned_int,std::pair<unsigned_int_const,spv::Builder::DebugTypeLoc>,std::allocator<std::pair<unsigned_int_const,spv::Builder::DebugTypeLoc>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
            **)this;
    p_Var11 = __s + uVar7 * 8;
    plVar8 = *(long **)p_Var11;
  }
  else {
    if (extraout_RDX == 1) {
      __s = this + 0x30;
      *(undefined8 *)(this + 0x30) = 0;
    }
    else {
      if (extraout_RDX >> 0x3c != 0) {
        if (extraout_RDX >> 0x3d != 0) {
          std::__throw_bad_array_new_length();
        }
                    /* WARNING: Subroutine does not return */
        std::__throw_bad_alloc();
      }
      __s = (_Map_base<unsigned_int,std::pair<unsigned_int_const,spv::Builder::DebugTypeLoc>,std::allocator<std::pair<unsigned_int_const,spv::Builder::DebugTypeLoc>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
             *)operator_new(extraout_RDX * 8);
      memset(__s,0,extraout_RDX * 8);
    }
    plVar8 = *(long **)(this + 0x10);
    *(undefined8 *)(this + 0x10) = 0;
    uVar7 = 0;
    while (uVar10 = uVar7, plVar9 = plVar8, plVar8 != (long *)0x0) {
      while( true ) {
        plVar8 = (long *)*plVar9;
        uVar7 = (ulong)*(uint *)(plVar9 + 1) % extraout_RDX;
        p_Var11 = __s + uVar7 * 8;
        if (*(long **)p_Var11 == (long *)0x0) break;
        *plVar9 = **(long **)p_Var11;
        **(undefined8 **)p_Var11 = plVar9;
        plVar9 = plVar8;
        if (plVar8 == (long *)0x0) goto LAB_0011a52d;
      }
      *plVar9 = *(long *)(this + 0x10);
      *(long **)(this + 0x10) = plVar9;
      *(_Map_base<unsigned_int,std::pair<unsigned_int_const,spv::Builder::DebugTypeLoc>,std::allocator<std::pair<unsigned_int_const,spv::Builder::DebugTypeLoc>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
        **)p_Var11 = this + 0x10;
      if (*plVar9 != 0) {
        *(long **)(__s + uVar10 * 8) = plVar9;
      }
    }
LAB_0011a52d:
    if (*(_Map_base<unsigned_int,std::pair<unsigned_int_const,spv::Builder::DebugTypeLoc>,std::allocator<std::pair<unsigned_int_const,spv::Builder::DebugTypeLoc>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
          **)this != this + 0x30) {
      operator_delete(*(_Map_base<unsigned_int,std::pair<unsigned_int_const,spv::Builder::DebugTypeLoc>,std::allocator<std::pair<unsigned_int_const,spv::Builder::DebugTypeLoc>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                        **)this,*(long *)(this + 8) << 3);
    }
    *(ulong *)(this + 8) = extraout_RDX;
    *(_Map_base<unsigned_int,std::pair<unsigned_int_const,spv::Builder::DebugTypeLoc>,std::allocator<std::pair<unsigned_int_const,spv::Builder::DebugTypeLoc>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
      **)this = __s;
    p_Var11 = __s + ((ulong)uVar1 % extraout_RDX) * 8;
    plVar8 = *(long **)p_Var11;
  }
  if (plVar8 == (long *)0x0) {
    lVar4 = *(long *)(this + 0x10);
    *(long **)(this + 0x10) = plVar6;
    *plVar6 = lVar4;
    if (lVar4 != 0) {
      *(long **)(__s + ((ulong)*(uint *)(lVar4 + 8) % *(ulong *)(this + 8)) * 8) = plVar6;
    }
    *(_Map_base<unsigned_int,std::pair<unsigned_int_const,spv::Builder::DebugTypeLoc>,std::allocator<std::pair<unsigned_int_const,spv::Builder::DebugTypeLoc>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
      **)p_Var11 = this + 0x10;
  }
  else {
    *plVar6 = *plVar8;
    **(undefined8 **)p_Var11 = plVar6;
  }
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return plVar6 + 2;
}



/* void std::vector<unsigned int, std::allocator<unsigned int> >::_M_realloc_insert<unsigned
   int>(__gnu_cxx::__normal_iterator<unsigned int*, std::vector<unsigned int,
   std::allocator<unsigned int> > >, unsigned int&&) */

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>
          (vector<unsigned_int,std::allocator<unsigned_int>> *this,void *param_2,undefined4 *param_3
          )

{
  void *__dest;
  void *pvVar1;
  void *__src;
  ulong uVar2;
  void *__dest_00;
  ulong uVar3;
  size_t __n;
  long lVar4;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar2 = (long)pvVar1 - (long)__src >> 2;
  if (uVar2 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_0011a6a0;
    uVar3 = 0x1fffffffffffffff;
    if (uVar2 + 1 < 0x2000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 2;
LAB_0011a6aa:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_0011a6a0:
      uVar3 = 0x7ffffffffffffffc;
      goto LAB_0011a6aa;
    }
    if (uVar3 != 0) {
      if (0x1fffffffffffffff < uVar3) {
        uVar3 = 0x1fffffffffffffff;
      }
      uVar3 = uVar3 * 4;
      goto LAB_0011a6aa;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 4);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined4 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_0011a67b;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0011a67b:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* spv::Instruction::dump(std::vector<unsigned int, std::allocator<unsigned int> >&) const */

void __thiscall spv::Instruction::dump(Instruction *this,vector *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  puVar7 = *(uint **)(param_1 + 8);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = (((3 - (uint)(*(int *)(this + 0xc) == 0)) - (uint)(*(int *)(this + 8) == 0)) +
             (int)(*(long *)(this + 0x20) - *(long *)(this + 0x18) >> 2)) * 0x10000 |
             *(uint *)(this + 0x10);
  if (puVar7 == *(uint **)(param_1 + 0x10)) {
    std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)param_1,puVar7,&local_24);
    puVar7 = *(uint **)(param_1 + 8);
  }
  else {
    *puVar7 = local_24;
    puVar7 = puVar7 + 1;
    *(uint **)(param_1 + 8) = puVar7;
  }
  if (*(uint *)(this + 0xc) != 0) {
    if (*(uint **)(param_1 + 0x10) != puVar7) {
      *puVar7 = *(uint *)(this + 0xc);
      iVar2 = *(int *)(this + 8);
      *(uint **)(param_1 + 8) = puVar7 + 1;
      goto joined_r0x0011a887;
    }
    std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)param_1,puVar7,this + 0xc);
  }
  iVar2 = *(int *)(this + 8);
joined_r0x0011a887:
  if (iVar2 != 0) {
    piVar4 = *(int **)(param_1 + 8);
    if (piVar4 == *(int **)(param_1 + 0x10)) {
      std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>
                ((vector<unsigned_int,std::allocator<unsigned_int>> *)param_1,piVar4,this + 8);
    }
    else {
      *piVar4 = iVar2;
      *(int **)(param_1 + 8) = piVar4 + 1;
    }
  }
  lVar5 = *(long *)(this + 0x18);
  lVar6 = 0;
  if (0 < (int)(*(long *)(this + 0x20) - lVar5 >> 2)) {
    do {
      puVar3 = *(undefined4 **)(param_1 + 8);
      puVar1 = (undefined4 *)(lVar5 + lVar6 * 4);
      if (puVar3 == *(undefined4 **)(param_1 + 0x10)) {
        std::vector<unsigned_int,std::allocator<unsigned_int>>::
        _M_realloc_insert<unsigned_int_const&>
                  ((vector<unsigned_int,std::allocator<unsigned_int>> *)param_1,puVar3,puVar1);
        lVar5 = *(long *)(this + 0x18);
      }
      else {
        *puVar3 = *puVar1;
        *(undefined4 **)(param_1 + 8) = puVar3 + 1;
      }
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < (int)(*(long *)(this + 0x20) - lVar5 >> 2));
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Function_handler<void (spv::Block*, spv::ReachReason, spv::Block*),
   spv::Function::dump(std::vector<unsigned int, std::allocator<unsigned int> >&)
   const::{lambda(spv::Block const*, spv::ReachReason, spv::Block*)#1}>::_M_invoke(std::_Any_data
   const&, spv::Block*&&, spv::ReachReason&&, spv::Block*&&) */

void std::
     _Function_handler<void(spv::Block*,spv::ReachReason,spv::Block*),spv::Function::dump(std::vector<unsigned_int,std::allocator<unsigned_int>>&)const::{lambda(spv::Block_const*,spv::ReachReason,spv::Block*)#1}>
     ::_M_invoke(_Any_data *param_1,Block **param_2,ReachReason *param_3,Block **param_4)

{
  undefined4 *puVar1;
  Block *pBVar2;
  vector *pvVar3;
  undefined4 *puVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  lVar10 = 0;
  pBVar2 = *param_2;
  pvVar3 = *(vector **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  spv::Instruction::dump((Instruction *)**(undefined8 **)(pBVar2 + 8),pvVar3);
  lVar6 = *(long *)(pBVar2 + 0x50);
  if (0 < (int)(*(long *)(pBVar2 + 0x58) - lVar6 >> 3)) {
    do {
      lVar6 = *(long *)(lVar6 + lVar10 * 8);
      puVar9 = *(uint **)(pvVar3 + 8);
      local_44 = (((3 - (uint)(*(int *)(lVar6 + 0xc) == 0)) - (uint)(*(int *)(lVar6 + 8) == 0)) +
                 (int)(*(long *)(lVar6 + 0x20) - *(long *)(lVar6 + 0x18) >> 2)) * 0x10000 |
                 *(uint *)(lVar6 + 0x10);
      if (puVar9 == *(uint **)(pvVar3 + 0x10)) {
        vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>
                  ((vector<unsigned_int,std::allocator<unsigned_int>> *)pvVar3,puVar9,&local_44);
        puVar9 = *(uint **)(pvVar3 + 8);
      }
      else {
        *puVar9 = local_44;
        puVar9 = puVar9 + 1;
        *(uint **)(pvVar3 + 8) = puVar9;
      }
      if (*(uint *)(lVar6 + 0xc) != 0) {
        if (*(uint **)(pvVar3 + 0x10) == puVar9) {
          vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>
                    ((vector<unsigned_int,std::allocator<unsigned_int>> *)pvVar3,puVar9,lVar6 + 0xc)
          ;
        }
        else {
          *puVar9 = *(uint *)(lVar6 + 0xc);
          *(uint **)(pvVar3 + 8) = puVar9 + 1;
        }
      }
      if (*(int *)(lVar6 + 8) != 0) {
        piVar5 = *(int **)(pvVar3 + 8);
        if (piVar5 == *(int **)(pvVar3 + 0x10)) {
          vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>
                    ((vector<unsigned_int,std::allocator<unsigned_int>> *)pvVar3,piVar5,lVar6 + 8);
        }
        else {
          *piVar5 = *(int *)(lVar6 + 8);
          *(int **)(pvVar3 + 8) = piVar5 + 1;
        }
      }
      lVar7 = *(long *)(lVar6 + 0x18);
      lVar11 = 0;
      if (0 < (int)(*(long *)(lVar6 + 0x20) - lVar7 >> 2)) {
        do {
          puVar4 = *(undefined4 **)(pvVar3 + 8);
          puVar1 = (undefined4 *)(lVar7 + lVar11 * 4);
          if (puVar4 == *(undefined4 **)(pvVar3 + 0x10)) {
            vector<unsigned_int,std::allocator<unsigned_int>>::
            _M_realloc_insert<unsigned_int_const&>
                      ((vector<unsigned_int,std::allocator<unsigned_int>> *)pvVar3,puVar4,puVar1);
            lVar7 = *(long *)(lVar6 + 0x18);
          }
          else {
            *puVar4 = *puVar1;
            *(undefined4 **)(pvVar3 + 8) = puVar4 + 1;
          }
          lVar11 = lVar11 + 1;
        } while ((int)lVar11 < (int)(*(long *)(lVar6 + 0x20) - lVar7 >> 2));
      }
      lVar6 = *(long *)(pBVar2 + 0x50);
      lVar10 = lVar10 + 1;
    } while ((int)lVar10 < (int)(*(long *)(pBVar2 + 0x58) - lVar6 >> 3));
  }
  lVar6 = *(long *)(pBVar2 + 8);
  lVar10 = 8;
  iVar8 = 1;
  if (1 < (int)(*(long *)(pBVar2 + 0x10) - lVar6 >> 3)) {
    do {
      lVar6 = *(long *)(lVar6 + lVar10);
      puVar9 = *(uint **)(pvVar3 + 8);
      local_44 = (((3 - (uint)(*(int *)(lVar6 + 0xc) == 0)) - (uint)(*(int *)(lVar6 + 8) == 0)) +
                 (int)(*(long *)(lVar6 + 0x20) - *(long *)(lVar6 + 0x18) >> 2)) * 0x10000 |
                 *(uint *)(lVar6 + 0x10);
      if (puVar9 == *(uint **)(pvVar3 + 0x10)) {
        vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int>
                  ((vector<unsigned_int,std::allocator<unsigned_int>> *)pvVar3,puVar9,&local_44);
        puVar9 = *(uint **)(pvVar3 + 8);
      }
      else {
        *puVar9 = local_44;
        puVar9 = puVar9 + 1;
        *(uint **)(pvVar3 + 8) = puVar9;
      }
      if (*(uint *)(lVar6 + 0xc) != 0) {
        if (*(uint **)(pvVar3 + 0x10) == puVar9) {
          vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>
                    ((vector<unsigned_int,std::allocator<unsigned_int>> *)pvVar3,puVar9,lVar6 + 0xc)
          ;
        }
        else {
          *puVar9 = *(uint *)(lVar6 + 0xc);
          *(uint **)(pvVar3 + 8) = puVar9 + 1;
        }
      }
      if (*(int *)(lVar6 + 8) != 0) {
        piVar5 = *(int **)(pvVar3 + 8);
        if (piVar5 == *(int **)(pvVar3 + 0x10)) {
          vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>
                    ((vector<unsigned_int,std::allocator<unsigned_int>> *)pvVar3,piVar5,lVar6 + 8);
        }
        else {
          *piVar5 = *(int *)(lVar6 + 8);
          *(int **)(pvVar3 + 8) = piVar5 + 1;
        }
      }
      lVar7 = *(long *)(lVar6 + 0x18);
      lVar11 = 0;
      if (0 < (int)(*(long *)(lVar6 + 0x20) - lVar7 >> 2)) {
        do {
          puVar4 = *(undefined4 **)(pvVar3 + 8);
          puVar1 = (undefined4 *)(lVar7 + lVar11 * 4);
          if (puVar4 == *(undefined4 **)(pvVar3 + 0x10)) {
            vector<unsigned_int,std::allocator<unsigned_int>>::
            _M_realloc_insert<unsigned_int_const&>
                      ((vector<unsigned_int,std::allocator<unsigned_int>> *)pvVar3,puVar4,puVar1);
            lVar7 = *(long *)(lVar6 + 0x18);
          }
          else {
            *puVar4 = *puVar1;
            *(undefined4 **)(pvVar3 + 8) = puVar4 + 1;
          }
          lVar11 = lVar11 + 1;
        } while ((int)lVar11 < (int)(*(long *)(lVar6 + 0x20) - lVar7 >> 2));
      }
      lVar6 = *(long *)(pBVar2 + 8);
      iVar8 = iVar8 + 1;
      lVar10 = lVar10 + 8;
    } while (iVar8 < (int)(*(long *)(pBVar2 + 0x10) - lVar6 >> 3));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::__detail::_Map_base<unsigned int, std::pair<unsigned int const, unsigned int>,
   std::allocator<std::pair<unsigned int const, unsigned int> >, std::__detail::_Select1st,
   std::equal_to<unsigned int>, std::hash<unsigned int>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true>, true>::operator[](unsigned int const&) */

long __thiscall
std::__detail::
_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
::operator[](_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
             *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  char cVar5;
  long *plVar6;
  _Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
  *__s;
  ulong uVar7;
  ulong extraout_RDX;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  _Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
  *p_Var11;
  
  uVar1 = *param_1;
  uVar7 = (ulong)uVar1 % *(ulong *)(this + 8);
  plVar6 = *(long **)(*(long *)this + uVar7 * 8);
  if (plVar6 != (long *)0x0) {
    uVar2 = *(uint *)((long *)*plVar6 + 1);
    plVar8 = (long *)*plVar6;
    while (uVar2 != uVar1) {
      plVar9 = (long *)*plVar8;
      if ((plVar9 == (long *)0x0) ||
         (uVar2 = *(uint *)(plVar9 + 1), plVar6 = plVar8, plVar8 = plVar9,
         uVar7 != (ulong)uVar2 % *(ulong *)(this + 8))) goto LAB_0011af00;
    }
    if (*plVar6 != 0) {
      return *plVar6 + 0xc;
    }
  }
LAB_0011af00:
  plVar6 = (long *)operator_new(0x10);
  uVar10 = *(ulong *)(this + 0x18);
  uVar3 = *(ulong *)(this + 8);
  *plVar6 = 0;
  uVar2 = *param_1;
  *(undefined4 *)((long)plVar6 + 0xc) = 0;
  *(uint *)(plVar6 + 1) = uVar2;
  cVar5 = std::__detail::_Prime_rehash_policy::_M_need_rehash((ulong)(this + 0x20),uVar3,uVar10);
  if (cVar5 == '\0') {
    __s = *(_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
            **)this;
    p_Var11 = __s + uVar7 * 8;
    plVar8 = *(long **)p_Var11;
  }
  else {
    if (extraout_RDX == 1) {
      __s = this + 0x30;
      *(undefined8 *)(this + 0x30) = 0;
    }
    else {
      if (extraout_RDX >> 0x3c != 0) {
        if (extraout_RDX >> 0x3d != 0) {
          std::__throw_bad_array_new_length();
        }
                    /* WARNING: Subroutine does not return */
        std::__throw_bad_alloc();
      }
      __s = (_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
             *)operator_new(extraout_RDX * 8);
      memset(__s,0,extraout_RDX * 8);
    }
    plVar8 = *(long **)(this + 0x10);
    *(undefined8 *)(this + 0x10) = 0;
    uVar7 = 0;
    while (uVar10 = uVar7, plVar9 = plVar8, plVar8 != (long *)0x0) {
      while( true ) {
        plVar8 = (long *)*plVar9;
        uVar7 = (ulong)*(uint *)(plVar9 + 1) % extraout_RDX;
        p_Var11 = __s + uVar7 * 8;
        if (*(long **)p_Var11 == (long *)0x0) break;
        *plVar9 = **(long **)p_Var11;
        **(undefined8 **)p_Var11 = plVar9;
        plVar9 = plVar8;
        if (plVar8 == (long *)0x0) goto LAB_0011affd;
      }
      *plVar9 = *(long *)(this + 0x10);
      *(long **)(this + 0x10) = plVar9;
      *(_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
        **)p_Var11 = this + 0x10;
      if (*plVar9 != 0) {
        *(long **)(__s + uVar10 * 8) = plVar9;
      }
    }
LAB_0011affd:
    if (*(_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
          **)this != this + 0x30) {
      operator_delete(*(_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                        **)this,*(long *)(this + 8) << 3);
    }
    *(ulong *)(this + 8) = extraout_RDX;
    *(_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
      **)this = __s;
    p_Var11 = __s + ((ulong)uVar1 % extraout_RDX) * 8;
    plVar8 = *(long **)p_Var11;
  }
  if (plVar8 == (long *)0x0) {
    lVar4 = *(long *)(this + 0x10);
    *(long **)(this + 0x10) = plVar6;
    *plVar6 = lVar4;
    if (lVar4 != 0) {
      *(long **)(__s + ((ulong)*(uint *)(lVar4 + 8) % *(ulong *)(this + 8)) * 8) = plVar6;
    }
    *(_Map_base<unsigned_int,std::pair<unsigned_int_const,unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
      **)p_Var11 = this + 0x10;
  }
  else {
    *plVar6 = *plVar8;
    **(undefined8 **)p_Var11 = plVar6;
  }
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return (long)plVar6 + 0xc;
}



/* std::vector<unsigned int, std::allocator<unsigned int> >::_M_default_append(unsigned long) */

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_default_append
          (vector<unsigned_int,std::allocator<unsigned_int>> *this,ulong param_1)

{
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
  puVar6 = *(undefined4 **)(this + 8);
  pvVar3 = *(void **)this;
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar6 >> 2)) {
    *puVar6 = 0;
    __s = puVar6 + 1;
    if (param_1 - 1 != 0) {
      sVar4 = (long)__s + ((param_1 - 1) * 4 - (long)puVar6) + -4;
      pvVar3 = memset(__s,0,sVar4);
      __s = (undefined4 *)((long)pvVar3 + sVar4);
    }
    *(undefined4 **)(this + 8) = __s;
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
    puVar6 = (undefined4 *)((long)__dest + sVar4);
    *puVar6 = 0;
    if (param_1 - 1 != 0) goto LAB_0011b164;
LAB_0011b178:
    if (sVar4 != 0) goto LAB_0011b248;
    if (pvVar3 == (void *)0x0) goto LAB_0011b18a;
    uVar5 = *(long *)(this + 0x10) - (long)pvVar3;
  }
  else {
    uVar2 = uVar2 * 2;
    if (0x1fffffffffffffff < uVar2) {
      uVar2 = 0x1fffffffffffffff;
    }
    uVar2 = uVar2 * 4;
    __dest = operator_new(uVar2);
    puVar6 = (undefined4 *)((long)__dest + sVar4);
    *puVar6 = 0;
    if (param_1 != 1) {
LAB_0011b164:
      memset(puVar6 + 1,0,(param_1 - 1) * 4);
      goto LAB_0011b178;
    }
LAB_0011b248:
    memmove(__dest,pvVar3,sVar4);
    uVar5 = *(long *)(this + 0x10) - (long)pvVar3;
  }
  operator_delete(pvVar3,uVar5);
LAB_0011b18a:
  *(void **)this = __dest;
  *(void **)(this + 8) = (void *)((long)__dest + uVar1 * 4);
  *(ulong *)(this + 0x10) = (long)__dest + uVar2;
  return;
}



/* void std::vector<spv::Block*, std::allocator<spv::Block*>
   >::_M_realloc_insert<spv::Block*>(__gnu_cxx::__normal_iterator<spv::Block**,
   std::vector<spv::Block*, std::allocator<spv::Block*> > >, spv::Block*&&) */

void __thiscall
std::vector<spv::Block*,std::allocator<spv::Block*>>::_M_realloc_insert<spv::Block*>
          (vector<spv::Block*,std::allocator<spv::Block*>> *this,void *param_2,undefined8 *param_3)

{
  void *__dest;
  void *pvVar1;
  void *__src;
  ulong uVar2;
  void *__dest_00;
  ulong uVar3;
  size_t __n;
  long lVar4;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar2 = (long)pvVar1 - (long)__src >> 3;
  if (uVar2 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_0011b350;
    uVar3 = 0xfffffffffffffff;
    if (uVar2 + 1 < 0x1000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 3;
LAB_0011b35a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_0011b350:
      uVar3 = 0x7ffffffffffffff8;
      goto LAB_0011b35a;
    }
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_0011b35a;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 8);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined8 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_0011b32c;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0011b32c:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* void std::vector<std::unique_ptr<spv::Instruction, std::default_delete<spv::Instruction> >,
   std::allocator<std::unique_ptr<spv::Instruction, std::default_delete<spv::Instruction> > >
   >::_M_realloc_insert<std::unique_ptr<spv::Instruction, std::default_delete<spv::Instruction> >
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<spv::Instruction,
   std::default_delete<spv::Instruction> >*, std::vector<std::unique_ptr<spv::Instruction,
   std::default_delete<spv::Instruction> >, std::allocator<std::unique_ptr<spv::Instruction,
   std::default_delete<spv::Instruction> > > > >, std::unique_ptr<spv::Instruction,
   std::default_delete<spv::Instruction> >&&) */

void __thiscall
std::
vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>
::_M_realloc_insert<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>
          (vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>
           *this,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long local_50;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar4 = (long)puVar1 - (long)puVar2 >> 3;
  if (uVar4 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar4) goto LAB_0011b520;
    uVar8 = 0xfffffffffffffff;
    if (uVar4 + 1 < 0x1000000000000000) {
      uVar8 = uVar4 + 1;
    }
    uVar8 = uVar8 << 3;
LAB_0011b52a:
    puVar5 = (undefined8 *)operator_new(uVar8);
    local_50 = (long)puVar5 + uVar8;
    uVar3 = *param_3;
    puVar6 = puVar5 + 1;
    *param_3 = 0;
    *(undefined8 *)((long)puVar5 + ((long)param_2 - (long)puVar2)) = uVar3;
    if (param_2 != puVar2) {
LAB_0011b4a4:
      puVar6 = puVar2;
      puVar7 = puVar5;
      do {
        uVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar7 = uVar3;
        puVar7 = puVar7 + 1;
      } while (param_2 != puVar6);
      puVar6 = (undefined8 *)((long)puVar5 + (long)param_2 + (8 - (long)puVar2));
    }
    puVar7 = puVar6;
    if (param_2 == puVar1) goto LAB_0011b4e2;
  }
  else {
    uVar8 = uVar4 * 2;
    if (uVar8 < uVar4) {
LAB_0011b520:
      uVar8 = 0x7ffffffffffffff8;
      goto LAB_0011b52a;
    }
    if (uVar8 != 0) {
      if (0xfffffffffffffff < uVar8) {
        uVar8 = 0xfffffffffffffff;
      }
      uVar8 = uVar8 * 8;
      goto LAB_0011b52a;
    }
    uVar3 = *param_3;
    puVar5 = (undefined8 *)0x0;
    *param_3 = 0;
    puVar6 = (undefined8 *)0x8;
    local_50 = 0;
    *(undefined8 *)((long)param_2 - (long)puVar2) = uVar3;
    if (param_2 != puVar2) goto LAB_0011b4a4;
  }
  puVar7 = (undefined8 *)((long)puVar6 + ((long)puVar1 - (long)param_2));
  memcpy(puVar6,param_2,(long)puVar1 - (long)param_2);
LAB_0011b4e2:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar5;
  *(undefined8 **)(this + 8) = puVar7;
  *(long *)(this + 0x10) = local_50;
  return;
}



/* spv::Block::Block(unsigned int, spv::Function&) */

void __thiscall spv::Block::Block(Block *this,uint param_1,Function *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined8 *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(Function **)(this + 0x68) = param_2;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__Block_0011c610;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  this[0x7c] = (Block)0x0;
  this[0x84] = (Block)0x0;
  this[0x88] = (Block)0x0;
  local_28 = (undefined8 *)operator_new(0x60);
  *local_28 = &PTR__Instruction_0011c5f0;
  *(uint *)(local_28 + 1) = param_1;
  *(undefined8 *)((long)local_28 + 0xc) = 0xf800000000;
  *(undefined4 *)(local_28 + 7) = 0;
  local_28[8] = 0;
  *(undefined4 *)(local_28 + 9) = 0;
  *(undefined1 (*) [16])(local_28 + 3) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_28 + 5) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_28 + 10) = (undefined1  [16])0x0;
  std::
  vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>
  ::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>
            ((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>
              *)(this + 8),(unique_ptr *)&local_28);
  std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr
            ((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>> *)&local_28);
  lVar3 = *(long *)(*(long *)(this + 0x10) + -8);
  *(Block **)(lVar3 + 0x58) = this;
  lVar4 = *(long *)(param_2 + 8);
  uVar2 = *(uint *)(lVar3 + 8);
  lVar6 = *(long *)(lVar4 + 0x20);
  uVar5 = *(long *)(lVar4 + 0x28) - lVar6 >> 3;
  if (uVar5 <= uVar2) {
    uVar7 = (ulong)(uVar2 + 0x10);
    if (uVar5 < uVar7) {
      std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>::_M_default_append
                ((vector<spv::Instruction*,std::allocator<spv::Instruction*>> *)(lVar4 + 0x20),
                 uVar7 - uVar5);
      lVar6 = *(long *)(lVar4 + 0x20);
    }
    else if ((uVar7 < uVar5) && (lVar1 = lVar6 + uVar7 * 8, *(long *)(lVar4 + 0x28) != lVar1)) {
      *(long *)(lVar4 + 0x28) = lVar1;
    }
  }
  *(long *)(lVar6 + (ulong)uVar2 * 8) = lVar3;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* spv::Builder::setPrecision(unsigned int, spv::Decoration) */

int __thiscall spv::Builder::setPrecision(undefined8 param_1_00,int param_1,int param_3)

{
  if ((param_3 != 0x7fffffff) && (param_1 != 0)) {
    addDecoration();
    return param_1;
  }
  return param_1;
}



/* std::_Hashtable<unsigned int, std::pair<unsigned int const, std::vector<spv::Instruction*,
   std::allocator<spv::Instruction*> > >, std::allocator<std::pair<unsigned int const,
   std::vector<spv::Instruction*, std::allocator<spv::Instruction*> > > >,
   std::__detail::_Select1st, std::equal_to<unsigned int>, std::hash<unsigned int>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, false, true>
   >::_M_insert_unique_node(unsigned long, unsigned long,
   std::__detail::_Hash_node<std::pair<unsigned int const, std::vector<spv::Instruction*,
   std::allocator<spv::Instruction*> > >, false>*, unsigned long) */

ulong std::
      _Hashtable<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
      ::_M_insert_unique_node(ulong param_1,ulong param_2,_Hash_node *param_3,ulong param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  void *__s;
  ulong extraout_RDX;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  
  cVar3 = std::__detail::_Prime_rehash_policy::_M_need_rehash
                    (param_1 + 0x20,*(ulong *)(param_1 + 8),*(ulong *)(param_1 + 0x18));
  if (cVar3 == '\0') {
    __s = *(void **)param_1;
    plVar5 = (long *)((long)__s + param_2 * 8);
    puVar2 = (undefined8 *)*plVar5;
  }
  else {
    if (extraout_RDX == 1) {
      __s = (void *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    else {
      if (extraout_RDX >> 0x3c != 0) {
        if (extraout_RDX >> 0x3d != 0) {
          std::__throw_bad_array_new_length();
        }
                    /* WARNING: Subroutine does not return */
        std::__throw_bad_alloc();
      }
      __s = operator_new(extraout_RDX * 8);
      memset(__s,0,extraout_RDX * 8);
    }
    plVar5 = *(long **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar4 = 0;
    while (uVar7 = uVar4, plVar6 = plVar5, plVar5 != (long *)0x0) {
      while( true ) {
        plVar5 = (long *)*plVar6;
        uVar4 = (ulong)*(uint *)(plVar6 + 1) % extraout_RDX;
        plVar1 = (long *)((long)__s + uVar4 * 8);
        if ((long *)*plVar1 == (long *)0x0) break;
        *plVar6 = *(long *)*plVar1;
        *(long **)*plVar1 = plVar6;
        plVar6 = plVar5;
        if (plVar5 == (long *)0x0) goto LAB_0011b880;
      }
      *plVar6 = *(long *)(param_1 + 0x10);
      *(long **)(param_1 + 0x10) = plVar6;
      *plVar1 = param_1 + 0x10;
      if (*plVar6 != 0) {
        *(long **)((long)__s + uVar7 * 8) = plVar6;
      }
    }
LAB_0011b880:
    if (*(void **)param_1 != (void *)(param_1 + 0x30)) {
      operator_delete(*(void **)param_1,*(long *)(param_1 + 8) << 3);
    }
    *(ulong *)(param_1 + 8) = extraout_RDX;
    *(void **)param_1 = __s;
    plVar5 = (long *)((long)__s + ((ulong)param_3 % extraout_RDX) * 8);
    puVar2 = (undefined8 *)*plVar5;
  }
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined8 *)param_4 = *(undefined8 *)(param_1 + 0x10);
    *(ulong *)(param_1 + 0x10) = param_4;
    if (*(long *)param_4 != 0) {
      *(ulong *)((long)__s + ((ulong)*(uint *)(*(long *)param_4 + 8) % *(ulong *)(param_1 + 8)) * 8)
           = param_4;
    }
    *plVar5 = param_1 + 0x10;
  }
  else {
    *(undefined8 *)param_4 = *puVar2;
    *(ulong *)*plVar5 = param_4;
  }
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  return param_4;
}



/* std::__detail::_Map_base<unsigned int, std::pair<unsigned int const,
   std::vector<spv::Instruction*, std::allocator<spv::Instruction*> > >,
   std::allocator<std::pair<unsigned int const, std::vector<spv::Instruction*,
   std::allocator<spv::Instruction*> > > >, std::__detail::_Select1st, std::equal_to<unsigned int>,
   std::hash<unsigned int>, std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, false, true>,
   true>::operator[](unsigned int&&) */

long __thiscall
std::__detail::
_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
::operator[](_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
             *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  
  uVar1 = *param_1;
  uVar8 = (ulong)uVar1 % *(ulong *)(this + 8);
  plVar3 = *(long **)(*(long *)this + uVar8 * 8);
  if (plVar3 != (long *)0x0) {
    uVar2 = *(uint *)((long *)*plVar3 + 1);
    plVar5 = (long *)*plVar3;
    while (uVar1 != uVar2) {
      plVar4 = (long *)*plVar5;
      if ((plVar4 == (long *)0x0) ||
         (uVar2 = *(uint *)(plVar4 + 1), plVar3 = plVar5, plVar5 = plVar4,
         uVar8 != (ulong)uVar2 % *(ulong *)(this + 8))) goto LAB_0011b9c0;
    }
    if (*plVar3 != 0) {
      return *plVar3 + 0x10;
    }
  }
LAB_0011b9c0:
  puVar6 = (undefined8 *)operator_new(0x28);
  *puVar6 = 0;
  uVar2 = *param_1;
  puVar6[4] = 0;
  *(uint *)(puVar6 + 1) = uVar2;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  lVar7 = _Hashtable<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
          ::_M_insert_unique_node((ulong)this,uVar8,(_Hash_node *)(ulong)uVar1,(ulong)puVar6);
  return lVar7 + 0x10;
}



/* std::__detail::_Map_base<unsigned int, std::pair<unsigned int const,
   std::vector<spv::Instruction*, std::allocator<spv::Instruction*> > >,
   std::allocator<std::pair<unsigned int const, std::vector<spv::Instruction*,
   std::allocator<spv::Instruction*> > > >, std::__detail::_Select1st, std::equal_to<unsigned int>,
   std::hash<unsigned int>, std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, false, true>,
   true>::operator[](unsigned int const&) */

long __thiscall
std::__detail::
_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
::operator[](_Map_base<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
             *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  
  uVar1 = *param_1;
  uVar8 = (ulong)uVar1 % *(ulong *)(this + 8);
  plVar3 = *(long **)(*(long *)this + uVar8 * 8);
  if (plVar3 != (long *)0x0) {
    uVar2 = *(uint *)((long *)*plVar3 + 1);
    plVar5 = (long *)*plVar3;
    while (uVar1 != uVar2) {
      plVar4 = (long *)*plVar5;
      if ((plVar4 == (long *)0x0) ||
         (uVar2 = *(uint *)(plVar4 + 1), plVar3 = plVar5, plVar5 = plVar4,
         uVar8 != (ulong)uVar2 % *(ulong *)(this + 8))) goto LAB_0011ba90;
    }
    if (*plVar3 != 0) {
      return *plVar3 + 0x10;
    }
  }
LAB_0011ba90:
  puVar6 = (undefined8 *)operator_new(0x28);
  *puVar6 = 0;
  uVar2 = *param_1;
  puVar6[4] = 0;
  *(uint *)(puVar6 + 1) = uVar2;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  lVar7 = _Hashtable<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
          ::_M_insert_unique_node((ulong)this,uVar8,(_Hash_node *)(ulong)uVar1,(ulong)puVar6);
  return lVar7 + 0x10;
}



/* void std::deque<unsigned int, std::allocator<unsigned int> >::_M_push_back_aux<unsigned int
   const&>(unsigned int const&) */

void __thiscall
std::deque<unsigned_int,std::allocator<unsigned_int>>::_M_push_back_aux<unsigned_int_const&>
          (deque<unsigned_int,std::allocator<unsigned_int>> *this,uint *param_1)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  size_t sVar4;
  long *__src;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *__dest;
  void *unaff_R15;
  undefined1 uVar9;
  
  plVar6 = *(long **)(this + 0x48);
  __src = *(long **)(this + 0x28);
  lVar8 = (long)plVar6 - (long)__src;
  if ((*(long *)(this + 0x30) - *(long *)(this + 0x38) >> 2) +
      ((lVar8 >> 3) + -1 + (ulong)(plVar6 == (long *)0x0)) * 0x80 +
      (*(long *)(this + 0x20) - *(long *)(this + 0x10) >> 2) == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  uVar5 = *(ulong *)(this + 8);
  if (1 < uVar5 - ((long)plVar6 - *(long *)this >> 3)) goto LAB_0011bb6a;
  __dest = (long *)((lVar8 >> 3) + 2);
  if ((ulong)((long)__dest * 2) < uVar5) {
    __dest = (long *)(*(long *)this + (uVar5 - (long)__dest >> 1) * 8);
    sVar4 = (long)plVar6 + (8 - (long)__src);
    if (__dest < __src) {
      if ((long)sVar4 < 9) {
        if (sVar4 == 8) {
          lVar3 = *__src;
          *__dest = lVar3;
          goto LAB_0011bc4f;
        }
        goto LAB_0011bc4c;
      }
      memmove(__dest,__src,sVar4);
      lVar3 = *__dest;
    }
    else if ((long)sVar4 < 9) {
      if (sVar4 != 8) goto LAB_0011bc4c;
      *(long *)((long)__dest + lVar8) = *__src;
      lVar3 = *__dest;
    }
    else {
      memmove((void *)((long)__dest + ((lVar8 + 8) - sVar4)),__src,sVar4);
      lVar3 = *__dest;
    }
  }
  else {
    if (uVar5 == 0) {
      uVar5 = 0x18;
      uVar7 = 3;
LAB_0011bbfb:
      unaff_R15 = operator_new(uVar5);
      __src = *(long **)(this + 0x28);
      __dest = (long *)((long)unaff_R15 + (uVar7 - (long)__dest >> 1) * 8);
      sVar4 = (*(long *)(this + 0x48) + 8) - (long)__src;
      uVar9 = sVar4 == 8;
      if ((long)sVar4 < 9) goto LAB_0011bd00;
      memmove(__dest,__src,sVar4);
    }
    else {
      uVar7 = (uVar5 + 1) * 2;
      if (uVar7 >> 0x3c == 0) {
        uVar5 = (uVar5 + 1) * 0x10;
        goto LAB_0011bbfb;
      }
      uVar9 = uVar7 == 0x1fffffffffffffff;
      if (uVar7 < 0x2000000000000000) {
                    /* WARNING: Subroutine does not return */
        std::__throw_bad_alloc();
      }
      std::__throw_bad_array_new_length();
LAB_0011bd00:
      if ((bool)uVar9) {
        *__dest = *__src;
      }
    }
    operator_delete(*(void **)this,*(long *)(this + 8) * 8);
    *(void **)this = unaff_R15;
    *(ulong *)(this + 8) = uVar7;
LAB_0011bc4c:
    lVar3 = *__dest;
  }
LAB_0011bc4f:
  *(long *)(this + 0x18) = lVar3;
  plVar6 = (long *)((long)__dest + lVar8);
  *(long *)(this + 0x20) = lVar3 + 0x200;
  lVar8 = *plVar6;
  *(long **)(this + 0x28) = __dest;
  *(long **)(this + 0x48) = plVar6;
  *(long *)(this + 0x38) = lVar8;
  *(long *)(this + 0x40) = lVar8 + 0x200;
LAB_0011bb6a:
  pvVar2 = operator_new(0x200);
  uVar1 = *param_1;
  plVar6[1] = (long)pvVar2;
  **(uint **)(this + 0x30) = uVar1;
  lVar8 = *(long *)(*(long *)(this + 0x48) + 8);
  *(long *)(this + 0x30) = lVar8;
  *(long *)(this + 0x38) = lVar8;
  *(long *)(this + 0x40) = lVar8 + 0x200;
  *(long *)(this + 0x48) = *(long *)(this + 0x48) + 8;
  return;
}



/* void std::vector<std::unique_ptr<spv::Function, std::default_delete<spv::Function> >,
   std::allocator<std::unique_ptr<spv::Function, std::default_delete<spv::Function> > >
   >::_M_realloc_insert<std::unique_ptr<spv::Function, std::default_delete<spv::Function> >
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<spv::Function, std::default_delete<spv::Function>
   >*, std::vector<std::unique_ptr<spv::Function, std::default_delete<spv::Function> >,
   std::allocator<std::unique_ptr<spv::Function, std::default_delete<spv::Function> > > > >,
   std::unique_ptr<spv::Function, std::default_delete<spv::Function> >&&) */

void __thiscall
std::
vector<std::unique_ptr<spv::Function,std::default_delete<spv::Function>>,std::allocator<std::unique_ptr<spv::Function,std::default_delete<spv::Function>>>>
::_M_realloc_insert<std::unique_ptr<spv::Function,std::default_delete<spv::Function>>>
          (vector<std::unique_ptr<spv::Function,std::default_delete<spv::Function>>,std::allocator<std::unique_ptr<spv::Function,std::default_delete<spv::Function>>>>
           *this,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long local_50;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar4 = (long)puVar1 - (long)puVar2 >> 3;
  if (uVar4 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar4) goto LAB_0011be50;
    uVar8 = 0xfffffffffffffff;
    if (uVar4 + 1 < 0x1000000000000000) {
      uVar8 = uVar4 + 1;
    }
    uVar8 = uVar8 << 3;
LAB_0011be5a:
    puVar5 = (undefined8 *)operator_new(uVar8);
    local_50 = (long)puVar5 + uVar8;
    uVar3 = *param_3;
    puVar6 = puVar5 + 1;
    *param_3 = 0;
    *(undefined8 *)((long)puVar5 + ((long)param_2 - (long)puVar2)) = uVar3;
    if (param_2 != puVar2) {
LAB_0011bdd4:
      puVar6 = puVar2;
      puVar7 = puVar5;
      do {
        uVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar7 = uVar3;
        puVar7 = puVar7 + 1;
      } while (puVar6 != param_2);
      puVar6 = (undefined8 *)((long)puVar5 + (long)param_2 + (8 - (long)puVar2));
    }
    puVar7 = puVar6;
    if (param_2 == puVar1) goto LAB_0011be12;
  }
  else {
    uVar8 = uVar4 * 2;
    if (uVar8 < uVar4) {
LAB_0011be50:
      uVar8 = 0x7ffffffffffffff8;
      goto LAB_0011be5a;
    }
    if (uVar8 != 0) {
      if (0xfffffffffffffff < uVar8) {
        uVar8 = 0xfffffffffffffff;
      }
      uVar8 = uVar8 * 8;
      goto LAB_0011be5a;
    }
    uVar3 = *param_3;
    puVar5 = (undefined8 *)0x0;
    *param_3 = 0;
    puVar6 = (undefined8 *)0x8;
    local_50 = 0;
    *(undefined8 *)((long)param_2 - (long)puVar2) = uVar3;
    if (param_2 != puVar2) goto LAB_0011bdd4;
  }
  puVar7 = (undefined8 *)((long)puVar6 + ((long)puVar1 - (long)param_2));
  memcpy(puVar6,param_2,(long)puVar1 - (long)param_2);
LAB_0011be12:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar5;
  *(undefined8 **)(this + 8) = puVar7;
  *(long *)(this + 0x10) = local_50;
  return;
}



/* std::_Hashtable<std::__cxx11::string, std::pair<std::__cxx11::string const, unsigned int>,
   std::allocator<std::pair<std::__cxx11::string const, unsigned int> >, std::__detail::_Select1st,
   std::equal_to<std::__cxx11::string >, std::hash<std::__cxx11::string >,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<true, false, true>
   >::_M_find_before_node(unsigned long, std::__cxx11::string const&, unsigned long) const */

long * __thiscall
std::
_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,unsigned_int>,std::allocator<std::pair<std::__cxx11::string_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
::_M_find_before_node
          (_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,unsigned_int>,std::allocator<std::pair<std::__cxx11::string_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
           *this,ulong param_1,string *param_2,ulong param_3)

{
  long *plVar1;
  size_t __n;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  
  plVar5 = *(long **)(*(long *)this + param_1 * 8);
  if (plVar5 != (long *)0x0) {
    uVar3 = ((long *)*plVar5)[6];
    plVar1 = (long *)*plVar5;
    do {
      plVar4 = plVar1;
      if ((uVar3 == param_3) && (__n = *(size_t *)(param_2 + 8), __n == plVar4[2])) {
        if (__n == 0) {
          return plVar5;
        }
        iVar2 = memcmp(*(void **)param_2,(void *)plVar4[1],__n);
        if (iVar2 == 0) {
          return plVar5;
        }
      }
      plVar1 = (long *)*plVar4;
    } while ((plVar1 != (long *)0x0) &&
            (uVar3 = plVar1[6], plVar5 = plVar4, param_1 == uVar3 % *(ulong *)(this + 8)));
    plVar5 = (long *)0x0;
  }
  return plVar5;
}



/* std::__detail::_Map_base<std::__cxx11::string, std::pair<std::__cxx11::string const, unsigned
   int>, std::allocator<std::pair<std::__cxx11::string const, unsigned int> >,
   std::__detail::_Select1st, std::equal_to<std::__cxx11::string >, std::hash<std::__cxx11::string
   >, std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<true, false, true>,
   true>::operator[](std::__cxx11::string&&) */

long * __thiscall
std::__detail::
_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,unsigned_int>,std::allocator<std::pair<std::__cxx11::string_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>
::operator[](_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,unsigned_int>,std::allocator<std::pair<std::__cxx11::string_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>
             *this,string *param_1)

{
  string *psVar1;
  string *psVar2;
  ulong uVar3;
  char cVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  _Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,unsigned_int>,std::allocator<std::pair<std::__cxx11::string_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>
  *__s;
  uint uVar9;
  _Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,unsigned_int>,std::allocator<std::pair<std::__cxx11::string_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>
  *p_Var10;
  long lVar11;
  uint uVar12;
  ulong extraout_RDX;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  
  uVar5 = std::_Hash_bytes(*(void **)param_1,*(ulong *)(param_1 + 8),0xc70f6907);
  uVar13 = *(ulong *)(this + 8);
  puVar6 = (undefined8 *)
           _Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,unsigned_int>,std::allocator<std::pair<std::__cxx11::string_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
           ::_M_find_before_node
                     ((_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,unsigned_int>,std::allocator<std::pair<std::__cxx11::string_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                       *)this,uVar5 % uVar13,param_1,uVar5);
  if ((puVar6 != (undefined8 *)0x0) && (plVar7 = (long *)*puVar6, plVar7 != (long *)0x0))
  goto LAB_0011bff4;
  plVar7 = (long *)operator_new(0x38);
  psVar1 = (string *)(plVar7 + 3);
  *plVar7 = 0;
  plVar7[1] = (long)psVar1;
  psVar2 = param_1 + 0x10;
  if (*(string **)param_1 == psVar2) {
    lVar11 = *(long *)(param_1 + 8);
    uVar15 = lVar11 + 1;
    uVar12 = (uint)uVar15;
    if (uVar12 < 8) {
      if ((uVar15 & 4) == 0) {
        if (uVar12 != 0) {
          *psVar1 = *psVar2;
          if ((uVar15 & 2) == 0) goto LAB_0011c1ff;
          *(undefined2 *)((long)plVar7 + (uVar15 & 0xffffffff) + 0x16) =
               *(undefined2 *)(param_1 + (uVar15 & 0xffffffff) + 0xe);
          lVar11 = *(long *)(param_1 + 8);
        }
      }
      else {
        *(undefined4 *)psVar1 = *(undefined4 *)psVar2;
        *(undefined4 *)((long)plVar7 + (uVar15 & 0xffffffff) + 0x14) =
             *(undefined4 *)(param_1 + (uVar15 & 0xffffffff) + 0xc);
        lVar11 = *(long *)(param_1 + 8);
      }
    }
    else {
      *(long *)psVar1 = *(long *)psVar2;
      *(undefined8 *)((long)plVar7 + (uVar15 & 0xffffffff) + 0x10) =
           *(undefined8 *)(param_1 + (uVar15 & 0xffffffff) + 8);
      lVar11 = (long)psVar1 - ((ulong)(plVar7 + 4) & 0xfffffffffffffff8);
      uVar12 = uVar12 + (int)lVar11 & 0xfffffff8;
      if (7 < uVar12) {
        uVar9 = 0;
        do {
          uVar15 = (ulong)uVar9;
          uVar9 = uVar9 + 8;
          *(undefined8 *)(((ulong)(plVar7 + 4) & 0xfffffffffffffff8) + uVar15) =
               *(undefined8 *)(psVar2 + (uVar15 - lVar11));
        } while (uVar9 < uVar12);
      }
LAB_0011c1ff:
      lVar11 = *(long *)(param_1 + 8);
    }
  }
  else {
    plVar7[1] = (long)*(string **)param_1;
    plVar7[3] = *(long *)(param_1 + 0x10);
    lVar11 = *(long *)(param_1 + 8);
  }
  param_1[0x10] = (string)0x0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar15 = *(ulong *)(this + 8);
  plVar7[2] = lVar11;
  uVar3 = *(ulong *)(this + 0x18);
  *(string **)param_1 = psVar2;
  *(undefined4 *)(plVar7 + 5) = 0;
  cVar4 = std::__detail::_Prime_rehash_policy::_M_need_rehash((ulong)(this + 0x20),uVar15,uVar3);
  if (cVar4 == '\0') {
    __s = *(_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,unsigned_int>,std::allocator<std::pair<std::__cxx11::string_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>
            **)this;
    plVar7[6] = uVar5;
    p_Var10 = __s + (uVar5 % uVar13) * 8;
    plVar8 = *(long **)p_Var10;
    if (plVar8 == (long *)0x0) goto LAB_0011c17a;
LAB_0011c0a2:
    *plVar7 = *plVar8;
    **(undefined8 **)p_Var10 = plVar7;
  }
  else {
    if (extraout_RDX == 1) {
      __s = this + 0x30;
      *(undefined8 *)(this + 0x30) = 0;
    }
    else {
      if (extraout_RDX >> 0x3c != 0) {
        if (extraout_RDX >> 0x3d != 0) {
          std::__throw_bad_array_new_length();
        }
                    /* WARNING: Subroutine does not return */
        std::__throw_bad_alloc();
      }
      __s = (_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,unsigned_int>,std::allocator<std::pair<std::__cxx11::string_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>
             *)operator_new(extraout_RDX * 8);
      memset(__s,0,extraout_RDX * 8);
    }
    plVar8 = *(long **)(this + 0x10);
    *(undefined8 *)(this + 0x10) = 0;
    uVar13 = 0;
    while (uVar15 = uVar13, plVar14 = plVar8, plVar8 != (long *)0x0) {
      while( true ) {
        plVar8 = (long *)*plVar14;
        uVar13 = (ulong)plVar14[6] % extraout_RDX;
        p_Var10 = __s + uVar13 * 8;
        if (*(long **)p_Var10 == (long *)0x0) break;
        *plVar14 = **(long **)p_Var10;
        **(undefined8 **)p_Var10 = plVar14;
        plVar14 = plVar8;
        if (plVar8 == (long *)0x0) goto LAB_0011c13f;
      }
      *plVar14 = *(long *)(this + 0x10);
      *(long **)(this + 0x10) = plVar14;
      *(_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,unsigned_int>,std::allocator<std::pair<std::__cxx11::string_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>
        **)p_Var10 = this + 0x10;
      if (*plVar14 != 0) {
        *(long **)(__s + uVar15 * 8) = plVar14;
      }
    }
LAB_0011c13f:
    if (*(_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,unsigned_int>,std::allocator<std::pair<std::__cxx11::string_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>
          **)this != this + 0x30) {
      operator_delete(*(_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,unsigned_int>,std::allocator<std::pair<std::__cxx11::string_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>
                        **)this,*(long *)(this + 8) << 3);
    }
    *(ulong *)(this + 8) = extraout_RDX;
    *(_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,unsigned_int>,std::allocator<std::pair<std::__cxx11::string_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>
      **)this = __s;
    plVar7[6] = uVar5;
    p_Var10 = __s + (uVar5 % extraout_RDX) * 8;
    plVar8 = *(long **)p_Var10;
    if (plVar8 != (long *)0x0) goto LAB_0011c0a2;
LAB_0011c17a:
    lVar11 = *(long *)(this + 0x10);
    *(long **)(this + 0x10) = plVar7;
    *plVar7 = lVar11;
    if (lVar11 != 0) {
      *(long **)(__s + (*(ulong *)(lVar11 + 0x30) % *(ulong *)(this + 8)) * 8) = plVar7;
    }
    *(_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,unsigned_int>,std::allocator<std::pair<std::__cxx11::string_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>
      **)p_Var10 = this + 0x10;
  }
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
LAB_0011bff4:
  return plVar7 + 5;
}



/* spv::Builder::getStringId(std::__cxx11::string const&) */

int __thiscall spv::Builder::getStringId(Builder *this,string *param_1)

{
  size_t __n;
  char *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  Instruction *this_00;
  int *piVar5;
  long *plVar6;
  long in_FS_OFFSET;
  Instruction *local_70;
  long *local_68 [2];
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(ulong *)(this + 0x4c8) < 0x15) {
    plVar6 = *(long **)(this + 0x4c0);
    if (plVar6 != (long *)0x0) {
      __n = *(size_t *)(param_1 + 8);
      do {
        if (__n == plVar6[2]) {
          if (__n == 0) goto LAB_0011c33a;
          iVar2 = memcmp(*(void **)param_1,(void *)plVar6[1],__n);
          if (iVar2 == 0) goto LAB_0011c33a;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  else {
    uVar3 = std::_Hash_bytes(*(void **)param_1,*(ulong *)(param_1 + 8),0xc70f6907);
    puVar4 = (undefined8 *)
             std::
             _Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,unsigned_int>,std::allocator<std::pair<std::__cxx11::string_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
             ::_M_find_before_node
                       ((_Hashtable<std::__cxx11::string,std::pair<std::__cxx11::string_const,unsigned_int>,std::allocator<std::pair<std::__cxx11::string_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                         *)(this + 0x4b0),uVar3 % *(ulong *)(this + 0x4b8),param_1,uVar3);
    if ((puVar4 != (undefined8 *)0x0) && (plVar6 = (long *)*puVar4, plVar6 != (long *)0x0)) {
LAB_0011c33a:
      iVar2 = (int)plVar6[5];
      goto LAB_0011c33e;
    }
  }
  iVar2 = *(int *)(this + 0x1d0) + 1;
  *(int *)(this + 0x1d0) = iVar2;
  this_00 = (Instruction *)operator_new(0x60);
  pcVar1 = *(char **)param_1;
  *(undefined ***)this_00 = &PTR__Instruction_0011c5f0;
  *(undefined8 *)(this_00 + 0xc) = 0x700000000;
  *(int *)(this_00 + 8) = iVar2;
  *(undefined4 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined4 *)(this_00 + 0x48) = 0;
  *(undefined1 (*) [16])(this_00 + 0x18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x50) = (undefined1  [16])0x0;
  Instruction::addStringOperand(this_00,pcVar1);
  local_70 = this_00;
  std::
  vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>
  ::emplace_back<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>
            ((vector<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>,std::allocator<std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>>>
              *)(this + 0x240),(unique_ptr *)&local_70);
  std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr
            ((unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>> *)&local_70);
  Module::mapInstruction((Module *)(this + 400),this_00);
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)local_68,pcVar1,(allocator *)&local_70);
  piVar5 = (int *)std::__detail::
                  _Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,unsigned_int>,std::allocator<std::pair<std::__cxx11::string_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>
                  ::operator[]((_Map_base<std::__cxx11::string,std::pair<std::__cxx11::string_const,unsigned_int>,std::allocator<std::pair<std::__cxx11::string_const,unsigned_int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::string>,std::hash<std::__cxx11::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>
                                *)(this + 0x4b0),(string *)local_68);
  *piVar5 = iVar2;
  if (local_68[0] != local_58) {
    operator_delete(local_68[0],local_58[0] + 1);
  }
LAB_0011c33e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* spv::Builder::makeUintConstant(unsigned int, bool) */

void __thiscall spv::Builder::makeUintConstant(Builder *this,uint param_1,bool param_2)

{
  uint uVar1;
  
  uVar1 = makeIntegerType(this,0x20,false);
  makeIntConstant(this,uVar1,param_1,param_2);
  return;
}



/* spv::Builder::Builder(unsigned int, unsigned int, spv::SpvBuildLogger*) */

void spv::Builder::_GLOBAL__sub_I_Builder(void)

{
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* spv::Block::Block(unsigned int, spv::Function&) */

void __thiscall spv::Block::Block(Block *this,uint param_1,Function *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* spv::Function::Function(unsigned int, unsigned int, unsigned int, unsigned int, spv::LinkageType,
   std::__cxx11::string const&, spv::Module&) */

void __thiscall spv::Function::Function(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::_Hashtable<unsigned int, std::pair<unsigned int const, std::vector<spv::Instruction*,
   std::allocator<spv::Instruction*> > >, std::allocator<std::pair<unsigned int const,
   std::vector<spv::Instruction*, std::allocator<spv::Instruction*> > > >,
   std::__detail::_Select1st, std::equal_to<unsigned int>, std::hash<unsigned int>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, false, true>
   >::~_Hashtable() */

void __thiscall
std::
_Hashtable<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
::~_Hashtable(_Hashtable<unsigned_int,std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>,std::allocator<std::pair<unsigned_int_const,std::vector<spv::Instruction*,std::allocator<spv::Instruction*>>>>,std::__detail::_Select1st,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::__cxx11::string::string<std::allocator<char> >(char const*, std::allocator<char> const&) */

void __thiscall
std::__cxx11::string::string<std::allocator<char>>(string *this,char *param_1,allocator *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::unique_ptr<spv::Instruction, std::default_delete<spv::Instruction> >::~unique_ptr() */

void __thiscall
std::unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>>::~unique_ptr
          (unique_ptr<spv::Instruction,std::default_delete<spv::Instruction>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::vector<unsigned int, std::allocator<unsigned int> >::~vector() */

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
          (vector<unsigned_int,std::allocator<unsigned_int>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* spv::Block::~Block() */

void __thiscall spv::Block::~Block(Block *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* spv::Instruction::~Instruction() */

void __thiscall spv::Instruction::~Instruction(Instruction *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* spv::Function::~Function() */

void __thiscall spv::Function::~Function(Function *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* spv::Module::~Module() */

void __thiscall spv::Module::~Module(Module *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
