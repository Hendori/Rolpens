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
/* glslang::OutputTreeText(TInfoSink&, TIntermNode const*, int) */void glslang::OutputTreeText(TInfoSink *param_1, TIntermNode *param_2, int param_3) {
   TInfoSink *pTVar1;
   size_t sVar2;
   long lVar3;
   TIntermNode *pTVar4;
   int iVar5;
   long in_FS_OFFSET;
   undefined8 local_88;
   undefined1 *local_80;
   undefined1 local_70[24];
   char local_58[24];
   long local_40;
   pTVar1 = param_1 + 0x30;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((code*)**(undefined8**)param_2 == TIntermNode::getLoc) {
      pTVar4 = param_2 + 8;
   }
 else {
      pTVar4 = (TIntermNode*)( *(code*)**(undefined8**)param_2 )(param_2);
   }

   __snprintf_chk(local_58, 0x10, 2, 0x10, &_LC1, *(undefined4*)( pTVar4 + 8 ));
   local_88 = glslang::GetThreadPoolAllocator();
   local_80 = local_70;
   sVar2 = strlen(local_58);
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_88, local_58, local_58 + sVar2);
   glslang::TInfoSinkBase::append(pTVar1);
   glslang::TInfoSinkBase::append((char*)pTVar1);
   if ((code*)**(undefined8**)param_2 == TIntermNode::getLoc) {
      iVar5 = *(int*)( param_2 + 0x14 );
      if (iVar5 == 0) {
         LAB_00100228:glslang::TInfoSinkBase::append((char*)pTVar1);
         goto LAB_001001cd;
      }

   }
 else {
      lVar3 = ( *(code*)**(undefined8**)param_2 )(param_2);
      if (*(int*)( lVar3 + 0xc ) == 0) goto LAB_00100228;
      if ((code*)**(undefined8**)param_2 == TIntermNode::getLoc) {
         iVar5 = *(int*)( param_2 + 0x14 );
      }
 else {
         lVar3 = ( *(code*)**(undefined8**)param_2 )(param_2);
         iVar5 = *(int*)( lVar3 + 0xc );
      }

   }

   __snprintf_chk(local_58, 0x10, 2, 0x10, &_LC1, iVar5);
   local_88 = glslang::GetThreadPoolAllocator();
   local_80 = local_70;
   sVar2 = strlen(local_58);
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_88, local_58, local_58 + sVar2);
   glslang::TInfoSinkBase::append(pTVar1);
   LAB_001001cd:iVar5 = 0;
   if (0 < param_3) {
      do {
         iVar5 = iVar5 + 1;
         glslang::TInfoSinkBase::append((char*)pTVar1);
      }
 while ( param_3 != iVar5 );
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* glslang::TOutputTraverser::visitBranch(glslang::TVisit, glslang::TIntermBranch*) */undefined8 glslang::TOutputTraverser::visitBranch(TOutputTraverser *this, undefined8 param_2, TIntermNode *param_3) {
   TInfoSink *pTVar1;
   long *plVar2;
   TInfoSink *pTVar3;
   pTVar1 = *(TInfoSink**)( this + 0x38 );
   OutputTreeText(pTVar1, param_3, *(int*)( this + 0xc ));
   if (*(int*)( param_3 + 0x20 ) - 0x1d0U < 10) {
      pTVar3 = pTVar1 + 0x30;
      switch (*(int*)( param_3 + 0x20 )) {
         case 0x1d0:
      glslang::TInfoSinkBase::append((char *)pTVar3);
      break;
         case 0x1d1:
      glslang::TInfoSinkBase::append((char *)pTVar3);
      break;
         case 0x1d2:
      glslang::TInfoSinkBase::append((char *)pTVar3);
      break;
         case 0x1d3:
      glslang::TInfoSinkBase::append((char *)pTVar3);
      break;
         case 0x1d4:
      glslang::TInfoSinkBase::append((char *)pTVar3);
      break;
         case 0x1d5:
      glslang::TInfoSinkBase::append((char *)pTVar3);
      break;
         case 0x1d6:
      glslang::TInfoSinkBase::append((char *)pTVar3);
      break;
         case 0x1d7:
      glslang::TInfoSinkBase::append((char *)pTVar3);
      break;
         case 0x1d8:
      glslang::TInfoSinkBase::append((char *)pTVar3);
      break;
         case 0x1d9:
      glslang::TInfoSinkBase::append((char *)pTVar3);
      }

   }
 else {
      glslang::TInfoSinkBase::append((char*)( pTVar1 + 0x30 ));
   }

   if (*(long*)( param_3 + 0x28 ) != 0) {
      glslang::TInfoSinkBase::append((char*)( pTVar1 + 0x30 ));
      plVar2 = *(long**)( param_3 + 0x28 );
      *(int*)( this + 0xc ) = *(int*)( this + 0xc ) + 1;
      ( **(code**)( *plVar2 + 0x10 ) )(plVar2, this);
      *(int*)( this + 0xc ) = *(int*)( this + 0xc ) + -1;
      return 0;
   }

   glslang::TInfoSinkBase::append((char*)( pTVar1 + 0x30 ));
   return 0;
}
/* glslang::TOutputTraverser::visitSwitch(glslang::TVisit, glslang::TIntermSwitch*) */undefined8 glslang::TOutputTraverser::visitSwitch(TOutputTraverser *this, undefined8 param_2, TIntermNode *param_3) {
   TInfoSink *pTVar1;
   TIntermNode TVar2;
   int iVar3;
   TInfoSink *pTVar4;
   long lVar5;
   long *plVar6;
   pTVar4 = *(TInfoSink**)( this + 0x38 );
   pTVar1 = pTVar4 + 0x30;
   OutputTreeText(pTVar4, param_3, *(int*)( this + 0xc ));
   glslang::TInfoSinkBase::append((char*)pTVar1);
   if (param_3[0x30] == (TIntermNode)0x0) {
      TVar2 = param_3[0x31];
   }
 else {
      glslang::TInfoSinkBase::append((char*)pTVar1);
      TVar2 = param_3[0x31];
   }

   if (TVar2 != (TIntermNode)0x0) {
      glslang::TInfoSinkBase::append((char*)pTVar1);
   }

   glslang::TInfoSinkBase::append((char*)pTVar1);
   OutputTreeText(pTVar4, param_3, *(int*)( this + 0xc ));
   glslang::TInfoSinkBase::append((char*)pTVar1);
   lVar5 = *(long*)param_3;
   *(int*)( this + 0xc ) = *(int*)( this + 0xc ) + 1;
   if (*(code**)( lVar5 + 0xe8 ) == TIntermSwitch::getCondition) {
      plVar6 = *(long**)( param_3 + 0x20 );
   }
 else {
      plVar6 = (long*)( **(code**)( lVar5 + 0xe8 ) )(param_3);
   }

   ( **(code**)( *plVar6 + 0x10 ) )(plVar6, this);
   iVar3 = *(int*)( this + 0xc );
   *(int*)( this + 0xc ) = iVar3 + -1;
   OutputTreeText(pTVar4, param_3, iVar3 + -1);
   glslang::TInfoSinkBase::append((char*)pTVar1);
   lVar5 = *(long*)param_3;
   *(int*)( this + 0xc ) = *(int*)( this + 0xc ) + 1;
   if (*(code**)( lVar5 + 0xf0 ) == TIntermSwitch::getBody) {
      plVar6 = *(long**)( param_3 + 0x28 );
   }
 else {
      plVar6 = (long*)( **(code**)( lVar5 + 0xf0 ) )(param_3);
   }

   ( **(code**)( *plVar6 + 0x10 ) )(plVar6, this);
   *(int*)( this + 0xc ) = *(int*)( this + 0xc ) + -1;
   return 0;
}
/* glslang::TOutputTraverser::visitLoop(glslang::TVisit, glslang::TIntermLoop*) */undefined8 glslang::TOutputTraverser::visitLoop(TOutputTraverser *this, undefined8 param_2, TIntermNode *param_3) {
   int iVar1;
   size_t sVar2;
   TInfoSink *pTVar3;
   long in_FS_OFFSET;
   undefined8 local_78;
   undefined1 *local_70;
   undefined1 local_60[24];
   char local_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pTVar3 = *(TInfoSink**)( this + 0x38 ) + 0x30;
   OutputTreeText(*(TInfoSink**)( this + 0x38 ), param_3, *(int*)( this + 0xc ));
   glslang::TInfoSinkBase::append((char*)pTVar3);
   if (param_3[0x38] == (TIntermNode)0x0) {
      glslang::TInfoSinkBase::append((char*)pTVar3);
   }

   glslang::TInfoSinkBase::append((char*)pTVar3);
   if (param_3[0x39] != (TIntermNode)0x0) {
      glslang::TInfoSinkBase::append((char*)pTVar3);
   }

   if (param_3[0x3a] != (TIntermNode)0x0) {
      glslang::TInfoSinkBase::append((char*)pTVar3);
   }

   if (*(int*)( param_3 + 0x3c ) != 0) {
      glslang::TInfoSinkBase::append((char*)pTVar3);
      __snprintf_chk(local_48, 0x10, 2, 0x10, &_LC1, *(undefined4*)( param_3 + 0x3c ));
      local_78 = glslang::GetThreadPoolAllocator();
      local_70 = local_60;
      sVar2 = strlen(local_48);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_78, local_48, local_48 + sVar2);
      glslang::TInfoSinkBase::append(pTVar3);
   }

   glslang::TInfoSinkBase::append((char*)pTVar3);
   iVar1 = *(int*)( this + 0xc );
   *(int*)( this + 0xc ) = iVar1 + 1;
   OutputTreeText(*(TInfoSink**)( this + 0x38 ), param_3, iVar1 + 1);
   if (*(long*)( param_3 + 0x28 ) == 0) {
      glslang::TInfoSinkBase::append((char*)pTVar3);
   }
 else {
      glslang::TInfoSinkBase::append((char*)pTVar3);
      ( **(code**)( **(long**)( param_3 + 0x28 ) + 0x10 ) )(*(long**)( param_3 + 0x28 ), this);
   }

   OutputTreeText(*(TInfoSink**)( this + 0x38 ), param_3, *(int*)( this + 0xc ));
   if (*(long*)( param_3 + 0x20 ) == 0) {
      glslang::TInfoSinkBase::append((char*)pTVar3);
   }
 else {
      glslang::TInfoSinkBase::append((char*)pTVar3);
      ( **(code**)( **(long**)( param_3 + 0x20 ) + 0x10 ) )(*(long**)( param_3 + 0x20 ), this);
   }

   if (*(long*)( param_3 + 0x30 ) != 0) {
      OutputTreeText(*(TInfoSink**)( this + 0x38 ), param_3, *(int*)( this + 0xc ));
      glslang::TInfoSinkBase::append((char*)pTVar3);
      ( **(code**)( **(long**)( param_3 + 0x30 ) + 0x10 ) )(*(long**)( param_3 + 0x30 ), this);
   }

   *(int*)( this + 0xc ) = *(int*)( this + 0xc ) + -1;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TIntermediate::output(TInfoSink&, bool) */void glslang::TIntermediate::output(TIntermediate *this, TInfoSink *param_1, bool param_2) {
   string *psVar1;
   uint uVar2;
   size_t sVar3;
   _Rb_tree_node_base *p_Var4;
   uint uVar5;
   uint uVar6;
   long in_FS_OFFSET;
   undefined **local_d8;
   undefined4 local_d0;
   undefined8 local_cc;
   undefined8 local_c0;
   undefined8 local_b8;
   undefined8 local_b0;
   undefined8 local_a8;
   TInfoSink *local_a0;
   uint local_98;
   undefined8 local_88;
   undefined1 *local_80;
   undefined1 local_70[24];
   char local_58[24];
   long local_40;
   psVar1 = (string*)( param_1 + 0x30 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   glslang::TInfoSinkBase::append((char*)psVar1);
   __snprintf_chk(local_58, 0x10, 2, 0x10, &_LC1, *(undefined4*)( this + 100 ));
   local_88 = glslang::GetThreadPoolAllocator();
   local_80 = local_70;
   sVar3 = strlen(local_58);
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_88, local_58, local_58 + sVar3);
   glslang::TInfoSinkBase::append(psVar1);
   glslang::TInfoSinkBase::append((char*)psVar1);
   if (*(long*)( this + 0xb0 ) != 0) {
      for (p_Var4 = *(_Rb_tree_node_base**)( this + 0xa0 ); p_Var4 != (_Rb_tree_node_base*)( this + 0x90 ); p_Var4 = (_Rb_tree_node_base*)std::_Rb_tree_increment(p_Var4)) {
         glslang::TInfoSinkBase::append((char*)psVar1);
         glslang::TInfoSinkBase::append(psVar1);
         glslang::TInfoSinkBase::append((char*)psVar1);
      }

   }

   if (this[0x340] != (TIntermediate)0x0) {
      glslang::TInfoSinkBase::append((char*)psVar1);
   }

   if (this[0x50e] != (TIntermediate)0x0) {
      glslang::TInfoSinkBase::append((char*)psVar1);
   }

   if (this[0x50f] != (TIntermediate)0x0) {
      glslang::TInfoSinkBase::append((char*)psVar1);
   }

   uVar2 = *(uint*)this;
   switch (uVar2) {
      default:
    goto switchD_00100961_caseD_0;
      case 1:
    glslang::TInfoSinkBase::append((char *)psVar1);
    __snprintf_chk(local_58,0x10,2,0x10,&_LC1,*(undefined4 *)(this + 0x30c));
    local_88 = glslang::GetThreadPoolAllocator();
    local_80 = local_70;
    sVar3 = strlen(local_58);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
    _M_construct<char_const*>(&local_88,local_58,local_58 + sVar3);
    glslang::TInfoSinkBase::append(psVar1);
    glslang::TInfoSinkBase::append((char *)psVar1);
    if (*(int *)(this + 0x310) != 0) {
      glslang::TInfoSinkBase::append((char *)psVar1);
      switch(*(undefined4 *)(this + 0x310)) {
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
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
      }
      glslang::TInfoSinkBase::append((char *)psVar1);
      glslang::TInfoSinkBase::append((char *)psVar1);
    }
    if (*(int *)(this + 0x31c) != 0) {
      glslang::TInfoSinkBase::append((char *)psVar1);
      glslang::TInfoSinkBase::append((char *)psVar1);
      glslang::TInfoSinkBase::append((char *)psVar1);
    }
    if (*(int *)(this + 800) == 0) goto switchD_00100961_caseD_0;
    glslang::TInfoSinkBase::append((char *)psVar1);
    break;
      case 2:
    glslang::TInfoSinkBase::append((char *)psVar1);
    switch(*(undefined4 *)(this + 0x310)) {
    default:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
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
    }
    glslang::TInfoSinkBase::append((char *)psVar1);
    glslang::TInfoSinkBase::append((char *)psVar1);
    glslang::TInfoSinkBase::append((char *)psVar1);
    glslang::TInfoSinkBase::append((char *)psVar1);
    glslang::TInfoSinkBase::append((char *)psVar1);
    glslang::TInfoSinkBase::append((char *)psVar1);
    glslang::TInfoSinkBase::append((char *)psVar1);
    glslang::TInfoSinkBase::append((char *)psVar1);
    if (this[0x328] != (TIntermediate)0x0) {
      glslang::TInfoSinkBase::append((char *)psVar1);
    }
    goto switchD_00100961_caseD_0;
      case 3:
    glslang::TInfoSinkBase::append((char *)psVar1);
    __snprintf_chk(local_58,0x10,2,0x10,&_LC1,*(undefined4 *)(this + 0x308));
    local_88 = glslang::GetThreadPoolAllocator();
    local_80 = local_70;
    sVar3 = strlen(local_58);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
    _M_construct<char_const*>(&local_88,local_58,local_58 + sVar3);
    glslang::TInfoSinkBase::append(psVar1);
    glslang::TInfoSinkBase::append((char *)psVar1);
    glslang::TInfoSinkBase::append((char *)psVar1);
    __snprintf_chk(local_58,0x10,2,0x10,&_LC1,*(undefined4 *)(this + 0x30c));
    local_88 = glslang::GetThreadPoolAllocator();
    local_80 = local_70;
    sVar3 = strlen(local_58);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
    _M_construct<char_const*>(&local_88,local_58,local_58 + sVar3);
    glslang::TInfoSinkBase::append(psVar1);
    glslang::TInfoSinkBase::append((char *)psVar1);
    glslang::TInfoSinkBase::append((char *)psVar1);
    switch(*(undefined4 *)(this + 0x310)) {
    default:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
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
    }
    glslang::TInfoSinkBase::append((char *)psVar1);
    glslang::TInfoSinkBase::append((char *)psVar1);
    glslang::TInfoSinkBase::append((char *)psVar1);
    switch(*(undefined4 *)(this + 0x314)) {
    default:
switchD_00101145_default:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
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
    }
    break;
      case 4:
    if (this[0x318] != (TIntermediate)0x0) {
      glslang::TInfoSinkBase::append((char *)psVar1);
    }
    if (this[0x319] != (TIntermediate)0x0) {
      glslang::TInfoSinkBase::append((char *)psVar1);
    }
    if (this[0x329] != (TIntermediate)0x0) {
      glslang::TInfoSinkBase::append((char *)psVar1);
    }
    if (this[0x32a] != (TIntermediate)0x0) {
      glslang::TInfoSinkBase::append((char *)psVar1);
    }
    if (this[0x32c] != (TIntermediate)0x0) {
      glslang::TInfoSinkBase::append((char *)psVar1);
    }
    if (this[0x32d] != (TIntermediate)0x0) {
      glslang::TInfoSinkBase::append((char *)psVar1);
    }
    if (this[0x32e] != (TIntermediate)0x0) {
      glslang::TInfoSinkBase::append((char *)psVar1);
    }
    if (*(int *)(this + 0x330) != 0) {
      glslang::TInfoSinkBase::append((char *)psVar1);
      glslang::TInfoSinkBase::append((char *)psVar1);
      glslang::TInfoSinkBase::append((char *)psVar1);
    }
    if (*(int *)(this + 0x33c) != 0) {
      glslang::TInfoSinkBase::append((char *)psVar1);
      uVar5 = *(uint *)(this + 0x33c);
      uVar6 = 0;
LAB_00101470:
      do {
        if ((uVar5 >> (uVar6 & 0x1f) & 1) != 0) {
          glslang::TInfoSinkBase::append((char *)psVar1);
          switch(uVar6) {
          default:
            glslang::TInfoSinkBase::append((char *)psVar1);
            uVar5 = *(uint *)(this + 0x33c);
            uVar6 = 2;
            if ((uVar5 & 2) == 0) goto LAB_00101470;
            glslang::TInfoSinkBase::append((char *)psVar1);
            break;
          case 1:
            break;
          case 2:
            goto switchD_001014ac_caseD_2;
          case 3:
            goto switchD_001014ac_caseD_3;
          case 4:
            goto switchD_001014ac_caseD_4;
          case 5:
            goto switchD_001014ac_caseD_5;
          case 6:
            goto switchD_001014ac_caseD_6;
          case 7:
            goto switchD_001014ac_caseD_7;
          case 8:
            goto switchD_001014ac_caseD_8;
          case 9:
            goto switchD_001014ac_caseD_9;
          case 10:
            goto switchD_001014ac_caseD_a;
          case 0xb:
            goto switchD_001014ac_caseD_b;
          case 0xc:
            goto switchD_001014ac_caseD_c;
          case 0xd:
            goto switchD_001014ac_caseD_d;
          case 0xe:
            goto switchD_001014ac_caseD_e;
          case 0xf:
            goto switchD_001014ac_caseD_f;
          }
          glslang::TInfoSinkBase::append((char *)psVar1);
          uVar5 = *(uint *)(this + 0x33c);
          uVar6 = 3;
          if ((uVar5 & 4) != 0) {
            glslang::TInfoSinkBase::append((char *)psVar1);
switchD_001014ac_caseD_2:
            glslang::TInfoSinkBase::append((char *)psVar1);
            uVar5 = *(uint *)(this + 0x33c);
            uVar6 = uVar2;
            if ((uVar5 & 8) != 0) {
              glslang::TInfoSinkBase::append((char *)psVar1);
switchD_001014ac_caseD_3:
              uVar6 = 5;
              glslang::TInfoSinkBase::append((char *)psVar1);
              uVar5 = *(uint *)(this + 0x33c);
              if ((uVar5 & 0x10) != 0) {
                glslang::TInfoSinkBase::append((char *)psVar1);
switchD_001014ac_caseD_4:
                uVar6 = 6;
                glslang::TInfoSinkBase::append((char *)psVar1);
                uVar5 = *(uint *)(this + 0x33c);
                if ((uVar5 & 0x20) != 0) {
                  glslang::TInfoSinkBase::append((char *)psVar1);
switchD_001014ac_caseD_5:
                  uVar6 = 7;
                  glslang::TInfoSinkBase::append((char *)psVar1);
                  uVar5 = *(uint *)(this + 0x33c);
                  if ((uVar5 & 0x40) != 0) {
                    glslang::TInfoSinkBase::append((char *)psVar1);
switchD_001014ac_caseD_6:
                    uVar6 = 8;
                    glslang::TInfoSinkBase::append((char *)psVar1);
                    uVar5 = *(uint *)(this + 0x33c);
                    if ((uVar5 & 0x80) != 0) {
                      glslang::TInfoSinkBase::append((char *)psVar1);
switchD_001014ac_caseD_7:
                      uVar6 = 9;
                      glslang::TInfoSinkBase::append((char *)psVar1);
                      uVar5 = *(uint *)(this + 0x33c);
                      if ((uVar5 & 0x100) != 0) {
                        glslang::TInfoSinkBase::append((char *)psVar1);
switchD_001014ac_caseD_8:
                        uVar6 = 10;
                        glslang::TInfoSinkBase::append((char *)psVar1);
                        uVar5 = *(uint *)(this + 0x33c);
                        if ((uVar5 & 0x200) != 0) {
                          glslang::TInfoSinkBase::append((char *)psVar1);
switchD_001014ac_caseD_9:
                          uVar6 = 0xb;
                          glslang::TInfoSinkBase::append((char *)psVar1);
                          uVar5 = *(uint *)(this + 0x33c);
                          if ((uVar5 & 0x400) != 0) {
                            glslang::TInfoSinkBase::append((char *)psVar1);
switchD_001014ac_caseD_a:
                            uVar6 = 0xc;
                            glslang::TInfoSinkBase::append((char *)psVar1);
                            uVar5 = *(uint *)(this + 0x33c);
                            if ((uVar5 & 0x800) != 0) {
                              glslang::TInfoSinkBase::append((char *)psVar1);
switchD_001014ac_caseD_b:
                              uVar6 = 0xd;
                              glslang::TInfoSinkBase::append((char *)psVar1);
                              uVar5 = *(uint *)(this + 0x33c);
                              if ((uVar5 & 0x1000) != 0) {
                                glslang::TInfoSinkBase::append((char *)psVar1);
switchD_001014ac_caseD_c:
                                uVar6 = 0xe;
                                glslang::TInfoSinkBase::append((char *)psVar1);
                                uVar5 = *(uint *)(this + 0x33c);
                                if ((uVar5 & 0x2000) != 0) {
                                  glslang::TInfoSinkBase::append((char *)psVar1);
switchD_001014ac_caseD_d:
                                  glslang::TInfoSinkBase::append((char *)psVar1);
                                  uVar5 = *(uint *)(this + 0x33c);
                                  if ((uVar5 & 0x4000) != 0) {
                                    glslang::TInfoSinkBase::append((char *)psVar1);
switchD_001014ac_caseD_e:
                                    glslang::TInfoSinkBase::append((char *)psVar1);
                                    if (((byte)this[0x33d] & 0x80) != 0) {
                                      glslang::TInfoSinkBase::append((char *)psVar1);
switchD_001014ac_caseD_f:
                                      glslang::TInfoSinkBase::append((char *)psVar1);
                                    }
                                    break;
                                  }
                                  uVar6 = 0xf;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_00101470;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x10);
      glslang::TInfoSinkBase::append((char *)psVar1);
    }
    if (*(int *)(this + 0x324) == 0) goto switchD_00100961_caseD_0;
    glslang::TInfoSinkBase::append((char *)psVar1);
    switch(*(undefined4 *)(this + 0x324)) {
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    default:
      goto switchD_00101145_default;
    }
    break;
      case 5:
      case 0xc:
    goto switchD_00100961_caseD_5;
      case 0xd:
    glslang::TInfoSinkBase::append((char *)psVar1);
    __snprintf_chk(local_58,0x10,2,0x10,&_LC1,*(undefined4 *)(this + 0x30c));
    local_88 = glslang::GetThreadPoolAllocator();
    local_80 = local_70;
    sVar3 = strlen(local_58);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
    _M_construct<char_const*>(&local_88,local_58,local_58 + sVar3);
    glslang::TInfoSinkBase::append(psVar1);
    glslang::TInfoSinkBase::append((char *)psVar1);
    glslang::TInfoSinkBase::append((char *)psVar1);
    __snprintf_chk(local_58,0x10,2,0x10,&_LC1,*(undefined4 *)(this + 0x36c));
    local_88 = glslang::GetThreadPoolAllocator();
    local_80 = local_70;
    sVar3 = strlen(local_58);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
    _M_construct<char_const*>(&local_88,local_58,local_58 + sVar3);
    glslang::TInfoSinkBase::append(psVar1);
    glslang::TInfoSinkBase::append((char *)psVar1);
    glslang::TInfoSinkBase::append((char *)psVar1);
    switch(*(undefined4 *)(this + 0x314)) {
    default:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
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
    }
    glslang::TInfoSinkBase::append((char *)psVar1);
    glslang::TInfoSinkBase::append((char *)psVar1);
    goto switchD_00100961_caseD_5;
   }

   glslang::TInfoSinkBase::append((char*)psVar1);
   glslang::TInfoSinkBase::append((char*)psVar1);
   switchD_00100961_caseD_0:if (( *(long*)( this + 0x80 ) != 0 ) && ( param_2 )) {
      local_d0 = 1;
      local_d8 = &PTR__TIntermTraverser_00115c98;
      local_cc = 0;
      local_c0 = glslang::GetThreadPoolAllocator();
      local_b8 = 0;
      local_d8 = &PTR__TOutputTraverser_00115d00;
      local_b0 = 0;
      local_a8 = 0;
      local_98 = (uint)(byte)this[0x50d];
      local_a0 = param_1;
      ( **(code**)( **(long**)( this + 0x80 ) + 0x10 ) )(*(long**)( this + 0x80 ), &local_d8);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   switchD_00100961_caseD_5:glslang::TInfoSinkBase::append((char*)psVar1);
   for (int i = 0; i < 3; i++) {
      __snprintf_chk(local_58, 16, 2, 16, &_LC1, *(undefined4*)( this + ( 4*i + 632 ) ));
      local_88 = glslang::GetThreadPoolAllocator();
      local_80 = local_70;
      sVar3 = strlen(local_58);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_88, local_58, local_58 + sVar3);
      glslang::TInfoSinkBase::append(psVar1);
      glslang::TInfoSinkBase::append((char*)psVar1);
   }

   if (( *(long*)( this + 0x288 ) != -1 ) || ( *(int*)( this + 0x290 ) != -1 )) {
      glslang::TInfoSinkBase::append((char*)psVar1);
      for (int i = 0; i < 3; i++) {
         __snprintf_chk(local_58, 16, 2, 16, &_LC1, *(undefined4*)( this + ( 4*i + 648 ) ));
         local_88 = glslang::GetThreadPoolAllocator();
         local_80 = local_70;
         sVar3 = strlen(local_58);
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_88, local_58, local_58 + sVar3);
         glslang::TInfoSinkBase::append(psVar1);
         glslang::TInfoSinkBase::append((char*)psVar1);
      }

   }

   goto switchD_00100961_caseD_0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* glslang::OutputConstantUnion(TInfoSink&, glslang::TIntermTyped const*, glslang::TConstUnionArray
   const&, glslang::TOutputTraverser::EExtraOutput, int) */void glslang::OutputConstantUnion(TInfoSink *param_1, TIntermNode *param_2, long param_3, int param_4, int param_5) {
   int *piVar1;
   TInfoSink *pTVar2;
   TType *this;
   int iVar3;
   uint uVar4;
   int *piVar5;
   double *pdVar6;
   TIntermNode *pTVar7;
   int iVar8;
   ulong uVar9;
   long lVar10;
   undefined8 *puVar11;
   long lVar12;
   char *pcVar13;
   double dVar14;
   long in_FS_OFFSET;
   double dVar15;
   char *pcVar16;
   char local_198[344];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *(long*)param_2 + 0xf0 ) == TIntermTyped::getType) {
      pTVar7 = param_2 + 0x20;
   }
 else {
      pTVar7 = (TIntermNode*)( **(code**)( *(long*)param_2 + 0xf0 ) )(param_2);
   }

   if (*(code**)( *(long*)pTVar7 + 0x38 ) == TType::getBasicType) {
      uVar4 = (uint)(byte)pTVar7[8];
      if (pTVar7[8] == (TIntermNode)0xf) goto LAB_00101b60;
      LAB_00101aa7:if (uVar4 == 0x10) goto LAB_00101b60;
      if ((byte)pTVar7[9] < 0x10) {
         uVar9 = ( ulong )((byte)pTVar7[9] & 0xf);
         goto LAB_00101b93;
      }

      uVar9 = ( ulong )(( uint )((byte)pTVar7[9] >> 4) * ( (byte)pTVar7[10] & 0xf ));
      lVar10 = *(long*)( pTVar7 + 0x60 );
      joined_r0x00101b9a:if (( lVar10 != 0 ) && ( lVar10 = lVar10 != 0 )) goto LAB_00101bad;
   }
 else {
      iVar3 = ( **(code**)( *(long*)pTVar7 + 0x38 ) )(pTVar7);
      if (iVar3 != 0xf) {
         if (*(code**)( *(long*)pTVar7 + 0x38 ) == TType::getBasicType) {
            uVar4 = (uint)(byte)pTVar7[8];
         }
 else {
            uVar4 = ( **(code**)( *(long*)pTVar7 + 0x38 ) )(pTVar7);
         }

         goto LAB_00101aa7;
      }

      LAB_00101b60:uVar9 = 0;
      puVar11 = *(undefined8**)( *(long*)( pTVar7 + 0x68 ) + 8 );
      if (puVar11 != *(undefined8**)( *(long*)( pTVar7 + 0x68 ) + 0x10 )) {
         do {
            this(TType * ) * puVar11;
            puVar11 = puVar11 + 4;
            iVar3 = TType::computeNumComponents(this);
            uVar9 = ( ulong )(uint)((int)uVar9 + iVar3);
         }
 while ( *(undefined8**)( *(long*)( pTVar7 + 0x68 ) + 0x10 ) != puVar11 );
         LAB_00101b93:lVar10 = *(long*)( pTVar7 + 0x60 );
         goto joined_r0x00101b9a;
      }

      if (( *(long*)( pTVar7 + 0x60 ) == 0 ) || ( lVar10 = lVar10 == 0 )) goto LAB_00101c5a;
      LAB_00101bad:piVar5 = *(int**)( lVar10 + 8 );
      iVar3 = (int)( *(long*)( lVar10 + 0x10 ) - (long)piVar5 >> 4 );
      if (iVar3 < 1) {
         iVar8 = 1;
      }
 else {
         piVar1 = piVar5 + 4;
         iVar8 = 1;
         if (( (int)( piVar1 + ( ulong )(iVar3 - 1) * 4 ) - (int)piVar5 & 0x10U ) == 0) goto LAB_00101bf0;
         iVar8 = *piVar5;
         for (piVar5 = piVar1; piVar1 + ( ulong )(iVar3 - 1) * 4 != piVar5; piVar5 = piVar5 + 8) {
            LAB_00101bf0:iVar8 = iVar8 * *piVar5 * piVar5[4];
         }

      }

      uVar9 = ( ulong )(uint)((int)uVar9 * iVar8);
   }

   if (0 < (int)uVar9) {
      lVar10 = 0;
      do {
         OutputTreeText(param_1, param_2, param_5);
         pdVar6 = (double*)( *(long*)( *(long*)( param_3 + 8 ) + 8 ) + lVar10 );
         switch (*(undefined4*)( pdVar6 + 1 )) {
            default:
        if ((code *)**(undefined8 **)param_2 == TIntermNode::getLoc) {
          pTVar7 = param_2 + 8;
        }
        else {
          pTVar7 = (TIntermNode *)(*(code *)**(undefined8 **)param_2)(param_2);
        }
        TInfoSinkBase::message((TInfoSinkBase *)param_1,3,"Unknown constant",pTVar7);
        break;
            case 1:
            case 2:
            case 3:
        dVar14 = *pdVar6;
        dVar15 = (double)((ulong)dVar14 & __LC316);
        if (dVar15 <= __LC317) {
          if (NAN(dVar14)) {
            glslang::TInfoSinkBase::append((char *)(param_1 + 0x30));
          }
          else {
            pcVar13 = "%f";
            if (((0.0 < dVar15) && (pcVar13 = "%-.13e", _LC322 <= dVar15)) && (dVar15 <= __LC323)) {
              pcVar13 = "%f";
            }
            iVar3 = __snprintf_chk(local_198,0x154,2,0x154,pcVar13);
            if (((5 < iVar3) && (local_198[iVar3 + -5] == 'e')) &&
               (((local_198[iVar3 + -4] - 0x2bU & 0xfd) == 0 && (local_198[iVar3 + -3] == '0')))) {
              *(undefined2 *)(local_198 + (iVar3 + -3)) = *(undefined2 *)(local_198 + (iVar3 + -2));
              local_198[iVar3 + -1] = '\0';
            }
            pTVar2 = param_1 + 0x30;
            glslang::TInfoSinkBase::append((char *)pTVar2);
            if (param_4 == 1) {
              glslang::TInfoSinkBase::append((char *)pTVar2);
              lVar12 = 0x40;
              do {
                glslang::TInfoSinkBase::append((char *)pTVar2);
                lVar12 = lVar12 + -1;
              } while (lVar12 != 0);
            }
          }
        }
        else if (dVar14 < 0.0) {
          glslang::TInfoSinkBase::append((char *)(param_1 + 0x30));
        }
        else {
          glslang::TInfoSinkBase::append((char *)(param_1 + 0x30));
        }
        glslang::TInfoSinkBase::append((char *)(param_1 + 0x30));
        break;
            case 4:
        uVar4 = (uint)*(char *)pdVar6;
        pcVar16 = "%d (%s)";
        pcVar13 = "const int8_t";
        goto LAB_00101e0b;
            case 5:
        uVar4 = (uint)*(byte *)pdVar6;
        pcVar13 = "const uint8_t";
        goto LAB_00101e03;
            case 6:
        uVar4 = (uint)*(short *)pdVar6;
        pcVar16 = "%d (%s)";
        pcVar13 = "const int16_t";
        goto LAB_00101e0b;
            case 7:
        uVar4 = (uint)*(ushort *)pdVar6;
        pcVar13 = "const uint16_t";
        goto LAB_00101e03;
            case 8:
        uVar4 = *(uint *)pdVar6;
        pcVar16 = "%d (%s)";
        pcVar13 = "const int";
        goto LAB_00101e0b;
            case 9:
        uVar4 = *(uint *)pdVar6;
        pcVar13 = "const uint";
LAB_00101e03:
        pcVar16 = "%u (%s)";
LAB_00101e0b:
        __snprintf_chk(local_198,300,2,300,pcVar16,uVar4,pcVar13);
LAB_00101da4:
        glslang::TInfoSinkBase::append((char *)(param_1 + 0x30));
        glslang::TInfoSinkBase::append((char *)(param_1 + 0x30));
        break;
            case 10:
        dVar14 = *pdVar6;
        pcVar13 = "%lld (%s)";
        pcVar16 = "const int64_t";
        goto LAB_00101d8b;
            case 0xb:
        dVar14 = *pdVar6;
        pcVar16 = "const uint64_t";
        pcVar13 = "%llu (%s)";
LAB_00101d8b:
        __snprintf_chk(local_198,300,2,300,pcVar13,dVar14,pcVar16);
        goto LAB_00101da4;
            case 0xc:
        pTVar2 = param_1 + 0x30;
        if (*(char *)pdVar6 == '\0') {
          glslang::TInfoSinkBase::append((char *)pTVar2);
        }
        else {
          glslang::TInfoSinkBase::append((char *)pTVar2);
        }
        glslang::TInfoSinkBase::append((char *)pTVar2);
        glslang::TInfoSinkBase::append((char *)pTVar2);
        glslang::TInfoSinkBase::append((char *)pTVar2);
        glslang::TInfoSinkBase::append((char *)pTVar2);
        break;
            case 0x17:
        pTVar2 = param_1 + 0x30;
        glslang::TInfoSinkBase::append((char *)pTVar2);
        glslang::TInfoSinkBase::append((char *)pTVar2);
        glslang::TInfoSinkBase::append((char *)pTVar2);
         }

         lVar10 = lVar10 + 0x10;
      }
 while ( lVar10 != uVar9 << 4 );
   }

   LAB_00101c5a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* glslang::TOutputTraverser::visitConstantUnion(glslang::TIntermConstantUnion*) */void glslang::TOutputTraverser::visitConstantUnion(TOutputTraverser *this, TIntermConstantUnion *param_1) {
   OutputTreeText(*(TInfoSink**)( this + 0x38 ), (TIntermNode*)param_1, *(int*)( this + 0xc ));
   glslang::TInfoSinkBase::append((char*)( *(long*)( this + 0x38 ) + 0x30 ));
   OutputConstantUnion(*(undefined8*)( this + 0x38 ), param_1, param_1 + 0xb8, *(undefined4*)( this + 0x40 ), *(int*)( this + 0xc ) + 1);
   return;
}
/* glslang::TOutputTraverser::visitSelection(glslang::TVisit, glslang::TIntermSelection*) */undefined8 glslang::TOutputTraverser::visitSelection(TOutputTraverser *this, undefined8 param_2, TIntermNode *param_3) {
   TInfoSink *pTVar1;
   TIntermNode TVar2;
   int iVar3;
   TInfoSink *pTVar4;
   long lVar5;
   long *plVar6;
   long in_FS_OFFSET;
   undefined1 local_c8[48];
   undefined8 local_98;
   undefined1 *local_90;
   undefined1 local_80[24];
   undefined8 local_68;
   undefined1 *local_60;
   undefined1 local_50[16];
   long local_40;
   pTVar4 = *(TInfoSink**)( this + 0x38 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pTVar1 = pTVar4 + 0x30;
   OutputTreeText(pTVar4, param_3, *(int*)( this + 0xc ));
   glslang::TInfoSinkBase::append((char*)pTVar1);
   glslang::TInfoSinkBase::append((char*)pTVar1);
   local_68 = glslang::GetThreadPoolAllocator();
   local_60 = local_50;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_68, &_LC34, &_LC34);
   local_98 = glslang::GetThreadPoolAllocator();
   local_90 = local_80;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_98, &_LC34, &_LC34);
   TType::getCompleteString(local_c8, param_3 + 0x20, 0, 1, 1, 1, &local_98, &local_68);
   glslang::TInfoSinkBase::append(pTVar1);
   glslang::TInfoSinkBase::append((char*)pTVar1);
   if (param_3[0xd0] == (TIntermNode)0x0) {
      glslang::TInfoSinkBase::append((char*)pTVar1);
   }

   if (param_3[0xd1] == (TIntermNode)0x0) {
      TVar2 = param_3[0xd2];
   }
 else {
      glslang::TInfoSinkBase::append((char*)pTVar1);
      TVar2 = param_3[0xd2];
   }

   if (TVar2 != (TIntermNode)0x0) {
      glslang::TInfoSinkBase::append((char*)pTVar1);
   }

   glslang::TInfoSinkBase::append((char*)pTVar1);
   iVar3 = *(int*)( this + 0xc );
   *(int*)( this + 0xc ) = iVar3 + 1;
   OutputTreeText(pTVar4, param_3, iVar3 + 1);
   glslang::TInfoSinkBase::append((char*)pTVar1);
   if (*(code**)( *(long*)param_3 + 0x180 ) == TIntermSelection::getCondition) {
      plVar6 = *(long**)( param_3 + 0xb8 );
   }
 else {
      plVar6 = (long*)( **(code**)( *(long*)param_3 + 0x180 ) )(param_3);
   }

   ( **(code**)( *plVar6 + 0x10 ) )(plVar6, this);
   OutputTreeText(pTVar4, param_3, *(int*)( this + 0xc ));
   if (*(code**)( *(long*)param_3 + 400 ) == TIntermSelection::getTrueBlock) {
      lVar5 = *(long*)( param_3 + 0xc0 );
   }
 else {
      lVar5 = ( **(code**)( *(long*)param_3 + 400 ) )(param_3);
   }

   if (lVar5 == 0) {
      glslang::TInfoSinkBase::append((char*)pTVar1);
   }
 else {
      glslang::TInfoSinkBase::append((char*)pTVar1);
      if (*(code**)( *(long*)param_3 + 400 ) == TIntermSelection::getTrueBlock) {
         plVar6 = *(long**)( param_3 + 0xc0 );
      }
 else {
         plVar6 = (long*)( **(code**)( *(long*)param_3 + 400 ) )(param_3);
      }

      ( **(code**)( *plVar6 + 0x10 ) )(plVar6, this);
   }

   if (*(code**)( *(long*)param_3 + 0x1a0 ) == TIntermSelection::getFalseBlock) {
      lVar5 = *(long*)( param_3 + 200 );
   }
 else {
      lVar5 = ( **(code**)( *(long*)param_3 + 0x1a0 ) )(param_3);
   }

   if (lVar5 != 0) {
      OutputTreeText(pTVar4, param_3, *(int*)( this + 0xc ));
      glslang::TInfoSinkBase::append((char*)pTVar1);
      if (*(code**)( *(long*)param_3 + 0x1a0 ) == TIntermSelection::getFalseBlock) {
         plVar6 = *(long**)( param_3 + 200 );
      }
 else {
         plVar6 = (long*)( **(code**)( *(long*)param_3 + 0x1a0 ) )(param_3);
      }

      ( **(code**)( *plVar6 + 0x10 ) )(plVar6, this);
   }

   *(int*)( this + 0xc ) = *(int*)( this + 0xc ) + -1;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return 0;
}
/* glslang::TOutputTraverser::visitBinary(glslang::TVisit, glslang::TIntermBinary*) */undefined8 glslang::TOutputTraverser::visitBinary(TOutputTraverser *this, undefined8 param_2, TIntermNode *param_3) {
   long lVar1;
   code *pcVar2;
   uint uVar3;
   long lVar4;
   long *plVar5;
   long lVar6;
   TInfoSink *pTVar7;
   long in_FS_OFFSET;
   pTVar7 = *(TInfoSink**)( this + 0x38 );
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   OutputTreeText(pTVar7, param_3, *(int*)( this + 0xc ));
   uVar3 = *(uint*)( param_3 + 0xb8 );
   if (uVar3 < 0x12a) {
      if (0x9b < uVar3) {
         switch (uVar3) {
            case 0x9c:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0x9d:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0x9e:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0x9f:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0xa0:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0xa1:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0xa2:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0xa3:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0xa4:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0xa5:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0xa6:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0xa7:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0xa8:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0xa9:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0xaa:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0xab:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0xac:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0xad:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            default:
        goto switchD_00102531_caseD_ae;
            case 0xaf:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0xb0:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0xb1:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0xb2:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0xb3:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0xb4:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0xb5:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0xb6:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0xb7:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0xb8:
        if (*(code **)(*(long *)param_3 + 400) == TIntermBinary::getLeft) {
          plVar5 = *(long **)(param_3 + 0xc0);
        }
        else {
          plVar5 = (long *)(**(code **)(*(long *)param_3 + 400))(param_3);
        }
        if (*(code **)(*plVar5 + 0xf0) == TIntermTyped::getType) {
          plVar5 = plVar5 + 4;
        }
        else {
          plVar5 = (long *)(**(code **)(*plVar5 + 0xf0))();
        }
        if (*(code **)(*plVar5 + 0x38) == TType::getBasicType) {
          uVar3 = (uint)*(byte *)(plVar5 + 1);
        }
        else {
          uVar3 = (**(code **)(*plVar5 + 0x38))();
        }
        pcVar2 = *(code **)(*(long *)param_3 + 400);
        if (uVar3 == 0x12) {
          if (pcVar2 == TIntermBinary::getLeft) {
            plVar5 = *(long **)(param_3 + 0xc0);
          }
          else {
            plVar5 = (long *)(*pcVar2)(param_3);
          }
          if (*(code **)(*plVar5 + 0xf0) == TIntermTyped::getType) {
            plVar5 = plVar5 + 4;
          }
          else {
            plVar5 = (long *)(**(code **)(*plVar5 + 0xf0))();
          }
          if (*(code **)(*plVar5 + 0xa8) == TType::getReferentType) {
            lVar6 = plVar5[0xd];
          }
          else {
            lVar6 = (**(code **)(*plVar5 + 0xa8))();
          }
          lVar6 = *(long *)(lVar6 + 0x68);
        }
        else {
          if (pcVar2 == TIntermBinary::getLeft) {
            plVar5 = *(long **)(param_3 + 0xc0);
          }
          else {
            plVar5 = (long *)(*pcVar2)(param_3);
          }
          if (*(code **)(*plVar5 + 0xf0) == TIntermTyped::getType) {
            plVar5 = plVar5 + 4;
          }
          else {
            plVar5 = (long *)(**(code **)(*plVar5 + 0xf0))();
          }
          lVar6 = plVar5[0xd];
        }
        if (*(code **)(*(long *)param_3 + 0x198) == TIntermBinary::getRight) {
          plVar5 = *(long **)(param_3 + 200);
        }
        else {
          plVar5 = (long *)(**(code **)(*(long *)param_3 + 0x198))(param_3);
        }
        lVar4 = (**(code **)(*plVar5 + 0x28))();
        pcVar2 = *(code **)(**(long **)((long)**(int **)(*(long *)(lVar4 + 0xc0) + 8) * 0x20 +
                                       *(long *)(lVar6 + 8)) + 0x30);
        if (pcVar2 != TType::getFieldName_abi_cxx11_) {
          (*pcVar2)();
        }
        glslang::TInfoSinkBase::append(pTVar7 + 0x30);
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0xb9:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0x129:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
         }

         goto LAB_00102580;
      }

   }
 else if (uVar3 < 0x2c0) {
      if (0x248 < uVar3) {
         switch (uVar3) {
            case 0x249:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0x24a:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0x24b:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0x24c:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0x24d:
            case 0x250:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0x24e:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0x24f:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0x251:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0x252:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0x253:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0x254:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0x255:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0x256:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 599:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            default:
        goto switchD_00102531_caseD_ae;
            case 0x2ba:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 699:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 700:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0x2bd:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0x2be:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
        break;
            case 0x2bf:
        glslang::TInfoSinkBase::append((char *)(pTVar7 + 0x30));
         }

         goto LAB_00102580;
      }

   }
 else if (uVar3 == 0x341) {
      glslang::TInfoSinkBase::append((char*)( pTVar7 + 0x30 ));
      goto LAB_00102580;
   }

   switchD_00102531_caseD_ae:glslang::TInfoSinkBase::append((char*)( pTVar7 + 0x30 ));
   LAB_00102580:pTVar7 = pTVar7 + 0x30;
   glslang::TInfoSinkBase::append((char*)pTVar7);
   TIntermOperator::getCompleteString_abi_cxx11_();
   glslang::TInfoSinkBase::append(pTVar7);
   glslang::TInfoSinkBase::append((char*)pTVar7);
   glslang::TInfoSinkBase::append((char*)pTVar7);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TOutputTraverser::visitUnary(glslang::TVisit, glslang::TIntermUnary*) */undefined8 glslang::TOutputTraverser::visitUnary(TOutputTraverser *this, undefined8 param_2, TIntermNode *param_3) {
   long lVar1;
   TInfoSink *pTVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   pTVar2 = *(TInfoSink**)( this + 0x38 ) + 0x30;
   OutputTreeText(*(TInfoSink**)( this + 0x38 ), param_3, *(int*)( this + 0xc ));
   switch (*(undefined4*)( param_3 + 0xb8 )) {
      case 7:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 8:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 9:
      case 10:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xb:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xc:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xd:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xe:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xf:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x10:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x11:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x12:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x13:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x14:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x15:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x16:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x17:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x18:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x19:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x1a:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x1b:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x1c:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x1d:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x1e:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x1f:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x20:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x21:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x22:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x23:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x24:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x25:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x26:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x27:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x28:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x29:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x2a:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x2b:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x2c:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x2d:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x2e:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x2f:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x30:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x31:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x32:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x33:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x34:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x35:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x36:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x37:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x38:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x39:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x3a:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x3b:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x3c:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x3d:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x3e:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x3f:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x40:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x41:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x42:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x43:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x44:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x45:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x46:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x47:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x48:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x49:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x4a:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x4b:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x4c:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x4d:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x4e:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x4f:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x50:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x51:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x52:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x53:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x54:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x55:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x56:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x57:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x58:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x59:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x5a:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x5b:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x5c:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x5d:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x5e:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x5f:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x60:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x61:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x62:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 99:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 100:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x65:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x66:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x67:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x68:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x69:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x6a:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x6b:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x6c:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x6d:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x6e:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x6f:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x70:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x71:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x72:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x73:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x74:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x75:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x76:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x77:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x78:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x79:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x7a:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x7b:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x7c:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x7d:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x7e:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x7f:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x80:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x81:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x82:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x83:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x84:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x85:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x86:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x87:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x88:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x89:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x8a:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x8b:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x8c:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x8d:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x8e:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x8f:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x90:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x91:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x92:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x93:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x94:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x95:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x96:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x97:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      default:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    glslang::TInfoSinkBase::append((char *)pTVar2);
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x9a:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x9b:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xbc:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xbd:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xbe:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xbf:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xc0:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xc1:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xc2:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xc3:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xc4:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xc5:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xc6:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 199:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 200:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xc9:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xcb:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xcc:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xcd:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xce:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xcf:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xd0:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xd1:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xd2:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xd3:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xd4:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xd5:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xd6:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xd7:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xd8:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xe0:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xe1:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xe5:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xe6:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xe7:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xe8:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xe9:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xea:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xeb:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xec:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xed:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xee:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xef:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xf0:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xf1:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xf2:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xf3:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xf4:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xf5:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xf6:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xf7:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xf8:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xf9:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xfa:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xfb:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xfc:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xfd:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xfe:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0xff:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x100:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x101:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x102:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x103:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x104:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x105:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x106:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x107:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x108:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x109:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x10a:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x10b:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x10c:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x10d:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x10e:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x10f:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x110:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x111:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x115:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x11c:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x11d:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x11e:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x11f:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x120:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x121:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x122:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x123:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x124:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x125:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 299:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 300:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x12d:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x12f:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x132:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x133:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x13b:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x13d:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x13e:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x13f:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x140:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x147:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x148:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x149:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x14a:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x14b:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x14c:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x14d:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x14e:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x14f:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x150:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x151:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x152:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x153:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x154:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x155:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x156:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x157:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x158:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x159:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x15a:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x15b:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x15c:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x15d:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x15e:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x15f:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x160:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x161:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x162:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x163:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x164:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x165:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x166:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x167:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x168:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x169:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x16a:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x16b:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x16c:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x16d:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x16e:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x16f:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x170:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x171:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x172:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x173:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x174:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x175:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x176:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x177:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x178:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x179:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x17a:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x17b:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x17c:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x17d:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x17e:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x17f:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x180:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x181:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x182:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x183:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x184:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x185:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x186:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x187:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x188:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x189:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x18a:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x18b:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x18c:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x18d:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x18e:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 399:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 400:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x191:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x192:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x194:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x195:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x196:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x197:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x198:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x199:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x19a:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x19b:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x19c:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x19d:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x19e:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x19f:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x1a0:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x1a1:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x1a2:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x1a3:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x1a4:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x1a5:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x1a9:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x1aa:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x1ab:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x1b8:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x1b9:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x1ba:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x1c4:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x1c5:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x244:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 600:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x25a:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x25b:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x25c:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x26a:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x26b:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x26e:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x271:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x272:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x273:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x274:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x28e:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x28f:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x29c:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x2b4:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x2b5:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x2b6:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x2b7:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x2b8:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x2b9:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x303:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x304:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x305:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x306:
    glslang::TInfoSinkBase::append((char *)pTVar2);
    break;
      case 0x307:
    glslang::TInfoSinkBase::append((char *)pTVar2);
   }

   glslang::TInfoSinkBase::append((char*)pTVar2);
   TIntermOperator::getCompleteString_abi_cxx11_();
   glslang::TInfoSinkBase::append(pTVar2);
   glslang::TInfoSinkBase::append((char*)pTVar2);
   glslang::TInfoSinkBase::append((char*)pTVar2);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TOutputTraverser::visitAggregate(glslang::TVisit, glslang::TIntermAggregate*) */undefined8 glslang::TOutputTraverser::visitAggregate(TOutputTraverser *this, undefined8 param_2, TIntermNode *param_3) {
   uint uVar1;
   TInfoSink *pTVar2;
   long lVar3;
   TInfoSink *pTVar4;
   long in_FS_OFFSET;
   pTVar2 = *(TInfoSink**)( this + 0x38 );
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( param_3 + 0xb8 ) == 0) {
      glslang::TInfoSinkBase::append((char*)( pTVar2 + 0x30 ));
      goto LAB_00104aea;
   }

   OutputTreeText(pTVar2, param_3, *(int*)( this + 0xc ));
   switch (*(undefined4*)( param_3 + 0xb8 )) {
      case 1:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    goto LAB_00104b01;
      case 2:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    goto LAB_00104b01;
      case 3:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    goto LAB_00104b01;
      case 4:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    if (*(code **)(*(long *)param_3 + 0x1a8) != TIntermAggregate::getName_abi_cxx11_) {
      (**(code **)(*(long *)param_3 + 0x1a8))(param_3);
    }
    glslang::TInfoSinkBase::append(pTVar2 + 0x30);
    break;
      case 5:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    if (*(code **)(*(long *)param_3 + 0x1a8) != TIntermAggregate::getName_abi_cxx11_) {
      (**(code **)(*(long *)param_3 + 0x1a8))(param_3);
    }
    glslang::TInfoSinkBase::append(pTVar2 + 0x30);
    break;
      case 6:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 7:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      default:
    pTVar4 = pTVar2 + 0x30;
    glslang::TInfoSinkBase::append((char *)pTVar4);
    glslang::TInfoSinkBase::append((char *)pTVar4);
    glslang::TInfoSinkBase::append((char *)pTVar4);
    break;
      case 0x9e:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0xa0:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0xa8:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0xa9:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0xaa:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0xab:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0xac:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0xad:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0xae:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0xc3:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0xca:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0xd9:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0xda:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0xdb:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0xdc:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0xdd:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0xde:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0xdf:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0xe2:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0xe3:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0xe4:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x112:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x113:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x114:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x116:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x117:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x118:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x119:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x11a:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x11b:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x126:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x127:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x128:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x12a:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x130:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x131:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x134:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x135:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x136:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x137:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x138:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x139:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x13a:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x13c:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x142:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x143:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x144:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x145:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x146:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x147:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x148:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x149:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x14a:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x14b:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x14c:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x14d:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x14e:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x14f:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x150:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x151:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x152:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x153:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x154:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x155:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x156:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x157:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x158:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x159:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x15a:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x15b:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x15c:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x15d:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x15e:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x15f:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x160:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x161:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x162:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x163:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x164:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x165:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x166:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x167:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x168:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x169:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x16a:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x16b:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x16c:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x16d:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x16e:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x16f:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x170:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x171:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x172:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x173:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x174:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x175:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x176:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x177:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x178:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x179:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x17a:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x17b:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x17c:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x17d:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x17e:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x17f:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x180:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x181:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x182:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x183:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x184:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x185:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x186:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x187:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x188:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x189:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x18a:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x18b:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x18c:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x18d:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x18e:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 399:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 400:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x191:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x192:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1a6:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1a7:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1a8:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1ac:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1ad:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1ae:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1af:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1b0:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1b1:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1b2:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1b3:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1b4:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1b5:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1b6:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1b7:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1bb:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1bc:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1bd:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1be:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1bf:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1c0:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1c1:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1c2:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1c3:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1c6:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1c7:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1c8:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1c9:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1ca:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1cb:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1ce:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1cf:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1d3:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1d4:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1db:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1dc:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1dd:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1de:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1df:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1e0:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1e1:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1e2:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1e3:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1e4:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1e5:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1e6:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1e7:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1e8:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1e9:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1ea:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1eb:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1ec:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1ed:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1ee:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1ef:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1f0:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1f1:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1f2:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 499:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 500:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1f5:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1f6:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1f7:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1f8:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1f9:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1fa:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1fb:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1fc:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1fd:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1fe:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x1ff:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x200:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x201:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x202:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x203:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x204:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x205:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x206:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x207:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x208:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x209:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x20a:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x20b:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x20c:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x20d:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x20e:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x20f:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x210:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x211:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x212:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x213:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x214:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x215:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x216:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x217:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x218:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x219:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x21a:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x21b:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x21c:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x21d:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x21e:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x21f:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x220:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x221:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x222:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x223:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x224:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x225:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x226:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x227:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x228:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x229:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x22a:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x22b:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x22c:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x22d:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x22e:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x22f:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x230:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x231:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x232:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x233:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x234:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x235:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x236:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x237:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x238:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x239:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x23a:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x23b:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x23c:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x23d:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x23e:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x23f:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x240:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x241:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x242:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x244:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x245:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x246:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x247:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x25a:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x25b:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x25c:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x25d:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x25e:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x25f:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x260:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x261:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x262:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x263:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x264:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x265:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x266:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x267:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x268:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x269:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x26a:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x26b:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x26c:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x26d:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x26e:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x271:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x272:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x273:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x274:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x276:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x277:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x278:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x279:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x27a:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x27b:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x27c:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x27d:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x27e:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x27f:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x280:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x281:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x282:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x283:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x284:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x285:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x286:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x287:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x288:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x289:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x28a:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x28b:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x28c:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x28d:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x291:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x292:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x293:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x294:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x295:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x296:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x297:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x298:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x299:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x29a:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x29b:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x29d:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x29e:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x29f:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2a0:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2a1:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2a2:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2a3:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2a6:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2a7:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2a8:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2a9:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2aa:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2ae:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2af:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2b0:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2b1:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2b2:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2b3:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2c0:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2c1:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2c2:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2c3:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2c4:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2c5:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2c6:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2c7:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2c8:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2c9:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2ca:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2cb:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2cc:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2cd:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2ce:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2cf:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2d0:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2d1:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2d2:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2d3:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2d4:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2d5:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2d6:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2d7:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2d8:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2d9:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2da:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2db:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2dc:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2dd:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2de:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2df:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2e0:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2e1:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2e2:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2e3:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2e4:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2e5:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2e6:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2e7:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2e8:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2e9:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2ea:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2eb:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2ec:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2ed:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2ee:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2ef:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2f0:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2f1:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2f2:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2f3:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2f4:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2f5:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2f6:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2f7:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2f8:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2f9:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2fa:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2fb:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2fc:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2fd:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2fe:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x2ff:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x300:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x301:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x302:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x308:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x309:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x314:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x315:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x316:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x317:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x318:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x34a:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x34b:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
    break;
      case 0x34c:
    glslang::TInfoSinkBase::append((char *)(pTVar2 + 0x30));
   }

   uVar1 = *(uint*)( param_3 + 0xb8 );
   if (uVar1 < 3) {
      if (uVar1 == 0) {
         LAB_00104b77:glslang::TInfoSinkBase::append((char*)( pTVar2 + 0x30 ));
         TIntermOperator::getCompleteString_abi_cxx11_();
         glslang::TInfoSinkBase::append(pTVar2 + 0x30);
         LAB_00104aea:glslang::TInfoSinkBase::append((char*)( pTVar2 + 0x30 ));
      }

   }
 else if (uVar1 != 6) goto LAB_00104b77;
   glslang::TInfoSinkBase::append((char*)( pTVar2 + 0x30 ));
   LAB_00104b01:if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TOutputTraverser::visitSymbol(glslang::TIntermSymbol*) */void glslang::TOutputTraverser::visitSymbol(TOutputTraverser *this, TIntermSymbol *param_1) {
   int iVar1;
   char *pcVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   long lVar5;
   int iVar6;
   ulong uVar7;
   ulong uVar8;
   long lVar9;
   long *plVar10;
   undefined8 *puVar11;
   long lVar12;
   long in_FS_OFFSET;
   undefined1 auStack_c8[48];
   undefined8 local_98;
   undefined1 *local_90;
   undefined1 local_80[24];
   undefined8 local_68;
   undefined1 *local_60;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   OutputTreeText(*(TInfoSink**)( this + 0x38 ), (TIntermNode*)param_1, *(int*)( this + 0xc ));
   pcVar2 = (char*)( *(long*)( this + 0x38 ) + 0x30 );
   glslang::TInfoSinkBase::append(pcVar2);
   if (*(code**)( *(long*)param_1 + 400 ) != TIntermSymbol::getName_abi_cxx11_) {
      ( **(code**)( *(long*)param_1 + 400 ) )(param_1);
   }

   glslang::TInfoSinkBase::append(pcVar2);
   glslang::TInfoSinkBase::append(pcVar2);
   local_68 = glslang::GetThreadPoolAllocator();
   local_60 = local_50;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_68, &_LC34, &_LC34);
   local_98 = glslang::GetThreadPoolAllocator();
   local_90 = local_80;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_98, &_LC34, &_LC34);
   TType::getCompleteString(auStack_c8, param_1 + 0x20, 0, 1, 1, 1, &local_98, &local_68);
   glslang::TInfoSinkBase::append(pcVar2);
   glslang::TInfoSinkBase::append(pcVar2);
   if (*(long*)( param_1 + 0xf8 ) != 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         OutputConstantUnion(*(undefined8*)( this + 0x38 ), param_1, param_1 + 0xf0, *(undefined4*)( this + 0x40 ), *(int*)( this + 0xc ) + 1);
         return;
      }

      goto LAB_00107734;
   }

   plVar10 = *(long**)( param_1 + 0x100 );
   if (plVar10 != (long*)0x0) {
      puVar3 = *(undefined8**)( this + 0x28 );
      iVar1 = *(int*)( this + 0xc ) + 1;
      *(int*)( this + 0xc ) = iVar1;
      iVar6 = *(int*)( this + 0x10 );
      if (*(int*)( this + 0x10 ) < iVar1) {
         iVar6 = iVar1;
      }

      *(int*)( this + 0x10 ) = iVar6;
      if (puVar3 == *(undefined8**)( this + 0x30 )) {
         puVar4 = *(undefined8**)( this + 0x20 );
         puVar11 = (undefined8*)( (long)puVar3 - (long)puVar4 );
         uVar8 = (long)puVar11 >> 3;
         if (uVar8 == 0xfffffffffffffff) {
            /* WARNING: Subroutine does not return */
            std::__throw_length_error("vector::_M_realloc_insert");
         }

         if (puVar3 == puVar4) {
            uVar7 = uVar8 + 1;
            if (0xfffffffffffffffe < uVar8) goto LAB_00107728;
            if (0xfffffffffffffff < uVar7) {
               uVar7 = 0xfffffffffffffff;
            }

            lVar12 = uVar7 * 8;
            LAB_001076ff:lVar5 = glslang::TPoolAllocator::allocate(*(ulong*)( this + 0x18 ));
            plVar10 = *(long**)( param_1 + 0x100 );
            lVar12 = lVar5 + lVar12;
            *(TIntermSymbol**)( lVar5 + (long)puVar11 ) = param_1;
            lVar9 = lVar5 + 8;
            if (puVar3 != puVar4) goto LAB_001076a4;
         }
 else {
            uVar7 = uVar8 * 2;
            if (uVar7 < uVar8) {
               LAB_00107728:lVar12 = 0x7ffffffffffffff8;
               goto LAB_001076ff;
            }

            if (uVar7 != 0) {
               if (0xfffffffffffffff < uVar7) {
                  uVar7 = 0xfffffffffffffff;
               }

               lVar12 = uVar7 * 8;
               goto LAB_001076ff;
            }

            *puVar11 = param_1;
            lVar12 = 0;
            lVar5 = 0;
            LAB_001076a4:lVar9 = 0;
            do {
               *(undefined8*)( lVar5 + lVar9 ) = *(undefined8*)( (long)puVar4 + lVar9 );
               lVar9 = lVar9 + 8;
            }
 while ( lVar9 != (long)puVar3 - (long)puVar4 );
            lVar9 = lVar5 + 8 + lVar9;
         }

         *(long*)( this + 0x20 ) = lVar5;
         *(long*)( this + 0x28 ) = lVar9;
         *(long*)( this + 0x30 ) = lVar12;
      }
 else {
         *puVar3 = param_1;
         *(undefined8**)( this + 0x28 ) = puVar3 + 1;
      }

      ( **(code**)( *plVar10 + 0x10 ) )(plVar10, this);
      *(int*)( this + 0xc ) = *(int*)( this + 0xc ) + -1;
      *(long*)( this + 0x28 ) = *(long*)( this + 0x28 ) + -8;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00107734:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* glslang::TType::hiddenMember() const */bool glslang::TType::hiddenMember(TType *this) {
   return this[8] == (TType)0x0;
}
/* glslang::TType::getFieldName[abi:cxx11]() const */undefined8 glslang::TType::getFieldName_abi_cxx11_(TType *this) {
   return *(undefined8*)( this + 0x70 );
}
/* glslang::TType::getBasicType() const */TType glslang::TType::getBasicType(TType *this) {
   return this[8];
}
/* glslang::TType::getReferentType() const */undefined8 glslang::TType::getReferentType(TType *this) {
   return *(undefined8*)( this + 0x68 );
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
/* glslang::TType::isStruct() const */undefined4 glslang::TType::isStruct(TType *this) {
   return CONCAT31(( int3 )((byte)this[8] - 0xf >> 8), ( byte )((byte)this[8] - 0xf) < 2);
}
/* glslang::TType::isParameterized() const */bool glslang::TType::isParameterized(TType *this) {
   return *(long*)( this + 0x88 ) != 0;
}
/* TIntermNode::getLoc() const */TIntermNode * __thiscall TIntermNode::getLoc(TIntermNode *this){
   return this + 8;
}
/* glslang::TIntermTyped::getType() const */TIntermTyped * __thiscall glslang::TIntermTyped::getType(TIntermTyped *this){
   return this + 0x20;
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
/* glslang::TIntermAggregate::getName[abi:cxx11]() const */TIntermAggregate * __thiscall glslang::TIntermAggregate::getName_abi_cxx11_(TIntermAggregate *this){
   return this + 0x100;
}
/* glslang::TIntermSelection::getCondition() const */undefined8 glslang::TIntermSelection::getCondition(TIntermSelection *this) {
   return *(undefined8*)( this + 0xb8 );
}
/* glslang::TIntermSelection::getTrueBlock() const */undefined8 glslang::TIntermSelection::getTrueBlock(TIntermSelection *this) {
   return *(undefined8*)( this + 0xc0 );
}
/* glslang::TIntermSelection::getFalseBlock() const */undefined8 glslang::TIntermSelection::getFalseBlock(TIntermSelection *this) {
   return *(undefined8*)( this + 200 );
}
/* glslang::TIntermSwitch::getCondition() const */undefined8 glslang::TIntermSwitch::getCondition(TIntermSwitch *this) {
   return *(undefined8*)( this + 0x20 );
}
/* glslang::TIntermSwitch::getBody() const */undefined8 glslang::TIntermSwitch::getBody(TIntermSwitch *this) {
   return *(undefined8*)( this + 0x28 );
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
/* glslang::TOutputTraverser::~TOutputTraverser() */void glslang::TOutputTraverser::~TOutputTraverser(TOutputTraverser *this) {
   return;
}
/* glslang::GetBuiltInVariableString(glslang::TBuiltInVariable) */char *glslang::GetBuiltInVariableString(undefined4 param_1) {
   switch (param_1) {
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
/* glslang::TQualifier::getLayoutFormatString(glslang::TLayoutFormat) */char *glslang::TQualifier::getLayoutFormatString(undefined4 param_1) {
   switch (param_1) {
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
/* glslang::TType::computeNumComponents() const */uint glslang::TType::computeNumComponents(TType *this) {
   int *piVar1;
   long lVar2;
   long *plVar3;
   long *plVar4;
   long *plVar5;
   long *plVar6;
   long *plVar7;
   long *plVar8;
   long *plVar9;
   TType *this_00;
   uint uVar10;
   uint uVar11;
   uint uVar12;
   int iVar13;
   uint uVar14;
   uint uVar15;
   uint uVar16;
   int *piVar17;
   int iVar18;
   uint uVar19;
   uint uVar20;
   long *plVar21;
   long *plVar22;
   undefined8 *puVar23;
   uint uVar24;
   long *plVar25;
   long *plVar26;
   long *plVar27;
   long *plVar28;
   long *plVar29;
   if (*(code**)( *(long*)this + 0x38 ) == getBasicType) {
      uVar10 = (uint)(byte)this[8];
      if (this[8] != (TType)0xf) {
         LAB_0010e48b:if (uVar10 != 0x10) {
            if ((byte)this[9] < 0x10) {
               uVar10 = (byte)this[9] & 0xf;
            }
 else {
               uVar10 = ( uint )((byte)this[9] >> 4) * ( (byte)this[10] & 0xf );
            }

            goto LAB_0010e4b4;
         }

      }

   }
 else {
      iVar13 = ( **(code**)( *(long*)this + 0x38 ) )();
      if (iVar13 != 0xf) {
         if (*(code**)( *(long*)this + 0x38 ) == getBasicType) {
            uVar10 = (uint)(byte)this[8];
         }
 else {
            uVar10 = ( **(code**)( *(long*)this + 0x38 ) )(this);
         }

         goto LAB_0010e48b;
      }

   }

   uVar10 = 0;
   plVar21 = *(long**)( *(long*)( this + 0x68 ) + 8 );
   if (plVar21 != *(long**)( *(long*)( this + 0x68 ) + 0x10 )) {
      do {
         plVar3 = (long*)*plVar21;
         if (*(code**)( *plVar3 + 0x38 ) == getBasicType) {
            uVar16 = ( uint ) * (byte*)( plVar3 + 1 );
            if (*(byte*)( plVar3 + 1 ) == 0xf) goto LAB_0010e62e;
            LAB_0010e57b:if (uVar16 == 0x10) goto LAB_0010e62e;
            if (*(byte*)( (long)plVar3 + 9 ) < 0x10) {
               uVar11 = *(byte*)( (long)plVar3 + 9 ) & 0xf;
            }
 else {
               uVar11 = ( uint )(*(byte*)( (long)plVar3 + 9 ) >> 4) * ( *(byte*)( (long)plVar3 + 10 ) & 0xf );
            }

         }
 else {
            iVar13 = ( **(code**)( *plVar3 + 0x38 ) )(plVar3);
            if (iVar13 != 0xf) {
               if (*(code**)( *plVar3 + 0x38 ) == getBasicType) {
                  uVar16 = ( uint ) * (byte*)( plVar3 + 1 );
               }
 else {
                  uVar16 = ( **(code**)( *plVar3 + 0x38 ) )(plVar3);
               }

               goto LAB_0010e57b;
            }

            LAB_0010e62e:uVar16 = 0;
            uVar11 = 0;
            plVar27 = *(long**)( plVar3[0xd] + 8 );
            if (plVar27 != *(long**)( plVar3[0xd] + 0x10 )) {
               do {
                  plVar4 = (long*)*plVar27;
                  if (*(code**)( *plVar4 + 0x38 ) == getBasicType) {
                     uVar11 = ( uint ) * (byte*)( plVar4 + 1 );
                     if (*(byte*)( plVar4 + 1 ) == 0xf) goto LAB_0010e73d;
                     LAB_0010e67f:if (uVar11 == 0x10) goto LAB_0010e73d;
                     if (*(byte*)( (long)plVar4 + 9 ) < 0x10) {
                        uVar11 = *(byte*)( (long)plVar4 + 9 ) & 0xf;
                     }
 else {
                        uVar11 = ( *(byte*)( (long)plVar4 + 10 ) & 0xf ) * ( uint )(*(byte*)( (long)plVar4 + 9 ) >> 4);
                     }

                  }
 else {
                     iVar13 = ( **(code**)( *plVar4 + 0x38 ) )(plVar4);
                     if (iVar13 != 0xf) {
                        if (*(code**)( *plVar4 + 0x38 ) == getBasicType) {
                           uVar11 = ( uint ) * (byte*)( plVar4 + 1 );
                        }
 else {
                           uVar11 = ( **(code**)( *plVar4 + 0x38 ) )(plVar4);
                        }

                        goto LAB_0010e67f;
                     }

                     LAB_0010e73d:uVar11 = 0;
                     plVar22 = *(long**)( plVar4[0xd] + 8 );
                     if (plVar22 != *(long**)( plVar4[0xd] + 0x10 )) {
                        do {
                           plVar5 = (long*)*plVar22;
                           if (*(code**)( *plVar5 + 0x38 ) == getBasicType) {
                              uVar19 = ( uint ) * (byte*)( plVar5 + 1 );
                              if (*(byte*)( plVar5 + 1 ) == 0xf) goto LAB_0010e85a;
                              LAB_0010e794:if (uVar19 == 0x10) goto LAB_0010e85a;
                              if (*(byte*)( (long)plVar5 + 9 ) < 0x10) {
                                 uVar19 = *(byte*)( (long)plVar5 + 9 ) & 0xf;
                              }
 else {
                                 uVar19 = ( *(byte*)( (long)plVar5 + 10 ) & 0xf ) * ( uint )(*(byte*)( (long)plVar5 + 9 ) >> 4);
                              }

                           }
 else {
                              iVar13 = ( **(code**)( *plVar5 + 0x38 ) )(plVar5);
                              if (iVar13 != 0xf) {
                                 if (*(code**)( *plVar5 + 0x38 ) == getBasicType) {
                                    uVar19 = ( uint ) * (byte*)( plVar5 + 1 );
                                 }
 else {
                                    uVar19 = ( **(code**)( *plVar5 + 0x38 ) )(plVar5);
                                 }

                                 goto LAB_0010e794;
                              }

                              LAB_0010e85a:uVar19 = 0;
                              plVar28 = *(long**)( plVar5[0xd] + 8 );
                              if (plVar28 != *(long**)( plVar5[0xd] + 0x10 )) {
                                 do {
                                    plVar6 = (long*)*plVar28;
                                    if (*(code**)( *plVar6 + 0x38 ) == getBasicType) {
                                       uVar12 = ( uint ) * (byte*)( plVar6 + 1 );
                                       if (*(byte*)( plVar6 + 1 ) == 0xf) goto LAB_0010e988;
                                       LAB_0010e8b2:if (uVar12 == 0x10) goto LAB_0010e988;
                                       if (*(byte*)( (long)plVar6 + 9 ) < 0x10) {
                                          uVar12 = *(byte*)( (long)plVar6 + 9 ) & 0xf;
                                       }
 else {
                                          uVar12 = ( uint )(*(byte*)( (long)plVar6 + 9 ) >> 4) * ( *(byte*)( (long)plVar6 + 10 ) & 0xf );
                                       }

                                    }
 else {
                                       iVar13 = ( **(code**)( *plVar6 + 0x38 ) )(plVar6);
                                       if (iVar13 != 0xf) {
                                          if (*(code**)( *plVar6 + 0x38 ) == getBasicType) {
                                             uVar12 = ( uint ) * (byte*)( plVar6 + 1 );
                                          }
 else {
                                             uVar12 = ( **(code**)( *plVar6 + 0x38 ) )(plVar6);
                                          }

                                          goto LAB_0010e8b2;
                                       }

                                       LAB_0010e988:uVar12 = 0;
                                       plVar25 = *(long**)( plVar6[0xd] + 8 );
                                       if (plVar25 != *(long**)( plVar6[0xd] + 0x10 )) {
                                          uVar12 = 0;
                                          do {
                                             plVar7 = (long*)*plVar25;
                                             if (*(code**)( *plVar7 + 0x38 ) == getBasicType) {
                                                uVar15 = ( uint ) * (byte*)( plVar7 + 1 );
                                                if (*(byte*)( plVar7 + 1 ) == 0xf) goto LAB_0010eab0;
                                                LAB_0010e9e1:if (uVar15 == 0x10) goto LAB_0010eab0;
                                                if (*(byte*)( (long)plVar7 + 9 ) < 0x10) {
                                                   uVar24 = *(byte*)( (long)plVar7 + 9 ) & 0xf;
                                                }
 else {
                                                   uVar24 = ( uint )(*(byte*)( (long)plVar7 + 9 ) >> 4) * ( *(byte*)( (long)plVar7 + 10 ) & 0xf );
                                                }

                                             }
 else {
                                                iVar13 = ( **(code**)( *plVar7 + 0x38 ) )(plVar7);
                                                if (iVar13 != 0xf) {
                                                   if (*(code**)( *plVar7 + 0x38 ) == getBasicType) {
                                                      uVar15 = ( uint ) * (byte*)( plVar7 + 1 );
                                                   }
 else {
                                                      uVar15 = ( **(code**)( *plVar7 + 0x38 ) )(plVar7);
                                                   }

                                                   goto LAB_0010e9e1;
                                                }

                                                LAB_0010eab0:uVar15 = 0;
                                                uVar24 = 0;
                                                plVar29 = *(long**)( plVar7[0xd] + 8 );
                                                if (*(long**)( plVar7[0xd] + 0x10 ) != plVar29) {
                                                   do {
                                                      plVar8 = (long*)*plVar29;
                                                      if (*(code**)( *plVar8 + 0x38 ) == getBasicType) {
                                                         uVar24 = ( uint ) * (byte*)( plVar8 + 1 );
                                                         if (*(byte*)( plVar8 + 1 ) == 0xf) goto LAB_0010ebd0;
                                                         LAB_0010eb06:if (uVar24 == 0x10) goto LAB_0010ebd0;
                                                         if (*(byte*)( (long)plVar8 + 9 ) < 0x10) {
                                                            uVar24 = *(byte*)( (long)plVar8 + 9 ) & 0xf;
                                                         }
 else {
                                                            uVar24 = ( uint )(*(byte*)( (long)plVar8 + 9 ) >> 4) * ( *(byte*)( (long)plVar8 + 10 ) & 0xf );
                                                         }

                                                      }
 else {
                                                         iVar13 = ( **(code**)( *plVar8 + 0x38 ) )(plVar8);
                                                         if (iVar13 != 0xf) {
                                                            if (*(code**)( *plVar8 + 0x38 ) == getBasicType) {
                                                               uVar24 = ( uint ) * (byte*)( plVar8 + 1 );
                                                            }
 else {
                                                               uVar24 = ( **(code**)( *plVar8 + 0x38 ) )(plVar8);
                                                            }

                                                            goto LAB_0010eb06;
                                                         }

                                                         LAB_0010ebd0:uVar24 = 0;
                                                         plVar26 = *(long**)( plVar8[0xd] + 8 );
                                                         if (*(long**)( plVar8[0xd] + 0x10 ) != plVar26) {
                                                            uVar24 = 0;
                                                            do {
                                                               plVar9 = (long*)*plVar26;
                                                               if (*(code**)( *plVar9 + 0x38 ) == getBasicType) {
                                                                  uVar14 = ( uint ) * (byte*)( plVar9 + 1 );
                                                                  if (*(byte*)( plVar9 + 1 ) == 0xf) goto LAB_0010ecf0;
                                                                  LAB_0010ec26:if (uVar14 == 0x10) goto LAB_0010ecf0;
                                                                  if (*(byte*)( (long)plVar9 + 9 ) < 0x10) {
                                                                     uVar20 = *(byte*)( (long)plVar9 + 9 ) & 0xf;
                                                                  }
 else {
                                                                     uVar20 = ( uint )(*(byte*)( (long)plVar9 + 9 ) >> 4) * ( *(byte*)( (long)plVar9 + 10 ) & 0xf );
                                                                  }

                                                               }
 else {
                                                                  iVar13 = ( **(code**)( *plVar9 + 0x38 ) )(plVar9);
                                                                  if (iVar13 != 0xf) {
                                                                     if (*(code**)( *plVar9 + 0x38 ) == getBasicType) {
                                                                        uVar14 = ( uint ) * (byte*)( plVar9 + 1 );
                                                                     }
 else {
                                                                        uVar14 = ( **(code**)( *plVar9 + 0x38 ) )(plVar9);
                                                                     }

                                                                     goto LAB_0010ec26;
                                                                  }

                                                                  LAB_0010ecf0:uVar20 = 0;
                                                                  puVar23 = *(undefined8**)( plVar9[0xd] + 8 );
                                                                  uVar14 = 0;
                                                                  if (puVar23 != *(undefined8**)( plVar9[0xd] + 0x10 )) {
                                                                     do {
                                                                        this_00 = (TType*)*puVar23;
                                                                        puVar23 = puVar23 + 4;
                                                                        iVar13 = computeNumComponents(this_00);
                                                                        uVar20 = uVar14 + iVar13;
                                                                        uVar14 = uVar20;
                                                                     }
 while ( *(undefined8**)( plVar9[0xd] + 0x10 ) != puVar23 );
                                                                  }

                                                               }

                                                               if (( plVar9[0xc] != 0 ) && ( lVar2 = lVar2 != 0 )) {
                                                                  piVar17 = *(int**)( lVar2 + 8 );
                                                                  iVar13 = (int)( *(long*)( lVar2 + 0x10 ) - (long)piVar17 >> 4 );
                                                                  if (iVar13 < 1) {
                                                                     iVar18 = 1;
                                                                  }
 else {
                                                                     piVar1 = piVar17 + 4;
                                                                     iVar18 = 1;
                                                                     if (( (int)( piVar1 + ( ulong )(iVar13 - 1) * 4 ) - (int)piVar17 & 0x10U ) == 0) goto LAB_0010eca2;
                                                                     iVar18 = *piVar17;
                                                                     for (piVar17 = piVar1; piVar17 != piVar1 + ( ulong )(iVar13 - 1) * 4; piVar17 = piVar17 + 8) {
                                                                        LAB_0010eca2:iVar18 = iVar18 * *piVar17 * piVar17[4];
                                                                     }

                                                                  }

                                                                  uVar20 = uVar20 * iVar18;
                                                               }

                                                               uVar24 = uVar24 + uVar20;
                                                               plVar26 = plVar26 + 4;
                                                            }
 while ( *(long**)( plVar8[0xd] + 0x10 ) != plVar26 );
                                                         }

                                                      }

                                                      if (( plVar8[0xc] != 0 ) && ( lVar2 = lVar2 != 0 )) {
                                                         piVar17 = *(int**)( lVar2 + 8 );
                                                         iVar13 = (int)( *(long*)( lVar2 + 0x10 ) - (long)piVar17 >> 4 );
                                                         if (iVar13 < 1) {
                                                            iVar18 = 1;
                                                         }
 else {
                                                            piVar1 = piVar17 + 4;
                                                            iVar18 = 1;
                                                            if (( (int)( piVar1 + ( ulong )(iVar13 - 1) * 4 ) - (int)piVar17 & 0x10U ) == 0) goto LAB_0010eb84;
                                                            iVar18 = *piVar17;
                                                            for (piVar17 = piVar1; piVar17 != piVar1 + ( ulong )(iVar13 - 1) * 4; piVar17 = piVar17 + 8) {
                                                               LAB_0010eb84:iVar18 = iVar18 * *piVar17 * piVar17[4];
                                                            }

                                                         }

                                                         uVar24 = uVar24 * iVar18;
                                                      }

                                                      uVar24 = uVar15 + uVar24;
                                                      plVar29 = plVar29 + 4;
                                                      uVar15 = uVar24;
                                                   }
 while ( *(long**)( plVar7[0xd] + 0x10 ) != plVar29 );
                                                }

                                             }

                                             if (( plVar7[0xc] != 0 ) && ( lVar2 = lVar2 != 0 )) {
                                                piVar17 = *(int**)( lVar2 + 8 );
                                                iVar13 = (int)( *(long*)( lVar2 + 0x10 ) - (long)piVar17 >> 4 );
                                                if (iVar13 < 1) {
                                                   iVar18 = 1;
                                                }
 else {
                                                   piVar1 = piVar17 + 4;
                                                   iVar18 = 1;
                                                   if (( (int)( piVar1 + ( ulong )(iVar13 - 1) * 4 ) - (int)piVar17 & 0x10U ) == 0) goto LAB_0010ea68;
                                                   iVar18 = *piVar17;
                                                   for (piVar17 = piVar1; piVar17 != piVar1 + ( ulong )(iVar13 - 1) * 4; piVar17 = piVar17 + 8) {
                                                      LAB_0010ea68:iVar18 = iVar18 * *piVar17 * piVar17[4];
                                                   }

                                                }

                                                uVar24 = uVar24 * iVar18;
                                             }

                                             uVar12 = uVar12 + uVar24;
                                             plVar25 = plVar25 + 4;
                                          }
 while ( *(long**)( plVar6[0xd] + 0x10 ) != plVar25 );
                                       }

                                    }

                                    if (( plVar6[0xc] != 0 ) && ( lVar2 = lVar2 != 0 )) {
                                       piVar17 = *(int**)( lVar2 + 8 );
                                       iVar13 = (int)( *(long*)( lVar2 + 0x10 ) - (long)piVar17 >> 4 );
                                       if (iVar13 < 1) {
                                          iVar18 = 1;
                                       }
 else {
                                          piVar1 = piVar17 + 4;
                                          iVar18 = 1;
                                          if (( (int)( piVar1 + ( ulong )(iVar13 - 1) * 4 ) - (int)piVar17 & 0x10U ) == 0) goto LAB_0010e940;
                                          iVar18 = *piVar17;
                                          for (piVar17 = piVar1; piVar17 != piVar1 + ( ulong )(iVar13 - 1) * 4; piVar17 = piVar17 + 8) {
                                             LAB_0010e940:iVar18 = iVar18 * *piVar17 * piVar17[4];
                                          }

                                       }

                                       uVar12 = uVar12 * iVar18;
                                    }

                                    uVar19 = uVar19 + uVar12;
                                    plVar28 = plVar28 + 4;
                                 }
 while ( *(long**)( plVar5[0xd] + 0x10 ) != plVar28 );
                              }

                           }

                           if (( plVar5[0xc] != 0 ) && ( lVar2 = lVar2 != 0 )) {
                              piVar17 = *(int**)( lVar2 + 8 );
                              iVar13 = (int)( *(long*)( lVar2 + 0x10 ) - (long)piVar17 >> 4 );
                              if (iVar13 < 1) {
                                 iVar18 = 1;
                              }
 else {
                                 piVar1 = piVar17 + 4;
                                 iVar18 = 1;
                                 if (( (int)( piVar1 + ( ulong )(iVar13 - 1) * 4 ) - (int)piVar17 & 0x10U ) == 0) goto LAB_0010e818;
                                 iVar18 = *piVar17;
                                 for (piVar17 = piVar1; piVar17 != piVar1 + ( ulong )(iVar13 - 1) * 4; piVar17 = piVar17 + 8) {
                                    LAB_0010e818:iVar18 = iVar18 * *piVar17 * piVar17[4];
                                 }

                              }

                              uVar19 = uVar19 * iVar18;
                           }

                           uVar11 = uVar11 + uVar19;
                           plVar22 = plVar22 + 4;
                        }
 while ( *(long**)( plVar4[0xd] + 0x10 ) != plVar22 );
                     }

                  }

                  if (( plVar4[0xc] != 0 ) && ( lVar2 = lVar2 != 0 )) {
                     piVar17 = *(int**)( lVar2 + 8 );
                     iVar13 = (int)( *(long*)( lVar2 + 0x10 ) - (long)piVar17 >> 4 );
                     if (iVar13 < 1) {
                        iVar18 = 1;
                     }
 else {
                        piVar1 = piVar17 + 4;
                        iVar18 = 1;
                        if (( (int)( piVar1 + ( ulong )(iVar13 - 1) * 4 ) - (int)piVar17 & 0x10U ) == 0) goto LAB_0010e700;
                        iVar18 = *piVar17;
                        for (piVar17 = piVar1; piVar17 != piVar1 + ( ulong )(iVar13 - 1) * 4; piVar17 = piVar17 + 8) {
                           LAB_0010e700:iVar18 = iVar18 * *piVar17 * piVar17[4];
                        }

                     }

                     uVar11 = uVar11 * iVar18;
                  }

                  uVar11 = uVar16 + uVar11;
                  plVar27 = plVar27 + 4;
                  uVar16 = uVar11;
               }
 while ( *(long**)( plVar3[0xd] + 0x10 ) != plVar27 );
            }

         }

         if (( plVar3[0xc] != 0 ) && ( lVar2 = lVar2 != 0 )) {
            piVar17 = *(int**)( lVar2 + 8 );
            iVar13 = (int)( *(long*)( lVar2 + 0x10 ) - (long)piVar17 >> 4 );
            if (iVar13 < 1) {
               iVar18 = 1;
            }
 else {
               piVar1 = piVar17 + 4;
               iVar18 = 1;
               if (( (int)( piVar1 + ( ulong )(iVar13 - 1) * 4 ) - (int)piVar17 & 0x10U ) == 0) goto LAB_0010e5fd;
               iVar18 = *piVar17;
               for (piVar17 = piVar1; piVar17 != piVar1 + ( ulong )(iVar13 - 1) * 4; piVar17 = piVar17 + 8) {
                  LAB_0010e5fd:iVar18 = iVar18 * *piVar17 * piVar17[4];
               }

            }

            uVar11 = uVar11 * iVar18;
         }

         uVar10 = uVar10 + uVar11;
         plVar21 = plVar21 + 4;
      }
 while ( *(long**)( *(long*)( this + 0x68 ) + 0x10 ) != plVar21 );
   }

   LAB_0010e4b4:if (( *(long*)( this + 0x60 ) != 0 ) && ( lVar2 = lVar2 != 0 )) {
      piVar17 = *(int**)( lVar2 + 8 );
      iVar13 = (int)( *(long*)( lVar2 + 0x10 ) - (long)piVar17 >> 4 );
      if (iVar13 < 1) {
         iVar18 = 1;
      }
 else {
         piVar1 = piVar17 + 4;
         iVar18 = 1;
         if (( (int)( piVar1 + ( ulong )(iVar13 - 1) * 4 ) - (int)piVar17 & 0x10U ) == 0) goto LAB_0010e505;
         iVar18 = *piVar17;
         for (piVar17 = piVar1; piVar17 != piVar1 + ( ulong )(iVar13 - 1) * 4; piVar17 = piVar17 + 8) {
            LAB_0010e505:iVar18 = iVar18 * *piVar17 * piVar17[4];
         }

      }

      uVar10 = uVar10 * iVar18;
   }

   return uVar10;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* void std::__detail::__to_chars_10_impl<unsigned int>(char*, unsigned int, unsigned int) */void std::__detail::__to_chars_10_impl<unsigned_int>(char *param_1, uint param_2, uint param_3) {
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
   local_e8 = __LC284;
   uStack_e0 = _UNK_00115d68;
   local_d8 = __LC285;
   uStack_d0 = _UNK_00115d78;
   local_c8 = __LC286;
   uStack_c0 = _UNK_00115d88;
   local_b8 = __LC287;
   uStack_b0 = _UNK_00115d98;
   local_a8 = __LC288;
   uStack_a0 = _UNK_00115da8;
   local_98 = __LC289;
   uStack_90 = _UNK_00115db8;
   local_88 = __LC290;
   uStack_80 = _UNK_00115dc8;
   local_78 = __LC291;
   uStack_70 = _UNK_00115dd8;
   local_68 = __LC292;
   uStack_60 = _UNK_00115de8;
   local_58 = __LC293;
   uStack_50 = _UNK_00115df8;
   local_48 = __LC294;
   uStack_40 = _UNK_00115e08;
   local_38 = __LC295;
   uStack_30 = (undefined1)_UNK_00115e18;
   uStack_2f = (undefined7)_LC296._0_8_;
   cStack_28 = SUB81(_LC296._0_8_, 7);
   acStack_27._0_8_ = _LC296._8_8_;
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
      }
 while ( 9999 < uVar2 );
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
}
/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
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
            if (param_1 < 10000000) goto LAB_001101b5;
            if (param_1 < 100000000) {
               cVar4 = '\b';
               goto LAB_001101b5;
            }

            if (param_1 < 1000000000) {
               cVar4 = '\t';
               goto LAB_001101b5;
            }

            cVar4 = '\t';
         }

         cVar4 = cVar4 + '\x01';
      }

   }

   LAB_001101b5:local_58 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)local_48;
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
            if (uVar5 < 10000000) goto LAB_001103d3;
            if (uVar5 < 100000000) {
               uVar6 = 8;
               goto LAB_001103d3;
            }

            if (uVar5 < 1000000000) {
               uVar6 = 9;
               goto LAB_001103d3;
            }

            iVar3 = 9;
         }

         uVar6 = iVar3 + 1;
      }

   }

   LAB_001103d3:local_58[0] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)local_48;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* glslang::TInfoSinkBase::message(glslang::TPrefixType, char const*, glslang::TSourceLoc const&) */void glslang::TInfoSinkBase::message(TInfoSinkBase *this, undefined4 param_2, undefined8 param_3, long *param_4) {
   uint uVar1;
   undefined1 *__src;
   undefined1 auVar2[16];
   ulong *__src_00;
   int iVar3;
   size_t __n;
   uint uVar4;
   size_t *psVar5;
   ulong uVar6;
   size_t *psVar8;
   long lVar9;
   ulong uVar10;
   char cVar11;
   char *pcVar12;
   long in_FS_OFFSET;
   size_t local_1b0;
   size_t *local_1a8;
   size_t local_1a0;
   size_t local_198[2];
   size_t *local_188;
   size_t local_180;
   size_t local_178[2];
   ulong local_168;
   ulong *local_160;
   ulong local_158;
   ulong local_150[3];
   undefined1 local_138[32];
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
   ulong uVar7;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (param_2) {
      case 0:
    break;
      case 1:
    glslang::TInfoSinkBase::append((char *)this);
    break;
      case 2:
    glslang::TInfoSinkBase::append((char *)this);
    break;
      case 3:
    glslang::TInfoSinkBase::append((char *)this);
    break;
      case 4:
    glslang::TInfoSinkBase::append((char *)this);
    break;
      case 5:
    glslang::TInfoSinkBase::append((char *)this);
    break;
      default:
    glslang::TInfoSinkBase::append((char *)this);
   }

   __snprintf_chk(local_138, 0x18, 2, 0x18, &_LC304, *(undefined4*)( (long)param_4 + 0xc ), param_3);
   lVar9 = *param_4;
   if (lVar9 != 0) {
      local_168 = glslang::GetThreadPoolAllocator();
      uVar10 = *(ulong*)( lVar9 + 0x10 );
      local_160 = local_150;
      __src = *(undefined1**)( lVar9 + 8 );
      if (uVar10 < 0x10) {
         if (uVar10 == 1) {
            local_150[0] = CONCAT71(local_150[0]._1_7_, *__src);
         }
 else if (uVar10 != 0) goto LAB_00110812;
      }
 else {
         if ((long)uVar10 < 0) goto LAB_00110d7c;
         local_160 = (ulong*)glslang::TPoolAllocator::allocate(local_168);
         local_150[0] = uVar10;
         LAB_00110812:memcpy(local_160, __src, uVar10);
      }

      __src_00 = local_160;
      psVar8 = local_178;
      *(undefined1*)( (long)local_160 + uVar10 ) = 0;
      local_188 = psVar8;
      local_158 = uVar10;
      if (local_160 == (ulong*)0x0) {
         std::__throw_logic_error("basic_string: construction from null is not valid");
         LAB_00110d7c:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::_M_create");
      }

      __n = strlen((char*)local_160);
      local_1b0 = __n;
      if (__n < 0x10) {
         psVar5 = psVar8;
         if (__n == 1) {
            local_178[0] = CONCAT71(local_178[0]._1_7_, (char)*__src_00);
         }
 else if (__n != 0) goto LAB_00110851;
      }
 else {
         local_188 = (size_t*)std::__cxx11::string::_M_create((ulong*)&local_188, ( ulong ) & local_1b0);
         local_178[0] = local_1b0;
         psVar5 = local_188;
         LAB_00110851:memcpy(psVar5, __src_00, __n);
         psVar5 = local_188;
      }

      local_1a8 = local_198;
      *(undefined1*)( (long)psVar5 + local_1b0 ) = 0;
      local_1a0 = local_1b0;
      local_180 = local_1b0;
      if (local_188 == psVar8) {
         uVar10 = local_1b0 + 1;
         psVar5 = local_1a8;
         if (7 < (uint)uVar10) {
            uVar6 = 0;
            do {
               uVar4 = (int)uVar6 + 8;
               uVar7 = (ulong)uVar4;
               *(undefined8*)( (long)local_1a8 + uVar6 ) = *(undefined8*)( (long)psVar8 + uVar6 );
               uVar6 = uVar7;
            }
 while ( uVar4 < ( (uint)uVar10 & 0xfffffff8 ) );
            psVar5 = (size_t*)( (long)local_1a8 + uVar7 );
            psVar8 = (size_t*)( uVar7 + (long)psVar8 );
         }

         lVar9 = 0;
         if (( uVar10 & 4 ) != 0) {
            *(int*)psVar5 = (int)*psVar8;
            lVar9 = 4;
         }

         if (( uVar10 & 2 ) != 0) {
            *(undefined2*)( (long)psVar5 + lVar9 ) = *(undefined2*)( (long)psVar8 + lVar9 );
            lVar9 = lVar9 + 2;
         }

         if (( uVar10 & 1 ) != 0) {
            *(undefined1*)( (long)psVar5 + lVar9 ) = *(undefined1*)( (long)psVar8 + lVar9 );
         }

      }
 else {
         local_1a8 = local_188;
         local_198[0] = local_178[0];
      }

      goto LAB_00110748;
   }

   uVar4 = *(uint*)( param_4 + 1 );
   uVar10 = (long)(int)uVar4;
   if ((int)uVar4 < 0) {
      uVar10 = -(long)(int)uVar4;
   }

   uVar6 = ( ulong )(uVar4 >> 0x1f);
   cVar11 = (char)( (int)uVar4 >> 0x1f );
   if (uVar10 < 10) {
      local_1a8 = local_198;
      std::__cxx11::string::_M_construct(( ulong ) & local_1a8, '\x01' - cVar11);
      pcVar12 = (char*)( uVar6 + (long)local_1a8 );
      LAB_00110b04:cVar11 = (char)uVar10 + '0';
   }
 else {
      if (uVar10 < 100) {
         local_1a8 = local_198;
         std::__cxx11::string::_M_construct(( ulong ) & local_1a8, '\x02' - cVar11);
         pcVar12 = (char*)( uVar6 + (long)local_1a8 );
         local_118 = __LC284;
         uStack_110 = _UNK_00115d68;
         local_108 = __LC285;
         uStack_100 = _UNK_00115d78;
         local_f8 = __LC286;
         uStack_f0 = _UNK_00115d88;
         local_e8 = __LC287;
         uStack_e0 = _UNK_00115d98;
         local_d8 = __LC288;
         uStack_d0 = _UNK_00115da8;
         local_c8 = __LC289;
         uStack_c0 = _UNK_00115db8;
         local_b8 = __LC290;
         uStack_b0 = _UNK_00115dc8;
         local_a8 = __LC291;
         uStack_a0 = _UNK_00115dd8;
         local_98 = __LC292;
         uStack_90 = _UNK_00115de8;
         local_88 = __LC293;
         uStack_80 = _UNK_00115df8;
         local_78 = __LC294;
         uStack_70 = _UNK_00115e08;
         local_68 = __LC295;
         uStack_60 = (undefined1)_UNK_00115e18;
         uStack_5f = (undefined7)_LC296._0_8_;
         cStack_58 = SUB81(_LC296._0_8_, 7);
         for (int i = 0; i < 8; i++) {
            acStack_57[i] = _LC296[( i + 8 )];
         }

      }
 else {
         if (uVar10 < 1000) {
            uVar4 = 2;
            iVar3 = 3;
            LAB_00110b71:cVar11 = (char)iVar3 - cVar11;
         }
 else {
            if (uVar10 < 10000) {
               uVar4 = 3;
               iVar3 = 4;
               goto LAB_00110b71;
            }

            iVar3 = 5;
            if (uVar10 < 100000) {
               LAB_00110b6d:uVar4 = iVar3 - 1;
               goto LAB_00110b71;
            }

            if (999999 < uVar10) {
               uVar4 = 6;
               iVar3 = 7;
               if (9999999 < uVar10) {
                  if (99999999 < uVar10) {
                     if (uVar10 < 1000000000) {
                        iVar3 = 9;
                        goto LAB_00110b6d;
                     }

                     uVar4 = 9;
                     goto LAB_0011098c;
                  }

                  uVar4 = 7;
                  iVar3 = 8;
               }

               goto LAB_00110b71;
            }

            uVar4 = 5;
            LAB_0011098c:cVar11 = ( '\x01' - cVar11 ) + (char)uVar4;
         }

         local_1a8 = local_198;
         std::__cxx11::string::_M_construct(( ulong ) & local_1a8, cVar11);
         pcVar12 = (char*)( uVar6 + (long)local_1a8 );
         local_118 = __LC284;
         uStack_110 = _UNK_00115d68;
         local_108 = __LC285;
         uStack_100 = _UNK_00115d78;
         local_f8 = __LC286;
         uStack_f0 = _UNK_00115d88;
         local_e8 = __LC287;
         uStack_e0 = _UNK_00115d98;
         local_d8 = __LC288;
         uStack_d0 = _UNK_00115da8;
         local_c8 = __LC289;
         uStack_c0 = _UNK_00115db8;
         local_b8 = __LC290;
         uStack_b0 = _UNK_00115dc8;
         local_a8 = __LC291;
         uStack_a0 = _UNK_00115dd8;
         local_98 = __LC292;
         uStack_90 = _UNK_00115de8;
         local_88 = __LC293;
         uStack_80 = _UNK_00115df8;
         local_78 = __LC294;
         uStack_70 = _UNK_00115e08;
         local_68 = __LC295;
         uStack_60 = (undefined1)_UNK_00115e18;
         uStack_5f = (undefined7)_LC296._0_8_;
         cStack_58 = SUB81(_LC296._0_8_, 7);
         for (int i = 0; i < 8; i++) {
            acStack_57[i] = _LC296[( i + 8 )];
         }

         do {
            uVar6 = uVar10;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar6 >> 2;
            uVar10 = ( uVar6 >> 2 ) / 0x19;
            lVar9 = ( uVar6 + ( ( SUB168(auVar2 * ZEXT816(0x28f5c28f5c28f5c3), 8) & 0xfffffffffffffffc ) + uVar10 ) * -0x14 ) * 2;
            cVar11 = *(char*)( (long)&local_118 + lVar9 );
            pcVar12[uVar4] = *(char*)( (long)&local_118 + lVar9 + 1 );
            uVar1 = uVar4 - 1;
            uVar4 = uVar4 - 2;
            pcVar12[uVar1] = cVar11;
         }
 while ( 9999 < uVar6 );
         if (uVar6 < 1000) goto LAB_00110b04;
      }

      cVar11 = *(char*)( (long)&local_118 + uVar10 * 2 );
      pcVar12[1] = *(char*)( (long)&local_118 + uVar10 * 2 + 1 );
   }

   *pcVar12 = cVar11;
   LAB_00110748:glslang::TInfoSinkBase::append((string*)this);
   if (local_1a8 != local_198) {
      operator_delete(local_1a8, local_198[0] + 1);
   }

   for (int i = 0; i < 3; i++) {
      glslang::TInfoSinkBase::append((char*)this);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   glslang::TInfoSinkBase::append((char*)this);
   return;
}
/* WARNING: Removing unreachable block (ram,0x00111c7e) *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* glslang::TSampler::getString[abi:cxx11]() const */void glslang::TSampler::getString_abi_cxx11_(void) {
   char *pcVar1;
   byte bVar2;
   char *pcVar3;
   undefined8 uVar4;
   ulong *puVar5;
   uint uVar6;
   long lVar7;
   uint uVar8;
   ulong uVar9;
   ulong uVar10;
   ulong uVar11;
   undefined1 *in_RSI;
   ulong *in_RDI;
   long in_FS_OFFSET;
   ulong local_98;
   char *local_90;
   undefined1 local_88[5];
   undefined4 uStack_83;
   undefined1 uStack_7f;
   undefined1 uStack_7e;
   undefined1 auStack_7d[2];
   undefined8 uStack_7b;
   ulong local_68;
   ulong *local_60;
   undefined8 local_58;
   ulong local_50[4];
   local_50[2] = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar1 = (char*)( (long)&uStack_83 + 3 );
   local_98 = glslang::GetThreadPoolAllocator();
   bVar2 = in_RSI[2];
   _local_88 = 0;
   uStack_83._3_1_ = 0;
   local_90 = pcVar1;
   if (( bVar2 & 0x20 ) != 0) {
      *in_RDI = local_98;
      uStack_83._3_1_ = 0x73;
      uStack_7f = 0x61;
      uStack_7e = 0x6d;
      uStack_7b._2_1_ = 0;
      _auStack_7d = 0x72656c70;
      in_RDI[1] = ( ulong )(in_RDI + 3);
      in_RDI[2] = 7;
      in_RDI[3] = 0x72656c706d6173;
      goto LAB_00110ea9;
   }

   switch (*in_RSI) {
      case 3:
    uStack_7e = 0x36;
    uStack_83._3_1_ = 0x66;
    uStack_7f = 0x31;
    _auStack_7d = (uint)stack0xffffffffffffff84 << 8;
    break;
      case 4:
    uStack_7e = 0;
    uStack_83._3_1_ = 0x69;
    uStack_7f = 0x38;
    goto LAB_00111000;
      case 5:
    uStack_7e = 0x36;
    uStack_83._3_1_ = 0x75;
    uStack_7f = 0x31;
    _auStack_7d = (uint)stack0xffffffffffffff84 << 8;
    break;
      case 6:
    uStack_7e = 0x36;
    uStack_83._3_1_ = 0x69;
    uStack_7f = 0x31;
    _auStack_7d = (uint)stack0xffffffffffffff84 << 8;
    break;
      case 7:
    uStack_7e = 0;
    uStack_83._3_1_ = 0x75;
    uStack_7f = 0x38;
LAB_00111000:
    uStack_7f = 0x38;
    uStack_7e = 0;
    _local_88 = 2;
    lVar7 = 2;
    goto LAB_00110ef4;
      case 8:
    uStack_83._3_1_ = 0x69;
    uStack_7f = 0;
    goto LAB_00111023;
      case 9:
    uStack_83._3_1_ = 0x75;
    uStack_7f = 0;
LAB_00111023:
    uStack_7f = 0;
    _local_88 = 1;
    lVar7 = 1;
    goto LAB_00110ef4;
      case 10:
    uStack_7e = 0x34;
    uStack_83._3_1_ = 0x69;
    uStack_7f = 0x36;
    _auStack_7d = (uint)stack0xffffffffffffff84 << 8;
    break;
      case 0xb:
    uStack_7e = 0x34;
    uStack_83._3_1_ = 0x75;
    uStack_7f = 0x36;
    _auStack_7d = (uint)stack0xffffffffffffff84 << 8;
    break;
      default:
    lVar7 = 0;
    goto LAB_00110ef4;
   }

   _local_88 = 3;
   lVar7 = 3;
   LAB_00110ef4:if (( bVar2 & 8 ) == 0) {
      if (( bVar2 & 0x10 ) == 0) {
         builtin_strncpy(pcVar1 + lVar7, "text", 4);
         *(undefined4*)( auStack_7d + lVar7 ) = 0x65727574;
         _local_88 = lVar7 + 7U;
         *(undefined1*)( (long)&uStack_7b + lVar7 + 2 ) = 0;
         goto LAB_00110f34;
      }

      builtin_strncpy(pcVar1 + lVar7, "samp", 4);
      *(undefined4*)( auStack_7d + lVar7 ) = 0x72656c70;
      _local_88 = lVar7 + 7U;
      *(undefined1*)( (long)&uStack_7b + lVar7 + 2 ) = 0;
      bVar2 = in_RSI[3];
      pcVar3 = pcVar1;
      uVar11 = _local_88;
   }
 else {
      if (in_RSI[1] == '\b') {
         if (lVar7 == 3) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, 3, 0, "attachmentEXT", 0xd);
         }
 else {
            builtin_strncpy(pcVar1 + lVar7, "attachme", 8);
            *(undefined8*)( (long)&uStack_7b + lVar7 ) = 0x545845746e656d68;
         }

         _local_88 = lVar7 + 0xdU;
         local_90[lVar7 + 0xdU] = '\0';
      }
 else if (in_RSI[1] == '\a') {
         builtin_strncpy(pcVar1 + lVar7, "subp", 4);
         *(undefined4*)( auStack_7d + lVar7 ) = 0x73736170;
         _local_88 = lVar7 + 7;
         *(undefined1*)( (long)&uStack_7b + lVar7 + 2 ) = 0;
      }
 else {
         builtin_strncpy(pcVar1 + lVar7, "imag", 4);
         auStack_7d[lVar7 + 1] = 0x65;
         _local_88 = lVar7 + 5;
         /* WARNING (jumptable): Ignoring partial resolution of indirect */
         *(undefined1*)( (long)&uStack_7b + lVar7 ) = 0;
      }

      LAB_00110f34:bVar2 = in_RSI[3];
      pcVar3 = local_90;
      uVar11 = _local_88;
   }

   local_90 = pcVar3;
   _local_88 = uVar11;
   if (( bVar2 & 0x20 ) != 0) {
      if (0x7fffffffffffffff - uVar11 < 0xb) goto LAB_001118ab;
      uVar9 = uVar11 + 0xb;
      if (pcVar3 == pcVar1) {
         uVar10 = 0xf;
      }
 else {
         uVar10 = CONCAT17(uStack_7b._2_1_, CONCAT43(_auStack_7d, CONCAT12(uStack_7e, CONCAT11(uStack_7f, uStack_83._3_1_))));
      }

      if (uVar10 < uVar9) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, uVar11, 0, "ExternalOES", 0xb);
      }
 else {
         builtin_strncpy(pcVar3 + uVar11, "ExternalOES", 0xb);
      }

      _local_88 = uVar9;
      local_90[uVar11 + 0xb] = '\0';
      *in_RDI = local_98;
      in_RDI[1] = ( ulong )(in_RDI + 3);
      if (local_90 == pcVar1) {
         uVar10 = uVar11 + 0xc;
         uVar8 = (uint)uVar10;
         if (uVar8 < 8) {
            if (( uVar10 & 4 ) == 0) {
               if (( uVar8 != 0 ) && ( *(undefined1*)( in_RDI + 3 ) = uStack_83._3_1_(uVar10 & 2) != 0 )) {
                  *(undefined2*)( (long)in_RDI + uVar11 + 0x22 ) = *(undefined2*)( (long)&uStack_7b + uVar11 + 5 );
               }

            }
 else {
               *(uint*)( in_RDI + 3 ) = CONCAT13(auStack_7d[0], CONCAT12(uStack_7e, CONCAT11(uStack_7f, uStack_83._3_1_)));
               *(undefined4*)( (long)in_RDI + uVar11 + 0x20 ) = *(undefined4*)( (long)&uStack_7b + uVar11 + 3 );
            }

         }
 else {
            in_RDI[3] = CONCAT17(uStack_7b._2_1_, CONCAT43(_auStack_7d, CONCAT12(uStack_7e, CONCAT11(uStack_7f, uStack_83._3_1_))));
            *(undefined8*)( (long)in_RDI + uVar11 + 0x1c ) = *(undefined8*)( auStack_7d + uVar11 + 1 );
            lVar7 = (long)( in_RDI + 3 ) - ( ( ulong )(in_RDI + 4) & 0xfffffffffffffff8 );
            uVar8 = uVar8 + (int)lVar7 & 0xfffffff8;
            if (7 < uVar8) {
               uVar11 = 0;
               do {
                  uVar6 = (int)uVar11 + 8;
                  *(undefined8*)( ( ( ulong )(in_RDI + 4) & 0xfffffffffffffff8 ) + uVar11 ) = *(undefined8*)( pcVar1 + ( uVar11 - lVar7 ) );
                  uVar11 = (ulong)uVar6;
               }
 while ( uVar6 < uVar8 );
            }

         }

      }
 else {
         in_RDI[1] = (ulong)local_90;
         in_RDI[3] = CONCAT17(uStack_7b._2_1_, CONCAT43(_auStack_7d, CONCAT12(uStack_7e, CONCAT11(uStack_7f, uStack_83._3_1_))));
      }

      in_RDI[2] = uVar9;
      goto LAB_00110ea9;
   }

   if (( bVar2 & 0x40 ) != 0) {
      local_68 = glslang::GetThreadPoolAllocator();
      uVar9 = uVar11 + 2;
      local_58 = 0;
      local_50[0] = local_50[0] & 0xffffffffffffff00;
      puVar5 = local_50;
      uVar10 = local_50[0];
      if (0xf < uVar9) {
         uVar10 = 0x1e;
         if (0x1d < uVar9) {
            uVar10 = uVar9;
         }

         local_60 = local_50;
         puVar5 = (ulong*)glslang::TPoolAllocator::allocate(local_68);
         if (local_58 == 0) {
            *(char*)puVar5 = (char)*local_60;
         }
 else {
            if (local_58 + 1 == 0) goto LAB_001112e0;
            puVar5 = (ulong*)memcpy(puVar5, local_60, local_58 + 1);
         }

         local_60 = puVar5;
         local_50[0] = uVar10;
         if (0x7fffffffffffffff - local_58 < 2) goto LAB_001118ab;
      }

      LAB_001112e0:local_50[0] = uVar10;
      local_60 = puVar5;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_68, "__", 2);
      if (( 0x7fffffffffffffff - local_58 < uVar11 ) || ( std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_68, pcVar3, uVar11),uVar11 = local_58,uVar4 = _UNK_00115e48,0x7fffffffffffffff - local_58 < 0x10 )) goto LAB_001118ab;
      uVar9 = local_58 + 0x10;
      uVar10 = local_50[0];
      if (local_60 == local_50) {
         uVar10 = 0xf;
      }

      if (uVar10 < uVar9) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_68, local_58, 0, "External2DY2YEXT", 0x10);
      }
 else {
         *(undefined8*)( (long)local_60 + local_58 ) = __LC357;
         ( (undefined8*)( (long)local_60 + local_58 ) )[1] = uVar4;
      }

      local_58 = uVar9;
      *(undefined1*)( (long)local_60 + uVar11 + 0x10 ) = 0;
      *in_RDI = local_68;
      in_RDI[1] = ( ulong )(in_RDI + 3);
      if (local_60 == local_50) {
         uVar11 = uVar11 + 0x11;
         uVar8 = (uint)uVar11;
         if (uVar8 < 8) {
            if (( uVar11 & 4 ) == 0) {
               if (uVar8 != 0) {
                  *(undefined1*)( in_RDI + 3 ) = (undefined1)local_50[0];
                  if (( uVar11 & 2 ) != 0) {
                     *(undefined2*)( (long)in_RDI + ( uVar11 & 0xffffffff ) + 0x16 ) = *(undefined2*)( (long)local_50 + ( ( uVar11 & 0xffffffff ) - 2 ) );
                  }

               }

            }
 else {
               *(undefined4*)( in_RDI + 3 ) = (undefined4)local_50[0];
               *(undefined4*)( (long)in_RDI + ( uVar11 & 0xffffffff ) + 0x14 ) = *(undefined4*)( (long)local_50 + ( ( uVar11 & 0xffffffff ) - 4 ) );
            }

         }
 else {
            in_RDI[3] = local_50[0];
            *(undefined8*)( (long)in_RDI + ( uVar11 & 0xffffffff ) + 0x10 ) = *(undefined8*)( (long)local_50 + ( ( uVar11 & 0xffffffff ) - 8 ) );
            lVar7 = (long)( in_RDI + 3 ) - ( ( ulong )(in_RDI + 4) & 0xfffffffffffffff8 );
            uVar8 = uVar8 + (int)lVar7 & 0xfffffff8;
            if (7 < uVar8) {
               uVar11 = 0;
               do {
                  uVar6 = (int)uVar11 + 8;
                  *(undefined8*)( ( ( ulong )(in_RDI + 4) & 0xfffffffffffffff8 ) + uVar11 ) = *(undefined8*)( (long)local_50 + ( uVar11 - lVar7 ) );
                  uVar11 = (ulong)uVar6;
               }
 while ( uVar6 < uVar8 );
            }

         }

      }
 else {
         in_RDI[1] = (ulong)local_60;
         in_RDI[3] = local_50[0];
      }

      in_RDI[2] = uVar9;
      goto LAB_00110ea9;
   }

   switch (in_RSI[1]) {
      case 1:
    if (0x7fffffffffffffff - uVar11 < 2) goto LAB_001118ab;
    if (pcVar3 == pcVar1) {
      uVar9 = 0xf;
    }
    else {
      uVar9 = CONCAT17(uStack_7b._2_1_,
                       CONCAT43(_auStack_7d,CONCAT12(uStack_7e,CONCAT11(uStack_7f,uStack_83._3_1_)))
                      );
    }
    if (uVar9 < uVar11 + 2) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_98
                ,uVar11,0,"1D",2);
    }
    else {
      (pcVar3 + uVar11)[0] = '1';
      (pcVar3 + uVar11)[1] = 'D';
    }
    goto LAB_001111b8;
      case 2:
    if (0x7fffffffffffffff - uVar11 < 2) goto LAB_001118ab;
    if (pcVar3 == pcVar1) {
      uVar9 = 0xf;
    }
    else {
      uVar9 = CONCAT17(uStack_7b._2_1_,
                       CONCAT43(_auStack_7d,CONCAT12(uStack_7e,CONCAT11(uStack_7f,uStack_83._3_1_)))
                      );
    }
    if (uVar9 < uVar11 + 2) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_98
                ,uVar11,0,"2D",2);
    }
    else {
      (pcVar3 + uVar11)[0] = '2';
      (pcVar3 + uVar11)[1] = 'D';
    }
    goto LAB_001111b8;
      case 3:
    if (0x7fffffffffffffff - uVar11 < 2) goto LAB_001118ab;
    if (pcVar3 == pcVar1) {
      uVar9 = 0xf;
    }
    else {
      uVar9 = CONCAT17(uStack_7b._2_1_,
                       CONCAT43(_auStack_7d,CONCAT12(uStack_7e,CONCAT11(uStack_7f,uStack_83._3_1_)))
                      );
    }
    if (uVar9 < uVar11 + 2) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_98
                ,uVar11,0,"3D",2);
    }
    else {
      (pcVar3 + uVar11)[0] = '3';
      (pcVar3 + uVar11)[1] = 'D';
    }
LAB_001111b8:
    _local_88 = uVar11 + 2;
    local_90[uVar11 + 2] = '\0';
    break;
      case 4:
    if (0x7fffffffffffffff - uVar11 < 4) goto LAB_001118ab;
    if (pcVar3 == pcVar1) {
      uVar9 = 0xf;
    }
    else {
      uVar9 = CONCAT17(uStack_7b._2_1_,
                       CONCAT43(_auStack_7d,CONCAT12(uStack_7e,CONCAT11(uStack_7f,uStack_83._3_1_)))
                      );
    }
    if (uVar9 < uVar11 + 4) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_98
                ,uVar11,0,"Cube",4);
    }
    else {
      builtin_strncpy(pcVar3 + uVar11,"Cube",4);
    }
    _local_88 = uVar11 + 4;
    local_90[uVar11 + 4] = '\0';
    break;
      case 5:
    if (0x7fffffffffffffff - uVar11 < 6) goto LAB_001118ab;
    if (pcVar3 == pcVar1) {
      uVar9 = 0xf;
    }
    else {
      uVar9 = CONCAT17(uStack_7b._2_1_,
                       CONCAT43(_auStack_7d,CONCAT12(uStack_7e,CONCAT11(uStack_7f,uStack_83._3_1_)))
                      );
    }
    if (uVar9 < uVar11 + 6) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_98
                ,uVar11,0,"2DRect",6);
    }
    else {
      builtin_strncpy(pcVar3 + uVar11,"2DRect",6);
    }
    goto LAB_001116c9;
      case 6:
    if (0x7fffffffffffffff - uVar11 < 6) goto LAB_001118ab;
    if (pcVar3 == pcVar1) {
      uVar9 = 0xf;
    }
    else {
      uVar9 = CONCAT17(uStack_7b._2_1_,
                       CONCAT43(_auStack_7d,CONCAT12(uStack_7e,CONCAT11(uStack_7f,uStack_83._3_1_)))
                      );
    }
    if (uVar9 < uVar11 + 6) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_98
                ,uVar11,0,"Buffer",6);
    }
    else {
      builtin_strncpy(pcVar3 + uVar11,"Buffer",6);
    }
LAB_001116c9:
    _local_88 = uVar11 + 6;
    local_90[uVar11 + 6] = '\0';
    break;
      case 7:
    if (0x7fffffffffffffff - uVar11 < 5) goto LAB_001118ab;
    if (pcVar3 == pcVar1) {
      uVar9 = 0xf;
    }
    else {
      uVar9 = CONCAT17(uStack_7b._2_1_,
                       CONCAT43(_auStack_7d,CONCAT12(uStack_7e,CONCAT11(uStack_7f,uStack_83._3_1_)))
                      );
    }
    if (uVar9 < uVar11 + 5) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_98
                ,uVar11,0,"Input",5);
    }
    else {
      builtin_strncpy(pcVar3 + uVar11,"Input",5);
    }
    _local_88 = uVar11 + 5;
    local_90[uVar11 + 5] = '\0';
    break;
      case 8:
    if ((pcVar3 != pcVar1) &&
       (CONCAT17(uStack_7b._2_1_,
                 CONCAT43(_auStack_7d,CONCAT12(uStack_7e,CONCAT11(uStack_7f,uStack_83._3_1_)))) <
        uVar11)) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_98
                ,uVar11,0,"",0);
    }
    _local_88 = uVar11;
    local_90[uVar11] = '\0';
   }

   uVar11 = _local_88;
   bVar2 = in_RSI[2];
   if (( bVar2 & 4 ) != 0) {
      if (0x7fffffffffffffff - _local_88 < 2) goto LAB_001118ab;
      uVar9 = _local_88 + 2;
      if (local_90 == pcVar1) {
         uVar10 = 0xf;
      }
 else {
         uVar10 = CONCAT17(uStack_7b._2_1_, CONCAT43(_auStack_7d, CONCAT12(uStack_7e, CONCAT11(uStack_7f, uStack_83._3_1_))));
      }

      if (uVar10 < uVar9) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, _local_88, 0, "MS", 2);
      }
 else {
         ( local_90 + _local_88 )[0] = 'M';
         ( local_90 + _local_88 )[1] = 'S';
      }

      _local_88 = uVar9;
      local_90[uVar11 + 2] = '\0';
      bVar2 = in_RSI[2];
   }

   uVar11 = _local_88;
   if (( bVar2 & 1 ) != 0) {
      if (0x7fffffffffffffff - _local_88 < 5) goto LAB_001118ab;
      uVar9 = _local_88 + 5;
      if (local_90 == pcVar1) {
         uVar10 = 0xf;
      }
 else {
         uVar10 = CONCAT17(uStack_7b._2_1_, CONCAT43(_auStack_7d, CONCAT12(uStack_7e, CONCAT11(uStack_7f, uStack_83._3_1_))));
      }

      if (uVar10 < uVar9) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, _local_88, 0, "Array", 5);
      }
 else {
         builtin_strncpy(local_90 + _local_88, "Array", 5);
      }

      _local_88 = uVar9;
      local_90[uVar11 + 5] = '\0';
      bVar2 = in_RSI[2];
   }

   if (( bVar2 & 2 ) == 0) {
      *in_RDI = local_98;
      in_RDI[1] = ( ulong )(in_RDI + 3);
      if (local_90 == pcVar1) goto LAB_00111432;
      LAB_00111217:in_RDI[1] = (ulong)local_90;
      in_RDI[3] = CONCAT17(uStack_7b._2_1_, CONCAT43(_auStack_7d, CONCAT12(uStack_7e, CONCAT11(uStack_7f, uStack_83._3_1_))));
   }
 else {
      if (0x7fffffffffffffff - _local_88 < 6) {
         LAB_001118ab:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::append");
      }

      uVar11 = _local_88 + 6;
      if (local_90 == pcVar1) {
         uVar9 = 0xf;
      }
 else {
         uVar9 = CONCAT17(uStack_7b._2_1_, CONCAT43(_auStack_7d, CONCAT12(uStack_7e, CONCAT11(uStack_7f, uStack_83._3_1_))));
      }

      if (uVar9 < uVar11) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, _local_88, 0, "Shadow", 6);
      }
 else {
         builtin_strncpy(local_90 + _local_88, "Shadow", 6);
      }

      _local_88 = uVar11;
      local_90[uVar11] = '\0';
      *in_RDI = local_98;
      in_RDI[1] = ( ulong )(in_RDI + 3);
      if (local_90 != pcVar1) goto LAB_00111217;
      LAB_00111432:puVar5 = in_RDI + 3;
      uVar11 = _local_88 + 1;
      uVar8 = (uint)uVar11;
      if (uVar8 < 8) {
         if (( uVar11 & 4 ) == 0) {
            if (( uVar8 != 0 ) && ( *(undefined1*)puVar5 = uStack_83._3_1_(uVar11 & 2) != 0 )) {
               *(undefined2*)( (long)in_RDI + _local_88 + 0x17 ) = *(undefined2*)( (long)&uStack_83 + _local_88 + 2 );
            }

         }
 else {
            *(uint*)puVar5 = CONCAT13(auStack_7d[0], CONCAT12(uStack_7e, CONCAT11(uStack_7f, uStack_83._3_1_)));
            *(undefined4*)( (long)in_RDI + _local_88 + 0x15 ) = *(undefined4*)( (long)&uStack_83 + _local_88 );
         }

      }
 else {
         *puVar5 = CONCAT17(uStack_7b._2_1_, CONCAT43(_auStack_7d, CONCAT12(uStack_7e, CONCAT11(uStack_7f, uStack_83._3_1_))));
         *(undefined8*)( (long)in_RDI + _local_88 + 0x11 ) = *(undefined8*)( local_88 + _local_88 + 1 );
         lVar7 = (long)puVar5 - ( ( ulong )(in_RDI + 4) & 0xfffffffffffffff8 );
         uVar8 = uVar8 + (int)lVar7 & 0xfffffff8;
         if (7 < uVar8) {
            uVar6 = 0;
            do {
               uVar11 = (ulong)uVar6;
               uVar6 = uVar6 + 8;
               *(undefined8*)( ( ( ulong )(in_RDI + 4) & 0xfffffffffffffff8 ) + uVar11 ) = *(undefined8*)( pcVar1 + ( uVar11 - lVar7 ) );
            }
 while ( uVar6 < uVar8 );
         }

      }

   }

   in_RDI[2] = _local_88;
   LAB_00110ea9:if (local_50[2] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* glslang::TType::getCompleteString(bool, bool, bool, bool, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >) const */basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *glslang::TType::getCompleteString(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *param_1, long *param_2, char param_3, char param_4, char param_5, char param_6, long param_7, long param_8) {
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar1;
   code *pcVar2;
   long *plVar3;
   undefined1 *__src;
   undefined8 uVar4;
   char cVar5;
   byte bVar6;
   ushort uVar7;
   uint uVar8;
   undefined8 uVar9;
   size_t __n;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar10;
   ulong uVar11;
   ulong uVar12;
   long lVar13;
   ulong uVar14;
   char *pcVar15;
   uint uVar16;
   ulong uVar17;
   int iVar18;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar19;
   ulong uVar20;
   long lVar21;
   long lVar22;
   long in_FS_OFFSET;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_218;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_210;
   long local_208;
   long lStack_200;
   long local_1f8;
   undefined8 uStack_1f0;
   undefined8 local_1e8;
   long lStack_1e0;
   long local_1d8;
   long lStack_1d0;
   long local_1c8;
   long lStack_1c0;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_1b0;
   ulong local_188;
   ulong *local_180;
   ulong local_178;
   ulong local_170[3];
   undefined8 local_158;
   undefined1 *local_150;
   undefined1 local_140[24];
   undefined1 local_128[8];
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_120;
   ulong local_118;
   undefined8 local_f8;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_f0;
   ulong local_e8;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> local_e0[24];
   undefined8 local_c8;
   undefined1 *local_c0;
   undefined1 local_b0[24];
   undefined8 local_98;
   undefined1 *local_90;
   undefined1 local_80[24];
   undefined1 local_68[8];
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_60;
   ulong local_58;
   long local_40;
   pbVar1 = param_1 + 0x18;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar9 = glslang::GetThreadPoolAllocator();
   *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) = pbVar1;
   *(undefined8*)param_1 = uVar9;
   *(undefined8*)( param_1 + 0x10 ) = 0;
   param_1[0x18] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
   local_218 = param_1;
   local_210 = param_1;
   if (param_4 != '\0') {
      if (param_2[10] != 0) {
         glslang::TQualifier::getSpirvDecorateQualifierString_abi_cxx11_();
         __n = strlen((char*)local_1b0);
         uVar20 = *(ulong*)( param_1 + 0x10 );
         if (0x7fffffffffffffff - uVar20 < __n) goto LAB_00115757;
         pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
         uVar14 = __n + uVar20;
         if (pbVar1 == pbVar10) {
            uVar11 = 0xf;
         }
 else {
            uVar11 = *(ulong*)( param_1 + 0x18 );
         }

         if (uVar11 < uVar14) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, (char*)local_1b0, __n);
            pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
         }
 else if (__n != 0) {
            if (__n == 1) {
               pbVar10[uVar20] = *local_1b0;
               pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
            }
 else {
               memcpy(pbVar10 + uVar20, local_1b0, __n);
               pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
            }

         }

         *(ulong*)( param_1 + 0x10 ) = uVar14;
         pbVar10[uVar14] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
      }

      if (( ( *(byte*)( (long)param_2 + 0x1f ) & 0x70 ) == 0 ) && ( ( *(byte*)( param_2 + 4 ) & 0xf ) == 0 )) {
         if (( ( ( *(int*)( (long)param_2 + 0x24 ) != -1 ) || ( ( ( ( ( (short)param_2[6] != -1 || ( ( *(uint*)( (long)param_2 + 0x2c ) & 0x3f8000 ) != 0x1f8000 ) ) || ( (int)param_2[5] != -1 ) ) || ( ( ( ~*(ushort *)((long)param_2 + 0x2c) & 0xfff ) != 0 || ( ( *(byte*)( (long)param_2 + 0x2d ) & 0x70 ) != 0x40 ) ) ) ) || ( *(char*)( (long)param_2 + 0x32 ) != -1 ) ) ) ) || ( ( ( *(char*)( (long)param_2 + 0x33 ) != -1 || ( *(char*)( (long)param_2 + 0x3c ) != '\0' ) ) || ( (char)param_2[9] != '\0' ) ) ) ) || ( ( ( ( *(char*)( (long)param_2 + 0x3d ) != '\0' || ( *(char*)( (long)param_2 + 0x3e ) != '\0' ) ) || ( ( ~*(byte *)((long)param_2 + 0x34) & 0xf ) != 0 ) ) || ( ( ( ~*(uint *)((long)param_2 + 0x34) & 0x3fff0 ) != 0 || ( ( ~*(ushort *)((long)param_2 + 0x36) & 0x7ffc ) != 0 ) ) ) ) )) {
            local_208 = param_2[2];
            lStack_200 = param_2[3];
            local_1f8 = param_2[4];
            lVar13 = param_2[5];
            uVar20 = param_2[6];
            lStack_1e0 = param_2[7];
            local_1d8 = param_2[8];
            lStack_1d0 = param_2[9];
            local_1c8 = param_2[10];
            lStack_1c0 = param_2[0xb];
            uStack_1f0 = lVar13;
            local_1e8 = uVar20;
            if (( ( ( ( *(char*)( (long)param_2 + 0x3c ) == '\0' ) && ( ( (short)param_2[6] == -1 && ( uStack_1f0._4_4_ = ( uint )((ulong)lVar13 >> 0x20) ),uVar16 = uStack_1f0._4_4_ & 0x3f8000,uVar16 == 0x1f8000 ) ) ) ) && ( ( *(uint*)( param_2 + 5 ) & *(uint*)( (long)param_2 + 0x24 ) ) == 0xffffffff ) ) && ( ( ( uStack_1f0._4_2_ = ( ushort )((ulong)lVar13 >> 0x20) ),uVar7 = ~uStack_1f0._4_2_,( uVar7 & 0xfff ) == 0 && ( uStack_1f0._5_1_ = ( byte )((ulong)lVar13 >> 0x28) ),bVar6 = uStack_1f0._5_1_ & 0x70,bVar6 == 0x40 ) ) && ( ( *(byte*)( (long)param_2 + 0x33 ) & *(byte*)( (long)param_2 + 0x32 ) ) == 0xff )) {
               local_1e8 = uVar20 | 0xf00000000;
               uVar14 = local_1e8;
               uVar16 = ~local_1e8._4_4_;
               local_1e8 = uVar14;
               if (( ( uVar16 & 0x3fff0 ) == 0 ) && ( local_1e8._6_2_ = ( ushort )(uVar20 >> 0x30) ),uVar7 = ~local_1e8._6_2_,( uVar7 & 0x7ffc ) == 0) goto LAB_00112845;
            }

            goto LAB_00112510;
         }

      }
 else {
         LAB_00112510:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "layout(");
         if (( ( ~*(ushort *)((long)param_2 + 0x2c) & 0xfff ) != 0 ) || ( ( ( *(byte*)( (long)param_2 + 0x2d ) & 0x70 ) != 0x40 || ( *(char*)( (long)param_2 + 0x32 ) != -1 ) ) )) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " location=");
            ::{lambda (unsigned_int);
            #2
            ( (_lambda_unsigned_int__2_*)&local_218,*(ushort*)( (long)param_2 + 0x2c ) & 0xfff );
            if (( *(byte*)( (long)param_2 + 0x2d ) & 0x70 ) != 0x40) {
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " component=");
               ::{lambda (unsigned_int);
               #2
               ( (_lambda_unsigned_int__2_*)&local_218,*(byte*)( (long)param_2 + 0x2d ) >> 4 & 7 );
            }

            if (*(char*)( (long)param_2 + 0x32 ) != -1) {
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " index=");
               ::{lambda (unsigned_int);
               #2
               ( (_lambda_unsigned_int__2_*)&local_218,( uint ) * (byte*)( (long)param_2 + 0x32 ) );
            }

         }

         if (( *(uint*)( (long)param_2 + 0x2c ) & 0x3f8000 ) != 0x1f8000) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " set=");
            ::{lambda (unsigned_int);
            #2
            ( (_lambda_unsigned_int__2_*)&local_218,*(uint*)( (long)param_2 + 0x2c ) >> 0xf & 0x7f );
         }

         if ((short)param_2[6] != -1) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " binding=");
            ::{lambda (unsigned_int);
            #2
            ( (_lambda_unsigned_int__2_*)&local_218,( uint ) * (ushort*)( param_2 + 6 ) );
         }

         if (*(char*)( (long)param_2 + 0x33 ) != -1) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " stream=");
            ::{lambda (unsigned_int);
            #2
            ( (_lambda_unsigned_int__2_*)&local_218,( uint ) * (byte*)( (long)param_2 + 0x33 ) );
         }

         if (( *(byte*)( (long)param_2 + 0x1f ) & 0x70 ) != 0) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
            pcVar15 = "row_major";
            bVar6 = *(byte*)( (long)param_2 + 0x1f ) >> 4 & 7;
            if (( bVar6 != 1 ) && ( pcVar15 = bVar6 != 2 )) {
               pcVar15 = "none";
            }

            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, pcVar15);
         }

         if (( *(byte*)( param_2 + 4 ) & 0xf ) != 0) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
            switch (*(byte*)( param_2 + 4 ) & 0xf) {
               case 1:
          pcVar15 = "shared";
          break;
               case 2:
          pcVar15 = "std140";
          break;
               case 3:
          pcVar15 = "std430";
          break;
               case 4:
          pcVar15 = "packed";
          break;
               case 5:
          pcVar15 = "scalar";
          break;
               default:
          pcVar15 = "none";
            }

            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, pcVar15);
         }

         if (*(int*)( (long)param_2 + 0x24 ) != -1) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " offset=");
            ::{lambda (int);
            #3
            ( (_lambda_int__3_*)&local_210,*(int*)( (long)param_2 + 0x24 ) );
         }

         if ((int)param_2[5] != -1) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " align=");
            ::{lambda (int);
            #3
         }

         if (*(char*)( (long)param_2 + 0x3c ) != '\0') {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
            pcVar15 = (char*)TQualifier::getLayoutFormatString(*(undefined1*)( (long)param_2 + 0x3c ));
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, pcVar15);
         }

         uVar7 = *(ushort*)( (long)param_2 + 0x36 );
         if (( ~*(byte *)((long)param_2 + 0x34) & 0xf ) == 0) {
            LAB_001126b0:if (( ~uVar7 & 0x7ffc ) != 0) {
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " xfb_offset=");
               ::{lambda (unsigned_int);
               #2
               ( (_lambda_unsigned_int__2_*)&local_218,*(ushort*)( (long)param_2 + 0x36 ) >> 2 & 0x1fff );
            }

         }
 else if (( ~uVar7 & 0x7ffc ) != 0) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " xfb_buffer=");
            ::{lambda (unsigned_int);
            #2
            ( (_lambda_unsigned_int__2_*)&local_218,*(byte*)( (long)param_2 + 0x34 ) & 0xf );
            uVar7 = *(ushort*)( (long)param_2 + 0x36 );
            goto LAB_001126b0;
         }

         if (( ~*(uint *)((long)param_2 + 0x34) & 0x3fff0 ) != 0) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " xfb_stride=");
            ::{lambda (unsigned_int);
            #2
            ( (_lambda_unsigned_int__2_*)&local_218,*(uint*)( (long)param_2 + 0x34 ) >> 4 & 0x3fff );
         }

         if ((char)param_2[7] != -1) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " input_attachment_index=");
            ::{lambda (unsigned_int);
            #2
            ( (_lambda_unsigned_int__2_*)&local_218,( uint ) * (byte*)( param_2 + 7 ) );
         }

         if (( ~*(uint *)(param_2 + 7) & 0x7ff00 ) != 0) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " constant_id=");
            ::{lambda (unsigned_int);
            #2
            ( (_lambda_unsigned_int__2_*)&local_218,*(uint*)( param_2 + 7 ) >> 8 & 0x7ff );
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
            ( (_lambda_unsigned_int__2_*)&local_218,1 << ( ( byte )(*(ushort*)( (long)param_2 + 0x3a ) >> 3) & 0x1f ) );
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
            ( (_lambda_int__3_*)&local_210,*(int*)( (long)param_2 + 0x44 ) );
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

      LAB_00112845:if (( *(byte*)( (long)param_2 + 0x1b ) & 0x10 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " invariant");
      }

      if (( *(byte*)( (long)param_2 + 0x1c ) & 0x10 ) == 0) {
         bVar6 = *(byte*)( (long)param_2 + 0x1b );
         if (( bVar6 & 0x20 ) == 0) goto LAB_00112868;
         LAB_0011492c:uVar20 = *(ulong*)( param_1 + 0x10 );
         if (0x7fffffffffffffff - uVar20 < 9) goto LAB_00115757;
         if (pbVar1 == *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 )) {
            uVar14 = 0xf;
         }
 else {
            uVar14 = *(ulong*)( param_1 + 0x18 );
         }

         if (uVar14 < uVar20 + 9) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, " centroid", 9);
         }
 else {
            pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) + uVar20;
            *(undefined8*)pbVar10 = 0x696f72746e656320;
            pbVar10[8] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x64;
         }

         *(ulong*)( param_1 + 0x10 ) = uVar20 + 9;
         *(undefined1*)( *(long*)( param_1 + 8 ) + 9 + uVar20 ) = 0;
         bVar6 = *(byte*)( (long)param_2 + 0x1b );
         if (( bVar6 & 0x40 ) != 0) goto LAB_00114994;
         LAB_00112870:if (-1 < (char)bVar6) goto LAB_00112878;
         LAB_001149b0:uVar20 = *(ulong*)( param_1 + 0x10 );
         if (0x7fffffffffffffff - uVar20 < 5) goto LAB_00115757;
         if (pbVar1 == *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 )) {
            uVar14 = 0xf;
         }
 else {
            uVar14 = *(ulong*)( param_1 + 0x18 );
         }

         if (uVar14 < uVar20 + 5) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, " flat", 5);
         }
 else {
            pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) + uVar20;
            *(undefined4*)pbVar10 = 0x616c6620;
            pbVar10[4] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x74;
         }

         *(ulong*)( param_1 + 0x10 ) = uVar20 + 5;
         *(undefined1*)( *(long*)( param_1 + 8 ) + 5 + uVar20 ) = 0;
         bVar6 = *(byte*)( (long)param_2 + 0x1c );
      }
 else {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " noContraction");
         bVar6 = *(byte*)( (long)param_2 + 0x1b );
         if (( bVar6 & 0x20 ) != 0) goto LAB_0011492c;
         LAB_00112868:if (( bVar6 & 0x40 ) == 0) goto LAB_00112870;
         LAB_00114994:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " smooth");
         if (*(char*)( (long)param_2 + 0x1b ) < '\0') goto LAB_001149b0;
         LAB_00112878:bVar6 = *(byte*)( (long)param_2 + 0x1c );
      }

      if (( bVar6 & 0x20 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " noperspective");
         bVar6 = *(byte*)( (long)param_2 + 0x1c );
      }

      if (( bVar6 & 0x40 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " __explicitInterpAMD");
         bVar6 = *(byte*)( (long)param_2 + 0x1c );
      }

      if ((char)bVar6 < '\0') {
         uVar20 = *(ulong*)( param_1 + 0x10 );
         if (0x7fffffffffffffff - uVar20 < 0xc) goto LAB_00115757;
         if (pbVar1 == *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 )) {
            uVar14 = 0xf;
         }
 else {
            uVar14 = *(ulong*)( param_1 + 0x18 );
         }

         if (uVar14 < uVar20 + 0xc) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, " pervertexNV", 0xc);
         }
 else {
            pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) + uVar20;
            *(undefined8*)pbVar10 = 0x7472657672657020;
            *(undefined4*)( pbVar10 + 8 ) = 0x564e7865;
         }

         *(ulong*)( param_1 + 0x10 ) = uVar20 + 0xc;
         *(undefined1*)( *(long*)( param_1 + 8 ) + 0xc + uVar20 ) = 0;
      }

      bVar6 = *(byte*)( (long)param_2 + 0x1d );
      if (( bVar6 & 1 ) != 0) {
         uVar20 = *(ulong*)( param_1 + 0x10 );
         if (0x7fffffffffffffff - uVar20 < 0xd) goto LAB_00115757;
         if (pbVar1 == *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 )) {
            uVar14 = 0xf;
         }
 else {
            uVar14 = *(ulong*)( param_1 + 0x18 );
         }

         if (uVar14 < uVar20 + 0xd) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, " pervertexEXT", 0xd);
         }
 else {
            pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) + uVar20;
            *(undefined8*)pbVar10 = 0x7472657672657020;
            *(undefined8*)( pbVar10 + 5 ) = 0x5458457865747265;
         }

         *(ulong*)( param_1 + 0x10 ) = uVar20 + 0xd;
         *(undefined1*)( *(long*)( param_1 + 8 ) + 0xd + uVar20 ) = 0;
         bVar6 = *(byte*)( (long)param_2 + 0x1d );
      }

      if (( bVar6 & 2 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " perprimitiveNV");
         bVar6 = *(byte*)( (long)param_2 + 0x1d );
      }

      if (( bVar6 & 4 ) == 0) {
         if (( bVar6 & 8 ) == 0) goto LAB_001128ba;
         LAB_001143b5:uVar20 = *(ulong*)( param_1 + 0x10 );
         if (0x7fffffffffffffff - uVar20 < 7) goto LAB_00115757;
         if (pbVar1 == *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 )) {
            uVar14 = 0xf;
         }
 else {
            uVar14 = *(ulong*)( param_1 + 0x18 );
         }

         if (uVar14 < uVar20 + 7) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, " taskNV", 7);
         }
 else {
            pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) + uVar20;
            *(undefined4*)pbVar10 = 0x73617420;
            *(undefined4*)( pbVar10 + 3 ) = 0x564e6b73;
         }

         *(ulong*)( param_1 + 0x10 ) = uVar20 + 7;
         *(undefined1*)( *(long*)( param_1 + 8 ) + 7 + uVar20 ) = 0;
         bVar6 = *(byte*)( (long)param_2 + 0x1d );
         if (( bVar6 & 0x10 ) != 0) goto LAB_00114419;
         LAB_001128c2:if (( bVar6 & 0x20 ) == 0) goto LAB_001128ca;
         LAB_00114435:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " sample");
         bVar6 = *(byte*)( (long)param_2 + 0x1e );
         if (( bVar6 & 2 ) != 0) goto LAB_00114451;
         LAB_001128d7:if (( bVar6 & 8 ) == 0) goto LAB_001128df;
         LAB_001144b9:uVar20 = *(ulong*)( param_1 + 0x10 );
         if (0x7fffffffffffffff - uVar20 < 0xf) goto LAB_00115757;
         if (pbVar1 == *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 )) {
            uVar14 = 0xf;
         }
 else {
            uVar14 = *(ulong*)( param_1 + 0x18 );
         }

         if (uVar14 < uVar20 + 0xf) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, " devicecoherent", 0xf);
         }
 else {
            pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) + uVar20;
            *(undefined8*)pbVar10 = 0x6365636976656420;
            *(undefined8*)( pbVar10 + 7 ) = 0x746e657265686f63;
         }

         *(ulong*)( param_1 + 0x10 ) = uVar20 + 0xf;
         *(undefined1*)( *(long*)( param_1 + 8 ) + 0xf + uVar20 ) = 0;
         bVar6 = *(byte*)( (long)param_2 + 0x1e );
         if (( bVar6 & 0x10 ) != 0) goto LAB_0011452b;
         LAB_001128e7:if (( bVar6 & 0x20 ) == 0) goto LAB_001128ef;
         LAB_00114594:uVar4 = _UNK_00115e68;
         uVar9 = __LC500;
         uVar20 = *(ulong*)( param_1 + 0x10 );
         if (0x7fffffffffffffff - uVar20 < 0x12) goto LAB_00115757;
         if (pbVar1 == *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 )) {
            uVar14 = 0xf;
         }
 else {
            uVar14 = *(ulong*)( param_1 + 0x18 );
         }

         if (uVar14 < uVar20 + 0x12) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, " workgroupcoherent", 0x12);
         }
 else {
            pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) + uVar20;
            *(undefined2*)( pbVar10 + 0x10 ) = 0x746e;
            *(undefined8*)pbVar10 = uVar9;
            *(undefined8*)( pbVar10 + 8 ) = uVar4;
         }

         *(ulong*)( param_1 + 0x10 ) = uVar20 + 0x12;
         *(undefined1*)( *(long*)( param_1 + 8 ) + 0x12 + uVar20 ) = 0;
         bVar6 = *(byte*)( (long)param_2 + 0x1e );
         if (( bVar6 & 0x40 ) != 0) goto LAB_001145ff;
         LAB_001128f7:if (-1 < (char)bVar6) goto LAB_001128ff;
         LAB_00114665:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " shadercallcoherent");
         if (( *(byte*)( (long)param_2 + 0x1f ) & 1 ) != 0) goto LAB_0011467f;
         LAB_0011290a:if (( *(byte*)( (long)param_2 + 0x1e ) & 4 ) == 0) goto LAB_00112915;
         LAB_00114699:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " volatile");
         bVar6 = *(byte*)( (long)param_2 + 0x1d );
         if (( bVar6 & 0x40 ) != 0) goto LAB_001146b5;
         LAB_00112922:if (-1 < (char)bVar6) goto LAB_0011292a;
         LAB_001146d1:uVar20 = *(ulong*)( param_1 + 0x10 );
         if (0x7fffffffffffffff - uVar20 < 9) goto LAB_00115757;
         if (pbVar1 == *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 )) {
            uVar14 = 0xf;
         }
 else {
            uVar14 = *(ulong*)( param_1 + 0x18 );
         }

         if (uVar14 < uVar20 + 9) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, " readonly", 9);
         }
 else {
            pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) + uVar20;
            *(undefined8*)pbVar10 = 0x6c6e6f6461657220;
            pbVar10[8] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x79;
         }

         *(ulong*)( param_1 + 0x10 ) = uVar20 + 9;
         *(undefined1*)( *(long*)( param_1 + 8 ) + 9 + uVar20 ) = 0;
         if (( *(byte*)( (long)param_2 + 0x1e ) & 1 ) != 0) goto LAB_00114737;
         LAB_00112935:bVar6 = *(byte*)( (long)param_2 + 0x1c );
         if (( bVar6 & 1 ) == 0) goto LAB_00112942;
         LAB_00114753:uVar4 = _UNK_00115e88;
         uVar9 = __LC502;
         uVar20 = *(ulong*)( param_1 + 0x10 );
         if (0x7fffffffffffffff - uVar20 < 0x18) goto LAB_00115757;
         if (pbVar1 == *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 )) {
            uVar14 = 0xf;
         }
 else {
            uVar14 = *(ulong*)( param_1 + 0x18 );
         }

         if (uVar14 < uVar20 + 0x18) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, " specialization-constant", 0x18);
         }
 else {
            pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) + uVar20;
            *(undefined8*)( pbVar10 + 0x10 ) = 0x746e6174736e6f63;
            *(undefined8*)pbVar10 = uVar9;
            *(undefined8*)( pbVar10 + 8 ) = uVar4;
         }

         *(ulong*)( param_1 + 0x10 ) = uVar20 + 0x18;
         *(undefined1*)( *(long*)( param_1 + 8 ) + 0x18 + uVar20 ) = 0;
         if (( *(byte*)( (long)param_2 + 0x1c ) & 2 ) != 0) goto LAB_001147c3;
         LAB_0011294a:bVar6 = *(byte*)( (long)param_2 + 0x1f );
      }
 else {
         uVar20 = *(ulong*)( param_1 + 0x10 );
         if (0x7fffffffffffffff - uVar20 < 10) goto LAB_00115757;
         if (pbVar1 == *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 )) {
            uVar14 = 0xf;
         }
 else {
            uVar14 = *(ulong*)( param_1 + 0x18 );
         }

         if (uVar14 < uVar20 + 10) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, " perviewNV", 10);
         }
 else {
            pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) + uVar20;
            *(undefined8*)pbVar10 = 0x7765697672657020;
            *(undefined2*)( pbVar10 + 8 ) = 0x564e;
         }

         *(ulong*)( param_1 + 0x10 ) = uVar20 + 10;
         *(undefined1*)( *(long*)( param_1 + 8 ) + 10 + uVar20 ) = 0;
         bVar6 = *(byte*)( (long)param_2 + 0x1d );
         if (( bVar6 & 8 ) != 0) goto LAB_001143b5;
         LAB_001128ba:if (( bVar6 & 0x10 ) == 0) goto LAB_001128c2;
         LAB_00114419:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " patch");
         if (( *(byte*)( (long)param_2 + 0x1d ) & 0x20 ) != 0) goto LAB_00114435;
         LAB_001128ca:bVar6 = *(byte*)( (long)param_2 + 0x1e );
         if (( bVar6 & 2 ) == 0) goto LAB_001128d7;
         LAB_00114451:uVar20 = *(ulong*)( param_1 + 0x10 );
         if (0x7fffffffffffffff - uVar20 < 9) goto LAB_00115757;
         if (pbVar1 == *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 )) {
            uVar14 = 0xf;
         }
 else {
            uVar14 = *(ulong*)( param_1 + 0x18 );
         }

         if (uVar14 < uVar20 + 9) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, " coherent", 9);
         }
 else {
            pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) + uVar20;
            *(undefined8*)pbVar10 = 0x6e657265686f6320;
            pbVar10[8] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x74;
         }

         *(ulong*)( param_1 + 0x10 ) = uVar20 + 9;
         *(undefined1*)( *(long*)( param_1 + 8 ) + 9 + uVar20 ) = 0;
         bVar6 = *(byte*)( (long)param_2 + 0x1e );
         if (( bVar6 & 8 ) != 0) goto LAB_001144b9;
         LAB_001128df:if (( bVar6 & 0x10 ) == 0) goto LAB_001128e7;
         LAB_0011452b:uVar4 = _UNK_00115e58;
         uVar9 = __LC499;
         uVar20 = *(ulong*)( param_1 + 0x10 );
         if (0x7fffffffffffffff - uVar20 < 0x14) goto LAB_00115757;
         if (pbVar1 == *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 )) {
            uVar14 = 0xf;
         }
 else {
            uVar14 = *(ulong*)( param_1 + 0x18 );
         }

         if (uVar14 < uVar20 + 0x14) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, " queuefamilycoherent", 0x14);
         }
 else {
            pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) + uVar20;
            *(undefined4*)( pbVar10 + 0x10 ) = 0x746e6572;
            *(undefined8*)pbVar10 = uVar9;
            *(undefined8*)( pbVar10 + 8 ) = uVar4;
         }

         *(ulong*)( param_1 + 0x10 ) = uVar20 + 0x14;
         *(undefined1*)( *(long*)( param_1 + 8 ) + 0x14 + uVar20 ) = 0;
         bVar6 = *(byte*)( (long)param_2 + 0x1e );
         if (( bVar6 & 0x20 ) != 0) goto LAB_00114594;
         LAB_001128ef:if (( bVar6 & 0x40 ) == 0) goto LAB_001128f7;
         LAB_001145ff:uVar4 = _UNK_00115e78;
         uVar9 = __LC501;
         uVar20 = *(ulong*)( param_1 + 0x10 );
         if (0x7fffffffffffffff - uVar20 < 0x11) goto LAB_00115757;
         if (pbVar1 == *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 )) {
            uVar14 = 0xf;
         }
 else {
            uVar14 = *(ulong*)( param_1 + 0x18 );
         }

         if (uVar14 < uVar20 + 0x11) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, " subgroupcoherent", 0x11);
         }
 else {
            pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) + uVar20;
            pbVar10[0x10] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x74;
            *(undefined8*)pbVar10 = uVar9;
            *(undefined8*)( pbVar10 + 8 ) = uVar4;
         }

         *(ulong*)( param_1 + 0x10 ) = uVar20 + 0x11;
         *(undefined1*)( *(long*)( param_1 + 8 ) + 0x11 + uVar20 ) = 0;
         if (*(char*)( (long)param_2 + 0x1e ) < '\0') goto LAB_00114665;
         LAB_001128ff:if (( *(byte*)( (long)param_2 + 0x1f ) & 1 ) == 0) goto LAB_0011290a;
         LAB_0011467f:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " nonprivate");
         if (( *(byte*)( (long)param_2 + 0x1e ) & 4 ) != 0) goto LAB_00114699;
         LAB_00112915:bVar6 = *(byte*)( (long)param_2 + 0x1d );
         if (( bVar6 & 0x40 ) == 0) goto LAB_00112922;
         LAB_001146b5:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " restrict");
         if (*(char*)( (long)param_2 + 0x1d ) < '\0') goto LAB_001146d1;
         LAB_0011292a:if (( *(byte*)( (long)param_2 + 0x1e ) & 1 ) == 0) goto LAB_00112935;
         LAB_00114737:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " writeonly");
         bVar6 = *(byte*)( (long)param_2 + 0x1c );
         if (( bVar6 & 1 ) != 0) goto LAB_00114753;
         LAB_00112942:if (( bVar6 & 2 ) == 0) goto LAB_0011294a;
         LAB_001147c3:uVar20 = *(ulong*)( param_1 + 0x10 );
         if (0x7fffffffffffffff - uVar20 < 0xb) goto LAB_00115757;
         if (pbVar1 == *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 )) {
            uVar14 = 0xf;
         }
 else {
            uVar14 = *(ulong*)( param_1 + 0x18 );
         }

         if (uVar14 < uVar20 + 0xb) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, " nonuniform", 0xb);
         }
 else {
            pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) + uVar20;
            *(undefined8*)pbVar10 = 0x66696e756e6f6e20;
            *(undefined4*)( pbVar10 + 7 ) = 0x6d726f66;
         }

         *(ulong*)( param_1 + 0x10 ) = uVar20 + 0xb;
         *(undefined1*)( *(long*)( param_1 + 8 ) + 0xb + uVar20 ) = 0;
         bVar6 = *(byte*)( (long)param_2 + 0x1f );
      }

      if (( bVar6 & 2 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " null-init");
         bVar6 = *(byte*)( (long)param_2 + 0x1f );
      }

      if (( bVar6 & 4 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " spirv_by_reference");
         bVar6 = *(byte*)( (long)param_2 + 0x1f );
      }

      if (( bVar6 & 8 ) != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " spirv_literal");
      }

      uVar20 = *(ulong*)( param_1 + 0x10 );
      if (uVar20 == 0x7fffffffffffffff) goto LAB_00115757;
      if (pbVar1 == *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 )) {
         uVar14 = 0xf;
      }
 else {
         uVar14 = *(ulong*)( param_1 + 0x18 );
      }

      if (uVar14 < uVar20 + 1) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, " ", 1);
      }
 else {
         ( *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) )[uVar20] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x20;
      }

      *(ulong*)( param_1 + 0x10 ) = uVar20 + 1;
      *(undefined1*)( *(long*)( param_1 + 8 ) + 1 + uVar20 ) = 0;
      switch (*(byte*)( param_2 + 3 ) & 0x7f) {
         case 0:
      uVar20 = 4;
      pcVar15 = &_LC365;
      break;
         case 1:
      uVar20 = 6;
      pcVar15 = "global";
      break;
         case 2:
      uVar20 = 5;
      pcVar15 = "const";
      break;
         case 3:
         case 0x10:
      uVar20 = 2;
      pcVar15 = &_LC370;
      break;
         case 4:
         case 0x11:
      uVar20 = 3;
      pcVar15 = &_LC371;
      break;
         case 5:
      uVar20 = 7;
      pcVar15 = "uniform";
      break;
         case 6:
      uVar20 = 6;
      pcVar15 = "buffer";
      break;
         case 7:
      uVar20 = 6;
      pcVar15 = "shared";
      break;
         case 8:
      uVar20 = 0x13;
      pcVar15 = "spirv_storage_class";
      break;
         case 9:
      uVar20 = 0xc;
      pcVar15 = "rayPayloadNV";
      break;
         case 10:
      uVar20 = 0xe;
      pcVar15 = "rayPayloadInNV";
      break;
         case 0xb:
      uVar20 = 0xe;
      pcVar15 = "hitAttributeNV";
      break;
         case 0xc:
      uVar20 = 0xe;
      pcVar15 = "callableDataNV";
      break;
         case 0xd:
      uVar20 = 0x10;
      pcVar15 = "callableDataInNV";
      break;
         case 0xe:
      uVar20 = 0x14;
      pcVar15 = "hitObjectAttributeNV";
      break;
         case 0xf:
      uVar20 = 0x14;
      pcVar15 = "taskPayloadSharedEXT";
      break;
         case 0x12:
      uVar20 = 5;
      pcVar15 = "inout";
      break;
         case 0x13:
      uVar20 = 0x11;
      pcVar15 = "const (read only)";
      break;
         case 0x14:
      uVar20 = 0xb;
      pcVar15 = "gl_VertexId";
      break;
         case 0x15:
      uVar20 = 0xd;
      pcVar15 = "gl_InstanceId";
      break;
         case 0x16:
      uVar20 = 0xb;
      pcVar15 = "gl_Position";
      break;
         case 0x17:
      uVar20 = 0xc;
      pcVar15 = "gl_PointSize";
      break;
         case 0x18:
      uVar20 = 0xd;
      pcVar15 = "gl_ClipVertex";
      break;
         case 0x19:
      uVar20 = 0xe;
      pcVar15 = "gl_FrontFacing";
      break;
         case 0x1a:
      uVar20 = 0xc;
      pcVar15 = "gl_FragCoord";
      break;
         case 0x1b:
      uVar20 = 0xd;
      pcVar15 = "gl_PointCoord";
      break;
         case 0x1c:
      uVar20 = 9;
      pcVar15 = "fragColor";
      break;
         case 0x1d:
      uVar20 = 0xc;
      pcVar15 = "gl_FragDepth";
      break;
         case 0x1e:
      uVar20 = 0x14;
      pcVar15 = "gl_FragStencilRefARB";
      break;
         default:
      uVar20 = 0x11;
      pcVar15 = "unknown qualifier";
      }

      uVar14 = *(ulong*)( param_1 + 0x10 );
      if (0x7fffffffffffffff - uVar14 < uVar20) goto LAB_00115757;
      pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
      uVar11 = uVar14 + uVar20;
      if (pbVar1 == pbVar10) {
         uVar17 = 0xf;
      }
 else {
         uVar17 = *(ulong*)( param_1 + 0x18 );
      }

      if (uVar17 < uVar11) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar14, 0, pcVar15, uVar20);
         LAB_00112a50:pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
      }
 else {
         pbVar19 = pbVar10 + uVar14;
         uVar16 = (uint)uVar20;
         if (7 < uVar16) {
            *(undefined8*)pbVar19 = *(undefined8*)pcVar15;
            *(undefined8*)( pbVar19 + ( uVar20 - 8 ) ) = *(undefined8*)( (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)pcVar15 + ( uVar20 - 8 ) );
            lVar13 = (long)pbVar19 - ( ( ulong )(pbVar19 + 8) & 0xfffffffffffffff8 );
            uVar16 = uVar16 + (int)lVar13 & 0xfffffff8;
            if (7 < uVar16) {
               uVar8 = 0;
               do {
                  uVar20 = (ulong)uVar8;
                  uVar8 = uVar8 + 8;
                  *(undefined8*)( ( ( ulong )(pbVar19 + 8) & 0xfffffffffffffff8 ) + uVar20 ) = *(undefined8*)( (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)pcVar15 + ( uVar20 - lVar13 ) );
               }
 while ( uVar8 < uVar16 );
            }

            goto LAB_00112a50;
         }

         if (( uVar20 & 4 ) == 0) {
            if (uVar16 != 0) {
               *pbVar19 = ( basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> ) * pcVar15;
               if (( uVar20 & 2 ) == 0) goto LAB_00112a50;
               *(undefined2*)( pbVar19 + ( uVar20 - 2 ) ) = *(undefined2*)( (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)pcVar15 + ( uVar20 - 2 ) );
               pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
            }

         }
 else {
            *(undefined4*)pbVar19 = *(undefined4*)pcVar15;
            *(undefined4*)( pbVar19 + ( uVar20 - 4 ) ) = *(undefined4*)( (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)pcVar15 + ( uVar20 - 4 ) );
            pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
         }

      }

      *(ulong*)( param_1 + 0x10 ) = uVar11;
      pbVar10[uVar11] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
   }

   if (param_6 == '\0') goto LAB_00113000;
   if (param_3 == '\0') {
      lVar13 = *param_2;
      if (*(code**)( lVar13 + 0xe8 ) == isArray) {
         lVar22 = param_2[0xc];
         if (lVar22 != 0) {
            LAB_00113057:lVar21 = 0;
            lVar13 = *(long*)( lVar22 + 8 );
            uVar9 = _UNK_00115e98;
            while (_UNK_00115e98 = uVar9,lVar13 != 0) {
               if ((int)( *(long*)( lVar13 + 0x10 ) - *(long*)( lVar13 + 8 ) >> 4 ) <= (int)lVar21) break;
               uVar20 = *(ulong*)( param_1 + 0x10 );
               iVar18 = *(int*)( *(long*)( lVar13 + 8 ) + lVar21 * 0x10 );
               if (iVar18 == 0 && (int)lVar21 == 0) {
                  if (*(char*)( lVar22 + 0x15 ) == '\0') goto LAB_0011308a;
                  if (0x7fffffffffffffff - uVar20 < 0x17) goto LAB_00115757;
                  if (pbVar1 == *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 )) {
                     uVar14 = 0xf;
                  }
 else {
                     uVar14 = *(ulong*)( param_1 + 0x18 );
                  }

                  if (uVar14 < uVar20 + 0x17) {
                     std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, " runtime-sized array of", 0x17);
                  }
 else {
                     pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) + uVar20;
                     *(undefined8*)pbVar10 = __LC503;
                     *(undefined8*)( pbVar10 + 8 ) = uVar9;
                     *(undefined8*)( pbVar10 + 0xf ) = 0x666f207961727261;
                  }

                  *(ulong*)( param_1 + 0x10 ) = uVar20 + 0x17;
                  *(undefined1*)( *(long*)( param_1 + 8 ) + 0x17 + uVar20 ) = 0;
               }
 else {
                  if (iVar18 == 0) {
                     LAB_0011308a:if (0x7fffffffffffffff - uVar20 < 8) goto LAB_00115757;
                     if (pbVar1 == *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 )) {
                        uVar14 = 0xf;
                     }
 else {
                        uVar14 = *(ulong*)( param_1 + 0x18 );
                     }

                     if (uVar14 < uVar20 + 8) {
                        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, " unsized", 8);
                     }
 else {
                        *(undefined8*)( *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) + uVar20 ) = 0x64657a69736e7520;
                     }

                     *(ulong*)( param_1 + 0x10 ) = uVar20 + 8;
                     *(undefined1*)( *(long*)( param_1 + 8 ) + 8 + uVar20 ) = 0;
                     if (lVar21 == 0) {
                        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
                        iVar18 = *(int*)( param_2[0xc] + 0x10 );
                        if (iVar18 < 1) {
                           iVar18 = 1;
                        }

                        ::{lambda (int);
                        #3
                     }

                  }
 else {
                     if (uVar20 == 0x7fffffffffffffff) goto LAB_00115757;
                     if (pbVar1 == *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 )) {
                        uVar14 = 0xf;
                     }
 else {
                        uVar14 = *(ulong*)( param_1 + 0x18 );
                     }

                     if (uVar14 < uVar20 + 1) {
                        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, " ", 1);
                     }
 else {
                        ( *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) )[uVar20] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x20;
                     }

                     *(ulong*)( param_1 + 0x10 ) = uVar20 + 1;
                     *(undefined1*)( *(long*)( param_1 + 8 ) + 1 + uVar20 ) = 0;
                     ::{lambda (int);
                     #3
                     ( (_lambda_int__3_*)&local_210,*(int*)( *(long*)( *(long*)( param_2[0xc] + 8 ) + 8 ) + lVar21 * 0x10 ) );
                  }

                  uVar4 = _UNK_00115ea8;
                  uVar9 = __LC504;
                  uVar20 = *(ulong*)( param_1 + 0x10 );
                  if (0x7fffffffffffffff - uVar20 < 0x11) goto LAB_00115757;
                  if (pbVar1 == *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 )) {
                     uVar14 = 0xf;
                  }
 else {
                     uVar14 = *(ulong*)( param_1 + 0x18 );
                  }

                  if (uVar14 < uVar20 + 0x11) {
                     std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, "-element array of", 0x11);
                  }
 else {
                     pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) + uVar20;
                     pbVar10[0x10] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x66;
                     *(undefined8*)pbVar10 = uVar9;
                     *(undefined8*)( pbVar10 + 8 ) = uVar4;
                  }

                  *(ulong*)( param_1 + 0x10 ) = uVar20 + 0x11;
                  *(undefined1*)( *(long*)( param_1 + 8 ) + 0x11 + uVar20 ) = 0;
               }

               lVar22 = param_2[0xc];
               lVar21 = lVar21 + 1;
               uVar9 = _UNK_00115e98;
               lVar13 = *(long*)( lVar22 + 8 );
            }
;
            goto LAB_00113228;
         }

      }
 else {
         cVar5 = ( **(code**)( lVar13 + 0xe8 ) )(param_2);
         if (cVar5 != '\0') {
            lVar22 = param_2[0xc];
            goto LAB_00113057;
         }

         LAB_00113228:lVar13 = *param_2;
      }

      if (*(code**)( lVar13 + 0x188 ) == isParameterized) {
         if (param_2[0x11] != 0) {
            LAB_00113250:if (( *(byte*)( (long)param_2 + 10 ) & 0x40 ) != 0) {
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "coopmat");
            }

            lVar22 = 0;
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "<");
            lVar13 = *(long*)( *(long*)( param_2[0x11] + 8 ) + 8 );
            if (lVar13 != 0) {
               while (true) {
                  if ((int)( *(long*)( lVar13 + 0x10 ) - *(long*)( lVar13 + 8 ) >> 4 ) <= (int)lVar22) break;
                  ::{lambda (int);
                  #3
                  ( (_lambda_int__3_*)&local_210,*(int*)( *(long*)( lVar13 + 8 ) + lVar22 * 0x10 ) );
                  lVar13 = *(long*)( *(long*)( param_2[0x11] + 8 ) + 8 );
                  if (( lVar13 == 0 ) || ( (int)( *(long*)( lVar13 + 0x10 ) - *(long*)( lVar13 + 8 ) >> 4 ) + -1 != (int)lVar22 )) {
                     uVar20 = *(ulong*)( param_1 + 0x10 );
                     if (0x7fffffffffffffff - uVar20 < 2) goto LAB_00115757;
                     if (pbVar1 == *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 )) {
                        uVar14 = 0xf;
                     }
 else {
                        uVar14 = *(ulong*)( param_1 + 0x18 );
                     }

                     if (uVar14 < uVar20 + 2) {
                        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, ", ", 2);
                     }
 else {
                        *(undefined2*)( *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) + uVar20 ) = 0x202c;
                     }

                     *(ulong*)( param_1 + 0x10 ) = uVar20 + 2;
                     *(undefined1*)( *(long*)( param_1 + 8 ) + 2 + uVar20 ) = 0;
                     lVar13 = *(long*)( *(long*)( param_2[0x11] + 8 ) + 8 );
                     if (lVar13 == 0) break;
                  }

                  lVar22 = lVar22 + 1;
               }
;
            }

            if (( *(byte*)( (long)param_2 + 0xb ) & 4 ) != 0) {
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, ", ");
               ::{lambda (int);
               #3
               ( (_lambda_int__3_*)&local_210,*(ushort*)( (long)param_2 + 10 ) >> 7 & 7 );
            }

            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, ">");
         }

      }
 else {
         cVar5 = ( **(code**)( lVar13 + 0x188 ) )(param_2);
         if (cVar5 != '\0') goto LAB_00113250;
      }

      if (( param_5 != '\0' ) && ( ( *(byte*)( (long)param_2 + 0x1b ) & 0xe ) != 0 )) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
         pcVar15 = "mediump";
         bVar6 = *(byte*)( (long)param_2 + 0x1b ) >> 1 & 7;
         if (bVar6 != 2) {
            if (bVar6 < 3) {
               pcVar15 = "";
               if (bVar6 != 0) {
                  pcVar15 = "lowp";
               }

            }
 else {
               pcVar15 = "highp";
               if (bVar6 != 3) {
                  pcVar15 = "unknown precision qualifier";
               }

            }

         }

         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, pcVar15);
      }

      lVar13 = *param_2;
      if (*(code**)( lVar13 + 0xe0 ) == isMatrix) {
         if (*(byte*)( (long)param_2 + 9 ) < 0x10) goto LAB_001133a4;
         LAB_001135c8:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
         ::{lambda (int);
         #3
         ( (_lambda_int__3_*)&local_210,( uint )(*(byte*)( (long)param_2 + 9 ) >> 4) );
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "X");
         ::{lambda (int);
         #3
         ( (_lambda_int__3_*)&local_210,*(byte*)( (long)param_2 + 10 ) & 0xf );
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " matrix of");
      }
 else {
         cVar5 = ( **(code**)( lVar13 + 0xe0 ) )(param_2);
         if (cVar5 != '\0') goto LAB_001135c8;
         lVar13 = *param_2;
         LAB_001133a4:if (*(code**)( lVar13 + 0xd8 ) == isVector) {
            if (( *(byte*)( (long)param_2 + 9 ) & 0xf ) < 2) {
               bVar6 = *(byte*)( (long)param_2 + 10 ) >> 4 & 1;
               goto LAB_001139cb;
            }

         }
 else {
            bVar6 = ( **(code**)( lVar13 + 0xd8 ) )(param_2);
            LAB_001139cb:if (bVar6 == 0) goto LAB_001133fb;
         }

         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
         ::{lambda (int);
         #3
         ( (_lambda_int__3_*)&local_210,*(byte*)( (long)param_2 + 9 ) & 0xf );
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "-component vector of");
      }

      LAB_001133fb:uVar20 = *(ulong*)( param_1 + 0x10 );
      if (uVar20 == 0x7fffffffffffffff) goto LAB_00115757;
      if (pbVar1 == *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 )) {
         uVar14 = 0xf;
      }
 else {
         uVar14 = *(ulong*)( param_1 + 0x18 );
      }

      if (uVar14 < uVar20 + 1) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, " ", 1);
      }
 else {
         ( *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) )[uVar20] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x20;
      }

      *(ulong*)( param_1 + 0x10 ) = uVar20 + 1;
      *(undefined1*)( *(long*)( param_1 + 8 ) + 1 + uVar20 ) = 0;
      if ((char)param_2[1] == '\x0e') {
         TSampler::getString_abi_cxx11_();
      }
 else {
         local_f8 = glslang::GetThreadPoolAllocator();
         switch ((char)param_2[1]) {
            case '\0':
        lVar13 = 4;
        pcVar15 = "void";
        break;
            case '\x01':
        lVar13 = 5;
        pcVar15 = "float";
        break;
            case '\x02':
        lVar13 = 6;
        pcVar15 = "double";
        break;
            case '\x03':
        lVar13 = 9;
        pcVar15 = "float16_t";
        break;
            case '\x04':
        lVar13 = 6;
        pcVar15 = "int8_t";
        break;
            case '\x05':
        lVar13 = 7;
        pcVar15 = "uint8_t";
        break;
            case '\x06':
        lVar13 = 7;
        pcVar15 = "int16_t";
        break;
            case '\a':
        lVar13 = 8;
        pcVar15 = "uint16_t";
        break;
            case '\b':
        lVar13 = 3;
        pcVar15 = "int";
        break;
            case '\t':
        lVar13 = 4;
        pcVar15 = "uint";
        break;
            case '\n':
        lVar13 = 7;
        pcVar15 = "int64_t";
        break;
            case '\v':
        lVar13 = 8;
        pcVar15 = "uint64_t";
        break;
            case '\f':
        lVar13 = 4;
        pcVar15 = "bool";
        break;
            case '\r':
        lVar13 = 0xb;
        pcVar15 = "atomic_uint";
        break;
            case '\x0e':
        lVar13 = 0xd;
        pcVar15 = "sampler/image";
        break;
            case '\x0f':
        lVar13 = 9;
        pcVar15 = "structure";
        break;
            case '\x10':
        lVar13 = 5;
        pcVar15 = "block";
        break;
            case '\x11':
        lVar13 = 0x17;
        pcVar15 = "accelerationStructureNV";
        break;
            case '\x12':
        lVar13 = 9;
        pcVar15 = "reference";
        break;
            case '\x13':
        lVar13 = 0xb;
        pcVar15 = "rayQueryEXT";
        break;
            default:
        lVar13 = 0xc;
        pcVar15 = "unknown type";
        break;
            case '\x15':
        lVar13 = 7;
        pcVar15 = "coopmat";
        break;
            case '\x16':
        lVar13 = 10;
        pcVar15 = "spirv_type";
        break;
            case '\x17':
        lVar13 = 6;
        pcVar15 = "string";
         }

         local_f0 = local_e0;
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_f8, pcVar15, pcVar15 + lVar13);
      }

      uVar20 = *(ulong*)( param_1 + 0x10 );
      if (0x7fffffffffffffff - uVar20 < local_e8) goto LAB_00115757;
      pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
      uVar14 = local_e8 + uVar20;
      if (pbVar1 == pbVar10) {
         uVar11 = 0xf;
      }
 else {
         uVar11 = *(ulong*)( param_1 + 0x18 );
      }

      if (uVar11 < uVar14) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, (char*)local_f0, local_e8);
         pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
      }
 else if (local_e8 != 0) {
         if (local_e8 == 1) {
            pbVar10[uVar20] = *local_f0;
            pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
         }
 else {
            memcpy(pbVar10 + uVar20, local_f0, local_e8);
            pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
         }

      }

      *(ulong*)( param_1 + 0x10 ) = uVar14;
      pbVar10[uVar14] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
      if (0x7f < *(ushort*)( param_2 + 3 )) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
         pcVar15 = (char*)GetBuiltInVariableString(*(ushort*)( param_2 + 3 ) >> 7);
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, pcVar15);
      }

      if (*(code**)( *param_2 + 0x128 ) == isStruct) {
         if (1 < ( byte )((char)param_2[1] - 0xfU)) goto LAB_00113000;
      }
 else {
         cVar5 = ( **(code**)( *param_2 + 0x128 ) )(param_2);
         if (cVar5 == '\0') goto LAB_00113000;
      }

      if (param_2[0xd] != 0) {
         uVar20 = 0;
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "{");
         lVar13 = param_2[0xd];
         lVar22 = *(long*)( lVar13 + 8 );
         if (lVar22 != *(long*)( lVar13 + 0x10 )) {
            do {
               lVar21 = uVar20 * 0x20;
               pcVar2 = *(code**)( **(long**)( lVar22 + lVar21 ) + 0x18 );
               if (pcVar2 == hiddenMember) {
                  if ((char)( *(long**)( lVar22 + lVar21 ) )[1] != '\0') {
                     LAB_00112e26:if (param_6 == '\0') {
                        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, ", ");
                     }

                     uVar9 = *(undefined8*)( *(long*)( param_2[0xd] + 8 ) + lVar21 );
                     local_98 = glslang::GetThreadPoolAllocator();
                     local_90 = local_80;
                     std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_98, &_LC34);
                     local_c8 = glslang::GetThreadPoolAllocator();
                     local_c0 = local_b0;
                     std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_c8, &_LC34);
                     getCompleteString(local_68, uVar9, 0, 1, 1, 1, &local_c8, &local_98);
                     uVar14 = *(ulong*)( param_1 + 0x10 );
                     if (local_58 <= 0x7fffffffffffffff - uVar14) {
                        pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
                        uVar11 = local_58 + uVar14;
                        if (pbVar1 == pbVar10) {
                           uVar17 = 0xf;
                        }
 else {
                           uVar17 = *(ulong*)( param_1 + 0x18 );
                        }

                        if (uVar17 < uVar11) {
                           std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar14, 0, (char*)local_60, local_58);
                           pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
                        }
 else if (local_58 != 0) {
                           if (local_58 == 1) {
                              pbVar10[uVar14] = *local_60;
                              pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
                           }
 else {
                              memcpy(pbVar10 + uVar14, local_60, local_58);
                              pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
                           }

                        }

                        *(ulong*)( param_1 + 0x10 ) = uVar11;
                        pbVar10[uVar11] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
                        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
                        plVar3 = *(long**)( *(long*)( param_2[0xd] + 8 ) + lVar21 );
                        pcVar2 = *(code**)( *plVar3 + 0x30 );
                        if (pcVar2 == getFieldName_abi_cxx11_) {
                           lVar13 = plVar3[0xe];
                        }
 else {
                           lVar13 = ( *pcVar2 )();
                        }

                        uVar14 = *(ulong*)( param_1 + 0x10 );
                        uVar11 = *(ulong*)( lVar13 + 0x10 );
                        pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( lVar13 + 8 );
                        if (uVar11 <= 0x7fffffffffffffff - uVar14) {
                           pbVar19 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
                           uVar17 = uVar11 + uVar14;
                           if (pbVar1 == pbVar19) {
                              uVar12 = 0xf;
                           }
 else {
                              uVar12 = *(ulong*)( param_1 + 0x18 );
                           }

                           if (uVar12 < uVar17) {
                              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar14, 0, (char*)pbVar10, uVar11);
                              pbVar19 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
                           }
 else if (uVar11 != 0) {
                              if (uVar11 == 1) {
                                 pbVar19[uVar14] = *pbVar10;
                                 pbVar19 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
                              }
 else {
                                 memcpy(pbVar19 + uVar14, pbVar10, uVar11);
                                 pbVar19 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
                              }

                           }

                           *(ulong*)( param_1 + 0x10 ) = uVar17;
                           pbVar19[uVar17] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
                           param_6 = '\0';
                           goto LAB_00112fc7;
                        }

                     }

                     goto LAB_00115757;
                  }

               }
 else {
                  cVar5 = ( *pcVar2 )();
                  if (cVar5 == '\0') goto LAB_00112e26;
                  LAB_00112fc7:lVar13 = param_2[0xd];
               }

               lVar22 = *(long*)( lVar13 + 8 );
               uVar20 = uVar20 + 1;
            }
 while ( uVar20 < ( ulong )(*(long*)( lVar13 + 0x10 ) - lVar22 >> 5) );
         }

         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "}");
      }

      goto LAB_00113000;
   }

   if (( param_5 != '\0' ) && ( ( *(byte*)( (long)param_2 + 0x1b ) & 0xe ) != 0 )) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
      pcVar15 = "mediump";
      bVar6 = *(byte*)( (long)param_2 + 0x1b ) >> 1 & 7;
      if (bVar6 != 2) {
         if (bVar6 < 3) {
            pcVar15 = "";
            if (bVar6 != 0) {
               pcVar15 = "lowp";
            }

         }
 else {
            pcVar15 = "highp";
            if (bVar6 != 3) {
               pcVar15 = "unknown precision qualifier";
            }

         }

      }

      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, pcVar15);
   }

   if (*(code**)( *param_2 + 0xd8 ) == isVector) {
      if (( *(byte*)( (long)param_2 + 9 ) & 0xf ) < 2) {
         bVar6 = *(byte*)( (long)param_2 + 10 ) >> 4 & 1;
         goto LAB_001136ab;
      }

      LAB_00112aaa:uVar20 = *(ulong*)( param_1 + 0x10 );
      if (uVar20 == 0x7fffffffffffffff) {
         LAB_00115757:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::append");
      }

      if (pbVar1 == *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 )) {
         uVar14 = 0xf;
      }
 else {
         uVar14 = *(ulong*)( param_1 + 0x18 );
      }

      if (uVar14 < uVar20 + 1) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, " ", 1);
      }
 else {
         ( *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) )[uVar20] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x20;
      }

      *(ulong*)( param_1 + 0x10 ) = uVar20 + 1;
      *(undefined1*)( *(long*)( param_1 + 8 ) + 1 + uVar20 ) = 0;
      bVar6 = *(byte*)( param_2 + 1 );
      if (bVar6 == 9) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "u");
      }
 else if (bVar6 < 10) {
         if (bVar6 == 2) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "d");
         }
 else if (bVar6 == 8) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "i");
         }

      }
 else if (bVar6 == 0xc) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "b");
      }

      if (*(code**)( *param_2 + 0xd8 ) == isVector) {
         if (( *(byte*)( (long)param_2 + 9 ) & 0xf ) < 2) {
            bVar6 = *(byte*)( (long)param_2 + 10 ) >> 4 & 1;
            goto LAB_00114c9b;
         }

      }
 else {
         bVar6 = ( **(code**)( *param_2 + 0xd8 ) )(param_2);
         LAB_00114c9b:if (bVar6 == 0) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "mat");
            ::{lambda (int);
            #3
            ( (_lambda_int__3_*)&local_210,( uint )(*(byte*)( (long)param_2 + 9 ) >> 4) );
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "x");
            ::{lambda (int);
            #3
            ( (_lambda_int__3_*)&local_210,*(byte*)( (long)param_2 + 10 ) & 0xf );
            goto LAB_00112b64;
         }

      }

      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "vec");
      ::{lambda (int);
      #3
      ( (_lambda_int__3_*)&local_210,*(byte*)( (long)param_2 + 9 ) & 0xf );
   }
 else {
      bVar6 = ( **(code**)( *param_2 + 0xd8 ) )(param_2);
      LAB_001136ab:if (bVar6 != 0) goto LAB_00112aaa;
      lVar13 = *param_2;
      if (*(code**)( lVar13 + 0xe0 ) != isMatrix) {
         cVar5 = ( **(code**)( lVar13 + 0xe0 ) )(param_2);
         if (cVar5 == '\0') {
            lVar13 = *param_2;
            goto LAB_001136d8;
         }

         goto LAB_00112aaa;
      }

      if (0xf < *(byte*)( (long)param_2 + 9 )) goto LAB_00112aaa;
      LAB_001136d8:if (*(code**)( lVar13 + 0x128 ) == isStruct) {
         if (( byte )((char)param_2[1] - 0xfU) < 2) goto LAB_001136ff;
         LAB_00113950:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
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
 else {
         cVar5 = ( **(code**)( lVar13 + 0x128 ) )(param_2);
         if (cVar5 == '\0') goto LAB_00113950;
         LAB_001136ff:if (param_2[0xd] == 0) goto LAB_00113950;
         uVar20 = 0;
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, *(char**)( param_8 + 8 ));
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "{");
         lVar13 = param_2[0xd];
         lVar22 = *(long*)( lVar13 + 8 );
         if (*(long*)( lVar13 + 0x10 ) != lVar22) {
            do {
               lVar21 = uVar20 * 0x20;
               pcVar2 = *(code**)( **(long**)( lVar22 + lVar21 ) + 0x18 );
               if (pcVar2 == hiddenMember) {
                  if ((char)( *(long**)( lVar22 + lVar21 ) )[1] != '\0') {
                     LAB_00113792:if (param_3 == '\0') {
                        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, ", ");
                     }

                     uVar9 = *(undefined8*)( *(long*)( param_2[0xd] + 8 ) + lVar21 );
                     local_158 = glslang::GetThreadPoolAllocator();
                     local_150 = local_140;
                     std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_158, &_LC34);
                     plVar3 = *(long**)( *(long*)( param_2[0xd] + 8 ) + lVar21 );
                     pcVar2 = *(code**)( *plVar3 + 0x30 );
                     if (pcVar2 == getFieldName_abi_cxx11_) {
                        lVar13 = plVar3[0xe];
                     }
 else {
                        lVar13 = ( *pcVar2 )();
                     }

                     local_188 = glslang::GetThreadPoolAllocator();
                     uVar14 = *(ulong*)( lVar13 + 0x10 );
                     local_180 = local_170;
                     __src = *(undefined1**)( lVar13 + 8 );
                     if (uVar14 < 0x10) {
                        if (uVar14 == 1) {
                           local_170[0] = CONCAT71(local_170[0]._1_7_, *__src);
                        }
 else if (uVar14 != 0) goto LAB_0011563c;
                     }
 else {
                        if ((long)uVar14 < 0) {
                           /* WARNING: Subroutine does not return */
                           std::__throw_length_error("basic_string::_M_create");
                        }

                        local_180 = (ulong*)glslang::TPoolAllocator::allocate(local_188);
                        local_170[0] = uVar14;
                        LAB_0011563c:memcpy(local_180, __src, uVar14);
                     }

                     *(undefined1*)( (long)local_180 + uVar14 ) = 0;
                     local_178 = uVar14;
                     getCompleteString(local_128, uVar9, 1, param_4, param_5, 1, &local_188, &local_158);
                     uVar14 = *(ulong*)( param_1 + 0x10 );
                     if (local_118 <= 0x7fffffffffffffff - uVar14) {
                        pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
                        uVar11 = local_118 + uVar14;
                        if (pbVar1 == pbVar10) {
                           uVar17 = 0xf;
                        }
 else {
                           uVar17 = *(ulong*)( param_1 + 0x18 );
                        }

                        if (uVar17 < uVar11) {
                           std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar14, 0, (char*)local_120, local_118);
                           pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
                        }
 else if (local_118 != 0) {
                           if (local_118 == 1) {
                              pbVar10[uVar14] = *local_120;
                              pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
                           }
 else {
                              memcpy(pbVar10 + uVar14, local_120, local_118);
                              pbVar10 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 );
                           }

                        }

                        *(ulong*)( param_1 + 0x10 ) = uVar11;
                        param_3 = '\0';
                        pbVar10[uVar11] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
                        goto LAB_001138fd;
                     }

                     goto LAB_00115757;
                  }

               }
 else {
                  cVar5 = ( *pcVar2 )();
                  if (cVar5 == '\0') goto LAB_00113792;
                  LAB_001138fd:lVar13 = param_2[0xd];
               }

               lVar22 = *(long*)( lVar13 + 8 );
               uVar20 = uVar20 + 1;
            }
 while ( uVar20 < ( ulong )(*(long*)( lVar13 + 0x10 ) - lVar22 >> 5) );
         }

         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, "}");
      }

   }

   LAB_00112b64:if (*(long*)( param_7 + 0x10 ) != 0) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, " ");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append(param_1, *(char**)( param_7 + 8 ));
   }

   if (*(code**)( *param_2 + 0xe8 ) == isArray) {
      lVar13 = param_2[0xc];
      if (lVar13 == 0) goto LAB_00113000;
   }
 else {
      cVar5 = ( **(code**)( *param_2 + 0xe8 ) )(param_2);
      if (cVar5 == '\0') goto LAB_00113000;
      lVar13 = param_2[0xc];
   }

   lVar22 = *(long*)( lVar13 + 8 );
   if (lVar22 != 0) {
      lVar21 = 0;
      do {
         if ((int)( *(long*)( lVar22 + 0x10 ) - *(long*)( lVar22 + 8 ) >> 4 ) <= (int)lVar21) break;
         uVar20 = *(ulong*)( param_1 + 0x10 );
         iVar18 = *(int*)( *(long*)( lVar22 + 8 ) + lVar21 * 0x10 );
         if (iVar18 == 0 && (int)lVar21 == 0) {
            if (*(char*)( lVar13 + 0x15 ) == '\0') goto LAB_00112bd2;
            if (0x7fffffffffffffff - uVar20 < 2) goto LAB_00115757;
            if (pbVar1 == *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 )) {
               uVar14 = 0xf;
            }
 else {
               uVar14 = *(ulong*)( param_1 + 0x18 );
            }

            if (uVar14 < uVar20 + 2) {
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, "[]", 2);
            }
 else {
               *(undefined2*)( *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) + uVar20 ) = 0x5d5b;
            }

            *(ulong*)( param_1 + 0x10 ) = uVar20 + 2;
            *(undefined1*)( *(long*)( param_1 + 8 ) + 2 + uVar20 ) = 0;
         }
 else {
            if (iVar18 == 0) {
               LAB_00112bd2:if (uVar20 == 0x7fffffffffffffff) goto LAB_00115757;
               if (pbVar1 == *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 )) {
                  uVar14 = 0xf;
               }
 else {
                  uVar14 = *(ulong*)( param_1 + 0x18 );
               }

               if (uVar14 < uVar20 + 1) {
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, "[", 1);
               }
 else {
                  ( *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) )[uVar20] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x5b;
               }

               *(ulong*)( param_1 + 0x10 ) = uVar20 + 1;
               *(undefined1*)( *(long*)( param_1 + 8 ) + 1 + uVar20 ) = 0;
               if (lVar21 == 0) {
                  iVar18 = *(int*)( param_2[0xc] + 0x10 );
                  if (iVar18 < 1) {
                     iVar18 = 1;
                  }

                  ::{lambda (int);
                  #3
               }

            }
 else {
               if (uVar20 == 0x7fffffffffffffff) goto LAB_00115757;
               if (pbVar1 == *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 )) {
                  uVar14 = 0xf;
               }
 else {
                  uVar14 = *(ulong*)( param_1 + 0x18 );
               }

               if (uVar14 < uVar20 + 1) {
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, "[", 1);
               }
 else {
                  ( *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) )[uVar20] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x5b;
               }

               *(ulong*)( param_1 + 0x10 ) = uVar20 + 1;
               *(undefined1*)( *(long*)( param_1 + 8 ) + 1 + uVar20 ) = 0;
               ::{lambda (int);
               #3
               ( (_lambda_int__3_*)&local_210,*(int*)( *(long*)( *(long*)( param_2[0xc] + 8 ) + 8 ) + lVar21 * 0x10 ) );
            }

            uVar20 = *(ulong*)( param_1 + 0x10 );
            if (uVar20 == 0x7fffffffffffffff) goto LAB_00115757;
            if (pbVar1 == *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 )) {
               uVar14 = 0xf;
            }
 else {
               uVar14 = *(ulong*)( param_1 + 0x18 );
            }

            if (uVar14 < uVar20 + 1) {
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(param_1, uVar20, 0, "]", 1);
            }
 else {
               ( *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( param_1 + 8 ) )[uVar20] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x5d;
            }

            *(ulong*)( param_1 + 0x10 ) = uVar20 + 1;
            *(undefined1*)( *(long*)( param_1 + 8 ) + 1 + uVar20 ) = 0;
         }

         lVar13 = param_2[0xc];
         lVar21 = lVar21 + 1;
         lVar22 = *(long*)( lVar13 + 8 );
      }
 while ( lVar22 != 0 );
   }

   LAB_00113000:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TIntermOperator::getCompleteString[abi:cxx11]() const */void glslang::TIntermOperator::getCompleteString_abi_cxx11_(void) {
   byte bVar1;
   uint uVar2;
   uint uVar3;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar4;
   char *pcVar5;
   ulong uVar6;
   ulong uVar7;
   long in_RSI;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *in_RDI;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar8;
   long lVar9;
   ulong uVar10;
   long in_FS_OFFSET;
   undefined8 local_88;
   undefined1 *local_80;
   undefined1 local_70[24];
   undefined8 local_58;
   undefined1 *local_50;
   undefined1 local_40[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = glslang::GetThreadPoolAllocator();
   local_50 = local_40;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_58, &_LC34, &_LC34);
   local_88 = glslang::GetThreadPoolAllocator();
   local_80 = local_70;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_88, &_LC34, &_LC34);
   TType::getCompleteString();
   if (( *(uint*)( in_RSI + 0xbc ) == 0 ) || ( *(uint*)( in_RSI + 0xbc ) == ( *(byte*)( in_RSI + 0x3b ) >> 1 & 7 ) )) goto LAB_00115a38;
   uVar7 = *(ulong*)( in_RDI + 0x10 );
   if (0x7fffffffffffffff - uVar7 < 0xf) goto LAB_00115c13;
   pbVar8 = in_RDI + 0x18;
   if (*(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( in_RDI + 8 ) == pbVar8) {
      uVar6 = 0xf;
   }
 else {
      uVar6 = *(ulong*)( in_RDI + 0x18 );
   }

   if (uVar6 < uVar7 + 0xf) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(in_RDI, uVar7, 0, ", operation at ", 0xf);
   }
 else {
      pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( in_RDI + 8 ) + uVar7;
      *(undefined8*)pbVar4 = 0x74617265706f202c;
      *(undefined8*)( pbVar4 + 7 ) = 0x207461206e6f6974;
   }

   *(ulong*)( in_RDI + 0x10 ) = uVar7 + 0xf;
   *(undefined1*)( *(long*)( in_RDI + 8 ) + 0xf + uVar7 ) = 0;
   uVar2 = *(uint*)( in_RSI + 0xbc );
   if (uVar2 == 0) {
      uVar7 = *(ulong*)( in_RDI + 0x10 );
      bVar1 = *(byte*)( in_RSI + 0x3b ) >> 1;
      uVar2 = bVar1 & 7;
      if (uVar2 == 2) {
         LAB_00115b00:uVar10 = 7;
         pcVar5 = "mediump";
         uVar6 = uVar7;
         goto LAB_00115a80;
      }

      if (2 < uVar2) {
         LAB_00115b70:uVar10 = 5;
         if (uVar2 != 3) {
            uVar10 = 0x1b;
         }

         pcVar5 = "highp";
         uVar6 = uVar7;
         if (uVar2 != 3) {
            pcVar5 = "unknown precision qualifier";
         }

         goto LAB_00115a80;
      }

      if (( bVar1 & 7 ) != 0) goto LAB_00115a73;
      pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( in_RDI + 8 );
      pcVar5 = &_LC34;
      uVar10 = 0;
      uVar6 = uVar7;
      if (pbVar4 != pbVar8) goto LAB_00115aa6;
      if (0xf < uVar7) goto LAB_00115b28;
      goto LAB_00115a30;
   }

   uVar7 = *(ulong*)( in_RDI + 0x10 );
   if (uVar2 == 2) goto LAB_00115b00;
   if (2 < uVar2) goto LAB_00115b70;
   LAB_00115a73:uVar10 = 4;
   pcVar5 = &_LC394;
   uVar6 = uVar7;
   LAB_00115a80:if (0x7fffffffffffffff - uVar6 < uVar10) {
      LAB_00115c13:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::append");
   }

   pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( in_RDI + 8 );
   uVar7 = uVar10 + uVar6;
   if (pbVar8 == pbVar4) {
      pbVar8 = pbVar4 + uVar6;
      if (uVar7 < 0x10) goto LAB_00115ab9;
   }
 else {
      LAB_00115aa6:if (uVar7 <= *(ulong*)( in_RDI + 0x18 )) {
         if (uVar10 == 0) goto LAB_00115a30;
         pbVar8 = pbVar4 + uVar6;
         LAB_00115ab9:uVar2 = (uint)uVar10;
         if (uVar2 < 8) {
            if (( uVar10 & 4 ) == 0) {
               if (uVar2 != 0) {
                  *pbVar8 = ( basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> ) * pcVar5;
                  if (( uVar10 & 2 ) == 0) goto LAB_00115bf0;
                  *(undefined2*)( pbVar8 + ( uVar10 - 2 ) ) = *(undefined2*)( (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)pcVar5 + ( uVar10 - 2 ) );
                  pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( in_RDI + 8 );
               }

            }
 else {
               *(undefined4*)pbVar8 = *(undefined4*)pcVar5;
               *(undefined4*)( pbVar8 + ( uVar10 - 4 ) ) = *(undefined4*)( (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)pcVar5 + ( uVar10 - 4 ) );
               pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( in_RDI + 8 );
            }

         }
 else {
            *(undefined8*)pbVar8 = *(undefined8*)pcVar5;
            *(undefined8*)( pbVar8 + ( uVar10 - 8 ) ) = *(undefined8*)( (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)pcVar5 + ( uVar10 - 8 ) );
            lVar9 = (long)pbVar8 - ( ( ulong )(pbVar8 + 8) & 0xfffffffffffffff8 );
            uVar2 = uVar2 + (int)lVar9 & 0xfffffff8;
            if (7 < uVar2) {
               uVar3 = 0;
               do {
                  uVar6 = (ulong)uVar3;
                  uVar3 = uVar3 + 8;
                  *(undefined8*)( ( ( ulong )(pbVar8 + 8) & 0xfffffffffffffff8 ) + uVar6 ) = *(undefined8*)( (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)pcVar5 + ( uVar6 - lVar9 ) );
               }
 while ( uVar3 < uVar2 );
            }

            LAB_00115bf0:pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( in_RDI + 8 );
         }

         LAB_00115a30:*(ulong*)( in_RDI + 0x10 ) = uVar7;
         pbVar4[uVar7] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
         goto LAB_00115a38;
      }

   }

   LAB_00115b28:std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(in_RDI, uVar6, 0, pcVar5, uVar10);
   *(ulong*)( in_RDI + 0x10 ) = uVar7;
   *(undefined1*)( *(long*)( in_RDI + 8 ) + uVar7 ) = 0;
   LAB_00115a38:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Control flow encountered bad instruction data *//* glslang::TOutputTraverser::~TOutputTraverser() */void glslang::TOutputTraverser::~TOutputTraverser(TOutputTraverser *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* glslang::TIntermTraverser::~TIntermTraverser() */void glslang::TIntermTraverser::~TIntermTraverser(TIntermTraverser *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

