/* CowData<Pair<int, int> >::_copy_on_write() [clone .isra.0] */void CowData<Pair<int,int>>::_copy_on_write(CowData<Pair<int,int>> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 8;
   if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = 1;
      puVar4[1] = lVar2;
      memcpy(puVar4 + 2, *(void**)this, __n);
      if (*(long*)this != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)this + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined8**)this = puVar4 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* CowData<Pair<int, int> >::_ref(CowData<Pair<int, int> > const&) [clone .part.0] */void CowData<Pair<int,int>>::_ref(CowData<Pair<int,int>> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
 else {
         *(undefined8*)this = 0;
      }

   }

   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) {
            return;
         }

         LOCK();
         lVar3 = *plVar1;
         bVar4 = lVar2 == lVar3;
         if (bVar4) {
            *plVar1 = lVar2 + 1;
            lVar3 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }

   }

   return;
}
/* Ref<Script>::TEMPNAMEPLACEHOLDERVALUE(Ref<Script> const&) [clone .isra.0] */void Ref<Script>::operator =(Ref<Script> *this, Ref *param_1) {
   Object *pOVar1;
   char cVar2;
   pOVar1 = *(Object**)this;
   if (pOVar1 != (Object*)param_1) {
      *(Ref**)this = param_1;
      if (param_1 != (Ref*)0x0) {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)this = 0;
         }

      }

      if (pOVar1 != (Object*)0x0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
               return;
            }

         }

      }

   }

   return;
}
/* void Ref<Script>::TEMPNAMEPLACEHOLDERVALUE(Ref<Resource> const&) [clone .isra.0] */void Ref<Script>::operator =(Ref<Script> *this, Ref *param_1) {
   Object *pOVar1;
   char cVar2;
   Object *pOVar3;
   pOVar1 = *(Object**)this;
   if (param_1 == (Ref*)0x0) {
      if (pOVar1 == (Object*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
   }
 else {
      pOVar3 = (Object*)__dynamic_cast(param_1, &Object::typeinfo, &Script::typeinfo, 0);
      if (pOVar3 == pOVar1) {
         return;
      }

      *(Object**)this = pOVar3;
      if (( pOVar3 != (Object*)0x0 ) && ( cVar2 = RefCounted::reference() ),cVar2 == '\0') {
         *(undefined8*)this = 0;
      }

      if (pOVar1 == (Object*)0x0) {
         return;
      }

   }

   cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar1) ),cVar2 != '\0') {
      ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
      Memory::free_static(pOVar1, false);
      return;
   }

   return;
}
/* void Ref<Script>::TEMPNAMEPLACEHOLDERVALUE(Ref<GDScript> const&) [clone .isra.0] */void Ref<Script>::operator =(Ref<Script> *this, Ref *param_1) {
   Object *pOVar1;
   char cVar2;
   Object *pOVar3;
   pOVar1 = *(Object**)this;
   if (param_1 == (Ref*)0x0) {
      if (pOVar1 == (Object*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
   }
 else {
      pOVar3 = (Object*)__dynamic_cast(param_1, &Object::typeinfo, &Script::typeinfo, 0);
      if (pOVar3 == pOVar1) {
         return;
      }

      *(Object**)this = pOVar3;
      if (( pOVar3 != (Object*)0x0 ) && ( cVar2 = RefCounted::reference() ),cVar2 == '\0') {
         *(undefined8*)this = 0;
      }

      if (pOVar1 == (Object*)0x0) {
         return;
      }

   }

   cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar1) ),cVar2 != '\0') {
      ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
      Memory::free_static(pOVar1, false);
      return;
   }

   return;
}
/* CowData<char32_t>::TEMPNAMEPLACEHOLDERVALUE(CowData<char32_t>&&) [clone .part.0] */void CowData<char32_t>::operator =(CowData<char32_t> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
 else {
         *(undefined8*)this = 0;
      }

   }

   *(undefined8*)this = *(undefined8*)param_1;
   *(undefined8*)param_1 = 0;
   return;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
 else {
         *(undefined8*)this = 0;
      }

   }

   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) {
            return;
         }

         LOCK();
         lVar3 = *plVar1;
         bVar4 = lVar2 == lVar3;
         if (bVar4) {
            *plVar1 = lVar2 + 1;
            lVar3 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }

   }

   return;
}
/* ScriptLanguage::CodeCompletionOption::TEMPNAMEPLACEHOLDERVALUE(ScriptLanguage::CodeCompletionOption
   const&) [clone .isra.0] */void ScriptLanguage::CodeCompletionOption::operator =(CodeCompletionOption *this, CodeCompletionOption *param_1) {
   Object *pOVar1;
   Object *pOVar2;
   undefined8 uVar3;
   char cVar4;
   *(undefined4*)this = *(undefined4*)param_1;
   if (*(long*)( this + 8 ) != *(long*)( param_1 + 8 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 8 ), (CowData*)( param_1 + 8 ));
   }

   if (*(long*)( this + 0x10 ) != *(long*)( param_1 + 0x10 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x10 ), (CowData*)( param_1 + 0x10 ));
   }

   uVar3 = *(undefined8*)( param_1 + 0x20 );
   pOVar1 = *(Object**)( param_1 + 0x28 );
   pOVar2 = *(Object**)( this + 0x28 );
   *(undefined8*)( this + 0x18 ) = *(undefined8*)( param_1 + 0x18 );
   *(undefined8*)( this + 0x20 ) = uVar3;
   if (pOVar1 != pOVar2) {
      *(Object**)( this + 0x28 ) = pOVar1;
      if (pOVar1 != (Object*)0x0) {
         cVar4 = RefCounted::reference();
         if (cVar4 == '\0') {
            *(undefined8*)( this + 0x28 ) = 0;
         }

      }

      if (pOVar2 != (Object*)0x0) {
         cVar4 = RefCounted::unreference();
         if (cVar4 != '\0') {
            cVar4 = predelete_handler(pOVar2);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

      }

   }

   Variant::operator =((Variant*)( this + 0x30 ), (Variant*)( param_1 + 0x30 ));
   if (*(long*)( this + 0x50 ) != *(long*)( param_1 + 0x50 )) {
      CowData<Pair<int,int>>::_ref((CowData<Pair<int,int>>*)( this + 0x50 ), (CowData*)( param_1 + 0x50 ));
   }

   if (*(long*)( this + 0x60 ) != *(long*)( param_1 + 0x60 )) {
      CowData<Pair<int,int>>::_ref((CowData<Pair<int,int>>*)( this + 0x60 ), (CowData*)( param_1 + 0x60 ));
   }

   *(undefined4*)( this + 0x68 ) = *(undefined4*)( param_1 + 0x68 );
   if (*(long*)( this + 0x70 ) != *(long*)( param_1 + 0x70 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x70 ), (CowData*)( param_1 + 0x70 ));
   }

   Array::operator =((Array*)( this + 0x78 ), (Array*)( param_1 + 0x78 ));
   return;
}
/* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */void List<PropertyInfo,DefaultAllocator>::push_back(List<PropertyInfo,DefaultAllocator> *this, PropertyInfo *param_1) {
   long *plVar1;
   long lVar2;
   undefined4 *puVar3;
   undefined1(*pauVar4)[16];
   if (*(long*)this == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])this = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar3 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   lVar2 = *(long*)( param_1 + 8 );
   *puVar3 = 0;
   puVar3[6] = 0;
   puVar3[10] = 6;
   *(undefined8*)( puVar3 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
   *puVar3 = *(undefined4*)param_1;
   if (lVar2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)( param_1 + 8 ));
   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)( param_1 + 0x10 ));
   puVar3[6] = *(undefined4*)( param_1 + 0x18 );
   if (*(long*)( puVar3 + 8 ) != *(long*)( param_1 + 0x20 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)( param_1 + 0x20 ));
   }

   puVar3[10] = *(undefined4*)( param_1 + 0x28 );
   plVar1 = *(long**)this;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar3 + 0xc ) = 0;
   *(long**)( puVar3 + 0x10 ) = plVar1;
   *(long*)( puVar3 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar3;
   }

   plVar1[1] = (long)puVar3;
   if (*plVar1 != 0) {
      *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
      return;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   *plVar1 = (long)puVar3;
   return;
}
/* GDScriptLanguage::get_comment_delimiters(List<String, DefaultAllocator>*) const */void GDScriptLanguage::get_comment_delimiters(GDScriptLanguage *this, List *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   CowData<char32_t> *this_00;
   undefined1(*pauVar4)[16];
   long in_FS_OFFSET;
   long local_40;
   undefined *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_38 = &_LC14;
   local_30 = 1;
   String::parse_latin1((StrRange*)&local_40);
   if (*(long*)param_1 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
   *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
   if (local_40 != 0) {
      CowData<char32_t>::_ref(this_00, (CowData*)&local_40);
   }

   lVar3 = local_40;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( this_00 + 8 ) = 0;
   *(long**)( this_00 + 0x18 ) = plVar1;
   *(long*)( this_00 + 0x10 ) = lVar2;
   if (lVar2 != 0) {
      *(CowData<char32_t>**)( lVar2 + 8 ) = this_00;
   }

   plVar1[1] = (long)this_00;
   if (*plVar1 == 0) {
      *plVar1 = (long)this_00;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptLanguage::get_doc_comment_delimiters(List<String, DefaultAllocator>*) const */void GDScriptLanguage::get_doc_comment_delimiters(GDScriptLanguage *this, List *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   CowData<char32_t> *this_00;
   undefined1(*pauVar4)[16];
   long in_FS_OFFSET;
   long local_40;
   undefined *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_38 = &_LC15;
   local_30 = 2;
   String::parse_latin1((StrRange*)&local_40);
   if (*(long*)param_1 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
   *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
   if (local_40 != 0) {
      CowData<char32_t>::_ref(this_00, (CowData*)&local_40);
   }

   lVar3 = local_40;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( this_00 + 8 ) = 0;
   *(long**)( this_00 + 0x18 ) = plVar1;
   *(long*)( this_00 + 0x10 ) = lVar2;
   if (lVar2 != 0) {
      *(CowData<char32_t>**)( lVar2 + 8 ) = this_00;
   }

   plVar1[1] = (long)this_00;
   if (*plVar1 == 0) {
      *plVar1 = (long)this_00;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptLanguage::supports_builtin_mode() const */undefined8 GDScriptLanguage::supports_builtin_mode(void) {
   return 1;
}
/* GDScriptLanguage::create_script() const */GDScript *GDScriptLanguage::create_script(void) {
   GDScript *this;
   this(GDScript * operator_new(0x780, ""));
   GDScript::GDScript(this);
   postinitialize_handler((Object*)this);
   return this;
}
/* GDScriptLanguage::debug_get_error() const */GDScriptLanguage * __thiscall GDScriptLanguage::debug_get_error(GDScriptLanguage *this){
   long lVar1;
   long *in_FS_OFFSET;
   if ((char)*in_FS_OFFSET == '\0') {
      lVar1 = *in_FS_OFFSET;
      *(char*)in_FS_OFFSET = '\x01';
      *in_FS_OFFSET = 0;
      __cxa_thread_atexit(String::~String, lVar1, &__dso_handle);
      *in_FS_OFFSET = 0;
      __cxa_thread_atexit(String::~String, lVar1, &__dso_handle);
   }

   *(undefined8*)this = 0;
   if (*in_FS_OFFSET != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)this, (CowData*)*in_FS_OFFSET);
   }

   return this;
}
/* GDScriptLanguage::debug_get_stack_level_count() const */undefined8 GDScriptLanguage::debug_get_stack_level_count(void) {
   int *in_FS_OFFSET;
   if (-1 < *in_FS_OFFSET) {
      return 1;
   }

   /* WARNING: Subroutine does not return */
   GDScriptLanguage::_call_stack();
}
/* GDScriptLanguage::debug_get_stack_level_line(int) const */void GDScriptLanguage::debug_get_stack_level_line(GDScriptLanguage *this, int param_1) {
   int *in_FS_OFFSET;
   if (-1 < *in_FS_OFFSET) {
      return;
   }

   if (-1 < param_1) {
      /* WARNING: Subroutine does not return */
      GDScriptLanguage::_call_stack();
   }

   /* WARNING: Subroutine does not return */
   GDScriptLanguage::_call_stack();
}
/* GDScriptLanguage::debug_get_stack_level_function(int) const */undefined8 GDScriptLanguage::debug_get_stack_level_function(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   int *in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 10 );
   if (-1 < *in_FS_OFFSET) {
      *(undefined8*)CONCAT44(in_register_0000003c, param_1) = 0;
      String::parse_latin1((StrRange*)CONCAT44(in_register_0000003c, param_1));
      if (lVar1 == *(long*)( in_FS_OFFSET + 10 )) {
         return CONCAT44(in_register_0000003c, param_1);
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   if (-1 < in_EDX) {
      /* WARNING: Subroutine does not return */
      GDScriptLanguage::_call_stack();
   }

   /* WARNING: Subroutine does not return */
   GDScriptLanguage::_call_stack();
}
/* GDScriptLanguage::debug_get_stack_level_source(int) const */CowData<char32_t> *GDScriptLanguage::debug_get_stack_level_source(int param_1) {
   long lVar1;
   long lVar2;
   int in_EDX;
   undefined4 in_register_0000003c;
   CowData<char32_t> *this;
   long *in_FS_OFFSET;
   this(CowData<char32_t> * CONCAT44(in_register_0000003c, param_1));
   lVar1 = in_FS_OFFSET[5];
   if ((int)*in_FS_OFFSET < 0) {
      if (-1 < in_EDX) {
         /* WARNING: Subroutine does not return */
         GDScriptLanguage::_call_stack();
      }

      /* WARNING: Subroutine does not return */
      GDScriptLanguage::_call_stack();
   }

   if ((char)*in_FS_OFFSET == '\0') {
      lVar2 = *in_FS_OFFSET;
      *(char*)in_FS_OFFSET = '\x01';
      *in_FS_OFFSET = 0;
      __cxa_thread_atexit(String::~String, lVar2, &__dso_handle);
      *in_FS_OFFSET = 0;
      __cxa_thread_atexit(String::~String, lVar2, &__dso_handle);
   }

   *(undefined8*)this = 0;
   if (*in_FS_OFFSET != 0) {
      CowData<char32_t>::_ref(this, (CowData*)*in_FS_OFFSET);
   }

   if (lVar1 == in_FS_OFFSET[5]) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptLanguage::debug_get_stack_level_members(int, List<String, DefaultAllocator>*,
   List<Variant, DefaultAllocator>*, int, int) */void GDScriptLanguage::debug_get_stack_level_members(int param_1, List *param_2, List *param_3, int param_4, int param_5) {
   int *in_FS_OFFSET;
   if (-1 < *in_FS_OFFSET) {
      if (*(long*)( in_FS_OFFSET + 10 ) == *(long*)( in_FS_OFFSET + 10 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   if (-1 < (int)param_2) {
      /* WARNING: Subroutine does not return */
      GDScriptLanguage::_call_stack();
   }

   /* WARNING: Subroutine does not return */
   GDScriptLanguage::_call_stack();
}
/* GDScriptLanguage::debug_get_stack_level_instance(int) */undefined8 GDScriptLanguage::debug_get_stack_level_instance(GDScriptLanguage *this, int param_1) {
   int *in_FS_OFFSET;
   if (-1 < *in_FS_OFFSET) {
      return 0;
   }

   if (-1 < param_1) {
      /* WARNING: Subroutine does not return */
      GDScriptLanguage::_call_stack();
   }

   /* WARNING: Subroutine does not return */
   GDScriptLanguage::_call_stack();
}
/* GDScriptLanguage::get_recognized_extensions(List<String, DefaultAllocator>*) const */void GDScriptLanguage::get_recognized_extensions(GDScriptLanguage *this, List *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   CowData<char32_t> *this_00;
   undefined1(*pauVar4)[16];
   long in_FS_OFFSET;
   long local_40;
   undefined *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_38 = &_LC25;
   local_30 = 2;
   String::parse_latin1((StrRange*)&local_40);
   if (*(long*)param_1 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
   *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
   if (local_40 != 0) {
      CowData<char32_t>::_ref(this_00, (CowData*)&local_40);
   }

   lVar3 = local_40;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( this_00 + 8 ) = 0;
   *(long**)( this_00 + 0x18 ) = plVar1;
   *(long*)( this_00 + 0x10 ) = lVar2;
   if (lVar2 != 0) {
      *(CowData<char32_t>**)( lVar2 + 8 ) = this_00;
   }

   plVar1[1] = (long)this_00;
   if (*plVar1 == 0) {
      *plVar1 = (long)this_00;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptLanguage::debug_get_stack_level_locals(int, List<String, DefaultAllocator>*,
   List<Variant, DefaultAllocator>*, int, int) */void GDScriptLanguage::debug_get_stack_level_locals(int param_1, List *param_2, List *param_3, int param_4, int param_5) {
   int *in_FS_OFFSET;
   if (-1 < *in_FS_OFFSET) {
      if (*(long*)( in_FS_OFFSET + 10 ) == *(long*)( in_FS_OFFSET + 10 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   if (-1 < (int)param_2) {
      /* WARNING: Subroutine does not return */
      GDScriptLanguage::_call_stack();
   }

   /* WARNING: Subroutine does not return */
   GDScriptLanguage::_call_stack();
}
/* GDScriptLanguage::_get_indentation() const */GDScriptLanguage * __thiscall GDScriptLanguage::_get_indentation(GDScriptLanguage *this){
   long *plVar1;
   bool bVar2;
   long lVar3;
   long in_FS_OFFSET;
   long local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = Engine::get_singleton();
   if (*(char*)( lVar3 + 0xc0 ) != '\0') {
      local_70 = 0;
      local_68 = "text_editor/behavior/indent/type";
      local_60 = 0x20;
      String::parse_latin1((StrRange*)&local_70);
      _EDITOR_GET((String*)local_58);
      bVar2 = Variant::operator_cast_to_bool((Variant*)local_58);
      if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      lVar3 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar1 = (long*)( local_70 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (bVar2) {
         local_70 = 0;
         local_68 = "text_editor/behavior/indent/size";
         local_60 = 0x20;
         String::parse_latin1((StrRange*)&local_70);
         _EDITOR_GET((String*)local_58);
         Variant::operator_cast_to_int((Variant*)local_58);
         if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         local_68 = " ";
         local_70 = 0;
         local_60 = 1;
         String::parse_latin1((StrRange*)&local_70);
         String::repeat((int)this);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         goto LAB_001024fb;
      }

   }

   *(undefined8*)this = 0;
   local_68 = "\t";
   local_60 = 1;
   String::parse_latin1((StrRange*)this);
   LAB_001024fb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptLanguage::get_string_delimiters(List<String, DefaultAllocator>*) const */void GDScriptLanguage::get_string_delimiters(GDScriptLanguage *this, List *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   CowData<char32_t> *pCVar4;
   undefined1(*pauVar5)[16];
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_40 = 3;
   local_48 = "\" \"";
   String::parse_latin1((StrRange*)&local_50);
   if (*(long*)param_1 == 0) {
      pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar5;
      *(undefined4*)pauVar5[1] = 0;
      *pauVar5 = (undefined1[16])0x0;
   }

   pCVar4 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
   *(undefined1(*) [16])pCVar4 = (undefined1[16])0x0;
   *(undefined1(*) [16])( pCVar4 + 0x10 ) = (undefined1[16])0x0;
   if (local_50 != 0) {
      CowData<char32_t>::_ref(pCVar4, (CowData*)&local_50);
   }

   lVar3 = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( pCVar4 + 8 ) = 0;
   *(long**)( pCVar4 + 0x18 ) = plVar1;
   *(long*)( pCVar4 + 0x10 ) = lVar2;
   if (lVar2 != 0) {
      *(CowData<char32_t>**)( lVar2 + 8 ) = pCVar4;
   }

   plVar1[1] = (long)pCVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)pCVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   local_50 = 0;
   local_48 = "\' \'";
   local_40 = 3;
   String::parse_latin1((StrRange*)&local_50);
   if (*(long*)param_1 == 0) {
      pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar5;
      *(undefined4*)pauVar5[1] = 0;
      *pauVar5 = (undefined1[16])0x0;
   }

   pCVar4 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
   *(undefined1(*) [16])pCVar4 = (undefined1[16])0x0;
   *(undefined1(*) [16])( pCVar4 + 0x10 ) = (undefined1[16])0x0;
   if (local_50 != 0) {
      CowData<char32_t>::_ref(pCVar4, (CowData*)&local_50);
   }

   lVar3 = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( pCVar4 + 8 ) = 0;
   *(long**)( pCVar4 + 0x18 ) = plVar1;
   *(long*)( pCVar4 + 0x10 ) = lVar2;
   if (lVar2 != 0) {
      *(CowData<char32_t>**)( lVar2 + 8 ) = pCVar4;
   }

   plVar1[1] = (long)pCVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)pCVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   local_50 = 0;
   local_48 = "\"\"\" \"\"\"";
   local_40 = 7;
   String::parse_latin1((StrRange*)&local_50);
   if (*(long*)param_1 == 0) {
      pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar5;
      *(undefined4*)pauVar5[1] = 0;
      *pauVar5 = (undefined1[16])0x0;
   }

   pCVar4 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
   *(undefined1(*) [16])pCVar4 = (undefined1[16])0x0;
   *(undefined1(*) [16])( pCVar4 + 0x10 ) = (undefined1[16])0x0;
   if (local_50 != 0) {
      CowData<char32_t>::_ref(pCVar4, (CowData*)&local_50);
   }

   lVar3 = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( pCVar4 + 8 ) = 0;
   *(long**)( pCVar4 + 0x18 ) = plVar1;
   *(long*)( pCVar4 + 0x10 ) = lVar2;
   if (lVar2 != 0) {
      *(CowData<char32_t>**)( lVar2 + 8 ) = pCVar4;
   }

   plVar1[1] = (long)pCVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)pCVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   local_50 = 0;
   local_48 = "\'\'\' \'\'\'";
   local_40 = 7;
   String::parse_latin1((StrRange*)&local_50);
   if (*(long*)param_1 == 0) {
      pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar5;
      *(undefined4*)pauVar5[1] = 0;
      *pauVar5 = (undefined1[16])0x0;
   }

   pCVar4 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
   *(undefined1(*) [16])pCVar4 = (undefined1[16])0x0;
   *(undefined1(*) [16])( pCVar4 + 0x10 ) = (undefined1[16])0x0;
   if (local_50 != 0) {
      CowData<char32_t>::_ref(pCVar4, (CowData*)&local_50);
   }

   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( pCVar4 + 8 ) = 0;
   *(long**)( pCVar4 + 0x18 ) = plVar1;
   *(long*)( pCVar4 + 0x10 ) = lVar2;
   if (lVar2 != 0) {
      *(CowData<char32_t>**)( lVar2 + 8 ) = pCVar4;
   }

   plVar1[1] = (long)pCVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)pCVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptLanguage::make_function(String const&, String const&, Vector<String> const&) const */String *GDScriptLanguage::make_function(String *param_1, String *param_2, Vector *param_3) {
   long *plVar1;
   code *pcVar2;
   int iVar3;
   char *pcVar4;
   bool bVar5;
   long lVar6;
   long lVar7;
   long in_R8;
   long lVar8;
   long in_FS_OFFSET;
   undefined8 local_a8;
   undefined8 local_a0;
   String local_98[8];
   undefined8 local_90;
   String local_88[8];
   CowData<char32_t> local_80[8];
   String local_78[8];
   long local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   EditorSettings::get_singleton();
   local_70 = 0;
   local_60 = 0x25;
   local_68 = "text_editor/completion/add_type_hints";
   String::parse_latin1((StrRange*)&local_70);
   EditorSettings::get_setting((String*)local_58);
   bVar5 = Variant::operator_cast_to_bool((Variant*)local_58);
   if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   local_68 = (char*)0x123f55;
   local_70 = 0;
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_70);
   operator+((char *)&
   local_68,(String*)( (long)&DAT_00123f53 + 4 );
   String::operator +(param_1, (String*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   lVar7 = *(long*)( in_R8 + 8 );
   if (( lVar7 != 0 ) && ( lVar6 = lVar6 != 0 )) {
      lVar8 = 0;
      while (lVar8 < lVar6) {
         if (lVar8 == 0) {
            if (lVar7 != 0) goto LAB_00102b79;
            LAB_00102c87:lVar6 = 0;
            LAB_00102c8a:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar6, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         String::operator +=(param_1, ", ");
         lVar7 = *(long*)( in_R8 + 8 );
         if (lVar7 == 0) goto LAB_00102c87;
         LAB_00102b79:lVar6 = *(long*)( lVar7 + -8 );
         if (lVar6 <= lVar8) goto LAB_00102c8a;
         iVar3 = (int)lVar8 * 8;
         String::get_slice((char*)&local_68, (int)lVar7 + iVar3);
         String::operator +=(param_1, (String*)&local_68);
         pcVar4 = local_68;
         if (local_68 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( (long)local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = (char*)0x0;
               Memory::free_static((void*)( (long)pcVar4 + -0x10 ), false);
            }

         }

         lVar7 = *(long*)( in_R8 + 8 );
         if (bVar5) {
            if (lVar7 == 0) goto LAB_00102c87;
            lVar6 = *(long*)( lVar7 + -8 );
            if (lVar6 <= lVar8) goto LAB_00102c8a;
            String::get_slice((char*)&local_70, (int)lVar7 + iVar3);
            if (( local_70 != 0 ) && ( 1 < *(uint*)( local_70 + -8 ) )) {
               operator+((char *)&
               local_68,(String*)&_LC56;
               String::operator +=(param_1, (String*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            lVar7 = *(long*)( in_R8 + 8 );
         }

         lVar8 = lVar8 + 1;
         if (lVar7 == 0) break;
         lVar6 = *(long*)( lVar7 + -8 );
      }
;
   }

   local_70 = 0;
   local_68 = "pass # Replace with function body.\n";
   local_60 = 0x23;
   String::parse_latin1((StrRange*)&local_70);
   ( **(code**)( *(long*)param_2 + 0x330 ) )(local_80);
   local_90 = 0;
   local_68 = ":\n";
   local_60 = 2;
   String::parse_latin1((StrRange*)&local_90);
   if (bVar5) {
      local_60 = 8;
      local_68 = &_LC48;
   }
 else {
      local_60 = 0;
      local_68 = &_LC12;
   }

   local_a0 = 0;
   String::parse_latin1((StrRange*)&local_a0);
   local_a8 = 0;
   local_68 = ")";
   local_60 = 1;
   String::parse_latin1((StrRange*)&local_a8);
   String::operator +(local_98, (String*)&local_a8);
   String::operator +(local_88, local_98);
   String::operator +(local_78, local_88);
   String::operator +((String*)&local_68, local_78);
   String::operator +=(param_1, (String*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref(local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* get_function_names_recursively(GDScriptParser::ClassNode const*, String const&, HashMap<int,
   String, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, String> > >&) */void get_function_names_recursively(ClassNode *param_1, String *param_2, HashMap *param_3) {
   long *plVar1;
   int *piVar2;
   char *pcVar3;
   code *pcVar4;
   bool bVar5;
   long lVar6;
   long *plVar7;
   long lVar8;
   long lVar9;
   long in_FS_OFFSET;
   long local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   lVar9 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar6 = *(long*)( param_1 + 0x148 );
   do {
      while (true) {
         if (( lVar6 == 0 ) || ( *(long*)( lVar6 + -8 ) <= lVar9 )) {
            if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return;
         }

         piVar2 = (int*)( lVar6 + lVar9 * 0x70 );
         if (*piVar2 == 3) break;
         if (*piVar2 == 1) {
            lVar6 = *(long*)( *(long*)( *(long*)( piVar2 + 2 ) + 0x128 ) + 0x148 );
            if (lVar6 == 0) {
               local_70 = 0;
            }
 else {
               pcVar3 = *(char**)( lVar6 + 8 );
               local_70 = 0;
               if (pcVar3 == (char*)0x0) {
                  if (*(long*)( lVar6 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)( lVar6 + 0x10 ));
                  }

               }
 else {
                  local_50 = strlen(pcVar3);
                  local_58 = pcVar3;
                  String::parse_latin1((StrRange*)&local_70);
               }

            }

            if (( *(long*)param_2 == 0 ) || ( *(uint*)( *(long*)param_2 + -8 ) < 2 )) {
               local_58 = (char*)0x0;
               if (local_70 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_70);
               }

               lVar6 = *(long*)( param_1 + 0x148 );
               bVar5 = false;
            }
 else {
               local_68 = 0;
               local_50 = 1;
               local_58 = ".";
               String::parse_latin1((StrRange*)&local_68);
               String::operator +((String*)&local_60, param_2);
               String::operator +((String*)&local_58, (String*)&local_60);
               lVar6 = *(long*)( param_1 + 0x148 );
               bVar5 = true;
            }

            if (lVar6 == 0) {
               lVar8 = 0;
               LAB_00103356:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar8, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }

            lVar8 = *(long*)( lVar6 + -8 );
            if (lVar8 <= lVar9) goto LAB_00103356;
            get_function_names_recursively(*(ClassNode**)( lVar6 + 8 + lVar9 * 0x70 ), (String*)&local_58, param_3);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            if (bVar5) {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            }

            lVar6 = local_70;
            if (local_70 != 0) {
               LOCK();
               plVar7 = (long*)( local_70 + -0x10 );
               *plVar7 = *plVar7 + -1;
               UNLOCK();
               if (*plVar7 == 0) {
                  local_70 = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }

            }

            goto LAB_00102fe5;
         }

         LAB_00102f09:lVar9 = lVar9 + 1;
      }
;
      lVar6 = *(long*)( piVar2 + 2 );
      if (( *(long*)param_2 == 0 ) || ( *(uint*)( *(long*)param_2 + -8 ) < 2 )) {
         lVar8 = *(long*)( *(long*)( lVar6 + 0x128 ) + 0x148 );
         if (lVar8 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar8 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               if (*(long*)( lVar8 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar8 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         bVar5 = false;
      }
 else {
         lVar8 = *(long*)( *(long*)( lVar6 + 0x128 ) + 0x148 );
         if (lVar8 == 0) {
            LAB_001033a9:local_68 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar8 + 8 );
            local_68 = 0;
            if (pcVar3 == (char*)0x0) {
               if (*(long*)( lVar8 + 0x10 ) == 0) goto LAB_001033a9;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)( lVar8 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_68);
            }

         }

         local_58 = ".";
         local_70 = 0;
         local_50 = 1;
         String::parse_latin1((StrRange*)&local_70);
         String::operator +((String*)&local_58, param_2);
         bVar5 = true;
         String::operator +((String*)&local_60, (String*)&local_58);
      }

      plVar7 = (long*)HashMap<int,String,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,String>>>::operator []((HashMap<int,String,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,String>>>*)param_3, (int*)( lVar6 + 0xc ));
      lVar8 = local_60;
      lVar6 = *plVar7;
      if (lVar6 == local_60) {
         if (lVar6 != 0) {
            LOCK();
            plVar7 = (long*)( lVar6 + -0x10 );
            *plVar7 = *plVar7 + -1;
            UNLOCK();
            if (*plVar7 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }

         }

      }
 else {
         if (lVar6 != 0) {
            LOCK();
            plVar1 = (long*)( lVar6 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar6 = *plVar7;
               *plVar7 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }
 else {
               *plVar7 = 0;
            }

         }

         *plVar7 = local_60;
      }

      if (bVar5) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         lVar6 = *(long*)( param_1 + 0x148 );
         goto LAB_00102f09;
      }

      LAB_00102fe5:lVar6 = *(long*)( param_1 + 0x148 );
      lVar9 = lVar9 + 1;
   }
 while ( true );
}
/* GDScriptLanguage::validate(String const&, String const&, List<String, DefaultAllocator>*,
   List<ScriptLanguage::ScriptError, DefaultAllocator>*, List<ScriptLanguage::Warning,
   DefaultAllocator>*, HashSet<int, HashMapHasherDefault, HashMapComparatorDefault<int> >*) const */undefined8 GDScriptLanguage::validate(GDScriptLanguage *this, String *param_1, String *param_2, List *param_3, List *param_4, List *param_5, HashSet *param_6) {
   undefined4 uVar1;
   uint uVar2;
   long *plVar3;
   ulong uVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   char cVar13;
   int iVar14;
   uint uVar15;
   undefined8 *puVar16;
   CowData<char32_t> *this_00;
   CowData<char32_t> *pCVar17;
   undefined1(*pauVar18)[16];
   long lVar19;
   undefined *puVar20;
   undefined *puVar21;
   ulong uVar22;
   uint uVar23;
   long lVar24;
   undefined1 auVar25[8];
   undefined8 uVar26;
   Object *pOVar27;
   void *pvVar28;
   ulong uVar29;
   undefined *puVar30;
   CowData *pCVar31;
   uint uVar32;
   undefined4 *puVar33;
   long in_FS_OFFSET;
   bool bVar34;
   long local_b20;
   long local_b18;
   long local_b10;
   undefined *local_b08;
   Object *local_b00;
   undefined *local_af8;
   undefined1 auStack_af0[8];
   undefined *local_ae8;
   undefined1 local_ae0[16];
   undefined8 local_ad0;
   GDScriptAnalyzer local_ac8[24];
   long *local_ab0;
   void *local_aa0;
   void *local_a98;
   undefined1 local_a90[16];
   uint local_a80;
   int local_a7c;
   GDScriptParser local_a68[80];
   ClassNode *local_a18;
   long *local_a08;
   undefined8 *local_9f8;
   long local_1d0;
   long local_1c8;
   long local_1b8;
   uint local_1b0;
   int local_1ac;
   int local_134;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   GDScriptParser::GDScriptParser(local_a68);
   GDScriptAnalyzer::GDScriptAnalyzer(local_ac8, local_a68);
   iVar14 = GDScriptParser::parse((String*)local_a68, param_1, SUB81(param_2, 0), false);
   if (iVar14 == 0) {
      iVar14 = GDScriptAnalyzer::analyze();
      if (( ( param_5 != (List*)0x0 ) && ( local_9f8 != (undefined8*)0x0 ) ) && ( puVar33 = (undefined4*)*local_9f8 ),puVar33 != (undefined4*)0x0) goto LAB_001034b9;
      LAB_001039de:if (iVar14 != 0) goto LAB_00103650;
      local_b08 = &_LC12;
      _auStack_af0 = (undefined1[16])0x0;
      local_ae0 = (undefined1[16])0x0;
      local_ad0 = 2;
      local_b10 = 0;
      local_b00 = (Object*)0x0;
      String::parse_latin1((StrRange*)&local_b10);
      get_function_names_recursively(local_a18, (String*)&local_b10, (HashMap*)&local_af8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b10);
      uVar4 = local_ad0;
      for (puVar16 = (undefined8*)local_ae0._0_8_; local_ad0 = uVar4,puVar16 != (undefined8*)0x0; puVar16 = (undefined8*)*puVar16) {
         itos((long)&local_b10);
         local_b08 = &_LC55;
         local_b20 = 0;
         local_b00 = (Object*)0x1;
         String::parse_latin1((StrRange*)&local_b20);
         String::operator +((String*)&local_b18, (String*)( puVar16 + 3 ));
         String::operator +((String*)&local_b08, (String*)&local_b18);
         if (*(long*)param_3 == 0) {
            pauVar18 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])param_3 = pauVar18;
            *(undefined4*)pauVar18[1] = 0;
            *pauVar18 = (undefined1[16])0x0;
         }

         pCVar17 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
         *(undefined1(*) [16])pCVar17 = (undefined1[16])0x0;
         *(undefined1(*) [16])( pCVar17 + 0x10 ) = (undefined1[16])0x0;
         if (local_b08 != (undefined*)0x0) {
            CowData<char32_t>::_ref(pCVar17, (CowData*)&local_b08);
         }

         puVar30 = local_b08;
         plVar3 = *(long**)param_3;
         lVar24 = plVar3[1];
         *(undefined8*)( pCVar17 + 8 ) = 0;
         *(long**)( pCVar17 + 0x18 ) = plVar3;
         *(long*)( pCVar17 + 0x10 ) = lVar24;
         if (lVar24 != 0) {
            *(CowData<char32_t>**)( lVar24 + 8 ) = pCVar17;
         }

         plVar3[1] = (long)pCVar17;
         if (*plVar3 == 0) {
            *plVar3 = (long)pCVar17;
         }

         *(int*)( plVar3 + 2 ) = (int)plVar3[2] + 1;
         if (local_b08 != (undefined*)0x0) {
            LOCK();
            plVar3 = (long*)( local_b08 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_b08 = (undefined*)0x0;
               Memory::free_static(puVar30 + -0x10, false);
            }

         }

         lVar24 = local_b18;
         if (local_b18 != 0) {
            LOCK();
            plVar3 = (long*)( local_b18 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_b18 = 0;
               Memory::free_static((void*)( lVar24 + -0x10 ), false);
            }

         }

         lVar24 = local_b20;
         if (local_b20 != 0) {
            LOCK();
            plVar3 = (long*)( local_b20 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_b20 = 0;
               Memory::free_static((void*)( lVar24 + -0x10 ), false);
            }

         }

         lVar24 = local_b10;
         if (local_b10 != 0) {
            LOCK();
            plVar3 = (long*)( local_b10 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_b10 = 0;
               Memory::free_static((void*)( lVar24 + -0x10 ), false);
            }

         }

         uVar4 = local_ad0;
      }

      if (auStack_af0 != (undefined1[8])0x0) {
         local_ad0._4_4_ = (int)( uVar4 >> 0x20 );
         bVar34 = local_ad0._4_4_ != 0;
         auVar25 = auStack_af0;
         if (bVar34) {
            uVar32 = *(uint*)( hash_table_size_primes + ( uVar4 & 0xffffffff ) * 4 );
            if (uVar32 == 0) {
               local_ad0 = uVar4 & 0xffffffff;
               local_ae0 = (undefined1[16])0x0;
            }
 else {
               lVar24 = 0;
               do {
                  if (*(int*)( (long)local_ae8 + lVar24 ) != 0) {
                     pvVar28 = *(void**)( (long)auVar25 + lVar24 * 2 );
                     *(int*)( (long)local_ae8 + lVar24 ) = 0;
                     CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar28 + 0x18 ));
                     Memory::free_static(pvVar28, false);
                     *(undefined8*)( (long)auStack_af0 + lVar24 * 2 ) = 0;
                     auVar25 = auStack_af0;
                  }

                  lVar24 = lVar24 + 4;
               }
 while ( (ulong)uVar32 * 4 - lVar24 != 0 );
               local_ad0 = local_ad0 & 0xffffffff;
               local_ae0 = (undefined1[16])0x0;
               if (auVar25 == (undefined1[8])0x0) goto LAB_00103d62;
            }

         }

         Memory::free_static((void*)auVar25, false);
         Memory::free_static(local_ae8, false);
      }

      LAB_00103d62:if (param_6 != (HashSet*)0x0) {
         local_b08 = (undefined*)CONCAT44(local_b08._4_4_, 1);
         uVar32 = 1;
         if (0 < local_134) {
            do {
               if (( local_1d0 != 0 ) && ( local_1ac != 0 )) {
                  uVar4 = *(ulong*)( hash_table_size_primes_inv + (ulong)local_1b0 * 8 );
                  uVar15 = ( uVar32 >> 0x10 ^ uVar32 ) * -0x7a143595;
                  uVar15 = ( uVar15 ^ uVar15 >> 0xd ) * -0x3d4d51cb;
                  uVar23 = uVar15 ^ uVar15 >> 0x10;
                  if (uVar15 == uVar15 >> 0x10) {
                     uVar23 = 1;
                     uVar22 = uVar4;
                  }
 else {
                     uVar22 = uVar23 * uVar4;
                  }

                  uVar29 = CONCAT44(0, *(uint*)( hash_table_size_primes + (ulong)local_1b0 * 4 ));
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = uVar29;
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = uVar22;
                  lVar24 = SUB168(auVar5 * auVar9, 8);
                  uVar15 = *(uint*)( local_1b8 + lVar24 * 4 );
                  uVar22 = (ulong)uVar15;
                  iVar14 = SUB164(auVar5 * auVar9, 8);
                  if (uVar15 != 0) {
                     uVar15 = 0;
                     do {
                        if (( uVar23 == (uint)uVar22 ) && ( *(uint*)( local_1d0 + ( ulong ) * (uint*)( local_1c8 + lVar24 * 4 ) * 4 ) == uVar32 )) goto LAB_00103e98;
                        uVar15 = uVar15 + 1;
                        auVar6._8_8_ = 0;
                        auVar6._0_8_ = ( iVar14 + 1 ) * uVar4;
                        auVar10._8_8_ = 0;
                        auVar10._0_8_ = uVar29;
                        lVar24 = SUB168(auVar6 * auVar10, 8);
                        uVar2 = *(uint*)( local_1b8 + lVar24 * 4 );
                        uVar22 = (ulong)uVar2;
                        iVar14 = SUB164(auVar6 * auVar10, 8);
                     }
 while ( ( uVar2 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = uVar22 * uVar4,auVar11._8_8_ = 0,auVar11._0_8_ = uVar29,auVar8._8_8_ = 0,auVar8._0_8_ = ( ( *(uint*)( hash_table_size_primes + (ulong)local_1b0 * 4 ) + iVar14 ) - SUB164(auVar7 * auVar11, 8) ) * uVar4,auVar12._8_8_ = 0,auVar12._0_8_ = uVar29,uVar15 <= SUB164(auVar8 * auVar12, 8) );
                  }

               }

               HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int*)&local_af8);
               LAB_00103e98:uVar32 = uVar32 + 1;
               local_b08 = (undefined*)CONCAT44(local_b08._4_4_, uVar32);
            }
 while ( (int)uVar32 <= local_134 );
         }

      }

      uVar26 = 1;
   }
 else {
      if (( ( param_5 != (List*)0x0 ) && ( local_9f8 != (undefined8*)0x0 ) ) && ( puVar33 = (undefined4*)*local_9f8 ),puVar33 != (undefined4*)0x0) {
         LAB_001034b9:do {
            uVar1 = *puVar33;
            puVar30 = *(undefined**)( puVar33 + 1 );
            uVar26 = *(undefined8*)( puVar33 + 3 );
            local_ae0 = (undefined1[16])0x0;
            local_ae8._0_4_ = uVar1;
            auStack_af0 = (undefined1[8])uVar26;
            local_af8 = puVar30;
            GDScriptWarning::get_name_from_code(&local_b08, uVar1);
            if (local_b08 != (undefined*)0x0) {
               local_ae0._0_8_ = local_b08;
            }

            GDScriptWarning::get_message();
            puVar20 = local_b08;
            if (local_b08 != (undefined*)0x0) {
               local_ae0._8_8_ = local_b08;
            }

            if (*(long*)param_5 == 0) {
               pauVar18 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])param_5 = pauVar18;
               *(undefined4*)pauVar18[1] = 0;
               *pauVar18 = (undefined1[16])0x0;
            }

            puVar16 = (undefined8*)operator_new(0x40, DefaultAllocator::alloc);
            puVar21 = (undefined*)0x0;
            *(undefined4*)( puVar16 + 2 ) = uVar1;
            *(undefined1(*) [16])( puVar16 + 3 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( puVar16 + 5 ) = (undefined1[16])0x0;
            lVar24 = local_ae0._0_8_;
            puVar16[7] = 0;
            *puVar16 = puVar30;
            puVar16[1] = uVar26;
            if (local_ae0._0_8_ != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar16 + 3 ), (CowData*)local_ae0);
               puVar21 = (undefined*)puVar16[4];
            }

            if (puVar21 != puVar20) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar16 + 4 ), (CowData*)( local_ae0 + 8 ));
            }

            plVar3 = *(long**)param_5;
            lVar19 = plVar3[1];
            puVar16[5] = 0;
            puVar16[7] = plVar3;
            puVar16[6] = lVar19;
            if (lVar19 != 0) {
               *(undefined8**)( lVar19 + 0x28 ) = puVar16;
            }

            plVar3[1] = (long)puVar16;
            if (*plVar3 == 0) {
               *plVar3 = (long)puVar16;
            }

            *(int*)( plVar3 + 2 ) = (int)plVar3[2] + 1;
            if (puVar20 != (undefined*)0x0) {
               LOCK();
               plVar3 = (long*)( puVar20 + -0x10 );
               *plVar3 = *plVar3 + -1;
               UNLOCK();
               if (*plVar3 == 0) {
                  Memory::free_static((void*)( local_ae0._8_8_ + -0x10 ), false);
               }

               lVar24 = local_ae0._0_8_;
            }

            if (lVar24 != 0) {
               LOCK();
               plVar3 = (long*)( lVar24 + -0x10 );
               *plVar3 = *plVar3 + -1;
               UNLOCK();
               if (*plVar3 == 0) {
                  Memory::free_static((void*)( local_ae0._0_8_ + -0x10 ), false);
               }

            }

            puVar33 = *(undefined4**)( puVar33 + 10 );
         }
 while ( puVar33 != (undefined4*)0x0 );
         goto LAB_001039de;
      }

      LAB_00103650:if (param_4 != (List*)0x0) {
         if (( local_a08 != (long*)0x0 ) && ( pCVar31 = (CowData*)*local_a08 ),pCVar31 != (CowData*)0x0) {
            pCVar17 = (CowData<char32_t>*)( auStack_af0 + 8 );
            do {
               local_af8 = (undefined*)0x0;
               local_ae8 = (undefined*)0x0;
               auStack_af0 = (undefined1[8])_LC59;
               auVar5 = _auStack_af0;
               local_ae8 = (undefined*)0x0;
               puVar30 = *(undefined**)param_2;
               if (*(undefined**)param_2 != (undefined*)0x0) {
                  _auStack_af0 = auVar5;
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_af8, (CowData*)param_2);
                  puVar30 = local_ae8;
               }

               auStack_af0 = ( undefined1[8] ) * (undefined8*)( pCVar31 + 8 );
               auVar25 = ( undefined1[8] ) * (undefined8*)( pCVar31 + 8 );
               if (*(undefined**)pCVar31 != puVar30) {
                  CowData<char32_t>::_ref(pCVar17, pCVar31);
                  auVar25 = auStack_af0;
                  puVar30 = local_ae8;
               }

               if (*(long*)param_4 == 0) {
                  pauVar18 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined1(**) [16])param_4 = pauVar18;
                  *(undefined4*)pauVar18[1] = 0;
                  *pauVar18 = (undefined1[16])0x0;
               }

               this_00 = (CowData<char32_t>*)operator_new(0x30, DefaultAllocator::alloc);
               *(undefined8*)this_00 = 0;
               uVar4 = _LC59;
               *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this_00 + 0x20 ) = (undefined1[16])0x0;
               *(ulong*)( this_00 + 8 ) = uVar4;
               puVar20 = local_af8;
               if (local_af8 != (undefined*)0x0) {
                  CowData<char32_t>::_ref(this_00, (CowData*)&local_af8);
                  puVar20 = *(undefined**)( this_00 + 0x10 );
               }

               *(undefined1(*) [8])( this_00 + 8 ) = auVar25;
               if (puVar30 != puVar20) {
                  CowData<char32_t>::_ref(this_00 + 0x10, (CowData*)pCVar17);
               }

               plVar3 = *(long**)param_4;
               lVar24 = plVar3[1];
               *(undefined8*)( this_00 + 0x18 ) = 0;
               *(long**)( this_00 + 0x28 ) = plVar3;
               *(long*)( this_00 + 0x20 ) = lVar24;
               if (lVar24 != 0) {
                  *(CowData<char32_t>**)( lVar24 + 0x18 ) = this_00;
               }

               plVar3[1] = (long)this_00;
               if (*plVar3 == 0) {
                  *plVar3 = (long)this_00;
               }

               *(int*)( plVar3 + 2 ) = (int)plVar3[2] + 1;
               CowData<char32_t>::_unref(pCVar17);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_af8);
               pCVar31 = *(CowData**)( pCVar31 + 0x10 );
            }
 while ( pCVar31 != (CowData*)0x0 );
         }

         lVar24 = GDScriptParser::get_depended_parsers();
         for (puVar16 = *(undefined8**)( lVar24 + 0x18 ); puVar16 != (undefined8*)0x0; puVar16 = (undefined8*)*puVar16) {
            local_b08 = (undefined*)0x0;
            if (puVar16[2] != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_b08, (CowData*)( puVar16 + 2 ));
            }

            pOVar27 = (Object*)puVar16[3];
            if (( pOVar27 == (Object*)0x0 ) || ( local_b00 = pOVar27 ),cVar13 = RefCounted::reference(),cVar13 == '\0') {
               local_b00 = (Object*)0x0;
               pOVar27 = (Object*)0x0;
            }

            lVar24 = GDScriptParserRef::get_parser();
            if (( *(long**)( lVar24 + 0x60 ) == (long*)0x0 ) || ( pCVar31 = (CowData*)**(long**)( lVar24 + 0x60 ) ),pCVar31 == (CowData*)0x0) {
               LAB_001041b0:cVar13 = RefCounted::unreference();
               if (( cVar13 != '\0' ) && ( cVar13 = predelete_handler(pOVar27) ),cVar13 != '\0') {
                  ( **(code**)( *(long*)pOVar27 + 0x140 ) )(pOVar27);
                  Memory::free_static(pOVar27, false);
               }

            }
 else {
               do {
                  local_af8 = (undefined*)0x0;
                  puVar30 = local_b08;
                  if (local_b08 != (undefined*)0x0) {
                     plVar3 = (long*)( local_b08 + -0x10 );
                     do {
                        lVar24 = *plVar3;
                        if (lVar24 == 0) goto LAB_00104095;
                        LOCK();
                        lVar19 = *plVar3;
                        bVar34 = lVar24 == lVar19;
                        if (bVar34) {
                           *plVar3 = lVar24 + 1;
                           lVar19 = lVar24;
                        }

                        UNLOCK();
                     }
 while ( !bVar34 );
                     if (lVar19 != -1) {
                        local_af8 = local_b08;
                     }

                     LAB_00104095:puVar30 = (undefined*)0x0;
                  }

                  local_ae8 = (undefined*)0x0;
                  auStack_af0 = ( undefined1[8] ) * (ulong*)( pCVar31 + 8 );
                  auVar25 = ( undefined1[8] ) * (ulong*)( pCVar31 + 8 );
                  if (*(undefined**)pCVar31 != puVar30) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( auStack_af0 + 8 ), pCVar31);
                     puVar30 = local_ae8;
                     auVar25 = auStack_af0;
                  }

                  if (*(long*)param_4 == 0) {
                     pauVar18 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                     *(undefined1(**) [16])param_4 = pauVar18;
                     *(undefined4*)pauVar18[1] = 0;
                     *pauVar18 = (undefined1[16])0x0;
                  }

                  pCVar17 = (CowData<char32_t>*)operator_new(0x30, DefaultAllocator::alloc);
                  puVar21 = local_af8;
                  *(undefined8*)pCVar17 = 0;
                  uVar4 = _LC59;
                  *(undefined1(*) [16])( pCVar17 + 0x10 ) = (undefined1[16])0x0;
                  *(undefined1(*) [16])( pCVar17 + 0x20 ) = (undefined1[16])0x0;
                  *(ulong*)( pCVar17 + 8 ) = uVar4;
                  puVar20 = (undefined*)0x0;
                  if (local_af8 != (undefined*)0x0) {
                     CowData<char32_t>::_ref(pCVar17, (CowData*)&local_af8);
                     puVar20 = *(undefined**)( pCVar17 + 0x10 );
                  }

                  *(undefined1(*) [8])( pCVar17 + 8 ) = auVar25;
                  if (puVar30 != puVar20) {
                     CowData<char32_t>::_ref(pCVar17 + 0x10, (CowData*)( auStack_af0 + 8 ));
                  }

                  plVar3 = *(long**)param_4;
                  lVar24 = plVar3[1];
                  *(undefined8*)( pCVar17 + 0x18 ) = 0;
                  *(long**)( pCVar17 + 0x28 ) = plVar3;
                  *(long*)( pCVar17 + 0x20 ) = lVar24;
                  if (lVar24 != 0) {
                     *(CowData<char32_t>**)( lVar24 + 0x18 ) = pCVar17;
                  }

                  plVar3[1] = (long)pCVar17;
                  if (*plVar3 == 0) {
                     *plVar3 = (long)pCVar17;
                  }

                  *(int*)( plVar3 + 2 ) = (int)plVar3[2] + 1;
                  if (puVar30 != (undefined*)0x0) {
                     LOCK();
                     plVar3 = (long*)( puVar30 + -0x10 );
                     *plVar3 = *plVar3 + -1;
                     UNLOCK();
                     puVar21 = local_af8;
                     if (*plVar3 == 0) {
                        Memory::free_static((void*)( (long)local_ae8 + -0x10 ), false);
                        puVar21 = local_af8;
                     }

                  }

                  if (puVar21 != (undefined*)0x0) {
                     LOCK();
                     plVar3 = (long*)( puVar21 + -0x10 );
                     *plVar3 = *plVar3 + -1;
                     UNLOCK();
                     if (*plVar3 == 0) {
                        Memory::free_static(local_af8 + -0x10, false);
                     }

                  }

                  pCVar31 = *(CowData**)( pCVar31 + 0x10 );
               }
 while ( pCVar31 != (CowData*)0x0 );
               pOVar27 = local_b00;
               if (local_b00 != (Object*)0x0) goto LAB_001041b0;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b08);
         }

      }

      uVar26 = 0;
   }

   if (local_aa0 != (void*)0x0) {
      if (local_a7c != 0) {
         uVar32 = *(uint*)( hash_table_size_primes + (ulong)local_a80 * 4 );
         if (uVar32 == 0) {
            local_a7c = 0;
            local_a90 = (undefined1[16])0x0;
         }
 else {
            lVar24 = 0;
            pvVar28 = local_aa0;
            do {
               if (*(int*)( (long)local_a98 + lVar24 ) != 0) {
                  pvVar28 = *(void**)( (long)pvVar28 + lVar24 * 2 );
                  *(int*)( (long)local_a98 + lVar24 ) = 0;
                  if (( *(long*)( (long)pvVar28 + 0x18 ) != 0 ) && ( cVar13 = RefCounted::unreference() ),cVar13 != '\0') {
                     pOVar27 = *(Object**)( (long)pvVar28 + 0x18 );
                     cVar13 = predelete_handler(pOVar27);
                     if (cVar13 != '\0') {
                        ( **(code**)( *(long*)pOVar27 + 0x140 ) )(pOVar27);
                        Memory::free_static(pOVar27, false);
                     }

                  }

                  Memory::free_static(pvVar28, false);
                  *(undefined8*)( (long)local_aa0 + lVar24 * 2 ) = 0;
                  pvVar28 = local_aa0;
               }

               lVar24 = lVar24 + 4;
            }
 while ( (ulong)uVar32 << 2 != lVar24 );
            local_a7c = 0;
            local_a90 = (undefined1[16])0x0;
            local_aa0 = pvVar28;
            if (pvVar28 == (void*)0x0) goto LAB_001038c8;
         }

      }

      Memory::free_static(local_aa0, false);
      Memory::free_static(local_a98, false);
   }

   LAB_001038c8:if (local_ab0 != (long*)0x0) {
      do {
         plVar3 = local_ab0;
         pvVar28 = (void*)*local_ab0;
         if (pvVar28 == (void*)0x0) {
            if ((int)local_ab0[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_0010393a;
            }

            break;
         }

         if (*(long**)( (long)pvVar28 + 0x18 ) == local_ab0) {
            lVar24 = *(long*)( (long)pvVar28 + 8 );
            lVar19 = *(long*)( (long)pvVar28 + 0x10 );
            *local_ab0 = lVar24;
            if (pvVar28 == (void*)local_ab0[1]) {
               local_ab0[1] = lVar19;
            }

            if (lVar19 != 0) {
               *(long*)( lVar19 + 8 ) = lVar24;
               lVar24 = *(long*)( (long)pvVar28 + 8 );
            }

            if (lVar24 != 0) {
               *(long*)( lVar24 + 0x10 ) = lVar19;
            }

            Memory::free_static(pvVar28, false);
            *(int*)( plVar3 + 2 ) = (int)plVar3[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

      }
 while ( (int)local_ab0[2] != 0 );
      Memory::free_static(local_ab0, false);
   }

   LAB_0010393a:GDScriptParser::~GDScriptParser(local_a68);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar26;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptLanguage::debug_get_globals(List<String, DefaultAllocator>*, List<Variant,
   DefaultAllocator>*, int, int) */void GDScriptLanguage::debug_get_globals(List *param_1, List *param_2, int param_3, int param_4) {
   StringName *this;
   Variant *pVVar1;
   long lVar2;
   undefined8 *puVar3;
   String *pSVar4;
   long *plVar5;
   undefined8 uVar6;
   char cVar7;
   int iVar8;
   StringName *pSVar9;
   long lVar10;
   char *pcVar11;
   CowData<char32_t> *this_00;
   Variant *this_01;
   undefined1(*pauVar12)[16];
   undefined4 in_register_0000000c;
   undefined4 in_register_00000014;
   long *plVar13;
   int iVar14;
   long in_FS_OFFSET;
   undefined8 *local_68;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   lVar10 = singleton;
   plVar13 = (long*)CONCAT44(in_register_00000014, param_3);
   lVar2 = *(long*)( singleton + 0x178 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = (undefined8*)0x0;
   ( **(code**)( *(long*)param_1 + 0x2e0 ) )(param_1, (List<Pair<String,Variant>,DefaultAllocator>*)&local_68, plVar13, CONCAT44(in_register_0000000c, param_4));
   puVar3 = *(undefined8**)( lVar10 + 0x1a8 );
   do {
      while (true) {
         if (puVar3 == (undefined8*)0x0) {
            List<Pair<String,Variant>,DefaultAllocator>::~List((List<Pair<String,Variant>,DefaultAllocator>*)&local_68);
            if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return;
         }

         this(StringName * )(puVar3 + 2);
         cVar7 = ClassDB::class_exists(this);
         if (cVar7 == '\0') break;
         LAB_001042d8:puVar3 = (undefined8*)*puVar3;
      }
;
      pSVar9 = (StringName*)Engine::get_singleton();
      cVar7 = Engine::has_singleton(pSVar9);
      if (cVar7 != '\0') goto LAB_001042d8;
      if (local_68 != (undefined8*)0x0) {
         for (pSVar4 = (String*)*local_68; pSVar4 != (String*)0x0; pSVar4 = *(String**)( pSVar4 + 0x20 )) {
            cVar7 = operator == ( pSVar4,this );
            if (cVar7 != '\0') goto LAB_001042d8;
         }

      }

      pVVar1 = (Variant*)( lVar2 + (long)*(int*)( puVar3 + 3 ) * 0x18 );
      lVar10 = Variant::get_validated_object_with_check((bool*)pVVar1);
      if (( lVar10 != 0 ) && ( lVar10 = __dynamic_cast(lVar10, &Object::typeinfo, &GDScriptNativeClass::typeinfo, 0) ),lVar10 != 0) goto LAB_001042d8;
      for (iVar14 = 0; iVar8 = CoreConstants::get_global_constant_count(),iVar14 < iVar8; iVar14 = iVar14 + 1) {
         pcVar11 = (char*)CoreConstants::get_global_constant_name(iVar14);
         cVar7 = StringName::operator ==(this, pcVar11);
         if (cVar7 != '\0') goto LAB_001042d8;
      }

      lVar10 = puVar3[2];
      if (lVar10 == 0) {
         local_60 = 0;
      }
 else {
         pcVar11 = *(char**)( lVar10 + 8 );
         local_60 = 0;
         if (pcVar11 == (char*)0x0) {
            if (*(long*)( lVar10 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar10 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar11);
            local_58 = pcVar11;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      if (*(long*)param_2 == 0) {
         pauVar12 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])param_2 = pauVar12;
         *(undefined4*)pauVar12[1] = 0;
         *pauVar12 = (undefined1[16])0x0;
      }

      this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
      *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
      if (local_60 != 0) {
         CowData<char32_t>::_ref(this_00, (CowData*)&local_60);
      }

      plVar5 = *(long**)param_2;
      lVar10 = plVar5[1];
      *(undefined8*)( this_00 + 8 ) = 0;
      *(long**)( this_00 + 0x18 ) = plVar5;
      *(long*)( this_00 + 0x10 ) = lVar10;
      if (lVar10 != 0) {
         *(CowData<char32_t>**)( lVar10 + 8 ) = this_00;
      }

      plVar5[1] = (long)this_00;
      if (*plVar5 == 0) {
         *plVar5 = (long)this_00;
      }

      *(int*)( plVar5 + 2 ) = (int)plVar5[2] + 1;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (*plVar13 == 0) {
         pauVar12 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *plVar13 = (long)pauVar12;
         *(undefined4*)pauVar12[1] = 0;
         *pauVar12 = (undefined1[16])0x0;
      }

      this_01 = (Variant*)operator_new(0x30, DefaultAllocator::alloc);
      *(undefined4*)this_01 = 0;
      *(undefined8*)( this_01 + 0x28 ) = 0;
      *(undefined1(*) [16])( this_01 + 8 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_01 + 0x18 ) = (undefined1[16])0x0;
      Variant::operator =(this_01, pVVar1);
      uVar6 = *(undefined8*)( *plVar13 + 8 );
      *(long*)( this_01 + 0x28 ) = *plVar13;
      plVar5 = (long*)*plVar13;
      *(undefined8*)( this_01 + 0x18 ) = 0;
      *(undefined8*)( this_01 + 0x20 ) = uVar6;
      if (plVar5[1] != 0) {
         *(Variant**)( plVar5[1] + 0x18 ) = this_01;
      }

      plVar5[1] = (long)this_01;
      if (*plVar5 == 0) {
         *plVar5 = (long)this_01;
      }

      puVar3 = (undefined8*)*puVar3;
      *(int*)( plVar5 + 2 ) = (int)plVar5[2] + 1;
   }
 while ( true );
}
/* ScriptLanguage::CodeCompletionOption::TEMPNAMEPLACEHOLDERVALUE(ScriptLanguage::CodeCompletionOption&&)
   [clone .isra.0] */void ScriptLanguage::CodeCompletionOption::operator =(CodeCompletionOption *this, CodeCompletionOption *param_1) {
   long *plVar1;
   Object *pOVar2;
   Object *pOVar3;
   undefined8 uVar4;
   char cVar5;
   long lVar6;
   long lVar7;
   *(undefined4*)this = *(undefined4*)param_1;
   if (*(long*)( this + 8 ) != *(long*)( param_1 + 8 )) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( this + 8 ));
      *(undefined8*)( this + 8 ) = *(undefined8*)( param_1 + 8 );
      *(undefined8*)( param_1 + 8 ) = 0;
   }

   if (*(long*)( this + 0x10 ) != *(long*)( param_1 + 0x10 )) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x10 ));
      *(undefined8*)( this + 0x10 ) = *(undefined8*)( param_1 + 0x10 );
      *(undefined8*)( param_1 + 0x10 ) = 0;
   }

   uVar4 = *(undefined8*)( param_1 + 0x20 );
   pOVar2 = *(Object**)( param_1 + 0x28 );
   pOVar3 = *(Object**)( this + 0x28 );
   *(undefined8*)( this + 0x18 ) = *(undefined8*)( param_1 + 0x18 );
   *(undefined8*)( this + 0x20 ) = uVar4;
   if (pOVar2 != pOVar3) {
      *(Object**)( this + 0x28 ) = pOVar2;
      if (pOVar2 != (Object*)0x0) {
         cVar5 = RefCounted::reference();
         if (cVar5 == '\0') {
            *(undefined8*)( this + 0x28 ) = 0;
         }

      }

      if (pOVar3 != (Object*)0x0) {
         cVar5 = RefCounted::unreference();
         if (cVar5 != '\0') {
            cVar5 = predelete_handler(pOVar3);
            if (cVar5 != '\0') {
               ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
               Memory::free_static(pOVar3, false);
            }

         }

      }

   }

   if (this + 0x30 != param_1 + 0x30) {
      if (( &Variant::needs_deinit )[*(int*)( this + 0x30 )] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)( this + 0x30 ) = 0;
      *(undefined4*)( this + 0x30 ) = *(undefined4*)( param_1 + 0x30 );
      uVar4 = *(undefined8*)( param_1 + 0x40 );
      *(undefined8*)( this + 0x38 ) = *(undefined8*)( param_1 + 0x38 );
      *(undefined8*)( this + 0x40 ) = uVar4;
      *(undefined4*)( param_1 + 0x30 ) = 0;
   }

   lVar7 = *(long*)( this + 0x50 );
   lVar6 = *(long*)( param_1 + 0x50 );
   if (lVar7 != lVar6) {
      if (lVar7 != 0) {
         LOCK();
         plVar1 = (long*)( lVar7 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar7 = *(long*)( this + 0x50 );
            *(undefined8*)( this + 0x50 ) = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
            lVar6 = *(long*)( param_1 + 0x50 );
         }
 else {
            *(undefined8*)( this + 0x50 ) = 0;
            lVar6 = *(long*)( param_1 + 0x50 );
         }

      }

      *(long*)( this + 0x50 ) = lVar6;
      *(undefined8*)( param_1 + 0x50 ) = 0;
   }

   lVar7 = *(long*)( this + 0x60 );
   lVar6 = *(long*)( param_1 + 0x60 );
   if (lVar7 != lVar6) {
      if (lVar7 != 0) {
         LOCK();
         plVar1 = (long*)( lVar7 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar7 = *(long*)( this + 0x60 );
            *(undefined8*)( this + 0x60 ) = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
            lVar6 = *(long*)( param_1 + 0x60 );
         }
 else {
            *(undefined8*)( this + 0x60 ) = 0;
            lVar6 = *(long*)( param_1 + 0x60 );
         }

      }

      *(long*)( this + 0x60 ) = lVar6;
      *(undefined8*)( param_1 + 0x60 ) = 0;
   }

   lVar7 = *(long*)( param_1 + 0x70 );
   *(undefined4*)( this + 0x68 ) = *(undefined4*)( param_1 + 0x68 );
   lVar6 = *(long*)( this + 0x70 );
   if (lVar6 != lVar7) {
      if (lVar6 != 0) {
         LOCK();
         plVar1 = (long*)( lVar6 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar7 = *(long*)( this + 0x70 );
            *(undefined8*)( this + 0x70 ) = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
            lVar7 = *(long*)( param_1 + 0x70 );
         }
 else {
            *(undefined8*)( this + 0x70 ) = 0;
            lVar7 = *(long*)( param_1 + 0x70 );
         }

      }

      *(long*)( this + 0x70 ) = lVar7;
      *(undefined8*)( param_1 + 0x70 ) = 0;
   }

   Array::operator =((Array*)( this + 0x78 ), (Array*)( param_1 + 0x78 ));
   return;
}
/* GDScriptLanguage::get_public_constants(List<Pair<String, Variant>, DefaultAllocator>*) const */void GDScriptLanguage::get_public_constants(GDScriptLanguage *this, List *param_1) {
   undefined8 uVar1;
   long *plVar2;
   CowData<char32_t> *pCVar3;
   undefined1(*pauVar4)[16];
   long in_FS_OFFSET;
   int local_e8[8];
   long local_c8;
   int local_c0[2];
   undefined1 local_b8[16];
   long local_a8;
   int local_a0[2];
   undefined1 local_98[16];
   long local_88;
   int local_80[2];
   undefined1 local_78[16];
   long local_68;
   int local_60[2];
   undefined1 auStack_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_b8 = (undefined1[16])0x0;
   local_c8 = 0;
   local_c0[0] = 0;
   String::parse_latin1((StrRange*)&local_c8);
   Variant::Variant((Variant*)&local_68, _LC61);
   if (( &Variant::needs_deinit )[local_c0[0]] != '\0') {
      Variant::_clear_internal();
   }

   local_c0[0] = (int)local_68;
   if (*(long*)param_1 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   pCVar3 = (CowData<char32_t>*)operator_new(0x38, DefaultAllocator::alloc);
   *(undefined8*)pCVar3 = 0;
   *(undefined1(*) [16])( pCVar3 + 0x10 ) = (undefined1[16])0x0;
   *(undefined4*)( pCVar3 + 8 ) = 0;
   *(undefined8*)( pCVar3 + 0x30 ) = 0;
   *(undefined1(*) [16])( pCVar3 + 0x20 ) = (undefined1[16])0x0;
   if (local_c8 != 0) {
      CowData<char32_t>::_ref(pCVar3, (CowData*)&local_c8);
   }

   Variant::operator =((Variant*)( pCVar3 + 8 ), (Variant*)local_c0);
   uVar1 = *(undefined8*)( *(long*)param_1 + 8 );
   *(long*)( pCVar3 + 0x30 ) = *(long*)param_1;
   plVar2 = *(long**)param_1;
   *(undefined8*)( pCVar3 + 0x20 ) = 0;
   *(undefined8*)( pCVar3 + 0x28 ) = uVar1;
   if (plVar2[1] != 0) {
      *(CowData<char32_t>**)( plVar2[1] + 0x20 ) = pCVar3;
   }

   plVar2[1] = (long)pCVar3;
   if (*plVar2 == 0) {
      *plVar2 = (long)pCVar3;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   local_98 = (undefined1[16])0x0;
   local_a8 = 0;
   local_a0[0] = 0;
   String::parse_latin1((StrRange*)&local_a8);
   Variant::Variant((Variant*)&local_68, _LC63);
   if (( &Variant::needs_deinit )[local_a0[0]] != '\0') {
      Variant::_clear_internal();
   }

   local_a0[0] = (int)local_68;
   if (*(long*)param_1 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   pCVar3 = (CowData<char32_t>*)operator_new(0x38, DefaultAllocator::alloc);
   *(undefined8*)pCVar3 = 0;
   *(undefined1(*) [16])( pCVar3 + 0x10 ) = (undefined1[16])0x0;
   *(undefined4*)( pCVar3 + 8 ) = 0;
   *(undefined8*)( pCVar3 + 0x30 ) = 0;
   *(undefined1(*) [16])( pCVar3 + 0x20 ) = (undefined1[16])0x0;
   if (local_a8 != 0) {
      CowData<char32_t>::_ref(pCVar3, (CowData*)&local_a8);
   }

   Variant::operator =((Variant*)( pCVar3 + 8 ), (Variant*)local_a0);
   uVar1 = *(undefined8*)( *(long*)param_1 + 8 );
   *(long*)( pCVar3 + 0x30 ) = *(long*)param_1;
   plVar2 = *(long**)param_1;
   *(undefined8*)( pCVar3 + 0x20 ) = 0;
   *(undefined8*)( pCVar3 + 0x28 ) = uVar1;
   if (plVar2[1] != 0) {
      *(CowData<char32_t>**)( plVar2[1] + 0x20 ) = pCVar3;
   }

   plVar2[1] = (long)pCVar3;
   if (*plVar2 == 0) {
      *plVar2 = (long)pCVar3;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   local_78 = (undefined1[16])0x0;
   local_88 = 0;
   local_80[0] = 0;
   String::parse_latin1((StrRange*)&local_88);
   Variant::Variant((Variant*)&local_68, _LC65);
   if (( &Variant::needs_deinit )[local_80[0]] != '\0') {
      Variant::_clear_internal();
   }

   local_80[0] = (int)local_68;
   if (*(long*)param_1 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   pCVar3 = (CowData<char32_t>*)operator_new(0x38, DefaultAllocator::alloc);
   *(undefined8*)pCVar3 = 0;
   *(undefined1(*) [16])( pCVar3 + 0x10 ) = (undefined1[16])0x0;
   *(undefined4*)( pCVar3 + 8 ) = 0;
   *(undefined8*)( pCVar3 + 0x30 ) = 0;
   *(undefined1(*) [16])( pCVar3 + 0x20 ) = (undefined1[16])0x0;
   if (local_88 != 0) {
      CowData<char32_t>::_ref(pCVar3, (CowData*)&local_88);
   }

   Variant::operator =((Variant*)( pCVar3 + 8 ), (Variant*)local_80);
   uVar1 = *(undefined8*)( *(long*)param_1 + 8 );
   *(long*)( pCVar3 + 0x30 ) = *(long*)param_1;
   plVar2 = *(long**)param_1;
   *(undefined8*)( pCVar3 + 0x20 ) = 0;
   *(undefined8*)( pCVar3 + 0x28 ) = uVar1;
   if (plVar2[1] != 0) {
      *(CowData<char32_t>**)( plVar2[1] + 0x20 ) = pCVar3;
   }

   plVar2[1] = (long)pCVar3;
   if (*plVar2 == 0) {
      *plVar2 = (long)pCVar3;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   auStack_58 = (undefined1[16])0x0;
   local_68 = 0;
   local_60[0] = 0;
   String::parse_latin1((StrRange*)&local_68);
   Variant::Variant((Variant*)local_e8, _LC67);
   if (( &Variant::needs_deinit )[local_60[0]] != '\0') {
      Variant::_clear_internal();
   }

   local_60[0] = local_e8[0];
   if (*(long*)param_1 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   pCVar3 = (CowData<char32_t>*)operator_new(0x38, DefaultAllocator::alloc);
   *(undefined1(*) [16])( pCVar3 + 0x10 ) = (undefined1[16])0x0;
   *(undefined8*)pCVar3 = 0;
   *(undefined4*)( pCVar3 + 8 ) = 0;
   *(undefined8*)( pCVar3 + 0x30 ) = 0;
   *(undefined1(*) [16])( pCVar3 + 0x20 ) = (undefined1[16])0x0;
   if (local_68 != 0) {
      CowData<char32_t>::_ref(pCVar3, (CowData*)&local_68);
   }

   Variant::operator =((Variant*)( pCVar3 + 8 ), (Variant*)local_60);
   uVar1 = *(undefined8*)( *(long*)param_1 + 8 );
   *(long*)( pCVar3 + 0x30 ) = *(long*)param_1;
   plVar2 = *(long**)param_1;
   *(undefined8*)( pCVar3 + 0x20 ) = 0;
   *(undefined8*)( pCVar3 + 0x28 ) = uVar1;
   if (plVar2[1] != 0) {
      *(CowData<char32_t>**)( plVar2[1] + 0x20 ) = pCVar3;
   }

   plVar2[1] = (long)pCVar3;
   if (*plVar2 == 0) {
      *plVar2 = (long)pCVar3;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   if (( &Variant::needs_deinit )[local_60[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   if (( &Variant::needs_deinit )[local_80[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( &Variant::needs_deinit )[local_a0[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (( &Variant::needs_deinit )[local_c0[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptLanguage::debug_break(String const&, bool) */undefined8 GDScriptLanguage::debug_break(GDScriptLanguage *this, String *param_1, bool param_2) {
   StrRange *this_00;
   long lVar1;
   undefined8 uVar2;
   long *in_FS_OFFSET;
   undefined *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = in_FS_OFFSET[5];
   uVar2 = 0;
   if (( EngineDebugger::singleton != 0 ) && ( EngineDebugger::script_debugger != (ScriptLanguage*)0x0 )) {
      lVar1 = *in_FS_OFFSET;
      *(undefined4*)in_FS_OFFSET = 0xffffffff;
      this_00 = (StrRange*)*in_FS_OFFSET;
      if ((char)lVar1 == '\0') {
         *(char*)in_FS_OFFSET = '\x01';
         *in_FS_OFFSET = 0;
         __cxa_thread_atexit(String::~String, this_00, &__dso_handle);
         *in_FS_OFFSET = 0;
         __cxa_thread_atexit(String::~String, this_00, &__dso_handle);
      }

      local_50 = 0;
      local_58 = &_LC12;
      String::parse_latin1(this_00);
      if ((char)*in_FS_OFFSET == '\0') {
         *(char*)in_FS_OFFSET = '\x01';
         *in_FS_OFFSET = 0;
         __cxa_thread_atexit(String::~String, this_00, &__dso_handle);
         *in_FS_OFFSET = 0;
         __cxa_thread_atexit(String::~String, this_00, &__dso_handle);
      }

      if (*in_FS_OFFSET != *(long*)param_1) {
         CowData<char32_t>::_ref((CowData<char32_t>*)this_00, (CowData*)param_1);
      }

      String::operator !=(param_1, "Breakpoint");
      ScriptDebugger::debug(EngineDebugger::script_debugger, SUB81(this, 0), param_2);
      local_58 = (undefined*)0x0;
      if ((char)*in_FS_OFFSET == '\0') {
         *(char*)in_FS_OFFSET = '\x01';
         *in_FS_OFFSET = 0;
         __cxa_thread_atexit(String::~String, this_00, &__dso_handle);
         *in_FS_OFFSET = 0;
         __cxa_thread_atexit(String::~String, this_00, &__dso_handle);
      }

      if (*in_FS_OFFSET != 0) {
         CowData<char32_t>::_unref((CowData<char32_t>*)this_00);
         *in_FS_OFFSET = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      local_58 = (undefined*)0x0;
      if ((char)*in_FS_OFFSET == '\0') {
         *(char*)in_FS_OFFSET = '\x01';
         *in_FS_OFFSET = 0;
         __cxa_thread_atexit(String::~String, this_00, &__dso_handle);
         *in_FS_OFFSET = 0;
         __cxa_thread_atexit(String::~String, this_00, &__dso_handle);
      }

      if (*in_FS_OFFSET != 0) {
         CowData<char32_t>::_unref((CowData<char32_t>*)this_00);
         *in_FS_OFFSET = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      uVar2 = 1;
   }

   if (local_40 == in_FS_OFFSET[5]) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptLanguage::debug_break_parse(String const&, int, String const&) */undefined8 GDScriptLanguage::debug_break_parse(GDScriptLanguage *this, String *param_1, int param_2, String *param_3) {
   CowData<char32_t> *this_00;
   long lVar1;
   undefined8 uVar2;
   long *in_FS_OFFSET;
   undefined8 local_48;
   long local_40;
   local_40 = in_FS_OFFSET[5];
   if (( EngineDebugger::singleton != 0 ) && ( EngineDebugger::script_debugger != (ScriptLanguage*)0x0 )) {
      if (_GLOBAL_OFFSET_TABLE_ != (undefined*)0x0) {
         Thread::caller_id();
      }

      if (*(long*)( (long)in_FS_OFFSET + lRam0000000000105297 ) == 1) {
         lVar1 = *in_FS_OFFSET;
         *(int*)in_FS_OFFSET = param_2;
         if ((char)lVar1 == '\0') {
            lVar1 = *in_FS_OFFSET;
            *(char*)in_FS_OFFSET = '\x01';
            *in_FS_OFFSET = 0;
            __cxa_thread_atexit(String::~String, lVar1, &__dso_handle);
            *in_FS_OFFSET = 0;
            __cxa_thread_atexit(String::~String, lVar1, &__dso_handle);
         }

         if (*in_FS_OFFSET != *(long*)param_1) {
            this_00 = (CowData<char32_t>*)*in_FS_OFFSET;
            CowData<char32_t>::_ref(this_00, (CowData*)param_1);
            if ((char)*in_FS_OFFSET == '\0') {
               *(char*)in_FS_OFFSET = '\x01';
               *in_FS_OFFSET = 0;
               __cxa_thread_atexit(String::~String, this_00, &__dso_handle);
               *in_FS_OFFSET = 0;
               __cxa_thread_atexit(String::~String, this_00, &__dso_handle);
            }

         }

         if (*in_FS_OFFSET != *(long*)param_3) {
            CowData<char32_t>::_ref((CowData<char32_t>*)*in_FS_OFFSET, (CowData*)param_3);
         }

         ScriptDebugger::debug(EngineDebugger::script_debugger, SUB81(this, 0), false);
         local_48 = 0;
         if ((char)*in_FS_OFFSET == '\0') {
            lVar1 = *in_FS_OFFSET;
            *(char*)in_FS_OFFSET = '\x01';
            *in_FS_OFFSET = 0;
            __cxa_thread_atexit(String::~String, lVar1, &__dso_handle);
            *in_FS_OFFSET = 0;
            __cxa_thread_atexit(String::~String, lVar1, &__dso_handle);
         }

         if (*in_FS_OFFSET != 0) {
            CowData<char32_t>::_unref((CowData<char32_t>*)*in_FS_OFFSET);
            *in_FS_OFFSET = 0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         local_48 = 0;
         if ((char)*in_FS_OFFSET == '\0') {
            lVar1 = *in_FS_OFFSET;
            *(char*)in_FS_OFFSET = '\x01';
            *in_FS_OFFSET = 0;
            __cxa_thread_atexit(String::~String, lVar1, &__dso_handle);
            *in_FS_OFFSET = 0;
            __cxa_thread_atexit(String::~String, lVar1, &__dso_handle);
         }

         if (*in_FS_OFFSET != 0) {
            CowData<char32_t>::_unref((CowData<char32_t>*)*in_FS_OFFSET);
            *in_FS_OFFSET = 0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         uVar2 = 1;
         goto LAB_001052a0;
      }

   }

   uVar2 = 0;
   LAB_001052a0:if (local_40 == in_FS_OFFSET[5]) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<GDScriptParser::EnumNode::Value>::_copy_on_write() [clone .isra.0] */void CowData<GDScriptParser::EnumNode::Value>::_copy_on_write(CowData<GDScriptParser::EnumNode::Value> *this) {
   long *plVar1;
   CowData<char32_t> *this_00;
   undefined1 uVar2;
   undefined4 uVar3;
   long lVar4;
   code *pcVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 *puVar8;
   undefined8 *puVar9;
   CowData<char32_t> *this_01;
   long lVar10;
   long lVar11;
   ulong uVar12;
   undefined8 *puVar13;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   lVar4 = *(long*)( *(long*)this + -8 );
   uVar12 = 0x10;
   if (lVar4 * 0x60 != 0) {
      uVar12 = lVar4 * 0x60 - 1;
      uVar12 = uVar12 | uVar12 >> 1;
      uVar12 = uVar12 | uVar12 >> 2;
      uVar12 = uVar12 | uVar12 >> 4;
      uVar12 = uVar12 | uVar12 >> 8;
      uVar12 = uVar12 | uVar12 >> 0x10;
      uVar12 = ( uVar12 | uVar12 >> 0x20 ) + 0x11;
   }

   puVar8 = (undefined8*)Memory::alloc_static(uVar12, false);
   if (puVar8 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   lVar10 = 0;
   *puVar8 = 1;
   puVar8[1] = lVar4;
   puVar13 = puVar8 + 2;
   if (lVar4 != 0) {
      do {
         puVar9 = (undefined8*)( (long)puVar13 + *(long*)this + ( -0x10 - (long)puVar8 ) );
         uVar6 = *puVar9;
         uVar7 = puVar9[1];
         puVar13[2] = puVar9[2];
         uVar3 = *(undefined4*)( puVar9 + 3 );
         *puVar13 = uVar6;
         puVar13[1] = uVar7;
         *(undefined4*)( puVar13 + 3 ) = uVar3;
         *(undefined1*)( (long)puVar13 + 0x1c ) = *(undefined1*)( (long)puVar9 + 0x1c );
         puVar13[4] = puVar9[4];
         puVar13[5] = puVar9[5];
         uVar3 = *(undefined4*)( puVar9 + 6 );
         puVar13[7] = 0;
         lVar11 = puVar9[7];
         *(undefined4*)( puVar13 + 6 ) = uVar3;
         if (lVar11 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar13 + 7 ), (CowData*)( puVar9 + 7 ));
         }

         uVar2 = *(undefined1*)( puVar9 + 8 );
         puVar13[9] = 0;
         lVar11 = puVar9[9];
         *(undefined1*)( puVar13 + 8 ) = uVar2;
         if (lVar11 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar13 + 9 ), (CowData*)( puVar9 + 9 ));
         }

         uVar2 = *(undefined1*)( puVar9 + 10 );
         puVar13[0xb] = 0;
         lVar11 = puVar9[0xb];
         *(undefined1*)( puVar13 + 10 ) = uVar2;
         if (lVar11 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar13 + 0xb ), (CowData*)( puVar9 + 0xb ));
         }

         lVar10 = lVar10 + 1;
         puVar13 = puVar13 + 0xc;
      }
 while ( lVar4 != lVar10 );
   }

   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)this;
         if (lVar4 == 0) {
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }

         lVar10 = *(long*)( lVar4 + -8 );
         this_01 = (CowData<char32_t>*)( lVar4 + 0x58 );
         lVar11 = 0;
         *(undefined8*)this = 0;
         if (lVar10 != 0) {
            do {
               lVar11 = lVar11 + 1;
               CowData<char32_t>::_unref(this_01);
               CowData<char32_t>::_unref(this_01 + -0x10);
               this_00 = this_01 + -0x20;
               this_01 = this_01 + 0x60;
               CowData<char32_t>::_unref(this_00);
            }
 while ( lVar10 != lVar11 );
         }

         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   *(undefined8**)this = puVar8 + 2;
   return;
}
/* CowData<GDScriptParser::ClassNode::Member>::_copy_on_write() [clone .isra.0] */void CowData<GDScriptParser::ClassNode::Member>::_copy_on_write(CowData<GDScriptParser::ClassNode::Member> *this) {
   long *plVar1;
   CowData<char32_t> CVar2;
   undefined4 uVar3;
   long lVar4;
   code *pcVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 *puVar8;
   CowData<char32_t> *pCVar9;
   long lVar10;
   long lVar11;
   ulong uVar12;
   CowData<char32_t> *pCVar13;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   lVar4 = *(long*)( *(long*)this + -8 );
   uVar12 = 0x10;
   if (lVar4 * 0x70 != 0) {
      uVar12 = lVar4 * 0x70 - 1;
      uVar12 = uVar12 | uVar12 >> 1;
      uVar12 = uVar12 | uVar12 >> 2;
      uVar12 = uVar12 | uVar12 >> 4;
      uVar12 = uVar12 | uVar12 >> 8;
      uVar12 = uVar12 | uVar12 >> 0x10;
      uVar12 = ( uVar12 | uVar12 >> 0x20 ) + 0x11;
   }

   puVar8 = (undefined8*)Memory::alloc_static(uVar12, false);
   if (puVar8 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   pCVar13 = (CowData<char32_t>*)( puVar8 + 0xf );
   lVar10 = 0;
   *puVar8 = 1;
   puVar8[1] = lVar4;
   if (lVar4 != 0) {
      do {
         pCVar9 = pCVar13 + *(long*)this + ( -0x78 - (long)puVar8 );
         *(undefined4*)( pCVar13 + -0x68 ) = *(undefined4*)pCVar9;
         *(undefined8*)( pCVar13 + -0x60 ) = *(undefined8*)( pCVar9 + 8 );
         uVar6 = *(undefined8*)( pCVar9 + 0x10 );
         uVar7 = *(undefined8*)( pCVar9 + 0x18 );
         *(undefined8*)( pCVar13 + -0x48 ) = *(undefined8*)( pCVar9 + 0x20 );
         uVar3 = *(undefined4*)( pCVar9 + 0x28 );
         *(undefined8*)( pCVar13 + -0x58 ) = uVar6;
         *(undefined8*)( pCVar13 + -0x50 ) = uVar7;
         *(undefined4*)( pCVar13 + -0x40 ) = uVar3;
         pCVar13[-0x3c] = pCVar9[0x2c];
         *(undefined8*)( pCVar13 + -0x38 ) = *(undefined8*)( pCVar9 + 0x30 );
         *(undefined8*)( pCVar13 + -0x30 ) = *(undefined8*)( pCVar9 + 0x38 );
         uVar3 = *(undefined4*)( pCVar9 + 0x40 );
         *(undefined8*)( pCVar13 + -0x20 ) = 0;
         lVar11 = *(long*)( pCVar9 + 0x48 );
         *(undefined4*)( pCVar13 + -0x28 ) = uVar3;
         if (lVar11 != 0) {
            CowData<char32_t>::_ref(pCVar13 + -0x20, (CowData*)( pCVar9 + 0x48 ));
         }

         CVar2 = pCVar9[0x50];
         *(undefined8*)( pCVar13 + -0x10 ) = 0;
         lVar11 = *(long*)( pCVar9 + 0x58 );
         pCVar13[-0x18] = CVar2;
         if (lVar11 != 0) {
            CowData<char32_t>::_ref(pCVar13 + -0x10, (CowData*)( pCVar9 + 0x58 ));
         }

         CVar2 = pCVar9[0x60];
         *(undefined8*)pCVar13 = 0;
         lVar11 = *(long*)( pCVar9 + 0x68 );
         pCVar13[-8] = CVar2;
         if (lVar11 != 0) {
            CowData<char32_t>::_ref(pCVar13, (CowData*)( pCVar9 + 0x68 ));
         }

         lVar10 = lVar10 + 1;
         pCVar13 = pCVar13 + 0x70;
      }
 while ( lVar4 != lVar10 );
   }

   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)this;
         if (lVar4 == 0) {
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }

         lVar10 = *(long*)( lVar4 + -8 );
         pCVar13 = (CowData<char32_t>*)( lVar4 + 0x68 );
         lVar11 = 0;
         *(undefined8*)this = 0;
         if (lVar10 != 0) {
            do {
               lVar11 = lVar11 + 1;
               CowData<char32_t>::_unref(pCVar13);
               CowData<char32_t>::_unref(pCVar13 + -0x10);
               pCVar9 = pCVar13 + -0x20;
               pCVar13 = pCVar13 + 0x70;
               CowData<char32_t>::_unref(pCVar9);
            }
 while ( lVar10 != lVar11 );
         }

         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   *(undefined8**)this = puVar8 + 2;
   return;
}
/* GDScriptLanguage::make_template(String const&, String const&, String const&) const */String *GDScriptLanguage::make_template(String *param_1, String *param_2, String *param_3) {
   char cVar1;
   bool bVar2;
   GDScript *this;
   long lVar3;
   GDScript *pGVar4;
   long in_FS_OFFSET;
   String *local_160;
   CowData<char32_t> *local_158;
   String *local_150;
   CowData<char32_t> *local_148;
   CowData<char32_t> *local_138;
   StrRange *local_130;
   StrRange *local_128;
   CowData<char32_t> *local_120;
   StrRange *local_118;
   char *local_e0;
   CowData<char32_t> local_d8[8];
   CowData<char32_t> local_d0[8];
   undefined8 local_c8;
   String local_c0[8];
   CowData<char32_t> local_b8[8];
   CowData<char32_t> local_b0[8];
   undefined8 local_a8;
   String local_a0[8];
   CowData<char32_t> local_98[8];
   CowData<char32_t> local_90[8];
   undefined8 local_88;
   String local_80[8];
   CowData<char32_t> local_78[8];
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   pGVar4 = (GDScript*)0x0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this(GDScript * operator_new(0x780, ""));
   GDScript::GDScript(this);
   postinitialize_handler((Object*)this);
   cVar1 = RefCounted::init_ref();
   if (cVar1 != '\0') {
      cVar1 = RefCounted::reference();
      if (cVar1 != '\0') {
         pGVar4 = this;
      }

      cVar1 = RefCounted::unreference();
      if (( cVar1 != '\0' ) && ( cVar1 = predelete_handler((Object*)this) ),cVar1 != '\0') {
         ( **(code**)( *(long*)this + 0x140 ) )(this);
         Memory::free_static(this, false);
      }

   }

   local_e0 = (char*)0x0;
   if (*(long*)param_3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_e0, (CowData*)param_3);
   }

   local_70 = 0;
   local_60 = 0x25;
   local_68 = "text_editor/completion/add_type_hints";
   String::parse_latin1((StrRange*)&local_70);
   _EDITOR_GET((String*)local_58);
   bVar2 = Variant::operator_cast_to_bool((Variant*)local_58);
   if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (!bVar2) {
      String::replace((char*)local_d8, (char*)&local_e0);
      String::replace((char*)local_d0, (char*)local_d8);
      String::replace((char*)&local_c8, (char*)local_d0);
      String::replace((char*)local_c0, (char*)&local_c8);
      String::replace((char*)local_b8, (char*)local_c0);
      String::replace((char*)local_b0, (char*)local_b8);
      String::replace((char*)&local_a8, (char*)local_b0);
      String::replace((char*)local_a0, (char*)&local_a8);
      String::replace((char*)local_98, (char*)local_a0);
      String::replace((char*)local_90, (char*)local_98);
      String::replace((char*)&local_88, (char*)local_90);
      String::replace((char*)local_80, (char*)&local_88);
      String::replace((char*)local_78, (char*)local_80);
      String::replace((char*)&local_70, (char*)local_78);
      String::replace((char*)&local_68, (char*)&local_70);
      if (local_e0 != local_68) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
         local_e0 = local_68;
         local_68 = (char*)0x0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref(local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref(local_90);
      CowData<char32_t>::_unref(local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      CowData<char32_t>::_unref(local_b0);
      CowData<char32_t>::_unref(local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_c0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      CowData<char32_t>::_unref(local_d0);
      CowData<char32_t>::_unref(local_d8);
   }

   local_118 = (StrRange*)&local_a8;
   local_120 = local_b8;
   local_128 = (StrRange*)&local_c8;
   local_130 = (StrRange*)&local_88;
   local_138 = local_98;
   local_148 = local_b0;
   local_150 = local_c0;
   local_158 = local_90;
   local_160 = local_a0;
   local_c8 = 0;
   local_68 = "_BASE_";
   local_60 = 6;
   String::parse_latin1(local_128);
   String::replace(local_150, (String*)&local_e0);
   String::to_snake_case();
   String::validate_unicode_identifier();
   local_68 = "_CLASS_SNAKE_CASE_";
   local_a8 = 0;
   local_60 = 0x12;
   String::parse_latin1(local_118);
   String::replace(local_160, local_150);
   String::to_pascal_case();
   String::validate_unicode_identifier();
   local_68 = "_CLASS_";
   local_88 = 0;
   local_60 = 7;
   String::parse_latin1(local_130);
   String::replace(local_80, local_160);
   ( **(code**)( *(long*)param_2 + 0x330 ) )(local_78, param_2);
   local_68 = "_TS_";
   local_70 = 0;
   local_60 = 4;
   String::parse_latin1((StrRange*)&local_70);
   String::replace((String*)&local_68, local_80);
   if (local_e0 != local_68) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
      local_e0 = local_68;
      local_68 = (char*)0x0;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref(local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_130);
   CowData<char32_t>::_unref(local_158);
   CowData<char32_t>::_unref(local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_118);
   CowData<char32_t>::_unref(local_148);
   CowData<char32_t>::_unref(local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_150);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_128);
   ( **(code**)( *(long*)pGVar4 + 0x220 ) )(pGVar4, (CowData<char32_t>*)&local_e0);
   *(undefined8*)param_1 = 0;
   lVar3 = __dynamic_cast(pGVar4, &Object::typeinfo, &Script::typeinfo, 0);
   if (lVar3 != 0) {
      *(long*)param_1 = lVar3;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *(undefined8*)param_1 = 0;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   cVar1 = RefCounted::unreference();
   if (( cVar1 != '\0' ) && ( cVar1 = predelete_handler((Object*)pGVar4) ),cVar1 != '\0') {
      ( **(code**)( *(long*)pGVar4 + 0x140 ) )(pGVar4);
      Memory::free_static(pGVar4, false);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodInfo::TEMPNAMEPLACEHOLDERVALUE(MethodInfo const&) [clone .isra.0] */void MethodInfo::operator =(MethodInfo *this, MethodInfo *param_1) {
   void *pvVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   long lVar5;
   long *plVar6;
   undefined4 *puVar7;
   bool bVar8;
   if (*(long*)this != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)this, (CowData*)param_1);
   }

   *(undefined4*)( this + 8 ) = *(undefined4*)( param_1 + 8 );
   if (*(long*)( this + 0x10 ) != *(long*)( param_1 + 0x10 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x10 ), (CowData*)( param_1 + 0x10 ));
   }

   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)( param_1 + 0x18 ));
   *(undefined4*)( this + 0x20 ) = *(undefined4*)( param_1 + 0x20 );
   if (*(long*)( this + 0x28 ) != *(long*)( param_1 + 0x28 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x28 ), (CowData*)( param_1 + 0x28 ));
   }

   plVar6 = *(long**)( this + 0x40 );
   *(undefined4*)( this + 0x30 ) = *(undefined4*)( param_1 + 0x30 );
   *(undefined4*)( this + 0x38 ) = *(undefined4*)( param_1 + 0x38 );
   *(undefined4*)( this + 0x3c ) = *(undefined4*)( param_1 + 0x3c );
   if (plVar6 != (long*)0x0) {
      do {
         pvVar1 = (void*)*plVar6;
         if (pvVar1 == (void*)0x0) goto LAB_00106dc0;
         if (*(long**)( (long)pvVar1 + 0x40 ) == plVar6) {
            lVar2 = *(long*)( (long)pvVar1 + 0x30 );
            lVar5 = *(long*)( (long)pvVar1 + 0x38 );
            *plVar6 = lVar2;
            if (pvVar1 == (void*)plVar6[1]) {
               plVar6[1] = lVar5;
            }

            if (lVar5 != 0) {
               *(long*)( lVar5 + 0x30 ) = lVar2;
               lVar2 = *(long*)( (long)pvVar1 + 0x30 );
            }

            if (lVar2 != 0) {
               *(long*)( lVar2 + 0x38 ) = lVar5;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 0x20 ));
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar1 + 0x10 ) != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 8 ));
            Memory::free_static(pvVar1, false);
            *(int*)( plVar6 + 2 ) = (int)plVar6[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar6 = *(long**)( this + 0x40 );
      }
 while ( (int)plVar6[2] != 0 );
      Memory::free_static(plVar6, false);
      *(undefined8*)( this + 0x40 ) = 0;
   }

   plVar6 = (long*)0x0;
   LAB_00106dc0:if (( *(undefined8**)( param_1 + 0x40 ) != (undefined8*)0x0 ) && ( puVar7 = (undefined4*)**(undefined8**)( param_1 + 0x40 ) ),puVar7 != (undefined4*)0x0) {
      if (plVar6 == (long*)0x0) {
         pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])( this + 0x40 ) = pauVar3;
         *(undefined4*)pauVar3[1] = 0;
         *pauVar3 = (undefined1[16])0x0;
      }

      do {
         while (true) {
            puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
            *(undefined8*)( puVar4 + 8 ) = 0;
            *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
            lVar2 = *(long*)( puVar7 + 2 );
            *puVar4 = 0;
            puVar4[6] = 0;
            puVar4[10] = 6;
            *(undefined8*)( puVar4 + 0x10 ) = 0;
            *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
            *puVar4 = *puVar7;
            if (lVar2 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)( puVar7 + 2 ));
            }

            StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)( puVar7 + 4 ));
            puVar4[6] = puVar7[6];
            if (*(long*)( puVar4 + 8 ) != *(long*)( puVar7 + 8 )) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)( puVar7 + 8 ));
            }

            puVar4[10] = puVar7[10];
            plVar6 = *(long**)( this + 0x40 );
            lVar2 = plVar6[1];
            *(undefined8*)( puVar4 + 0xc ) = 0;
            *(long**)( puVar4 + 0x10 ) = plVar6;
            *(long*)( puVar4 + 0xe ) = lVar2;
            if (lVar2 != 0) {
               *(undefined4**)( lVar2 + 0x30 ) = puVar4;
            }

            plVar6[1] = (long)puVar4;
            if (*plVar6 == 0) break;
            puVar7 = *(undefined4**)( puVar7 + 0xc );
            *(int*)( plVar6 + 2 ) = (int)plVar6[2] + 1;
            if (puVar7 == (undefined4*)0x0) goto LAB_00106eee;
         }
;
         puVar7 = *(undefined4**)( puVar7 + 0xc );
         *(int*)( plVar6 + 2 ) = (int)plVar6[2] + 1;
         *plVar6 = (long)puVar4;
      }
 while ( puVar7 != (undefined4*)0x0 );
   }

   LAB_00106eee:if (*(long*)( this + 0x50 ) != *(long*)( param_1 + 0x50 )) {
      CowData<Variant>::_unref((CowData<Variant>*)( this + 0x50 ));
      if (*(long*)( param_1 + 0x50 ) != 0) {
         plVar6 = (long*)( *(long*)( param_1 + 0x50 ) + -0x10 );
         do {
            lVar2 = *plVar6;
            if (lVar2 == 0) goto LAB_00106f32;
            LOCK();
            lVar5 = *plVar6;
            bVar8 = lVar2 == lVar5;
            if (bVar8) {
               *plVar6 = lVar2 + 1;
               lVar5 = lVar2;
            }

            UNLOCK();
         }
 while ( !bVar8 );
         if (lVar5 != -1) {
            *(undefined8*)( this + 0x50 ) = *(undefined8*)( param_1 + 0x50 );
         }

      }

   }

   LAB_00106f32:lVar2 = *(long*)( param_1 + 0x68 );
   *(undefined4*)( this + 0x58 ) = *(undefined4*)( param_1 + 0x58 );
   lVar5 = *(long*)( this + 0x68 );
   if (lVar5 != lVar2) {
      if (lVar5 != 0) {
         LOCK();
         plVar6 = (long*)( lVar5 + -0x10 );
         *plVar6 = *plVar6 + -1;
         UNLOCK();
         if (*plVar6 == 0) {
            lVar2 = *(long*)( this + 0x68 );
            *(undefined8*)( this + 0x68 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            lVar2 = *(long*)( param_1 + 0x68 );
         }
 else {
            *(undefined8*)( this + 0x68 ) = 0;
            lVar2 = *(long*)( param_1 + 0x68 );
         }

      }

      if (lVar2 != 0) {
         plVar6 = (long*)( lVar2 + -0x10 );
         do {
            lVar2 = *plVar6;
            if (lVar2 == 0) {
               return;
            }

            LOCK();
            lVar5 = *plVar6;
            bVar8 = lVar2 == lVar5;
            if (bVar8) {
               *plVar6 = lVar2 + 1;
               lVar5 = lVar2;
            }

            UNLOCK();
         }
 while ( !bVar8 );
         if (lVar5 != -1) {
            *(undefined8*)( this + 0x68 ) = *(undefined8*)( param_1 + 0x68 );
         }

      }

   }

   return;
}
/* CowData<Variant>::_copy_on_write() [clone .isra.0] */void CowData<Variant>::_copy_on_write(CowData<Variant> *this) {
   Variant *this_00;
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   long lVar4;
   Variant *pVVar5;
   ulong uVar6;
   long lVar7;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar6 = 0x10;
   if (lVar1 * 0x18 != 0) {
      uVar6 = lVar1 * 0x18 - 1;
      uVar6 = uVar6 | uVar6 >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      uVar6 = ( uVar6 | uVar6 >> 0x20 ) + 0x11;
   }

   puVar3 = (undefined8*)Memory::alloc_static(uVar6, false);
   if (puVar3 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   lVar4 = 0;
   lVar7 = 0;
   *puVar3 = 1;
   puVar3[1] = lVar1;
   if (lVar1 != 0) {
      do {
         this_00 = (Variant*)( (long)( puVar3 + 2 ) + lVar4 );
         lVar7 = lVar7 + 1;
         pVVar5 = (Variant*)( *(long*)this + lVar4 );
         lVar4 = lVar4 + 0x18;
         Variant::Variant(this_00, pVVar5);
      }
 while ( lVar1 != lVar7 );
   }

   _unref(this);
   *(undefined8**)this = puVar3 + 2;
   return;
}
/* GDScriptLanguage::get_public_annotations(List<MethodInfo, DefaultAllocator>*) const */void GDScriptLanguage::get_public_annotations(GDScriptLanguage *this, List *param_1) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   MethodInfo *this_00;
   MethodInfo *pMVar4;
   long in_FS_OFFSET;
   long *local_a70;
   GDScriptParser local_a68[2600];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   GDScriptParser::GDScriptParser(local_a68);
   local_a70 = (long*)0x0;
   GDScriptParser::get_annotation_list((List*)local_a68);
   if (( local_a70 != (long*)0x0 ) && ( pMVar4 = (MethodInfo*)*local_a70 ),pMVar4 != (MethodInfo*)0x0) {
      if (*(long*)param_1 == 0) {
         pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])param_1 = pauVar3;
         *(undefined4*)pauVar3[1] = 0;
         *pauVar3 = (undefined1[16])0x0;
      }

      do {
         while (true) {
            this_00 = (MethodInfo*)operator_new(0x88, DefaultAllocator::alloc);
            *(undefined8*)this_00 = 0;
            *(undefined4*)( this_00 + 8 ) = 0;
            *(undefined4*)( this_00 + 0x20 ) = 0;
            *(undefined8*)( this_00 + 0x28 ) = 0;
            *(undefined4*)( this_00 + 0x30 ) = 6;
            *(undefined8*)( this_00 + 0x38 ) = 1;
            *(undefined8*)( this_00 + 0x40 ) = 0;
            *(undefined8*)( this_00 + 0x50 ) = 0;
            *(undefined4*)( this_00 + 0x58 ) = 0;
            *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( this_00 + 0x68 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( this_00 + 0x78 ) = (undefined1[16])0x0;
            MethodInfo::operator =(this_00, pMVar4);
            plVar1 = *(long**)param_1;
            lVar2 = plVar1[1];
            *(undefined8*)( this_00 + 0x70 ) = 0;
            *(long**)( this_00 + 0x80 ) = plVar1;
            *(long*)( this_00 + 0x78 ) = lVar2;
            if (lVar2 != 0) {
               *(MethodInfo**)( lVar2 + 0x70 ) = this_00;
            }

            plVar1[1] = (long)this_00;
            if (*plVar1 == 0) break;
            pMVar4 = *(MethodInfo**)( pMVar4 + 0x70 );
            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
            if (pMVar4 == (MethodInfo*)0x0) goto LAB_00107275;
         }
;
         pMVar4 = *(MethodInfo**)( pMVar4 + 0x70 );
         *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
         *plVar1 = (long)this_00;
      }
 while ( pMVar4 != (MethodInfo*)0x0 );
   }

   LAB_00107275:List<MethodInfo,DefaultAllocator>::~List((List<MethodInfo,DefaultAllocator>*)&local_a70);
   GDScriptParser::~GDScriptParser(local_a68);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptLanguage::find_function(String const&, String const&) const */ulong GDScriptLanguage::find_function(String *param_1, String *param_2) {
   long *plVar1;
   char *__s;
   long lVar2;
   char cVar3;
   long lVar4;
   int iVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   undefined8 local_278;
   long local_270;
   char *local_268;
   size_t local_260;
   int local_258;
   int local_250;
   undefined8 local_248;
   undefined8 uStack_240;
   ulong local_238;
   undefined8 uStack_230;
   undefined8 local_228;
   undefined8 local_220;
   long local_218;
   int local_208;
   int local_200;
   undefined8 local_1f8;
   undefined8 uStack_1f0;
   ulong local_1e8;
   undefined8 uStack_1e0;
   undefined8 local_1d8;
   undefined8 local_1d0;
   long local_1c8;
   GDScriptTokenizerText local_1b8[376];
   long local_40;
   iVar5 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   GDScriptTokenizerText::GDScriptTokenizerText(local_1b8);
   GDScriptTokenizerText::set_source_code((String*)local_1b8);
   GDScriptTokenizerText::scan();
   joined_r0x00108060:if (1 < local_258 - 0x61U) {
      do {
         if (local_258 == 0x58) {
            iVar5 = iVar5 + 1;
         }
 else if (local_258 == 0x59) {
            iVar5 = iVar5 + -1;
         }
 else if (( iVar5 == 0 ) && ( local_258 == 0x3c )) {
            GDScriptTokenizerText::scan();
            local_258 = local_208;
            if (( &Variant::needs_deinit )[local_250] != '\0') {
               Variant::_clear_internal();
            }

            lVar4 = local_1c8;
            local_250 = local_200;
            lVar2 = local_218;
            local_200 = 0;
            local_248 = local_1f8;
            uStack_240 = uStack_1f0;
            local_228 = local_1d8;
            local_238 = local_1e8;
            uStack_230 = uStack_1e0;
            local_220 = local_1d0;
            if (local_218 == local_1c8) {
               if (local_218 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_218 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_1c8 = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

                  if (( &Variant::needs_deinit )[local_200] != '\0') goto LAB_00108382;
               }

               LAB_00108164:cVar3 = GDScriptTokenizer::Token::is_identifier();
            }
 else {
               lVar4 = 0;
               if (local_218 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_218 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_218 = 0;
                     Memory::free_static((void*)( lVar2 + -0x10 ), false);
                  }

                  lVar4 = (long)local_200;
               }

               local_218 = local_1c8;
               if (( &Variant::needs_deinit )[lVar4] == '\0') goto LAB_00108164;
               LAB_00108382:Variant::_clear_internal();
               cVar3 = GDScriptTokenizer::Token::is_identifier();
            }

            if (cVar3 != '\0') {
               Variant::operator_cast_to_StringName((Variant*)&local_270);
               if (local_270 == 0) {
                  local_278 = 0;
               }
 else {
                  __s = *(char**)( local_270 + 8 );
                  local_278 = 0;
                  if (__s == (char*)0x0) {
                     if (*(long*)( local_270 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_278, (CowData*)( local_270 + 0x10 ));
                        goto LAB_001083ff;
                     }

                     if (StringName::configured == '\0') goto LAB_0010841a;
                  }
 else {
                     local_260 = strlen(__s);
                     local_268 = __s;
                     String::parse_latin1((StrRange*)&local_278);
                     LAB_001083ff:if (( StringName::configured == '\0' ) || ( local_270 == 0 )) goto LAB_0010841a;
                  }

                  StringName::unref();
               }

               LAB_0010841a:cVar3 = String::operator ==((String*)&local_278, param_2);
               if (cVar3 != '\0') {
                  uVar6 = local_238 & 0xffffffff;
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_278);
                  goto LAB_001082cd;
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_278);
            }

         }

         GDScriptTokenizerText::scan();
         local_258 = local_208;
         if (( &Variant::needs_deinit )[local_250] != '\0') {
            Variant::_clear_internal();
         }

         lVar4 = local_1c8;
         local_250 = local_200;
         lVar2 = local_218;
         local_200 = 0;
         local_248 = local_1f8;
         uStack_240 = uStack_1f0;
         local_228 = local_1d8;
         local_238 = local_1e8;
         uStack_230 = uStack_1e0;
         local_220 = local_1d0;
         if (local_218 == local_1c8) {
            if (local_218 == 0) goto joined_r0x00108060;
            LOCK();
            plVar1 = (long*)( local_218 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_1c8 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

            cVar3 = ( &Variant::needs_deinit )[local_200];
         }
 else {
            lVar4 = 0;
            if (local_218 != 0) {
               LOCK();
               plVar1 = (long*)( local_218 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_218 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }

               lVar4 = (long)local_200;
            }

            cVar3 = ( &Variant::needs_deinit )[lVar4];
            local_218 = local_1c8;
         }

         if (cVar3 == '\0') goto joined_r0x00108060;
         Variant::_clear_internal();
         if (local_258 - 0x61U < 2) break;
      }
 while ( true );
   }

   uVar6 = 0xffffffff;
   LAB_001082cd:lVar2 = local_218;
   if (local_218 != 0) {
      LOCK();
      plVar1 = (long*)( local_218 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_218 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         cVar3 = ( &Variant::needs_deinit )[local_250];
         goto joined_r0x001082ef;
      }

   }

   cVar3 = ( &Variant::needs_deinit )[local_250];
   joined_r0x001082ef:if (cVar3 != '\0') {
      Variant::_clear_internal();
   }

   GDScriptTokenizerText::~GDScriptTokenizerText(local_1b8);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
}
/* CowData<String>::_copy_on_write() [clone .isra.0] */void CowData<String>::_copy_on_write(CowData<String> *this) {
   CowData *pCVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   long lVar6;
   ulong uVar7;
   CowData<char32_t> *this_00;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar2 * 8 != 0) {
      uVar7 = lVar2 * 8 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }

   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 != (undefined8*)0x0) {
      lVar6 = 0;
      *puVar5 = 1;
      puVar5[1] = lVar2;
      this_00 = (CowData<char32_t>*)( puVar5 + 2 );
      if (lVar2 != 0) {
         do {
            lVar3 = *(long*)this;
            *(undefined8*)this_00 = 0;
            pCVar1 = (CowData*)( lVar3 + lVar6 * 8 );
            if (*(long*)pCVar1 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar1);
            }

            lVar6 = lVar6 + 1;
            this_00 = this_00 + 8;
         }
 while ( lVar2 != lVar6 );
      }

      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar5 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* GDScriptLanguage::auto_indent_code(String&, int, int) const */void GDScriptLanguage::auto_indent_code(GDScriptLanguage *this, String *param_1, int param_2, int param_3) {
   undefined1(*pauVar1)[16];
   void *pvVar2;
   long lVar3;
   code *pcVar4;
   char cVar5;
   long lVar6;
   int *piVar7;
   ulong uVar8;
   ulong uVar9;
   int iVar10;
   long lVar11;
   int iVar12;
   ulong uVar13;
   long in_FS_OFFSET;
   undefined1(*local_b0)[16];
   CowData<char32_t> local_80[8];
   long local_78;
   long local_70;
   CowData<char32_t> local_68[8];
   long local_60;
   char local_58[8];
   undefined1(*local_50[2])[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *(long*)this + 0x330 ) )(local_80, this);
   String::split(local_58, SUB81(param_1, 0), 0x12407f);
   local_b0 = local_50[0];
   if (local_50[0] != (undefined1(*) [16])0x0) {
      local_b0 = (undefined1(*) [16])0x0;
      lVar11 = 0;
      do {
         if (*(long*)( local_50[0][-1] + 8 ) <= lVar11) break;
         local_78 = 0;
         if (( *(long*)( *local_50[0] + lVar11 * 8 ) == 0 ) || ( CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)( *local_50[0] + lVar11 * 8 )),local_78 == 0 )) {
            LAB_00108700:iVar12 = 0;
         }
 else {
            uVar8 = *(ulong*)( local_78 + -8 );
            if ((int)uVar8 == 0) goto LAB_00108700;
            uVar9 = 0;
            uVar13 = 0;
            while (( iVar12 = (int)uVar13 ),(int)uVar9 < (int)uVar8 + -1 && ( uVar9 != uVar8 )) {
               if ((long)uVar8 <= (long)uVar9) goto LAB_00108893;
               iVar10 = *(int*)( local_78 + uVar9 * 4 );
               if (( iVar10 != 0x20 ) && ( iVar10 != 9 )) break;
               uVar9 = uVar9 + 1;
               uVar13 = uVar9 & 0xffffffff;
            }
;
         }

         String::substr((int)(CowData<char32_t>*)&local_60, (int)(CowData<char32_t>*)&local_78);
         String::strip_edges(SUB81((CowData<char32_t>*)&local_70, 0), SUB81((CowData<char32_t>*)&local_60, 0));
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( ( local_70 != 0 ) && ( 1 < *(uint*)( local_70 + -8 ) ) ) && ( cVar5 = String::begins_with((char*)&local_70) ),cVar5 == '\0') {
            iVar10 = (int)lVar11;
            if (local_b0 == (undefined1(*) [16])0x0) {
               if (iVar12 != 0) {
                  local_b0 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined4*)local_b0[1] = 0;
                  *local_b0 = (undefined1[16])0x0;
                  goto LAB_00108b20;
               }

               joined_r0x00108af2:if (param_2 <= iVar10) {
                  local_b0 = (undefined1(*) [16])0x0;
                  goto LAB_00108a45;
               }

               local_b0 = (undefined1(*) [16])0x0;
               LAB_001089a0:if (param_3 < iVar10) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
                  break;
               }

            }
 else {
               if (*(int*)local_b0[1] == 0) {
                  if (iVar12 != 0) goto LAB_00108b20;
               }
 else if (**(int**)( *local_b0 + 8 ) < iVar12) {
                  LAB_00108b20:piVar7 = (int*)operator_new(0x20, DefaultAllocator::alloc);
                  piVar7[2] = 0;
                  piVar7[3] = 0;
                  lVar6 = *(long*)( *local_b0 + 8 );
                  *piVar7 = iVar12;
                  *(undefined1(**) [16])( piVar7 + 6 ) = local_b0;
                  *(long*)( piVar7 + 4 ) = lVar6;
                  if (lVar6 != 0) {
                     *(int**)( lVar6 + 8 ) = piVar7;
                  }

                  lVar6 = *(long*)*local_b0;
                  *(int**)( *local_b0 + 8 ) = piVar7;
                  if (lVar6 == 0) {
                     *(int**)*local_b0 = piVar7;
                  }

                  *(int*)local_b0[1] = *(int*)local_b0[1] + 1;
               }
 else if (iVar12 < **(int**)( *local_b0 + 8 )) {
                  do {
                     while (true) {
                        if (*(int*)local_b0[1] == 0) goto joined_r0x00108c1a;
                        piVar7 = *(int**)( *local_b0 + 8 );
                        if (*piVar7 <= iVar12) {
                           if (*piVar7 != iVar12) goto LAB_00108b20;
                           goto joined_r0x00108c1a;
                        }

                        if (local_b0 != *(undefined1(**) [16])( piVar7 + 6 )) break;
                        lVar6 = *(long*)( piVar7 + 2 );
                        if (piVar7 == *(int**)*local_b0) {
                           *(long*)*local_b0 = lVar6;
                        }

                        lVar3 = *(long*)( piVar7 + 4 );
                        *(long*)( *local_b0 + 8 ) = lVar3;
                        if (lVar3 != 0) {
                           *(long*)( lVar3 + 8 ) = lVar6;
                           lVar6 = *(long*)( piVar7 + 2 );
                        }

                        if (lVar6 != 0) {
                           *(long*)( lVar6 + 0x10 ) = lVar3;
                        }

                        Memory::free_static(piVar7, false);
                        pauVar1 = local_b0 + 1;
                        *(int*)*pauVar1 = *(int*)*pauVar1 + -1;
                        if (*(int*)*pauVar1 == 0) goto LAB_00108975;
                     }
;
                     _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                  }
 while ( *(int*)local_b0[1] != 0 );
                  LAB_00108975:Memory::free_static(local_b0, false);
                  goto joined_r0x00108af2;
               }

               joined_r0x00108c1a:if (iVar10 < param_2) goto LAB_001089a0;
               LAB_00108a45:String::repeat((int)local_68);
               String::operator +((String*)&local_60, (String*)local_68);
               if (local_78 != local_60) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
                  local_78 = local_60;
                  local_60 = 0;
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               CowData<char32_t>::_unref(local_68);
            }

            if (local_50[0] == (undefined1(*) [16])0x0) {
               lVar6 = 0;
               LAB_00108bc9:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar11, lVar6, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }

            lVar6 = *(long*)( local_50[0][-1] + 8 );
            if (lVar6 <= lVar11) goto LAB_00108bc9;
            CowData<String>::_copy_on_write((CowData<String>*)local_50);
            if (*(long*)( *local_50[0] + lVar11 * 8 ) != local_78) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( *local_50[0] + lVar11 * 8 ), (CowData*)&local_78);
            }

         }

         lVar11 = lVar11 + 1;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      }
 while ( local_50[0] != (undefined1(*) [16])0x0 );
   }

   String::parse_latin1(param_1, "");
   for (uVar9 = 0; ( local_50[0] != (undefined1(*) [16])0x0 && ( (long)uVar9 < *(long*)( local_50[0][-1] + 8 ) ) ); uVar9 = uVar9 + 1) {
      if (uVar9 != 0) {
         String::operator +=(param_1, "\n");
      }

      if (local_50[0] == (undefined1(*) [16])0x0) {
         uVar8 = 0;
         LAB_00108893:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar9, uVar8, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }

      uVar8 = *(ulong*)( local_50[0][-1] + 8 );
      if ((long)uVar8 <= (long)uVar9) goto LAB_00108893;
      String::operator +=(param_1, (String*)( *local_50[0] + uVar9 * 8 ));
   }

   if (local_b0 != (undefined1(*) [16])0x0) {
      do {
         while (true) {
            pvVar2 = *(void**)*local_b0;
            if (pvVar2 == (void*)0x0) {
               if (*(int*)local_b0[1] != 0) {
                  _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                  goto LAB_001087fa;
               }

               goto LAB_001087f0;
            }

            if (local_b0 != *(undefined1(**) [16])( (long)pvVar2 + 0x18 )) break;
            lVar11 = *(long*)( (long)pvVar2 + 8 );
            lVar6 = *(long*)( (long)pvVar2 + 0x10 );
            *(long*)*local_b0 = lVar11;
            if (pvVar2 == *(void**)( *local_b0 + 8 )) {
               *(long*)( *local_b0 + 8 ) = lVar6;
            }

            if (lVar6 != 0) {
               *(long*)( lVar6 + 8 ) = lVar11;
               lVar11 = *(long*)( (long)pvVar2 + 8 );
            }

            if (lVar11 != 0) {
               *(long*)( lVar11 + 0x10 ) = lVar6;
            }

            Memory::free_static(pvVar2, false);
            pauVar1 = local_b0 + 1;
            *(int*)*pauVar1 = *(int*)*pauVar1 + -1;
            if (*(int*)*pauVar1 == 0) goto LAB_001087f0;
         }
;
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }
 while ( *(int*)local_b0[1] != 0 );
      LAB_001087f0:Memory::free_static(local_b0, false);
   }

   LAB_001087fa:CowData<String>::_unref((CowData<String>*)local_50);
   CowData<char32_t>::_unref(local_80);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptLanguage::debug_parse_stack_level_expression(int, String const&, int, int) */undefined8 *GDScriptLanguage::debug_parse_stack_level_expression(int param_1, String *param_2, int param_3, int param_4) {
   long *plVar1;
   CowData<char32_t> *this;
   int iVar2;
   long lVar3;
   long *plVar4;
   undefined4 in_register_0000000c;
   undefined4 in_register_0000003c;
   long lVar5;
   long lVar6;
   long in_FS_OFFSET;
   bool bVar7;
   long *local_270;
   long *local_268;
   long local_260[2];
   long local_250;
   int local_248[8];
   code *local_228[49];
   undefined8 local_a0;
   undefined4 local_98;
   undefined8 local_90;
   undefined1 local_88;
   undefined4 local_84;
   undefined1 local_80;
   undefined8 local_78;
   undefined1 local_70;
   undefined1 local_68[16];
   undefined8 local_50;
   undefined1 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_270 = (long*)0x0;
   local_268 = (long*)0x0;
   ( **(code**)( *(long*)param_2 + 0x288 ) )(param_2, param_3, (List<String,DefaultAllocator>*)&local_270);
   local_250 = 0;
   if (( local_270 != (long*)0x0 ) && ( plVar4 = (long*)*local_270 ),plVar4 != (long*)0x0) {
      do {
         local_260[0] = 0;
         lVar6 = *plVar4;
         if (lVar6 == 0) {
            LAB_00108d98:lVar3 = lVar6;
            if (local_250 == 0) goto LAB_00108e6e;
            LAB_00108da6:iVar2 = CowData<String>::resize<false>((CowData<String>*)&local_250, *(long*)( local_250 + -8 ) + 1);
            lVar3 = lVar6;
            if (iVar2 == 0) goto LAB_00108dbe;
            LAB_00108e88:_err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
            lVar6 = lVar3;
         }
 else {
            plVar1 = (long*)( lVar6 + -0x10 );
            do {
               lVar6 = *plVar1;
               if (lVar6 == 0) goto LAB_00108e5b;
               LOCK();
               lVar3 = *plVar1;
               bVar7 = lVar6 == lVar3;
               if (bVar7) {
                  *plVar1 = lVar6 + 1;
                  lVar3 = lVar6;
               }

               UNLOCK();
            }
 while ( !bVar7 );
            if (lVar3 != -1) {
               lVar6 = *plVar4;
               local_260[0] = lVar6;
               goto LAB_00108d98;
            }

            LAB_00108e5b:lVar6 = local_260[0];
            lVar3 = 0;
            if (local_250 != 0) goto LAB_00108da6;
            LAB_00108e6e:iVar2 = CowData<String>::resize<false>((CowData<String>*)&local_250, 1);
            lVar6 = lVar3;
            if (iVar2 != 0) goto LAB_00108e88;
            LAB_00108dbe:if (local_250 == 0) {
               lVar5 = -1;
               lVar3 = 0;
               LAB_0010906a:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar5, lVar3, "p_index", "size()", "", false, false);
            }
 else {
               lVar3 = *(long*)( local_250 + -8 );
               lVar5 = lVar3 + -1;
               if (lVar5 < 0) goto LAB_0010906a;
               CowData<String>::_copy_on_write((CowData<String>*)&local_250);
               this(CowData<char32_t> * )(local_250 + lVar5 * 8);
               if (lVar6 != *(long*)this) {
                  CowData<char32_t>::_ref(this, (CowData*)local_260);
               }

            }

         }

         if (lVar6 != 0) {
            LOCK();
            plVar1 = (long*)( lVar6 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_260[0] + -0x10 ), false);
            }

         }

         plVar4 = (long*)plVar4[1];
      }
 while ( plVar4 != (long*)0x0 );
   }

   Array::Array((Array*)local_260);
   if (local_268 != (long*)0x0) {
      for (lVar6 = *local_268; lVar6 != 0; lVar6 = *(long*)( lVar6 + 0x18 )) {
         Array::push_back((Variant*)local_260);
      }

   }

   RefCounted::RefCounted((RefCounted*)local_228);
   local_a0 = 0;
   local_228[0] = Expression::execute;
   local_98 = 0;
   local_90 = 0;
   local_88 = 0;
   local_84 = 0;
   local_80 = 0;
   local_78 = 0;
   local_70 = 1;
   local_50 = 0;
   local_48 = 0;
   local_68 = (undefined1[16])0x0;
   iVar2 = Expression::parse((String*)local_228, (Vector*)CONCAT44(in_register_0000000c, param_4));
   if (( iVar2 == 0 ) && ( plVar4 = (long*)( **(code**)( *(long*)param_2 + 0x298 ) )(param_2, param_3) ),plVar4 != (long*)0x0) {
      bVar7 = (bool)( **(code**)( *plVar4 + 0x38 ) )(plVar4);
      Expression::execute((Array*)local_248, (Object*)local_228, SUB81((Array*)local_260, 0), bVar7);
      Variant::get_construct_string();
      if (( &Variant::needs_deinit )[local_248[0]] != '\0') {
         Variant::_clear_internal();
      }

   }
 else {
      *(undefined8*)CONCAT44(in_register_0000003c, param_1) = 0;
   }

   Expression::~Expression((Expression*)local_228);
   Array::~Array((Array*)local_260);
   CowData<String>::_unref((CowData<String>*)&local_250);
   List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator>*)&local_268);
   List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_270);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (undefined8*)CONCAT44(in_register_0000003c, param_1);
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptLanguage::get_public_functions(List<MethodInfo, DefaultAllocator>*) const */void GDScriptLanguage::get_public_functions(GDScriptLanguage *this, List *param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int iVar5;
   MethodInfo *pMVar6;
   undefined1(*pauVar7)[16];
   long lVar8;
   long lVar9;
   long in_FS_OFFSET;
   CowData<Variant> *local_168;
   CowData<char32_t> *local_158;
   long *local_120;
   long local_118;
   long local_110;
   long local_108;
   long local_100;
   char *local_f8;
   long local_f0;
   long local_e8;
   int local_e0;
   long local_d8;
   undefined4 local_d0;
   long local_c8;
   ulong local_c0;
   undefined1 local_b8[16];
   undefined8 local_a8;
   long local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88[2];
   long local_78[3];
   long local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_120 = (long*)0x0;
   GDScriptUtilityFunctions::get_function_list((List*)&local_120);
   if (( local_120 != (long*)0x0 ) && ( lVar9 = lVar9 != 0 )) {
      do {
         GDScriptUtilityFunctions::get_function_info((StringName*)&local_c8);
         if (*(long*)param_1 == 0) {
            pauVar7 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])param_1 = pauVar7;
            *(undefined4*)pauVar7[1] = 0;
            *pauVar7 = (undefined1[16])0x0;
         }

         pMVar6 = (MethodInfo*)operator_new(0x88, DefaultAllocator::alloc);
         *(undefined8*)pMVar6 = 0;
         *(undefined4*)( pMVar6 + 8 ) = 0;
         *(undefined4*)( pMVar6 + 0x20 ) = 0;
         *(undefined8*)( pMVar6 + 0x28 ) = 0;
         *(undefined4*)( pMVar6 + 0x30 ) = 6;
         *(undefined8*)( pMVar6 + 0x38 ) = 1;
         *(undefined8*)( pMVar6 + 0x40 ) = 0;
         *(undefined8*)( pMVar6 + 0x50 ) = 0;
         *(undefined4*)( pMVar6 + 0x58 ) = 0;
         *(undefined1(*) [16])( pMVar6 + 0x10 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( pMVar6 + 0x68 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( pMVar6 + 0x78 ) = (undefined1[16])0x0;
         MethodInfo::operator =(pMVar6, (MethodInfo*)&local_c8);
         lVar4 = local_60;
         plVar1 = *(long**)param_1;
         lVar8 = plVar1[1];
         *(undefined8*)( pMVar6 + 0x70 ) = 0;
         *(long**)( pMVar6 + 0x80 ) = plVar1;
         *(long*)( pMVar6 + 0x78 ) = lVar8;
         if (lVar8 != 0) {
            *(MethodInfo**)( lVar8 + 0x70 ) = pMVar6;
         }

         plVar1[1] = (long)pMVar6;
         if (*plVar1 == 0) {
            *plVar1 = (long)pMVar6;
         }

         *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         CowData<Variant>::_unref((CowData<Variant>*)local_78);
         List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_88);
         lVar8 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar1 = (long*)( local_a0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_b8._8_8_ != 0 )) {
            StringName::unref();
         }

         uVar3 = local_b8._0_8_;
         if (local_b8._0_8_ != 0) {
            LOCK();
            plVar1 = (long*)( local_b8._0_8_ + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               auVar2._8_8_ = 0;
               auVar2._0_8_ = local_b8._8_8_;
               local_b8 = auVar2 << 0x40;
               Memory::free_static((void*)( uVar3 + -0x10 ), false);
            }

         }

         lVar8 = local_c8;
         if (local_c8 != 0) {
            LOCK();
            plVar1 = (long*)( local_c8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_c8 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }

         }

         lVar9 = *(long*)( lVar9 + 8 );
      }
 while ( lVar9 != 0 );
   }

   local_168 = (CowData<Variant>*)local_78;
   local_b8._0_8_ = 0;
   local_b8._8_8_ = 0;
   local_f8 = "preload";
   local_c8 = 0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78[0] = 0;
   local_78[1] = 0;
   local_60 = 0;
   local_f0 = 7;
   String::parse_latin1((StrRange*)&local_c8);
   local_108 = 0;
   local_f8 = "";
   local_110 = 0;
   local_f0 = 0;
   String::parse_latin1((StrRange*)&local_110);
   local_f8 = "path";
   local_118 = 0;
   local_f0 = 4;
   String::parse_latin1((StrRange*)&local_118);
   local_f8 = (char*)CONCAT44(local_f8._4_4_, 4);
   local_f0 = 0;
   if (local_118 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_f0, (CowData*)&local_118);
   }

   local_e8 = 0;
   local_e0 = 0;
   local_d8 = 0;
   if (local_110 == 0) {
      LAB_00109588:local_d0 = 6;
      StringName::operator =((StringName*)&local_e8, (StringName*)&local_108);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_110);
      local_d0 = 6;
      if (local_e0 != 0x11) goto LAB_00109588;
      StringName::StringName((StringName*)&local_100, (String*)&local_d8, false);
      if (local_e8 == local_100) {
         if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_e8 = local_100;
      }

   }

   local_158 = (CowData<char32_t>*)&local_d8;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref(local_158);
   if (( StringName::configured != '\0' ) && ( local_e8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   if (( StringName::configured != '\0' ) && ( local_108 != 0 )) {
      StringName::unref();
   }

   local_108 = 0;
   local_f8 = "Resource";
   local_110 = 0;
   local_f0 = 8;
   String::parse_latin1((StrRange*)&local_110);
   local_118 = 0;
   local_f8 = "";
   local_f0 = 0;
   String::parse_latin1((StrRange*)&local_118);
   local_f8 = (char*)CONCAT44(local_f8._4_4_, 0x18);
   local_f0 = 0;
   if (local_118 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_f0, (CowData*)&local_118);
   }

   local_e8 = 0;
   local_e0 = 0x11;
   local_d8 = 0;
   if (local_110 == 0) {
      LAB_00109fb3:local_d0 = 6;
      StringName::StringName((StringName*)&local_100, (String*)local_158, false);
      if (local_e8 == local_100) {
         if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_e8 = local_100;
      }

   }
 else {
      CowData<char32_t>::_ref(local_158, (CowData*)&local_110);
      local_d0 = 6;
      if (local_e0 == 0x11) goto LAB_00109fb3;
      StringName::operator =((StringName*)&local_e8, (StringName*)&local_108);
   }

   local_c0 = CONCAT44(local_c0._4_4_, local_f8._0_4_);
   if (local_b8._0_8_ != local_f0) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
      local_b8._0_8_ = local_f0;
      local_f0 = 0;
   }

   if (local_b8._8_8_ != local_e8) {
      StringName::unref();
      local_b8._8_8_ = local_e8;
      local_e8 = 0;
   }

   local_a8 = CONCAT44(local_a8._4_4_, local_e0);
   if (local_a0 != local_d8) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      local_a0 = local_d8;
      local_d8 = 0;
   }

   local_98 = CONCAT44(local_98._4_4_, local_d0);
   CowData<char32_t>::_unref(local_158);
   if (( StringName::configured != '\0' ) && ( local_e8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   if (( StringName::configured != '\0' ) && ( local_108 != 0 )) {
      StringName::unref();
   }

   if (*(long*)param_1 == 0) {
      pauVar7 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar7;
      *(undefined4*)pauVar7[1] = 0;
      *pauVar7 = (undefined1[16])0x0;
   }

   pMVar6 = (MethodInfo*)operator_new(0x88, DefaultAllocator::alloc);
   *(undefined8*)pMVar6 = 0;
   *(undefined4*)( pMVar6 + 8 ) = 0;
   *(undefined4*)( pMVar6 + 0x20 ) = 0;
   *(undefined8*)( pMVar6 + 0x28 ) = 0;
   *(undefined4*)( pMVar6 + 0x30 ) = 6;
   *(undefined8*)( pMVar6 + 0x38 ) = 1;
   *(undefined8*)( pMVar6 + 0x40 ) = 0;
   *(undefined8*)( pMVar6 + 0x50 ) = 0;
   *(undefined4*)( pMVar6 + 0x58 ) = 0;
   *(undefined1(*) [16])( pMVar6 + 0x10 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pMVar6 + 0x68 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pMVar6 + 0x78 ) = (undefined1[16])0x0;
   MethodInfo::operator =(pMVar6, (MethodInfo*)&local_c8);
   lVar8 = local_60;
   plVar1 = *(long**)param_1;
   lVar9 = plVar1[1];
   *(undefined8*)( pMVar6 + 0x70 ) = 0;
   *(long**)( pMVar6 + 0x80 ) = plVar1;
   *(long*)( pMVar6 + 0x78 ) = lVar9;
   if (lVar9 != 0) {
      *(MethodInfo**)( lVar9 + 0x70 ) = pMVar6;
   }

   plVar1[1] = (long)pMVar6;
   if (*plVar1 == 0) {
      *plVar1 = (long)pMVar6;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar8 + -0x10 ), false);
      }

   }

   CowData<Variant>::_unref(local_168);
   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_b8._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "assert";
   local_c8 = 0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78[0] = 0;
   local_78[1] = 0;
   local_60 = 0;
   local_f0 = 6;
   String::parse_latin1((StrRange*)&local_c8);
   local_f8 = "";
   local_c0 = local_c0 & 0xffffffff00000000;
   local_108 = 0;
   local_110 = 0;
   local_f0 = 0;
   String::parse_latin1((StrRange*)&local_110);
   local_118 = 0;
   local_f8 = "condition";
   local_f0 = 9;
   String::parse_latin1((StrRange*)&local_118);
   local_f8 = (char*)CONCAT44(local_f8._4_4_, 1);
   local_f0 = 0;
   if (local_118 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_f0, (CowData*)&local_118);
   }

   local_e8 = 0;
   local_e0 = 0;
   local_d8 = 0;
   if (local_110 == 0) {
      LAB_00109b2b:local_d0 = 6;
      StringName::operator =((StringName*)&local_e8, (StringName*)&local_108);
   }
 else {
      CowData<char32_t>::_ref(local_158, (CowData*)&local_110);
      local_d0 = 6;
      if (local_e0 != 0x11) goto LAB_00109b2b;
      StringName::StringName((StringName*)&local_100, (String*)local_158, false);
      if (local_e8 == local_100) {
         if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_e8 = local_100;
      }

   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref(local_158);
   if (( StringName::configured != '\0' ) && ( local_e8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   if (( StringName::configured != '\0' ) && ( local_108 != 0 )) {
      StringName::unref();
   }

   local_108 = 0;
   local_f8 = "";
   local_110 = 0;
   local_f0 = 0;
   String::parse_latin1((StrRange*)&local_110);
   local_118 = 0;
   local_f8 = "message";
   local_f0 = 7;
   String::parse_latin1((StrRange*)&local_118);
   local_f8 = (char*)CONCAT44(local_f8._4_4_, 4);
   local_f0 = 0;
   if (local_118 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_f0, (CowData*)&local_118);
   }

   local_e8 = 0;
   local_e0 = 0;
   local_d8 = 0;
   if (local_110 == 0) {
      LAB_00109cdb:local_d0 = 6;
      StringName::operator =((StringName*)&local_e8, (StringName*)&local_108);
   }
 else {
      CowData<char32_t>::_ref(local_158, (CowData*)&local_110);
      local_d0 = 6;
      if (local_e0 != 0x11) goto LAB_00109cdb;
      StringName::StringName((StringName*)&local_100, (String*)local_158, false);
      if (local_e8 == local_100) {
         if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_e8 = local_100;
      }

   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref(local_158);
   if (( StringName::configured != '\0' ) && ( local_e8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   if (( StringName::configured != '\0' ) && ( local_108 != 0 )) {
      StringName::unref();
   }

   local_f8 = (char*)0x0;
   Variant::Variant((Variant*)local_58, (String*)&local_f8);
   if (local_78[0] == 0) {
      lVar9 = 1;
   }
 else {
      lVar9 = *(long*)( local_78[0] + -8 ) + 1;
   }

   iVar5 = CowData<Variant>::resize<false>(local_168, lVar9);
   if (iVar5 == 0) {
      if (local_78[0] == 0) {
         lVar8 = -1;
         lVar9 = 0;
      }
 else {
         lVar9 = *(long*)( local_78[0] + -8 );
         lVar8 = lVar9 + -1;
         if (-1 < lVar8) {
            CowData<Variant>::_copy_on_write(local_168);
            Variant::operator =((Variant*)( local_78[0] + lVar8 * 0x18 ), (Variant*)local_58);
            goto LAB_00109ded;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar8, lVar9, "p_index", "size()", "", false, false);
   }
 else {
      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   }

   LAB_00109ded:if (( &Variant::needs_deinit )[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   if (*(long*)param_1 == 0) {
      pauVar7 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar7;
      *(undefined4*)pauVar7[1] = 0;
      *pauVar7 = (undefined1[16])0x0;
   }

   pMVar6 = (MethodInfo*)operator_new(0x88, DefaultAllocator::alloc);
   *(undefined8*)pMVar6 = 0;
   *(undefined4*)( pMVar6 + 8 ) = 0;
   *(undefined4*)( pMVar6 + 0x20 ) = 0;
   *(undefined8*)( pMVar6 + 0x28 ) = 0;
   *(undefined4*)( pMVar6 + 0x30 ) = 6;
   *(undefined8*)( pMVar6 + 0x38 ) = 1;
   *(undefined8*)( pMVar6 + 0x40 ) = 0;
   *(undefined8*)( pMVar6 + 0x50 ) = 0;
   *(undefined4*)( pMVar6 + 0x58 ) = 0;
   *(undefined1(*) [16])( pMVar6 + 0x10 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pMVar6 + 0x68 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pMVar6 + 0x78 ) = (undefined1[16])0x0;
   MethodInfo::operator =(pMVar6, (MethodInfo*)&local_c8);
   lVar8 = local_60;
   plVar1 = *(long**)param_1;
   lVar9 = plVar1[1];
   *(undefined8*)( pMVar6 + 0x70 ) = 0;
   *(long**)( pMVar6 + 0x80 ) = plVar1;
   *(long*)( pMVar6 + 0x78 ) = lVar9;
   if (lVar9 != 0) {
      *(MethodInfo**)( lVar9 + 0x70 ) = pMVar6;
   }

   plVar1[1] = (long)pMVar6;
   if (*plVar1 == 0) {
      *plVar1 = (long)pMVar6;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar8 + -0x10 ), false);
      }

   }

   CowData<Variant>::_unref(local_168);
   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_b8._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_120);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<ScriptLanguage::ScriptTemplate>::_copy_on_write() [clone .isra.0] */void CowData<ScriptLanguage::ScriptTemplate>::_copy_on_write(CowData<ScriptLanguage::ScriptTemplate> *this) {
   undefined4 uVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   CowData *pCVar5;
   CowData<char32_t> *this_00;
   ulong uVar6;
   long lVar7;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar6 = 0x10;
   if (lVar2 * 0x28 != 0) {
      uVar6 = lVar2 * 0x28 - 1;
      uVar6 = uVar6 | uVar6 >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      uVar6 = ( uVar6 | uVar6 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar6, false);
   if (puVar4 != (undefined8*)0x0) {
      lVar7 = 0;
      *puVar4 = 1;
      puVar4[1] = lVar2;
      this_00 = (CowData<char32_t>*)( puVar4 + 2 );
      if (lVar2 != 0) {
         do {
            pCVar5 = (CowData*)( this_00 + *(long*)this + ( -0x10 - (long)puVar4 ) );
            *(undefined8*)this_00 = 0;
            if (*(long*)pCVar5 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar5);
            }

            for (int i = 0; i < 3; i++) {
               *(undefined8*)( this_00 + ( 8*i + 8 ) ) = 0;
               if (*(long*)( pCVar5 + ( 8*i + 8 ) ) != 0) {
                  CowData<char32_t>::_ref(this_00 + ( 8*i + 8 ), pCVar5 + ( 8*i + 8 ));
               }

            }

            uVar1 = *(undefined4*)( pCVar5 + 0x24 );
            lVar7 = lVar7 + 1;
            *(undefined4*)( this_00 + 0x20 ) = *(undefined4*)( pCVar5 + 0x20 );
            *(undefined4*)( this_00 + 0x24 ) = uVar1;
            this_00 = this_00 + 0x28;
         }
 while ( lVar2 != lVar7 );
      }

      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar4 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* GDScriptCompletionIdentifier::TEMPNAMEPLACEHOLDERVALUE(GDScriptCompletionIdentifier&&) [clone
   .isra.0] */void GDScriptCompletionIdentifier::operator =(GDScriptCompletionIdentifier *this, GDScriptCompletionIdentifier *param_1) {
   long *plVar1;
   long lVar2;
   undefined8 uVar3;
   long lVar4;
   GDScriptParser::DataType::operator =((DataType*)this, (DataType*)param_1);
   lVar2 = *(long*)( this + 0xf0 );
   lVar4 = *(long*)( param_1 + 0xf0 );
   if (lVar2 != lVar4) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( this + 0xf0 );
            *(undefined8*)( this + 0xf0 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            lVar4 = *(long*)( param_1 + 0xf0 );
         }
 else {
            *(undefined8*)( this + 0xf0 ) = 0;
            lVar4 = *(long*)( param_1 + 0xf0 );
         }

      }

      *(long*)( this + 0xf0 ) = lVar4;
      *(undefined8*)( param_1 + 0xf0 ) = 0;
   }

   if (this + 0xf8 != param_1 + 0xf8) {
      if (( &Variant::needs_deinit )[*(int*)( this + 0xf8 )] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)( this + 0xf8 ) = 0;
      *(undefined4*)( this + 0xf8 ) = *(undefined4*)( param_1 + 0xf8 );
      uVar3 = *(undefined8*)( param_1 + 0x108 );
      *(undefined8*)( this + 0x100 ) = *(undefined8*)( param_1 + 0x100 );
      *(undefined8*)( this + 0x108 ) = uVar3;
      *(undefined4*)( param_1 + 0xf8 ) = 0;
   }

   *(undefined8*)( this + 0x110 ) = *(undefined8*)( param_1 + 0x110 );
   return;
}
/* GDScriptLanguage::lookup_code(String const&, String const&, String const&, Object*,
   ScriptLanguage::LookupResult&) */ulong GDScriptLanguage::lookup_code(GDScriptLanguage *this, String *param_1, String *param_2, String *param_3, Object *param_4, LookupResult *param_5) {
   HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>> *this_00;
   ExpressionNode *pEVar1;
   uint uVar2;
   long *plVar3;
   long lVar4;
   ExpressionNode *pEVar5;
   code *pcVar6;
   Ref *pRVar7;
   SubscriptNode *pSVar8;
   char cVar9;
   int iVar10;
   long lVar11;
   uint *puVar12;
   StringName *pSVar13;
   int *piVar14;
   Object *pOVar15;
   GDScriptNativeClass *pGVar16;
   ExpressionNode *pEVar17;
   ulong uVar18;
   void *pvVar19;
   StringName *this_01;
   ExpressionNode *pEVar20;
   long in_FS_OFFSET;
   Ref *local_e38;
   long local_e30;
   Ref *local_e28;
   Ref *local_e20;
   ulong local_e18;
   undefined8 *puStack_e10;
   undefined8 local_e08;
   StringName *pSStack_e00;
   undefined8 local_df8;
   undefined8 uStack_df0;
   SubscriptNode *local_de8;
   Object *pOStack_de0;
   undefined8 local_dd8;
   GDScriptAnalyzer local_dc8[24];
   List<GDScriptParser::LambdaNode*,DefaultAllocator> local_db0[16];
   void *local_da0;
   void *local_d98;
   undefined1 local_d90[16];
   uint local_d80;
   int local_d7c;
   undefined8 *local_d68[2];
   int local_d58;
   long local_d28[22];
   Ref *local_c78;
   long local_c70;
   undefined4 local_c68;
   undefined1 local_c5e;
   undefined4 local_c58;
   int local_b88[60];
   undefined8 local_a98;
   undefined4 local_a90;
   undefined1 local_a88[16];
   undefined8 local_a78;
   GDScriptParser local_a68[2424];
   uint local_f0;
   undefined8 *puStack_e8;
   undefined8 local_e0;
   StringName *pSStack_d8;
   undefined8 local_d0;
   undefined8 uStack_c8;
   SubscriptNode *local_c0;
   undefined8 local_b0;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_01 = (StringName*)&local_c78;
   StringName::StringName(this_01, param_2, false);
   cVar9 = ClassDB::class_exists(this_01);
   if (( StringName::configured != '\0' ) && ( local_c78 != (Ref*)0x0 )) {
      StringName::unref();
   }

   if (( cVar9 != '\0' ) || ( iVar10 = iVar10 < 0x27 )) {
      *(undefined4*)param_5 = 1;
      if (*(long*)( param_5 + 8 ) != *(long*)param_2) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( param_5 + 8 ), (CowData*)param_2);
      }

      LAB_00113a89:uVar18 = 0;
      goto LAB_00113a8b;
   }

   cVar9 = String::operator ==(param_2, "Variant");
   if (cVar9 != '\0') {
      *(undefined4*)param_5 = 1;
      String::parse_latin1((String*)( param_5 + 8 ), "Variant");
      goto LAB_00113a89;
   }

   cVar9 = String::operator ==(param_2, "PI");
   if (( ( ( cVar9 != '\0' ) || ( cVar9 = String::operator ==(param_2, "TAU") ),cVar9 != '\0' ) ) || ( cVar9 = String::operator ==(param_2, "INF") ),cVar9 != '\0') {
      *(undefined4*)param_5 = 2;
      String::parse_latin1((String*)( param_5 + 8 ), "@GDScript");
      if (*(long*)( param_5 + 0x10 ) != *(long*)param_2) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( param_5 + 0x10 ), (CowData*)param_2);
      }

      goto LAB_00113a89;
   }

   GDScriptParser::GDScriptParser(local_a68);
   GDScriptParser::parse((String*)local_a68, param_1, SUB81(param_3, 0), true);
   local_e18 = (ulong)local_f0;
   local_dd8 = local_b0;
   puStack_e10 = puStack_e8;
   local_e08 = local_e0;
   pSStack_e00 = pSStack_d8;
   local_de8 = local_c0;
   local_df8 = local_d0;
   uStack_df0 = uStack_c8;
   pOStack_de0 = param_4;
   if (local_f0 != 4) {
      StringName::StringName(this_01, param_2, false);
      cVar9 = GDScriptUtilityFunctions::function_exists(this_01);
      if (( ( cVar9 == '\0' ) && ( cVar9 = String::operator ==(param_2, "assert") ),cVar9 == '\0' )) {
         if (( StringName::configured != '\0' ) && ( local_c78 != (Ref*)0x0 )) {
            StringName::unref();
         }

         goto LAB_00113ccd;
      }

      if (( StringName::configured != '\0' ) && ( local_c78 != (Ref*)0x0 )) {
         StringName::unref();
      }

      *(undefined4*)param_5 = 4;
      String::parse_latin1((String*)( param_5 + 8 ), "@GDScript");
      if (*(long*)( param_5 + 0x10 ) != *(long*)param_2) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( param_5 + 0x10 ), (CowData*)param_2);
      }

      uVar18 = 0;
      goto LAB_00113c78;
   }

   LAB_00113ccd:GDScriptAnalyzer::GDScriptAnalyzer(local_dc8, local_a68);
   GDScriptAnalyzer::analyze();
   if (( ( puStack_e10 != (undefined8*)0x0 ) && ( plVar3 = (long*)puStack_e10[0x34] ),plVar3 != (long*)0x0 )) {
      StringName::StringName((StringName*)&local_e20, (StringName*)( *plVar3 + 0x148 ));
      local_e28 = (Ref*)( (ulong)local_e28 & 0xffffffffffffff00 );
      StringName::StringName(this_01, param_2, false);
      ClassDB::get_integer_constant((StringName*)&local_e20, this_01, (bool*)&local_e28);
      if (( StringName::configured != '\0' ) && ( local_c78 != (Ref*)0x0 )) {
         StringName::unref();
      }

      if (local_e28._0_1_ != (String)0x0) {
         *(undefined4*)param_5 = 2;
         if (local_e20 == (Ref*)0x0) {
            local_c78 = (Ref*)0x0;
         }
 else {
            local_c78 = (Ref*)0x0;
            if (*(char**)( local_e20 + 8 ) == (char*)0x0) {
               if (*(long*)( local_e20 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)this_01, (CowData*)( local_e20 + 0x10 ));
               }

            }
 else {
               String::parse_latin1((String*)this_01, *(char**)( local_e20 + 8 ));
            }

         }

         if (*(Ref**)( param_5 + 8 ) != local_c78) {
            CowData<char32_t>::operator =((CowData<char32_t>*)( param_5 + 8 ), (CowData*)this_01);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)this_01);
         if (*(long*)( param_5 + 0x10 ) != *(long*)param_2) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( param_5 + 0x10 ), (CowData*)param_2);
         }

         goto LAB_00113ec1;
      }

      do {
         local_d68[0] = (undefined8*)0x0;
         ClassDB::get_enum_list((StringName*)&local_e20, (List*)local_d68, true);
         if (local_d68[0] != (undefined8*)0x0) {
            for (pSVar13 = (StringName*)*local_d68[0]; pSVar13 != (StringName*)0x0; pSVar13 = *(StringName**)( pSVar13 + 8 )) {
               cVar9 = StringName::operator ==(pSVar13, param_2);
               if (cVar9 != '\0') goto LAB_00113e4c;
            }

         }

         ClassDB::get_parent_class_nocheck(this_01);
         if (local_e20 == local_c78) {
            if (( StringName::configured != '\0' ) && ( local_c78 != (Ref*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_e20 = local_c78;
         }

         List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)local_d68);
      }
 while ( local_e20 != (Ref*)0x0 );
   }

   if (local_de8 != (SubscriptNode*)0x0) {
      lVar11 = __dynamic_cast(local_de8, &GDScriptParser::Node::typeinfo, &GDScriptParser::TypeNode::typeinfo);
      if (( lVar11 != 0 ) && ( plVar3 = *(long**)( lVar11 + 0x130 ) ),plVar3 != (long*)0x0) {
         if (plVar3[-1] < 1) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, plVar3[-1], "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar6 = (code*)invalidInstructionException();
            ( *pcVar6 )();
         }

         StringName::StringName((StringName*)&local_e20, (StringName*)( *plVar3 + 0x148 ));
         cVar9 = ScriptServer::is_global_class((StringName*)&local_e20);
         if (cVar9 != '\0') {
            if (local_e20 == (Ref*)0x0) {
               LAB_00114741:local_d68[0] = (undefined8*)0x0;
            }
 else {
               local_d68[0] = (undefined8*)0x0;
               if (*(char**)( local_e20 + 8 ) == (char*)0x0) {
                  if (*(long*)( local_e20 + 0x10 ) == 0) goto LAB_00114741;
                  CowData<char32_t>::_ref((CowData<char32_t>*)local_d68, (CowData*)( local_e20 + 0x10 ));
               }
 else {
                  String::parse_latin1((String*)local_d68, *(char**)( local_e20 + 8 ));
               }

            }

            ScriptServer::get_global_class_native_base((String*)this_01);
            if (local_e20 == local_c78) {
               if (( StringName::configured != '\0' ) && ( local_c78 != (Ref*)0x0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               local_e20 = local_c78;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)local_d68);
         }

         do {
            local_d68[0] = (undefined8*)0x0;
            ClassDB::get_enum_list((StringName*)&local_e20, (List*)local_d68, true);
            if (local_d68[0] != (undefined8*)0x0) {
               for (pSVar13 = (StringName*)*local_d68[0]; pSVar13 != (StringName*)0x0; pSVar13 = *(StringName**)( pSVar13 + 8 )) {
                  cVar9 = StringName::operator ==(pSVar13, param_2);
                  if (cVar9 != '\0') goto LAB_00113e4c;
               }

            }

            ClassDB::get_parent_class_nocheck(this_01);
            if (local_e20 == local_c78) {
               if (( StringName::configured != '\0' ) && ( local_c78 != (Ref*)0x0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               local_e20 = local_c78;
            }

            List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)local_d68);
         }
 while ( local_e20 != (Ref*)0x0 );
      }

   }

   pSVar8 = local_de8;
   switch ((int)local_e18) {
      case 1:
      operator+((char *)
      this_01,(String*)&_LC160;
      cVar9 = GDScriptParser::annotation_exists((String*)local_a68);
      if (cVar9 == '\0') {
         CowData<char32_t>::_unref((CowData<char32_t>*)this_01);
         break;
      }

      *(undefined4*)param_5 = 8;
      String::parse_latin1((String*)( param_5 + 8 ), "@GDScript");
      if (*(Ref**)( param_5 + 0x10 ) != local_c78) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( param_5 + 0x10 ), (CowData*)this_01);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)this_01);
      goto LAB_00113eda;
      case 3:
      case 7:
      case 9:
      case 0xb:
      case 0xf:
      case 0x11:
      case 0x12:
    GDScriptParser::DataType::DataType((DataType *)local_d68);
    if (puStack_e10 == (undefined8 *)0x0) {
LAB_001144de:
      this_01 = (StringName *)local_d68;
      goto LAB_001142b7;
    }
    if ((int)local_e18 == 0x12) {
      GDScriptParser::DataType::operator=((DataType *)local_d68,(DataType *)(puStack_e10 + 0x35));
      pSVar13 = pSStack_e00;
    }
    else {
      (**(code **)*puStack_e10)(this_01);
      GDScriptParser::DataType::operator=((DataType *)local_d68,(DataType *)this_01);
      GDScriptParser::DataType::~DataType((DataType *)this_01);
      pSVar13 = pSStack_e00;
    }
    for (; pSVar13 != (StringName *)0x0; pSVar13 = *(StringName **)(pSVar13 + 0x128)) {
      StringName::StringName(this_01,param_2,false);
      cVar9 = GDScriptParser::SuiteNode::has_local(pSVar13);
      if ((StringName::configured != '\0') && (local_c78 != (Ref *)0x0)) {
        StringName::unref();
      }
      if (cVar9 != '\0') {
        StringName::StringName(this_01,param_2,false);
        puVar12 = (uint *)GDScriptParser::SuiteNode::get_local(pSVar13);
        if ((StringName::configured != '\0') && (local_c78 != (Ref *)0x0)) {
          StringName::unref();
        }
        uVar2 = *puVar12;
        if (uVar2 == 2) {
          lVar11 = *(long *)(puVar12 + 2);
          *(undefined4 *)param_5 = 10;
          if (*(long *)(param_5 + 0x18) != *(long *)(lVar11 + 0x1a8)) {
            CowData<char32_t>::_ref
                      ((CowData<char32_t> *)(param_5 + 0x18),(CowData *)(lVar11 + 0x1a8));
            lVar11 = *(long *)(puVar12 + 2);
          }
          lVar4 = *(long *)(lVar11 + 0x1b8);
          param_5[0x20] = *(LookupResult *)(lVar11 + 0x1b0);
          if (*(long *)(param_5 + 0x28) != lVar4) {
            CowData<char32_t>::_ref
                      ((CowData<char32_t> *)(param_5 + 0x28),(CowData *)(lVar11 + 0x1b8));
            lVar11 = *(long *)(puVar12 + 2);
          }
          lVar4 = *(long *)(lVar11 + 0x1c8);
          param_5[0x30] = *(LookupResult *)(lVar11 + 0x1c0);
          if (*(long *)(param_5 + 0x38) != lVar4) {
            CowData<char32_t>::_ref
                      ((CowData<char32_t> *)(param_5 + 0x38),(CowData *)(lVar11 + 0x1c8));
            lVar11 = *(long *)(puVar12 + 2);
          }
LAB_001141b4:
          if (*(long *)(lVar11 + 0x130) != 0) {
            GDScriptDocGen::docvalue_from_expression((ExpressionNode *)this_01);
            if (*(Ref **)(param_5 + 0x58) != local_c78) {
              CowData<char32_t>::operator=((CowData<char32_t> *)(param_5 + 0x58),(CowData *)this_01)
              ;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)this_01);
          }
        }
        else {
          if (uVar2 < 3) {
            uVar18 = 0x2f;
            if (uVar2 != 0) {
              lVar11 = *(long *)(puVar12 + 2);
              *(undefined4 *)param_5 = 9;
              if (*(long *)(param_5 + 0x18) != *(long *)(lVar11 + 0x148)) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)(param_5 + 0x18),(CowData *)(lVar11 + 0x148));
                lVar11 = *(long *)(puVar12 + 2);
              }
              lVar4 = *(long *)(lVar11 + 0x158);
              param_5[0x20] = *(LookupResult *)(lVar11 + 0x150);
              if (*(long *)(param_5 + 0x28) != lVar4) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)(param_5 + 0x28),(CowData *)(lVar11 + 0x158));
                lVar11 = *(long *)(puVar12 + 2);
              }
              lVar4 = *(long *)(lVar11 + 0x168);
              param_5[0x30] = *(LookupResult *)(lVar11 + 0x160);
              if (*(long *)(param_5 + 0x38) != lVar4) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)(param_5 + 0x38),(CowData *)(lVar11 + 0x168));
                lVar11 = *(long *)(puVar12 + 2);
              }
              goto LAB_001141b4;
            }
            goto LAB_00114284;
          }
          if (uVar2 - 3 < 3) {
            *(undefined4 *)param_5 = 10;
          }
        }
        GDScriptParser::SuiteNode::Local::get_datatype();
        GDScriptDocGen::doctype_from_gdtype
                  ((DataType *)this_01,(String *)(param_5 + 0x40),(String *)(param_5 + 0x48),false);
        GDScriptParser::DataType::~DataType((DataType *)this_01);
        local_e20 = (Ref *)0x0;
        local_e28 = (Ref *)((ulong)local_e28 & 0xffffffff00000000);
        GDScriptCache::get_shallow_script
                  ((String *)this_01,(CowData *)local_d28,(String *)&local_e28);
        Ref<Script>::operator=((Ref<Script> *)(param_5 + 0x60),local_c78);
        Ref<GDScript>::unref((Ref<GDScript> *)this_01);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e20);
        if (*(long *)(param_5 + 0x68) != local_d28[0]) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(param_5 + 0x68),(CowData *)local_d28);
        }
        uVar18 = (ulong)local_e28 & 0xffffffff;
        *(uint *)(param_5 + 0x70) = puVar12[8];
        goto LAB_00114284;
      }
    }
    iVar10 = _lookup_symbol_from_base((DataType *)local_d68,param_2,param_5);
    if (iVar10 == 0) {
LAB_001147f2:
      uVar18 = 0;
    }
    else {
      pSVar13 = (StringName *)ProjectSettings::get_singleton();
      StringName::StringName(this_01,param_2,false);
      cVar9 = ProjectSettings::has_autoload(pSVar13);
      if ((StringName::configured != '\0') && (local_c78 != (Ref *)0x0)) {
        StringName::unref();
      }
      if (cVar9 == '\0') {
LAB_00114846:
        StringName::StringName(this_01,param_2,false);
        cVar9 = ScriptServer::is_global_class(this_01);
        if ((StringName::configured != '\0') && (local_c78 != (Ref *)0x0)) {
          StringName::unref();
        }
        if (cVar9 == '\0') {
          this_00 = (HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                     *)(singleton + 400);
          StringName::StringName(this_01,param_2,false);
          local_e20 = (Ref *)((ulong)local_e20 & 0xffffffff00000000);
          cVar9 = HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                  ::_lookup_pos(this_00,this_01,(uint *)&local_e20);
          if ((StringName::configured != '\0') && (local_c78 != (Ref *)0x0)) {
            StringName::unref();
          }
          if (cVar9 != '\0') {
            lVar11 = *(long *)(singleton + 0x178);
            StringName::StringName(this_01,param_2,false);
            piVar14 = (int *)HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                             ::operator[](this_00,this_01);
            Variant::Variant((Variant *)local_b88,(Variant *)(lVar11 + (long)*piVar14 * 0x18));
            if ((StringName::configured != '\0') && (local_c78 != (Ref *)0x0)) {
              StringName::unref();
            }
            if ((local_b88[0] == 0x18) &&
               (pOVar15 = Variant::operator_cast_to_Object_((Variant *)local_b88),
               pOVar15 != (Object *)0x0)) {
              pGVar16 = Object::cast_to<GDScriptNativeClass>(pOVar15);
              *(undefined4 *)param_5 = 1;
              if (pGVar16 == (GDScriptNativeClass *)0x0) {
                (**(code **)(*(long *)pOVar15 + 0x48))(this_01);
              }
              else {
                pGVar16 = Object::cast_to<GDScriptNativeClass>(pOVar15);
                lVar11 = *(long *)(pGVar16 + 0x180);
                if (lVar11 == 0) {
                  local_c78 = (Ref *)0x0;
                }
                else {
                  local_c78 = (Ref *)0x0;
                  if (*(char **)(lVar11 + 8) == (char *)0x0) {
                    if (*(long *)(lVar11 + 0x10) != 0) {
                      CowData<char32_t>::_ref
                                ((CowData<char32_t> *)this_01,(CowData *)(lVar11 + 0x10));
                    }
                  }
                  else {
                    String::parse_latin1((String *)this_01,*(char **)(lVar11 + 8));
                  }
                }
              }
              if (*(Ref **)(param_5 + 8) != local_c78) {
                CowData<char32_t>::operator=((CowData<char32_t> *)(param_5 + 8),(CowData *)this_01);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)this_01);
              if ((&Variant::needs_deinit)[local_b88[0]] == '\0') goto LAB_001147f2;
              uVar18 = 0;
              Variant::_clear_internal();
              goto LAB_00114284;
            }
            if ((&Variant::needs_deinit)[local_b88[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          StringName::StringName(this_01,param_2,false);
          cVar9 = CoreConstants::is_global_enum(this_01);
          if ((StringName::configured != '\0') && (local_c78 != (Ref *)0x0)) {
            StringName::unref();
          }
          if (cVar9 == '\0') {
            StringName::StringName(this_01,param_2,false);
            cVar9 = CoreConstants::is_global_constant(this_01);
            if ((StringName::configured != '\0') && (local_c78 != (Ref *)0x0)) {
              StringName::unref();
            }
            if (cVar9 == '\0') {
              StringName::StringName(this_01,param_2,false);
              cVar9 = Variant::has_utility_function(this_01);
              if ((StringName::configured != '\0') && (local_c78 != (Ref *)0x0)) {
                StringName::unref();
              }
              if (cVar9 == '\0') goto LAB_001144de;
              *(undefined4 *)param_5 = 4;
            }
            else {
              *(undefined4 *)param_5 = 2;
            }
          }
          else {
            *(undefined4 *)param_5 = 6;
          }
          String::parse_latin1((String *)(param_5 + 8),"@GlobalScope");
          if (*(long *)(param_5 + 0x10) == *(long *)param_2) goto LAB_001147f2;
          uVar18 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)(param_5 + 0x10),(CowData *)param_2);
        }
        else {
          ScriptServer::get_global_class_path((String *)&local_e30);
          local_e20 = (Ref *)0x0;
          String::parse_latin1((String *)&local_e20,"");
          ResourceLoader::load(this_01,(String *)&local_e30,(String *)&local_e20,1,0);
          local_e28 = (Ref *)0x0;
          Ref<Script>::operator=((Ref<Script> *)&local_e28,local_c78);
          Ref<Resource>::unref((Ref<Resource> *)this_01);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e20);
          pRVar7 = local_e28;
          if (local_e28 == (Ref *)0x0) {
            uVar18 = 0x2f;
          }
          else {
            lVar11 = *(long *)local_e28;
            *(undefined4 *)param_5 = 1;
            (**(code **)(lVar11 + 0x230))((String *)&local_e20,local_e28);
            if (local_e20 == (Ref *)0x0) {
              local_c78 = (Ref *)0x0;
            }
            else {
              local_c78 = (Ref *)0x0;
              if (*(char **)(local_e20 + 8) == (char *)0x0) {
                if (*(long *)(local_e20 + 0x10) != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)this_01,(CowData *)(local_e20 + 0x10));
                }
              }
              else {
                String::parse_latin1((String *)this_01,*(char **)(local_e20 + 8));
              }
            }
            if (*(Ref **)(param_5 + 8) != local_c78) {
              CowData<char32_t>::operator=((CowData<char32_t> *)(param_5 + 8),(CowData *)this_01);
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)this_01);
            if ((StringName::configured != '\0') && (local_e20 != (Ref *)0x0)) {
              StringName::unref();
            }
            Ref<Script>::operator=((Ref<Script> *)(param_5 + 0x60),pRVar7);
            if (*(long *)(param_5 + 0x68) != local_e30) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(param_5 + 0x68),(CowData *)&local_e30);
            }
            uVar18 = 0;
            *(undefined4 *)(param_5 + 0x70) = 0;
          }
          Ref<Script>::unref((Ref<Script> *)&local_e28);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e30);
        }
      }
      else {
        ProjectSettings::get_singleton();
        StringName::StringName((StringName *)&local_e20,param_2,false);
        ProjectSettings::get_autoload(this_01);
        if ((StringName::configured != '\0') && (local_e20 != (Ref *)0x0)) {
          StringName::unref();
        }
        if ((char)local_c68 == '\0') {
LAB_00114d51:
          ProjectSettings::AutoloadInfo::~AutoloadInfo((AutoloadInfo *)this_01);
          goto LAB_00114846;
        }
        local_e38 = (Ref *)0x0;
        if (local_c70 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_e38,(CowData *)&local_c70);
        }
        cVar9 = String::ends_with((char *)&local_e38);
        if (cVar9 == '\0') {
          local_e28 = (Ref *)0x0;
          String::parse_latin1((String *)&local_e28,".gd");
          String::get_basename();
          String::operator+((String *)&local_e20,(String *)&local_e30);
          if (local_e38 != local_e20) {
            CowData<char32_t>::operator=((CowData<char32_t> *)&local_e38,(CowData *)&local_e20);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e20);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e30);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e28);
        }
        cVar9 = FileAccess::exists((String *)&local_e38);
        if (cVar9 == '\0') {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e38);
          goto LAB_00114d51;
        }
        *(undefined4 *)param_5 = 1;
        if (*(long *)(param_5 + 8) != *(long *)param_2) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(param_5 + 8),(CowData *)param_2);
        }
        local_e28 = (Ref *)0x0;
        String::parse_latin1((String *)&local_e28,"");
        ResourceLoader::load((StringName *)&local_e20,(String *)&local_e38,(String *)&local_e28,1,0)
        ;
        Ref<Script>::operator=((Ref<Script> *)(param_5 + 0x60),local_e20);
        Ref<Resource>::unref((Ref<Resource> *)&local_e20);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e28);
        if (*(Ref **)(param_5 + 0x68) != local_e38) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(param_5 + 0x68),(CowData *)&local_e38);
        }
        uVar18 = 0;
        *(undefined4 *)(param_5 + 0x70) = 0;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e38);
        ProjectSettings::AutoloadInfo::~AutoloadInfo((AutoloadInfo *)this_01);
      }
    }
LAB_00114284:
    GDScriptParser::DataType::~DataType((DataType *)local_d68);
    goto LAB_00113edc;
      case 4:
      case 5:
    if ((*(int *)(local_de8 + 8) == 0x20) && (local_de8[0x158] != (SubscriptNode)0x0)) {
      GDScriptParser::DataType::DataType((DataType *)local_b88);
      local_a98 = 0;
      local_a90 = 0;
      local_a78 = 0;
      local_a88 = (undefined1  [16])0x0;
      cVar9 = _get_subscript_type((CompletionContext *)&local_e18,pSVar8,(DataType *)local_b88,
                                  (Variant *)0x0);
      if (((cVar9 != '\0') ||
          (cVar9 = _guess_expression_type
                             ((CompletionContext *)&local_e18,*(ExpressionNode **)(pSVar8 + 0x148),
                              (GDScriptCompletionIdentifier *)local_b88), cVar9 != '\0')) &&
         (iVar10 = _lookup_symbol_from_base((DataType *)local_b88,param_2,param_5), iVar10 == 0)) {
        GDScriptCompletionIdentifier::~GDScriptCompletionIdentifier
                  ((GDScriptCompletionIdentifier *)local_b88);
        goto LAB_00113eda;
      }
      GDScriptCompletionIdentifier::~GDScriptCompletionIdentifier
                ((GDScriptCompletionIdentifier *)local_b88);
    }
    break;
      case 6:
    GDScriptParser::DataType::DataType((DataType *)this_01);
    local_c58 = (undefined4)uStack_df0;
    local_c68 = 0;
    local_c5e = 1;
    goto LAB_0011429e;
      case 0xc:
    GDScriptParser::DataType::DataType((DataType *)this_01,(DataType *)(puStack_e10 + 0x35));
    goto LAB_0011429e;
      case 0xe:
      case 0x14:
      case 0x15:
    (**(code **)*puStack_e10)(this_01);
LAB_0011429e:
    iVar10 = _lookup_symbol_from_base((DataType *)this_01,param_2,param_5);
    if (iVar10 != 0) {
LAB_001142b7:
      GDScriptParser::DataType::~DataType((DataType *)this_01);
      break;
    }
    GDScriptParser::DataType::~DataType((DataType *)this_01);
LAB_00113eda:
    uVar18 = 0;
    goto LAB_00113edc;
      case 0x13:
    if ((local_de8 != (SubscriptNode *)0x0) && (*(int *)(local_de8 + 8) == 0x23)) {
      GDScriptParser::DataType::DataType((DataType *)local_d68);
      pEVar17 = *(ExpressionNode **)(pSVar8 + 0x130);
      pEVar20 = pEVar17;
      if (pEVar17 != (ExpressionNode *)0x0) {
        pEVar1 = pEVar17 + *(long *)(pEVar17 + -8) * 8;
        if (pEVar1 == pEVar17) {
          pEVar20 = (ExpressionNode *)0x0;
        }
        else {
          pEVar20 = (ExpressionNode *)0x0;
          do {
            pEVar5 = *(ExpressionNode **)pEVar17;
            cVar9 = StringName::operator==((StringName *)(pEVar5 + 0x148),param_2);
            if ((pEVar20 != (ExpressionNode *)0x0) && (cVar9 != '\0')) {
              (*(code *)**(undefined8 **)pEVar20)(this_01,pEVar20);
              GDScriptParser::DataType::operator=((DataType *)local_d68,(DataType *)this_01);
              GDScriptParser::DataType::~DataType((DataType *)this_01);
              break;
            }
            pEVar17 = pEVar17 + 8;
            pEVar20 = pEVar5;
          } while (pEVar1 != pEVar17);
        }
      }
      if (local_d58 != 3) {
        GDScriptParser::DataType::DataType((DataType *)local_b88);
        local_a98 = 0;
        local_a90 = 0;
        local_a78 = 0;
        local_a88 = (undefined1  [16])0x0;
        cVar9 = _guess_expression_type
                          ((CompletionContext *)&local_e18,pEVar20,
                           (GDScriptCompletionIdentifier *)local_b88);
        if (cVar9 == '\0') {
          GDScriptCompletionIdentifier::~GDScriptCompletionIdentifier
                    ((GDScriptCompletionIdentifier *)local_b88);
          goto LAB_001144de;
        }
        GDScriptParser::DataType::operator=((DataType *)local_d68,(DataType *)local_b88);
        GDScriptCompletionIdentifier::~GDScriptCompletionIdentifier
                  ((GDScriptCompletionIdentifier *)local_b88);
      }
      iVar10 = _lookup_symbol_from_base((DataType *)local_d68,param_2,param_5);
      if (iVar10 != 0) goto LAB_001144de;
      GDScriptParser::DataType::~DataType((DataType *)local_d68);
      goto LAB_00113eda;
    }
   }

   uVar18 = 0x1a;
   LAB_00113edc:if (local_da0 != (void*)0x0) {
      if (local_d7c != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + (ulong)local_d80 * 4 );
         if (uVar2 == 0) {
            local_d7c = 0;
            local_d90 = (undefined1[16])0x0;
         }
 else {
            lVar11 = 0;
            pvVar19 = local_da0;
            do {
               if (*(int*)( (long)local_d98 + lVar11 ) != 0) {
                  pvVar19 = *(void**)( (long)pvVar19 + lVar11 * 2 );
                  *(int*)( (long)local_d98 + lVar11 ) = 0;
                  if (( *(long*)( (long)pvVar19 + 0x18 ) != 0 ) && ( cVar9 = RefCounted::unreference() ),cVar9 != '\0') {
                     pOVar15 = *(Object**)( (long)pvVar19 + 0x18 );
                     cVar9 = predelete_handler(pOVar15);
                     if (cVar9 != '\0') {
                        ( **(code**)( *(long*)pOVar15 + 0x140 ) )(pOVar15);
                        Memory::free_static(pOVar15, false);
                     }

                  }

                  Memory::free_static(pvVar19, false);
                  *(undefined8*)( (long)local_da0 + lVar11 * 2 ) = 0;
                  pvVar19 = local_da0;
               }

               lVar11 = lVar11 + 4;
            }
 while ( lVar11 != (ulong)uVar2 * 4 );
            local_d7c = 0;
            local_d90 = (undefined1[16])0x0;
            local_da0 = pvVar19;
            if (pvVar19 == (void*)0x0) goto LAB_00113f94;
         }

      }

      Memory::free_static(local_da0, false);
      Memory::free_static(local_d98, false);
   }

   LAB_00113f94:List<GDScriptParser::LambdaNode*,DefaultAllocator>::~List(local_db0);
   LAB_00113c78:GDScriptParser::~GDScriptParser(local_a68);
   LAB_00113a8b:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar18;
   LAB_00113e4c:*(undefined4*)param_5 = 6;
   if (local_e20 == (Ref*)0x0) {
      local_c78 = (Ref*)0x0;
   }
 else {
      local_c78 = (Ref*)0x0;
      if (*(char**)( local_e20 + 8 ) == (char*)0x0) {
         if (*(long*)( local_e20 + 0x10 ) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)this_01, (CowData*)( local_e20 + 0x10 ));
         }

      }
 else {
         String::parse_latin1((String*)this_01, *(char**)( local_e20 + 8 ));
      }

   }

   if (*(Ref**)( param_5 + 8 ) != local_c78) {
      CowData<char32_t>::operator =((CowData<char32_t>*)( param_5 + 8 ), (CowData*)this_01);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)this_01);
   if (*(long*)( param_5 + 0x10 ) != *(long*)param_2) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_5 + 0x10 ), (CowData*)param_2);
   }

   List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)local_d68);
   LAB_00113ec1:if (( StringName::configured != '\0' ) && ( local_e20 != (Ref*)0x0 )) {
      StringName::unref();
   }

   goto LAB_00113eda;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GDScriptLanguage::complete_code(String const&, String const&, Object*,
   List<ScriptLanguage::CodeCompletionOption, DefaultAllocator>*, bool&, String&) */undefined8 GDScriptLanguage::complete_code(GDScriptLanguage *this, String *param_1, String *param_2, Object *param_3, List *param_4, bool *param_5, String *param_6) {
   uint uVar1;
   Object *pOVar2;
   undefined8 uVar3;
   long *plVar4;
   Ref *pRVar5;
   code *pcVar6;
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined8 uVar14;
   ulong uVar15;
   undefined8 uVar16;
   bool bVar17;
   char cVar18;
   int iVar19;
   undefined1(*pauVar20)[16];
   CodeCompletionOption *pCVar21;
   EditorFileSystemDirectory *pEVar22;
   MethodInfo *this_00;
   size_t sVar23;
   undefined1 uVar24;
   long *plVar25;
   long lVar26;
   int *piVar27;
   undefined **ppuVar28;
   int iVar29;
   wchar32 wVar30;
   void *pvVar31;
   byte bVar32;
   CowData *pCVar33;
   StringName *pSVar34;
   long lVar35;
   long lVar36;
   long in_FS_OFFSET;
   GDScriptCompletionIdentifier *local_1008;
   HashMap *local_fe8;
   long local_fa0;
   long local_f98;
   undefined1(*local_f90)[16];
   long *local_f88;
   long *local_f80;
   long *local_f78;
   Ref *local_f70;
   HashMap local_f68[8];
   undefined1 local_f60[16];
   undefined1 local_f50[16];
   undefined8 local_f40;
   ulong local_f38;
   ClassNode *pCStack_f30;
   undefined8 local_f28;
   undefined8 uStack_f20;
   undefined8 local_f18;
   ulong uStack_f10;
   SubscriptNode *local_f08;
   Object *pOStack_f00;
   undefined8 local_ef8;
   GDScriptAnalyzer local_ee8[24];
   long *local_ed0;
   void *local_ec0;
   void *local_eb8;
   undefined1 local_eb0[16];
   uint local_ea0;
   int local_e9c;
   long *local_e88;
   ulong local_e80;
   undefined1 local_e78[16];
   undefined8 local_e68;
   undefined8 local_e60;
   undefined8 local_e58;
   ulong local_e50;
   undefined8 local_e48;
   undefined8 local_e38;
   undefined8 local_e30;
   undefined8 local_e20;
   Ref *local_e18;
   undefined1 local_e10[16];
   undefined1 local_e00[16];
   ulong local_df0[4];
   long local_dd0;
   CodeCompletionOption local_d28[8];
   undefined1 local_d20[8];
   long local_d18[14];
   int local_ca8[2];
   undefined1 local_ca0[8];
   Ref *local_c98;
   undefined1 local_c90;
   StringName local_c80[16];
   Ref<Script> local_c70[16];
   ClassNode *local_c60;
   long local_bb8;
   undefined4 local_bb0[2];
   undefined1 local_ba8[16];
   undefined8 local_b98;
   undefined8 local_b88;
   undefined1 local_b80[40];
   Variant local_b58[192];
   long local_a98;
   int local_a90[2];
   undefined1 local_a88[16];
   undefined8 local_a78;
   int local_a68[606];
   ulong local_f0;
   ClassNode *pCStack_e8;
   undefined8 local_e0;
   undefined8 uStack_d8;
   undefined8 local_d0;
   ulong uStack_c8;
   SubscriptNode *local_c0;
   Object *pOStack_b8;
   undefined8 local_b0;
   long local_40;
   local_e10._8_8_ = local_e10._0_8_;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_e88 = (long*)0x0;
   local_e18 = (Ref*)0x1252b8;
   local_e10._0_8_ = 0x28;
   String::parse_latin1((StrRange*)&local_e88);
   _EDITOR_GET((String*)local_a68);
   bVar17 = Variant::operator_cast_to_bool((Variant*)local_a68);
   local_fa0 = 0;
   if (bVar17) {
      local_e18 = (Ref*)&_LC164;
   }
 else {
      local_e18 = (Ref*)&_LC163;
   }

   local_e10._0_8_ = 1;
   String::parse_latin1((StrRange*)&local_fa0);
   if (( &Variant::needs_deinit )[local_a68[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e88);
   GDScriptParser::GDScriptParser((GDScriptParser*)local_a68);
   GDScriptAnalyzer::GDScriptAnalyzer(local_ee8, (GDScriptParser*)local_a68);
   iVar19 = 1;
   GDScriptParser::parse((String*)local_a68, param_1, SUB81(param_2, 0), true);
   GDScriptAnalyzer::analyze();
   uVar15 = _LC5;
   local_f60 = (undefined1[16])0x0;
   *param_5 = false;
   local_f38 = local_f0;
   pCStack_f30 = pCStack_e8;
   local_f40 = uVar15;
   local_ef8 = local_b0;
   local_f50 = (undefined1[16])0x0;
   local_f28 = local_e0;
   uStack_f20 = uStack_d8;
   local_f18 = local_d0;
   uVar14 = local_f18;
   uStack_f10 = uStack_c8;
   local_f08 = local_c0;
   pOStack_f00 = pOStack_b8;
   if (( pCStack_e8 != (ClassNode*)0x0 ) && ( *(long*)( pCStack_e8 + 0x180 ) == 0 )) {
      pOStack_f00 = param_3;
   }

   iVar29 = (int)(StringName*)&local_e18;
   switch (local_f0 & 0xffffffff) {
      case 1:
    local_f70 = (Ref *)0x0;
    GDScriptParser::get_annotation_list((List *)local_a68);
    if ((local_f70 != (Ref *)0x0) && (lVar26 = *(long *)local_f70, lVar26 != 0)) {
      do {
        local_e88 = (long *)0x0;
        local_e18 = (Ref *)&_LC12;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = local_e10._8_8_;
        local_e10 = auVar8 << 0x40;
        String::parse_latin1((StrRange *)&local_e88);
        String::substr(iVar29,(int)lVar26);
        ScriptLanguage::CodeCompletionOption::CodeCompletionOption
                  ((CodeCompletionOption *)&local_b88,(StringName *)&local_e18,9,0x400);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e18);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e88);
        if ((*(long *)(lVar26 + 0x40) != 0) && (0 < *(int *)(*(long *)(lVar26 + 0x40) + 0x10))) {
          String::operator+=((String *)(local_b80 + 8),(char *)((long)&DAT_00123f53 + 2));
        }
        HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>
        ::insert((String *)&local_e18,(CodeCompletionOption *)local_f68,SUB81(local_b80,0));
        ScriptLanguage::CodeCompletionOption::~CodeCompletionOption
                  ((CodeCompletionOption *)&local_b88);
        lVar26 = *(long *)(lVar26 + 0x70);
      } while (lVar26 != 0);
    }
    *param_5 = true;
    List<MethodInfo,DefaultAllocator>::~List((List<MethodInfo,DefaultAllocator> *)&local_f70);
    plVar25 = (long *)local_f50._0_8_;
    goto LAB_0011fc88;
      case 2:
    if ((local_c0 != (SubscriptNode *)0x0) && (*(int *)(local_c0 + 8) == 1)) {
      local_f88 = (long *)0x0;
      if (local_fa0 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_f88,(CowData *)&local_fa0);
      }
      uVar1 = local_f18._4_4_;
      if (*(long *)(local_c0 + 0x150) != 0) {
        _make_arguments_hint
                  ((MethodInfo *)&local_e18,(int)*(long *)(local_c0 + 0x150) + 0x18,
                   SUB81((ulong)local_f18 >> 0x20,0));
        if (*(Ref **)param_6 != local_e18) {
          CowData<char32_t>::_unref((CowData<char32_t> *)param_6);
          pRVar5 = local_e18;
          local_e18 = (Ref *)0x0;
          *(Ref **)param_6 = pRVar5;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e18);
      }
      if ((_find_annotation_arguments(GDScriptParser::AnnotationNode_const*,int,String,HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>&,String&)
           ::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar19 = __cxa_guard_acquire(&_find_annotation_arguments(GDScriptParser::AnnotationNode_const*,int,String,HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>&,String&)
                                        ::{lambda()#1}::operator()()::sname), iVar19 != 0)) {
        _scs_create((char *)&_find_annotation_arguments(GDScriptParser::AnnotationNode_const*,int,String,HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>&,String&)
                             ::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_find_annotation_arguments(GDScriptParser::AnnotationNode_const*,int,String,HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>&,String&)
                      ::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_find_annotation_arguments(GDScriptParser::AnnotationNode_const*,int,String,HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>&,String&)
                             ::{lambda()#1}::operator()()::sname);
      }
      if (*(long *)(local_c0 + 0x128) ==
          _find_annotation_arguments(GDScriptParser::AnnotationNode_const*,int,String,HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>&,String&)
          ::{lambda()
      #1
      if (uVar1 - 3 < 3) {
         local_e18 = (Ref*)0x0;
         String::parse_latin1((String*)&local_e18, "");
         local_e88 = (long*)0x0;
         String::parse_latin1((String*)&local_e88, "or_greater");
         ScriptLanguage::CodeCompletionOption::CodeCompletionOption(local_d28, (StrRange*)&local_e88, 9, 0x400, (StringName*)&local_e18);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e18);
         String::quote((String*)&local_e18);
         if ((Ref*)local_d18[0] != local_e18) {
            CowData<char32_t>::_unref((CowData<char32_t>*)local_d18);
            local_d18[0] = (long)local_e18;
            local_e18 = (Ref*)0x0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e18);
         HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>::insert((String*)&local_e18, (CodeCompletionOption*)local_f68, SUB81(local_d20, 0));
         local_e18 = (Ref*)0x0;
         String::parse_latin1((String*)&local_e18, "");
         local_e88 = (long*)0x0;
         String::parse_latin1((String*)&local_e88, "or_less");
         ScriptLanguage::CodeCompletionOption::CodeCompletionOption((CodeCompletionOption*)local_ca8, (StrRange*)&local_e88, 9, 0x400, (StringName*)&local_e18);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e18);
         String::quote((String*)&local_e18);
         if (local_c98 != local_e18) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_c98);
            local_c98 = local_e18;
            local_e18 = (Ref*)0x0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e18);
         HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>::insert((String*)&local_e18, (CodeCompletionOption*)local_f68, SUB81(local_ca0, 0));
         local_e18 = (Ref*)0x0;
         String::parse_latin1((String*)&local_e18, "");
         local_e88 = (long*)0x0;
         String::parse_latin1((String*)&local_e88, "hide_slider");
         ScriptLanguage::CodeCompletionOption::CodeCompletionOption((CodeCompletionOption*)&local_b88, (StrRange*)&local_e88, 9, 0x400);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e18);
         String::quote((String*)&local_e18);
         if ((Ref*)local_b80._8_8_ != local_e18) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( local_b80 + 8 ));
            local_b80._8_8_ = local_e18;
            local_e18 = (Ref*)0x0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e18);
         HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>::insert((String*)&local_e18, (CodeCompletionOption*)local_f68, SUB81(local_b80, 0));
         ScriptLanguage::CodeCompletionOption::~CodeCompletionOption((CodeCompletionOption*)&local_b88);
         ScriptLanguage::CodeCompletionOption::~CodeCompletionOption((CodeCompletionOption*)local_ca8);
         ScriptLanguage::CodeCompletionOption::~CodeCompletionOption(local_d28);
      }

   }

   else {
        if ((_find_annotation_arguments(GDScriptParser::AnnotationNode_const*,int,String,HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>&,String&)
             ::{lambda()
   #2
   (iVar19 = __cxa_guard_acquire(&_find_annotation_arguments(GDScriptParser::AnnotationNode_const*,int,String,HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>&,String&)
                                          ::{lambda()
   #2
   _scs_create((char *)&_find_annotation_arguments(GDScriptParser::AnnotationNode_const*,int,String,HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>&,String&)
                               ::{lambda()
   #2
   __cxa_atexit(StringName::~StringName,
                       &_find_annotation_arguments(GDScriptParser::AnnotationNode_const*,int,String,HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>&,String&)
                        ::{lambda()
   #2
   __cxa_guard_release (&_find_annotation_arguments(GDScriptParser::AnnotationNode_const*,int,String,HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>&,String&)
                               ::{lambda();
   #2
}
if (*(long *)(local_c0 + 0x128) ==
            _find_annotation_arguments(GDScriptParser::AnnotationNode_const*,int,String,HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>&,String&)
            ::{lambda()#2if (uVar1 < 2) {
   local_e18 = (Ref*)0x0;
   String::parse_latin1((String*)&local_e18, "");
   local_e88 = (long*)0x0;
   String::parse_latin1((String*)&local_e88, "attenuation");
   ScriptLanguage::CodeCompletionOption::CodeCompletionOption((CodeCompletionOption*)local_ca8, (StrRange*)&local_e88, 9, 0x400, (StringName*)&local_e18);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e18);
   String::quote((String*)&local_e18);
   if (local_c98 != local_e18) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c98);
      local_c98 = local_e18;
      local_e18 = (Ref*)0x0;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e18);
   HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>::insert((String*)&local_e18, (CodeCompletionOption*)local_f68, SUB81(local_ca0, 0));
   local_e18 = (Ref*)0x0;
   String::parse_latin1((String*)&local_e18, "");
   local_e88 = (long*)0x0;
   String::parse_latin1((String*)&local_e88, "inout");
   ScriptLanguage::CodeCompletionOption::CodeCompletionOption((CodeCompletionOption*)&local_b88, (StrRange*)&local_e88, 9, 0x400);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e18);
   String::quote((String*)&local_e18);
   if ((Ref*)local_b80._8_8_ != local_e18) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( local_b80 + 8 ));
      local_b80._8_8_ = local_e18;
      local_e18 = (Ref*)0x0;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e18);
   HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>::insert((String*)&local_e18, (CodeCompletionOption*)local_f68, SUB81(local_b80, 0));
   ScriptLanguage::CodeCompletionOption::~CodeCompletionOption((CodeCompletionOption*)&local_b88);
   ScriptLanguage::CodeCompletionOption::~CodeCompletionOption((CodeCompletionOption*)local_ca8);
}
 else {
   if ((_find_annotation_arguments(GDScriptParser::AnnotationNode_const*,int,String,HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>&,String&)
               ::{lambda()
   #3
   (iVar19 = __cxa_guard_acquire(&_find_annotation_arguments(GDScriptParser::AnnotationNode_const*,int,String,HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>&,String&)
                                            ::{lambda()
   #3
   _scs_create((char *)&_find_annotation_arguments(GDScriptParser::AnnotationNode_const*,int,String,HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>&,String&)
                                 ::{lambda()
   #3
   __cxa_atexit(StringName::~StringName,
                         &_find_annotation_arguments(GDScriptParser::AnnotationNode_const*,int,String,HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>&,String&)
                          ::{lambda()
   #3
   __cxa_guard_release (&_find_annotation_arguments(GDScriptParser::AnnotationNode_const*,int,String,HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>&,String&)
                                 ::{lambda();
   #3
}
if (*(long *)(local_c0 + 0x128) ==
              _find_annotation_arguments(GDScriptParser::AnnotationNode_const*,int,String,HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>&,String&)
              ::{lambda()#3local_e18 = (Ref*)0x0;String::parse_latin1((String*)&local_e18, "");local_e88 = (long*)0x0;String::parse_latin1((String*)&local_e88, "Node");ScriptLanguage::CodeCompletionOption::CodeCompletionOption((CodeCompletionOption*)local_ca8, (StrRange*)&local_e88, 0, 0x400);CowData<char32_t>::_unref((CowData<char32_t>*)&local_e88);CowData<char32_t>::_unref((CowData<char32_t>*)&local_e18);String::quote((String*)&local_e18);if (local_c98 != local_e18) {
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c98);
   local_c98 = local_e18;
   local_e18 = (Ref*)0x0;
}
CowData<char32_t>::_unref((CowData<char32_t>*)&local_e18);HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>::insert((String*)&local_e18, (CodeCompletionOption*)local_f68, SUB81(local_ca0, 0));local_f80 = (long*)0x0;StringName::StringName((StringName*)&local_e18, "Node", false);ClassDB::get_inheriters_from_class((StringName*)&local_e18, (List*)&local_f80);if (( StringName::configured != '\0' ) && ( local_e18 != (Ref*)0x0 )) {
   StringName::unref();
}
if (( local_f80 != (long*)0x0 ) && ( pSVar34 = (StringName*)*local_f80 ),pSVar34 != (StringName*)0x0) {
   do {
      cVar18 = ClassDB::is_class_exposed(pSVar34);
      if (cVar18 != '\0') {
         local_e88 = (long*)0x0;
         auVar10._8_8_ = 0;
         auVar10._0_8_ = local_e10._8_8_;
         local_e10 = auVar10 << 0x40;
         local_e18 = (Ref*)&_LC12;
         String::parse_latin1((StrRange*)&local_e88);
         lVar26 = *(long*)pSVar34;
         if (lVar26 == 0) {
            local_e18 = (Ref*)0x0;
         }
 else {
            local_e18 = (Ref*)0x0;
            if (*(char**)( lVar26 + 8 ) == (char*)0x0) {
               if (*(long*)( lVar26 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_e18, (CowData*)( lVar26 + 0x10 ));
               }

            }
 else {
               String::parse_latin1((String*)&local_e18, *(char**)( lVar26 + 8 ));
            }

         }

         ScriptLanguage::CodeCompletionOption::CodeCompletionOption((CodeCompletionOption*)&local_b88, (StringName*)&local_e18, 0, 0x400);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e18);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e88);
         String::quote((String*)&local_e18);
         if ((Ref*)local_b80._8_8_ != local_e18) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( local_b80 + 8 ));
            pRVar5 = local_e18;
            local_e18 = (Ref*)0x0;
            local_b80._8_8_ = pRVar5;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e18);
         HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>::insert((String*)&local_e18, (CodeCompletionOption*)local_f68, SUB81(local_b80, 0));
         ScriptLanguage::CodeCompletionOption::~CodeCompletionOption((CodeCompletionOption*)&local_b88);
      }

      pSVar34 = *(StringName**)( pSVar34 + 8 );
   }
 while ( pSVar34 != (StringName*)0x0 );
}
local_f78 = (long*)0x0;ScriptServer::get_global_class_list((List*)&local_f78);if (( local_f78 != (long*)0x0 ) && ( plVar25 = (long*)*local_f78 ),plVar25 != (long*)0x0) {
   do {
      StringName::StringName((StringName*)&local_e88, "Node", false);
      lVar26 = *plVar25;
      if (lVar26 == 0) {
         local_f70 = (Ref*)0x0;
      }
 else {
         pRVar5 = *(Ref**)( lVar26 + 8 );
         local_f70 = (Ref*)0x0;
         if (pRVar5 == (Ref*)0x0) {
            if (*(long*)( lVar26 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_f70, (CowData*)( lVar26 + 0x10 ));
            }

         }
 else {
            sVar23 = strlen((char*)pRVar5);
            local_e10._0_8_ = sVar23;
            local_e18 = pRVar5;
            String::parse_latin1((StrRange*)&local_f70);
         }

      }

      ScriptServer::get_global_class_native_base((String*)&local_e18);
      cVar18 = ClassDB::is_parent_class((StringName*)&local_e18, (StringName*)&local_e88);
      if (( StringName::configured != '\0' ) && ( local_e18 != (Ref*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f70);
      if (( StringName::configured != '\0' ) && ( local_e88 != (long*)0x0 )) {
         StringName::unref();
      }

      if (cVar18 != '\0') {
         local_e88 = (long*)0x0;
         auVar11._8_8_ = 0;
         auVar11._0_8_ = local_e10._8_8_;
         local_e10 = auVar11 << 0x40;
         local_e18 = (Ref*)&_LC12;
         String::parse_latin1((StrRange*)&local_e88);
         lVar26 = *plVar25;
         if (lVar26 == 0) {
            local_e18 = (Ref*)0x0;
         }
 else {
            local_e18 = (Ref*)0x0;
            if (*(char**)( lVar26 + 8 ) == (char*)0x0) {
               if (*(long*)( lVar26 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_e18, (CowData*)( lVar26 + 0x10 ));
               }

            }
 else {
               String::parse_latin1((String*)&local_e18, *(char**)( lVar26 + 8 ));
            }

         }

         ScriptLanguage::CodeCompletionOption::CodeCompletionOption((CodeCompletionOption*)&local_b88, (StringName*)&local_e18, 0, 0x400);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e18);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e88);
         String::quote((String*)&local_e18);
         if ((Ref*)local_b80._8_8_ != local_e18) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( local_b80 + 8 ));
            pRVar5 = local_e18;
            local_e18 = (Ref*)0x0;
            local_b80._8_8_ = pRVar5;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e18);
         HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>::insert((String*)&local_e18, (CodeCompletionOption*)local_f68, SUB81(local_b80, 0));
         ScriptLanguage::CodeCompletionOption::~CodeCompletionOption((CodeCompletionOption*)&local_b88);
      }

      plVar25 = (long*)plVar25[1];
   }
 while ( plVar25 != (long*)0x0 );
}
List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_f78);List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_f80);ScriptLanguage::CodeCompletionOption::~CodeCompletionOption((CodeCompletionOption*)local_ca8);}
          else{
   if ((_find_annotation_arguments(GDScriptParser::AnnotationNode_const*,int,String,HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>&,String&)
                 ::{lambda()
   #4
   (iVar19 = __cxa_guard_acquire(&_find_annotation_arguments(GDScriptParser::AnnotationNode_const*,int,String,HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>&,String&)
                                              ::{lambda()
   #4
   _scs_create((char *)&_find_annotation_arguments(GDScriptParser::AnnotationNode_const*,int,String,HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>&,String&)
                                   ::{lambda()
   #4
   __cxa_atexit(StringName::~StringName,
                           &_find_annotation_arguments(GDScriptParser::AnnotationNode_const*,int,String,HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>&,String&)
                            ::{lambda()
   #4
   __cxa_guard_release (&_find_annotation_arguments(GDScriptParser::AnnotationNode_const*,int,String,HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>&,String&)
                                   ::{lambda();
   #4
}
if (*(long *)(local_c0 + 0x128) ==
                _find_annotation_arguments(GDScriptParser::AnnotationNode_const*,int,String,HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>&,String&)
                ::{lambda()#4if (uVar1 == 0) {
   if (( _find_annotation_arguments(GDScriptParser::AnnotationNode_const*,int,String,HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>&,String&)
                     :: ) && ( iVar19 = __cxa_guard_acquire(&_find_annotation_arguments(GDScriptParser::AnnotationNode_const * String, HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>> & String & ::items), iVar19 != 0) ) {
      _find_annotation_arguments(GDScriptParser::AnnotationNode_const *, int, String, HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>> &, String &) {
         if (local_e9c != 0) {
            uVar1 = *(uint*)( hash_table_size_primes + (ulong)local_ea0 * 4 );
            if (uVar1 == 0) {
               local_e9c = 0;
               local_eb0 = (undefined1[16])0x0;
            }
 else {
               lVar26 = 0;
               pvVar31 = local_ec0;
               do {
                  if (*(int*)( (long)local_eb8 + lVar26 ) != 0) {
                     pvVar31 = *(void**)( (long)pvVar31 + lVar26 * 2 );
                     *(int*)( (long)local_eb8 + lVar26 ) = 0;
                     if (( *(long*)( (long)pvVar31 + 0x18 ) != 0 ) && ( cVar18 = RefCounted::unreference() ),cVar18 != '\0') {
                        pOVar2 = *(Object**)( (long)pvVar31 + 0x18 );
                        cVar18 = predelete_handler(pOVar2);
                        if (cVar18 != '\0') {
                           ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                           Memory::free_static(pOVar2, false);
                        }

                     }

                     Memory::free_static(pvVar31, false);
                     *(undefined8*)( (long)local_ec0 + lVar26 * 2 ) = 0;
                     pvVar31 = local_ec0;
                  }

                  lVar26 = lVar26 + 4;
               }
 while ( lVar26 != (ulong)uVar1 * 4 );
               local_e9c = 0;
               local_eb0 = (undefined1[16])0x0;
               local_ec0 = pvVar31;
               if (pvVar31 == (void*)0x0) goto LAB_0011fab9;
            }

         }

         Memory::free_static(local_ec0, false);
         Memory::free_static(local_eb8, false);
      }

      LAB_0011fab9:if (local_ed0 != (long*)0x0) {
         do {
            plVar25 = local_ed0;
            pvVar31 = (void*)*local_ed0;
            if (pvVar31 == (void*)0x0) {
               if ((int)local_ed0[2] != 0) {
                  _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                  goto LAB_0011fb2b;
               }

               break;
            }

            if (local_ed0 == *(long**)( (long)pvVar31 + 0x18 )) {
               lVar26 = *(long*)( (long)pvVar31 + 8 );
               lVar36 = *(long*)( (long)pvVar31 + 0x10 );
               *local_ed0 = lVar26;
               if (pvVar31 == (void*)local_ed0[1]) {
                  local_ed0[1] = lVar36;
               }

               if (lVar36 != 0) {
                  *(long*)( lVar36 + 8 ) = lVar26;
                  lVar26 = *(long*)( (long)pvVar31 + 8 );
               }

               if (lVar26 != 0) {
                  *(long*)( lVar26 + 0x10 ) = lVar36;
               }

               Memory::free_static(pvVar31, false);
               *(int*)( plVar25 + 2 ) = (int)plVar25[2] + -1;
            }
 else {
               _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
            }

         }
 while ( (int)local_ed0[2] != 0 );
         Memory::free_static(local_ed0, false);
      }

      LAB_0011fb2b:GDScriptParser::~GDScriptParser((GDScriptParser*)local_a68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_fa0);
      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return 0;
      LAB_00120f88:GDScriptParser::DataType::operator =((DataType*)&local_e18, (DataType*)( local_dd0 + 0x1a8 ));
      if (local_e10._8_4_ - 6 < 2) goto LAB_00120a2c;
      goto LAB_00120a0f;
   }

   /* GDScriptLanguage::get_built_in_templates(StringName const&) */
   StringName *GDScriptLanguage::get_built_in_templates(StringName *param_1) {
      long *plVar1;
      CowData<char32_t> *this;
      undefined4 uVar2;
      undefined4 uVar3;
      char cVar4;
      int iVar5;
      long lVar6;
      StringName *in_RDX;
      String *pSVar7;
      long lVar8;
      long lVar9;
      long in_FS_OFFSET;
      long local_68;
      long local_60;
      long local_58;
      long local_50;
      undefined4 local_48;
      undefined4 local_44;
      long local_40;
      pSVar7 = (String*)&TEMPLATES;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined8*)( param_1 + 8 ) = 0;
      do {
         while (cVar4 = operator == ( pSVar7,in_RDX ),cVar4 == '\0') {
            LAB_00123410:pSVar7 = pSVar7 + 0x28;
            if (pSVar7 == (String*)DefaultAllocator::alloc) goto LAB_00123630;
         }
;
         local_68 = 0;
         if (*(long*)pSVar7 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)pSVar7);
         }

         local_60 = 0;
         if (*(long*)( pSVar7 + 8 ) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( pSVar7 + 8 ));
         }

         local_58 = 0;
         if (*(long*)( pSVar7 + 0x10 ) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( pSVar7 + 0x10 ));
         }

         local_50 = 0;
         lVar8 = *(long*)( pSVar7 + 0x18 );
         if (*(long*)( pSVar7 + 0x18 ) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_50, (CowData*)( pSVar7 + 0x18 ));
            lVar8 = local_50;
         }

         uVar2 = *(undefined4*)( pSVar7 + 0x24 );
         uVar3 = *(undefined4*)( pSVar7 + 0x20 );
         if (*(long*)( param_1 + 8 ) == 0) {
            lVar9 = 1;
         }
 else {
            lVar9 = *(long*)( *(long*)( param_1 + 8 ) + -8 ) + 1;
         }

         local_48 = uVar3;
         local_44 = uVar2;
         iVar5 = CowData<ScriptLanguage::ScriptTemplate>::resize<false>((CowData<ScriptLanguage::ScriptTemplate>*)( param_1 + 8 ), lVar9);
         if (iVar5 == 0) {
            if (*(long*)( param_1 + 8 ) == 0) {
               lVar6 = -1;
               lVar9 = 0;
            }
 else {
               lVar9 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
               lVar6 = lVar9 + -1;
               if (-1 < lVar6) {
                  CowData<ScriptLanguage::ScriptTemplate>::_copy_on_write((CowData<ScriptLanguage::ScriptTemplate>*)( param_1 + 8 ));
                  this(CowData<char32_t> * )(*(long*)( param_1 + 8 ) + lVar6 * 0x28);
                  if (*(long*)this != local_68) {
                     CowData<char32_t>::_ref(this, (CowData*)&local_68);
                  }

                  if (*(long*)( this + 8 ) != local_60) {
                     CowData<char32_t>::_ref(this + 8, (CowData*)&local_60);
                  }

                  if (*(long*)( this + 0x10 ) != local_58) {
                     CowData<char32_t>::_ref(this + 0x10, (CowData*)&local_58);
                  }

                  if (*(long*)( this + 0x18 ) != lVar8) {
                     CowData<char32_t>::_ref(this + 0x18, (CowData*)&local_50);
                  }

                  *(undefined4*)( this + 0x20 ) = uVar3;
                  *(undefined4*)( this + 0x24 ) = uVar2;
                  goto LAB_0012358f;
               }

            }

            _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar6, lVar9, "p_index", "size()", "", false, false);
         }
 else {
            _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
         }

         LAB_0012358f:if (lVar8 != 0) {
            LOCK();
            plVar1 = (long*)( lVar8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_50 + -0x10 ), false);
            }

         }

         if (local_58 != 0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_58 + -0x10 ), false);
            }

         }

         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_60 + -0x10 ), false);
            }

         }

         if (local_68 == 0) goto LAB_00123410;
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_00123410;
         pSVar7 = pSVar7 + 0x28;
         Memory::free_static((void*)( local_68 + -0x10 ), false);
      }
 while ( pSVar7 != (String*)DefaultAllocator::alloc );
      LAB_00123630:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return param_1;
   }

   /* TLS init function for GDScriptLanguage::_debug_parse_err_file */
   void GDScriptLanguage::_debug_parse_err_file(void) {
      undefined8 uVar1;
      char *in_FS_OFFSET;
      if (*in_FS_OFFSET != '\0') {
         return;
      }

      uVar1 = *(undefined8*)in_FS_OFFSET;
      *in_FS_OFFSET = '\x01';
      for (int i = 0; i < 8; i++) {
         in_FS_OFFSET[i] = '\0';
      }

      __cxa_thread_atexit(String::~String, uVar1, &__dso_handle);
      for (int i = 0; i < 8; i++) {
         in_FS_OFFSET[i] = '\0';
      }

      __cxa_thread_atexit(String::~String, uVar1, &__dso_handle);
      return;
   }

   /* DefaultAllocator::alloc(unsigned long) */
   void DefaultAllocator::alloc(ulong param_1) {
      Memory::alloc_static(param_1, false);
      return;
   }

   /* StringName::~StringName() */
   void StringName::~StringName(StringName *this) {
      if (( configured != '\0' ) && ( *(long*)this != 0 )) {
         StringName::unref();
         return;
      }

      return;
   }

   /* GDScript::is_valid() const */
   GDScript GDScript::is_valid(GDScript *this) {
      return this[0x241];
   }

   /* CowData<Pair<int, int> >::_copy_on_write() [clone .isra.0] [clone .cold] */
   void CowData<Pair<int,int>>::_copy_on_write(void) {
      code *pcVar1;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* CowData<GDScriptParser::EnumNode::Value>::_copy_on_write() [clone .isra.0] [clone .cold] */
   void CowData<GDScriptParser::EnumNode::Value>::_copy_on_write(void) {
      code *pcVar1;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* CowData<GDScriptParser::ClassNode::Member>::_copy_on_write() [clone .isra.0] [clone .cold] */
   void CowData<GDScriptParser::ClassNode::Member>::_copy_on_write(void) {
      code *pcVar1;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* CowData<Variant>::_copy_on_write() [clone .isra.0] [clone .cold] */
   void CowData<Variant>::_copy_on_write(void) {
      code *pcVar1;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */
   void CowData<String>::_copy_on_write(void) {
      code *pcVar1;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* CowData<ScriptLanguage::ScriptTemplate>::_copy_on_write() [clone .isra.0] [clone .cold] */
   void CowData<ScriptLanguage::ScriptTemplate>::_copy_on_write(void) {
      code *pcVar1;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* HashMap<StringName, long, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, long> > >::~HashMap() */
   void HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>::~HashMap(HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>> *this) {
      uint uVar1;
      long lVar2;
      void *pvVar3;
      bool bVar4;
      pvVar3 = *(void**)( this + 8 );
      if (pvVar3 == (void*)0x0) {
         return;
      }

      if (*(int*)( this + 0x2c ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x2c ) = 0;
            *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         }
 else {
            lVar2 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x10 ) + lVar2 ) != 0) {
                  bVar4 = StringName::configured != '\0';
                  *(int*)( *(long*)( this + 0x10 ) + lVar2 ) = 0;
                  pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
                  if (( bVar4 ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar3, false);
                  pvVar3 = *(void**)( this + 8 );
                  *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
               }

               lVar2 = lVar2 + 4;
            }
 while ( lVar2 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x2c ) = 0;
            *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
            if (pvVar3 == (void*)0x0) {
               return;
            }

         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x10 ), false);
      return;
   }

   /* String::~String() */
   void String::~String(String *this) {
      long *plVar1;
      long lVar2;
      if (*(long*)this != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)this + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            return;
         }

      }

      return;
   }

   /* String::parse_latin1(char const*) */
   void String::parse_latin1(String *this, char *param_1) {
      long lVar1;
      long in_FS_OFFSET;
      lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
      if (param_1 != (char*)0x0) {
         strlen(param_1);
      }

      String::parse_latin1((StrRange*)this);
      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */
   void Variant::operator =(Variant *this, Variant *param_1) {
      undefined8 uVar1;
      if (this != param_1) {
         if (( &needs_deinit )[*(int*)this] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)this = 0;
         *(undefined4*)this = *(undefined4*)param_1;
         uVar1 = *(undefined8*)( param_1 + 0x10 );
         *(undefined8*)( this + 8 ) = *(undefined8*)( param_1 + 8 );
         *(undefined8*)( this + 0x10 ) = uVar1;
         *(undefined4*)param_1 = 0;
         return;
      }

      return;
   }

   /* PropertyInfo::~PropertyInfo() */
   void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
      long *plVar1;
      long lVar2;
      if (*(long*)( this + 0x20 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + 0x20 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( this + 0x20 );
            *(undefined8*)( this + 0x20 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x10 ) != 0 )) {
         StringName::unref();
      }

      if (*(long*)( this + 8 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + 8 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( this + 8 );
            *(undefined8*)( this + 8 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            return;
         }

      }

      return;
   }

   /* GDScriptParser::DataType::DataType() */
   void GDScriptParser::DataType::DataType(DataType *this) {
      *(undefined8*)( this + 8 ) = 0;
      *(undefined8*)( this + 0x10 ) = 7;
      *(undefined4*)( this + 0x18 ) = 0;
      this[0x1c] = (DataType)0x0;
      *(undefined4*)( this + 0x20 ) = 0;
      *(undefined4*)( this + 0x58 ) = 0;
      *(undefined4*)( this + 0x70 ) = 0;
      *(undefined8*)( this + 0x78 ) = 0;
      *(undefined4*)( this + 0x80 ) = 6;
      *(undefined8*)( this + 0x88 ) = 1;
      *(undefined8*)( this + 0x90 ) = 0;
      *(undefined8*)( this + 0xa0 ) = 0;
      *(undefined4*)( this + 0xa8 ) = 0;
      *(undefined8*)( this + 0xb8 ) = 0;
      *(undefined8*)( this + 0xe8 ) = 2;
      *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this + 0x38 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this + 0x48 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this + 0x60 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this + 200 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
      return;
   }

   /* GDScriptParser::MemberDocData::~MemberDocData() */
   void GDScriptParser::MemberDocData::~MemberDocData(MemberDocData *this) {
      long *plVar1;
      long lVar2;
      if (*(long*)( this + 0x20 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + 0x20 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( this + 0x20 );
            *(undefined8*)( this + 0x20 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (*(long*)( this + 0x10 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + 0x10 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( this + 0x10 );
            *(undefined8*)( this + 0x10 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (*(long*)this != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)this + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            return;
         }

      }

      return;
   }

   /* GDScriptParser::ClassNode::get_member(StringName const&) const */
   StringName *GDScriptParser::ClassNode::get_member(StringName *param_1) {
      StringName SVar1;
      uint uVar2;
      undefined4 uVar3;
      long lVar4;
      undefined1 auVar5[16];
      undefined1 auVar6[16];
      undefined1 auVar7[16];
      undefined1 auVar8[16];
      undefined1 auVar9[16];
      undefined1 auVar10[16];
      undefined1 auVar11[16];
      undefined1 auVar12[16];
      code *pcVar13;
      undefined8 uVar14;
      undefined8 uVar15;
      uint uVar16;
      uint uVar17;
      long *in_RDX;
      long lVar18;
      undefined4 *puVar19;
      long in_RSI;
      uint uVar20;
      long lVar21;
      uint uVar22;
      ulong uVar23;
      if (( *(long*)( in_RSI + 0x158 ) != 0 ) && ( *(int*)( in_RSI + 0x17c ) != 0 )) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x178 ) * 4 );
         uVar23 = CONCAT44(0, uVar2);
         lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x178 ) * 8 );
         if (*in_RDX == 0) {
            uVar16 = StringName::get_empty_hash();
         }
 else {
            uVar16 = *(uint*)( *in_RDX + 0x20 );
         }

         if (uVar16 == 0) {
            uVar16 = 1;
         }

         auVar5._8_8_ = 0;
         auVar5._0_8_ = (ulong)uVar16 * lVar4;
         auVar9._8_8_ = 0;
         auVar9._0_8_ = uVar23;
         lVar18 = SUB168(auVar5 * auVar9, 8);
         uVar20 = *(uint*)( *(long*)( in_RSI + 0x160 ) + lVar18 * 4 );
         uVar17 = SUB164(auVar5 * auVar9, 8);
         if (uVar20 != 0) {
            uVar22 = 0;
            do {
               if (( uVar20 == uVar16 ) && ( *(long*)( *(long*)( *(long*)( in_RSI + 0x158 ) + lVar18 * 8 ) + 0x10 ) == *in_RDX )) {
                  lVar4 = *(long*)( in_RSI + 0x148 );
                  lVar18 = (long)*(int*)( *(long*)( *(long*)( in_RSI + 0x158 ) + (ulong)uVar17 * 8 ) + 0x18 );
                  if (lVar18 < 0) {
                     if (lVar4 != 0) {
                        lVar21 = *(long*)( lVar4 + -8 );
                        goto LAB_00124c69;
                     }

                  }
 else if (lVar4 != 0) {
                     lVar21 = *(long*)( lVar4 + -8 );
                     if (lVar18 < lVar21) {
                        puVar19 = (undefined4*)( lVar4 + lVar18 * 0x70 );
                        *(undefined4*)param_1 = *puVar19;
                        *(undefined8*)( param_1 + 8 ) = *(undefined8*)( puVar19 + 2 );
                        uVar14 = *(undefined8*)( puVar19 + 4 );
                        uVar15 = *(undefined8*)( puVar19 + 6 );
                        *(undefined8*)( param_1 + 0x20 ) = *(undefined8*)( puVar19 + 8 );
                        uVar3 = puVar19[10];
                        *(undefined8*)( param_1 + 0x10 ) = uVar14;
                        *(undefined8*)( param_1 + 0x18 ) = uVar15;
                        *(undefined4*)( param_1 + 0x28 ) = uVar3;
                        param_1[0x2c] = *(StringName*)( puVar19 + 0xb );
                        *(undefined8*)( param_1 + 0x30 ) = *(undefined8*)( puVar19 + 0xc );
                        *(undefined8*)( param_1 + 0x38 ) = *(undefined8*)( puVar19 + 0xe );
                        uVar3 = puVar19[0x10];
                        *(undefined8*)( param_1 + 0x48 ) = 0;
                        lVar4 = *(long*)( puVar19 + 0x12 );
                        *(undefined4*)( param_1 + 0x40 ) = uVar3;
                        if (lVar4 != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)( param_1 + 0x48 ), (CowData*)( puVar19 + 0x12 ));
                        }

                        SVar1 = *(StringName*)( puVar19 + 0x14 );
                        *(undefined8*)( param_1 + 0x58 ) = 0;
                        lVar4 = *(long*)( puVar19 + 0x16 );
                        param_1[0x50] = SVar1;
                        if (lVar4 != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)( param_1 + 0x58 ), (CowData*)( puVar19 + 0x16 ));
                        }

                        SVar1 = *(StringName*)( puVar19 + 0x18 );
                        *(undefined8*)( param_1 + 0x68 ) = 0;
                        lVar4 = *(long*)( puVar19 + 0x1a );
                        param_1[0x60] = SVar1;
                        if (lVar4 != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)( param_1 + 0x68 ), (CowData*)( puVar19 + 0x1a ));
                        }

                        return param_1;
                     }

                     goto LAB_00124c69;
                  }

                  lVar21 = 0;
                  LAB_00124c69:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar18, lVar21, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar13 = (code*)invalidInstructionException();
                  ( *pcVar13 )();
               }

               uVar22 = uVar22 + 1;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(uVar17 + 1) * lVar4;
               auVar10._8_8_ = 0;
               auVar10._0_8_ = uVar23;
               lVar18 = SUB168(auVar6 * auVar10, 8);
               uVar20 = *(uint*)( *(long*)( in_RSI + 0x160 ) + lVar18 * 4 );
               uVar17 = SUB164(auVar6 * auVar10, 8);
            }
 while ( ( uVar20 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar20 * lVar4,auVar11._8_8_ = 0,auVar11._0_8_ = uVar23,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar2 + uVar17 ) - SUB164(auVar7 * auVar11, 8)) * lVar4,auVar12._8_8_ = 0,auVar12._0_8_ = uVar23,uVar22 <= SUB164(auVar8 * auVar12, 8) );
         }

      }

      _err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar13 = (code*)invalidInstructionException();
      ( *pcVar13 )();
   }

   /* GDScriptParser::ClassNode::has_function(StringName const&) const */
   undefined8 GDScriptParser::ClassNode::has_function(ClassNode *this, StringName *param_1) {
      uint uVar1;
      long lVar2;
      undefined1 auVar3[16];
      undefined1 auVar4[16];
      undefined1 auVar5[16];
      undefined1 auVar6[16];
      undefined1 auVar7[16];
      undefined1 auVar8[16];
      undefined1 auVar9[16];
      undefined1 auVar10[16];
      undefined1 auVar11[16];
      undefined1 auVar12[16];
      undefined1 auVar13[16];
      undefined1 auVar14[16];
      undefined1 auVar15[16];
      undefined1 auVar16[16];
      undefined1 auVar17[16];
      undefined1 auVar18[16];
      code *pcVar19;
      uint uVar20;
      long lVar21;
      int iVar22;
      uint uVar23;
      long lVar24;
      uint uVar25;
      ulong uVar26;
      ulong uVar27;
      uint uVar28;
      if (*(long*)( this + 0x158 ) == 0) {
         return 0;
      }

      if (*(int*)( this + 0x17c ) == 0) {
         return 0;
      }

      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x178 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x178 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar20 = StringName::get_empty_hash();
      }
 else {
         uVar20 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar27 = CONCAT44(0, uVar1);
      lVar21 = *(long*)( this + 0x160 );
      if (uVar20 == 0) {
         uVar20 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar20 * lVar2;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar27;
      lVar24 = SUB168(auVar3 * auVar11, 8);
      uVar28 = *(uint*)( lVar21 + lVar24 * 4 );
      uVar26 = (ulong)uVar28;
      iVar22 = SUB164(auVar3 * auVar11, 8);
      if (uVar28 == 0) {
         return 0;
      }

      uVar28 = 0;
      while (( uVar20 != (uint)uVar26 || ( lVar24 = *(long*)( *(long*)( *(long*)( this + 0x158 ) + lVar24 * 8 ) + 0x10 ) ),lVar24 != *(long*)param_1 )) {
         uVar28 = uVar28 + 1;
         auVar4._8_8_ = 0;
         auVar4._0_8_ = ( ulong )(iVar22 + 1) * lVar2;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = uVar27;
         lVar24 = SUB168(auVar4 * auVar12, 8);
         uVar23 = *(uint*)( lVar21 + lVar24 * 4 );
         uVar26 = (ulong)uVar23;
         iVar22 = SUB164(auVar4 * auVar12, 8);
         if (uVar23 == 0) {
            return 0;
         }

         auVar5._8_8_ = 0;
         auVar5._0_8_ = uVar26 * lVar2;
         auVar13._8_8_ = 0;
         auVar13._0_8_ = uVar27;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = ( ulong )(( uVar1 + iVar22 ) - SUB164(auVar5 * auVar13, 8)) * lVar2;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = uVar27;
         if (SUB164(auVar6 * auVar14, 8) < uVar28) {
            return 0;
         }

      }
;
      if (( *(long*)( this + 0x158 ) != 0 ) && ( *(int*)( this + 0x17c ) != 0 )) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x178 ) * 4 );
         uVar27 = CONCAT44(0, uVar1);
         lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x178 ) * 8 );
         if (lVar24 == 0) {
            uVar20 = StringName::get_empty_hash();
            lVar21 = *(long*)( this + 0x160 );
         }
 else {
            uVar20 = *(uint*)( lVar24 + 0x20 );
         }

         if (uVar20 == 0) {
            uVar20 = 1;
         }

         auVar7._8_8_ = 0;
         auVar7._0_8_ = (ulong)uVar20 * lVar2;
         auVar15._8_8_ = 0;
         auVar15._0_8_ = uVar27;
         lVar24 = SUB168(auVar7 * auVar15, 8);
         uVar28 = *(uint*)( lVar21 + lVar24 * 4 );
         uVar23 = SUB164(auVar7 * auVar15, 8);
         if (uVar28 != 0) {
            uVar25 = 0;
            do {
               if (( uVar20 == uVar28 ) && ( *(long*)( *(long*)( *(long*)( this + 0x158 ) + lVar24 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  lVar2 = *(long*)( this + 0x148 );
                  lVar21 = (long)*(int*)( *(long*)( *(long*)( this + 0x158 ) + (ulong)uVar23 * 8 ) + 0x18 );
                  if (lVar21 < 0) {
                     if (lVar2 != 0) {
                        lVar24 = *(long*)( lVar2 + -8 );
                        goto LAB_00124f54;
                     }

                  }
 else if (lVar2 != 0) {
                     lVar24 = *(long*)( lVar2 + -8 );
                     if (lVar21 < lVar24) {
                        return CONCAT71(( int7 )(( ulong )(lVar21 * 0x70) >> 8), *(int*)( lVar2 + lVar21 * 0x70 ) == 3);
                     }

                     goto LAB_00124f54;
                  }

                  lVar24 = 0;
                  LAB_00124f54:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar21, lVar24, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar19 = (code*)invalidInstructionException();
                  ( *pcVar19 )();
               }

               uVar25 = uVar25 + 1;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( ulong )(uVar23 + 1) * lVar2;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar27;
               lVar24 = SUB168(auVar8 * auVar16, 8);
               uVar28 = *(uint*)( lVar21 + lVar24 * 4 );
               uVar23 = SUB164(auVar8 * auVar16, 8);
            }
 while ( ( uVar28 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar28 * lVar2,auVar17._8_8_ = 0,auVar17._0_8_ = uVar27,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar1 + uVar23 ) - SUB164(auVar9 * auVar17, 8)) * lVar2,auVar18._8_8_ = 0,auVar18._0_8_ = uVar27,uVar25 <= SUB164(auVar10 * auVar18, 8) );
         }

      }

      _err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar19 = (code*)invalidInstructionException();
      ( *pcVar19 )();
   }

   /* ScriptLanguage::CodeCompletionOption::~CodeCompletionOption() */
   void ScriptLanguage::CodeCompletionOption::~CodeCompletionOption(CodeCompletionOption *this) {
      long *plVar1;
      long lVar2;
      Object *pOVar3;
      char cVar4;
      Array::~Array((Array*)( this + 0x78 ));
      for (int i = 0; i < 3; i++) {
         if (*(long*)( this + ( -16*i + 112 ) ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( this + ( -16*i + 112 ) ) + -16 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( this + ( -16*i + 112 ) );
               *(undefined8*)( this + ( -16*i + 112 ) ) = 0;
               Memory::free_static((void*)( lVar2 + -16 ), false);
            }

         }

      }

      if (( &Variant::needs_deinit )[*(int*)( this + 0x30 )] != '\0') {
         Variant::_clear_internal();
      }

      if (*(long*)( this + 0x28 ) != 0) {
         cVar4 = RefCounted::unreference();
         if (cVar4 != '\0') {
            pOVar3 = *(Object**)( this + 0x28 );
            cVar4 = predelete_handler(pOVar3);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
               Memory::free_static(pOVar3, false);
            }

         }

      }

      if (*(long*)( this + 0x10 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + 0x10 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( this + 0x10 );
            *(undefined8*)( this + 0x10 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (*(long*)( this + 8 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + 8 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( this + 8 );
            *(undefined8*)( this + 8 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            return;
         }

      }

      return;
   }

   /* ScriptLanguage::CodeCompletionOption::CodeCompletionOption(ScriptLanguage::CodeCompletionOption
   const&) */
   void ScriptLanguage::CodeCompletionOption::CodeCompletionOption(CodeCompletionOption *this, CodeCompletionOption *param_1) {
      undefined4 uVar1;
      long lVar2;
      undefined8 uVar3;
      undefined8 uVar4;
      char cVar5;
      uVar1 = *(undefined4*)param_1;
      *(undefined8*)( this + 8 ) = 0;
      lVar2 = *(long*)( param_1 + 8 );
      *(undefined4*)this = uVar1;
      if (lVar2 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( this + 8 ), (CowData*)( param_1 + 8 ));
      }

      *(undefined8*)( this + 0x10 ) = 0;
      if (*(long*)( param_1 + 0x10 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x10 ), (CowData*)( param_1 + 0x10 ));
      }

      uVar3 = *(undefined8*)( param_1 + 0x18 );
      uVar4 = *(undefined8*)( param_1 + 0x20 );
      *(undefined8*)( this + 0x28 ) = 0;
      lVar2 = *(long*)( param_1 + 0x28 );
      *(undefined8*)( this + 0x18 ) = uVar3;
      *(undefined8*)( this + 0x20 ) = uVar4;
      if (lVar2 != 0) {
         *(long*)( this + 0x28 ) = lVar2;
         cVar5 = RefCounted::reference();
         if (cVar5 == '\0') {
            *(undefined8*)( this + 0x28 ) = 0;
         }

      }

      Variant::Variant((Variant*)( this + 0x30 ), (Variant*)( param_1 + 0x30 ));
      *(undefined8*)( this + 0x50 ) = 0;
      if (*(long*)( param_1 + 0x50 ) != 0) {
         CowData<Pair<int,int>>::_ref((CowData<Pair<int,int>>*)( this + 0x50 ), (CowData*)( param_1 + 0x50 ));
      }

      *(undefined8*)( this + 0x60 ) = 0;
      if (*(long*)( param_1 + 0x60 ) != 0) {
         CowData<Pair<int,int>>::_ref((CowData<Pair<int,int>>*)( this + 0x60 ), (CowData*)( param_1 + 0x60 ));
      }

      uVar1 = *(undefined4*)( param_1 + 0x68 );
      *(undefined8*)( this + 0x70 ) = 0;
      lVar2 = *(long*)( param_1 + 0x70 );
      *(undefined4*)( this + 0x68 ) = uVar1;
      if (lVar2 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x70 ), (CowData*)( param_1 + 0x70 ));
      }

      Array::Array((Array*)( this + 0x78 ), (Array*)( param_1 + 0x78 ));
      return;
   }

   /* ProjectSettings::AutoloadInfo::~AutoloadInfo() */
   void ProjectSettings::AutoloadInfo::~AutoloadInfo(AutoloadInfo *this) {
      long *plVar1;
      long lVar2;
      if (*(long*)( this + 8 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + 8 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( this + 8 );
            *(undefined8*)( this + 8 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( *(long*)this != 0 )) {
         StringName::unref();
         return;
      }

      return;
   }

   /* CowData<char32_t>::_ref(CowData<char32_t> const&) */
   void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
      if (*(long*)this != *(long*)param_1) {
         _ref(this, param_1);
         return;
      }

      return;
   }

   /* GDScriptParser::ClassNode::Member::get_name() const */
   void GDScriptParser::ClassNode::Member::get_name(void) {
      long lVar1;
      char *pcVar2;
      undefined4 *in_RSI;
      long lVar3;
      StrRange *in_RDI;
      long in_FS_OFFSET;
      lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
      switch (*in_RSI) {
         case 0:
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
    break;
         case 1:
         case 2:
         case 3:
         case 4:
         case 5:
         case 6:
    lVar3 = *(long *)(*(long *)(*(long *)(in_RSI + 2) + 0x128) + 0x148);
    if (lVar3 == 0) {
LAB_00126818:
      *(undefined8 *)in_RDI = 0;
      break;
    }
    pcVar2 = *(char **)(lVar3 + 8);
    *(undefined8 *)in_RDI = 0;
    if (pcVar2 != (char *)0x0) {
      String::parse_latin1((String *)in_RDI,pcVar2);
      break;
    }
    goto LAB_001268c0;
         case 7:
    lVar3 = *(long *)(*(long *)(in_RSI + 4) + 0x148);
    if (lVar3 == 0) goto LAB_00126818;
    pcVar2 = *(char **)(lVar3 + 8);
    *(undefined8 *)in_RDI = 0;
    if (pcVar2 != (char *)0x0) {
      strlen(pcVar2);
      String::parse_latin1(in_RDI);
      break;
    }
LAB_001268c0:
    CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar3 + 0x10));
    break;
         case 8:
    lVar3 = *(long *)(in_RSI + 2);
    *(undefined8 *)in_RDI = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar3 + 0x160));
    break;
         default:
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
      }

      if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* List<PropertyInfo, DefaultAllocator>::~List() */
   void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
      long *plVar1;
      void *pvVar2;
      long lVar3;
      long lVar4;
      long *plVar5;
      plVar5 = *(long**)this;
      if (plVar5 == (long*)0x0) {
         return;
      }

      do {
         pvVar2 = (void*)*plVar5;
         if (pvVar2 == (void*)0x0) {
            if ((int)plVar5[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               return;
            }

            break;
         }

         if (*(long**)( (long)pvVar2 + 0x40 ) == plVar5) {
            lVar4 = *(long*)( (long)pvVar2 + 0x30 );
            lVar3 = *(long*)( (long)pvVar2 + 0x38 );
            *plVar5 = lVar4;
            if (pvVar2 == (void*)plVar5[1]) {
               plVar5[1] = lVar3;
            }

            if (lVar3 != 0) {
               *(long*)( lVar3 + 0x30 ) = lVar4;
               lVar4 = *(long*)( (long)pvVar2 + 0x30 );
            }

            if (lVar4 != 0) {
               *(long*)( lVar4 + 0x38 ) = lVar3;
            }

            if (*(long*)( (long)pvVar2 + 0x20 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( (long)pvVar2 + 0x20 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar4 = *(long*)( (long)pvVar2 + 0x20 );
                  *(undefined8*)( (long)pvVar2 + 0x20 ) = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar2 + 0x10 ) != 0 )) {
               StringName::unref();
            }

            if (*(long*)( (long)pvVar2 + 8 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( (long)pvVar2 + 8 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar4 = *(long*)( (long)pvVar2 + 8 );
                  *(undefined8*)( (long)pvVar2 + 8 ) = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }

            }

            Memory::free_static(pvVar2, false);
            *(int*)( plVar5 + 2 ) = (int)plVar5[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar5 = *(long**)this;
      }
 while ( (int)plVar5[2] != 0 );
      Memory::free_static(plVar5, false);
      return;
   }

   /* List<StringName, DefaultAllocator>::~List() */
   void List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this) {
      long *plVar1;
      long lVar2;
      long lVar3;
      long *plVar4;
      plVar4 = *(long**)this;
      if (plVar4 == (long*)0x0) {
         return;
      }

      do {
         plVar1 = (long*)*plVar4;
         if (plVar1 == (long*)0x0) {
            if ((int)plVar4[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               return;
            }

            break;
         }

         if ((long*)plVar1[3] == plVar4) {
            lVar3 = plVar1[1];
            lVar2 = plVar1[2];
            *plVar4 = lVar3;
            if (plVar1 == (long*)plVar4[1]) {
               plVar4[1] = lVar2;
            }

            if (lVar2 != 0) {
               *(long*)( lVar2 + 8 ) = lVar3;
               lVar3 = plVar1[1];
            }

            if (lVar3 != 0) {
               *(long*)( lVar3 + 0x10 ) = lVar2;
            }

            if (( StringName::configured != '\0' ) && ( *plVar1 != 0 )) {
               StringName::unref();
            }

            Memory::free_static(plVar1, false);
            *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar4 = *(long**)this;
      }
 while ( (int)plVar4[2] != 0 );
      Memory::free_static(plVar4, false);
      return;
   }

   /* List<String, DefaultAllocator>::~List() */
   void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
      long *plVar1;
      long *plVar2;
      long lVar3;
      long lVar4;
      long *plVar5;
      plVar5 = *(long**)this;
      if (plVar5 == (long*)0x0) {
         return;
      }

      do {
         plVar2 = (long*)*plVar5;
         if (plVar2 == (long*)0x0) {
            if ((int)plVar5[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               return;
            }

            break;
         }

         if ((long*)plVar2[3] == plVar5) {
            lVar4 = plVar2[1];
            lVar3 = plVar2[2];
            *plVar5 = lVar4;
            if (plVar2 == (long*)plVar5[1]) {
               plVar5[1] = lVar3;
            }

            if (lVar3 != 0) {
               *(long*)( lVar3 + 8 ) = lVar4;
               lVar4 = plVar2[1];
            }

            if (lVar4 != 0) {
               *(long*)( lVar4 + 0x10 ) = lVar3;
            }

            if (*plVar2 != 0) {
               LOCK();
               plVar1 = (long*)( *plVar2 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar4 = *plVar2;
                  *plVar2 = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }

            }

            Memory::free_static(plVar2, false);
            *(int*)( plVar5 + 2 ) = (int)plVar5[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar5 = *(long**)this;
      }
 while ( (int)plVar5[2] != 0 );
      Memory::free_static(plVar5, false);
      return;
   }

   /* HashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, int> > >::operator[](StringName const&) const */
   long HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>::operator [](HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>> *this, StringName *param_1) {
      uint uVar1;
      long lVar2;
      undefined1 auVar3[16];
      undefined1 auVar4[16];
      undefined1 auVar5[16];
      undefined1 auVar6[16];
      undefined1 auVar7[16];
      undefined1 auVar8[16];
      undefined1 auVar9[16];
      undefined1 auVar10[16];
      code *pcVar11;
      uint uVar12;
      uint uVar13;
      long lVar14;
      uint uVar15;
      uint uVar16;
      ulong uVar17;
      if (( *(long*)( this + 8 ) != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar17 = CONCAT44(0, uVar1);
         lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar12 = StringName::get_empty_hash();
         }
 else {
            uVar12 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar12 == 0) {
            uVar12 = 1;
         }

         auVar3._8_8_ = 0;
         auVar3._0_8_ = (ulong)uVar12 * lVar2;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar17;
         lVar14 = SUB168(auVar3 * auVar7, 8);
         uVar15 = *(uint*)( *(long*)( this + 0x10 ) + lVar14 * 4 );
         uVar13 = SUB164(auVar3 * auVar7, 8);
         if (uVar15 != 0) {
            uVar16 = 0;
            do {
               if (( uVar12 == uVar15 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar14 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  return *(long*)( *(long*)( this + 8 ) + (ulong)uVar13 * 8 ) + 0x18;
               }

               uVar16 = uVar16 + 1;
               auVar4._8_8_ = 0;
               auVar4._0_8_ = ( ulong )(uVar13 + 1) * lVar2;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = uVar17;
               lVar14 = SUB168(auVar4 * auVar8, 8);
               uVar15 = *(uint*)( *(long*)( this + 0x10 ) + lVar14 * 4 );
               uVar13 = SUB164(auVar4 * auVar8, 8);
            }
 while ( ( uVar15 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar15 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar17,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar13 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar17,uVar16 <= SUB164(auVar6 * auVar10, 8) );
         }

      }

      _err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar11 = (code*)invalidInstructionException();
      ( *pcVar11 )();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* HashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, int> > >::operator[](StringName const&) */
   undefined8 * __thiscallHashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>::operator [](HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>> * this, StringName * param_1);
   {
      uint *puVar1;
      undefined8 *puVar2;
      void *pvVar3;
      void *__s;
      undefined8 *puVar4;
      undefined1 auVar5[16];
      undefined1 auVar6[16];
      undefined1 auVar7[16];
      undefined1 auVar8[16];
      undefined1 auVar9[16];
      undefined1 auVar10[16];
      undefined1 auVar11[16];
      undefined1 auVar12[16];
      undefined1 auVar13[16];
      undefined1 auVar14[16];
      undefined1 auVar15[16];
      undefined1 auVar16[16];
      undefined1 auVar17[16];
      undefined1 auVar18[16];
      undefined1 auVar19[16];
      undefined1 auVar20[16];
      undefined1 auVar21[16];
      undefined1 auVar22[16];
      undefined1 auVar23[16];
      undefined1 auVar24[16];
      undefined1 auVar25[16];
      undefined1 auVar26[16];
      undefined1 auVar27[16];
      undefined1 auVar28[16];
      undefined1 auVar29[16];
      undefined1 auVar30[16];
      undefined1 auVar31[16];
      undefined1 auVar32[16];
      undefined1 auVar33[16];
      undefined1 auVar34[16];
      undefined1 auVar35[16];
      undefined1 auVar36[16];
      uint uVar37;
      uint uVar38;
      uint uVar39;
      ulong uVar40;
      undefined8 uVar41;
      void *__s_00;
      undefined8 *puVar42;
      long lVar43;
      void *pvVar44;
      ulong uVar45;
      int iVar46;
      long lVar47;
      long lVar48;
      long lVar49;
      ulong uVar50;
      undefined8 uVar51;
      uint uVar52;
      uint uVar53;
      uint uVar54;
      undefined8 *puVar55;
      long in_FS_OFFSET;
      bool bVar56;
      long local_58;
      undefined4 local_50;
      long local_40;
      lVar43 = *(long*)( this + 8 );
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar40 = CONCAT44(0, uVar38);
      if (lVar43 == 0) {
         LAB_00127598:uVar45 = uVar40 * 4;
         uVar50 = uVar40 * 8;
         uVar41 = Memory::alloc_static(uVar45, false);
         *(undefined8*)( this + 0x10 ) = uVar41;
         pvVar44 = (void*)Memory::alloc_static(uVar50, false);
         *(void**)( this + 8 ) = pvVar44;
         if ((int)uVar40 != 0) {
            pvVar3 = *(void**)( this + 0x10 );
            if (( pvVar3 < (void*)( (long)pvVar44 + uVar50 ) ) && ( pvVar44 < (void*)( (long)pvVar3 + uVar45 ) )) {
               uVar45 = 0;
               do {
                  *(undefined4*)( (long)pvVar3 + uVar45 * 4 ) = 0;
                  *(undefined8*)( (long)pvVar44 + uVar45 * 8 ) = 0;
                  uVar45 = uVar45 + 1;
               }
 while ( uVar40 != uVar45 );
               goto LAB_00127448;
            }

            memset(pvVar3, 0, uVar45);
            memset(pvVar44, 0, uVar50);
            iVar46 = *(int*)( this + 0x2c );
            LAB_0012744c:if (iVar46 != 0) {
               LAB_00127454:uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
               uVar45 = CONCAT44(0, uVar38);
               lVar43 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               if (*(long*)param_1 == 0) {
                  uVar39 = StringName::get_empty_hash();
               }
 else {
                  uVar39 = *(uint*)( *(long*)param_1 + 0x20 );
               }

               if (uVar39 == 0) {
                  uVar39 = 1;
               }

               uVar54 = 0;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = (ulong)uVar39 * lVar43;
               auVar33._8_8_ = 0;
               auVar33._0_8_ = uVar45;
               lVar49 = SUB168(auVar17 * auVar33, 8);
               uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
               uVar53 = SUB164(auVar17 * auVar33, 8);
               if (uVar52 != 0) {
                  do {
                     if (( uVar39 == uVar52 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar49 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                        puVar42 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar53 * 8 );
                        *(undefined4*)( puVar42 + 3 ) = 0;
                        goto LAB_0012704c;
                     }

                     uVar54 = uVar54 + 1;
                     auVar18._8_8_ = 0;
                     auVar18._0_8_ = ( ulong )(uVar53 + 1) * lVar43;
                     auVar34._8_8_ = 0;
                     auVar34._0_8_ = uVar45;
                     lVar49 = SUB168(auVar18 * auVar34, 8);
                     uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
                     uVar53 = SUB164(auVar18 * auVar34, 8);
                  }
 while ( ( uVar52 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar52 * lVar43,auVar35._8_8_ = 0,auVar35._0_8_ = uVar45,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar38 + uVar53 ) - SUB164(auVar19 * auVar35, 8)) * lVar43,auVar36._8_8_ = 0,auVar36._0_8_ = uVar45,uVar54 <= SUB164(auVar20 * auVar36, 8) );
               }

               iVar46 = *(int*)( this + 0x2c );
            }

            goto LAB_00127083;
         }

         iVar46 = *(int*)( this + 0x2c );
         if (pvVar44 == (void*)0x0) goto LAB_00127083;
         if (iVar46 != 0) goto LAB_00127454;
         LAB_001270a9:uVar38 = *(uint*)( this + 0x28 );
         if (uVar38 == 0x1c) {
            puVar42 = (undefined8*)0x0;
            _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
            goto LAB_0012704c;
         }

         uVar40 = ( ulong )(uVar38 + 1);
         *(undefined4*)( this + 0x2c ) = 0;
         uVar39 = *(uint*)( hash_table_size_primes + (ulong)uVar38 * 4 );
         if (uVar38 + 1 < 2) {
            uVar40 = 2;
         }

         uVar38 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
         uVar50 = (ulong)uVar38;
         *(int*)( this + 0x28 ) = (int)uVar40;
         pvVar44 = *(void**)( this + 8 );
         uVar40 = uVar50 * 4;
         uVar45 = uVar50 * 8;
         pvVar3 = *(void**)( this + 0x10 );
         uVar41 = Memory::alloc_static(uVar40, false);
         *(undefined8*)( this + 0x10 ) = uVar41;
         __s_00 = (void*)Memory::alloc_static(uVar45, false);
         *(void**)( this + 8 ) = __s_00;
         if (uVar38 != 0) {
            __s = *(void**)( this + 0x10 );
            if (( __s < (void*)( (long)__s_00 + uVar45 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
               uVar40 = 0;
               do {
                  *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
                  *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
                  uVar40 = uVar40 + 1;
               }
 while ( uVar40 != uVar50 );
            }
 else {
               memset(__s, 0, uVar40);
               memset(__s_00, 0, uVar45);
            }

         }

         if (uVar39 != 0) {
            uVar40 = 0;
            do {
               uVar38 = *(uint*)( (long)pvVar3 + uVar40 * 4 );
               if (uVar38 != 0) {
                  lVar43 = *(long*)( this + 0x10 );
                  uVar54 = 0;
                  uVar52 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
                  uVar45 = CONCAT44(0, uVar52);
                  lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = (ulong)uVar38 * lVar49;
                  auVar25._8_8_ = 0;
                  auVar25._0_8_ = uVar45;
                  lVar47 = SUB168(auVar9 * auVar25, 8);
                  puVar1 = (uint*)( lVar43 + lVar47 * 4 );
                  iVar46 = SUB164(auVar9 * auVar25, 8);
                  uVar53 = *puVar1;
                  uVar41 = *(undefined8*)( (long)pvVar44 + uVar40 * 8 );
                  while (uVar53 != 0) {
                     auVar10._8_8_ = 0;
                     auVar10._0_8_ = (ulong)uVar53 * lVar49;
                     auVar26._8_8_ = 0;
                     auVar26._0_8_ = uVar45;
                     auVar11._8_8_ = 0;
                     auVar11._0_8_ = ( ulong )(( uVar52 + iVar46 ) - SUB164(auVar10 * auVar26, 8)) * lVar49;
                     auVar27._8_8_ = 0;
                     auVar27._0_8_ = uVar45;
                     uVar37 = SUB164(auVar11 * auVar27, 8);
                     uVar51 = uVar41;
                     if (uVar37 < uVar54) {
                        *puVar1 = uVar38;
                        puVar42 = (undefined8*)( (long)__s_00 + lVar47 * 8 );
                        uVar51 = *puVar42;
                        *puVar42 = uVar41;
                        uVar38 = uVar53;
                        uVar54 = uVar37;
                     }

                     uVar54 = uVar54 + 1;
                     auVar12._8_8_ = 0;
                     auVar12._0_8_ = ( ulong )(iVar46 + 1) * lVar49;
                     auVar28._8_8_ = 0;
                     auVar28._0_8_ = uVar45;
                     lVar47 = SUB168(auVar12 * auVar28, 8);
                     puVar1 = (uint*)( lVar43 + lVar47 * 4 );
                     iVar46 = SUB164(auVar12 * auVar28, 8);
                     uVar41 = uVar51;
                     uVar53 = *puVar1;
                  }
;
                  *(undefined8*)( (long)__s_00 + lVar47 * 8 ) = uVar41;
                  *puVar1 = uVar38;
                  *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
               }

               uVar40 = uVar40 + 1;
            }
 while ( uVar39 != uVar40 );
            Memory::free_static(pvVar44, false);
            Memory::free_static(pvVar3, false);
         }

      }
 else {
         iVar46 = *(int*)( this + 0x2c );
         if (iVar46 != 0) {
            lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            if (*(long*)param_1 == 0) {
               uVar39 = StringName::get_empty_hash();
               lVar43 = *(long*)( this + 8 );
            }
 else {
               uVar39 = *(uint*)( *(long*)param_1 + 0x20 );
            }

            if (uVar39 == 0) {
               uVar39 = 1;
            }

            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar39 * lVar49;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar40;
            lVar47 = SUB168(auVar5 * auVar21, 8);
            uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
            uVar53 = SUB164(auVar5 * auVar21, 8);
            if (uVar52 != 0) {
               uVar54 = 0;
               do {
                  if (( uVar39 == uVar52 ) && ( *(long*)( *(long*)( lVar43 + lVar47 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                     puVar42 = *(undefined8**)( lVar43 + (ulong)uVar53 * 8 );
                     goto LAB_0012704c;
                  }

                  uVar54 = uVar54 + 1;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = ( ulong )(uVar53 + 1) * lVar49;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar40;
                  lVar47 = SUB168(auVar6 * auVar22, 8);
                  uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
                  uVar53 = SUB164(auVar6 * auVar22, 8);
               }
 while ( ( uVar52 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar52 * lVar49,auVar23._8_8_ = 0,auVar23._0_8_ = uVar40,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar53 + uVar38 ) - SUB164(auVar7 * auVar23, 8)) * lVar49,auVar24._8_8_ = 0,auVar24._0_8_ = uVar40,uVar54 <= SUB164(auVar8 * auVar24, 8) );
            }

            uVar40 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            if (lVar43 == 0) goto LAB_00127598;
            LAB_00127448:iVar46 = *(int*)( this + 0x2c );
            goto LAB_0012744c;
         }

         LAB_00127083:if ((float)uVar40 * __LC32 < (float)( iVar46 + 1 )) goto LAB_001270a9;
      }

      StringName::StringName((StringName*)&local_58, param_1);
      local_50 = 0;
      puVar42 = (undefined8*)operator_new(0x20, "");
      *puVar42 = 0;
      puVar42[1] = 0;
      StringName::StringName((StringName*)( puVar42 + 2 ), (StringName*)&local_58);
      bVar56 = StringName::configured != '\0';
      *(undefined4*)( puVar42 + 3 ) = local_50;
      if (( bVar56 ) && ( local_58 != 0 )) {
         StringName::unref();
      }

      puVar4 = *(undefined8**)( this + 0x20 );
      if (puVar4 == (undefined8*)0x0) {
         lVar43 = *(long*)param_1;
         *(undefined8**)( this + 0x18 ) = puVar42;
         *(undefined8**)( this + 0x20 ) = puVar42;
         if (lVar43 == 0) goto LAB_0012755d;
         LAB_00127334:uVar38 = *(uint*)( lVar43 + 0x20 );
      }
 else {
         *puVar4 = puVar42;
         puVar42[1] = puVar4;
         lVar43 = *(long*)param_1;
         *(undefined8**)( this + 0x20 ) = puVar42;
         if (lVar43 != 0) goto LAB_00127334;
         LAB_0012755d:uVar38 = StringName::get_empty_hash();
      }

      if (uVar38 == 0) {
         uVar38 = 1;
      }

      uVar40 = (ulong)uVar38;
      lVar43 = *(long*)( this + 0x10 );
      uVar53 = 0;
      lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar45 = CONCAT44(0, uVar39);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar40 * lVar49;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar45;
      lVar48 = SUB168(auVar13 * auVar29, 8);
      lVar47 = *(long*)( this + 8 );
      puVar1 = (uint*)( lVar43 + lVar48 * 4 );
      iVar46 = SUB164(auVar13 * auVar29, 8);
      uVar52 = *puVar1;
      puVar4 = puVar42;
      while (uVar52 != 0) {
         auVar14._8_8_ = 0;
         auVar14._0_8_ = (ulong)uVar52 * lVar49;
         auVar30._8_8_ = 0;
         auVar30._0_8_ = uVar45;
         auVar15._8_8_ = 0;
         auVar15._0_8_ = ( ulong )(( uVar39 + iVar46 ) - SUB164(auVar14 * auVar30, 8)) * lVar49;
         auVar31._8_8_ = 0;
         auVar31._0_8_ = uVar45;
         uVar38 = SUB164(auVar15 * auVar31, 8);
         puVar55 = puVar4;
         if (uVar38 < uVar53) {
            *puVar1 = (uint)uVar40;
            uVar40 = (ulong)uVar52;
            puVar2 = (undefined8*)( lVar47 + lVar48 * 8 );
            puVar55 = (undefined8*)*puVar2;
            *puVar2 = puVar4;
            uVar53 = uVar38;
         }

         uVar38 = (uint)uVar40;
         uVar53 = uVar53 + 1;
         auVar16._8_8_ = 0;
         auVar16._0_8_ = ( ulong )(iVar46 + 1) * lVar49;
         auVar32._8_8_ = 0;
         auVar32._0_8_ = uVar45;
         lVar48 = SUB168(auVar16 * auVar32, 8);
         puVar1 = (uint*)( lVar43 + lVar48 * 4 );
         iVar46 = SUB164(auVar16 * auVar32, 8);
         puVar4 = puVar55;
         uVar52 = *puVar1;
      }
;
      *(undefined8**)( lVar47 + lVar48 * 8 ) = puVar4;
      *puVar1 = uVar38;
      *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
      LAB_0012704c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar42 + 3;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::~HashMap() */
   void HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::~HashMap(HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>> *this) {
      uint uVar1;
      long lVar2;
      void *pvVar3;
      pvVar3 = *(void**)( this + 8 );
      if (pvVar3 == (void*)0x0) {
         return;
      }

      if (*(int*)( this + 0x2c ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x2c ) = 0;
            *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         }
 else {
            lVar2 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x10 ) + lVar2 ) != 0) {
                  pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
                  *(int*)( *(long*)( this + 0x10 ) + lVar2 ) = 0;
                  if (( &Variant::needs_deinit )[*(int*)( (long)pvVar3 + 0x18 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar3, false);
                  pvVar3 = *(void**)( this + 8 );
                  *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
               }

               lVar2 = lVar2 + 4;
            }
 while ( lVar2 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x2c ) = 0;
            *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
            if (pvVar3 == (void*)0x0) {
               return;
            }

         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x10 ), false);
      return;
   }

   /* List<GDScriptParser::LambdaNode*, DefaultAllocator>::~List() */
   undefined8 List<GDScriptParser::LambdaNode*,DefaultAllocator>::~List(List<GDScriptParser::LambdaNode*,DefaultAllocator> *this) {
      void *pvVar1;
      long lVar2;
      long lVar3;
      undefined8 uVar4;
      long *plVar5;
      undefined8 uStack_18;
      plVar5 = *(long**)this;
      if (plVar5 == (long*)0x0) {
         return uStack_18;
      }

      do {
         pvVar1 = (void*)*plVar5;
         if (pvVar1 == (void*)0x0) {
            if ((int)plVar5[2] != 0) {
               uVar4 = _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               return uVar4;
            }

            break;
         }

         if (*(long**)( (long)pvVar1 + 0x18 ) == plVar5) {
            lVar3 = *(long*)( (long)pvVar1 + 8 );
            lVar2 = *(long*)( (long)pvVar1 + 0x10 );
            *plVar5 = lVar3;
            if (pvVar1 == (void*)plVar5[1]) {
               plVar5[1] = lVar2;
            }

            if (lVar2 != 0) {
               *(long*)( lVar2 + 8 ) = lVar3;
               lVar3 = *(long*)( (long)pvVar1 + 8 );
            }

            if (lVar3 != 0) {
               *(long*)( lVar3 + 0x10 ) = lVar2;
            }

            Memory::free_static(pvVar1, false);
            *(int*)( plVar5 + 2 ) = (int)plVar5[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar5 = *(long**)this;
      }
 while ( (int)plVar5[2] != 0 );
      uVar4 = Memory::free_static(plVar5, false);
      return uVar4;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* HashSet<int, HashMapHasherDefault, HashMapComparatorDefault<int> >::insert(int const&) */
   undefined1[16];
   HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert(int *param_1) {
      void *pvVar1;
      void *pvVar2;
      long lVar3;
      long lVar4;
      undefined1 auVar5[16];
      undefined1 auVar6[16];
      undefined1 auVar7[16];
      undefined1 auVar8[16];
      undefined1 auVar9[16];
      undefined1 auVar10[16];
      undefined1 auVar11[16];
      undefined1 auVar12[16];
      undefined1 auVar13[16];
      undefined1 auVar14[16];
      undefined1 auVar15[16];
      undefined1 auVar16[16];
      undefined1 auVar17[16];
      undefined1 auVar18[16];
      undefined1 auVar19[16];
      undefined1 auVar20[16];
      undefined1 auVar21[16];
      undefined1 auVar22[16];
      undefined1 auVar23[16];
      undefined1 auVar24[16];
      undefined1 auVar25[16];
      undefined1 auVar26[16];
      undefined1 auVar27[16];
      undefined1 auVar28[16];
      uint uVar29;
      uint uVar30;
      uint uVar31;
      uint uVar32;
      ulong uVar33;
      long lVar34;
      long lVar35;
      long lVar36;
      uint *puVar37;
      int iVar38;
      uint *in_RDX;
      long lVar39;
      ulong uVar40;
      uint uVar41;
      long *in_RSI;
      uint uVar42;
      ulong uVar43;
      undefined4 uVar44;
      ulong uVar45;
      uint uVar46;
      uint *puVar47;
      undefined1 auVar48[16];
      long *plStack_98;
      lVar34 = *in_RSI;
      uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
      if (lVar34 == 0) {
         uVar33 = (ulong)uVar30 * 4;
         lVar34 = Memory::alloc_static(uVar33, false);
         in_RSI[3] = lVar34;
         lVar34 = Memory::alloc_static(uVar33, false);
         *in_RSI = lVar34;
         lVar34 = Memory::alloc_static(uVar33, false);
         in_RSI[2] = lVar34;
         lVar34 = Memory::alloc_static(uVar33, false);
         in_RSI[1] = lVar34;
         if (uVar30 != 0) {
            memset((void*)in_RSI[3], 0, uVar33);
         }

         uVar31 = *in_RDX;
         uVar42 = *(uint*)( (long)in_RSI + 0x24 );
         lVar34 = *in_RSI;
         if (lVar34 != 0) goto LAB_0012798a;
      }
 else {
         uVar31 = *in_RDX;
         uVar42 = *(uint*)( (long)in_RSI + 0x24 );
         LAB_0012798a:if (uVar42 != 0) {
            uVar33 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
            uVar29 = ( uVar31 >> 0x10 ^ uVar31 ) * -0x7a143595;
            uVar29 = ( uVar29 ^ uVar29 >> 0xd ) * -0x3d4d51cb;
            uVar41 = uVar29 ^ uVar29 >> 0x10;
            if (uVar29 == uVar29 >> 0x10) {
               uVar41 = 1;
               uVar40 = uVar33;
            }
 else {
               uVar40 = uVar41 * uVar33;
            }

            uVar43 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 ));
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar43;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar40;
            lVar39 = SUB168(auVar5 * auVar17, 8);
            iVar38 = SUB164(auVar5 * auVar17, 8);
            uVar29 = *(uint*)( in_RSI[3] + lVar39 * 4 );
            uVar40 = (ulong)uVar29;
            if (uVar29 != 0) {
               uVar29 = 0;
               do {
                  if (uVar41 == (uint)uVar40) {
                     uVar32 = *(uint*)( in_RSI[1] + lVar39 * 4 );
                     plStack_98 = (long*)(ulong)uVar32;
                     if (*(uint*)( lVar34 + (long)plStack_98 * 4 ) == uVar31) goto LAB_00127a7f;
                  }

                  uVar29 = uVar29 + 1;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = ( iVar38 + 1 ) * uVar33;
                  auVar18._8_8_ = 0;
                  auVar18._0_8_ = uVar43;
                  lVar39 = SUB168(auVar6 * auVar18, 8);
                  uVar32 = *(uint*)( in_RSI[3] + lVar39 * 4 );
                  uVar40 = (ulong)uVar32;
                  iVar38 = SUB164(auVar6 * auVar18, 8);
               }
 while ( ( uVar32 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = uVar40 * uVar33,auVar19._8_8_ = 0,auVar19._0_8_ = uVar43,auVar8._8_8_ = 0,auVar8._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 ) + iVar38 ) - SUB164(auVar7 * auVar19, 8) ) * uVar33,auVar20._8_8_ = 0,auVar20._0_8_ = uVar43,uVar29 <= SUB164(auVar8 * auVar20, 8) );
            }

         }

      }

      if ((float)uVar30 * __LC32 < (float)( uVar42 + 1 )) {
         if ((int)in_RSI[4] == 0x1c) {
            plStack_98 = (long*)0x0;
            _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0);
            uVar42 = *(uint*)( (long)in_RSI + 0x24 );
            lVar34 = *in_RSI;
            uVar32 = 0xffffffff;
            goto LAB_00127a7f;
         }

         uVar30 = (int)in_RSI[4] + 1;
         uVar33 = (ulong)uVar30;
         if (uVar30 < 2) {
            uVar33 = 2;
         }

         uVar30 = *(uint*)( hash_table_size_primes + uVar33 * 4 );
         *(int*)( in_RSI + 4 ) = (int)uVar33;
         pvVar1 = (void*)in_RSI[3];
         uVar33 = (ulong)uVar30 << 2;
         pvVar2 = (void*)in_RSI[2];
         lVar34 = Memory::alloc_static(uVar33, false);
         in_RSI[3] = lVar34;
         lVar34 = Memory::realloc_static((void*)*in_RSI, uVar33, false);
         *in_RSI = lVar34;
         lVar34 = Memory::alloc_static(uVar33, false);
         in_RSI[2] = lVar34;
         lVar34 = Memory::realloc_static((void*)in_RSI[1], uVar33, false);
         in_RSI[1] = lVar34;
         if (uVar30 != 0) {
            memset((void*)in_RSI[3], 0, uVar33);
         }

         if (*(int*)( (long)in_RSI + 0x24 ) != 0) {
            uVar33 = 0;
            lVar39 = in_RSI[3];
            lVar3 = in_RSI[2];
            do {
               uVar45 = uVar33 & 0xffffffff;
               uVar44 = (undefined4)uVar33;
               uVar29 = 0;
               uVar30 = *(uint*)( (long)pvVar1 + ( ulong ) * (uint*)( (long)pvVar2 + uVar33 * 4 ) * 4 );
               uVar40 = (ulong)uVar30;
               lVar35 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
               uVar42 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
               uVar43 = CONCAT44(0, uVar42);
               auVar9._8_8_ = 0;
               auVar9._0_8_ = uVar40 * lVar35;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = uVar43;
               lVar36 = SUB168(auVar9 * auVar21, 8) * 4;
               iVar38 = SUB164(auVar9 * auVar21, 8);
               puVar47 = (uint*)( lVar39 + lVar36 );
               uVar31 = *puVar47;
               if (uVar31 == 0) {
                  lVar35 = uVar33 * 4;
               }
 else {
                  do {
                     auVar10._8_8_ = 0;
                     auVar10._0_8_ = (ulong)uVar31 * lVar35;
                     auVar22._8_8_ = 0;
                     auVar22._0_8_ = uVar43;
                     auVar11._8_8_ = 0;
                     auVar11._0_8_ = ( ulong )(( uVar42 + iVar38 ) - SUB164(auVar10 * auVar22, 8)) * lVar35;
                     auVar23._8_8_ = 0;
                     auVar23._0_8_ = uVar43;
                     uVar30 = SUB164(auVar11 * auVar23, 8);
                     if (uVar30 < uVar29) {
                        *(int*)( lVar3 + uVar45 * 4 ) = iVar38;
                        uVar31 = *puVar47;
                        *puVar47 = (uint)uVar40;
                        uVar29 = *(uint*)( lVar36 + lVar34 );
                        uVar40 = (ulong)uVar31;
                        *(uint*)( lVar36 + lVar34 ) = (uint)uVar45;
                        uVar45 = (ulong)uVar29;
                        uVar29 = uVar30;
                     }

                     uVar44 = (undefined4)uVar45;
                     uVar30 = (uint)uVar40;
                     uVar29 = uVar29 + 1;
                     auVar12._8_8_ = 0;
                     auVar12._0_8_ = ( ulong )(iVar38 + 1) * lVar35;
                     auVar24._8_8_ = 0;
                     auVar24._0_8_ = uVar43;
                     lVar36 = SUB168(auVar12 * auVar24, 8) * 4;
                     iVar38 = SUB164(auVar12 * auVar24, 8);
                     puVar47 = (uint*)( lVar39 + lVar36 );
                     uVar31 = *puVar47;
                  }
 while ( uVar31 != 0 );
                  lVar35 = uVar45 << 2;
               }

               *puVar47 = uVar30;
               uVar33 = uVar33 + 1;
               *(int*)( lVar3 + lVar35 ) = iVar38;
               *(undefined4*)( lVar34 + lVar36 ) = uVar44;
            }
 while ( (uint)uVar33 < *(uint*)( (long)in_RSI + 0x24 ) );
         }

         Memory::free_static(pvVar1, false);
         Memory::free_static(pvVar2, false);
         uVar42 = *(uint*)( (long)in_RSI + 0x24 );
         lVar34 = *in_RSI;
         uVar31 = *in_RDX;
      }

      uVar30 = ( uVar31 >> 0x10 ^ uVar31 ) * -0x7a143595;
      uVar29 = ( uVar30 ^ uVar30 >> 0xd ) * -0x3d4d51cb;
      uVar30 = uVar29 ^ uVar29 >> 0x10;
      if (uVar29 == uVar29 >> 0x10) {
         uVar33 = 1;
         uVar30 = 1;
      }
 else {
         uVar33 = (ulong)uVar30;
      }

      uVar41 = 0;
      *(uint*)( lVar34 + (ulong)uVar42 * 4 ) = uVar31;
      lVar3 = in_RSI[3];
      uVar42 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
      uVar40 = CONCAT44(0, uVar42);
      lVar36 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar33 * lVar36;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar40;
      lVar39 = SUB168(auVar13 * auVar25, 8) * 4;
      iVar38 = SUB164(auVar13 * auVar25, 8);
      lVar35 = in_RSI[2];
      puVar47 = (uint*)( lVar3 + lVar39 );
      lVar4 = in_RSI[1];
      uVar31 = *puVar47;
      uVar29 = *(uint*)( (long)in_RSI + 0x24 );
      plStack_98 = in_RSI;
      while (uVar31 != 0) {
         auVar14._8_8_ = 0;
         auVar14._0_8_ = (ulong)uVar31 * lVar36;
         auVar26._8_8_ = 0;
         auVar26._0_8_ = uVar40;
         auVar15._8_8_ = 0;
         auVar15._0_8_ = ( ulong )(( uVar42 + iVar38 ) - SUB164(auVar14 * auVar26, 8)) * lVar36;
         auVar27._8_8_ = 0;
         auVar27._0_8_ = uVar40;
         uVar31 = SUB164(auVar15 * auVar27, 8);
         uVar32 = uVar30;
         uVar46 = uVar29;
         if (uVar31 < uVar41) {
            puVar37 = (uint*)( lVar39 + lVar4 );
            *(int*)( lVar35 + (ulong)uVar29 * 4 ) = iVar38;
            uVar32 = *puVar47;
            *puVar47 = uVar30;
            uVar46 = *puVar37;
            *puVar37 = uVar29;
            uVar41 = uVar31;
         }

         uVar41 = uVar41 + 1;
         auVar16._8_8_ = 0;
         auVar16._0_8_ = ( ulong )(iVar38 + 1) * lVar36;
         auVar28._8_8_ = 0;
         auVar28._0_8_ = uVar40;
         plStack_98 = SUB168(auVar16 * auVar28, 8);
         lVar39 = (long)plStack_98 * 4;
         iVar38 = SUB164(auVar16 * auVar28, 8);
         puVar47 = (uint*)( lVar3 + lVar39 );
         uVar29 = uVar46;
         uVar30 = uVar32;
         uVar31 = *puVar47;
      }
;
      *puVar47 = uVar30;
      *(int*)( lVar35 + (ulong)uVar29 * 4 ) = iVar38;
      *(uint*)( lVar4 + lVar39 ) = uVar29;
      uVar32 = *(uint*)( (long)in_RSI + 0x24 );
      uVar42 = uVar32 + 1;
      *(uint*)( (long)in_RSI + 0x24 ) = uVar42;
      LAB_00127a7f:param_1[3] = uVar32;
      *(long*)param_1 = lVar34;
      param_1[2] = uVar42;
      auVar48._8_8_ = plStack_98;
      auVar48._0_8_ = param_1;
      return auVar48;
   }

   /* List<GDScriptTokenizer::Token, DefaultAllocator>::~List() */
   void List<GDScriptTokenizer::Token,DefaultAllocator>::~List(List<GDScriptTokenizer::Token,DefaultAllocator> *this) {
      long *plVar1;
      void *pvVar2;
      long lVar3;
      undefined8 *puVar4;
      puVar4 = *(undefined8**)this;
      if (puVar4 == (undefined8*)0x0) {
         return;
      }

      do {
         pvVar2 = (void*)*puVar4;
         if (pvVar2 == (void*)0x0) {
            if (*(int*)( puVar4 + 2 ) != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               return;
            }

            break;
         }

         if (*(undefined8**)( (long)pvVar2 + 0x58 ) == puVar4) {
            *puVar4 = *(undefined8*)( (long)pvVar2 + 0x48 );
            if (pvVar2 == (void*)puVar4[1]) {
               puVar4[1] = *(undefined8*)( (long)pvVar2 + 0x50 );
            }

            if (*(long*)( (long)pvVar2 + 0x50 ) != 0) {
               *(undefined8*)( *(long*)( (long)pvVar2 + 0x50 ) + 0x48 ) = *(undefined8*)( (long)pvVar2 + 0x48 );
            }

            if (*(long*)( (long)pvVar2 + 0x48 ) != 0) {
               *(undefined8*)( *(long*)( (long)pvVar2 + 0x48 ) + 0x50 ) = *(undefined8*)( (long)pvVar2 + 0x50 );
            }

            if (*(long*)( (long)pvVar2 + 0x40 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( (long)pvVar2 + 0x40 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( (long)pvVar2 + 0x40 );
                  *(undefined8*)( (long)pvVar2 + 0x40 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            if (( &Variant::needs_deinit )[*(int*)( (long)pvVar2 + 8 )] != '\0') {
               Variant::_clear_internal();
            }

            Memory::free_static(pvVar2, false);
            *(int*)( puVar4 + 2 ) = *(int*)( puVar4 + 2 ) + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         puVar4 = *(undefined8**)this;
      }
 while ( *(int*)( puVar4 + 2 ) != 0 );
      Memory::free_static(puVar4, false);
      return;
   }

   /* List<List<int, DefaultAllocator>, DefaultAllocator>::~List() */
   undefined8 List<List<int,DefaultAllocator>,DefaultAllocator>::~List(List<List<int,DefaultAllocator>,DefaultAllocator> *this) {
      long *plVar1;
      long lVar2;
      void *pvVar3;
      long lVar4;
      undefined8 uVar5;
      long *plVar6;
      long *plVar7;
      undefined8 uStack_28;
      plVar6 = *(long**)this;
      if (plVar6 == (long*)0x0) {
         return uStack_28;
      }

      do {
         plVar1 = (long*)*plVar6;
         if (plVar1 == (long*)0x0) {
            if ((int)plVar6[2] != 0) {
               uVar5 = _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               return uVar5;
            }

            break;
         }

         if ((long*)plVar1[3] == plVar6) {
            lVar4 = plVar1[1];
            lVar2 = plVar1[2];
            *plVar6 = lVar4;
            if (plVar1 == (long*)plVar6[1]) {
               plVar6[1] = lVar2;
            }

            if (lVar2 != 0) {
               *(long*)( lVar2 + 8 ) = lVar4;
               lVar4 = plVar1[1];
            }

            if (lVar4 != 0) {
               *(long*)( lVar4 + 0x10 ) = lVar2;
            }

            plVar7 = (long*)*plVar1;
            if (plVar7 != (long*)0x0) {
               do {
                  pvVar3 = (void*)*plVar7;
                  if (pvVar3 == (void*)0x0) {
                     if ((int)plVar7[2] != 0) {
                        _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                        goto LAB_0012817f;
                     }

                     break;
                  }

                  if (plVar7 == *(long**)( (long)pvVar3 + 0x18 )) {
                     lVar4 = *(long*)( (long)pvVar3 + 8 );
                     lVar2 = *(long*)( (long)pvVar3 + 0x10 );
                     *plVar7 = lVar4;
                     if (pvVar3 == (void*)plVar7[1]) {
                        plVar7[1] = lVar2;
                     }

                     if (lVar2 != 0) {
                        *(long*)( lVar2 + 8 ) = lVar4;
                        lVar4 = *(long*)( (long)pvVar3 + 8 );
                     }

                     if (lVar4 != 0) {
                        *(long*)( lVar4 + 0x10 ) = lVar2;
                     }

                     Memory::free_static(pvVar3, false);
                     *(int*)( plVar7 + 2 ) = (int)plVar7[2] + -1;
                  }
 else {
                     _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                  }

                  plVar7 = (long*)*plVar1;
               }
 while ( (int)plVar7[2] != 0 );
               Memory::free_static(plVar7, false);
            }

            LAB_0012817f:Memory::free_static(plVar1, false);
            *(int*)( plVar6 + 2 ) = (int)plVar6[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar6 = *(long**)this;
      }
 while ( (int)plVar6[2] != 0 );
      uVar5 = Memory::free_static(plVar6, false);
      return uVar5;
   }

   /* List<Pair<StringName, int>, DefaultAllocator>::~List() */
   void List<Pair<StringName,int>,DefaultAllocator>::~List(List<Pair<StringName,int>,DefaultAllocator> *this) {
      long *plVar1;
      long lVar2;
      long lVar3;
      long *plVar4;
      plVar4 = *(long**)this;
      if (plVar4 == (long*)0x0) {
         return;
      }

      do {
         plVar1 = (long*)*plVar4;
         if (plVar1 == (long*)0x0) {
            if ((int)plVar4[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               return;
            }

            break;
         }

         if ((long*)plVar1[4] == plVar4) {
            lVar3 = plVar1[2];
            lVar2 = plVar1[3];
            *plVar4 = lVar3;
            if (plVar1 == (long*)plVar4[1]) {
               plVar4[1] = lVar2;
            }

            if (lVar2 != 0) {
               *(long*)( lVar2 + 0x10 ) = lVar3;
               lVar3 = plVar1[2];
            }

            if (lVar3 != 0) {
               *(long*)( lVar3 + 0x18 ) = lVar2;
            }

            if (( StringName::configured != '\0' ) && ( *plVar1 != 0 )) {
               StringName::unref();
            }

            Memory::free_static(plVar1, false);
            *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar4 = *(long**)this;
      }
 while ( (int)plVar4[2] != 0 );
      Memory::free_static(plVar4, false);
      return;
   }

   /* List<Pair<String, Variant>, DefaultAllocator>::~List() */
   void List<Pair<String,Variant>,DefaultAllocator>::~List(List<Pair<String,Variant>,DefaultAllocator> *this) {
      long *plVar1;
      long *plVar2;
      long lVar3;
      long *plVar4;
      plVar4 = *(long**)this;
      if (plVar4 == (long*)0x0) {
         return;
      }

      do {
         plVar2 = (long*)*plVar4;
         if (plVar2 == (long*)0x0) {
            if ((int)plVar4[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               return;
            }

            break;
         }

         if ((long*)plVar2[6] == plVar4) {
            *plVar4 = plVar2[4];
            if (plVar2 == (long*)plVar4[1]) {
               plVar4[1] = plVar2[5];
            }

            if (plVar2[5] != 0) {
               *(long*)( plVar2[5] + 0x20 ) = plVar2[4];
            }

            if (plVar2[4] != 0) {
               *(long*)( plVar2[4] + 0x28 ) = plVar2[5];
            }

            if (( &Variant::needs_deinit )[(int)plVar2[1]] != '\0') {
               Variant::_clear_internal();
            }

            if (*plVar2 != 0) {
               LOCK();
               plVar1 = (long*)( *plVar2 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *plVar2;
                  *plVar2 = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(plVar2, false);
            *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar4 = *(long**)this;
      }
 while ( (int)plVar4[2] != 0 );
      Memory::free_static(plVar4, false);
      return;
   }

   /* GDScriptNativeClass const* Object::cast_to<GDScriptNativeClass>(Object const*) */
   GDScriptNativeClass *Object::cast_to<GDScriptNativeClass>(Object *param_1) {
      GDScriptNativeClass *pGVar1;
      if (param_1 != (Object*)0x0) {
         pGVar1 = (GDScriptNativeClass*)__dynamic_cast(param_1, &typeinfo, &GDScriptNativeClass::typeinfo, 0);
         return pGVar1;
      }

      return (GDScriptNativeClass*)0x0;
   }

   /* List<Variant, DefaultAllocator>::~List() */
   void List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this) {
      int *piVar1;
      undefined8 *puVar2;
      puVar2 = *(undefined8**)this;
      if (puVar2 == (undefined8*)0x0) {
         return;
      }

      do {
         piVar1 = (int*)*puVar2;
         if (piVar1 == (int*)0x0) {
            if (*(int*)( puVar2 + 2 ) != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               return;
            }

            break;
         }

         if (*(undefined8**)( piVar1 + 10 ) == puVar2) {
            *puVar2 = *(undefined8*)( piVar1 + 6 );
            if (piVar1 == (int*)puVar2[1]) {
               puVar2[1] = *(undefined8*)( piVar1 + 8 );
            }

            if (*(long*)( piVar1 + 8 ) != 0) {
               *(undefined8*)( *(long*)( piVar1 + 8 ) + 0x18 ) = *(undefined8*)( piVar1 + 6 );
            }

            if (*(long*)( piVar1 + 6 ) != 0) {
               *(undefined8*)( *(long*)( piVar1 + 6 ) + 0x20 ) = *(undefined8*)( piVar1 + 8 );
            }

            if (( &Variant::needs_deinit )[*piVar1] != '\0') {
               Variant::_clear_internal();
            }

            Memory::free_static(piVar1, false);
            *(int*)( puVar2 + 2 ) = *(int*)( puVar2 + 2 ) + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         puVar2 = *(undefined8**)this;
      }
 while ( *(int*)( puVar2 + 2 ) != 0 );
      Memory::free_static(puVar2, false);
      return;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::operator[](StringName const&) */
   Variant * __thiscallHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator [](HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>> * this, StringName * param_1);
   {
      uint *puVar1;
      undefined8 *puVar2;
      void *pvVar3;
      void *__s;
      undefined1 auVar4[16];
      undefined1 auVar5[16];
      undefined1 auVar6[16];
      undefined1 auVar7[16];
      undefined1 auVar8[16];
      undefined1 auVar9[16];
      undefined1 auVar10[16];
      undefined1 auVar11[16];
      undefined1 auVar12[16];
      undefined1 auVar13[16];
      undefined1 auVar14[16];
      undefined1 auVar15[16];
      undefined1 auVar16[16];
      undefined1 auVar17[16];
      undefined1 auVar18[16];
      undefined1 auVar19[16];
      undefined1 auVar20[16];
      undefined1 auVar21[16];
      undefined1 auVar22[16];
      undefined1 auVar23[16];
      undefined1 auVar24[16];
      undefined1 auVar25[16];
      undefined1 auVar26[16];
      undefined1 auVar27[16];
      undefined1 auVar28[16];
      undefined1 auVar29[16];
      undefined1 auVar30[16];
      undefined1 auVar31[16];
      undefined1 auVar32[16];
      undefined1 auVar33[16];
      undefined1 auVar34[16];
      undefined1 auVar35[16];
      uint uVar36;
      uint uVar37;
      uint uVar38;
      ulong uVar39;
      undefined8 uVar40;
      void *__s_00;
      undefined8 *puVar41;
      void *pvVar42;
      ulong uVar43;
      int iVar44;
      long lVar45;
      long lVar46;
      long lVar47;
      ulong uVar48;
      undefined8 uVar49;
      uint uVar50;
      uint uVar51;
      uint uVar52;
      long lVar53;
      undefined8 *puVar54;
      long in_FS_OFFSET;
      Variant *local_c8;
      int local_98[2];
      undefined1 local_90[16];
      undefined1 local_78[16];
      long local_68;
      int local_60[8];
      long local_40;
      lVar53 = *(long*)( this + 8 );
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar39 = CONCAT44(0, uVar37);
      if (lVar53 == 0) {
         LAB_00128e08:local_90 = (undefined1[16])0x0;
         local_98[0] = 0;
         local_98[1] = 0;
         uVar43 = uVar39 * 4;
         uVar48 = uVar39 * 8;
         uVar40 = Memory::alloc_static(uVar43, false);
         *(undefined8*)( this + 0x10 ) = uVar40;
         pvVar42 = (void*)Memory::alloc_static(uVar48, false);
         *(void**)( this + 8 ) = pvVar42;
         if ((int)uVar39 != 0) {
            pvVar3 = *(void**)( this + 0x10 );
            if (( pvVar3 < (void*)( (long)pvVar42 + uVar48 ) ) && ( pvVar42 < (void*)( (long)pvVar3 + uVar43 ) )) {
               uVar43 = 0;
               do {
                  *(undefined4*)( (long)pvVar3 + uVar43 * 4 ) = 0;
                  *(undefined8*)( (long)pvVar42 + uVar43 * 8 ) = 0;
                  uVar43 = uVar43 + 1;
               }
 while ( uVar39 != uVar43 );
            }
 else {
               memset(pvVar3, 0, uVar43);
               memset(pvVar42, 0, uVar48);
            }

            LAB_0012881e:iVar44 = *(int*)( this + 0x2c );
            if (iVar44 != 0) {
               LAB_0012882e:uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
               uVar43 = CONCAT44(0, uVar37);
               lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               if (*(long*)param_1 == 0) {
                  uVar38 = StringName::get_empty_hash();
               }
 else {
                  uVar38 = *(uint*)( *(long*)param_1 + 0x20 );
               }

               if (uVar38 == 0) {
                  uVar38 = 1;
               }

               uVar52 = 0;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = (ulong)uVar38 * lVar53;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar43;
               lVar46 = SUB168(auVar8 * auVar24, 8);
               uVar51 = SUB164(auVar8 * auVar24, 8);
               uVar50 = *(uint*)( *(long*)( this + 0x10 ) + lVar46 * 4 );
               if (uVar50 != 0) {
                  do {
                     if (( uVar38 == uVar50 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar46 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                        Variant::operator =((Variant*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar51 * 8 ) + 0x18 ), (Variant*)local_98);
                        local_c8 = (Variant*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar51 * 8 ) + 0x18 );
                        goto LAB_00128d4b;
                     }

                     uVar52 = uVar52 + 1;
                     auVar9._8_8_ = 0;
                     auVar9._0_8_ = ( ulong )(uVar51 + 1) * lVar53;
                     auVar25._8_8_ = 0;
                     auVar25._0_8_ = uVar43;
                     lVar46 = SUB168(auVar9 * auVar25, 8);
                     uVar50 = *(uint*)( *(long*)( this + 0x10 ) + lVar46 * 4 );
                     uVar51 = SUB164(auVar9 * auVar25, 8);
                  }
 while ( ( uVar50 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar50 * lVar53,auVar26._8_8_ = 0,auVar26._0_8_ = uVar43,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( uVar37 + uVar51 ) - SUB164(auVar10 * auVar26, 8)) * lVar53,auVar27._8_8_ = 0,auVar27._0_8_ = uVar43,uVar52 <= SUB164(auVar11 * auVar27, 8) );
               }

               iVar44 = *(int*)( this + 0x2c );
            }

            goto LAB_00128955;
         }

         iVar44 = *(int*)( this + 0x2c );
         if (pvVar42 == (void*)0x0) goto LAB_00128955;
         if (*(int*)( this + 0x2c ) != 0) goto LAB_0012882e;
         LAB_0012897b:uVar37 = *(uint*)( this + 0x28 );
         if (uVar37 == 0x1c) {
            _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
            local_c8 = (Variant*)0x18;
            goto LAB_00128d4b;
         }

         uVar39 = ( ulong )(uVar37 + 1);
         uVar38 = *(uint*)( hash_table_size_primes + (ulong)uVar37 * 4 );
         *(undefined4*)( this + 0x2c ) = 0;
         if (uVar37 + 1 < 2) {
            uVar39 = 2;
         }

         uVar37 = *(uint*)( hash_table_size_primes + uVar39 * 4 );
         uVar48 = (ulong)uVar37;
         *(int*)( this + 0x28 ) = (int)uVar39;
         pvVar42 = *(void**)( this + 8 );
         uVar39 = uVar48 * 4;
         uVar43 = uVar48 * 8;
         pvVar3 = *(void**)( this + 0x10 );
         uVar40 = Memory::alloc_static(uVar39, false);
         *(undefined8*)( this + 0x10 ) = uVar40;
         __s_00 = (void*)Memory::alloc_static(uVar43, false);
         *(void**)( this + 8 ) = __s_00;
         if (uVar37 != 0) {
            __s = *(void**)( this + 0x10 );
            if (( __s < (void*)( (long)__s_00 + uVar43 ) ) && ( __s_00 < (void*)( (long)__s + uVar39 ) )) {
               uVar39 = 0;
               do {
                  *(undefined4*)( (long)__s + uVar39 * 4 ) = 0;
                  *(undefined8*)( (long)__s_00 + uVar39 * 8 ) = 0;
                  uVar39 = uVar39 + 1;
               }
 while ( uVar39 != uVar48 );
            }
 else {
               memset(__s, 0, uVar39);
               memset(__s_00, 0, uVar43);
            }

         }

         if (uVar38 != 0) {
            local_c8 = (Variant*)0x0;
            do {
               uVar37 = *(uint*)( (long)pvVar3 + (long)local_c8 * 4 );
               if (uVar37 != 0) {
                  uVar52 = 0;
                  lVar53 = *(long*)( this + 0x10 );
                  uVar50 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
                  uVar39 = CONCAT44(0, uVar50);
                  lVar46 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = (ulong)uVar37 * lVar46;
                  auVar28._8_8_ = 0;
                  auVar28._0_8_ = uVar39;
                  lVar45 = SUB168(auVar12 * auVar28, 8);
                  puVar1 = (uint*)( lVar53 + lVar45 * 4 );
                  iVar44 = SUB164(auVar12 * auVar28, 8);
                  uVar51 = *puVar1;
                  uVar40 = *(undefined8*)( (long)pvVar42 + (long)local_c8 * 8 );
                  while (uVar51 != 0) {
                     auVar13._8_8_ = 0;
                     auVar13._0_8_ = (ulong)uVar51 * lVar46;
                     auVar29._8_8_ = 0;
                     auVar29._0_8_ = uVar39;
                     auVar14._8_8_ = 0;
                     auVar14._0_8_ = ( ulong )(( uVar50 + iVar44 ) - SUB164(auVar13 * auVar29, 8)) * lVar46;
                     auVar30._8_8_ = 0;
                     auVar30._0_8_ = uVar39;
                     uVar36 = SUB164(auVar14 * auVar30, 8);
                     uVar49 = uVar40;
                     if (uVar36 < uVar52) {
                        puVar41 = (undefined8*)( (long)__s_00 + lVar45 * 8 );
                        *puVar1 = uVar37;
                        uVar49 = *puVar41;
                        *puVar41 = uVar40;
                        uVar37 = uVar51;
                        uVar52 = uVar36;
                     }

                     uVar52 = uVar52 + 1;
                     auVar15._8_8_ = 0;
                     auVar15._0_8_ = ( ulong )(iVar44 + 1) * lVar46;
                     auVar31._8_8_ = 0;
                     auVar31._0_8_ = uVar39;
                     lVar45 = SUB168(auVar15 * auVar31, 8);
                     puVar1 = (uint*)( lVar53 + lVar45 * 4 );
                     iVar44 = SUB164(auVar15 * auVar31, 8);
                     uVar40 = uVar49;
                     uVar51 = *puVar1;
                  }
;
                  *(undefined8*)( (long)__s_00 + lVar45 * 8 ) = uVar40;
                  *puVar1 = uVar37;
                  *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
               }

               local_c8 = (Variant*)( (long)local_c8 + 1 );
            }
 while ( (Variant*)(ulong)uVar38 != local_c8 );
            Memory::free_static(pvVar42, false);
            Memory::free_static(pvVar3, false);
         }

      }
 else {
         if (*(int*)( this + 0x2c ) != 0) {
            lVar46 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            if (*(long*)param_1 == 0) {
               uVar38 = StringName::get_empty_hash();
               lVar53 = *(long*)( this + 8 );
            }
 else {
               uVar38 = *(uint*)( *(long*)param_1 + 0x20 );
            }

            if (uVar38 == 0) {
               uVar38 = 1;
            }

            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar38 * lVar46;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar39;
            lVar45 = SUB168(auVar4 * auVar20, 8);
            uVar51 = SUB164(auVar4 * auVar20, 8);
            uVar50 = *(uint*)( *(long*)( this + 0x10 ) + lVar45 * 4 );
            if (uVar50 != 0) {
               uVar52 = 0;
               do {
                  if (( uVar38 == uVar50 ) && ( *(long*)( *(long*)( lVar53 + lVar45 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                     local_c8 = (Variant*)( *(long*)( lVar53 + (ulong)uVar51 * 8 ) + 0x18 );
                     goto LAB_001287c4;
                  }

                  uVar52 = uVar52 + 1;
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = ( ulong )(uVar51 + 1) * lVar46;
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = uVar39;
                  lVar45 = SUB168(auVar5 * auVar21, 8);
                  uVar50 = *(uint*)( *(long*)( this + 0x10 ) + lVar45 * 4 );
                  uVar51 = SUB164(auVar5 * auVar21, 8);
               }
 while ( ( uVar50 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar50 * lVar46,auVar22._8_8_ = 0,auVar22._0_8_ = uVar39,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar51 + uVar37 ) - SUB164(auVar6 * auVar22, 8)) * lVar46,auVar23._8_8_ = 0,auVar23._0_8_ = uVar39,uVar52 <= SUB164(auVar7 * auVar23, 8) );
            }

            local_98[0] = 0;
            local_98[1] = 0;
            local_90 = (undefined1[16])0x0;
            uVar39 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            if (lVar53 == 0) goto LAB_00128e08;
            goto LAB_0012881e;
         }

         local_98[0] = 0;
         local_98[1] = 0;
         local_90 = (undefined1[16])0x0;
         iVar44 = 0;
         LAB_00128955:if ((float)uVar39 * __LC32 < (float)( iVar44 + 1 )) goto LAB_0012897b;
      }

      local_78 = (undefined1[16])0x0;
      StringName::StringName((StringName*)&local_68, param_1);
      Variant::Variant((Variant*)local_60, (Variant*)local_98);
      puVar41 = (undefined8*)operator_new(0x30, "");
      *puVar41 = local_78._0_8_;
      puVar41[1] = local_78._8_8_;
      StringName::StringName((StringName*)( puVar41 + 2 ), (StringName*)&local_68);
      local_c8 = (Variant*)( puVar41 + 3 );
      Variant::Variant(local_c8, (Variant*)local_60);
      if (( &Variant::needs_deinit )[local_60[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      if (*(undefined8**)( this + 0x20 ) == (undefined8*)0x0) {
         *(undefined8**)( this + 0x18 ) = puVar41;
      }
 else {
         **(undefined8**)( this + 0x20 ) = puVar41;
         puVar41[1] = *(undefined8*)( this + 0x20 );
      }

      *(undefined8**)( this + 0x20 ) = puVar41;
      if (*(long*)param_1 == 0) {
         uVar37 = StringName::get_empty_hash();
      }
 else {
         uVar37 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar37 == 0) {
         uVar37 = 1;
      }

      uVar39 = (ulong)uVar37;
      uVar51 = 0;
      lVar53 = *(long*)( this + 0x10 );
      uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar43 = CONCAT44(0, uVar38);
      lVar46 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar39 * lVar46;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar43;
      lVar47 = SUB168(auVar16 * auVar32, 8);
      lVar45 = *(long*)( this + 8 );
      puVar1 = (uint*)( lVar53 + lVar47 * 4 );
      iVar44 = SUB164(auVar16 * auVar32, 8);
      uVar50 = *puVar1;
      while (uVar50 != 0) {
         auVar17._8_8_ = 0;
         auVar17._0_8_ = (ulong)uVar50 * lVar46;
         auVar33._8_8_ = 0;
         auVar33._0_8_ = uVar43;
         auVar18._8_8_ = 0;
         auVar18._0_8_ = ( ulong )(( uVar38 + iVar44 ) - SUB164(auVar17 * auVar33, 8)) * lVar46;
         auVar34._8_8_ = 0;
         auVar34._0_8_ = uVar43;
         uVar37 = SUB164(auVar18 * auVar34, 8);
         puVar54 = puVar41;
         if (uVar37 < uVar51) {
            puVar2 = (undefined8*)( lVar45 + lVar47 * 8 );
            *puVar1 = (uint)uVar39;
            uVar39 = (ulong)uVar50;
            puVar54 = (undefined8*)*puVar2;
            *puVar2 = puVar41;
            uVar51 = uVar37;
         }

         uVar37 = (uint)uVar39;
         uVar51 = uVar51 + 1;
         auVar19._8_8_ = 0;
         auVar19._0_8_ = ( ulong )(iVar44 + 1) * lVar46;
         auVar35._8_8_ = 0;
         auVar35._0_8_ = uVar43;
         lVar47 = SUB168(auVar19 * auVar35, 8);
         puVar1 = (uint*)( lVar53 + lVar47 * 4 );
         iVar44 = SUB164(auVar19 * auVar35, 8);
         puVar41 = puVar54;
         uVar50 = *puVar1;
      }
;
      *(undefined8**)( lVar45 + lVar47 * 8 ) = puVar41;
      *puVar1 = uVar37;
      *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
      LAB_00128d4b:if (( &Variant::needs_deinit )[local_98[0]] != '\0') {
         Variant::_clear_internal();
      }

      LAB_001287c4:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return local_c8;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* HashMap<String, ScriptLanguage::CodeCompletionOption, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   ScriptLanguage::CodeCompletionOption> > >::~HashMap() */
   void HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>::~HashMap(HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>> *this) {
      long *plVar1;
      uint uVar2;
      long lVar3;
      Object *pOVar4;
      char cVar5;
      long lVar6;
      void *pvVar7;
      pvVar7 = *(void**)( this + 8 );
      if (pvVar7 == (void*)0x0) {
         return;
      }

      if (*(int*)( this + 0x2c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x2c ) = 0;
            *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         }
 else {
            lVar6 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x10 ) + lVar6 ) != 0) {
                  pvVar7 = *(void**)( (long)pvVar7 + lVar6 * 2 );
                  *(int*)( *(long*)( this + 0x10 ) + lVar6 ) = 0;
                  Array::~Array((Array*)( (long)pvVar7 + 0x90 ));
                  for (int i = 0; i < 3; i++) {
                     if (*(long*)( (long)pvVar7 + ( -16*i + 136 ) ) != 0) {
                        LOCK();
                        plVar1 = (long*)( *(long*)( (long)pvVar7 + ( -16*i + 136 ) ) + -16 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           lVar3 = *(long*)( (long)pvVar7 + ( -16*i + 136 ) );
                           *(undefined8*)( (long)pvVar7 + ( -16*i + 136 ) ) = 0;
                           Memory::free_static((void*)( lVar3 + -16 ), false);
                        }

                     }

                  }

                  if (( &Variant::needs_deinit )[*(int*)( (long)pvVar7 + 0x48 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( *(long*)( (long)pvVar7 + 0x40 ) != 0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0') {
                     pOVar4 = *(Object**)( (long)pvVar7 + 0x40 );
                     cVar5 = predelete_handler(pOVar4);
                     if (cVar5 != '\0') {
                        ( **(code**)( *(long*)pOVar4 + 0x140 ) )();
                        Memory::free_static(pOVar4, false);
                     }

                  }

                  if (*(long*)( (long)pvVar7 + 0x28 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar7 + 0x28 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar7 + 0x28 );
                        *(undefined8*)( (long)pvVar7 + 0x28 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (*(long*)( (long)pvVar7 + 0x20 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar7 + 0x20 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar7 + 0x20 );
                        *(undefined8*)( (long)pvVar7 + 0x20 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (*(long*)( (long)pvVar7 + 0x10 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar7 + 0x10 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar7 + 0x10 );
                        *(undefined8*)( (long)pvVar7 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar7, false);
                  pvVar7 = *(void**)( this + 8 );
                  *(undefined8*)( (long)pvVar7 + lVar6 * 2 ) = 0;
               }

               lVar6 = lVar6 + 4;
            }
 while ( lVar6 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x2c ) = 0;
            *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) {
               return;
            }

         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x10 ), false);
      return;
   }

   /* HashMap<StringName, Ref<GDScript>, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Ref<GDScript> > > >::getptr(StringName const&)
   const */
   long HashMap<StringName,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<GDScript>>>>::getptr(HashMap<StringName,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<GDScript>>>> *this, StringName *param_1) {
      uint uVar1;
      long lVar2;
      undefined1 auVar3[16];
      undefined1 auVar4[16];
      undefined1 auVar5[16];
      undefined1 auVar6[16];
      undefined1 auVar7[16];
      undefined1 auVar8[16];
      undefined1 auVar9[16];
      undefined1 auVar10[16];
      uint uVar11;
      uint uVar12;
      long lVar13;
      uint uVar14;
      uint uVar15;
      ulong uVar16;
      if (*(long*)( this + 8 ) == 0) {
         return 0;
      }

      if (*(int*)( this + 0x2c ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar16 = CONCAT44(0, uVar1);
         lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar11 = StringName::get_empty_hash();
         }
 else {
            uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar11 == 0) {
            uVar11 = 1;
         }

         auVar3._8_8_ = 0;
         auVar3._0_8_ = (ulong)uVar11 * lVar2;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar16;
         lVar13 = SUB168(auVar3 * auVar7, 8);
         uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
         uVar12 = SUB164(auVar3 * auVar7, 8);
         if (uVar14 != 0) {
            uVar15 = 0;
            do {
               if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  return *(long*)( *(long*)( this + 8 ) + (ulong)uVar12 * 8 ) + 0x18;
               }

               uVar15 = uVar15 + 1;
               auVar4._8_8_ = 0;
               auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = uVar16;
               lVar13 = SUB168(auVar4 * auVar8, 8);
               uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
               uVar12 = SUB164(auVar4 * auVar8, 8);
            }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar16,uVar15 <= SUB164(auVar6 * auVar10, 8) );
         }

      }

      return 0;
   }

   /* CowData<char32_t>::_unref() */
   void CowData<char32_t>::_unref(CowData<char32_t> *this) {
      long *plVar1;
      long lVar2;
      if (*(long*)this == 0) {
         return;
      }

      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
         *(undefined8*)this = 0;
         return;
      }

      lVar2 = *(long*)this;
      *(undefined8*)this = 0;
      Memory::free_static((void*)( lVar2 + -0x10 ), false);
      return;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* HashMap<int, String, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, String> > >::operator[](int const&) */
   undefined1 * __thiscallHashMap<int,String,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,String>>>::operator [](HashMap<int,String,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,String>>> * this, int, *param_1);
   {
      uint *puVar1;
      undefined8 *puVar2;
      void *pvVar3;
      void *__s;
      undefined1 auVar4[16];
      undefined1 auVar5[16];
      undefined1 auVar6[16];
      undefined1 auVar7[16];
      undefined1 auVar8[16];
      undefined1 auVar9[16];
      undefined1 auVar10[16];
      undefined1 auVar11[16];
      undefined1 auVar12[16];
      undefined1 auVar13[16];
      undefined1 auVar14[16];
      undefined1 auVar15[16];
      undefined1 auVar16[16];
      undefined1 auVar17[16];
      undefined1 auVar18[16];
      undefined1 auVar19[16];
      undefined1 auVar20[16];
      undefined1 auVar21[16];
      undefined1 auVar22[16];
      undefined1 auVar23[16];
      undefined1 auVar24[16];
      undefined1 auVar25[16];
      undefined1 auVar26[16];
      undefined1 auVar27[16];
      undefined1 auVar28[16];
      undefined1 auVar29[16];
      undefined1 auVar30[16];
      undefined1 auVar31[16];
      undefined1 auVar32[16];
      undefined1 auVar33[16];
      undefined1 auVar34[16];
      undefined1 auVar35[16];
      undefined1(*pauVar36)[16];
      uint uVar37;
      uint uVar38;
      uint uVar39;
      ulong uVar40;
      undefined8 uVar41;
      void *__s_00;
      undefined1(*pauVar42)[16];
      ulong uVar43;
      int iVar44;
      ulong uVar45;
      long lVar46;
      long lVar47;
      long lVar48;
      ulong uVar49;
      undefined8 uVar50;
      uint uVar51;
      ulong uVar52;
      uint uVar53;
      uint uVar54;
      long lVar55;
      undefined1(*pauVar56)[16];
      long in_FS_OFFSET;
      void *local_a8;
      undefined8 local_70;
      undefined1 local_68[16];
      int local_58;
      undefined8 local_50[2];
      long local_40;
      local_a8 = *(void**)( this + 8 );
      uVar38 = *param_1;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      uVar40 = ( ulong ) * (uint*)( this + 0x28 );
      uVar39 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
      uVar52 = CONCAT44(0, uVar39);
      if (local_a8 == (void*)0x0) {
         local_70 = 0;
         uVar40 = uVar52 * 4;
         uVar49 = uVar52 * 8;
         uVar41 = Memory::alloc_static(uVar40, false);
         *(undefined8*)( this + 0x10 ) = uVar41;
         local_a8 = (void*)Memory::alloc_static(uVar49, false);
         *(void**)( this + 8 ) = local_a8;
         if (uVar39 == 0) {
            uVar38 = *param_1;
            iVar44 = *(int*)( this + 0x2c );
            if (local_a8 == (void*)0x0) goto LAB_001294ac;
         }
 else {
            pvVar3 = *(void**)( this + 0x10 );
            if (( pvVar3 < (void*)( (long)local_a8 + uVar49 ) ) && ( local_a8 < (void*)( (long)pvVar3 + uVar40 ) )) {
               uVar40 = 0;
               do {
                  *(undefined4*)( (long)pvVar3 + uVar40 * 4 ) = 0;
                  *(undefined8*)( (long)local_a8 + uVar40 * 8 ) = 0;
                  uVar40 = uVar40 + 1;
               }
 while ( uVar52 != uVar40 );
               uVar38 = *param_1;
               iVar44 = *(int*)( this + 0x2c );
            }
 else {
               memset(pvVar3, 0, uVar40);
               memset(local_a8, 0, uVar49);
               uVar38 = *param_1;
               iVar44 = *(int*)( this + 0x2c );
            }

         }

         if (iVar44 != 0) {
            uVar40 = ( ulong ) * (uint*)( this + 0x28 );
            lVar55 = *(long*)( this + 0x10 );
            goto LAB_00129869;
         }

      }
 else {
         iVar44 = *(int*)( this + 0x2c );
         if (iVar44 == 0) {
            local_70 = 0;
         }
 else {
            uVar49 = *(ulong*)( hash_table_size_primes_inv + uVar40 * 8 );
            uVar37 = ( uVar38 >> 0x10 ^ uVar38 ) * -0x7a143595;
            uVar37 = ( uVar37 ^ uVar37 >> 0xd ) * -0x3d4d51cb;
            uVar53 = uVar37 ^ uVar37 >> 0x10;
            if (uVar37 == uVar37 >> 0x10) {
               uVar53 = 1;
               uVar45 = uVar49;
            }
 else {
               uVar45 = uVar53 * uVar49;
            }

            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar52;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar45;
            lVar46 = SUB168(auVar4 * auVar20, 8);
            lVar55 = *(long*)( this + 0x10 );
            uVar54 = SUB164(auVar4 * auVar20, 8);
            uVar37 = *(uint*)( lVar55 + lVar46 * 4 );
            if (uVar37 != 0) {
               uVar51 = 0;
               do {
                  if (( uVar37 == uVar53 ) && ( uVar38 == *(uint*)( *(long*)( (long)local_a8 + lVar46 * 8 ) + 0x10 ) )) {
                     pauVar42 = *(undefined1(**) [16])( (long)local_a8 + (ulong)uVar54 * 8 );
                     goto LAB_0012946a;
                  }

                  uVar51 = uVar51 + 1;
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = ( uVar54 + 1 ) * uVar49;
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = uVar52;
                  lVar46 = SUB168(auVar5 * auVar21, 8);
                  uVar37 = *(uint*)( lVar55 + lVar46 * 4 );
                  uVar54 = SUB164(auVar5 * auVar21, 8);
               }
 while ( ( uVar37 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = uVar37 * uVar49,auVar22._8_8_ = 0,auVar22._0_8_ = uVar52,auVar7._8_8_ = 0,auVar7._0_8_ = ( ( uVar54 + uVar39 ) - SUB164(auVar6 * auVar22, 8) ) * uVar49,auVar23._8_8_ = 0,auVar23._0_8_ = uVar52,uVar51 <= SUB164(auVar7 * auVar23, 8) );
            }

            local_70 = 0;
            LAB_00129869:uVar45 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar40 * 4 ));
            uVar49 = *(ulong*)( hash_table_size_primes_inv + uVar40 * 8 );
            uVar39 = ( uVar38 >> 0x10 ^ uVar38 ) * -0x7a143595;
            uVar39 = ( uVar39 ^ uVar39 >> 0xd ) * -0x3d4d51cb;
            uVar37 = uVar39 ^ uVar39 >> 0x10;
            if (uVar39 == uVar39 >> 0x10) {
               uVar37 = 1;
               uVar43 = uVar49;
            }
 else {
               uVar43 = uVar37 * uVar49;
            }

            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar45;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar43;
            lVar46 = SUB168(auVar16 * auVar32, 8);
            uVar39 = *(uint*)( lVar55 + lVar46 * 4 );
            uVar53 = SUB164(auVar16 * auVar32, 8);
            if (uVar39 != 0) {
               uVar54 = 0;
               do {
                  if (( uVar37 == uVar39 ) && ( *(uint*)( *(long*)( (long)local_a8 + lVar46 * 8 ) + 0x10 ) == uVar38 )) {
                     lVar55 = *(long*)( (long)local_a8 + (ulong)uVar53 * 8 );
                     if (*(long*)( lVar55 + 0x18 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)( lVar55 + 0x18 ), (CowData*)&local_70);
                     }

                     pauVar42 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar53 * 8 );
                     goto LAB_00129845;
                  }

                  uVar54 = uVar54 + 1;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = ( uVar53 + 1 ) * uVar49;
                  auVar33._8_8_ = 0;
                  auVar33._0_8_ = uVar45;
                  lVar46 = SUB168(auVar17 * auVar33, 8);
                  uVar39 = *(uint*)( lVar55 + lVar46 * 4 );
                  uVar53 = SUB164(auVar17 * auVar33, 8);
               }
 while ( ( uVar39 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = uVar39 * uVar49,auVar34._8_8_ = 0,auVar34._0_8_ = uVar45,auVar19._8_8_ = 0,auVar19._0_8_ = ( ( *(uint*)( hash_table_size_primes + uVar40 * 4 ) + uVar53 ) - SUB164(auVar18 * auVar34, 8) ) * uVar49,auVar35._8_8_ = 0,auVar35._0_8_ = uVar45,uVar54 <= SUB164(auVar19 * auVar35, 8) );
            }

         }

      }

      LAB_001294ac:if ((float)uVar52 * __LC32 < (float)( iVar44 + 1 )) {
         uVar38 = *(uint*)( this + 0x28 );
         if (uVar38 == 0x1c) {
            pauVar42 = (undefined1(*) [16])0x0;
            _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
            goto LAB_00129845;
         }

         uVar40 = ( ulong )(uVar38 + 1);
         uVar39 = *(uint*)( hash_table_size_primes + (ulong)uVar38 * 4 );
         *(undefined4*)( this + 0x2c ) = 0;
         if (uVar38 + 1 < 2) {
            uVar40 = 2;
         }

         uVar38 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
         *(int*)( this + 0x28 ) = (int)uVar40;
         pvVar3 = *(void**)( this + 0x10 );
         uVar49 = (ulong)uVar38;
         uVar40 = uVar49 * 4;
         uVar52 = uVar49 * 8;
         uVar41 = Memory::alloc_static(uVar40, false);
         *(undefined8*)( this + 0x10 ) = uVar41;
         __s_00 = (void*)Memory::alloc_static(uVar52, false);
         *(void**)( this + 8 ) = __s_00;
         if (uVar38 != 0) {
            __s = *(void**)( this + 0x10 );
            if (( __s < (void*)( (long)__s_00 + uVar52 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
               uVar40 = 0;
               do {
                  *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
                  *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
                  uVar40 = uVar40 + 1;
               }
 while ( uVar40 != uVar49 );
            }
 else {
               memset(__s, 0, uVar40);
               memset(__s_00, 0, uVar52);
            }

         }

         uVar40 = 0;
         if (uVar39 != 0) {
            do {
               uVar38 = *(uint*)( (long)pvVar3 + uVar40 * 4 );
               if (uVar38 != 0) {
                  uVar54 = 0;
                  lVar55 = *(long*)( this + 0x10 );
                  uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
                  uVar52 = CONCAT44(0, uVar37);
                  lVar46 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = (ulong)uVar38 * lVar46;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar52;
                  lVar47 = SUB168(auVar8 * auVar24, 8);
                  puVar1 = (uint*)( lVar55 + lVar47 * 4 );
                  iVar44 = SUB164(auVar8 * auVar24, 8);
                  uVar53 = *puVar1;
                  uVar41 = *(undefined8*)( (long)local_a8 + uVar40 * 8 );
                  while (uVar53 != 0) {
                     auVar9._8_8_ = 0;
                     auVar9._0_8_ = (ulong)uVar53 * lVar46;
                     auVar25._8_8_ = 0;
                     auVar25._0_8_ = uVar52;
                     auVar10._8_8_ = 0;
                     auVar10._0_8_ = ( ulong )(( uVar37 + iVar44 ) - SUB164(auVar9 * auVar25, 8)) * lVar46;
                     auVar26._8_8_ = 0;
                     auVar26._0_8_ = uVar52;
                     uVar51 = SUB164(auVar10 * auVar26, 8);
                     uVar50 = uVar41;
                     if (uVar51 < uVar54) {
                        *puVar1 = uVar38;
                        puVar2 = (undefined8*)( (long)__s_00 + lVar47 * 8 );
                        uVar50 = *puVar2;
                        *puVar2 = uVar41;
                        uVar38 = uVar53;
                        uVar54 = uVar51;
                     }

                     uVar54 = uVar54 + 1;
                     auVar11._8_8_ = 0;
                     auVar11._0_8_ = ( ulong )(iVar44 + 1) * lVar46;
                     auVar27._8_8_ = 0;
                     auVar27._0_8_ = uVar52;
                     lVar47 = SUB168(auVar11 * auVar27, 8);
                     puVar1 = (uint*)( lVar55 + lVar47 * 4 );
                     iVar44 = SUB164(auVar11 * auVar27, 8);
                     uVar41 = uVar50;
                     uVar53 = *puVar1;
                  }
;
                  *(undefined8*)( (long)__s_00 + lVar47 * 8 ) = uVar41;
                  *puVar1 = uVar38;
                  *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
               }

               uVar40 = uVar40 + 1;
            }
 while ( uVar39 != uVar40 );
            Memory::free_static(local_a8, false);
            Memory::free_static(pvVar3, false);
         }

      }

      local_68 = (undefined1[16])0x0;
      local_50[0] = 0;
      iVar44 = *param_1;
      local_58 = iVar44;
      pauVar42 = (undefined1(*) [16])operator_new(0x20, "");
      *(int*)pauVar42[1] = iVar44;
      *(undefined8*)( pauVar42[1] + 8 ) = 0;
      *pauVar42 = (undefined1[16])0x0;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
      puVar2 = *(undefined8**)( this + 0x20 );
      if (puVar2 == (undefined8*)0x0) {
         *(undefined1(**) [16])( this + 0x18 ) = pauVar42;
      }
 else {
         *puVar2 = pauVar42;
         *(undefined8**)( *pauVar42 + 8 ) = puVar2;
      }

      *(undefined1(**) [16])( this + 0x20 ) = pauVar42;
      uVar38 = ( ( uint ) * param_1 >> 0x10 ^ *param_1 ) * -0x7a143595;
      uVar39 = ( uVar38 ^ uVar38 >> 0xd ) * -0x3d4d51cb;
      uVar38 = uVar39 ^ uVar39 >> 0x10;
      if (uVar39 == uVar39 >> 0x10) {
         uVar40 = 1;
         uVar38 = 1;
      }
 else {
         uVar40 = (ulong)uVar38;
      }

      uVar53 = 0;
      lVar55 = *(long*)( this + 0x10 );
      uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar52 = CONCAT44(0, uVar39);
      lVar46 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar40 * lVar46;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar52;
      lVar48 = SUB168(auVar12 * auVar28, 8);
      lVar47 = *(long*)( this + 8 );
      puVar1 = (uint*)( lVar55 + lVar48 * 4 );
      iVar44 = SUB164(auVar12 * auVar28, 8);
      uVar37 = *puVar1;
      pauVar36 = pauVar42;
      while (uVar37 != 0) {
         auVar13._8_8_ = 0;
         auVar13._0_8_ = (ulong)uVar37 * lVar46;
         auVar29._8_8_ = 0;
         auVar29._0_8_ = uVar52;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = ( ulong )(( uVar39 + iVar44 ) - SUB164(auVar13 * auVar29, 8)) * lVar46;
         auVar30._8_8_ = 0;
         auVar30._0_8_ = uVar52;
         uVar54 = SUB164(auVar14 * auVar30, 8);
         pauVar56 = pauVar36;
         if (uVar54 < uVar53) {
            *puVar1 = uVar38;
            puVar2 = (undefined8*)( lVar47 + lVar48 * 8 );
            pauVar56 = (undefined1(*) [16])*puVar2;
            *puVar2 = pauVar36;
            uVar38 = uVar37;
            uVar53 = uVar54;
         }

         uVar53 = uVar53 + 1;
         auVar15._8_8_ = 0;
         auVar15._0_8_ = ( ulong )(iVar44 + 1) * lVar46;
         auVar31._8_8_ = 0;
         auVar31._0_8_ = uVar52;
         lVar48 = SUB168(auVar15 * auVar31, 8);
         puVar1 = (uint*)( lVar55 + lVar48 * 4 );
         iVar44 = SUB164(auVar15 * auVar31, 8);
         pauVar36 = pauVar56;
         uVar37 = *puVar1;
      }
;
      *(undefined1(**) [16])( lVar47 + lVar48 * 8 ) = pauVar36;
      *puVar1 = uVar38;
      *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
      LAB_00129845:CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      LAB_0012946a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return pauVar42[1] + 8;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* HashMap<String, ScriptLanguage::CodeCompletionOption, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   ScriptLanguage::CodeCompletionOption> > >::insert(String const&,
   ScriptLanguage::CodeCompletionOption const&, bool) */
   String *HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>::insert(String *param_1, CodeCompletionOption *param_2, bool param_3) {
      uint *puVar1;
      undefined8 *puVar2;
      void *pvVar3;
      void *__s;
      long lVar4;
      undefined1 auVar5[16];
      undefined1 auVar6[16];
      undefined1 auVar7[16];
      undefined1 auVar8[16];
      undefined1 auVar9[16];
      undefined1 auVar10[16];
      undefined1 auVar11[16];
      undefined1 auVar12[16];
      undefined1 auVar13[16];
      undefined1 auVar14[16];
      undefined1 auVar15[16];
      undefined1 auVar16[16];
      undefined1 auVar17[16];
      undefined1 auVar18[16];
      undefined1 auVar19[16];
      undefined1 auVar20[16];
      undefined1 auVar21[16];
      undefined1 auVar22[16];
      undefined1 auVar23[16];
      undefined1 auVar24[16];
      undefined1 auVar25[16];
      undefined1 auVar26[16];
      undefined1 auVar27[16];
      undefined1 auVar28[16];
      undefined8 *puVar29;
      char cVar30;
      uint uVar31;
      ulong uVar32;
      undefined8 uVar33;
      void *__s_00;
      undefined8 *puVar34;
      void *pvVar35;
      CodeCompletionOption *in_RCX;
      int iVar36;
      uint uVar37;
      undefined7 in_register_00000011;
      String *pSVar38;
      long lVar39;
      long lVar40;
      uint uVar41;
      ulong uVar42;
      undefined8 uVar43;
      char in_R8B;
      uint uVar44;
      uint uVar45;
      ulong uVar46;
      long lVar47;
      uint uVar48;
      undefined8 *puVar49;
      long in_FS_OFFSET;
      uint local_138;
      long local_c8;
      undefined4 local_c0[2];
      long local_b8;
      long local_b0;
      undefined8 local_a8;
      undefined8 uStack_a0;
      long local_98;
      Variant local_90[32];
      long local_70[2];
      long local_60;
      undefined4 local_58;
      long local_50;
      Array local_48[8];
      long local_40;
      pSVar38 = (String*)CONCAT71(in_register_00000011, param_3);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      uVar41 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
      if (*(long*)( param_2 + 8 ) == 0) {
         uVar42 = (ulong)uVar41;
         uVar32 = uVar42 * 4;
         uVar46 = uVar42 * 8;
         uVar33 = Memory::alloc_static(uVar32, false);
         *(undefined8*)( param_2 + 0x10 ) = uVar33;
         pvVar35 = (void*)Memory::alloc_static(uVar46, false);
         *(void**)( param_2 + 8 ) = pvVar35;
         if (uVar41 != 0) {
            pvVar3 = *(void**)( param_2 + 0x10 );
            if (( pvVar3 < (void*)( (long)pvVar35 + uVar46 ) ) && ( pvVar35 < (void*)( (long)pvVar3 + uVar32 ) )) {
               uVar32 = 0;
               do {
                  *(undefined4*)( (long)pvVar3 + uVar32 * 4 ) = 0;
                  *(undefined8*)( (long)pvVar35 + uVar32 * 8 ) = 0;
                  uVar32 = uVar32 + 1;
               }
 while ( uVar42 != uVar32 );
            }
 else {
               memset(pvVar3, 0, uVar32);
               memset(pvVar35, 0, uVar46);
            }

            goto LAB_00129ba8;
         }

         iVar36 = *(int*)( param_2 + 0x2c );
         if (pvVar35 == (void*)0x0) goto LAB_00129bbb;
         if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0012a230;
         LAB_00129be1:uVar41 = *(uint*)( param_2 + 0x28 );
         if (uVar41 == 0x1c) {
            puVar34 = (undefined8*)0x0;
            _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
            goto LAB_0012a1df;
         }

         uVar32 = ( ulong )(uVar41 + 1);
         uVar31 = *(uint*)( hash_table_size_primes + (ulong)uVar41 * 4 );
         *(undefined4*)( param_2 + 0x2c ) = 0;
         if (uVar41 + 1 < 2) {
            uVar32 = 2;
         }

         uVar41 = *(uint*)( hash_table_size_primes + uVar32 * 4 );
         *(int*)( param_2 + 0x28 ) = (int)uVar32;
         pvVar35 = *(void**)( param_2 + 8 );
         uVar42 = (ulong)uVar41;
         uVar32 = uVar42 * 4;
         pvVar3 = *(void**)( param_2 + 0x10 );
         uVar33 = Memory::alloc_static(uVar32, false);
         *(undefined8*)( param_2 + 0x10 ) = uVar33;
         uVar46 = uVar42 * 8;
         __s_00 = (void*)Memory::alloc_static(uVar46, false);
         *(void**)( param_2 + 8 ) = __s_00;
         if (uVar41 != 0) {
            __s = *(void**)( param_2 + 0x10 );
            if (( __s < (void*)( (long)__s_00 + uVar46 ) ) && ( __s_00 < (void*)( (long)__s + uVar32 ) )) {
               uVar32 = 0;
               do {
                  *(undefined4*)( (long)__s + uVar32 * 4 ) = 0;
                  *(undefined8*)( (long)__s_00 + uVar32 * 8 ) = 0;
                  uVar32 = uVar32 + 1;
               }
 while ( uVar32 != uVar42 );
            }
 else {
               memset(__s, 0, uVar32);
               memset(__s_00, 0, uVar46);
            }

         }

         if (uVar31 != 0) {
            uVar32 = 0;
            do {
               uVar41 = *(uint*)( (long)pvVar3 + uVar32 * 4 );
               if (uVar41 != 0) {
                  uVar44 = 0;
                  lVar4 = *(long*)( param_2 + 0x10 );
                  uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
                  uVar46 = CONCAT44(0, uVar37);
                  lVar47 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = (ulong)uVar41 * lVar47;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = uVar46;
                  lVar39 = SUB168(auVar5 * auVar17, 8);
                  puVar1 = (uint*)( lVar4 + lVar39 * 4 );
                  iVar36 = SUB164(auVar5 * auVar17, 8);
                  uVar45 = *puVar1;
                  uVar33 = *(undefined8*)( (long)pvVar35 + uVar32 * 8 );
                  while (uVar45 != 0) {
                     auVar6._8_8_ = 0;
                     auVar6._0_8_ = (ulong)uVar45 * lVar47;
                     auVar18._8_8_ = 0;
                     auVar18._0_8_ = uVar46;
                     auVar7._8_8_ = 0;
                     auVar7._0_8_ = ( ulong )(( uVar37 + iVar36 ) - SUB164(auVar6 * auVar18, 8)) * lVar47;
                     auVar19._8_8_ = 0;
                     auVar19._0_8_ = uVar46;
                     local_138 = SUB164(auVar7 * auVar19, 8);
                     uVar43 = uVar33;
                     if (local_138 < uVar44) {
                        *puVar1 = uVar41;
                        puVar34 = (undefined8*)( (long)__s_00 + lVar39 * 8 );
                        uVar43 = *puVar34;
                        *puVar34 = uVar33;
                        uVar41 = uVar45;
                        uVar44 = local_138;
                     }

                     uVar44 = uVar44 + 1;
                     auVar8._8_8_ = 0;
                     auVar8._0_8_ = ( ulong )(iVar36 + 1) * lVar47;
                     auVar20._8_8_ = 0;
                     auVar20._0_8_ = uVar46;
                     lVar39 = SUB168(auVar8 * auVar20, 8);
                     puVar1 = (uint*)( lVar4 + lVar39 * 4 );
                     iVar36 = SUB164(auVar8 * auVar20, 8);
                     uVar33 = uVar43;
                     uVar45 = *puVar1;
                  }
;
                  *(undefined8*)( (long)__s_00 + lVar39 * 8 ) = uVar33;
                  *puVar1 = uVar41;
                  *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
               }

               uVar32 = uVar32 + 1;
            }
 while ( uVar31 != uVar32 );
            Memory::free_static(pvVar35, false);
            Memory::free_static(pvVar3, false);
         }

      }
 else {
         LAB_00129ba8:iVar36 = *(int*)( param_2 + 0x2c );
         if (iVar36 != 0) {
            LAB_0012a230:uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
            lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
            uVar45 = String::hash();
            uVar32 = CONCAT44(0, uVar31);
            lVar47 = *(long*)( param_2 + 0x10 );
            uVar37 = 1;
            if (uVar45 != 0) {
               uVar37 = uVar45;
            }

            uVar48 = 0;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar37 * lVar4;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar32;
            lVar39 = SUB168(auVar13 * auVar25, 8);
            uVar45 = *(uint*)( lVar47 + lVar39 * 4 );
            uVar44 = SUB164(auVar13 * auVar25, 8);
            if (uVar45 != 0) {
               do {
                  if (uVar45 == uVar37) {
                     cVar30 = String::operator ==((String*)( *(long*)( *(long*)( param_2 + 8 ) + lVar39 * 8 ) + 0x10 ), pSVar38);
                     if (cVar30 != '\0') {
                        ScriptLanguage::CodeCompletionOption::operator =((CodeCompletionOption*)( *(long*)( *(long*)( param_2 + 8 ) + (ulong)uVar44 * 8 ) + 0x18 ), in_RCX);
                        puVar34 = *(undefined8**)( *(long*)( param_2 + 8 ) + (ulong)uVar44 * 8 );
                        goto LAB_0012a1df;
                     }

                     lVar47 = *(long*)( param_2 + 0x10 );
                  }

                  uVar48 = uVar48 + 1;
                  auVar14._8_8_ = 0;
                  auVar14._0_8_ = ( ulong )(uVar44 + 1) * lVar4;
                  auVar26._8_8_ = 0;
                  auVar26._0_8_ = uVar32;
                  lVar39 = SUB168(auVar14 * auVar26, 8);
                  uVar45 = *(uint*)( lVar47 + lVar39 * 4 );
                  uVar44 = SUB164(auVar14 * auVar26, 8);
               }
 while ( ( uVar45 != 0 ) && ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar45 * lVar4,auVar27._8_8_ = 0,auVar27._0_8_ = uVar32,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar31 + uVar44 ) - SUB164(auVar15 * auVar27, 8)) * lVar4,auVar28._8_8_ = 0,auVar28._0_8_ = uVar32,uVar48 <= SUB164(auVar16 * auVar28, 8) );
            }

            iVar36 = *(int*)( param_2 + 0x2c );
         }

         LAB_00129bbb:if ((float)uVar41 * __LC32 < (float)( iVar36 + 1 )) goto LAB_00129be1;
      }

      local_c8 = 0;
      if (*(long*)pSVar38 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)pSVar38);
      }

      local_c0[0] = *(undefined4*)in_RCX;
      local_b8 = 0;
      if (*(long*)( in_RCX + 8 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)( in_RCX + 8 ));
      }

      local_b0 = 0;
      if (*(long*)( in_RCX + 0x10 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_b0, (CowData*)( in_RCX + 0x10 ));
      }

      local_a8 = *(undefined8*)( in_RCX + 0x18 );
      uStack_a0 = *(undefined8*)( in_RCX + 0x20 );
      local_98 = 0;
      if (( *(long*)( in_RCX + 0x28 ) != 0 ) && ( local_98 = *(long*)( in_RCX + 0x28 ) ),cVar30 = RefCounted::reference(),cVar30 == '\0') {
         local_98 = 0;
      }

      Variant::Variant(local_90, (Variant*)( in_RCX + 0x30 ));
      local_70[0] = 0;
      if (*(long*)( in_RCX + 0x50 ) != 0) {
         CowData<Pair<int,int>>::_ref((CowData<Pair<int,int>>*)local_70, (CowData*)( in_RCX + 0x50 ));
      }

      local_60 = 0;
      if (*(long*)( in_RCX + 0x60 ) != 0) {
         CowData<Pair<int,int>>::_ref((CowData<Pair<int,int>>*)&local_60, (CowData*)( in_RCX + 0x60 ));
      }

      local_58 = *(undefined4*)( in_RCX + 0x68 );
      local_50 = 0;
      if (*(long*)( in_RCX + 0x70 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_50, (CowData*)( in_RCX + 0x70 ));
      }

      Array::Array(local_48, (Array*)( in_RCX + 0x78 ));
      puVar34 = (undefined8*)operator_new(0x98, "");
      puVar34[2] = 0;
      *puVar34 = 0;
      puVar34[1] = 0;
      if (local_c8 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar34 + 2 ), (CowData*)&local_c8);
      }

      puVar34[4] = 0;
      *(undefined4*)( puVar34 + 3 ) = local_c0[0];
      if (local_b8 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar34 + 4 ), (CowData*)&local_b8);
      }

      puVar34[5] = 0;
      if (local_b0 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar34 + 5 ), (CowData*)&local_b0);
      }

      puVar34[8] = 0;
      puVar34[6] = local_a8;
      puVar34[7] = uStack_a0;
      if (local_98 != 0) {
         puVar34[8] = local_98;
         cVar30 = RefCounted::reference();
         if (cVar30 == '\0') {
            puVar34[8] = 0;
         }

      }

      Variant::Variant((Variant*)( puVar34 + 9 ), local_90);
      puVar34[0xd] = 0;
      if (local_70[0] != 0) {
         CowData<Pair<int,int>>::_ref((CowData<Pair<int,int>>*)( puVar34 + 0xd ), (CowData*)local_70);
      }

      puVar34[0xf] = 0;
      if (local_60 != 0) {
         CowData<Pair<int,int>>::_ref((CowData<Pair<int,int>>*)( puVar34 + 0xf ), (CowData*)&local_60);
      }

      puVar34[0x11] = 0;
      *(undefined4*)( puVar34 + 0x10 ) = local_58;
      if (local_50 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar34 + 0x11 ), (CowData*)&local_50);
      }

      Array::Array((Array*)( puVar34 + 0x12 ), local_48);
      ScriptLanguage::CodeCompletionOption::~CodeCompletionOption((CodeCompletionOption*)local_c0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      if (*(undefined8**)( param_2 + 0x20 ) == (undefined8*)0x0) {
         *(undefined8**)( param_2 + 0x18 ) = puVar34;
         *(undefined8**)( param_2 + 0x20 ) = puVar34;
      }
 else if (in_R8B == '\0') {
         **(undefined8**)( param_2 + 0x20 ) = puVar34;
         puVar34[1] = *(undefined8*)( param_2 + 0x20 );
         *(undefined8**)( param_2 + 0x20 ) = puVar34;
      }
 else {
         *(undefined8**)( *(long*)( param_2 + 0x18 ) + 8 ) = puVar34;
         *puVar34 = *(undefined8*)( param_2 + 0x18 );
         *(undefined8**)( param_2 + 0x18 ) = puVar34;
      }

      uVar31 = String::hash();
      uVar41 = 1;
      if (uVar31 != 0) {
         uVar41 = uVar31;
      }

      lVar4 = *(long*)( param_2 + 0x10 );
      uVar45 = 0;
      uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
      uVar32 = CONCAT44(0, uVar31);
      lVar47 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar41 * lVar47;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar32;
      lVar40 = SUB168(auVar9 * auVar21, 8);
      lVar39 = *(long*)( param_2 + 8 );
      puVar1 = (uint*)( lVar4 + lVar40 * 4 );
      iVar36 = SUB164(auVar9 * auVar21, 8);
      uVar37 = *puVar1;
      puVar29 = puVar34;
      while (uVar37 != 0) {
         auVar10._8_8_ = 0;
         auVar10._0_8_ = (ulong)uVar37 * lVar47;
         auVar22._8_8_ = 0;
         auVar22._0_8_ = uVar32;
         auVar11._8_8_ = 0;
         auVar11._0_8_ = ( ulong )(( iVar36 + uVar31 ) - SUB164(auVar10 * auVar22, 8)) * lVar47;
         auVar23._8_8_ = 0;
         auVar23._0_8_ = uVar32;
         local_138 = SUB164(auVar11 * auVar23, 8);
         puVar49 = puVar29;
         if (local_138 < uVar45) {
            *puVar1 = uVar41;
            puVar2 = (undefined8*)( lVar39 + lVar40 * 8 );
            puVar49 = (undefined8*)*puVar2;
            *puVar2 = puVar29;
            uVar45 = local_138;
            uVar41 = uVar37;
         }

         uVar45 = uVar45 + 1;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = ( ulong )(iVar36 + 1) * lVar47;
         auVar24._8_8_ = 0;
         auVar24._0_8_ = uVar32;
         lVar40 = SUB168(auVar12 * auVar24, 8);
         puVar1 = (uint*)( lVar4 + lVar40 * 4 );
         iVar36 = SUB164(auVar12 * auVar24, 8);
         puVar29 = puVar49;
         uVar37 = *puVar1;
      }
;
      *(undefined8**)( lVar39 + lVar40 * 8 ) = puVar29;
      *puVar1 = uVar41;
      *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
      LAB_0012a1df:*(undefined8**)param_1 = puVar34;
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::operator[](String const&) */
   undefined1 * __thiscallHashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator [](HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>> * this, String * param_1);
   {
      uint *puVar1;
      undefined8 *puVar2;
      void *pvVar3;
      void *__s;
      long lVar4;
      undefined1 auVar5[16];
      undefined1 auVar6[16];
      undefined1 auVar7[16];
      undefined1 auVar8[16];
      undefined1 auVar9[16];
      undefined1 auVar10[16];
      undefined1 auVar11[16];
      undefined1 auVar12[16];
      undefined1 auVar13[16];
      undefined1 auVar14[16];
      undefined1 auVar15[16];
      undefined1 auVar16[16];
      undefined1 auVar17[16];
      undefined1 auVar18[16];
      undefined1 auVar19[16];
      undefined1 auVar20[16];
      undefined1 auVar21[16];
      undefined1 auVar22[16];
      undefined1 auVar23[16];
      undefined1 auVar24[16];
      undefined1 auVar25[16];
      undefined1 auVar26[16];
      undefined1 auVar27[16];
      undefined1 auVar28[16];
      undefined1 auVar29[16];
      undefined1 auVar30[16];
      undefined1 auVar31[16];
      undefined1 auVar32[16];
      undefined1 auVar33[16];
      undefined1 auVar34[16];
      undefined1 auVar35[16];
      undefined1 auVar36[16];
      undefined1(*pauVar37)[16];
      char cVar38;
      uint uVar39;
      uint uVar40;
      ulong uVar41;
      undefined8 uVar42;
      void *__s_00;
      undefined1(*pauVar43)[16];
      void *pvVar44;
      int iVar45;
      long lVar46;
      long lVar47;
      ulong uVar48;
      undefined8 uVar49;
      uint uVar50;
      uint uVar51;
      ulong uVar52;
      long lVar53;
      uint uVar54;
      uint uVar55;
      undefined1(*pauVar56)[16];
      long in_FS_OFFSET;
      undefined8 local_70;
      undefined1 local_68[16];
      long local_58;
      undefined8 local_50[2];
      long local_40;
      uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (*(long*)( this + 8 ) == 0) {
         LAB_0012abac:local_70 = 0;
         uVar48 = (ulong)uVar55;
         uVar41 = uVar48 * 4;
         uVar52 = uVar48 * 8;
         uVar42 = Memory::alloc_static(uVar41, false);
         *(undefined8*)( this + 0x10 ) = uVar42;
         pvVar44 = (void*)Memory::alloc_static(uVar52, false);
         *(void**)( this + 8 ) = pvVar44;
         if (uVar55 != 0) {
            pvVar3 = *(void**)( this + 0x10 );
            if (( pvVar3 < (void*)( (long)pvVar44 + uVar52 ) ) && ( pvVar44 < (void*)( (long)pvVar3 + uVar41 ) )) {
               uVar41 = 0;
               do {
                  *(undefined4*)( (long)pvVar3 + uVar41 * 4 ) = 0;
                  *(undefined8*)( (long)pvVar44 + uVar41 * 8 ) = 0;
                  uVar41 = uVar41 + 1;
               }
 while ( uVar48 != uVar41 );
            }
 else {
               memset(pvVar3, 0, uVar41);
               memset(pvVar44, 0, uVar52);
            }

            LAB_0012aa95:iVar45 = *(int*)( this + 0x2c );
            if (iVar45 != 0) {
               LAB_0012aaa5:uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
               lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               uVar51 = String::hash();
               uVar41 = CONCAT44(0, uVar39);
               lVar53 = *(long*)( this + 0x10 );
               uVar40 = 1;
               if (uVar51 != 0) {
                  uVar40 = uVar51;
               }

               uVar54 = 0;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = (ulong)uVar40 * lVar4;
               auVar33._8_8_ = 0;
               auVar33._0_8_ = uVar41;
               lVar46 = SUB168(auVar17 * auVar33, 8);
               uVar51 = *(uint*)( lVar53 + lVar46 * 4 );
               uVar50 = SUB164(auVar17 * auVar33, 8);
               if (uVar51 != 0) {
                  do {
                     if (uVar40 == uVar51) {
                        cVar38 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar46 * 8 ) + 0x10 ), param_1);
                        if (cVar38 != '\0') {
                           pauVar43 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar50 * 8 );
                           if (*(long*)( pauVar43[1] + 8 ) != 0) {
                              CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar43[1] + 8 ), (CowData*)&local_70);
                              pauVar43 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar50 * 8 );
                           }

                           goto LAB_0012a943;
                        }

                        lVar53 = *(long*)( this + 0x10 );
                     }

                     uVar54 = uVar54 + 1;
                     auVar18._8_8_ = 0;
                     auVar18._0_8_ = ( ulong )(uVar50 + 1) * lVar4;
                     auVar34._8_8_ = 0;
                     auVar34._0_8_ = uVar41;
                     lVar46 = SUB168(auVar18 * auVar34, 8);
                     uVar51 = *(uint*)( lVar53 + lVar46 * 4 );
                     uVar50 = SUB164(auVar18 * auVar34, 8);
                  }
 while ( ( uVar51 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar51 * lVar4,auVar35._8_8_ = 0,auVar35._0_8_ = uVar41,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar39 + uVar50 ) - SUB164(auVar19 * auVar35, 8)) * lVar4,auVar36._8_8_ = 0,auVar36._0_8_ = uVar41,uVar54 <= SUB164(auVar20 * auVar36, 8) );
               }

               iVar45 = *(int*)( this + 0x2c );
            }

            uVar48 = (ulong)uVar55;
            goto LAB_0012a567;
         }

         iVar45 = *(int*)( this + 0x2c );
         if (pvVar44 == (void*)0x0) goto LAB_0012a567;
         if (*(int*)( this + 0x2c ) != 0) goto LAB_0012aaa5;
         LAB_0012a58d:uVar55 = *(uint*)( this + 0x28 );
         if (uVar55 == 0x1c) {
            pauVar43 = (undefined1(*) [16])0x0;
            _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
            goto LAB_0012a943;
         }

         uVar41 = ( ulong )(uVar55 + 1);
         uVar39 = *(uint*)( hash_table_size_primes + (ulong)uVar55 * 4 );
         *(undefined4*)( this + 0x2c ) = 0;
         if (uVar55 + 1 < 2) {
            uVar41 = 2;
         }

         uVar55 = *(uint*)( hash_table_size_primes + uVar41 * 4 );
         *(int*)( this + 0x28 ) = (int)uVar41;
         pvVar44 = *(void**)( this + 8 );
         uVar48 = (ulong)uVar55;
         uVar41 = uVar48 * 4;
         pvVar3 = *(void**)( this + 0x10 );
         uVar52 = uVar48 * 8;
         uVar42 = Memory::alloc_static(uVar41, false);
         *(undefined8*)( this + 0x10 ) = uVar42;
         __s_00 = (void*)Memory::alloc_static(uVar52, false);
         *(void**)( this + 8 ) = __s_00;
         if (uVar55 != 0) {
            __s = *(void**)( this + 0x10 );
            if (( __s < (void*)( (long)__s_00 + uVar52 ) ) && ( __s_00 < (void*)( (long)__s + uVar41 ) )) {
               uVar41 = 0;
               do {
                  *(undefined4*)( (long)__s + uVar41 * 4 ) = 0;
                  *(undefined8*)( (long)__s_00 + uVar41 * 8 ) = 0;
                  uVar41 = uVar41 + 1;
               }
 while ( uVar41 != uVar48 );
            }
 else {
               memset(__s, 0, uVar41);
               memset(__s_00, 0, uVar52);
            }

         }

         uVar41 = 0;
         if (uVar39 != 0) {
            do {
               uVar55 = *(uint*)( (long)pvVar3 + uVar41 * 4 );
               if (uVar55 != 0) {
                  uVar50 = 0;
                  lVar4 = *(long*)( this + 0x10 );
                  uVar40 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
                  uVar52 = CONCAT44(0, uVar40);
                  lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = (ulong)uVar55 * lVar53;
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = uVar52;
                  lVar46 = SUB168(auVar5 * auVar21, 8);
                  puVar1 = (uint*)( lVar4 + lVar46 * 4 );
                  iVar45 = SUB164(auVar5 * auVar21, 8);
                  uVar51 = *puVar1;
                  uVar42 = *(undefined8*)( (long)pvVar44 + uVar41 * 8 );
                  while (uVar51 != 0) {
                     auVar6._8_8_ = 0;
                     auVar6._0_8_ = (ulong)uVar51 * lVar53;
                     auVar22._8_8_ = 0;
                     auVar22._0_8_ = uVar52;
                     auVar7._8_8_ = 0;
                     auVar7._0_8_ = ( ulong )(( uVar40 + iVar45 ) - SUB164(auVar6 * auVar22, 8)) * lVar53;
                     auVar23._8_8_ = 0;
                     auVar23._0_8_ = uVar52;
                     uVar54 = SUB164(auVar7 * auVar23, 8);
                     uVar49 = uVar42;
                     if (uVar54 < uVar50) {
                        *puVar1 = uVar55;
                        puVar2 = (undefined8*)( (long)__s_00 + lVar46 * 8 );
                        uVar49 = *puVar2;
                        *puVar2 = uVar42;
                        uVar55 = uVar51;
                        uVar50 = uVar54;
                     }

                     uVar50 = uVar50 + 1;
                     auVar8._8_8_ = 0;
                     auVar8._0_8_ = ( ulong )(iVar45 + 1) * lVar53;
                     auVar24._8_8_ = 0;
                     auVar24._0_8_ = uVar52;
                     lVar46 = SUB168(auVar8 * auVar24, 8);
                     puVar1 = (uint*)( lVar4 + lVar46 * 4 );
                     iVar45 = SUB164(auVar8 * auVar24, 8);
                     uVar42 = uVar49;
                     uVar51 = *puVar1;
                  }
;
                  *(undefined8*)( (long)__s_00 + lVar46 * 8 ) = uVar42;
                  *puVar1 = uVar55;
                  *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
               }

               uVar41 = uVar41 + 1;
            }
 while ( uVar39 != uVar41 );
            Memory::free_static(pvVar44, false);
            Memory::free_static(pvVar3, false);
         }

      }
 else {
         if (*(int*)( this + 0x2c ) != 0) {
            uVar41 = CONCAT44(0, uVar55);
            lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            uVar40 = String::hash();
            uVar39 = 1;
            if (uVar40 != 0) {
               uVar39 = uVar40;
            }

            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar39 * lVar4;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar41;
            lVar46 = SUB168(auVar13 * auVar29, 8);
            lVar53 = *(long*)( this + 0x10 );
            uVar51 = SUB164(auVar13 * auVar29, 8);
            uVar40 = *(uint*)( lVar53 + lVar46 * 4 );
            if (uVar40 == 0) {
               lVar47 = *(long*)( this + 8 );
            }
 else {
               uVar50 = 0;
               lVar47 = *(long*)( this + 8 );
               do {
                  if (uVar39 == uVar40) {
                     cVar38 = String::operator ==((String*)( *(long*)( lVar47 + lVar46 * 8 ) + 0x10 ), param_1);
                     if (cVar38 != '\0') {
                        pauVar43 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar51 * 8 );
                        goto LAB_0012a94f;
                     }

                     lVar53 = *(long*)( this + 0x10 );
                     lVar47 = *(long*)( this + 8 );
                  }

                  uVar50 = uVar50 + 1;
                  auVar14._8_8_ = 0;
                  auVar14._0_8_ = ( ulong )(uVar51 + 1) * lVar4;
                  auVar30._8_8_ = 0;
                  auVar30._0_8_ = uVar41;
                  lVar46 = SUB168(auVar14 * auVar30, 8);
                  uVar40 = *(uint*)( lVar53 + lVar46 * 4 );
                  uVar51 = SUB164(auVar14 * auVar30, 8);
               }
 while ( ( uVar40 != 0 ) && ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar40 * lVar4,auVar31._8_8_ = 0,auVar31._0_8_ = uVar41,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar51 + uVar55 ) - SUB164(auVar15 * auVar31, 8)) * lVar4,auVar32._8_8_ = 0,auVar32._0_8_ = uVar41,uVar50 <= SUB164(auVar16 * auVar32, 8) );
            }

            local_70 = 0;
            uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            if (lVar47 == 0) goto LAB_0012abac;
            goto LAB_0012aa95;
         }

         local_70 = 0;
         uVar48 = (ulong)uVar55;
         iVar45 = 0;
         LAB_0012a567:if ((float)uVar48 * __LC32 < (float)( iVar45 + 1 )) goto LAB_0012a58d;
      }

      local_58 = 0;
      local_68 = (undefined1[16])0x0;
      if (*(long*)param_1 == 0) {
         local_50[0] = 0;
         pauVar43 = (undefined1(*) [16])operator_new(0x20, "");
         *(undefined8*)pauVar43[1] = 0;
         *pauVar43 = (undefined1[16])0x0;
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)param_1);
         lVar4 = local_58;
         uVar42 = local_68._0_8_;
         uVar49 = local_68._8_8_;
         local_50[0] = 0;
         pauVar43 = (undefined1(*) [16])operator_new(0x20, "");
         *(undefined8*)pauVar43[1] = 0;
         *(undefined8*)*pauVar43 = uVar42;
         *(undefined8*)( *pauVar43 + 8 ) = uVar49;
         if (lVar4 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar43 + 1 ), (CowData*)&local_58);
         }

      }

      *(undefined8*)( pauVar43[1] + 8 ) = 0;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      puVar2 = *(undefined8**)( this + 0x20 );
      if (puVar2 == (undefined8*)0x0) {
         *(undefined1(**) [16])( this + 0x18 ) = pauVar43;
      }
 else {
         *puVar2 = pauVar43;
         *(undefined8**)( *pauVar43 + 8 ) = puVar2;
      }

      *(undefined1(**) [16])( this + 0x20 ) = pauVar43;
      uVar39 = String::hash();
      lVar4 = *(long*)( this + 0x10 );
      uVar55 = 1;
      if (uVar39 != 0) {
         uVar55 = uVar39;
      }

      uVar51 = 0;
      uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar41 = CONCAT44(0, uVar39);
      lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar55 * lVar53;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar41;
      lVar47 = SUB168(auVar9 * auVar25, 8);
      lVar46 = *(long*)( this + 8 );
      puVar1 = (uint*)( lVar4 + lVar47 * 4 );
      iVar45 = SUB164(auVar9 * auVar25, 8);
      uVar40 = *puVar1;
      pauVar37 = pauVar43;
      while (uVar40 != 0) {
         auVar10._8_8_ = 0;
         auVar10._0_8_ = (ulong)uVar40 * lVar53;
         auVar26._8_8_ = 0;
         auVar26._0_8_ = uVar41;
         auVar11._8_8_ = 0;
         auVar11._0_8_ = ( ulong )(( uVar39 + iVar45 ) - SUB164(auVar10 * auVar26, 8)) * lVar53;
         auVar27._8_8_ = 0;
         auVar27._0_8_ = uVar41;
         uVar50 = SUB164(auVar11 * auVar27, 8);
         pauVar56 = pauVar37;
         if (uVar50 < uVar51) {
            *puVar1 = uVar55;
            puVar2 = (undefined8*)( lVar46 + lVar47 * 8 );
            pauVar56 = (undefined1(*) [16])*puVar2;
            *puVar2 = pauVar37;
            uVar51 = uVar50;
            uVar55 = uVar40;
         }

         uVar51 = uVar51 + 1;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = ( ulong )(iVar45 + 1) * lVar53;
         auVar28._8_8_ = 0;
         auVar28._0_8_ = uVar41;
         lVar47 = SUB168(auVar12 * auVar28, 8);
         puVar1 = (uint*)( lVar4 + lVar47 * 4 );
         iVar45 = SUB164(auVar12 * auVar28, 8);
         pauVar37 = pauVar56;
         uVar40 = *puVar1;
      }
;
      *(undefined1(**) [16])( lVar46 + lVar47 * 8 ) = pauVar37;
      *puVar1 = uVar55;
      *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
      LAB_0012a943:CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      LAB_0012a94f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return pauVar43[1] + 8;
   }

   /* Ref<Script>::unref() */
   void Ref<Script>::unref(Ref<Script> *this) {
      Object *pOVar1;
      char cVar2;
      if (*(long*)this != 0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            pOVar1 = *(Object**)this;
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
               *(undefined8*)this = 0;
               return;
            }

         }

      }

      *(undefined8*)this = 0;
      return;
   }

   /* Ref<Resource>::unref() */
   void Ref<Resource>::unref(Ref<Resource> *this) {
      Object *pOVar1;
      char cVar2;
      if (*(long*)this != 0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            pOVar1 = *(Object**)this;
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
               *(undefined8*)this = 0;
               return;
            }

         }

      }

      *(undefined8*)this = 0;
      return;
   }

   /* HashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, int> > >::_lookup_pos(StringName const&,
   unsigned int&) const */
   undefined8 HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>::_lookup_pos(HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>> *this, StringName *param_1, uint *param_2) {
      uint uVar1;
      long lVar2;
      undefined1 auVar3[16];
      undefined1 auVar4[16];
      undefined1 auVar5[16];
      undefined1 auVar6[16];
      undefined1 auVar7[16];
      undefined1 auVar8[16];
      undefined1 auVar9[16];
      undefined1 auVar10[16];
      uint uVar11;
      uint uVar12;
      long lVar13;
      uint uVar14;
      ulong uVar15;
      uint uVar16;
      if (*(long*)( this + 8 ) == 0) {
         return 0;
      }

      if (*(int*)( this + 0x2c ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar11 = StringName::get_empty_hash();
         }
 else {
            uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         uVar15 = CONCAT44(0, uVar1);
         if (uVar11 == 0) {
            uVar11 = 1;
         }

         auVar3._8_8_ = 0;
         auVar3._0_8_ = (ulong)uVar11 * lVar2;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar15;
         lVar13 = SUB168(auVar3 * auVar7, 8);
         uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
         uVar12 = SUB164(auVar3 * auVar7, 8);
         if (uVar14 != 0) {
            uVar16 = 0;
            do {
               if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  *param_2 = uVar12;
                  return 1;
               }

               uVar16 = uVar16 + 1;
               auVar4._8_8_ = 0;
               auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = uVar15;
               lVar13 = SUB168(auVar4 * auVar8, 8);
               uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
               uVar12 = SUB164(auVar4 * auVar8, 8);
            }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar15,uVar16 <= SUB164(auVar6 * auVar10, 8) );
         }

      }

      return 0;
   }

   /* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::_lookup_pos(StringName const&,
   unsigned int&) const */
   undefined8 HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::_lookup_pos(HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>> *this, StringName *param_1, uint *param_2) {
      uint uVar1;
      long lVar2;
      undefined1 auVar3[16];
      undefined1 auVar4[16];
      undefined1 auVar5[16];
      undefined1 auVar6[16];
      undefined1 auVar7[16];
      undefined1 auVar8[16];
      undefined1 auVar9[16];
      undefined1 auVar10[16];
      uint uVar11;
      uint uVar12;
      long lVar13;
      uint uVar14;
      ulong uVar15;
      uint uVar16;
      if (*(long*)( this + 8 ) == 0) {
         return 0;
      }

      if (*(int*)( this + 0x2c ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar11 = StringName::get_empty_hash();
         }
 else {
            uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         uVar15 = CONCAT44(0, uVar1);
         if (uVar11 == 0) {
            uVar11 = 1;
         }

         auVar3._8_8_ = 0;
         auVar3._0_8_ = (ulong)uVar11 * lVar2;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar15;
         lVar13 = SUB168(auVar3 * auVar7, 8);
         uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
         uVar12 = SUB164(auVar3 * auVar7, 8);
         if (uVar14 != 0) {
            uVar16 = 0;
            do {
               if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  *param_2 = uVar12;
                  return 1;
               }

               uVar16 = uVar16 + 1;
               auVar4._8_8_ = 0;
               auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = uVar15;
               lVar13 = SUB168(auVar4 * auVar8, 8);
               uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
               uVar12 = SUB164(auVar4 * auVar8, 8);
            }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar15,uVar16 <= SUB164(auVar6 * auVar10, 8) );
         }

      }

      return 0;
   }

   /* Ref<GDScript>::unref() */
   void Ref<GDScript>::unref(Ref<GDScript> *this) {
      Object *pOVar1;
      char cVar2;
      if (*(long*)this != 0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            pOVar1 = *(Object**)this;
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
               *(undefined8*)this = 0;
               return;
            }

         }

      }

      *(undefined8*)this = 0;
      return;
   }

   /* Ref<GDScriptParserRef>::unref() */
   void Ref<GDScriptParserRef>::unref(Ref<GDScriptParserRef> *this) {
      Object *pOVar1;
      char cVar2;
      if (*(long*)this != 0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            pOVar1 = *(Object**)this;
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
               *(undefined8*)this = 0;
               return;
            }

         }

      }

      *(undefined8*)this = 0;
      return;
   }

   /* CowData<Variant>::_unref() */
   void CowData<Variant>::_unref(CowData<Variant> *this) {
      long *plVar1;
      int *piVar2;
      long lVar3;
      code *pcVar4;
      int *piVar5;
      long lVar6;
      if (*(long*)this == 0) {
         return;
      }

      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         piVar2 = *(int**)this;
         if (piVar2 != (int*)0x0) {
            lVar3 = *(long*)( piVar2 + -2 );
            *(undefined8*)this = 0;
            if (lVar3 != 0) {
               lVar6 = 0;
               piVar5 = piVar2;
               do {
                  if (( &Variant::needs_deinit )[*piVar5] != '\0') {
                     Variant::_clear_internal();
                  }

                  lVar6 = lVar6 + 1;
                  piVar5 = piVar5 + 6;
               }
 while ( lVar3 != lVar6 );
            }

            Memory::free_static(piVar2 + -4, false);
            return;
         }

         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }

      *(undefined8*)this = 0;
      return;
   }

   /* MethodInfo::~MethodInfo() */
   void MethodInfo::~MethodInfo(MethodInfo *this) {
      long *plVar1;
      long lVar2;
      if (*(long*)( this + 0x68 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + 0x68 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( this + 0x68 );
            *(undefined8*)( this + 0x68 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      CowData<Variant>::_unref((CowData<Variant>*)( this + 0x50 ));
      List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)( this + 0x40 ));
      if (*(long*)( this + 0x28 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + 0x28 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( this + 0x28 );
            *(undefined8*)( this + 0x28 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x18 ) != 0 )) {
         StringName::unref();
      }

      if (*(long*)( this + 0x10 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + 0x10 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( this + 0x10 );
            *(undefined8*)( this + 0x10 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (*(long*)this != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)this + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            return;
         }

      }

      return;
   }

   /* List<MethodInfo, DefaultAllocator>::~List() */
   void List<MethodInfo,DefaultAllocator>::~List(List<MethodInfo,DefaultAllocator> *this) {
      long *plVar1;
      long *plVar2;
      long lVar3;
      long lVar4;
      long *plVar5;
      plVar5 = *(long**)this;
      if (plVar5 == (long*)0x0) {
         return;
      }

      do {
         plVar2 = (long*)*plVar5;
         if (plVar2 == (long*)0x0) {
            if ((int)plVar5[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               return;
            }

            break;
         }

         if ((long*)plVar2[0x10] == plVar5) {
            lVar4 = plVar2[0xe];
            lVar3 = plVar2[0xf];
            *plVar5 = lVar4;
            if (plVar2 == (long*)plVar5[1]) {
               plVar5[1] = lVar3;
            }

            if (lVar3 != 0) {
               *(long*)( lVar3 + 0x70 ) = lVar4;
               lVar4 = plVar2[0xe];
            }

            if (lVar4 != 0) {
               *(long*)( lVar4 + 0x78 ) = lVar3;
            }

            if (plVar2[0xd] != 0) {
               LOCK();
               plVar1 = (long*)( plVar2[0xd] + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar4 = plVar2[0xd];
                  plVar2[0xd] = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }

            }

            CowData<Variant>::_unref((CowData<Variant>*)( plVar2 + 10 ));
            List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)( plVar2 + 8 ));
            if (plVar2[5] != 0) {
               LOCK();
               plVar1 = (long*)( plVar2[5] + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar4 = plVar2[5];
                  plVar2[5] = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( plVar2[3] != 0 )) {
               StringName::unref();
            }

            if (plVar2[2] != 0) {
               LOCK();
               plVar1 = (long*)( plVar2[2] + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar4 = plVar2[2];
                  plVar2[2] = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }

            }

            if (*plVar2 != 0) {
               LOCK();
               plVar1 = (long*)( *plVar2 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar4 = *plVar2;
                  *plVar2 = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }

            }

            Memory::free_static(plVar2, false);
            *(int*)( plVar5 + 2 ) = (int)plVar5[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar5 = *(long**)this;
      }
 while ( (int)plVar5[2] != 0 );
      Memory::free_static(plVar5, false);
      return;
   }

   /* CowData<String>::_unref() */
   void CowData<String>::_unref(CowData<String> *this) {
      long *plVar1;
      long *plVar2;
      long lVar3;
      long lVar4;
      code *pcVar5;
      long *plVar6;
      long lVar7;
      if (*(long*)this == 0) {
         return;
      }

      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)this;
         if (plVar1 != (long*)0x0) {
            lVar3 = plVar1[-1];
            *(undefined8*)this = 0;
            if (lVar3 != 0) {
               lVar7 = 0;
               plVar6 = plVar1;
               do {
                  if (*plVar6 != 0) {
                     LOCK();
                     plVar2 = (long*)( *plVar6 + -0x10 );
                     *plVar2 = *plVar2 + -1;
                     UNLOCK();
                     if (*plVar2 == 0) {
                        lVar4 = *plVar6;
                        *plVar6 = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }

                  }

                  lVar7 = lVar7 + 1;
                  plVar6 = plVar6 + 1;
               }
 while ( lVar3 != lVar7 );
            }

            Memory::free_static(plVar1 + -2, false);
            return;
         }

         /* WARNING: Does not return */
         pcVar5 = (code*)invalidInstructionException();
         ( *pcVar5 )();
      }

      *(undefined8*)this = 0;
      return;
   }

   /* GDScriptTokenizerText::~GDScriptTokenizerText() */
   void GDScriptTokenizerText::~GDScriptTokenizerText(GDScriptTokenizerText *this) {
      uint uVar1;
      long lVar2;
      long lVar3;
      long *plVar4;
      void *pvVar5;
      *(code**)this = GDScriptTokenizerText::set_source_code;
      pvVar5 = *(void**)( this + 0x150 );
      if (pvVar5 != (void*)0x0) {
         if (*(int*)( this + 0x174 ) != 0) {
            uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x170 ) * 4 );
            if (uVar1 == 0) {
               *(undefined4*)( this + 0x174 ) = 0;
               *(undefined1(*) [16])( this + 0x160 ) = (undefined1[16])0x0;
            }
 else {
               lVar3 = 0;
               do {
                  if (*(int*)( *(long*)( this + 0x158 ) + lVar3 ) != 0) {
                     pvVar5 = *(void**)( (long)pvVar5 + lVar3 * 2 );
                     *(int*)( *(long*)( this + 0x158 ) + lVar3 ) = 0;
                     if (*(long*)( (long)pvVar5 + 0x18 ) != 0) {
                        LOCK();
                        plVar4 = (long*)( *(long*)( (long)pvVar5 + 0x18 ) + -0x10 );
                        *plVar4 = *plVar4 + -1;
                        UNLOCK();
                        if (*plVar4 == 0) {
                           lVar2 = *(long*)( (long)pvVar5 + 0x18 );
                           *(undefined8*)( (long)pvVar5 + 0x18 ) = 0;
                           Memory::free_static((void*)( lVar2 + -0x10 ), false);
                        }

                     }

                     Memory::free_static(pvVar5, false);
                     pvVar5 = *(void**)( this + 0x150 );
                     *(undefined8*)( (long)pvVar5 + lVar3 * 2 ) = 0;
                  }

                  lVar3 = lVar3 + 4;
               }
 while ( lVar3 != (ulong)uVar1 << 2 );
               *(undefined4*)( this + 0x174 ) = 0;
               *(undefined1(*) [16])( this + 0x160 ) = (undefined1[16])0x0;
               if (pvVar5 == (void*)0x0) goto LAB_0012b6c9;
            }

         }

         Memory::free_static(pvVar5, false);
         Memory::free_static(*(void**)( this + 0x158 ), false);
      }

      LAB_0012b6c9:CowData<String>::_unref((CowData<String>*)( this + 0x140 ));
      if (*(long*)( this + 0x130 ) != 0) {
         LOCK();
         plVar4 = (long*)( *(long*)( this + 0x130 ) + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            lVar3 = *(long*)( this + 0x130 );
            *(undefined8*)( this + 0x130 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      plVar4 = *(long**)( this + 0x110 );
      if (plVar4 != (long*)0x0) {
         do {
            pvVar5 = (void*)*plVar4;
            if (pvVar5 == (void*)0x0) {
               if ((int)plVar4[2] != 0) {
                  _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                  goto LAB_0012b75f;
               }

               break;
            }

            if (plVar4 == *(long**)( (long)pvVar5 + 0x18 )) {
               lVar3 = *(long*)( (long)pvVar5 + 8 );
               lVar2 = *(long*)( (long)pvVar5 + 0x10 );
               *plVar4 = lVar3;
               if (pvVar5 == (void*)plVar4[1]) {
                  plVar4[1] = lVar2;
               }

               if (lVar2 != 0) {
                  *(long*)( lVar2 + 8 ) = lVar3;
                  lVar3 = *(long*)( (long)pvVar5 + 8 );
               }

               if (lVar3 != 0) {
                  *(long*)( lVar3 + 0x10 ) = lVar2;
               }

               Memory::free_static(pvVar5, false);
               *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
            }
 else {
               _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
            }

            plVar4 = *(long**)( this + 0x110 );
         }
 while ( (int)plVar4[2] != 0 );
         Memory::free_static(plVar4, false);
      }

      LAB_0012b75f:List<List<int,DefaultAllocator>,DefaultAllocator>::~List((List<List<int,DefaultAllocator>,DefaultAllocator>*)( this + 0x108 ));
      plVar4 = *(long**)( this + 0x100 );
      if (plVar4 != (long*)0x0) {
         do {
            pvVar5 = (void*)*plVar4;
            if (pvVar5 == (void*)0x0) {
               if ((int)plVar4[2] != 0) {
                  _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                  goto LAB_0012b7dd;
               }

               break;
            }

            if (plVar4 == *(long**)( (long)pvVar5 + 0x18 )) {
               lVar3 = *(long*)( (long)pvVar5 + 8 );
               lVar2 = *(long*)( (long)pvVar5 + 0x10 );
               *plVar4 = lVar3;
               if (pvVar5 == (void*)plVar4[1]) {
                  plVar4[1] = lVar2;
               }

               if (lVar2 != 0) {
                  *(long*)( lVar2 + 8 ) = lVar3;
                  lVar3 = *(long*)( (long)pvVar5 + 8 );
               }

               if (lVar3 != 0) {
                  *(long*)( lVar3 + 0x10 ) = lVar2;
               }

               Memory::free_static(pvVar5, false);
               *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
            }
 else {
               _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
            }

            plVar4 = *(long**)( this + 0x100 );
         }
 while ( (int)plVar4[2] != 0 );
         Memory::free_static(plVar4, false);
      }

      LAB_0012b7dd:CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xf0 ));
      if (( &Variant::needs_deinit )[*(int*)( this + 0xb8 )] != '\0') {
         Variant::_clear_internal();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xa8 ));
      if (( &Variant::needs_deinit )[*(int*)( this + 0x70 )] != '\0') {
         Variant::_clear_internal();
      }

      List<GDScriptTokenizer::Token,DefaultAllocator>::~List((List<GDScriptTokenizer::Token,DefaultAllocator>*)( this + 0x58 ));
      CowData<char32_t>::_unref((CowData<char32_t>*)( this + 8 ));
      return;
   }

   /* GDScriptTokenizerText::~GDScriptTokenizerText() */
   void GDScriptTokenizerText::~GDScriptTokenizerText(GDScriptTokenizerText *this) {
      ~GDScriptTokenizerText(this)
      ;;
      operator_delete(this, 0x178);
      return;
   }

   /* CowData<String>::_realloc(long) */
   undefined8 CowData<String>::_realloc(CowData<String> *this, long param_1) {
      undefined8 *puVar1;
      puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
      if (puVar1 != (undefined8*)0x0) {
         *puVar1 = 1;
         *(undefined8**)this = puVar1 + 2;
         return 0;
      }

      _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
      return 6;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* Error CowData<String>::resize<false>(long) */
   undefined8 CowData<String>::resize<false>(CowData<String> *this, long param_1) {
      long *plVar1;
      long *plVar2;
      code *pcVar3;
      undefined8 uVar4;
      undefined8 *puVar5;
      long lVar6;
      long lVar7;
      ulong uVar8;
      undefined8 *puVar9;
      long lVar10;
      if (param_1 < 0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
         return 0x1f;
      }

      if (*(long*)this == 0) {
         if (param_1 == 0) {
            return 0;
         }

         _copy_on_write(this);
         lVar6 = 0;
         lVar7 = 0;
      }
 else {
         lVar6 = *(long*)( *(long*)this + -8 );
         if (param_1 == lVar6) {
            return 0;
         }

         if (param_1 == 0) {
            _unref(this);
            return 0;
         }

         _copy_on_write(this);
         lVar7 = lVar6 * 8;
         if (lVar7 != 0) {
            uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
            uVar8 = uVar8 | uVar8 >> 2;
            uVar8 = uVar8 | uVar8 >> 4;
            uVar8 = uVar8 | uVar8 >> 8;
            uVar8 = uVar8 | uVar8 >> 0x10;
            lVar7 = ( uVar8 | uVar8 >> 0x20 ) + 1;
         }

      }

      if (param_1 * 8 == 0) {
         LAB_0012bd80:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
         return 6;
      }

      uVar8 = param_1 * 8 - 1;
      uVar8 = uVar8 >> 1 | uVar8;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      uVar8 = uVar8 | uVar8 >> 0x20;
      lVar10 = uVar8 + 1;
      if (lVar10 == 0) goto LAB_0012bd80;
      if (param_1 <= lVar6) {
         lVar6 = *(long*)this;
         uVar8 = param_1;
         while (lVar6 != 0) {
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
               LAB_0012bc59:if (lVar10 != lVar7) {
                  uVar4 = _realloc(this, lVar10);
                  if ((int)uVar4 != 0) {
                     return uVar4;
                  }

                  lVar6 = *(long*)this;
                  if (lVar6 == 0) {
                     _DAT_00000000 = 0;
                     /* WARNING: Does not return */
                     pcVar3 = (code*)invalidInstructionException();
                     ( *pcVar3 )();
                  }

               }

               *(long*)( lVar6 + -8 ) = param_1;
               return 0;
            }

            while (true) {
               plVar2 = (long*)( lVar6 + uVar8 * 8 );
               if (*plVar2 != 0) break;
               uVar8 = uVar8 + 1;
               if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_0012bc59;
            }
;
            LOCK();
            plVar1 = (long*)( *plVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar6 = *plVar2;
               *plVar2 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

            uVar8 = uVar8 + 1;
            lVar6 = *(long*)this;
         }
;
         goto LAB_0012bdd6;
      }

      if (lVar10 == lVar7) {
         LAB_0012bcff:puVar9 = *(undefined8**)this;
         if (puVar9 == (undefined8*)0x0) {
            LAB_0012bdd6:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar6 = puVar9[-1];
         if (param_1 <= lVar6) goto LAB_0012bcea;
      }
 else {
         if (lVar6 != 0) {
            uVar4 = _realloc(this, lVar10);
            if ((int)uVar4 != 0) {
               return uVar4;
            }

            goto LAB_0012bcff;
         }

         puVar5 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
         if (puVar5 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }

         puVar9 = puVar5 + 2;
         *puVar5 = 1;
         puVar5[1] = 0;
         *(undefined8**)this = puVar9;
         lVar6 = 0;
      }

      memset(puVar9 + lVar6, 0, ( param_1 - lVar6 ) * 8);
      LAB_0012bcea:puVar9[-1] = param_1;
      return 0;
   }

   /* CowData<Variant>::_realloc(long) */
   undefined8 CowData<Variant>::_realloc(CowData<Variant> *this, long param_1) {
      undefined8 *puVar1;
      puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
      if (puVar1 != (undefined8*)0x0) {
         *puVar1 = 1;
         *(undefined8**)this = puVar1 + 2;
         return 0;
      }

      _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
      return 6;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* Error CowData<Variant>::resize<false>(long) */
   undefined8 CowData<Variant>::resize<false>(CowData<Variant> *this, long param_1) {
      code *pcVar1;
      undefined8 *puVar2;
      long lVar3;
      undefined8 *puVar4;
      undefined8 uVar5;
      undefined4 *puVar6;
      long lVar7;
      ulong uVar8;
      long lVar9;
      if (param_1 < 0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
         return 0x1f;
      }

      if (*(long*)this == 0) {
         if (param_1 == 0) {
            return 0;
         }

         _copy_on_write(this);
         lVar3 = 0;
         lVar7 = 0;
      }
 else {
         lVar3 = *(long*)( *(long*)this + -8 );
         if (param_1 == lVar3) {
            return 0;
         }

         if (param_1 == 0) {
            _unref(this);
            return 0;
         }

         _copy_on_write(this);
         lVar7 = lVar3 * 0x18;
         if (lVar7 != 0) {
            uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
            uVar8 = uVar8 | uVar8 >> 2;
            uVar8 = uVar8 | uVar8 >> 4;
            uVar8 = uVar8 | uVar8 >> 8;
            uVar8 = uVar8 | uVar8 >> 0x10;
            lVar7 = ( uVar8 | uVar8 >> 0x20 ) + 1;
         }

      }

      if (param_1 * 0x18 == 0) {
         LAB_0012c100:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
         return 6;
      }

      uVar8 = param_1 * 0x18 - 1;
      uVar8 = uVar8 >> 1 | uVar8;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      uVar8 = uVar8 | uVar8 >> 0x20;
      lVar9 = uVar8 + 1;
      if (lVar9 == 0) goto LAB_0012c100;
      if (param_1 <= lVar3) {
         puVar4 = *(undefined8**)this;
         uVar8 = param_1;
         while (puVar4 != (undefined8*)0x0) {
            if ((ulong)puVar4[-1] <= uVar8) {
               if (lVar9 == lVar7) goto LAB_0012c059;
               uVar5 = _realloc(this, lVar9);
               if ((int)uVar5 != 0) {
                  return uVar5;
               }

               goto LAB_0012c04c;
            }

            if (( &Variant::needs_deinit )[*(int*)( puVar4 + uVar8 * 3 )] != '\0') {
               Variant::_clear_internal();
               puVar4 = *(undefined8**)this;
            }

            uVar8 = uVar8 + 1;
         }
;
         goto LAB_0012c12f;
      }

      if (lVar9 == lVar7) {
         LAB_0012c073:puVar4 = *(undefined8**)this;
         if (puVar4 == (undefined8*)0x0) {
            LAB_0012c12f:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

         lVar3 = puVar4[-1];
         if (param_1 <= lVar3) goto LAB_0012c059;
      }
 else {
         if (lVar3 != 0) {
            uVar5 = _realloc(this, lVar9);
            if ((int)uVar5 != 0) {
               return uVar5;
            }

            goto LAB_0012c073;
         }

         puVar2 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
         if (puVar2 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }

         puVar4 = puVar2 + 2;
         *puVar2 = 1;
         puVar2[1] = 0;
         *(undefined8**)this = puVar4;
         lVar3 = 0;
      }

      *(undefined4*)( puVar4 + lVar3 * 3 ) = 0;
      *(undefined1(*) [16])( puVar4 + lVar3 * 3 + 1 ) = (undefined1[16])0x0;
      lVar3 = lVar3 + 1;
      if (lVar3 < param_1) {
         lVar7 = lVar3 * 0x18;
         do {
            lVar3 = lVar3 + 1;
            puVar6 = (undefined4*)( *(long*)this + lVar7 );
            lVar7 = lVar7 + 0x18;
            *puVar6 = 0;
            *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
         }
 while ( param_1 != lVar3 );
      }

      LAB_0012c04c:puVar4 = *(undefined8**)this;
      if (puVar4 == (undefined8*)0x0) {
         _DAT_00000000 = 0;
         /* WARNING: Does not return */
         pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      LAB_0012c059:puVar4[-1] = param_1;
      return 0;
   }

   /* CowData<ScriptLanguage::ScriptTemplate>::_unref() */
   void CowData<ScriptLanguage::ScriptTemplate>::_unref(CowData<ScriptLanguage::ScriptTemplate> *this) {
      long *plVar1;
      long *plVar2;
      long lVar3;
      long lVar4;
      code *pcVar5;
      long *plVar6;
      long lVar7;
      if (*(long*)this == 0) {
         return;
      }

      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)this;
         if (plVar1 != (long*)0x0) {
            lVar3 = plVar1[-1];
            *(undefined8*)this = 0;
            if (lVar3 != 0) {
               lVar7 = 0;
               plVar6 = plVar1;
               do {
                  if (plVar6[3] != 0) {
                     LOCK();
                     plVar2 = (long*)( plVar6[3] + -0x10 );
                     *plVar2 = *plVar2 + -1;
                     UNLOCK();
                     if (*plVar2 == 0) {
                        lVar4 = plVar6[3];
                        plVar6[3] = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }

                  }

                  if (plVar6[2] != 0) {
                     LOCK();
                     plVar2 = (long*)( plVar6[2] + -0x10 );
                     *plVar2 = *plVar2 + -1;
                     UNLOCK();
                     if (*plVar2 == 0) {
                        lVar4 = plVar6[2];
                        plVar6[2] = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }

                  }

                  if (plVar6[1] != 0) {
                     LOCK();
                     plVar2 = (long*)( plVar6[1] + -0x10 );
                     *plVar2 = *plVar2 + -1;
                     UNLOCK();
                     if (*plVar2 == 0) {
                        lVar4 = plVar6[1];
                        plVar6[1] = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }

                  }

                  if (*plVar6 != 0) {
                     LOCK();
                     plVar2 = (long*)( *plVar6 + -0x10 );
                     *plVar2 = *plVar2 + -1;
                     UNLOCK();
                     if (*plVar2 == 0) {
                        lVar4 = *plVar6;
                        *plVar6 = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }

                  }

                  lVar7 = lVar7 + 1;
                  plVar6 = plVar6 + 5;
               }
 while ( lVar3 != lVar7 );
            }

            Memory::free_static(plVar1 + -2, false);
            return;
         }

         /* WARNING: Does not return */
         pcVar5 = (code*)invalidInstructionException();
         ( *pcVar5 )();
      }

      *(undefined8*)this = 0;
      return;
   }

   /* CowData<GDScriptParser::DataType>::_unref() */
   void CowData<GDScriptParser::DataType>::_unref(CowData<GDScriptParser::DataType> *this) {
      long *plVar1;
      DataType *pDVar2;
      long lVar3;
      code *pcVar4;
      long lVar5;
      DataType *this_00;
      if (*(long*)this == 0) {
         return;
      }

      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         pDVar2 = *(DataType**)this;
         if (pDVar2 != (DataType*)0x0) {
            lVar3 = *(long*)( pDVar2 + -8 );
            *(undefined8*)this = 0;
            if (lVar3 != 0) {
               lVar5 = 0;
               this_00 = pDVar2;
               do {
                  lVar5 = lVar5 + 1;
                  GDScriptParser::DataType::~DataType(this_00);
                  this_00 = this_00 + 0xf0;
               }
 while ( lVar3 != lVar5 );
            }

            Memory::free_static(pDVar2 + -0x10, false);
            return;
         }

         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }

      *(undefined8*)this = 0;
      return;
   }

   /* GDScriptParser::DataType::~DataType() */
   void GDScriptParser::DataType::~DataType(DataType *this) {
      long *plVar1;
      uint uVar2;
      Object *pOVar3;
      char cVar4;
      long lVar5;
      void *pvVar6;
      bool bVar7;
      pvVar6 = *(void**)( this + 200 );
      if (pvVar6 != (void*)0x0) {
         if (*(int*)( this + 0xec ) != 0) {
            uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xe8 ) * 4 );
            if (uVar2 == 0) {
               *(undefined4*)( this + 0xec ) = 0;
               *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
            }
 else {
               lVar5 = 0;
               do {
                  if (*(int*)( *(long*)( this + 0xd0 ) + lVar5 ) != 0) {
                     bVar7 = StringName::configured != '\0';
                     *(int*)( *(long*)( this + 0xd0 ) + lVar5 ) = 0;
                     pvVar6 = *(void**)( (long)pvVar6 + lVar5 * 2 );
                     if (( bVar7 ) && ( *(long*)( (long)pvVar6 + 0x10 ) != 0 )) {
                        StringName::unref();
                     }

                     Memory::free_static(pvVar6, false);
                     pvVar6 = *(void**)( this + 200 );
                     *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
                  }

                  lVar5 = lVar5 + 4;
               }
 while ( lVar5 != (ulong)uVar2 << 2 );
               *(undefined4*)( this + 0xec ) = 0;
               *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
               if (pvVar6 == (void*)0x0) goto LAB_0012c40a;
            }

         }

         Memory::free_static(pvVar6, false);
         Memory::free_static(*(void**)( this + 0xd0 ), false);
      }

      LAB_0012c40a:if (*(long*)( this + 0xb8 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + 0xb8 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar5 = *(long*)( this + 0xb8 );
            *(undefined8*)( this + 0xb8 ) = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      CowData<Variant>::_unref((CowData<Variant>*)( this + 0xa0 ));
      List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)( this + 0x90 ));
      if (*(long*)( this + 0x78 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + 0x78 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar5 = *(long*)( this + 0x78 );
            *(undefined8*)( this + 0x78 ) = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x68 ) != 0 )) {
         StringName::unref();
      }

      for (int i = 0; i < 3; i++) {
         if (*(long*)( this + ( -16*i + 96 ) ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( this + ( -16*i + 96 ) ) + -16 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar5 = *(long*)( this + ( -16*i + 96 ) );
               *(undefined8*)( this + ( -16*i + 96 ) ) = 0;
               Memory::free_static((void*)( lVar5 + -16 ), false);
            }

         }

      }

      if (*(long*)( this + 0x38 ) != 0) {
         cVar4 = RefCounted::unreference();
         if (cVar4 != '\0') {
            pOVar3 = *(Object**)( this + 0x38 );
            cVar4 = predelete_handler(pOVar3);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
               Memory::free_static(pOVar3, false);
            }

         }

      }

      if (StringName::configured != '\0') {
         if (*(long*)( this + 0x30 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0012c4ef;
         }

         if (*(long*)( this + 0x28 ) != 0) {
            StringName::unref();
         }

      }

      LAB_0012c4ef:CowData<GDScriptParser::DataType>::_unref((CowData<GDScriptParser::DataType>*)( this + 8 ));
      return;
   }

   /* GDScriptCompletionIdentifier::~GDScriptCompletionIdentifier() */
   void GDScriptCompletionIdentifier::~GDScriptCompletionIdentifier(GDScriptCompletionIdentifier *this) {
      long *plVar1;
      long lVar2;
      if (( &Variant::needs_deinit )[*(int*)( this + 0xf8 )] != '\0') {
         Variant::_clear_internal();
      }

      if (*(long*)( this + 0xf0 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + 0xf0 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( this + 0xf0 );
            *(undefined8*)( this + 0xf0 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            GDScriptParser::DataType::~DataType((DataType*)this);
            return;
         }

      }

      GDScriptParser::DataType::~DataType((DataType*)this);
      return;
   }

   /* HashMap<StringName, long, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, long> > >::_resize_and_rehash(unsigned int) */
   void HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>::_resize_and_rehash(HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>> *this, uint param_1) {
      uint *puVar1;
      undefined8 *puVar2;
      uint uVar3;
      uint uVar4;
      uint uVar5;
      void *pvVar6;
      void *pvVar7;
      void *__s;
      long lVar8;
      long lVar9;
      undefined1 auVar10[16];
      undefined1 auVar11[16];
      undefined1 auVar12[16];
      undefined1 auVar13[16];
      undefined1 auVar14[16];
      undefined1 auVar15[16];
      undefined1 auVar16[16];
      undefined1 auVar17[16];
      undefined8 uVar18;
      void *__s_00;
      int iVar19;
      long lVar20;
      uint uVar21;
      ulong uVar22;
      undefined8 uVar23;
      uint uVar24;
      ulong uVar25;
      ulong uVar26;
      uint local_78;
      *(undefined4*)( this + 0x2c ) = 0;
      uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (param_1 < 2) {
         param_1 = 2;
      }

      *(uint*)( this + 0x28 ) = param_1;
      uVar21 = *(uint*)( hash_table_size_primes + (ulong)param_1 * 4 );
      uVar22 = (ulong)uVar21;
      pvVar6 = *(void**)( this + 8 );
      pvVar7 = *(void**)( this + 0x10 );
      uVar26 = uVar22 * 4;
      uVar25 = uVar22 * 8;
      uVar18 = Memory::alloc_static(uVar26, false);
      *(undefined8*)( this + 0x10 ) = uVar18;
      __s_00 = (void*)Memory::alloc_static(uVar25, false);
      *(void**)( this + 8 ) = __s_00;
      if (uVar21 != 0) {
         __s = *(void**)( this + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar25 ) ) && ( __s_00 < (void*)( (long)__s + uVar26 ) )) {
            uVar26 = 0;
            do {
               *(undefined4*)( (long)__s + uVar26 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar26 * 8 ) = 0;
               uVar26 = uVar26 + 1;
            }
 while ( uVar22 != uVar26 );
         }
 else {
            memset(__s, 0, uVar26);
            memset(__s_00, 0, uVar25);
         }

      }

      if (uVar3 != 0) {
         uVar26 = 0;
         do {
            uVar21 = *(uint*)( (long)pvVar7 + uVar26 * 4 );
            if (uVar21 != 0) {
               uVar24 = 0;
               lVar8 = *(long*)( this + 0x10 );
               uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
               uVar25 = CONCAT44(0, uVar4);
               lVar9 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar21 * lVar9;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = uVar25;
               lVar20 = SUB168(auVar10 * auVar14, 8);
               puVar1 = (uint*)( lVar8 + lVar20 * 4 );
               iVar19 = SUB164(auVar10 * auVar14, 8);
               uVar5 = *puVar1;
               uVar18 = *(undefined8*)( (long)pvVar6 + uVar26 * 8 );
               while (uVar5 != 0) {
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = (ulong)uVar5 * lVar9;
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = uVar25;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(( uVar4 + iVar19 ) - SUB164(auVar11 * auVar15, 8)) * lVar9;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = uVar25;
                  local_78 = SUB164(auVar12 * auVar16, 8);
                  uVar23 = uVar18;
                  if (local_78 < uVar24) {
                     *puVar1 = uVar21;
                     puVar2 = (undefined8*)( (long)__s_00 + lVar20 * 8 );
                     uVar23 = *puVar2;
                     *puVar2 = uVar18;
                     uVar21 = uVar5;
                     uVar24 = local_78;
                  }

                  uVar24 = uVar24 + 1;
                  auVar13._8_8_ = 0;
                  auVar13._0_8_ = ( ulong )(iVar19 + 1) * lVar9;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = uVar25;
                  lVar20 = SUB168(auVar13 * auVar17, 8);
                  puVar1 = (uint*)( lVar8 + lVar20 * 4 );
                  iVar19 = SUB164(auVar13 * auVar17, 8);
                  uVar18 = uVar23;
                  uVar5 = *puVar1;
               }
;
               *(undefined8*)( (long)__s_00 + lVar20 * 8 ) = uVar18;
               *puVar1 = uVar21;
               *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
            }

            uVar26 = uVar26 + 1;
         }
 while ( uVar26 != uVar3 );
         Memory::free_static(pvVar6, false);
         Memory::free_static(pvVar7, false);
         return;
      }

      return;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* HashMap<StringName, long, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, long> > >::insert(StringName const&, long
   const&, bool) */
   StringName *HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>::insert(StringName *param_1, long *param_2, bool param_3) {
      uint *puVar1;
      uint uVar2;
      undefined8 *puVar3;
      long lVar4;
      void *__s;
      undefined1 auVar5[16];
      undefined1 auVar6[16];
      undefined1 auVar7[16];
      undefined1 auVar8[16];
      undefined1 auVar9[16];
      undefined1 auVar10[16];
      undefined1 auVar11[16];
      undefined1 auVar12[16];
      undefined1 auVar13[16];
      undefined1 auVar14[16];
      undefined1 auVar15[16];
      undefined1 auVar16[16];
      undefined1 auVar17[16];
      undefined1 auVar18[16];
      undefined1 auVar19[16];
      undefined1 auVar20[16];
      ulong uVar21;
      long *plVar22;
      uint uVar23;
      uint uVar24;
      long lVar25;
      void *__s_00;
      long *in_RCX;
      uint uVar26;
      int iVar27;
      undefined7 in_register_00000011;
      StringName *pSVar28;
      long lVar29;
      long lVar30;
      ulong uVar31;
      char in_R8B;
      uint uVar32;
      ulong uVar33;
      uint uVar34;
      long *plVar35;
      long in_FS_OFFSET;
      bool bVar36;
      long *local_80;
      long local_58;
      long local_50;
      long local_40;
      pSVar28 = (StringName*)CONCAT71(in_register_00000011, param_3);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      uVar23 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
      if (param_2[1] == 0) {
         uVar21 = (ulong)uVar23;
         uVar31 = uVar21 * 4;
         uVar33 = uVar21 * 8;
         lVar25 = Memory::alloc_static(uVar31, false);
         param_2[2] = lVar25;
         __s_00 = (void*)Memory::alloc_static(uVar33, false);
         param_2[1] = (long)__s_00;
         if (uVar23 != 0) {
            __s = (void*)param_2[2];
            if (( __s < (void*)( (long)__s_00 + uVar33 ) ) && ( __s_00 < (void*)( (long)__s + uVar31 ) )) {
               uVar31 = 0;
               do {
                  *(undefined4*)( (long)__s + uVar31 * 4 ) = 0;
                  *(undefined8*)( (long)__s_00 + uVar31 * 8 ) = 0;
                  uVar31 = uVar31 + 1;
               }
 while ( uVar21 != uVar31 );
            }
 else {
               memset(__s, 0, uVar31);
               memset(__s_00, 0, uVar33);
            }

            goto LAB_0012c922;
         }

         iVar27 = *(int*)( (long)param_2 + 0x2c );
         if (__s_00 == (void*)0x0) goto LAB_0012ca49;
         if (*(int*)( (long)param_2 + 0x2c ) != 0) goto LAB_0012c92e;
         LAB_0012ca6b:if ((int)param_2[5] == 0x1c) {
            _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
            local_80 = (long*)0x0;
            goto LAB_0012ca01;
         }

         _resize_and_rehash((HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>*)param_2, (int)param_2[5] + 1);
      }
 else {
         LAB_0012c922:iVar27 = *(int*)( (long)param_2 + 0x2c );
         if (iVar27 != 0) {
            LAB_0012c92e:uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
            uVar31 = CONCAT44(0, uVar2);
            lVar25 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 5 ) * 8 );
            if (*(long*)pSVar28 == 0) {
               uVar24 = StringName::get_empty_hash();
            }
 else {
               uVar24 = *(uint*)( *(long*)pSVar28 + 0x20 );
            }

            if (uVar24 == 0) {
               uVar24 = 1;
            }

            uVar34 = 0;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar24 * lVar25;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = uVar31;
            lVar29 = SUB168(auVar5 * auVar13, 8);
            uVar32 = *(uint*)( param_2[2] + lVar29 * 4 );
            uVar26 = SUB164(auVar5 * auVar13, 8);
            if (uVar32 != 0) {
               do {
                  if (( uVar24 == uVar32 ) && ( *(long*)( *(long*)( param_2[1] + lVar29 * 8 ) + 0x10 ) == *(long*)pSVar28 )) {
                     local_80 = *(long**)( param_2[1] + (ulong)uVar26 * 8 );
                     local_80[3] = *in_RCX;
                     goto LAB_0012ca01;
                  }

                  uVar34 = uVar34 + 1;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = ( ulong )(uVar26 + 1) * lVar25;
                  auVar14._8_8_ = 0;
                  auVar14._0_8_ = uVar31;
                  lVar29 = SUB168(auVar6 * auVar14, 8);
                  uVar32 = *(uint*)( param_2[2] + lVar29 * 4 );
                  uVar26 = SUB164(auVar6 * auVar14, 8);
               }
 while ( ( uVar32 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar32 * lVar25,auVar15._8_8_ = 0,auVar15._0_8_ = uVar31,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar2 + uVar26 ) - SUB164(auVar7 * auVar15, 8)) * lVar25,auVar16._8_8_ = 0,auVar16._0_8_ = uVar31,uVar34 <= SUB164(auVar8 * auVar16, 8) );
            }

            iVar27 = *(int*)( (long)param_2 + 0x2c );
         }

         LAB_0012ca49:if ((float)uVar23 * __LC32 < (float)( iVar27 + 1 )) goto LAB_0012ca6b;
      }

      StringName::StringName((StringName*)&local_58, pSVar28);
      local_50 = *in_RCX;
      local_80 = (long*)operator_new(0x20, "");
      *local_80 = 0;
      local_80[1] = 0;
      StringName::StringName((StringName*)( local_80 + 2 ), (StringName*)&local_58);
      bVar36 = StringName::configured != '\0';
      local_80[3] = local_50;
      if (( bVar36 ) && ( local_58 != 0 )) {
         StringName::unref();
      }

      puVar3 = (undefined8*)param_2[4];
      if (puVar3 == (undefined8*)0x0) {
         param_2[3] = (long)local_80;
         param_2[4] = (long)local_80;
         LAB_0012cb24:lVar25 = *(long*)pSVar28;
         if (lVar25 != 0) goto LAB_0012cb31;
         LAB_0012cc2d:uVar23 = StringName::get_empty_hash();
      }
 else {
         if (in_R8B != '\0') {
            lVar25 = param_2[3];
            *(long**)( lVar25 + 8 ) = local_80;
            *local_80 = lVar25;
            param_2[3] = (long)local_80;
            goto LAB_0012cb24;
         }

         *puVar3 = local_80;
         local_80[1] = (long)puVar3;
         lVar25 = *(long*)pSVar28;
         param_2[4] = (long)local_80;
         if (lVar25 == 0) goto LAB_0012cc2d;
         LAB_0012cb31:uVar23 = *(uint*)( lVar25 + 0x20 );
      }

      lVar25 = param_2[2];
      if (uVar23 == 0) {
         uVar23 = 1;
      }

      uVar31 = (ulong)uVar23;
      uVar32 = 0;
      lVar29 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 5 ) * 8 );
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
      uVar33 = CONCAT44(0, uVar2);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar31 * lVar29;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar33;
      lVar30 = SUB168(auVar9 * auVar17, 8);
      lVar4 = param_2[1];
      puVar1 = (uint*)( lVar25 + lVar30 * 4 );
      iVar27 = SUB164(auVar9 * auVar17, 8);
      uVar24 = *puVar1;
      plVar22 = local_80;
      while (uVar24 != 0) {
         auVar10._8_8_ = 0;
         auVar10._0_8_ = (ulong)uVar24 * lVar29;
         auVar18._8_8_ = 0;
         auVar18._0_8_ = uVar33;
         auVar11._8_8_ = 0;
         auVar11._0_8_ = ( ulong )(( uVar2 + iVar27 ) - SUB164(auVar10 * auVar18, 8)) * lVar29;
         auVar19._8_8_ = 0;
         auVar19._0_8_ = uVar33;
         uVar23 = SUB164(auVar11 * auVar19, 8);
         plVar35 = plVar22;
         if (uVar23 < uVar32) {
            *puVar1 = (uint)uVar31;
            uVar31 = (ulong)uVar24;
            puVar3 = (undefined8*)( lVar4 + lVar30 * 8 );
            plVar35 = (long*)*puVar3;
            *puVar3 = plVar22;
            uVar32 = uVar23;
         }

         uVar23 = (uint)uVar31;
         uVar32 = uVar32 + 1;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = ( ulong )(iVar27 + 1) * lVar29;
         auVar20._8_8_ = 0;
         auVar20._0_8_ = uVar33;
         lVar30 = SUB168(auVar12 * auVar20, 8);
         puVar1 = (uint*)( lVar25 + lVar30 * 4 );
         iVar27 = SUB164(auVar12 * auVar20, 8);
         plVar22 = plVar35;
         uVar24 = *puVar1;
      }
;
      *(long**)( lVar4 + lVar30 * 8 ) = plVar22;
      *puVar1 = uVar23;
      *(int*)( (long)param_2 + 0x2c ) = *(int*)( (long)param_2 + 0x2c ) + 1;
      LAB_0012ca01:*(long**)param_1 = local_80;
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* GDScriptParser::DataType::TEMPNAMEPLACEHOLDERVALUE(GDScriptParser::DataType const&) */
   void GDScriptParser::DataType::operator =(DataType *this, DataType *param_1) {
      HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>> *this_00;
      Object *pOVar1;
      Object *pOVar2;
      void *pvVar3;
      char cVar4;
      uint uVar5;
      long lVar7;
      uint uVar8;
      long *plVar9;
      long lVar10;
      long in_FS_OFFSET;
      bool bVar11;
      StringName local_48[8];
      long local_40;
      ulong uVar6;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined8*)( this + 0x10 ) = *(undefined8*)( param_1 + 0x10 );
      *(undefined4*)( this + 0x18 ) = *(undefined4*)( param_1 + 0x18 );
      this[0x1c] = param_1[0x1c];
      *(undefined4*)( this + 0x20 ) = *(undefined4*)( param_1 + 0x20 );
      StringName::operator =((StringName*)( this + 0x28 ), (StringName*)( param_1 + 0x28 ));
      StringName::operator =((StringName*)( this + 0x30 ), (StringName*)( param_1 + 0x30 ));
      pOVar1 = *(Object**)( param_1 + 0x38 );
      pOVar2 = *(Object**)( this + 0x38 );
      if (pOVar1 != pOVar2) {
         *(Object**)( this + 0x38 ) = pOVar1;
         if (( pOVar1 != (Object*)0x0 ) && ( cVar4 = RefCounted::reference() ),cVar4 == '\0') {
            *(undefined8*)( this + 0x38 ) = 0;
         }

         if (( ( pOVar2 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
         Memory::free_static(pOVar2, false);
      }

   }

   if (*(long*)( this + 0x40 ) != *(long*)( param_1 + 0x40 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x40 ), (CowData*)( param_1 + 0x40 ));
   }

   this_00 = (HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>*)( this + 0xc0 );
   *(undefined8*)( this + 0x48 ) = *(undefined8*)( param_1 + 0x48 );
   MethodInfo::operator =((MethodInfo*)( this + 0x50 ), (MethodInfo*)( param_1 + 0x50 ));
   if (this_00 != (HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>*)( param_1 + 0xc0 )) {
      uVar8 = *(uint*)( this + 0xe8 );
      uVar5 = *(uint*)( hash_table_size_primes + (ulong)uVar8 * 4 );
      if (( *(int*)( this + 0xec ) != 0 ) && ( *(long*)( this + 200 ) != 0 )) {
         if (uVar5 != 0) {
            lVar10 = 0;
            do {
               if (*(int*)( *(long*)( this + 0xd0 ) + lVar10 ) != 0) {
                  *(int*)( *(long*)( this + 0xd0 ) + lVar10 ) = 0;
                  pvVar3 = *(void**)( *(long*)( this + 200 ) + lVar10 * 2 );
                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar3, false);
                  *(undefined8*)( *(long*)( this + 200 ) + lVar10 * 2 ) = 0;
               }

               lVar10 = lVar10 + 4;
            }
 while ( lVar10 != (ulong)uVar5 << 2 );
            uVar8 = *(uint*)( this + 0xe8 );
            uVar5 = *(uint*)( hash_table_size_primes + (ulong)uVar8 * 4 );
         }

         *(undefined4*)( this + 0xec ) = 0;
         *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
      }

      if (uVar5 < *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0xe8 ) * 4 )) {
         if (uVar8 != 0x1c) {
            uVar6 = (ulong)uVar8;
            do {
               uVar5 = (int)uVar6 + 1;
               uVar6 = (ulong)uVar5;
               if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0xe8 ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar6 * 4 )) {
                  if (uVar8 != uVar5) {
                     if (*(long*)( this + 200 ) == 0) {
                        *(uint*)( this + 0xe8 ) = uVar5;
                     }
 else {
                        HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>::_resize_and_rehash(this_00, uVar5);
                     }

                  }

                  goto LAB_0012cf31;
               }

            }
 while ( uVar5 != 0x1c );
         }

         _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
      }

      LAB_0012cf31:if (( *(long*)( param_1 + 200 ) != 0 ) && ( plVar9 = *(long**)( param_1 + 0xd8 ) ),plVar9 != (long*)0x0) {
         do {
            HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>::insert(local_48, (long*)this_00, (bool)( (char)plVar9 + '\x10' ));
            plVar9 = (long*)*plVar9;
         }
 while ( plVar9 != (long*)0x0 );
      }

   }

   if (*(long*)( this + 8 ) != *(long*)( param_1 + 8 )) {
      CowData<GDScriptParser::DataType>::_unref((CowData<GDScriptParser::DataType>*)( this + 8 ));
      if (*(long*)( param_1 + 8 ) != 0) {
         plVar9 = (long*)( *(long*)( param_1 + 8 ) + -0x10 );
         do {
            lVar10 = *plVar9;
            if (lVar10 == 0) goto LAB_0012cfb2;
            LOCK();
            lVar7 = *plVar9;
            bVar11 = lVar10 == lVar7;
            if (bVar11) {
               *plVar9 = lVar10 + 1;
               lVar7 = lVar10;
            }

            UNLOCK();
         }
 while ( !bVar11 );
         if (lVar7 != -1) {
            *(undefined8*)( this + 8 ) = *(undefined8*)( param_1 + 8 );
         }

      }

   }

   LAB_0012cfb2:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* GDScriptParser::DataType::DataType(GDScriptParser::DataType const&) */void GDScriptParser::DataType::DataType(DataType *this, DataType *param_1) {
   *(undefined8*)( this + 8 ) = 0;
   *(undefined8*)( this + 0x10 ) = 7;
   *(undefined4*)( this + 0x18 ) = 0;
   this[0x1c] = (DataType)0x0;
   *(undefined4*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x58 ) = 0;
   *(undefined4*)( this + 0x70 ) = 0;
   *(undefined8*)( this + 0x78 ) = 0;
   *(undefined4*)( this + 0x80 ) = 6;
   *(undefined8*)( this + 0x88 ) = 1;
   *(undefined8*)( this + 0x90 ) = 0;
   *(undefined8*)( this + 0xa0 ) = 0;
   *(undefined4*)( this + 0xa8 ) = 0;
   *(undefined8*)( this + 0xb8 ) = 0;
   *(undefined8*)( this + 0xe8 ) = 2;
   *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x38 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x48 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x60 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 200 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
   operator=(this,param_1)
   ;;
   return;
}
/* GDScriptParser::Node::get_datatype() const */void GDScriptParser::Node::get_datatype(void) {
   long in_RSI;
   DataType *in_RDI;
   *(undefined8*)( in_RDI + 8 ) = 0;
   *(undefined8*)( in_RDI + 0x10 ) = 7;
   *(undefined4*)( in_RDI + 0x18 ) = 0;
   in_RDI[0x1c] = (DataType)0x0;
   *(undefined4*)( in_RDI + 0x20 ) = 0;
   *(undefined4*)( in_RDI + 0x58 ) = 0;
   *(undefined4*)( in_RDI + 0x70 ) = 0;
   *(undefined8*)( in_RDI + 0x78 ) = 0;
   *(undefined4*)( in_RDI + 0x80 ) = 6;
   *(undefined8*)( in_RDI + 0x88 ) = 1;
   *(undefined8*)( in_RDI + 0x90 ) = 0;
   *(undefined8*)( in_RDI + 0xa0 ) = 0;
   *(undefined4*)( in_RDI + 0xa8 ) = 0;
   *(undefined8*)( in_RDI + 0xb8 ) = 0;
   *(undefined8*)( in_RDI + 0xe8 ) = 2;
   *(undefined1(*) [16])( in_RDI + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( in_RDI + 0x38 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( in_RDI + 0x48 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( in_RDI + 0x60 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( in_RDI + 200 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( in_RDI + 0xd8 ) = (undefined1[16])0x0;
   DataType::operator =(in_RDI, (DataType*)( in_RSI + 0x38 ));
   return;
}
/* GDScriptParser::ClassNode::Member::get_datatype() const */void GDScriptParser::ClassNode::Member::get_datatype(void) {
   long lVar1;
   long lVar2;
   undefined4 *in_RSI;
   undefined8 *puVar3;
   DataType *in_RDI;
   DataType *pDVar4;
   long in_FS_OFFSET;
   byte bVar5;
   bVar5 = 0;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (*in_RSI) {
      case 0:
      case 8:
    pDVar4 = in_RDI;
    for (lVar2 = 0x1e; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined8 *)pDVar4 = 0;
      pDVar4 = pDVar4 + 8;
    }
    *(undefined4 *)(in_RDI + 0x10) = 7;
    *(undefined4 *)(in_RDI + 0x80) = 6;
    *(undefined4 *)(in_RDI + 0x88) = 1;
    *(undefined4 *)(in_RDI + 0xe8) = 2;
    goto LAB_0012d3fb;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
    puVar3 = *(undefined8 **)(in_RSI + 2);
    break;
      case 7:
    puVar3 = *(undefined8 **)(in_RSI + 4);
    break;
      default:
    _err_print_error("get_datatype","modules/gdscript/gdscript_parser.h",0x2a9,
                     "Method/function failed. Returning: DataType()","Reaching unhandled type.",0,0)
    ;
    pDVar4 = in_RDI;
    for (lVar2 = 0x1e; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined8 *)pDVar4 = 0;
      pDVar4 = pDVar4 + (ulong)bVar5 * -0x10 + 8;
    }
    *(undefined4 *)(in_RDI + 0x10) = 7;
    *(undefined4 *)(in_RDI + 0x80) = 6;
    *(undefined4 *)(in_RDI + 0x88) = 1;
    *(undefined4 *)(in_RDI + 0xe8) = 2;
    goto LAB_0012d3fb;
   }

   if (*(code**)*puVar3 == Node::get_datatype) {
      in_RDI[0x1c] = (DataType)0x0;
      *(undefined8*)( in_RDI + 8 ) = 0;
      *(undefined8*)( in_RDI + 0x10 ) = 7;
      *(undefined4*)( in_RDI + 0x18 ) = 0;
      *(undefined4*)( in_RDI + 0x20 ) = 0;
      *(undefined4*)( in_RDI + 0x58 ) = 0;
      *(undefined4*)( in_RDI + 0x70 ) = 0;
      *(undefined8*)( in_RDI + 0x78 ) = 0;
      *(undefined4*)( in_RDI + 0x80 ) = 6;
      *(undefined8*)( in_RDI + 0x88 ) = 1;
      *(undefined8*)( in_RDI + 0x90 ) = 0;
      *(undefined8*)( in_RDI + 0xa0 ) = 0;
      *(undefined4*)( in_RDI + 0xa8 ) = 0;
      *(undefined8*)( in_RDI + 0xb8 ) = 0;
      *(undefined8*)( in_RDI + 0xe8 ) = 2;
      *(undefined1(*) [16])( in_RDI + 0x28 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( in_RDI + 0x38 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( in_RDI + 0x48 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( in_RDI + 0x60 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( in_RDI + 200 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( in_RDI + 0xd8 ) = (undefined1[16])0x0;
      DataType::operator =(in_RDI, (DataType*)( puVar3 + 7 ));
   }
 else {
      ( **(code**)*puVar3 )();
   }

   LAB_0012d3fb:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* HashMap<StringName, ProjectSettings::AutoloadInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ProjectSettings::AutoloadInfo> > >::_resize_and_rehash(unsigned int) */void HashMap<StringName,ProjectSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ProjectSettings::AutoloadInfo>>>::_resize_and_rehash(HashMap<StringName,ProjectSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ProjectSettings::AutoloadInfo>>> *this, uint param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   void *pvVar6;
   void *pvVar7;
   void *__s;
   long lVar8;
   long lVar9;
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined8 uVar18;
   void *__s_00;
   int iVar19;
   long lVar20;
   uint uVar21;
   ulong uVar22;
   undefined8 uVar23;
   uint uVar24;
   ulong uVar25;
   ulong uVar26;
   uint local_78;
   *(undefined4*)( this + 0x2c ) = 0;
   uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   if (param_1 < 2) {
      param_1 = 2;
   }

   *(uint*)( this + 0x28 ) = param_1;
   uVar21 = *(uint*)( hash_table_size_primes + (ulong)param_1 * 4 );
   uVar22 = (ulong)uVar21;
   pvVar6 = *(void**)( this + 8 );
   pvVar7 = *(void**)( this + 0x10 );
   uVar26 = uVar22 * 4;
   uVar25 = uVar22 * 8;
   uVar18 = Memory::alloc_static(uVar26, false);
   *(undefined8*)( this + 0x10 ) = uVar18;
   __s_00 = (void*)Memory::alloc_static(uVar25, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar21 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar25 ) ) && ( __s_00 < (void*)( (long)__s + uVar26 ) )) {
         uVar26 = 0;
         do {
            *(undefined4*)( (long)__s + uVar26 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar26 * 8 ) = 0;
            uVar26 = uVar26 + 1;
         }
 while ( uVar22 != uVar26 );
      }
 else {
         memset(__s, 0, uVar26);
         memset(__s_00, 0, uVar25);
      }

   }

   if (uVar3 != 0) {
      uVar26 = 0;
      do {
         uVar21 = *(uint*)( (long)pvVar7 + uVar26 * 4 );
         if (uVar21 != 0) {
            uVar24 = 0;
            lVar8 = *(long*)( this + 0x10 );
            uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar25 = CONCAT44(0, uVar4);
            lVar9 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar21 * lVar9;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar25;
            lVar20 = SUB168(auVar10 * auVar14, 8);
            puVar1 = (uint*)( lVar8 + lVar20 * 4 );
            iVar19 = SUB164(auVar10 * auVar14, 8);
            uVar5 = *puVar1;
            uVar18 = *(undefined8*)( (long)pvVar6 + uVar26 * 8 );
            while (uVar5 != 0) {
               auVar11._8_8_ = 0;
               auVar11._0_8_ = (ulong)uVar5 * lVar9;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar25;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(( uVar4 + iVar19 ) - SUB164(auVar11 * auVar15, 8)) * lVar9;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar25;
               local_78 = SUB164(auVar12 * auVar16, 8);
               uVar23 = uVar18;
               if (local_78 < uVar24) {
                  *puVar1 = uVar21;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar20 * 8 );
                  uVar23 = *puVar2;
                  *puVar2 = uVar18;
                  uVar21 = uVar5;
                  uVar24 = local_78;
               }

               uVar24 = uVar24 + 1;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(iVar19 + 1) * lVar9;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = uVar25;
               lVar20 = SUB168(auVar13 * auVar17, 8);
               puVar1 = (uint*)( lVar8 + lVar20 * 4 );
               iVar19 = SUB164(auVar13 * auVar17, 8);
               uVar18 = uVar23;
               uVar5 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar20 * 8 ) = uVar18;
            *puVar1 = uVar21;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar26 = uVar26 + 1;
      }
 while ( uVar26 != uVar3 );
      Memory::free_static(pvVar6, false);
      Memory::free_static(pvVar7, false);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, ProjectSettings::AutoloadInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ProjectSettings::AutoloadInfo> > >::insert(StringName const&, ProjectSettings::AutoloadInfo
   const&, bool) */StringName *
HashMap<StringName,ProjectSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ProjectSettings::AutoloadInfo>>>
::insert(StringName *param_1,AutoloadInfo *param_2,bool param_3){
   uint *puVar1;
   uint uVar2;
   undefined8 *puVar3;
   long lVar4;
   void *__s;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   ulong uVar21;
   long *plVar22;
   uint uVar23;
   uint uVar24;
   long *plVar25;
   long lVar26;
   undefined8 uVar27;
   void *__s_00;
   StringName *in_RCX;
   uint uVar28;
   int iVar29;
   undefined7 in_register_00000011;
   StringName *pSVar30;
   long lVar31;
   long lVar32;
   char in_R8B;
   uint uVar33;
   ulong uVar34;
   uint uVar35;
   ulong uVar36;
   long *plVar37;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   long local_58;
   StringName local_50;
   long local_40;
   pSVar30 = (StringName*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar23 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (*(long*)( param_2 + 8 ) == 0) {
      uVar21 = (ulong)uVar23;
      uVar36 = uVar21 * 4;
      uVar34 = uVar21 * 8;
      uVar27 = Memory::alloc_static(uVar36, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar27;
      __s_00 = (void*)Memory::alloc_static(uVar34, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar23 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar34 ) ) && ( __s_00 < (void*)( (long)__s + uVar36 ) )) {
            uVar36 = 0;
            do {
               *(undefined4*)( (long)__s + uVar36 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar36 * 8 ) = 0;
               uVar36 = uVar36 + 1;
            }
 while ( uVar21 != uVar36 );
         }
 else {
            memset(__s, 0, uVar36);
            memset(__s_00, 0, uVar34);
         }

         goto LAB_0012d790;
      }

      iVar29 = *(int*)( param_2 + 0x2c );
      if (__s_00 == (void*)0x0) goto LAB_0012d8a8;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0012d79c;
      LAB_0012d8ca:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         plVar25 = (long*)0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_0012dae6;
      }

      _resize_and_rehash((HashMap<StringName,ProjectSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ProjectSettings::AutoloadInfo>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }
 else {
      LAB_0012d790:iVar29 = *(int*)( param_2 + 0x2c );
      if (iVar29 != 0) {
         LAB_0012d79c:uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
         uVar36 = CONCAT44(0, uVar2);
         lVar26 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         if (*(long*)pSVar30 == 0) {
            uVar24 = StringName::get_empty_hash();
         }
 else {
            uVar24 = *(uint*)( *(long*)pSVar30 + 0x20 );
         }

         if (uVar24 == 0) {
            uVar24 = 1;
         }

         uVar35 = 0;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = (ulong)uVar24 * lVar26;
         auVar13._8_8_ = 0;
         auVar13._0_8_ = uVar36;
         lVar31 = SUB168(auVar5 * auVar13, 8);
         uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar31 * 4 );
         uVar28 = SUB164(auVar5 * auVar13, 8);
         if (uVar33 != 0) {
            do {
               if (( uVar33 == uVar24 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 8 ) + lVar31 * 8 ) + 0x10 ) == *(long*)pSVar30 )) {
                  lVar26 = *(long*)( *(long*)( param_2 + 8 ) + (ulong)uVar28 * 8 );
                  StringName::operator =((StringName*)( lVar26 + 0x18 ), in_RCX);
                  if (*(long*)( lVar26 + 0x20 ) != *(long*)( in_RCX + 8 )) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( lVar26 + 0x20 ), (CowData*)( in_RCX + 8 ));
                  }

                  *(StringName*)( lVar26 + 0x28 ) = in_RCX[0x10];
                  plVar25 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar28 * 8 );
                  goto LAB_0012dae6;
               }

               uVar35 = uVar35 + 1;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(uVar28 + 1) * lVar26;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = uVar36;
               lVar31 = SUB168(auVar6 * auVar14, 8);
               uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar31 * 4 );
               uVar28 = SUB164(auVar6 * auVar14, 8);
            }
 while ( ( uVar33 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar33 * lVar26,auVar15._8_8_ = 0,auVar15._0_8_ = uVar36,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar2 + uVar28 ) - SUB164(auVar7 * auVar15, 8)) * lVar26,auVar16._8_8_ = 0,auVar16._0_8_ = uVar36,uVar35 <= SUB164(auVar8 * auVar16, 8) );
         }

         iVar29 = *(int*)( param_2 + 0x2c );
      }

      LAB_0012d8a8:if ((float)uVar23 * __LC32 < (float)( iVar29 + 1 )) goto LAB_0012d8ca;
   }

   StringName::StringName((StringName*)&local_68, pSVar30);
   StringName::StringName((StringName*)&local_60, in_RCX);
   local_58 = 0;
   if (*(long*)( in_RCX + 8 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( in_RCX + 8 ));
   }

   local_50 = in_RCX[0x10];
   plVar25 = (long*)operator_new(0x30, "");
   *plVar25 = 0;
   plVar25[1] = 0;
   StringName::StringName((StringName*)( plVar25 + 2 ), (StringName*)&local_68);
   StringName::StringName((StringName*)( plVar25 + 3 ), (StringName*)&local_60);
   plVar25[4] = 0;
   if (local_58 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( plVar25 + 4 ), (CowData*)&local_58);
   }

   *(StringName*)( plVar25 + 5 ) = local_50;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( ( ( local_60 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_68 != 0 ) ) )) {
      StringName::unref();
   }

   puVar3 = *(undefined8**)( param_2 + 0x20 );
   if (puVar3 == (undefined8*)0x0) {
      *(long**)( param_2 + 0x18 ) = plVar25;
      *(long**)( param_2 + 0x20 ) = plVar25;
      LAB_0012d9ea:lVar26 = *(long*)pSVar30;
      if (lVar26 != 0) goto LAB_0012d9f7;
      LAB_0012db3c:uVar23 = StringName::get_empty_hash();
   }
 else {
      if (in_R8B == '\0') {
         *puVar3 = plVar25;
         plVar25[1] = (long)puVar3;
         *(long**)( param_2 + 0x20 ) = plVar25;
         goto LAB_0012d9ea;
      }

      lVar26 = *(long*)( param_2 + 0x18 );
      *(long**)( lVar26 + 8 ) = plVar25;
      *plVar25 = lVar26;
      lVar26 = *(long*)pSVar30;
      *(long**)( param_2 + 0x18 ) = plVar25;
      if (lVar26 == 0) goto LAB_0012db3c;
      LAB_0012d9f7:uVar23 = *(uint*)( lVar26 + 0x20 );
   }

   lVar26 = *(long*)( param_2 + 0x10 );
   if (uVar23 == 0) {
      uVar23 = 1;
   }

   uVar36 = (ulong)uVar23;
   uVar33 = 0;
   lVar31 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar34 = CONCAT44(0, uVar2);
   auVar9._8_8_ = 0;
   auVar9._0_8_ = uVar36 * lVar31;
   auVar17._8_8_ = 0;
   auVar17._0_8_ = uVar34;
   lVar32 = SUB168(auVar9 * auVar17, 8);
   lVar4 = *(long*)( param_2 + 8 );
   puVar1 = (uint*)( lVar26 + lVar32 * 4 );
   iVar29 = SUB164(auVar9 * auVar17, 8);
   uVar24 = *puVar1;
   plVar22 = plVar25;
   while (uVar24 != 0) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar24 * lVar31;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar34;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(( uVar2 + iVar29 ) - SUB164(auVar10 * auVar18, 8)) * lVar31;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar34;
      uVar23 = SUB164(auVar11 * auVar19, 8);
      plVar37 = plVar22;
      if (uVar23 < uVar33) {
         *puVar1 = (uint)uVar36;
         uVar36 = (ulong)uVar24;
         puVar3 = (undefined8*)( lVar4 + lVar32 * 8 );
         plVar37 = (long*)*puVar3;
         *puVar3 = plVar22;
         uVar33 = uVar23;
      }

      uVar23 = (uint)uVar36;
      uVar33 = uVar33 + 1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(iVar29 + 1) * lVar31;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar34;
      lVar32 = SUB168(auVar12 * auVar20, 8);
      puVar1 = (uint*)( lVar26 + lVar32 * 4 );
      iVar29 = SUB164(auVar12 * auVar20, 8);
      plVar22 = plVar37;
      uVar24 = *puVar1;
   }
;
   *(long**)( lVar4 + lVar32 * 8 ) = plVar22;
   *puVar1 = uVar23;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_0012dae6:*(long**)param_1 = plVar25;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<Pair<int, int> >::_realloc(long) */undefined8 CowData<Pair<int,int>>::_realloc(CowData<Pair<int,int>> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Pair<int, int> >::resize<false>(long) */undefined8 CowData<Pair<int,int>>::resize<false>(CowData<Pair<int,int>> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   undefined8 uVar7;
   undefined8 *puVar8;
   long lVar9;
   long lVar10;
   undefined8 *puVar11;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar10 = 0;
      lVar3 = 0;
   }
 else {
      lVar10 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar10) {
         return 0;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return 0;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return 0;
      }

      _copy_on_write(this);
      lVar3 = lVar10 * 8;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_0012df50:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 8 - 1;
   uVar4 = uVar4 >> 1 | uVar4;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar9 = uVar4 + 1;
   if (lVar9 == 0) goto LAB_0012df50;
   if (param_1 <= lVar10) {
      if (( lVar9 != lVar3 ) && ( uVar7 = _realloc(this, lVar9) ),(int)uVar7 != 0) {
         return uVar7;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

      _DAT_00000000 = 0;
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   if (lVar9 == lVar3) {
      LAB_0012debc:puVar8 = *(undefined8**)this;
      if (puVar8 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar8[-1];
      if (param_1 <= lVar3) goto LAB_0012de50;
   }
 else {
      if (lVar10 != 0) {
         uVar7 = _realloc(this, lVar9);
         if ((int)uVar7 != 0) {
            return uVar7;
         }

         goto LAB_0012debc;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar8 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar8;
      lVar3 = 0;
   }

   puVar11 = puVar8 + param_1;
   puVar5 = puVar8 + lVar3;
   puVar6 = puVar5;
   if (( (int)puVar11 - (int)puVar5 & 8U ) != 0) {
      *puVar5 = 0;
      puVar6 = puVar5 + 1;
      if (puVar5 + 1 == puVar11) goto LAB_0012de50;
   }

   do {
      *puVar6 = 0;
      puVar5 = puVar6 + 2;
      puVar6[1] = 0;
      puVar6 = puVar5;
   }
 while ( puVar5 != puVar11 );
   LAB_0012de50:puVar8[-1] = param_1;
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ScriptLanguage::CodeCompletionOption::CodeCompletionOption(String const&,
   ScriptLanguage::CodeCompletionKind, int, String const&) */void ScriptLanguage::CodeCompletionOption::CodeCompletionOption(CodeCompletionOption *this, CowData *param_1, undefined4 param_3, undefined4 param_4, CowData *param_5) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_60;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   uVar2 = _UNK_0012f008;
   uVar1 = __LC161;
   *(undefined4*)this = 9;
   *(undefined8*)( this + 0x28 ) = 0;
   *(undefined4*)( this + 0x30 ) = 0;
   *(undefined8*)( this + 0x50 ) = 0;
   *(undefined8*)( this + 0x60 ) = 0;
   *(undefined8*)( this + 0x18 ) = uVar1;
   *(undefined8*)( this + 0x20 ) = uVar2;
   *(undefined1(*) [16])( this + 0x38 ) = (undefined1[16])0x0;
   iVar3 = CowData<Pair<int,int>>::resize<false>((CowData<Pair<int,int>>*)( this + 0x60 ), 1);
   if (iVar3 == 0) {
      if (*(long*)( this + 0x60 ) == 0) {
         lVar4 = 0;
      }
 else {
         lVar4 = *(long*)( *(long*)( this + 0x60 ) + -8 );
         if (0 < lVar4) {
            CowData<Pair<int,int>>::_copy_on_write((CowData<Pair<int,int>>*)( this + 0x60 ));
            **(undefined8**)( this + 0x60 ) = 0xffffffffffffffff;
            goto LAB_0012e073;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, 0, lVar4, "p_index", "size()", "", false, false);
   }

   LAB_0012e073:*(undefined4*)( this + 0x68 ) = 0x400;
   *(undefined8*)( this + 0x70 ) = 0;
   Array::Array((Array*)( this + 0x78 ));
   local_58 = 0;
   local_60 = 0;
   local_50 = (undefined1[16])0x0;
   Array::set_typed((uint)(Array*)( this + 0x78 ), (StringName*)0x2, (Variant*)&local_60);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   if (( &Variant::needs_deinit )[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   lVar4 = *(long*)param_1;
   if (*(long*)( this + 8 ) != lVar4) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 8 ), param_1);
      lVar4 = *(long*)param_1;
   }

   if (*(long*)( this + 0x10 ) != lVar4) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x10 ), param_1);
   }

   *(undefined4*)this = param_3;
   lVar4 = *(long*)param_5;
   *(undefined4*)( this + 0x68 ) = param_4;
   if (*(long*)( this + 0x70 ) == lVar4) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x70 ), param_5);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<ScriptLanguage::ScriptTemplate>::_realloc(long) */undefined8 CowData<ScriptLanguage::ScriptTemplate>::_realloc(CowData<ScriptLanguage::ScriptTemplate> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<ScriptLanguage::ScriptTemplate>::resize<false>(long) */undefined8 CowData<ScriptLanguage::ScriptTemplate>::resize<false>(CowData<ScriptLanguage::ScriptTemplate> *this, long param_1) {
   long *plVar1;
   StrRange *pSVar2;
   long *plVar3;
   long lVar4;
   code *pcVar5;
   undefined8 *puVar6;
   long lVar7;
   undefined8 uVar8;
   undefined8 *puVar9;
   long lVar10;
   ulong uVar11;
   long lVar12;
   ulong uVar13;
   long in_FS_OFFSET;
   lVar4 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      uVar8 = 0x1f;
      goto LAB_0012e420;
   }

   if (*(long*)this == 0) {
      if (param_1 != 0) {
         _copy_on_write(this);
         lVar7 = 0;
         lVar10 = 0;
         LAB_0012e315:if (param_1 * 0x28 == 0) {
            LAB_0012e5f0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
         }
 else {
            uVar11 = param_1 * 0x28 - 1;
            uVar11 = uVar11 >> 1 | uVar11;
            uVar11 = uVar11 | uVar11 >> 2;
            uVar11 = uVar11 | uVar11 >> 4;
            uVar11 = uVar11 | uVar11 >> 8;
            uVar11 = uVar11 | uVar11 >> 0x10;
            uVar11 = uVar11 | uVar11 >> 0x20;
            lVar12 = uVar11 + 1;
            if (lVar12 == 0) goto LAB_0012e5f0;
            uVar13 = param_1;
            if (param_1 <= lVar7) {
               while (lVar7 = *(long*)this,lVar7 != 0) {
                  if (*(ulong*)( lVar7 + -8 ) <= uVar13) {
                     if (lVar12 != lVar10) {
                        uVar8 = _realloc(this, lVar12);
                        if ((int)uVar8 != 0) goto LAB_0012e420;
                        lVar7 = *(long*)this;
                        if (lVar7 == 0) goto LAB_0012e541;
                     }

                     *(long*)( lVar7 + -8 ) = param_1;
                     goto LAB_0012e41e;
                  }

                  plVar3 = (long*)( lVar7 + uVar13 * 0x28 );
                  for (int i = 0; i < 3; i++) {
                     if (plVar3[( 3 - i )] != 0) {
                        LOCK();
                        plVar1 = (long*)( plVar3[( 3 - i )] + -16 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           lVar7 = plVar3[( 3 - i )];
                           plVar3[( 3 - i )] = 0;
                           Memory::free_static((void*)( lVar7 + -16 ), false);
                        }

                     }

                  }

                  if (*plVar3 != 0) {
                     LOCK();
                     plVar1 = (long*)( *plVar3 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar7 = *plVar3;
                        *plVar3 = 0;
                        Memory::free_static((void*)( lVar7 + -0x10 ), false);
                     }

                  }

                  uVar13 = uVar13 + 1;
               }
;
               goto LAB_0012e64b;
            }

            if (lVar12 == lVar10) {
               LAB_0012e563:puVar9 = *(undefined8**)this;
               if (puVar9 == (undefined8*)0x0) {
                  LAB_0012e64b:/* WARNING: Does not return */pcVar5 = (code*)invalidInstructionException();
                  ( *pcVar5 )();
               }

               lVar7 = puVar9[-1];
               if (lVar7 < param_1) goto LAB_0012e3c0;
               LAB_0012e41a:puVar9[-1] = param_1;
               goto LAB_0012e41e;
            }

            if (lVar7 != 0) {
               uVar8 = _realloc(this, lVar12);
               if ((int)uVar8 != 0) goto LAB_0012e420;
               goto LAB_0012e563;
            }

            puVar6 = (undefined8*)Memory::alloc_static(uVar11 + 0x11, false);
            if (puVar6 != (undefined8*)0x0) {
               puVar9 = puVar6 + 2;
               *puVar6 = 1;
               puVar6[1] = 0;
               *(undefined8**)this = puVar9;
               lVar7 = 0;
               LAB_0012e3c0:do {
                  lVar10 = lVar7 + 1;
                  pSVar2 = (StrRange*)( puVar9 + lVar7 * 5 );
                  *(undefined8*)pSVar2 = 0;
                  String::parse_latin1(pSVar2);
                  *(undefined8*)( pSVar2 + 0x20 ) = 0;
                  puVar9 = *(undefined8**)this;
                  *(undefined8*)( pSVar2 + 0x18 ) = 0;
                  *(undefined1(*) [16])( pSVar2 + 8 ) = (undefined1[16])0x0;
                  lVar7 = lVar10;
               }
 while ( param_1 != lVar10 );
               if (puVar9 == (undefined8*)0x0) {
                  LAB_0012e541:_DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar5 = (code*)invalidInstructionException();
                  ( *pcVar5 )();
               }

               goto LAB_0012e41a;
            }

            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         }

         uVar8 = 6;
         goto LAB_0012e420;
      }

   }
 else {
      lVar7 = *(long*)( *(long*)this + -8 );
      if (param_1 != lVar7) {
         if (param_1 != 0) {
            _copy_on_write(this);
            lVar10 = lVar7 * 0x28;
            if (lVar10 != 0) {
               uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
               uVar11 = uVar11 | uVar11 >> 2;
               uVar11 = uVar11 | uVar11 >> 4;
               uVar11 = uVar11 | uVar11 >> 8;
               uVar11 = uVar11 | uVar11 >> 0x10;
               lVar10 = ( uVar11 | uVar11 >> 0x20 ) + 1;
            }

            goto LAB_0012e315;
         }

         _unref(this);
      }

   }

   LAB_0012e41e:uVar8 = 0;
   LAB_0012e420:if (lVar4 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar8;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GDScriptLanguage::get_comment_delimiters(List<String, DefaultAllocator>*) const */void GDScriptLanguage::_GLOBAL__sub_I_get_comment_delimiters(void) {
   TEMPLATES = 0;
   String::parse_latin1((String*)&TEMPLATES, "CharacterBody2D");
   DAT_001239a8 = 0;
   String::parse_latin1((String*)&DAT_001239a8, "Basic Movement");
   DAT_001239b0 = 0;
   String::parse_latin1((String*)&DAT_001239b0, "Classic movement for gravity games (platformer, ...)");
   DAT_001239b8 = 0;
   String::parse_latin1((String*)&DAT_001239b8, "extends _BASE_\n\n\nconst SPEED = 300.0\nconst JUMP_VELOCITY = -400.0\n\n\nfunc _physics_process(delta: float) -> void:\n_TS_# Add the gravity.\n_TS_if not is_on_floor():\n_TS__TS_velocity += get_gravity() * delta\n\n_TS_# Handle jump.\n_TS_if Input.is_action_just_pressed(\"ui_accept\") and is_on_floor():\n_TS__TS_velocity.y = JUMP_VELOCITY\n\n_TS_# Get the input direction and handle the movement/deceleration.\n_TS_# As good practice, you should replace UI actions with custom gameplay actions.\n_TS_var direction := Input.get_axis(\"ui_left\", \"ui_right\")\n_TS_if direction:\n_TS__TS_velocity.x = direction * SPEED\n_TS_else:\n_TS__TS_velocity.x = move_toward(velocity.x, 0, SPEED)\n\n_TS_move_and_slide()\n");
   _DAT_001239c0 = 0;
   _DAT_001239c8 = 0;
   String::parse_latin1((String*)&DAT_001239c8, "CharacterBody3D");
   _DAT_001239d0 = 0;
   String::parse_latin1((String*)&DAT_001239d0, "Basic Movement");
   _DAT_001239d8 = 0;
   String::parse_latin1((String*)&DAT_001239d8, "Classic movement for gravity games (FPS, TPS, ...)");
   _DAT_001239e0 = 0;
   String::parse_latin1((String*)&DAT_001239e0, "extends _BASE_\n\n\nconst SPEED = 5.0\nconst JUMP_VELOCITY = 4.5\n\n\nfunc _physics_process(delta: float) -> void:\n_TS_# Add the gravity.\n_TS_if not is_on_floor():\n_TS__TS_velocity += get_gravity() * delta\n\n_TS_# Handle jump.\n_TS_if Input.is_action_just_pressed(\"ui_accept\") and is_on_floor():\n_TS__TS_velocity.y = JUMP_VELOCITY\n\n_TS_# Get the input direction and handle the movement/deceleration.\n_TS_# As good practice, you should replace UI actions with custom gameplay actions.\n_TS_var input_dir := Input.get_vector(\"ui_left\", \"ui_right\", \"ui_up\", \"ui_down\")\n_TS_var direction := (transform.basis * Vector3(input_dir.x, 0, input_dir.y)).normalized()\n_TS_if direction:\n_TS__TS_velocity.x = direction.x * SPEED\n_TS__TS_velocity.z = direction.z * SPEED\n_TS_else:\n_TS__TS_velocity.x = move_toward(velocity.x, 0, SPEED)\n_TS__TS_velocity.z = move_toward(velocity.z, 0, SPEED)\n\n_TS_move_and_slide()\n");
   _DAT_001239e8 = 0;
   _DAT_001239f0 = 0;
   String::parse_latin1((String*)&DAT_001239f0, "EditorPlugin");
   _DAT_001239f8 = 0;
   String::parse_latin1((String*)&DAT_001239f8, "Plugin");
   _DAT_00123a00 = 0;
   String::parse_latin1((String*)&DAT_00123a00, "Basic plugin template");
   _DAT_00123a08 = 0;
   String::parse_latin1((String*)&DAT_00123a08, "@tool\nextends _BASE_\n\n\nfunc _enter_tree() -> void:\n_TS_# Initialization of the plugin goes here.\n_TS_pass\n\n\nfunc _exit_tree() -> void:\n_TS_# Clean-up of the plugin goes here.\n_TS_pass\n");
   _DAT_00123a10 = 0;
   _DAT_00123a18 = 0;
   String::parse_latin1((String*)&DAT_00123a18, "EditorScenePostImport");
   _DAT_00123a20 = 0;
   String::parse_latin1((String*)&DAT_00123a20, "Basic Import Script");
   _DAT_00123a28 = 0;
   String::parse_latin1((String*)&DAT_00123a28, "Basic import script template");
   _DAT_00123a30 = 0;
   String::parse_latin1((String*)&DAT_00123a30, "@tool\nextends _BASE_\n\n\n# Called by the editor when a scene has this script set as the import script in the import tab.\nfunc _post_import(scene: Node) -> Object:\n_TS_# Modify the contents of the scene upon import.\n_TS_return scene # Return the modified root node when you\'re done.\n");
   _DAT_00123a38 = 0;
   _DAT_00123a40 = 0;
   String::parse_latin1((String*)&DAT_00123a40, "EditorScenePostImport");
   _DAT_00123a48 = 0;
   String::parse_latin1((String*)&DAT_00123a48, "No Comments");
   _DAT_00123a50 = 0;
   String::parse_latin1((String*)&DAT_00123a50, "Basic import script template (no comments)");
   _DAT_00123a58 = 0;
   String::parse_latin1((String*)&DAT_00123a58, "@tool\nextends _BASE_\n\n\nfunc _post_import(scene: Node) -> Object:\n_TS_return scene\n");
   _DAT_00123a60 = 0;
   _DAT_00123a68 = 0;
   String::parse_latin1((String*)&DAT_00123a68, "EditorScript");
   _DAT_00123a70 = 0;
   String::parse_latin1((String*)&DAT_00123a70, "Basic Editor Script");
   _DAT_00123a78 = 0;
   String::parse_latin1((String*)&DAT_00123a78, "Basic editor script template");
   _DAT_00123a80 = 0;
   String::parse_latin1((String*)&DAT_00123a80, "@tool\nextends _BASE_\n\n\n# Called when the script is executed (using File -> Run in Script Editor).\nfunc _run() -> void:\n_TS_pass\n");
   _DAT_00123a88 = 0;
   _DAT_00123a90 = 0;
   String::parse_latin1((String*)&DAT_00123a90, "Node");
   _DAT_00123a98 = 0;
   String::parse_latin1((String*)&DAT_00123a98, "Default");
   _DAT_00123aa0 = 0;
   String::parse_latin1((String*)&DAT_00123aa0, "Base template for Node with default Godot cycle methods");
   _DAT_00123aa8 = 0;
   String::parse_latin1((String*)&DAT_00123aa8, "extends _BASE_\n\n\n# Called when the node enters the scene tree for the first time.\nfunc _ready() -> void:\n_TS_pass # Replace with function body.\n\n\n# Called every frame. \'delta\' is the elapsed time since the previous frame.\nfunc _process(delta: float) -> void:\n_TS_pass\n");
   _DAT_00123ab0 = 0;
   _DAT_00123ab8 = 0;
   String::parse_latin1((String*)&DAT_00123ab8, "Object");
   _DAT_00123ac0 = 0;
   String::parse_latin1((String*)&DAT_00123ac0, "Empty");
   _DAT_00123ac8 = 0;
   String::parse_latin1((String*)&DAT_00123ac8, "Empty template suitable for all Objects");
   _DAT_00123ad0 = 0;
   String::parse_latin1((String*)&DAT_00123ad0, "extends _BASE_\n");
   _DAT_00123ad8 = 0;
   _DAT_00123ae0 = 0;
   String::parse_latin1((String*)&DAT_00123ae0, "RichTextEffect");
   _DAT_00123ae8 = 0;
   String::parse_latin1((String*)&DAT_00123ae8, "Default");
   _DAT_00123af0 = 0;
   String::parse_latin1((String*)&DAT_00123af0, "Base template for rich text effects");
   DAT_00123af8 = 0;
   String::parse_latin1((String*)&DAT_00123af8, "@tool\n# Having a class name is handy for picking the effect in the Inspector.\nclass_name RichText_CLASS_\nextends _BASE_\n\n\n# To use this effect:\n# - Enable BBCode on a RichTextLabel.\n# - Register this effect on the label.\n# - Use [_CLASS_SNAKE_CASE_ param=2.0]hello[/_CLASS_SNAKE_CASE_] in text.\nvar bbcode := \"_CLASS_SNAKE_CASE_\"\n\n\nfunc _process_custom_fx(char_fx: CharFXTransform) -> bool:\n_TS_var param: float = char_fx.env.get(\"param\", 1.0)\n_TS_return true\n");
   _DAT_00123b00 = 0;
   DAT_00123b08 = 0;
   String::parse_latin1((String*)&DAT_00123b08, "VisualShaderNodeCustom");
   DAT_00123b10 = 0;
   String::parse_latin1((String*)&DAT_00123b10, "Basic");
   DAT_00123b18 = 0;
   String::parse_latin1((String*)&DAT_00123b18, "Visual shader\'s node plugin template");
   DAT_00123b20 = 0;
   String::parse_latin1((String*)&DAT_00123b20, "@tool\n# Having a class name is required for a custom node.\nclass_name VisualShaderNode_CLASS_\nextends _BASE_\n\n\nfunc _get_name() -> String:\n_TS_return \"_CLASS_\"\n\n\nfunc _get_category() -> String:\n_TS_return \"\"\n\n\nfunc _get_description() -> String:\n_TS_return \"\"\n\n\nfunc _get_return_icon_type() -> PortType:\n_TS_return PORT_TYPE_SCALAR\n\n\nfunc _get_input_port_count() -> int:\n_TS_return 0\n\n\nfunc _get_input_port_name(port: int) -> String:\n_TS_return \"\"\n\n\nfunc _get_input_port_type(port: int) -> PortType:\n_TS_return PORT_TYPE_SCALAR\n\n\nfunc _get_output_port_count() -> int:\n_TS_return 1\n\n\nfunc _get_output_port_name(port: int) -> String:\n_TS_return \"result\"\n\n\nfunc _get_output_port_type(port: int) -> PortType:\n_TS_return PORT_TYPE_SCALAR\n\n\nfunc _get_code(input_vars: Array[String], output_vars: Array[String],\n_TS__TS_mode: Shader.Mode, type: VisualShader.Type) -> String:\n_TS_return output_vars[0] + \" = 0.0;\"\n");
   _DAT_00123b28 = 0;
   __cxa_atexit(__tcf_0, 0, &__dso_handle);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* ScriptLanguage::CodeCompletionOption::CodeCompletionOption(String const&,
   ScriptLanguage::CodeCompletionKind, int, String const&) */void ScriptLanguage::CodeCompletionOption::CodeCompletionOption(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GDScriptParser::DataType::DataType(GDScriptParser::DataType const&) */void GDScriptParser::DataType::DataType(DataType *this, DataType *param_1) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GDScriptCompletionIdentifier::~GDScriptCompletionIdentifier() */void GDScriptCompletionIdentifier::~GDScriptCompletionIdentifier(GDScriptCompletionIdentifier *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GDScriptParser::DataType::~DataType() */void GDScriptParser::DataType::~DataType(DataType *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GDScriptTokenizerText::~GDScriptTokenizerText() */void GDScriptTokenizerText::~GDScriptTokenizerText(GDScriptTokenizerText *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<MethodInfo, DefaultAllocator>::~List() */void List<MethodInfo,DefaultAllocator>::~List(List<MethodInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodInfo::~MethodInfo() */void MethodInfo::~MethodInfo(MethodInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HashMap<String, ScriptLanguage::CodeCompletionOption, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   ScriptLanguage::CodeCompletionOption> > >::~HashMap() */void HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>>::~HashMap(HashMap<String,ScriptLanguage::CodeCompletionOption,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ScriptLanguage::CodeCompletionOption>>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<Variant, DefaultAllocator>::~List() */void List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<Pair<String, Variant>, DefaultAllocator>::~List() */void List<Pair<String,Variant>,DefaultAllocator>::~List(List<Pair<String,Variant>,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<Pair<StringName, int>, DefaultAllocator>::~List() */void List<Pair<StringName,int>,DefaultAllocator>::~List(List<Pair<StringName,int>,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<List<int, DefaultAllocator>, DefaultAllocator>::~List() */void List<List<int,DefaultAllocator>,DefaultAllocator>::~List(List<List<int,DefaultAllocator>,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<GDScriptTokenizer::Token, DefaultAllocator>::~List() */void List<GDScriptTokenizer::Token,DefaultAllocator>::~List(List<GDScriptTokenizer::Token,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<GDScriptParser::LambdaNode*, DefaultAllocator>::~List() */void List<GDScriptParser::LambdaNode*,DefaultAllocator>::~List(List<GDScriptParser::LambdaNode*,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::~HashMap() */void HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::~HashMap(HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<String, DefaultAllocator>::~List() */void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<StringName, DefaultAllocator>::~List() */void List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ProjectSettings::AutoloadInfo::~AutoloadInfo() */void ProjectSettings::AutoloadInfo::~AutoloadInfo(AutoloadInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ScriptLanguage::CodeCompletionOption::CodeCompletionOption(ScriptLanguage::CodeCompletionOption
   const&) */void ScriptLanguage::CodeCompletionOption::CodeCompletionOption(CodeCompletionOption *this, CodeCompletionOption *param_1) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ScriptLanguage::CodeCompletionOption::~CodeCompletionOption() */void ScriptLanguage::CodeCompletionOption::~CodeCompletionOption(CodeCompletionOption *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GDScriptParser::MemberDocData::~MemberDocData() */void GDScriptParser::MemberDocData::~MemberDocData(MemberDocData *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GDScriptParser::DataType::DataType() */void GDScriptParser::DataType::DataType(DataType *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* String::~String() */void String::~String(String *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HashMap<StringName, long, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, long> > >::~HashMap() */void HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>::~HashMap(HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

