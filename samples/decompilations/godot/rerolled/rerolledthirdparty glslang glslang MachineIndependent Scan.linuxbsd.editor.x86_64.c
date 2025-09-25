/* std::_Hashtable<char const*, std::pair<char const* const, int>, std::allocator<std::pair<char
   const* const, int> >, std::__detail::_Select1st, (anonymous namespace)::str_eq, (anonymous
   namespace)::str_hash, std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<true, false, true>
   >::_M_find_before_node(unsigned long, char const* const&, unsigned long) const */long *__thiscallstd::_Hashtable<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_find_before_node(_Hashtable<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> *this, ulong param_1, char **param_2, ulong param_3) {
   char *__s1;
   long *plVar1;
   int iVar2;
   ulong uVar3;
   long *plVar4;
   long *plVar5;
   plVar5 = *(long**)( *(long*)this + param_1 * 8 );
   if (plVar5 != (long*)0x0) {
      __s1 = *param_2;
      uVar3 = ( (long*)*plVar5 )[3];
      plVar1 = (long*)*plVar5;
      do {
         plVar4 = plVar1;
         if (( uVar3 == param_3 ) && ( iVar2 = iVar2 == 0 )) {
            return plVar5;
         }

         plVar1 = (long*)*plVar4;
      }
 while ( ( plVar1 != (long*)0x0 ) && ( uVar3 = plVar1[3] ),plVar5 = plVar4,param_1 == uVar3 % *(ulong*)( this + 8 ) );
      plVar5 = (long*)0x0;
   }

   return plVar5;
}
/* std::__detail::_Map_base<char const*, std::pair<char const* const, int>,
   std::allocator<std::pair<char const* const, int> >, std::__detail::_Select1st, (anonymous
   namespace)::str_eq, (anonymous namespace)::str_hash, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<true, false, true>, true>::operator[](char const*&&) */long *__thiscallstd::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *this, char **param_1) {
   _Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *p_Var1;
   long lVar2;
   char cVar3;
   int iVar4;
   long *plVar5;
   _Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *p_Var6;
   char *pcVar7;
   ulong uVar8;
   ulong uVar9;
   ulong extraout_RDX;
   undefined8 *extraout_RDX_00;
   ulong uVar10;
   ulong uVar11;
   long *plVar12;
   long *plVar13;
   ulong uVar14;
   pcVar7 = *param_1;
   cVar3 = *pcVar7;
   if (cVar3 == '\0') {
      uVar10 = 0x1505;
   }
 else {
      uVar10 = 0x1505;
      do {
         pcVar7 = pcVar7 + 1;
         uVar10 = (long)cVar3 + uVar10 * 0x21;
         cVar3 = *pcVar7;
      }
 while ( cVar3 != '\0' );
   }

   uVar9 = uVar10 % *(ulong*)( this + 8 );
   plVar5 = (long*)_Hashtable<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_find_before_node((_Hashtable<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>*)this, uVar9, param_1, uVar10);
   if (( plVar5 != (long*)0x0 ) && ( *plVar5 != 0 )) {
      return (long*)( *plVar5 + 0x10 );
   }

   plVar5 = (long*)operator_new(0x20);
   uVar14 = *(ulong*)( this + 0x18 );
   uVar11 = *(ulong*)( this + 8 );
   p_Var6 = this + 0x20;
   *plVar5 = 0;
   pcVar7 = *param_1;
   uVar8 = 1;
   *(undefined4*)( plVar5 + 2 ) = 0;
   plVar5[1] = (long)pcVar7;
   cVar3 = std::__detail::_Prime_rehash_policy::_M_need_rehash((ulong)p_Var6, uVar11, uVar14);
   if (cVar3 == '\0') {
      p_Var6 = *(_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>**)this;
   }
 else {
      if (extraout_RDX == 1) {
         p_Var6 = this + 0x30;
         *(undefined8*)( this + 0x30 ) = 0;
      }
 else {
         if (extraout_RDX >> 0x3c != 0) {
            if (extraout_RDX >> 0x3d != 0) {
               std::__throw_bad_array_new_length();
            }

            std::__throw_bad_alloc();
            plVar5 = *(long**)( *(long*)p_Var6 + uVar11 * 8 );
            if (plVar5 != (long*)0x0) {
               pcVar7 = (char*)*extraout_RDX_00;
               uVar10 = ( (long*)*plVar5 )[2];
               plVar12 = (long*)*plVar5;
               do {
                  plVar13 = plVar12;
                  if (( uVar10 == uVar8 ) && ( iVar4 = iVar4 == 0 )) {
                     return plVar5;
                  }

                  plVar12 = (long*)*plVar13;
               }
 while ( ( plVar12 != (long*)0x0 ) && ( uVar10 = plVar12[2] ),plVar5 = plVar13,uVar11 == uVar10 % *(ulong*)( p_Var6 + 8 ) );
               plVar5 = (long*)0x0;
            }

            return plVar5;
         }

         p_Var6 = (_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>*)operator_new(extraout_RDX * 8);
         memset(p_Var6, 0, extraout_RDX * 8);
      }

      plVar12 = *(long**)( this + 0x10 );
      *(undefined8*)( this + 0x10 ) = 0;
      uVar9 = 0;
      while (uVar14 = uVar9,plVar13 = plVar12,plVar12 != (long*)0x0) {
         while (true) {
            plVar12 = (long*)*plVar13;
            uVar9 = (ulong)plVar13[3] % extraout_RDX;
            p_Var1 = p_Var6 + uVar9 * 8;
            if (*(long**)p_Var1 == (long*)0x0) break;
            *plVar13 = **(long**)p_Var1;
            **(undefined8**)p_Var1 = plVar13;
            plVar13 = plVar12;
            if (plVar12 == (long*)0x0) goto LAB_00100227;
         }
;
         *plVar13 = *(long*)( this + 0x10 );
         *(long**)( this + 0x10 ) = plVar13;
         *(_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>**)p_Var1 = this + 0x10;
         if (*plVar13 != 0) {
            *(long**)( p_Var6 + uVar14 * 8 ) = plVar13;
         }

      }
;
      LAB_00100227:if (*(_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>**)this != this + 0x30) {
         operator_delete(*(_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>**)this, *(long*)( this + 8 ) * 8);
      }

      *(ulong*)( this + 8 ) = extraout_RDX;
      uVar9 = uVar10 % extraout_RDX;
      *(_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>**)this = p_Var6;
   }

   p_Var1 = p_Var6 + uVar9 * 8;
   plVar5[3] = uVar10;
   if (*(long**)p_Var1 == (long*)0x0) {
      lVar2 = *(long*)( this + 0x10 );
      *(long**)( this + 0x10 ) = plVar5;
      *plVar5 = lVar2;
      if (lVar2 != 0) {
         *(long**)( p_Var6 + ( *(ulong*)( lVar2 + 0x18 ) % *(ulong*)( this + 8 ) ) * 8 ) = plVar5;
      }

      *(_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>**)p_Var1 = this + 0x10;
   }
 else {
      *plVar5 = **(long**)p_Var1;
      **(undefined8**)p_Var1 = plVar5;
   }

   *(long*)( this + 0x18 ) = *(long*)( this + 0x18 ) + 1;
   return plVar5 + 2;
}
/* std::__detail::_Hash_node_base* std::_Hashtable<char const*, char const*, std::allocator<char
   const*>, std::__detail::_Identity, (anonymous namespace)::str_eq, (anonymous
   namespace)::str_hash, std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<true, true, true>
   >::_M_find_before_node_tr<char const*>(unsigned long, char const* const&, unsigned long) const */_Hash_node_base * __thiscallstd::_Hashtable<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_find_before_node_tr<char_const*>(_Hashtable<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>> * this, ulong, param_1, char, **param_2, ulong, param_3) * __s1 ;_Hash_node_base *p_Var1int iVar2ulong uVar3_Hash_node_base *p_Var4_Hash_node_base *p_Var5p_Var5 = *(_Hash_node_base**)( *(long*)this + param_1 * 8 );if (p_Var5 != (_Hash_node_base*)0x0) {
   __s1 = *param_2;
   uVar3 = *(ulong*)( *(_Hash_node_base**)p_Var5 + 0x10 );
   p_Var1 = *(_Hash_node_base**)p_Var5;
   do {
      p_Var4 = p_Var1;
      if (( uVar3 == param_3 ) && ( iVar2 = iVar2 == 0 )) {
         return p_Var5;
      }

      p_Var1 = *(_Hash_node_base**)p_Var4;
   }
 while ( ( p_Var1 != (_Hash_node_base*)0x0 ) && ( uVar3 = *(ulong*)( p_Var1 + 0x10 ) ),p_Var5 = p_Var4,param_1 == uVar3 % *(ulong*)( this + 8 ) );
   p_Var5 = (_Hash_node_base*)0x0;
}
return p_Var5;}/* std::__detail::_Insert<char const*, char const*, std::allocator<char const*>,
   std::__detail::_Identity, (anonymous namespace)::str_eq, (anonymous namespace)::str_hash,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<true, true, true>,
   true>::insert(char const*&&) [clone .isra.0] */void std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert(_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true> *this, char **param_1) {
   _Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true> *p_Var1;
   byte bVar2;
   undefined8 *puVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   char cVar6;
   int iVar7;
   long *plVar8;
   _Hash_node_base *p_Var9;
   _Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true> *p_Var10;
   long lVar11;
   char *__s1;
   ulong uVar12;
   ulong extraout_RDX;
   undefined1 *puVar13;
   long *plVar14;
   long *plVar15;
   ulong uVar16;
   ulong uVar17;
   lVar11 = *(long*)( this + 0x18 );
   __s1 = *param_1;
   if (lVar11 == 0) {
      for (puVar3 = *(undefined8**)( this + 0x10 ); puVar3 != (undefined8*)0x0; puVar3 = (undefined8*)*puVar3) {
         iVar7 = strcmp(__s1, (char*)puVar3[1]);
         if (iVar7 == 0) {
            return;
         }

      }

      cVar6 = *__s1;
      if (cVar6 == '\0') {
         uVar17 = 0x1505;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = *(ulong*)( this + 8 );
         uVar12 = SUB168(( ZEXT816(0) << 0x40 | ZEXT816(0x1505) ) % auVar5, 0);
         goto LAB_001003f0;
      }

      LAB_001003b8:uVar17 = 0x1505;
      do {
         __s1 = __s1 + 1;
         uVar17 = (long)cVar6 + uVar17 * 0x21;
         cVar6 = *__s1;
      }
 while ( cVar6 != '\0' );
      uVar12 = uVar17 % *(ulong*)( this + 8 );
      if (lVar11 == 0) goto LAB_001003f0;
   }
 else {
      cVar6 = *__s1;
      if (cVar6 != '\0') goto LAB_001003b8;
      uVar17 = 0x1505;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = *(ulong*)( this + 8 );
      uVar12 = SUB168(( ZEXT816(0) << 0x40 | ZEXT816(0x1505) ) % auVar4, 0);
   }

   p_Var9 = _Hashtable<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_find_before_node_tr<char_const*>((_Hashtable<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>*)this, uVar12, param_1, uVar17);
   if (( p_Var9 != (_Hash_node_base*)0x0 ) && ( *(long*)p_Var9 != 0 )) {
      return;
   }

   LAB_001003f0:plVar8 = (long*)operator_new(0x18);
   uVar16 = *(ulong*)( this + 0x18 );
   puVar13 = *(undefined1**)( this + 8 );
   p_Var10 = this + 0x20;
   *plVar8 = 0;
   plVar8[1] = (long)*param_1;
   cVar6 = std::__detail::_Prime_rehash_policy::_M_need_rehash((ulong)p_Var10, (ulong)puVar13, uVar16);
   if (cVar6 == '\0') {
      p_Var10 = *(_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>**)this;
   }
 else {
      if (extraout_RDX == 1) {
         p_Var10 = this + 0x30;
         *(undefined8*)( this + 0x30 ) = 0;
      }
 else {
         if (extraout_RDX >> 0x3c != 0) {
            if (extraout_RDX >> 0x3d != 0) {
               std::__throw_bad_array_new_length();
            }

            std::__throw_bad_alloc();
            iVar7 = *(int*)( (TInputScanner*)p_Var10 + 0x20 );
            if (iVar7 < *(int*)( (TInputScanner*)p_Var10 + 8 )) {
               uVar17 = *(ulong*)( (TInputScanner*)p_Var10 + 0x28 );
               lVar11 = (long)iVar7 * 8;
               do {
                  if (uVar17 < *(ulong*)( *(long*)( (TInputScanner*)p_Var10 + 0x18 ) + lVar11 )) {
                     bVar2 = *(byte*)( *(long*)( *(long*)( (TInputScanner*)p_Var10 + 0x10 ) + lVar11 ) + uVar17 );
                     while (true) {
                        if (0x20 < bVar2) {
                           return;
                        }

                        if (( 0x100002600U >> ( (ulong)bVar2 & 0x3f ) & 1 ) == 0) {
                           return;
                        }

                        if (( bVar2 == 0xd ) || ( bVar2 == 10 )) {
                           *puVar13 = 1;
                        }

                        glslang::TInputScanner::get((TInputScanner*)p_Var10);
                        iVar7 = *(int*)( (TInputScanner*)p_Var10 + 0x20 );
                        if (*(int*)( (TInputScanner*)p_Var10 + 8 ) <= iVar7) break;
                        uVar17 = *(ulong*)( (TInputScanner*)p_Var10 + 0x28 );
                        lVar11 = (long)iVar7 * 8;
                        while (*(ulong*)( *(long*)( (TInputScanner*)p_Var10 + 0x18 ) + lVar11 ) <= uVar17) {
                           lVar11 = lVar11 + 8;
                           uVar17 = 0;
                           if (lVar11 == ( ( ulong )(uint)(*(int*)( (TInputScanner*)p_Var10 + 8 ) - iVar7) + (long)iVar7 ) * 8) {
                              return;
                           }

                        }
;
                        bVar2 = *(byte*)( *(long*)( *(long*)( (TInputScanner*)p_Var10 + 0x10 ) + lVar11 ) + uVar17 );
                     }
;
                     goto LAB_00100726;
                  }

                  lVar11 = lVar11 + 8;
                  uVar17 = 0;
               }
 while ( lVar11 != ( ( ulong )(uint)(*(int*)( (TInputScanner*)p_Var10 + 8 ) - iVar7) + (long)iVar7 ) * 8 );
            }
 else {
               LAB_00100726:( (TInputScanner*)p_Var10 )[0x59] = (TInputScanner)0x1;
            }

            return;
         }

         p_Var10 = (_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>*)operator_new(extraout_RDX * 8);
         memset(p_Var10, 0, extraout_RDX * 8);
      }

      plVar14 = *(long**)( this + 0x10 );
      *(undefined8*)( this + 0x10 ) = 0;
      uVar12 = 0;
      while (uVar16 = uVar12,plVar15 = plVar14,plVar14 != (long*)0x0) {
         while (true) {
            plVar14 = (long*)*plVar15;
            uVar12 = (ulong)plVar15[2] % extraout_RDX;
            p_Var1 = p_Var10 + uVar12 * 8;
            if (*(long**)p_Var1 == (long*)0x0) break;
            *plVar15 = **(long**)p_Var1;
            **(undefined8**)p_Var1 = plVar15;
            plVar15 = plVar14;
            if (plVar14 == (long*)0x0) goto LAB_0010057f;
         }
;
         *plVar15 = *(long*)( this + 0x10 );
         *(long**)( this + 0x10 ) = plVar15;
         *(_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>**)p_Var1 = this + 0x10;
         if (*plVar15 != 0) {
            *(long**)( p_Var10 + uVar16 * 8 ) = plVar15;
         }

      }
;
      LAB_0010057f:if (*(_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>**)this != this + 0x30) {
         operator_delete(*(_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>**)this, *(long*)( this + 8 ) << 3);
      }

      *(ulong*)( this + 8 ) = extraout_RDX;
      uVar12 = uVar17 % extraout_RDX;
      *(_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>**)this = p_Var10;
   }

   p_Var1 = p_Var10 + uVar12 * 8;
   plVar8[2] = uVar17;
   if (*(long**)p_Var1 == (long*)0x0) {
      lVar11 = *(long*)( this + 0x10 );
      *(long**)( this + 0x10 ) = plVar8;
      *plVar8 = lVar11;
      if (lVar11 != 0) {
         *(long**)( p_Var10 + ( *(ulong*)( lVar11 + 0x10 ) % *(ulong*)( this + 8 ) ) * 8 ) = plVar8;
      }

      *(_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>**)p_Var1 = this + 0x10;
   }
 else {
      *plVar8 = **(long**)p_Var1;
      **(undefined8**)p_Var1 = plVar8;
   }

   *(long*)( this + 0x18 ) = *(long*)( this + 0x18 ) + 1;
   return;
}
/* glslang::TInputScanner::consumeWhiteSpace(bool&) */void glslang::TInputScanner::consumeWhiteSpace(TInputScanner *this, bool *param_1) {
   byte bVar1;
   int iVar2;
   long lVar3;
   ulong uVar4;
   iVar2 = *(int*)( this + 0x20 );
   if (iVar2 < *(int*)( this + 8 )) {
      uVar4 = *(ulong*)( this + 0x28 );
      lVar3 = (long)iVar2 * 8;
      do {
         if (uVar4 < *(ulong*)( *(long*)( this + 0x18 ) + lVar3 )) {
            bVar1 = *(byte*)( *(long*)( *(long*)( this + 0x10 ) + lVar3 ) + uVar4 );
            while (true) {
               if (0x20 < bVar1) {
                  return;
               }

               if (( 0x100002600U >> ( (ulong)bVar1 & 0x3f ) & 1 ) == 0) {
                  return;
               }

               if (( bVar1 == 0xd ) || ( bVar1 == 10 )) {
                  *param_1 = true;
               }

               get(this);
               iVar2 = *(int*)( this + 0x20 );
               if (*(int*)( this + 8 ) <= iVar2) break;
               uVar4 = *(ulong*)( this + 0x28 );
               lVar3 = (long)iVar2 * 8;
               while (*(ulong*)( *(long*)( this + 0x18 ) + lVar3 ) <= uVar4) {
                  lVar3 = lVar3 + 8;
                  uVar4 = 0;
                  if (lVar3 == ( ( ulong )(uint)(*(int*)( this + 8 ) - iVar2) + (long)iVar2 ) * 8) {
                     return;
                  }

               }
;
               bVar1 = *(byte*)( *(long*)( *(long*)( this + 0x10 ) + lVar3 ) + uVar4 );
            }
;
            goto LAB_00100726;
         }

         lVar3 = lVar3 + 8;
         uVar4 = 0;
      }
 while ( lVar3 != ( ( ulong )(uint)(*(int*)( this + 8 ) - iVar2) + (long)iVar2 ) * 8 );
   }
 else {
      LAB_00100726:this[0x59] = (TInputScanner)0x1;
   }

   return;
}
/* glslang::TInputScanner::consumeComment() */undefined8 glslang::TInputScanner::consumeComment(TInputScanner *this) {
   char cVar1;
   long lVar2;
   int iVar3;
   long lVar4;
   ulong uVar5;
   iVar3 = *(int*)( this + 0x20 );
   if (*(int*)( this + 8 ) <= iVar3) {
      this[0x59] = (TInputScanner)0x1;
      return 0;
   }

   uVar5 = *(ulong*)( this + 0x28 );
   lVar2 = *(long*)( this + 0x18 );
   lVar4 = (long)iVar3 * 8;
   while (*(ulong*)( lVar2 + lVar4 ) <= uVar5) {
      lVar4 = lVar4 + 8;
      uVar5 = 0;
      if (lVar4 == ( ( ulong )(uint)(*(int*)( this + 8 ) - iVar3) + (long)iVar3 ) * 8) {
         return 0;
      }

   }
;
   if (*(char*)( *(long*)( *(long*)( this + 0x10 ) + lVar4 ) + uVar5 ) != '/') {
      return 0;
   }

   get(this);
   iVar3 = *(int*)( this + 0x20 );
   if (iVar3 < *(int*)( this + 8 )) {
      uVar5 = *(ulong*)( this + 0x28 );
      lVar4 = (long)iVar3 * 8;
      do {
         if (uVar5 < *(ulong*)( lVar2 + lVar4 )) {
            cVar1 = *(char*)( *(long*)( *(long*)( this + 0x10 ) + lVar4 ) + uVar5 );
            if (cVar1 == '/') {
               LAB_001008b0:get(this);
               LAB_001008b8:iVar3 = get(this);
               if (iVar3 + 1U < 0xf) {
                  if (( 0xffffffffffffb7feU >> ( ( ulong )(iVar3 + 1U) & 0x3f ) & 1 ) != 0) goto LAB_001008b8;
                  if (( iVar3 == 10 ) || ( iVar3 == 0xd )) {
                     do {
                        do {
                           iVar3 = get(this);
                        }
 while ( iVar3 == 0xd );
                     }
 while ( iVar3 == 10 );
                     if (iVar3 == -1) {
                        return 1;
                     }

                     unget(this);
                     return 1;
                  }

                  if (iVar3 == -1) {
                     return 1;
                  }

               }
 else if (iVar3 != 0x5c) goto LAB_001008b8;
               iVar3 = get(this);
               if (iVar3 == 0xd) {
                  iVar3 = *(int*)( this + 0x20 );
                  if (iVar3 < *(int*)( this + 8 )) {
                     uVar5 = *(ulong*)( this + 0x28 );
                     lVar4 = (long)iVar3 * 8;
                     do {
                        if (uVar5 < *(ulong*)( lVar2 + lVar4 )) {
                           if (*(char*)( *(long*)( *(long*)( this + 0x10 ) + lVar4 ) + uVar5 ) == '\n') goto LAB_001008b0;
                           break;
                        }

                        lVar4 = lVar4 + 8;
                        uVar5 = 0;
                     }
 while ( ( ( ulong )(uint)(*(int*)( this + 8 ) - iVar3) + (long)iVar3 ) * 8 != lVar4 );
                  }
 else {
                     this[0x59] = (TInputScanner)0x1;
                  }

               }

               goto LAB_001008b8;
            }

            if (cVar1 == '*') {
               get(this);
               iVar3 = get(this);
               do {
                  while (true) {
                     if (iVar3 == -1) {
                        return 1;
                     }

                     if (iVar3 == 0x2a) break;
                     iVar3 = get(this);
                  }
;
                  iVar3 = get(this);
               }
 while ( iVar3 != 0x2f );
               return 1;
            }

            break;
         }

         lVar4 = lVar4 + 8;
         uVar5 = 0;
      }
 while ( ( ( ulong )(uint)(*(int*)( this + 8 ) - iVar3) + (long)iVar3 ) * 8 != lVar4 );
   }
 else {
      this[0x59] = (TInputScanner)0x1;
   }

   unget(this);
   return 0;
}
/* glslang::TInputScanner::consumeWhitespaceComment(bool&) */void glslang::TInputScanner::consumeWhitespaceComment(TInputScanner *this, bool *param_1) {
   int iVar1;
   char cVar2;
   long lVar3;
   ulong uVar4;
   while (true) {
      consumeWhiteSpace(this, param_1);
      iVar1 = *(int*)( this + 0x20 );
      if (*(int*)( this + 8 ) <= iVar1) {
         this[0x59] = (TInputScanner)0x1;
         return;
      }

      uVar4 = *(ulong*)( this + 0x28 );
      lVar3 = (long)iVar1 * 8;
      while (*(ulong*)( *(long*)( this + 0x18 ) + lVar3 ) <= uVar4) {
         lVar3 = lVar3 + 8;
         uVar4 = 0;
         if (lVar3 == ( ( ulong )(uint)(*(int*)( this + 8 ) - iVar1) + (long)iVar1 ) * 8) {
            return;
         }

      }
;
      if (*(char*)( *(long*)( *(long*)( this + 0x10 ) + lVar3 ) + uVar4 ) != '/') break;
      *param_1 = true;
      cVar2 = consumeComment(this);
      if (cVar2 == '\0') {
         return;
      }

   }
;
   return;
}
/* glslang::TInputScanner::scanVersion(int&, EProfile&, bool&) */char glslang::TInputScanner::scanVersion(TInputScanner *this, int *param_1, EProfile *param_2, bool *param_3) {
   int iVar1;
   char cVar2;
   int iVar3;
   ulong uVar4;
   uint uVar5;
   int iVar6;
   ulong uVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   long lVar12;
   ulong *puVar13;
   ulong uVar14;
   ulong uVar15;
   long lVar16;
   long lVar17;
   char cVar18;
   ulong uVar19;
   long in_FS_OFFSET;
   bool local_4e;
   char local_4d[13];
   long local_40;
   cVar18 = '\0';
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_3 = false;
   local_4e = false;
   *param_1 = 0;
   *(undefined4*)param_2 = 1;
   LAB_00100a20:consumeWhiteSpace(this, &local_4e);
   uVar5 = *(uint*)( this + 0x20 );
   uVar7 = (ulong)uVar5;
   iVar3 = *(int*)( this + 8 );
   if ((int)uVar5 < iVar3) goto code_r0x00100a39;
   this[0x59] = (TInputScanner)0x1;
   goto LAB_00100ffd;
   code_r0x00100a39:lVar16 = (long)(int)uVar5;
   uVar15 = *(ulong*)( this + 0x28 );
   lVar12 = *(long*)( this + 0x18 );
   lVar8 = lVar16 * 8;
   uVar14 = uVar15;
   do {
      if (uVar14 < *(ulong*)( lVar12 + lVar8 )) {
         if (*(char*)( *(long*)( *(long*)( this + 0x10 ) + lVar8 ) + uVar14 ) == '/') {
            local_4e = true;
            cVar2 = consumeComment(this);
            if (cVar2 != '\0') goto LAB_00100a20;
            uVar5 = *(uint*)( this + 0x20 );
            uVar7 = (ulong)uVar5;
            iVar3 = *(int*)( this + 8 );
            if (iVar3 <= (int)uVar5) goto LAB_00100ffd;
            uVar15 = *(ulong*)( this + 0x28 );
            lVar12 = *(long*)( this + 0x18 );
            lVar16 = (long)(int)uVar5;
            cVar18 = '\x01';
            goto LAB_00100ac0;
         }

         break;
      }

      lVar8 = lVar8 + 8;
      uVar14 = 0;
   }
 while ( ( ( ulong )(iVar3 - uVar5) + lVar16 ) * 8 != lVar8 );
   if (local_4e != false) {
      cVar18 = local_4e;
   }

   LAB_00100ac0:iVar6 = (int)uVar7;
   lVar8 = lVar16 * 8;
   uVar14 = uVar15;
   do {
      if (uVar14 < *(ulong*)( lVar12 + lVar8 )) {
         lVar9 = *(long*)( this + 0x10 );
         lVar11 = *(long*)( this + 0x30 );
         uVar15 = uVar15 + 1;
         puVar13 = (ulong*)( lVar16 * 8 + lVar12 );
         cVar2 = *(char*)( *(long*)( lVar9 + lVar8 ) + uVar14 );
         lVar8 = lVar11 + lVar16 * 0x18;
         *(int*)( lVar8 + 0x10 ) = *(int*)( lVar8 + 0x10 ) + 1;
         *(int*)( this + 0x50 ) = *(int*)( this + 0x50 ) + 1;
         if (cVar2 == '\n') {
            *(int*)( lVar8 + 0xc ) = *(int*)( lVar8 + 0xc ) + 1;
            *(undefined4*)( this + 0x50 ) = 0;
            *(int*)( this + 0x4c ) = *(int*)( this + 0x4c ) + 1;
            *(undefined4*)( lVar8 + 0x10 ) = 0;
            *(ulong*)( this + 0x28 ) = uVar15;
            if (uVar15 < *puVar13) {
               *param_3 = true;
               if (iVar3 <= iVar6) goto LAB_00100fc7;
               goto LAB_00100b9d;
            }

         }
 else {
            *(ulong*)( this + 0x28 ) = uVar15;
            if (uVar15 < *puVar13) goto LAB_00100b84;
         }

         iVar6 = iVar6 + 1;
         *(int*)( this + 0x20 ) = iVar6;
         if (iVar6 < iVar3) {
            iVar1 = *(int*)( lVar8 + 8 );
            lVar8 = lVar11 + 0x18 + lVar16 * 0x18;
            *(undefined8*)( lVar8 + 0xc ) = 1;
            *(int*)( lVar8 + 8 ) = iVar1 + 1;
         }

         lVar8 = (long)iVar6;
         goto LAB_00100b5c;
      }

      lVar8 = lVar8 + 8;
      uVar14 = 0;
   }
 while ( lVar8 != ( ( ulong )(uint)(iVar3 - iVar6) + lVar16 ) * 8 );
   goto LAB_00100b90;
   LAB_00100b5c:if (( iVar3 <= iVar6 ) || ( *(long*)( lVar12 + lVar8 * 8 ) != 0 )) goto LAB_00100b79;
   iVar6 = (int)lVar8 + 1;
   *(int*)( this + 0x20 ) = iVar6;
   if (iVar3 <= (int)lVar8 + 1) goto LAB_00100b79;
   lVar8 = (long)iVar6;
   lVar16 = lVar11 + lVar8 * 0x18;
   iVar1 = *(int*)( lVar11 + -0x10 + lVar8 * 0x18 );
   *(undefined8*)( lVar16 + 0xc ) = 1;
   *(int*)( lVar16 + 8 ) = iVar1 + 1;
   goto LAB_00100b5c;
   LAB_00100b79:*(undefined8*)( this + 0x28 ) = 0;
   uVar7 = ( ulong ) * (uint*)( this + 0x20 );
   LAB_00100b84:if (cVar2 != '#') {
      LAB_00100b8d:iVar3 = *(int*)( this + 8 );
      goto LAB_00100b90;
   }

   LAB_00100db0:iVar6 = (int)uVar7;
   if (iVar3 <= iVar6) goto LAB_001010e9;
   lVar16 = (long)iVar6;
   lVar8 = lVar16 * 8;
   uVar15 = *(ulong*)( this + 0x28 );
   while (*(ulong*)( lVar12 + lVar8 ) <= uVar15) {
      lVar8 = lVar8 + 8;
      uVar15 = 0;
      if (lVar8 == ( ( ulong )(uint)(iVar3 - iVar6) + lVar16 ) * 8) goto LAB_00100b8d;
   }
;
   uVar14 = *(ulong*)( this + 0x28 ) + 1;
   puVar13 = (ulong*)( lVar16 * 8 + lVar12 );
   cVar2 = *(char*)( *(long*)( lVar9 + lVar8 ) + uVar15 );
   lVar8 = lVar11 + lVar16 * 0x18;
   *(int*)( lVar8 + 0x10 ) = *(int*)( lVar8 + 0x10 ) + 1;
   *(int*)( this + 0x50 ) = *(int*)( this + 0x50 ) + 1;
   if (cVar2 == '\n') {
      *(int*)( lVar8 + 0xc ) = *(int*)( lVar8 + 0xc ) + 1;
      *(undefined4*)( this + 0x50 ) = 0;
      *(int*)( this + 0x4c ) = *(int*)( this + 0x4c ) + 1;
      *(undefined4*)( lVar8 + 0x10 ) = 0;
      *(ulong*)( this + 0x28 ) = uVar14;
      if (uVar14 < *puVar13) goto LAB_00100b8d;
      LAB_00100ea0:iVar6 = iVar6 + 1;
      *(int*)( this + 0x20 ) = iVar6;
      if (iVar6 < iVar3) {
         iVar1 = *(int*)( lVar8 + 8 );
         lVar8 = lVar11 + 0x18 + lVar16 * 0x18;
         *(undefined8*)( lVar8 + 0xc ) = 1;
         *(int*)( lVar8 + 8 ) = iVar1 + 1;
      }

      lVar8 = (long)iVar6;
      while (( iVar6 < iVar3 && ( *(long*)( lVar12 + lVar8 * 8 ) == 0 ) )) {
         iVar6 = (int)lVar8 + 1;
         *(int*)( this + 0x20 ) = iVar6;
         if (iVar3 <= (int)lVar8 + 1) break;
         lVar8 = (long)iVar6;
         lVar16 = lVar11 + lVar8 * 0x18;
         iVar1 = *(int*)( lVar11 + -0x10 + lVar8 * 0x18 );
         *(undefined8*)( lVar16 + 0xc ) = 1;
         *(int*)( lVar16 + 8 ) = iVar1 + 1;
      }
;
      *(undefined8*)( this + 0x28 ) = 0;
   }
 else {
      *(ulong*)( this + 0x28 ) = uVar14;
      if (*puVar13 <= uVar14) goto LAB_00100ea0;
   }

   if (( cVar2 == ' ' ) || ( cVar2 == '\t' )) {
      uVar7 = ( ulong ) * (uint*)( this + 0x20 );
      goto LAB_00100db0;
   }

   if (( ( ( cVar2 != 'v' ) || ( iVar3 = get(this) ),iVar3 != 0x65 ) ) || ( iVar3 = iVar3 != 0x72 )) goto LAB_00101018;
   do {
      do {
         iVar3 = get(this);
      }
 while ( iVar3 == 0x20 );
   }
 while ( iVar3 == 9 );
   uVar5 = iVar3 - 0x30;
   iVar6 = *param_1;
   if (uVar5 < 10) {
      while (true) {
         *param_1 = uVar5 + iVar6 * 10;
         iVar3 = get(this);
         uVar5 = iVar3 - 0x30;
         if (9 < uVar5) break;
         iVar6 = *param_1;
      }
;
      if (*param_1 != 0) {
         if (( iVar3 == 9 ) || ( iVar3 == 0x20 )) {
            do {
               do {
                  iVar3 = get(this);
               }
 while ( iVar3 == 0x20 );
            }
 while ( iVar3 == 9 );
         }

         goto LAB_001010fe;
      }

   }
 else if (iVar6 != 0) {
      LAB_001010fe:lVar8 = 0;
      do {
         iVar6 = (int)lVar8;
         if (iVar3 == 0xd) {
            joined_r0x001011ac:if (iVar6 == 2) {
               LAB_001011ae:iVar3 = strncmp(local_4d, "es", 2);
               if (iVar3 == 0) {
                  *(undefined4*)param_2 = 8;
               }

            }
 else if (iVar6 == 4) {
               LAB_0010117e:iVar3 = strncmp(local_4d, "core", 4);
               if (iVar3 == 0) {
                  *(undefined4*)param_2 = 2;
               }

            }

            goto LAB_00100f71;
         }

         if (iVar3 < 0xe) {
            if (iVar3 == -1) goto joined_r0x001011ac;
            if (1 < iVar3 - 9U) goto LAB_001011d8;
            if (iVar6 == 2) goto LAB_001011ae;
            if (iVar6 == 4) goto LAB_0010117e;
            if (iVar6 == 0xd) goto LAB_00101143;
            goto LAB_00100f71;
         }

         if (iVar3 == 0x20) goto joined_r0x001011ac;
         LAB_001011d8:local_4d[lVar8] = (char)iVar3;
         lVar8 = lVar8 + 1;
         iVar3 = get(this);
      }
 while ( lVar8 != 0xd );
      if (( ( ( iVar3 == -1 ) || ( iVar3 == 0x20 ) ) || ( iVar3 - 9U < 2 ) ) || ( iVar3 == 0xd )) {
         LAB_00101143:iVar3 = strncmp(local_4d, "compatibility", 0xd);
         if (iVar3 == 0) {
            *(undefined4*)param_2 = 4;
         }

         goto LAB_00100f71;
      }

   }

   LAB_00101018:iVar3 = *(int*)( this + 8 );
   uVar7 = ( ulong ) * (uint*)( this + 0x20 );
   goto LAB_00100b90;
   LAB_001010e9:iVar3 = *(int*)( this + 8 );
   LAB_00100ffd:this[0x59] = (TInputScanner)0x1;
   LAB_00100b90:*param_3 = true;
   if ((int)uVar7 < iVar3) {
      LAB_00100b9d:uVar4 = (ulong)(int)uVar7;
      uVar15 = *(ulong*)( this + 0x28 );
      lVar8 = uVar4 * 8;
      lVar16 = ( ( uint )(iVar3 - (int)uVar7) + uVar4 ) * 8;
      lVar12 = lVar8;
      uVar14 = uVar15;
      do {
         if (uVar14 < *(ulong*)( *(long*)( this + 0x18 ) + lVar12 )) {
            if (*(char*)( *(long*)( *(long*)( this + 0x10 ) + lVar12 ) + uVar14 ) == '\n') goto LAB_00100bf8;
            break;
         }

         lVar12 = lVar12 + 8;
         uVar14 = 0;
      }
 while ( lVar12 != lVar16 );
      do {
         if (uVar15 < *(ulong*)( *(long*)( this + 0x18 ) + lVar8 )) {
            if (*(char*)( *(long*)( *(long*)( this + 0x10 ) + lVar8 ) + uVar15 ) == '\r') goto LAB_00100bf8;
            break;
         }

         lVar8 = lVar8 + 8;
         uVar15 = 0;
      }
 while ( lVar8 != lVar16 );
   }
 else {
      LAB_00100fc7:this[0x59] = (TInputScanner)0x1;
   }

   do {
      do {
         iVar3 = get(this);
      }
 while ( 0xe < iVar3 + 1U );
   }
 while ( ( 0xffffffffffffb7feU >> ( ( ulong )(iVar3 + 1U) & 0x3f ) & 1 ) != 0 );
   uVar4 = ( ulong ) * (int*)( this + 0x20 );
   iVar3 = *(int*)( this + 8 );
   uVar7 = uVar4;
   LAB_00100bf8:lVar8 = uVar4 * 8;
   iVar6 = (int)uVar7;
   lVar12 = ( ( uint )(iVar3 - iVar6) + uVar4 ) * 8;
   LAB_00100c13:if (iVar6 < iVar3) {
      uVar7 = *(ulong*)( this + 0x28 );
      lVar16 = *(long*)( this + 0x18 );
      lVar9 = lVar8;
      uVar15 = uVar7;
      do {
         while (lVar11 = lVar8,lVar10 = lVar8,uVar14 = uVar7,uVar19 = uVar7,uVar15 < *(ulong*)( lVar16 + lVar9 )) {
            lVar17 = *(long*)( this + 0x10 );
            if (*(char*)( *(long*)( lVar17 + lVar9 ) + uVar15 ) != '\n') goto LAB_00100c70;
            do {
               lVar10 = lVar11;
               if (uVar14 < *(ulong*)( lVar16 + lVar11 )) goto LAB_00100cae;
               LAB_00100c98:lVar11 = lVar10 + 8;
               lVar9 = lVar8;
               uVar14 = 0;
               uVar15 = uVar7;
            }
 while ( lVar10 + 8 != lVar12 );
         }
;
         lVar9 = lVar9 + 8;
         uVar15 = 0;
      }
 while ( lVar9 != lVar12 );
      LAB_00100c70:do {
         if (uVar19 < *(ulong*)( lVar16 + lVar10 )) goto code_r0x00100c76;
         lVar10 = lVar10 + 8;
         uVar19 = 0;
         if (lVar10 == lVar12) goto LAB_00100f40;
      }
 while ( true );
   }

   this[0x59] = (TInputScanner)0x1;
   goto LAB_00100f6b;
   code_r0x00100c76:lVar17 = *(long*)( this + 0x10 );
   if (*(char*)( *(long*)( lVar17 + lVar10 ) + uVar19 ) != '\r') {
      LAB_00100f40:puVar13 = (ulong*)( lVar8 + lVar16 );
      goto LAB_00100f50;
   }

   lVar10 = lVar8;
   if (*(ulong*)( lVar16 + lVar8 ) <= uVar7) goto LAB_00100c98;
   LAB_00100cae:lVar10 = *(long*)( this + 0x30 );
   cVar18 = *(char*)( *(long*)( lVar17 + lVar11 ) + uVar14 );
   lVar9 = lVar10 + uVar4 * 0x18;
   *(int*)( lVar9 + 0x10 ) = *(int*)( lVar9 + 0x10 ) + 1;
   *(int*)( this + 0x50 ) = *(int*)( this + 0x50 ) + 1;
   if (cVar18 == '\n') {
      *(int*)( lVar9 + 0xc ) = *(int*)( lVar9 + 0xc ) + 1;
      *(undefined4*)( this + 0x50 ) = 0;
      *(int*)( this + 0x4c ) = *(int*)( this + 0x4c ) + 1;
      *(undefined4*)( lVar9 + 0x10 ) = 0;
   }

   *(ulong*)( this + 0x28 ) = uVar7 + 1;
   if (*(ulong*)( lVar16 + lVar8 ) <= uVar7 + 1) goto code_r0x00100cfb;
   goto LAB_00100c13;
   LAB_00100f50:cVar18 = '\x01';
   if (uVar7 < *puVar13) goto LAB_00100a20;
   puVar13 = puVar13 + 1;
   uVar7 = 0;
   if (puVar13 == (ulong*)( lVar16 + lVar12 )) goto LAB_00100f6b;
   goto LAB_00100f50;
   code_r0x00100cfb:iVar6 = iVar6 + 1;
   *(int*)( this + 0x20 ) = iVar6;
   if (iVar6 < iVar3) {
      iVar1 = *(int*)( lVar9 + 8 );
      lVar8 = lVar10 + 0x18 + uVar4 * 0x18;
      *(undefined8*)( lVar8 + 0xc ) = 1;
      *(int*)( lVar8 + 8 ) = iVar1 + 1;
   }

   uVar7 = (ulong)iVar6;
   while (( iVar6 = (int)uVar7 ),iVar6 < iVar3 && ( *(long*)( lVar16 + uVar7 * 8 ) == 0 )) {
      uVar7 = uVar7 + 1;
      *(int*)( this + 0x20 ) = iVar6 + 1;
      if ((int)uVar7 < iVar3) {
         uVar7 = ( ulong )(iVar6 + 1);
         lVar8 = lVar10 + uVar7 * 0x18;
         iVar6 = *(int*)( lVar10 + -0x10 + uVar7 * 0x18 );
         *(undefined8*)( lVar8 + 0xc ) = 1;
         *(int*)( lVar8 + 8 ) = iVar6 + 1;
      }

   }
;
   *(undefined8*)( this + 0x28 ) = 0;
   uVar4 = (ulong)iVar6;
   goto LAB_00100bf8;
   LAB_00100f6b:cVar18 = '\x01';
   LAB_00100f71:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return cVar18;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TScanContext::fillInKeywordMap() */void glslang::TScanContext::fillInKeywordMap(void) {
   _Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *p_Var1;
   undefined4 *puVar2;
   long in_FS_OFFSET;
   char *local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((anonymous_namespace)::KeywordMap == (_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>*)0x0) {
      (anonymous_namespace)::KeywordMap = (_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>*)operator_new(0x38);
      *(_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>**)(anonymous_namespace)::KeywordMap = (anonymous_namespace)::KeywordMap + 0x30;
      *(undefined8*)( (anonymous_namespace)::KeywordMap + 8 ) = 1;
      *(undefined8*)( (anonymous_namespace)::KeywordMap + 0x10 ) = 0;
      *(undefined8*)( (anonymous_namespace)::KeywordMap + 0x18 ) = 0;
      *(undefined4*)( (anonymous_namespace)::KeywordMap + 0x20 ) = 0x3f800000;
      *(undefined8*)( (anonymous_namespace)::KeywordMap + 0x28 ) = 0;
      *(undefined8*)( (anonymous_namespace)::KeywordMap + 0x30 ) = 0;
      local_18 = "const";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator []((anonymous_namespace)::KeywordMap, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x102;
      local_18 = "uniform";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x29d;
      local_18 = "tileImageEXT";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2a0;
      local_18 = "buffer";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x29f;
      local_18 = "in";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x289;
      local_18 = "out";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x28a;
      local_18 = "smooth";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2a2;
      local_18 = "flat";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2a1;
      local_18 = "centroid";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x288;
      local_18 = "invariant";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x27a;
      local_18 = "packed";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x27f;
      local_18 = "resource";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x280;
      local_18 = "inout";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x28b;
      local_18 = "struct";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x28c;
      local_18 = "break";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x28f;
      local_18 = "continue";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x290;
      local_18 = "do";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x291;
      local_18 = "for";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x293;
      local_18 = "while";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x28e;
      local_18 = "switch";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x297;
      local_18 = "case";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x298;
      local_18 = "default";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x299;
      local_18 = "if";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x294;
      local_18 = "else";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x292;
      local_18 = "discard";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x295;
      local_18 = "terminateInvocation";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x29a;
      local_18 = "terminateRayEXT";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x29b;
      local_18 = "ignoreIntersectionEXT";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x29c;
      local_18 = "return";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x296;
      local_18 = "void";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x28d;
      local_18 = "bool";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x103;
      local_18 = "float";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x106;
      local_18 = "int";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x104;
      local_18 = "bvec2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x107;
      local_18 = "bvec3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x108;
      local_18 = "bvec4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x109;
      local_18 = "vec2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x110;
      local_18 = "vec3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x111;
      local_18 = "vec4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x112;
      local_18 = "ivec2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x10a;
      local_18 = "ivec3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x10b;
      local_18 = "ivec4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x10c;
      local_18 = "mat2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x113;
      local_18 = "mat3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x114;
      local_18 = "mat4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x115;
      local_18 = "true";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x285;
      local_18 = "false";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x285;
      local_18 = "layout";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2a3;
      local_18 = "shared";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x29e;
      local_18 = "highp";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x27b;
      local_18 = "mediump";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x27c;
      local_18 = "lowp";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x27d;
      local_18 = "superp";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x281;
      local_18 = "precision";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x27e;
      local_18 = "mat2x2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x116;
      local_18 = "mat2x3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x117;
      local_18 = "mat2x4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x118;
      local_18 = "mat3x2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x119;
      local_18 = "mat3x3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x11a;
      local_18 = "mat3x4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x11b;
      local_18 = "mat4x2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x11c;
      local_18 = "mat4x3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x11d;
      local_18 = "mat4x4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x11e;
      local_18 = "uint";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x105;
      local_18 = "uvec2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x10d;
      local_18 = "uvec3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x10e;
      local_18 = "uvec4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x10f;
      local_18 = "nonuniformEXT";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2ba;
      local_18 = "demote";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2ad;
      local_18 = "attribute";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x13c;
      local_18 = "varying";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x13d;
      local_18 = "noperspective";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2c6;
      local_18 = "coherent";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 699;
      local_18 = "devicecoherent";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2c0;
      local_18 = "queuefamilycoherent";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2c1;
      local_18 = "workgroupcoherent";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2c2;
      local_18 = "subgroupcoherent";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2c3;
      local_18 = "shadercallcoherent";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2c5;
      local_18 = "nonprivate";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2c4;
      local_18 = "restrict";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2bd;
      local_18 = "readonly";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2be;
      local_18 = "writeonly";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2bf;
      local_18 = "atomic_uint";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x19e;
      local_18 = "volatile";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 700;
      local_18 = "patch";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2b8;
      local_18 = "sample";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2b9;
      local_18 = "subroutine";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2ac;
      local_18 = "dmat2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x165;
      local_18 = "dmat3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x166;
      local_18 = "dmat4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x167;
      local_18 = "dmat2x2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x17a;
      local_18 = "dmat2x3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x17b;
      local_18 = "dmat2x4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x17c;
      local_18 = "dmat3x2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x17d;
      local_18 = "dmat3x3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x17e;
      local_18 = "dmat3x4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x17f;
      local_18 = "dmat4x2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x180;
      local_18 = "dmat4x3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x181;
      local_18 = "dmat4x4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x182;
      local_18 = "image1D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1d5;
      local_18 = "iimage1D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1d6;
      local_18 = "uimage1D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1d7;
      local_18 = "image2D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1d8;
      local_18 = "iimage2D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1d9;
      local_18 = "uimage2D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1da;
      local_18 = "image3D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1db;
      local_18 = "iimage3D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1dc;
      local_18 = "uimage3D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1dd;
      local_18 = "image2DRect";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1de;
      local_18 = "iimage2DRect";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1df;
      local_18 = "uimage2DRect";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1e0;
      local_18 = "imageCube";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1e1;
      local_18 = "iimageCube";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1e2;
      local_18 = "uimageCube";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1e3;
      local_18 = "imageBuffer";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1e4;
      local_18 = "iimageBuffer";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1e5;
      local_18 = "uimageBuffer";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1e6;
      local_18 = "image1DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1e7;
      local_18 = "iimage1DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1e8;
      local_18 = "uimage1DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1e9;
      local_18 = "image2DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1ea;
      local_18 = "iimage2DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1eb;
      local_18 = "uimage2DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1ec;
      local_18 = "imageCubeArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1ed;
      local_18 = "iimageCubeArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1ee;
      local_18 = "uimageCubeArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1ef;
      local_18 = "image2DMS";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1f0;
      local_18 = "iimage2DMS";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1f1;
      local_18 = "uimage2DMS";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1f2;
      local_18 = "image2DMSArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 499;
      local_18 = "iimage2DMSArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 500;
      local_18 = "uimage2DMSArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1f5;
      local_18 = "i64image1D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x201;
      local_18 = "u64image1D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x202;
      local_18 = "i64image2D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x203;
      local_18 = "u64image2D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x204;
      local_18 = "i64image3D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x205;
      local_18 = "u64image3D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x206;
      local_18 = "i64image2DRect";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x207;
      local_18 = "u64image2DRect";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x208;
      local_18 = "i64imageCube";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x209;
      local_18 = "u64imageCube";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x20a;
      local_18 = "i64imageBuffer";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x20b;
      local_18 = "u64imageBuffer";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x20c;
      local_18 = "i64image1DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x20d;
      local_18 = "u64image1DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x20e;
      local_18 = "i64image2DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x20f;
      local_18 = "u64image2DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x210;
      local_18 = "i64imageCubeArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x211;
      local_18 = "u64imageCubeArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x212;
      local_18 = "i64image2DMS";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x213;
      local_18 = "u64image2DMS";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x214;
      local_18 = "i64image2DMSArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x215;
      local_18 = "u64image2DMSArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x216;
      local_18 = "double";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x140;
      local_18 = "dvec2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x162;
      local_18 = "dvec3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x163;
      local_18 = "dvec4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x164;
      local_18 = "int64_t";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x142;
      local_18 = "uint64_t";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x143;
      local_18 = "i64vec2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x14a;
      local_18 = "i64vec3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x14b;
      local_18 = "i64vec4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x14c;
      local_18 = "u64vec2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x14d;
      local_18 = "u64vec3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x14e;
      local_18 = "u64vec4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x14f;
      local_18 = "int8_t";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x148;
      local_18 = "i8vec2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x15c;
      local_18 = "i8vec3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x15d;
      local_18 = "i8vec4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x15e;
      local_18 = "uint8_t";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x149;
      local_18 = "u8vec2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x15f;
      local_18 = "u8vec3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x160;
      local_18 = "u8vec4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x161;
      local_18 = "int16_t";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x146;
      local_18 = "i16vec2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x156;
      local_18 = "i16vec3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x157;
      local_18 = "i16vec4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x158;
      local_18 = "uint16_t";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x147;
      local_18 = "u16vec2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x159;
      local_18 = "u16vec3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x15a;
      local_18 = "u16vec4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x15b;
      local_18 = "int32_t";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x144;
      local_18 = "i32vec2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x150;
      local_18 = "i32vec3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x151;
      local_18 = "i32vec4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x152;
      local_18 = "uint32_t";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x145;
      local_18 = "u32vec2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x153;
      local_18 = "u32vec3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x154;
      local_18 = "u32vec4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x155;
      local_18 = "float16_t";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x13e;
      local_18 = "f16vec2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x168;
      local_18 = "f16vec3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x169;
      local_18 = "f16vec4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x16a;
      local_18 = "f16mat2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x16b;
      local_18 = "f16mat3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x16c;
      local_18 = "f16mat4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x16d;
      local_18 = "f16mat2x2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x183;
      local_18 = "f16mat2x3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x184;
      local_18 = "f16mat2x4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x185;
      local_18 = "f16mat3x2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x186;
      local_18 = "f16mat3x3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x187;
      local_18 = "f16mat3x4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x188;
      local_18 = "f16mat4x2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x189;
      local_18 = "f16mat4x3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x18a;
      local_18 = "f16mat4x4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x18b;
      local_18 = "float32_t";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x13f;
      local_18 = "f32vec2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x16e;
      local_18 = "f32vec3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x16f;
      local_18 = "f32vec4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x170;
      local_18 = "f32mat2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x171;
      local_18 = "f32mat3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x172;
      local_18 = "f32mat4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x173;
      local_18 = "f32mat2x2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x18c;
      local_18 = "f32mat2x3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x18d;
      local_18 = "f32mat2x4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x18e;
      local_18 = "f32mat3x2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 399;
      local_18 = "f32mat3x3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 400;
      local_18 = "f32mat3x4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x191;
      local_18 = "f32mat4x2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x192;
      local_18 = "f32mat4x3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x193;
      local_18 = "f32mat4x4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x194;
      local_18 = "float64_t";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x141;
      local_18 = "f64vec2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x174;
      local_18 = "f64vec3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x175;
      local_18 = "f64vec4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x176;
      local_18 = "f64mat2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x177;
      local_18 = "f64mat3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x178;
      local_18 = "f64mat4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x179;
      local_18 = "f64mat2x2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x195;
      local_18 = "f64mat2x3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x196;
      local_18 = "f64mat2x4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x197;
      local_18 = "f64mat3x2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x198;
      local_18 = "f64mat3x3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x199;
      local_18 = "f64mat3x4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x19a;
      local_18 = "f64mat4x2";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x19b;
      local_18 = "f64mat4x3";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x19c;
      local_18 = "f64mat4x4";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x19d;
      local_18 = "spirv_instruction";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x23f;
      local_18 = "spirv_execution_mode";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x240;
      local_18 = "spirv_execution_mode_id";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x241;
      local_18 = "spirv_decorate";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x242;
      local_18 = "spirv_decorate_id";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x243;
      local_18 = "spirv_decorate_string";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x244;
      local_18 = "spirv_type";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x245;
      local_18 = "spirv_storage_class";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x246;
      local_18 = "spirv_by_reference";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x247;
      local_18 = "spirv_literal";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x248;
      local_18 = "sampler2D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x11f;
      local_18 = "samplerCube";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x121;
      local_18 = "samplerCubeShadow";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x123;
      local_18 = "sampler2DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x124;
      local_18 = "sampler2DArrayShadow";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x125;
      local_18 = "isampler2D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x126;
      local_18 = "isampler3D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x127;
      local_18 = "isamplerCube";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x128;
      local_18 = "isampler2DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x129;
      local_18 = "usampler2D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x12a;
      local_18 = "usampler3D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 299;
      local_18 = "usamplerCube";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 300;
      local_18 = "usampler2DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x12d;
      local_18 = "sampler3D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x120;
      local_18 = "sampler2DShadow";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x122;
      local_18 = "texture2D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x130;
      local_18 = "textureCube";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x132;
      local_18 = "texture2DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x133;
      local_18 = "itexture2D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x134;
      local_18 = "itexture3D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x135;
      local_18 = "itextureCube";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x136;
      local_18 = "itexture2DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x137;
      local_18 = "utexture2D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x138;
      local_18 = "utexture3D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x139;
      local_18 = "utextureCube";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x13a;
      local_18 = "utexture2DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x13b;
      local_18 = "texture3D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x131;
      local_18 = "sampler";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x12e;
      local_18 = "samplerShadow";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x12f;
      local_18 = "textureCubeArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x217;
      local_18 = "itextureCubeArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x218;
      local_18 = "utextureCubeArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x219;
      local_18 = "samplerCubeArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1a8;
      local_18 = "samplerCubeArrayShadow";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1a9;
      local_18 = "isamplerCubeArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1aa;
      local_18 = "usamplerCubeArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1ab;
      local_18 = "sampler1DArrayShadow";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1ae;
      local_18 = "isampler1DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1c0;
      local_18 = "usampler1D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1c1;
      local_18 = "isampler1D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1af;
      local_18 = "usampler1DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1c2;
      local_18 = "samplerBuffer";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1b5;
      local_18 = "isampler2DRect";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1b3;
      local_18 = "usampler2DRect";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1b4;
      local_18 = "isamplerBuffer";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1b6;
      local_18 = "usamplerBuffer";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1b7;
      local_18 = "sampler2DMS";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1b8;
      local_18 = "isampler2DMS";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1b9;
      local_18 = "usampler2DMS";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1ba;
      local_18 = "sampler2DMSArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1bb;
      local_18 = "isampler2DMSArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1bc;
      local_18 = "usampler2DMSArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1bd;
      local_18 = "sampler1D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1ac;
      local_18 = "sampler1DShadow";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1b0;
      local_18 = "sampler2DRect";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1b1;
      local_18 = "sampler2DRectShadow";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1b2;
      local_18 = "sampler1DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1ad;
      local_18 = "samplerExternalOES";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1be;
      local_18 = "__samplerExternal2DY2YEXT";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1bf;
      local_18 = "itexture1DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x21e;
      local_18 = "utexture1D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x21c;
      local_18 = "itexture1D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x21b;
      local_18 = "utexture1DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x21f;
      local_18 = "textureBuffer";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x223;
      local_18 = "itexture2DRect";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x221;
      local_18 = "utexture2DRect";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x222;
      local_18 = "itextureBuffer";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x224;
      local_18 = "utextureBuffer";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x225;
      local_18 = "texture2DMS";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x226;
      local_18 = "itexture2DMS";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x227;
      local_18 = "utexture2DMS";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x228;
      local_18 = "texture2DMSArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x229;
      local_18 = "itexture2DMSArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x22a;
      local_18 = "utexture2DMSArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x22b;
      local_18 = "texture1D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x21a;
      local_18 = "texture2DRect";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x220;
      local_18 = "texture1DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x21d;
      local_18 = "attachmentEXT";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x249;
      local_18 = "iattachmentEXT";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x24a;
      local_18 = "uattachmentEXT";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x24b;
      local_18 = "subpassInput";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x237;
      local_18 = "subpassInputMS";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x238;
      local_18 = "isubpassInput";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x239;
      local_18 = "isubpassInputMS";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x23a;
      local_18 = "usubpassInput";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x23b;
      local_18 = "usubpassInputMS";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x23c;
      local_18 = "f16sampler1D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1c3;
      local_18 = "f16sampler2D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1c4;
      local_18 = "f16sampler3D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1c5;
      local_18 = "f16sampler2DRect";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1c6;
      local_18 = "f16samplerCube";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1c7;
      local_18 = "f16sampler1DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1c8;
      local_18 = "f16sampler2DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1c9;
      local_18 = "f16samplerCubeArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1ca;
      local_18 = "f16samplerBuffer";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1cb;
      local_18 = "f16sampler2DMS";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1cc;
      local_18 = "f16sampler2DMSArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1cd;
      local_18 = "f16sampler1DShadow";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1ce;
      local_18 = "f16sampler2DShadow";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1cf;
      local_18 = "f16sampler2DRectShadow";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1d2;
      local_18 = "f16samplerCubeShadow";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1d3;
      local_18 = "f16sampler1DArrayShadow";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1d0;
      local_18 = "f16sampler2DArrayShadow";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1d1;
      local_18 = "f16samplerCubeArrayShadow";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1d4;
      local_18 = "f16image1D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1f6;
      local_18 = "f16image2D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1f7;
      local_18 = "f16image3D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1f8;
      local_18 = "f16image2DRect";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1f9;
      local_18 = "f16imageCube";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1fa;
      local_18 = "f16image1DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1fb;
      local_18 = "f16image2DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1fc;
      local_18 = "f16imageCubeArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1fd;
      local_18 = "f16imageBuffer";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1fe;
      local_18 = "f16image2DMS";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1ff;
      local_18 = "f16image2DMSArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x200;
      local_18 = "f16texture1D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x22c;
      local_18 = "f16texture2D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x22d;
      local_18 = "f16texture3D";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x22e;
      local_18 = "f16texture2DRect";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x22f;
      local_18 = "f16textureCube";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x230;
      local_18 = "f16texture1DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x231;
      local_18 = "f16texture2DArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x232;
      local_18 = "f16textureCubeArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x233;
      local_18 = "f16textureBuffer";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x234;
      local_18 = "f16texture2DMS";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x235;
      local_18 = "f16texture2DMSArray";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x236;
      local_18 = "f16subpassInput";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x23d;
      local_18 = "f16subpassInputMS";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x23e;
      local_18 = "__explicitInterpAMD";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2c7;
      local_18 = "pervertexNV";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2c9;
      local_18 = "pervertexEXT";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2c8;
      local_18 = "precise";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2cf;
      local_18 = "rayPayloadNV";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2ae;
      local_18 = "rayPayloadEXT";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2b3;
      local_18 = "rayPayloadInNV";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2af;
      local_18 = "rayPayloadInEXT";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2b4;
      local_18 = "hitAttributeNV";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2b0;
      local_18 = "hitAttributeEXT";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2b5;
      local_18 = "callableDataNV";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2b1;
      local_18 = "callableDataEXT";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2b6;
      local_18 = "callableDataInNV";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2b2;
      local_18 = "callableDataInEXT";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2b7;
      local_18 = "accelerationStructureNV";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x19f;
      local_18 = "accelerationStructureEXT";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1a0;
      local_18 = "rayQueryEXT";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1a1;
      local_18 = "perprimitiveNV";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2ca;
      local_18 = "perviewNV";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2cb;
      local_18 = "taskNV";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2cc;
      local_18 = "perprimitiveEXT";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2cd;
      local_18 = "taskPayloadSharedEXT";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x2ce;
      local_18 = "fcoopmatNV";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1a2;
      local_18 = "icoopmatNV";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1a3;
      local_18 = "ucoopmatNV";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1a4;
      local_18 = "coopmat";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1a5;
      local_18 = "hitObjectNV";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      p_Var1 = (anonymous_namespace)::KeywordMap;
      *puVar2 = 0x1a6;
      local_18 = "hitObjectAttributeNV";
      puVar2 = (undefined4*)std::__detail::_Map_base<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator [](p_Var1, &local_18);
      *puVar2 = 0x1a7;
      (anonymous_namespace)::ReservedSet = (_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>*)operator_new(0x38);
      *(_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>**)(anonymous_namespace)::ReservedSet = (anonymous_namespace)::ReservedSet + 0x30;
      *(undefined8*)( (anonymous_namespace)::ReservedSet + 8 ) = 1;
      *(undefined8*)( (anonymous_namespace)::ReservedSet + 0x10 ) = 0;
      *(undefined8*)( (anonymous_namespace)::ReservedSet + 0x18 ) = 0;
      *(undefined4*)( (anonymous_namespace)::ReservedSet + 0x20 ) = 0x3f800000;
      *(undefined8*)( (anonymous_namespace)::ReservedSet + 0x28 ) = 0;
      *(undefined8*)( (anonymous_namespace)::ReservedSet + 0x30 ) = 0;
      local_18 = "common";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "partition";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "active";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "asm";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "class";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "union";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "enum";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "typedef";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "template";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "this";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "goto";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "inline";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "noinline";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "public";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "static";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "extern";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "external";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "interface";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "long";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "short";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "half";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "fixed";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "unsigned";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "input";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "output";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "hvec2";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "hvec3";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "hvec4";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "fvec2";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "fvec3";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "fvec4";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "sampler3DRect";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "filter";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "sizeof";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "cast";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "namespace";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
      local_18 = "using";
      std::__detail::_Insert<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>,true>::insert((anonymous_namespace)::ReservedSet, &local_18);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TScanContext::deleteKeywordMap() */void glslang::TScanContext::deleteKeywordMap(void) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   puVar3 = (anonymous_namespace)::KeywordMap;
   if ((anonymous_namespace)::KeywordMap != (undefined8*)0x0) {
      puVar2 = (undefined8*)(anonymous_namespace)::KeywordMap[2];
      while (puVar2 != (undefined8*)0x0) {
         puVar1 = (undefined8*)*puVar2;
         operator_delete(puVar2, 0x20);
         puVar2 = puVar1;
      }
;
      memset((void*)*puVar3, 0, puVar3[1] * 8);
      puVar3[3] = 0;
      puVar3[2] = 0;
      if ((undefined8*)*puVar3 != puVar3 + 6) {
         operator_delete((undefined8*)*puVar3, puVar3[1] << 3);
      }

      operator_delete(puVar3, 0x38);
   }

   puVar3 = (anonymous_namespace)::ReservedSet;
   (anonymous_namespace)::KeywordMap = (undefined8*)0x0;
   if ((anonymous_namespace)::ReservedSet != (undefined8*)0x0) {
      puVar2 = (undefined8*)(anonymous_namespace)::ReservedSet[2];
      while (puVar2 != (undefined8*)0x0) {
         puVar1 = (undefined8*)*puVar2;
         operator_delete(puVar2, 0x18);
         puVar2 = puVar1;
      }
;
      memset((void*)*puVar3, 0, puVar3[1] * 8);
      puVar3[3] = 0;
      puVar3[2] = 0;
      if ((undefined8*)*puVar3 != puVar3 + 6) {
         operator_delete((undefined8*)*puVar3, puVar3[1] << 3);
      }

      operator_delete(puVar3, 0x38);
   }

   (anonymous_namespace)::ReservedSet = (undefined8*)0x0;
   return;
}
/* glslang::TScanContext::identifierOrType() */undefined8 glslang::TScanContext::identifierOrType(TScanContext *this) {
   TScanContext TVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   void *__s2;
   ulong uVar5;
   long *plVar6;
   char cVar7;
   int iVar8;
   uint uVar9;
   ulong uVar10;
   ulong *puVar11;
   size_t __n;
   long *plVar12;
   ulong *__dest;
   long lVar13;
   ulong uVar14;
   long lVar15;
   char *pcVar16;
   long *plVar17;
   long *plVar18;
   bool bVar19;
   pcVar16 = *(char**)( this + 0x40 );
   lVar2 = **(long**)( this + 0x30 );
   uVar10 = glslang::GetThreadPoolAllocator();
   puVar11 = (ulong*)glslang::TPoolAllocator::allocate(uVar10);
   uVar10 = glslang::GetThreadPoolAllocator();
   __dest = puVar11 + 3;
   *puVar11 = uVar10;
   puVar11[1] = (ulong)__dest;
   if (pcVar16 == (char*)0x0) {
      pcVar16 = "basic_string: construction from null is not valid";
      std::__throw_logic_error("basic_string: construction from null is not valid");
      plVar12 = *(long**)( pcVar16 + 8 );
      if ((int)( ( (long*)plVar12[0x1d] )[1] - *(long*)plVar12[0x1d] >> 3 ) < 4) {
         return 0;
      }

      ( **(code**)( *plVar12 + 0x158 ) )(plVar12, pcVar16 + 0x18, "Reserved word.", *(undefined8*)( pcVar16 + 0x40 ), &_LC446);
      return 0;
   }

   __n = strlen(pcVar16);
   if (__n < 0x10) {
      if (__n == 1) {
         *(char*)( puVar11 + 3 ) = *pcVar16;
         goto LAB_00104aee;
      }

      if (__n == 0) goto LAB_00104aee;
   }
 else {
      __dest = (ulong*)glslang::TPoolAllocator::allocate(uVar10);
      puVar11[3] = __n;
      puVar11[1] = (ulong)__dest;
   }

   memcpy(__dest, pcVar16, __n);
   __dest = (ulong*)puVar11[1];
   LAB_00104aee:puVar11[2] = __n;
   *(undefined1*)( (long)__dest + __n ) = 0;
   TVar1 = this[0x12];
   *(ulong**)( lVar2 + 0x18 ) = puVar11;
   if (TVar1 == (TScanContext)0x0) {
      lVar2 = **(long**)( this + 0x30 );
      lVar3 = *(long*)( lVar2 + 0x18 );
      lVar4 = **(long**)( *(long*)( this + 8 ) + 0xe8 );
      lVar13 = (long)( (int)( ( *(long**)( *(long*)( this + 8 ) + 0xe8 ) )[1] - lVar4 >> 3 ) + -2 );
      do {
         lVar15 = *(long*)( lVar4 + 8 + lVar13 * 8 );
         plVar18 = *(long**)( lVar15 + 0x18 );
         plVar12 = (long*)( lVar15 + 0x10 );
         if (plVar18 == (long*)0x0) {
            LAB_00104c48:bVar19 = true;
         }
 else {
            __s2 = *(void**)( lVar3 + 8 );
            uVar10 = *(ulong*)( lVar3 + 0x10 );
            plVar17 = plVar12;
            do {
               while (true) {
                  uVar5 = plVar18[6];
                  uVar14 = uVar10;
                  if (uVar5 <= uVar10) {
                     uVar14 = uVar5;
                  }

                  if (( uVar14 != 0 ) && ( iVar8 = iVar8 != 0 )) break;
                  lVar15 = uVar5 - uVar10;
                  if (lVar15 < 0x80000000) {
                     if (-0x80000001 < lVar15) {
                        iVar8 = (int)lVar15;
                        break;
                     }

                     goto LAB_00104b90;
                  }

                  LAB_00104bd9:plVar6 = (long*)plVar18[2];
                  plVar17 = plVar18;
                  plVar18 = plVar6;
                  if (plVar6 == (long*)0x0) goto LAB_00104be5;
               }
;
               if (-1 < iVar8) goto LAB_00104bd9;
               LAB_00104b90:plVar18 = (long*)plVar18[3];
            }
 while ( plVar18 != (long*)0x0 );
            LAB_00104be5:bVar19 = true;
            if (plVar12 != plVar17) {
               uVar5 = plVar17[6];
               uVar14 = uVar10;
               if (uVar5 <= uVar10) {
                  uVar14 = uVar5;
               }

               if (( uVar14 == 0 ) || ( iVar8 = iVar8 == 0 )) {
                  lVar15 = uVar10 - uVar5;
                  if (lVar15 < 0x80000000) {
                     if (lVar15 < -0x80000000) goto LAB_00104c48;
                     iVar8 = (int)lVar15;
                     goto LAB_00104c40;
                  }

               }
 else {
                  LAB_00104c40:if (iVar8 < 0) goto LAB_00104c48;
               }

               plVar18 = (long*)plVar17[9];
               bVar19 = plVar18 == (long*)0x0;
            }

         }

         uVar10 = (ulong)lVar13 >> 0x18;
         lVar13 = lVar13 + -1;
      }
 while ( ( bVar19 & (byte)~(byte)uVar10 >> 7 ) != 0 );
      TVar1 = this[0x10];
      *(long**)( lVar2 + 0x20 ) = plVar18;
      if (( ( ( TVar1 == (TScanContext)0x0 ) && ( this[0x11] != (TScanContext)0x1 ) ) && ( plVar18 != (long*)0x0 ) ) && ( plVar12 = (long*)( **(code**)( *plVar18 + 0x48 ) )(plVar18) ),plVar12 != (long*)0x0) {
         if (*(code**)( *plVar12 + 0xb0 ) == TVariable::isUserType) {
            cVar7 = (char)plVar12[0x18];
         }
 else {
            cVar7 = ( **(code**)( *plVar12 + 0xb0 ) )(plVar12);
         }

         if (cVar7 != '\0') {
            if (*(code**)( *plVar12 + 0x60 ) == TVariable::getType) {
               plVar12 = plVar12 + 5;
            }
 else {
               plVar12 = (long*)( **(code**)( *plVar12 + 0x60 ) )(plVar12);
            }

            if (*(code**)( *plVar12 + 0x38 ) == TType::getBasicType) {
               uVar9 = ( uint ) * (byte*)( plVar12 + 1 );
            }
 else {
               uVar9 = ( **(code**)( *plVar12 + 0x38 ) )();
            }

            if (( uVar9 != 0x12 ) || ( this[0x13] == (TScanContext)0x0 )) {
               this[0x10] = (TScanContext)0x1;
               return 0x287;
            }

         }

      }

   }

   return 0x286;
}
/* glslang::TScanContext::reservedWord() */undefined8 glslang::TScanContext::reservedWord(TScanContext *this) {
   long *plVar1;
   plVar1 = *(long**)( this + 8 );
   if (3 < (int)( ( (long*)plVar1[0x1d] )[1] - *(long*)plVar1[0x1d] >> 3 )) {
      ( **(code**)( *plVar1 + 0x158 ) )(plVar1, this + 0x18, "Reserved word.", *(undefined8*)( this + 0x40 ), &_LC446);
      return 0;
   }

   return 0;
}
/* glslang::TScanContext::identifierOrReserved(bool) */undefined8 glslang::TScanContext::identifierOrReserved(TScanContext *this, bool param_1) {
   long *plVar1;
   undefined8 uVar2;
   if (!param_1) {
      plVar1 = *(long**)( this + 8 );
      if ((char)plVar1[1] != '\0') {
         ( **(code**)( *plVar1 + 0x160 ) )(plVar1, this + 0x18, "using future reserved keyword", *(undefined8*)( this + 0x40 ), &_LC446);
      }

      uVar2 = identifierOrType(this);
      return uVar2;
   }

   reservedWord(this);
   return 0;
}
/* glslang::TScanContext::es30ReservedFromGLSL(int) */ulong glslang::TScanContext::es30ReservedFromGLSL(TScanContext *this, int param_1) {
   long *plVar1;
   ulong uVar2;
   plVar1 = *(long**)( this + 8 );
   if (3 < (int)( ( (long*)plVar1[0x1d] )[1] - *(long*)plVar1[0x1d] >> 3 )) {
      if (*(int*)( (long)plVar1 + 0xc ) == 8) {
         if (299 < (int)plVar1[3]) {
            reservedWord(this);
            goto LAB_00104ee7;
         }

      }
 else if (param_1 <= (int)plVar1[3]) goto LAB_00104ee7;
      if ((char)plVar1[1] != '\0') {
         ( **(code**)( *plVar1 + 0x160 ) )(plVar1, this + 0x18, "future reserved word in ES 300 and keyword in GLSL", *(undefined8*)( this + 0x40 ), &_LC446);
      }

      uVar2 = identifierOrType(this);
      return uVar2;
   }

   LAB_00104ee7:return ( ulong ) * (uint*)( this + 0x48 );
}
/* glslang::TScanContext::nonreservedKeyword(int, int) */ulong glslang::TScanContext::nonreservedKeyword(TScanContext *this, int param_1, int param_2) {
   long *plVar1;
   ulong uVar2;
   plVar1 = *(long**)( this + 8 );
   if (*(int*)( (long)plVar1 + 0xc ) == 8) {
      if (param_1 <= (int)plVar1[3]) goto LAB_00104f44;
   }
 else if (param_2 <= (int)plVar1[3]) {
      LAB_00104f44:return ( ulong ) * (uint*)( this + 0x48 );
   }

   if ((char)plVar1[1] != '\0') {
      ( **(code**)( *plVar1 + 0x160 ) )(plVar1, this + 0x18, "using future keyword", *(undefined8*)( this + 0x40 ), &_LC446);
   }

   uVar2 = identifierOrType(this);
   return uVar2;
}
/* glslang::TScanContext::precisionKeyword() */ulong glslang::TScanContext::precisionKeyword(TScanContext *this) {
   long *plVar1;
   ulong uVar2;
   plVar1 = *(long**)( this + 8 );
   if (( *(int*)( (long)plVar1 + 0xc ) != 8 ) && ( (int)plVar1[3] < 0x82 )) {
      if ((char)plVar1[1] != '\0') {
         ( **(code**)( *plVar1 + 0x160 ) )(plVar1, this + 0x18, "using ES precision qualifier keyword", *(undefined8*)( this + 0x40 ), &_LC446);
      }

      uVar2 = identifierOrType(this);
      return uVar2;
   }

   return ( ulong ) * (uint*)( this + 0x48 );
}
/* glslang::TScanContext::matNxM() */ulong glslang::TScanContext::matNxM(TScanContext *this) {
   long *plVar1;
   ulong uVar2;
   this[0x10] = (TScanContext)0x1;
   plVar1 = *(long**)( this + 8 );
   if ((int)plVar1[3] < 0x6f) {
      if ((char)plVar1[1] != '\0') {
         ( **(code**)( *plVar1 + 0x160 ) )(plVar1, this + 0x18, "using future non-square matrix type keyword", *(undefined8*)( this + 0x40 ), &_LC446);
      }

      uVar2 = identifierOrType(this);
      return uVar2;
   }

   return ( ulong ) * (uint*)( this + 0x48 );
}
/* glslang::TScanContext::dMat() */ulong glslang::TScanContext::dMat(TScanContext *this) {
   int iVar1;
   char cVar2;
   ulong uVar3;
   long *plVar4;
   this[0x10] = (TScanContext)0x1;
   plVar4 = *(long**)( this + 8 );
   iVar1 = (int)plVar4[3];
   if (*(int*)( (long)plVar4 + 0xc ) == 8) {
      if (299 < iVar1) {
         reservedWord(this);
         return ( ulong ) * (uint*)( this + 0x48 );
      }

   }
 else {
      if (( 399 < iVar1 ) || ( (int)( ( (long*)plVar4[0x1d] )[1] - *(long*)plVar4[0x1d] >> 3 ) < 4 )) {
         LAB_001050d8:return ( ulong ) * (uint*)( this + 0x48 );
      }

      if (0x95 < iVar1) {
         cVar2 = ( **(code**)( *plVar4 + 0x40 ) )(plVar4, "GL_ARB_gpu_shader_fp64");
         if (cVar2 != '\0') goto LAB_001050d8;
         plVar4 = *(long**)( this + 8 );
         if (0x95 < (int)plVar4[3]) {
            cVar2 = ( **(code**)( *plVar4 + 0x40 ) )(plVar4, "GL_ARB_vertex_attrib_64bit");
            plVar4 = *(long**)( this + 8 );
            if (( cVar2 != '\0' ) && ( *(int*)( (long)plVar4 + 0x1c ) == 0 )) goto LAB_001050d8;
         }

      }

   }

   if ((char)plVar4[1] != '\0') {
      ( **(code**)( *plVar4 + 0x160 ) )(plVar4, this + 0x18, "using future type keyword", *(undefined8*)( this + 0x40 ), &_LC446);
   }

   uVar3 = identifierOrType(this);
   return uVar3;
}
/* glslang::TScanContext::firstGenerationImage(bool) */ulong glslang::TScanContext::firstGenerationImage(TScanContext *this, bool param_1) {
   char cVar1;
   ulong uVar2;
   long *plVar3;
   plVar3 = *(long**)( this + 8 );
   if ((int)( ( (long*)plVar3[0x1d] )[1] - *(long*)plVar3[0x1d] >> 3 ) < 4) goto LAB_001051b6;
   if (*(int*)( (long)plVar3 + 0xc ) == 8) {
      if (param_1) {
         LAB_001051c0:if (0x135 < (int)plVar3[3]) goto LAB_001051b6;
      }

      LAB_001051a5:if ((int)plVar3[3] < 300) goto LAB_00105169;
   }
 else {
      if (( 0x1a3 < (int)plVar3[3] ) || ( cVar1 = ( **(code**)( *plVar3 + 0x40 ) )(plVar3, "GL_ARB_shader_image_load_store") ),cVar1 != '\0') goto LAB_001051b6;
      plVar3 = *(long**)( this + 8 );
      if (param_1) {
         if (*(int*)( (long)plVar3 + 0xc ) == 8) goto LAB_001051c0;
      }
 else if (*(int*)( (long)plVar3 + 0xc ) == 8) goto LAB_001051a5;
      if ((int)plVar3[3] < 0x82) {
         LAB_00105169:if ((char)plVar3[1] != '\0') {
            ( **(code**)( *plVar3 + 0x160 ) )(plVar3, this + 0x18, "using future type keyword", *(undefined8*)( this + 0x40 ), &_LC446);
         }

         uVar2 = identifierOrType(this);
         return uVar2;
      }

   }

   reservedWord(this);
   LAB_001051b6:return ( ulong ) * (uint*)( this + 0x48 );
}
/* glslang::TScanContext::secondGenerationImage() */ulong glslang::TScanContext::secondGenerationImage(TScanContext *this) {
   char cVar1;
   ulong uVar2;
   long *plVar3;
   plVar3 = *(long**)( this + 8 );
   if (*(int*)( (long)plVar3 + 0xc ) == 8) {
      if (0x135 < (int)plVar3[3]) {
         reservedWord(this);
         return ( ulong ) * (uint*)( this + 0x48 );
      }

      if (3 < (int)( ( (long*)plVar3[0x1d] )[1] - *(long*)plVar3[0x1d] >> 3 )) {
         LAB_00105227:if ((char)plVar3[1] != '\0') {
            ( **(code**)( *plVar3 + 0x160 ) )(plVar3, this + 0x18, "using future type keyword", *(undefined8*)( this + 0x40 ), &_LC446);
         }

         uVar2 = identifierOrType(this);
         return uVar2;
      }

   }
 else if (( 3 < (int)( ( (long*)plVar3[0x1d] )[1] - *(long*)plVar3[0x1d] >> 3 ) ) && ( (int)plVar3[3] < 0x1a4 )) {
      cVar1 = ( **(code**)( *plVar3 + 0x40 ) )(plVar3, "GL_ARB_shader_image_load_store");
      if (cVar1 == '\0') {
         plVar3 = *(long**)( this + 8 );
         goto LAB_00105227;
      }

   }

   return ( ulong ) * (uint*)( this + 0x48 );
}
/* glslang::TScanContext::tokenizeIdentifier() */ulong glslang::TScanContext::tokenizeIdentifier(TScanContext *this) {
   string *psVar1;
   bool bVar2;
   char cVar3;
   int iVar4;
   uint uVar5;
   _Hash_node_base *p_Var6;
   ulong uVar7;
   undefined8 *puVar8;
   char *pcVar9;
   long *plVar10;
   long in_FS_OFFSET;
   long *local_68;
   char *pcStack_60;
   long local_58[2];
   undefined1 local_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( (anonymous_namespace)::ReservedSet + 0x18 ) == 0) {
      plVar10 = *(long**)( (anonymous_namespace)::ReservedSet + 0x10 );
      if (plVar10 != (long*)0x0) {
         pcVar9 = *(char**)( this + 0x40 );
         do {
            iVar4 = strcmp(pcVar9, (char*)plVar10[1]);
            if (iVar4 == 0) goto LAB_00105361;
            plVar10 = (long*)*plVar10;
         }
 while ( plVar10 != (long*)0x0 );
      }

   }
 else {
      pcVar9 = *(char**)( this + 0x40 );
      uVar7 = 0x1505;
      cVar3 = *pcVar9;
      while (cVar3 != '\0') {
         pcVar9 = pcVar9 + 1;
         uVar7 = uVar7 * 0x21 + (long)cVar3;
         cVar3 = *pcVar9;
      }
;
      p_Var6 = std::_Hashtable<char_const*,char_const*,std::allocator<char_const*>,std::__detail::_Identity,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_find_before_node_tr<char_const*>((anonymous_namespace)::ReservedSet, uVar7 % *(ulong*)( (anonymous_namespace)::ReservedSet + 8 ), (char**)( this + 0x40 ), uVar7);
      if (( p_Var6 != (_Hash_node_base*)0x0 ) && ( *(long*)p_Var6 != 0 )) {
         LAB_00105361:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         uVar7 = reservedWord(this);
         return uVar7;
      }

   }

   if (*(long*)( (anonymous_namespace)::KeywordMap + 0x18 ) == 0) {
      plVar10 = *(long**)( (anonymous_namespace)::KeywordMap + 0x10 );
      if (plVar10 != (long*)0x0) {
         pcVar9 = *(char**)( this + 0x40 );
         do {
            iVar4 = strcmp(pcVar9, (char*)plVar10[1]);
            if (iVar4 == 0) goto LAB_0010543b;
            plVar10 = (long*)*plVar10;
         }
 while ( plVar10 != (long*)0x0 );
      }

      LAB_00105550:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      uVar7 = identifierOrType(this);
      return uVar7;
   }

   pcVar9 = *(char**)( this + 0x40 );
   uVar7 = 0x1505;
   cVar3 = *pcVar9;
   while (cVar3 != '\0') {
      pcVar9 = pcVar9 + 1;
      uVar7 = uVar7 * 0x21 + (long)cVar3;
      cVar3 = *pcVar9;
   }
;
   puVar8 = (undefined8*)std::_Hashtable<char_const*,std::pair<char_const*const,int>,std::allocator<std::pair<char_const*const,int>>,std::__detail::_Select1st,(anonymous_namespace)::str_eq,(anonymous_namespace)::str_hash,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_find_before_node((anonymous_namespace)::KeywordMap, uVar7 % *(ulong*)( (anonymous_namespace)::KeywordMap + 8 ), (char**)( this + 0x40 ), uVar7);
   if (( puVar8 == (undefined8*)0x0 ) || ( plVar10 = (long*)*puVar8 ),plVar10 == (long*)0x0) goto LAB_00105550;
   LAB_0010543b:uVar5 = *(uint*)( plVar10 + 2 );
   *(uint*)( this + 0x48 ) = uVar5;
   if ((int)uVar5 < 0x1f6) {
      if (0x1ef < (int)uVar5) {
         this[0x10] = (TScanContext)0x1;
         if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         uVar7 = secondGenerationImage(this);
         return uVar7;
      }

      if (0x1d4 < (int)uVar5) {
         if ((int)uVar5 < 0x1ed) {
            uVar7 = 1L << ( (char)uVar5 + 0x2bU & 0x3f );
            if (( uVar7 & 0xe071f8 ) != 0) {
               this[0x10] = (TScanContext)0x1;
               if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               uVar7 = firstGenerationImage(this, true);
               return uVar7;
            }

            if (( uVar7 & 0x1c0e07 ) != 0) {
               this[0x10] = (TScanContext)0x1;
               if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               uVar7 = firstGenerationImage(this, false);
               return uVar7;
            }

            if (( uVar7 & 0x38000 ) == 0) goto switchD_00105543_caseD_24c;
            plVar10 = *(long**)( this + 8 );
            this[0x10] = (TScanContext)0x1;
            if (( ( *(int*)( (long)plVar10 + 0xc ) != 8 ) || ( (int)plVar10[3] < 0x140 ) ) && ( cVar3 = ( **(code**)( *plVar10 + 0x48 ) )(plVar10, 2, AEP_texture_buffer) ),cVar3 == '\0') {
               if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               uVar7 = firstGenerationImage(this, false);
               return uVar7;
            }

         }
 else {
            plVar10 = *(long**)( this + 8 );
            this[0x10] = (TScanContext)0x1;
            if (( ( *(int*)( (long)plVar10 + 0xc ) != 8 ) || ( (int)plVar10[3] < 0x140 ) ) && ( cVar3 = ( **(code**)( *plVar10 + 0x48 ) )(plVar10, 2, AEP_texture_cube_map_array) ),cVar3 == '\0') {
               if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               uVar7 = secondGenerationImage(this);
               return uVar7;
            }

         }

         goto LAB_001054e8;
      }

      if ((int)uVar5 < 0x102) goto switchD_00105543_caseD_24c;
      switch (uVar5) {
         case 0x103:
         case 0x104:
         case 0x106:
         case 0x107:
         case 0x108:
         case 0x109:
         case 0x10a:
         case 0x10b:
         case 0x10c:
         case 0x110:
         case 0x111:
         case 0x112:
         case 0x113:
         case 0x114:
         case 0x115:
         case 0x11f:
         case 0x121:
      goto switchD_0010548c_caseD_103;
         case 0x105:
         case 0x10d:
         case 0x10e:
         case 0x10f:
         case 0x123:
         case 0x124:
         case 0x125:
         case 0x126:
         case 0x127:
         case 0x128:
         case 0x129:
         case 0x12a:
         case 299:
         case 300:
         case 0x12d:
      this[0x10] = (TScanContext)0x1;
      if (((1 < uVar5 - 0x124) ||
          (plVar10 = *(long **)(this + 8), *(int *)((long)plVar10 + 0xc) == 8)) ||
         ((cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_EXT_texture_array"), cVar3 == '\0' &&
          (3 < (int)((*(long **)(*(long *)(this + 8) + 0xe8))[1] -
                     **(long **)(*(long *)(this + 8) + 0xe8) >> 3))))) {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = nonreservedKeyword(this,300,0x82);
        return uVar7;
      }
      break;
         case 0x116:
         case 0x117:
         case 0x118:
         case 0x119:
         case 0x11a:
         case 0x11b:
         case 0x11c:
         case 0x11d:
         case 0x11e:
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = matNxM(this);
      return uVar7;
         case 0x120:
      plVar10 = *(long **)(this + 8);
      this[0x10] = (TScanContext)0x1;
      if ((*(int *)((long)plVar10 + 0xc) != 8) || (299 < (int)plVar10[3]))
      goto switchD_0010548c_default;
      cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_OES_texture_3D");
      goto joined_r0x0010677c;
         case 0x122:
      plVar10 = *(long **)(this + 8);
      this[0x10] = (TScanContext)0x1;
      if ((*(int *)((long)plVar10 + 0xc) != 8) || (299 < (int)plVar10[3]))
      goto switchD_0010548c_default;
      cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_EXT_shadow_samplers");
joined_r0x0010677c:
      if (cVar3 == '\0') goto LAB_0010608c;
      break;
         case 0x12e:
         case 0x12f:
         case 0x130:
         case 0x131:
         case 0x132:
         case 0x133:
         case 0x134:
         case 0x135:
         case 0x136:
         case 0x137:
         case 0x138:
         case 0x139:
         case 0x13a:
         case 0x13b:
      goto switchD_0010548c_caseD_12e;
         case 0x13c:
         case 0x13d:
      if ((*(int *)(*(long *)(this + 8) + 0xc) != 8) || (*(int *)(*(long *)(this + 8) + 0x18) < 300)
         ) goto switchD_0010548c_default;
      goto LAB_0010608c;
         case 0x13e:
         case 0x168:
         case 0x169:
         case 0x16a:
      plVar10 = *(long **)(this + 8);
      this[0x10] = (TScanContext)0x1;
      if (((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) &&
          (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_AMD_gpu_shader_half_float"),
          cVar3 == '\0')) &&
         ((cVar3 = (**(code **)(**(long **)(this + 8) + 0x40))
                             (*(long **)(this + 8),"GL_EXT_shader_16bit_storage"), cVar3 == '\0' &&
          ((cVar3 = (**(code **)(**(long **)(this + 8) + 0x40))
                              (*(long **)(this + 8),"GL_EXT_shader_explicit_arithmetic_types"),
           cVar3 == '\0' &&
           (cVar3 = (**(code **)(**(long **)(this + 8) + 0x40))
                              (*(long **)(this + 8),
                               "GL_EXT_shader_explicit_arithmetic_types_float16"), cVar3 == '\0'))))
         )) {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = identifierOrType(this);
        return uVar7;
      }

      break;
      case 0x13f:
      case 0x16e:
      case 0x16f:
      case 0x170:
      case 0x171:
      case 0x172:
      case 0x173:
      case 0x18c:
      case 0x18d:
      case 0x18e:
      case 399:
      case 400:
      case 0x191:
      case 0x192:
      case 0x193:
      case 0x194:
      plVar10 = *(long **)(this + 8);
      this[0x10] = (TScanContext)0x1;
      if (((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) &&
          (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_EXT_shader_explicit_arithmetic_types")
          , cVar3 == '\0')) &&
         (cVar3 = (**(code **)(**(long **)(this + 8) + 0x40))
                            (*(long **)(this + 8),"GL_EXT_shader_explicit_arithmetic_types_float32")
         , cVar3 == '\0')) {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = identifierOrType(this);
        return uVar7;
      }
      break;
      case 0x140:
      case 0x162:
      case 0x163:
      case 0x164:
      plVar10 = *(long **)(this + 8);
      this[0x10] = (TScanContext)0x1;
      if (((*(int *)((long)plVar10 + 0xc) == 8) || ((int)plVar10[3] < 0x96)) ||
         (((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3) &&
           ((((int)plVar10[3] < 400 &&
             (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_ARB_gpu_shader_fp64"),
             cVar3 == '\0')) && (plVar10 = *(long **)(this + 8), (int)plVar10[3] < 0x19a)))) &&
          (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_ARB_vertex_attrib_64bit"),
          cVar3 == '\0')))) {
        reservedWord(this);
      }
      break;
      case 0x141:
      case 0x174:
      case 0x175:
      case 0x176:
      case 0x177:
      case 0x178:
      case 0x179:
      case 0x195:
      case 0x196:
      case 0x197:
      case 0x198:
      case 0x199:
      case 0x19a:
      case 0x19b:
      case 0x19c:
      case 0x19d:
      plVar10 = *(long **)(this + 8);
      this[0x10] = (TScanContext)0x1;
      if (((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) &&
          (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_EXT_shader_explicit_arithmetic_types")
          , cVar3 == '\0')) &&
         (cVar3 = (**(code **)(**(long **)(this + 8) + 0x40))
                            (*(long **)(this + 8),"GL_EXT_shader_explicit_arithmetic_types_float64")
         , cVar3 == '\0')) {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = identifierOrType(this);
        return uVar7;
      }
      break;
      case 0x142:
      case 0x143:
      case 0x14a:
      case 0x14b:
      case 0x14c:
      case 0x14d:
      case 0x14e:
      case 0x14f:
      plVar10 = *(long **)(this + 8);
      this[0x10] = (TScanContext)0x1;
      if (((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) &&
          (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_ARB_gpu_shader_int64"), cVar3 == '\0')
          ) && ((cVar3 = (**(code **)(**(long **)(this + 8) + 0x40))
                                   (*(long **)(this + 8),"GL_EXT_shader_explicit_arithmetic_types"),
                cVar3 == '\0' &&
                (cVar3 = (**(code **)(**(long **)(this + 8) + 0x40))
                                   (*(long **)(this + 8),
                                    "GL_EXT_shader_explicit_arithmetic_types_int64"), cVar3 == '\0')
                ))) {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = identifierOrType(this);
        return uVar7;
   }

   break;
   case 0x144:
   case 0x145:
   case 0x150:
   case 0x151:
   case 0x152:
   case 0x153:
   case 0x154:
   case 0x155:
      plVar10 = *(long **)(this + 8);
      this[0x10] = (TScanContext)0x1;
      if (((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) &&
          (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_EXT_shader_explicit_arithmetic_types")
          , cVar3 == '\0')) &&
         (cVar3 = (**(code **)(**(long **)(this + 8) + 0x40))
                            (*(long **)(this + 8),"GL_EXT_shader_explicit_arithmetic_types_int32"),
         cVar3 == '\0')) {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = identifierOrType(this);
        return uVar7;
      }
      break;
   case 0x146:
   case 0x147:
   case 0x156:
   case 0x157:
   case 0x158:
   case 0x159:
   case 0x15a:
   case 0x15b:
      plVar10 = *(long **)(this + 8);
      this[0x10] = (TScanContext)0x1;
      if (((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) &&
          (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_AMD_gpu_shader_int16"), cVar3 == '\0')
          ) && ((cVar3 = (**(code **)(**(long **)(this + 8) + 0x40))
                                   (*(long **)(this + 8),"GL_EXT_shader_16bit_storage"),
                cVar3 == '\0' &&
                ((cVar3 = (**(code **)(**(long **)(this + 8) + 0x40))
                                    (*(long **)(this + 8),"GL_EXT_shader_explicit_arithmetic_types")
                 , cVar3 == '\0' &&
                 (cVar3 = (**(code **)(**(long **)(this + 8) + 0x40))
                                    (*(long **)(this + 8),
                                     "GL_EXT_shader_explicit_arithmetic_types_int16"), cVar3 == '\0'
                 )))))) {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = identifierOrType(this);
        return uVar7;
}
break;case 0x148:case 0x149:case 0x15c:case 0x15d:case 0x15e:case 0x15f:case 0x160:case 0x161:
      plVar10 = *(long **)(this + 8);
      this[0x10] = (TScanContext)0x1;
      if (((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) &&
          (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_EXT_shader_explicit_arithmetic_types")
          , cVar3 == '\0')) &&
         ((cVar3 = (**(code **)(**(long **)(this + 8) + 0x40))
                             (*(long **)(this + 8),"GL_EXT_shader_8bit_storage"), cVar3 == '\0' &&
          (cVar3 = (**(code **)(**(long **)(this + 8) + 0x40))
                             (*(long **)(this + 8),"GL_EXT_shader_explicit_arithmetic_types_int8"),
          cVar3 == '\0')))) {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = identifierOrType(this);
        return uVar7;
      }
      break;case 0x165:case 0x166:case 0x167:case 0x17a:case 0x17b:case 0x17c:case 0x17d:case 0x17e:case 0x17f:case 0x180:case 0x181:case 0x182:
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = dMat(this);
      return uVar7;case 0x16b:case 0x16c:case 0x16d:case 0x183:case 0x184:case 0x185:case 0x186:case 0x187:case 0x188:case 0x189:case 0x18a:case 0x18b:
      plVar10 = *(long **)(this + 8);
      this[0x10] = (TScanContext)0x1;
      if ((((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) &&
           (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_AMD_gpu_shader_half_float"),
           cVar3 == '\0')) &&
          (cVar3 = (**(code **)(**(long **)(this + 8) + 0x40))
                             (*(long **)(this + 8),"GL_EXT_shader_explicit_arithmetic_types"),
          cVar3 == '\0')) &&
         (cVar3 = (**(code **)(**(long **)(this + 8) + 0x40))
                            (*(long **)(this + 8),"GL_EXT_shader_explicit_arithmetic_types_float16")
         , cVar3 == '\0')) {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = identifierOrType(this);
        return uVar7;
      }
      break;case 0x19e:
      plVar10 = *(long **)(this + 8);
      if (((*(int *)((long)plVar10 + 0xc) != 8) || ((int)plVar10[3] < 0x136)) &&
         (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_ARB_shader_atomic_counters"),
         cVar3 == '\0')) {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = es30ReservedFromGLSL(this,0x1a4);
        return uVar7;
      }
      break;case 0x19f:
      goto switchD_0010548c_caseD_19f;case 0x1a0:
      plVar10 = *(long **)(this + 8);
      if (((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) &&
          (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_EXT_ray_tracing"), cVar3 == '\0')) &&
         ((cVar3 = (**(code **)(**(long **)(this + 8) + 0x40))
                             (*(long **)(this + 8),"GL_EXT_ray_query"), cVar3 == '\0' &&
          (cVar3 = (**(code **)(**(long **)(this + 8) + 0x40))
                             (*(long **)(this + 8),"GL_NV_displacement_micromap"), cVar3 == '\0'))))
      {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = identifierOrType(this);
        return uVar7;
      }
      break;case 0x1a1:
      plVar10 = *(long **)(this + 8);
      if ((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) &&
         (((*(int *)((long)plVar10 + 0xc) == 8 || ((int)plVar10[3] < 0x1cc)) ||
          (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_EXT_ray_query"), cVar3 == '\0')))) {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = identifierOrType(this);
        return uVar7;
      }
      break;case 0x1a2:
      plVar10 = *(long **)(this + 8);
      this[0x10] = (TScanContext)0x1;
      if ((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) &&
         (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_NV_cooperative_matrix"), cVar3 == '\0')
         ) {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = identifierOrType(this);
        return uVar7;
      }
      break;case 0x1a3:case 0x1a4:
      plVar10 = *(long **)(this + 8);
      this[0x10] = (TScanContext)0x1;
      if ((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) &&
         (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_NV_integer_cooperative_matrix"),
         cVar3 == '\0')) {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = identifierOrType(this);
        return uVar7;
      }
      break;case 0x1a5:
      plVar10 = *(long **)(this + 8);
      this[0x10] = (TScanContext)0x1;
      if ((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) &&
         (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_KHR_cooperative_matrix"), cVar3 == '\0'
         )) {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = identifierOrType(this);
        return uVar7;
      }
      break;case 0x1a6:
      plVar10 = *(long **)(this + 8);
      if ((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) &&
         (((*(int *)((long)plVar10 + 0xc) == 8 || ((int)plVar10[3] < 0x1cc)) ||
          (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_NV_shader_invocation_reorder"),
          cVar3 == '\0')))) {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = identifierOrType(this);
        return uVar7;
      }
      break;case 0x1a7:
      plVar10 = *(long **)(this + 8);
      if ((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) &&
         (((*(int *)((long)plVar10 + 0xc) == 8 || ((int)plVar10[3] < 0x1cc)) ||
          (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_NV_shader_invocation_reorder"),
          cVar3 == '\0')))) {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = identifierOrType(this);
        return uVar7;
      }
      break;case 0x1a8:case 0x1a9:case 0x1aa:case 0x1ab:
      plVar10 = *(long **)(this + 8);
      this[0x10] = (TScanContext)0x1;
      if ((((*(int *)((long)plVar10 + 0xc) != 8) || ((int)plVar10[3] < 0x140)) &&
          (cVar3 = (**(code **)(*plVar10 + 0x48))(plVar10,2,AEP_texture_cube_map_array),
          cVar3 == '\0')) &&
         ((plVar10 = *(long **)(this + 8), *(int *)((long)plVar10 + 0xc) == 8 ||
          (((int)plVar10[3] < 400 &&
           (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_ARB_texture_cube_map_array"),
           cVar3 == '\0')))))) {
        reservedWord(this);
      }
      break;case 0x1ac:case 0x1b0:
      this[0x10] = (TScanContext)0x1;
      if (*(int *)(*(long *)(this + 8) + 0xc) != 8) goto switchD_0010548c_default;
LAB_0010608c:
      reservedWord(this);
      break;case 0x1ad:
      plVar10 = *(long **)(this + 8);
      this[0x10] = (TScanContext)0x1;
      iVar4 = (int)plVar10[3];
      if (*(int *)((long)plVar10 + 0xc) == 8) {
        if (iVar4 == 300) {
          reservedWord(this);
        }
        else if (iVar4 < 300) goto LAB_00106b46;
      }
      else if (((iVar4 < 0x82) &&
               (3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3))) &&
              (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_EXT_texture_array"), cVar3 == '\0'
              )) {
LAB_00106b46:
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = identifierOrType(this);
        return uVar7;
      }
      break;case 0x1ae:case 0x1af:case 0x1c0:case 0x1c1:case 0x1c2:
      this[0x10] = (TScanContext)0x1;
      if (((uVar5 != 0x1ae) || (plVar10 = *(long **)(this + 8), *(int *)((long)plVar10 + 0xc) == 8))
         || ((cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_EXT_texture_array"), cVar3 == '\0'
             && (3 < (int)((*(long **)(*(long *)(this + 8) + 0xe8))[1] -
                           **(long **)(*(long *)(this + 8) + 0xe8) >> 3))))) {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = es30ReservedFromGLSL(this,0x82);
        return uVar7;
      }
      break;case 0x1b1:case 0x1b2:
      plVar10 = *(long **)(this + 8);
      this[0x10] = (TScanContext)0x1;
      if (*(int *)((long)plVar10 + 0xc) == 8) {
LAB_00107286:
        reservedWord(this);
      }
      else if ((((int)plVar10[3] < 0x8c) &&
               (3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3))) &&
              (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_ARB_texture_rectangle"),
              cVar3 == '\0')) {
        plVar10 = *(long **)(this + 8);
        if ((*(byte *)(plVar10 + 0x1a) & 1) == 0) goto LAB_00107286;
        (**(code **)(*plVar10 + 0x28))
                  (plVar10,this + 0x18,1,&E_GL_ARB_texture_rectangle,
                   "texture-rectangle sampler keyword");
      }
      break;case 0x1b3:case 0x1b4:
      this[0x10] = (TScanContext)0x1;
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = es30ReservedFromGLSL(this,0x8c);
      return uVar7;case 0x1b5:
      plVar10 = *(long **)(this + 8);
      this[0x10] = (TScanContext)0x1;
      if (((*(int *)((long)plVar10 + 0xc) != 8) || ((int)plVar10[3] < 0x140)) &&
         (cVar3 = (**(code **)(*plVar10 + 0x48))(plVar10,2,AEP_texture_buffer), cVar3 == '\0')) {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = es30ReservedFromGLSL(this,0x82);
        return uVar7;
      }
      break;case 0x1b6:case 0x1b7:
      plVar10 = *(long **)(this + 8);
      this[0x10] = (TScanContext)0x1;
      if (((*(int *)((long)plVar10 + 0xc) != 8) || ((int)plVar10[3] < 0x140)) &&
         (cVar3 = (**(code **)(*plVar10 + 0x48))(plVar10,2,AEP_texture_buffer), cVar3 == '\0')) {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = es30ReservedFromGLSL(this,0x8c);
        return uVar7;
      }
      break;case 0x1b8:case 0x1b9:case 0x1ba:
      plVar10 = *(long **)(this + 8);
      this[0x10] = (TScanContext)0x1;
      iVar4 = (int)plVar10[3];
      if (*(int *)((long)plVar10 + 0xc) == 8) {
        if (iVar4 < 0x136) goto LAB_00105fec;
        goto switchD_0010548c_default;
      }
      if ((iVar4 < 0x8d) &&
         ((iVar4 != 0x8c ||
          (cVar3 = (**(code **)(*plVar10 + 0x48))(plVar10,1,&E_GL_ARB_texture_multisample),
          cVar3 == '\0')))) {
LAB_00105fec:
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = es30ReservedFromGLSL(this,0x96);
        return uVar7;
      }
      break;case 0x1bb:case 0x1bc:case 0x1bd:
      plVar10 = *(long **)(this + 8);
      this[0x10] = (TScanContext)0x1;
      if ((((*(int *)((long)plVar10 + 0xc) != 8) || ((int)plVar10[3] < 0x140)) &&
          (cVar3 = (**(code **)(*plVar10 + 0x48))
                             (plVar10,1,&E_GL_OES_texture_storage_multisample_2d_array),
          cVar3 == '\0')) &&
         ((plVar10 = *(long **)(this + 8), *(int *)((long)plVar10 + 0xc) == 8 ||
          (((int)plVar10[3] < 0x8d &&
           (((int)plVar10[3] != 0x8c ||
            (cVar3 = (**(code **)(*plVar10 + 0x48))(plVar10,1,&E_GL_ARB_texture_multisample),
            cVar3 == '\0')))))))) {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = es30ReservedFromGLSL(this,0x96);
        return uVar7;
      }
      break;case 0x1be:
      plVar10 = *(long **)(this + 8);
      this[0x10] = (TScanContext)0x1;
      if (((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) &&
          (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_OES_EGL_image_external"),
          cVar3 == '\0')) &&
         (cVar3 = (**(code **)(**(long **)(this + 8) + 0x40))
                            (*(long **)(this + 8),"GL_OES_EGL_image_external_essl3"), cVar3 == '\0')
         ) {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = identifierOrType(this);
        return uVar7;
      }
      break;case 0x1bf:
      plVar10 = *(long **)(this + 8);
      this[0x10] = (TScanContext)0x1;
      if ((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) &&
         (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_EXT_YUV_target"), cVar3 == '\0')) {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = identifierOrType(this);
        return uVar7;
      }
      break;case 0x1c3:case 0x1c4:case 0x1c5:case 0x1c6:case 0x1c7:case 0x1c8:case 0x1c9:case 0x1ca:case 0x1cb:case 0x1cc:case 0x1cd:case 0x1ce:case 0x1cf:case 0x1d0:case 0x1d1:case 0x1d2:case 0x1d3:case 0x1d4:
      goto switchD_0010548c_caseD_1c3;default:
      goto switchD_0010548c_default;
    }
    goto LAB_001054e8;
  }
  if (0x2cf < (int)uVar5) {
switchD_00105543_caseD_24c:
    psVar1 = *(string **)(*(long *)(this + 8) + 0x10);
    glslang::TInfoSinkBase::append((char *)psVar1);
    __snprintf_chk(local_48,0x18,2,0x18,&_LC521,*(undefined4 *)(this + 0x24));
    TSourceLoc::getStringNameOrNum_abi_cxx11_(SUB81(&local_68,0));
    glslang::TInfoSinkBase::append(psVar1);
    if (local_68 != local_58) {
      operator_delete(local_68,local_58[0] + 1);
    }
    glslang::TInfoSinkBase::append((char *)psVar1);
    glslang::TInfoSinkBase::append((char *)psVar1);
    glslang::TInfoSinkBase::append((char *)psVar1);
    uVar5 = 0;
    glslang::TInfoSinkBase::append((char *)psVar1);
    goto switchD_0010548c_default;
  }
  if ((int)uVar5 < 0x211) {
    if ((int)uVar5 < 0x201) goto switchD_0010548c_caseD_1c3;
    uVar7 = 1L << ((char)uVar5 - 1U & 0x3f);
    if ((uVar7 & 0xc33c) != 0) {
      plVar10 = *(long **)(this + 8);
      this[0x10] = (TScanContext)0x1;
      if ((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) &&
         (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_EXT_shader_image_int64"), cVar3 == '\0'
         )) {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = identifierOrType(this);
        return uVar7;
      }
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = firstGenerationImage(this,true);
      return uVar7;
    }
    if ((uVar7 & 0x30c3) != 0) {
      this[0x10] = (TScanContext)0x1;
      plVar10 = (long *)(*(long **)(this + 8))[0x1d];
      if ((3 < (int)(plVar10[1] - *plVar10 >> 3)) &&
         (cVar3 = (**(code **)(**(long **)(this + 8) + 0x40))(), cVar3 == '\0')) {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = identifierOrType(this);
        return uVar7;
      }
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = firstGenerationImage(this,false);
      return uVar7;
    }
    if ((uVar7 & 0xc00) == 0) goto switchD_00105543_caseD_24c;
    plVar10 = *(long **)(this + 8);
    this[0x10] = (TScanContext)0x1;
    if (3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) {
      cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_EXT_shader_image_int64");
      if (cVar3 == '\0') {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = identifierOrType(this);
        return uVar7;
      }
      plVar10 = *(long **)(this + 8);
    }
    if (((*(int *)((long)plVar10 + 0xc) != 8) || ((int)plVar10[3] < 0x140)) &&
       (cVar3 = (**(code **)(*plVar10 + 0x48))(plVar10,2,AEP_texture_buffer), cVar3 == '\0')) {
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = firstGenerationImage(this,false);
      return uVar7;
    }
    goto LAB_001054e8;
  }
  switch(uVar5) {
  case 0x211:
  case 0x212:
    plVar10 = *(long **)(this + 8);
    this[0x10] = (TScanContext)0x1;
    if (3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) {
      cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_EXT_shader_image_int64");
      if (cVar3 == '\0') {
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = identifierOrType(this);
        return uVar7;
      }
      plVar10 = *(long **)(this + 8);
    }
    if (((*(int *)((long)plVar10 + 0xc) != 8) || ((int)plVar10[3] < 0x140)) &&
       (cVar3 = (**(code **)(*plVar10 + 0x48))(plVar10,2,AEP_texture_cube_map_array), cVar3 == '\0')
       ) {
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = secondGenerationImage(this);
      return uVar7;
    }
    break;
  case 0x213:
  case 0x214:
  case 0x215:
  case 0x216:
    plVar10 = *(long **)(this + 8);
    this[0x10] = (TScanContext)0x1;
    if ((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) &&
       (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_EXT_shader_image_int64"), cVar3 == '\0'))
    {
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = identifierOrType(this);
      return uVar7;
    }
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar7 = secondGenerationImage(this);
    return uVar7;
  case 0x217:
  case 0x218:
  case 0x219:
  case 0x21a:
  case 0x21b:
  case 0x21c:
  case 0x21d:
  case 0x21e:
  case 0x21f:
  case 0x220:
  case 0x221:
  case 0x222:
  case 0x223:
  case 0x224:
  case 0x225:
  case 0x226:
  case 0x227:
  case 0x228:
  case 0x229:
  case 0x22a:
  case 0x22b:
  case 0x237:
  case 0x238:
  case 0x239:
  case 0x23a:
  case 0x23b:
  case 0x23c:
  case 0x249:
  case 0x24a:
  case 0x24b:
switchD_0010548c_caseD_12e:
    if (*(int *)(*(long *)(this + 8) + 0x28) < 1) {
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = identifierOrType(this);
      return uVar7;
    }
    goto switchD_0010548c_default;
  case 0x22c:
  case 0x22d:
  case 0x22e:
  case 0x22f:
  case 0x230:
  case 0x231:
  case 0x232:
  case 0x233:
  case 0x234:
  case 0x235:
  case 0x236:
  case 0x23d:
  case 0x23e:
switchD_0010548c_caseD_1c3:
    plVar10 = *(long **)(this + 8);
    this[0x10] = (TScanContext)0x1;
    if ((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) &&
       (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_AMD_gpu_shader_half_float_fetch"),
       cVar3 == '\0')) {
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = identifierOrType(this);
      return uVar7;
    }
    break;
  case 0x23f:
  case 0x240:
  case 0x241:
  case 0x242:
  case 0x243:
  case 0x244:
  case 0x245:
  case 0x246:
  case 0x247:
  case 0x248:
    plVar10 = *(long **)(this + 8);
    if ((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) &&
       (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_EXT_spirv_intrinsics"), cVar3 == '\0')) {
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = identifierOrType(this);
      return uVar7;
    }
    break;
  default:
    goto switchD_00105543_caseD_24c;
  case 0x27a:
    if (*(int *)(*(long *)(this + 8) + 0xc) == 8) goto switchD_0010548c_default;
    iVar4 = *(int *)(*(long *)(this + 8) + 0x18);
    goto joined_r0x00106bb9;
  case 0x27b:
  case 0x27c:
  case 0x27d:
  case 0x27e:
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar7 = precisionKeyword(this);
    return uVar7;
  case 0x27f:
    iVar4 = *(int *)(*(long *)(this + 8) + 0x18);
    if (*(int *)(*(long *)(this + 8) + 0xc) == 8) {
      if (iVar4 < 300) goto LAB_00106d49;
    }
    else if (iVar4 < 0x8c) {
LAB_00106d49:
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = reservedWord(this);
      return uVar7;
    }
    goto LAB_001063d9;
  case 0x280:
    iVar4 = *(int *)(*(long *)(this + 8) + 0x18);
    bVar2 = 0x1a3 < iVar4;
    if (*(int *)(*(long *)(this + 8) + 0xc) == 8) {
      bVar2 = 299 < iVar4;
    }
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar7 = identifierOrReserved(this,bVar2);
    return uVar7;
  case 0x281:
    bVar2 = true;
    if (*(int *)(*(long *)(this + 8) + 0xc) != 8) {
      bVar2 = 0x81 < *(int *)(*(long *)(this + 8) + 0x18);
    }
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar7 = identifierOrReserved(this,bVar2);
    return uVar7;
  case 0x285:
    iVar4 = strcmp("true",*(char **)(this + 0x40));
    *(bool *)(**(long **)(this + 0x30) + 0x18) = iVar4 == 0;
    goto switchD_0010548c_default;
  case 0x288:
    iVar4 = *(int *)(*(long *)(this + 8) + 0x18);
joined_r0x00106bb9:
    if (iVar4 < 0x78) {
LAB_001063d9:
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = identifierOrType(this);
      return uVar7;
    }
  case 0x289:
  case 0x28a:
  case 0x28b:
  case 0x28e:
  case 0x28f:
  case 0x290:
  case 0x291:
  case 0x292:
  case 0x293:
  case 0x294:
  case 0x295:
  case 0x296:
  case 0x298:
  case 0x29d:
  case 0x2a0:
    goto switchD_0010548c_default;
  case 0x28c:
    this[0x11] = (TScanContext)0x1;
    goto switchD_0010548c_default;
  case 0x28d:
switchD_0010548c_caseD_103:
    this[0x10] = (TScanContext)0x1;
    goto switchD_0010548c_default;
  case 0x297:
  case 0x299:
    iVar4 = *(int *)(*(long *)(this + 8) + 0x18);
    if (*(int *)(*(long *)(this + 8) + 0xc) == 8) {
      if (iVar4 < 300) goto LAB_001060f4;
    }
    else if (iVar4 < 0x82) {
LAB_001060f4:
      reservedWord(this);
    }
    break;
  case 0x29a:
    cVar3 = (**(code **)(**(long **)(this + 8) + 0x40))
                      (*(long **)(this + 8),"GL_EXT_terminate_invocation");
    if (cVar3 == '\0') {
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = identifierOrType(this);
      return uVar7;
    }
    break;
  case 0x29b:
  case 0x29c:
    cVar3 = (**(code **)(**(long **)(this + 8) + 0x40))(*(long **)(this + 8),"GL_EXT_ray_tracing");
    if (cVar3 == '\0') {
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = identifierOrType(this);
      return uVar7;
    }
    break;
  case 0x29e:
    iVar4 = *(int *)(*(long *)(this + 8) + 0x18);
    if (*(int *)(*(long *)(this + 8) + 0xc) != 8) {
      if (iVar4 < 0x8c) goto LAB_001063d9;
      goto switchD_0010548c_default;
    }
    goto LAB_001070a6;
  case 0x29f:
    plVar10 = *(long **)(this + 8);
    this[0x13] = (TScanContext)0x1;
    if (*(int *)((long)plVar10 + 0xc) == 8) {
      if ((int)plVar10[3] < 0x136) goto LAB_00106639;
    }
    else if (((int)plVar10[3] < 0x1ae) &&
            (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_ARB_shader_storage_buffer_object"),
            cVar3 == '\0')) {
LAB_00106639:
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = identifierOrType(this);
      return uVar7;
    }
    break;
  case 0x2a1:
    iVar4 = *(int *)(*(long *)(this + 8) + 0x18);
    if (*(int *)(*(long *)(this + 8) + 0xc) == 8) {
      if (iVar4 < 300) {
        reservedWord(this);
      }
    }
    else if (iVar4 < 0x82) goto LAB_001063d9;
    break;
  case 0x2a2:
    iVar4 = *(int *)(*(long *)(this + 8) + 0x18);
    if (*(int *)(*(long *)(this + 8) + 0xc) != 8) {
      if (iVar4 < 0x82) goto LAB_001063d9;
      goto switchD_0010548c_default;
    }
LAB_001070a6:
    if (299 < iVar4) goto switchD_0010548c_default;
    goto LAB_001063d9;
  case 0x2a3:
    plVar10 = *(long **)(this + 8);
    local_68 = (long *)0x1096e0;
    pcStack_60 = "GL_ARB_explicit_attrib_location";
    if (*(int *)((long)plVar10 + 0xc) == 8) {
      if ((int)plVar10[3] < 300) goto LAB_001064a9;
    }
    else if (((int)plVar10[3] < 0x8c) &&
            (cVar3 = (**(code **)(*plVar10 + 0x48))(plVar10,2,&local_68), cVar3 == '\0')) {
LAB_001064a9:
      uVar5 = identifierOrType(this);
      goto switchD_0010548c_default;
    }
    break;
  case 0x2ac:
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar7 = es30ReservedFromGLSL(this,400);
    return uVar7;
  case 0x2ad:
    cVar3 = (**(code **)(**(long **)(this + 8) + 0x40))
                      (*(long **)(this + 8),"GL_EXT_demote_to_helper_invocation");
    if (cVar3 == '\0') {
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = identifierOrType(this);
      return uVar7;
    }
    break;
  case 0x2ae:
  case 0x2af:
  case 0x2b0:
  case 0x2b1:
  case 0x2b2:
switchD_0010548c_caseD_19f:
    plVar10 = *(long **)(this + 8);
    if ((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) &&
       (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_NV_ray_tracing"), cVar3 == '\0')) {
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = identifierOrType(this);
      return uVar7;
    }
    break;
  case 0x2b3:
  case 0x2b4:
  case 0x2b5:
  case 0x2b6:
  case 0x2b7:
    plVar10 = *(long **)(this + 8);
    if (((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) &&
        (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_EXT_ray_tracing"), cVar3 == '\0')) &&
       (cVar3 = (**(code **)(**(long **)(this + 8) + 0x40))(*(long **)(this + 8),"GL_EXT_ray_query")
       , cVar3 == '\0')) {
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = identifierOrType(this);
      return uVar7;
    }
    break;
  case 0x2b8:
    plVar10 = *(long **)(this + 8);
    if (3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) {
      if (*(int *)((long)plVar10 + 0xc) == 8) {
        if ((0x13f < (int)plVar10[3]) ||
           (cVar3 = (**(code **)(*plVar10 + 0x48))(plVar10,2,AEP_tessellation_shader), cVar3 != '\0'
           )) break;
        plVar10 = *(long **)(this + 8);
        if (*(int *)((long)plVar10 + 0xc) == 8) goto LAB_001064f6;
      }
      cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_ARB_tessellation_shader");
      if (cVar3 == '\0') {
LAB_001064f6:
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar7 = es30ReservedFromGLSL(this,400);
        return uVar7;
      }
    }
    break;
  case 0x2b9:
    plVar10 = *(long **)(this + 8);
    if (((*(int *)((long)plVar10 + 0xc) != 8) || ((int)plVar10[3] < 0x140)) &&
       (cVar3 = (**(code **)(*plVar10 + 0x48))(plVar10,1,&E_GL_OES_shader_multisample_interpolation)
       , cVar3 == '\0')) {
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = es30ReservedFromGLSL(this,400);
      return uVar7;
    }
    break;
  case 0x2ba:
    cVar3 = (**(code **)(**(long **)(this + 8) + 0x40))
                      (*(long **)(this + 8),"GL_EXT_nonuniform_qualifier");
    if (cVar3 == '\0') {
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = identifierOrType(this);
      return uVar7;
    }
    break;
  case 699:
  case 0x2bd:
  case 0x2be:
  case 0x2bf:
  case 0x2c0:
  case 0x2c1:
  case 0x2c2:
  case 0x2c3:
  case 0x2c4:
  case 0x2c5:
    plVar10 = *(long **)(this + 8);
    if ((*(int *)((long)plVar10 + 0xc) != 8) || ((int)plVar10[3] < 0x136)) {
      cVar3 = (**(code **)(*plVar10 + 0x40))();
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = es30ReservedFromGLSL(this,(-(uint)(cVar3 == '\0') & 0x122) + 0x82);
      return uVar7;
    }
    goto switchD_0010548c_default;
  case 700:
    plVar10 = *(long **)(this + 8);
    if (*(int *)((long)plVar10 + 0xc) == 8) {
      if (0x135 < (int)plVar10[3]) goto switchD_0010548c_default;
      if (3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) goto LAB_0010644a;
    }
    else if (((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) &&
             ((int)plVar10[3] < 0x1a4)) &&
            (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_ARB_shader_image_load_store"),
            cVar3 == '\0')) {
LAB_0010644a:
      reservedWord(this);
    }
    break;
  case 0x2c6:
    cVar3 = (**(code **)(**(long **)(this + 8) + 0x40))
                      (*(long **)(this + 8),"GL_NV_shader_noperspective_interpolation");
    if (cVar3 == '\0') {
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = es30ReservedFromGLSL(this,0x82);
      return uVar7;
    }
    break;
  case 0x2c7:
    cVar3 = (**(code **)(**(long **)(this + 8) + 0x40))
                      (*(long **)(this + 8),"GL_AMD_shader_explicit_vertex_parameter");
    if (cVar3 == '\0') {
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = identifierOrType(this);
      return uVar7;
    }
    break;
  case 0x2c8:
    plVar10 = *(long **)(this + 8);
    if (((*(int *)((long)plVar10 + 0xc) == 8) || ((int)plVar10[3] < 0x1c2)) &&
       (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_EXT_fragment_shader_barycentric"),
       cVar3 == '\0')) {
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = identifierOrType(this);
      return uVar7;
    }
    break;
  case 0x2c9:
    plVar10 = *(long **)(this + 8);
    if (((*(int *)((long)plVar10 + 0xc) == 8) || ((int)plVar10[3] < 0x1c2)) &&
       (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_NV_fragment_shader_barycentric"),
       cVar3 == '\0')) {
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = identifierOrType(this);
      return uVar7;
    }
    break;
  case 0x2ca:
  case 0x2cb:
  case 0x2cc:
    plVar10 = *(long **)(this + 8);
    if ((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) &&
       (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_NV_mesh_shader"), cVar3 == '\0')) {
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = identifierOrType(this);
      return uVar7;
    }
    break;
  case 0x2cd:
  case 0x2ce:
    plVar10 = *(long **)(this + 8);
    if ((3 < (int)(((long *)plVar10[0x1d])[1] - *(long *)plVar10[0x1d] >> 3)) &&
       (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,"GL_EXT_mesh_shader"), cVar3 == '\0')) {
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = identifierOrType(this);
      return uVar7;
    }
    break;
  case 0x2cf:
    plVar10 = *(long **)(this + 8);
    if (*(int *)((long)plVar10 + 0xc) == 8) {
      if ((0x13f < (int)plVar10[3]) ||
         (cVar3 = (**(code **)(*plVar10 + 0x48))(plVar10,2,AEP_gpu_shader5), cVar3 != '\0')) break;
      plVar10 = *(long **)(this + 8);
      if (*(int *)((long)plVar10 + 0xc) == 8) {
        if ((int)plVar10[3] != 0x136) goto LAB_00106ad0;
        goto LAB_0010608c;
      }
    }
    if ((int)plVar10[3] < 400) {
LAB_00106ad0:
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar7 = identifierOrType(this);
      return uVar7;
    }
  }
LAB_001054e8:
  uVar5 = *(uint *)(this + 0x48);
switchD_0010548c_default:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (ulong)uVar5;
}



/* glslang::TScanContext::tokenize(glslang::TPpContext*, glslang::TParserToken&) */

undefined8 __thiscall
glslang::TScanContext::tokenize(TScanContext *this,TPpContext *param_1,TParserToken *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong *puVar5;
  size_t sVar6;
  ulong *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long in_FS_OFFSET;
  byte bVar12;
  uint uStack_464;
  undefined8 local_458;
  uint local_450 [259];
  undefined1 local_42;
  undefined1 local_41;
  long local_40;
  
  bVar12 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    *(TParserToken **)(this + 0x30) = param_2;
    local_458 = 0;
    local_450[0] = local_450[0] & 0xffffff00;
    iVar2 = glslang::TPpContext::tokenize((TPpToken *)param_1);
    if (iVar2 == -1) {
      uVar3 = 0;
LAB_00107648:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    *(uint **)(this + 0x40) = local_450;
    *(ulong *)(this + 0x28) = (ulong)uStack_464 << 0x20;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    puVar1 = (undefined8 *)**(undefined8 **)(this + 0x30);
    puVar1[2] = *(undefined8 *)(this + 0x28);
    *puVar1 = 0;
    puVar1[1] = 0;
    switch(iVar2) {
    case 0x21:
      uVar3 = 0x26d;
      goto LAB_00107648;
    default:
      local_42 = (undefined1)iVar2;
      local_41 = 0;
      (**(code **)(**(long **)(this + 8) + 0x158))
                (*(long **)(this + 8),this + 0x18,"unexpected token",&local_42,&_LC446);
      break;
    case 0x25:
      uVar3 = 0x273;
      goto LAB_00107648;
    case 0x26:
      uVar3 = 0x278;
      goto LAB_00107648;
    case 0x28:
      this[0x10] = (TScanContext)0x0;
      uVar3 = 0x262;
      goto LAB_00107648;
    case 0x29:
      this[0x10] = (TScanContext)0x0;
      uVar3 = 0x263;
      goto LAB_00107648;
    case 0x2a:
      uVar3 = 0x271;
      goto LAB_00107648;
    case 0x2b:
      uVar3 = 0x270;
      goto LAB_00107648;
    case 0x2c:
      this[0x10] = (TScanContext)0x0;
      uVar3 = 0x269;
      goto LAB_00107648;
    case 0x2d:
      uVar3 = 0x26e;
      goto LAB_00107648;
    case 0x2e:
      this[0x12] = (TScanContext)0x1;
      uVar3 = 0x268;
      goto LAB_00107648;
    case 0x2f:
      uVar3 = 0x272;
      goto LAB_00107648;
    case 0x3a:
      uVar3 = 0x26a;
      goto LAB_00107648;
    case 0x3b:
      this[0x10] = (TScanContext)0x0;
      uVar3 = 0x26c;
      this[0x13] = (TScanContext)0x0;
      goto LAB_00107648;
    case 0x3c:
      uVar3 = 0x274;
      goto LAB_00107648;
    case 0x3d:
      this[0x10] = (TScanContext)0x0;
      uVar3 = 0x26b;
      goto LAB_00107648;
    case 0x3e:
      uVar3 = 0x275;
      goto LAB_00107648;
    case 0x3f:
      uVar3 = 0x279;
      goto LAB_00107648;
    case 0x5b:
      uVar3 = 0x264;
      goto LAB_00107648;
    case 0x5c:
      (**(code **)(**(long **)(this + 8) + 0x158))
                (*(long **)(this + 8),this + 0x18,"illegal use of escape character",&_LC525,&_LC446)
      ;
      break;
    case 0x5d:
      uVar3 = 0x265;
      goto LAB_00107648;
    case 0x5e:
      uVar3 = 0x277;
      goto LAB_00107648;
    case 0x7b:
      this[0x11] = (TScanContext)0x0;
      uVar3 = 0x266;
      this[0x13] = (TScanContext)0x0;
      goto LAB_00107648;
    case 0x7c:
      uVar3 = 0x276;
      goto LAB_00107648;
    case 0x7d:
      uVar3 = 0x267;
      goto LAB_00107648;
    case 0x7e:
      uVar3 = 0x26f;
      goto LAB_00107648;
    case 0x81:
      uVar3 = 0x259;
      goto LAB_00107648;
    case 0x82:
      uVar3 = 0x260;
      goto LAB_00107648;
    case 0x83:
      uVar3 = 599;
      goto LAB_00107648;
    case 0x84:
      uVar3 = 600;
      goto LAB_00107648;
    case 0x85:
      uVar3 = 0x25a;
      goto LAB_00107648;
    case 0x86:
      uVar3 = 0x24d;
      goto LAB_00107648;
    case 0x87:
      uVar3 = 0x24c;
      goto LAB_00107648;
    case 0x88:
      uVar3 = 0x25c;
      goto LAB_00107648;
    case 0x89:
      uVar3 = 0x25b;
      goto LAB_00107648;
    case 0x8a:
      uVar3 = 0x25d;
      goto LAB_00107648;
    case 0x8b:
      uVar3 = 0x25f;
      goto LAB_00107648;
    case 0x8c:
      uVar3 = 0x25e;
      goto LAB_00107648;
    case 0x8d:
      uVar3 = 0x254;
      goto LAB_00107648;
    case 0x8e:
      uVar3 = 0x255;
      goto LAB_00107648;
    case 0x8f:
      uVar3 = 0x256;
      goto LAB_00107648;
    case 0x90:
      uVar3 = 0x252;
      goto LAB_00107648;
    case 0x91:
      uVar3 = 0x253;
      goto LAB_00107648;
    case 0x92:
      uVar3 = 0x251;
      goto LAB_00107648;
    case 0x93:
      uVar3 = 0x250;
      goto LAB_00107648;
    case 0x94:
      uVar3 = 0x24f;
      goto LAB_00107648;
    case 0x95:
      uVar3 = 0x24e;
      goto LAB_00107648;
    case 0x96:
      (**(code **)(**(long **)(this + 8) + 0x158))
                (*(long **)(this + 8),this + 0x18,"not supported",&_LC527,&_LC446);
      break;
    case 0x98:
      *(undefined4 *)(puVar1 + 3) = (undefined4)local_458;
      uVar3 = 0x283;
      goto LAB_00107648;
    case 0x99:
      *(undefined4 *)(puVar1 + 3) = (undefined4)local_458;
      uVar3 = 0x284;
      goto LAB_00107648;
    case 0x9a:
      puVar1[3] = local_458;
      uVar3 = 0x2aa;
      goto LAB_00107648;
    case 0x9b:
      puVar1[3] = local_458;
      uVar3 = 0x2ab;
      goto LAB_00107648;
    case 0x9c:
      *(undefined4 *)(puVar1 + 3) = (undefined4)local_458;
      uVar3 = 0x2a5;
      goto LAB_00107648;
    case 0x9d:
      *(undefined4 *)(puVar1 + 3) = (undefined4)local_458;
      uVar3 = 0x2a6;
      goto LAB_00107648;
    case 0x9e:
      uVar3 = 0x282;
      puVar1[3] = local_458;
      goto LAB_00107648;
    case 0x9f:
      uVar3 = 0x2a4;
      puVar1[3] = local_458;
      goto LAB_00107648;
    case 0xa0:
      uVar3 = 0x2a7;
      puVar1[3] = local_458;
      goto LAB_00107648;
    case 0xa1:
      uVar4 = glslang::GetThreadPoolAllocator();
      puVar5 = (ulong *)glslang::TPoolAllocator::allocate(uVar4);
      uVar4 = glslang::GetThreadPoolAllocator();
      puVar7 = puVar5 + 3;
      *puVar5 = uVar4;
      puVar5[1] = (ulong)puVar7;
      sVar6 = strlen((char *)local_450);
      if (sVar6 < 0x10) {
        if (sVar6 == 1) {
          *(undefined1 *)(puVar5 + 3) = (undefined1)local_450[0];
          goto LAB_001076c1;
        }
        if (sVar6 == 0) goto LAB_001076c1;
      }
      else {
        puVar7 = (ulong *)glslang::TPoolAllocator::allocate(uVar4);
        puVar5[3] = sVar6;
        puVar5[1] = (ulong)puVar7;
      }
      uVar8 = (uint)sVar6;
      if (uVar8 < 8) {
        if ((sVar6 & 4) == 0) {
          if (uVar8 != 0) {
            *(undefined1 *)puVar7 = (undefined1)local_450[0];
            if ((sVar6 & 2) != 0) {
              *(undefined2 *)((long)puVar7 + ((sVar6 & 0xffffffff) - 2)) =
                   *(undefined2 *)((long)&local_458 + (sVar6 & 0xffffffff) + 6);
            }
          }
        }
        else {
          *(uint *)puVar7 = local_450[0];
          *(undefined4 *)((long)puVar7 + ((sVar6 & 0xffffffff) - 4)) =
               *(undefined4 *)((long)&local_458 + (sVar6 & 0xffffffff) + 4);
        }
      }
      else {
        *puVar7 = CONCAT44(local_450[1],local_450[0]);
        *(undefined8 *)((long)puVar7 + ((sVar6 & 0xffffffff) - 8)) =
             *(undefined8 *)((long)&local_458 + (sVar6 & 0xffffffff));
        lVar11 = (long)puVar7 - (long)((ulong)(puVar7 + 1) & 0xfffffffffffffff8);
        puVar9 = (undefined8 *)((long)local_450 - lVar11);
        puVar10 = (undefined8 *)((ulong)(puVar7 + 1) & 0xfffffffffffffff8);
        for (uVar4 = (ulong)(uVar8 + (int)lVar11 >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + (ulong)bVar12 * -2 + 1;
          puVar10 = puVar10 + (ulong)bVar12 * -2 + 1;
        }
      }
      puVar7 = (ulong *)puVar5[1];
LAB_001076c1:
      puVar5[2] = sVar6;
      uVar3 = 0x261;
      *(undefined1 *)((long)puVar7 + sVar6) = 0;
      puVar1[3] = puVar5;
      goto LAB_00107648;
    case 0xa2:
      uVar3 = tokenizeIdentifier(this);
      this[0x12] = (TScanContext)0x0;
      goto LAB_00107648;
    }
  } while( true );
}



/* yylex(YYSTYPE*, glslang::TParseContext&) */

void yylex(YYSTYPE *param_1,TParseContext *param_2)

{
  long in_FS_OFFSET;
  YYSTYPE *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = param_1;
  glslang::TScanContext::tokenize
            (*(TScanContext **)(param_2 + 0x1e8),*(TPpContext **)(param_2 + 0x1f0),
             (TParserToken *)&local_18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TType::getBasicType() const */

TType __thiscall glslang::TType::getBasicType(TType *this)

{
  return this[8];
}



/* glslang::TVariable::getType() const */

TVariable * __thiscall glslang::TVariable::getType(TVariable *this)

{
  return this + 0x28;
}



/* glslang::TVariable::isUserType() const */

TVariable __thiscall glslang::TVariable::isUserType(TVariable *this)

{
  return this[0xc0];
}



/* glslang::TInputScanner::get() */

uint __thiscall glslang::TInputScanner::get(TInputScanner *this)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  
  iVar2 = *(int *)(this + 8);
  iVar7 = *(int *)(this + 0x20);
  if (iVar7 < iVar2) {
    lVar10 = (long)iVar7;
    uVar11 = *(ulong *)(this + 0x28);
    lVar4 = *(long *)(this + 0x18);
    lVar6 = lVar10 * 8;
    uVar8 = uVar11;
    do {
      if (uVar8 < *(ulong *)(lVar4 + lVar6)) {
        lVar5 = *(long *)(this + 0x30);
        bVar1 = *(byte *)(*(long *)(*(long *)(this + 0x10) + lVar6) + uVar8);
        lVar6 = lVar5 + lVar10 * 0x18;
        *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + 1;
        *(int *)(this + 0x50) = *(int *)(this + 0x50) + 1;
        uVar9 = (uint)bVar1;
        if (uVar9 == 10) {
          *(int *)(lVar6 + 0xc) = *(int *)(lVar6 + 0xc) + 1;
          *(undefined4 *)(this + 0x50) = 0;
          *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + 1;
          *(undefined4 *)(lVar6 + 0x10) = 0;
        }
        uVar11 = uVar11 + 1;
        *(ulong *)(this + 0x28) = uVar11;
        if (uVar11 < *(ulong *)(lVar4 + lVar10 * 8)) {
          return uVar9;
        }
        iVar7 = iVar7 + 1;
        *(int *)(this + 0x20) = iVar7;
        if (iVar7 < iVar2) {
          iVar3 = *(int *)(lVar6 + 8);
          lVar6 = lVar5 + 0x18 + lVar10 * 0x18;
          *(undefined8 *)(lVar6 + 0xc) = 1;
          *(int *)(lVar6 + 8) = iVar3 + 1;
        }
        lVar6 = (long)iVar7;
        goto LAB_00107bd1;
      }
      lVar6 = lVar6 + 8;
      uVar8 = 0;
    } while (lVar6 != ((ulong)(uint)(iVar2 - iVar7) + lVar10) * 8);
  }
  else {
    this[0x59] = (TInputScanner)0x1;
  }
  return 0xffffffff;
LAB_00107bd1:
  if ((iVar2 <= iVar7) || (*(long *)(lVar4 + lVar6 * 8) != 0)) {
LAB_00107bec:
    *(undefined8 *)(this + 0x28) = 0;
    return uVar9;
  }
  iVar7 = (int)lVar6 + 1;
  *(int *)(this + 0x20) = iVar7;
  if (iVar2 <= (int)lVar6 + 1) goto LAB_00107bec;
  lVar6 = (long)iVar7;
  lVar10 = lVar5 + lVar6 * 0x18;
  iVar3 = *(int *)(lVar5 + -0x10 + lVar6 * 0x18);
  *(undefined8 *)(lVar10 + 0xc) = 1;
  *(int *)(lVar10 + 8) = iVar3 + 1;
  goto LAB_00107bd1;
}



/* glslang::TInputScanner::unget() */

void __thiscall glslang::TInputScanner::unget(TInputScanner *this)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  
  if (this[0x59] == (TInputScanner)0x0) {
    iVar2 = *(int *)(this + 0x20);
    if (*(long *)(this + 0x28) == 0) {
      lVar3 = (long)(iVar2 + -1);
      do {
        lVar7 = *(long *)(*(long *)(this + 0x18) + lVar3 * 8);
        iVar2 = (int)lVar3;
        if (iVar2 < 1) {
          *(int *)(this + 0x20) = iVar2;
          if (lVar7 != 0) goto LAB_00107d93;
          *(undefined8 *)(this + 0x28) = 0;
          goto LAB_00107cbd;
        }
        lVar3 = lVar3 + -1;
      } while (lVar7 == 0);
      *(int *)(this + 0x20) = iVar2;
LAB_00107d93:
      *(long *)(this + 0x28) = lVar7 + -1;
      iVar2 = *(int *)(this + 0x20);
    }
    else {
      lVar3 = *(long *)(this + 0x28) + -1;
      *(long *)(this + 0x28) = lVar3;
      lVar7 = *(long *)(this + 0x30) + (long)iVar2 * 0x18;
      *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
      *(int *)(this + 0x50) = *(int *)(this + 0x50) + -1;
      if (*(int *)(lVar7 + 0x10) < 0) {
        if (lVar3 != 0) {
          lVar4 = lVar3;
          do {
            if (*(char *)(*(long *)(*(long *)(this + 0x10) + (long)iVar2 * 8) + lVar4) == '\n')
            goto LAB_00107d7d;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        lVar4 = 0;
LAB_00107d7d:
        iVar5 = (int)lVar3 - (int)lVar4;
        *(int *)(this + 0x50) = iVar5;
        *(int *)(lVar7 + 0x10) = iVar5;
      }
    }
LAB_00107cbd:
    if (*(int *)(this + 8) <= iVar2) {
      this[0x59] = (TInputScanner)0x1;
      return;
    }
    lVar7 = (long)iVar2;
    uVar6 = *(ulong *)(this + 0x28);
    lVar3 = lVar7 * 8;
    do {
      if (uVar6 < *(ulong *)(*(long *)(this + 0x18) + lVar3)) {
        if (*(char *)(*(long *)(*(long *)(this + 0x10) + lVar3) + uVar6) != '\n') {
          return;
        }
        piVar1 = (int *)(*(long *)(this + 0x30) + 0xc + lVar7 * 0x18);
        *piVar1 = *piVar1 + -1;
        *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + -1;
        return;
      }
      lVar3 = lVar3 + 8;
      uVar6 = 0;
    } while (((ulong)(uint)(*(int *)(this + 8) - iVar2) + lVar7) * 8 != lVar3);
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_mutate(unsigned long, unsigned long, char const*, unsigned long) */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          ulong param_1,ulong param_2,char *param_3,ulong param_4)

{
  undefined1 *__dest;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  size_t __n;
  undefined1 *__src;
  
  uVar3 = (param_4 - param_2) + *(long *)(this + 0x10);
  __n = *(long *)(this + 0x10) - (param_1 + param_2);
  if (*(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8) ==
      this + 0x18) {
    uVar1 = 0xf;
  }
  else {
    uVar1 = *(ulong *)(this + 0x18);
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
    __dest = (undefined1 *)glslang::TPoolAllocator::allocate(*(ulong *)this);
    if (param_1 != 0) {
      if (param_1 == 1) {
        *__dest = **(undefined1 **)(this + 8);
      }
      else {
        __dest = (undefined1 *)memcpy(__dest,*(undefined1 **)(this + 8),param_1);
      }
    }
    if ((param_3 != (char *)0x0) && (param_4 != 0)) {
      if (param_4 == 1) {
        __dest[param_1] = *param_3;
      }
      else {
        memcpy(__dest + param_1,param_3,param_4);
      }
    }
    if (__n != 0) {
      __src = (undefined1 *)(param_1 + param_2 + *(long *)(this + 8));
      if (__n == 1) {
        __dest[param_1 + param_4] = *__src;
      }
      else {
        memcpy(__dest + param_1 + param_4,__src,__n);
      }
    }
    *(undefined1 **)(this + 8) = __dest;
    *(ulong *)(this + 0x18) = uVar3;
    return;
  }
  std::__throw_length_error("basic_string::_M_create");
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_append(char const*, unsigned long) */

basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> * __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar4;
  
  uVar2 = *(ulong *)(this + 0x10);
  pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8);
  uVar1 = param_2 + uVar2;
  if (pbVar4 == this + 0x18) {
    uVar3 = 0xf;
  }
  else {
    uVar3 = *(ulong *)(this + 0x18);
  }
  if (uVar3 < uVar1) {
    _M_mutate(this,uVar2,0,param_1,param_2);
    pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8)
    ;
  }
  else if (param_2 != 0) {
    if (param_2 == 1) {
      pbVar4[uVar2] =
           (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)*param_1;
      pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                (this + 8);
    }
    else {
      memcpy(pbVar4 + uVar2,param_1,param_2);
      pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                (this + 8);
    }
  }
  *(ulong *)(this + 0x10) = uVar1;
  pbVar4[uVar1] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
  return this;
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* glslang::TSourceLoc::getStringNameOrNum[abi:cxx11](bool) const */

ulong * glslang::TSourceLoc::getStringNameOrNum_abi_cxx11_(bool param_1)

{
  undefined *puVar1;
  undefined1 *__src;
  undefined1 auVar2 [16];
  int iVar3;
  ulong *puVar4;
  uint uVar5;
  char in_DL;
  uint uVar6;
  ulong uVar7;
  ulong **ppuVar8;
  long lVar9;
  char cVar10;
  ulong *in_RSI;
  ulong *puVar11;
  undefined7 in_register_00000039;
  ulong *puVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  ulong *local_180;
  ulong local_178;
  ulong *local_170;
  undefined8 local_168;
  ulong local_160 [3];
  ulong **local_148;
  undefined8 local_140;
  ulong *local_138;
  ulong local_130 [3];
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
  char acStack_57 [23];
  long local_40;
  
  puVar12 = (ulong *)CONCAT71(in_register_00000039,param_1);
  uVar14 = *in_RSI;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar13 = (char *)puVar12;
  if (uVar14 != 0) {
    if (in_DL == '\0') {
      local_178 = glslang::GetThreadPoolAllocator();
      local_170 = local_160;
      __src = *(undefined1 **)(uVar14 + 8);
      uVar14 = *(ulong *)(uVar14 + 0x10);
      if (uVar14 < 0x10) {
        if (uVar14 == 1) {
          local_160[0] = CONCAT71(local_160[0]._1_7_,*__src);
        }
        else if (uVar14 != 0) goto LAB_0010a222;
      }
      else {
        if ((long)uVar14 < 0) goto LAB_0010a4ed;
        local_170 = (ulong *)glslang::TPoolAllocator::allocate(local_178);
        local_160[0] = uVar14;
LAB_0010a222:
        memcpy(local_170,__src,uVar14);
      }
      *(undefined1 *)((long)local_170 + uVar14) = 0;
      local_168 = uVar14;
LAB_00109e12:
      puVar11 = local_170;
      local_148 = &local_138;
      if (local_170 == (ulong *)0x0) {
        std::__throw_logic_error("basic_string: construction from null is not valid");
LAB_0010a4ed:
        std::__throw_length_error("basic_string::_M_create");
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar4 = (ulong *)strlen((char *)local_170);
      local_180 = puVar4;
      if (puVar4 < (ulong *)0x10) {
        ppuVar8 = &local_138;
        if (puVar4 == (ulong *)0x1) {
          local_138 = (ulong *)CONCAT71(local_138._1_7_,(char)*puVar11);
        }
        else if (puVar4 != (ulong *)0x0) goto LAB_00109f41;
      }
      else {
        local_148 = (ulong **)std::__cxx11::string::_M_create((ulong *)&local_148,(ulong)&local_180)
        ;
        local_138 = local_180;
        ppuVar8 = local_148;
LAB_00109f41:
        memcpy(ppuVar8,puVar11,(size_t)puVar4);
        ppuVar8 = local_148;
      }
      local_140 = local_180;
      *(undefined1 *)((long)ppuVar8 + (long)local_180) = 0;
      *puVar12 = (ulong)(puVar12 + 2);
      if (local_148 == &local_138) {
        puVar1 = (undefined *)((long)local_180 + 1);
        uVar5 = (uint)puVar1;
        if (uVar5 < 8) {
          if (((ulong)puVar1 & 4) == 0) {
            if (uVar5 != 0) {
              *(undefined1 *)(puVar12 + 2) = local_138._0_1_;
              if (((ulong)puVar1 & 2) != 0) {
                *(undefined2 *)((long)puVar12 + ((ulong)puVar1 & 0xffffffff) + 0xe) =
                     *(undefined2 *)((long)&local_140 + ((ulong)puVar1 & 0xffffffff) + 6);
              }
            }
          }
          else {
            *(undefined4 *)(puVar12 + 2) = local_138._0_4_;
            *(undefined4 *)((long)puVar12 + ((ulong)puVar1 & 0xffffffff) + 0xc) =
                 *(undefined4 *)((long)&local_140 + ((ulong)puVar1 & 0xffffffff) + 4);
          }
        }
        else {
          puVar12[2] = (ulong)local_138;
          *(undefined8 *)((long)puVar12 + ((ulong)puVar1 & 0xffffffff) + 8) =
               *(undefined8 *)((long)&local_140 + ((ulong)puVar1 & 0xffffffff));
          lVar9 = (long)(puVar12 + 2) - ((ulong)(puVar12 + 3) & 0xfffffffffffffff8);
          uVar5 = uVar5 + (int)lVar9 & 0xfffffff8;
          if (7 < uVar5) {
            uVar14 = 0;
            do {
              uVar6 = (int)uVar14 + 8;
              *(undefined8 *)(((ulong)(puVar12 + 3) & 0xfffffffffffffff8) + uVar14) =
                   *(undefined8 *)((long)&local_138 + (uVar14 - lVar9));
              uVar14 = (ulong)uVar6;
            } while (uVar6 < uVar5);
          }
        }
      }
      else {
        *puVar12 = (ulong)local_148;
        puVar12[2] = (ulong)local_138;
      }
      puVar12[1] = (ulong)local_180;
      goto LAB_00109e8e;
    }
    uVar15 = *(ulong *)(uVar14 + 0x10);
    puVar11 = *(ulong **)(uVar14 + 8);
    local_148 = (ulong **)glslang::GetThreadPoolAllocator();
    local_130[0] = local_130[0] & 0xffffffffffffff00;
    local_140 = local_130;
    uVar14 = uVar15 + 1;
    local_138 = (ulong *)0x0;
    puVar4 = local_140;
    uVar7 = local_130[0];
    if (uVar14 < 0x10) {
LAB_00109d68:
      local_130[0] = uVar7;
      local_140 = puVar4;
      in_RSI = (ulong *)&_LC459;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                &local_148,"\"",1);
      if ((uVar15 <= 0x7fffffffffffffffU - (long)local_138) &&
         (std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                    &local_148,(char *)puVar11,uVar15), in_RSI = puVar11,
         local_138 != (ulong *)0x7fffffffffffffff)) {
        puVar4 = (ulong *)std::__cxx11::
                          basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
                          _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                                     *)&local_148,"\"",1);
        local_170 = local_160;
        local_178 = *puVar4;
        puVar11 = puVar4 + 3;
        if ((ulong *)puVar4[1] == puVar11) {
          local_168 = puVar4[2];
          uVar14 = local_168 + 1;
          uVar5 = (uint)uVar14;
          if (7 < uVar5) {
            *(undefined8 *)((long)local_160 + ((uVar14 & 0xffffffff) - 8)) =
                 *(undefined8 *)((long)puVar4 + (uVar14 & 0xffffffff) + 0x10);
            if (7 < uVar5 - 1) {
              uVar6 = 0;
              do {
                uVar14 = (ulong)uVar6;
                uVar6 = uVar6 + 8;
                *(undefined8 *)((long)local_170 + uVar14) = *(undefined8 *)((long)puVar11 + uVar14);
              } while (uVar6 < (uVar5 - 1 & 0xfffffff8));
            }
            goto LAB_00109df9;
          }
          if ((uVar14 & 4) == 0) {
            if (uVar5 != 0) {
              local_160[0] = CONCAT71(local_160[0]._1_7_,(char)puVar4[3]);
              if ((uVar14 & 2) == 0) goto LAB_00109df9;
              *(undefined2 *)((long)local_160 + ((uVar14 & 0xffffffff) - 2)) =
                   *(undefined2 *)((long)puVar4 + (uVar14 & 0xffffffff) + 0x16);
              local_168 = puVar4[2];
            }
          }
          else {
            local_160[0] = CONCAT44(local_160[0]._4_4_,(int)puVar4[3]);
            *(undefined4 *)((long)local_160 + ((uVar14 & 0xffffffff) - 4)) =
                 *(undefined4 *)((long)puVar4 + (uVar14 & 0xffffffff) + 0x14);
            local_168 = puVar4[2];
          }
        }
        else {
          local_160[0] = puVar4[3];
          local_170 = (ulong *)puVar4[1];
LAB_00109df9:
          local_168 = puVar4[2];
        }
        puVar4[1] = (ulong)puVar11;
        puVar4[2] = 0;
        *(undefined1 *)(puVar4 + 3) = 0;
        goto LAB_00109e12;
      }
    }
    else {
      if ((long)uVar14 < 0) goto LAB_0010a4ed;
      uVar7 = 0x1e;
      if (0x1d < uVar14) {
        uVar7 = uVar14;
      }
      puVar4 = (ulong *)glslang::TPoolAllocator::allocate((ulong)local_148);
      if (local_138 == (ulong *)0x0) {
        *(char *)puVar4 = (char)*local_140;
      }
      else {
        if ((undefined *)((long)local_138 + 1) == (undefined *)0x0) goto LAB_00109d68;
        puVar4 = (ulong *)memcpy(puVar4,local_140,(size_t)((long)local_138 + 1));
      }
      in_RSI = local_140;
      local_140 = puVar4;
      local_130[0] = uVar7;
      if (local_138 != (ulong *)0x7fffffffffffffff) goto LAB_00109d68;
    }
    pcVar13 = _LC458;
    std::__throw_length_error(_LC458);
  }
  uVar5 = (uint)in_RSI[1];
  uVar14 = (long)(int)uVar5;
  if ((int)uVar5 < 0) {
    uVar14 = -(long)(int)uVar5;
  }
  uVar15 = (ulong)(uVar5 >> 0x1f);
  cVar10 = (char)((int)uVar5 >> 0x1f);
  if (uVar14 < 10) {
    *(ulong **)pcVar13 = (ulong *)((long)pcVar13 + 0x10);
    std::__cxx11::string::_M_construct((ulong)pcVar13,'\x01' - cVar10);
    pcVar13 = (char *)(*puVar12 + uVar15);
LAB_0010a1a6:
    *pcVar13 = (char)uVar14 + '0';
  }
  else {
    if (uVar14 < 100) {
      *(ulong **)pcVar13 = (ulong *)((long)pcVar13 + 0x10);
      std::__cxx11::string::_M_construct((ulong)pcVar13,'\x02' - cVar10);
      local_118 = __LC460;
      uStack_110 = _UNK_0010adb8;
      pcVar13 = (char *)(*puVar12 + uVar15);
      local_108 = __LC461;
      uStack_100 = _UNK_0010adc8;
      local_f8 = __LC462;
      uStack_f0 = _UNK_0010add8;
      local_e8 = __LC463;
      uStack_e0 = _UNK_0010ade8;
      local_d8 = __LC464;
      uStack_d0 = _UNK_0010adf8;
      local_c8 = __LC465;
      uStack_c0 = _UNK_0010ae08;
      local_b8 = __LC466;
      uStack_b0 = _UNK_0010ae18;
      local_a8 = __LC467;
      uStack_a0 = _UNK_0010ae28;
      local_98 = __LC468;
      uStack_90 = _UNK_0010ae38;
      local_88 = __LC469;
      uStack_80 = _UNK_0010ae48;
      local_78 = __LC470;
      uStack_70 = _UNK_0010ae58;
      local_68 = __LC471;
      uStack_60 = (undefined1)_UNK_0010ae68;
      uStack_5f = (undefined7)_LC472._0_8_;
      cStack_58 = SUB81(_LC472._0_8_,7);
      acStack_57[0] = _LC472[8];
      acStack_57[1] = _LC472[9];
      acStack_57[2] = _LC472[10];
      acStack_57[3] = _LC472[0xb];
      acStack_57[4] = _LC472[0xc];
      acStack_57[5] = _LC472[0xd];
      acStack_57[6] = _LC472[0xe];
      acStack_57[7] = _LC472[0xf];
    }
    else {
      if (uVar14 < 1000) {
        uVar5 = 2;
        iVar3 = 3;
LAB_0010a249:
        cVar10 = (char)iVar3 - cVar10;
        *puVar12 = (ulong)(puVar12 + 2);
      }
      else {
        if (uVar14 < 10000) {
          uVar5 = 3;
          iVar3 = 4;
          goto LAB_0010a249;
        }
        iVar3 = 5;
        if (uVar14 < 100000) {
LAB_0010a245:
          uVar5 = iVar3 - 1;
          goto LAB_0010a249;
        }
        if (999999 < uVar14) {
          uVar5 = 6;
          iVar3 = 7;
          if (9999999 < uVar14) {
            if (99999999 < uVar14) {
              if (uVar14 < 1000000000) {
                iVar3 = 9;
                goto LAB_0010a245;
              }
              uVar5 = 9;
              goto LAB_0010a048;
            }
            uVar5 = 7;
            iVar3 = 8;
          }
          goto LAB_0010a249;
        }
        uVar5 = 5;
LAB_0010a048:
        cVar10 = ('\x01' - cVar10) + (char)uVar5;
        *puVar12 = (ulong)(puVar12 + 2);
      }
      std::__cxx11::string::_M_construct((ulong)puVar12,cVar10);
      local_118 = __LC460;
      uStack_110 = _UNK_0010adb8;
      pcVar13 = (char *)(*puVar12 + uVar15);
      local_108 = __LC461;
      uStack_100 = _UNK_0010adc8;
      local_f8 = __LC462;
      uStack_f0 = _UNK_0010add8;
      local_e8 = __LC463;
      uStack_e0 = _UNK_0010ade8;
      local_d8 = __LC464;
      uStack_d0 = _UNK_0010adf8;
      local_c8 = __LC465;
      uStack_c0 = _UNK_0010ae08;
      local_b8 = __LC466;
      uStack_b0 = _UNK_0010ae18;
      local_a8 = __LC467;
      uStack_a0 = _UNK_0010ae28;
      local_98 = __LC468;
      uStack_90 = _UNK_0010ae38;
      local_88 = __LC469;
      uStack_80 = _UNK_0010ae48;
      local_78 = __LC470;
      uStack_70 = _UNK_0010ae58;
      local_68 = __LC471;
      uStack_60 = (undefined1)_UNK_0010ae68;
      uStack_5f = (undefined7)_LC472._0_8_;
      cStack_58 = SUB81(_LC472._0_8_,7);
      acStack_57[0] = _LC472[8];
      acStack_57[1] = _LC472[9];
      acStack_57[2] = _LC472[10];
      acStack_57[3] = _LC472[0xb];
      acStack_57[4] = _LC472[0xc];
      acStack_57[5] = _LC472[0xd];
      acStack_57[6] = _LC472[0xe];
      acStack_57[7] = _LC472[0xf];
      do {
        uVar15 = uVar14;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar15 >> 2;
        uVar14 = (uVar15 >> 2) / 0x19;
        lVar9 = (uVar15 + ((SUB168(auVar2 * ZEXT816(0x28f5c28f5c28f5c3),8) & 0xfffffffffffffffc) +
                          uVar14) * -0x14) * 2;
        cVar10 = *(char *)((long)&local_118 + lVar9);
        pcVar13[uVar5] = *(char *)((long)&local_118 + lVar9 + 1);
        uVar6 = uVar5 - 1;
        uVar5 = uVar5 - 2;
        pcVar13[uVar6] = cVar10;
      } while (9999 < uVar15);
      if (uVar15 < 1000) goto LAB_0010a1a6;
    }
    cVar10 = *(char *)((long)&local_118 + uVar14 * 2);
    pcVar13[1] = *(char *)((long)&local_118 + uVar14 * 2 + 1);
    *pcVar13 = cVar10;
  }
LAB_00109e8e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar12;}
