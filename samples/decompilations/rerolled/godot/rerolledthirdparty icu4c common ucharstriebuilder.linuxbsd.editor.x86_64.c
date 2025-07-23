/* icu_76_godot::UCharsTrieBuilder::getElementValue(int) const */undefined4 icu_76_godot::UCharsTrieBuilder::getElementValue(UCharsTrieBuilder *this, int param_1) {
   return *(undefined4*)( *(long*)( this + 0x50 ) + 4 + (long)param_1 * 8 );
}
/* icu_76_godot::UCharsTrieBuilder::~UCharsTrieBuilder() */void icu_76_godot::UCharsTrieBuilder::~UCharsTrieBuilder(UCharsTrieBuilder *this) {
   void *in_RSI;
   *(undefined***)this = &PTR__UCharsTrieBuilder_001018b0;
   if (*(UMemory**)( this + 0x50 ) != (UMemory*)0x0) {
      icu_76_godot::UMemory::operator_delete__(*(UMemory**)( this + 0x50 ), in_RSI);
   }

   uprv_free_76_godot(*(undefined8*)( this + 0x60 ));
   icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)( this + 0x10 ));
   icu_76_godot::StringTrieBuilder::~StringTrieBuilder((StringTrieBuilder*)this);
   return;
}
/* icu_76_godot::UCharsTrieBuilder::UCTLinearMatchNode::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::StringTrieBuilder::Node
   const&) const */bool icu_76_godot::UCharsTrieBuilder::UCTLinearMatchNode::operator ==(UCTLinearMatchNode *this, Node *param_1) {
   char cVar1;
   int iVar2;
   if (this == (UCTLinearMatchNode*)param_1) {
      return true;
   }

   cVar1 = icu_76_godot::StringTrieBuilder::LinearMatchNode::operator ==((LinearMatchNode*)this, param_1);
   if (cVar1 == '\0') {
      return false;
   }

   iVar2 = u_memcmp_76_godot(*(undefined8*)( this + 0x28 ), *(undefined8*)( param_1 + 0x28 ), *(undefined4*)( this + 0x18 ));
   return iVar2 == 0;
}
/* icu_76_godot::UCharsTrieElement::setTo(icu_76_godot::UnicodeString const&, int,
   icu_76_godot::UnicodeString&, UErrorCode&) [clone .part.0] */void icu_76_godot::UCharsTrieElement::setTo(UCharsTrieElement *this, UnicodeString *param_1, int param_2, UnicodeString *param_3, UErrorCode *param_4) {
   int iVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined2 local_32;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(short*)( param_1 + 8 ) < 0) {
      iVar1 = *(int*)( param_1 + 0xc );
      if (0xffff < iVar1) {
         *(undefined4*)param_4 = 8;
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00100198;
      }

   }
 else {
      iVar1 = (int)( *(short*)( param_1 + 8 ) >> 5 );
   }

   if (*(short*)( param_3 + 8 ) < 0) {
      iVar2 = *(int*)( param_3 + 0xc );
   }
 else {
      iVar2 = (int)( *(short*)( param_3 + 8 ) >> 5 );
   }

   *(int*)this = iVar2;
   local_32 = (undefined2)iVar1;
   icu_76_godot::UnicodeString::doAppend((wchar16*)param_3, (int)&local_32, 0);
   *(int*)( this + 4 ) = param_2;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      icu_76_godot::UnicodeString::doAppend(param_3, (int)param_1, 0);
      return;
   }

   LAB_00100198:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* icu_76_godot::UCharsTrieBuilder::~UCharsTrieBuilder() */void icu_76_godot::UCharsTrieBuilder::~UCharsTrieBuilder(UCharsTrieBuilder *this) {
   void *in_RSI;
   *(undefined***)this = &PTR__UCharsTrieBuilder_001018b0;
   if (*(UMemory**)( this + 0x50 ) != (UMemory*)0x0) {
      icu_76_godot::UMemory::operator_delete__(*(UMemory**)( this + 0x50 ), in_RSI);
   }

   uprv_free_76_godot(*(undefined8*)( this + 0x60 ));
   icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)( this + 0x10 ));
   icu_76_godot::StringTrieBuilder::~StringTrieBuilder((StringTrieBuilder*)this);
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}
/* icu_76_godot::UCharsTrieBuilder::indexOfElementWithNextUnit(int, int, char16_t) const */void icu_76_godot::UCharsTrieBuilder::indexOfElementWithNextUnit(UCharsTrieBuilder *this, int param_1, int param_2, wchar16 param_3) {
   uint uVar1;
   ushort uVar2;
   long lVar3;
   wchar16 wVar4;
   UCharsTrieBuilder *pUVar5;
   uint uVar6;
   uVar2 = *(ushort*)( this + 0x18 );
   lVar3 = (long)param_1;
   do {
      uVar1 = param_2 + 1 + *(int*)( *(long*)( this + 0x50 ) + lVar3 * 8 );
      uVar6 = (int)( (short)uVar2 >> 5 );
      if ((short)uVar2 < 0) {
         uVar6 = *(uint*)( this + 0x1c );
      }

      wVar4 = L'\xffff';
      if (uVar1 < uVar6) {
         pUVar5 = this + 0x1a;
         if (( uVar2 & 2 ) == 0) {
            pUVar5 = *(UCharsTrieBuilder**)( this + 0x28 );
         }

         wVar4 = *(wchar16*)( pUVar5 + (long)(int)uVar1 * 2 );
      }

      lVar3 = lVar3 + 1;
   }
 while ( param_3 == wVar4 );
   return;
}
/* icu_76_godot::UCharsTrieBuilder::skipElementsBySomeUnits(int, int, int) const */ulong icu_76_godot::UCharsTrieBuilder::skipElementsBySomeUnits(UCharsTrieBuilder *this, int param_1, int param_2, int param_3) {
   ushort uVar1;
   ulong uVar2;
   int iVar3;
   ulong uVar4;
   UCharsTrieBuilder *pUVar5;
   short sVar6;
   uint uVar7;
   short sVar8;
   uVar1 = *(ushort*)( this + 0x18 );
   iVar3 = *(int*)( *(long*)( this + 0x50 ) + (long)param_1 * 8 ) + 1;
   do {
      uVar7 = (int)( (short)uVar1 >> 5 );
      if ((short)uVar1 < 0) {
         uVar7 = *(uint*)( this + 0x1c );
      }

      sVar8 = -1;
      if (( uint )(iVar3 + param_2) < uVar7) {
         pUVar5 = this + 0x1a;
         if (( uVar1 & 2 ) == 0) {
            pUVar5 = *(UCharsTrieBuilder**)( this + 0x28 );
         }

         sVar8 = *(short*)( pUVar5 + (long)( iVar3 + param_2 ) * 2 );
      }

      uVar2 = (long)( param_1 + 1 );
      do {
         uVar4 = uVar2;
         sVar6 = -1;
         iVar3 = *(int*)( *(long*)( this + 0x50 ) + uVar4 * 8 ) + 1;
         if (( uint )(iVar3 + param_2) < uVar7) {
            pUVar5 = this + 0x1a;
            if (( uVar1 & 2 ) == 0) {
               pUVar5 = *(UCharsTrieBuilder**)( this + 0x28 );
            }

            sVar6 = *(short*)( pUVar5 + (long)( iVar3 + param_2 ) * 2 );
         }

         uVar2 = uVar4 + 1;
      }
 while ( sVar8 == sVar6 );
      param_3 = param_3 + -1;
      param_1 = (int)uVar4;
   }
 while ( 0 < param_3 );
   return uVar4 & 0xffffffff;
}
/* icu_76_godot::UCharsTrieBuilder::countElementUnits(int, int, int) const */int icu_76_godot::UCharsTrieBuilder::countElementUnits(UCharsTrieBuilder *this, int param_1, int param_2, int param_3) {
   ushort uVar1;
   long lVar2;
   int iVar3;
   UCharsTrieBuilder *pUVar4;
   short sVar5;
   uint uVar6;
   short sVar7;
   int iVar8;
   iVar8 = 0;
   uVar1 = *(ushort*)( this + 0x18 );
   iVar3 = *(int*)( *(long*)( this + 0x50 ) + (long)param_1 * 8 ) + 1;
   while (true) {
      uVar6 = (int)( (short)uVar1 >> 5 );
      if ((short)uVar1 < 0) {
         uVar6 = *(uint*)( this + 0x1c );
      }

      sVar7 = -1;
      if (( uint )(iVar3 + param_3) < uVar6) {
         pUVar4 = this + 0x1a;
         if (( uVar1 & 2 ) == 0) {
            pUVar4 = *(UCharsTrieBuilder**)( this + 0x28 );
         }

         sVar7 = *(short*)( pUVar4 + (long)( iVar3 + param_3 ) * 2 );
      }

      if (param_2 <= param_1 + 1) break;
      lVar2 = (long)( param_1 + 1 );
      while (true) {
         sVar5 = -1;
         iVar3 = *(int*)( *(long*)( this + 0x50 ) + lVar2 * 8 ) + 1;
         if (( uint )(iVar3 + param_3) < uVar6) {
            pUVar4 = this + 0x1a;
            if (( uVar1 & 2 ) == 0) {
               pUVar4 = *(UCharsTrieBuilder**)( this + 0x28 );
            }

            sVar5 = *(short*)( pUVar4 + (long)( iVar3 + param_3 ) * 2 );
         }

         if (sVar7 != sVar5) break;
         lVar2 = lVar2 + 1;
         if (param_2 <= (int)lVar2) goto LAB_00100410;
      }
;
      param_1 = (int)lVar2;
      iVar8 = iVar8 + 1;
   }
;
   LAB_00100410:return iVar8 + 1;
}
/* icu_76_godot::UCharsTrieBuilder::getElementStringLength(int) const */undefined2 icu_76_godot::UCharsTrieBuilder::getElementStringLength(UCharsTrieBuilder *this, int param_1) {
   ushort uVar1;
   uint uVar2;
   uint uVar3;
   undefined2 uVar4;
   UCharsTrieBuilder *pUVar5;
   uVar1 = *(ushort*)( this + 0x18 );
   uVar2 = *(uint*)( *(long*)( this + 0x50 ) + (long)param_1 * 8 );
   if ((short)uVar1 < 0) {
      uVar3 = *(uint*)( this + 0x1c );
   }
 else {
      uVar3 = ( uint )((short)uVar1 >> 5);
   }

   uVar4 = 0xffff;
   if (uVar2 < uVar3) {
      if (( uVar1 & 2 ) == 0) {
         pUVar5 = *(UCharsTrieBuilder**)( this + 0x28 );
      }
 else {
         pUVar5 = this + 0x1a;
      }

      uVar4 = *(undefined2*)( pUVar5 + (long)(int)uVar2 * 2 );
   }

   return uVar4;
}
/* icu_76_godot::UCharsTrieBuilder::getElementUnit(int, int) const */ulong icu_76_godot::UCharsTrieBuilder::getElementUnit(UCharsTrieBuilder *this, int param_1, int param_2) {
   uint uVar1;
   ushort uVar2;
   uint uVar3;
   ulong uVar4;
   UCharsTrieBuilder *pUVar5;
   uVar1 = *(int*)( *(long*)( this + 0x50 ) + (long)param_1 * 8 ) + 1 + param_2;
   uVar2 = *(ushort*)( this + 0x18 );
   if ((short)uVar2 < 0) {
      uVar3 = *(uint*)( this + 0x1c );
   }
 else {
      uVar3 = ( uint )((short)uVar2 >> 5);
   }

   uVar4 = 0xffffffff;
   if (uVar1 < uVar3) {
      if (( uVar2 & 2 ) == 0) {
         pUVar5 = *(UCharsTrieBuilder**)( this + 0x28 );
      }
 else {
         pUVar5 = this + 0x1a;
      }

      uVar4 = ( ulong ) * (ushort*)( pUVar5 + (long)(int)uVar1 * 2 );
   }

   return uVar4;
}
/* icu_76_godot::UCharsTrieBuilder::buildUChars(UStringTrieBuildOption, UErrorCode&) [clone .part.0]
    */void icu_76_godot::UCharsTrieBuilder::buildUChars(UCharsTrieBuilder *this, undefined4 param_2, int *param_3) {
   char cVar1;
   long lVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   long in_FS_OFFSET;
   UnicodeString local_c8[8];
   ushort local_c0;
   int local_bc;
   UnicodeString local_88[8];
   ushort local_80;
   undefined1 local_7e[2];
   int local_7c;
   undefined8 local_70;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x6c ) == 0) {
      if (*(int*)( this + 0x5c ) == 0) {
         *param_3 = 8;
         goto LAB_00100530;
      }

      if (( (byte)this[0x18] & 1 ) != 0) {
         *param_3 = 7;
         goto LAB_00100530;
      }

      uprv_sortArray_76_godot(*(undefined8*)( this + 0x50 ), *(int*)( this + 0x5c ), 8, compareElementStrings, this + 0x10, 0);
      if (0 < *param_3) goto LAB_00100530;
      iVar6 = 1;
      iVar4 = (int)( this + 0x10 );
      icu_76_godot::UnicodeString::tempSubString((int)local_c8, iVar4);
      if (1 < *(int*)( this + 0x5c )) {
         do {
            icu_76_godot::UnicodeString::tempSubString((int)local_88, iVar4);
            if (( local_c0 & 1 ) == 0) {
               iVar5 = local_bc;
               if (-1 < (short)local_c0) {
                  iVar5 = (int)( (short)local_c0 >> 5 );
               }

               iVar3 = local_7c;
               if (-1 < (short)local_80) {
                  iVar3 = (int)( (short)local_80 >> 5 );
               }

               if (( ( local_80 & 1 ) == 0 ) && ( iVar3 == iVar5 )) {
                  iVar5 = (int)local_7e;
                  if (( local_80 & 2 ) == 0) {
                     iVar5 = (int)local_70;
                  }

                  cVar1 = icu_76_godot::UnicodeString::doEquals((wchar16*)local_c8, iVar5);
                  if (cVar1 != '\0') goto LAB_0010079b;
               }

            }
 else if (( local_80 & 1 ) != 0) {
               LAB_0010079b:*param_3 = 1;
               icu_76_godot::UnicodeString::~UnicodeString(local_88);
               icu_76_godot::UnicodeString::~UnicodeString(local_c8);
               goto LAB_00100530;
            }

            iVar6 = iVar6 + 1;
            icu_76_godot::UnicodeString::fastCopyFrom(local_c8);
            icu_76_godot::UnicodeString::~UnicodeString(local_88);
         }
 while ( iVar6 < *(int*)( this + 0x5c ) );
      }

      icu_76_godot::UnicodeString::~UnicodeString(local_c8);
   }

   *(undefined4*)( this + 0x6c ) = 0;
   iVar4 = 0x400;
   if (*(short*)( this + 0x18 ) < 0) {
      iVar4 = *(int*)( this + 0x1c );
      if (iVar4 < 0x400) {
         iVar4 = 0x400;
      }

      if (*(int*)( this + 0x68 ) < iVar4) goto LAB_0010058c;
   }
 else if (*(int*)( this + 0x68 ) < 0x400) {
      LAB_0010058c:uprv_free_76_godot(*(undefined8*)( this + 0x60 ));
      lVar2 = uprv_malloc_76_godot((long)( iVar4 * 2 ));
      *(long*)( this + 0x60 ) = lVar2;
      if (lVar2 == 0) {
         *param_3 = 7;
         *(undefined4*)( this + 0x68 ) = 0;
         goto LAB_00100530;
      }

      *(int*)( this + 0x68 ) = iVar4;
   }

   icu_76_godot::StringTrieBuilder::build(this, param_2, *(undefined4*)( this + 0x5c ), param_3);
   if (*(long*)( this + 0x60 ) == 0) {
      *param_3 = 7;
   }

   LAB_00100530:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::UCharsTrieBuilder::getLimitOfLinearMatch(int, int, int) const */void icu_76_godot::UCharsTrieBuilder::getLimitOfLinearMatch(UCharsTrieBuilder *this, int param_1, int param_2, int param_3) {
   ushort uVar1;
   uint uVar2;
   UCharsTrieBuilder *pUVar3;
   short sVar4;
   uint uVar5;
   uint uVar6;
   uint uVar7;
   long lVar8;
   short sVar9;
   uVar1 = *(ushort*)( this + 0x18 );
   uVar2 = *(uint*)( *(long*)( this + 0x50 ) + (long)param_1 * 8 );
   if ((short)uVar1 < 0) {
      uVar6 = *(uint*)( this + 0x1c );
   }
 else {
      uVar6 = ( uint )((short)uVar1 >> 5);
   }

   if (uVar2 < uVar6) {
      pUVar3 = this + 0x1a;
      if (( uVar1 & 2 ) == 0) {
         pUVar3 = *(UCharsTrieBuilder**)( this + 0x28 );
      }

      uVar7 = ( uint ) * (ushort*)( pUVar3 + (long)(int)uVar2 * 2 );
   }
 else {
      uVar7 = 0xffff;
   }

   lVar8 = ( (long)param_3 + 2 + (long)(int)uVar2 ) * 2;
   do {
      if ((int)uVar7 <= param_3 + 1) {
         return;
      }

      uVar5 = param_3 + 2 + *(int*)( *(long*)( this + 0x50 ) + (long)param_2 * 8 );
      pUVar3 = this + 0x1a;
      if (uVar2 + 2 + param_3 < uVar6) {
         if (( uVar1 & 2 ) == 0) {
            sVar9 = *(short*)( *(UCharsTrieBuilder**)( this + 0x28 ) + lVar8 );
            pUVar3 = *(UCharsTrieBuilder**)( this + 0x28 );
            if (uVar5 < uVar6) goto LAB_001008ba;
            LAB_001008dd:sVar4 = -1;
         }
 else {
            sVar9 = *(short*)( this + lVar8 + 0x1a );
            if (uVar6 <= uVar5) goto LAB_001008dd;
            LAB_001008ba:sVar4 = *(short*)( pUVar3 + (long)(int)uVar5 * 2 );
         }

         if (sVar4 != sVar9) {
            return;
         }

      }
 else if (uVar5 < uVar6) {
         sVar9 = -1;
         if (( uVar1 & 2 ) == 0) {
            pUVar3 = *(UCharsTrieBuilder**)( this + 0x28 );
         }

         goto LAB_001008ba;
      }

      lVar8 = lVar8 + 2;
      param_3 = param_3 + 1;
   }
 while ( true );
}
/* icu_76_godot::UCharsTrieBuilder::createLinearMatchNode(int, int, int,
   icu_76_godot::StringTrieBuilder::Node*) const */undefined8 * __thiscall
icu_76_godot::UCharsTrieBuilder::createLinearMatchNode
          (UCharsTrieBuilder *this,int param_1,int param_2,int param_3,Node *param_4){
   int iVar1;
   undefined8 *puVar2;
   undefined1 *puVar3;
   undefined4 in_register_00000034;
   int iVar4;
   long in_FS_OFFSET;
   UnicodeString aUStack_88[8];
   ushort local_80;
   undefined1 local_7e[14];
   undefined1 *local_70;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar2 = (undefined8*)icu_76_godot::UMemory::operator_new((UMemory*)0x30, CONCAT44(in_register_00000034, param_1));
   if (puVar2 != (undefined8*)0x0) {
      icu_76_godot::UnicodeString::tempSubString((int)aUStack_88, (int)this + 0x10);
      if (( local_80 & 0x11 ) == 0) {
         puVar3 = local_7e;
         if (( local_80 & 2 ) == 0) {
            puVar3 = local_70;
         }

      }
 else {
         puVar3 = (undefined1*)0x0;
      }

      iVar1 = 0;
      if (param_4 != (Node*)0x0) {
         iVar1 = *(int*)( param_4 + 8 );
      }

      iVar4 = iVar1 + 0x11cccbbb + param_3 * 0x25;
      puVar2[5] = puVar3 + (long)param_2 * 2;
      *(int*)( puVar2 + 1 ) = iVar4;
      *(undefined4*)( (long)puVar2 + 0xc ) = 0;
      *(undefined1*)( puVar2 + 2 ) = 0;
      *(undefined4*)( (long)puVar2 + 0x14 ) = 0;
      *(int*)( puVar2 + 3 ) = param_3;
      puVar2[4] = param_4;
      *puVar2 = &PTR__UCTLinearMatchNode_00101960;
      iVar1 = ustr_hashUCharsN_76_godot(puVar3 + (long)param_2 * 2, param_3);
      *(int*)( puVar2 + 1 ) = iVar4 * 0x25 + iVar1;
      icu_76_godot::UnicodeString::~UnicodeString(aUStack_88);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar2;
}
/* icu_76_godot::UCharsTrieElement::setTo(icu_76_godot::UnicodeString const&, int,
   icu_76_godot::UnicodeString&, UErrorCode&) */void icu_76_godot::UCharsTrieElement::setTo(UCharsTrieElement *this, UnicodeString *param_1, int param_2, UnicodeString *param_3, UErrorCode *param_4) {
   if (*(int*)param_4 < 1) {
      setTo(this, param_1, param_2, param_3, param_4);
      return;
   }

   return;
}
/* icu_76_godot::UCharsTrieElement::compareStringTo(icu_76_godot::UCharsTrieElement const&,
   icu_76_godot::UnicodeString const&) const */int icu_76_godot::UCharsTrieElement::compareStringTo(UCharsTrieElement *this, UCharsTrieElement *param_1, UnicodeString *param_2) {
   byte bVar1;
   int iVar2;
   int iVar3;
   long in_FS_OFFSET;
   UnicodeString aUStack_a8[8];
   short local_a0;
   uint local_9c;
   UnicodeString local_68[8];
   ushort local_60;
   undefined1 local_5e[2];
   int local_5c;
   int local_50;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = (int)aUStack_a8;
   icu_76_godot::UnicodeString::tempSubString(iVar2, (int)param_2);
   icu_76_godot::UnicodeString::tempSubString((int)local_68, (int)param_2);
   if (-1 < (short)local_60) {
      local_5c = (int)( (short)local_60 >> 5 );
   }

   if (-1 < local_a0) {
      local_9c = ( uint )(local_a0 >> 5);
   }

   if (( local_60 & 1 ) == 0) {
      iVar3 = 0;
      if (local_5c < 0) {
         iVar3 = local_5c;
      }

      if (( local_60 & 2 ) == 0) {
         bVar1 = icu_76_godot::UnicodeString::doCompare(iVar2, 0, (wchar16*)(ulong)local_9c, local_50, iVar3);
      }
 else {
         bVar1 = icu_76_godot::UnicodeString::doCompare(iVar2, 0, (wchar16*)(ulong)local_9c, (int)local_5e, iVar3);
      }

   }
 else {
      bVar1 = ~(byte)local_a0 & 1;
   }

   icu_76_godot::UnicodeString::~UnicodeString(local_68);
   icu_76_godot::UnicodeString::~UnicodeString(aUStack_a8);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (int)(char)bVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void compareElementStrings(UnicodeString *param_1, UCharsTrieElement *param_2, UCharsTrieElement *param_3) {
   icu_76_godot::UCharsTrieElement::compareStringTo(param_2, param_3, param_1);
   return;
}
/* icu_76_godot::UCharsTrieBuilder::UCharsTrieBuilder(UErrorCode&) */void icu_76_godot::UCharsTrieBuilder::UCharsTrieBuilder(UCharsTrieBuilder *this, UErrorCode *param_1) {
   icu_76_godot::StringTrieBuilder::StringTrieBuilder((StringTrieBuilder*)this);
   *(undefined8*)( this + 0x50 ) = 0;
   *(undefined***)this = &PTR__UCharsTrieBuilder_001018b0;
   *(code**)( this + 0x10 ) = memcpy;
   *(undefined2*)( this + 0x18 ) = 2;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 8*i + 88 ) ) = 0;
   }

   return;
}
/* icu_76_godot::UCharsTrieBuilder::add(icu_76_godot::UnicodeString const&, int, UErrorCode&) */UCharsTrieBuilder * __thiscall
icu_76_godot::UCharsTrieBuilder::add
          (UCharsTrieBuilder *this,UnicodeString *param_1,int param_2,UErrorCode *param_3){
   int iVar1;
   int iVar2;
   void *__dest;
   UnicodeString *__src;
   UMemory *this_00;
   int iVar3;
   if (0 < *(int*)param_3) {
      return this;
   }

   if (0 < *(int*)( this + 0x6c )) {
      *(undefined4*)param_3 = 0x1e;
      return this;
   }

   iVar1 = *(int*)( this + 0x5c );
   if (iVar1 == *(int*)( this + 0x58 )) {
      if (iVar1 == 0) {
         this_00 = (UMemory*)0x2000;
         iVar3 = 0x400;
      }
 else {
         iVar3 = iVar1 * 4;
         this_00 = (UMemory*)( (long)iVar3 * 8 );
         if (0xfffffffffffffff < (ulong)(long)iVar3) {
            this_00 = (UMemory*)0xffffffffffffffff;
         }

      }

      __src = param_1;
      __dest = icu_76_godot::UMemory::operator_new__(this_00, (ulong)param_1);
      if (__dest == (void*)0x0) goto LAB_00100d81;
      if (0 < *(int*)( this + 0x5c )) {
         __src = *(UnicodeString**)( this + 0x50 );
         memcpy(__dest, __src, (long)*(int*)( this + 0x5c ) * 8);
      }

      if (*(UMemory**)( this + 0x50 ) != (UMemory*)0x0) {
         icu_76_godot::UMemory::operator_delete__(*(UMemory**)( this + 0x50 ), __src);
      }

      iVar1 = *(int*)( this + 0x5c );
      iVar2 = *(int*)param_3;
      *(void**)( this + 0x50 ) = __dest;
      *(int*)( this + 0x58 ) = iVar3;
      *(int*)( this + 0x5c ) = iVar1 + 1;
      if (0 < iVar2) {
         return this;
      }

   }
 else {
      __dest = *(void**)( this + 0x50 );
      *(int*)( this + 0x5c ) = iVar1 + 1;
   }

   UCharsTrieElement::setTo((UCharsTrieElement*)( (long)__dest + (long)iVar1 * 8 ), param_1, param_2, (UnicodeString*)( this + 0x10 ), param_3);
   if (0 < *(int*)param_3) {
      return this;
   }

   if (( (byte)this[0x18] & 1 ) == 0) {
      return this;
   }

   LAB_00100d81:*(undefined4*)param_3 = 7;
   return this;
}
/* icu_76_godot::UCharsTrieBuilder::build(UStringTrieBuildOption, UErrorCode&) */long *__thiscallicu_76_godot::UCharsTrieBuilder::build(UCharsTrieBuilder *this, ulong param_2, int *param_3) {
   long lVar1;
   int iVar2;
   int iVar3;
   long lVar4;
   long *plVar5;
   if (0 < *param_3) {
      return (long*)0x0;
   }

   if (( ( *(long*)( this + 0x60 ) != 0 ) && ( 0 < *(int*)( this + 0x6c ) ) ) || ( buildUChars(this, param_2, param_3),*param_3 < 1 )) {
      plVar5 = (long*)icu_76_godot::UMemory::operator_new((UMemory*)0x20, param_2);
      if (plVar5 != (long*)0x0) {
         lVar4 = *(long*)( this + 0x60 );
         iVar2 = *(int*)( this + 0x68 );
         iVar3 = *(int*)( this + 0x6c );
         *(undefined4*)( plVar5 + 3 ) = 0xffffffff;
         lVar1 = lVar4 + (long)( iVar2 - iVar3 ) * 2;
         plVar5[2] = lVar1;
         *plVar5 = lVar4;
         plVar5[1] = lVar1;
         *(undefined8*)( this + 0x60 ) = 0;
         *(undefined4*)( this + 0x68 ) = 0;
         return plVar5;
      }

      *param_3 = 7;
   }

   return (long*)0x0;
}
/* icu_76_godot::UCharsTrieBuilder::buildUnicodeString(UStringTrieBuildOption,
   icu_76_godot::UnicodeString&, UErrorCode&) */undefined8 icu_76_godot::UCharsTrieBuilder::buildUnicodeString(UCharsTrieBuilder *this, undefined8 param_2, undefined8 param_3, int *param_4) {
   int iVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_4 < 1) {
      lVar2 = *(long*)( this + 0x60 );
      if (( lVar2 == 0 ) || ( iVar1 = iVar1 < 1 )) {
         buildUChars(this, param_2, param_4);
         if (0 < *param_4) goto LAB_00100f3c;
         iVar1 = *(int*)( this + 0x6c );
         lVar2 = *(long*)( this + 0x60 );
      }

      local_28 = lVar2 + (long)( *(int*)( this + 0x68 ) - iVar1 ) * 2;
      icu_76_godot::UnicodeString::setTo(param_3, 0, &local_28);
   }

   LAB_00100f3c:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::UCharsTrieBuilder::buildUChars(UStringTrieBuildOption, UErrorCode&) */void icu_76_godot::UCharsTrieBuilder::buildUChars(UCharsTrieBuilder *this, undefined8 param_2, int *param_3) {
   if (( *param_3 < 1 ) && ( ( *(long*)( this + 0x60 ) == 0 || ( *(int*)( this + 0x6c ) < 1 ) ) )) {
      buildUChars();
      return;
   }

   return;
}
/* icu_76_godot::UCharsTrieBuilder::UCTLinearMatchNode::UCTLinearMatchNode(char16_t const*, int,
   icu_76_godot::StringTrieBuilder::Node*) */void icu_76_godot::UCharsTrieBuilder::UCTLinearMatchNode::UCTLinearMatchNode(UCTLinearMatchNode *this, wchar16 *param_1, int param_2, Node *param_3) {
   int iVar1;
   int iVar2;
   iVar1 = 0;
   if (param_3 != (Node*)0x0) {
      iVar1 = *(int*)( param_3 + 8 );
   }

   iVar2 = iVar1 + 0x11cccbbb + param_2 * 0x25;
   *(undefined4*)( this + 0xc ) = 0;
   *(int*)( this + 8 ) = iVar2;
   this[0x10] = (UCTLinearMatchNode)0x0;
   *(undefined4*)( this + 0x14 ) = 0;
   *(int*)( this + 0x18 ) = param_2;
   *(Node**)( this + 0x20 ) = param_3;
   *(undefined***)this = &PTR__UCTLinearMatchNode_00101960;
   *(wchar16**)( this + 0x28 ) = param_1;
   iVar1 = ustr_hashUCharsN_76_godot();
   *(int*)( this + 8 ) = iVar2 * 0x25 + iVar1;
   return;
}
/* icu_76_godot::UCharsTrieBuilder::ensureCapacity(int) */undefined8 icu_76_godot::UCharsTrieBuilder::ensureCapacity(UCharsTrieBuilder *this, int param_1) {
   int iVar1;
   long lVar2;
   int iVar3;
   if (*(long*)( this + 0x60 ) == 0) {
      return 0;
   }

   iVar1 = *(int*)( this + 0x68 );
   if (*(int*)( this + 0x68 ) < param_1) {
      do {
         iVar3 = iVar1;
         iVar1 = iVar3 * 2;
      }
 while ( SBORROW4(param_1, iVar1) == param_1 + iVar3 * -2 < 0 );
      lVar2 = uprv_malloc_76_godot((long)( iVar3 << 2 ));
      if (lVar2 == 0) {
         uprv_free_76_godot(*(undefined8*)( this + 0x60 ));
         *(undefined8*)( this + 0x60 ) = 0;
         *(undefined4*)( this + 0x68 ) = 0;
         return 0;
      }

      u_memcpy_76_godot(lVar2 + (long)( iVar1 - *(int*)( this + 0x6c ) ) * 2, *(long*)( this + 0x60 ) + (long)( *(int*)( this + 0x68 ) - *(int*)( this + 0x6c ) ) * 2);
      uprv_free_76_godot(*(undefined8*)( this + 0x60 ));
      *(long*)( this + 0x60 ) = lVar2;
      *(int*)( this + 0x68 ) = iVar1;
   }

   return 1;
}
/* icu_76_godot::UCharsTrieBuilder::write(int) */int icu_76_godot::UCharsTrieBuilder::write(UCharsTrieBuilder *this, int param_1) {
   int iVar1;
   char cVar2;
   iVar1 = *(int*)( this + 0x6c ) + 1;
   cVar2 = ensureCapacity(this, iVar1);
   if (cVar2 == '\0') {
      return *(int*)( this + 0x6c );
   }

   *(int*)( this + 0x6c ) = iVar1;
   *(short*)( *(long*)( this + 0x60 ) + (long)( *(int*)( this + 0x68 ) - iVar1 ) * 2 ) = (short)param_1;
   return iVar1;
}
/* icu_76_godot::UCharsTrieBuilder::writeElementUnits(int, int, int) */undefined4 icu_76_godot::UCharsTrieBuilder::writeElementUnits(UCharsTrieBuilder *this, int param_1, int param_2, int param_3) {
   undefined4 uVar1;
   char cVar2;
   undefined1 *puVar3;
   int iVar4;
   long in_FS_OFFSET;
   UnicodeString aUStack_88[8];
   ushort local_80;
   undefined1 local_7e[14];
   undefined1 *local_70;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   icu_76_godot::UnicodeString::tempSubString((int)aUStack_88, (int)this + 0x10);
   if (( local_80 & 0x11 ) == 0) {
      puVar3 = local_7e;
      if (( local_80 & 2 ) == 0) {
         puVar3 = local_70;
      }

   }
 else {
      puVar3 = (undefined1*)0x0;
   }

   iVar4 = *(int*)( this + 0x6c ) + param_3;
   cVar2 = ensureCapacity(this, iVar4);
   if (cVar2 != '\0') {
      *(int*)( this + 0x6c ) = iVar4;
      u_memcpy_76_godot(*(long*)( this + 0x60 ) + (long)( *(int*)( this + 0x68 ) - iVar4 ) * 2, puVar3 + (long)param_2 * 2, param_3);
   }

   uVar1 = *(undefined4*)( this + 0x6c );
   icu_76_godot::UnicodeString::~UnicodeString(aUStack_88);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar1;
}
/* icu_76_godot::UCharsTrieBuilder::UCTLinearMatchNode::write(icu_76_godot::StringTrieBuilder&) */void icu_76_godot::UCharsTrieBuilder::UCTLinearMatchNode::write(UCTLinearMatchNode *this, StringTrieBuilder *param_1) {
   undefined8 uVar1;
   code *pcVar2;
   code *pcVar3;
   char cVar4;
   undefined4 uVar5;
   int iVar6;
   int iVar7;
   ( **(code**)( **(long**)( this + 0x20 ) + 0x28 ) )();
   iVar6 = *(int*)( this + 0x18 );
   uVar1 = *(undefined8*)( this + 0x28 );
   iVar7 = *(int*)( param_1 + 0x6c ) + iVar6;
   cVar4 = ensureCapacity((UCharsTrieBuilder*)param_1, iVar7);
   if (cVar4 != '\0') {
      *(int*)( param_1 + 0x6c ) = iVar7;
      u_memcpy_76_godot(*(long*)( param_1 + 0x60 ) + (long)( *(int*)( param_1 + 0x68 ) - iVar7 ) * 2, uVar1, iVar6);
   }

   iVar6 = 0x30;
   pcVar2 = *(code**)( *(long*)param_1 + 0x90 );
   pcVar3 = *(code**)( *(long*)param_1 + 0x60 );
   if (pcVar3 != getMinLinearMatch) {
      iVar6 = ( *pcVar3 )(param_1);
   }

   uVar5 = ( *pcVar2 )(param_1, (int)(char)this[0x10], *(undefined4*)( this + 0x14 ), iVar6 + *(int*)( this + 0x18 ) + -1);
   *(undefined4*)( this + 0xc ) = uVar5;
   return;
}
/* icu_76_godot::UCharsTrieBuilder::writeDeltaTo(int) */ulong icu_76_godot::UCharsTrieBuilder::writeDeltaTo(UCharsTrieBuilder *this, int param_1) {
   int iVar1;
   uint uVar2;
   char cVar3;
   ulong uVar4;
   short sVar5;
   long lVar6;
   int iVar7;
   int iVar8;
   long in_FS_OFFSET;
   short local_36[3];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = *(int*)( this + 0x6c );
   iVar7 = iVar1 - param_1;
   if (iVar7 < 0xfc00) {
      if (*(code**)( *(long*)this + 0x78 ) != write) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x0010142d. Too many branches */
            /* WARNING: Treating indirect jump as call */
            uVar4 = ( **(code**)( *(long*)this + 0x78 ) )(this, iVar7);
            return uVar4;
         }

         goto LAB_00101451;
      }

      uVar2 = iVar1 + 1;
      cVar3 = ensureCapacity(this, uVar2);
      if (cVar3 == '\0') goto LAB_001013d1;
      *(uint*)( this + 0x6c ) = uVar2;
      *(short*)( *(long*)( this + 0x60 ) + (long)(int)( *(int*)( this + 0x68 ) - uVar2 ) * 2 ) = (short)iVar7;
   }
 else {
      sVar5 = (short)( (uint)iVar7 >> 0x10 );
      if (iVar7 < 0x3ff0000) {
         local_36[0] = sVar5 + -0x400;
         iVar8 = 2;
         lVar6 = 1;
      }
 else {
         iVar8 = 3;
         local_36[0] = -1;
         lVar6 = 2;
         local_36[1] = sVar5;
      }

      iVar1 = iVar1 + iVar8;
      local_36[lVar6] = (short)iVar7;
      cVar3 = ensureCapacity(this, iVar1);
      if (cVar3 != '\0') {
         *(int*)( this + 0x6c ) = iVar1;
         u_memcpy_76_godot(*(long*)( this + 0x60 ) + (long)( *(int*)( this + 0x68 ) - iVar1 ) * 2, local_36, iVar8);
      }

      LAB_001013d1:uVar2 = *(uint*)( this + 0x6c );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (ulong)uVar2;
   }

   LAB_00101451:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* icu_76_godot::UCharsTrieBuilder::writeValueAndFinal(int, signed char) */ulong icu_76_godot::UCharsTrieBuilder::writeValueAndFinal(UCharsTrieBuilder *this, uint param_1, int param_3) {
   uint uVar1;
   char cVar2;
   ulong uVar3;
   int iVar4;
   int iVar5;
   long in_FS_OFFSET;
   ushort local_26;
   short local_24;
   short local_22;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 < 0x4000) {
      param_1 = (int)(char)param_3 << 0xf | param_1;
      if (*(code**)( *(long*)this + 0x78 ) != write) {
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x0010156a. Too many branches */
            /* WARNING: Treating indirect jump as call */
            uVar3 = ( **(code**)( *(long*)this + 0x78 ) )(this, param_1);
            return uVar3;
         }

         goto LAB_00101594;
      }

      uVar1 = *(int*)( this + 0x6c ) + 1;
      cVar2 = ensureCapacity(this, uVar1);
      if (cVar2 == '\0') goto LAB_00101514;
      *(uint*)( this + 0x6c ) = uVar1;
      *(short*)( *(long*)( this + 0x60 ) + (long)(int)( *(int*)( this + 0x68 ) - uVar1 ) * 2 ) = (short)param_1;
   }
 else {
      local_24 = (short)( param_1 >> 0x10 );
      if (param_1 < 0x3fff0000) {
         iVar5 = 2;
         local_26 = local_24 + 0x4000;
         local_24 = (short)param_1;
      }
 else {
         iVar5 = 3;
         local_26 = 0x7fff;
         local_22 = (short)param_1;
      }

      local_26 = ( ushort )(param_3 << 0xf) | local_26;
      iVar4 = *(int*)( this + 0x6c ) + iVar5;
      cVar2 = ensureCapacity(this, iVar4);
      if (cVar2 != '\0') {
         *(int*)( this + 0x6c ) = iVar4;
         u_memcpy_76_godot(*(long*)( this + 0x60 ) + (long)( *(int*)( this + 0x68 ) - iVar4 ) * 2, &local_26, iVar5);
      }

      LAB_00101514:uVar1 = *(uint*)( this + 0x6c );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (ulong)uVar1;
   }

   LAB_00101594:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* icu_76_godot::UCharsTrieBuilder::writeValueAndType(signed char, int, int) */ulong icu_76_godot::UCharsTrieBuilder::writeValueAndType(UCharsTrieBuilder *this, char param_2, uint param_3, undefined4 param_4) {
   uint uVar1;
   char cVar2;
   ulong uVar3;
   short sVar4;
   int iVar5;
   int iVar6;
   long in_FS_OFFSET;
   ushort local_36;
   short local_34;
   short local_32;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == '\0') {
      if (*(code**)( *(long*)this + 0x78 ) != write) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x001016dc. Too many branches */
            /* WARNING: Treating indirect jump as call */
            uVar3 = ( **(code**)( *(long*)this + 0x78 ) )(this, param_4);
            return uVar3;
         }

         goto LAB_00101704;
      }

      uVar1 = *(int*)( this + 0x6c ) + 1;
      cVar2 = ensureCapacity(this, uVar1);
      if (cVar2 == '\0') goto LAB_00101652;
      *(uint*)( this + 0x6c ) = uVar1;
      *(ushort*)( *(long*)( this + 0x60 ) + (long)(int)( *(int*)( this + 0x68 ) - uVar1 ) * 2 ) = (ushort)param_4;
   }
 else {
      sVar4 = (short)param_3;
      if (param_3 < 0xfe0000) {
         if ((int)param_3 < 0x100) {
            iVar6 = 1;
            local_36 = ( sVar4 + 1 ) * 0x40;
         }
 else {
            iVar6 = 2;
            local_36 = ( ( ushort )((int)param_3 >> 10) & 0x7fc0 ) + 0x4040;
            local_34 = sVar4;
         }

      }
 else {
         iVar6 = 3;
         local_36 = 0x7fc0;
         local_34 = (short)( param_3 >> 0x10 );
         local_32 = sVar4;
      }

      local_36 = local_36 | (ushort)param_4;
      iVar5 = *(int*)( this + 0x6c ) + iVar6;
      cVar2 = ensureCapacity(this, iVar5);
      if (cVar2 != '\0') {
         *(int*)( this + 0x6c ) = iVar5;
         u_memcpy_76_godot(*(long*)( this + 0x60 ) + (long)( *(int*)( this + 0x68 ) - iVar5 ) * 2, &local_36, iVar6);
      }

      LAB_00101652:uVar1 = *(uint*)( this + 0x6c );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (ulong)uVar1;
   }

   LAB_00101704:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* icu_76_godot::UCharsTrieBuilder::write(char16_t const*, int) */undefined4 icu_76_godot::UCharsTrieBuilder::write(UCharsTrieBuilder *this, wchar16 *param_1, int param_2) {
   char cVar1;
   int iVar2;
   iVar2 = *(int*)( this + 0x6c ) + param_2;
   cVar1 = ensureCapacity(this, iVar2);
   if (cVar1 == '\0') {
      return *(undefined4*)( this + 0x6c );
   }

   *(int*)( this + 0x6c ) = iVar2;
   u_memcpy_76_godot(*(long*)( this + 0x60 ) + (long)( *(int*)( this + 0x68 ) - iVar2 ) * 2, param_1, param_2);
   return *(undefined4*)( this + 0x6c );
}
/* icu_76_godot::UCharsTrieBuilder::matchNodesCanHaveValues() const */undefined8 icu_76_godot::UCharsTrieBuilder::matchNodesCanHaveValues(void) {
   return 1;
}
/* icu_76_godot::UCharsTrieBuilder::getMaxBranchLinearSubNodeLength() const */undefined8 icu_76_godot::UCharsTrieBuilder::getMaxBranchLinearSubNodeLength(void) {
   return 5;
}
/* icu_76_godot::UCharsTrieBuilder::getMinLinearMatch() const */undefined8 icu_76_godot::UCharsTrieBuilder::getMinLinearMatch(void) {
   return 0x30;
}
/* icu_76_godot::UCharsTrieBuilder::getMaxLinearMatchLength() const */undefined8 icu_76_godot::UCharsTrieBuilder::getMaxLinearMatchLength(void) {
   return 0x10;
}
/* icu_76_godot::UCharsTrieBuilder::UCTLinearMatchNode::~UCTLinearMatchNode() */void icu_76_godot::UCharsTrieBuilder::UCTLinearMatchNode::~UCTLinearMatchNode(UCTLinearMatchNode *this) {
   *(code**)this = icu_76_godot::UMemory::operator_delete;
   icu_76_godot::UObject::~UObject((UObject*)this);
   return;
}
/* icu_76_godot::UCharsTrieBuilder::UCTLinearMatchNode::~UCTLinearMatchNode() */void icu_76_godot::UCharsTrieBuilder::UCTLinearMatchNode::~UCTLinearMatchNode(UCTLinearMatchNode *this) {
   void *in_RSI;
   *(code**)this = icu_76_godot::UMemory::operator_delete;
   icu_76_godot::UObject::~UObject((UObject*)this);
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* icu_76_godot::UCharsTrieBuilder::UCTLinearMatchNode::~UCTLinearMatchNode() */void icu_76_godot::UCharsTrieBuilder::UCTLinearMatchNode::~UCTLinearMatchNode(UCTLinearMatchNode *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

