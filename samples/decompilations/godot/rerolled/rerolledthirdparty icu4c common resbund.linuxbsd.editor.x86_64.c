/* icu_76_godot::ResourceBundle::getDynamicClassID() const */undefined1 *icu_76_godot::ResourceBundle::getDynamicClassID(void) {
   return &getStaticClassID();
}
/* icu_76_godot::ResourceBundle::~ResourceBundle() */void icu_76_godot::ResourceBundle::~ResourceBundle(ResourceBundle *this) {
   *(undefined***)this = &PTR__ResourceBundle_00100a50;
   if (*(long*)( this + 8 ) != 0) {
      ures_close_76_godot();
   }

   if (*(long**)( this + 0x10 ) != (long*)0x0) {
      ( **(code**)( **(long**)( this + 0x10 ) + 8 ) )();
   }

   icu_76_godot::UObject::~UObject((UObject*)this);
   return;
}
/* icu_76_godot::ResourceBundle::~ResourceBundle() */void icu_76_godot::ResourceBundle::~ResourceBundle(ResourceBundle *this) {
   void *in_RSI;
   *(undefined***)this = &PTR__ResourceBundle_00100a50;
   if (*(long*)( this + 8 ) != 0) {
      ures_close_76_godot();
   }

   if (*(long**)( this + 0x10 ) != (long*)0x0) {
      ( **(code**)( **(long**)( this + 0x10 ) + 8 ) )();
   }

   icu_76_godot::UObject::~UObject((UObject*)this);
   icu_76_godot::UMemory::operator_delete((UMemory*)this, in_RSI);
   return;
}
/* icu_76_godot::ResourceBundle::getStaticClassID() */undefined1 *icu_76_godot::ResourceBundle::getStaticClassID(void) {
   return &getStaticClassID();
}
/* icu_76_godot::ResourceBundle::ResourceBundle(UErrorCode&) */void icu_76_godot::ResourceBundle::ResourceBundle(ResourceBundle *this, UErrorCode *param_1) {
   long lVar1;
   undefined8 uVar2;
   *(undefined***)this = &PTR__ResourceBundle_00100a50;
   *(undefined8*)( this + 0x10 ) = 0;
   lVar1 = icu_76_godot::Locale::getDefault();
   uVar2 = ures_open_76_godot(0, *(undefined8*)( lVar1 + 0x28 ), param_1);
   *(undefined8*)( this + 8 ) = uVar2;
   return;
}
/* icu_76_godot::ResourceBundle::ResourceBundle(icu_76_godot::ResourceBundle const&) */void icu_76_godot::ResourceBundle::ResourceBundle(ResourceBundle *this, ResourceBundle *param_1) {
   long lVar1;
   long in_FS_OFFSET;
   undefined4 local_14;
   long local_10;
   lVar1 = *(long*)( param_1 + 8 );
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 0x10 ) = 0;
   local_14 = 0;
   *(undefined***)this = &PTR__ResourceBundle_00100a50;
   if (lVar1 != 0) {
      lVar1 = ures_copyResb_76_godot(0, lVar1, &local_14);
   }

   *(long*)( this + 8 ) = lVar1;
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::ResourceBundle::ResourceBundle(UResourceBundle*, UErrorCode&) */void icu_76_godot::ResourceBundle::ResourceBundle(ResourceBundle *this, UResourceBundle *param_1, UErrorCode *param_2) {
   undefined8 uVar1;
   *(undefined***)this = &PTR__ResourceBundle_00100a50;
   *(undefined8*)( this + 0x10 ) = 0;
   if (param_1 != (UResourceBundle*)0x0) {
      uVar1 = ures_copyResb_76_godot(0);
      *(undefined8*)( this + 8 ) = uVar1;
      return;
   }

   *(undefined8*)( this + 8 ) = 0;
   return;
}
/* icu_76_godot::ResourceBundle::ResourceBundle(char const*, icu_76_godot::Locale const&,
   UErrorCode&) */void icu_76_godot::ResourceBundle::ResourceBundle(ResourceBundle *this, char *param_1, Locale *param_2, UErrorCode *param_3) {
   undefined8 uVar1;
   *(undefined8*)( this + 0x10 ) = 0;
   uVar1 = *(undefined8*)( param_2 + 0x28 );
   *(undefined***)this = &PTR__ResourceBundle_00100a50;
   uVar1 = ures_open_76_godot(param_1, uVar1, param_3);
   *(undefined8*)( this + 8 ) = uVar1;
   return;
}
/* icu_76_godot::ResourceBundle::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::ResourceBundle const&) */ResourceBundle * __thiscall
icu_76_godot::ResourceBundle::operator=(ResourceBundle *this,ResourceBundle *param_1){
   undefined8 uVar1;
   long in_FS_OFFSET;
   undefined4 local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this != param_1) {
      if (*(long*)( this + 8 ) != 0) {
         ures_close_76_godot();
         *(undefined8*)( this + 8 ) = 0;
      }

      if (*(long**)( this + 0x10 ) != (long*)0x0) {
         ( **(code**)( **(long**)( this + 0x10 ) + 8 ) )();
         *(undefined8*)( this + 0x10 ) = 0;
      }

      local_24 = 0;
      if (*(long*)( param_1 + 8 ) == 0) {
         *(undefined8*)( this + 8 ) = 0;
      }
 else {
         uVar1 = ures_copyResb_76_godot(0, *(long*)( param_1 + 8 ), &local_24);
         *(undefined8*)( this + 8 ) = uVar1;
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::ResourceBundle::clone() const */undefined8 *icu_76_godot::ResourceBundle::clone(void) {
   undefined8 *puVar1;
   long lVar2;
   ulong in_RSI;
   long in_RDI;
   long in_FS_OFFSET;
   undefined4 local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar1 = (undefined8*)icu_76_godot::UMemory::operator_new((UMemory*)0x18, in_RSI);
   if (puVar1 != (undefined8*)0x0) {
      lVar2 = *(long*)( in_RDI + 8 );
      puVar1[2] = 0;
      *puVar1 = &PTR__ResourceBundle_00100a50;
      local_24 = 0;
      if (lVar2 != 0) {
         lVar2 = ures_copyResb_76_godot(0, lVar2, &local_24);
      }

      puVar1[1] = lVar2;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::ResourceBundle::getString(UErrorCode&) const */UErrorCode *icu_76_godot::ResourceBundle::getString(UErrorCode *param_1) {
   undefined8 in_RDX;
   long in_RSI;
   long in_FS_OFFSET;
   undefined4 local_1c;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_1c = 0;
   local_18 = ures_getString_76_godot(*(undefined8*)( in_RSI + 8 ), &local_1c, in_RDX, 0);
   icu_76_godot::UnicodeString::UnicodeString((UnicodeString*)param_1, 1, &local_18, local_1c);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::ResourceBundle::getBinary(int&, UErrorCode&) const */void icu_76_godot::ResourceBundle::getBinary(int *param_1, UErrorCode *param_2) {
   ures_getBinary_76_godot(*(undefined8*)( param_1 + 2 ));
   return;
}
/* icu_76_godot::ResourceBundle::getIntVector(int&, UErrorCode&) const */void icu_76_godot::ResourceBundle::getIntVector(int *param_1, UErrorCode *param_2) {
   ures_getIntVector_76_godot(*(undefined8*)( param_1 + 2 ));
   return;
}
/* icu_76_godot::ResourceBundle::getUInt(UErrorCode&) const */void icu_76_godot::ResourceBundle::getUInt(UErrorCode *param_1) {
   ures_getUInt_76_godot(*(undefined8*)( param_1 + 8 ));
   return;
}
/* icu_76_godot::ResourceBundle::getInt(UErrorCode&) const */void icu_76_godot::ResourceBundle::getInt(UErrorCode *param_1) {
   ures_getInt_76_godot(*(undefined8*)( param_1 + 8 ));
   return;
}
/* icu_76_godot::ResourceBundle::getName() const */void icu_76_godot::ResourceBundle::getName(ResourceBundle *this) {
   ures_getName_76_godot(*(undefined8*)( this + 8 ));
   return;
}
/* icu_76_godot::ResourceBundle::getKey() const */void icu_76_godot::ResourceBundle::getKey(ResourceBundle *this) {
   ures_getKey_76_godot(*(undefined8*)( this + 8 ));
   return;
}
/* icu_76_godot::ResourceBundle::getType() const */void icu_76_godot::ResourceBundle::getType(ResourceBundle *this) {
   ures_getType_76_godot(*(undefined8*)( this + 8 ));
   return;
}
/* icu_76_godot::ResourceBundle::getSize() const */void icu_76_godot::ResourceBundle::getSize(ResourceBundle *this) {
   ures_getSize_76_godot(*(undefined8*)( this + 8 ));
   return;
}
/* icu_76_godot::ResourceBundle::hasNext() const */void icu_76_godot::ResourceBundle::hasNext(ResourceBundle *this) {
   ures_hasNext_76_godot(*(undefined8*)( this + 8 ));
   return;
}
/* icu_76_godot::ResourceBundle::resetIterator() */void icu_76_godot::ResourceBundle::resetIterator(ResourceBundle *this) {
   ures_resetIterator_76_godot(*(undefined8*)( this + 8 ));
   return;
}
/* icu_76_godot::ResourceBundle::getNext(UErrorCode&) */UErrorCode *icu_76_godot::ResourceBundle::getNext(UErrorCode *param_1) {
   undefined8 uVar1;
   int *in_RDX;
   long in_RSI;
   long in_FS_OFFSET;
   undefined1 auStack_b8[136];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   ures_initStackObject_76_godot(auStack_b8);
   ures_getNextResource_76_godot(*(undefined8*)( in_RSI + 8 ), auStack_b8);
   *(undefined8*)( param_1 + 0x10 ) = 0;
   *(undefined***)param_1 = &PTR__ResourceBundle_00100a50;
   uVar1 = ures_copyResb_76_godot(0, auStack_b8);
   *(undefined8*)( param_1 + 8 ) = uVar1;
   if (*in_RDX < 1) {
      ures_close_76_godot(auStack_b8);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::ResourceBundle::getNextString(UErrorCode&) */UErrorCode *icu_76_godot::ResourceBundle::getNextString(UErrorCode *param_1) {
   long in_RSI;
   long in_FS_OFFSET;
   undefined4 local_1c;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_1c = 0;
   local_18 = ures_getNextString_76_godot(*(undefined8*)( in_RSI + 8 ), &local_1c, 0);
   icu_76_godot::UnicodeString::UnicodeString((UnicodeString*)param_1, 1, &local_18, local_1c);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::ResourceBundle::getNextString(char const**, UErrorCode&) */char **icu_76_godot::ResourceBundle::getNextString(char **param_1, UErrorCode *param_2) {
   long in_FS_OFFSET;
   undefined4 local_1c;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_1c = 0;
   local_18 = ures_getNextString_76_godot(*(undefined8*)( param_2 + 8 ), &local_1c);
   icu_76_godot::UnicodeString::UnicodeString((UnicodeString*)param_1, 1, &local_18, local_1c);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::ResourceBundle::get(int, UErrorCode&) const */undefined8 *icu_76_godot::ResourceBundle::get(int param_1, UErrorCode *param_2) {
   undefined8 uVar1;
   int *in_RCX;
   undefined4 in_EDX;
   undefined4 in_register_0000003c;
   undefined8 *puVar2;
   long in_FS_OFFSET;
   undefined1 auStack_b8[136];
   long local_30;
   puVar2 = (undefined8*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   ures_initStackObject_76_godot(auStack_b8);
   ures_getByIndex_76_godot(*(undefined8*)( param_2 + 8 ), in_EDX, auStack_b8);
   puVar2[2] = 0;
   *puVar2 = &PTR__ResourceBundle_00100a50;
   uVar1 = ures_copyResb_76_godot(0, auStack_b8);
   puVar2[1] = uVar1;
   if (*in_RCX < 1) {
      ures_close_76_godot(auStack_b8);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::ResourceBundle::getStringEx(int, UErrorCode&) const */ResourceBundle * __thiscall
icu_76_godot::ResourceBundle::getStringEx(ResourceBundle *this,int param_1,UErrorCode *param_2){
   undefined4 in_register_00000034;
   long in_FS_OFFSET;
   undefined4 local_1c;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_1c = 0;
   local_18 = ures_getStringByIndex_76_godot(*(undefined8*)( CONCAT44(in_register_00000034, param_1) + 8 ), (ulong)param_2 & 0xffffffff, &local_1c);
   icu_76_godot::UnicodeString::UnicodeString((UnicodeString*)this, 1, &local_18, local_1c);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::ResourceBundle::get(char const*, UErrorCode&) const */char *icu_76_godot::ResourceBundle::get(char *param_1, UErrorCode *param_2) {
   undefined8 uVar1;
   int *in_RCX;
   long in_FS_OFFSET;
   undefined1 auStack_b8[136];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   ures_initStackObject_76_godot(auStack_b8);
   ures_getByKey_76_godot(*(undefined8*)( param_2 + 8 ));
   for (int i = 0; i < 8; i++) {
      param_1[( i + 16 )] = '\0';
   }

   *(undefined***)param_1 = &PTR__ResourceBundle_00100a50;
   uVar1 = ures_copyResb_76_godot(0, auStack_b8);
   *(undefined8*)( param_1 + 8 ) = uVar1;
   if (*in_RCX < 1) {
      ures_close_76_godot(auStack_b8);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::ResourceBundle::getWithFallback(char const*, UErrorCode&) */char *icu_76_godot::ResourceBundle::getWithFallback(char *param_1, UErrorCode *param_2) {
   undefined8 uVar1;
   int *in_RCX;
   long in_FS_OFFSET;
   undefined1 auStack_b8[136];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   ures_initStackObject_76_godot(auStack_b8);
   ures_getByKeyWithFallback_76_godot(*(undefined8*)( param_2 + 8 ));
   for (int i = 0; i < 8; i++) {
      param_1[( i + 16 )] = '\0';
   }

   *(undefined***)param_1 = &PTR__ResourceBundle_00100a50;
   uVar1 = ures_copyResb_76_godot(0, auStack_b8);
   *(undefined8*)( param_1 + 8 ) = uVar1;
   if (*in_RCX < 1) {
      ures_close_76_godot(auStack_b8);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::ResourceBundle::getStringEx(char const*, UErrorCode&) const */ResourceBundle * __thiscall
icu_76_godot::ResourceBundle::getStringEx(ResourceBundle *this,char *param_1,UErrorCode *param_2){
   long in_FS_OFFSET;
   undefined4 local_1c;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_1c = 0;
   local_18 = ures_getStringByKey_76_godot(*(undefined8*)( param_1 + 8 ), param_2, &local_1c);
   icu_76_godot::UnicodeString::UnicodeString((UnicodeString*)this, 1, &local_18, local_1c);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::ResourceBundle::getVersionNumber() const */void icu_76_godot::ResourceBundle::getVersionNumber(ResourceBundle *this) {
   ures_getVersionNumberInternal_76_godot(*(undefined8*)( this + 8 ));
   return;
}
/* icu_76_godot::ResourceBundle::getVersion(unsigned char*) const */void icu_76_godot::ResourceBundle::getVersion(uchar *param_1) {
   ures_getVersion_76_godot(*(undefined8*)( param_1 + 8 ));
   return;
}
/* icu_76_godot::ResourceBundle::getLocale() const */Locale * __thiscall icu_76_godot::ResourceBundle::getLocale(ResourceBundle *this){
   char *pcVar1;
   Locale *this_00;
   undefined4 *puVar2;
   long in_FS_OFFSET;
   undefined4 local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   umtx_lock_76_godot(getLocale(), ::gLocaleLock);
   this_00 = *(Locale**)( this + 0x10 );
   if (this_00 == (Locale*)0x0) {
      puVar2 = &local_34;
      local_34 = 0;
      pcVar1 = (char*)ures_getLocaleInternal_76_godot(*(undefined8*)( this + 8 ));
      this_00 = (Locale*)icu_76_godot::UMemory::operator_new((UMemory*)0xe0, (ulong)puVar2);
      if (this_00 == (Locale*)0x0) {
         *(undefined8*)( this + 0x10 ) = 0;
         this_00 = (Locale*)icu_76_godot::Locale::getDefault();
      }
 else {
         icu_76_godot::Locale::Locale(this_00, pcVar1, (char*)0x0, (char*)0x0, (char*)0x0);
         *(Locale**)( this + 0x10 ) = this_00;
      }

   }

   umtx_unlock_76_godot(getLocale(), ::gLocaleLock);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this_00;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::ResourceBundle::getLocale(ULocDataLocaleType, UErrorCode&) const */Locale *icu_76_godot::ResourceBundle::getLocale(Locale *param_1, long param_2, undefined4 param_3, undefined8 param_4) {
   char *pcVar1;
   pcVar1 = (char*)ures_getLocaleByType_76_godot(*(undefined8*)( param_2 + 8 ), param_3, param_4);
   icu_76_godot::Locale::Locale(param_1, pcVar1, (char*)0x0, (char*)0x0, (char*)0x0);
   return param_1;
}

