/* icu_76_godot::UStringSet::~UStringSet() */void icu_76_godot::UStringSet::~UStringSet(UStringSet *this) {
   *(undefined***)this = &PTR__UStringSet_00102800;
   icu_76_godot::UVector::~UVector((UVector*)this);
   return;
}/* icu_76_godot::UStringSet::~UStringSet() */void icu_76_godot::UStringSet::~UStringSet(UStringSet *this) {
   void *in_RSI;
   *(undefined***)this = &PTR__UStringSet_00102800;
   icu_76_godot::UVector::~UVector((UVector*)this);
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}/* icu_76_godot::SimpleFilteredBreakIteratorBuilder::unsuppressBreakAfter(icu_76_godot::UnicodeString
   const&, UErrorCode&) */undefined8 icu_76_godot::SimpleFilteredBreakIteratorBuilder::unsuppressBreakAfter(SimpleFilteredBreakIteratorBuilder *this, UnicodeString *param_1, UErrorCode *param_2) {
   undefined8 uVar1;
   if (0 < *(int*)param_2) {
      return 0;
   }
   uVar1 = icu_76_godot::UVector::removeElement(this + 8);
   return uVar1;
}/* icu_76_godot::SimpleFilteredBreakIteratorBuilder::~SimpleFilteredBreakIteratorBuilder() */void icu_76_godot::SimpleFilteredBreakIteratorBuilder::~SimpleFilteredBreakIteratorBuilder(SimpleFilteredBreakIteratorBuilder *this) {
   *(undefined***)this = &PTR__SimpleFilteredBreakIteratorBuilder_00102910;
   *(undefined***)( this + 8 ) = &PTR__UStringSet_00102800;
   icu_76_godot::UVector::~UVector((UVector*)( this + 8 ));
   *(undefined**)this = &DAT_00102950;
   icu_76_godot::UObject::~UObject((UObject*)this);
   return;
}/* icu_76_godot::SimpleFilteredBreakIteratorBuilder::~SimpleFilteredBreakIteratorBuilder() */void icu_76_godot::SimpleFilteredBreakIteratorBuilder::~SimpleFilteredBreakIteratorBuilder(SimpleFilteredBreakIteratorBuilder *this) {
   void *in_RSI;
   *(undefined***)this = &PTR__SimpleFilteredBreakIteratorBuilder_00102910;
   *(undefined***)( this + 8 ) = &PTR__UStringSet_00102800;
   icu_76_godot::UVector::~UVector((UVector*)( this + 8 ));
   *(undefined**)this = &DAT_00102950;
   icu_76_godot::UObject::~UObject((UObject*)this);
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}/* icu_76_godot::SimpleFilteredSentenceBreakData::~SimpleFilteredSentenceBreakData() */void icu_76_godot::SimpleFilteredSentenceBreakData::~SimpleFilteredSentenceBreakData(SimpleFilteredSentenceBreakData *this) {
   UCharsTrie *pUVar1;
   void *in_RSI;
   pUVar1 = *(UCharsTrie**)( this + 0x10 );
   *(undefined***)this = &PTR__SimpleFilteredSentenceBreakData_00102828;
   if (pUVar1 != (UCharsTrie*)0x0) {
      icu_76_godot::UCharsTrie::~UCharsTrie(pUVar1);
      icu_76_godot::UMemory::operator_delete((UMemory*)pUVar1, in_RSI);
   }
   pUVar1 = *(UCharsTrie**)( this + 8 );
   if (pUVar1 != (UCharsTrie*)0x0) {
      icu_76_godot::UCharsTrie::~UCharsTrie(pUVar1);
      icu_76_godot::UMemory::operator_delete((UMemory*)pUVar1, in_RSI);
      return;
   }
   return;
}/* icu_76_godot::SimpleFilteredSentenceBreakData::~SimpleFilteredSentenceBreakData() */void icu_76_godot::SimpleFilteredSentenceBreakData::~SimpleFilteredSentenceBreakData(SimpleFilteredSentenceBreakData *this) {
   UCharsTrie *pUVar1;
   void *in_RSI;
   pUVar1 = *(UCharsTrie**)( this + 0x10 );
   *(undefined***)this = &PTR__SimpleFilteredSentenceBreakData_00102828;
   if (pUVar1 != (UCharsTrie*)0x0) {
      icu_76_godot::UCharsTrie::~UCharsTrie(pUVar1);
      icu_76_godot::UMemory::operator_delete((UMemory*)pUVar1, in_RSI);
   }
   pUVar1 = *(UCharsTrie**)( this + 8 );
   if (pUVar1 != (UCharsTrie*)0x0) {
      icu_76_godot::UCharsTrie::~UCharsTrie(pUVar1);
      icu_76_godot::UMemory::operator_delete((UMemory*)pUVar1, in_RSI);
   }
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}/* icu_76_godot::FilteredBreakIteratorBuilder::createEmptyInstance(UErrorCode&) [clone .part.0] */UObject * __thiscall
icu_76_godot::FilteredBreakIteratorBuilder::createEmptyInstance
          (FilteredBreakIteratorBuilder *this,UErrorCode *param_1){
   UObject *this_00;
   undefined *puVar1;
   this_00 = (UObject*)icu_76_godot::UMemory::operator_new((UMemory*)0x30, (ulong)param_1);
   if (this_00 == (UObject*)0x0) {
      if (*(int*)this < 1) {
         *(undefined4*)this = 7;
         return (UObject*)0x0;
      }
   } else {
      puVar1 = &uprv_deleteUObject_76_godot;
      *(undefined***)this_00 = &PTR__SimpleFilteredBreakIteratorBuilder_00102910;
      icu_76_godot::UVector::UVector((UVector*)( this_00 + 8 ), (_func_void_void_ptr*)&uprv_deleteUObject_76_godot, (_func_signed_UElement_UElement*)&uhash_compareUnicodeString_76_godot, 1, (UErrorCode*)this);
      *(undefined***)( this_00 + 8 ) = &PTR__UStringSet_00102800;
      if (*(int*)this < 1) {
         return this_00;
      }
      if (*(code**)( *(long*)this_00 + 8 ) != SimpleFilteredBreakIteratorBuilder::~SimpleFilteredBreakIteratorBuilder) {
         ( **(code**)( *(long*)this_00 + 8 ) )(this_00);
         return (UObject*)0x0;
      }
      *(undefined***)this_00 = &PTR__SimpleFilteredBreakIteratorBuilder_00102910;
      icu_76_godot::UVector::~UVector((UVector*)( this_00 + 8 ));
      *(undefined**)this_00 = &DAT_00102950;
      icu_76_godot::UObject::~UObject(this_00);
      icu_76_godot::UMemory::operator_delete((UMemory*)this_00, puVar1);
   }
   return (UObject*)0x0;
}/* icu_76_godot::SimpleFilteredBreakIteratorBuilder::suppressBreakAfter(icu_76_godot::UnicodeString
   const&, UErrorCode&) */undefined4 icu_76_godot::SimpleFilteredBreakIteratorBuilder::suppressBreakAfter(SimpleFilteredBreakIteratorBuilder *this, UnicodeString *param_1, UErrorCode *param_2) {
   int iVar1;
   UnicodeString *this_00;
   if (0 < *(int*)param_2) {
      return 0;
   }
   this_00 = (UnicodeString*)icu_76_godot::UMemory::operator_new((UMemory*)0x40, (ulong)param_1);
   if (this_00 == (UnicodeString*)0x0) {
      *(undefined4*)param_2 = 7;
   } else {
      icu_76_godot::UnicodeString::UnicodeString(this_00, param_1);
      if (*(int*)param_2 < 1) {
         iVar1 = icu_76_godot::UVector::indexOf(this + 8, (int)this_00);
         if (iVar1 < 0) {
            icu_76_godot::UVector::sortedInsert(this + 8, (_func_int_UElement_UElement*)this_00, (UErrorCode*)compareUnicodeString);
            return CONCAT31(( int3 )(( uint ) * (int*)param_2 >> 8), *(int*)param_2 < 1);
         }
      }
      icu_76_godot::UnicodeString::~UnicodeString(this_00);
   }
   return 0;
}/* icu_76_godot::compareUnicodeString(UElement, UElement) */int icu_76_godot::compareUnicodeString(long param_1, long param_2) {
   ushort uVar1;
   short sVar2;
   char cVar3;
   uint uVar4;
   int iVar5;
   int iVar6;
   uVar1 = *(ushort*)( param_2 + 8 );
   if ((short)uVar1 < 0) {
      sVar2 = *(short*)( param_1 + 8 );
      iVar6 = *(int*)( param_2 + 0xc );
   } else {
      sVar2 = *(short*)( param_1 + 8 );
      iVar6 = (int)( (short)uVar1 >> 5 );
   }
   if (sVar2 < 0) {
      uVar4 = *(uint*)( param_1 + 0xc );
   } else {
      uVar4 = ( uint )(sVar2 >> 5);
   }
   if (( uVar1 & 1 ) != 0) {
      return (int)(char)( ~(byte)sVar2 & 1 );
   }
   iVar5 = 0;
   if (iVar6 < 0) {
      iVar5 = iVar6;
   }
   iVar6 = (int)param_2 + 10;
   if (( uVar1 & 2 ) == 0) {
      iVar6 = (int)*(undefined8*)( param_2 + 0x18 );
   }
   cVar3 = icu_76_godot::UnicodeString::doCompare((int)param_1, 0, (wchar16*)(ulong)uVar4, iVar6, iVar5);
   return (int)cVar3;
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::~SimpleFilteredSentenceBreakIterator() */void icu_76_godot::SimpleFilteredSentenceBreakIterator::~SimpleFilteredSentenceBreakIterator(SimpleFilteredSentenceBreakIterator *this) {
   UMemory *pUVar1;
   int iVar2;
   UMemory *this_00;
   SimpleFilteredSentenceBreakIterator *this_01;
   UCharsTrie *pUVar3;
   void *in_RSI;
   this_00 = *(UMemory**)( this + 0x1e0 );
   *(undefined***)this = &PTR__SimpleFilteredSentenceBreakIterator_00102848;
   LOCK();
   pUVar1 = this_00 + 0x18;
   iVar2 = *(int*)pUVar1;
   *(int*)pUVar1 = *(int*)pUVar1 + -1;
   UNLOCK();
   if (iVar2 + -1 < 1) {
      if (*(code**)( *(long*)this_00 + 8 ) == SimpleFilteredSentenceBreakData::~SimpleFilteredSentenceBreakData) {
         pUVar3 = *(UCharsTrie**)( this_00 + 0x10 );
         *(undefined***)this_00 = &PTR__SimpleFilteredSentenceBreakData_00102828;
         if (pUVar3 != (UCharsTrie*)0x0) {
            icu_76_godot::UCharsTrie::~UCharsTrie(pUVar3);
            icu_76_godot::UMemory::operator_delete((UMemory*)pUVar3, in_RSI);
         }
         pUVar3 = *(UCharsTrie**)( this_00 + 8 );
         if (pUVar3 != (UCharsTrie*)0x0) {
            icu_76_godot::UCharsTrie::~UCharsTrie(pUVar3);
            icu_76_godot::UMemory::operator_delete((UMemory*)pUVar3, in_RSI);
         }
         icu_76_godot::UMemory::operator_delete(this_00, in_RSI);
      } else {
         ( **(code**)( *(long*)this_00 + 8 ) )(this_00);
      }
   }
   *(undefined8*)( this + 0x1e0 ) = 0;
   if (*(long*)( this + 0x1f0 ) != 0) {
      utext_close_76_godot();
   }
   this_01 = *(SimpleFilteredSentenceBreakIterator**)( this + 0x1e8 );
   if (this_01 != (SimpleFilteredSentenceBreakIterator*)0x0) {
      if (*(code**)( *(long*)this_01 + 8 ) != ~SimpleFilteredSentenceBreakIterator) {
         ( **(code**)( *(long*)this_01 + 8 ) )();
         icu_76_godot::BreakIterator::~BreakIterator((BreakIterator*)this);
         return;
      }
      ~SimpleFilteredSentenceBreakIterator(this_01)
      ;;
      icu_76_godot::UMemory::operator_delete((UMemory*)this_01, in_RSI);
   }
   icu_76_godot::BreakIterator::~BreakIterator((BreakIterator*)this);
   return;
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::~SimpleFilteredSentenceBreakIterator() */void icu_76_godot::SimpleFilteredSentenceBreakIterator::~SimpleFilteredSentenceBreakIterator(SimpleFilteredSentenceBreakIterator *this) {
   void *in_RSI;
   ~SimpleFilteredSentenceBreakIterator(this)
   ;;
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::first() */void icu_76_godot::SimpleFilteredSentenceBreakIterator::first(SimpleFilteredSentenceBreakIterator *this) {
   long *plVar1;
   code *UNRECOVERED_JUMPTABLE_00;
   UNRECOVERED_JUMPTABLE_00 = *(code**)( **(long**)( this + 0x1e8 ) + 0x50 );
   if (UNRECOVERED_JUMPTABLE_00 == first) {
      plVar1 = (long*)( *(long**)( this + 0x1e8 ) )[0x3d];
      UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x50 );
      if (UNRECOVERED_JUMPTABLE_00 == first) {
         plVar1 = (long*)plVar1[0x3d];
         UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x50 );
         if (UNRECOVERED_JUMPTABLE_00 != first) goto LAB_001005b8;
         plVar1 = (long*)plVar1[0x3d];
         UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x50 );
         if (UNRECOVERED_JUMPTABLE_00 == first) {
            plVar1 = (long*)plVar1[0x3d];
            UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x50 );
            if (UNRECOVERED_JUMPTABLE_00 != first) goto LAB_001005b8;
            plVar1 = (long*)plVar1[0x3d];
            UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x50 );
            if (UNRECOVERED_JUMPTABLE_00 == first) {
               plVar1 = (long*)plVar1[0x3d];
               UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x50 );
               if (UNRECOVERED_JUMPTABLE_00 != first) goto LAB_001005b8;
               plVar1 = (long*)plVar1[0x3d];
               UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x50 );
               if (UNRECOVERED_JUMPTABLE_00 == first) {
                  for (int i_1136 = 0; i_1136 < 2; i_1136++) {
                     /* WARNING: Could not recover jumptable at 0x001005a5. Too many branches */
                  }
                  ( **(code**)( *(long*)plVar1[0x3d] + 0x50 ) )();
                  return;
               }
            }
         }
      }
      for (int i_1135 = 0; i_1135 < 2; i_1135++) {
         /* WARNING: Could not recover jumptable at 0x001005b0. Too many branches */
      }
      ( *UNRECOVERED_JUMPTABLE_00 )();
      return;
   }
   LAB_001005b8:/* WARNING: Could not recover jumptable at 0x001005b8. Too many branches *//* WARNING: Treating indirect jump as call */( *UNRECOVERED_JUMPTABLE_00 )();
   return;
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::last() */void icu_76_godot::SimpleFilteredSentenceBreakIterator::last(SimpleFilteredSentenceBreakIterator *this) {
   long *plVar1;
   code *UNRECOVERED_JUMPTABLE_00;
   UNRECOVERED_JUMPTABLE_00 = *(code**)( **(long**)( this + 0x1e8 ) + 0x58 );
   if (UNRECOVERED_JUMPTABLE_00 == last) {
      plVar1 = (long*)( *(long**)( this + 0x1e8 ) )[0x3d];
      UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x58 );
      if (UNRECOVERED_JUMPTABLE_00 == last) {
         plVar1 = (long*)plVar1[0x3d];
         UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x58 );
         if (UNRECOVERED_JUMPTABLE_00 != last) goto LAB_00100688;
         plVar1 = (long*)plVar1[0x3d];
         UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x58 );
         if (UNRECOVERED_JUMPTABLE_00 == last) {
            plVar1 = (long*)plVar1[0x3d];
            UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x58 );
            if (UNRECOVERED_JUMPTABLE_00 != last) goto LAB_00100688;
            plVar1 = (long*)plVar1[0x3d];
            UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x58 );
            if (UNRECOVERED_JUMPTABLE_00 == last) {
               plVar1 = (long*)plVar1[0x3d];
               UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x58 );
               if (UNRECOVERED_JUMPTABLE_00 != last) goto LAB_00100688;
               plVar1 = (long*)plVar1[0x3d];
               UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x58 );
               if (UNRECOVERED_JUMPTABLE_00 == last) {
                  for (int i_1138 = 0; i_1138 < 2; i_1138++) {
                     /* WARNING: Could not recover jumptable at 0x00100675. Too many branches */
                  }
                  ( **(code**)( *(long*)plVar1[0x3d] + 0x58 ) )();
                  return;
               }
            }
         }
      }
      for (int i_1137 = 0; i_1137 < 2; i_1137++) {
         /* WARNING: Could not recover jumptable at 0x00100680. Too many branches */
      }
      ( *UNRECOVERED_JUMPTABLE_00 )();
      return;
   }
   LAB_00100688:/* WARNING: Could not recover jumptable at 0x00100688. Too many branches *//* WARNING: Treating indirect jump as call */( *UNRECOVERED_JUMPTABLE_00 )();
   return;
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::SimpleFilteredSentenceBreakIterator(icu_76_godot::SimpleFilteredSentenceBreakIterator
   const&) */void icu_76_godot::SimpleFilteredSentenceBreakIterator::SimpleFilteredSentenceBreakIterator(SimpleFilteredSentenceBreakIterator *this, SimpleFilteredSentenceBreakIterator *param_1) {
   int *piVar1;
   long lVar2;
   SimpleFilteredSentenceBreakIterator *pSVar3;
   SimpleFilteredSentenceBreakIterator *pSVar4;
   pSVar4 = param_1;
   icu_76_godot::BreakIterator::BreakIterator((BreakIterator*)this, (BreakIterator*)param_1);
   *(undefined***)this = &PTR__SimpleFilteredSentenceBreakIterator_00102848;
   lVar2 = *(long*)( param_1 + 0x1e0 );
   LOCK();
   piVar1 = (int*)( lVar2 + 0x18 );
   *piVar1 = *piVar1 + 1;
   UNLOCK();
   pSVar3 = *(SimpleFilteredSentenceBreakIterator**)( param_1 + 0x1e8 );
   *(long*)( this + 0x1e0 ) = lVar2;
   if (*(code**)( *(long*)pSVar3 + 0x20 ) == clone) {
      pSVar4 = (SimpleFilteredSentenceBreakIterator*)icu_76_godot::UMemory::operator_new((UMemory*)0x1f8, (ulong)pSVar4);
      if (pSVar4 != (SimpleFilteredSentenceBreakIterator*)0x0) {
         SimpleFilteredSentenceBreakIterator(pSVar4, pSVar3);
      }
   } else {
      pSVar4 = (SimpleFilteredSentenceBreakIterator*)( **(code**)( *(long*)pSVar3 + 0x20 ) )(pSVar3);
   }
   *(SimpleFilteredSentenceBreakIterator**)( this + 0x1e8 ) = pSVar4;
   *(undefined8*)( this + 0x1f0 ) = 0;
   return;
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::resetState(UErrorCode&) */void icu_76_godot::SimpleFilteredSentenceBreakIterator::resetState(SimpleFilteredSentenceBreakIterator *this, UErrorCode *param_1) {
   undefined8 uVar1;
   code *pcVar2;
   long *plVar3;
   plVar3 = *(long**)( this + 0x1e8 );
   uVar1 = *(undefined8*)( this + 0x1f0 );
   pcVar2 = *(code**)( *plVar3 + 0x30 );
   *(undefined8*)( this + 0x1f0 ) = 0;
   if (pcVar2 == getUText) {
      plVar3 = (long*)plVar3[0x3d];
      pcVar2 = *(code**)( *plVar3 + 0x30 );
      if (pcVar2 == getUText) {
         plVar3 = (long*)plVar3[0x3d];
         pcVar2 = *(code**)( *plVar3 + 0x30 );
         if (pcVar2 != getUText) goto LAB_001007e0;
         plVar3 = (long*)plVar3[0x3d];
         pcVar2 = *(code**)( *plVar3 + 0x30 );
         if (pcVar2 == getUText) {
            uVar1 = ( **(code**)( *(long*)plVar3[0x3d] + 0x30 ) )((long*)plVar3[0x3d], uVar1, param_1);
            goto LAB_001007ac;
         }
      }
      uVar1 = ( *pcVar2 )(plVar3, uVar1, param_1);
   } else {
      LAB_001007e0:uVar1 = ( *pcVar2 )(plVar3, uVar1, param_1);
   }
   LAB_001007ac:if (*(long*)( this + 0x1f0 ) != 0) {
      utext_close_76_godot();
   }
   *(undefined8*)( this + 0x1f0 ) = uVar1;
   return;
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::breakExceptionAt(int) */bool icu_76_godot::SimpleFilteredSentenceBreakIterator::breakExceptionAt(SimpleFilteredSentenceBreakIterator *this, int param_1) {
   ushort uVar1;
   long lVar2;
   int iVar3;
   uint uVar4;
   uint uVar5;
   long lVar6;
   int iVar7;
   long in_FS_OFFSET;
   bool bVar8;
   undefined8 local_58;
   undefined8 local_50;
   ushort *local_48;
   undefined4 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   utext_setNativeIndex_76_godot(*(undefined8*)( this + 0x1f0 ), (long)param_1);
   iVar3 = utext_previous32_76_godot(*(undefined8*)( this + 0x1f0 ));
   if (iVar3 != 0x20) {
      utext_next32_76_godot(*(undefined8*)( this + 0x1f0 ));
   }
   uVar5 = 0xffffffff;
   lVar6 = -1;
   lVar2 = *(long*)( *(long*)( this + 0x1e0 ) + 0x10 );
   local_58 = 0;
   local_50 = *(undefined8*)( lVar2 + 8 );
   local_48 = *(ushort**)( lVar2 + 0x10 );
   local_40 = *(undefined4*)( lVar2 + 0x18 );
   do {
      while (true) {
         iVar3 = utext_previous32_76_godot(*(undefined8*)( this + 0x1f0 ));
         iVar7 = (int)(UCharsTrie*)&local_58;
         if (iVar3 == -1) goto LAB_001008e8;
         uVar4 = icu_76_godot::UCharsTrie::nextForCodePoint(iVar7);
         if (1 < (int)uVar4) break;
         LAB_00100880:if (( uVar4 & 1 ) == 0) goto LAB_001008e8;
      };
      lVar6 = utext_getNativeIndex_76_godot(*(undefined8*)( this + 0x1f0 ));
      uVar1 = *local_48;
      if ((short)uVar1 < 0) {
         uVar5 = uVar1 & 0x7fff;
         if (( uVar1 & 0x4000 ) != 0) {
            if (( uVar1 & 0x7fff ) == 0x7fff) {
               uVar5 = CONCAT22(local_48[1], local_48[2]);
            } else {
               uVar5 = ( uVar5 - 0x4000 ) * 0x10000 | (uint)local_48[1];
            }
         }
         goto LAB_00100880;
      }
      if (0x403f < uVar1) {
         if (uVar1 < 0x7fc0) {
            uVar5 = (uint)local_48[1] | ( ( uVar1 & 0x7fc0 ) - 0x4040 ) * 0x400;
         } else {
            uVar5 = CONCAT22(local_48[1], local_48[2]);
         }
         goto LAB_00100880;
      }
      uVar5 = ( (int)(uint)uVar1 >> 6 ) - 1;
   } while ( ( uVar4 & 1 ) != 0 );
   LAB_001008e8:icu_76_godot::UCharsTrie::~UCharsTrie((UCharsTrie*)&local_58);
   bVar8 = false;
   if (( ( ( -1 < lVar6 ) && ( bVar8 = true ),uVar5 != 2 ) ) && ( bVar8 = uVar5 == 1 )) {
      uVar5 = 3;
      utext_setNativeIndex_76_godot(*(undefined8*)( this + 0x1f0 ), lVar6);
      lVar2 = *(long*)( *(long*)( this + 0x1e0 ) + 8 );
      local_58 = 0;
      local_50 = *(undefined8*)( lVar2 + 8 );
      local_48 = *(ushort**)( lVar2 + 0x10 );
      local_40 = *(undefined4*)( lVar2 + 0x18 );
      do {
         iVar3 = utext_next32_76_godot(*(undefined8*)( this + 0x1f0 ));
         if (iVar3 == -1) break;
         uVar5 = icu_76_godot::UCharsTrie::nextForCodePoint(iVar7);
      } while ( ( uVar5 & 1 ) != 0 );
      bVar8 = uVar5 != 0;
      icu_76_godot::UCharsTrie::~UCharsTrie((UCharsTrie*)&local_58);
   }
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return bVar8;
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::isBoundary(int) */char icu_76_godot::SimpleFilteredSentenceBreakIterator::isBoundary(SimpleFilteredSentenceBreakIterator *this, int param_1) {
   char cVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined4 local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar1 = ( **(code**)( **(long**)( this + 0x1e8 ) + 0x88 ) )();
   if (( cVar1 != '\0' ) && ( cVar1 = '\x01' * (long*)( *(long*)( this + 0x1e0 ) + 0x10 ) != 0 )) {
      local_24 = 0;
      resetState(this, (UErrorCode*)&local_24);
      iVar2 = breakExceptionAt(this, param_1);
      cVar1 = iVar2 != 1;
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return cVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::internalNext(int) [clone .part.0] */int icu_76_godot::SimpleFilteredSentenceBreakIterator::internalNext(SimpleFilteredSentenceBreakIterator *this, int param_1) {
   int iVar1;
   long lVar2;
   long in_FS_OFFSET;
   int local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_24 = 0;
   resetState(this, (UErrorCode*)&local_24);
   if (local_24 < 1) {
      lVar2 = utext_nativeLength_76_godot(*(undefined8*)( this + 0x1f0 ));
      if (param_1 != -1) {
         do {
            if (lVar2 == param_1) goto LAB_00100b53;
            iVar1 = breakExceptionAt(this, param_1);
            if (iVar1 != 1) goto LAB_00100b53;
            param_1 = ( **(code**)( **(long**)( this + 0x1e8 ) + 0x68 ) )();
         } while ( param_1 != -1 );
      }
   }
   param_1 = -1;
   LAB_00100b53:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::next(int) */void icu_76_godot::SimpleFilteredSentenceBreakIterator::next(int param_1) {
   int iVar1;
   undefined4 in_register_0000003c;
   SimpleFilteredSentenceBreakIterator *this;
   this(SimpleFilteredSentenceBreakIterator * CONCAT44(in_register_0000003c, param_1));
   iVar1 = ( **(code**)( **(long**)( this + 0x1e8 ) + 0x90 ) )();
   if (( iVar1 != -1 ) && ( *(long*)( *(long*)( this + 0x1e0 ) + 0x10 ) != 0 )) {
      internalNext(this, iVar1);
      return;
   }
   return;
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::following(int) */void icu_76_godot::SimpleFilteredSentenceBreakIterator::following(int param_1) {
   int iVar1;
   undefined4 in_register_0000003c;
   SimpleFilteredSentenceBreakIterator *this;
   this(SimpleFilteredSentenceBreakIterator * CONCAT44(in_register_0000003c, param_1));
   iVar1 = ( **(code**)( **(long**)( this + 0x1e8 ) + 0x78 ) )();
   if (( iVar1 != -1 ) && ( *(long*)( *(long*)( this + 0x1e0 ) + 0x10 ) != 0 )) {
      internalNext(this, iVar1);
      return;
   }
   return;
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::next() */void icu_76_godot::SimpleFilteredSentenceBreakIterator::next(SimpleFilteredSentenceBreakIterator *this) {
   int iVar1;
   iVar1 = ( **(code**)( **(long**)( this + 0x1e8 ) + 0x68 ) )();
   if (( iVar1 != -1 ) && ( *(long*)( *(long*)( this + 0x1e0 ) + 0x10 ) != 0 )) {
      internalNext(this, iVar1);
      return;
   }
   return;
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::internalNext(int) */ulong icu_76_godot::SimpleFilteredSentenceBreakIterator::internalNext(SimpleFilteredSentenceBreakIterator *this, int param_1) {
   ulong uVar1;
   if (param_1 == -1) {
      return 0xffffffff;
   }
   if (*(long*)( *(long*)( this + 0x1e0 ) + 0x10 ) != 0) {
      uVar1 = internalNext(this, param_1);
      return uVar1;
   }
   return (ulong)(uint)param_1;
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::internalPrev(int) */int icu_76_godot::SimpleFilteredSentenceBreakIterator::internalPrev(SimpleFilteredSentenceBreakIterator *this, int param_1) {
   int iVar1;
   long in_FS_OFFSET;
   int local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( 1 < param_1 + 1U ) && ( *(long*)( *(long*)( this + 0x1e0 ) + 0x10 ) != 0 )) {
      local_24 = 0;
      resetState(this, (UErrorCode*)&local_24);
      if (local_24 < 1) {
         do {
            iVar1 = breakExceptionAt(this, param_1);
            if (iVar1 != 1) break;
            param_1 = ( **(code**)( **(long**)( this + 0x1e8 ) + 0x60 ) )();
         } while ( 1 < param_1 + 1U );
      } else {
         param_1 = -1;
      }
   }
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::preceding(int) */void icu_76_godot::SimpleFilteredSentenceBreakIterator::preceding(int param_1) {
   SimpleFilteredSentenceBreakIterator *this;
   SimpleFilteredSentenceBreakIterator *this_00;
   SimpleFilteredSentenceBreakIterator *this_01;
   SimpleFilteredSentenceBreakIterator *this_02;
   SimpleFilteredSentenceBreakIterator *this_03;
   SimpleFilteredSentenceBreakIterator *this_04;
   SimpleFilteredSentenceBreakIterator *this_05;
   SimpleFilteredSentenceBreakIterator *this_06;
   int iVar1;
   undefined4 in_register_0000003c;
   this * (SimpleFilteredSentenceBreakIterator**)( (SimpleFilteredSentenceBreakIterator*)CONCAT44(in_register_0000003c, param_1) + 0x1e8 );
   if (*(code**)( *(long*)this + 0x80 ) == preceding) {
      this_00 = *(SimpleFilteredSentenceBreakIterator**)( this + 0x1e8 );
      if (*(code**)( *(long*)this_00 + 0x80 ) == preceding) {
         this_01 = *(SimpleFilteredSentenceBreakIterator**)( this_00 + 0x1e8 );
         if (*(code**)( *(long*)this_01 + 0x80 ) == preceding) {
            this_02 = *(SimpleFilteredSentenceBreakIterator**)( this_01 + 0x1e8 );
            if (*(code**)( *(long*)this_02 + 0x80 ) == preceding) {
               this_03 = *(SimpleFilteredSentenceBreakIterator**)( this_02 + 0x1e8 );
               if (*(code**)( *(long*)this_03 + 0x80 ) == preceding) {
                  this_04 = *(SimpleFilteredSentenceBreakIterator**)( this_03 + 0x1e8 );
                  if (*(code**)( *(long*)this_04 + 0x80 ) == preceding) {
                     this_05 = *(SimpleFilteredSentenceBreakIterator**)( this_04 + 0x1e8 );
                     if (*(code**)( *(long*)this_05 + 0x80 ) == preceding) {
                        this_06 = *(SimpleFilteredSentenceBreakIterator**)( this_05 + 0x1e8 );
                        if (*(code**)( *(long*)this_06 + 0x80 ) == preceding) {
                           iVar1 = ( **(code**)( **(long**)( this_06 + 0x1e8 ) + 0x80 ) )();
                           iVar1 = internalPrev(this_06, iVar1);
                        } else {
                           iVar1 = ( **(code**)( *(long*)this_06 + 0x80 ) )(this_06);
                        }
                        iVar1 = internalPrev(this_05, iVar1);
                     } else {
                        iVar1 = ( **(code**)( *(long*)this_05 + 0x80 ) )(this_05);
                     }
                     iVar1 = internalPrev(this_04, iVar1);
                  } else {
                     iVar1 = ( **(code**)( *(long*)this_04 + 0x80 ) )(this_04);
                  }
                  iVar1 = internalPrev(this_03, iVar1);
               } else {
                  iVar1 = ( **(code**)( *(long*)this_03 + 0x80 ) )(this_03);
               }
               iVar1 = internalPrev(this_02, iVar1);
            } else {
               iVar1 = ( **(code**)( *(long*)this_02 + 0x80 ) )(this_02);
            }
            iVar1 = internalPrev(this_01, iVar1);
         } else {
            iVar1 = ( **(code**)( *(long*)this_01 + 0x80 ) )(this_01);
         }
         iVar1 = internalPrev(this_00, iVar1);
      } else {
         iVar1 = ( **(code**)( *(long*)this_00 + 0x80 ) )(this_00);
      }
      iVar1 = internalPrev(this, iVar1);
   } else {
      iVar1 = ( **(code**)( *(long*)this + 0x80 ) )(this);
   }
   internalPrev((SimpleFilteredSentenceBreakIterator*)CONCAT44(in_register_0000003c, param_1), iVar1);
   return;
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::previous() */void icu_76_godot::SimpleFilteredSentenceBreakIterator::previous(SimpleFilteredSentenceBreakIterator *this) {
   SimpleFilteredSentenceBreakIterator *this_00;
   SimpleFilteredSentenceBreakIterator *this_01;
   SimpleFilteredSentenceBreakIterator *this_02;
   SimpleFilteredSentenceBreakIterator *this_03;
   SimpleFilteredSentenceBreakIterator *this_04;
   SimpleFilteredSentenceBreakIterator *this_05;
   SimpleFilteredSentenceBreakIterator *this_06;
   SimpleFilteredSentenceBreakIterator *this_07;
   int iVar1;
   this_00 = *(SimpleFilteredSentenceBreakIterator**)( this + 0x1e8 );
   if (*(code**)( *(long*)this_00 + 0x60 ) == previous) {
      this_01 = *(SimpleFilteredSentenceBreakIterator**)( this_00 + 0x1e8 );
      if (*(code**)( *(long*)this_01 + 0x60 ) == previous) {
         this_02 = *(SimpleFilteredSentenceBreakIterator**)( this_01 + 0x1e8 );
         if (*(code**)( *(long*)this_02 + 0x60 ) == previous) {
            this_03 = *(SimpleFilteredSentenceBreakIterator**)( this_02 + 0x1e8 );
            if (*(code**)( *(long*)this_03 + 0x60 ) == previous) {
               this_04 = *(SimpleFilteredSentenceBreakIterator**)( this_03 + 0x1e8 );
               if (*(code**)( *(long*)this_04 + 0x60 ) == previous) {
                  this_05 = *(SimpleFilteredSentenceBreakIterator**)( this_04 + 0x1e8 );
                  if (*(code**)( *(long*)this_05 + 0x60 ) == previous) {
                     this_06 = *(SimpleFilteredSentenceBreakIterator**)( this_05 + 0x1e8 );
                     if (*(code**)( *(long*)this_06 + 0x60 ) == previous) {
                        this_07 = *(SimpleFilteredSentenceBreakIterator**)( this_06 + 0x1e8 );
                        if (*(code**)( *(long*)this_07 + 0x60 ) == previous) {
                           iVar1 = ( **(code**)( **(long**)( this_07 + 0x1e8 ) + 0x60 ) )();
                           iVar1 = internalPrev(this_07, iVar1);
                        } else {
                           iVar1 = ( **(code**)( *(long*)this_07 + 0x60 ) )(this_07);
                        }
                        iVar1 = internalPrev(this_06, iVar1);
                     } else {
                        iVar1 = ( **(code**)( *(long*)this_06 + 0x60 ) )(this_06);
                     }
                     iVar1 = internalPrev(this_05, iVar1);
                  } else {
                     iVar1 = ( **(code**)( *(long*)this_05 + 0x60 ) )(this_05);
                  }
                  iVar1 = internalPrev(this_04, iVar1);
               } else {
                  iVar1 = ( **(code**)( *(long*)this_04 + 0x60 ) )(this_04);
               }
               iVar1 = internalPrev(this_03, iVar1);
            } else {
               iVar1 = ( **(code**)( *(long*)this_03 + 0x60 ) )(this_03);
            }
            iVar1 = internalPrev(this_02, iVar1);
         } else {
            iVar1 = ( **(code**)( *(long*)this_02 + 0x60 ) )(this_02);
         }
         iVar1 = internalPrev(this_01, iVar1);
      } else {
         iVar1 = ( **(code**)( *(long*)this_01 + 0x60 ) )(this_01);
      }
      iVar1 = internalPrev(this_00, iVar1);
   } else {
      iVar1 = ( **(code**)( *(long*)this_00 + 0x60 ) )(this_00);
   }
   internalPrev(this, iVar1);
   return;
}/* icu_76_godot::SimpleFilteredBreakIteratorBuilder::SimpleFilteredBreakIteratorBuilder(UErrorCode&)
    */void icu_76_godot::SimpleFilteredBreakIteratorBuilder::SimpleFilteredBreakIteratorBuilder(SimpleFilteredBreakIteratorBuilder *this, UErrorCode *param_1) {
   *(undefined***)this = &PTR__SimpleFilteredBreakIteratorBuilder_00102910;
   icu_76_godot::UVector::UVector((UVector*)( this + 8 ), (_func_void_void_ptr*)&uprv_deleteUObject_76_godot, (_func_signed_UElement_UElement*)&uhash_compareUnicodeString_76_godot, 1, param_1);
   *(undefined***)( this + 8 ) = &PTR__UStringSet_00102800;
   return;
}/* icu_76_godot::SimpleFilteredBreakIteratorBuilder::SimpleFilteredBreakIteratorBuilder(icu_76_godot::Locale
   const&, UErrorCode&) */void icu_76_godot::SimpleFilteredBreakIteratorBuilder::SimpleFilteredBreakIteratorBuilder(SimpleFilteredBreakIteratorBuilder *this, Locale *param_1, UErrorCode *param_2) {
   UVector *this_00;
   int iVar1;
   undefined8 uVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   UnicodeString *this_01;
   long in_FS_OFFSET;
   UnicodeString *local_a8;
   int local_98;
   undefined4 local_94;
   undefined8 local_90;
   code *local_88;
   undefined2 local_80;
   long local_40;
   this_00 = (UVector*)( this + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__SimpleFilteredBreakIteratorBuilder_00102910;
   icu_76_godot::UVector::UVector(this_00, (_func_void_void_ptr*)&uprv_deleteUObject_76_godot, (_func_signed_UElement_UElement*)&uhash_compareUnicodeString_76_godot, 1, param_2);
   iVar1 = *(int*)param_2;
   *(undefined***)( this + 8 ) = &PTR__UStringSet_00102800;
   if (iVar1 < 1) {
      local_98 = 0;
      uVar2 = icu_76_godot::Locale::getBaseName();
      lVar3 = ures_open_76_godot("icudt76l-brkitr", uVar2, &local_98);
      if (( local_98 < 1 ) && ( local_98 != -0x7f )) {
         lVar4 = ures_getByKeyWithFallback_76_godot(lVar3, "exceptions", 0, &local_98);
         if (( local_98 == -0x7f ) || ( 0 < local_98 )) {
            *(int*)param_2 = local_98;
         } else {
            lVar5 = ures_getByKeyWithFallback_76_godot(lVar4, "SentenceBreak", 0, &local_98);
            if (( local_98 == -0x7f ) || ( 0 < local_98 )) {
               *(int*)param_2 = local_98;
            } else {
               local_98 = *(int*)param_2;
               lVar6 = 0;
               do {
                  lVar6 = ures_getNextResource_76_godot(lVar5, lVar6, &local_98);
                  if (lVar6 == 0) {
                     if (( ( local_98 != 8 ) && ( 0 < local_98 ) ) && ( *(int*)param_2 < 1 )) {
                        *(int*)param_2 = local_98;
                     }
                     goto joined_r0x0010142b;
                  }
                  if (0 < local_98) break;
                  local_80 = 2;
                  local_88 = icu_76_godot::UnicodeString::setToBogus;
                  local_94 = 0;
                  uVar2 = ures_getString_76_godot(lVar6, &local_94, param_2);
                  if (*(int*)param_2 < 1) {
                     local_90 = uVar2;
                     icu_76_godot::UnicodeString::setTo(&local_88, 1, &local_90, local_94);
                  } else {
                     icu_76_godot::UnicodeString::setToBogus();
                  }
                  local_a8 = (UnicodeString*)&local_88;
                  if ((int)*(uint*)param_2 < 1) {
                     this_01 = (UnicodeString*)icu_76_godot::UMemory::operator_new((UMemory*)0x40, ( ulong ) * (uint*)param_2);
                     if (this_01 == (UnicodeString*)0x0) {
                        *(undefined4*)param_2 = 7;
                     } else {
                        icu_76_godot::UnicodeString::UnicodeString(this_01, local_a8);
                        if (( *(int*)param_2 < 1 ) && ( iVar1 = icu_76_godot::UVector::indexOf(this_00, (int)this_01) ),iVar1 < 0) {
                           icu_76_godot::UVector::sortedInsert(this_00, (_func_int_UElement_UElement*)this_01, (UErrorCode*)compareUnicodeString);
                        } else {
                           icu_76_godot::UnicodeString::~UnicodeString(this_01);
                        }
                     }
                  }
                  icu_76_godot::UnicodeString::~UnicodeString(local_a8);
               } while ( local_98 < 1 );
               if (( local_98 != 8 ) && ( *(int*)param_2 < 1 )) {
                  *(int*)param_2 = local_98;
               }
               ures_close_76_godot(lVar6);
            }
            joined_r0x0010142b:if (lVar5 != 0) {
               ures_close_76_godot(lVar5);
            }
         }
         if (lVar4 != 0) {
            ures_close_76_godot(lVar4);
         }
      } else {
         *(int*)param_2 = local_98;
      }
      if (lVar3 != 0) {
         ures_close_76_godot(lVar3);
      }
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* icu_76_godot::FilteredBreakIteratorBuilder::FilteredBreakIteratorBuilder() */void icu_76_godot::FilteredBreakIteratorBuilder::FilteredBreakIteratorBuilder(FilteredBreakIteratorBuilder *this) {
   *(undefined**)this = &DAT_00102950;
   return;
}/* icu_76_godot::FilteredBreakIteratorBuilder::~FilteredBreakIteratorBuilder() */void icu_76_godot::FilteredBreakIteratorBuilder::~FilteredBreakIteratorBuilder(FilteredBreakIteratorBuilder *this) {
   *(undefined**)this = &DAT_00102950;
   icu_76_godot::UObject::~UObject((UObject*)this);
   return;
}/* icu_76_godot::FilteredBreakIteratorBuilder::~FilteredBreakIteratorBuilder() */void icu_76_godot::FilteredBreakIteratorBuilder::~FilteredBreakIteratorBuilder(FilteredBreakIteratorBuilder *this) {
   void *in_RSI;
   *(undefined**)this = &DAT_00102950;
   icu_76_godot::UObject::~UObject((UObject*)this);
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}/* icu_76_godot::FilteredBreakIteratorBuilder::createInstance(icu_76_godot::Locale const&,
   UErrorCode&) */SimpleFilteredBreakIteratorBuilder *icu_76_godot::FilteredBreakIteratorBuilder::createInstance(Locale *param_1, UErrorCode *param_2) {
   SimpleFilteredBreakIteratorBuilder *this;
   if (0 < *(int*)param_2) {
      return (SimpleFilteredBreakIteratorBuilder*)0x0;
   }
   this(SimpleFilteredBreakIteratorBuilder * icu_76_godot::UMemory::operator_new((UMemory*)0x30, (ulong)param_2));
   if (this == (SimpleFilteredBreakIteratorBuilder*)0x0) {
      if (*(int*)param_2 < 1) {
         *(undefined4*)param_2 = 7;
         return (SimpleFilteredBreakIteratorBuilder*)0x0;
      }
   } else {
      SimpleFilteredBreakIteratorBuilder::SimpleFilteredBreakIteratorBuilder(this, param_1, param_2);
      if (*(int*)param_2 < 1) {
         return this;
      }
      if (*(code**)( *(long*)this + 8 ) != SimpleFilteredBreakIteratorBuilder::~SimpleFilteredBreakIteratorBuilder) {
         SimpleFilteredBreakIteratorBuilder::~SimpleFilteredBreakIteratorBuilder(this);
         return (SimpleFilteredBreakIteratorBuilder*)0x0;
      }
      *(undefined***)this = &PTR__SimpleFilteredBreakIteratorBuilder_00102910;
      *(undefined***)( this + 8 ) = &PTR__UStringSet_00102800;
      icu_76_godot::UVector::~UVector((UVector*)( this + 8 ));
      *(undefined**)this = &DAT_00102950;
      icu_76_godot::UObject::~UObject((UObject*)this);
      icu_76_godot::UMemory::operator_delete((UMemory*)this, param_1);
   }
   return (SimpleFilteredBreakIteratorBuilder*)0x0;
}/* icu_76_godot::FilteredBreakIteratorBuilder::createInstance(UErrorCode&) */undefined8 icu_76_godot::FilteredBreakIteratorBuilder::createInstance(FilteredBreakIteratorBuilder *this, UErrorCode *param_1) {
   undefined8 uVar1;
   if (*(int*)this < 1) {
      uVar1 = createEmptyInstance(this, param_1);
      return uVar1;
   }
   return 0;
}/* icu_76_godot::FilteredBreakIteratorBuilder::createEmptyInstance(UErrorCode&) */undefined8 icu_76_godot::FilteredBreakIteratorBuilder::createEmptyInstance(FilteredBreakIteratorBuilder *this, UErrorCode *param_1) {
   undefined8 uVar1;
   if (*(int*)this < 1) {
      uVar1 = createEmptyInstance(this, param_1);
      return uVar1;
   }
   return 0;
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::SimpleFilteredSentenceBreakIterator(icu_76_godot::BreakIterator*,
   icu_76_godot::UCharsTrie*, icu_76_godot::UCharsTrie*, UErrorCode&) */void icu_76_godot::SimpleFilteredSentenceBreakIterator::SimpleFilteredSentenceBreakIterator(SimpleFilteredSentenceBreakIterator *this, BreakIterator *param_1, UCharsTrie *param_2, UCharsTrie *param_3, UErrorCode *param_4) {
   undefined8 *puVar1;
   Locale *pLVar2;
   long in_FS_OFFSET;
   Locale local_208[224];
   Locale local_128[232];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   icu_76_godot::BreakIterator::getLocale(local_128, param_1, 0, param_4);
   icu_76_godot::BreakIterator::getLocale(local_208, param_1, 1, param_4);
   pLVar2 = local_208;
   icu_76_godot::BreakIterator::BreakIterator((BreakIterator*)this, local_208, local_128);
   icu_76_godot::Locale::~Locale(local_208);
   icu_76_godot::Locale::~Locale(local_128);
   *(undefined***)this = &PTR__SimpleFilteredSentenceBreakIterator_00102848;
   puVar1 = (undefined8*)icu_76_godot::UMemory::operator_new((UMemory*)0x20, (ulong)pLVar2);
   if (puVar1 == (undefined8*)0x0) {
      *(BreakIterator**)( this + 0x1e8 ) = param_1;
      *(undefined8*)( this + 0x1e0 ) = 0;
      *(undefined8*)( this + 0x1f0 ) = 0;
      if (param_2 != (UCharsTrie*)0x0) {
         icu_76_godot::UCharsTrie::~UCharsTrie(param_2);
         icu_76_godot::UMemory::operator_delete((UMemory*)param_2, pLVar2);
      }
      if (param_3 != (UCharsTrie*)0x0) {
         icu_76_godot::UCharsTrie::~UCharsTrie(param_3);
         icu_76_godot::UMemory::operator_delete((UMemory*)param_3, pLVar2);
      }
      if (*(int*)param_4 < 1) {
         *(undefined4*)param_4 = 7;
      }
   } else {
      puVar1[1] = param_2;
      *puVar1 = &PTR__SimpleFilteredSentenceBreakData_00102828;
      puVar1[2] = param_3;
      *(undefined4*)( puVar1 + 3 ) = 1;
      *(undefined8**)( this + 0x1e0 ) = puVar1;
      *(BreakIterator**)( this + 0x1e8 ) = param_1;
      *(undefined8*)( this + 0x1f0 ) = 0;
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* icu_76_godot::SimpleFilteredBreakIteratorBuilder::build(icu_76_godot::BreakIterator*,
   UErrorCode&) */SimpleFilteredSentenceBreakIterator * __thiscall
icu_76_godot::SimpleFilteredBreakIteratorBuilder::build
          (SimpleFilteredBreakIteratorBuilder *this,BreakIterator *param_1,UErrorCode *param_2){
   ushort uVar1;
   byte bVar2;
   int iVar3;
   uint uVar4;
   UCharsTrieBuilder *this_00;
   UCharsTrieBuilder *this_01;
   UnicodeString *pUVar5;
   int *piVar6;
   UnicodeString *pUVar7;
   UCharsTrie *this_02;
   SimpleFilteredSentenceBreakIterator *this_03;
   UCharsTrie *this_04;
   UnicodeString *pUVar8;
   uint uVar9;
   ulong uVar10;
   ulong uVar11;
   ulong uVar12;
   UnicodeString *pUVar13;
   int *piVar14;
   UMemory *this_05;
   int iVar15;
   long lVar16;
   long in_FS_OFFSET;
   BreakIterator *local_c8;
   int local_9c;
   UnicodeString local_88[72];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pUVar7 = (UnicodeString*)param_1;
   this_00 = (UCharsTrieBuilder*)icu_76_godot::UMemory::operator_new((UMemory*)0x70, (ulong)param_1);
   if (this_00 == (UCharsTrieBuilder*)0x0) {
      if (*(int*)param_2 < 1) {
         *(undefined4*)param_2 = 7;
      }
   } else {
      pUVar7 = (UnicodeString*)param_2;
      icu_76_godot::UCharsTrieBuilder::UCharsTrieBuilder(this_00, param_2);
   }
   this_01 = (UCharsTrieBuilder*)icu_76_godot::UMemory::operator_new((UMemory*)0x70, (ulong)pUVar7);
   local_c8 = param_1;
   if (this_01 == (UCharsTrieBuilder*)0x0) {
      if (*(int*)param_2 < 1) {
         this_03 = (SimpleFilteredSentenceBreakIterator*)0x0;
         *(undefined4*)param_2 = 7;
      } else {
         this_03 = (SimpleFilteredSentenceBreakIterator*)0x0;
      }
      goto LAB_001019a7;
   }
   this_03 = (SimpleFilteredSentenceBreakIterator*)0x0;
   pUVar7 = (UnicodeString*)param_2;
   icu_76_godot::UCharsTrieBuilder::UCharsTrieBuilder(this_01, param_2);
   if (*(int*)param_2 < 1) {
      iVar3 = *(int*)( this + 0x10 );
      uVar11 = (ulong)iVar3;
      if (uVar11 == 0) {
         this_05 = (UMemory*)0x48;
         uVar10 = 1;
         LAB_00101875:pUVar5 = (UnicodeString*)icu_76_godot::UMemory::operator_new__(this_05, (ulong)pUVar7);
         pUVar13 = pUVar5;
         if (pUVar5 != (UnicodeString*)0x0) {
            pUVar13 = pUVar5 + 8;
            *(ulong*)pUVar5 = uVar10;
            pUVar5 = pUVar13;
            do {
               uVar10 = uVar10 - 1;
               *(code**)pUVar5 = icu_76_godot::UnicodeString::setToBogus;
               *(undefined2*)( pUVar5 + 8 ) = 2;
               pUVar5 = pUVar5 + 0x40;
            } while ( uVar10 != 0 );
         }
         joined_r0x00101a53:if (iVar3 < 1) goto LAB_00101a59;
         lVar16 = uVar11 * 4;
         piVar6 = (int*)uprv_malloc_76_godot(lVar16);
         if (piVar6 != (int*)0x0) {
            __memset_chk(piVar6, 0, lVar16, lVar16);
            uprv_free_76_godot(0);
         }
         if (0 < *(int*)( this + 0x10 )) goto LAB_00101907;
         LAB_00101ad0:uVar10 = 0;
         local_9c = 0;
         pUVar7 = pUVar13;
         LAB_00101b45:do {
            iVar3 = icu_76_godot::UnicodeString::doIndexOf((wchar16)pUVar7, 0x2e, 0);
            if (-1 < iVar3) {
               uVar9 = iVar3 + 1;
               if (*(short*)( pUVar7 + 8 ) < 0) {
                  uVar4 = *(uint*)( pUVar7 + 0xc );
               } else {
                  uVar4 = ( uint )(*(short*)( pUVar7 + 8 ) >> 5);
               }
               if (uVar9 != uVar4) {
                  uVar12 = 0;
                  pUVar5 = pUVar13 + 10;
                  iVar3 = -1;
                  LAB_00101bad:do {
                     if ((int)uVar10 != (int)uVar12) {
                        uVar1 = *(ushort*)( pUVar5 + -2 );
                        if (( uVar1 & 1 ) == 0) {
                           if (( -1 < (short)uVar1 ) || ( iVar15 = -1 < iVar15 )) {
                              iVar15 = 0;
                           }
                           pUVar8 = pUVar5;
                           if (( uVar1 & 2 ) == 0) {
                              pUVar8 = *(UnicodeString**)( pUVar5 + 0xe );
                           }
                           bVar2 = icu_76_godot::UnicodeString::doCompare((int)pUVar7, 0, (wchar16*)(ulong)uVar9, (int)pUVar8, iVar15);
                        } else {
                           bVar2 = ~(byte)pUVar7[8] & 1;
                        }
                        if (bVar2 == 0) {
                           if (piVar6[uVar12] != 0) {
                              if (( piVar6[uVar12] & 1U ) != 0) {
                                 iVar3 = (int)uVar12;
                              }
                              uVar12 = uVar12 + 1;
                              pUVar5 = pUVar5 + 0x40;
                              if (uVar11 == uVar12) break;
                              goto LAB_00101bad;
                           }
                           piVar6[uVar12] = 3;
                        }
                     }
                     uVar12 = uVar12 + 1;
                     pUVar5 = pUVar5 + 0x40;
                  } while ( uVar11 != uVar12 );
                  icu_76_godot::UnicodeString::UnicodeString(local_88, pUVar7, 0, uVar9);
                  if (( iVar3 == -1 ) && ( piVar6[uVar10] == 0 )) {
                     iVar3 = (int)local_88;
                     icu_76_godot::UnicodeString::doReverse(iVar3, 0);
                     icu_76_godot::UCharsTrieBuilder::add((UnicodeString*)this_00, iVar3, (UErrorCode*)0x1);
                     local_9c = local_9c + 1;
                     piVar6[uVar10] = 3;
                  }
                  uVar10 = uVar10 + 1;
                  pUVar7 = pUVar7 + 0x40;
                  icu_76_godot::UnicodeString::~UnicodeString(local_88);
                  if (uVar11 == uVar10) break;
                  goto LAB_00101b45;
               }
            }
            uVar10 = uVar10 + 1;
            pUVar7 = pUVar7 + 0x40;
         } while ( uVar11 != uVar10 );
         iVar3 = 0;
         piVar14 = piVar6;
         pUVar5 = pUVar13;
         do {
            while (pUVar7 = pUVar5,iVar15 = (int)pUVar7,*piVar14 == 0) {
               local_9c = local_9c + 1;
               piVar14 = piVar14 + 1;
               icu_76_godot::UnicodeString::doReverse(iVar15, 0);
               pUVar5 = pUVar7 + 0x40;
               icu_76_godot::UCharsTrieBuilder::add((UnicodeString*)this_00, iVar15, (UErrorCode*)0x2);
               if (pUVar5 == pUVar13 + uVar11 * 0x40) goto LAB_00101d0a;
            };
            pUVar5 = pUVar7 + 0x40;
            iVar3 = iVar3 + 1;
            piVar14 = piVar14 + 1;
            icu_76_godot::UCharsTrieBuilder::add((UnicodeString*)this_01, iVar15, (UErrorCode*)0x2);
         } while ( pUVar5 != pUVar13 + uVar11 * 0x40 );
         LAB_00101d0a:this_04 = (UCharsTrie*)0x0;
         if (local_9c < 1) {
            LAB_00101d25:if (iVar3 < 1) goto LAB_00101a6c;
            pUVar7 = (UnicodeString*)0x0;
            this_02 = (UCharsTrie*)icu_76_godot::UCharsTrieBuilder::build(this_01, 0, param_2);
            if (( 0 < *(int*)param_2 ) || ( this_03 = (SimpleFilteredSentenceBreakIterator*)icu_76_godot::UMemory::operator_new((UMemory*)0x1f8, (ulong)pUVar7) ),this_03 == (SimpleFilteredSentenceBreakIterator*)0x0) {
               if (this_02 != (UCharsTrie*)0x0) {
                  icu_76_godot::UCharsTrie::~UCharsTrie(this_02);
                  icu_76_godot::UMemory::operator_delete((UMemory*)this_02, pUVar7);
               }
               goto LAB_00101e80;
            }
            goto LAB_00101d64;
         }
         pUVar7 = (UnicodeString*)0x0;
         this_04 = (UCharsTrie*)icu_76_godot::UCharsTrieBuilder::build(this_00, 0, param_2);
         if (*(int*)param_2 < 1) goto LAB_00101d25;
         LAB_00101e80:if (this_04 != (UCharsTrie*)0x0) {
            icu_76_godot::UCharsTrie::~UCharsTrie(this_04);
            icu_76_godot::UMemory::operator_delete((UMemory*)this_04, pUVar7);
         }
         LAB_00101958:this_03 = (SimpleFilteredSentenceBreakIterator*)0x0;
      } else {
         if (uVar11 >> 0x39 == 0) {
            this_05 = (UMemory*)( uVar11 * 0x40 + 8 );
            uVar10 = uVar11;
            goto LAB_00101875;
         }
         pUVar13 = (UnicodeString*)icu_76_godot::UMemory::operator_new__((UMemory*)0xffffffffffffffff, (ulong)pUVar7);
         if (pUVar13 != (UnicodeString*)0x0) {
            *(ulong*)pUVar13 = uVar11;
            pUVar13 = pUVar13 + 8;
            goto joined_r0x00101a53;
         }
         LAB_00101a59:piVar6 = (int*)0x0;
         if (0 < *(int*)( this + 0x10 )) {
            LAB_00101907:lVar16 = 0;
            pUVar5 = pUVar13;
            do {
               pUVar7 = (UnicodeString*)icu_76_godot::UVector::elementAt((int)this + 8);
               if (pUVar7 == (UnicodeString*)0x0) {
                  *(undefined4*)param_2 = 7;
                  goto LAB_00101958;
               }
               icu_76_godot::UnicodeString::operator =(pUVar5, pUVar7);
               piVar6[lVar16] = 0;
               lVar16 = lVar16 + 1;
               pUVar5 = pUVar5 + 0x40;
            } while ( (int)lVar16 < *(int*)( this + 0x10 ) );
            if (0 < iVar3) goto LAB_00101ad0;
         }
         this_04 = (UCharsTrie*)0x0;
         LAB_00101a6c:this_03 = (SimpleFilteredSentenceBreakIterator*)icu_76_godot::UMemory::operator_new((UMemory*)0x1f8, (ulong)pUVar7);
         if (this_03 == (SimpleFilteredSentenceBreakIterator*)0x0) goto LAB_00101e80;
         this_02 = (UCharsTrie*)0x0;
         LAB_00101d64:SimpleFilteredSentenceBreakIterator::SimpleFilteredSentenceBreakIterator(this_03, param_1, this_02, this_04, param_2);
         local_c8 = (BreakIterator*)0x0;
         pUVar7 = (UnicodeString*)param_1;
      }
      uprv_free_76_godot(piVar6);
      if (pUVar13 != (UnicodeString*)0x0) {
         pUVar5 = pUVar13 + *(long*)( pUVar13 + -8 ) * 0x40;
         while (pUVar13 != pUVar5) {
            pUVar8 = pUVar5 + -0x40;
            pUVar5 = pUVar5 + -0x40;
            ( *(code*)**(undefined8**)pUVar8 )(pUVar5);
         };
         icu_76_godot::UMemory::operator_delete__((UMemory*)( pUVar13 + -8 ), pUVar7);
      }
   }
   ( **(code**)( *(long*)this_01 + 8 ) )();
   LAB_001019a7:if (this_00 != (UCharsTrieBuilder*)0x0) {
      ( **(code**)( *(long*)this_00 + 8 ) )();
   }
   if (local_c8 != (BreakIterator*)0x0) {
      if (*(code**)( *(long*)local_c8 + 8 ) == SimpleFilteredSentenceBreakIterator::~SimpleFilteredSentenceBreakIterator) {
         SimpleFilteredSentenceBreakIterator::~SimpleFilteredSentenceBreakIterator((SimpleFilteredSentenceBreakIterator*)local_c8);
         icu_76_godot::UMemory::operator_delete((UMemory*)local_c8, pUVar7);
      } else {
         ( **(code**)( *(long*)local_c8 + 8 ) )(local_c8);
      }
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return this_03;
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::getDynamicClassID() const */undefined8 icu_76_godot::SimpleFilteredSentenceBreakIterator::getDynamicClassID(void) {
   return 0;
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::BreakIterator
   const&) const */bool icu_76_godot::SimpleFilteredSentenceBreakIterator::operator ==(SimpleFilteredSentenceBreakIterator *this, BreakIterator *param_1) {
   return param_1 == (BreakIterator*)this;
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::current() const */void icu_76_godot::SimpleFilteredSentenceBreakIterator::current(SimpleFilteredSentenceBreakIterator *this) {
   long *plVar1;
   code *UNRECOVERED_JUMPTABLE_00;
   UNRECOVERED_JUMPTABLE_00 = *(code**)( **(long**)( this + 0x1e8 ) + 0x70 );
   if (UNRECOVERED_JUMPTABLE_00 == current) {
      plVar1 = (long*)( *(long**)( this + 0x1e8 ) )[0x3d];
      UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x70 );
      if (UNRECOVERED_JUMPTABLE_00 == current) {
         plVar1 = (long*)plVar1[0x3d];
         UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x70 );
         if (UNRECOVERED_JUMPTABLE_00 != current) goto LAB_00101fc8;
         plVar1 = (long*)plVar1[0x3d];
         UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x70 );
         if (UNRECOVERED_JUMPTABLE_00 == current) {
            plVar1 = (long*)plVar1[0x3d];
            UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x70 );
            if (UNRECOVERED_JUMPTABLE_00 != current) goto LAB_00101fc8;
            plVar1 = (long*)plVar1[0x3d];
            UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x70 );
            if (UNRECOVERED_JUMPTABLE_00 == current) {
               plVar1 = (long*)plVar1[0x3d];
               UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x70 );
               if (UNRECOVERED_JUMPTABLE_00 != current) goto LAB_00101fc8;
               plVar1 = (long*)plVar1[0x3d];
               UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x70 );
               if (UNRECOVERED_JUMPTABLE_00 == current) {
                  for (int i_1140 = 0; i_1140 < 2; i_1140++) {
                     /* WARNING: Could not recover jumptable at 0x00101fb5. Too many branches */
                  }
                  ( **(code**)( *(long*)plVar1[0x3d] + 0x70 ) )();
                  return;
               }
            }
         }
      }
      for (int i_1139 = 0; i_1139 < 2; i_1139++) {
         /* WARNING: Could not recover jumptable at 0x00101fc0. Too many branches */
      }
      ( *UNRECOVERED_JUMPTABLE_00 )();
      return;
   }
   LAB_00101fc8:/* WARNING: Could not recover jumptable at 0x00101fc8. Too many branches *//* WARNING: Treating indirect jump as call */( *UNRECOVERED_JUMPTABLE_00 )();
   return;
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::getText() const */void icu_76_godot::SimpleFilteredSentenceBreakIterator::getText(SimpleFilteredSentenceBreakIterator *this) {
   long *plVar1;
   code *UNRECOVERED_JUMPTABLE_00;
   UNRECOVERED_JUMPTABLE_00 = *(code**)( **(long**)( this + 0x1e8 ) + 0x28 );
   if (UNRECOVERED_JUMPTABLE_00 == getText) {
      plVar1 = (long*)( *(long**)( this + 0x1e8 ) )[0x3d];
      UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x28 );
      if (UNRECOVERED_JUMPTABLE_00 == getText) {
         plVar1 = (long*)plVar1[0x3d];
         UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x28 );
         if (UNRECOVERED_JUMPTABLE_00 != getText) goto LAB_00102098;
         plVar1 = (long*)plVar1[0x3d];
         UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x28 );
         if (UNRECOVERED_JUMPTABLE_00 == getText) {
            plVar1 = (long*)plVar1[0x3d];
            UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x28 );
            if (UNRECOVERED_JUMPTABLE_00 != getText) goto LAB_00102098;
            plVar1 = (long*)plVar1[0x3d];
            UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x28 );
            if (UNRECOVERED_JUMPTABLE_00 == getText) {
               plVar1 = (long*)plVar1[0x3d];
               UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x28 );
               if (UNRECOVERED_JUMPTABLE_00 != getText) goto LAB_00102098;
               plVar1 = (long*)plVar1[0x3d];
               UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x28 );
               if (UNRECOVERED_JUMPTABLE_00 == getText) {
                  for (int i_1142 = 0; i_1142 < 2; i_1142++) {
                     /* WARNING: Could not recover jumptable at 0x00102085. Too many branches */
                  }
                  ( **(code**)( *(long*)plVar1[0x3d] + 0x28 ) )();
                  return;
               }
            }
         }
      }
      for (int i_1141 = 0; i_1141 < 2; i_1141++) {
         /* WARNING: Could not recover jumptable at 0x00102090. Too many branches */
      }
      ( *UNRECOVERED_JUMPTABLE_00 )();
      return;
   }
   LAB_00102098:/* WARNING: Could not recover jumptable at 0x00102098. Too many branches *//* WARNING: Treating indirect jump as call */( *UNRECOVERED_JUMPTABLE_00 )();
   return;
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::adoptText(icu_76_godot::CharacterIterator*) */void icu_76_godot::SimpleFilteredSentenceBreakIterator::adoptText(CharacterIterator *param_1) {
   long *plVar1;
   code *UNRECOVERED_JUMPTABLE_00;
   UNRECOVERED_JUMPTABLE_00 = *(code**)( **(long**)( param_1 + 0x1e8 ) + 0x48 );
   if (UNRECOVERED_JUMPTABLE_00 == adoptText) {
      plVar1 = (long*)( *(long**)( param_1 + 0x1e8 ) )[0x3d];
      UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x48 );
      if (UNRECOVERED_JUMPTABLE_00 == adoptText) {
         plVar1 = (long*)plVar1[0x3d];
         UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x48 );
         if (UNRECOVERED_JUMPTABLE_00 != adoptText) goto LAB_00102168;
         plVar1 = (long*)plVar1[0x3d];
         UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x48 );
         if (UNRECOVERED_JUMPTABLE_00 == adoptText) {
            plVar1 = (long*)plVar1[0x3d];
            UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x48 );
            if (UNRECOVERED_JUMPTABLE_00 != adoptText) goto LAB_00102168;
            plVar1 = (long*)plVar1[0x3d];
            UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x48 );
            if (UNRECOVERED_JUMPTABLE_00 == adoptText) {
               plVar1 = (long*)plVar1[0x3d];
               UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x48 );
               if (UNRECOVERED_JUMPTABLE_00 != adoptText) goto LAB_00102168;
               plVar1 = (long*)plVar1[0x3d];
               UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x48 );
               if (UNRECOVERED_JUMPTABLE_00 == adoptText) {
                  for (int i_1144 = 0; i_1144 < 2; i_1144++) {
                     /* WARNING: Could not recover jumptable at 0x00102155. Too many branches */
                  }
                  ( **(code**)( *(long*)plVar1[0x3d] + 0x48 ) )();
                  return;
               }
            }
         }
      }
      for (int i_1143 = 0; i_1143 < 2; i_1143++) {
         /* WARNING: Could not recover jumptable at 0x00102160. Too many branches */
      }
      ( *UNRECOVERED_JUMPTABLE_00 )();
      return;
   }
   LAB_00102168:/* WARNING: Could not recover jumptable at 0x00102168. Too many branches *//* WARNING: Treating indirect jump as call */( *UNRECOVERED_JUMPTABLE_00 )();
   return;
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::setText(icu_76_godot::UnicodeString const&) */void icu_76_godot::SimpleFilteredSentenceBreakIterator::setText(UnicodeString *param_1) {
   long *plVar1;
   code *UNRECOVERED_JUMPTABLE_00;
   UNRECOVERED_JUMPTABLE_00 = *(code**)( **(long**)( param_1 + 0x1e8 ) + 0x38 );
   if (UNRECOVERED_JUMPTABLE_00 == setText) {
      plVar1 = (long*)( *(long**)( param_1 + 0x1e8 ) )[0x3d];
      UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x38 );
      if (UNRECOVERED_JUMPTABLE_00 == setText) {
         plVar1 = (long*)plVar1[0x3d];
         UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x38 );
         if (UNRECOVERED_JUMPTABLE_00 != setText) goto LAB_00102238;
         plVar1 = (long*)plVar1[0x3d];
         UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x38 );
         if (UNRECOVERED_JUMPTABLE_00 == setText) {
            plVar1 = (long*)plVar1[0x3d];
            UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x38 );
            if (UNRECOVERED_JUMPTABLE_00 != setText) goto LAB_00102238;
            plVar1 = (long*)plVar1[0x3d];
            UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x38 );
            if (UNRECOVERED_JUMPTABLE_00 == setText) {
               plVar1 = (long*)plVar1[0x3d];
               UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x38 );
               if (UNRECOVERED_JUMPTABLE_00 != setText) goto LAB_00102238;
               plVar1 = (long*)plVar1[0x3d];
               UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x38 );
               if (UNRECOVERED_JUMPTABLE_00 == setText) {
                  for (int i_1146 = 0; i_1146 < 2; i_1146++) {
                     /* WARNING: Could not recover jumptable at 0x00102225. Too many branches */
                  }
                  ( **(code**)( *(long*)plVar1[0x3d] + 0x38 ) )();
                  return;
               }
            }
         }
      }
      for (int i_1145 = 0; i_1145 < 2; i_1145++) {
         /* WARNING: Could not recover jumptable at 0x00102230. Too many branches */
      }
      ( *UNRECOVERED_JUMPTABLE_00 )();
      return;
   }
   LAB_00102238:/* WARNING: Could not recover jumptable at 0x00102238. Too many branches *//* WARNING: Treating indirect jump as call */( *UNRECOVERED_JUMPTABLE_00 )();
   return;
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::setText(UText*, UErrorCode&) */void icu_76_godot::SimpleFilteredSentenceBreakIterator::setText(SimpleFilteredSentenceBreakIterator *this, UText *param_1, UErrorCode *param_2) {
   code *UNRECOVERED_JUMPTABLE_00;
   long *plVar1;
   plVar1 = *(long**)( this + 0x1e8 );
   UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x40 );
   if (UNRECOVERED_JUMPTABLE_00 == setText) {
      plVar1 = (long*)plVar1[0x3d];
      UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x40 );
      if (UNRECOVERED_JUMPTABLE_00 == setText) {
         plVar1 = (long*)plVar1[0x3d];
         UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x40 );
         if (UNRECOVERED_JUMPTABLE_00 != setText) goto LAB_00102320;
         plVar1 = (long*)plVar1[0x3d];
         UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x40 );
         if (UNRECOVERED_JUMPTABLE_00 == setText) {
            plVar1 = (long*)plVar1[0x3d];
            UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x40 );
            if (UNRECOVERED_JUMPTABLE_00 != setText) goto LAB_00102320;
            plVar1 = (long*)plVar1[0x3d];
            UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x40 );
            if (UNRECOVERED_JUMPTABLE_00 == setText) {
               plVar1 = (long*)plVar1[0x3d];
               UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x40 );
               if (UNRECOVERED_JUMPTABLE_00 != setText) goto LAB_00102320;
               plVar1 = (long*)plVar1[0x3d];
               UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x40 );
               if (UNRECOVERED_JUMPTABLE_00 == setText) {
                  for (int i_1148 = 0; i_1148 < 2; i_1148++) {
                     /* WARNING: Could not recover jumptable at 0x00102309. Too many branches */
                  }
                  ( **(code**)( *(long*)plVar1[0x3d] + 0x40 ) )((long*)plVar1[0x3d], param_1, param_2);
                  return;
               }
            }
         }
      }
      for (int i_1147 = 0; i_1147 < 2; i_1147++) {
         /* WARNING: Could not recover jumptable at 0x00102316. Too many branches */
      }
      ( *UNRECOVERED_JUMPTABLE_00 )(plVar1, param_1, param_2);
      return;
   }
   LAB_00102320:/* WARNING: Could not recover jumptable at 0x00102326. Too many branches *//* WARNING: Treating indirect jump as call */( *UNRECOVERED_JUMPTABLE_00 )(plVar1, param_1, param_2);
   return;
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::refreshInputText(UText*, UErrorCode&) */SimpleFilteredSentenceBreakIterator * __thiscall
icu_76_godot::SimpleFilteredSentenceBreakIterator::refreshInputText
          (SimpleFilteredSentenceBreakIterator *this,UText *param_1,UErrorCode *param_2){
   code *pcVar1;
   long *plVar2;
   plVar2 = *(long**)( this + 0x1e8 );
   pcVar1 = *(code**)( *plVar2 + 0xb0 );
   if (pcVar1 == refreshInputText) {
      plVar2 = (long*)plVar2[0x3d];
      pcVar1 = *(code**)( *plVar2 + 0xb0 );
      if (pcVar1 == refreshInputText) {
         plVar2 = (long*)plVar2[0x3d];
         pcVar1 = *(code**)( *plVar2 + 0xb0 );
         if (pcVar1 != refreshInputText) goto LAB_00102430;
         plVar2 = (long*)plVar2[0x3d];
         pcVar1 = *(code**)( *plVar2 + 0xb0 );
         if (pcVar1 == refreshInputText) {
            plVar2 = (long*)plVar2[0x3d];
            pcVar1 = *(code**)( *plVar2 + 0xb0 );
            if (pcVar1 != refreshInputText) goto LAB_00102430;
            plVar2 = (long*)plVar2[0x3d];
            pcVar1 = *(code**)( *plVar2 + 0xb0 );
            if (pcVar1 == refreshInputText) {
               plVar2 = (long*)plVar2[0x3d];
               pcVar1 = *(code**)( *plVar2 + 0xb0 );
               if (pcVar1 != refreshInputText) goto LAB_00102430;
               plVar2 = (long*)plVar2[0x3d];
               pcVar1 = *(code**)( *plVar2 + 0xb0 );
               if (pcVar1 == refreshInputText) {
                  ( **(code**)( *(long*)plVar2[0x3d] + 0xb0 ) )((long*)plVar2[0x3d], param_1, param_2);
                  return this;
               }
            }
         }
      }
      ( *pcVar1 )(plVar2, param_1, param_2);
      return this;
   }
   LAB_00102430:( *pcVar1 )(plVar2, param_1, param_2);
   return this;
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::getUText(UText*, UErrorCode&) const */void icu_76_godot::SimpleFilteredSentenceBreakIterator::getUText(SimpleFilteredSentenceBreakIterator *this, UText *param_1, UErrorCode *param_2) {
   code *UNRECOVERED_JUMPTABLE_00;
   long *plVar1;
   plVar1 = *(long**)( this + 0x1e8 );
   UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x30 );
   if (UNRECOVERED_JUMPTABLE_00 == getUText) {
      plVar1 = (long*)plVar1[0x3d];
      UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x30 );
      if (UNRECOVERED_JUMPTABLE_00 == getUText) {
         plVar1 = (long*)plVar1[0x3d];
         UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x30 );
         if (UNRECOVERED_JUMPTABLE_00 != getUText) goto LAB_00102520;
         plVar1 = (long*)plVar1[0x3d];
         UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x30 );
         if (UNRECOVERED_JUMPTABLE_00 == getUText) {
            plVar1 = (long*)plVar1[0x3d];
            UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x30 );
            if (UNRECOVERED_JUMPTABLE_00 != getUText) goto LAB_00102520;
            plVar1 = (long*)plVar1[0x3d];
            UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x30 );
            if (UNRECOVERED_JUMPTABLE_00 == getUText) {
               plVar1 = (long*)plVar1[0x3d];
               UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x30 );
               if (UNRECOVERED_JUMPTABLE_00 != getUText) goto LAB_00102520;
               plVar1 = (long*)plVar1[0x3d];
               UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar1 + 0x30 );
               if (UNRECOVERED_JUMPTABLE_00 == getUText) {
                  for (int i_1150 = 0; i_1150 < 2; i_1150++) {
                     /* WARNING: Could not recover jumptable at 0x00102509. Too many branches */
                  }
                  ( **(code**)( *(long*)plVar1[0x3d] + 0x30 ) )((long*)plVar1[0x3d], param_1, param_2);
                  return;
               }
            }
         }
      }
      for (int i_1149 = 0; i_1149 < 2; i_1149++) {
         /* WARNING: Could not recover jumptable at 0x00102516. Too many branches */
      }
      ( *UNRECOVERED_JUMPTABLE_00 )(plVar1, param_1, param_2);
      return;
   }
   LAB_00102520:/* WARNING: Could not recover jumptable at 0x00102526. Too many branches *//* WARNING: Treating indirect jump as call */( *UNRECOVERED_JUMPTABLE_00 )(plVar1, param_1, param_2);
   return;
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::clone() const */SimpleFilteredSentenceBreakIterator *icu_76_godot::SimpleFilteredSentenceBreakIterator::clone(void) {
   SimpleFilteredSentenceBreakIterator *this;
   ulong in_RSI;
   SimpleFilteredSentenceBreakIterator *in_RDI;
   this(SimpleFilteredSentenceBreakIterator * icu_76_godot::UMemory::operator_new((UMemory*)0x1f8, in_RSI));
   if (this != (SimpleFilteredSentenceBreakIterator*)0x0) {
      SimpleFilteredSentenceBreakIterator(this, in_RDI);
   }
   return this;
}/* icu_76_godot::SimpleFilteredSentenceBreakIterator::createBufferClone(void*, int&, UErrorCode&) */SimpleFilteredSentenceBreakIterator * __thiscall
icu_76_godot::SimpleFilteredSentenceBreakIterator::createBufferClone
          (SimpleFilteredSentenceBreakIterator *this,void *param_1,int *param_2,UErrorCode *param_3){
   long lVar1;
   SimpleFilteredSentenceBreakIterator *pSVar2;
   lVar1 = *(long*)this;
   *(undefined4*)param_3 = 0xffffff82;
   if (*(code**)( lVar1 + 0x20 ) == clone) {
      pSVar2 = (SimpleFilteredSentenceBreakIterator*)icu_76_godot::UMemory::operator_new((UMemory*)0x1f8, (ulong)param_1);
      if (pSVar2 != (SimpleFilteredSentenceBreakIterator*)0x0) {
         SimpleFilteredSentenceBreakIterator(pSVar2, this);
      }
      return pSVar2;
   }
   for (int i_1151 = 0; i_1151 < 2; i_1151++) {
      /* WARNING: Could not recover jumptable at 0x001025c6. Too many branches */
   }
   pSVar2 = (SimpleFilteredSentenceBreakIterator*)( **(code**)( lVar1 + 0x20 ) )();
   return pSVar2;
}
