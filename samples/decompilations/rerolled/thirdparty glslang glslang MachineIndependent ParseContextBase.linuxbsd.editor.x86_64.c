/* glslang::TParseContextBase::parseSwizzleSelector(glslang::TSourceLoc const&,
   std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> > const&,
   int, glslang::TSwizzleSelectors<int>&) */void glslang::TParseContextBase::parseSwizzleSelector(TParseContextBase *this, TSourceLoc *param_1, basic_string *param_2, int param_3, TSwizzleSelectors *param_4) {
   int iVar1;
   ulong uVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   int *piVar6;
   long in_FS_OFFSET;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = *(ulong*)( param_2 + 0x10 );
   if (4 < uVar2) {
      ( **(code**)( *(long*)this + 0x158 ) )(this, param_1, "vector swizzle too long", *(undefined8*)( param_2 + 8 ), &_LC0, *(long*)this, this, param_1);
      uVar2 = *(ulong*)( param_2 + 0x10 );
   }
   piVar6 = local_58;
   iVar1 = (int)uVar2;
   iVar3 = 4;
   if (iVar1 < 5) {
      iVar3 = iVar1;
   }
   lVar4 = 0;
   if (0 < iVar1) {
      do {
         switch (*(undefined1*)( *(long*)( param_2 + 8 ) + lVar4 )) {
            case 0x61:
        iVar1 = *(int *)param_4;
        if (3 < iVar1) goto LAB_00100297;
        *(int *)param_4 = iVar1 + 1;
        *(undefined4 *)(param_4 + (long)iVar1 * 4 + 4) = 3;
        *piVar6 = 1;
        break;
            case 0x62:
        iVar1 = *(int *)param_4;
        if (3 < iVar1) goto LAB_00100297;
        *(int *)param_4 = iVar1 + 1;
        *(undefined4 *)(param_4 + (long)iVar1 * 4 + 4) = 2;
        *piVar6 = 1;
        break;
            default:
        (**(code **)(*(long *)this + 0x158))
                  (this,param_1,"unknown swizzle selection",*(long *)(param_2 + 8),&_LC0,
                   &switchD_001000a9::switchdataD_00106cb0,this,param_1);
        break;
            case 0x67:
        iVar1 = *(int *)param_4;
        if (3 < iVar1) goto LAB_00100297;
        *(int *)param_4 = iVar1 + 1;
        *(undefined4 *)(param_4 + (long)iVar1 * 4 + 4) = 1;
        *piVar6 = 1;
        break;
            case 0x70:
        iVar1 = *(int *)param_4;
        if (3 < iVar1) goto LAB_00100247;
        *(int *)param_4 = iVar1 + 1;
        *(undefined4 *)(param_4 + (long)iVar1 * 4 + 4) = 2;
        *piVar6 = 2;
        break;
            case 0x71:
        iVar1 = *(int *)param_4;
        if (3 < iVar1) goto LAB_00100247;
        *(int *)param_4 = iVar1 + 1;
        *(undefined4 *)(param_4 + (long)iVar1 * 4 + 4) = 3;
        *piVar6 = 2;
        break;
            case 0x72:
        iVar1 = *(int *)param_4;
        if (iVar1 < 4) {
          *(int *)param_4 = iVar1 + 1;
          *(undefined4 *)(param_4 + (long)iVar1 * 4 + 4) = 0;
        }
LAB_00100297:
        *piVar6 = 1;
        break;
            case 0x73:
        iVar1 = *(int *)param_4;
        if (3 < iVar1) goto LAB_00100247;
        *(int *)param_4 = iVar1 + 1;
        *(undefined4 *)(param_4 + (long)iVar1 * 4 + 4) = 0;
        *piVar6 = 2;
        break;
            case 0x74:
        iVar1 = *(int *)param_4;
        if (iVar1 < 4) {
          *(int *)param_4 = iVar1 + 1;
          *(undefined4 *)(param_4 + (long)iVar1 * 4 + 4) = 1;
        }
LAB_00100247:
        *piVar6 = 2;
        break;
            case 0x77:
        iVar1 = *(int *)param_4;
        if (3 < iVar1) goto LAB_001001a7;
        *(int *)param_4 = iVar1 + 1;
        *(undefined4 *)(param_4 + (long)iVar1 * 4 + 4) = 3;
        *piVar6 = 0;
        break;
            case 0x78:
        iVar1 = *(int *)param_4;
        if (3 < iVar1) goto LAB_001001a7;
        *(int *)param_4 = iVar1 + 1;
        *(undefined4 *)(param_4 + (long)iVar1 * 4 + 4) = 0;
        *piVar6 = 0;
        break;
            case 0x79:
        iVar1 = *(int *)param_4;
        if (3 < iVar1) goto LAB_001001a7;
        *(int *)param_4 = iVar1 + 1;
        *(undefined4 *)(param_4 + (long)iVar1 * 4 + 4) = 1;
        *piVar6 = 0;
        break;
            case 0x7a:
        iVar1 = *(int *)param_4;
        if (iVar1 < 4) {
          *(int *)param_4 = iVar1 + 1;
          *(undefined4 *)(param_4 + (long)iVar1 * 4 + 4) = 2;
        }
LAB_001001a7:
        *piVar6 = 0;
         }
         lVar4 = lVar4 + 1;
         piVar6 = piVar6 + 1;
      } while ( (int)lVar4 < iVar3 );
   }
   iVar3 = *(int*)param_4;
   lVar4 = (long)iVar3;
   lVar5 = 0;
   if (iVar3 < 1) {
      LAB_00100156:if (iVar3 == 0) {
         *(undefined8*)param_4 = 1;
      }
   } else {
      do {
         iVar3 = (int)lVar5;
         if (param_3 <= *(int*)( param_4 + lVar5 * 4 + 4 )) {
            ( **(code**)( *(long*)this + 0x158 ) )(this, param_1, "vector swizzle selection out of range", *(undefined8*)( param_2 + 8 ), &_LC0);
            *(int*)param_4 = iVar3;
            goto LAB_00100156;
         }
         if (( lVar5 != 0 ) && ( local_58[lVar5] != *(int*)( &stack0xffffffffffffffa4 + lVar5 * 4 ) )) {
            ( **(code**)( *(long*)this + 0x158 ) )(this, param_1, "vector swizzle selectors not from the same set", *(undefined8*)( param_2 + 8 ), &_LC0);
            *(int*)param_4 = iVar3;
            break;
         }
         lVar5 = lVar5 + 1;
      } while ( lVar4 != lVar5 );
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* glslang::TParseContextBase::ppWarn(glslang::TSourceLoc const&, char const*, char const*, char
   const*, ...) */void glslang::TParseContextBase::ppWarn(TSourceLoc *param_1, char *param_2, char *param_3, char *param_4, ...) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *(long*)param_1 + 0x250 ) )();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* glslang::TParseContextBase::error(glslang::TSourceLoc const&, char const*, char const*, char
   const*, ...) */void glslang::TParseContextBase::error(TSourceLoc *param_1, char *param_2, char *param_3, char *param_4, ...) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( *(uint*)( param_1 + 0xd0 ) & 0x20 ) == 0 ) && ( ( ( ( *(uint*)( param_1 + 0xd0 ) & 0x8000 ) == 0 || ( *(int*)( param_1 + 0xd4 ) < 1 ) ) && ( ( **(code**)( *(long*)param_1 + 0x250 ) )(param_1),( (byte)param_1[0xd0] & 0x80 ) == 0 ) ) )) {
      lVar2 = *(long*)( param_1 + 0xd8 );
      *(undefined1*)( lVar2 + 0x59 ) = 1;
      *(undefined4*)( lVar2 + 0x20 ) = *(undefined4*)( lVar2 + 8 );
   }
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* glslang::TParseContextBase::ppError(glslang::TSourceLoc const&, char const*, char const*, char
   const*, ...) */void glslang::TParseContextBase::ppError(TSourceLoc *param_1, char *param_2, char *param_3, char *param_4, ...) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *(long*)param_1 + 0x250 ) )(param_1);
   if (( (byte)param_1[0xd0] & 0x80 ) == 0) {
      lVar2 = *(long*)( param_1 + 0xd8 );
      *(undefined1*)( lVar2 + 0x59 ) = 1;
      *(undefined4*)( lVar2 + 0x20 ) = *(undefined4*)( lVar2 + 8 );
   }
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* glslang::TParseContextBase::warn(glslang::TSourceLoc const&, char const*, char const*, char
   const*, ...) */void glslang::TParseContextBase::warn(TSourceLoc *param_1, char *param_2, char *param_3, char *param_4, ...) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( (byte)param_1[0xd0] & 2 ) == 0) {
      ( **(code**)( *(long*)param_1 + 0x250 ) )();
   }
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, glslang::pool_allocator<std::pair<int const, int> >
   >::_M_get_insert_unique_pos(int const&) [clone .isra.0] */undefined1[16];std::_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,int>>>::_M_get_insert_unique_pos (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,int>>>
           *this,int *param_1) {
   undefined1 auVar1[16];
   _Rb_tree_node_base *p_Var2;
   _Rb_tree_node_base *p_Var3;
   _Rb_tree_node_base *p_Var4;
   int iVar5;
   int iVar6;
   undefined1 auVar7[16];
   iVar6 = (int)param_1;
   p_Var2 = *(_Rb_tree_node_base**)( this + 0x18 );
   if (*(_Rb_tree_node_base**)( this + 0x18 ) == (_Rb_tree_node_base*)0x0) {
      p_Var2 = (_Rb_tree_node_base*)( this + 0x10 );
   } else {
      do {
         p_Var4 = p_Var2;
         iVar5 = *(int*)( p_Var4 + 0x20 );
         p_Var2 = *(_Rb_tree_node_base**)( p_Var4 + 0x18 );
         if (iVar6 < iVar5) {
            p_Var2 = *(_Rb_tree_node_base**)( p_Var4 + 0x10 );
         }
      } while ( p_Var2 != (_Rb_tree_node_base*)0x0 );
      p_Var2 = p_Var4;
      if (iVar5 <= iVar6) goto LAB_00100758;
   }
   if (*(_Rb_tree_node_base**)( this + 0x20 ) == p_Var2) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = p_Var2;
      return auVar1 << 0x40;
   }
   p_Var4 = (_Rb_tree_node_base*)std::_Rb_tree_decrement(p_Var2);
   iVar5 = *(int*)( p_Var4 + 0x20 );
   LAB_00100758:p_Var3 = (_Rb_tree_node_base*)0x0;
   if (iVar5 < iVar6) {
      p_Var4 = p_Var3;
      p_Var3 = p_Var2;
   }
   auVar7._8_8_ = p_Var3;
   auVar7._0_8_ = p_Var4;
   return auVar7;
}/* std::_Rb_tree<int, std::pair<int const, glslang::TVariable*>, std::_Select1st<std::pair<int
   const, glslang::TVariable*> >, std::less<int>, glslang::pool_allocator<std::pair<int const,
   glslang::TVariable*> > >::_M_get_insert_unique_pos(int const&) [clone .isra.0] */undefined1[16];std::_Rb_tree<int,std::pair<int_const,glslang::TVariable*>,std::_Select1st<std::pair<int_const,glslang::TVariable*>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVariable*>>>::_M_get_insert_unique_pos (_Rb_tree<int,std::pair<int_const,glslang::TVariable*>,std::_Select1st<std::pair<int_const,glslang::TVariable*>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVariable*>>>
           *this,int *param_1) {
   undefined1 auVar1[16];
   _Rb_tree_node_base *p_Var2;
   _Rb_tree_node_base *p_Var3;
   _Rb_tree_node_base *p_Var4;
   int iVar5;
   int iVar6;
   undefined1 auVar7[16];
   iVar6 = (int)param_1;
   p_Var2 = *(_Rb_tree_node_base**)( this + 0x18 );
   if (*(_Rb_tree_node_base**)( this + 0x18 ) == (_Rb_tree_node_base*)0x0) {
      p_Var2 = (_Rb_tree_node_base*)( this + 0x10 );
   } else {
      do {
         p_Var4 = p_Var2;
         iVar5 = *(int*)( p_Var4 + 0x20 );
         p_Var2 = *(_Rb_tree_node_base**)( p_Var4 + 0x18 );
         if (iVar6 < iVar5) {
            p_Var2 = *(_Rb_tree_node_base**)( p_Var4 + 0x10 );
         }
      } while ( p_Var2 != (_Rb_tree_node_base*)0x0 );
      p_Var2 = p_Var4;
      if (iVar5 <= iVar6) goto LAB_001007e8;
   }
   if (*(_Rb_tree_node_base**)( this + 0x20 ) == p_Var2) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = p_Var2;
      return auVar1 << 0x40;
   }
   p_Var4 = (_Rb_tree_node_base*)std::_Rb_tree_decrement(p_Var2);
   iVar5 = *(int*)( p_Var4 + 0x20 );
   LAB_001007e8:p_Var3 = (_Rb_tree_node_base*)0x0;
   if (iVar5 < iVar6) {
      p_Var4 = p_Var3;
      p_Var3 = p_Var2;
   }
   auVar7._8_8_ = p_Var3;
   auVar7._0_8_ = p_Var4;
   return auVar7;
}/* glslang::TParseContextBase::trackLinkage(glslang::TSymbol&) [clone .part.0] */void glslang::TParseContextBase::trackLinkage(TParseContextBase *this, TSymbol *param_1) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   ulong uVar3;
   long lVar4;
   long lVar5;
   ulong uVar6;
   long lVar7;
   undefined8 *puVar8;
   puVar1 = *(undefined8**)( this + 0x1d8 );
   if (puVar1 != *(undefined8**)( this + 0x1e0 )) {
      *puVar1 = param_1;
      *(undefined8**)( this + 0x1d8 ) = puVar1 + 1;
      return;
   }
   puVar2 = *(undefined8**)( this + 0x1d0 );
   puVar8 = (undefined8*)( (long)puVar1 - (long)puVar2 );
   uVar3 = (long)puVar8 >> 3;
   if (uVar3 == 0xfffffffffffffff) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }
   if (puVar1 == puVar2) {
      uVar6 = uVar3 + 1;
      if (0xfffffffffffffffe < uVar3) goto LAB_00100968;
      if (0xfffffffffffffff < uVar6) {
         uVar6 = 0xfffffffffffffff;
      }
      lVar7 = uVar6 * 8;
      LAB_0010093f:lVar4 = glslang::TPoolAllocator::allocate(*(ulong*)( this + 0x1c8 ));
      *(TSymbol**)( lVar4 + (long)puVar8 ) = param_1;
      lVar7 = lVar4 + lVar7;
      lVar5 = lVar4 + 8;
      if (puVar1 == puVar2) goto LAB_001008f7;
   } else {
      uVar6 = uVar3 * 2;
      if (uVar6 < uVar3) {
         LAB_00100968:lVar7 = 0x7ffffffffffffff8;
         goto LAB_0010093f;
      }
      if (uVar6 != 0) {
         if (0xfffffffffffffff < uVar6) {
            uVar6 = 0xfffffffffffffff;
         }
         lVar7 = uVar6 * 8;
         goto LAB_0010093f;
      }
      *puVar8 = param_1;
      lVar4 = 0;
      lVar7 = 0;
   }
   lVar5 = 0;
   do {
      *(undefined8*)( lVar4 + lVar5 ) = *(undefined8*)( (long)puVar2 + lVar5 );
      lVar5 = lVar5 + 8;
   } while ( lVar5 != (long)puVar1 - (long)puVar2 );
   lVar5 = lVar4 + 8 + lVar5;
   LAB_001008f7:*(long*)( this + 0x1d0 ) = lVar4;
   *(long*)( this + 0x1d8 ) = lVar5;
   *(long*)( this + 0x1e0 ) = lVar7;
   return;
}/* glslang::TParseContextBase::trackLinkage(glslang::TSymbol&) */void glslang::TParseContextBase::trackLinkage(TParseContextBase *this, TSymbol *param_1) {
   if (this[0x1c1] != (TParseContextBase)0x0) {
      return;
   }
   trackLinkage(this, param_1);
   return;
}/* glslang::TParseContextBase::rValueErrorCheck(glslang::TSourceLoc const&, char const*,
   glslang::TIntermTyped*) */void glslang::TParseContextBase::rValueErrorCheck(TParseContextBase *this, TSourceLoc *param_1, char *param_2, TIntermTyped *param_3) {
   uint uVar1;
   code *UNRECOVERED_JUMPTABLE;
   ulong uVar2;
   code *pcVar3;
   int iVar4;
   long *plVar5;
   long *plVar6;
   long *plVar7;
   TIntermTyped *pTVar8;
   long lVar9;
   size_t __n;
   long in_FS_OFFSET;
   undefined1 local_68[16];
   code *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 != (TIntermTyped*)0x0) {
      plVar5 = (long*)( **(code**)( *(long*)param_3 + 0x40 ) )(param_3);
      plVar6 = (long*)( **(code**)( *(long*)param_3 + 0x60 ) )(param_3);
      if (*(code**)( *(long*)param_3 + 0x108 ) == TIntermTyped::getQualifier) {
         pTVar8 = param_3 + 0x30;
      } else {
         pTVar8 = (TIntermTyped*)( **(code**)( *(long*)param_3 + 0x108 ) )(param_3);
      }
      if (( (byte)pTVar8[0xe] & 1 ) != 0) {
         local_58 = (code*)0x0;
         local_50 = 0;
         local_68 = (undefined1[16])0x0;
         plVar7 = (long*)glslang::TIntermediate::traverseLValueBase(param_3, 1, 0);
         if (local_58 != (code*)0x0) {
            ( *local_58 )(local_68, local_68, 3);
         }
         if (plVar6 != (long*)0x0) {
            UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x158 );
            if (*(code**)( *plVar6 + 400 ) == TIntermSymbol::getName_abi_cxx11_) {
               plVar6 = plVar6 + 0x19;
            } else {
               plVar6 = (long*)( **(code**)( *plVar6 + 400 ) )(plVar6);
            }
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00100ba5. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(this, param_1, "can\'t read from writeonly object: ", param_2, plVar6[1]);
               return;
            }
            goto LAB_00100dbd;
         }
         if (plVar5 == (long*)0x0) {
            LAB_00100be5:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00100c2b. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( **(code**)( *(long*)this + 0x158 ) )(this, param_1, "can\'t read from writeonly object: ", param_2, &_LC0, *(code**)( *(long*)this + 0x158 ));
               return;
            }
         } else {
            if (*(code**)( *plVar5 + 0x20 ) == TIntermOperator::getAsOperator) {
               iVar4 = (int)plVar5[0x17];
               if (iVar4 != 0xb8) {
                  LAB_00100bda:if (iVar4 != 0xb6) goto LAB_00100be5;
               }
            } else {
               lVar9 = ( **(code**)( *plVar5 + 0x20 ) )(plVar5);
               if (*(int*)( lVar9 + 0xb8 ) != 0xb8) {
                  if (*(code**)( *plVar5 + 0x20 ) == TIntermOperator::getAsOperator) {
                     iVar4 = (int)plVar5[0x17];
                  } else {
                     lVar9 = ( **(code**)( *plVar5 + 0x20 ) )(plVar5);
                     iVar4 = *(int*)( lVar9 + 0xb8 );
                  }
                  goto LAB_00100bda;
               }
            }
            plVar6 = (long*)( **(code**)( *plVar7 + 0xc0 ) )(plVar7);
            plVar5 = plVar6 + 0x19;
            if (*(code**)( *plVar6 + 400 ) != TIntermSymbol::getName_abi_cxx11_) {
               plVar5 = (long*)( **(code**)( *plVar6 + 400 ) )();
            }
            uVar2 = plVar5[2];
            UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x158 );
            pcVar3 = *(code**)( *plVar7 + 0xc0 );
            if (uVar2 != 0) {
               __n = 5;
               if (uVar2 < 6) {
                  __n = uVar2;
               }
               iVar4 = memcmp((void*)plVar5[1], "anon@", __n);
               if (iVar4 == 0 && (int)__n == 5) {
                  plVar5 = (long*)( *pcVar3 )(plVar7);
                  lVar9 = ( **(code**)( *plVar5 + 0x198 ) )(plVar5);
                  if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00100dbd;
                  lVar9 = *(long*)( lVar9 + 8 );
                  goto LAB_00100d24;
               }
            }
            plVar5 = (long*)( *pcVar3 )(plVar7);
            if (*(code**)( *plVar5 + 400 ) == TIntermSymbol::getName_abi_cxx11_) {
               plVar5 = plVar5 + 0x19;
            } else {
               plVar5 = (long*)( **(code**)( *plVar5 + 400 ) )();
            }
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               lVar9 = plVar5[1];
               LAB_00100d24:/* WARNING: Could not recover jumptable at 0x00100d47. Too many branches *//* WARNING: Treating indirect jump as call */( *UNRECOVERED_JUMPTABLE )(this, param_1, "can\'t read from writeonly object: ", param_2, lVar9);
               return;
            }
         }
         goto LAB_00100dbd;
      }
      if (plVar5 != (long*)0x0) {
         uVar1 = *(uint*)( plVar5 + 0x17 );
         if (uVar1 < 0xba) {
            if (uVar1 < 0xb6) goto LAB_00100ac0;
         } else if (uVar1 != 0x341) goto LAB_00100ac0;
         UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x208 );
         if (*(code**)( *plVar5 + 400 ) == TIntermBinary::getLeft) {
            lVar9 = plVar5[0x18];
         } else {
            lVar9 = ( **(code**)( *plVar5 + 400 ) )(plVar5);
         }
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00100aaf. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )(this, param_1, param_2, lVar9);
            return;
         }
         goto LAB_00100dbd;
      }
   }
   LAB_00100ac0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_00100dbd:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* void std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
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
   } else {
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
}/* glslang::TParseContextBase::getEditableVariable(char const*) */long *__thiscallglslang::TParseContextBase::getEditableVariable(TParseContextBase *this, char *param_1) {
   long *plVar1;
   long lVar2;
   ulong uVar3;
   long *plVar4;
   undefined1 *__s2;
   int iVar5;
   uint uVar6;
   size_t sVar7;
   ulong uVar8;
   long *plVar9;
   long lVar10;
   long *plVar11;
   int iVar12;
   long lVar13;
   long in_FS_OFFSET;
   bool bVar14;
   long *local_70;
   undefined8 local_68;
   undefined1 *local_60;
   ulong local_58;
   undefined1 local_50[16];
   long local_40;
   plVar1 = *(long**)( this + 0xe8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = glslang::GetThreadPoolAllocator();
   local_60 = local_50;
   if (param_1 == (char*)0x0) {
      /* WARNING: Subroutine does not return */
      std::__throw_logic_error("basic_string: construction from null is not valid");
   }
   sVar7 = strlen(param_1);
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_68, param_1, param_1 + sVar7);
   __s2 = local_60;
   lVar2 = *plVar1;
   lVar13 = (long)( (int)( plVar1[1] - lVar2 >> 3 ) + -1 );
   do {
      iVar12 = (int)lVar13;
      lVar10 = *(long*)( lVar2 + lVar13 * 8 );
      plVar9 = *(long**)( lVar10 + 0x18 );
      plVar1 = (long*)( lVar10 + 0x10 );
      plVar11 = plVar1;
      if (plVar9 == (long*)0x0) {
         plVar9 = (long*)0x0;
         LAB_00100fea:bVar14 = true;
         if (-1 < -iVar12) break;
      } else {
         do {
            while (true) {
               uVar3 = plVar9[6];
               uVar8 = local_58;
               if (uVar3 <= local_58) {
                  uVar8 = uVar3;
               }
               if (( uVar8 != 0 ) && ( iVar5 = iVar5 != 0 )) break;
               lVar10 = uVar3 - local_58;
               if (lVar10 < 0x80000000) {
                  if (-0x80000001 < lVar10) {
                     iVar5 = (int)lVar10;
                     break;
                  }
                  goto LAB_00100f38;
               }
               LAB_00100f89:plVar4 = (long*)plVar9[2];
               plVar11 = plVar9;
               plVar9 = plVar4;
               if (plVar4 == (long*)0x0) goto LAB_00100f96;
            };
            if (-1 < iVar5) goto LAB_00100f89;
            LAB_00100f38:plVar9 = (long*)plVar9[3];
         } while ( plVar9 != (long*)0x0 );
         LAB_00100f96:if (plVar1 == plVar11) goto LAB_00100fea;
         uVar3 = plVar11[6];
         uVar8 = local_58;
         if (uVar3 <= local_58) {
            uVar8 = uVar3;
         }
         if (uVar8 == 0) {
            LAB_00100fc7:uVar8 = local_58 - uVar3;
            if ((long)uVar8 < 0x80000000) {
               if ((long)uVar8 < -0x80000000) goto LAB_00100fea;
               goto LAB_00100fe1;
            }
         } else {
            uVar6 = memcmp(__s2, (void*)plVar11[5], uVar8);
            uVar8 = (ulong)uVar6;
            if (uVar6 == 0) goto LAB_00100fc7;
            LAB_00100fe1:if ((int)uVar8 < 0) goto LAB_00100fea;
         }
         plVar9 = (long*)plVar11[9];
         bVar14 = plVar9 == (long*)0x0;
         if (iVar12 < 1) break;
      }
      lVar13 = lVar13 + -1;
   } while ( bVar14 );
   local_70 = plVar9;
   if (plVar9 != (long*)0x0) {
      if (iVar12 < 3) {
         ( **(code**)( *(long*)this + 0x260 ) )(this, &local_70, -iVar12);
      }
      plVar9 = (long*)( **(code**)( *local_70 + 0x48 ) )(local_70);
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return plVar9;
}/* glslang::TParseContextBase::lValueErrorCheck(glslang::TSourceLoc const&, char const*,
   glslang::TIntermTyped*) */undefined8 glslang::TParseContextBase::lValueErrorCheck(TParseContextBase *this, TSourceLoc *param_1, char *param_2, TIntermTyped *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   ulong uVar1;
   code *pcVar2;
   char cVar3;
   uint uVar4;
   int iVar5;
   long *plVar6;
   long *plVar7;
   undefined8 uVar8;
   TIntermTyped *pTVar9;
   long *plVar10;
   long lVar11;
   long lVar12;
   size_t __n;
   undefined *puVar13;
   long in_FS_OFFSET;
   char *local_78;
   undefined1 local_68[16];
   code *local_58;
   undefined8 local_50;
   long local_40;
   lVar12 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar6 = (long*)( **(code**)( *(long*)param_3 + 0x40 ) )(param_3);
   plVar7 = (long*)( **(code**)( *(long*)param_3 + 0x60 ) )(param_3);
   if (plVar7 != (long*)0x0) {
      if (*(code**)( *plVar7 + 400 ) == TIntermSymbol::getName_abi_cxx11_) {
         plVar10 = plVar7 + 0x19;
      } else {
         plVar10 = (long*)( **(code**)( *plVar7 + 400 ) )(plVar7);
      }
      lVar12 = plVar10[1];
   }
   if (*(code**)( *(long*)param_3 + 0x108 ) == TIntermTyped::getQualifier) {
      pTVar9 = param_3 + 0x30;
   } else {
      pTVar9 = (TIntermTyped*)( **(code**)( *(long*)param_3 + 0x108 ) )(param_3);
   }
   switch ((byte)pTVar9[8] & 0x7f) {
      default:
    if (*(code **)(*(long *)param_3 + 0x100) == TIntermTyped::getBasicType) {
      uVar4 = (uint)(byte)param_3[0x28];
    }
    else {
      uVar4 = (**(code **)(*(long *)param_3 + 0x100))(param_3);
    }
    switch(uVar4) {
    case 0:
      local_78 = "can\'t modify void";
      break;
    default:
switchD_00101182_caseD_1:
      if (plVar6 == (long *)0x0) {
LAB_001012dd:
        if (plVar7 != (long *)0x0) goto LAB_001012e2;
        lVar12 = *(long *)this;
      }
      else {
LAB_00101353:
        uVar4 = *(uint *)(plVar6 + 0x17);
        lVar12 = *(long *)this;
        if (uVar4 < 0xba) {
          if (0xb5 < uVar4) {
LAB_0010136a:
            UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x200);
            if (*(code **)(*plVar6 + 400) == TIntermBinary::getLeft) {
              lVar12 = plVar6[0x18];
            }
            else {
              lVar12 = (**(code **)(*plVar6 + 400))(plVar6);
            }
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001013c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar8 = (*UNRECOVERED_JUMPTABLE)(this,param_1,param_2,lVar12);
              return uVar8;
            }
            goto LAB_00101655;
          }
        }
        else if (uVar4 == 0x341) goto LAB_0010136a;
      }
      local_78 = "";
      puVar13 = &_LC0;
      goto LAB_001012fd;
    case 0xd:
      local_78 = "can\'t modify an atomic_uint";
      break;
    case 0xe:
      cVar3 = (**(code **)(*(long *)this + 0x40))(this,"GL_ARB_bindless_texture");
      if (cVar3 != '\0') goto switchD_00101182_caseD_1;
      local_78 = "can\'t modify a sampler";
      break;
    case 0x11:
      local_78 = "can\'t modify accelerationStructureNV";
      break;
    case 0x13:
      local_78 = "can\'t modify rayQueryEXT";
      break;
    case 0x14:
      local_78 = "can\'t modify hitObjectNV";
    }
    break;
      case 2:
      case 0x13:
    local_78 = "can\'t modify a const";
    break;
      case 5:
    local_78 = "can\'t modify a uniform";
    break;
      case 6:
    if (*(code **)(*(long *)param_3 + 0x108) == TIntermTyped::getQualifier) {
      if ((char)param_3[0x3d] < '\0') {
        if (param_3[0x68] == (TIntermTyped)0x0) {
          local_78 = "can\'t modify a readonly buffer";
          break;
        }
      }
      else if (param_3[0x68] == (TIntermTyped)0x0) goto switchD_00101182_caseD_1;
LAB_00101482:
      local_78 = "can\'t modify a shaderrecordnv qualified buffer";
      break;
    }
    lVar11 = (**(code **)(*(long *)param_3 + 0x108))(param_3);
    if (*(char *)(lVar11 + 0xd) < '\0') {
      local_78 = "can\'t modify a readonly buffer";
    }
    else {
      local_78 = (char *)0x0;
    }
    if (*(code **)(*(long *)param_3 + 0x108) == TIntermTyped::getQualifier) {
      pTVar9 = param_3 + 0x30;
    }
    else {
      pTVar9 = (TIntermTyped *)(**(code **)(*(long *)param_3 + 0x108))(param_3);
    }
    if (pTVar9[0x38] != (TIntermTyped)0x0) goto LAB_00101482;
    if (local_78 == (char *)0x0 && plVar6 == (long *)0x0) goto LAB_001012dd;
    if (local_78 != (char *)0x0) break;
    if (plVar6 != (long *)0x0) goto LAB_00101353;
LAB_001012e2:
    uVar8 = 0;
    goto LAB_00101231;
      case 0xb:
    local_78 = "cannot modify hitAttributeNV in this stage";
    if (*(int *)(this + 0x1c) == 7) goto switchD_00101182_caseD_1;
   }
   local_58 = (code*)0x0;
   local_50 = 0;
   local_68 = (undefined1[16])0x0;
   plVar10 = (long*)glslang::TIntermediate::traverseLValueBase(param_3, 1, 0);
   if (local_58 != (code*)0x0) {
      ( *local_58 )(local_68, local_68, 3);
   }
   if (plVar7 == (long*)0x0) {
      if (plVar6 != (long*)0x0) {
         if (*(code**)( *plVar6 + 0x20 ) != TIntermOperator::getAsOperator) {
            plVar6 = (long*)( **(code**)( *plVar6 + 0x20 ) )(plVar6);
         }
         if ((int)plVar6[0x17] == 0xb8) {
            plVar6 = (long*)( **(code**)( *plVar10 + 0xc0 ) )(plVar10);
            if (*(code**)( *plVar6 + 400 ) == TIntermSymbol::getName_abi_cxx11_) {
               plVar6 = plVar6 + 0x19;
            } else {
               plVar6 = (long*)( **(code**)( *plVar6 + 400 ) )(plVar6);
            }
            uVar1 = plVar6[2];
            UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x158 );
            pcVar2 = *(code**)( *plVar10 + 0xc0 );
            if (uVar1 == 0) {
               LAB_00101577:plVar6 = (long*)( *pcVar2 )(plVar10);
               if (*(code**)( *plVar6 + 400 ) == TIntermSymbol::getName_abi_cxx11_) {
                  plVar6 = plVar6 + 0x19;
               } else {
                  plVar6 = (long*)( **(code**)( *plVar6 + 400 ) )();
               }
               lVar12 = plVar6[1];
            } else {
               __n = 5;
               if (uVar1 < 6) {
                  __n = uVar1;
               }
               iVar5 = memcmp((void*)plVar6[1], "anon@", __n);
               if (iVar5 != 0 || (int)__n != 5) goto LAB_00101577;
               plVar6 = (long*)( *pcVar2 )(plVar10);
               lVar12 = ( **(code**)( *plVar6 + 0x198 ) )(plVar6);
               lVar12 = *(long*)( lVar12 + 8 );
            }
            ( *UNRECOVERED_JUMPTABLE )(this, param_1, " l-value required", param_2, "\"%s\" (%s)", lVar12, local_78);
            goto LAB_0010122c;
         }
      }
      lVar12 = *(long*)this;
      puVar13 = &_LC25;
      LAB_001012fd:( **(code**)( lVar12 + 0x158 ) )(this, param_1, " l-value required", param_2, puVar13, local_78);
   } else {
      ( **(code**)( *(long*)this + 0x158 ) )(this, param_1, " l-value required", param_2, "\"%s\" (%s)", lVar12, local_78);
   }
   LAB_0010122c:uVar8 = 1;
   LAB_00101231:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar8;
   }
   LAB_00101655:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* glslang::TParseContextBase::selectFunction(glslang::TVector<glslang::TFunction const*>,
   glslang::TFunction const&, std::function<bool (glslang::TType const&, glslang::TType const&,
   glslang::TOperator, int)>, std::function<bool (glslang::TType const&, glslang::TType const&,
   glslang::TType const&)>, bool&) */long *__thiscallglslang::TParseContextBase::selectFunction(undefined8 param_1, long param_2, long *param_3, long *param_4, long *param_5, undefined1 *param_6) {
   undefined8 uVar1;
   long *plVar2;
   long *plVar3;
   char cVar4;
   undefined4 uVar5;
   int iVar6;
   ulong uVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   long *plVar11;
   ulong uVar12;
   undefined8 *puVar13;
   undefined8 *puVar14;
   undefined8 *extraout_RDX;
   long *plVar15;
   int iVar16;
   code *pcVar17;
   ulong uVar18;
   int iVar19;
   long in_FS_OFFSET;
   long local_a8;
   undefined8 *local_98;
   long *local_88;
   undefined8 *local_78;
   undefined8 *local_70;
   undefined4 local_50;
   int local_4c;
   undefined4 local_48;
   int local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_6 = 0;
   uVar7 = glslang::GetThreadPoolAllocator();
   puVar14 = *(undefined8**)( param_2 + 8 );
   if (puVar14 == *(undefined8**)( param_2 + 0x10 )) {
      LAB_00102364:local_88 = (long*)0x0;
      LAB_00101e52:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return local_88;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   local_70 = (undefined8*)0x0;
   local_98 = (undefined8*)0x0;
   local_78 = (undefined8*)0x0;
   local_a8 = param_2;
   LAB_0010170b:plVar15 = (long*)*puVar14;
   if (*(code**)( *param_3 + 0x120 ) == TFunction::getParamCount) {
      iVar19 = (int)( param_3[7] - param_3[6] >> 3 ) * -0x55555555;
   } else {
      iVar19 = ( **(code**)( *param_3 + 0x120 ) )(param_3);
   }
   lVar10 = *plVar15;
   if (*(code**)( lVar10 + 0x130 ) == TFunction::getFixedParamCount) {
      if (*(code**)( lVar10 + 0x120 ) == TFunction::getParamCount) {
         iVar16 = (int)( plVar15[7] - plVar15[6] >> 3 ) * -0x55555555;
      } else {
         iVar16 = ( **(code**)( lVar10 + 0x120 ) )();
         lVar10 = *plVar15;
      }
      if (*(code**)( lVar10 + 0x128 ) == TFunction::getDefaultParamCount) {
         iVar6 = (int)plVar15[0x23];
      } else {
         iVar6 = ( **(code**)( lVar10 + 0x128 ) )();
      }
      iVar16 = iVar16 - iVar6;
   } else {
      iVar16 = ( **(code**)( lVar10 + 0x130 ) )();
   }
   if (iVar19 < iVar16) goto LAB_001016f8;
   if (*(code**)( *param_3 + 0x120 ) == TFunction::getParamCount) {
      iVar19 = (int)( param_3[7] - param_3[6] >> 3 ) * -0x55555555;
   } else {
      iVar19 = ( **(code**)( *param_3 + 0x120 ) )(param_3);
   }
   if (*(code**)( *plVar15 + 0x120 ) == TFunction::getParamCount) {
      iVar16 = (int)( plVar15[7] - plVar15[6] >> 3 ) * -0x55555555;
      if (iVar16 < iVar19) goto LAB_001016f8;
   } else {
      iVar16 = ( **(code**)( *plVar15 + 0x120 ) )();
      if (iVar16 < iVar19) goto LAB_001016f8;
      if (*(code**)( *plVar15 + 0x120 ) == TFunction::getParamCount) {
         iVar16 = (int)( plVar15[7] - plVar15[6] >> 3 ) * -0x55555555;
      } else {
         iVar16 = ( **(code**)( *plVar15 + 0x120 ) )();
      }
   }
   if (*(code**)( *param_3 + 0x120 ) == TFunction::getParamCount) {
      iVar19 = (int)( param_3[7] - param_3[6] >> 3 ) * -0x55555555;
   } else {
      iVar19 = ( **(code**)( *param_3 + 0x120 ) )();
   }
   if (iVar16 <= iVar19) {
      iVar19 = iVar16;
   }
   lVar10 = 0;
   iVar16 = 0;
   if (0 < iVar19) {
      do {
         if (*(code**)( *plVar15 + 0x140 ) == TFunction::operator []) {
            lVar8 = plVar15[6] + lVar10;
         } else {
            lVar8 = ( **(code**)( *plVar15 + 0x140 ) )(plVar15, iVar16);
         }
         pcVar17 = *(code**)( **(long**)( lVar8 + 8 ) + 0x50 );
         if (pcVar17 == TType::getQualifier) {
            plVar11 = *(long**)( lVar8 + 8 ) + 2;
         } else {
            plVar11 = (long*)( *pcVar17 )();
         }
         lVar8 = *plVar15;
         if (( ( *(byte*)( plVar11 + 1 ) & 0x7f ) == 0x10 ) || ( ( ( *(byte*)( plVar11 + 1 ) & 0x7f ) + 0x6e & 0x7f ) < 2 )) {
            if (*(code**)( lVar8 + 0xd8 ) == TFunction::getBuiltInOp) {
               uVar5 = (undefined4)plVar15[0x22];
            } else {
               uVar5 = ( **(code**)( lVar8 + 0xd8 ) )(plVar15);
               lVar8 = *plVar15;
            }
            if (*(code**)( lVar8 + 0x140 ) == TFunction::operator []) {
               lVar8 = plVar15[6] + lVar10;
            } else {
               lVar8 = ( **(code**)( lVar8 + 0x140 ) )(plVar15, iVar16);
            }
            uVar1 = *(undefined8*)( lVar8 + 8 );
            if (*(code**)( *param_3 + 0x140 ) == TFunction::operator []) {
               lVar8 = param_3[6] + lVar10;
            } else {
               lVar8 = ( **(code**)( *param_3 + 0x140 ) )(param_3, iVar16);
            }
            uVar18 = *(ulong*)( lVar8 + 8 );
            local_50 = uVar5;
            local_4c = iVar16;
            if (param_4[2] == 0) goto LAB_001023fd;
            cVar4 = ( *(code*)param_4[3] )(param_4, uVar18, uVar1, &local_50);
            if (cVar4 != '\0') {
               lVar8 = *plVar15;
               goto LAB_00101969;
            }
            LAB_00101a41:puVar14 = puVar14 + 1;
            plVar11 = param_3;
            if (*(undefined8**)( local_a8 + 0x10 ) == puVar14) goto LAB_00101a60;
            goto LAB_0010170b;
         }
         LAB_00101969:if (*(code**)( lVar8 + 0x140 ) == TFunction::operator []) {
            lVar8 = plVar15[6] + lVar10;
         } else {
            lVar8 = ( **(code**)( lVar8 + 0x140 ) )(plVar15, iVar16);
         }
         pcVar17 = *(code**)( **(long**)( lVar8 + 8 ) + 0x50 );
         if (pcVar17 == TType::getQualifier) {
            plVar11 = *(long**)( lVar8 + 8 ) + 2;
         } else {
            plVar11 = (long*)( *pcVar17 )();
         }
         if (( *(byte*)( plVar11 + 1 ) & 0x7f ) - 0x11 < 2) {
            if (*(code**)( *plVar15 + 0xd8 ) == TFunction::getBuiltInOp) {
               uVar5 = (undefined4)plVar15[0x22];
               pcVar17 = *(code**)( *param_3 + 0x140 );
               if (pcVar17 == TFunction::operator []) goto LAB_001019e6;
               LAB_00101f2b:lVar8 = ( *pcVar17 )(param_3, iVar16);
            } else {
               uVar5 = ( **(code**)( *plVar15 + 0xd8 ) )(plVar15);
               pcVar17 = *(code**)( *param_3 + 0x140 );
               if (pcVar17 != TFunction::operator []) goto LAB_00101f2b;
               LAB_001019e6:lVar8 = param_3[6] + lVar10;
            }
            uVar1 = *(undefined8*)( lVar8 + 8 );
            if (*(code**)( *plVar15 + 0x140 ) == TFunction::operator []) {
               lVar8 = plVar15[6] + lVar10;
            } else {
               lVar8 = ( **(code**)( *plVar15 + 0x140 ) )(plVar15, iVar16);
            }
            uVar18 = *(ulong*)( lVar8 + 8 );
            local_48 = uVar5;
            local_44 = iVar16;
            if (param_4[2] == 0) goto LAB_001023fd;
            cVar4 = ( *(code*)param_4[3] )(param_4, uVar18, uVar1, &local_48);
            if (cVar4 == '\0') goto LAB_00101a41;
         }
         iVar16 = iVar16 + 1;
         lVar10 = lVar10 + 0x18;
      } while ( iVar16 != iVar19 );
   }
   if (local_70 != local_98) {
      *local_98 = plVar15;
      local_98 = local_98 + 1;
      goto LAB_001016f8;
   }
   pcVar17 = (code*)( (long)local_70 - (long)local_78 );
   uVar18 = (long)pcVar17 >> 3;
   if (uVar18 == 0xfffffffffffffff) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }
   if (local_98 == local_78) goto LAB_00102402;
   uVar12 = uVar18 * 2;
   if (uVar12 < uVar18) goto LAB_0010246e;
   if (uVar12 != 0) goto LAB_0010240b;
   *(long**)pcVar17 = plVar15;
   puVar13 = (undefined8*)0x0;
   local_70 = (undefined8*)0x0;
   LAB_001023c6:lVar10 = 0;
   do {
      *(undefined8*)( (long)puVar13 + lVar10 ) = *(undefined8*)( (long)local_78 + lVar10 );
      lVar10 = lVar10 + 8;
   } while ( (long)local_98 - (long)local_78 != lVar10 );
   local_98 = (undefined8*)( (long)puVar13 + ( (long)local_98 - (long)local_78 ) + 8 );
   local_78 = puVar13;
   LAB_001016f8:puVar14 = puVar14 + 1;
   plVar11 = param_3;
   if (*(undefined8**)( local_a8 + 0x10 ) == puVar14) {
      LAB_00101a60:if (local_98 != local_78) {
         local_88 = (long*)*local_78;
         plVar3 = local_88;
         puVar14 = local_78;
         if ((long)local_98 - (long)local_78 != 8) {
            joined_r0x00101a97:local_88 = plVar3;
            puVar14 = puVar14 + 1;
            puVar13 = local_78;
            plVar15 = param_5;
            if (local_98 != puVar14) {
               param_3 = (long*)0x0;
               plVar2 = (long*)*puVar14;
               iVar19 = 0;
               while (true) {
                  if (*(code**)( *plVar11 + 0x120 ) == TFunction::getParamCount) {
                     iVar16 = (int)( plVar11[7] - plVar11[6] >> 3 ) * -0x55555555;
                  } else {
                     iVar16 = ( **(code**)( *plVar11 + 0x120 ) )();
                  }
                  plVar3 = local_88;
                  if (iVar16 <= iVar19) goto joined_r0x00101a97;
                  if (*(code**)( *plVar2 + 0x140 ) == TFunction::operator []) {
                     lVar10 = plVar2[6] + (long)param_3;
                  } else {
                     lVar10 = ( **(code**)( *plVar2 + 0x140 ) )(plVar2, iVar19);
                  }
                  lVar10 = *(long*)( lVar10 + 8 );
                  if (*(code**)( *local_88 + 0x140 ) == TFunction::operator []) {
                     lVar8 = local_88[6] + (long)param_3;
                  } else {
                     lVar8 = ( **(code**)( *local_88 + 0x140 ) )(local_88, iVar19);
                     local_a8 = lVar10;
                  }
                  uVar1 = *(undefined8*)( lVar8 + 8 );
                  if (*(code**)( *plVar11 + 0x140 ) == TFunction::operator []) {
                     lVar8 = plVar11[6] + (long)param_3;
                  } else {
                     lVar8 = ( **(code**)( *plVar11 + 0x140 ) )(plVar11, iVar19);
                     local_a8 = lVar10;
                  }
                  uVar18 = *(ulong*)( lVar8 + 8 );
                  param_4 = plVar11;
                  if (param_5[2] == 0) goto LAB_001023fd;
                  param_3 = param_3 + 3;
                  cVar4 = ( *(code*)param_5[3] )(param_5, uVar18, uVar1, lVar10);
                  if (cVar4 != '\0') break;
                  iVar19 = iVar19 + 1;
               };
               param_3 = (long*)0x0;
               iVar19 = 0;
               while (true) {
                  if (*(code**)( *plVar11 + 0x120 ) == TFunction::getParamCount) {
                     iVar16 = (int)( plVar11[7] - plVar11[6] >> 3 ) * -0x55555555;
                  } else {
                     iVar16 = ( **(code**)( *plVar11 + 0x120 ) )();
                  }
                  plVar3 = plVar2;
                  if (iVar16 <= iVar19) break;
                  if (*(code**)( *local_88 + 0x140 ) == TFunction::operator []) {
                     lVar10 = local_88[6] + (long)param_3;
                  } else {
                     lVar10 = ( **(code**)( *local_88 + 0x140 ) )(local_88, iVar19);
                  }
                  lVar10 = *(long*)( lVar10 + 8 );
                  if (*(code**)( *plVar2 + 0x140 ) == TFunction::operator []) {
                     lVar8 = plVar2[6] + (long)param_3;
                  } else {
                     lVar8 = ( **(code**)( *plVar2 + 0x140 ) )(plVar2, iVar19);
                     local_a8 = lVar10;
                  }
                  uVar1 = *(undefined8*)( lVar8 + 8 );
                  if (*(code**)( *plVar11 + 0x140 ) == TFunction::operator []) {
                     lVar8 = plVar11[6] + (long)param_3;
                  } else {
                     lVar8 = ( **(code**)( *plVar11 + 0x140 ) )(plVar11, iVar19);
                     local_a8 = lVar10;
                  }
                  uVar18 = *(ulong*)( lVar8 + 8 );
                  if (param_5[2] == 0) goto LAB_001023fd;
                  param_3 = param_3 + 3;
                  cVar4 = ( *(code*)param_5[3] )(param_5, uVar18, uVar1, lVar10);
                  plVar3 = local_88;
                  if (cVar4 != '\0') break;
                  iVar19 = iVar19 + 1;
               };
               goto joined_r0x00101a97;
            }
            do {
               while (true) {
                  plVar3 = (long*)*puVar13;
                  lVar10 = 0;
                  param_3 = (long*)0x0;
                  if (plVar3 != local_88) break;
                  LAB_00101e43:puVar13 = puVar13 + 1;
                  if (local_98 == puVar13) goto LAB_00101e52;
               };
               while (true) {
                  if (*(code**)( *plVar11 + 0x120 ) == TFunction::getParamCount) {
                     iVar19 = (int)( plVar11[7] - plVar11[6] >> 3 ) * -0x55555555;
                  } else {
                     iVar19 = ( **(code**)( *plVar11 + 0x120 ) )(plVar11);
                  }
                  if (iVar19 <= (int)param_3) {
                     param_3 = (long*)0x0;
                     iVar19 = 0;
                     goto LAB_00101e07;
                  }
                  if (*(code**)( *plVar3 + 0x140 ) == TFunction::operator []) {
                     lVar8 = plVar3[6] + lVar10;
                  } else {
                     lVar8 = ( **(code**)( *plVar3 + 0x140 ) )(plVar3, param_3);
                  }
                  lVar8 = *(long*)( lVar8 + 8 );
                  if (*(code**)( *local_88 + 0x140 ) == TFunction::operator []) {
                     lVar9 = local_88[6] + lVar10;
                  } else {
                     lVar9 = ( **(code**)( *local_88 + 0x140 ) )(local_88, param_3);
                     local_a8 = lVar8;
                  }
                  uVar1 = *(undefined8*)( lVar9 + 8 );
                  if (*(code**)( *plVar11 + 0x140 ) == TFunction::operator []) {
                     lVar9 = plVar11[6] + lVar10;
                  } else {
                     lVar9 = ( **(code**)( *plVar11 + 0x140 ) )(plVar11, param_3);
                     local_a8 = lVar8;
                  }
                  uVar18 = *(ulong*)( lVar9 + 8 );
                  plVar15 = plVar11;
                  param_4 = local_88;
                  if (param_5[2] == 0) goto LAB_001023fd;
                  lVar10 = lVar10 + 0x18;
                  cVar4 = ( *(code*)param_5[3] )(param_5, uVar18, uVar1, lVar8);
                  if (cVar4 != '\0') break;
                  param_3 = (long*)( ulong )((int)param_3 + 1);
               };
               *param_6 = 1;
               joined_r0x00102344:puVar13 = puVar13 + 1;
            } while ( local_98 != puVar13 );
         }
         goto LAB_00101e52;
      }
      goto LAB_00102364;
   }
   goto LAB_0010170b;
   LAB_00101e07:if (*(code**)( *plVar11 + 0x120 ) == TFunction::getParamCount) {
      iVar16 = (int)( plVar11[7] - plVar11[6] >> 3 ) * -0x55555555;
   } else {
      iVar16 = ( **(code**)( *plVar11 + 0x120 ) )();
   }
   if (iVar16 <= iVar19) {
      *param_6 = 1;
      goto LAB_00101e43;
   }
   if (*(code**)( *plVar3 + 0x140 ) == TFunction::operator []) {
      lVar10 = plVar3[6] + (long)param_3;
   } else {
      lVar10 = ( **(code**)( *plVar3 + 0x140 ) )(plVar3, iVar19);
   }
   lVar10 = *(long*)( lVar10 + 8 );
   if (*(code**)( *local_88 + 0x140 ) == TFunction::operator []) {
      lVar8 = local_88[6] + (long)param_3;
   } else {
      lVar8 = ( **(code**)( *local_88 + 0x140 ) )(local_88, iVar19);
      local_a8 = lVar10;
   }
   uVar1 = *(undefined8*)( lVar8 + 8 );
   if (*(code**)( *plVar11 + 0x140 ) == TFunction::operator []) {
      lVar8 = plVar11[6] + (long)param_3;
   } else {
      lVar8 = ( **(code**)( *plVar11 + 0x140 ) )(plVar11, iVar19);
      local_a8 = lVar10;
   }
   uVar18 = *(ulong*)( lVar8 + 8 );
   plVar15 = param_5;
   param_4 = plVar3;
   if (param_5[2] == 0) goto LAB_001023fd;
   cVar4 = ( *(code*)param_5[3] )(param_5, uVar18, uVar1, lVar10);
   if (cVar4 != '\0') goto joined_r0x00102344;
   if (*(code**)( *local_88 + 0x140 ) == TFunction::operator []) {
      lVar10 = local_88[6] + (long)param_3;
   } else {
      lVar10 = ( **(code**)( *local_88 + 0x140 ) )(local_88, iVar19);
   }
   lVar10 = *(long*)( lVar10 + 8 );
   if (*(code**)( *plVar3 + 0x140 ) == TFunction::operator []) {
      lVar8 = plVar3[6] + (long)param_3;
   } else {
      lVar8 = ( **(code**)( *plVar3 + 0x140 ) )(plVar3, iVar19);
      local_a8 = lVar10;
   }
   uVar1 = *(undefined8*)( lVar8 + 8 );
   if (*(code**)( *plVar11 + 0x140 ) == TFunction::operator []) {
      lVar8 = plVar11[6] + (long)param_3;
   } else {
      lVar8 = ( **(code**)( *plVar11 + 0x140 ) )(plVar11, iVar19);
      local_a8 = lVar10;
   }
   uVar18 = *(ulong*)( lVar8 + 8 );
   if (param_5[2] == 0) goto LAB_001023fd;
   param_3 = param_3 + 3;
   cVar4 = ( *(code*)param_5[3] )(param_5, uVar18, uVar1, lVar10);
   if (cVar4 != '\0') goto joined_r0x00102344;
   iVar19 = iVar19 + 1;
   goto LAB_00101e07;
   LAB_001023fd:pcVar17 = TFunction::operator [];
   std::__throw_bad_function_call();
   puVar14 = extraout_RDX;
   LAB_00102402:uVar12 = uVar18 + 1;
   if (uVar18 < 0xffffffffffffffff) {
      LAB_0010240b:if (0xfffffffffffffff < uVar12) {
         uVar12 = 0xfffffffffffffff;
      }
      lVar10 = uVar12 * 8;
   } else {
      LAB_0010246e:lVar10 = 0x7ffffffffffffff8;
   }
   puVar13 = (undefined8*)glslang::TPoolAllocator::allocate(uVar7);
   local_70 = (undefined8*)( (long)puVar13 + lVar10 );
   *(long**)( (long)puVar13 + (long)pcVar17 ) = plVar15;
   if (local_98 != local_78) goto LAB_001023c6;
   local_98 = puVar13 + 1;
   local_78 = puVar13;
   goto LAB_001016f8;
}/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
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
   std::random_access_iterator_tag) [clone .isra.0] */long *std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>(long *param_1, long *param_2, uint param_3) {
   long *plVar1;
   bool bVar2;
   char cVar3;
   long lVar4;
   long lVar5;
   long *plVar6;
   lVar5 = (long)param_2 - (long)param_1;
   if (0 < lVar5 >> 7) {
      plVar6 = param_1 + ( lVar5 >> 7 ) * 0x10;
      do {
         plVar1 = (long*)*param_1;
         if (*(byte*)( plVar1 + 1 ) == param_3) {
            return param_1;
         }
         if (*(code**)( *plVar1 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )(*(byte*)( plVar1 + 1 ) - 0xf) < 2) {
               LAB_001025ed:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
               lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5,param_3 ));
               if (lVar5 != lVar4) {
                  return param_1;
               }
            }
         } else {
            cVar3 = ( **(code**)( *plVar1 + 0x128 ) )(plVar1);
            if (cVar3 != '\0') goto LAB_001025ed;
         }
         plVar1 = (long*)param_1[4];
         if (*(byte*)( plVar1 + 1 ) == param_3) goto LAB_0010263c;
         if (*(code**)( *plVar1 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )(*(byte*)( plVar1 + 1 ) - 0xf) < 2) {
               LAB_0010261d:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
               lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5,param_3 ));
               if (lVar5 != lVar4) {
                  LAB_0010263c:return param_1 + 4;
               }
            }
         } else {
            cVar3 = ( **(code**)( *plVar1 + 0x128 ) )(plVar1);
            if (cVar3 != '\0') goto LAB_0010261d;
         }
         plVar1 = (long*)param_1[8];
         if (*(byte*)( plVar1 + 1 ) == param_3) goto LAB_00102674;
         if (*(code**)( *plVar1 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )(*(byte*)( plVar1 + 1 ) - 0xf) < 2) {
               LAB_00102655:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
               lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5,param_3 ));
               if (lVar5 != lVar4) {
                  LAB_00102674:return param_1 + 8;
               }
            }
         } else {
            cVar3 = ( **(code**)( *plVar1 + 0x128 ) )(plVar1);
            if (cVar3 != '\0') goto LAB_00102655;
         }
         plVar1 = (long*)param_1[0xc];
         if (param_3 == *(byte*)( plVar1 + 1 )) goto LAB_001026ac;
         if (*(code**)( *plVar1 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )(*(byte*)( plVar1 + 1 ) - 0xf) < 2) {
               LAB_0010268d:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
               lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5,param_3 ));
               if (lVar5 != lVar4) {
                  LAB_001026ac:return param_1 + 0xc;
               }
            }
         } else {
            cVar3 = ( **(code**)( *plVar1 + 0x128 ) )(plVar1);
            if (cVar3 != '\0') goto LAB_0010268d;
         }
         param_1 = param_1 + 0x10;
      } while ( param_1 != plVar6 );
      lVar5 = (long)param_2 - (long)param_1;
   }
   lVar5 = lVar5 >> 5;
   if (lVar5 != 2) {
      if (lVar5 != 3) {
         if (lVar5 != 1) {
            return param_2;
         }
         goto LAB_00102708;
      }
      bVar2 = glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>((TType*)*param_1, param_3);
      if (bVar2) {
         return param_1;
      }
      param_1 = param_1 + 4;
   }
   bVar2 = glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>((TType*)*param_1, param_3);
   if (bVar2) {
      return param_1;
   }
   param_1 = param_1 + 4;
   LAB_00102708:plVar6 = (long*)*param_1;
   if (*(byte*)( plVar6 + 1 ) == param_3) {
      return param_1;
   }
   if (*(code**)( *plVar6 + 0x128 ) == glslang::TType::isStruct) {
      if (1 < ( byte )(*(byte*)( plVar6 + 1 ) - 0xf)) {
         return param_2;
      }
   } else {
      cVar3 = ( **(code**)( *plVar6 + 0x128 ) )(plVar6);
      if (cVar3 == '\0') {
         return param_2;
      }
   }
   lVar5 = *(long*)( plVar6[0xd] + 0x10 );
   lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar6[0xd] + 8 ),lVar5,param_3 ));
   if (lVar5 == lVar4) {
      return param_2;
   }
   return param_1;
}/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
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
   std::random_access_iterator_tag) [clone .isra.0] */long *std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>(long *param_1, long *param_2, long *param_3) {
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
      LAB_001027b0:do {
         plVar6 = plVar1;
         plVar1 = (long*)*plVar6;
         lVar4 = *plVar1;
         if (param_3 == plVar1) {
            LAB_00102800:if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
               if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                  LAB_0010281d:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
                  lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsStructure ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4,param_3 ));
                  if (lVar4 != lVar5) {
                     return plVar6;
                  }
               }
            } else {
               cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
               if (cVar2 != '\0') goto LAB_0010281d;
            }
         } else {
            if (*(code**)( lVar4 + 0x128 ) != glslang::TType::isStruct) {
               cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
               if (cVar2 != '\0') {
                  return plVar6;
               }
               lVar4 = *plVar1;
               goto LAB_00102800;
            }
            if (( byte )((char)plVar1[1] - 0xfU) < 2) {
               return plVar6;
            }
         }
         plVar1 = (long*)plVar6[4];
         lVar4 = *plVar1;
         if (param_3 == plVar1) {
            LAB_00102880:if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
               if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                  LAB_0010289d:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
                  lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsStructure ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4,param_3 ));
                  if (lVar4 != lVar5) {
                     LAB_00102866:return plVar6 + 4;
                  }
               }
            } else {
               cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
               if (cVar2 != '\0') goto LAB_0010289d;
            }
         } else {
            if (*(code**)( lVar4 + 0x128 ) != glslang::TType::isStruct) {
               cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
               if (cVar2 != '\0') goto LAB_00102866;
               lVar4 = *plVar1;
               goto LAB_00102880;
            }
            if (( byte )((char)plVar1[1] - 0xfU) < 2) goto LAB_00102866;
         }
         plVar1 = (long*)plVar6[8];
         lVar4 = *plVar1;
         if (param_3 == plVar1) {
            LAB_00102900:if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
               if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                  LAB_0010291d:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
                  lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsStructure ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4,param_3 ));
                  if (lVar4 != lVar5) {
                     LAB_001028e6:return plVar6 + 8;
                  }
               }
            } else {
               cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
               if (cVar2 != '\0') goto LAB_0010291d;
            }
         } else {
            if (*(code**)( lVar4 + 0x128 ) != glslang::TType::isStruct) {
               cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
               if (cVar2 != '\0') goto LAB_001028e6;
               lVar4 = *plVar1;
               goto LAB_00102900;
            }
            if (( byte )((char)plVar1[1] - 0xfU) < 2) goto LAB_001028e6;
         }
         plVar1 = (long*)plVar6[0xc];
         lVar4 = *plVar1;
         if (param_3 == plVar1) {
            LAB_00102980:if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
               if (1 < ( byte )((char)plVar1[1] - 0xfU)) goto LAB_001029ba;
            } else {
               cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
               if (cVar2 == '\0') {
                  plVar1 = plVar6 + 0x10;
                  if (param_1 + ( lVar7 >> 7 ) * 0x10 == plVar6 + 0x10) break;
                  goto LAB_001027b0;
               }
            }
            lVar4 = *(long*)( plVar1[0xd] + 0x10 );
            lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsStructure ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4,param_3 ));
            if (lVar4 != lVar5) {
               LAB_00102966:return plVar6 + 0xc;
            }
         } else {
            if (*(code**)( lVar4 + 0x128 ) != glslang::TType::isStruct) {
               cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
               if (cVar2 != '\0') goto LAB_00102966;
               lVar4 = *plVar1;
               goto LAB_00102980;
            }
            if (( byte )((char)plVar1[1] - 0xfU) < 2) goto LAB_00102966;
         }
         LAB_001029ba:plVar1 = plVar6 + 0x10;
      } while ( param_1 + ( lVar7 >> 7 ) * 0x10 != plVar6 + 0x10 );
      param_1 = plVar6 + 0x10;
      lVar7 = (long)param_2 - (long)param_1;
   }
   lVar7 = lVar7 >> 5;
   if (lVar7 != 2) {
      if (lVar7 != 3) {
         if (lVar7 != 1) {
            return param_2;
         }
         goto LAB_00102a8d;
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
   LAB_00102a8d:bVar3 = glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>((TType*)*param_1, param_3);
   if (!bVar3) {
      return param_2;
   }
   return param_1;
}/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
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
   std::random_access_iterator_tag) [clone .isra.0] */undefined8 * std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsSampler ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
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
         } while ( param_1 != puVar3 );
         lVar2 = (long)param_2 - (long)param_1;
      }
      lVar2 = lVar2 >> 5;
      if (lVar2 != 2) {
         if (lVar2 != 3) {
            if (lVar2 != 1) {
               return param_2;
            }
            goto LAB_00102b71;
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
      LAB_00102b71:bVar1 = glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(*param_1);
      if (!bVar1) {
         return param_2;
      }
      return param_1;
   }, /* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
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
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>, >, __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = (long)param_2 - (long)param_1;
  if (0 < lVar5 >> 7) {
    plVar6 = param_1 + (lVar5 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xe8) == glslang::TType::isArray) {
        lVar4 = plVar1[0xc];
        if (lVar4 != 0) {
LAB_00102c18:
          if (*(long *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 8) != 0) {
            return param_1;
          }
          goto LAB_00102c40;
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar4 = plVar1[0xc];
          goto LAB_00102c18;
        }
LAB_00102c40:
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00102dcd:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00102dcd;
      }
      plVar1 = (long *)param_1[4];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xe8) == glslang::TType::isArray) {
        lVar4 = plVar1[0xc];
        if (lVar4 != 0) {
LAB_00102c84:
          if (*(long *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 8) != 0) goto LAB_00102c93;
          goto LAB_00102ca0;
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar4 = plVar1[0xc];
          goto LAB_00102c84;
        }
LAB_00102ca0:
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00102dfd:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_00102c93:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00102dfd;
      }
      plVar1 = (long *)param_1[8];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xe8) == glslang::TType::isArray) {
        lVar4 = plVar1[0xc];
        if (lVar4 != 0) {
LAB_00102ce4:
          if (*(long *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 8) != 0) goto LAB_00102cf3;
          goto LAB_00102d00;
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar4 = plVar1[0xc];
          goto LAB_00102ce4;
        }
LAB_00102d00:
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00102e2d:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_00102cf3:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00102e2d;
      }
      plVar1 = (long *)param_1[0xc];
      lVar5 = *plVar1;
      if (*(code **)(lVar5 + 0xe8) == glslang::TType::isArray) {
        lVar4 = plVar1[0xc];
        if (lVar4 != 0) {
LAB_00102d44:
          if (*(long *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 8) != 0) goto LAB_00102d53;
          goto LAB_00102d60;
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar4 = plVar1[0xc];
          goto LAB_00102d44;
        }
LAB_00102d60:
        lVar5 = *plVar1;
      }
      if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00102e5d:
          lVar5 = *(long *)(plVar1[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_00102d53:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00102e5d;
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
      goto LAB_00102f1e;
    }
    bVar3 = glslang::TType::
            contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>
                      (*param_1);
    if (bVar3) {
      return param_1;
    }
    param_1 = param_1 + 4;
  }
  bVar3 = glslang::TType::
          contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (bVar3) {
    return param_1;
  }
  param_1 = param_1 + 4;
LAB_00102f1e:
  bVar3 = glslang::TType::
          contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (!bVar3) {
    return param_2;
  }
  return param_1;
}



/* glslang::TParseContextBase::checkIndex(glslang::TSourceLoc const&, glslang::TType const&, int&)
    */

void __thiscall
glslang::TParseContextBase::checkIndex
          (TParseContextBase *this,TSourceLoc *param_1,TType *param_2,int *param_3), {
         int iVar1;
         byte bVar2;
         char cVar3;
         uint uVar4;
         int iVar5;
         long lVar6;
         long lVar7;
         code *pcVar8;
         long lVar9;
         long *plVar10;
         if (*param_3 < 0) {
            ( **(code**)( *(long*)this + 0x158 ) )(this, param_1, &_LC0, &_LC222, "index out of range \'%d\'");
            *param_3 = 0;
            return;
         }
         lVar6 = *(long*)param_2;
         if (*(code**)( lVar6 + 0xe8 ) == TType::isArray) {
            if (*(long*)( param_2 + 0x60 ) != 0) {
               pcVar8 = *(code**)( lVar6 + 0xf0 );
               if (pcVar8 == TType::isSizedArray) {
                  LAB_00102fa6:lVar6 = *(long*)( param_2 + 0x60 );
                  if (lVar6 == 0) {
                     return;
                  }
                  goto LAB_00102fb3;
               }
               LAB_00103238:cVar3 = ( *pcVar8 )(param_2);
               if (cVar3 == '\0') {
                  return;
               }
               goto LAB_00102fc5;
            }
            LAB_00103090:if (*(code**)( lVar6 + 0xd8 ) == TType::isVector) {
               if (( (byte)param_2[9] & 0xf ) < 2) {
                  bVar2 = (byte)param_2[10] >> 4 & 1;
                  goto LAB_00103192;
               }
               LAB_001030b6:iVar1 = *param_3;
               if (*(code**)( lVar6 + 0x60 ) == TType::getVectorSize) {
                  uVar4 = (byte)param_2[9] & 0xf;
               } else {
                  uVar4 = ( **(code**)( lVar6 + 0x60 ) )(param_2);
               }
               if (iVar1 < (int)uVar4) {
                  return;
               }
               ( **(code**)( *(long*)this + 0x158 ) )(this, param_1, &_LC0, &_LC222, "vector index out of range \'%d\'", *param_3);
               pcVar8 = *(code**)( *(long*)param_2 + 0x60 );
               if (pcVar8 == TType::getVectorSize) {
                  uVar4 = (byte)param_2[9] & 0xf;
                  goto LAB_0010311d;
               }
            } else {
               bVar2 = ( **(code**)( lVar6 + 0xd8 ) )(param_2);
               lVar6 = *(long*)param_2;
               LAB_00103192:if (bVar2 != 0) goto LAB_001030b6;
               if (*(code**)( lVar6 + 0xe0 ) == TType::isMatrix) {
                  if ((byte)param_2[9] < 0x10) {
                     return;
                  }
               } else {
                  cVar3 = ( **(code**)( lVar6 + 0xe0 ) )(param_2);
                  if (cVar3 == '\0') {
                     return;
                  }
                  lVar6 = *(long*)param_2;
               }
               iVar1 = *param_3;
               if (*(code**)( lVar6 + 0x68 ) == TType::getMatrixCols) {
                  uVar4 = ( uint )((byte)param_2[9] >> 4);
               } else {
                  uVar4 = ( **(code**)( lVar6 + 0x68 ) )(param_2);
               }
               if (iVar1 < (int)uVar4) {
                  return;
               }
               ( **(code**)( *(long*)this + 0x158 ) )(this, param_1, &_LC0, &_LC222, "matrix index out of range \'%d\'", *param_3);
               pcVar8 = *(code**)( *(long*)param_2 + 0x68 );
               if (pcVar8 == TType::getMatrixCols) {
                  uVar4 = ( uint )((byte)param_2[9] >> 4);
                  goto LAB_0010311d;
               }
            }
         } else {
            cVar3 = ( **(code**)( lVar6 + 0xe8 ) )(param_2);
            lVar6 = *(long*)param_2;
            if (cVar3 == '\0') goto LAB_00103090;
            pcVar8 = *(code**)( lVar6 + 0xf0 );
            if (pcVar8 != TType::isSizedArray) goto LAB_00103238;
            if (*(code**)( lVar6 + 0xe8 ) == TType::isArray) goto LAB_00102fa6;
            cVar3 = ( **(code**)( lVar6 + 0xe8 ) )(param_2);
            if (cVar3 == '\0') {
               return;
            }
            lVar6 = *(long*)( param_2 + 0x60 );
            LAB_00102fb3:if (**(int**)( *(long*)( lVar6 + 8 ) + 8 ) == 0) {
               return;
            }
            LAB_00102fc5:lVar6 = *(long*)param_2;
            if (*(code**)( lVar6 + 0x1d0 ) == TType::containsSpecializationSize) {
               if (*(code**)( lVar6 + 0xe8 ) == TType::isArray) {
                  lVar9 = *(long*)( param_2 + 0x60 );
                  if (lVar9 != 0) {
                     LAB_00102ffc:if (*(long*)( *(long*)( *(long*)( lVar9 + 8 ) + 8 ) + 8 ) != 0) goto LAB_0010300f;
                  }
               } else {
                  cVar3 = ( **(code**)( lVar6 + 0xe8 ) )(param_2);
                  if (cVar3 != '\0') {
                     lVar9 = *(long*)( param_2 + 0x60 );
                     lVar6 = *(long*)param_2;
                     goto LAB_00102ffc;
                  }
                  lVar6 = *(long*)param_2;
               }
               if (*(code**)( lVar6 + 0x128 ) == TType::isStruct) {
                  if (1 < ( byte )((char)param_2[8] - 0xfU)) goto LAB_00103287;
                  LAB_00103328:lVar9 = *(long*)( *(long*)( param_2 + 0x68 ) + 0x10 );
                  lVar7 = std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsSpecializationSize ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( *(long*)( param_2 + 0x68 ) + 8 ),lVar9 ));
                  lVar6 = *(long*)param_2;
                  if (lVar9 != lVar7) goto LAB_0010300f;
               } else {
                  cVar3 = ( **(code**)( lVar6 + 0x128 ) )(param_2);
                  if (cVar3 != '\0') goto LAB_00103328;
                  LAB_0010304a:lVar6 = *(long*)param_2;
               }
            } else {
               cVar3 = ( **(code**)( lVar6 + 0x1d0 ) )(param_2);
               lVar6 = *(long*)param_2;
               if (cVar3 != '\0') {
                  LAB_0010300f:if (*(code**)( lVar6 + 0x98 ) == TType::getArraySizes) {
                     plVar10 = *(long**)( *(long*)( *(long*)( *(long*)( param_2 + 0x60 ) + 8 ) + 8 ) + 8 );
                     if (plVar10 != (long*)0x0) {
                        LAB_0010303f:lVar6 = ( **(code**)( *plVar10 + 0x60 ) )();
                        if (lVar6 == 0) {
                           return;
                        }
                        goto LAB_0010304a;
                     }
                  } else {
                     lVar9 = ( **(code**)( lVar6 + 0x98 ) )(param_2);
                     lVar6 = *(long*)param_2;
                     if (*(long*)( *(long*)( *(long*)( lVar9 + 8 ) + 8 ) + 8 ) != 0) {
                        if (*(code**)( lVar6 + 0x98 ) == TType::getArraySizes) {
                           plVar10 = *(long**)( *(long*)( *(long*)( *(long*)( param_2 + 0x60 ) + 8 ) + 8 ) + 8 );
                        } else {
                           lVar6 = ( **(code**)( lVar6 + 0x98 ) )(param_2);
                           plVar10 = *(long**)( *(long*)( *(long*)( lVar6 + 8 ) + 8 ) + 8 );
                        }
                        goto LAB_0010303f;
                     }
                  }
               }
            }
            LAB_00103287:iVar1 = *param_3;
            if (*(code**)( lVar6 + 0x78 ) == TType::getOuterArraySize) {
               iVar5 = **(int**)( *(long*)( *(long*)( param_2 + 0x60 ) + 8 ) + 8 );
            } else {
               iVar5 = ( **(code**)( lVar6 + 0x78 ) )(param_2);
            }
            if (iVar1 < iVar5) {
               return;
            }
            ( **(code**)( *(long*)this + 0x158 ) )(this, param_1, &_LC0, &_LC222, "array index out of range \'%d\'", *param_3);
            pcVar8 = *(code**)( *(long*)param_2 + 0x78 );
            if (pcVar8 == TType::getOuterArraySize) {
               uVar4 = **(uint**)( *(long*)( *(long*)( param_2 + 0x60 ) + 8 ) + 8 );
               goto LAB_0010311d;
            }
         }
         uVar4 = ( *pcVar8 )(param_2);
         LAB_0010311d:*param_3 = uVar4 - 1;
         return;
      }, /* glslang::TParseContextBase::makeEditable(glslang::TSymbol*&) */, void __thiscall glslang::TParseContextBase::makeEditable(TParseContextBase *this, TSymbol * *param_1) * pTVar1 * plVar2 * this_00 * __s2 * pTVar6 * plVar7 * puVar9 * pcVar15 * local_60;
  undefined8 local_58;
  undefined1 local_50[16] * param_1 * (long**)( this + 0xe8 ) * (long*)( in_FS_OFFSET + 0x28 )(**(code**)( *(long*)pTVar1 + 0x48 ))(pTVar1)(lVar5 == 0) = (long*)( *(code*)( *(undefined8**)pTVar1 )[0xb] )(pTVar1)(*(code**)( *plVar7 + 0xb0 ) == TAnonMember::getAnonContainer) = (undefined8*)plVar7[5](undefined8 * )(**(code**)( *plVar7 + 0xb0 ))(plVar7)(TSymbol * )(**(code**)*puVar9)() * (code**)( *(long*)pTVar6 + 0x20 ), ;
    uVar8 = glslang::GetThreadPoolAllocator() ;puVar9 = (undefined8*)glslang::TPoolAllocator::allocate(uVar8);uVar10 = glslang::GetThreadPoolAllocator();*puVar9 = uVar10;puVar9[1] = puVar9 + 3;std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(puVar9, &_LC0, &_LC0);if (pcVar15 == TSymbol::changeName) {
   *(undefined8**)( pTVar6 + 8 ) = puVar9;
} else {
   ( *pcVar15 )(pTVar6, puVar9);
}pcVar15 = *(code**)( *(long*)pTVar6 + 0x70 );if (*(code**)( *plVar7 + 0xb0 ) == TAnonMember::getAnonContainer) {
   plVar7 = (long*)plVar7[5];
} else {
   plVar7 = (long*)( **(code**)( *plVar7 + 0xb0 ) )(plVar7);
}if (*(code**)( *plVar7 + 0x78 ) != TSymbol::getUniqueId) {
   lVar5 = ( **(code**)( *plVar7 + 0x78 ) )();
   goto LAB_00103495;
}lVar5 = plVar7[2];if (pcVar15 == TSymbol::setUniqueId) goto LAB_001034a5;LAB_00103749:( *pcVar15 )(pTVar6);}
  else{
   pTVar6 = (TSymbol*)( *(code*)**(undefined8**)pTVar1 )();
   pcVar15 = *(code**)( *(long*)pTVar6 + 0x70 );
   if (*(code**)( *(long*)pTVar1 + 0x78 ) == TSymbol::getUniqueId) {
      lVar5 = *(long*)( pTVar1 + 0x10 );
   } else {
      lVar5 = ( **(code**)( *(long*)pTVar1 + 0x78 ) )(pTVar1);
   }
   LAB_00103495:if (pcVar15 != TSymbol::setUniqueId) goto LAB_00103749;
   LAB_001034a5:*(long*)( pTVar6 + 0x10 ) = lVar5;
}this_00 = *(TSymbolTableLevel**)( *plVar2 + 0x18 );local_68 = glslang::GetThreadPoolAllocator();local_60 = local_50;local_58 = 0;local_50[0] = 0;TSymbolTableLevel::insert(this_00, pTVar6, *(bool*)( (long)plVar2 + 0x21 ), (basic_string*)&local_68);lVar5 = ( **(code**)( *(long*)pTVar1 + 0x48 ) )(pTVar1);if (lVar5 == 0) {
   lVar5 = *(long*)( *plVar2 + 0x18 );
   if (*(code**)( *(long*)pTVar1 + 0x18 ) == TSymbol::getName_abi_cxx11_) {
      lVar11 = *(long*)( pTVar1 + 8 );
   } else {
      lVar11 = ( **(code**)( *(long*)pTVar1 + 0x18 ) )(pTVar1);
   }
   lVar14 = *(long*)( lVar5 + 0x18 );
   lVar5 = lVar5 + 0x10;
   if (lVar14 != 0) {
      __s2 = *(void**)( lVar11 + 8 );
      uVar8 = *(ulong*)( lVar11 + 0x10 );
      lVar11 = lVar5;
      do {
         while (true) {
            uVar3 = *(ulong*)( lVar14 + 0x30 );
            uVar13 = uVar8;
            if (uVar3 <= uVar8) {
               uVar13 = uVar3;
            }
            if (( uVar13 != 0 ) && ( iVar4 = memcmp(*(void**)( lVar14 + 0x28 ), __s2, uVar13) ),iVar4 != 0) break;
            lVar12 = uVar3 - uVar8;
            if (lVar12 < 0x80000000) {
               if (-0x80000001 < lVar12) {
                  iVar4 = (int)lVar12;
                  break;
               }
               goto LAB_00103590;
            }
            LAB_001035e2:plVar2 = (long*)( lVar14 + 0x10 );
            lVar11 = lVar14;
            lVar14 = *plVar2;
            if (*plVar2 == 0) goto LAB_001035ee;
         };
         if (-1 < iVar4) goto LAB_001035e2;
         LAB_00103590:lVar14 = *(long*)( lVar14 + 0x18 );
      } while ( lVar14 != 0 );
      LAB_001035ee:if (lVar5 != lVar11) {
         uVar3 = *(ulong*)( lVar11 + 0x30 );
         uVar13 = uVar8;
         if (uVar3 <= uVar8) {
            uVar13 = uVar3;
         }
         if (( uVar13 == 0 ) || ( iVar4 = memcmp(__s2, *(void**)( lVar11 + 0x28 ), uVar13) ),iVar4 == 0) {
            lVar5 = uVar8 - uVar3;
            if (lVar5 < 0x80000000) {
               if (lVar5 < -0x80000000) goto LAB_00103658;
               iVar4 = (int)lVar5;
               goto LAB_00103636;
            }
         } else {
            LAB_00103636:if (iVar4 < 0) goto LAB_00103658;
         }
         pTVar6 = *(TSymbol**)( lVar11 + 0x48 );
         *param_1 = pTVar6;
         if (pTVar6 != (TSymbol*)0x0) goto LAB_001034fa;
         goto LAB_00103521;
      }
   }
   LAB_00103658:*param_1 = (TSymbol*)0x0;
} else {
   *param_1 = pTVar6;
   LAB_001034fa:if (*(code**)( *(long*)this + 600 ) != trackLinkage) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Could not recover jumptable at 0x001037b0. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( **(code**)( *(long*)this + 600 ) )(this, pTVar6);
         return;
      }
      goto LAB_0010382d;
   }
   if (this[0x1c1] == (TParseContextBase)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         trackLinkage(this, pTVar6);
         return;
      }
      goto LAB_0010382d;
   }
}LAB_00103521:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}LAB_0010382d:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* glslang::TParseContextBase::growAtomicCounterBlock(int, glslang::TSourceLoc const&,
   glslang::TType&, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&, glslang::TVector<glslang::TTypeLoc>*) */void glslang::TParseContextBase::growAtomicCounterBlock(TParseContextBase *this, int param_1, TSourceLoc *param_2, TType *param_3, basic_string *param_4, TVector *param_5) {
   _Rb_tree_node_base *p_Var1;
   TType TVar2;
   byte bVar3;
   TParseContextBase TVar4;
   int iVar5;
   char *pcVar6;
   code *pcVar7;
   TSymbolTable *this_00;
   TSymbol *pTVar8;
   TSymbolTableLevel *this_01;
   undefined *puVar9;
   undefined *puVar10;
   char cVar11;
   int iVar12;
   ulong uVar13;
   undefined **ppuVar14;
   undefined8 *puVar15;
   undefined8 uVar16;
   size_t sVar17;
   _Rb_tree_node_base *p_Var18;
   _Rb_tree_node_base *p_Var19;
   _Rb_tree_node_base *p_Var20;
   undefined8 *puVar21;
   undefined8 uVar22;
   TVariable *pTVar23;
   basic_string *pbVar24;
   long lVar25;
   TVariable *pTVar26;
   byte bVar27;
   byte bVar28;
   _Rb_tree_node_base *p_Var29;
   _Rb_tree_node_base *p_Var30;
   vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>> *pvVar31;
   undefined *puVar32;
   int *piVar33;
   long in_FS_OFFSET;
   bool bVar34;
   undefined1 auVar35[16];
   _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,int>>> *local_328;
   undefined **local_2e8;
   ulong uStack_2e0;
   undefined8 uStack_2d8;
   ulong uStack_2d0;
   byte local_2c8;
   undefined8 local_2c4;
   uint local_2bc;
   ulong local_2b8;
   ulong local_2b0;
   undefined1 local_2a8;
   undefined4 local_2a4;
   undefined8 local_2a0;
   undefined8 local_298;
   undefined2 local_290;
   undefined8 local_288;
   undefined8 *local_280;
   undefined8 local_278;
   undefined8 *local_270;
   uint local_268;
   undefined1 local_260[16];
   char local_248[520];
   long local_40;
   piVar33 = (int*)(ulong)(uint)param_1;
   p_Var1 = (_Rb_tree_node_base*)( this + 0x498 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   p_Var18 = *(_Rb_tree_node_base**)( this + 0x4a0 );
   p_Var20 = p_Var18;
   p_Var19 = p_Var1;
   p_Var30 = p_Var1;
   if (p_Var18 == (_Rb_tree_node_base*)0x0) {
      LAB_00103d00:local_2e8 = (undefined**)CONCAT44(local_2e8._4_4_, param_1);
      uStack_2e0 = 0;
      std::_Rb_tree<int,std::pair<int_const,glslang::TVariable*>,std::_Select1st<std::pair<int_const,glslang::TVariable*>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVariable*>>>::_M_insert_unique<std::pair<int_const,glslang::TVariable*>>((_Rb_tree<int,std::pair<int_const,glslang::TVariable*>,std::_Select1st<std::pair<int_const,glslang::TVariable*>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVariable*>>>*)( this + 0x488 ), (pair_conflict*)&local_2e8);
      local_2e8 = (undefined**)(ulong)(uint)param_1;
      std::_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,int>>>::_M_insert_unique<std::pair<int_const,int>>((_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,int>>>*)( this + 0x4c8 ), (pair_conflict*)&local_2e8);
      p_Var18 = *(_Rb_tree_node_base**)( this + 0x4a0 );
      if (*(_Rb_tree_node_base**)( this + 0x4a0 ) != (_Rb_tree_node_base*)0x0) goto LAB_001038f8;
      LAB_00103d4f:p_Var18 = (_Rb_tree_node_base*)glslang::TPoolAllocator::allocate(*(ulong*)( this + 0x488 ));
      lVar25 = *(long*)( this + 0x4b8 );
      *(int*)( p_Var18 + 0x20 ) = param_1;
      *(undefined8*)( p_Var18 + 0x28 ) = 0;
      if (( lVar25 != 0 ) && ( p_Var20 = *(_Rb_tree_node_base**)( this + 0x4b0 ) * (int*)( p_Var20 + 0x20 ) < param_1 )) {
         LAB_00104068:bVar34 = false;
         LAB_00103dbb:if (( p_Var1 == p_Var20 ) || ( p_Var30 = bVar34 )) {
            bVar34 = true;
            p_Var30 = p_Var18;
         } else {
            LAB_001044b6:p_Var20 = p_Var30;
            bVar34 = param_1 < *(int*)( p_Var20 + 0x20 );
            p_Var30 = p_Var18;
         }
         goto LAB_00103f16;
      }
      LAB_00103d90:auVar35 = std::_Rb_tree<int,std::pair<int_const,glslang::TVariable*>,std::_Select1st<std::pair<int_const,glslang::TVariable*>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVariable*>>>::_M_get_insert_unique_pos((_Rb_tree<int,std::pair<int_const,glslang::TVariable*>,std::_Select1st<std::pair<int_const,glslang::TVariable*>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVariable*>>>*)( this + 0x488 ), piVar33);
      p_Var20 = auVar35._8_8_;
      p_Var30 = auVar35._0_8_;
      if (p_Var20 != (_Rb_tree_node_base*)0x0) {
         bVar34 = p_Var30 != (_Rb_tree_node_base*)0x0;
         goto LAB_00103dbb;
      }
   } else {
      do {
         while (true) {
            p_Var29 = p_Var20;
            if (*(int*)( p_Var29 + 0x20 ) < param_1) break;
            p_Var20 = *(_Rb_tree_node_base**)( p_Var29 + 0x10 );
            p_Var19 = p_Var29;
            if (*(_Rb_tree_node_base**)( p_Var29 + 0x10 ) == (_Rb_tree_node_base*)0x0) goto LAB_001038d1;
         };
         p_Var20 = *(_Rb_tree_node_base**)( p_Var29 + 0x18 );
      } while ( *(_Rb_tree_node_base**)( p_Var29 + 0x18 ) != (_Rb_tree_node_base*)0x0 );
      LAB_001038d1:if (( p_Var1 == p_Var19 ) || ( param_1 < *(int*)( p_Var19 + 0x20 ) )) goto LAB_00103d00;
      LAB_001038f8:do {
         while (true) {
            p_Var20 = p_Var18;
            if (*(int*)( p_Var20 + 0x20 ) < param_1) break;
            p_Var18 = *(_Rb_tree_node_base**)( p_Var20 + 0x10 );
            p_Var30 = p_Var20;
            if (*(_Rb_tree_node_base**)( p_Var20 + 0x10 ) == (_Rb_tree_node_base*)0x0) goto LAB_00103911;
         };
         p_Var18 = *(_Rb_tree_node_base**)( p_Var20 + 0x18 );
      } while ( *(_Rb_tree_node_base**)( p_Var20 + 0x18 ) != (_Rb_tree_node_base*)0x0 );
      LAB_00103911:if (p_Var1 == p_Var30) goto LAB_00103d4f;
      if (*(int*)( p_Var30 + 0x20 ) <= param_1) goto LAB_00103924;
      p_Var18 = (_Rb_tree_node_base*)glslang::TPoolAllocator::allocate(*(ulong*)( this + 0x488 ));
      *(int*)( p_Var18 + 0x20 ) = param_1;
      *(undefined8*)( p_Var18 + 0x28 ) = 0;
      if (*(int*)( p_Var30 + 0x20 ) <= param_1) {
         if (param_1 <= *(int*)( p_Var30 + 0x20 )) goto LAB_00103924;
         if (*(_Rb_tree_node_base**)( this + 0x4b0 ) != p_Var30) {
            p_Var20 = (_Rb_tree_node_base*)std::_Rb_tree_increment(p_Var30);
            if (*(int*)( p_Var20 + 0x20 ) <= param_1) goto LAB_00103d90;
            if (*(long*)( p_Var30 + 0x18 ) == 0) goto LAB_001044b6;
            bVar34 = true;
            goto LAB_00103dbb;
         }
         goto LAB_001044b6;
      }
      if (*(_Rb_tree_node_base**)( this + 0x4a8 ) != p_Var30) {
         p_Var20 = (_Rb_tree_node_base*)std::_Rb_tree_decrement(p_Var30);
         if (*(int*)( p_Var20 + 0x20 ) < param_1) {
            if (*(long*)( p_Var20 + 0x18 ) != 0) goto LAB_00103f0b;
            goto LAB_00104068;
         }
         goto LAB_00103d90;
      }
      LAB_00103f0b:bVar34 = true;
      p_Var20 = p_Var30;
      p_Var30 = p_Var18;
      LAB_00103f16:std::_Rb_tree_insert_and_rebalance(bVar34, p_Var30, p_Var20, p_Var1);
      *(long*)( this + 0x4b8 ) = *(long*)( this + 0x4b8 ) + 1;
   }
   LAB_00103924:p_Var1 = (_Rb_tree_node_base*)( this + 0x4d8 );
   p_Var18 = *(_Rb_tree_node_base**)( this + 0x4e0 );
   p_Var20 = p_Var1;
   if (*(_Rb_tree_node_base**)( this + 0x4e0 ) == (_Rb_tree_node_base*)0x0) {
      LAB_001040a0:p_Var18 = (_Rb_tree_node_base*)glslang::TPoolAllocator::allocate(*(ulong*)( this + 0x4c8 ));
      lVar25 = *(long*)( this + 0x4f8 );
      *(int*)( p_Var18 + 0x20 ) = param_1;
      *(undefined4*)( p_Var18 + 0x24 ) = 0;
      if (( lVar25 != 0 ) && ( p_Var19 = *(_Rb_tree_node_base**)( this + 0x4f0 ) * (int*)( p_Var19 + 0x20 ) < param_1 )) {
         LAB_001040e9:bVar34 = false;
         LAB_00104006:if (( p_Var1 == p_Var19 ) || ( p_Var20 = bVar34 )) {
            bVar34 = true;
         } else {
            LAB_0010449d:p_Var19 = p_Var20;
            bVar34 = param_1 < *(int*)( p_Var19 + 0x20 );
         }
         goto LAB_00103e93;
      }
      LAB_00103fd8:local_328 = (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,int>>>*)( this + 0x4c8 );
      auVar35 = std::_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,int>>>::_M_get_insert_unique_pos(local_328, piVar33);
      p_Var19 = auVar35._8_8_;
      p_Var20 = auVar35._0_8_;
      if (p_Var19 != (_Rb_tree_node_base*)0x0) {
         bVar34 = p_Var20 != (_Rb_tree_node_base*)0x0;
         goto LAB_00104006;
      }
   } else {
      do {
         while (true) {
            p_Var19 = p_Var18;
            if (*(int*)( p_Var19 + 0x20 ) < param_1) break;
            p_Var18 = *(_Rb_tree_node_base**)( p_Var19 + 0x10 );
            p_Var20 = p_Var19;
            if (*(_Rb_tree_node_base**)( p_Var19 + 0x10 ) == (_Rb_tree_node_base*)0x0) goto LAB_00103961;
         };
         p_Var18 = *(_Rb_tree_node_base**)( p_Var19 + 0x18 );
      } while ( *(_Rb_tree_node_base**)( p_Var19 + 0x18 ) != (_Rb_tree_node_base*)0x0 );
      LAB_00103961:if (p_Var1 == p_Var20) goto LAB_001040a0;
      if (*(int*)( p_Var20 + 0x20 ) <= param_1) goto LAB_00103975;
      p_Var18 = (_Rb_tree_node_base*)glslang::TPoolAllocator::allocate(*(ulong*)( this + 0x4c8 ));
      *(int*)( p_Var18 + 0x20 ) = param_1;
      *(undefined4*)( p_Var18 + 0x24 ) = 0;
      if (*(int*)( p_Var20 + 0x20 ) <= param_1) {
         if (param_1 <= *(int*)( p_Var20 + 0x20 )) goto LAB_00103975;
         if (*(_Rb_tree_node_base**)( this + 0x4f0 ) != p_Var20) {
            p_Var19 = (_Rb_tree_node_base*)std::_Rb_tree_increment(p_Var20);
            if (*(int*)( p_Var19 + 0x20 ) <= param_1) goto LAB_00103fd8;
            if (*(long*)( p_Var20 + 0x18 ) == 0) goto LAB_0010449d;
            bVar34 = true;
            goto LAB_00104006;
         }
         goto LAB_0010449d;
      }
      if (*(_Rb_tree_node_base**)( this + 0x4e8 ) != p_Var20) {
         p_Var19 = (_Rb_tree_node_base*)std::_Rb_tree_decrement(p_Var20);
         if (param_1 <= *(int*)( p_Var19 + 0x20 )) goto LAB_00103fd8;
         if (*(long*)( p_Var19 + 0x18 ) != 0) goto LAB_00103e88;
         goto LAB_001040e9;
      }
      LAB_00103e88:bVar34 = true;
      p_Var19 = p_Var20;
      LAB_00103e93:std::_Rb_tree_insert_and_rebalance(bVar34, p_Var18, p_Var19, p_Var1);
      *(long*)( this + 0x4f8 ) = *(long*)( this + 0x4f8 ) + 1;
      p_Var20 = p_Var18;
   }
   LAB_00103975:uVar16 = _LC229;
   if (*(long*)( p_Var30 + 0x28 ) == 0) {
      puVar32 = &_LC0;
      pcVar7 = *(code**)( *(long*)this + 0x230 );
      if (param_1 == 0xffff) {
         if (pcVar7 != getAtomicCounterBlockName) {
            puVar32 = (undefined*)( *pcVar7 )(this);
         }
         __snprintf_chk(local_248, 0x200, 2, 0x200, &_LC228, puVar32);
      } else {
         if (pcVar7 != getAtomicCounterBlockName) {
            puVar32 = (undefined*)( *pcVar7 )(this);
         }
         __snprintf_chk(local_248, 0x200, 2, 0x200, "%s_%d", puVar32, piVar33);
      }
      uVar13 = glslang::GetThreadPoolAllocator();
      puVar15 = (undefined8*)glslang::TPoolAllocator::allocate(uVar13);
      uVar16 = glslang::GetThreadPoolAllocator();
      *puVar15 = uVar16;
      puVar15[1] = puVar15 + 3;
      sVar17 = strlen(local_248);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(puVar15, local_248, local_248 + sVar17);
      uVar13 = glslang::GetThreadPoolAllocator();
      puVar21 = (undefined8*)glslang::TPoolAllocator::allocate(uVar13);
      uVar22 = glslang::GetThreadPoolAllocator();
      uVar16 = _LC229;
      *puVar21 = uVar22;
      for (int i = 0; i < 3; i++) {
         puVar21[( i + 1 )] = 0;
      }
      local_2e8 = &PTR__TType_00111158;
      local_260 = (undefined1[16])0x0;
      local_2c8 = local_2c8 & 0xf0;
      uStack_2e0 = uStack_2e0 & 0xfffffffff8000000 | 0x110;
      uStack_2d0 = uStack_2d0 & 0x8000000400000000 | 6;
      local_290 = 0;
      uStack_2d8 = 0;
      local_2c4 = uVar16;
      local_2bc = local_2bc & 0xffc00000 | 0x1fcfff;
      local_2a8 = 0;
      local_2b8 = local_2b8 | 0x7fffffffffffffff;
      local_2a4 = 0xfffff800;
      local_298 = 0;
      local_2b0 = ( ulong )((uint)local_2b0 & 0xfe000000) | 0x1ffffff;
      local_288 = 0;
      local_2a0 = 0xffffffff00000000;
      local_278 = 0;
      local_268 = local_268 & 0x9fc00000;
      pcVar6 = (char*)puVar15[1];
      local_280 = puVar21;
      uVar13 = glslang::GetThreadPoolAllocator();
      puVar15 = (undefined8*)glslang::TPoolAllocator::allocate(uVar13);
      uVar22 = glslang::GetThreadPoolAllocator();
      *puVar15 = uVar22;
      puVar15[1] = puVar15 + 3;
      if (pcVar6 == (char*)0x0) goto LAB_00104588;
      sVar17 = strlen(pcVar6);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(puVar15, pcVar6, pcVar6 + sVar17);
      local_270 = puVar15;
      if (*(code**)( *(long*)this + 0x220 ) != setUniformBlockDefaults) {
         ( **(code**)( *(long*)this + 0x220 ) )(this, (TType*)&local_2e8);
      }
      local_2c8 = local_2c8 & 0xf0 | 3;
      uVar13 = glslang::GetThreadPoolAllocator();
      pTVar23 = (TVariable*)glslang::TPoolAllocator::allocate(uVar13);
      uVar13 = glslang::GetThreadPoolAllocator();
      pbVar24 = (basic_string*)glslang::TPoolAllocator::allocate(uVar13);
      uVar22 = glslang::GetThreadPoolAllocator();
      *(undefined8*)pbVar24 = uVar22;
      *(basic_string**)( pbVar24 + 8 ) = pbVar24 + 0x18;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(pbVar24, &_LC0, &_LC0);
      TVariable::TVariable(pTVar23, pbVar24, (TType*)&local_2e8, true);
      cVar11 = *(char*)( *(long*)( this + 0x38 ) + 0x4d0 );
      *(TVariable**)( p_Var30 + 0x28 ) = pTVar23;
      if (cVar11 == '\0') {
         if (*(code**)( *(long*)( pTVar23 + 0x28 ) + 0x50 ) == TType::getQualifier) {
            pTVar26 = pTVar23 + 0x38;
         } else {
            pTVar26 = (TVariable*)TType::getQualifier((TType*)( pTVar23 + 0x28 ));
         }
         *(short*)( pTVar26 + 0x20 ) = (short)param_1;
      }
      *(undefined4*)( p_Var20 + 0x24 ) = 0;
      TVar4 = this[0x4c0];
      if (*(code**)( *(long*)pTVar23 + 0x68 ) == TVariable::getWritableType) {
         pTVar23 = pTVar23 + 0x28;
      } else {
         pTVar23 = (TVariable*)TVariable::getWritableType(pTVar23);
      }
      if (*(code**)( *(long*)pTVar23 + 0x50 ) == TType::getQualifier) {
         pTVar23 = pTVar23 + 0x10;
      } else {
         pTVar23 = (TVariable*)( **(code**)( *(long*)pTVar23 + 0x50 ) )();
      }
      *(uint*)( pTVar23 + 0x1c ) = *(uint*)( pTVar23 + 0x1c ) & 0xffc07fff | ( (byte)TVar4 & 0x7f ) << 0xf;
   }
   uVar13 = glslang::GetThreadPoolAllocator();
   ppuVar14 = (undefined**)glslang::TPoolAllocator::allocate(uVar13);
   *(undefined1(*) [16])( ppuVar14 + 0x11 ) = (undefined1[16])0x0;
   *ppuVar14 = (undefined*)&PTR__TType_00111158;
   *(undefined1(*) [16])( ppuVar14 + 0xc ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( ppuVar14 + 0xe ) = (undefined1[16])0x0;
   *(byte*)( ppuVar14 + 4 ) = *(byte*)( ppuVar14 + 4 ) & 0xf0;
   *(uint*)( ppuVar14 + 1 ) = CONCAT22((short)( ( uint ) * (undefined4*)( ppuVar14 + 1 ) >> 0x10 ), 0x100) & 0xf800ffff;
   *(undefined8*)( (long)ppuVar14 + 0x44 ) = 0xfffff800;
   *(undefined2*)( ppuVar14 + 0xb ) = 0;
   *(undefined8*)( (long)ppuVar14 + 0x24 ) = uVar16;
   *(ulong*)( (long)ppuVar14 + 0x2d ) = *(ulong*)( (long)ppuVar14 + 0x2d ) & 0xffffff0000ffc07f | 0xffff001f80;
   *(uint*)( ppuVar14 + 0x10 ) = *(uint*)( ppuVar14 + 0x10 ) & 0x9fc00000;
   ppuVar14[2] = (undefined*)0x0;
   *(undefined1*)( ppuVar14 + 8 ) = 0;
   ppuVar14[7] = (undefined*)( ( ulong )((uint)ppuVar14[7] & 0xfe07ff00) | 0x1f800ff );
   *(undefined4*)( (long)ppuVar14 + 0x4c ) = 0xffffffff;
   *(ulong*)( (long)ppuVar14 + 0x2c ) = *(ulong*)( (long)ppuVar14 + 0x2c ) & 0xffffffff8000 | 0xffff000000004fff;
   ppuVar14[10] = (undefined*)0x0;
   *(ulong*)( (long)ppuVar14 + 0x34 ) = *(ulong*)( (long)ppuVar14 + 0x34 ) | 0x7ff007fffffff;
   ppuVar14[3] = (undefined*)( (ulong)ppuVar14[3] & 0x8000000400000000 );
   TVar2 = param_3[8];
   *(undefined4*)( ppuVar14 + 0x10 ) = *(undefined4*)( param_3 + 0x80 );
   *(TType*)( ppuVar14 + 1 ) = TVar2;
   for (int i = 0; i < 5; i++) {
      puVar32 = *(undefined**)( param_3 + ( 16*i + 24 ) );
      ppuVar14[( 2*i + 2 )] = *(undefined**)( param_3 + ( 16*i + 16 ) );
      ppuVar14[( 2*i + 3 )] = puVar32;
   }
   TVar2 = param_3[9];
   *(byte*)( (long)ppuVar14 + 9 ) = *(byte*)( (long)ppuVar14 + 9 ) & 0xf0 | (byte)TVar2 & 0xf;
   *(byte*)( (long)ppuVar14 + 9 ) = (byte)TVar2 & 0xf | (byte)param_3[9] & 0xf0;
   bVar3 = *(byte*)( (long)ppuVar14 + 10 );
   bVar27 = (byte)param_3[10] & 0xf;
   *(byte*)( (long)ppuVar14 + 10 ) = bVar3 & 0xf0 | bVar27;
   bVar28 = (byte)param_3[10] & 0x10;
   *(byte*)( (long)ppuVar14 + 10 ) = bVar3 & 0xe0 | bVar27 | bVar28;
   puVar9 = *(undefined**)( param_3 + 0x70 );
   puVar10 = *(undefined**)( param_3 + 0x78 );
   puVar32 = *(undefined**)( param_3 + 0x68 );
   ppuVar14[0xc] = *(undefined**)( param_3 + 0x60 );
   ppuVar14[0xe] = puVar9;
   ppuVar14[0xf] = puVar10;
   ppuVar14[0xd] = puVar32;
   puVar32 = *(undefined**)( param_3 + 0x90 );
   ppuVar14[0x11] = *(undefined**)( param_3 + 0x88 );
   ppuVar14[0x12] = puVar32;
   TVar2 = param_3[10];
   *(byte*)( (long)ppuVar14 + 10 ) = bVar3 & 0xc0 | bVar27 | bVar28 | (byte)TVar2 & 0x20;
   *(byte*)( (long)ppuVar14 + 10 ) = bVar3 & 0x80 | bVar27 | bVar28 | (byte)TVar2 & 0x20 | (byte)param_3[10] & 0x40;
   *(ushort*)( (long)ppuVar14 + 10 ) = *(ushort*)( (long)ppuVar14 + 10 ) & 0xfc7f | *(ushort*)( param_3 + 10 ) & 0x380;
   *(byte*)( (long)ppuVar14 + 0xb ) = *(byte*)( (long)ppuVar14 + 0xb ) & 0xfb | (byte)param_3[0xb] & 4;
   pcVar6 = *(char**)( param_4 + 8 );
   uVar13 = glslang::GetThreadPoolAllocator();
   puVar15 = (undefined8*)glslang::TPoolAllocator::allocate(uVar13);
   uVar16 = glslang::GetThreadPoolAllocator();
   *puVar15 = uVar16;
   puVar15[1] = puVar15 + 3;
   if (pcVar6 == (char*)0x0) {
      LAB_00104588:/* WARNING: Subroutine does not return */std::__throw_logic_error("basic_string: construction from null is not valid");
   }
   sVar17 = strlen(pcVar6);
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(puVar15, pcVar6, pcVar6 + sVar17);
   ppuVar14[0xe] = (undefined*)puVar15;
   if (param_5 != (TVector*)0x0) {
      ppuVar14[0xd] = param_5;
   }
   uStack_2e0 = *(ulong*)param_2;
   uStack_2d8 = *(undefined8*)( param_2 + 8 );
   uStack_2d0 = *(ulong*)( param_2 + 0x10 );
   pcVar7 = *(code**)( **(long**)( p_Var30 + 0x28 ) + 0x60 );
   local_2e8 = ppuVar14;
   if (pcVar7 == TVariable::getType) {
      pvVar31 = (vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>*)( *(long**)( p_Var30 + 0x28 ) )[0x12];
      puVar15 = *(undefined8**)( pvVar31 + 0x10 );
      if (puVar15 == *(undefined8**)( pvVar31 + 0x18 )) {
         LAB_0010408f:std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>::_M_realloc_insert<glslang::TTypeLoc_const&>(pvVar31, puVar15, &local_2e8);
         goto LAB_00103c6a;
      }
   } else {
      lVar25 = ( *pcVar7 )();
      pvVar31 = *(vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>**)( lVar25 + 0x68 );
      puVar15 = *(undefined8**)( pvVar31 + 0x10 );
      if (puVar15 == *(undefined8**)( pvVar31 + 0x18 )) goto LAB_0010408f;
   }
   *puVar15 = local_2e8;
   puVar15[1] = uStack_2e0;
   puVar15[2] = uStack_2d8;
   puVar15[3] = uStack_2d0;
   *(undefined8**)( pvVar31 + 0x10 ) = puVar15 + 4;
   LAB_00103c6a:iVar5 = *(int*)( p_Var20 + 0x24 );
   this_00 = *(TSymbolTable**)( this + 0xe8 );
   pTVar8 = *(TSymbol**)( p_Var30 + 0x28 );
   if (iVar5 == 0) {
      cVar11 = TSymbolTable::insert(this_00, pTVar8);
      if (cVar11 == '\0') {
         ( **(code**)( *(long*)this + 0x158 ) )(this, param_2, "failed to insert the global constant buffer", "buffer", &_LC0);
      } else if (*(code**)( *(long*)this + 600 ) == trackLinkage) {
         if (this[0x1c1] == (TParseContextBase)0x0) {
            trackLinkage(this, *(TSymbol**)( p_Var30 + 0x28 ));
         }
      } else {
         ( **(code**)( *(long*)this + 600 ) )(this);
      }
   } else {
      this_01 = *(TSymbolTableLevel**)( *(long*)this_00 + (long)( (int)( *(long*)( this_00 + 8 ) - *(long*)this_00 >> 3 ) + -1 ) * 8 );
      if (*(code**)( *(long*)pTVar8 + 0x18 ) == TSymbol::getName_abi_cxx11_) {
         lVar25 = *(long*)( pTVar8 + 8 );
      } else {
         lVar25 = ( **(code**)( *(long*)pTVar8 + 0x18 ) )(pTVar8);
      }
      uVar13 = *(ulong*)( lVar25 + 0x10 );
      if (uVar13 != 0) {
         sVar17 = 5;
         if (uVar13 < 6) {
            sVar17 = uVar13;
         }
         iVar12 = memcmp(*(void**)( lVar25 + 8 ), "anon@", sVar17);
         if (iVar12 == 0 && (int)sVar17 == 5) {
            TSymbolTableLevel::insertAnonymousMembers(this_01, pTVar8, iVar5);
         }
      }
   }
   *(int*)( p_Var20 + 0x24 ) = *(int*)( p_Var20 + 0x24 ) + 1;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* glslang::TParseContextBase::outputMessage(glslang::TSourceLoc const&, char const*, char const*,
   char const*, glslang::TPrefixType, __va_list_tag*) */void glslang::TParseContextBase::outputMessage(TParseContextBase *this, long *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, int param_6, undefined8 param_7) {
   uint uVar1;
   undefined1 *__src;
   undefined1 auVar2[16];
   ulong *__src_00;
   int iVar3;
   size_t __n;
   long lVar4;
   uint uVar5;
   size_t *psVar6;
   ulong uVar7;
   size_t *psVar9;
   ulong uVar10;
   string *psVar11;
   char *pcVar12;
   char cVar13;
   long in_FS_OFFSET;
   size_t local_670;
   size_t *local_668;
   size_t local_660;
   size_t local_658[2];
   size_t *local_648;
   size_t local_640;
   size_t local_638[2];
   ulong local_628;
   ulong *local_620;
   ulong local_618;
   ulong local_610[3];
   undefined1 local_5f8[32];
   undefined8 local_5d8;
   undefined8 uStack_5d0;
   undefined8 local_5c8;
   undefined8 uStack_5c0;
   undefined8 local_5b8;
   undefined8 uStack_5b0;
   undefined8 local_5a8;
   undefined8 uStack_5a0;
   undefined8 local_598;
   undefined8 uStack_590;
   undefined8 local_588;
   undefined8 uStack_580;
   undefined8 local_578;
   undefined8 uStack_570;
   undefined8 local_568;
   undefined8 uStack_560;
   undefined8 local_558;
   undefined8 uStack_550;
   undefined8 local_548;
   undefined8 uStack_540;
   undefined8 local_538;
   undefined8 uStack_530;
   undefined8 local_528;
   undefined1 uStack_520;
   undefined7 uStack_51f;
   char cStack_518;
   char acStack_517[15];
   undefined1 local_508[1224];
   long local_40;
   ulong uVar8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   __vsnprintf_chk(local_508, 0x4c8, 2, 0x4c8, param_4, param_7, param_2, param_3);
   psVar11 = *(string**)( this + 0x10 );
   switch (param_6) {
      case 0:
    break;
      for (int i = 0; i < 5; i++) {
         case 1:
    glslang::TInfoSinkBase::append((char *)psVar11);
    psVar11 = *(string **)(this + 0x10);
    break;
      }
      default:
    glslang::TInfoSinkBase::append((char *)psVar11);
    psVar11 = *(string **)(this + 0x10);
   }
   uVar5 = *(uint*)( this + 0xd0 );
   __snprintf_chk(local_5f8, 0x18, 2, 0x18, &_LC240, *(undefined4*)( (long)param_1 + 0xc ), param_2, param_3, local_5f8);
   lVar4 = *param_1;
   if (lVar4 == 0) {
      if (( *(long*)( psVar11 + 0x28 ) != 0 ) && ( ( uVar5 & 0x10000 ) != 0 )) goto LAB_001047ab;
      uVar5 = *(uint*)( param_1 + 1 );
      uVar10 = (long)(int)uVar5;
      if ((int)uVar5 < 0) {
         uVar10 = -(long)(int)uVar5;
      }
      uVar7 = ( ulong )(uVar5 >> 0x1f);
      cVar13 = (char)( (int)uVar5 >> 0x1f );
      if (uVar10 < 10) {
         local_668 = local_658;
         std::__cxx11::string::_M_construct(( ulong ) & local_668, '\x01' - cVar13);
         pcVar12 = (char*)( uVar7 + (long)local_668 );
         LAB_00104c55:cVar13 = (char)uVar10 + '0';
      } else {
         if (uVar10 < 100) {
            local_668 = local_658;
            std::__cxx11::string::_M_construct(( ulong ) & local_668, '\x02' - cVar13);
            pcVar12 = (char*)( uVar7 + (long)local_668 );
            local_5d8 = __LC208;
            uStack_5d0 = _UNK_001115e8;
            local_5c8 = __LC209;
            uStack_5c0 = _UNK_001115f8;
            local_5b8 = __LC210;
            uStack_5b0 = _UNK_00111608;
            local_5a8 = __LC211;
            uStack_5a0 = _UNK_00111618;
            local_598 = __LC212;
            uStack_590 = _UNK_00111628;
            local_588 = __LC213;
            uStack_580 = _UNK_00111638;
            local_578 = __LC214;
            uStack_570 = _UNK_00111648;
            local_568 = __LC215;
            uStack_560 = _UNK_00111658;
            local_558 = __LC216;
            uStack_550 = _UNK_00111668;
            local_548 = __LC217;
            uStack_540 = _UNK_00111678;
            local_538 = __LC218;
            uStack_530 = _UNK_00111688;
            local_528 = __LC219;
            uStack_520 = (undefined1)_UNK_00111698;
            uStack_51f = (undefined7)_LC220._0_8_;
            cStack_518 = SUB81(_LC220._0_8_, 7);
            for (int i = 0; i < 8; i++) {
               acStack_517[i] = _LC220[( i + 8 )];
            }
         } else {
            if (uVar10 < 1000) {
               uVar5 = 2;
               iVar3 = 3;
               LAB_00104c70:local_668 = local_658;
               std::__cxx11::string::_M_construct(( ulong ) & local_668, (char)iVar3 - cVar13);
            } else {
               if (uVar10 < 10000) {
                  uVar5 = 3;
                  iVar3 = 4;
                  goto LAB_00104c70;
               }
               iVar3 = 5;
               if (uVar10 < 100000) {
                  LAB_00104c6d:uVar5 = iVar3 - 1;
                  goto LAB_00104c70;
               }
               if (999999 < uVar10) {
                  uVar5 = 6;
                  iVar3 = 7;
                  if (9999999 < uVar10) {
                     if (99999999 < uVar10) {
                        if (uVar10 < 1000000000) {
                           iVar3 = 9;
                           goto LAB_00104c6d;
                        }
                        uVar5 = 9;
                        goto LAB_00104acb;
                     }
                     uVar5 = 7;
                     iVar3 = 8;
                  }
                  goto LAB_00104c70;
               }
               uVar5 = 5;
               LAB_00104acb:local_668 = local_658;
               std::__cxx11::string::_M_construct(( ulong ) & local_668, ( (char)uVar5 + '\x01' ) - cVar13);
            }
            pcVar12 = (char*)( uVar7 + (long)local_668 );
            local_5d8 = __LC208;
            uStack_5d0 = _UNK_001115e8;
            local_5c8 = __LC209;
            uStack_5c0 = _UNK_001115f8;
            local_5b8 = __LC210;
            uStack_5b0 = _UNK_00111608;
            local_5a8 = __LC211;
            uStack_5a0 = _UNK_00111618;
            local_598 = __LC212;
            uStack_590 = _UNK_00111628;
            local_588 = __LC213;
            uStack_580 = _UNK_00111638;
            local_578 = __LC214;
            uStack_570 = _UNK_00111648;
            local_568 = __LC215;
            uStack_560 = _UNK_00111658;
            local_558 = __LC216;
            uStack_550 = _UNK_00111668;
            local_548 = __LC217;
            uStack_540 = _UNK_00111678;
            local_538 = __LC218;
            uStack_530 = _UNK_00111688;
            local_528 = __LC219;
            uStack_520 = (undefined1)_UNK_00111698;
            uStack_51f = (undefined7)_LC220._0_8_;
            cStack_518 = SUB81(_LC220._0_8_, 7);
            for (int i = 0; i < 8; i++) {
               acStack_517[i] = _LC220[( i + 8 )];
            }
            do {
               uVar7 = uVar10;
               auVar2._8_8_ = 0;
               auVar2._0_8_ = uVar7 >> 2;
               uVar10 = ( uVar7 >> 2 ) / 0x19;
               lVar4 = ( uVar7 + ( ( SUB168(auVar2 * ZEXT816(0x28f5c28f5c28f5c3), 8) & 0xfffffffffffffffc ) + uVar10 ) * -0x14 ) * 2;
               cVar13 = *(char*)( (long)&local_5d8 + lVar4 );
               pcVar12[uVar5] = *(char*)( (long)&local_5d8 + lVar4 + 1 );
               uVar1 = uVar5 - 1;
               uVar5 = uVar5 - 2;
               pcVar12[uVar1] = cVar13;
            } while ( 9999 < uVar7 );
            if (uVar7 < 1000) goto LAB_00104c55;
         }
         cVar13 = *(char*)( (long)&local_5d8 + uVar10 * 2 );
         pcVar12[1] = *(char*)( (long)&local_5d8 + uVar10 * 2 + 1 );
      }
      *pcVar12 = cVar13;
   } else {
      if (( ( *(long*)( lVar4 + 8 ) == 0 ) && ( *(long*)( psVar11 + 0x28 ) != 0 ) ) && ( ( uVar5 & 0x10000 ) != 0 )) goto LAB_001047ab;
      local_628 = glslang::GetThreadPoolAllocator();
      local_620 = local_610;
      uVar10 = *(ulong*)( lVar4 + 0x10 );
      __src = *(undefined1**)( lVar4 + 8 );
      if (uVar10 < 0x10) {
         if (uVar10 == 1) {
            local_610[0] = CONCAT71(local_610[0]._1_7_, *__src);
         } else if (uVar10 != 0) goto LAB_00104888;
      } else {
         if ((long)uVar10 < 0) {
            /* WARNING: Subroutine does not return */
            std::__throw_length_error("basic_string::_M_create");
         }
         local_620 = (ulong*)glslang::TPoolAllocator::allocate(local_628);
         local_610[0] = uVar10;
         LAB_00104888:memcpy(local_620, __src, uVar10);
      }
      __src_00 = local_620;
      *(undefined1*)( (long)local_620 + uVar10 ) = 0;
      psVar9 = local_638;
      local_648 = psVar9;
      local_618 = uVar10;
      if (local_620 == (ulong*)0x0) {
         /* WARNING: Subroutine does not return */
         std::__throw_logic_error("basic_string: construction from null is not valid");
      }
      __n = strlen((char*)local_620);
      local_670 = __n;
      if (__n < 0x10) {
         psVar6 = psVar9;
         if (__n == 1) {
            local_638[0] = CONCAT71(local_638[0]._1_7_, (char)*__src_00);
         } else if (__n != 0) goto LAB_00104908;
      } else {
         local_648 = (size_t*)std::__cxx11::string::_M_create((ulong*)&local_648, ( ulong ) & local_670);
         local_638[0] = local_670;
         psVar6 = local_648;
         LAB_00104908:memcpy(psVar6, __src_00, __n);
         psVar6 = local_648;
      }
      local_668 = local_658;
      *(undefined1*)( (long)psVar6 + local_670 ) = 0;
      local_660 = local_670;
      local_640 = local_670;
      if (local_648 == psVar9) {
         uVar10 = local_670 + 1;
         psVar6 = local_668;
         if (7 < (uint)uVar10) {
            uVar7 = 0;
            do {
               uVar5 = (int)uVar7 + 8;
               uVar8 = (ulong)uVar5;
               *(undefined8*)( (long)local_668 + uVar7 ) = *(undefined8*)( (long)psVar9 + uVar7 );
               uVar7 = uVar8;
            } while ( uVar5 < ( (uint)uVar10 & 0xfffffff8 ) );
            psVar6 = (size_t*)( (long)local_668 + uVar8 );
            psVar9 = (size_t*)( uVar8 + (long)psVar9 );
         }
         lVar4 = 0;
         if (( uVar10 & 4 ) != 0) {
            *(int*)psVar6 = (int)*psVar9;
            lVar4 = 4;
         }
         if (( uVar10 & 2 ) != 0) {
            *(undefined2*)( (long)psVar6 + lVar4 ) = *(undefined2*)( (long)psVar9 + lVar4 );
            lVar4 = lVar4 + 2;
         }
         if (( uVar10 & 1 ) != 0) {
            *(undefined1*)( (long)psVar6 + lVar4 ) = *(undefined1*)( (long)psVar9 + lVar4 );
         }
      } else {
         local_668 = local_648;
         local_658[0] = local_638[0];
      }
   }
   glslang::TInfoSinkBase::append(psVar11);
   if (local_668 != local_658) {
      operator_delete(local_668, local_658[0] + 1);
   }
   LAB_001047ab:glslang::TInfoSinkBase::append((char*)psVar11);
   glslang::TInfoSinkBase::append((char*)psVar11);
   pcVar12 = *(char**)( this + 0x10 );
   for (int i = 0; i < 7; i++) {
      glslang::TInfoSinkBase::append(pcVar12);
   }
   if (param_6 == 2) {
      *(int*)( this + 0xd4 ) = *(int*)( this + 0xd4 ) + 1;
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* glslang::TParseContextBase::growGlobalUniformBlock(glslang::TSourceLoc const&, glslang::TType&,
   std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> > const&,
   glslang::TVector<glslang::TTypeLoc>*) */void glslang::TParseContextBase::growGlobalUniformBlock(TParseContextBase *this, TSourceLoc *param_1, TType *param_2, basic_string *param_3, TVector *param_4) {
   TParseContextBase TVar1;
   TType TVar2;
   byte bVar3;
   undefined4 uVar4;
   void *__s2;
   undefined *puVar5;
   vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>> *pvVar6;
   TSymbolTable *this_00;
   TSymbol *pTVar7;
   TSymbolTableLevel *this_01;
   undefined *puVar8;
   undefined *puVar9;
   char cVar10;
   int iVar11;
   int iVar12;
   TType *pTVar13;
   undefined8 uVar14;
   undefined8 *puVar15;
   undefined8 *puVar16;
   code *pcVar17;
   long *plVar18;
   basic_string *pbVar19;
   ulong uVar20;
   undefined **ppuVar21;
   size_t sVar22;
   long *plVar23;
   long lVar24;
   byte bVar25;
   byte bVar26;
   long lVar27;
   uint uVar28;
   ulong uVar29;
   char *pcVar30;
   ulong uVar31;
   long lVar32;
   uint uVar33;
   TVariable *pTVar34;
   char *pcVar35;
   long *plVar36;
   long *plVar37;
   long in_FS_OFFSET;
   bool bVar38;
   undefined **local_1f8;
   ulong uStack_1f0;
   undefined8 uStack_1e8;
   ulong uStack_1e0;
   byte local_1d8;
   undefined8 local_1d4;
   uint local_1cc;
   ulong local_1c8;
   ulong local_1c0;
   undefined1 local_1b8;
   undefined4 local_1b4;
   undefined8 local_1b0;
   undefined8 local_1a8;
   undefined2 local_1a0;
   undefined8 local_198;
   undefined8 *local_190;
   undefined8 local_188;
   undefined8 *local_180;
   uint local_178;
   undefined1 local_170[16];
   undefined8 local_158;
   undefined1 *local_150;
   ulong local_148;
   undefined1 local_140;
   undefined7 uStack_13f;
   undefined8 local_128;
   undefined1 *local_120;
   undefined1 local_110[24];
   undefined8 local_f8;
   undefined1 *local_f0;
   undefined1 local_e0[24];
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_c8[48];
   undefined8 local_98;
   undefined8 *local_90;
   undefined8 local_88;
   undefined8 local_80[4];
   long *local_60;
   undefined8 local_58;
   long local_50[4];
   pTVar34 = *(TVariable**)( this + 0x470 );
   local_50[2] = *(long*)( in_FS_OFFSET + 0x28 );
   if (pTVar34 == (TVariable*)0x0) {
      if (*(code**)( *(long*)this + 0x218 ) == getGlobalUniformBlockName) {
         uVar20 = glslang::GetThreadPoolAllocator();
         puVar16 = (undefined8*)glslang::TPoolAllocator::allocate(uVar20);
         uVar14 = glslang::GetThreadPoolAllocator();
         pcVar30 = "";
         *puVar16 = uVar14;
         pcVar35 = "";
         puVar16[1] = puVar16 + 3;
      } else {
         pcVar35 = (char*)( **(code**)( *(long*)this + 0x218 ) )();
         uVar20 = glslang::GetThreadPoolAllocator();
         puVar16 = (undefined8*)glslang::TPoolAllocator::allocate(uVar20);
         uVar14 = glslang::GetThreadPoolAllocator();
         *puVar16 = uVar14;
         puVar16[1] = puVar16 + 3;
         if (pcVar35 == (char*)0x0) goto LAB_00105cbd;
         sVar22 = strlen(pcVar35);
         pcVar30 = pcVar35 + sVar22;
      }
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(puVar16, pcVar35, pcVar30);
      uVar20 = glslang::GetThreadPoolAllocator();
      puVar15 = (undefined8*)glslang::TPoolAllocator::allocate(uVar20);
      uVar14 = glslang::GetThreadPoolAllocator();
      puVar15[1] = 0;
      *puVar15 = uVar14;
      puVar15[2] = 0;
      puVar15[3] = 0;
      local_1f8 = &PTR__TType_00111158;
      local_1a0 = 0;
      local_1d8 = local_1d8 & 0xf0;
      local_170 = (undefined1[16])0x0;
      uStack_1f0 = uStack_1f0 & 0xfffffffff8000000 | 0x110;
      uStack_1e0 = uStack_1e0 & 0x8000000400000000 | 5;
      local_1b8 = 0;
      uStack_1e8 = 0;
      local_178 = local_178 & 0x9fc00000;
      local_1cc = local_1cc & 0xffc00000 | 0x1fcfff;
      local_1c8 = local_1c8 | 0x7fffffffffffffff;
      local_1d4 = 0xffffffffffffffff;
      local_1b4 = 0xfffff800;
      local_1c0 = ( ulong )((uint)local_1c0 & 0xfe000000) | 0x1ffffff;
      local_1a8 = 0;
      local_1b0 = 0xffffffff00000000;
      pcVar35 = (char*)puVar16[1];
      local_198 = 0;
      local_188 = 0;
      local_190 = puVar15;
      uVar20 = glslang::GetThreadPoolAllocator();
      puVar16 = (undefined8*)glslang::TPoolAllocator::allocate(uVar20);
      uVar14 = glslang::GetThreadPoolAllocator();
      *puVar16 = uVar14;
      puVar16[1] = puVar16 + 3;
      if (pcVar35 == (char*)0x0) goto LAB_00105cbd;
      sVar22 = strlen(pcVar35);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(puVar16, pcVar35, pcVar35 + sVar22);
      local_180 = puVar16;
      if (*(code**)( *(long*)this + 0x220 ) != setUniformBlockDefaults) {
         ( **(code**)( *(long*)this + 0x220 ) )(this, (TType*)&local_1f8);
      }
      uVar20 = glslang::GetThreadPoolAllocator();
      pTVar34 = (TVariable*)glslang::TPoolAllocator::allocate(uVar20);
      uVar20 = glslang::GetThreadPoolAllocator();
      pbVar19 = (basic_string*)glslang::TPoolAllocator::allocate(uVar20);
      uVar14 = glslang::GetThreadPoolAllocator();
      *(undefined8*)pbVar19 = uVar14;
      *(basic_string**)( pbVar19 + 8 ) = pbVar19 + 0x18;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(pbVar19, &_LC0, &_LC0);
      TVariable::TVariable(pTVar34, pbVar19, (TType*)&local_1f8, true);
      *(TVariable**)( this + 0x470 ) = pTVar34;
      *(undefined4*)( this + 0x480 ) = 0;
   }
   uVar4 = *(undefined4*)( this + 0x478 );
   if (*(code**)( *(long*)pTVar34 + 0x68 ) == TVariable::getWritableType) {
      pTVar34 = pTVar34 + 0x28;
   } else {
      pTVar34 = (TVariable*)( **(code**)( *(long*)pTVar34 + 0x68 ) )(pTVar34);
   }
   if (*(code**)( *(long*)pTVar34 + 0x50 ) == TType::getQualifier) {
      pTVar34 = pTVar34 + 0x10;
   } else {
      pTVar34 = (TVariable*)( **(code**)( *(long*)pTVar34 + 0x50 ) )();
   }
   *(short*)( pTVar34 + 0x20 ) = (short)uVar4;
   plVar23 = *(long**)( this + 0x470 );
   TVar1 = this[0x47c];
   if (*(code**)( *plVar23 + 0x68 ) == TVariable::getWritableType) {
      plVar18 = plVar23 + 5;
      pcVar17 = *(code**)( plVar23[5] + 0x50 );
      if (pcVar17 != TType::getQualifier) goto LAB_0010541d;
      LAB_00104f89:plVar18 = plVar18 + 2;
   } else {
      plVar18 = (long*)( **(code**)( *plVar23 + 0x68 ) )();
      pcVar17 = *(code**)( *plVar18 + 0x50 );
      if (pcVar17 == TType::getQualifier) goto LAB_00104f89;
      LAB_0010541d:plVar18 = (long*)( *pcVar17 )();
   }
   *(uint*)( (long)plVar18 + 0x1c ) = *(uint*)( (long)plVar18 + 0x1c ) & 0xffc07fff | ( (byte)TVar1 & 0x7f ) << 0xf;
   lVar24 = **(long**)( this + 0xe8 );
   lVar27 = (long)( (int)( ( *(long**)( this + 0xe8 ) )[1] - lVar24 >> 3 ) + -2 );
   do {
      lVar32 = *(long*)( lVar24 + 8 + lVar27 * 8 );
      plVar18 = *(long**)( lVar32 + 0x18 );
      plVar23 = (long*)( lVar32 + 0x10 );
      if (plVar18 == (long*)0x0) {
         LAB_001050e1:bVar38 = true;
      } else {
         uVar20 = *(ulong*)( param_3 + 0x10 );
         __s2 = *(void**)( param_3 + 8 );
         plVar37 = plVar23;
         do {
            while (true) {
               plVar36 = plVar18;
               uVar31 = plVar36[6];
               uVar29 = uVar20;
               if (uVar31 <= uVar20) {
                  uVar29 = uVar31;
               }
               if (( uVar29 != 0 ) && ( iVar11 = iVar11 != 0 )) break;
               lVar32 = uVar31 - uVar20;
               if (lVar32 < 0x80000000) {
                  if (-0x80000001 < lVar32) {
                     iVar11 = (int)lVar32;
                     break;
                  }
                  goto LAB_00105020;
               }
               LAB_00105069:plVar18 = (long*)plVar36[2];
               plVar37 = plVar36;
               if (plVar18 == (long*)0x0) goto LAB_00105075;
            };
            if (-1 < iVar11) goto LAB_00105069;
            LAB_00105020:plVar18 = (long*)plVar36[3];
         } while ( plVar18 != (long*)0x0 );
         LAB_00105075:bVar38 = true;
         if (plVar23 != plVar37) {
            uVar31 = plVar37[6];
            uVar29 = uVar20;
            if (uVar31 <= uVar20) {
               uVar29 = uVar31;
            }
            if (( uVar29 == 0 ) || ( iVar11 = iVar11 == 0 )) {
               lVar32 = uVar20 - uVar31;
               if (lVar32 < 0x80000000) {
                  if (lVar32 < -0x80000000) goto LAB_001050e1;
                  iVar11 = (int)lVar32;
                  goto LAB_001050dd;
               }
            } else {
               LAB_001050dd:if (iVar11 < 0) goto LAB_001050e1;
            }
            plVar18 = (long*)plVar37[9];
            bVar38 = plVar18 == (long*)0x0;
         }
      }
      uVar20 = (ulong)lVar27 >> 0x18;
      lVar27 = lVar27 + -1;
   } while ( ( bVar38 & (byte)~(byte)uVar20 >> 7 ) != 0 );
   if (plVar18 == (long*)0x0) {
      uVar20 = glslang::GetThreadPoolAllocator();
      ppuVar21 = (undefined**)glslang::TPoolAllocator::allocate(uVar20);
      *ppuVar21 = (undefined*)&PTR__TType_00111158;
      *(byte*)( ppuVar21 + 4 ) = *(byte*)( ppuVar21 + 4 ) & 0xf0;
      *(undefined1(*) [16])( ppuVar21 + 0x11 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( ppuVar21 + 0xc ) = (undefined1[16])0x0;
      *(uint*)( ppuVar21 + 1 ) = CONCAT22((short)( ( uint ) * (undefined4*)( ppuVar21 + 1 ) >> 0x10 ), 0x100) & 0xf800ffff;
      *(undefined8*)( (long)ppuVar21 + 0x44 ) = 0xfffff800;
      *(undefined2*)( ppuVar21 + 0xb ) = 0;
      *(undefined1(*) [16])( ppuVar21 + 0xe ) = (undefined1[16])0x0;
      *(ulong*)( (long)ppuVar21 + 0x2d ) = *(ulong*)( (long)ppuVar21 + 0x2d ) & 0xffffff0000ffc07f | 0xffff001f80;
      *(uint*)( ppuVar21 + 0x10 ) = *(uint*)( ppuVar21 + 0x10 ) & 0x9fc00000;
      ppuVar21[2] = (undefined*)0x0;
      *(undefined8*)( (long)ppuVar21 + 0x24 ) = 0xffffffffffffffff;
      ppuVar21[7] = (undefined*)( ( ulong )((uint)ppuVar21[7] & 0xfe07ff00) | 0x1f800ff );
      *(undefined1*)( ppuVar21 + 8 ) = 0;
      *(ulong*)( (long)ppuVar21 + 0x2c ) = *(ulong*)( (long)ppuVar21 + 0x2c ) & 0xffffffff8000 | 0xffff000000004fff;
      *(undefined4*)( (long)ppuVar21 + 0x4c ) = 0xffffffff;
      *(ulong*)( (long)ppuVar21 + 0x34 ) = *(ulong*)( (long)ppuVar21 + 0x34 ) | 0x7ff007fffffff;
      ppuVar21[10] = (undefined*)0x0;
      ppuVar21[3] = (undefined*)( (ulong)ppuVar21[3] & 0x8000000400000000 );
      TVar2 = param_2[8];
      *(undefined4*)( ppuVar21 + 0x10 ) = *(undefined4*)( param_2 + 0x80 );
      *(TType*)( ppuVar21 + 1 ) = TVar2;
      for (int i = 0; i < 5; i++) {
         puVar5 = *(undefined**)( param_2 + ( 16*i + 24 ) );
         ppuVar21[( 2*i + 2 )] = *(undefined**)( param_2 + ( 16*i + 16 ) );
         ppuVar21[( 2*i + 3 )] = puVar5;
      }
      TVar2 = param_2[9];
      *(byte*)( (long)ppuVar21 + 9 ) = *(byte*)( (long)ppuVar21 + 9 ) & 0xf0 | (byte)TVar2 & 0xf;
      *(byte*)( (long)ppuVar21 + 9 ) = (byte)TVar2 & 0xf | (byte)param_2[9] & 0xf0;
      bVar3 = *(byte*)( (long)ppuVar21 + 10 );
      bVar25 = (byte)param_2[10] & 0xf;
      *(byte*)( (long)ppuVar21 + 10 ) = bVar3 & 0xf0 | bVar25;
      bVar26 = (byte)param_2[10] & 0x10;
      *(byte*)( (long)ppuVar21 + 10 ) = bVar3 & 0xe0 | bVar25 | bVar26;
      puVar8 = *(undefined**)( param_2 + 0x70 );
      puVar9 = *(undefined**)( param_2 + 0x78 );
      puVar5 = *(undefined**)( param_2 + 0x68 );
      ppuVar21[0xc] = *(undefined**)( param_2 + 0x60 );
      ppuVar21[0xe] = puVar8;
      ppuVar21[0xf] = puVar9;
      ppuVar21[0xd] = puVar5;
      puVar5 = *(undefined**)( param_2 + 0x90 );
      ppuVar21[0x11] = *(undefined**)( param_2 + 0x88 );
      ppuVar21[0x12] = puVar5;
      TVar2 = param_2[10];
      *(byte*)( (long)ppuVar21 + 10 ) = bVar3 & 0xc0 | bVar25 | bVar26 | (byte)TVar2 & 0x20;
      *(byte*)( (long)ppuVar21 + 10 ) = bVar3 & 0x80 | bVar25 | bVar26 | (byte)TVar2 & 0x20 | (byte)param_2[10] & 0x40;
      *(ushort*)( (long)ppuVar21 + 10 ) = *(ushort*)( (long)ppuVar21 + 10 ) & 0xfc7f | *(ushort*)( param_2 + 10 ) & 0x380;
      *(byte*)( (long)ppuVar21 + 0xb ) = *(byte*)( (long)ppuVar21 + 0xb ) & 0xfb | (byte)param_2[0xb] & 4;
      pcVar35 = *(char**)( param_3 + 8 );
      uVar20 = glslang::GetThreadPoolAllocator();
      puVar16 = (undefined8*)glslang::TPoolAllocator::allocate(uVar20);
      uVar14 = glslang::GetThreadPoolAllocator();
      *puVar16 = uVar14;
      puVar16[1] = puVar16 + 3;
      if (pcVar35 == (char*)0x0) {
         LAB_00105cbd:/* WARNING: Subroutine does not return */std::__throw_logic_error("basic_string: construction from null is not valid");
      }
      sVar22 = strlen(pcVar35);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(puVar16, pcVar35, pcVar35 + sVar22);
      ppuVar21[0xe] = (undefined*)puVar16;
      if (param_4 != (TVector*)0x0) {
         ppuVar21[0xd] = param_4;
      }
      uStack_1f0 = *(ulong*)param_1;
      uStack_1e8 = *(undefined8*)( param_1 + 8 );
      uStack_1e0 = *(ulong*)( param_1 + 0x10 );
      pcVar17 = *(code**)( **(long**)( this + 0x470 ) + 0x60 );
      local_1f8 = ppuVar21;
      if (pcVar17 == TVariable::getType) {
         plVar23 = *(long**)( this + 0x470 ) + 5;
      } else {
         plVar23 = (long*)( *pcVar17 )();
      }
      pvVar6 = (vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>*)plVar23[0xd];
      puVar16 = *(undefined8**)( pvVar6 + 0x10 );
      if (puVar16 == *(undefined8**)( pvVar6 + 0x18 )) {
         std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>::_M_realloc_insert<glslang::TTypeLoc_const&>(pvVar6, puVar16, &local_1f8);
      } else {
         *puVar16 = local_1f8;
         puVar16[1] = uStack_1f0;
         puVar16[2] = uStack_1e8;
         puVar16[3] = uStack_1e0;
         *(undefined8**)( pvVar6 + 0x10 ) = puVar16 + 4;
      }
      iVar11 = *(int*)( this + 0x480 );
      this_00 = *(TSymbolTable**)( this + 0xe8 );
      pTVar7 = *(TSymbol**)( this + 0x470 );
      if (iVar11 == 0) {
         cVar10 = TSymbolTable::insert(this_00, pTVar7);
         if (cVar10 == '\0') {
            ( **(code**)( *(long*)this + 0x158 ) )(this, param_1, "failed to insert the global constant buffer", "uniform", &_LC0);
         } else if (*(code**)( *(long*)this + 600 ) == trackLinkage) {
            if (this[0x1c1] == (TParseContextBase)0x0) {
               trackLinkage(this, *(TSymbol**)( this + 0x470 ));
            }
         } else {
            ( **(code**)( *(long*)this + 600 ) )(this);
         }
      } else {
         this_01 = *(TSymbolTableLevel**)( *(long*)this_00 + (long)( (int)( *(long*)( this_00 + 8 ) - *(long*)this_00 >> 3 ) + -1 ) * 8 );
         if (*(code**)( *(long*)pTVar7 + 0x18 ) == TSymbol::getName_abi_cxx11_) {
            lVar24 = *(long*)( pTVar7 + 8 );
         } else {
            lVar24 = ( **(code**)( *(long*)pTVar7 + 0x18 ) )(pTVar7);
         }
         uVar20 = *(ulong*)( lVar24 + 0x10 );
         if (uVar20 != 0) {
            sVar22 = 5;
            if (uVar20 < 6) {
               sVar22 = uVar20;
            }
            iVar12 = memcmp(*(void**)( lVar24 + 8 ), "anon@", sVar22);
            if (iVar12 == 0 && (int)sVar22 == 5) {
               TSymbolTableLevel::insertAnonymousMembers(this_01, pTVar7, iVar11);
            }
         }
      }
      *(int*)( this + 0x480 ) = *(int*)( this + 0x480 ) + 1;
      goto LAB_0010512b;
   }
   pTVar13 = (TType*)( **(code**)( *plVar18 + 0x60 ) )(plVar18);
   cVar10 = TType::operator ==(param_2, pTVar13);
   if (cVar10 != '\0') goto LAB_0010512b;
   local_158 = glslang::GetThreadPoolAllocator();
   local_140 = 0;
   local_148 = 0;
   local_150 = &local_140;
   uVar14 = ( **(code**)( *plVar18 + 0x60 ) )(plVar18);
   local_f8 = glslang::GetThreadPoolAllocator();
   local_f0 = local_e0;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_f8, &_LC0, &_LC0);
   local_128 = glslang::GetThreadPoolAllocator();
   local_120 = local_110;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_128, &_LC0, &_LC0);
   TType::getCompleteString(local_c8, uVar14, 0, 1, 1, 1, &local_128, &local_f8);
   puVar15 = (undefined8*)std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_replace(local_c8, 0, 0, "Redeclaration: already declared as \"", 0x24);
   local_90 = local_80;
   local_98 = *puVar15;
   puVar16 = puVar15 + 3;
   if ((undefined8*)puVar15[1] == puVar16) {
      local_88 = puVar15[2];
      uVar20 = local_88 + 1;
      uVar28 = (uint)uVar20;
      if (7 < uVar28) {
         *(undefined8*)( (long)local_80 + ( ( uVar20 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)puVar15 + ( uVar20 & 0xffffffff ) + 0x10 );
         if (7 < uVar28 - 1) {
            uVar33 = 0;
            do {
               uVar20 = (ulong)uVar33;
               uVar33 = uVar33 + 8;
               *(undefined8*)( (long)local_90 + uVar20 ) = *(undefined8*)( (long)puVar16 + uVar20 );
            } while ( uVar33 < ( uVar28 - 1 & 0xfffffff8 ) );
         }
         goto LAB_001052a0;
      }
      if (( uVar20 & 4 ) == 0) {
         if (uVar28 != 0) {
            local_80[0] = CONCAT71(local_80[0]._1_7_, *(undefined1*)( puVar15 + 3 ));
            if (( uVar20 & 2 ) == 0) goto LAB_001052a0;
            *(undefined2*)( (long)local_80 + ( ( uVar20 & 0xffffffff ) - 2 ) ) = *(undefined2*)( (long)puVar15 + ( uVar20 & 0xffffffff ) + 0x16 );
            local_88 = puVar15[2];
         }
      } else {
         local_80[0] = CONCAT44(local_80[0]._4_4_, *(undefined4*)( puVar15 + 3 ));
         *(undefined4*)( (long)local_80 + ( ( uVar20 & 0xffffffff ) - 4 ) ) = *(undefined4*)( (long)puVar15 + ( uVar20 & 0xffffffff ) + 0x14 );
         local_88 = puVar15[2];
      }
   } else {
      local_80[0] = puVar15[3];
      local_90 = (undefined8*)puVar15[1];
      LAB_001052a0:local_88 = puVar15[2];
   }
   puVar15[1] = puVar16;
   puVar15[2] = 0;
   *(undefined1*)( puVar15 + 3 ) = 0;
   puVar16 = (undefined8*)std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, "\"");
   local_60 = local_50;
   local_80[3] = *puVar16;
   plVar23 = puVar16 + 3;
   if ((long*)puVar16[1] == plVar23) {
      local_58 = puVar16[2];
      uVar20 = local_58 + 1;
      uVar28 = (uint)uVar20;
      if (7 < uVar28) {
         *(undefined8*)( (long)local_50 + ( ( uVar20 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)puVar16 + ( uVar20 & 0xffffffff ) + 0x10 );
         if (7 < uVar28 - 1) {
            uVar33 = 0;
            do {
               uVar20 = (ulong)uVar33;
               uVar33 = uVar33 + 8;
               *(undefined8*)( (long)local_60 + uVar20 ) = *(undefined8*)( (long)plVar23 + uVar20 );
            } while ( uVar33 < ( uVar28 - 1 & 0xfffffff8 ) );
         }
         goto LAB_00105310;
      }
      if (( uVar20 & 4 ) == 0) {
         if (uVar28 != 0) {
            local_50[0] = CONCAT71(local_50[0]._1_7_, *(undefined1*)( puVar16 + 3 ));
            if (( uVar20 & 2 ) == 0) goto LAB_00105310;
            *(undefined2*)( (long)local_50 + ( ( uVar20 & 0xffffffff ) - 2 ) ) = *(undefined2*)( (long)puVar16 + ( uVar20 & 0xffffffff ) + 0x16 );
            local_58 = puVar16[2];
         }
      } else {
         local_50[0] = CONCAT44(local_50[0]._4_4_, *(undefined4*)( puVar16 + 3 ));
         *(undefined4*)( (long)local_50 + ( ( uVar20 & 0xffffffff ) - 4 ) ) = *(undefined4*)( (long)puVar16 + ( uVar20 & 0xffffffff ) + 0x14 );
         local_58 = puVar16[2];
      }
   } else {
      local_50[0] = puVar16[3];
      local_60 = (long*)puVar16[1];
      LAB_00105310:local_58 = puVar16[2];
   }
   puVar16[2] = 0;
   puVar16[1] = plVar23;
   *(undefined1*)( puVar16 + 3 ) = 0;
   if (0x7fffffffffffffff - local_148 < local_58) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::append");
   }
   uVar20 = local_58 + local_148;
   if (local_150 == &local_140) {
      uVar31 = 0xf;
   } else {
      uVar31 = CONCAT71(uStack_13f, local_140);
   }
   if (uVar31 < uVar20) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_158, local_148, 0, (char*)local_60, local_58);
   } else if (local_58 != 0) {
      if (local_58 == 1) {
         local_150[local_148] = (char)*local_60;
      } else {
         memcpy(local_150 + local_148, local_60, local_58);
      }
   }
   local_150[uVar20] = 0;
   local_148 = uVar20;
   ( **(code**)( *(long*)this + 0x158 ) )(this, param_1, &_LC0, *(undefined8*)( param_3 + 8 ), local_150);
   LAB_0010512b:if (local_50[2] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* glslang::TParseContextBase::finish() */void glslang::TParseContextBase::finish(TParseContextBase *this) {
   long *plVar1;
   long lVar2;
   void *__s2;
   ulong uVar3;
   char *__src;
   ulong *__s;
   char cVar4;
   int iVar5;
   long lVar6;
   ulong uVar7;
   ulong uVar8;
   undefined8 *puVar9;
   undefined8 uVar10;
   size_t sVar11;
   long *plVar12;
   long lVar14;
   long *plVar15;
   long lVar16;
   long lVar17;
   long *plVar18;
   long in_FS_OFFSET;
   bool bVar19;
   undefined8 *local_70;
   undefined8 local_68;
   ulong *local_60;
   ulong local_58;
   ulong local_50[2];
   long local_40;
   code *pcVar13;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x1c1] == (TParseContextBase)0x0) {
      lVar2 = *(long*)( this + 0x100 );
      for (lVar16 = *(long*)( this + 0xf8 ); lVar16 != lVar2; lVar16 = lVar16 + 0x28) {
         lVar6 = **(long**)( this + 0xe8 );
         lVar17 = (long)( (int)( ( *(long**)( this + 0xe8 ) )[1] - lVar6 >> 3 ) + -2 );
         do {
            lVar14 = *(long*)( lVar6 + 8 + lVar17 * 8 );
            plVar15 = *(long**)( lVar14 + 0x18 );
            plVar1 = (long*)( lVar14 + 0x10 );
            if (plVar15 == (long*)0x0) {
               LAB_00105e62:bVar19 = true;
            } else {
               uVar8 = *(ulong*)( lVar16 + 0x10 );
               __s2 = *(void**)( lVar16 + 8 );
               plVar18 = plVar1;
               do {
                  while (true) {
                     uVar3 = plVar15[6];
                     uVar7 = uVar8;
                     if (uVar3 <= uVar8) {
                        uVar7 = uVar3;
                     }
                     if (( uVar7 != 0 ) && ( iVar5 = iVar5 != 0 )) break;
                     lVar14 = uVar3 - uVar8;
                     if (lVar14 < 0x80000000) {
                        if (-0x80000001 < lVar14) {
                           iVar5 = (int)lVar14;
                           break;
                        }
                        goto LAB_00105da0;
                     }
                     LAB_00105de9:plVar12 = (long*)plVar15[2];
                     plVar18 = plVar15;
                     plVar15 = plVar12;
                     if (plVar12 == (long*)0x0) goto LAB_00105df5;
                  };
                  if (-1 < iVar5) goto LAB_00105de9;
                  LAB_00105da0:plVar15 = (long*)plVar15[3];
               } while ( plVar15 != (long*)0x0 );
               LAB_00105df5:bVar19 = true;
               if (plVar1 != plVar18) {
                  uVar3 = plVar18[6];
                  uVar7 = uVar8;
                  if (uVar3 <= uVar8) {
                     uVar7 = uVar3;
                  }
                  if (( uVar7 == 0 ) || ( iVar5 = iVar5 == 0 )) {
                     lVar14 = uVar8 - uVar3;
                     if (lVar14 < 0x80000000) {
                        if (lVar14 < -0x80000000) goto LAB_00105e62;
                        iVar5 = (int)lVar14;
                        goto LAB_00105e5a;
                     }
                  } else {
                     LAB_00105e5a:if (iVar5 < 0) goto LAB_00105e62;
                  }
                  plVar15 = (long*)plVar18[9];
                  bVar19 = plVar15 == (long*)0x0;
               }
            }
            uVar8 = (ulong)lVar17 >> 0x18;
            lVar17 = lVar17 + -1;
         } while ( ( bVar19 & (byte)~(byte)uVar8 >> 7 ) != 0 );
         lVar6 = ( **(code**)( *plVar15 + 0x68 ) )(plVar15);
         plVar1 = *(long**)( *(long*)( lVar6 + 0x68 ) + 0x10 );
         for (plVar15 = *(long**)( *(long*)( lVar6 + 0x68 ) + 8 ); plVar15 != plVar1; plVar15 = plVar15 + 4) {
            plVar18 = (long*)*plVar15;
            pcVar13 = *(code**)( *plVar18 + 0x140 );
            if (pcVar13 == TType::isOpaque) {
               if (( *(byte*)( plVar18 + 1 ) < 0x15 ) && ( ( 0x1a6000UL >> ( ( ulong ) * (byte*)( plVar18 + 1 ) & 0x3f ) & 1 ) != 0 )) {
                  pcVar13 = *(code**)( *plVar18 + 0x48 );
                  if (pcVar13 == TType::getSampler) goto LAB_00105ee0;
                  LAB_001060af:plVar12 = (long*)( *pcVar13 )();
                  plVar18 = (long*)*plVar15;
                  goto LAB_00105ee7;
               }
            } else {
               cVar4 = ( *pcVar13 )();
               if (cVar4 != '\0') {
                  plVar18 = (long*)*plVar15;
                  pcVar13 = *(code**)( *plVar18 + 0x48 );
                  if (pcVar13 != TType::getSampler) goto LAB_001060af;
                  LAB_00105ee0:plVar12 = plVar18 + 0x10;
                  LAB_00105ee7:*(undefined4*)plVar12 = 0;
                  *(undefined1*)( plVar18 + 1 ) = 8;
                  local_68 = glslang::GetThreadPoolAllocator();
                  local_60 = local_50;
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_68, &_LC415);
                  pcVar13 = *(code**)( *(long*)*plVar15 + 0x30 );
                  if (pcVar13 == TType::getFieldName_abi_cxx11_) {
                     lVar6 = ( (long*)*plVar15 )[0xe];
                  } else {
                     lVar6 = ( *pcVar13 )();
                  }
                  uVar8 = *(ulong*)( lVar6 + 0x10 );
                  __src = *(char**)( lVar6 + 8 );
                  if (0x7fffffffffffffff - local_58 < uVar8) {
                     LAB_001063e1:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::append");
                  }
                  uVar3 = uVar8 + local_58;
                  uVar7 = local_50[0];
                  if (local_60 == local_50) {
                     uVar7 = 0xf;
                  }
                  if (uVar7 < uVar3) {
                     std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_68, local_58, 0, __src, uVar8);
                  } else if (uVar8 != 0) {
                     if (uVar8 == 1) {
                        *(char*)( (long)local_60 + local_58 ) = *__src;
                     } else {
                        memcpy((char*)( (long)local_60 + local_58 ), __src, uVar8);
                     }
                  }
                  *(undefined1*)( (long)local_60 + uVar3 ) = 0;
                  local_58 = uVar3;
                  if (0x7fffffffffffffff - uVar3 < 2) goto LAB_001063e1;
                  uVar8 = uVar3 + 2;
                  uVar7 = local_50[0];
                  if (local_60 == local_50) {
                     uVar7 = 0xf;
                  }
                  if (uVar7 < uVar8) {
                     std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_68, uVar3, 0, "*/", 2);
                  } else {
                     *(undefined2*)( (long)local_60 + uVar3 ) = 0x2f2a;
                  }
                  __s = local_60;
                  *(undefined1*)( (long)local_60 + uVar3 + 2 ) = 0;
                  plVar18 = (long*)*plVar15;
                  local_58 = uVar8;
                  if (*(code**)( *plVar18 + 0x20 ) == TType::setFieldName) {
                     uVar8 = glslang::GetThreadPoolAllocator();
                     puVar9 = (undefined8*)glslang::TPoolAllocator::allocate(uVar8);
                     uVar10 = glslang::GetThreadPoolAllocator();
                     *puVar9 = uVar10;
                     puVar9[1] = puVar9 + 3;
                     if (__s == (ulong*)0x0) {
                        /* WARNING: Subroutine does not return */
                        std::__throw_logic_error("basic_string: construction from null is not valid");
                     }
                     sVar11 = strlen((char*)__s);
                     std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(puVar9, __s, (long)__s + sVar11);
                     plVar18[0xe] = (long)puVar9;
                  } else {
                     ( **(code**)( *plVar18 + 0x20 ) )(plVar18, (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_68);
                  }
               }
            }
         }
      }
      uVar8 = glslang::GetThreadPoolAllocator();
      puVar9 = (undefined8*)glslang::TPoolAllocator::allocate(uVar8);
      puVar9[2] = 0;
      puVar9[1] = 0;
      *(undefined4*)( puVar9 + 3 ) = 0;
      puVar9[4] = &PTR__TType_00111158;
      *(ushort*)( (long)puVar9 + 0x4c ) = *(ushort*)( (long)puVar9 + 0x4c ) | 0xfff;
      *(byte*)( puVar9 + 8 ) = *(byte*)( puVar9 + 8 ) & 0xf0;
      puVar9[6] = 0;
      *(uint*)( puVar9 + 5 ) = *(uint*)( puVar9 + 5 ) & 0xf8000000 | 0x101;
      puVar9[7] = puVar9[7] & 0x8000000400000000;
      *(uint*)( puVar9 + 0x14 ) = *(uint*)( puVar9 + 0x14 ) & 0x9fc00000;
      *(undefined8*)( (long)puVar9 + 0x44 ) = 0xffffffffffffffff;
      *(undefined4*)( (long)puVar9 + 0x5d ) = 0;
      *(ulong*)( (long)puVar9 + 0x4d ) = ( ulong )(( uint ) * (undefined8*)( (long)puVar9 + 0x4d ) & 0xffc00f) | 0xffffffffff001fc0;
      *(undefined4*)( (long)puVar9 + 100 ) = 0xfffff800;
      *(ulong*)( (long)puVar9 + 0x55 ) = *(ulong*)( (long)puVar9 + 0x55 ) & 0xfe000000800000 | 0x1ffffff7fffff;
      puVar9[0xd] = 0xffffffff00000000;
      *(undefined2*)( puVar9 + 0xf ) = 0;
      puVar9[0xe] = 0;
      puVar9[0x17] = 0;
      *puVar9 = glslang::TIntermediate::addSymbolLinkageNodes;
      *(undefined1(*) [16])( puVar9 + 0x15 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( puVar9 + 0x10 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( puVar9 + 0x12 ) = (undefined1[16])0x0;
      uVar10 = glslang::GetThreadPoolAllocator();
      puVar9[0x19] = 0;
      puVar9[0x18] = uVar10;
      puVar9[0x1a] = 0;
      puVar9[0x1b] = 0;
      uVar10 = glslang::GetThreadPoolAllocator();
      puVar9[0x1d] = 0;
      puVar9[0x1c] = uVar10;
      puVar9[0x1e] = 0;
      puVar9[0x1f] = 0;
      uVar10 = glslang::GetThreadPoolAllocator();
      *(undefined1*)( puVar9 + 0x23 ) = 0;
      puVar9[0x20] = uVar10;
      puVar9[0x21] = puVar9 + 0x23;
      puVar9[0x22] = 0;
      *(undefined1*)( puVar9 + 0x25 ) = 0;
      puVar9[0x26] = 0;
      uVar10 = glslang::GetThreadPoolAllocator();
      *(undefined1*)( puVar9 + 0x2a ) = 0;
      puVar9[0x27] = uVar10;
      puVar9[0x28] = puVar9 + 0x2a;
      puVar9[0x29] = 0;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_replace((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)( puVar9 + 0x27 ), 0, 0, "", 0);
      *(undefined4*)( puVar9 + 0x2c ) = 0xffffffff;
      lVar16 = *(long*)( this + 0x1d0 );
      *(undefined4*)( puVar9 + 0x2d ) = 0;
      local_70 = puVar9;
      if (lVar16 != *(long*)( this + 0x1d8 )) {
         do {
            lVar16 = lVar16 + 8;
            glslang::TIntermediate::addSymbolLinkageNode(*(TIntermAggregate***)( this + 0x38 ), (TSymbol*)&local_70);
         } while ( *(long*)( this + 0x1d8 ) != lVar16 );
      }
      glslang::TIntermediate::addSymbolLinkageNodes(*(undefined8*)( this + 0x38 ), (TSymbol*)&local_70, *(undefined4*)( this + 0x1c ), *(undefined8*)( this + 0xe8 ));
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* glslang::TType::~TType() */void glslang::TType::~TType(TType *this) {
   return;
}/* glslang::TType::hideMember() */void glslang::TType::hideMember(TType *this) {
   *(ushort*)( this + 8 ) = *(ushort*)( this + 8 ) & 0xf000 | 0x100;
   return;
}/* glslang::TType::hiddenMember() const */bool glslang::TType::hiddenMember(TType *this) {
   return this[8] == (TType)0x0;
}/* glslang::TType::getTypeName[abi:cxx11]() const */undefined8 glslang::TType::getTypeName_abi_cxx11_(TType *this) {
   return *(undefined8*)( this + 0x78 );
}/* glslang::TType::getFieldName[abi:cxx11]() const */undefined8 glslang::TType::getFieldName_abi_cxx11_(TType *this) {
   return *(undefined8*)( this + 0x70 );
}/* glslang::TType::getBasicType() const */TType glslang::TType::getBasicType(TType *this) {
   return this[8];
}/* glslang::TType::getSampler() const */TType * __thiscall glslang::TType::getSampler(TType *this){
   return this + 0x80;
}/* glslang::TType::getSampler() */TType * __thiscall glslang::TType::getSampler(TType *this){
   return this + 0x80;
}/* glslang::TType::getQualifier() */TType * __thiscall glslang::TType::getQualifier(TType *this){
   return this + 0x10;
}/* glslang::TType::getQualifier() const */TType * __thiscall glslang::TType::getQualifier(TType *this){
   return this + 0x10;
}/* glslang::TType::getVectorSize() const */byte glslang::TType::getVectorSize(TType *this) {
   return (byte)this[9] & 0xf;
}/* glslang::TType::getMatrixCols() const */byte glslang::TType::getMatrixCols(TType *this) {
   return (byte)this[9] >> 4;
}/* glslang::TType::getMatrixRows() const */byte glslang::TType::getMatrixRows(TType *this) {
   return (byte)this[10] & 0xf;
}/* glslang::TType::getOuterArraySize() const */undefined4 glslang::TType::getOuterArraySize(TType *this) {
   return **(undefined4**)( *(long*)( *(long*)( this + 0x60 ) + 8 ) + 8 );
}/* glslang::TType::getOuterArrayNode() const */undefined8 glslang::TType::getOuterArrayNode(TType *this) {
   return *(undefined8*)( *(long*)( *(long*)( *(long*)( this + 0x60 ) + 8 ) + 8 ) + 8 );
}/* glslang::TType::getCumulativeArraySize() const */int glslang::TType::getCumulativeArraySize(TType *this) {
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
         } while ( piVar3 != piVar1 );
         return iVar4;
      }
   }
   return 1;
}/* glslang::TType::getImplicitArraySize() const */int glslang::TType::getImplicitArraySize(TType *this) {
   int iVar1;
   iVar1 = *(int*)( *(long*)( this + 0x60 ) + 0x10 );
   if (iVar1 < 1) {
      iVar1 = 1;
   }
   return iVar1;
}/* glslang::TType::getArraySizes() const */undefined8 glslang::TType::getArraySizes(TType *this) {
   return *(undefined8*)( this + 0x60 );
}/* glslang::TType::getArraySizes() */undefined8 glslang::TType::getArraySizes(TType *this) {
   return *(undefined8*)( this + 0x60 );
}/* glslang::TType::getReferentType() const */undefined8 glslang::TType::getReferentType(TType *this) {
   return *(undefined8*)( this + 0x68 );
}/* glslang::TType::getTypeParameters() const */undefined8 glslang::TType::getTypeParameters(TType *this) {
   return *(undefined8*)( this + 0x88 );
}/* glslang::TType::getTypeParameters() */undefined8 glslang::TType::getTypeParameters(TType *this) {
   return *(undefined8*)( this + 0x88 );
}/* glslang::TType::isVector() const */byte glslang::TType::isVector(TType *this) {
   if (1 < ( (byte)this[9] & 0xf )) {
      return 1;
   }
   return (byte)this[10] >> 4 & 1;
}/* glslang::TType::isMatrix() const */bool glslang::TType::isMatrix(TType *this) {
   return 0xf < (byte)this[9];
}/* glslang::TType::isArray() const */bool glslang::TType::isArray(TType *this) {
   return *(long*)( this + 0x60 ) != 0;
}/* glslang::TType::isArrayVariablyIndexed() const */undefined1 glslang::TType::isArrayVariablyIndexed(TType *this) {
   return *(undefined1*)( *(long*)( this + 0x60 ) + 0x15 );
}/* glslang::TType::setArrayVariablyIndexed() */void glslang::TType::setArrayVariablyIndexed(TType *this) {
   *(undefined1*)( *(long*)( this + 0x60 ) + 0x15 ) = 1;
   return;
}/* glslang::TType::updateImplicitArraySize(int) */void glslang::TType::updateImplicitArraySize(TType *this, int param_1) {
   int iVar1;
   iVar1 = *(int*)( *(long*)( this + 0x60 ) + 0x10 );
   if (iVar1 < param_1) {
      iVar1 = param_1;
   }
   *(int*)( *(long*)( this + 0x60 ) + 0x10 ) = iVar1;
   return;
}/* glslang::TType::setImplicitlySized(bool) */void glslang::TType::setImplicitlySized(TType *this, bool param_1) {
   *(bool*)( *(long*)( this + 0x60 ) + 0x14 ) = param_1;
   return;
}/* glslang::TType::isStruct() const */undefined4 glslang::TType::isStruct(TType *this) {
   return CONCAT31(( int3 )((byte)this[8] - 0xf >> 8), ( byte )((byte)this[8] - 0xf) < 2);
}/* glslang::TType::isFloatingDomain() const */undefined4 glslang::TType::isFloatingDomain(TType *this) {
   return CONCAT31(( int3 )((byte)this[8] - 1 >> 8), ( byte )((byte)this[8] - 1) < 3);
}/* glslang::TType::isIntegerDomain() const */bool glslang::TType::isIntegerDomain(TType *this) {
   TType TVar1;
   TVar1 = this[8];
   if ((byte)TVar1 < 0xc) {
      return 3 < (byte)TVar1;
   }
   return TVar1 == (TType)0xd;
}/* glslang::TType::isOpaque() const */undefined8 glslang::TType::isOpaque(TType *this) {
   undefined8 uVar1;
   uVar1 = 0;
   if ((byte)this[8] < 0x15) {
      uVar1 = CONCAT71(0x1a60, ( 0x1a6000UL >> ( (ulong)(byte)this[8] & 0x3f ) & 1 ) != 0);
   }
   return uVar1;
}/* glslang::TType::isParameterized() const */bool glslang::TType::isParameterized(TType *this) {
   return *(long*)( this + 0x88 ) != 0;
}/* glslang::TConstUnionArray::~TConstUnionArray() */void glslang::TConstUnionArray::~TConstUnionArray(TConstUnionArray *this) {
   return;
}/* glslang::TIntermTyped::getBasicType() const */TIntermTyped glslang::TIntermTyped::getBasicType(TIntermTyped *this) {
   return this[0x28];
}/* glslang::TIntermTyped::getQualifier() */TIntermTyped * __thiscall glslang::TIntermTyped::getQualifier(TIntermTyped *this){
   return this + 0x30;
}/* glslang::TIntermSymbol::getId() const */undefined8 glslang::TIntermSymbol::getId(TIntermSymbol *this) {
   return *(undefined8*)( this + 0xb8 );
}/* glslang::TIntermSymbol::getName[abi:cxx11]() const */TIntermSymbol * __thiscall glslang::TIntermSymbol::getName_abi_cxx11_(TIntermSymbol *this){
   return this + 200;
}/* glslang::TIntermOperator::getAsOperator() */TIntermOperator * __thiscall glslang::TIntermOperator::getAsOperator(TIntermOperator *this){
   return this;
}/* glslang::TIntermBinary::getLeft() const */undefined8 glslang::TIntermBinary::getLeft(TIntermBinary *this) {
   return *(undefined8*)( this + 0xc0 );
}/* glslang::TSymbol::getName[abi:cxx11]() const */undefined8 glslang::TSymbol::getName_abi_cxx11_(TSymbol *this) {
   return *(undefined8*)( this + 8 );
}/* glslang::TSymbol::changeName(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const*) */void glslang::TSymbol::changeName(TSymbol *this, basic_string *param_1) {
   *(basic_string**)( this + 8 ) = param_1;
   return;
}/* glslang::TSymbol::setUniqueId(long long) */void glslang::TSymbol::setUniqueId(TSymbol *this, longlong param_1) {
   *(longlong*)( this + 0x10 ) = param_1;
   return;
}/* glslang::TSymbol::getUniqueId() const */undefined8 glslang::TSymbol::getUniqueId(TSymbol *this) {
   return *(undefined8*)( this + 0x10 );
}/* glslang::TVariable::getType() const */TVariable * __thiscall glslang::TVariable::getType(TVariable *this){
   return this + 0x28;
}/* glslang::TVariable::getWritableType() */TVariable * __thiscall glslang::TVariable::getWritableType(TVariable *this){
   return this + 0x28;
}/* glslang::TVariable::setAnonId(int) */void glslang::TVariable::setAnonId(TVariable *this, int param_1) {
   *(int*)( this + 0xe8 ) = param_1;
   return;
}/* glslang::TVariable::getAnonId() const */undefined4 glslang::TVariable::getAnonId(TVariable *this) {
   return *(undefined4*)( this + 0xe8 );
}/* glslang::TFunction::getBuiltInOp() const */undefined4 glslang::TFunction::getBuiltInOp(TFunction *this) {
   return *(undefined4*)( this + 0x110 );
}/* glslang::TFunction::getParamCount() const */int glslang::TFunction::getParamCount(TFunction *this) {
   return (int)( *(long*)( this + 0x38 ) - *(long*)( this + 0x30 ) >> 3 ) * -0x55555555;
}/* glslang::TFunction::getDefaultParamCount() const */undefined4 glslang::TFunction::getDefaultParamCount(TFunction *this) {
   return *(undefined4*)( this + 0x118 );
}/* glslang::TFunction::operator[](int) const */long glslang::TFunction::operator [](TFunction *this, int param_1) {
   return *(long*)( this + 0x30 ) + (long)param_1 * 0x18;
}/* glslang::TAnonMember::getAnonContainer() const */undefined8 glslang::TAnonMember::getAnonContainer(TAnonMember *this) {
   return *(undefined8*)( this + 0x28 );
}/* glslang::TParseContextBase::getGlobalUniformBlockName() const */undefined *glslang::TParseContextBase::getGlobalUniformBlockName(void) {
   return &_LC0;
}/* glslang::TParseContextBase::setUniformBlockDefaults(glslang::TType&) const */void glslang::TParseContextBase::setUniformBlockDefaults(TType *param_1) {
   return;
}/* glslang::TParseContextBase::finalizeGlobalUniformBlockLayout(glslang::TVariable&) */void glslang::TParseContextBase::finalizeGlobalUniformBlockLayout(TVariable *param_1) {
   return;
}/* glslang::TParseContextBase::getAtomicCounterBlockName() const */undefined *glslang::TParseContextBase::getAtomicCounterBlockName(void) {
   return &_LC0;
}/* glslang::TParseContextBase::setAtomicCounterBlockDefaults(glslang::TType&) const */void glslang::TParseContextBase::setAtomicCounterBlockDefaults(TType *param_1) {
   return;
}/* glslang::TParseContextBase::setInvariant(glslang::TSourceLoc const&, char const*) */void glslang::TParseContextBase::setInvariant(TSourceLoc *param_1, char *param_2) {
   return;
}/* glslang::TParseContextBase::finalizeAtomicCounterBlockLayout(glslang::TVariable&) */void glslang::TParseContextBase::finalizeAtomicCounterBlockLayout(TVariable *param_1) {
   return;
}/* glslang::TParseContextBase::notifyVersion(int, int, char const*) */void glslang::TParseContextBase::notifyVersion(TParseContextBase *this, int param_1, int param_2, char *param_3) {
   long in_FS_OFFSET;
   int local_20;
   int local_1c;
   char *local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x420 ) != 0) {
      local_20 = param_1;
      local_1c = param_2;
      local_18 = param_3;
      ( **(code**)( this + 0x428 ) )(this + 0x410, &local_20, &local_1c, &local_18);
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* glslang::TParseContextBase::notifyErrorDirective(int, char const*) */void glslang::TParseContextBase::notifyErrorDirective(TParseContextBase *this, int param_1, char *param_2) {
   long in_FS_OFFSET;
   int local_1c;
   char *local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x460 ) != 0) {
      local_1c = param_1;
      local_18 = param_2;
      ( **(code**)( this + 0x468 ) )(this + 0x450, &local_1c, &local_18, 0);
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* glslang::TParseContextBase::notifyLineDirective(int, int, bool, int, char const*) */void glslang::TParseContextBase::notifyLineDirective(TParseContextBase *this, int param_1, int param_2, bool param_3, int param_4, char *param_5) {
   long in_FS_OFFSET;
   undefined1 local_25;
   int local_24;
   int local_20;
   int local_1c;
   char *local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x3e0 ) != 0) {
      local_25 = param_3;
      local_24 = param_1;
      local_20 = param_2;
      local_1c = param_4;
      local_18 = param_5;
      ( **(code**)( this + 1000 ) )(this + 0x3d0, &local_24, &local_20, &local_25, &local_1c, &local_18);
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* glslang::TParseContextBase::notifyExtensionDirective(int, char const*, char const*) */void glslang::TParseContextBase::notifyExtensionDirective(TParseContextBase *this, int param_1, char *param_2, char *param_3) {
   long in_FS_OFFSET;
   int local_24;
   char *local_20;
   char *local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x440 ) != 0) {
      local_24 = param_1;
      local_20 = param_2;
      local_18 = param_3;
      ( **(code**)( this + 0x448 ) )(this + 0x430, &local_24, &local_20, &local_18);
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* glslang::TType::isBuiltIn() const */bool glslang::TType::isBuiltIn(TType *this) {
   long lVar1;
   if (*(code**)( *(long*)this + 0x58 ) == getQualifier) {
      return 0x7f < *(ushort*)( this + 0x18 );
   }
   lVar1 = ( **(code**)( *(long*)this + 0x58 ) )();
   return 0x7f < *(ushort*)( lVar1 + 8 );
}/* glslang::TType::isAttachmentEXT() const */bool glslang::TType::isAttachmentEXT(TType *this) {
   long lVar1;
   if (this[8] != (TType)0xe) {
      return false;
   }
   if (*(code**)( *(long*)this + 0x40 ) == getSampler) {
      return this[0x81] == (TType)0x8;
   }
   lVar1 = ( **(code**)( *(long*)this + 0x40 ) )();
   return *(char*)( lVar1 + 1 ) == '\b';
}/* glslang::TType::isImage() const */undefined4 glslang::TType::isImage(TType *this) {
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
}/* glslang::TType::isSubpass() const */bool glslang::TType::isSubpass(TType *this) {
   long lVar1;
   if (this[8] != (TType)0xe) {
      return false;
   }
   if (*(code**)( *(long*)this + 0x40 ) == getSampler) {
      return this[0x81] == (TType)0x7;
   }
   lVar1 = ( **(code**)( *(long*)this + 0x40 ) )();
   return *(char*)( lVar1 + 1 ) == '\a';
}/* glslang::TType::isTexture() const */byte glslang::TType::isTexture(TType *this) {
   byte bVar1;
   long lVar2;
   if (this[8] == (TType)0xe) {
      if (*(code**)( *(long*)this + 0x40 ) != getSampler) {
         lVar2 = ( **(code**)( *(long*)this + 0x40 ) )();
         if (( *(byte*)( lVar2 + 2 ) & 0x20 ) == 0) {
            bVar1 = *(byte*)( lVar2 + 2 ) >> 3 & 1 ^ 1;
         } else {
            bVar1 = 0;
         }
         return bVar1;
      }
      if (( (byte)this[0x82] & 0x20 ) == 0) {
         return (byte)this[0x82] >> 3 & 1 ^ 1;
      }
   }
   return 0;
}/* glslang::TType::isImplicitlySizedArray() const */undefined1 glslang::TType::isImplicitlySizedArray(TType *this) {
   undefined1 uVar1;
   char cVar2;
   if (*(code**)( *(long*)this + 0xe8 ) == isArray) {
      if (*(long*)( this + 0x60 ) == 0) {
         return 0;
      }
      uVar1 = *(undefined1*)( *(long*)( this + 0x60 ) + 0x14 );
   } else {
      cVar2 = ( **(code**)( *(long*)this + 0xe8 ) )();
      if (cVar2 == '\0') {
         return 0;
      }
      uVar1 = *(undefined1*)( *(long*)( this + 0x60 ) + 0x14 );
   }
   return uVar1;
}/* glslang::TType::isSizedArray() const */undefined4 glslang::TType::isSizedArray(TType *this) {
   int iVar1;
   undefined4 uVar2;
   char cVar3;
   if (*(code**)( *(long*)this + 0xe8 ) == isArray) {
      if (*(long*)( this + 0x60 ) == 0) {
         return 0;
      }
      iVar1 = **(int**)( *(long*)( *(long*)( this + 0x60 ) + 8 ) + 8 );
      uVar2 = CONCAT31(( int3 )((uint)iVar1 >> 8), iVar1 != 0);
   } else {
      cVar3 = ( **(code**)( *(long*)this + 0xe8 ) )();
      if (cVar3 == '\0') {
         return 0;
      }
      iVar1 = **(int**)( *(long*)( *(long*)( this + 0x60 ) + 8 ) + 8 );
      uVar2 = CONCAT31(( int3 )((uint)iVar1 >> 8), iVar1 != 0);
   }
   return uVar2;
}/* glslang::TType::isUnsizedArray() const */undefined4 glslang::TType::isUnsizedArray(TType *this) {
   int iVar1;
   undefined4 uVar2;
   char cVar3;
   if (*(code**)( *(long*)this + 0xe8 ) == isArray) {
      if (*(long*)( this + 0x60 ) == 0) {
         return 0;
      }
      iVar1 = **(int**)( *(long*)( *(long*)( this + 0x60 ) + 8 ) + 8 );
      uVar2 = CONCAT31(( int3 )((uint)iVar1 >> 8), iVar1 == 0);
   } else {
      cVar3 = ( **(code**)( *(long*)this + 0xe8 ) )();
      if (cVar3 == '\0') {
         return 0;
      }
      iVar1 = **(int**)( *(long*)( *(long*)( this + 0x60 ) + 8 ) + 8 );
      uVar2 = CONCAT31(( int3 )((uint)iVar1 >> 8), iVar1 == 0);
   }
   return uVar2;
}/* glslang::TType::isUnusableName() const */bool glslang::TType::isUnusableName(TType *this) {
   char cVar1;
   if (*(code**)( *(long*)this + 0x128 ) == isStruct) {
      if (1 < ( byte )((char)this[8] - 0xfU)) {
         return false;
      }
   } else {
      cVar1 = ( **(code**)( *(long*)this + 0x128 ) )();
      if (cVar1 == '\0') {
         return false;
      }
   }
   return *(long*)( this + 0x68 ) == 0;
}/* glslang::TType::isScalarOrVector() const */uint glslang::TType::isScalarOrVector(TType *this) {
   char cVar1;
   uint uVar2;
   long lVar3;
   lVar3 = *(long*)this;
   if (*(code**)( lVar3 + 0xe0 ) == isMatrix) {
      if (0xf < (byte)this[9]) {
         return 0;
      }
   } else {
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
   } else {
      cVar1 = ( **(code**)( lVar3 + 0x128 ) )(this);
      if (cVar1 != '\0') {
         return 0;
      }
      lVar3 = *(long*)this;
   }
   if (*(code**)( lVar3 + 0xe8 ) == isArray) {
      uVar2 = (uint)CONCAT71(0x1066, *(long*)( this + 0x60 ) != 0);
   } else {
      uVar2 = ( **(code**)( lVar3 + 0xe8 ) )(this);
   }
   return uVar2 ^ 1;
}/* glslang::TFunction::getFixedParamCount() const */int glslang::TFunction::getFixedParamCount(TFunction *this) {
   int iVar1;
   long lVar2;
   int iVar3;
   lVar2 = *(long*)this;
   if (*(code**)( lVar2 + 0x120 ) == getParamCount) {
      iVar3 = (int)( *(long*)( this + 0x38 ) - *(long*)( this + 0x30 ) >> 3 ) * -0x55555555;
   } else {
      iVar3 = ( **(code**)( lVar2 + 0x120 ) )();
      lVar2 = *(long*)this;
   }
   if (*(code**)( lVar2 + 0x128 ) == getDefaultParamCount) {
      return iVar3 - *(int*)( this + 0x118 );
   }
   iVar1 = ( **(code**)( lVar2 + 0x128 ) )();
   return iVar3 - iVar1;
}/* glslang::TType::isScalar() const */uint glslang::TType::isScalar(TType *this) {
   byte bVar1;
   char cVar2;
   uint uVar3;
   long lVar4;
   if (*(code**)( *(long*)this + 0xd8 ) == isVector) {
      if (1 < ( (byte)this[9] & 0xf )) {
         return 0;
      }
      bVar1 = (byte)this[10] >> 4 & 1;
   } else {
      bVar1 = ( **(code**)( *(long*)this + 0xd8 ) )();
   }
   if (bVar1 == 0) {
      lVar4 = *(long*)this;
      if (*(code**)( lVar4 + 0xe0 ) == isMatrix) {
         if (0xf < (byte)this[9]) {
            return 0;
         }
      } else {
         cVar2 = ( **(code**)( lVar4 + 0xe0 ) )(this);
         if (cVar2 != '\0') {
            return 0;
         }
         lVar4 = *(long*)this;
      }
      if (*(code**)( lVar4 + 0x128 ) == isStruct) {
         if (1 < ( byte )((char)this[8] - 0xfU)) {
            LAB_00107481:if (*(code**)( lVar4 + 0xe8 ) == isArray) {
               uVar3 = (uint)CONCAT71(0x1066, *(long*)( this + 0x60 ) != 0);
            } else {
               uVar3 = ( **(code**)( lVar4 + 0xe8 ) )(this);
            }
            return uVar3 ^ 1;
         }
      } else {
         cVar2 = ( **(code**)( lVar4 + 0x128 ) )(this);
         if (cVar2 == '\0') {
            lVar4 = *(long*)this;
            goto LAB_00107481;
         }
      }
   }
   return 0;
}/* glslang::TParseContextBase::setPragmaCallback(std::function<void (int,
   glslang::TVector<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > const&)> const&) */void glslang::TParseContextBase::setPragmaCallback(TParseContextBase *this, function *param_1) {
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
}/* glslang::TParseContextBase::setErrorCallback(std::function<void (int, char const*)> const&) */void glslang::TParseContextBase::setErrorCallback(TParseContextBase *this, function *param_1) {
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
}/* glslang::TParseContextBase::setExtensionCallback(std::function<void (int, char const*, char
   const*)> const&) */void glslang::TParseContextBase::setExtensionCallback(TParseContextBase *this, function *param_1) {
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
}/* glslang::TParseContextBase::setVersionCallback(std::function<void (int, int, char const*)>
   const&) */void glslang::TParseContextBase::setVersionCallback(TParseContextBase *this, function *param_1) {
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
}/* glslang::TParseContextBase::setLineCallback(std::function<void (int, int, bool, int, char
   const*)> const&) */void glslang::TParseContextBase::setLineCallback(TParseContextBase *this, function *param_1) {
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
}/* glslang::TType::isBindlessTexture() const */TType glslang::TType::isBindlessTexture(TType *this) {
   code *pcVar1;
   char cVar2;
   TType *pTVar3;
   pcVar1 = *(code**)( *(long*)this + 0x168 );
   if (pcVar1 == isTexture) {
      if (this[8] == (TType)0xe) {
         pcVar1 = *(code**)( *(long*)this + 0x40 );
         if (pcVar1 == getSampler) {
            pTVar3 = this + 0x80;
         } else {
            pTVar3 = (TType*)( *pcVar1 )();
         }
         if (( ( (byte)pTVar3[2] & 0x20 ) == 0 ) && ( ( (byte)pTVar3[2] & 8 ) == 0 )) {
            return this[0x58];
         }
      }
   } else {
      cVar2 = ( *pcVar1 )();
      if (cVar2 != '\0') {
         return this[0x58];
      }
   }
   return (TType)0x0;
}/* glslang::TType::isBindlessImage() const */TType glslang::TType::isBindlessImage(TType *this) {
   code *pcVar1;
   char cVar2;
   TType *pTVar3;
   pcVar1 = *(code**)( *(long*)this + 0x158 );
   if (pcVar1 == isImage) {
      if (this[8] == (TType)0xe) {
         pcVar1 = *(code**)( *(long*)this + 0x40 );
         if (pcVar1 == getSampler) {
            pTVar3 = this + 0x80;
         } else {
            pTVar3 = (TType*)( *pcVar1 )();
         }
         if (( ( (byte)pTVar3[2] & 8 ) != 0 ) && ( 1 < ( byte )((char)pTVar3[1] - 7U) )) {
            return this[0x59];
         }
      }
   } else {
      cVar2 = ( *pcVar1 )();
      if (cVar2 != '\0') {
         return this[0x59];
      }
   }
   return (TType)0x0;
}/* glslang::TType::setFieldName(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */void glslang::TType::setFieldName(TType *this, basic_string *param_1) {
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
   /* WARNING: Subroutine does not return */
   std::__throw_logic_error("basic_string: construction from null is not valid");
}/* glslang::TType::isScalarOrVec1() const */byte glslang::TType::isScalarOrVec1(TType *this) {
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
         if (1 < ( (byte)this[9] & 0xf )) goto LAB_00107aa3;
      } else {
         bVar3 = ( *pcVar2 )();
      }
      if (bVar3 == 0) {
         lVar5 = *(long*)this;
         if (*(code**)( lVar5 + 0xe0 ) == isMatrix) {
            if ((byte)this[9] < 0x10) {
               LAB_00107acc:if (*(code**)( lVar5 + 0x128 ) == isStruct) {
                  if (1 < ( byte )((char)this[8] - 0xfU)) {
                     LAB_00107aeb:if (*(code**)( lVar5 + 0xe8 ) == isArray) {
                        if (*(long*)( this + 0x60 ) == 0) {
                           return 1;
                        }
                     } else {
                        cVar4 = ( **(code**)( lVar5 + 0xe8 ) )(this);
                        if (cVar4 == '\0') {
                           return 1;
                        }
                     }
                  }
               } else {
                  cVar4 = ( **(code**)( lVar5 + 0x128 ) )(this);
                  if (cVar4 == '\0') {
                     lVar5 = *(long*)this;
                     goto LAB_00107aeb;
                  }
               }
            }
         } else {
            cVar4 = ( **(code**)( lVar5 + 0xe0 ) )(this);
            if (cVar4 == '\0') {
               lVar5 = *(long*)this;
               goto LAB_00107acc;
            }
         }
      }
   } else {
      cVar4 = ( *pcVar2 )();
      if (cVar4 != '\0') {
         return 1;
      }
   }
   TVar1 = this[10];
   LAB_00107aa3:return (byte)TVar1 >> 4 & 1;
}/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
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
               } else {
                  plVar6 = (long*)( *pcVar2 )(plVar1);
               }
               if (0x7f < *(ushort*)( plVar6 + 1 )) {
                  return param_1;
               }
            } else {
               cVar3 = ( *pcVar2 )(plVar1);
               if (cVar3 != '\0') {
                  return param_1;
               }
            }
            if (*(code**)( *plVar1 + 0x128 ) == glslang::TType::isStruct) {
               if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                  LAB_00107de5:lVar7 = *(long*)( plVar1[0xd] + 0x10 );
                  lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBuiltIn ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar7 ));
                  if (lVar7 != lVar5) {
                     return param_1;
                  }
               }
            } else {
               cVar3 = ( **(code**)( *plVar1 + 0x128 ) )(plVar1);
               if (cVar3 != '\0') goto LAB_00107de5;
            }
            plVar1 = (long*)param_1[4];
            pcVar2 = *(code**)( *plVar1 + 0x148 );
            if (pcVar2 == glslang::TType::isBuiltIn) {
               pcVar2 = *(code**)( *plVar1 + 0x58 );
               if (pcVar2 == glslang::TType::getQualifier) {
                  plVar6 = plVar1 + 2;
               } else {
                  plVar6 = (long*)( *pcVar2 )(plVar1);
               }
               if (0x7f < *(ushort*)( plVar6 + 1 )) goto LAB_00107d6a;
            } else {
               cVar3 = ( *pcVar2 )(plVar1);
               if (cVar3 != '\0') {
                  return param_1 + 4;
               }
            }
            if (*(code**)( *plVar1 + 0x128 ) == glslang::TType::isStruct) {
               if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                  LAB_00107d4d:lVar7 = *(long*)( plVar1[0xd] + 0x10 );
                  lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBuiltIn ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar7 ));
                  if (lVar7 != lVar5) {
                     LAB_00107d6a:return param_1 + 4;
                  }
               }
            } else {
               cVar3 = ( **(code**)( *plVar1 + 0x128 ) )(plVar1);
               if (cVar3 != '\0') goto LAB_00107d4d;
            }
            plVar1 = (long*)param_1[8];
            pcVar2 = *(code**)( *plVar1 + 0x148 );
            if (pcVar2 == glslang::TType::isBuiltIn) {
               pcVar2 = *(code**)( *plVar1 + 0x58 );
               if (pcVar2 == glslang::TType::getQualifier) {
                  plVar6 = plVar1 + 2;
               } else {
                  plVar6 = (long*)( *pcVar2 )(plVar1);
               }
               if (0x7f < *(ushort*)( plVar6 + 1 )) goto LAB_00107d9a;
            } else {
               cVar3 = ( *pcVar2 )(plVar1);
               if (cVar3 != '\0') {
                  return param_1 + 8;
               }
            }
            if (*(code**)( *plVar1 + 0x128 ) == glslang::TType::isStruct) {
               if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                  LAB_00107d7d:lVar7 = *(long*)( plVar1[0xd] + 0x10 );
                  lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBuiltIn ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar7 ));
                  if (lVar7 != lVar5) {
                     LAB_00107d9a:return param_1 + 8;
                  }
               }
            } else {
               cVar3 = ( **(code**)( *plVar1 + 0x128 ) )(plVar1);
               if (cVar3 != '\0') goto LAB_00107d7d;
            }
            plVar1 = (long*)param_1[0xc];
            pcVar2 = *(code**)( *plVar1 + 0x148 );
            if (pcVar2 == glslang::TType::isBuiltIn) {
               pcVar2 = *(code**)( *plVar1 + 0x58 );
               if (pcVar2 == glslang::TType::getQualifier) {
                  plVar6 = plVar1 + 2;
               } else {
                  plVar6 = (long*)( *pcVar2 )(plVar1);
               }
               if (0x7f < *(ushort*)( plVar6 + 1 )) goto LAB_00107dca;
            } else {
               cVar3 = ( *pcVar2 )(plVar1);
               if (cVar3 != '\0') {
                  return param_1 + 0xc;
               }
            }
            if (*(code**)( *plVar1 + 0x128 ) == glslang::TType::isStruct) {
               if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                  LAB_00107dad:lVar7 = *(long*)( plVar1[0xd] + 0x10 );
                  lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBuiltIn ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar7 ));
                  if (lVar7 != lVar5) {
                     LAB_00107dca:return param_1 + 0xc;
                  }
               }
            } else {
               cVar3 = ( **(code**)( *plVar1 + 0x128 ) )(plVar1);
               if (cVar3 != '\0') goto LAB_00107dad;
            }
            param_1 = param_1 + 0x10;
         } while ( param_1 != puVar8 );
         lVar7 = (long)param_2 - (long)param_1;
      }
      lVar7 = lVar7 >> 5;
      if (lVar7 != 2) {
         if (lVar7 != 3) {
            if (lVar7 != 1) {
               return param_2;
            }
            goto LAB_00107f10;
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
      LAB_00107f10:bVar4 = glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(*param_1);
      if (!bVar4) {
         return param_2;
      }
      return param_1;
   }, /* bool glslang::TType::contains<glslang::TType::containsBuiltIn() const::{lambda(glslang::TType
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
LAB_00107f99: ) = *(TSpirvTypeParameter**)( lVar16 + 0x40 ) ;this_00 = *(TSpirvTypeParameter**)( lVar16 + 0x38 );pTVar18 = *(TSpirvTypeParameter**)( lVar12 + 0x38 );if ((long)pTVar6 - (long)this_00 == *(long*)( lVar12 + 0x40 ) - (long)pTVar18) {
   while (true) {
      if (this_00 == pTVar6) {
         return (ulong)bVar7;
      }
      uVar15 = glslang::TSpirvTypeParameter::operator ==(this_00, pTVar18);
      if ((char)uVar15 == '\0') break;
      this_00 = this_00 + 0x10;
      pTVar18 = pTVar18 + 0x10;
   };
   return uVar15;
}}
    }
  }return 0;}/* WARNING: Type propagation algorithm not settling *//* glslang::TType::sameStructType(glslang::TType const&, int*, int*) const */undefined8 glslang::TType::sameStructType(TType *this, TType *param_1, int *param_2, int *param_3) {
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
   if (param_2 != (int*)0x0) {
      *param_2 = -1;
      *param_3 = -1;
   }
   if (*(code**)( *(long*)this + 0x128 ) != isStruct) {
      cVar4 = ( **(code**)( *(long*)this + 0x128 ) )(this);
      if (cVar4 == '\0') {
         pcVar6 = *(code**)( *(long*)param_1 + 0x128 );
         if (pcVar6 != isStruct) goto LAB_0010b208;
         LAB_0010aeba:if (1 < ( byte )((char)param_1[8] - 0xfU)) {
            return 1;
         }
      }
      LAB_0010aeca:if (*(code**)( *(long*)this + 0x128 ) == isStruct) {
         TVar3 = this[8];
         goto LAB_0010aee2;
      }
      cVar4 = ( **(code**)( *(long*)this + 0x128 ) )(this);
      if (cVar4 != '\0') goto LAB_0010aeea;
      goto LAB_0010af05;
   }
   TVar3 = this[8];
   if (1 < ( byte )((char)TVar3 - 0xfU)) {
      pcVar6 = *(code**)( *(long*)param_1 + 0x128 );
      if (pcVar6 == isStruct) goto LAB_0010aeba;
      LAB_0010b208:cVar4 = ( *pcVar6 )(param_1);
      if (cVar4 == '\0') {
         return 1;
      }
      goto LAB_0010aeca;
   }
   LAB_0010aee2:if (( byte )((char)TVar3 - 0xfU) < 2) {
      LAB_0010aeea:if (*(code**)( *(long*)param_1 + 0x128 ) == isStruct) {
         if (( byte )((char)param_1[8] - 0xfU) < 2) {
            LAB_0010af70:if (*(long*)( this + 0x68 ) == *(long*)( param_1 + 0x68 )) {
               return 1;
            }
         }
      } else {
         cVar4 = ( **(code**)( *(long*)param_1 + 0x128 ) )(param_1);
         if (cVar4 != '\0') goto LAB_0010af70;
      }
      LAB_0010af05:if (*(code**)( *(long*)this + 0x128 ) == isStruct) {
         TVar3 = this[8];
         goto LAB_0010af1d;
      }
      cVar4 = ( **(code**)( *(long*)this + 0x128 ) )(this);
      if (cVar4 == '\0') {
         return 0;
      }
      pcVar6 = *(code**)( *(long*)param_1 + 0x128 );
      if (pcVar6 != isStruct) goto LAB_0010b1f0;
   } else {
      LAB_0010af1d:if (1 < ( byte )((char)TVar3 - 0xfU)) {
         return 0;
      }
      pcVar6 = *(code**)( *(long*)param_1 + 0x128 );
      if (pcVar6 != isStruct) {
         LAB_0010b1f0:cVar4 = ( *pcVar6 )(param_1);
         if (cVar4 == '\0') {
            return 0;
         }
         goto LAB_0010af43;
      }
   }
   if (1 < ( byte )((char)param_1[8] - 0xfU)) {
      return 0;
   }
   LAB_0010af43:sVar1 = *(size_t*)( *(long*)( this + 0x78 ) + 0x10 );
   if (sVar1 == *(size_t*)( *(long*)( param_1 + 0x78 ) + 0x10 )) {
      plVar14 = *(long**)( *(long*)( this + 0x78 ) + 8 );
      if (sVar1 == 0) {
         bVar2 = false;
      } else {
         iVar5 = memcmp(plVar14, *(void**)( *(long*)( param_1 + 0x78 ) + 8 ), sVar1);
         if (iVar5 != 0) {
            return 0;
         }
         bVar2 = false;
         if (sVar1 == 0xc) {
            if (( *plVar14 != 0x65567265505f6c67 ) || ( bVar2 = false ),(int)plVar14[1] != 0x78657472) {
               bVar2 = true;
            }
            bVar2 = !bVar2;
         }
      }
      lVar9 = *(long*)( this + 0x68 );
      lVar12 = *(long*)( lVar9 + 8 );
      lVar16 = *(long*)( *(long*)( param_1 + 0x68 ) + 0x10 );
      lVar7 = *(long*)( lVar9 + 0x10 );
      lVar8 = *(long*)( *(long*)( param_1 + 0x68 ) + 8 );
      if (( ( param_2 != (int*)0x0 ) || ( lVar16 - lVar8 == lVar7 - lVar12 ) ) || ( bVar2 )) {
         uVar10 = 0;
         uVar11 = 0;
         LAB_0010b020:uVar13 = lVar16 - lVar8 >> 5;
         if (uVar11 < ( ulong )(lVar7 - lVar12 >> 5)) {
            if (param_2 != (int*)0x0) {
               *param_2 = (int)uVar11;
               *param_3 = (int)uVar10;
            }
            lVar15 = uVar11 * 0x20;
            if (uVar13 <= uVar10) {
               plVar14 = *(long**)( lVar12 + lVar15 );
               pcVar6 = *(code**)( *plVar14 + 0x18 );
               if (pcVar6 == hiddenMember) {
                  if ((char)plVar14[1] == '\0') goto LAB_0010b360;
                  pcVar6 = *(code**)( *plVar14 + 0x30 );
                  if (pcVar6 == getFieldName_abi_cxx11_) goto LAB_0010b2ff;
                  LAB_0010b450:lVar9 = ( *pcVar6 )();
                  lVar12 = *(long*)( lVar9 + 0x10 );
               } else {
                  cVar4 = ( *pcVar6 )();
                  if (cVar4 != '\0') goto LAB_0010b3e2;
                  plVar14 = *(long**)( *(long*)( *(long*)( this + 0x68 ) + 8 ) + lVar15 );
                  pcVar6 = *(code**)( *plVar14 + 0x30 );
                  if (pcVar6 != getFieldName_abi_cxx11_) goto LAB_0010b450;
                  LAB_0010b2ff:lVar9 = plVar14[0xe];
                  lVar12 = *(long*)( lVar9 + 0x10 );
               }
               if (lVar12 == 0x16) {
                  plVar14 = *(long**)( lVar9 + 8 );
                  if (( *plVar14 != 0x6e6f6365535f6c67 || plVar14[1] != 0x69736f5079726164 ) || ( *(long*)( (long)plVar14 + 0xe ) != 0x564e6e6f69746973 )) goto LAB_0010b340;
               } else if (( lVar12 != 0x14 ) || ( ( plVar14 = *(long**)( lVar9 + 8 ) * plVar14 != 0x7469736f505f6c67 || plVar14[1] != 0x69567265506e6f69 || ( (int)plVar14[2] != 0x564e7765 ) ) )) {
                  LAB_0010b340:if (param_2 == (int*)0x0) {
                     return 0;
                  }
                  *param_3 = -1;
                  return 0;
               }
               goto LAB_0010b3e2;
            }
            lVar16 = uVar10 * 0x20;
            pcVar6 = *(code**)( **(long**)( lVar8 + lVar16 ) + 0x30 );
            if (pcVar6 == getFieldName_abi_cxx11_) {
               lVar7 = ( *(long**)( lVar8 + lVar16 ) )[0xe];
            } else {
               lVar7 = ( *pcVar6 )();
               lVar9 = *(long*)( this + 0x68 );
               lVar12 = *(long*)( lVar9 + 8 );
            }
            this_00 = *(TType**)( lVar12 + lVar15 );
            if (*(code**)( *(long*)this_00 + 0x30 ) == getFieldName_abi_cxx11_) {
               lVar8 = *(long*)( this_00 + 0x70 );
            } else {
               lVar8 = ( **(code**)( *(long*)this_00 + 0x30 ) )(this_00);
               lVar9 = *(long*)( this + 0x68 );
               lVar12 = *(long*)( lVar9 + 8 );
               this_00 = *(TType**)( lVar12 + lVar15 );
            }
            sVar1 = *(size_t*)( lVar8 + 0x10 );
            if (sVar1 == *(size_t*)( lVar7 + 0x10 )) {
               if (( sVar1 == 0 ) || ( iVar5 = memcmp(*(void**)( lVar8 + 8 ), *(void**)( lVar7 + 8 ), sVar1) ),iVar5 == 0) {
                  cVar4 = operator == ( this_00,*(TType**)( *(long*)( *(long*)( param_1 + 0x68 ) + 8 ) + lVar16 ) );
                  if (cVar4 == '\0') {
                     return 0;
                  }
                  goto LAB_0010b3e2;
               }
            }
            if (*(code**)( *(long*)this_00 + 0x18 ) == hiddenMember) {
               if (this_00[8] != (TType)0x0) goto LAB_0010b0ce;
               LAB_0010b5a0:lVar7 = *(long*)( lVar9 + 0x10 );
               uVar11 = uVar11 + 1;
               lVar16 = *(long*)( *(long*)( param_1 + 0x68 ) + 0x10 );
               lVar8 = *(long*)( *(long*)( param_1 + 0x68 ) + 8 );
               goto LAB_0010b020;
            }
            cVar4 = ( **(code**)( *(long*)this_00 + 0x18 ) )(this_00);
            if (cVar4 != '\0') {
               lVar9 = *(long*)( this + 0x68 );
               lVar12 = *(long*)( lVar9 + 8 );
               goto LAB_0010b5a0;
            }
            LAB_0010b0ce:lVar12 = *(long*)( param_1 + 0x68 );
            lVar8 = *(long*)( lVar12 + 8 );
            pcVar6 = *(code**)( **(long**)( lVar8 + lVar16 ) + 0x18 );
            if (pcVar6 == hiddenMember) {
               if ((char)( *(long**)( lVar8 + lVar16 ) )[1] == '\0') {
                  LAB_0010b660:lVar9 = *(long*)( this + 0x68 );
                  lVar16 = *(long*)( lVar12 + 0x10 );
                  uVar10 = uVar10 + 1;
                  lVar7 = *(long*)( lVar9 + 0x10 );
                  lVar12 = *(long*)( lVar9 + 8 );
                  goto LAB_0010b020;
               }
            } else {
               cVar4 = ( *pcVar6 )();
               if (cVar4 != '\0') {
                  lVar12 = *(long*)( param_1 + 0x68 );
                  lVar8 = *(long*)( lVar12 + 8 );
                  goto LAB_0010b660;
               }
            }
            if (!bVar2) {
               return 0;
            }
            plVar14 = *(long**)( *(long*)( *(long*)( this + 0x68 ) + 8 ) + lVar15 );
            pcVar6 = *(code**)( *plVar14 + 0x30 );
            if (pcVar6 == getFieldName_abi_cxx11_) {
               lVar9 = plVar14[0xe];
            } else {
               lVar9 = ( *pcVar6 )();
            }
            if (*(long*)( lVar9 + 0x10 ) == 0x16) {
               plVar14 = *(long**)( lVar9 + 8 );
               if (( *plVar14 == 0x6e6f6365535f6c67 && plVar14[1] == 0x69736f5079726164 ) && ( *(long*)( (long)plVar14 + 0xe ) == 0x564e6e6f69746973 )) goto LAB_0010b3ea;
               LAB_0010b168:lVar12 = *(long*)( param_1 + 0x68 );
               lVar8 = *(long*)( lVar12 + 8 );
               pcVar6 = *(code**)( **(long**)( lVar8 + lVar16 ) + 0x30 );
               if (pcVar6 == getFieldName_abi_cxx11_) {
                  lVar15 = ( *(long**)( lVar8 + lVar16 ) )[0xe];
               } else {
                  lVar15 = ( *pcVar6 )();
                  lVar12 = *(long*)( param_1 + 0x68 );
                  lVar8 = *(long*)( lVar12 + 8 );
               }
               lVar9 = *(long*)( this + 0x68 );
               uVar10 = uVar10 + 1;
               lVar16 = *(long*)( lVar12 + 0x10 );
               lVar7 = *(long*)( lVar9 + 0x10 );
               lVar12 = *(long*)( lVar9 + 8 );
               if (*(long*)( lVar15 + 0x10 ) == 0x16) {
                  plVar14 = *(long**)( lVar15 + 8 );
                  if (( *plVar14 == 0x6e6f6365535f6c67 && plVar14[1] == 0x69736f5079726164 ) && ( *(long*)( (long)plVar14 + 0xe ) == 0x564e6e6f69746973 )) goto LAB_0010b020;
               } else if (( *(long*)( lVar15 + 0x10 ) == 0x14 ) && ( ( plVar14 = *(long**)( lVar15 + 8 ) * plVar14 == 0x7469736f505f6c67 && plVar14[1] == 0x69567265506e6f69 && ( (int)plVar14[2] == 0x564e7765 ) ) )) goto LAB_0010b020;
               uVar11 = uVar11 + 1;
               goto LAB_0010b020;
            }
            if (( ( *(long*)( lVar9 + 0x10 ) != 0x14 ) || ( plVar14 = *(long**)( lVar9 + 8 ) * plVar14 != 0x7469736f505f6c67 || plVar14[1] != 0x69567265506e6f69 ) ) || ( (int)plVar14[2] != 0x564e7765 )) goto LAB_0010b168;
         } else {
            if (uVar13 <= uVar10) {
               return 1;
            }
            if (param_2 != (int*)0x0) {
               *param_2 = (int)uVar11;
               *param_3 = (int)uVar10;
            }
            plVar14 = *(long**)( lVar8 + uVar10 * 0x20 );
            pcVar6 = *(code**)( *plVar14 + 0x18 );
            if (pcVar6 == hiddenMember) {
               if ((char)plVar14[1] == '\0') {
                  LAB_0010b360:uVar11 = uVar11 + 1;
                  uVar10 = uVar10 + 1;
                  goto LAB_0010b020;
               }
               pcVar6 = *(code**)( *plVar14 + 0x30 );
               if (pcVar6 == getFieldName_abi_cxx11_) goto LAB_0010b271;
               LAB_0010b500:lVar9 = ( *pcVar6 )();
               lVar12 = *(long*)( lVar9 + 0x10 );
            } else {
               cVar4 = ( *pcVar6 )();
               if (cVar4 != '\0') goto LAB_0010b3e2;
               plVar14 = *(long**)( *(long*)( *(long*)( param_1 + 0x68 ) + 8 ) + uVar10 * 0x20 );
               pcVar6 = *(code**)( *plVar14 + 0x30 );
               if (pcVar6 != getFieldName_abi_cxx11_) goto LAB_0010b500;
               LAB_0010b271:lVar9 = plVar14[0xe];
               lVar12 = *(long*)( lVar9 + 0x10 );
            }
            if (lVar12 == 0x16) {
               plVar14 = *(long**)( lVar9 + 8 );
               if (( *plVar14 != 0x6e6f6365535f6c67 || plVar14[1] != 0x69736f5079726164 ) || ( *(long*)( (long)plVar14 + 0xe ) != 0x564e6e6f69746973 )) goto LAB_0010b2b8;
            } else if (( lVar12 != 0x14 ) || ( ( plVar14 = *(long**)( lVar9 + 8 ) * plVar14 != 0x7469736f505f6c67 || plVar14[1] != 0x69567265506e6f69 || ( (int)plVar14[2] != 0x564e7765 ) ) )) {
               LAB_0010b2b8:if (param_2 == (int*)0x0) {
                  return 0;
               }
               *param_2 = -1;
               return 0;
            }
            LAB_0010b3e2:uVar10 = uVar10 + 1;
         }
         LAB_0010b3ea:uVar11 = uVar11 + 1;
         lVar9 = *(long*)( this + 0x68 );
         lVar7 = *(long*)( lVar9 + 0x10 );
         lVar16 = *(long*)( *(long*)( param_1 + 0x68 ) + 0x10 );
         lVar12 = *(long*)( lVar9 + 8 );
         lVar8 = *(long*)( *(long*)( param_1 + 0x68 ) + 8 );
         goto LAB_0010b020;
      }
   }
   return 0;
}/* glslang::TVariable::TVariable(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const*, glslang::TType const&, bool) */void glslang::TVariable::TVariable(TVariable *this, basic_string *param_1, TType *param_2, bool param_3) {
   ushort uVar1;
   undefined4 uVar2;
   uint uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   undefined8 uVar13;
   *(basic_string**)( this + 8 ) = param_1;
   this[0x40] = ( TVariable )((byte)this[0x40] & 0x80);
   uVar1 = ( ushort )(( uint ) * (undefined4*)( this + 0x30 ) >> 0x10);
   *(undefined1(*) [16])( this + 0xb0 ) = (undefined1[16])0x0;
   *(code**)this = std::__throw_bad_function_call;
   *(uint*)( this + 0x30 ) = CONCAT22(uVar1, 0x100) & 0xf800ffff;
   *(undefined1(*) [16])( this + 0x88 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x98 ) = (undefined1[16])0x0;
   uVar4 = *(undefined8*)( param_2 + 0x10 );
   uVar5 = *(undefined8*)( param_2 + 0x18 );
   uVar6 = *(undefined8*)( param_2 + 0x20 );
   uVar7 = *(undefined8*)( param_2 + 0x28 );
   uVar8 = *(undefined8*)( param_2 + 0x30 );
   uVar9 = *(undefined8*)( param_2 + 0x38 );
   uVar10 = *(undefined8*)( param_2 + 0x40 );
   uVar11 = *(undefined8*)( param_2 + 0x48 );
   *(undefined***)( this + 0x28 ) = &PTR__TType_00111158;
   *(uint*)( this + 0xa8 ) = *(uint*)( this + 0xa8 ) & 0x9fc00000;
   uVar12 = *(undefined8*)( param_2 + 0x50 );
   uVar13 = *(undefined8*)( param_2 + 0x58 );
   this[0xc0] = (TVariable)param_3;
   uVar2 = *(undefined4*)( param_2 + 0x80 );
   *(undefined8*)( this + 0x10 ) = 0;
   *(undefined4*)( this + 0xa8 ) = uVar2;
   *(undefined8*)( this + 0x18 ) = 0;
   this[0x20] = (TVariable)0x1;
   *(undefined***)( this + 200 ) = &PTR__TConstUnionArray_00111340;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 8*i + 208 ) ) = 0;
   }
   *(undefined4*)( this + 0xe8 ) = 0xffffffff;
   *(undefined8*)( this + 0x38 ) = uVar4;
   *(undefined8*)( this + 0x40 ) = uVar5;
   *(undefined8*)( this + 0x48 ) = uVar6;
   *(undefined8*)( this + 0x50 ) = uVar7;
   *(undefined8*)( this + 0x58 ) = uVar8;
   *(undefined8*)( this + 0x60 ) = uVar9;
   *(undefined8*)( this + 0x68 ) = uVar10;
   *(undefined8*)( this + 0x70 ) = uVar11;
   *(undefined8*)( this + 0x78 ) = uVar12;
   *(undefined8*)( this + 0x80 ) = uVar13;
   uVar3 = *(uint*)( param_2 + 8 );
   uVar4 = *(undefined8*)( param_2 + 0x78 );
   *(undefined8*)( this + 0x98 ) = *(undefined8*)( param_2 + 0x70 );
   *(undefined8*)( this + 0xa0 ) = uVar4;
   *(uint*)( this + 0x30 ) = ( uint )(uVar1 & 0xf800) << 0x10 | uVar3 & 0x1fffff;
   *(undefined8*)( this + 0x88 ) = *(undefined8*)( param_2 + 0x60 );
   *(undefined8*)( this + 0x90 ) = *(undefined8*)( param_2 + 0x68 );
   uVar4 = *(undefined8*)( param_2 + 0x90 );
   uVar1 = *(ushort*)( param_2 + 10 );
   *(undefined8*)( this + 0xb0 ) = *(undefined8*)( param_2 + 0x88 );
   *(undefined8*)( this + 0xb8 ) = uVar4;
   *(ushort*)( this + 0x32 ) = uVar1 & 0x7e0 | *(ushort*)( this + 0x32 ) & 0xf81f;
   return;
}/* glslang::TSymbolTableLevel::hasFunctionName(std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&) const */bool glslang::TSymbolTableLevel::hasFunctionName(TSymbolTableLevel *this, basic_string *param_1) {
   TSymbolTableLevel *pTVar1;
   void *__s2;
   ulong uVar2;
   void *__s;
   int iVar3;
   void *pvVar4;
   ulong uVar5;
   long lVar6;
   ulong uVar7;
   TSymbolTableLevel *pTVar8;
   TSymbolTableLevel *pTVar9;
   bool bVar10;
   if (*(TSymbolTableLevel**)( this + 0x18 ) == (TSymbolTableLevel*)0x0) {
      bVar10 = false;
   } else {
      __s2 = *(void**)( param_1 + 8 );
      uVar2 = *(ulong*)( param_1 + 0x10 );
      pTVar8 = this + 0x10;
      pTVar9 = *(TSymbolTableLevel**)( this + 0x18 );
      do {
         while (true) {
            uVar7 = *(ulong*)( pTVar9 + 0x30 );
            uVar5 = uVar2;
            if (uVar7 <= uVar2) {
               uVar5 = uVar7;
            }
            if (( uVar5 != 0 ) && ( iVar3 = memcmp(*(void**)( pTVar9 + 0x28 ), __s2, uVar5) ),iVar3 != 0) break;
            lVar6 = uVar7 - uVar2;
            if (lVar6 < 0x80000000) {
               if (-0x80000001 < lVar6) {
                  iVar3 = (int)lVar6;
                  break;
               }
               goto LAB_0010b9d0;
            }
            LAB_0010ba19:pTVar1 = pTVar9 + 0x10;
            pTVar8 = pTVar9;
            pTVar9 = *(TSymbolTableLevel**)pTVar1;
            if (*(TSymbolTableLevel**)pTVar1 == (TSymbolTableLevel*)0x0) goto LAB_0010ba25;
         };
         if (-1 < iVar3) goto LAB_0010ba19;
         LAB_0010b9d0:pTVar9 = *(TSymbolTableLevel**)( pTVar9 + 0x18 );
      } while ( pTVar9 != (TSymbolTableLevel*)0x0 );
      LAB_0010ba25:bVar10 = false;
      if (( this + 0x10 != pTVar8 ) && ( uVar7 = uVar7 != 0 )) {
         __s = *(void**)( pTVar8 + 0x28 );
         pvVar4 = memchr(__s, 0x28, uVar7);
         if (( pvVar4 != (void*)0x0 ) && ( uVar5 = (long)pvVar4 - (long)__s ),bVar10 = false,uVar5 != 0xffffffffffffffff) {
            if (uVar5 < uVar7) {
               uVar7 = uVar5;
            }
            uVar5 = uVar7;
            if (uVar2 <= uVar7) {
               uVar5 = uVar2;
            }
            if (( uVar5 != 0 ) && ( iVar3 = iVar3 != 0 )) {
               return false;
            }
            lVar6 = uVar7 - uVar2;
            bVar10 = false;
            if (( lVar6 < 0x80000000 ) && ( -0x80000001 < lVar6 )) {
               bVar10 = (int)lVar6 == 0;
            }
         }
      }
   }
   return bVar10;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* void std::__detail::__to_chars_10_impl<unsigned int>(char*, unsigned int, unsigned int) */void std::__detail::__to_chars_10_impl<unsigned_int>(char *param_1, uint param_2, uint param_3) {
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
   char acStack_27[23];
   long local_10;
   uVar5 = param_2 - 1;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_e8 = __LC208;
   uStack_e0 = _UNK_001115e8;
   local_d8 = __LC209;
   uStack_d0 = _UNK_001115f8;
   local_c8 = __LC210;
   uStack_c0 = _UNK_00111608;
   local_b8 = __LC211;
   uStack_b0 = _UNK_00111618;
   local_a8 = __LC212;
   uStack_a0 = _UNK_00111628;
   local_98 = __LC213;
   uStack_90 = _UNK_00111638;
   local_88 = __LC214;
   uStack_80 = _UNK_00111648;
   local_78 = __LC215;
   uStack_70 = _UNK_00111658;
   local_68 = __LC216;
   uStack_60 = _UNK_00111668;
   local_58 = __LC217;
   uStack_50 = _UNK_00111678;
   local_48 = __LC218;
   uStack_40 = _UNK_00111688;
   local_38 = __LC219;
   uStack_30 = (undefined1)_UNK_00111698;
   uStack_2f = (undefined7)_LC220._0_8_;
   cStack_28 = SUB81(_LC220._0_8_, 7);
   acStack_27._0_8_ = _LC220._8_8_;
   uVar3 = (ulong)param_3;
   if (99 < param_3) {
      do {
         param_3 = ( uint )(uVar3 / 100);
         uVar2 = (uint)uVar3;
         uVar4 = ( uVar2 + param_3 * -100 ) * 2;
         cVar1 = *(char*)( (long)&local_e8 + (ulong)uVar4 );
         param_1[uVar5] = *(char*)( (long)&local_e8 + ( ulong )(uVar4 + 1) );
         uVar4 = uVar5 - 1;
         uVar5 = uVar5 - 2;
         param_1[uVar4] = cVar1;
         uVar3 = uVar3 / 100;
      } while ( 9999 < uVar2 );
   }
   cVar1 = (char)param_3 + '0';
   if (9 < param_3) {
      param_1[1] = *(char*)( (long)&local_e8 + ( ulong )(param_3 * 2 + 1) );
      cVar1 = *(char*)( (long)&local_e8 + ( ulong )(param_3 * 2) );
   }
   *param_1 = cVar1;
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */void std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this, basic_string *param_1) {
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> bVar1;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *__src;
   ulong __n;
   ulong uVar2;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *__dest;
   uVar2 = glslang::GetThreadPoolAllocator();
   __dest = this + 0x18;
   *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 ) = __dest;
   __src = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
   __n = *(ulong*)( param_1 + 0x10 );
   *(ulong*)this = uVar2;
   if (__n < 0x10) {
      if (__n == 1) {
         bVar1 = *__src;
         *(undefined8*)( this + 0x10 ) = 1;
         this[0x18] = bVar1;
         this[0x19] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
         return;
      }
      if (__n == 0) {
         *(undefined8*)( this + 0x10 ) = 0;
         *__dest = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
         return;
      }
   } else {
      if ((long)__n < 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("basic_string::_M_create");
      }
      __dest = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)glslang::TPoolAllocator::allocate(uVar2);
      *(ulong*)( this + 0x18 ) = __n;
      *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 ) = __dest;
   }
   memcpy(__dest, __src, __n);
   *(ulong*)( this + 0x10 ) = __n;
   *(undefined1*)( *(long*)( this + 8 ) + __n ) = 0;
   return;
}/* bool glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)
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
         LAB_0010bd26:lVar1 = *(long*)( *(long*)( this + 0x68 ) + 0x10 );
         lVar3 = std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( *(long*)( this + 0x68 ) + 8 ),lVar1,param_2 ));
         return lVar1 != lVar3;
      }
   } else {
      cVar2 = ( **(code**)( *(long*)this + 0x128 ) )();
      if (cVar2 != '\0') goto LAB_0010bd26;
   }
   return false;
}/* glslang::TType::containsBasicType(glslang::TBasicType) const */ulong glslang::TType::containsBasicType(TType *this, uint param_2) {
   long lVar1;
   char cVar2;
   undefined1 auVar3[16];
   if ((byte)this[8] == param_2) {
      return 1;
   }
   if (*(code**)( *(long*)this + 0x128 ) == isStruct) {
      if (( byte )((char)this[8] - 0xfU) < 2) {
         LAB_0010bdb6:lVar1 = *(long*)( *(long*)( this + 0x68 ) + 0x10 );
         auVar3 = std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( *(long*)( this + 0x68 ) + 8 ),lVar1,param_2 ));
         return CONCAT71(auVar3._9_7_, lVar1 != auVar3._0_8_) & 0xffffffff;
      }
   } else {
      cVar2 = ( **(code**)( *(long*)this + 0x128 ) )();
      if (cVar2 != '\0') goto LAB_0010bdb6;
   }
   return 0;
}/* bool glslang::TType::contains<glslang::TType::containsStructure() const::{lambda(glslang::TType
   const*)#1}>(glslang::TType::containsStructure() const::{lambda(glslang::TType const*)#1}) const
    */bool glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)(TType *this, TType *param_2) {
   TType TVar1;
   long lVar2;
   char cVar3;
   code *pcVar4;
   long lVar5;
   pcVar4 = *(code**)( *(long*)this + 0x128 );
   if (this == param_2) {
      LAB_0010be40:if (pcVar4 != isStruct) {
         cVar3 = ( *pcVar4 )(this);
         if (cVar3 == '\0') {
            return false;
         }
         goto LAB_0010be69;
      }
      TVar1 = this[8];
   } else {
      if (pcVar4 != isStruct) {
         cVar3 = ( *pcVar4 )();
         if (cVar3 != '\0') {
            return true;
         }
         pcVar4 = *(code**)( *(long*)this + 0x128 );
         goto LAB_0010be40;
      }
      TVar1 = this[8];
      if (( byte )((char)TVar1 - 0xfU) < 2) {
         return true;
      }
   }
   if (1 < ( byte )((char)TVar1 - 0xfU)) {
      return false;
   }
   LAB_0010be69:lVar2 = *(long*)( *(long*)( this + 0x68 ) + 0x10 );
   lVar5 = std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsStructure ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( *(long*)( this + 0x68 ) + 8 ),lVar2,param_2 ));
   return lVar2 != lVar5;
}/* glslang::TType::containsStructure() const */bool glslang::TType::containsStructure(TType *this) {
   long lVar1;
   char cVar2;
   long lVar3;
   if (*(code**)( *(long*)this + 0x128 ) == isStruct) {
      if (( byte )((char)this[8] - 0xfU) < 2) {
         LAB_0010bed6:lVar1 = *(long*)( *(long*)( this + 0x68 ) + 0x10 );
         lVar3 = std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsStructure ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( *(long*)( this + 0x68 ) + 8 ),lVar1,this ));
         return lVar1 != lVar3;
      }
   } else {
      cVar2 = ( **(code**)( *(long*)this + 0x128 ) )();
      if (cVar2 != '\0') goto LAB_0010bed6;
   }
   return false;
}/* bool glslang::TType::contains<glslang::TType::containsSampler() const::{lambda(glslang::TType
   const*)#1}>(glslang::TType::containsSampler() const::{lambda(glslang::TType const*)#1}) const */bool glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const *)_1_ > ( long *param_1)

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
      goto LAB_0010bfd0;
    }
    pcVar5 = *(code **)(lVar2 + 0x158);
    if (pcVar5 != isImage) goto LAB_0010c020;
  } ) * (undefined1*)( (long)local_e0 + uVar12 ) = 0 ;local_d8 = uVar12;local_c0 = param_1;std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>::_M_emplace_unique<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>const>((_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>*)this, (pair_conflict*)&local_e8);uVar12 = extraout_RDX & 0xffffffff;goto LAB_0010cc4b;}if (*(long*)( lVar13 + 0x10 ) == 0) {
   plVar8 = (long*)( **(code**)( *(long*)param_1 + 0x48 ) )(param_1);
   iVar5 = *(int*)( this + 0x60 );
   pcVar3 = *(code**)( *plVar8 + 0xe0 );
   *(int*)( this + 0x60 ) = iVar5 + 1;
   if (pcVar3 == TVariable::setAnonId) {
      *(int*)( plVar8 + 0x1d ) = iVar5;
   } else {
      ( *pcVar3 )();
   }
   plVar8 = (long*)( **(code**)( *(long*)param_1 + 0x48 ) )(param_1);
   if (*(code**)( *plVar8 + 0xe8 ) == TVariable::getAnonId) {
      uVar12 = ( ulong ) * (uint*)( plVar8 + 0x1d );
   } else {
      uVar12 = ( **(code**)( *plVar8 + 0xe8 ) )();
   }
   __snprintf_chk(local_58, 0x14, 2, 0x14, &_LC226, "anon@", uVar12);
   pcVar3 = *(code**)( *(long*)param_1 + 0x20 );
   uVar12 = glslang::GetThreadPoolAllocator();
   puVar9 = (undefined8*)glslang::TPoolAllocator::allocate(uVar12);
   uVar10 = glslang::GetThreadPoolAllocator();
   *puVar9 = uVar10;
   puVar9[1] = puVar9 + 3;
   sVar11 = strlen(local_58);
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(puVar9, local_58, local_58 + sVar11);
   if (pcVar3 == TSymbol::changeName) {
      *(undefined8**)( param_1 + 8 ) = puVar9;
   } else {
      ( *pcVar3 )(param_1, puVar9);
   }
   uVar12 = insertAnonymousMembers(this, param_1, 0);
   goto LAB_0010cc4b;
}lVar6 = ( **(code**)( *(long*)param_1 + 0x30 ) )();lVar7 = ( **(code**)( *(long*)param_1 + 0x38 ) )(param_1);if (lVar7 == 0) {
   local_88 = glslang::GetThreadPoolAllocator();
   local_80 = local_70;
   uVar12 = *(ulong*)( lVar6 + 0x10 );
   puVar4 = *(undefined1**)( lVar6 + 8 );
   if (uVar12 < 0x10) {
      if (uVar12 == 1) {
         local_70[0] = CONCAT71(local_70[0]._1_7_, *puVar4);
      } else if (uVar12 != 0) goto LAB_0010cec4;
   } else {
      if ((long)uVar12 < 0) goto LAB_0010ceef;
      local_80 = (ulong*)glslang::TPoolAllocator::allocate(local_88);
      local_70[0] = uVar12;
      LAB_0010cec4:memcpy(local_80, puVar4, uVar12);
   }
   *(undefined1*)( (long)local_80 + uVar12 ) = 0;
   local_78 = uVar12;
   local_60 = param_1;
   std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>::_M_emplace_unique<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>const>((_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>*)this, (pair_conflict*)&local_88);
   uVar12 = extraout_RDX_00 & 0xffffffff;
   goto LAB_0010cc4b;
}if (!param_2) {
   if (*(TSymbolTableLevel**)( this + 0x18 ) != (TSymbolTableLevel*)0x0) {
      __s2 = *(void**)( lVar13 + 8 );
      uVar12 = *(ulong*)( lVar13 + 0x10 );
      pTVar15 = this + 0x10;
      pTVar16 = *(TSymbolTableLevel**)( this + 0x18 );
      do {
         while (true) {
            uVar2 = *(ulong*)( pTVar16 + 0x30 );
            uVar14 = uVar12;
            if (uVar2 <= uVar12) {
               uVar14 = uVar2;
            }
            if (( uVar14 != 0 ) && ( iVar5 = memcmp(*(void**)( pTVar16 + 0x28 ), __s2, uVar14) ),iVar5 != 0) break;
            lVar13 = uVar2 - uVar12;
            if (lVar13 < 0x80000000) {
               if (-0x80000001 < lVar13) {
                  iVar5 = (int)lVar13;
                  break;
               }
               goto LAB_0010ca90;
            }
            LAB_0010cae3:pTVar1 = pTVar16 + 0x10;
            pTVar15 = pTVar16;
            pTVar16 = *(TSymbolTableLevel**)pTVar1;
            if (*(TSymbolTableLevel**)pTVar1 == (TSymbolTableLevel*)0x0) goto LAB_0010caef;
         };
         if (-1 < iVar5) goto LAB_0010cae3;
         LAB_0010ca90:pTVar16 = *(TSymbolTableLevel**)( pTVar16 + 0x18 );
      } while ( pTVar16 != (TSymbolTableLevel*)0x0 );
      LAB_0010caef:if (this + 0x10 != pTVar15) {
         uVar2 = *(ulong*)( pTVar15 + 0x30 );
         uVar14 = uVar12;
         if (uVar2 <= uVar12) {
            uVar14 = uVar2;
         }
         if (( uVar14 == 0 ) || ( iVar5 = memcmp(__s2, *(void**)( pTVar15 + 0x28 ), uVar14) ),iVar5 == 0) {
            lVar13 = uVar12 - uVar2;
            if (lVar13 < 0x80000000) {
               if (lVar13 < -0x80000000) goto LAB_0010cce8;
               iVar5 = (int)lVar13;
               goto LAB_0010cb3e;
            }
         } else {
            LAB_0010cb3e:if (iVar5 < 0) goto LAB_0010cce8;
         }
         uVar12 = (ulong)param_2;
         goto LAB_0010cc4b;
      }
   }
}LAB_0010cce8:local_b8 = glslang::GetThreadPoolAllocator();local_b0 = local_a0;uVar12 = *(ulong*)( lVar6 + 0x10 );puVar4 = *(undefined1**)( lVar6 + 8 );if (uVar12 < 0x10) {
   if (uVar12 == 1) {
      local_a0[0] = CONCAT71(local_a0[0]._1_7_, *puVar4);
   } else if (uVar12 != 0) goto LAB_0010ce82;
} else {
   if ((long)uVar12 < 0) {
      LAB_0010ceef:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::_M_create");
   }
   local_b0 = (ulong*)glslang::TPoolAllocator::allocate(local_b8);
   local_a0[0] = uVar12;
   LAB_0010ce82:memcpy(local_b0, puVar4, uVar12);
}*(undefined1*)( (long)local_b0 + uVar12 ) = 0;local_a8 = uVar12;local_90 = param_1;std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>::_M_emplace_unique<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>const>((_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>*)this, (pair_conflict*)&local_b8);uVar12 = 1;LAB_0010cc4b:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return uVar12;}/* glslang::TSymbolTable::insert(glslang::TSymbol&) */undefined8 glslang::TSymbolTable::insert(TSymbolTable *this, TSymbol *param_1) {
   code *pcVar1;
   TSymbolTableLevel *pTVar2;
   char cVar3;
   int iVar4;
   long lVar5;
   undefined8 uVar6;
   basic_string *pbVar7;
   undefined8 *puVar8;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined1 *local_50;
   undefined8 local_48;
   undefined1 local_40[16];
   long local_30;
   lVar5 = *(long*)( this + 0x18 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar1 = *(code**)( *(long*)param_1 + 0x70 );
   *(long*)( this + 0x18 ) = lVar5 + 1;
   if (pcVar1 == TSymbol::setUniqueId) {
      *(long*)( param_1 + 0x10 ) = lVar5 + 1;
   } else {
      ( *pcVar1 )(param_1);
   }
   if (this[0x21] == (TSymbolTable)0x0) {
      lVar5 = ( **(code**)( *(long*)param_1 + 0x38 ) )(param_1);
      if (lVar5 != 0) goto LAB_0010cf62;
      pTVar2 = *(TSymbolTableLevel**)( *(long*)this + (long)( (int)( *(long*)( this + 8 ) - *(long*)this >> 3 ) + -1 ) * 8 );
      if (*(code**)( *(long*)param_1 + 0x18 ) == TSymbol::getName_abi_cxx11_) {
         pbVar7 = *(basic_string**)( param_1 + 8 );
      } else {
         pbVar7 = (basic_string*)( **(code**)( *(long*)param_1 + 0x18 ) )(param_1);
      }
      cVar3 = TSymbolTableLevel::hasFunctionName(pTVar2, pbVar7);
      if (cVar3 == '\0') goto LAB_0010cf62;
      LAB_0010d0af:uVar6 = 0;
   } else {
      LAB_0010cf62:puVar8 = *(undefined8**)this;
      iVar4 = (int)( *(long*)( this + 8 ) - (long)puVar8 >> 3 );
      if (( this[0x20] != (TSymbolTable)0x0 ) && ( iVar4 - 2U < 3 )) {
         pTVar2 = (TSymbolTableLevel*)*puVar8;
         if (*(code**)( *(long*)param_1 + 0x18 ) == TSymbol::getName_abi_cxx11_) {
            pbVar7 = *(basic_string**)( param_1 + 8 );
         } else {
            pbVar7 = (basic_string*)( **(code**)( *(long*)param_1 + 0x18 ) )(param_1);
         }
         cVar3 = TSymbolTableLevel::hasFunctionName(pTVar2, pbVar7);
         if (cVar3 != '\0') goto LAB_0010d0af;
         puVar8 = *(undefined8**)this;
         iVar4 = (int)( *(long*)( this + 8 ) - (long)puVar8 >> 3 );
         if (2 < iVar4) {
            pTVar2 = (TSymbolTableLevel*)puVar8[1];
            if (*(code**)( *(long*)param_1 + 0x18 ) == TSymbol::getName_abi_cxx11_) {
               pbVar7 = *(basic_string**)( param_1 + 8 );
            } else {
               pbVar7 = (basic_string*)( **(code**)( *(long*)param_1 + 0x18 ) )(param_1);
            }
            cVar3 = TSymbolTableLevel::hasFunctionName(pTVar2, pbVar7);
            if (cVar3 != '\0') goto LAB_0010d0af;
            puVar8 = *(undefined8**)this;
            iVar4 = (int)( *(long*)( this + 8 ) - (long)puVar8 >> 3 );
         }
      }
      pTVar2 = (TSymbolTableLevel*)puVar8[iVar4 + -1];
      local_58 = glslang::GetThreadPoolAllocator();
      local_50 = local_40;
      local_48 = 0;
      local_40[0] = 0;
      uVar6 = TSymbolTableLevel::insert(pTVar2, param_1, (bool)this[0x21], (basic_string*)&local_58);
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* std::pair<std::_Rb_tree_iterator<std::pair<int const, glslang::TVariable*> >, bool>
   std::_Rb_tree<int, std::pair<int const, glslang::TVariable*>, std::_Select1st<std::pair<int
   const, glslang::TVariable*> >, std::less<int>, glslang::pool_allocator<std::pair<int const,
   glslang::TVariable*> > >::_M_insert_unique<std::pair<int const, glslang::TVariable*>
   >(std::pair<int const, glslang::TVariable*>&&) */undefined1[16];std::_Rb_tree<int,std::pair<int_const,glslang::TVariable*>,std::_Select1st<std::pair<int_const,glslang::TVariable*>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVariable*>>>::_M_insert_unique<std::pair<int_const,glslang::TVariable*>> (_Rb_tree<int,std::pair<int_const,glslang::TVariable*>,std::_Select1st<std::pair<int_const,glslang::TVariable*>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVariable*>>>
           *this,pair_conflict *param_1) {
   uint uVar1;
   _Rb_tree_node_base *p_Var2;
   undefined8 uVar4;
   undefined1 auVar5[16];
   bool local_3c;
   _Rb_tree_node_base *p_Var3;
   uVar1 = *(uint*)param_1;
   auVar5 = _M_get_insert_unique_pos(this, (int*)(ulong)uVar1);
   p_Var3 = auVar5._8_8_;
   p_Var2 = auVar5._0_8_;
   if (p_Var3 == (_Rb_tree_node_base*)0x0) {
      uVar4 = 0;
   } else {
      local_3c = true;
      if (( p_Var2 == (_Rb_tree_node_base*)0x0 ) && ( p_Var3 != (_Rb_tree_node_base*)( this + 0x10 ) )) {
         local_3c = (int)uVar1 < *(int*)( p_Var3 + 0x20 );
      }
      p_Var2 = (_Rb_tree_node_base*)glslang::TPoolAllocator::allocate(*(ulong*)this);
      uVar4 = *(undefined8*)( param_1 + 8 );
      *(undefined8*)( p_Var2 + 0x20 ) = *(undefined8*)param_1;
      *(undefined8*)( p_Var2 + 0x28 ) = uVar4;
      std::_Rb_tree_insert_and_rebalance(local_3c, p_Var2, p_Var3, (_Rb_tree_node_base*)( this + 0x10 ));
      *(long*)( this + 0x30 ) = *(long*)( this + 0x30 ) + 1;
      uVar4 = 1;
   }
   auVar5._8_8_ = uVar4;
   auVar5._0_8_ = p_Var2;
   return auVar5;
}/* std::pair<std::_Rb_tree_iterator<std::pair<int const, int> >, bool> std::_Rb_tree<int,
   std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >, std::less<int>,
   glslang::pool_allocator<std::pair<int const, int> > >::_M_insert_unique<std::pair<int const, int>
   >(std::pair<int const, int>&&) */undefined1[16];std::_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,int>>>::_M_insert_unique<std::pair<int_const,int>> (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,int>>>
           *this,pair_conflict *param_1) {
   uint uVar1;
   _Rb_tree_node_base *p_Var2;
   undefined8 uVar4;
   undefined1 auVar5[16];
   bool local_3c;
   _Rb_tree_node_base *p_Var3;
   uVar1 = *(uint*)param_1;
   auVar5 = _M_get_insert_unique_pos(this, (int*)(ulong)uVar1);
   p_Var3 = auVar5._8_8_;
   p_Var2 = auVar5._0_8_;
   if (p_Var3 == (_Rb_tree_node_base*)0x0) {
      uVar4 = 0;
   } else {
      local_3c = true;
      if (( p_Var2 == (_Rb_tree_node_base*)0x0 ) && ( p_Var3 != (_Rb_tree_node_base*)( this + 0x10 ) )) {
         local_3c = (int)uVar1 < *(int*)( p_Var3 + 0x20 );
      }
      p_Var2 = (_Rb_tree_node_base*)glslang::TPoolAllocator::allocate(*(ulong*)this);
      *(undefined8*)( p_Var2 + 0x20 ) = *(undefined8*)param_1;
      std::_Rb_tree_insert_and_rebalance(local_3c, p_Var2, p_Var3, (_Rb_tree_node_base*)( this + 0x10 ));
      *(long*)( this + 0x30 ) = *(long*)( this + 0x30 ) + 1;
      uVar4 = 1;
   }
   auVar5._8_8_ = uVar4;
   auVar5._0_8_ = p_Var2;
   return auVar5;
}/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
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
   } else {
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
         } else {
            __dest = (undefined1*)memcpy(__dest, *(undefined1**)( this + 8 ), param_1);
         }
      }
      if (( param_3 != (char*)0x0 ) && ( param_4 != 0 )) {
         if (param_4 == 1) {
            __dest[param_1] = *param_3;
         } else {
            memcpy(__dest + param_1, param_3, param_4);
         }
      }
      if (__n != 0) {
         __src = (undefined1*)( param_1 + param_2 + *(long*)( this + 8 ) );
         if (__n == 1) {
            __dest[param_1 + param_4] = *__src;
         } else {
            memcpy(__dest + param_1 + param_4, __src, __n);
         }
      }
      *(undefined1**)( this + 8 ) = __dest;
      *(ulong*)( this + 0x18 ) = uVar3;
      return;
   }
   /* WARNING: Subroutine does not return */
   std::__throw_length_error("basic_string::_M_create");
}/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
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
   } else {
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
}/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
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
      } else {
         uVar3 = *(ulong*)( this + 0x18 );
      }
      if (uVar3 < uVar1) {
         _M_mutate(this, uVar2, 0, param_1, __n);
         pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 );
      } else if (__n != 0) {
         if (__n == 1) {
            pbVar4[uVar2] = ( basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> ) * param_1;
            pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 );
         } else {
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
}/* glslang::TSampler::getString[abi:cxx11]() const */void glslang::TSampler::getString_abi_cxx11_(void) {
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
            } else {
               *(uint*)( in_RDI + 3 ) = *local_90;
               *(undefined4*)( (long)in_RDI + ( uVar10 & 0xffffffff ) + 0x14 ) = *(undefined4*)( (long)local_90 + ( ( uVar10 & 0xffffffff ) - 4 ) );
            }
         } else {
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
               } while ( uVar7 < uVar3 );
            }
         }
      } else {
         in_RDI[1] = local_90;
         in_RDI[3] = CONCAT44(local_80[1], local_80[0]);
      }
      LAB_0010d7b4:in_RDI[2] = local_88;
      goto LAB_0010d7b8;
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
         goto LAB_0010d6cf;
      }
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, "sampler");
      bVar2 = in_RSI[3];
      puVar8 = local_90;
      uVar10 = local_88;
   } else {
      if (in_RSI[1] == '\b') {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, "attachmentEXT");
      } else if (in_RSI[1] == '\a') {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, "subpass");
      } else {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, "image");
      }
      LAB_0010d6cf:bVar2 = in_RSI[3];
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
            } else {
               *(uint*)( in_RDI + 3 ) = local_80[0];
               *(undefined4*)( (long)in_RDI + ( uVar10 & 0xffffffff ) + 0x14 ) = *(undefined4*)( (long)&local_88 + ( uVar10 & 0xffffffff ) + 4 );
            }
         } else {
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
               } while ( uVar7 < uVar3 );
            }
         }
      } else {
         in_RDI[1] = local_90;
         in_RDI[3] = CONCAT44(local_80[1], local_80[0]);
      }
      in_RDI[2] = local_88;
      goto LAB_0010d7b8;
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
      } else {
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
            } else {
               *puVar8 = local_80[0];
               *(undefined4*)( (long)in_RDI + ( uVar10 & 0xffffffff ) + 0x14 ) = *(undefined4*)( (long)&local_88 + ( uVar10 & 0xffffffff ) + 4 );
            }
         } else {
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
               } while ( uVar7 < uVar3 );
            }
         }
      } else {
         in_RDI[1] = local_90;
         in_RDI[3] = CONCAT44(local_80[1], local_80[0]);
      }
      goto LAB_0010d7b4;
   }
   local_68 = glslang::GetThreadPoolAllocator();
   uVar12 = uVar10 + 2;
   local_58 = 0;
   local_50[0] = local_50[0] & 0xffffffffffffff00;
   local_60 = local_50;
   if (uVar12 < 0x10) {
      uVar11 = 0;
      uVar12 = 2;
      LAB_0010dbcb:*(undefined2*)( (long)local_60 + uVar11 ) = 0x5f5f;
   } else {
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
         LAB_0010ddba:local_60 = __dest;
         local_50[0] = uVar4;
         if (0x7fffffffffffffff - local_58 < 2) goto LAB_0010dfed;
         uVar12 = local_58 + 2;
         uVar6 = 0xf;
         uVar11 = local_58;
         if (__dest != local_50) goto LAB_0010da18;
      } else {
         if (local_58 + 1 != 0) {
            __dest = (ulong*)memcpy(__dest, local_60, local_58 + 1);
            goto LAB_0010ddba;
         }
         uVar12 = 1;
         uVar11 = 0xffffffffffffffff;
         LAB_0010da18:uVar6 = uVar4;
         local_60 = __dest;
      }
      local_50[0] = uVar4;
      if (uVar12 <= uVar6) goto LAB_0010dbcb;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_68, uVar11, 0, "__", 2);
   }
   *(undefined1*)( (long)local_60 + uVar12 ) = 0;
   local_58 = uVar12;
   if (0x7fffffffffffffff - uVar12 < uVar10) {
      LAB_0010dfed:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::append");
   }
   uVar11 = uVar10 + uVar12;
   uVar4 = local_50[0];
   if (local_60 == local_50) {
      uVar4 = 0xf;
   }
   if (uVar4 < uVar11) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_68, uVar12, 0, (char*)puVar8, uVar10);
   } else if (uVar10 != 0) {
      if (uVar10 == 1) {
         *(char*)( (long)local_60 + uVar12 ) = (char)*puVar8;
      } else {
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
            } while ( uVar7 < uVar3 );
         }
         goto LAB_0010dae5;
      }
      if (( uVar10 & 4 ) == 0) {
         if (uVar3 != 0) {
            *(undefined1*)( in_RDI + 3 ) = *(undefined1*)( puVar5 + 3 );
            if (( uVar10 & 2 ) == 0) goto LAB_0010dae5;
            *(undefined2*)( (long)in_RDI + ( uVar10 & 0xffffffff ) + 0x16 ) = *(undefined2*)( (long)puVar5 + ( uVar10 & 0xffffffff ) + 0x16 );
            lVar9 = puVar5[2];
         }
      } else {
         *(undefined4*)( in_RDI + 3 ) = *(undefined4*)( puVar5 + 3 );
         *(undefined4*)( (long)in_RDI + ( uVar10 & 0xffffffff ) + 0x14 ) = *(undefined4*)( (long)puVar5 + ( uVar10 & 0xffffffff ) + 0x14 );
         lVar9 = puVar5[2];
      }
   } else {
      in_RDI[1] = (undefined8*)puVar5[1];
      in_RDI[3] = puVar5[3];
      LAB_0010dae5:lVar9 = puVar5[2];
   }
   in_RDI[2] = lVar9;
   puVar5[1] = puVar1;
   puVar5[2] = 0;
   *(undefined1*)( puVar5 + 3 ) = 0;
   LAB_0010d7b8:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* glslang::TType::getCompleteString(bool, bool, bool, bool, std::__cxx11::basic_string<char,
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
   } else if (param_1 < 100) {
      cVar4 = '\x02';
   } else if (param_1 < 1000) {
      cVar4 = '\x03';
   } else if (param_1 < 10000) {
      cVar4 = '\x04';
   } else {
      cVar4 = '\x05';
      if (99999 < param_1) {
         if (param_1 < 1000000) {
            cVar4 = '\x05';
         } else {
            cVar4 = '\a';
            if (param_1 < 10000000) goto LAB_0010e0e5;
            if (param_1 < 100000000) {
               cVar4 = '\b';
               goto LAB_0010e0e5;
            }
            if (param_1 < 1000000000) {
               cVar4 = '\t';
               goto LAB_0010e0e5;
            }
            cVar4 = '\t';
         }
         cVar4 = cVar4 + '\x01';
      }
   }
   LAB_0010e0e5:local_58 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)local_48;
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
   } else {
      uVar3 = *(ulong*)( this_00 + 0x18 );
   }
   if (uVar3 < uVar1) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(this_00, uVar2, 0, (char*)__src, __n);
      pbVar5 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this_00 + 8 );
   } else if (__n != 0) {
      if (__n == 1) {
         pbVar5[uVar2] = *__src;
         pbVar5 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this_00 + 8 );
      } else {
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
}/* glslang::TType::getCompleteString(bool, bool, bool, bool, std::__cxx11::basic_string<char,
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
   } else if (uVar5 < 100) {
      uVar6 = 2;
   } else if (uVar5 < 1000) {
      uVar6 = 3;
   } else if (uVar5 < 10000) {
      uVar6 = 4;
   } else {
      uVar6 = 5;
      if (99999 < uVar5) {
         if (uVar5 < 1000000) {
            iVar3 = 5;
         } else {
            uVar6 = 7;
            if (uVar5 < 10000000) goto LAB_0010e303;
            if (uVar5 < 100000000) {
               uVar6 = 8;
               goto LAB_0010e303;
            }
            if (uVar5 < 1000000000) {
               uVar6 = 9;
               goto LAB_0010e303;
            }
            iVar3 = 9;
         }
         uVar6 = iVar3 + 1;
      }
   }
   LAB_0010e303:local_58[0] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)local_48;
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
   } else {
      uVar4 = *(ulong*)( this_00 + 0x18 );
   }
   if (uVar4 < uVar1) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(this_00, uVar2, 0, (char*)__src, __n);
      pbVar7 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this_00 + 8 );
   } else if (__n != 0) {
      if (__n == 1) {
         pbVar7[uVar2] = *__src;
         pbVar7 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this_00 + 8 );
      } else {
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
}/* glslang::TType::getCompleteString(bool, bool, bool, bool, std::__cxx11::basic_string<char,
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
   ulong uVar9;
   basic_string *pbVar10;
   long lVar11;
   int iVar12;
   char *pcVar13;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar14;
   ulong uVar15;
   long lVar16;
   long lVar17;
   long in_FS_OFFSET;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_128;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_120;
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
   undefined8 local_c8;
   undefined1 *local_c0;
   undefined1 local_b0[24];
   undefined8 local_98;
   undefined1 *local_90;
   undefined1 local_80[24];
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
   local_128 = param_1;
   local_120 = param_1;
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
            lVar11 = param_2[5];
            uVar15 = param_2[6];
            lStack_f0 = param_2[7];
            local_e8 = param_2[8];
            lStack_e0 = param_2[9];
            local_d8 = param_2[10];
            lStack_d0 = param_2[0xb];
            uStack_100 = lVar11;
            local_f8 = uVar15;
            if (( ( ( ( *(char*)( (long)param_2 + 0x3c ) == '\0' ) && ( ( (short)param_2[6] == -1 && ( uStack_100._4_4_ = ( uint )((ulong)lVar11 >> 0x20) ),uVar7 = uStack_100._4_4_ & 0x3f8000,uVar7 == 0x1f8000 ) ) ) ) && ( ( *(uint*)( param_2 + 5 ) & *(uint*)( (long)param_2 + 0x24 ) ) == 0xffffffff ) ) && ( ( ( uStack_100._4_2_ = ( ushort )((ulong)lVar11 >> 0x20) ),uVar6 = ~uStack_100._4_2_,( uVar6 & 0xfff ) == 0 && ( uStack_100._5_1_ = ( byte )((ulong)lVar11 >> 0x28) ),bVar5 = uStack_100._5_1_ & 0x70,bVar5 == 0x40 ) ) && ( ( *(byte*)( (long)param_2 + 0x33 ) & *(byte*)( (long)param_2 + 0x32 ) ) == 0xff )) {
               local_f8 = uVar15 | 0xf00000000;
               uVar1 = local_f8;
               uVar7 = ~local_f8._4_4_;
               local_f8 = uVar1;
               if (( ( uVar7 & 0x3fff0 ) == 0 ) && ( local_f8._6_2_ = ( ushort )(uVar15 >> 0x30) ),uVar6 = ~local_f8._6_2_,( uVar6 & 0x7ffc ) == 0) goto LAB_0010fce4;
            }
            goto LAB_0010ebb0;
         }
      } else {
         LAB_0010ebb0:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "layout(");
         if (( ( ~*(ushort *)((long)param_2 + 0x2c) & 0xfff ) != 0 ) || ( ( ( *(byte*)( (long)param_2 + 0x2d ) & 0x70 ) != 0x40 || ( *(char*)( (long)param_2 + 0x32 ) != -1 ) ) )) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " location=");
            ::{lambda (unsigned_int);
            #2
            ( (_lambda_unsigned_int__2_*)&local_128,*(ushort*)( (long)param_2 + 0x2c ) & 0xfff );
            if (( *(byte*)( (long)param_2 + 0x2d ) & 0x70 ) != 0x40) {
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " component=");
               ::{lambda (unsigned_int);
               #2
               ( (_lambda_unsigned_int__2_*)&local_128,*(byte*)( (long)param_2 + 0x2d ) >> 4 & 7 );
            }
            if (*(char*)( (long)param_2 + 0x32 ) != -1) {
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " index=");
               ::{lambda (unsigned_int);
               #2
               ( (_lambda_unsigned_int__2_*)&local_128,( uint ) * (byte*)( (long)param_2 + 0x32 ) );
            }
         }
         if (( *(uint*)( (long)param_2 + 0x2c ) & 0x3f8000 ) != 0x1f8000) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " set=");
            ::{lambda (unsigned_int);
            #2
            ( (_lambda_unsigned_int__2_*)&local_128,*(uint*)( (long)param_2 + 0x2c ) >> 0xf & 0x7f );
         }
         if ((short)param_2[6] != -1) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " binding=");
            ::{lambda (unsigned_int);
            #2
            ( (_lambda_unsigned_int__2_*)&local_128,( uint ) * (ushort*)( param_2 + 6 ) );
         }
         if (*(char*)( (long)param_2 + 0x33 ) != -1) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " stream=");
            ::{lambda (unsigned_int);
            #2
            ( (_lambda_unsigned_int__2_*)&local_128,( uint ) * (byte*)( (long)param_2 + 0x33 ) );
         }
         if (( *(byte*)( (long)param_2 + 0x1f ) & 0x70 ) != 0) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
            pcVar13 = "row_major";
            bVar5 = *(byte*)( (long)param_2 + 0x1f ) >> 4 & 7;
            if (( bVar5 != 1 ) && ( pcVar13 = bVar5 != 2 )) {
               pcVar13 = "none";
            }
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, pcVar13);
         }
         if (( *(byte*)( param_2 + 4 ) & 0xf ) != 0) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
            switch (*(byte*)( param_2 + 4 ) & 0xf) {
               case 1:
          pcVar13 = "shared";
          break;
               case 2:
          pcVar13 = "std140";
          break;
               case 3:
          pcVar13 = "std430";
          break;
               case 4:
          pcVar13 = "packed";
          break;
               case 5:
          pcVar13 = "scalar";
          break;
               default:
          pcVar13 = "none";
            }
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, pcVar13);
         }
         if (*(int*)( (long)param_2 + 0x24 ) != -1) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " offset=");
            ::{lambda (int);
            #3
            ( (_lambda_int__3_*)&local_120,*(int*)( (long)param_2 + 0x24 ) );
         }
         if ((int)param_2[5] != -1) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " align=");
            ::{lambda (int);
            #3
         }
         if (*(char*)( (long)param_2 + 0x3c ) != '\0') {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
            pcVar13 = (char*)TQualifier::getLayoutFormatString(*(undefined1*)( (long)param_2 + 0x3c ));
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, pcVar13);
         }
         uVar6 = *(ushort*)( (long)param_2 + 0x36 );
         if (( ~*(byte *)((long)param_2 + 0x34) & 0xf ) == 0) {
            LAB_0010fb3a:if (( ~uVar6 & 0x7ffc ) != 0) {
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " xfb_offset=");
               ::{lambda (unsigned_int);
               #2
               ( (_lambda_unsigned_int__2_*)&local_128,*(ushort*)( (long)param_2 + 0x36 ) >> 2 & 0x1fff );
            }
         } else if (( ~uVar6 & 0x7ffc ) != 0) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " xfb_buffer=");
            ::{lambda (unsigned_int);
            #2
            ( (_lambda_unsigned_int__2_*)&local_128,*(byte*)( (long)param_2 + 0x34 ) & 0xf );
            uVar6 = *(ushort*)( (long)param_2 + 0x36 );
            goto LAB_0010fb3a;
         }
         if (( ~*(uint *)((long)param_2 + 0x34) & 0x3fff0 ) != 0) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " xfb_stride=");
            ::{lambda (unsigned_int);
            #2
            ( (_lambda_unsigned_int__2_*)&local_128,*(uint*)( (long)param_2 + 0x34 ) >> 4 & 0x3fff );
         }
         if ((char)param_2[7] != -1) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " input_attachment_index=");
            ::{lambda (unsigned_int);
            #2
            ( (_lambda_unsigned_int__2_*)&local_128,( uint ) * (byte*)( param_2 + 7 ) );
         }
         if (( ~*(uint *)(param_2 + 7) & 0x7ff00 ) != 0) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " constant_id=");
            ::{lambda (unsigned_int);
            #2
            ( (_lambda_unsigned_int__2_*)&local_128,*(uint*)( param_2 + 7 ) >> 8 & 0x7ff );
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
            ( (_lambda_unsigned_int__2_*)&local_128,1 << ( ( byte )(*(ushort*)( (long)param_2 + 0x3a ) >> 3) & 0x1f ) );
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
            ( (_lambda_int__3_*)&local_120,*(int*)( (long)param_2 + 0x44 ) );
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
      LAB_0010fce4:if (( *(byte*)( (long)param_2 + 0x1b ) & 0x10 ) != 0) {
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
      switch (*(byte*)( param_2 + 3 ) & 0x7f) {
         case 0:
      pcVar13 = "temp";
      break;
         case 1:
      pcVar13 = "global";
      break;
         case 2:
      pcVar13 = "const";
      break;
         case 3:
         case 0x10:
      pcVar13 = "in";
      break;
         case 4:
         case 0x11:
      pcVar13 = "out";
      break;
         case 5:
      pcVar13 = "uniform";
      break;
         case 6:
      pcVar13 = "buffer";
      break;
         case 7:
      pcVar13 = "shared";
      break;
         case 8:
      pcVar13 = "spirv_storage_class";
      break;
         case 9:
      pcVar13 = "rayPayloadNV";
      break;
         case 10:
      pcVar13 = "rayPayloadInNV";
      break;
         case 0xb:
      pcVar13 = "hitAttributeNV";
      break;
         case 0xc:
      pcVar13 = "callableDataNV";
      break;
         case 0xd:
      pcVar13 = "callableDataInNV";
      break;
         case 0xe:
      pcVar13 = "hitObjectAttributeNV";
      break;
         case 0xf:
      pcVar13 = "taskPayloadSharedEXT";
      break;
         case 0x12:
      pcVar13 = "inout";
      break;
         case 0x13:
      pcVar13 = "const (read only)";
      break;
         case 0x14:
      pcVar13 = "gl_VertexId";
      break;
         case 0x15:
      pcVar13 = "gl_InstanceId";
      break;
         case 0x16:
      pcVar13 = "gl_Position";
      break;
         case 0x17:
      pcVar13 = "gl_PointSize";
      break;
         case 0x18:
      pcVar13 = "gl_ClipVertex";
      break;
         case 0x19:
      pcVar13 = "gl_FrontFacing";
      break;
         case 0x1a:
      pcVar13 = "gl_FragCoord";
      break;
         case 0x1b:
      pcVar13 = "gl_PointCoord";
      break;
         case 0x1c:
      pcVar13 = "fragColor";
      break;
         case 0x1d:
      pcVar13 = "gl_FragDepth";
      break;
         case 0x1e:
      pcVar13 = "gl_FragStencilRefARB";
      break;
         default:
      pcVar13 = "unknown qualifier";
      }
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, pcVar13);
   }
   if (param_6 == '\0') goto LAB_0010f0c0;
   if (param_3 == '\0') {
      lVar11 = *param_2;
      if (*(code**)( lVar11 + 0xe8 ) == isArray) {
         lVar17 = param_2[0xc];
         if (lVar17 != 0) {
            LAB_0010f261:lVar16 = 0;
            lVar11 = *(long*)( lVar17 + 8 );
            while (lVar11 != 0) {
               if ((int)( *(long*)( lVar11 + 0x10 ) - *(long*)( lVar11 + 8 ) >> 4 ) <= (int)lVar16) break;
               iVar12 = *(int*)( *(long*)( lVar11 + 8 ) + lVar16 * 0x10 );
               if (iVar12 == 0 && (int)lVar16 == 0) {
                  if (*(char*)( lVar17 + 0x15 ) == '\0') {
                     std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " unsized");
                     LAB_0010f2a9:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
                     iVar12 = *(int*)( param_2[0xc] + 0x10 );
                     if (iVar12 < 1) {
                        iVar12 = 1;
                     }
                     ::{lambda (int);
                     #3
                     goto LAB_0010f2d0;
                  }
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " runtime-sized array of");
               } else {
                  if (iVar12 == 0) {
                     std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " unsized");
                     if (lVar16 == 0) goto LAB_0010f2a9;
                  } else {
                     std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
                     ::{lambda (int);
                     #3
                     ( (_lambda_int__3_*)&local_120,*(int*)( *(long*)( *(long*)( param_2[0xc] + 8 ) + 8 ) + lVar16 * 0x10 ) );
                  }
                  LAB_0010f2d0:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "-element array of");
               }
               lVar17 = param_2[0xc];
               lVar16 = lVar16 + 1;
               lVar11 = *(long*)( lVar17 + 8 );
            };
            lVar11 = *param_2;
         }
      } else {
         cVar4 = ( **(code**)( lVar11 + 0xe8 ) )(param_2);
         if (cVar4 != '\0') {
            lVar17 = param_2[0xc];
            goto LAB_0010f261;
         }
         lVar11 = *param_2;
      }
      if (*(code**)( lVar11 + 0x188 ) == isParameterized) {
         if (param_2[0x11] != 0) {
            LAB_0010f61e:if (( *(byte*)( (long)param_2 + 10 ) & 0x40 ) != 0) {
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "coopmat");
            }
            lVar17 = 0;
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "<");
            lVar11 = *(long*)( *(long*)( param_2[0x11] + 8 ) + 8 );
            if (lVar11 != 0) {
               while (true) {
                  if ((int)( *(long*)( lVar11 + 0x10 ) - *(long*)( lVar11 + 8 ) >> 4 ) <= (int)lVar17) break;
                  ::{lambda (int);
                  #3
                  ( (_lambda_int__3_*)&local_120,*(int*)( *(long*)( lVar11 + 8 ) + lVar17 * 0x10 ) );
                  lVar11 = *(long*)( *(long*)( param_2[0x11] + 8 ) + 8 );
                  if (( lVar11 == 0 ) || ( (int)( *(long*)( lVar11 + 0x10 ) - *(long*)( lVar11 + 8 ) >> 4 ) + -1 != (int)lVar17 )) {
                     std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, ", ");
                     lVar11 = *(long*)( *(long*)( param_2[0x11] + 8 ) + 8 );
                     if (lVar11 == 0) break;
                  }
                  lVar17 = lVar17 + 1;
               };
            }
            if (( *(byte*)( (long)param_2 + 0xb ) & 4 ) != 0) {
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, ", ");
               ::{lambda (int);
               #3
               ( (_lambda_int__3_*)&local_120,*(ushort*)( (long)param_2 + 10 ) >> 7 & 7 );
            }
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, ">");
         }
      } else {
         cVar4 = ( **(code**)( lVar11 + 0x188 ) )(param_2);
         if (cVar4 != '\0') goto LAB_0010f61e;
      }
      if (( param_5 != '\0' ) && ( ( *(byte*)( (long)param_2 + 0x1b ) & 0xe ) != 0 )) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
         pcVar13 = "mediump";
         bVar5 = *(byte*)( (long)param_2 + 0x1b ) >> 1 & 7;
         if (bVar5 != 2) {
            if (bVar5 < 3) {
               pcVar13 = "";
               if (bVar5 != 0) {
                  pcVar13 = "lowp";
               }
            } else {
               pcVar13 = "highp";
               if (bVar5 != 3) {
                  pcVar13 = "unknown precision qualifier";
               }
            }
         }
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, pcVar13);
      }
      lVar11 = *param_2;
      if (*(code**)( lVar11 + 0xe0 ) == isMatrix) {
         if (*(byte*)( (long)param_2 + 9 ) < 0x10) goto LAB_0010f72b;
         LAB_0010f865:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
         ::{lambda (int);
         #3
         ( (_lambda_int__3_*)&local_120,( uint )(*(byte*)( (long)param_2 + 9 ) >> 4) );
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "X");
         ::{lambda (int);
         #3
         ( (_lambda_int__3_*)&local_120,*(byte*)( (long)param_2 + 10 ) & 0xf );
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " matrix of");
      } else {
         cVar4 = ( **(code**)( lVar11 + 0xe0 ) )(param_2);
         if (cVar4 != '\0') goto LAB_0010f865;
         lVar11 = *param_2;
         LAB_0010f72b:if (*(code**)( lVar11 + 0xd8 ) == isVector) {
            if (( *(byte*)( (long)param_2 + 9 ) & 0xf ) < 2) {
               bVar5 = *(byte*)( (long)param_2 + 10 ) >> 4 & 1;
               goto LAB_0010f92c;
            }
         } else {
            bVar5 = ( **(code**)( lVar11 + 0xd8 ) )(param_2);
            LAB_0010f92c:if (bVar5 == 0) goto LAB_0010f781;
         }
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
         ::{lambda (int);
         #3
         ( (_lambda_int__3_*)&local_120,*(byte*)( (long)param_2 + 9 ) & 0xf );
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "-component vector of");
      }
      LAB_0010f781:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
      if ((char)param_2[1] == '\x0e') {
         TSampler::getString_abi_cxx11_();
      } else {
         local_68 = glslang::GetThreadPoolAllocator();
         switch ((char)param_2[1]) {
            case '\0':
        lVar11 = 4;
        pcVar13 = "void";
        break;
            case '\x01':
        lVar11 = 5;
        pcVar13 = "float";
        break;
            case '\x02':
        lVar11 = 6;
        pcVar13 = "double";
        break;
            case '\x03':
        lVar11 = 9;
        pcVar13 = "float16_t";
        break;
            case '\x04':
        lVar11 = 6;
        pcVar13 = "int8_t";
        break;
            case '\x05':
        lVar11 = 7;
        pcVar13 = "uint8_t";
        break;
            case '\x06':
        lVar11 = 7;
        pcVar13 = "int16_t";
        break;
            case '\a':
        lVar11 = 8;
        pcVar13 = "uint16_t";
        break;
            case '\b':
        lVar11 = 3;
        pcVar13 = "int";
        break;
            case '\t':
        lVar11 = 4;
        pcVar13 = "uint";
        break;
            case '\n':
        lVar11 = 7;
        pcVar13 = "int64_t";
        break;
            case '\v':
        lVar11 = 8;
        pcVar13 = "uint64_t";
        break;
            case '\f':
        lVar11 = 4;
        pcVar13 = "bool";
        break;
            case '\r':
        lVar11 = 0xb;
        pcVar13 = "atomic_uint";
        break;
            case '\x0e':
        lVar11 = 0xd;
        pcVar13 = "sampler/image";
        break;
            case '\x0f':
        lVar11 = 9;
        pcVar13 = "structure";
        break;
            case '\x10':
        lVar11 = 5;
        pcVar13 = "block";
        break;
            case '\x11':
        lVar11 = 0x17;
        pcVar13 = "accelerationStructureNV";
        break;
            case '\x12':
        lVar11 = 9;
        pcVar13 = "reference";
        break;
            case '\x13':
        lVar11 = 0xb;
        pcVar13 = "rayQueryEXT";
        break;
            default:
        lVar11 = 0xc;
        pcVar13 = "unknown type";
        break;
            case '\x15':
        lVar11 = 7;
        pcVar13 = "coopmat";
        break;
            case '\x16':
        lVar11 = 10;
        pcVar13 = "spirv_type";
        break;
            case '\x17':
        lVar11 = 6;
        pcVar13 = "string";
         }
         local_60 = local_50;
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_68, pcVar13, pcVar13 + lVar11);
      }
      uVar15 = *(ulong*)( param_1 + 0x10 );
      if (0x7fffffffffffffff - uVar15 < local_58) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("basic_string::append");
      }
      pbVar14 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
      uVar1 = local_58 + uVar15;
      if (param_1 + 0x18 == pbVar14) {
         uVar9 = 0xf;
      } else {
         uVar9 = *(ulong*)( param_1 + 0x18 );
      }
      if (uVar9 < uVar1) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar15, 0, (char*)local_60, local_58);
         pbVar14 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
      } else if (local_58 != 0) {
         if (local_58 == 1) {
            pbVar14[uVar15] = *local_60;
            pbVar14 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
         } else {
            memcpy(pbVar14 + uVar15, local_60, local_58);
            pbVar14 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
         }
      }
      *(ulong*)( param_1 + 0x10 ) = uVar1;
      pbVar14[uVar1] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
      if (0x7f < *(ushort*)( param_2 + 3 )) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
         pcVar13 = (char*)GetBuiltInVariableString(*(ushort*)( param_2 + 3 ) >> 7);
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, pcVar13);
      }
      if (*(code**)( *param_2 + 0x128 ) == isStruct) {
         if (1 < ( byte )((char)param_2[1] - 0xfU)) goto LAB_0010f0c0;
      } else {
         cVar4 = ( **(code**)( *param_2 + 0x128 ) )(param_2);
         if (cVar4 == '\0') goto LAB_0010f0c0;
      }
      if (param_2[0xd] != 0) {
         uVar15 = 0;
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "{");
         lVar11 = param_2[0xd];
         lVar17 = *(long*)( lVar11 + 8 );
         if (*(long*)( lVar11 + 0x10 ) != lVar17) {
            do {
               lVar16 = uVar15 * 0x20;
               pcVar2 = *(code**)( **(long**)( lVar17 + lVar16 ) + 0x18 );
               if (pcVar2 == hiddenMember) {
                  if ((char)( *(long**)( lVar17 + lVar16 ) )[1] != '\0') {
                     LAB_0010ef7f:if (param_6 == '\0') {
                        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, ", ");
                     }
                     uVar8 = *(undefined8*)( *(long*)( param_2[0xd] + 8 ) + lVar16 );
                     local_98 = glslang::GetThreadPoolAllocator();
                     local_90 = local_80;
                     std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_98, &_LC0);
                     local_c8 = glslang::GetThreadPoolAllocator();
                     local_c0 = local_b0;
                     std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_c8, &_LC0);
                     getCompleteString(&local_68, uVar8, 0, 1, 1, 1, &local_c8, &local_98);
                     std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, (char*)local_60, local_58);
                     std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
                     plVar3 = *(long**)( *(long*)( param_2[0xd] + 8 ) + lVar16 );
                     pcVar2 = *(code**)( *plVar3 + 0x30 );
                     if (pcVar2 == getFieldName_abi_cxx11_) {
                        lVar11 = plVar3[0xe];
                     } else {
                        lVar11 = ( *pcVar2 )();
                     }
                     std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, *(char**)( lVar11 + 8 ), *(ulong*)( lVar11 + 0x10 ));
                     param_6 = '\0';
                     goto LAB_0010f08c;
                  }
               } else {
                  cVar4 = ( *pcVar2 )();
                  if (cVar4 == '\0') goto LAB_0010ef7f;
                  LAB_0010f08c:lVar11 = param_2[0xd];
               }
               lVar17 = *(long*)( lVar11 + 8 );
               uVar15 = uVar15 + 1;
            } while ( uVar15 < ( ulong )(*(long*)( lVar11 + 0x10 ) - lVar17 >> 5) );
         }
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "}");
      }
      goto LAB_0010f0c0;
   }
   if (( param_5 != '\0' ) && ( ( *(byte*)( (long)param_2 + 0x1b ) & 0xe ) != 0 )) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
      pcVar13 = "mediump";
      bVar5 = *(byte*)( (long)param_2 + 0x1b ) >> 1 & 7;
      if (bVar5 != 2) {
         if (bVar5 < 3) {
            pcVar13 = "";
            if (bVar5 != 0) {
               pcVar13 = "lowp";
            }
         } else {
            pcVar13 = "highp";
            if (bVar5 != 3) {
               pcVar13 = "unknown precision qualifier";
            }
         }
      }
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, pcVar13);
   }
   if (*(code**)( *param_2 + 0xd8 ) == isVector) {
      if (( *(byte*)( (long)param_2 + 9 ) & 0xf ) < 2) {
         bVar5 = *(byte*)( (long)param_2 + 10 ) >> 4 & 1;
         goto LAB_0010f345;
      }
      LAB_0010ecb2:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
      bVar5 = *(byte*)( param_2 + 1 );
      if (bVar5 == 9) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "u");
      } else if (bVar5 < 10) {
         if (bVar5 == 2) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "d");
         } else if (bVar5 == 8) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "i");
         }
      } else if (bVar5 == 0xc) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "b");
      }
      if (*(code**)( *param_2 + 0xd8 ) == isVector) {
         if (( *(byte*)( (long)param_2 + 9 ) & 0xf ) < 2) {
            bVar5 = *(byte*)( (long)param_2 + 10 ) >> 4 & 1;
            goto LAB_0010f94c;
         }
      } else {
         bVar5 = ( **(code**)( *param_2 + 0xd8 ) )(param_2);
         LAB_0010f94c:if (bVar5 == 0) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "mat");
            ::{lambda (int);
            #3
            ( (_lambda_int__3_*)&local_120,( uint )(*(byte*)( (long)param_2 + 9 ) >> 4) );
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "x");
            ::{lambda (int);
            #3
            ( (_lambda_int__3_*)&local_120,*(byte*)( (long)param_2 + 10 ) & 0xf );
            goto LAB_0010ed37;
         }
      }
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "vec");
      ::{lambda (int);
      #3
      ( (_lambda_int__3_*)&local_120,*(byte*)( (long)param_2 + 9 ) & 0xf );
   } else {
      bVar5 = ( **(code**)( *param_2 + 0xd8 ) )(param_2);
      LAB_0010f345:if (bVar5 != 0) goto LAB_0010ecb2;
      lVar11 = *param_2;
      if (*(code**)( lVar11 + 0xe0 ) != isMatrix) {
         cVar4 = ( **(code**)( lVar11 + 0xe0 ) )(param_2);
         if (cVar4 == '\0') {
            lVar11 = *param_2;
            goto LAB_0010f374;
         }
         goto LAB_0010ecb2;
      }
      if (0xf < *(byte*)( (long)param_2 + 9 )) goto LAB_0010ecb2;
      LAB_0010f374:if (*(code**)( lVar11 + 0x128 ) == isStruct) {
         if (1 < ( byte )((char)param_2[1] - 0xfU)) goto LAB_0010f560;
         LAB_0010f39c:if (param_2[0xd] == 0) goto LAB_0010f560;
         uVar15 = 0;
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, *(char**)( param_8 + 8 ));
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "{");
         lVar11 = param_2[0xd];
         lVar17 = *(long*)( lVar11 + 8 );
         if (*(long*)( lVar11 + 0x10 ) != lVar17) {
            do {
               lVar16 = uVar15 * 0x20;
               pcVar2 = *(code**)( **(long**)( lVar17 + lVar16 ) + 0x18 );
               if (pcVar2 == hiddenMember) {
                  if ((char)( *(long**)( lVar17 + lVar16 ) )[1] != '\0') {
                     LAB_0010f430:if (param_3 == '\0') {
                        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, ", ");
                     }
                     uVar8 = *(undefined8*)( *(long*)( param_2[0xd] + 8 ) + lVar16 );
                     local_98 = glslang::GetThreadPoolAllocator();
                     local_90 = local_80;
                     std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_98, &_LC0);
                     plVar3 = *(long**)( *(long*)( param_2[0xd] + 8 ) + lVar16 );
                     pcVar2 = *(code**)( *plVar3 + 0x30 );
                     if (pcVar2 == getFieldName_abi_cxx11_) {
                        pbVar10 = (basic_string*)plVar3[0xe];
                     } else {
                        pbVar10 = (basic_string*)( *pcVar2 )();
                     }
                     std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_c8, pbVar10);
                     getCompleteString(&local_68, uVar8, 1, param_4, param_5, 1, (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_c8, &local_98);
                     std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, (char*)local_60, local_58);
                     param_3 = '\0';
                     goto LAB_0010f4f5;
                  }
               } else {
                  cVar4 = ( *pcVar2 )();
                  if (cVar4 == '\0') goto LAB_0010f430;
                  LAB_0010f4f5:lVar11 = param_2[0xd];
               }
               lVar17 = *(long*)( lVar11 + 8 );
               uVar15 = uVar15 + 1;
            } while ( uVar15 < ( ulong )(*(long*)( lVar11 + 0x10 ) - lVar17 >> 5) );
         }
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "}");
      } else {
         cVar4 = ( **(code**)( lVar11 + 0x128 ) )(param_2);
         if (cVar4 != '\0') goto LAB_0010f39c;
         LAB_0010f560:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
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
   LAB_0010ed37:if (*(long*)( param_7 + 0x10 ) != 0) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, *(char**)( param_7 + 8 ));
   }
   if (*(code**)( *param_2 + 0xe8 ) == isArray) {
      lVar11 = param_2[0xc];
      if (lVar11 == 0) goto LAB_0010f0c0;
   } else {
      cVar4 = ( **(code**)( *param_2 + 0xe8 ) )(param_2);
      if (cVar4 == '\0') goto LAB_0010f0c0;
      lVar11 = param_2[0xc];
   }
   lVar17 = *(long*)( lVar11 + 8 );
   if (lVar17 != 0) {
      lVar16 = 0;
      do {
         if ((int)( *(long*)( lVar17 + 0x10 ) - *(long*)( lVar17 + 8 ) >> 4 ) <= (int)lVar16) break;
         iVar12 = *(int*)( *(long*)( lVar17 + 8 ) + lVar16 * 0x10 );
         if (iVar12 == 0 && (int)lVar16 == 0) {
            if (*(char*)( lVar11 + 0x15 ) == '\0') {
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "[");
               LAB_0010edb5:iVar12 = *(int*)( param_2[0xc] + 0x10 );
               if (iVar12 < 1) {
                  iVar12 = 1;
               }
               ::{lambda (int);
               #3
               goto LAB_0010edd0;
            }
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "[]");
         } else {
            if (iVar12 == 0) {
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "[");
               if (lVar16 == 0) goto LAB_0010edb5;
            } else {
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "[");
               ::{lambda (int);
               #3
               ( (_lambda_int__3_*)&local_120,*(int*)( *(long*)( *(long*)( param_2[0xc] + 8 ) + 8 ) + lVar16 * 0x10 ) );
            }
            LAB_0010edd0:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "]");
         }
         lVar11 = param_2[0xc];
         lVar16 = lVar16 + 1;
         lVar17 = *(long*)( lVar11 + 8 );
      } while ( lVar17 != 0 );
   }
   LAB_0010f0c0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_replace_cold(char*, unsigned long, char const*, unsigned long, unsigned long) */void std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_replace_cold(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this, char *param_1, ulong param_2, char *param_3, ulong param_4, ulong param_5) {
   long lVar1;
   char *pcVar2;
   size_t __n;
   byte bVar3;
   bVar3 = 0;
   if (param_4 - 1 < param_2) {
      if (param_4 == 1) {
         *param_1 = *param_3;
      } else {
         memmove(param_1, param_3, param_4);
      }
   }
   if (( param_5 != 0 ) && ( param_4 != param_2 )) {
      if (param_5 == 1) {
         param_1[param_4] = param_1[param_2];
      } else {
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
            } else {
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
         } else {
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
      } else {
         if (param_4 != 1) {
            memmove(param_1, param_3, param_4);
            return;
         }
         *param_1 = *param_3;
      }
   }
   return;
}/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_replace(unsigned long, unsigned long, char const*, unsigned long) */basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> * __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_replace
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          ulong param_1,ulong param_2,char *param_3,ulong param_4)

{
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *__dest;long lVar1basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar2ulong uVar3ulong uVar4lVar1 = *(long*)( this + 0x10 );if (param_4 <= ( param_2 + 0x7fffffffffffffff ) - lVar1) {
   pbVar2 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 );
   uVar3 = ( param_4 - param_2 ) + lVar1;
   if (pbVar2 == this + 0x18) {
      uVar4 = 0xf;
   } else {
      uVar4 = *(ulong*)( this + 0x18 );
   }
   if (uVar4 < uVar3) {
      _M_mutate(this, param_1, param_2, param_3, param_4);
   } else {
      __dest = pbVar2 + param_1;
      uVar4 = lVar1 - ( param_1 + param_2 );
      if (( param_3 < pbVar2 ) || ( pbVar2 + lVar1 < param_3 )) {
         if (( uVar4 != 0 ) && ( param_2 != param_4 )) {
            if (uVar4 == 1) {
               __dest[param_4] = __dest[param_2];
            } else {
               memmove(__dest + param_4, __dest + param_2, uVar4);
            }
         }
         if (param_4 != 0) {
            if (param_4 == 1) {
               *__dest = ( basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> ) * param_3;
            } else {
               memcpy(__dest, param_3, param_4);
            }
         }
      } else {
         _M_replace_cold(this, (char*)__dest, param_2, param_3, param_4, uVar4);
      }
   }
   *(ulong*)( this + 0x10 ) = uVar3;
   *(undefined1*)( *(long*)( this + 8 ) + uVar3 ) = 0;
   return this;
}/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::_M_replace");}/* WARNING: Control flow encountered bad instruction data *//* glslang::TType::~TType() */void glslang::TType::~TType(TType *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */void std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::basic_string(basic_string *param_1) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* glslang::TVariable::TVariable(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const*, glslang::TType const&, bool) */void glslang::TVariable::TVariable(TVariable *this, basic_string *param_1, TType *param_2, bool param_3) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* glslang::TConstUnionArray::~TConstUnionArray() */void glslang::TConstUnionArray::~TConstUnionArray(TConstUnionArray *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
