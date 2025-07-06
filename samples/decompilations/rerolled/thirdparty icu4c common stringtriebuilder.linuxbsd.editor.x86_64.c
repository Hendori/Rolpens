undefined4 hashStringTrieNode(long param_1) {
   return *(undefined4*)( param_1 + 8 );
}void equalStringTrieNodes(long *param_1) {
   /* WARNING: Could not recover jumptable at 0x00100017. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *param_1 + 0x18 ) )();
   return;
}/* icu_76_godot::StringTrieBuilder::Node::markRightEdgesFirst(int) */int icu_76_godot::StringTrieBuilder::Node::markRightEdgesFirst(Node *this, int param_1) {
   if (*(int*)( this + 0xc ) == 0) {
      *(int*)( this + 0xc ) = param_1;
   }
   return param_1;
}/* icu_76_godot::StringTrieBuilder::FinalValueNode::write(icu_76_godot::StringTrieBuilder&) */void icu_76_godot::StringTrieBuilder::FinalValueNode::write(FinalValueNode *this, StringTrieBuilder *param_1) {
   undefined4 uVar1;
   uVar1 = ( **(code**)( *(long*)param_1 + 0x88 ) )(param_1, *(undefined4*)( this + 0x10 ), 1);
   *(undefined4*)( this + 0xc ) = uVar1;
   return;
}/* icu_76_godot::StringTrieBuilder::IntermediateValueNode::write(icu_76_godot::StringTrieBuilder&)
    */void icu_76_godot::StringTrieBuilder::IntermediateValueNode::write(IntermediateValueNode *this, StringTrieBuilder *param_1) {
   undefined4 uVar1;
   ( **(code**)( **(long**)( this + 0x18 ) + 0x28 ) )();
   uVar1 = ( **(code**)( *(long*)param_1 + 0x88 ) )(param_1, *(undefined4*)( this + 0x14 ), 0);
   *(undefined4*)( this + 0xc ) = uVar1;
   return;
}/* icu_76_godot::StringTrieBuilder::BranchHeadNode::write(icu_76_godot::StringTrieBuilder&) */void icu_76_godot::StringTrieBuilder::BranchHeadNode::write(BranchHeadNode *this, StringTrieBuilder *param_1) {
   int iVar1;
   int iVar2;
   undefined4 uVar3;
   ( **(code**)( **(long**)( this + 0x20 ) + 0x28 ) )();
   iVar1 = *(int*)( this + 0x18 );
   iVar2 = ( **(code**)( *(long*)param_1 + 0x60 ) )(param_1);
   if (iVar1 <= iVar2) {
      uVar3 = ( **(code**)( *(long*)param_1 + 0x90 ) )(param_1, (int)(char)this[0x10], *(undefined4*)( this + 0x14 ), *(int*)( this + 0x18 ) + -1);
      *(undefined4*)( this + 0xc ) = uVar3;
      return;
   }
   ( **(code**)( *(long*)param_1 + 0x78 ) )(param_1, *(int*)( this + 0x18 ) + -1);
   uVar3 = ( **(code**)( *(long*)param_1 + 0x90 ) )(param_1, (int)(char)this[0x10], *(undefined4*)( this + 0x14 ), 0);
   *(undefined4*)( this + 0xc ) = uVar3;
   return;
}/* icu_76_godot::StringTrieBuilder::IntermediateValueNode::markRightEdgesFirst(int) */ulong icu_76_godot::StringTrieBuilder::IntermediateValueNode::markRightEdgesFirst(IntermediateValueNode *this, int param_1) {
   ulong uVar1;
   if (*(int*)( this + 0xc ) == 0) {
      uVar1 = ( **(code**)( **(long**)( this + 0x18 ) + 0x20 ) )();
      *(int*)( this + 0xc ) = (int)uVar1;
      return uVar1;
   }
   return (ulong)(uint)param_1;
}/* icu_76_godot::StringTrieBuilder::LinearMatchNode::markRightEdgesFirst(int) */ulong icu_76_godot::StringTrieBuilder::LinearMatchNode::markRightEdgesFirst(LinearMatchNode *this, int param_1) {
   ulong uVar1;
   if (*(int*)( this + 0xc ) == 0) {
      uVar1 = ( **(code**)( **(long**)( this + 0x20 ) + 0x20 ) )();
      *(int*)( this + 0xc ) = (int)uVar1;
      return uVar1;
   }
   return (ulong)(uint)param_1;
}/* icu_76_godot::StringTrieBuilder::ListBranchNode::markRightEdgesFirst(int) */void icu_76_godot::StringTrieBuilder::ListBranchNode::markRightEdgesFirst(ListBranchNode *this, int param_1) {
   long *plVar1;
   int iVar2;
   long lVar3;
   if (*(int*)( this + 0xc ) == 0) {
      *(int*)( this + 0x10 ) = param_1;
      lVar3 = (long)*(int*)( this + 0x40 );
      iVar2 = 0;
      do {
         plVar1 = *(long**)( this + lVar3 * 8 + 0x10 );
         if (plVar1 != (long*)0x0) {
            param_1 = ( **(code**)( *plVar1 + 0x20 ) )(plVar1, param_1 - iVar2);
         }
         lVar3 = lVar3 + -1;
         iVar2 = 1;
      } while ( 0 < (int)lVar3 );
      *(int*)( this + 0xc ) = param_1;
      return;
   }
   return;
}/* icu_76_godot::StringTrieBuilder::SplitBranchNode::markRightEdgesFirst(int) */ulong icu_76_godot::StringTrieBuilder::SplitBranchNode::markRightEdgesFirst(SplitBranchNode *this, int param_1) {
   int iVar1;
   ulong uVar2;
   if (*(int*)( this + 0xc ) == 0) {
      *(int*)( this + 0x10 ) = param_1;
      iVar1 = ( **(code**)( **(long**)( this + 0x20 ) + 0x20 ) )();
      uVar2 = ( **(code**)( **(long**)( this + 0x18 ) + 0x20 ) )(*(long**)( this + 0x18 ), iVar1 + -1);
      *(int*)( this + 0xc ) = (int)uVar2;
      return uVar2;
   }
   return (ulong)(uint)param_1;
}/* icu_76_godot::StringTrieBuilder::BranchHeadNode::markRightEdgesFirst(int) */ulong icu_76_godot::StringTrieBuilder::BranchHeadNode::markRightEdgesFirst(BranchHeadNode *this, int param_1) {
   ulong uVar1;
   if (*(int*)( this + 0xc ) == 0) {
      uVar1 = ( **(code**)( **(long**)( this + 0x20 ) + 0x20 ) )();
      *(int*)( this + 0xc ) = (int)uVar1;
      return uVar1;
   }
   return (ulong)(uint)param_1;
}/* icu_76_godot::StringTrieBuilder::SplitBranchNode::write(icu_76_godot::StringTrieBuilder&) */void icu_76_godot::StringTrieBuilder::SplitBranchNode::write(SplitBranchNode *this, StringTrieBuilder *param_1) {
   int iVar1;
   long *plVar2;
   undefined4 uVar3;
   long *plVar4;
   plVar2 = *(long**)( this + 0x18 );
   plVar4 = *(long**)( this + 0x20 );
   iVar1 = *(int*)( (long)plVar2 + 0xc );
   if (( iVar1 < 0 ) && ( ( *(int*)( this + 0x10 ) < iVar1 || ( iVar1 < *(int*)( (long)plVar4 + 0xc ) ) ) )) {
      ( **(code**)( *plVar2 + 0x28 ) )(plVar2, param_1);
      plVar4 = *(long**)( this + 0x20 );
   }
   ( **(code**)( *plVar4 + 0x28 ) )(plVar4, param_1);
   ( **(code**)( *(long*)param_1 + 0x98 ) )(param_1, *(undefined4*)( *(long*)( this + 0x18 ) + 0xc ));
   uVar3 = ( **(code**)( *(long*)param_1 + 0x78 ) )(param_1, *(undefined2*)( this + 0x14 ));
   *(undefined4*)( this + 0xc ) = uVar3;
   return;
}/* icu_76_godot::StringTrieBuilder::registerFinalValue(int, UErrorCode&) [clone .part.0] */long *__thiscallicu_76_godot::StringTrieBuilder::registerFinalValue(StringTrieBuilder *this, int param_1, UErrorCode *param_2) {
   undefined8 uVar1;
   long lVar2;
   long *plVar3;
   UObject *pUVar4;
   long in_FS_OFFSET;
   undefined **local_58;
   int local_50;
   undefined4 local_4c;
   int local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_4c = 0;
   local_58 = &PTR__FinalValueNode_00101f40;
   pUVar4 = (UObject*)&local_58;
   local_50 = param_1 + 0x2777775;
   local_48 = param_1;
   lVar2 = uhash_find_76_godot(*(undefined8*)( this + 8 ));
   if (lVar2 == 0) {
      plVar3 = (long*)icu_76_godot::UMemory::operator_new((UMemory*)0x18, (ulong)pUVar4);
      if (plVar3 == (long*)0x0) {
         *(undefined4*)param_2 = 7;
      } else {
         *(int*)( plVar3 + 2 ) = param_1;
         *(int*)( plVar3 + 1 ) = param_1 + 0x2777775;
         uVar1 = *(undefined8*)( this + 8 );
         *(undefined4*)( (long)plVar3 + 0xc ) = 0;
         *plVar3 = (long)&PTR__FinalValueNode_00101f40;
         uhash_puti_76_godot(uVar1, plVar3, 1, param_2);
         if (*(int*)param_2 < 1) goto LAB_00100346;
         ( **(code**)( *plVar3 + 8 ) )(plVar3);
      }
      plVar3 = (long*)0x0;
   } else {
      plVar3 = *(long**)( lVar2 + 0x10 );
   }
   LAB_00100346:local_58 = (undefined**)&DAT_00101f00;
   icu_76_godot::UObject::~UObject((UObject*)&local_58);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return plVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* icu_76_godot::StringTrieBuilder::Node::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::StringTrieBuilder::Node
   const&) const */bool icu_76_godot::StringTrieBuilder::Node::operator ==(Node *this, Node *param_1) {
   char *__s1;
   char *pcVar1;
   int iVar2;
   if (this == param_1) {
      return true;
   }
   __s1 = *(char**)( *(long*)( *(long*)this + -8 ) + 8 );
   pcVar1 = *(char**)( *(long*)( *(long*)param_1 + -8 ) + 8 );
   if (__s1 != pcVar1) {
      if (*__s1 == '*') {
         return false;
      }
      iVar2 = strcmp(__s1, pcVar1 + ( *pcVar1 == '*' ));
      if (iVar2 != 0) {
         return false;
      }
   }
   return *(int*)( this + 8 ) == *(int*)( param_1 + 8 );
}/* icu_76_godot::StringTrieBuilder::ListBranchNode::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::StringTrieBuilder::Node
   const&) const */undefined8 icu_76_godot::StringTrieBuilder::ListBranchNode::operator ==(ListBranchNode *this, Node *param_1) {
   undefined8 uVar1;
   long lVar2;
   if (this == (ListBranchNode*)param_1) {
      return 1;
   }
   uVar1 = Node::operator ==((Node*)this, param_1);
   if (( (char)uVar1 != '\0' ) && ( 0 < *(int*)( this + 0x40 ) )) {
      lVar2 = 0;
      do {
         if (( ( *(short*)( this + lVar2 + 0x58 ) != *(short*)( param_1 + lVar2 + 0x58 ) ) || ( *(int*)( this + lVar2 * 2 + 0x44 ) != *(int*)( param_1 + lVar2 * 2 + 0x44 ) ) ) || ( *(long*)( this + lVar2 * 4 + 0x18 ) != *(long*)( param_1 + lVar2 * 4 + 0x18 ) )) {
            return 0;
         }
         lVar2 = lVar2 + 2;
      } while ( (long)*(int*)( this + 0x40 ) * 2 != lVar2 );
   }
   return uVar1;
}/* icu_76_godot::StringTrieBuilder::ListBranchNode::write(icu_76_godot::StringTrieBuilder&) */void icu_76_godot::StringTrieBuilder::ListBranchNode::write(ListBranchNode *this, StringTrieBuilder *param_1) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   undefined4 uVar4;
   int iVar5;
   long lVar6;
   int iVar7;
   lVar6 = (long)( *(int*)( this + 0x40 ) + -1 );
   plVar1 = *(long**)( this + lVar6 * 8 + 0x18 );
   if (plVar1 == (long*)0x0) {
      iVar7 = *(int*)( this + 0x10 );
   } else {
      iVar7 = *(int*)( (long)plVar1 + 0xc );
   }
   do lVar6 = lVar6 + -1; while ( 0 < (int)lVar6 );
   iVar5 = *(int*)( this + 0x40 );
   iVar7 = iVar5 + -1;
   if (plVar1 == (long*)0x0) {
      ( **(code**)( *(long*)param_1 + 0x88 ) )(param_1, *(undefined4*)( this + (long)iVar7 * 4 + 0x44 ), 1);
   } else {
      ( **(code**)( *plVar1 + 0x28 ) )(plVar1, param_1);
   }
   uVar4 = ( **(code**)( *(long*)param_1 + 0x78 ) )(param_1, *(undefined2*)( this + (long)iVar7 * 2 + 0x58 ));
   *(undefined4*)( this + 0xc ) = uVar4;
   iVar5 = iVar5 + -2;
   lVar6 = (long)iVar5;
   while (-1 < iVar5) {
      lVar3 = *(long*)( this + lVar6 * 8 + 0x18 );
      if (lVar3 != 0) {
         iVar7 = *(int*)( this + 0xc ) - *(int*)( lVar3 + 0xc );
      } else {
         iVar7 = *(int*)( this + lVar6 * 4 + 0x44 );
      }
      ( **(code**)( *(long*)param_1 + 0x88 ) )(param_1, iVar7, lVar3 == 0);
      lVar3 = lVar6 * 2;
      lVar6 = lVar6 + -1;
      uVar4 = ( **(code**)( *(long*)param_1 + 0x78 ) )(param_1, *(undefined2*)( this + lVar3 + 0x58 ));
      *(undefined4*)( this + 0xc ) = uVar4;
      iVar5 = (int)lVar6;
   };
   return;
}/* icu_76_godot::StringTrieBuilder::FinalValueNode::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::StringTrieBuilder::Node
   const&) const */bool icu_76_godot::StringTrieBuilder::FinalValueNode::operator ==(FinalValueNode *this, Node *param_1) {
   char *__s1;
   char *pcVar1;
   int iVar2;
   if (this == (FinalValueNode*)param_1) {
      return true;
   }
   __s1 = *(char**)( *(long*)( *(long*)this + -8 ) + 8 );
   pcVar1 = *(char**)( *(long*)( *(long*)param_1 + -8 ) + 8 );
   if (__s1 != pcVar1) {
      if (*__s1 == '*') {
         return false;
      }
      iVar2 = strcmp(__s1, pcVar1 + ( *pcVar1 == '*' ));
      if (iVar2 != 0) {
         return false;
      }
   }
   if (*(int*)( this + 8 ) != *(int*)( param_1 + 8 )) {
      return false;
   }
   return *(int*)( this + 0x10 ) == *(int*)( param_1 + 0x10 );
}/* icu_76_godot::StringTrieBuilder::ValueNode::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::StringTrieBuilder::Node
   const&) const */bool icu_76_godot::StringTrieBuilder::ValueNode::operator ==(ValueNode *this, Node *param_1) {
   char *__s1;
   char *pcVar1;
   int iVar2;
   bool bVar3;
   if (this == (ValueNode*)param_1) {
      return true;
   }
   __s1 = *(char**)( *(long*)( *(long*)this + -8 ) + 8 );
   pcVar1 = *(char**)( *(long*)( *(long*)param_1 + -8 ) + 8 );
   if (__s1 != pcVar1) {
      if (*__s1 == '*') {
         return false;
      }
      iVar2 = strcmp(__s1, pcVar1 + ( *pcVar1 == '*' ));
      if (iVar2 != 0) {
         return false;
      }
   }
   bVar3 = false;
   if (*(int*)( this + 8 ) == *(int*)( param_1 + 8 )) {
      bVar3 = false;
      if (( *(Node*)( this + 0x10 ) == param_1[0x10] ) && ( bVar3 = true * (Node*)( this + 0x10 ) != (Node)0x0 )) {
         bVar3 = *(int*)( this + 0x14 ) == *(int*)( param_1 + 0x14 );
      }
   }
   return bVar3;
}/* icu_76_godot::StringTrieBuilder::SplitBranchNode::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::StringTrieBuilder::Node
   const&) const */bool icu_76_godot::StringTrieBuilder::SplitBranchNode::operator ==(SplitBranchNode *this, Node *param_1) {
   char *__s1;
   char *pcVar1;
   int iVar2;
   bool bVar3;
   if (this == (SplitBranchNode*)param_1) {
      return true;
   }
   __s1 = *(char**)( *(long*)( *(long*)this + -8 ) + 8 );
   pcVar1 = *(char**)( *(long*)( *(long*)param_1 + -8 ) + 8 );
   if (__s1 != pcVar1) {
      if (*__s1 == '*') {
         return false;
      }
      iVar2 = strcmp(__s1, pcVar1 + ( *pcVar1 == '*' ));
      if (iVar2 != 0) {
         return false;
      }
   }
   bVar3 = false;
   if (( ( *(int*)( this + 8 ) == *(int*)( param_1 + 8 ) ) && ( bVar3 = false * (short*)( this + 0x14 ) == *(short*)( param_1 + 0x14 ) ) ) && ( *(long*)( this + 0x18 ) == *(long*)( param_1 + 0x18 ) )) {
      bVar3 = *(long*)( this + 0x20 ) == *(long*)( param_1 + 0x20 );
   }
   return bVar3;
}/* icu_76_godot::StringTrieBuilder::IntermediateValueNode::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::StringTrieBuilder::Node
   const&) const */bool icu_76_godot::StringTrieBuilder::IntermediateValueNode::operator ==(IntermediateValueNode *this, Node *param_1) {
   char *__s1;
   char *pcVar1;
   int iVar2;
   if (this == (IntermediateValueNode*)param_1) {
      return true;
   }
   __s1 = *(char**)( *(long*)( *(long*)this + -8 ) + 8 );
   pcVar1 = *(char**)( *(long*)( *(long*)param_1 + -8 ) + 8 );
   if (__s1 != pcVar1) {
      if (*__s1 == '*') {
         return false;
      }
      iVar2 = strcmp(__s1, pcVar1 + ( *pcVar1 == '*' ));
      if (iVar2 != 0) {
         return false;
      }
   }
   if (( ( *(int*)( this + 8 ) == *(int*)( param_1 + 8 ) ) && ( *(Node*)( this + 0x10 ) == param_1[0x10] ) ) && ( ( *(Node*)( this + 0x10 ) == (Node)0x0 || ( *(int*)( this + 0x14 ) == *(int*)( param_1 + 0x14 ) ) ) )) {
      return *(long*)( this + 0x18 ) == *(long*)( param_1 + 0x18 );
   }
   return false;
}/* icu_76_godot::StringTrieBuilder::LinearMatchNode::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::StringTrieBuilder::Node
   const&) const */bool icu_76_godot::StringTrieBuilder::LinearMatchNode::operator ==(LinearMatchNode *this, Node *param_1) {
   char *__s1;
   char *pcVar1;
   int iVar2;
   if (this == (LinearMatchNode*)param_1) {
      return true;
   }
   __s1 = *(char**)( *(long*)( *(long*)this + -8 ) + 8 );
   pcVar1 = *(char**)( *(long*)( *(long*)param_1 + -8 ) + 8 );
   if (__s1 != pcVar1) {
      if (*__s1 == '*') {
         return false;
      }
      iVar2 = strcmp(__s1, pcVar1 + ( *pcVar1 == '*' ));
      if (iVar2 != 0) {
         return false;
      }
   }
   if (( ( ( *(int*)( this + 8 ) == *(int*)( param_1 + 8 ) ) && ( *(Node*)( this + 0x10 ) == param_1[0x10] ) ) && ( ( *(Node*)( this + 0x10 ) == (Node)0x0 || ( *(int*)( this + 0x14 ) == *(int*)( param_1 + 0x14 ) ) ) ) ) && ( *(int*)( this + 0x18 ) == *(int*)( param_1 + 0x18 ) )) {
      return *(long*)( this + 0x20 ) == *(long*)( param_1 + 0x20 );
   }
   return false;
}/* icu_76_godot::StringTrieBuilder::BranchHeadNode::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::StringTrieBuilder::Node
   const&) const */bool icu_76_godot::StringTrieBuilder::BranchHeadNode::operator ==(BranchHeadNode *this, Node *param_1) {
   char *__s1;
   char *pcVar1;
   int iVar2;
   if (this == (BranchHeadNode*)param_1) {
      return true;
   }
   __s1 = *(char**)( *(long*)( *(long*)this + -8 ) + 8 );
   pcVar1 = *(char**)( *(long*)( *(long*)param_1 + -8 ) + 8 );
   if (__s1 != pcVar1) {
      if (*__s1 == '*') {
         return false;
      }
      iVar2 = strcmp(__s1, pcVar1 + ( *pcVar1 == '*' ));
      if (iVar2 != 0) {
         return false;
      }
   }
   if (( ( ( *(int*)( this + 8 ) == *(int*)( param_1 + 8 ) ) && ( *(Node*)( this + 0x10 ) == param_1[0x10] ) ) && ( ( *(Node*)( this + 0x10 ) == (Node)0x0 || ( *(int*)( this + 0x14 ) == *(int*)( param_1 + 0x14 ) ) ) ) ) && ( *(int*)( this + 0x18 ) == *(int*)( param_1 + 0x18 ) )) {
      return *(long*)( this + 0x20 ) == *(long*)( param_1 + 0x20 );
   }
   return false;
}/* icu_76_godot::StringTrieBuilder::StringTrieBuilder() */void icu_76_godot::StringTrieBuilder::StringTrieBuilder(StringTrieBuilder *this) {
   *(undefined8*)( this + 8 ) = 0;
   *(undefined**)this = &DAT_00101e50;
   return;
}/* icu_76_godot::StringTrieBuilder::~StringTrieBuilder() */void icu_76_godot::StringTrieBuilder::~StringTrieBuilder(StringTrieBuilder *this) {
   *(undefined**)this = &DAT_00101e50;
   uhash_close_76_godot(*(undefined8*)( this + 8 ));
   *(undefined8*)( this + 8 ) = 0;
   icu_76_godot::UObject::~UObject((UObject*)this);
   return;
}/* icu_76_godot::StringTrieBuilder::~StringTrieBuilder() */void icu_76_godot::StringTrieBuilder::~StringTrieBuilder(StringTrieBuilder *this) {
   void *in_RSI;
   *(undefined**)this = &DAT_00101e50;
   uhash_close_76_godot(*(undefined8*)( this + 8 ));
   *(undefined8*)( this + 8 ) = 0;
   icu_76_godot::UObject::~UObject((UObject*)this);
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}/* icu_76_godot::StringTrieBuilder::createCompactBuilder(int, UErrorCode&) */void icu_76_godot::StringTrieBuilder::createCompactBuilder(StringTrieBuilder *this, int param_1, UErrorCode *param_2) {
   int iVar1;
   long lVar2;
   if (0 < *(int*)param_2) {
      return;
   }
   lVar2 = uhash_openSize_76_godot(0x100000, equalStringTrieNodes, 0, param_1, param_2);
   iVar1 = *(int*)param_2;
   *(long*)( this + 8 ) = lVar2;
   if (iVar1 < 1) {
      if (lVar2 != 0) {
         uhash_setKeyDeleter_76_godot(lVar2, &uprv_deleteUObject_76_godot);
         return;
      }
      *(undefined4*)param_2 = 7;
   }
   return;
}/* icu_76_godot::StringTrieBuilder::deleteCompactBuilder() */void icu_76_godot::StringTrieBuilder::deleteCompactBuilder(StringTrieBuilder *this) {
   uhash_close_76_godot(*(undefined8*)( this + 8 ));
   *(undefined8*)( this + 8 ) = 0;
   return;
}/* icu_76_godot::StringTrieBuilder::writeBranchSubNode(int, int, int, int) */void icu_76_godot::StringTrieBuilder::writeBranchSubNode(StringTrieBuilder *this, int param_1, int param_2, int param_3, int param_4) {
   undefined2 *puVar1;
   char cVar2;
   code *pcVar3;
   undefined2 uVar4;
   int iVar5;
   undefined4 uVar6;
   int iVar7;
   int iVar8;
   long lVar9;
   long lVar10;
   long in_FS_OFFSET;
   bool bVar11;
   int local_d8[11];
   undefined2 auStack_aa[15];
   undefined4 auStack_8c[17];
   char local_45[5];
   long local_40;
   lVar9 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = ( **(code**)( *(long*)this + 0x58 ) )(this);
   iVar8 = param_1;
   if (iVar5 < param_4) {
      do {
         iVar5 = param_4 / 2;
         param_4 = param_4 - iVar5;
         param_1 = ( **(code**)( *(long*)this + 0x40 ) )(this, iVar8, param_3, iVar5);
         uVar4 = ( **(code**)( *(long*)this + 0x20 ) )(this, param_1, param_3);
         auStack_aa[lVar9 + 1] = uVar4;
         uVar6 = writeBranchSubNode(this, iVar8, param_1, param_3, iVar5);
         auStack_8c[lVar9 + 1] = uVar6;
         lVar9 = lVar9 + 1;
         iVar5 = ( **(code**)( *(long*)this + 0x58 ) )(this);
         iVar8 = param_1;
      } while ( iVar5 < param_4 );
   }
   iVar8 = param_3 + 1;
   lVar10 = 0;
   do {
      local_d8[lVar10 + 4] = param_1;
      uVar4 = ( **(code**)( *(long*)this + 0x20 ) )(this, param_1, param_3);
      iVar5 = ( **(code**)( *(long*)this + 0x48 ) )(this, param_1 + 1, param_3, uVar4);
      bVar11 = false;
      if (iVar5 + -1 == param_1) {
         iVar7 = ( **(code**)( *(long*)this + 0x18 ) )(this);
         bVar11 = iVar7 == iVar8;
      }
      local_45[lVar10 + 1] = bVar11;
      lVar10 = lVar10 + 1;
      param_1 = iVar5;
   } while ( (int)lVar10 < param_4 + -1 );
   iVar7 = 2;
   if (1 < param_4) {
      iVar7 = param_4;
   }
   lVar10 = (long)( iVar7 + -1 );
   local_d8[lVar10 + 4] = iVar5;
   do {
      if (local_45[lVar10] == '\0') {
         iVar7 = writeNode(this, local_d8[lVar10 + 3], local_d8[lVar10 + 4], iVar8);
         local_d8[lVar10 + -1] = iVar7;
      }
      lVar10 = lVar10 + -1;
   } while ( (int)lVar10 != 0 );
   writeNode(this, iVar5, param_2, iVar8);
   pcVar3 = *(code**)( *(long*)this + 0x78 );
   uVar4 = ( **(code**)( *(long*)this + 0x20 ) )(this, iVar5, param_3);
   iVar8 = ( *pcVar3 )(this, uVar4);
   if (-1 < param_4 + -2) {
      lVar10 = (long)( param_4 + -2 );
      do {
         iVar5 = local_d8[lVar10 + 4];
         cVar2 = local_45[lVar10 + 1];
         if (cVar2 == '\0') {
            iVar8 = iVar8 - local_d8[lVar10];
         } else {
            iVar8 = ( **(code**)( *(long*)this + 0x28 ) )(this, iVar5);
         }
         lVar10 = lVar10 + -1;
         ( **(code**)( *(long*)this + 0x88 ) )(this, iVar8, (int)cVar2);
         pcVar3 = *(code**)( *(long*)this + 0x78 );
         uVar4 = ( **(code**)( *(long*)this + 0x20 ) )(this, iVar5, param_3);
         iVar8 = ( *pcVar3 )(this, uVar4);
      } while ( -1 < (int)lVar10 );
   }
   if ((int)lVar9 != 0) {
      lVar9 = (long)(int)lVar9;
      do {
         ( **(code**)( *(long*)this + 0x98 ) )(this, auStack_8c[lVar9]);
         puVar1 = auStack_aa + lVar9;
         lVar9 = lVar9 + -1;
         ( **(code**)( *(long*)this + 0x78 ) )(this, *puVar1);
      } while ( (int)lVar9 != 0 );
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* icu_76_godot::StringTrieBuilder::writeNode(int, int, int) */void icu_76_godot::StringTrieBuilder::writeNode(StringTrieBuilder *this, int param_1, int param_2, int param_3) {
   code *pcVar1;
   short sVar2;
   short sVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   undefined4 local_40;
   undefined4 local_3c;
   iVar4 = ( **(code**)( *(long*)this + 0x18 ) )();
   local_3c = 0;
   local_40 = 0;
   iVar8 = param_1;
   if (iVar4 == param_3) {
      iVar8 = param_1 + 1;
      local_40 = ( **(code**)( *(long*)this + 0x28 ) )(this, param_1);
      local_3c = 1;
      if (iVar8 == param_2) {
         /* WARNING: Could not recover jumptable at 0x00100f75. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( **(code**)( *(long*)this + 0x88 ) )(this, local_40, 1);
         return;
      }
   }
   sVar2 = ( **(code**)( *(long*)this + 0x20 ) )(this, iVar8, param_3);
   sVar3 = ( **(code**)( *(long*)this + 0x20 ) )(this, param_2 + -1, param_3);
   if (sVar2 == sVar3) {
      iVar4 = ( **(code**)( *(long*)this + 0x30 ) )(this, iVar8, param_2 + -1, param_3);
      writeNode(this, iVar8, param_2, iVar4);
      iVar7 = iVar4 - param_3;
      iVar5 = ( **(code**)( *(long*)this + 0x68 ) )(this);
      if (iVar5 < iVar7) {
         iVar4 = ( iVar4 - iVar5 ) - iVar7;
         do {
            iVar6 = iVar4 + iVar7;
            iVar7 = iVar7 - iVar5;
            ( **(code**)( *(long*)this + 0x80 ) )(this, iVar8, iVar6, iVar5);
            pcVar1 = *(code**)( *(long*)this + 0x78 );
            iVar6 = ( **(code**)( *(long*)this + 0x60 ) )(this);
            ( *pcVar1 )(this, iVar5 + -1 + iVar6);
         } while ( iVar5 < iVar7 );
      }
      ( **(code**)( *(long*)this + 0x80 ) )(this, iVar8, param_3, iVar7);
      iVar8 = ( **(code**)( *(long*)this + 0x60 ) )(this);
      iVar8 = iVar7 + -1 + iVar8;
   } else {
      iVar4 = ( **(code**)( *(long*)this + 0x38 ) )(this, iVar8, param_2);
      writeBranchSubNode(this, iVar8, param_2, param_3, iVar4);
      iVar4 = iVar4 + -1;
      iVar5 = ( **(code**)( *(long*)this + 0x60 ) )(this);
      iVar8 = iVar4;
      if (iVar5 <= iVar4) {
         iVar8 = 0;
         ( **(code**)( *(long*)this + 0x78 ) )(this, iVar4);
      }
   }
   /* WARNING: Could not recover jumptable at 0x00100f09. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)this + 0x90 ) )(this, local_3c, local_40, iVar8);
   return;
}/* icu_76_godot::StringTrieBuilder::registerNode(icu_76_godot::StringTrieBuilder::Node*,
   UErrorCode&) */Node * __thiscall
icu_76_godot::StringTrieBuilder::registerNode
          (StringTrieBuilder *this,Node *param_1,UErrorCode *param_2){
   long lVar1;
   if (*(int*)param_2 < 1) {
      if (param_1 == (Node*)0x0) {
         *(undefined4*)param_2 = 7;
         return (Node*)0x0;
      }
      lVar1 = uhash_find_76_godot(*(undefined8*)( this + 8 ));
      if (lVar1 != 0) {
         ( **(code**)( *(long*)param_1 + 8 ) )(param_1);
         return *(Node**)( lVar1 + 0x10 );
      }
      uhash_puti_76_godot(*(undefined8*)( this + 8 ), param_1, 1, param_2);
      if (*(int*)param_2 < 1) {
         return param_1;
      }
   } else if (param_1 == (Node*)0x0) {
      return (Node*)0x0;
   }
   ( **(code**)( *(long*)param_1 + 8 ) )(param_1);
   return (Node*)0x0;
}/* icu_76_godot::StringTrieBuilder::makeBranchSubNode(int, int, int, int, UErrorCode&) */long icu_76_godot::StringTrieBuilder::makeBranchSubNode(StringTrieBuilder *this, int param_1, int param_2, int param_3, int param_4, UErrorCode *param_5) {
   int iVar1;
   ushort uVar2;
   int iVar3;
   uint uVar4;
   uint uVar5;
   int iVar6;
   long lVar7;
   Node *pNVar8;
   long lVar9;
   ulong uVar10;
   long lVar11;
   undefined4 in_register_00000034;
   ulong uVar12;
   int iVar13;
   uint uVar14;
   long in_FS_OFFSET;
   ushort local_d8[12];
   long alStack_c0[16];
   long local_40;
   uVar12 = CONCAT44(in_register_00000034, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)param_5 < 1) {
      uVar10 = (ulong)(uint)param_4;
      lVar11 = 0;
      iVar3 = ( **(code**)( *(long*)this + 0x58 ) )(this);
      uVar4 = param_1;
      if (iVar3 < param_4) {
         do {
            iVar3 = (int)( uVar10 >> 0x1f ) + (int)uVar10 >> 1;
            param_4 = (int)uVar10 - iVar3;
            uVar10 = (ulong)(uint)param_4;
            param_1 = ( **(code**)( *(long*)this + 0x40 ) )(this, uVar4, param_3, iVar3);
            uVar2 = ( **(code**)( *(long*)this + 0x20 ) )(this, param_1, param_3);
            uVar12 = (ulong)uVar4;
            local_d8[lVar11] = uVar2;
            lVar7 = makeBranchSubNode(this, uVar4, param_1, param_3, iVar3, param_5);
            alStack_c0[lVar11 + 1] = lVar7;
            lVar11 = lVar11 + 1;
            iVar3 = ( **(code**)( *(long*)this + 0x58 ) )(this);
            uVar4 = param_1;
         } while ( iVar3 < param_4 );
      }
      if (*(int*)param_5 < 1) {
         pNVar8 = (Node*)icu_76_godot::UMemory::operator_new((UMemory*)0x68, uVar12);
         if (pNVar8 != (Node*)0x0) {
            *(undefined8*)( pNVar8 + 8 ) = 0x444444;
            iVar13 = 0;
            *(undefined***)pNVar8 = &PTR__ListBranchNode_00102040;
            iVar3 = param_3 + 1;
            *(undefined4*)( pNVar8 + 0x40 ) = 0;
            do {
               uVar2 = ( **(code**)( *(long*)this + 0x20 ) )(this, param_1, param_3);
               uVar4 = (uint)uVar2;
               uVar5 = ( **(code**)( *(long*)this + 0x48 ) )(this, param_1 + 1, param_3, uVar4);
               uVar14 = uVar5 - 1;
               if (( uVar14 == param_1 ) && ( iVar6 = ( **(code**)( *(long*)this + 0x18 ) )(this, uVar14) ),iVar6 == iVar3) {
                  iVar6 = ( **(code**)( *(long*)this + 0x28 ) )(this, uVar14);
                  iVar1 = *(int*)( pNVar8 + 0x40 );
                  lVar7 = (long)iVar1;
                  *(ushort*)( pNVar8 + lVar7 * 2 + 0x58 ) = uVar2;
                  *(undefined8*)( pNVar8 + lVar7 * 8 + 0x18 ) = 0;
                  *(int*)( pNVar8 + lVar7 * 4 + 0x44 ) = iVar6;
                  *(int*)( pNVar8 + 0x40 ) = iVar1 + 1;
                  iVar6 = ( *(int*)( pNVar8 + 8 ) * 0x25 + uVar4 ) * 0x25 + iVar6;
               } else {
                  lVar7 = makeNode(this, param_1, uVar5, iVar3, param_5);
                  iVar6 = *(int*)( pNVar8 + 0x40 );
                  lVar9 = (long)iVar6;
                  *(ushort*)( pNVar8 + lVar9 * 2 + 0x58 ) = uVar2;
                  *(long*)( pNVar8 + lVar9 * 8 + 0x18 ) = lVar7;
                  *(undefined4*)( pNVar8 + lVar9 * 4 + 0x44 ) = 0;
                  *(int*)( pNVar8 + 0x40 ) = iVar6 + 1;
                  iVar6 = ( *(int*)( pNVar8 + 8 ) * 0x25 + uVar4 ) * 0x25;
                  if (lVar7 != 0) {
                     iVar6 = iVar6 + *(int*)( lVar7 + 8 );
                  }
               }
               *(int*)( pNVar8 + 8 ) = iVar6;
               iVar13 = iVar13 + 1;
               param_1 = uVar5;
            } while ( iVar13 < (int)( param_4 - 1U ) );
            uVar2 = ( **(code**)( *(long*)this + 0x20 ) )(this, uVar5, param_3);
            if (( param_2 - 1U == uVar5 ) && ( iVar13 = ( **(code**)( *(long*)this + 0x18 ) )(this, uVar5) ),iVar13 == iVar3) {
               iVar3 = ( **(code**)( *(long*)this + 0x28 ) )(this, uVar5);
               iVar13 = *(int*)( pNVar8 + 0x40 );
               lVar7 = (long)iVar13;
               *(ushort*)( pNVar8 + lVar7 * 2 + 0x58 ) = uVar2;
               *(undefined8*)( pNVar8 + lVar7 * 8 + 0x18 ) = 0;
               *(int*)( pNVar8 + lVar7 * 4 + 0x44 ) = iVar3;
               *(int*)( pNVar8 + 0x40 ) = iVar13 + 1;
               iVar3 = ( *(int*)( pNVar8 + 8 ) * 0x25 + (uint)uVar2 ) * 0x25 + iVar3;
            } else {
               lVar7 = makeNode(this, uVar5, param_2, iVar3, param_5);
               iVar3 = *(int*)( pNVar8 + 0x40 );
               lVar9 = (long)iVar3;
               *(ushort*)( pNVar8 + lVar9 * 2 + 0x58 ) = uVar2;
               *(long*)( pNVar8 + lVar9 * 8 + 0x18 ) = lVar7;
               *(undefined4*)( pNVar8 + lVar9 * 4 + 0x44 ) = 0;
               *(int*)( pNVar8 + 0x40 ) = iVar3 + 1;
               iVar3 = ( *(int*)( pNVar8 + 8 ) * 0x25 + (uint)uVar2 ) * 0x25;
               if (lVar7 != 0) {
                  iVar3 = iVar3 + *(int*)( lVar7 + 8 );
               }
            }
            *(int*)( pNVar8 + 8 ) = iVar3;
            lVar7 = registerNode(this, pNVar8, param_5);
            if ((int)lVar11 != 0) {
               lVar11 = (long)(int)lVar11;
               do {
                  pNVar8 = (Node*)icu_76_godot::UMemory::operator_new((UMemory*)0x28, (ulong)pNVar8);
                  if (pNVar8 != (Node*)0x0) {
                     uVar2 = local_d8[lVar11 + -1];
                     lVar9 = alStack_c0[lVar11];
                     iVar3 = (uint)uVar2 * 0x25;
                     if (lVar9 != 0) {
                        iVar3 = iVar3 + *(int*)( lVar9 + 8 );
                     }
                     iVar13 = 0;
                     if (lVar7 != 0) {
                        iVar13 = *(int*)( lVar7 + 8 );
                     }
                     *(undefined4*)( pNVar8 + 0xc ) = 0;
                     *(int*)( pNVar8 + 8 ) = iVar13 + -0xbaaec9f + iVar3 * 0x25;
                     *(undefined***)pNVar8 = &PTR__SplitBranchNode_00102080;
                     *(ushort*)( pNVar8 + 0x14 ) = uVar2;
                     *(long*)( pNVar8 + 0x18 ) = lVar9;
                     *(long*)( pNVar8 + 0x20 ) = lVar7;
                  }
                  lVar11 = lVar11 + -1;
                  lVar7 = registerNode(this, pNVar8, param_5);
               } while ( (int)lVar11 != 0 );
            }
            goto LAB_0010134b;
         }
         *(undefined4*)param_5 = 7;
      }
   }
   lVar7 = 0;
   LAB_0010134b:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return lVar7;
}/* icu_76_godot::StringTrieBuilder::makeNode(int, int, int, UErrorCode&) */undefined8 icu_76_godot::StringTrieBuilder::makeNode(StringTrieBuilder *this, int param_1, int param_2, int param_3, UErrorCode *param_4) {
   int iVar1;
   bool bVar2;
   char cVar3;
   short sVar4;
   short sVar5;
   int iVar6;
   int iVar7;
   long lVar8;
   Node *pNVar9;
   undefined8 uVar10;
   Node *pNVar11;
   ulong uVar12;
   int iVar13;
   uint uVar14;
   int local_40;
   if (0 < *(int*)param_4) {
      return 0;
   }
   iVar6 = ( **(code**)( *(long*)this + 0x18 ) )();
   local_40 = 0;
   bVar2 = false;
   uVar14 = param_1;
   if (iVar6 == param_3) {
      uVar14 = param_1 + 1;
      local_40 = ( **(code**)( *(long*)this + 0x28 ) )(this, param_1);
      bVar2 = true;
      if (uVar14 == param_2) {
         if (*(int*)param_4 < 1) {
            uVar10 = registerFinalValue(this, local_40, param_4);
            return uVar10;
         }
         return 0;
      }
   }
   sVar4 = ( **(code**)( *(long*)this + 0x20 ) )(this, uVar14, param_3);
   sVar5 = ( **(code**)( *(long*)this + 0x20 ) )(this, param_2 + -1, param_3);
   if (sVar4 == sVar5) {
      iVar6 = ( **(code**)( *(long*)this + 0x30 ) )(this, uVar14, param_2 + -1, param_3);
      uVar10 = makeNode(this, uVar14, param_2, iVar6, param_4);
      iVar13 = iVar6 - param_3;
      iVar7 = ( **(code**)( *(long*)this + 0x68 ) )(this);
      if (iVar7 < iVar13) {
         iVar6 = ( iVar6 - iVar7 ) - iVar13;
         do {
            iVar1 = iVar6 + iVar13;
            iVar13 = iVar13 - iVar7;
            pNVar9 = (Node*)( **(code**)( *(long*)this + 0x70 ) )(this, uVar14, iVar1, iVar7, uVar10);
            uVar10 = registerNode(this, pNVar9, param_4);
         } while ( iVar7 < iVar13 );
      }
      uVar12 = (ulong)uVar14;
      pNVar9 = (Node*)( **(code**)( *(long*)this + 0x70 ) )(this, uVar12, param_3, iVar13);
      LAB_00101634:pNVar11 = pNVar9;
      if (( pNVar9 == (Node*)0x0 ) || ( !bVar2 )) goto LAB_0010166a;
      cVar3 = ( **(code**)( *(long*)this + 0x50 ) )(this);
      if (cVar3 != '\0') {
         pNVar9[0x10] = (Node)0x1;
         *(int*)( pNVar9 + 0x14 ) = local_40;
         *(int*)( pNVar9 + 8 ) = *(int*)( pNVar9 + 8 ) * 0x25 + local_40;
         goto LAB_0010166a;
      }
      pNVar11 = (Node*)icu_76_godot::UMemory::operator_new((UMemory*)0x20, uVar12);
      if (pNVar11 != (Node*)0x0) {
         lVar8 = registerNode(this, pNVar9, param_4);
         iVar6 = -0x4977782e;
         if (lVar8 != 0) {
            iVar6 = ( *(int*)( lVar8 + 8 ) + 0x4eeeeea ) * 0x25;
         }
         *(long*)( pNVar11 + 0x18 ) = lVar8;
         *(undefined4*)( pNVar11 + 0xc ) = 0;
         *(int*)( pNVar11 + 0x14 ) = local_40;
         *(undefined***)pNVar11 = &PTR__IntermediateValueNode_00101fc0;
         pNVar11[0x10] = (Node)0x1;
         *(int*)( pNVar11 + 8 ) = local_40 + iVar6;
         goto LAB_0010166a;
      }
   } else {
      iVar6 = ( **(code**)( *(long*)this + 0x38 ) )(this, uVar14, param_2);
      uVar12 = (ulong)uVar14;
      lVar8 = makeBranchSubNode(this, uVar14, param_2, param_3, iVar6, param_4);
      pNVar9 = (Node*)icu_76_godot::UMemory::operator_new((UMemory*)0x28, uVar12);
      if (pNVar9 != (Node*)0x0) {
         iVar7 = 0;
         if (lVar8 != 0) {
            iVar7 = *(int*)( lVar8 + 8 );
         }
         *(undefined4*)( pNVar9 + 0xc ) = 0;
         *(int*)( pNVar9 + 8 ) = iVar7 + 0x23999776 + iVar6 * 0x25;
         pNVar9[0x10] = (Node)0x0;
         *(undefined4*)( pNVar9 + 0x14 ) = 0;
         *(undefined***)pNVar9 = &PTR__BranchHeadNode_001020c0;
         *(int*)( pNVar9 + 0x18 ) = iVar6;
         *(long*)( pNVar9 + 0x20 ) = lVar8;
         goto LAB_00101634;
      }
   }
   pNVar11 = (Node*)0x0;
   LAB_0010166a:uVar10 = registerNode(this, pNVar11, param_4);
   return uVar10;
}/* icu_76_godot::StringTrieBuilder::build(UStringTrieBuildOption, int, UErrorCode&) */void icu_76_godot::StringTrieBuilder::build(StringTrieBuilder *this, int param_2, int param_3, UErrorCode *param_4) {
   int iVar1;
   long *plVar2;
   long lVar3;
   if (param_2 != 0) {
      if (*(int*)param_4 < 1) {
         lVar3 = uhash_openSize_76_godot(0x100000, equalStringTrieNodes, 0, param_3 * 2, param_4);
         iVar1 = *(int*)param_4;
         *(long*)( this + 8 ) = lVar3;
         if (iVar1 < 1) {
            if (lVar3 == 0) {
               *(undefined4*)param_4 = 7;
            } else {
               uhash_setKeyDeleter_76_godot(lVar3);
            }
         }
      }
      plVar2 = (long*)makeNode(this, 0, param_3, 0, param_4);
      if (*(int*)param_4 < 1) {
         ( **(code**)( *plVar2 + 0x20 ) )(plVar2, 0xffffffff);
         ( **(code**)( *plVar2 + 0x28 ) )(plVar2, this);
      }
      uhash_close_76_godot(*(undefined8*)( this + 8 ));
      *(undefined8*)( this + 8 ) = 0;
      return;
   }
   writeNode(this, 0, param_3, 0);
   return;
}/* icu_76_godot::StringTrieBuilder::registerFinalValue(int, UErrorCode&) */undefined8 icu_76_godot::StringTrieBuilder::registerFinalValue(StringTrieBuilder *this, int param_1, UErrorCode *param_2) {
   undefined8 uVar1;
   if (*(int*)param_2 < 1) {
      uVar1 = registerFinalValue(this, param_1, param_2);
      return uVar1;
   }
   return 0;
}/* icu_76_godot::StringTrieBuilder::hashNode(void const*) */undefined4 icu_76_godot::StringTrieBuilder::hashNode(void *param_1) {
   return *(undefined4*)( (long)param_1 + 8 );
}/* icu_76_godot::StringTrieBuilder::equalNodes(void const*, void const*) */void icu_76_godot::StringTrieBuilder::equalNodes(void *param_1, void *param_2) {
   for (int i = 0; i < 3; i++) {
      /* WARNING: Load size is inaccurate */
   }
   ( **(code**)( *param_1 + 0x18 ) )();
   return;
}/* icu_76_godot::StringTrieBuilder::FinalValueNode::~FinalValueNode() */void icu_76_godot::StringTrieBuilder::FinalValueNode::~FinalValueNode(FinalValueNode *this) {
   *(undefined**)this = &DAT_00101f00;
   icu_76_godot::UObject::~UObject((UObject*)this);
   return;
}/* icu_76_godot::StringTrieBuilder::BranchHeadNode::~BranchHeadNode() */void icu_76_godot::StringTrieBuilder::BranchHeadNode::~BranchHeadNode(BranchHeadNode *this) {
   *(undefined**)this = &DAT_00101f00;
   icu_76_godot::UObject::~UObject((UObject*)this);
   return;
}/* icu_76_godot::StringTrieBuilder::IntermediateValueNode::~IntermediateValueNode() */void icu_76_godot::StringTrieBuilder::IntermediateValueNode::~IntermediateValueNode(IntermediateValueNode *this) {
   *(undefined**)this = &DAT_00101f00;
   icu_76_godot::UObject::~UObject((UObject*)this);
   return;
}/* icu_76_godot::StringTrieBuilder::SplitBranchNode::~SplitBranchNode() */void icu_76_godot::StringTrieBuilder::SplitBranchNode::~SplitBranchNode(SplitBranchNode *this) {
   *(undefined**)this = &DAT_00101f00;
   icu_76_godot::UObject::~UObject((UObject*)this);
   return;
}/* icu_76_godot::StringTrieBuilder::ListBranchNode::~ListBranchNode() */void icu_76_godot::StringTrieBuilder::ListBranchNode::~ListBranchNode(ListBranchNode *this) {
   *(undefined**)this = &DAT_00101f00;
   icu_76_godot::UObject::~UObject((UObject*)this);
   return;
}/* icu_76_godot::StringTrieBuilder::FinalValueNode::~FinalValueNode() */void icu_76_godot::StringTrieBuilder::FinalValueNode::~FinalValueNode(FinalValueNode *this) {
   void *in_RSI;
   *(undefined**)this = &DAT_00101f00;
   icu_76_godot::UObject::~UObject((UObject*)this);
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}/* icu_76_godot::StringTrieBuilder::BranchHeadNode::~BranchHeadNode() */void icu_76_godot::StringTrieBuilder::BranchHeadNode::~BranchHeadNode(BranchHeadNode *this) {
   void *in_RSI;
   *(undefined**)this = &DAT_00101f00;
   icu_76_godot::UObject::~UObject((UObject*)this);
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}/* icu_76_godot::StringTrieBuilder::IntermediateValueNode::~IntermediateValueNode() */void icu_76_godot::StringTrieBuilder::IntermediateValueNode::~IntermediateValueNode(IntermediateValueNode *this) {
   void *in_RSI;
   *(undefined**)this = &DAT_00101f00;
   icu_76_godot::UObject::~UObject((UObject*)this);
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}/* icu_76_godot::StringTrieBuilder::SplitBranchNode::~SplitBranchNode() */void icu_76_godot::StringTrieBuilder::SplitBranchNode::~SplitBranchNode(SplitBranchNode *this) {
   void *in_RSI;
   *(undefined**)this = &DAT_00101f00;
   icu_76_godot::UObject::~UObject((UObject*)this);
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}/* icu_76_godot::StringTrieBuilder::ListBranchNode::~ListBranchNode() */void icu_76_godot::StringTrieBuilder::ListBranchNode::~ListBranchNode(ListBranchNode *this) {
   void *in_RSI;
   *(undefined**)this = &DAT_00101f00;
   icu_76_godot::UObject::~UObject((UObject*)this);
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}/* WARNING: Control flow encountered bad instruction data *//* icu_76_godot::StringTrieBuilder::ListBranchNode::~ListBranchNode() */void icu_76_godot::StringTrieBuilder::ListBranchNode::~ListBranchNode(ListBranchNode *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* icu_76_godot::StringTrieBuilder::SplitBranchNode::~SplitBranchNode() */void icu_76_godot::StringTrieBuilder::SplitBranchNode::~SplitBranchNode(SplitBranchNode *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* icu_76_godot::StringTrieBuilder::IntermediateValueNode::~IntermediateValueNode() */void icu_76_godot::StringTrieBuilder::IntermediateValueNode::~IntermediateValueNode(IntermediateValueNode *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* icu_76_godot::StringTrieBuilder::BranchHeadNode::~BranchHeadNode() */void icu_76_godot::StringTrieBuilder::BranchHeadNode::~BranchHeadNode(BranchHeadNode *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* icu_76_godot::StringTrieBuilder::FinalValueNode::~FinalValueNode() */void icu_76_godot::StringTrieBuilder::FinalValueNode::~FinalValueNode(FinalValueNode *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
