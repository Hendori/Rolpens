/* icu_76_godot::StringEnumeration::clone() const */undefined8 icu_76_godot::StringEnumeration::clone(void) {
   return 0;
}/* icu_76_godot::UStringEnumeration::getDynamicClassID() const */undefined1 *icu_76_godot::UStringEnumeration::getDynamicClassID(void) {
   return &getStaticClassID();
}void ustrenum_unext(long param_1) {
   for (int i_1421 = 0; i_1421 < 2; i_1421++) {
      /* WARNING: Could not recover jumptable at 0x0010002b. Too many branches */
   }
   ( **(code**)( **(long**)( param_1 + 8 ) + 0x30 ) )();
   return;
}void ustrenum_next(long param_1) {
   for (int i_1422 = 0; i_1422 < 2; i_1422++) {
      /* WARNING: Could not recover jumptable at 0x0010003b. Too many branches */
   }
   ( **(code**)( **(long**)( param_1 + 8 ) + 0x28 ) )();
   return;
}undefined4 ucharstrenum_count(long param_1) {
   return *(undefined4*)( param_1 + 0x3c );
}void ucharstrenum_reset(long param_1) {
   *(undefined4*)( param_1 + 0x38 ) = 0;
   return;
}void ucharstrenum_close(void) {
   uprv_free_76_godot();
   return;
}/* icu_76_godot::StringEnumeration::unext(int*, UErrorCode&) */undefined8 icu_76_godot::StringEnumeration::unext(StringEnumeration *this, int *param_1, UErrorCode *param_2) {
   int iVar1;
   UnicodeString *pUVar2;
   undefined8 uVar3;
   pUVar2 = (UnicodeString*)( **(code**)( *(long*)this + 0x38 ) )(this, param_2);
   if (( *(int*)param_2 < 1 ) && ( pUVar2 != (UnicodeString*)0x0 )) {
      icu_76_godot::UnicodeString::operator =((UnicodeString*)( this + 8 ), pUVar2);
      if (param_1 != (int*)0x0) {
         if (*(short*)( this + 0x10 ) < 0) {
            iVar1 = *(int*)( this + 0x14 );
         } else {
            iVar1 = (int)( *(short*)( this + 0x10 ) >> 5 );
         }
         *param_1 = iVar1;
      }
      uVar3 = icu_76_godot::UnicodeString::getTerminatedBuffer();
      return uVar3;
   }
   return 0;
}char *ucharstrenum_next(long param_1, undefined4 *param_2) {
   int iVar1;
   char *__s;
   size_t sVar2;
   iVar1 = *(int*)( param_1 + 0x38 );
   if (iVar1 < *(int*)( param_1 + 0x3c )) {
      *(int*)( param_1 + 0x38 ) = iVar1 + 1;
      __s = *(char**)( *(long*)( param_1 + 8 ) + (long)iVar1 * 8 );
      if (param_2 != (undefined4*)0x0) {
         sVar2 = strlen(__s);
         *param_2 = (int)sVar2;
      }
      return __s;
   }
   return (char*)0x0;
}/* icu_76_godot::UStringEnumeration::count(UErrorCode&) const */void icu_76_godot::UStringEnumeration::count(UErrorCode *param_1) {
   uenum_count_76_godot(*(undefined8*)( param_1 + 0x78 ));
   return;
}/* icu_76_godot::UStringEnumeration::next(int*, UErrorCode&) */void icu_76_godot::UStringEnumeration::next(int *param_1, UErrorCode *param_2) {
   uenum_next_76_godot(*(undefined8*)( param_1 + 0x1e ));
   return;
}/* icu_76_godot::UStringEnumeration::snext(UErrorCode&) */long icu_76_godot::UStringEnumeration::snext(UStringEnumeration *this, UErrorCode *param_1) {
   long lVar1;
   uint uVar2;
   long in_FS_OFFSET;
   undefined1 local_34[4];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = uenum_unext_76_godot(*(undefined8*)( this + 0x78 ), local_34, param_1);
   if (lVar1 != 0) {
      if (*(int*)param_1 < 1) {
         icu_76_godot::UnicodeString::unBogus();
         if (*(short*)( this + 0x10 ) < 0) {
            uVar2 = *(uint*)( this + 0x14 );
         } else {
            uVar2 = ( uint )(*(short*)( this + 0x10 ) >> 5);
         }
         lVar1 = icu_76_godot::UnicodeString::doReplace((int)this + 8, 0, (wchar16*)(ulong)uVar2, (int)lVar1, 0);
      } else {
         lVar1 = 0;
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* icu_76_godot::UStringEnumeration::reset(UErrorCode&) */void icu_76_godot::UStringEnumeration::reset(UErrorCode *param_1) {
   uenum_reset_76_godot(*(undefined8*)( param_1 + 0x78 ));
   return;
}undefined8 ucharstrenum_unext(long param_1, undefined4 *param_2) {
   int iVar1;
   undefined8 uVar2;
   undefined4 uVar3;
   iVar1 = *(int*)( param_1 + 0x38 );
   if (iVar1 < *(int*)( param_1 + 0x3c )) {
      *(int*)( param_1 + 0x38 ) = iVar1 + 1;
      uVar2 = *(undefined8*)( *(long*)( param_1 + 8 ) + (long)iVar1 * 8 );
      if (param_2 != (undefined4*)0x0) {
         uVar3 = u_strlen_76_godot(uVar2);
         *param_2 = uVar3;
      }
      return uVar2;
   }
   return 0;
}/* icu_76_godot::StringEnumeration::next(int*, UErrorCode&) */undefined8 icu_76_godot::StringEnumeration::next(StringEnumeration *this, int *param_1, UErrorCode *param_2) {
   int iVar1;
   UnicodeString *pUVar2;
   StringEnumeration *pSVar3;
   int iVar4;
   pUVar2 = (UnicodeString*)( **(code**)( *(long*)this + 0x38 ) )(this, param_2);
   if (( *(int*)param_2 < 1 ) && ( pUVar2 != (UnicodeString*)0x0 )) {
      icu_76_godot::UnicodeString::operator =((UnicodeString*)( this + 8 ), pUVar2);
      if (*(short*)( this + 0x10 ) < 0) {
         iVar1 = *(int*)( this + 0x14 );
      } else {
         iVar1 = (int)( *(short*)( this + 0x10 ) >> 5 );
      }
      if (*(int*)param_2 < 1) {
         iVar4 = *(int*)( this + 0x70 );
         iVar1 = iVar1 + 1;
         pSVar3 = *(StringEnumeration**)( this + 0x68 );
         if (iVar1 <= iVar4) {
            LAB_00100345:if (param_1 != (int*)0x0) {
               if (*(short*)( this + 0x10 ) < 0) {
                  iVar1 = *(int*)( this + 0x14 );
               } else {
                  iVar1 = (int)( *(short*)( this + 0x10 ) >> 5 );
               }
               *param_1 = iVar1;
            }
            icu_76_godot::UnicodeString::extract((UnicodeString*)( this + 8 ), 0, 0x7fffffff, pSVar3, *(undefined4*)( this + 0x70 ), 0);
            return *(undefined8*)( this + 0x68 );
         }
         iVar4 = iVar4 / 2 + iVar4;
         if (iVar4 < iVar1) {
            iVar4 = iVar1;
         }
         if (this + 0x48 != pSVar3) {
            uprv_free_76_godot(pSVar3);
         }
         pSVar3 = (StringEnumeration*)uprv_malloc_76_godot((long)iVar4);
         *(StringEnumeration**)( this + 0x68 ) = pSVar3;
         if (pSVar3 == (StringEnumeration*)0x0) {
            *(StringEnumeration**)( this + 0x68 ) = this + 0x48;
            *(undefined4*)( this + 0x70 ) = 0x20;
            *(undefined4*)param_2 = 7;
         } else {
            iVar1 = *(int*)param_2;
            *(int*)( this + 0x70 ) = iVar4;
            if (iVar1 < 1) goto LAB_00100345;
         }
      }
   }
   return 0;
}/* icu_76_godot::StringEnumeration::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::StringEnumeration const&)
   const */undefined8 icu_76_godot::StringEnumeration::operator ==(StringEnumeration *this, StringEnumeration *param_1) {
   char *__s1;
   char *pcVar1;
   int iVar2;
   undefined4 extraout_var;
   __s1 = *(char**)( *(long*)( *(long*)this + -8 ) + 8 );
   pcVar1 = *(char**)( *(long*)( *(long*)param_1 + -8 ) + 8 );
   if (__s1 == pcVar1) {
      return 1;
   }
   if (*__s1 != '*') {
      iVar2 = strcmp(__s1, pcVar1 + ( *pcVar1 == '*' ));
      return CONCAT71(( int7 )(CONCAT44(extraout_var, iVar2) >> 8), iVar2 == 0);
   }
   return 0;
}void ustrenum_reset(long param_1) {
   code *UNRECOVERED_JUMPTABLE;
   UNRECOVERED_JUMPTABLE = *(code**)( **(long**)( param_1 + 8 ) + 0x40 );
   if (UNRECOVERED_JUMPTABLE == icu_76_godot::UStringEnumeration::reset) {
      uenum_reset_76_godot(( *(long**)( param_1 + 8 ) )[0xf]);
      return;
   }
   for (int i_1423 = 0; i_1423 < 2; i_1423++) {
      /* WARNING: Could not recover jumptable at 0x00100438. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void ustrenum_count(long param_1) {
   code *UNRECOVERED_JUMPTABLE;
   UNRECOVERED_JUMPTABLE = *(code**)( **(long**)( param_1 + 8 ) + 0x20 );
   if (UNRECOVERED_JUMPTABLE == icu_76_godot::UStringEnumeration::count) {
      uenum_count_76_godot(( *(long**)( param_1 + 8 ) )[0xf]);
      return;
   }
   for (int i_1424 = 0; i_1424 < 2; i_1424++) {
      /* WARNING: Could not recover jumptable at 0x00100468. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}/* icu_76_godot::StringEnumeration::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::StringEnumeration const&)
   const */ulong icu_76_godot::StringEnumeration::operator !=(StringEnumeration *this, StringEnumeration *param_1) {
   code *pcVar1;
   char *__s1;
   char *pcVar2;
   int iVar3;
   uint uVar4;
   ulong uVar5;
   undefined4 extraout_var;
   pcVar1 = *(code**)( *(long*)this + 0x48 );
   if (pcVar1 != operator == ) {
      uVar4 = ( *pcVar1 )();
      return ( ulong )(uVar4 ^ 1);
   }
   __s1 = *(char**)( *(long*)( *(long*)this + -8 ) + 8 );
   pcVar2 = *(char**)( *(long*)( *(long*)param_1 + -8 ) + 8 );
   if (__s1 != pcVar2) {
      uVar5 = 1;
      if (*__s1 != '*') {
         iVar3 = strcmp(__s1, pcVar2 + ( *pcVar2 == '*' ));
         uVar5 = CONCAT71(( int7 )(CONCAT44(extraout_var, iVar3) >> 8), iVar3 != 0);
      }
      return uVar5;
   }
   return 0;
}/* icu_76_godot::UStringEnumeration::~UStringEnumeration() */void icu_76_godot::UStringEnumeration::~UStringEnumeration(UStringEnumeration *this) {
   *(undefined***)this = &PTR__UStringEnumeration_00100c78;
   uenum_close_76_godot(*(undefined8*)( this + 0x78 ));
   *(undefined**)this = &DAT_00100c10;
   if (( *(UStringEnumeration**)( this + 0x68 ) != (UStringEnumeration*)0x0 ) && ( *(UStringEnumeration**)( this + 0x68 ) != this + 0x48 )) {
      uprv_free_76_godot();
   }
   icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)( this + 8 ));
   icu_76_godot::UObject::~UObject((UObject*)this);
   return;
}/* icu_76_godot::UStringEnumeration::~UStringEnumeration() */void icu_76_godot::UStringEnumeration::~UStringEnumeration(UStringEnumeration *this) {
   void *in_RSI;
   *(undefined***)this = &PTR__UStringEnumeration_00100c78;
   uenum_close_76_godot(*(undefined8*)( this + 0x78 ));
   *(undefined**)this = &DAT_00100c10;
   if (( *(UStringEnumeration**)( this + 0x68 ) != (UStringEnumeration*)0x0 ) && ( *(UStringEnumeration**)( this + 0x68 ) != this + 0x48 )) {
      uprv_free_76_godot();
   }
   icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)( this + 8 ));
   icu_76_godot::UObject::~UObject((UObject*)this);
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}void ustrenum_close(long param_1, void *param_2) {
   UObject *this;
   this * (UObject**)( param_1 + 8 );
   if (this != (UObject*)0x0) {
      if (*(code**)( *(long*)this + 8 ) != icu_76_godot::UStringEnumeration::~UStringEnumeration) {
         ( **(code**)( *(long*)this + 8 ) )(this);
         uprv_free_76_godot(param_1);
         return;
      }
      *(undefined***)this = &PTR__UStringEnumeration_00100c78;
      uenum_close_76_godot(*(undefined8*)( this + 0x78 ));
      *(undefined**)this = &DAT_00100c10;
      if (( *(UObject**)( this + 0x68 ) != (UObject*)0x0 ) && ( *(UObject**)( this + 0x68 ) != this + 0x48 )) {
         uprv_free_76_godot();
      }
      icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)( this + 8 ));
      icu_76_godot::UObject::~UObject(this);
      icu_76_godot::UMemory::operator_delete((UMemory*)this, param_2);
   }
   uprv_free_76_godot(param_1);
   return;
}/* icu_76_godot::StringEnumeration::StringEnumeration() */void icu_76_godot::StringEnumeration::StringEnumeration(StringEnumeration *this) {
   *(undefined4*)( this + 0x70 ) = 0x20;
   *(undefined2*)( this + 0x10 ) = 2;
   *(StringEnumeration**)( this + 0x68 ) = this + 0x48;
   *(undefined**)this = &DAT_00100c10;
   *(code**)( this + 8 ) = u_charsToUChars_76_godot;
   return;
}/* icu_76_godot::StringEnumeration::~StringEnumeration() */void icu_76_godot::StringEnumeration::~StringEnumeration(StringEnumeration *this) {
   *(undefined**)this = &DAT_00100c10;
   if (( *(StringEnumeration**)( this + 0x68 ) != (StringEnumeration*)0x0 ) && ( *(StringEnumeration**)( this + 0x68 ) != this + 0x48 )) {
      uprv_free_76_godot();
   }
   icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)( this + 8 ));
   icu_76_godot::UObject::~UObject((UObject*)this);
   return;
}/* icu_76_godot::StringEnumeration::~StringEnumeration() */void icu_76_godot::StringEnumeration::~StringEnumeration(StringEnumeration *this) {
   void *in_RSI;
   *(undefined**)this = &DAT_00100c10;
   if (( *(StringEnumeration**)( this + 0x68 ) != (StringEnumeration*)0x0 ) && ( *(StringEnumeration**)( this + 0x68 ) != this + 0x48 )) {
      uprv_free_76_godot();
   }
   icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)( this + 8 ));
   icu_76_godot::UObject::~UObject((UObject*)this);
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}/* icu_76_godot::StringEnumeration::ensureCharsCapacity(int, UErrorCode&) */void icu_76_godot::StringEnumeration::ensureCharsCapacity(StringEnumeration *this, int param_1, UErrorCode *param_2) {
   int iVar1;
   long lVar2;
   if (0 < *(int*)param_2) {
      return;
   }
   iVar1 = *(int*)( this + 0x70 );
   if (iVar1 < param_1) {
      iVar1 = iVar1 / 2 + iVar1;
      if (param_1 <= iVar1) {
         param_1 = iVar1;
      }
      if (*(StringEnumeration**)( this + 0x68 ) != this + 0x48) {
         uprv_free_76_godot();
      }
      lVar2 = uprv_malloc_76_godot((long)param_1);
      *(long*)( this + 0x68 ) = lVar2;
      if (lVar2 == 0) {
         *(StringEnumeration**)( this + 0x68 ) = this + 0x48;
         *(undefined4*)( this + 0x70 ) = 0x20;
         *(undefined4*)param_2 = 7;
      } else {
         *(int*)( this + 0x70 ) = param_1;
      }
   }
   return;
}/* icu_76_godot::StringEnumeration::setChars(char const*, int, UErrorCode&) */StringEnumeration * __thiscall
icu_76_godot::StringEnumeration::setChars
          (StringEnumeration *this,char *param_1,int param_2,UErrorCode *param_3){
   long lVar1;
   size_t sVar2;
   int iVar3;
   if (( *(int*)param_3 < 1 ) && ( param_1 != (char*)0x0 )) {
      if (param_2 < 0) {
         sVar2 = strlen(param_1);
         param_2 = (int)sVar2;
      }
      iVar3 = (int)( this + 8 );
      lVar1 = icu_76_godot::UnicodeString::getBuffer(iVar3);
      if (lVar1 != 0) {
         u_charsToUChars_76_godot(param_1, lVar1, param_2);
         *(undefined2*)( lVar1 + (long)param_2 * 2 ) = 0;
         icu_76_godot::UnicodeString::releaseBuffer(iVar3);
         return this + 8;
      }
      *(undefined4*)param_3 = 7;
   }
   return (StringEnumeration*)0x0;
}/* icu_76_godot::StringEnumeration::snext(UErrorCode&) */void icu_76_godot::StringEnumeration::snext(StringEnumeration *this, UErrorCode *param_1) {
   char *pcVar1;
   long in_FS_OFFSET;
   int local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar1 = (char*)( **(code**)( *(long*)this + 0x28 ) )(this, &local_24, param_1);
   setChars(this, pcVar1, local_24, param_1);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* icu_76_godot::UStringEnumeration::fromUEnumeration(UEnumeration*, UErrorCode&) */undefined8 *icu_76_godot::UStringEnumeration::fromUEnumeration(UEnumeration *param_1, UErrorCode *param_2) {
   undefined8 *puVar1;
   if (*(int*)param_2 < 1) {
      puVar1 = (undefined8*)icu_76_godot::UMemory::operator_new((UMemory*)0x80, (ulong)param_2);
      if (puVar1 != (undefined8*)0x0) {
         *(undefined4*)( puVar1 + 0xe ) = 0x20;
         *(undefined2*)( puVar1 + 2 ) = 2;
         puVar1[0xd] = puVar1 + 9;
         puVar1[0xf] = param_1;
         *puVar1 = &PTR__UStringEnumeration_00100c78;
         puVar1[1] = u_charsToUChars_76_godot;
         return puVar1;
      }
      *(undefined4*)param_2 = 7;
   }
   uenum_close_76_godot(param_1);
   return (undefined8*)0x0;
}/* icu_76_godot::UStringEnumeration::UStringEnumeration(UEnumeration*) */void icu_76_godot::UStringEnumeration::UStringEnumeration(UStringEnumeration *this, UEnumeration *param_1) {
   *(undefined4*)( this + 0x70 ) = 0x20;
   *(undefined2*)( this + 0x10 ) = 2;
   *(UStringEnumeration**)( this + 0x68 ) = this + 0x48;
   *(UEnumeration**)( this + 0x78 ) = param_1;
   *(undefined***)this = &PTR__UStringEnumeration_00100c78;
   *(code**)( this + 8 ) = u_charsToUChars_76_godot;
   return;
}/* icu_76_godot::UStringEnumeration::getStaticClassID() */undefined1 *icu_76_godot::UStringEnumeration::getStaticClassID(void) {
   return &getStaticClassID();
}undefined8 *uenum_openFromStringEnumeration_76_godot(UObject *param_1, int *param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   int *piVar8;
   if (*param_2 < 1) {
      if (param_1 == (UObject*)0x0) {
         return (undefined8*)0x0;
      }
      piVar8 = param_2;
      puVar7 = (undefined8*)uprv_malloc_76_godot(0x38);
      uVar6 = USTRENUM_VT._48_8_;
      uVar5 = USTRENUM_VT._40_8_;
      uVar4 = USTRENUM_VT._32_8_;
      uVar3 = USTRENUM_VT._24_8_;
      uVar2 = USTRENUM_VT._16_8_;
      uVar1 = USTRENUM_VT._8_8_;
      if (puVar7 != (undefined8*)0x0) {
         *puVar7 = USTRENUM_VT._0_8_;
         puVar7[1] = uVar1;
         puVar7[6] = uVar6;
         puVar7[1] = param_1;
         puVar7[2] = uVar2;
         puVar7[3] = uVar3;
         puVar7[4] = uVar4;
         puVar7[5] = uVar5;
         return puVar7;
      }
      *param_2 = 7;
      param_2 = piVar8;
   } else if (param_1 == (UObject*)0x0) {
      return (undefined8*)0x0;
   }
   if (*(code**)( *(long*)param_1 + 8 ) == icu_76_godot::UStringEnumeration::~UStringEnumeration) {
      *(undefined***)param_1 = &PTR__UStringEnumeration_00100c78;
      uenum_close_76_godot(*(undefined8*)( param_1 + 0x78 ));
      *(undefined**)param_1 = &DAT_00100c10;
      if (( *(UObject**)( param_1 + 0x68 ) != (UObject*)0x0 ) && ( *(UObject**)( param_1 + 0x68 ) != param_1 + 0x48 )) {
         uprv_free_76_godot();
      }
      icu_76_godot::UnicodeString::~UnicodeString((UnicodeString*)( param_1 + 8 ));
      icu_76_godot::UObject::~UObject(param_1);
      icu_76_godot::UMemory::operator_delete((UMemory*)param_1, param_2);
      return (undefined8*)0x0;
   }
   ( **(code**)( *(long*)param_1 + 8 ) )(param_1);
   return (undefined8*)0x0;
}undefined8 *uenum_openCharStringsEnumeration_76_godot(long param_1, int param_2, int *param_3) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 *puVar8;
   if (*param_3 < 1) {
      if (( param_2 < 0 ) || ( ( param_2 != 0 && ( param_1 == 0 ) ) )) {
         puVar8 = (undefined8*)0x0;
      } else {
         puVar8 = (undefined8*)uprv_malloc_76_godot(0x40);
         uVar7 = UCHARSTRENUM_VT._48_8_;
         uVar2 = UCHARSTRENUM_VT._8_8_;
         uVar1 = UCHARSTRENUM_VT._0_8_;
         if (puVar8 == (undefined8*)0x0) {
            *param_3 = 7;
            puVar8 = (undefined8*)0x0;
         } else {
            *(undefined4*)( puVar8 + 7 ) = 0;
            uVar6 = UCHARSTRENUM_VT._40_8_;
            uVar5 = UCHARSTRENUM_VT._32_8_;
            uVar4 = UCHARSTRENUM_VT._24_8_;
            uVar3 = UCHARSTRENUM_VT._16_8_;
            *(int*)( (long)puVar8 + 0x3c ) = param_2;
            *puVar8 = uVar1;
            puVar8[1] = uVar2;
            puVar8[6] = uVar7;
            puVar8[1] = param_1;
            puVar8[2] = uVar3;
            puVar8[3] = uVar4;
            puVar8[4] = uVar5;
            puVar8[5] = uVar6;
         }
      }
      return puVar8;
   }
   return (undefined8*)0x0;
}undefined8 *uenum_openUCharStringsEnumeration_76_godot(long param_1, int param_2, int *param_3) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 *puVar8;
   if (*param_3 < 1) {
      if (( param_2 < 0 ) || ( ( param_2 != 0 && ( param_1 == 0 ) ) )) {
         puVar8 = (undefined8*)0x0;
      } else {
         puVar8 = (undefined8*)uprv_malloc_76_godot(0x40);
         uVar7 = UCHARSTRENUM_U_VT._48_8_;
         uVar2 = UCHARSTRENUM_U_VT._8_8_;
         uVar1 = UCHARSTRENUM_U_VT._0_8_;
         if (puVar8 == (undefined8*)0x0) {
            *param_3 = 7;
            puVar8 = (undefined8*)0x0;
         } else {
            *(undefined4*)( puVar8 + 7 ) = 0;
            uVar6 = UCHARSTRENUM_U_VT._40_8_;
            uVar5 = UCHARSTRENUM_U_VT._32_8_;
            uVar4 = UCHARSTRENUM_U_VT._24_8_;
            uVar3 = UCHARSTRENUM_U_VT._16_8_;
            *(int*)( (long)puVar8 + 0x3c ) = param_2;
            *puVar8 = uVar1;
            puVar8[1] = uVar2;
            puVar8[6] = uVar7;
            puVar8[1] = param_1;
            puVar8[2] = uVar3;
            puVar8[3] = uVar4;
            puVar8[4] = uVar5;
            puVar8[5] = uVar6;
         }
      }
      return puVar8;
   }
   return (undefined8*)0x0;
}
