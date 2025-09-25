/* HTTPClientTCP::has_response() const */undefined8 HTTPClientTCP::has_response(HTTPClientTCP *this) {
   long lVar1;
   lVar1 = *(long*)( this + 600 );
   if (lVar1 != 0) {
      return CONCAT71(( int7 )((ulong)lVar1 >> 8), *(long*)( lVar1 + -8 ) != 0);
   }

   return 0;
}
/* HTTPClientTCP::is_response_chunked() const */HTTPClientTCP HTTPClientTCP::is_response_chunked(HTTPClientTCP *this) {
   return this[0x1f0];
}
/* HTTPClientTCP::get_response_code() const */undefined4 HTTPClientTCP::get_response_code(HTTPClientTCP *this) {
   return *(undefined4*)( this + 0x248 );
}
/* HTTPClientTCP::get_response_body_length() const */undefined8 HTTPClientTCP::get_response_body_length(HTTPClientTCP *this) {
   return *(undefined8*)( this + 0x210 );
}
/* HTTPClientTCP::get_status() const */undefined4 HTTPClientTCP::get_status(HTTPClientTCP *this) {
   return *(undefined4*)( this + 0x17c );
}
/* HTTPClientTCP::set_blocking_mode(bool) */void HTTPClientTCP::set_blocking_mode(HTTPClientTCP *this, bool param_1) {
   this[0x1d0] = (HTTPClientTCP)param_1;
   return;
}
/* HTTPClientTCP::is_blocking_mode_enabled() const */HTTPClientTCP HTTPClientTCP::is_blocking_mode_enabled(HTTPClientTCP *this) {
   return this[0x1d0];
}
/* HTTPClientTCP::get_read_chunk_size() const */undefined4 HTTPClientTCP::get_read_chunk_size(HTTPClientTCP *this) {
   return *(undefined4*)( this + 0x260 );
}
/* HTTPClientTCP::set_read_chunk_size(int) */void HTTPClientTCP::set_read_chunk_size(HTTPClientTCP *this, int param_1) {
   if (param_1 - 0x100U < 0xffff01) {
      *(int*)( this + 0x260 ) = param_1;
      return;
   }

   _err_print_error("set_read_chunk_size", "core/io/http_client_tcp.cpp", 0x2fb, "Condition \"p_size < 256 || p_size > (1 << 24)\" is true.", 0, 0);
   return;
}
/* HTTPClientTCP::get_connection() const */void HTTPClientTCP::get_connection(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0x238 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0x238 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }

   }

   return;
}
/* HTTPClientTCP::set_connection(Ref<StreamPeer> const&) */void HTTPClientTCP::set_connection(HTTPClientTCP *this, Ref *param_1) {
   long lVar1;
   Object *pOVar2;
   Object *pOVar3;
   char cVar4;
   long lVar5;
   lVar1 = *(long*)param_1;
   if (lVar1 == 0) {
      _err_print_error("set_connection", "core/io/http_client_tcp.cpp", 0x6f, "Condition \"p_connection.is_null()\" is true.", "Connection is not a reference to a valid StreamPeer object.", 0, 0);
      return;
   }

   if (( *(long*)( this + 0x1d8 ) != 0 ) && ( lVar5 = __dynamic_cast(lVar1, &Object::typeinfo, &StreamPeerTLS::typeinfo, 0) ),lVar5 == 0) {
      _err_print_error("set_connection", "core/io/http_client_tcp.cpp", 0x72, "Parameter \"Object::cast_to<StreamPeerTLS>(p_connection.ptr())\" is null.", "Connection is not a reference to a valid StreamPeerTLS object.", 0, 0);
      return;
   }

   if (lVar1 != *(long*)( this + 0x238 )) {
      ( **(code**)( *(long*)this + 0x170 ) )(this);
      pOVar2 = *(Object**)param_1;
      pOVar3 = *(Object**)( this + 0x238 );
      if (pOVar2 != pOVar3) {
         *(Object**)( this + 0x238 ) = pOVar2;
         if (( pOVar2 != (Object*)0x0 ) && ( cVar4 = cVar4 == '\0' )) {
            *(undefined8*)( this + 0x238 ) = 0;
         }

         if (( ( pOVar3 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
         Memory::free_static(pOVar3, false);
      }

   }

   *(undefined4*)( this + 0x17c ) = 5;
}
return;}/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
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
/* HTTPClientTCP::set_https_proxy(String const&, int) */void HTTPClientTCP::set_https_proxy(HTTPClientTCP *this, String *param_1, int param_2) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = *(long*)param_1;
   if (( ( lVar2 == 0 ) || ( *(uint*)( lVar2 + -8 ) < 2 ) ) || ( param_2 == -1 )) {
      String::parse_latin1((StrRange*)( this + 0x1c8 ));
      param_2 = -1;
   }
 else if (lVar2 != *(long*)( this + 0x1c8 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x1c8 ), (CowData*)param_1);
   }

   *(int*)( this + 0x1c0 ) = param_2;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HTTPClientTCP::set_http_proxy(String const&, int) */void HTTPClientTCP::set_http_proxy(HTTPClientTCP *this, String *param_1, int param_2) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = *(long*)param_1;
   if (( ( lVar2 == 0 ) || ( *(uint*)( lVar2 + -8 ) < 2 ) ) || ( param_2 == -1 )) {
      String::parse_latin1((StrRange*)( this + 0x1b8 ));
      param_2 = -1;
   }
 else if (lVar2 != *(long*)( this + 0x1b8 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x1b8 ), (CowData*)param_1);
   }

   *(int*)( this + 0x1b0 ) = param_2;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */void CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this) {
   long *plVar1;
   size_t __n;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   __n = *(size_t*)( *(long*)this + -8 );
   uVar5 = 0x10;
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
      puVar4[1] = __n;
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
/* HTTPClientTCP::_get_http_data(unsigned char*, int, int&) */undefined8 HTTPClientTCP::_get_http_data(HTTPClientTCP *this, uchar *param_1, int param_2, int *param_3) {
   undefined8 uVar1;
   int iVar2;
   long in_FS_OFFSET;
   int local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x1d0] == (HTTPClientTCP)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Could not recover jumptable at 0x0010061d. Too many branches */
         /* WARNING: Treating indirect jump as call */
         uVar1 = ( **(code**)( **(long**)( this + 0x238 ) + 0x168 ) )();
         return uVar1;
      }

   }
 else {
      local_34 = 0;
      *param_3 = 0;
      if (param_2 < 1) {
         uVar1 = 0x12;
      }
 else {
         iVar2 = 0;
         do {
            uVar1 = ( **(code**)( **(long**)( this + 0x238 ) + 0x168 ) )(*(long**)( this + 0x238 ), param_1 + iVar2, param_2, &local_34);
            if ((int)uVar1 != 0) {
               if ((int)uVar1 == 0x12) {
                  *param_3 = *param_3 + local_34;
               }

               break;
            }

            param_2 = param_2 - local_34;
            iVar2 = *param_3 + local_34;
            *param_3 = iVar2;
         }
 while ( 0 < param_2 );
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HTTPClientTCP::HTTPClientTCP() */void HTTPClientTCP::HTTPClientTCP(HTTPClientTCP *this) {
   Object *pOVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   char cVar4;
   StreamPeerTCP *this_00;
   RefCounted *this_01;
   Object *pOVar5;
   RefCounted::RefCounted((RefCounted*)this);
   *(undefined***)this = &PTR__initialize_classv_00107b78;
   *(undefined8*)( this + 0x17c ) = 0xffffffff00000000;
   Array::Array((Array*)( this + 0x188 ));
   uVar3 = _UNK_00107dd8;
   uVar2 = __LC16;
   for (int i = 0; i < 4; i++) {
      *(undefined4*)( this + ( 16*i + 400 ) ) = 4294967295;
      *(undefined8*)( this + ( 16*i + 408 ) ) = 0;
   }

   *(undefined2*)( this + 0x1d0 ) = 0;
   this[0x1d2] = (HTTPClientTCP)0x0;
   *(undefined8*)( this + 0x1d8 ) = 0;
   *(undefined8*)( this + 0x1e8 ) = 0;
   this[0x1f0] = (HTTPClientTCP)0x0;
   *(undefined8*)( this + 0x200 ) = 0;
   *(undefined4*)( this + 0x208 ) = 0;
   this[0x20c] = (HTTPClientTCP)0x0;
   this[0x220] = (HTTPClientTCP)0x0;
   *(undefined4*)( this + 0x248 ) = 0;
   *(undefined8*)( this + 600 ) = 0;
   *(undefined4*)( this + 0x260 ) = 0x10000;
   *(undefined8*)( this + 0x210 ) = uVar2;
   *(undefined8*)( this + 0x218 ) = uVar3;
   *(undefined1(*) [16])( this + 0x228 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x238 ) = (undefined1[16])0x0;
   this_00 = (StreamPeerTCP*)operator_new(0x1b0, "");
   StreamPeerTCP::StreamPeerTCP(this_00);
   postinitialize_handler((Object*)this_00);
   cVar4 = RefCounted::init_ref();
   pOVar5 = *(Object**)( this + 0x230 );
   if (cVar4 == '\0') {
      if (pOVar5 != (Object*)0x0) {
         *(undefined8*)( this + 0x230 ) = 0;
         cVar4 = RefCounted::unreference();
         if (cVar4 != '\0') {
            this_00 = (StreamPeerTCP*)0x0;
            cVar4 = predelete_handler(pOVar5);
            if (cVar4 != '\0') {
               LAB_00100972:( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
               if (this_00 != (StreamPeerTCP*)0x0) goto LAB_00100900;
            }

         }

      }

   }
 else {
      if (pOVar5 != (Object*)this_00) {
         *(StreamPeerTCP**)( this + 0x230 ) = this_00;
         cVar4 = RefCounted::reference();
         if (cVar4 == '\0') {
            *(undefined8*)( this + 0x230 ) = 0;
            if (pOVar5 != (Object*)0x0) {
               cVar4 = RefCounted::unreference();
               joined_r0x0010094f:if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) goto LAB_00100972;
            }

         }
 else if (pOVar5 != (Object*)0x0) {
            cVar4 = RefCounted::unreference();
            goto joined_r0x0010094f;
         }

      }

      LAB_00100900:cVar4 = RefCounted::unreference();
      if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler((Object*)this_00) ),cVar4 != '\0') {
         ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
         Memory::free_static(this_00, false);
      }

   }

   this_01 = (RefCounted*)operator_new(0x198, "");
   RefCounted::RefCounted(this_01);
   this_01[0x17c] = (RefCounted)0x0;
   *(code**)this_01 = Object::_postinitialize;
   *(undefined8*)( this_01 + 0x188 ) = 0;
   *(undefined4*)( this_01 + 400 ) = 0;
   postinitialize_handler((Object*)this_01);
   cVar4 = RefCounted::init_ref();
   if (cVar4 == '\0') {
      pOVar5 = *(Object**)( this + 0x228 );
      if (pOVar5 != (Object*)0x0) {
         *(undefined8*)( this + 0x228 ) = 0;
         cVar4 = RefCounted::unreference();
         if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            goto LAB_001008b4;
         }

      }

   }
 else {
      pOVar1 = *(Object**)( this + 0x228 );
      pOVar5 = pOVar1;
      if (this_01 != (RefCounted*)pOVar1) {
         *(RefCounted**)( this + 0x228 ) = this_01;
         cVar4 = RefCounted::reference();
         if (cVar4 == '\0') {
            *(undefined8*)( this + 0x228 ) = 0;
         }

         pOVar5 = (Object*)this_01;
         if (( ( pOVar1 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   cVar4 = RefCounted::unreference();
   if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) {
      ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
      LAB_001008b4:Memory::free_static(pOVar5, false);
      return;
   }

}
return;}/* HTTPClientTCP::_create_func(bool) */HTTPClientTCP *HTTPClientTCP::_create_func(bool param_1) {
   HTTPClientTCP *this;
   this(HTTPClientTCP * operator_new(0x268, ""));
   HTTPClientTCP(this);
   Object::_initialize();
   if (!param_1) {
      return this;
   }

   Object::_postinitialize();
   return this;
}
/* HTTPClientTCP::connect_to_host(String const&, int, Ref<TLSOptions>) */int HTTPClientTCP::connect_to_host(HTTPClientTCP *this, CowData *param_1, undefined4 param_2, long *param_4) {
   long *plVar1;
   CowData<char32_t> *this_00;
   Object *pOVar2;
   IPAddress *pIVar3;
   long lVar4;
   char cVar5;
   int iVar6;
   Object *pOVar7;
   HTTPClientTCP *this_01;
   undefined8 uVar8;
   long in_FS_OFFSET;
   long local_68;
   Object *local_60;
   long local_58;
   Object *local_50;
   IPAddress local_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *(long*)this + 0x170 ) )();
   *(undefined4*)( this + 400 ) = param_2;
   this_00 = (CowData<char32_t>*)( this + 0x198 );
   if (*(long*)( this + 0x198 ) != *(long*)param_1) {
      CowData<char32_t>::_ref(this_00, param_1);
   }

   pOVar2 = (Object*)*param_4;
   pOVar7 = *(Object**)( this + 0x1d8 );
   if (pOVar2 != pOVar7) {
      *(Object**)( this + 0x1d8 ) = pOVar2;
      if (( pOVar2 != (Object*)0x0 ) && ( cVar5 = cVar5 == '\0' )) {
         *(undefined8*)( this + 0x1d8 ) = 0;
      }

      if (( ( pOVar7 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar7 + 0x140 ))(pOVar7);
      Memory::free_static(pOVar7, false);
   }

}
Array::clear();String::to_lower();cVar5 = String::begins_with((char*)&local_68);if (cVar5 == '\0') {
   cVar5 = String::begins_with((char*)&local_68);
   if (cVar5 != '\0') {
      if (*(long*)( this + 0x1d8 ) == 0) {
         local_58 = 0;
         local_60 = (Object*)0x0;
         TLSOptions::client(&local_50, &local_60, &local_58);
         pOVar2 = *(Object**)( this + 0x1d8 );
         pOVar7 = pOVar2;
         if (local_50 == pOVar2) {
            LAB_00101283:if (( ( pOVar7 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar2 = local_50,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }
 else {
         *(Object**)( this + 0x1d8 ) = local_50;
         if (local_50 != (Object*)0x0) {
            cVar5 = RefCounted::reference();
            if (cVar5 == '\0') {
               *(undefined8*)( this + 0x1d8 ) = 0;
            }

            pOVar7 = local_50;
            if (pOVar2 != (Object*)0x0) goto LAB_0010126e;
            goto LAB_00101283;
         }

         if (pOVar2 != (Object*)0x0) {
            LAB_0010126e:cVar5 = RefCounted::unreference();
            pOVar7 = local_50;
            if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler(pOVar2) ),pOVar7 = local_50,cVar5 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
               pOVar7 = local_50;
            }

            goto LAB_00101283;
         }

      }

      if (( ( local_60 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar2 = local_60,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
      Memory::free_static(pOVar2, false);
   }

   lVar4 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

}
String::substr((int)&local_50, (int)this_00);pOVar7 = local_50;pOVar2 = *(Object**)( this + 0x198 );if (pOVar2 == local_50) {
   if (pOVar2 != (Object*)0x0) {
      LOCK();
      pOVar2 = pOVar2 + -0x10;
      *(long*)pOVar2 = *(long*)pOVar2 + -1;
      UNLOCK();
      if (*(long*)pOVar2 == 0) {
         local_50 = (Object*)0x0;
         Memory::free_static(pOVar7 + -0x10, false);
      }

   }

}
 else {
   if (pOVar2 != (Object*)0x0) {
      LOCK();
      pOVar2 = pOVar2 + -0x10;
      *(long*)pOVar2 = *(long*)pOVar2 + -1;
      UNLOCK();
      if (*(long*)pOVar2 == 0) {
         lVar4 = *(long*)( this + 0x198 );
         *(undefined8*)( this + 0x198 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   *(Object**)( this + 0x198 ) = local_50;
}
}if (*(long*)( this + 0x1d8 ) == 0) goto LAB_00100c02;if (*(int*)( *(long*)( this + 0x1d8 ) + 0x17c ) != 2) {
   cVar5 = StreamPeerTLS::is_available();
   if (cVar5 == '\0') {
      iVar6 = 2;
      _err_print_error("connect_to_host", "core/io/http_client_tcp.cpp", 0x3f, "Condition \"tls_options.is_valid() && !StreamPeerTLS::is_available()\" is true. Returning: ERR_UNAVAILABLE", "HTTPS is not available in this build.", 0, 0);
      goto LAB_00100c40;
   }

   goto LAB_00100c02;
}
_err_print_error("connect_to_host", "core/io/http_client_tcp.cpp", 0x3e, "Condition \"tls_options.is_valid() && tls_options->is_server()\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);}
  else{
   String::substr((int)&local_50, (int)this_00);
   pOVar7 = local_50;
   pOVar2 = *(Object**)( this + 0x198 );
   if (pOVar2 == local_50) {
      if (pOVar2 != (Object*)0x0) {
         LOCK();
         pOVar2 = pOVar2 + -0x10;
         *(long*)pOVar2 = *(long*)pOVar2 + -1;
         UNLOCK();
         if (*(long*)pOVar2 == 0) {
            local_50 = (Object*)0x0;
            Memory::free_static(pOVar7 + -0x10, false);
         }

      }

   }
 else {
      if (pOVar2 != (Object*)0x0) {
         LOCK();
         pOVar2 = pOVar2 + -0x10;
         *(long*)pOVar2 = *(long*)pOVar2 + -1;
         UNLOCK();
         if (*(long*)pOVar2 == 0) {
            lVar4 = *(long*)( this + 0x198 );
            *(undefined8*)( this + 0x198 ) = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      *(Object**)( this + 0x198 ) = local_50;
   }

   if (( *(long*)( this + 0x1d8 ) != 0 ) && ( cVar5 = cVar5 != '\0' )) {
      pOVar2 = *(Object**)( this + 0x1d8 );
      cVar5 = predelete_handler(pOVar2);
      if (cVar5 != '\0') {
         ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
         Memory::free_static(pOVar2, false);
      }

   }

   *(undefined8*)( this + 0x1d8 ) = 0;
   LAB_00100c02:if (( *(long*)( this + 0x198 ) != 0 ) && ( 4 < *(int*)( *(long*)( this + 0x198 ) + -8 ) )) {
      if (*(int*)( this + 400 ) < 0) {
         if (*(long*)( this + 0x1d8 ) == 0) {
            *(undefined4*)( this + 400 ) = 0x50;
         }
 else {
            *(undefined4*)( this + 400 ) = 0x1bb;
         }

      }

      pOVar2 = *(Object**)( this + 0x238 );
      if (*(long*)( this + 0x230 ) == 0) {
         if (pOVar2 != (Object*)0x0) {
            *(undefined8*)( this + 0x238 ) = 0;
            LAB_00100e74:cVar5 = RefCounted::unreference();
            if (( cVar5 != '\0' ) && ( cVar5 = cVar5 != '\0' )) {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

      }
 else {
         pOVar7 = (Object*)__dynamic_cast(*(long*)( this + 0x230 ), &Object::typeinfo, &StreamPeer::typeinfo, 0);
         if (pOVar7 != pOVar2) {
            *(Object**)( this + 0x238 ) = pOVar7;
            if (( pOVar7 != (Object*)0x0 ) && ( cVar5 = cVar5 == '\0' )) {
               *(undefined8*)( this + 0x238 ) = 0;
            }

            if (pOVar2 != (Object*)0x0) goto LAB_00100e74;
         }

      }

      if (*(long*)( this + 0x1d8 ) == 0) {
         iVar6 = *(int*)( this + 0x1b0 );
         if (iVar6 == -1) goto LAB_00100da0;
         if (*(long*)( this + 0x1a8 ) != *(long*)( this + 0x1b8 )) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x1a8 ), (CowData*)( this + 0x1b8 ));
            iVar6 = *(int*)( this + 0x1b0 );
         }

      }
 else if (*(int*)( this + 0x1c0 ) == -1) {
         LAB_00100da0:if (*(long*)( this + 0x1a8 ) != *(long*)( this + 0x198 )) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x1a8 ), (CowData*)this_00);
         }

         iVar6 = *(int*)( this + 400 );
      }
 else {
         this_01 = (HTTPClientTCP*)operator_new(0x268, "");
         HTTPClientTCP(this_01);
         postinitialize_handler((Object*)this_01);
         cVar5 = RefCounted::init_ref();
         if (cVar5 == '\0') {
            pOVar2 = *(Object**)( this + 0x240 );
            if (pOVar2 != (Object*)0x0) {
               *(undefined8*)( this + 0x240 ) = 0;
               cVar5 = RefCounted::unreference();
               if (( cVar5 != '\0' ) && ( cVar5 = cVar5 != '\0' )) {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }
 else {
            pOVar2 = *(Object**)( this + 0x240 );
            pOVar7 = pOVar2;
            if (this_01 != (HTTPClientTCP*)pOVar2) {
               *(HTTPClientTCP**)( this + 0x240 ) = this_01;
               cVar5 = RefCounted::reference();
               if (cVar5 == '\0') {
                  *(undefined8*)( this + 0x240 ) = 0;
               }

               pOVar7 = (Object*)this_01;
               if (( ( pOVar2 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

         cVar5 = RefCounted::unreference();
         if (( cVar5 != '\0' ) && ( cVar5 = cVar5 != '\0' )) {
            ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
            Memory::free_static(pOVar7, false);
         }

      }

      if (*(long*)( this + 0x1a8 ) != *(long*)( this + 0x1c8 )) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x1a8 ), (CowData*)( this + 0x1c8 ));
      }

      iVar6 = *(int*)( this + 0x1c0 );
   }

   *(int*)( this + 0x1a0 ) = iVar6;
   cVar5 = String::is_valid_ip_address();
   if (cVar5 == '\0') {
      uVar8 = IP::get_singleton();
      iVar6 = IP::resolve_hostname_queue_item(uVar8, (String*)( this + 0x1a8 ), 3);
      *(int*)( this + 0x180 ) = iVar6;
      if (iVar6 == -1) {
         *(undefined4*)( this + 0x17c ) = 2;
         iVar6 = 0x1a;
      }
 else {
         *(undefined4*)( this + 0x17c ) = 1;
         iVar6 = 0;
      }

   }
 else {
      pIVar3 = *(IPAddress**)( this + 0x230 );
      IPAddress::IPAddress(local_48, (String*)( this + 0x1a8 ));
      iVar6 = StreamPeerTCP::connect_to_host(pIVar3, (int)local_48);
      if (iVar6 == 0) {
         *(undefined4*)( this + 0x17c ) = 3;
         iVar6 = 0;
      }
 else {
         *(undefined4*)( this + 0x17c ) = 4;
      }

   }

   goto LAB_00100c40;
}
_err_print_error("connect_to_host", "core/io/http_client_tcp.cpp", 0x40, "Condition \"conn_host.length() < HOST_MIN_LEN\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);}iVar6 = 0x1f;LAB_00100c40:lVar4 = local_68;if (local_68 != 0) {
   LOCK();
   plVar1 = (long*)( local_68 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void*)( lVar4 + -0x10 ), false);
   }

}
if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return iVar6;}/* HTTPClientTCP::request(HTTPClient::Method, String const&, Vector<String> const&, unsigned char
   const*, int) */int HTTPClientTCP::request(HTTPClientTCP *this, uint param_2, String *param_3, long param_4, undefined8 param_5, int param_6) {
   long lVar1;
   undefined4 uVar2;
   char *pcVar3;
   code *pcVar4;
   char cVar5;
   int iVar6;
   int iVar7;
   size_t sVar8;
   undefined8 uVar9;
   long *plVar10;
   long lVar11;
   long lVar12;
   long lVar13;
   long in_FS_OFFSET;
   bool bVar14;
   bool bVar15;
   bool bVar16;
   bool bVar17;
   StrRange *local_e0;
   StrRange *local_d8;
   String *local_c8;
   char *local_a0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 < 9) {
      if (param_2 == 5) {
         cVar5 = String::operator ==(param_3, "*");
         if (cVar5 == '\0') goto LAB_00101458;
         LAB_0010146f:if (*(int*)( this + 0x17c ) == 5) {
            if (*(long*)( this + 0x238 ) == 0) {
               iVar6 = 0x1e;
               _err_print_error("request", "core/io/http_client_tcp.cpp", 0x9a, "Condition \"connection.is_null()\" is true. Returning: ERR_INVALID_DATA", 0, 0);
               goto LAB_00101d0b;
            }

            iVar6 = HTTPClient::verify_headers((Vector*)this);
            if (iVar6 != 0) goto LAB_00101d0b;
            local_a0 = (char*)0x0;
            plVar10 = (long*)( *(long*)param_3 + -0x10 );
            if (*(long*)param_3 != 0) {
               do {
                  lVar11 = *plVar10;
                  if (lVar11 == 0) goto LAB_001014db;
                  LOCK();
                  lVar13 = *plVar10;
                  bVar14 = lVar11 == lVar13;
                  if (bVar14) {
                     *plVar10 = lVar11 + 1;
                     lVar13 = lVar11;
                  }

                  UNLOCK();
               }
 while ( !bVar14 );
               if (lVar13 != -1) {
                  local_a0 = *(char**)param_3;
               }

            }

            LAB_001014db:if (( *(long*)( this + 0x1d8 ) == 0 ) && ( *(int*)( this + 0x1b0 ) != -1 )) {
               local_60 = 0;
               plVar10 = (long*)( *(long*)param_3 + -0x10 );
               if (*(long*)param_3 != 0) {
                  do {
                     lVar11 = *plVar10;
                     if (lVar11 == 0) goto LAB_00101f3d;
                     LOCK();
                     lVar13 = *plVar10;
                     bVar14 = lVar11 == lVar13;
                     if (bVar14) {
                        *plVar10 = lVar11 + 1;
                        lVar13 = lVar11;
                     }

                     UNLOCK();
                  }
 while ( !bVar14 );
                  if (lVar13 != -1) {
                     local_60 = *(long*)param_3;
                  }

               }

               LAB_00101f3d:uVar2 = *(undefined4*)( this + 400 );
               local_68 = 0;
               plVar10 = (long*)( *(long*)( this + 0x198 ) + -0x10 );
               if (*(long*)( this + 0x198 ) != 0) {
                  do {
                     lVar11 = *plVar10;
                     if (lVar11 == 0) goto LAB_00101f8b;
                     LOCK();
                     lVar13 = *plVar10;
                     bVar14 = lVar11 == lVar13;
                     if (bVar14) {
                        *plVar10 = lVar11 + 1;
                        lVar13 = lVar11;
                     }

                     UNLOCK();
                  }
 while ( !bVar14 );
                  if (lVar13 != -1) {
                     local_68 = *(long*)( this + 0x198 );
                  }

               }

               LAB_00101f8b:local_70 = 0;
               local_58 = "http://%s:%d%s";
               local_50 = 0xe;
               String::parse_latin1((StrRange*)&local_70);
               vformat<String,int,String>(&local_58, (StrRange*)&local_70, &local_68, uVar2);
               if (local_a0 == local_58) {
                  if (local_a0 != (char*)0x0) {
                     LOCK();
                     plVar10 = (long*)( local_a0 + -0x10 );
                     *plVar10 = *plVar10 + -1;
                     UNLOCK();
                     if (*plVar10 == 0) {
                        Memory::free_static(local_58 + -0x10, false);
                     }

                  }

               }
 else {
                  if (local_a0 != (char*)0x0) {
                     LOCK();
                     plVar10 = (long*)( local_a0 + -0x10 );
                     *plVar10 = *plVar10 + -1;
                     UNLOCK();
                     if (*plVar10 == 0) {
                        Memory::free_static(local_a0 + -0x10, false);
                     }

                  }

                  local_a0 = local_58;
               }

               lVar11 = local_70;
               if (local_70 != 0) {
                  LOCK();
                  plVar10 = (long*)( local_70 + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     local_70 = 0;
                     Memory::free_static((void*)( lVar11 + -0x10 ), false);
                  }

               }

               lVar11 = local_68;
               if (local_68 != 0) {
                  LOCK();
                  plVar10 = (long*)( local_68 + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     local_68 = 0;
                     Memory::free_static((void*)( lVar11 + -0x10 ), false);
                  }

               }

               lVar11 = local_60;
               if (local_60 != 0) {
                  LOCK();
                  plVar10 = (long*)( local_60 + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     local_60 = 0;
                     Memory::free_static((void*)( lVar11 + -0x10 ), false);
                  }

               }

            }

            local_c8 = (String*)&local_68;
            local_d8 = (StrRange*)&local_70;
            local_e0 = (StrRange*)&local_60;
            local_60 = 0;
            local_58 = " HTTP/1.1\r\n";
            local_50 = 0xb;
            String::parse_latin1(local_e0);
            local_58 = " ";
            local_70 = 0;
            local_50 = 1;
            String::parse_latin1(local_d8);
            local_78 = 0;
            pcVar3 = (char*)( &HTTPClient::_methods )[(int)param_2];
            sVar8 = 0;
            if (pcVar3 != (char*)0x0) {
               sVar8 = strlen(pcVar3);
            }

            local_58 = pcVar3;
            local_50 = sVar8;
            String::parse_latin1((StrRange*)&local_78);
            String::operator +(local_c8, (String*)&local_78);
            String::operator +((String*)&local_58, local_c8);
            String::operator +((String*)&local_98, (String*)&local_58);
            pcVar3 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar10 = (long*)( local_58 + -0x10 );
               *plVar10 = *plVar10 + -1;
               UNLOCK();
               if (*plVar10 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar3 + -0x10, false);
               }

            }

            lVar11 = local_68;
            if (local_68 != 0) {
               LOCK();
               plVar10 = (long*)( local_68 + -0x10 );
               *plVar10 = *plVar10 + -1;
               UNLOCK();
               if (*plVar10 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar11 + -0x10 ), false);
               }

            }

            lVar11 = local_78;
            if (local_78 != 0) {
               LOCK();
               plVar10 = (long*)( local_78 + -0x10 );
               *plVar10 = *plVar10 + -1;
               UNLOCK();
               if (*plVar10 == 0) {
                  local_78 = 0;
                  Memory::free_static((void*)( lVar11 + -0x10 ), false);
               }

            }

            lVar11 = local_70;
            if (local_70 != 0) {
               LOCK();
               plVar10 = (long*)( local_70 + -0x10 );
               *plVar10 = *plVar10 + -1;
               UNLOCK();
               if (*plVar10 == 0) {
                  local_70 = 0;
                  Memory::free_static((void*)( lVar11 + -0x10 ), false);
               }

            }

            lVar11 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar10 = (long*)( local_60 + -0x10 );
               *plVar10 = *plVar10 + -1;
               UNLOCK();
               if (*plVar10 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar11 + -0x10 ), false);
               }

            }

            lVar11 = *(long*)( param_4 + 8 );
            bVar14 = 0 < param_6;
            if (lVar11 == 0) {
               bVar16 = true;
               bVar17 = true;
               LAB_001018d0:if (*(long*)( this + 0x1d8 ) == 0) {
                  if (*(int*)( this + 400 ) != 0x50) goto LAB_001018f2;
                  LAB_001025e2:local_60 = 0;
                  local_50 = 2;
                  local_58 = "\r\n";
                  String::parse_latin1(local_e0);
                  operator+((char *)
                  local_c8,(String*)"Host: ";
                  String::operator +((String*)&local_58, local_c8);
                  String::operator +=((String*)&local_98, (String*)&local_58);
                  pcVar3 = local_58;
                  if (local_58 != (char*)0x0) {
                     LOCK();
                     plVar10 = (long*)( local_58 + -0x10 );
                     *plVar10 = *plVar10 + -1;
                     UNLOCK();
                     if (*plVar10 == 0) {
                        local_58 = (char*)0x0;
                        Memory::free_static(pcVar3 + -0x10, false);
                     }

                  }

                  lVar11 = local_68;
                  if (local_68 != 0) {
                     LOCK();
                     plVar10 = (long*)( local_68 + -0x10 );
                     *plVar10 = *plVar10 + -1;
                     UNLOCK();
                     if (*plVar10 == 0) {
                        local_68 = 0;
                        Memory::free_static((void*)( lVar11 + -0x10 ), false);
                     }

                  }

               }
 else {
                  if (*(int*)( this + 400 ) == 0x1bb) goto LAB_001025e2;
                  LAB_001018f2:local_60 = 0;
                  local_50 = 2;
                  local_58 = "\r\n";
                  String::parse_latin1(local_e0);
                  itos((long)local_d8);
                  local_58 = ":";
                  local_80 = 0;
                  local_50 = 1;
                  String::parse_latin1((StrRange*)&local_80);
                  operator+((char *)&
                  local_88,(String*)"Host: ";
                  String::operator +((String*)&local_78, (String*)&local_88);
                  String::operator +(local_c8, (String*)&local_78);
                  String::operator +((String*)&local_58, local_c8);
                  String::operator +=((String*)&local_98, (String*)&local_58);
                  pcVar3 = local_58;
                  if (local_58 != (char*)0x0) {
                     LOCK();
                     plVar10 = (long*)( local_58 + -0x10 );
                     *plVar10 = *plVar10 + -1;
                     UNLOCK();
                     if (*plVar10 == 0) {
                        local_58 = (char*)0x0;
                        Memory::free_static(pcVar3 + -0x10, false);
                     }

                  }

                  lVar11 = local_68;
                  if (local_68 != 0) {
                     LOCK();
                     plVar10 = (long*)( local_68 + -0x10 );
                     *plVar10 = *plVar10 + -1;
                     UNLOCK();
                     if (*plVar10 == 0) {
                        local_68 = 0;
                        Memory::free_static((void*)( lVar11 + -0x10 ), false);
                     }

                  }

                  lVar11 = local_78;
                  if (local_78 != 0) {
                     LOCK();
                     plVar10 = (long*)( local_78 + -0x10 );
                     *plVar10 = *plVar10 + -1;
                     UNLOCK();
                     if (*plVar10 == 0) {
                        local_78 = 0;
                        Memory::free_static((void*)( lVar11 + -0x10 ), false);
                     }

                  }

                  lVar11 = local_88;
                  if (local_88 != 0) {
                     LOCK();
                     plVar10 = (long*)( local_88 + -0x10 );
                     *plVar10 = *plVar10 + -1;
                     UNLOCK();
                     if (*plVar10 == 0) {
                        local_88 = 0;
                        Memory::free_static((void*)( lVar11 + -0x10 ), false);
                     }

                  }

                  lVar11 = local_80;
                  if (local_80 != 0) {
                     LOCK();
                     plVar10 = (long*)( local_80 + -0x10 );
                     *plVar10 = *plVar10 + -1;
                     UNLOCK();
                     if (*plVar10 == 0) {
                        local_80 = 0;
                        Memory::free_static((void*)( lVar11 + -0x10 ), false);
                     }

                  }

                  lVar11 = local_70;
                  if (local_70 != 0) {
                     LOCK();
                     plVar10 = (long*)( local_70 + -0x10 );
                     *plVar10 = *plVar10 + -1;
                     UNLOCK();
                     if (*plVar10 == 0) {
                        local_70 = 0;
                        Memory::free_static((void*)( lVar11 + -0x10 ), false);
                     }

                  }

               }

               lVar11 = local_60;
               if (local_60 != 0) {
                  LOCK();
                  plVar10 = (long*)( local_60 + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     local_60 = 0;
                     Memory::free_static((void*)( lVar11 + -0x10 ), false);
                  }

               }

            }
 else {
               bVar17 = true;
               lVar13 = 0;
               bVar16 = true;
               bVar15 = true;
               do {
                  if (*(long*)( lVar11 + -8 ) <= lVar13) break;
                  local_60 = 0;
                  local_50 = 2;
                  local_58 = "\r\n";
                  String::parse_latin1(local_e0);
                  lVar11 = *(long*)( param_4 + 8 );
                  if (lVar11 == 0) {
                     LAB_00101d60:lVar12 = 0;
                     LAB_00101d63:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar13, lVar12, "p_index", "size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar4 = (code*)invalidInstructionException();
                     ( *pcVar4 )();
                  }

                  lVar12 = *(long*)( lVar11 + -8 );
                  if (lVar12 <= lVar13) goto LAB_00101d63;
                  lVar1 = lVar13 * 8;
                  String::operator +((String*)&local_58, (String*)( lVar11 + lVar1 ));
                  String::operator +=((String*)&local_98, (String*)&local_58);
                  pcVar3 = local_58;
                  if (local_58 != (char*)0x0) {
                     LOCK();
                     plVar10 = (long*)( local_58 + -0x10 );
                     *plVar10 = *plVar10 + -1;
                     UNLOCK();
                     if (*plVar10 == 0) {
                        local_58 = (char*)0x0;
                        Memory::free_static(pcVar3 + -0x10, false);
                     }

                  }

                  lVar11 = local_60;
                  if (local_60 != 0) {
                     LOCK();
                     plVar10 = (long*)( local_60 + -0x10 );
                     *plVar10 = *plVar10 + -1;
                     UNLOCK();
                     if (*plVar10 == 0) {
                        local_60 = 0;
                        Memory::free_static((void*)( lVar11 + -0x10 ), false);
                     }

                  }

                  lVar11 = *(long*)( param_4 + 8 );
                  if (bVar15) {
                     if (lVar11 == 0) goto LAB_00101d60;
                     lVar12 = *(long*)( lVar11 + -8 );
                     if (lVar12 <= lVar13) goto LAB_00101d63;
                     iVar7 = String::findn((char*)( lVar11 + lVar1 ), 0x104f9e);
                     lVar11 = *(long*)( param_4 + 8 );
                     bVar15 = iVar7 != 0;
                  }

                  if (bVar14) {
                     if (lVar11 == 0) goto LAB_00101d60;
                     lVar12 = *(long*)( lVar11 + -8 );
                     if (lVar12 <= lVar13) goto LAB_00101d63;
                     iVar7 = String::findn((char*)( lVar11 + lVar1 ), 0x104fa4);
                     lVar11 = *(long*)( param_4 + 8 );
                     bVar14 = iVar7 != 0;
                  }

                  if (bVar16) {
                     if (lVar11 == 0) goto LAB_00101d60;
                     lVar12 = *(long*)( lVar11 + -8 );
                     if (lVar12 <= lVar13) goto LAB_00101d63;
                     iVar7 = String::findn((char*)( lVar11 + lVar1 ), 0x104fb4);
                     lVar11 = *(long*)( param_4 + 8 );
                     bVar16 = iVar7 != 0;
                  }

                  if (bVar17) {
                     if (lVar11 == 0) goto LAB_00101d60;
                     lVar12 = *(long*)( lVar11 + -8 );
                     if (lVar12 <= lVar13) goto LAB_00101d63;
                     iVar7 = String::findn((char*)( lVar11 + lVar1 ), 0x104fc0);
                     lVar11 = *(long*)( param_4 + 8 );
                     bVar17 = iVar7 != 0;
                  }

                  lVar13 = lVar13 + 1;
               }
 while ( lVar11 != 0 );
               if (bVar15) goto LAB_001018d0;
            }

            if (bVar14) {
               local_60 = 0;
               local_50 = 2;
               local_58 = "\r\n";
               String::parse_latin1(local_e0);
               itos((long)local_d8);
               operator+((char *)
               local_c8,(String*)"Content-Length: ";
               String::operator +((String*)&local_58, local_c8);
               String::operator +=((String*)&local_98, (String*)&local_58);
               pcVar3 = local_58;
               if (local_58 != (char*)0x0) {
                  LOCK();
                  plVar10 = (long*)( local_58 + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     local_58 = (char*)0x0;
                     Memory::free_static(pcVar3 + -0x10, false);
                  }

               }

               lVar11 = local_68;
               if (local_68 != 0) {
                  LOCK();
                  plVar10 = (long*)( local_68 + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     local_68 = 0;
                     Memory::free_static((void*)( lVar11 + -0x10 ), false);
                  }

               }

               lVar11 = local_70;
               if (local_70 != 0) {
                  LOCK();
                  plVar10 = (long*)( local_70 + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     local_70 = 0;
                     Memory::free_static((void*)( lVar11 + -0x10 ), false);
                  }

               }

               lVar11 = local_60;
               if (local_60 != 0) {
                  LOCK();
                  plVar10 = (long*)( local_60 + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     local_60 = 0;
                     Memory::free_static((void*)( lVar11 + -0x10 ), false);
                  }

               }

            }

            if (bVar16) {
               local_60 = 0;
               local_58 = ")\r\n";
               local_50 = 3;
               String::parse_latin1(local_e0);
               plVar10 = (long*)OS::get_singleton();
               ( **(code**)( *plVar10 + 0x188 ) )(local_d8, plVar10);
               local_58 = " (";
               local_80 = 0;
               local_50 = 2;
               String::parse_latin1((StrRange*)&local_80);
               local_58 = "4.4.1.stable.custom_build";
               local_90 = 0;
               local_50 = 0x19;
               String::parse_latin1((StrRange*)&local_90);
               operator+((char *)&
               local_88,(String*)"User-Agent: GodotEngine/";
               String::operator +((String*)&local_78, (String*)&local_88);
               String::operator +(local_c8, (String*)&local_78);
               String::operator +((String*)&local_58, local_c8);
               String::operator +=((String*)&local_98, (String*)&local_58);
               pcVar3 = local_58;
               if (local_58 != (char*)0x0) {
                  LOCK();
                  plVar10 = (long*)( local_58 + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     local_58 = (char*)0x0;
                     Memory::free_static(pcVar3 + -0x10, false);
                  }

               }

               lVar11 = local_68;
               if (local_68 != 0) {
                  LOCK();
                  plVar10 = (long*)( local_68 + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     local_68 = 0;
                     Memory::free_static((void*)( lVar11 + -0x10 ), false);
                  }

               }

               lVar11 = local_78;
               if (local_78 != 0) {
                  LOCK();
                  plVar10 = (long*)( local_78 + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     local_78 = 0;
                     Memory::free_static((void*)( lVar11 + -0x10 ), false);
                  }

               }

               lVar11 = local_88;
               if (local_88 != 0) {
                  LOCK();
                  plVar10 = (long*)( local_88 + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     local_88 = 0;
                     Memory::free_static((void*)( lVar11 + -0x10 ), false);
                  }

               }

               lVar11 = local_90;
               if (local_90 != 0) {
                  LOCK();
                  plVar10 = (long*)( local_90 + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     local_90 = 0;
                     Memory::free_static((void*)( lVar11 + -0x10 ), false);
                  }

               }

               lVar11 = local_80;
               if (local_80 != 0) {
                  LOCK();
                  plVar10 = (long*)( local_80 + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     local_80 = 0;
                     Memory::free_static((void*)( lVar11 + -0x10 ), false);
                  }

               }

               lVar11 = local_70;
               if (local_70 != 0) {
                  LOCK();
                  plVar10 = (long*)( local_70 + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     local_70 = 0;
                     Memory::free_static((void*)( lVar11 + -0x10 ), false);
                  }

               }

               lVar11 = local_60;
               if (local_60 != 0) {
                  LOCK();
                  plVar10 = (long*)( local_60 + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     local_60 = 0;
                     Memory::free_static((void*)( lVar11 + -0x10 ), false);
                  }

               }

            }

            if (bVar17) {
               String::operator +=((String*)&local_98, "Accept: */*\r\n");
            }

            String::operator +=((String*)&local_98, "\r\n");
            String::utf8();
            StreamPeerBuffer::clear();
            plVar10 = *(long**)( this + 0x228 );
            pcVar4 = *(code**)( *plVar10 + 0x150 );
            if (local_58 == (char*)0x0) {
               iVar7 = 0;
            }
 else {
               iVar7 = (int)*(undefined8*)( local_58 + -8 ) + -1 + ( uint )((int)*(undefined8*)( local_58 + -8 ) == 0);
            }

            uVar9 = CharString::get_data();
            ( *pcVar4 )(plVar10, uVar9, iVar7);
            if (0 < param_6) {
               ( **(code**)( **(long**)( this + 0x228 ) + 0x150 ) )();
            }

            StreamPeerBuffer::seek((int)*(undefined8*)( this + 0x228 ));
            pcVar3 = local_58;
            *(undefined4*)( this + 0x17c ) = 6;
            this[0x1d2] = ( HTTPClientTCP )(param_2 == 1);
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar10 = (long*)( local_58 + -0x10 );
               *plVar10 = *plVar10 + -1;
               UNLOCK();
               if (*plVar10 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar3 + -0x10, false);
               }

            }

            lVar11 = local_98;
            if (local_98 != 0) {
               LOCK();
               plVar10 = (long*)( local_98 + -0x10 );
               *plVar10 = *plVar10 + -1;
               UNLOCK();
               if (*plVar10 == 0) {
                  local_98 = 0;
                  Memory::free_static((void*)( lVar11 + -0x10 ), false);
               }

            }

            if (local_a0 != (char*)0x0) {
               LOCK();
               plVar10 = (long*)( local_a0 + -0x10 );
               *plVar10 = *plVar10 + -1;
               UNLOCK();
               if (*plVar10 == 0) {
                  Memory::free_static(local_a0 + -0x10, false);
               }

            }

            goto LAB_00101d0b;
         }

         _err_print_error("request", "core/io/http_client_tcp.cpp", 0x99, "Condition \"status != STATUS_CONNECTED\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      }
 else {
         if (param_2 == 7) {
            iVar6 = String::find_char((wchar32)param_3, 0x3a);
            if (( ( ( 0 < iVar6 ) && ( *(long*)param_3 != 0 ) ) && ( iVar7 = (int)*(undefined8*)( *(long*)param_3 + -8 ) ),iVar7 != 0 )) goto LAB_0010146f;
         }
 else {
            LAB_00101458:cVar5 = String::begins_with((char*)param_3);
            if (( ( cVar5 != '\0' ) || ( cVar5 = String::begins_with((char*)param_3) ),cVar5 != '\0' )) goto LAB_0010146f;
         }

         _err_print_error("request", "core/io/http_client_tcp.cpp", 0x98, "Condition \"!_check_request_url(p_method, p_url)\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      }

   }
 else {
      _err_print_index_error("request", "core/io/http_client_tcp.cpp", 0x97, (ulong)param_2, 9, "p_method", "METHOD_MAX", "", false, false);
   }

   iVar6 = 0x1f;
   LAB_00101d0b:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar6;
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
/* HTTPClientTCP::get_response_headers(List<String, DefaultAllocator>*) */undefined8 HTTPClientTCP::get_response_headers(HTTPClientTCP *this, List *param_1) {
   CowData *pCVar1;
   long *plVar2;
   long lVar3;
   CowData<char32_t> *this_00;
   undefined1(*pauVar4)[16];
   long lVar5;
   long lVar6;
   lVar3 = *(long*)( this + 600 );
   if (( lVar3 != 0 ) && ( lVar5 = lVar5 != 0 )) {
      lVar6 = 0;
      while (true) {
         if (lVar5 <= lVar6) {
            if (lVar5 != 0) {
               CowData<String>::_unref((CowData<String>*)( this + 600 ));
            }

            return 0;
         }

         pCVar1 = (CowData*)( lVar3 + lVar6 * 8 );
         if (*(long*)param_1 == 0) {
            pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])param_1 = pauVar4;
            *(undefined4*)pauVar4[1] = 0;
            *pauVar4 = (undefined1[16])0x0;
         }

         this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
         *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
         if (*(long*)pCVar1 != 0) {
            CowData<char32_t>::_ref(this_00, pCVar1);
         }

         plVar2 = *(long**)param_1;
         lVar3 = plVar2[1];
         *(undefined8*)( this_00 + 8 ) = 0;
         *(long**)( this_00 + 0x18 ) = plVar2;
         *(long*)( this_00 + 0x10 ) = lVar3;
         if (lVar3 != 0) {
            *(CowData<char32_t>**)( lVar3 + 8 ) = this_00;
         }

         plVar2[1] = (long)this_00;
         if (*plVar2 == 0) {
            *plVar2 = (long)this_00;
         }

         *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
         lVar3 = *(long*)( this + 600 );
         lVar6 = lVar6 + 1;
         if (lVar3 == 0) break;
         lVar5 = *(long*)( lVar3 + -8 );
      }
;
      return 0;
   }

   return 0x1f;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HTTPClientTCP::close() */void HTTPClientTCP::close(HTTPClientTCP *this) {
   Object *pOVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   char cVar4;
   int iVar5;
   iVar5 = StreamPeerTCP::get_status();
   if (iVar5 != 0) {
      StreamPeerTCP::disconnect_from_host();
   }

   if (*(long*)( this + 0x238 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar1 = *(Object**)( this + 0x238 );
         cVar4 = predelete_handler(pOVar1);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   *(undefined8*)( this + 0x238 ) = 0;
   if (*(long*)( this + 0x240 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar1 = *(Object**)( this + 0x240 );
         cVar4 = predelete_handler(pOVar1);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   this[0x1d2] = (HTTPClientTCP)0x0;
   *(undefined8*)( this + 0x240 ) = 0;
   *(undefined4*)( this + 0x17c ) = 0;
   if (*(int*)( this + 0x180 ) != -1) {
      iVar5 = IP::get_singleton();
      IP::erase_resolve_item(iVar5);
      *(undefined4*)( this + 0x180 ) = 0xffffffff;
   }

   Array::clear();
   if (( *(long*)( this + 600 ) != 0 ) && ( *(long*)( *(long*)( this + 600 ) + -8 ) != 0 )) {
      CowData<String>::_unref((CowData<String>*)( this + 600 ));
   }

   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( this + 0x1e8 ), 0);
   StreamPeerBuffer::clear();
   uVar3 = _UNK_00107dd8;
   uVar2 = __LC16;
   *(undefined4*)( this + 0x208 ) = 0;
   this[0x20c] = (HTTPClientTCP)0x0;
   this[0x220] = (HTTPClientTCP)0x0;
   *(undefined4*)( this + 0x248 ) = 0;
   this[0x1d1] = (HTTPClientTCP)0x0;
   *(undefined8*)( this + 0x210 ) = uVar2;
   *(undefined8*)( this + 0x218 ) = uVar3;
   return;
}
/* Vector<unsigned char>::push_back(unsigned char) [clone .isra.0] */void Vector<unsigned_char>::push_back(Vector<unsigned_char> *this, uchar param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar3 = 1;
   }
 else {
      lVar3 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( this + 8 ), lVar3);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar2 = -1;
         lVar3 = 0;
      }
 else {
         lVar3 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar2 = lVar3 + -1;
         if (-1 < lVar2) {
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( this + 8 ));
            *(uchar*)( *(long*)( this + 8 ) + -1 + lVar3 ) = param_1;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar2, lVar3, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* HTTPClientTCP::read_response_body_chunk() */long HTTPClientTCP::read_response_body_chunk(void) {
   HTTPClientTCP *pHVar1;
   byte *pbVar2;
   byte bVar3;
   code *pcVar4;
   int iVar5;
   byte *pbVar6;
   size_t sVar7;
   uint uVar8;
   uint uVar9;
   ulong uVar10;
   size_t __n;
   HTTPClientTCP *in_RSI;
   long in_RDI;
   long lVar11;
   int iVar12;
   long lVar13;
   long in_FS_OFFSET;
   uchar local_5d;
   int local_5c[3];
   void *local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( in_RSI + 0x17c ) == 7) {
      local_50[0] = (void*)0x0;
      if (in_RSI[0x1f0] != (HTTPClientTCP)0x0) {
         LAB_00102d28:if (in_RSI[0x20c] == (HTTPClientTCP)0x0) {
            iVar5 = *(int*)( in_RSI + 0x208 );
            local_5c[0] = 0;
            if (iVar5 == 0) {
               iVar5 = _get_http_data(in_RSI, &local_5d, 1, local_5c);
               if (local_5c[0] == 0) goto LAB_00102cd2;
               Vector<unsigned_char>::push_back((Vector<unsigned_char>*)( in_RSI + 0x1f8 ), local_5d);
               pbVar6 = *(byte**)( in_RSI + 0x200 );
               if (pbVar6 != (byte*)0x0) {
                  lVar11 = *(long*)( pbVar6 + -8 );
                  if (0x20 < lVar11) {
                     _err_print_error("read_response_body_chunk", "core/io/http_client_tcp.cpp", 0x268, "HTTP Invalid chunk hex len", 0, 0);
                     *(undefined4*)( in_RSI + 0x17c ) = 8;
                     goto LAB_00102cd2;
                  }

                  if (( ( 2 < lVar11 ) && ( pbVar6[lVar11 + -2] == 0xd ) ) && ( pbVar6[lVar11 + -1] == 10 )) {
                     pbVar2 = pbVar6 + lVar11 + -2;
                     uVar9 = 0;
                     do {
                        bVar3 = *pbVar6;
                        if ((int)(char)bVar3 - 0x30U < 10) {
                           uVar8 = bVar3 - 0x30;
                        }
 else if (( byte )(bVar3 + 0x9f) < 6) {
                           uVar8 = bVar3 - 0x57;
                        }
 else {
                           if (5 < ( byte )(bVar3 + 0xbf)) {
                              _err_print_error("read_response_body_chunk", "core/io/http_client_tcp.cpp", 0x279, "HTTP Chunk len not in hex!!", 0, 0);
                              *(undefined4*)( in_RSI + 0x17c ) = 8;
                              break;
                           }

                           uVar8 = bVar3 - 0x37;
                        }

                        uVar9 = uVar9 << 4 | uVar8;
                        if (0x1000000 < (int)uVar9) {
                           _err_print_error("read_response_body_chunk", "core/io/http_client_tcp.cpp", 0x280, "HTTP Chunk too big!! >16mb", 0, 0);
                           *(undefined4*)( in_RSI + 0x17c ) = 8;
                           goto LAB_00103123;
                        }

                        pbVar6 = pbVar6 + 1;
                     }
 while ( pbVar2 != pbVar6 );
                     if (uVar9 == 0) {
                        in_RSI[0x20c] = (HTTPClientTCP)0x1;
                        CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( in_RSI + 0x200 ), 0);
                        goto LAB_00102cd2;
                     }

                     LAB_00103123:*(uint*)( in_RSI + 0x208 ) = uVar9 + 2;
                     CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( in_RSI + 0x200 ), (long)(int)( uVar9 + 2 ));
                  }

               }

               goto LAB_00102d28;
            }

            if (*(long*)( in_RSI + 0x200 ) == 0) {
               lVar13 = -(long)iVar5;
               lVar11 = 0;
               LAB_0010317a:_err_print_index_error(_LC72, "./core/templates/vector.h", 0x38, lVar13, lVar11, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }

            lVar11 = *(long*)( *(long*)( in_RSI + 0x200 ) + -8 );
            lVar13 = lVar11 - iVar5;
            if (( lVar13 < 0 ) || ( lVar11 <= lVar13 )) goto LAB_0010317a;
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( in_RSI + 0x200 ));
            iVar5 = _get_http_data(in_RSI, (uchar*)( *(long*)( in_RSI + 0x200 ) + lVar13 ), iVar5, local_5c);
            if (local_5c[0] == 0) goto LAB_00102cd2;
            pHVar1 = in_RSI + 0x208;
            *(int*)pHVar1 = *(int*)pHVar1 - local_5c[0];
            if (*(int*)pHVar1 != 0) goto LAB_00102cd2;
            lVar11 = *(long*)( in_RSI + 0x200 );
            if (lVar11 != 0) {
               lVar13 = *(long*)( lVar11 + -8 );
               iVar12 = (int)lVar13 + -2;
               __n = (size_t)iVar12;
               sVar7 = __n;
               if (( lVar13 <= (long)__n ) || ( iVar12 < 0 )) goto LAB_00102f5b;
               if (*(char*)( lVar11 + __n ) == '\r') {
                  sVar7 = (size_t)( (int)lVar13 + -1 );
                  if (lVar13 <= (long)sVar7) goto LAB_00102f5b;
                  if (*(char*)( lVar11 + sVar7 ) == '\n') {
                     CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)local_50, __n);
                     CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)local_50);
                     memcpy(local_50[0], *(void**)( in_RSI + 0x200 ), __n);
                     CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( in_RSI + 0x200 ), 0);
                     goto LAB_00102cd2;
                  }

               }

               _err_print_error("read_response_body_chunk", "core/io/http_client_tcp.cpp", 0x29b, "HTTP Invalid chunk terminator (not \\r\\n)", 0, 0);
               *(undefined4*)( in_RSI + 0x17c ) = 8;
               goto LAB_00102cd2;
            }

            lVar13 = 0;
            sVar7 = 0xfffffffffffffffe;
         }
 else {
            local_5c[0] = 0;
            iVar5 = _get_http_data(in_RSI, &local_5d, 1, local_5c);
            if (local_5c[0] == 0) goto LAB_00102cd2;
            Vector<unsigned_char>::push_back((Vector<unsigned_char>*)( in_RSI + 0x1f8 ), local_5d);
            lVar11 = *(long*)( in_RSI + 0x200 );
            if (lVar11 == 0) goto LAB_00102d28;
            lVar13 = *(long*)( lVar11 + -8 );
            iVar12 = (int)lVar13;
            if (iVar12 < 2) goto LAB_00102d28;
            sVar7 = (size_t)( iVar12 + -2 );
            if ((long)sVar7 < lVar13) {
               if (*(char*)( lVar11 + sVar7 ) != '\r') goto LAB_00102d28;
               sVar7 = (size_t)( iVar12 + -1 );
               if ((long)sVar7 < lVar13) {
                  if (*(char*)( lVar11 + sVar7 ) == '\n') {
                     if (iVar12 == 2) {
                        in_RSI[0x20c] = (HTTPClientTCP)0x0;
                        *(undefined4*)( in_RSI + 0x17c ) = 5;
                        CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( in_RSI + 0x200 ), 0);
                        goto LAB_00102cd2;
                     }

                     CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( in_RSI + 0x200 ), 0);
                  }

                  goto LAB_00102d28;
               }

            }

         }

         LAB_00102f5b:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, sVar7, lVar13, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }

      uVar10 = ( ulong ) * (int*)( in_RSI + 0x260 );
      if (( in_RSI[0x220] == (HTTPClientTCP)0x0 ) && ( (long)*(ulong*)( in_RSI + 0x218 ) < (long)uVar10 )) {
         uVar10 = *(ulong*)( in_RSI + 0x218 );
      }

      CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)local_50, (long)(int)uVar10);
      if (0 < (int)uVar10) {
         iVar12 = 0;
         LAB_00102c92:local_5c[0] = 0;
         CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)local_50);
         iVar5 = _get_http_data(in_RSI, (uchar*)( (long)local_50[0] + (long)iVar12 ), (int)uVar10, local_5c);
         if (local_5c[0] < 1) {
            CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)local_50, (long)iVar12);
            LAB_00102cd2:if (iVar5 == 0) goto LAB_00102cdb;
         }
 else {
            iVar12 = iVar12 + local_5c[0];
            uVar9 = (int)uVar10 - local_5c[0];
            uVar10 = (ulong)uVar9;
            if (in_RSI[0x220] == (HTTPClientTCP)0x0) {
               *(long*)( in_RSI + 0x218 ) = *(long*)( in_RSI + 0x218 ) - (long)local_5c[0];
            }

            if (iVar5 == 0) goto code_r0x00102c8e;
            CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)local_50, (long)iVar12);
         }

         ( **(code**)( *(long*)in_RSI + 0x170 ) )();
         *(uint*)( in_RSI + 0x17c ) = ( uint )(iVar5 != 0x12) << 3;
         goto LAB_00102ce9;
      }

      LAB_00102cdb:if (( ( *(long*)( in_RSI + 0x218 ) == 0 ) && ( in_RSI[0x1f0] == (HTTPClientTCP)0x0 ) ) && ( in_RSI[0x220] == (HTTPClientTCP)0x0 )) {
         *(undefined4*)( in_RSI + 0x17c ) = 5;
      }

      LAB_00102ce9:*(void**)( in_RDI + 8 ) = local_50[0];
   }
 else {
      _err_print_error("read_response_body_chunk", "core/io/http_client_tcp.cpp", 0x23c, "Condition \"status != STATUS_BODY\" is true. Returning: PackedByteArray()", 0, 0);
      *(undefined8*)( in_RDI + 8 ) = 0;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return in_RDI;
   code_r0x00102c8e:if ((int)uVar9 < 1) goto LAB_00102cdb;
   goto LAB_00102c92;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HTTPClientTCP::poll() */int HTTPClientTCP::poll(HTTPClientTCP *this) {
   CowData<String> *this_00;
   char *pcVar1;
   CowData<char32_t> *this_01;
   long *plVar2;
   IPAddress *pIVar3;
   long *plVar4;
   code *pcVar5;
   undefined8 uVar6;
   char cVar7;
   undefined1 uVar8;
   int iVar9;
   int iVar10;
   undefined4 uVar11;
   Object *pOVar12;
   undefined8 uVar13;
   Object *pOVar14;
   Object *pOVar15;
   long lVar16;
   long lVar17;
   long lVar18;
   wchar32 wVar19;
   long in_FS_OFFSET;
   bool bVar20;
   bool bVar21;
   uchar local_bd;
   int local_bc;
   long local_b8;
   Object *local_b0;
   long local_a8;
   long local_a0;
   undefined8 local_98;
   undefined8 local_90;
   Object *local_88;
   char *local_80;
   Variant local_78[32];
   int local_58;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x230 ) != 0) {
      StreamPeerTCP::poll();
   }

   switch (*(undefined4*)( this + 0x17c )) {
      case 0:
    iVar10 = 3;
    goto LAB_001034e4;
      case 1:
    if (*(int *)(this + 0x180) == -1) {
      _err_print_error(&_LC76,"core/io/http_client_tcp.cpp",0x117,
                       "Condition \"resolving == IP::RESOLVER_INVALID_ID\" is true. Returning: ERR_BUG"
                       ,0,0);
LAB_00103c18:
      iVar10 = 0x2f;
      goto LAB_001034e4;
    }
    iVar9 = IP::get_singleton();
    iVar9 = IP::get_resolve_item_status(iVar9);
    if (iVar9 == 2) {
      IP::get_singleton();
      iVar10 = 0x2f;
      IP::get_resolve_item_addresses((int)(Array *)&local_88);
      Array::operator=((Array *)(this + 0x188),(Array *)&local_88);
      Array::~Array((Array *)&local_88);
      iVar9 = IP::get_singleton();
      IP::erase_resolve_item(iVar9);
      *(undefined4 *)(this + 0x180) = 0xffffffff;
      do {
        iVar9 = Array::size();
        if (iVar9 < 1) goto LAB_00103ccc;
        pIVar3 = *(IPAddress **)(this + 0x230);
        Array::pop_front();
        Variant::operator_cast_to_IPAddress(local_78);
        iVar10 = StreamPeerTCP::connect_to_host(pIVar3,(int)local_78);
        if (Variant::needs_deinit[local_58] != '\0') {
          Variant::_clear_internal();
        }
      } while (iVar10 != 0);
      *(undefined4 *)(this + 0x17c) = 3;
    }
    else if ((iVar9 == 3) || (iVar9 == 0)) {
      iVar9 = IP::get_singleton();
      IP::erase_resolve_item(iVar9);
      *(undefined4 *)(this + 0x180) = 0xffffffff;
      (**(code **)(*(long *)this + 0x170))(this);
      *(undefined4 *)(this + 0x17c) = 2;
      goto switchD_001032cf_caseD_2;
    }
    break;
      case 2:
switchD_001032cf_caseD_2:
    iVar10 = 0x1a;
    goto LAB_001034e4;
      case 3:
    iVar9 = StreamPeerTCP::get_status();
    if (iVar9 != 2) {
      if ((iVar9 == 3) || (iVar9 == 0)) {
        iVar10 = 0x19;
        do {
          iVar9 = Array::size();
          if (iVar9 < 1) {
            (**(code **)(*(long *)this + 0x170))(this);
            goto LAB_00103ccc;
          }
          StreamPeerTCP::disconnect_from_host();
          pIVar3 = *(IPAddress **)(this + 0x230);
          Array::pop_front();
          Variant::operator_cast_to_IPAddress(local_78);
          iVar10 = StreamPeerTCP::connect_to_host(pIVar3,(int)local_78);
          if (Variant::needs_deinit[local_58] != '\0') {
            Variant::_clear_internal();
          }
        } while (iVar10 != 0);
      }
      break;
    }
    if (*(long *)(this + 0x1d8) == 0) {
      Array::clear();
      *(undefined4 *)(this + 0x17c) = 5;
      break;
    }
    plVar2 = *(long **)(this + 0x240);
    if (plVar2 == (long *)0x0) {
      if (this[0x1d1] != (HTTPClientTCP)0x0) {
        if (((*(long *)(this + 0x238) != 0) &&
            (pOVar12 = (Object *)
                       __dynamic_cast(*(long *)(this + 0x238),&Object::typeinfo,
                                      &StreamPeerTLS::typeinfo,0), pOVar12 != (Object *)0x0)) &&
           (cVar7 = RefCounted::reference(), cVar7 != '\0')) {
          cVar7 = RefCounted::reference();
          if (cVar7 != '\0') {
            cVar7 = RefCounted::unreference();
            if ((cVar7 != '\0') &&
               (cVar7 = predelete_handler(pOVar12), pOVar14 = pOVar12, cVar7 != '\0')) {
LAB_001040ab:
              (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
              Memory::free_static(pOVar12,false);
              pOVar12 = pOVar14;
              if (pOVar14 == (Object *)0x0) goto LAB_00104061;
            }
            (**(code **)(*(long *)pOVar12 + 0x178))(pOVar12);
            goto LAB_00103f56;
          }
          cVar7 = RefCounted::unreference();
          if (cVar7 != '\0') {
            cVar7 = predelete_handler(pOVar12);
            pOVar14 = (Object *)0x0;
            if (cVar7 != '\0') goto LAB_001040ab;
          }
        }
LAB_00104061:
        iVar10 = 0x19;
        (**(code **)(*(long *)this + 0x170))(this);
        *(undefined4 *)(this + 0x17c) = 9;
        goto LAB_001034e4;
      }
      pOVar14 = (Object *)StreamPeerTLS::create(true);
      if ((pOVar14 == (Object *)0x0) || (cVar7 = RefCounted::init_ref(), cVar7 == '\0'))
      goto HTTPClientTCP_poll;
      cVar7 = RefCounted::reference();
      pOVar12 = (Object *)0x0;
      if (cVar7 != '\0') {
        pOVar12 = pOVar14;
      }
      cVar7 = RefCounted::unreference();
      if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar14), cVar7 != '\0')) {
        (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
        Memory::free_static(pOVar14,false);
      }
      pcVar5 = *(code **)(*(long *)pOVar12 + 0x188);
      local_88 = (Object *)0x0;
      if ((*(Object **)(this + 0x1d8) != (Object *)0x0) &&
         (local_88 = *(Object **)(this + 0x1d8), cVar7 = RefCounted::reference(), cVar7 == '\0')) {
        local_88 = (Object *)0x0;
      }
      local_98 = (Object *)0x0;
      if (((*(long *)(this + 0x230) != 0) &&
          (pOVar14 = (Object *)
                     __dynamic_cast(*(long *)(this + 0x230),&Object::typeinfo,&StreamPeer::typeinfo,
                                    0), pOVar14 != (Object *)0x0)) &&
         (local_98 = pOVar14, cVar7 = RefCounted::reference(), cVar7 == '\0')) {
        local_98 = (Object *)0x0;
      }
      iVar9 = (*pcVar5)(pOVar12,&local_98,this + 0x198,&local_88);
      if (((local_98 != (Object *)0x0) &&
          (cVar7 = RefCounted::unreference(), pOVar14 = local_98, cVar7 != '\0')) &&
         (cVar7 = predelete_handler(local_98), cVar7 != '\0')) {
        (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
        Memory::free_static(pOVar14,false);
      }
      if (((local_88 != (Object *)0x0) &&
          (cVar7 = RefCounted::unreference(), pOVar14 = local_88, cVar7 != '\0')) &&
         (cVar7 = predelete_handler(local_88), cVar7 != '\0')) {
        (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
        Memory::free_static(pOVar14,false);
   }

   if (iVar9 == 0) {
      pOVar15 = (Object*)__dynamic_cast(pOVar12, &Object::typeinfo, &StreamPeer::typeinfo, 0);
      pOVar14 = *(Object**)( this + 0x238 );
      if (pOVar14 != pOVar15) {
         *(Object**)( this + 0x238 ) = pOVar15;
         if (( pOVar15 != (Object*)0x0 ) && ( cVar7 = cVar7 == '\0' )) {
            *(undefined8*)( this + 0x238 ) = 0;
         }

         if (( ( pOVar14 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)pOVar14 + 0x140 ))(pOVar14);
         Memory::free_static(pOVar14, false);
      }

   }

   this[0x1d1] = (HTTPClientTCP)0x1;
   LAB_00103f56:iVar9 = ( **(code**)( *(long*)pOVar12 + 400 ) )(pOVar12);
   if (iVar9 != 2) {
      iVar9 = ( **(code**)( *(long*)pOVar12 + 400 ) )(pOVar12);
      if (iVar9 == 1) goto LAB_0010334b;
      goto LAB_00103f80;
   }

   this[0x1d1] = (HTTPClientTCP)0x0;
   iVar10 = 0;
   Array::clear();
   uVar11 = 5;
}
else{LAB_00103f80:iVar10 = 0x19;( **(code**)( *(long*)this + 0x170 ) )(this);uVar11 = 9;}*(undefined4*)( this + 0x17c ) = uVar11;cVar7 = RefCounted::unreference();if (( cVar7 != '\0' ) && ( cVar7 = cVar7 != '\0' )) {
   ( **(code**)( *(long*)pOVar12 + 0x140 ) )(pOVar12);
   Memory::free_static(pOVar12, false);
}
goto LAB_001034e4;}iVar10 = ( **(code**)( *plVar2 + 0x1d0 ) )(plVar2);if (iVar10 == 3) {
   plVar2 = *(long**)( this + 0x240 );
   pcVar5 = *(code**)( *plVar2 + 0x160 );
   local_88 = (Object*)0x0;
   if (( ( *(long*)( this + 0x230 ) != 0 ) && ( pOVar12 = (Object*)__dynamic_cast(*(long*)( this + 0x230 ), &Object::typeinfo, &StreamPeer::typeinfo, 0) ),pOVar12 != (Object*)0x0 )) {
      local_88 = (Object*)0x0;
   }

   ( *pcVar5 )(plVar2);
   if (( ( local_88 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),pOVar12 = local_88,cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)pOVar12 + 0x140 ))(pOVar12);
   Memory::free_static(pOVar12, false);
}
plVar4 = *(long**)( this + 0x240 );uVar11 = *(undefined4*)( this + 400 );local_90 = 0;pcVar5 = *(code**)( *plVar4 + 0x150 );local_a0 = 0;plVar2 = (long*)( *(long*)( this + 0x198 ) + -0x10 );if (*(long*)( this + 0x198 ) != 0) {
   do {
      lVar18 = *plVar2;
      if (lVar18 == 0) goto LAB_0010428e;
      LOCK();
      lVar16 = *plVar2;
      bVar21 = lVar18 == lVar16;
      if (bVar21) {
         *plVar2 = lVar18 + 1;
         lVar16 = lVar18;
      }

      UNLOCK();
   }
 while ( !bVar21 );
   if (lVar16 != -1) {
      local_a0 = *(long*)( this + 0x198 );
   }

}
LAB_0010428e:local_a8 = 0;local_88 = (Object*)0x1050cd;local_80 = (char*)0x5;String::parse_latin1((StrRange*)&local_a8);vformat<String,int>(&local_88, (StrRange*)&local_a8, &local_a0, uVar11);iVar10 = ( *pcVar5 )(plVar4, 7, &local_88, &local_98, 0);pOVar12 = local_88;if (local_88 != (Object*)0x0) {
   LOCK();
   pOVar14 = local_88 + -0x10;
   *(long*)pOVar14 = *(long*)pOVar14 + -1;
   UNLOCK();
   if (*(long*)pOVar14 == 0) {
      local_88 = (Object*)0x0;
      Memory::free_static(pOVar12 + -0x10, false);
   }

}
lVar18 = local_a8;if (local_a8 != 0) {
   LOCK();
   plVar2 = (long*)( local_a8 + -0x10 );
   *plVar2 = *plVar2 + -1;
   UNLOCK();
   if (*plVar2 == 0) {
      local_a8 = 0;
      Memory::free_static((void*)( lVar18 + -0x10 ), false);
   }

}
lVar18 = local_a0;if (local_a0 != 0) {
   LOCK();
   plVar2 = (long*)( local_a0 + -0x10 );
   *plVar2 = *plVar2 + -1;
   UNLOCK();
   if (*plVar2 == 0) {
      local_a0 = 0;
      Memory::free_static((void*)( lVar18 + -0x10 ), false);
   }

}
if (iVar10 != 0) {
   *(undefined4*)( this + 0x17c ) = 4;
   CowData<String>::_unref((CowData<String>*)&local_90);
   goto LAB_001034e4;
}
CowData<String>::_unref((CowData<String>*)&local_90);}
    elseif (iVar10 != 0) {
   LAB_00103ccc:*(undefined4*)( this + 0x17c ) = 4;
   goto LAB_001034e4;
}
pcVar5 = *(code**)( **(long**)( this + 0x240 ) + 0x178 );if (pcVar5 == get_status) {
   uVar11 = *(undefined4*)( (long)*(long**)( this + 0x240 ) + 0x17c );
}
 else {
   uVar11 = ( *pcVar5 )();
}
switch (uVar11) {
   case 0:
   case 1:
   case 3:
      *(undefined4 *)(this + 0x17c) = 4;
      _err_print_error(&_LC76,"core/io/http_client_tcp.cpp",0x164,
                       "Method/function failed. Returning: ERR_BUG",0,0);
      goto LAB_00103c18;
   default:
      goto switchD_00103bde_caseD_2;
   case 5:
      pcVar5 = *(code **)(**(long **)(this + 0x240) + 400);
      if (pcVar5 == get_response_code) {
        if ((int)(*(long **)(this + 0x240))[0x49] == 200) {
LAB_00103ca0:
          cVar7 = RefCounted::unreference();
          if (cVar7 != '\0') {
            pOVar12 = *(Object **)(this + 0x240);
            cVar7 = predelete_handler(pOVar12);
            if (cVar7 != '\0') {
              (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
              Memory::free_static(pOVar12,false);
            }
          }
LAB_00103cad:
          *(undefined8 *)(this + 0x240) = 0;
          break;
        }
      }
      else {
        iVar9 = (*pcVar5)();
        if (iVar9 == 200) {
          if (*(long *)(this + 0x240) != 0) goto LAB_00103ca0;
          goto LAB_00103cad;
        }
      }
      goto switchD_00103bde_caseD_2;
   case 6:
      break;
   case 7:
      (**(code **)(**(long **)(this + 0x240) + 0x1a8))(&local_88);
      pcVar1 = local_80;
      if (local_80 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_80 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_80 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
}
break;case 4:
    goto switchD_001032cf_caseD_4;case 5:case 7:
    if (*(long *)(this + 0x1d8) == 0) {
      iVar9 = StreamPeerTCP::get_status();
      if (iVar9 != 2) {
        *(undefined4 *)(this + 0x17c) = 8;
        goto switchD_001032cf_caseD_8;
      }
    }
    else {
      if ((*(long *)(this + 0x238) == 0) ||
         (pOVar12 = (Object *)
                    __dynamic_cast(*(long *)(this + 0x238),&Object::typeinfo,
                                   &StreamPeerTLS::typeinfo,0), pOVar12 == (Object *)0x0)) {
HTTPClientTCP_poll:
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      cVar7 = RefCounted::reference();
      if (cVar7 == '\0') {
        pOVar12 = (Object *)0x0;
      }
      (**(code **)(*(long *)pOVar12 + 0x178))(pOVar12);
      iVar9 = (**(code **)(*(long *)pOVar12 + 400))(pOVar12);
      if (iVar9 != 2) {
        *(undefined4 *)(this + 0x17c) = 8;
        cVar7 = RefCounted::unreference();
        if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar12), cVar7 != '\0')) {
          (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
          Memory::free_static(pOVar12,false);
        }
        goto switchD_001032cf_caseD_8;
      }
LAB_0010334b:
      cVar7 = RefCounted::unreference();
      if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar12), cVar7 != '\0')) {
        (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
        Memory::free_static(pOVar12,false);
      }
    }
    break;case 6:
    iVar9 = (**(code **)(**(long **)(this + 0x228) + 0x170))();
    if (iVar9 != 0) {
      iVar9 = (**(code **)(**(long **)(this + 0x228) + 0x170))();
      iVar10 = StreamPeerBuffer::get_position();
      StreamPeerBuffer::get_data_array();
      local_98 = (Object *)((ulong)local_98._4_4_ << 0x20);
      plVar2 = *(long **)(this + 0x238);
      if (this[0x1d0] == (HTTPClientTCP)0x0) {
        iVar10 = (**(code **)(*plVar2 + 0x158))(plVar2,local_80 + iVar10,iVar9,&local_98);
      }
      else {
        iVar10 = (**(code **)(*plVar2 + 0x150))(plVar2,local_80 + iVar10,iVar9);
        local_98 = (Object *)CONCAT44(local_98._4_4_,(int)local_98 + iVar9);
      }
      if (iVar10 == 0) {
        StreamPeerBuffer::seek((int)*(undefined8 *)(this + 0x228));
        iVar10 = 0;
        if (iVar9 <= (int)local_98) {
          StreamPeerBuffer::clear();
          pcVar1 = local_80;
          if (local_80 != (char *)0x0) {
            LOCK();
            plVar2 = (long *)(local_80 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_80 = (char *)0x0;
              Memory::free_static(pcVar1 + -0x10,false);
            }
          }
          goto LAB_00103640;
        }
      }
      else {
        iVar10 = 0x1b;
        (**(code **)(*(long *)this + 0x170))(this);
        *(undefined4 *)(this + 0x17c) = 8;
      }
      pcVar1 = local_80;
      if (local_80 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_80 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_80 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      goto LAB_001034e4;
    }
LAB_00103640:
    do {
      do {
        do {
          do {
            do {
              do {
                local_bc = 0;
                iVar9 = _get_http_data(this,&local_bd,1,&local_bc);
                if (iVar9 != 0) {
                  iVar10 = 0x1b;
                  (**(code **)(*(long *)this + 0x170))(this);
                  *(undefined4 *)(this + 0x17c) = 8;
                  goto LAB_001034e4;
                }
                iVar10 = 0;
                if (local_bc == 0) goto LAB_001034e4;
                Vector<unsigned_char>::push_back((Vector<unsigned_char> *)(this + 0x1e0),local_bd);
                lVar18 = *(long *)(this + 0x1e8);
              } while (lVar18 == 0);
              lVar16 = *(long *)(lVar18 + -8);
              iVar9 = (int)lVar16;
            } while (iVar9 < 2);
            lVar17 = (long)(iVar9 + -2);
            if (lVar16 <= lVar17) goto LAB_00103b3b;
            pcVar1 = (char *)(lVar18 + lVar17);
            if (*pcVar1 == '\n') {
              lVar17 = (long)(iVar9 + -1);
              if (lVar16 <= lVar17) goto LAB_00103b3b;
              if (*(char *)(lVar18 + lVar17) == '\n') goto LAB_00103727;
            }
          } while (iVar9 < 4);
          lVar17 = (long)(iVar9 + -4);
          if (lVar16 <= lVar17) goto LAB_00103b3b;
        } while (*(char *)(lVar18 + lVar17) != '\r');
        lVar17 = (long)(iVar9 + -3);
        if (lVar16 <= lVar17) goto LAB_00103b3b;
      } while ((*(char *)(lVar18 + lVar17) != '\n') || (*pcVar1 != '\r'));
      lVar17 = (long)(iVar9 + -1);
      if (lVar16 <= lVar17) goto LAB_00103b3b;
    } while (*(char *)(lVar18 + lVar17) != '\n');
LAB_00103727:
    Vector<unsigned_char>::push_back((Vector<unsigned_char> *)(this + 0x1e0),'\0');
    lVar18 = *(long *)(this + 0x1e8);
    local_b8 = 0;
    if (lVar18 == 0) {
      uVar8 = false;
    }
    else {
      uVar8 = (undefined1)*(undefined8 *)(lVar18 + -8);
    }
    this_00 = (CowData<String> *)(this + 600);
    String::parse_utf8((char *)&local_b8,(int)lVar18,(bool)uVar8);
    String::split((char *)&local_88,SUB81(&local_b8,0),0x1050d3);
    uVar6 = _UNK_00107dd8;
    uVar13 = __LC16;
    this[0x1f0] = (HTTPClientTCP)0x0;
    this[0x20c] = (HTTPClientTCP)0x0;
    *(undefined4 *)(this + 0x208) = 0;
    this[0x220] = (HTTPClientTCP)0x0;
    *(undefined8 *)(this + 0x210) = uVar13;
    *(undefined8 *)(this + 0x218) = uVar6;
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x1e8),0);
    if ((*(long *)(this + 600) != 0) && (*(long *)(*(long *)(this + 600) + -8) != 0)) {
      CowData<String>::_unref(this_00);
    }
    *(undefined4 *)(this + 0x248) = 200;
    if (local_80 == (char *)0x0) {
      bVar21 = true;
    }
    else {
      lVar18 = 0;
      bVar21 = true;
      do {
        if (*(long *)(local_80 + -8) <= lVar18) break;
        String::strip_edges(SUB81(&local_b0,0),(bool)((char)local_80 + (char)lVar18 * '\b'));
        String::to_lower();
        if (local_a8 != 0) {
          if (1 < *(uint *)(local_a8 + -8)) {
            cVar7 = String::begins_with((char *)&local_a8);
            if (cVar7 == '\0') {
              cVar7 = String::begins_with((char *)&local_a8);
              if (cVar7 == '\0') {
                cVar7 = String::begins_with((char *)&local_a8);
                if (cVar7 != '\0') {
                  bVar21 = false;
                }
              }
              else {
                wVar19 = (wchar32)&local_b0;
                String::find_char(wVar19,0x3a);
                String::substr((int)&local_98,wVar19);
                String::strip_edges(SUB81((String *)&local_a0,0),SUB81(&local_98,0));
                pOVar12 = local_98;
                if (local_98 != (Object *)0x0) {
                  LOCK();
                  pOVar14 = local_98 + -0x10;
                  *(long *)pOVar14 = *(long *)pOVar14 + -1;
                  UNLOCK();
                  if (*(long *)pOVar14 == 0) {
                    local_98 = (Object *)0x0;
                    Memory::free_static(pOVar12 + -0x10,false);
                  }
                }
                cVar7 = String::operator==((String *)&local_a0,"chunked");
                lVar16 = local_a0;
                if (cVar7 != '\0') {
                  this[0x1f0] = (HTTPClientTCP)0x1;
                }
                if (local_a0 != 0) {
                  LOCK();
                  plVar2 = (long *)(local_a0 + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    local_a0 = 0;
                    Memory::free_static((void *)(lVar16 + -0x10),false);
                  }
                }
              }
            }
            else {
              wVar19 = (wchar32)&local_a8;
              String::find_char(wVar19,0x3a);
              String::substr((int)&local_a0,wVar19);
              String::strip_edges(SUB81(&local_98,0),SUB81(&local_a0,0));
              uVar13 = String::to_int();
              pOVar12 = local_98;
              *(undefined8 *)(this + 0x210) = uVar13;
              if (local_98 != (Object *)0x0) {
                LOCK();
                pOVar14 = local_98 + -0x10;
                *(long *)pOVar14 = *(long *)pOVar14 + -1;
                UNLOCK();
                if (*(long *)pOVar14 == 0) {
                  local_98 = (Object *)0x0;
                  Memory::free_static(pOVar12 + -0x10,false);
                }
              }
              lVar16 = local_a0;
              if (local_a0 != 0) {
                LOCK();
                plVar2 = (long *)(local_a0 + -0x10);
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (*plVar2 == 0) {
                  local_a0 = 0;
                  Memory::free_static((void *)(lVar16 + -0x10),false);
                }
              }
              *(undefined8 *)(this + 0x218) = *(undefined8 *)(this + 0x210);
            }
            if (lVar18 == 0) {
              if (local_80 == (char *)0x0) {
LAB_001046ea:
                lVar16 = 0;
LAB_001046ed:
                lVar17 = 0;
LAB_00103b3b:
                _err_print_index_error
                          ("get","./core/templates/cowdata.h",0xdb,lVar17,lVar16,"p_index","size()",
                           "",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
              lVar16 = *(long *)(local_80 + -8);
              if (lVar16 < 1) goto LAB_001046ed;
              cVar7 = String::begins_with(local_80);
              if (cVar7 == '\0') goto LAB_001040d8;
              if (local_80 == (char *)0x0) goto LAB_001046ea;
              lVar16 = *(long *)(local_80 + -8);
              if (lVar16 < 1) goto LAB_001046ed;
              String::get_slicec((wchar32)&local_98,(int)local_80);
              uVar11 = String::to_int();
              pOVar12 = local_98;
              *(undefined4 *)(this + 0x248) = uVar11;
              if (local_98 != (Object *)0x0) {
                LOCK();
                pOVar14 = local_98 + -0x10;
                *(long *)pOVar14 = *(long *)pOVar14 + -1;
                UNLOCK();
                if (*(long *)pOVar14 == 0) {
                  local_98 = (Object *)0x0;
                  Memory::free_static(pOVar12 + -0x10,false);
                }
              }
            }
            else {
LAB_001040d8:
              local_98 = (Object *)0x0;
              pOVar12 = local_b0 + -0x10;
              pOVar14 = local_b0;
              if (local_b0 != (Object *)0x0) {
                do {
                  lVar16 = *(long *)pOVar12;
                  if (lVar16 == 0) goto LAB_001045ff;
                  LOCK();
                  lVar17 = *(long *)pOVar12;
                  bVar20 = lVar16 == lVar17;
                  if (bVar20) {
                    *(long *)pOVar12 = lVar16 + 1;
                    lVar17 = lVar16;
                  }
                  UNLOCK();
                } while (!bVar20);
                if (lVar17 == -1) {
LAB_001045ff:
                  pOVar14 = (Object *)0x0;
                }
                else {
                  local_98 = local_b0;
                }
              }
              if (*(long *)(this + 600) == 0) {
                lVar16 = 0;
              }
              else {
                lVar16 = *(long *)(*(long *)(this + 600) + -8);
              }
              iVar9 = CowData<String>::resize<false>(this_00,lVar16 + 1);
              if (iVar9 == 0) {
                if (*(long *)(this + 600) == 0) {
                  lVar17 = -1;
                  lVar16 = 0;
                }
                else {
                  lVar16 = *(long *)(*(long *)(this + 600) + -8);
                  lVar17 = lVar16 + -1;
                  if (-1 < lVar17) {
                    CowData<String>::_copy_on_write(this_00);
                    this_01 = (CowData<char32_t> *)(*(long *)(this + 600) + lVar17 * 8);
                    if (*(Object **)this_01 != pOVar14) {
                      CowData<char32_t>::_ref(this_01,(CowData *)&local_98);
                    }
                    goto LAB_00104185;
                  }
                }
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,lVar17,lVar16,"p_index","size()",
                           "",false,false);
              }
              else {
                _err_print_error("push_back","./core/templates/vector.h",0x142,
                                 "Condition \"err\" is true. Returning: true",0,0);
              }
LAB_00104185:
              if (pOVar14 != (Object *)0x0) {
                LOCK();
                pOVar14 = pOVar14 + -0x10;
                *(long *)pOVar14 = *(long *)pOVar14 + -1;
                UNLOCK();
                if (*(long *)pOVar14 == 0) {
                  Memory::free_static(local_98 + -0x10,false);
                }
              }
            }
            if (local_a8 == 0) goto LAB_00103831;
          }
          lVar16 = local_a8;
          LOCK();
          plVar2 = (long *)(local_a8 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_a8 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
LAB_00103831:
        pOVar12 = local_b0;
        if (local_b0 != (Object *)0x0) {
          LOCK();
          pOVar14 = local_b0 + -0x10;
          *(long *)pOVar14 = *(long *)pOVar14 + -1;
          UNLOCK();
          if (*(long *)pOVar14 == 0) {
            local_b0 = (Object *)0x0;
            Memory::free_static(pOVar12 + -0x10,false);
          }
        }
        lVar18 = lVar18 + 1;
      } while (local_80 != (char *)0x0);
    }
    if (this[0x1d2] == (HTTPClientTCP)0x0) {
      if ((*(long *)(this + 0x210) != -1) || (this[0x1f0] != (HTTPClientTCP)0x0)) goto LAB_001043fc;
      uVar11 = 5;
      if (!bVar21) {
        this[0x220] = (HTTPClientTCP)0x1;
        goto LAB_001043fc;
      }
    }
    else {
      *(undefined1 (*) [16])(this + 0x210) = (undefined1  [16])0x0;
LAB_001043fc:
      uVar11 = 7;
    }
    *(undefined4 *)(this + 0x17c) = uVar11;
    CowData<String>::_unref((CowData<String> *)&local_80);
    lVar18 = local_b8;
    if (local_b8 != 0) {
      LOCK();
      plVar2 = (long *)(local_b8 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_b8 = 0;
        Memory::free_static((void *)(lVar18 + -0x10),false);
      }
    }
    goto LAB_001034e4;case 8:case 9:
switchD_001032cf_caseD_8:
    iVar10 = 0x1b;
    goto LAB_001034e4;
  }
  iVar10 = 0;
LAB_001034e4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_00103bde_caseD_2:
  *(undefined4 *)(this + 0x17c) = 4;
switchD_001032cf_caseD_4:
  iVar10 = 0x19;
  goto LAB_001034e4;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
  if ((configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* Object::get_save_class() const */

void Object::get_save_class(void)

{
  long lVar1;
  long *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*in_RSI + 0x48))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x107d,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x107d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RefCounted::_getv(StringName const&, Variant&) const */

undefined8 RefCounted::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_setv(StringName const&, Variant const&) */

undefined8 RefCounted::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_validate_propertyv(PropertyInfo&) const */

void RefCounted::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RefCounted::_property_can_revertv(StringName const&) const */

undefined8 RefCounted::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RefCounted::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_notificationv(int, bool) */

void RefCounted::_notificationv(int param_1,bool param_2)

{
  return;
}



/* HTTPClient::is_class_ptr(void*) const */

uint __thiscall HTTPClient::is_class_ptr(HTTPClient *this,void *param_1)

{
  return (uint)CONCAT71(0x107d,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x107d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x107d,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* HTTPClient::_getv(StringName const&, Variant&) const */

undefined8 HTTPClient::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* HTTPClient::_setv(StringName const&, Variant const&) */

undefined8 HTTPClient::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* HTTPClient::_validate_propertyv(PropertyInfo&) const */

void HTTPClient::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* HTTPClient::_property_can_revertv(StringName const&) const */

undefined8 HTTPClient::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* HTTPClient::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HTTPClient::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* HTTPClient::_notificationv(int, bool) */

void HTTPClient::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00107a18;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00107a18;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* RefCounted::_get_class_namev() const */

undefined8 * RefCounted::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00105163:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105163;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_001051ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_001051ce:
  return &_get_class_namev()::_class_name_static;
}



/* HTTPClient::_get_class_namev() const */

undefined8 * HTTPClient::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00105243:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105243;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HTTPClient");
      goto LAB_001052ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HTTPClient");
LAB_001052ae:
  return &_get_class_namev()::_class_name_static;
}



/* RefCounted::get_class() const */

void RefCounted::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HTTPClient::get_class() const */

void HTTPClient::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* HTTPClientTCP::poll() [clone .cold] */

void HTTPClientTCP::poll(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_0010551f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010551f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_001055d3;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00105683;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00105683:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_001055d3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_001055d3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HTTPClient::is_class(String const&) const */

undefined8 __thiscall HTTPClient::is_class(HTTPClient *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_001057af;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001057af:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_00105863;
  }
  cVar5 = String::operator==(param_1,"HTTPClient");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00105863:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "RefCounted";
    local_50 = 0;
    local_30 = 10;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "RefCounted";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00105bc8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105bc8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00105be6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00105be6:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HTTPClient::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall HTTPClient::_get_property_listv(HTTPClient *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "HTTPClient";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HTTPClient";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00105fc8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105fc8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105fe5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105fe5:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"HTTPClient",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HTTPClient::_initialize_classv() */

void HTTPClient::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_0010640b;
  if (RefCounted::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_68 = 0;
    local_50 = 6;
    local_58 = "Object";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "RefCounted";
    local_70 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 == 0) {
LAB_0010651a:
      if ((code *)PTR__bind_methods_0010a010 != RefCounted::_bind_methods) {
LAB_0010652a:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010651a;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_0010a010 != RefCounted::_bind_methods) goto LAB_0010652a;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "HTTPClient";
  local_70 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
  ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  lVar2 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((code *)PTR__bind_methods_0010a008 != RefCounted::_bind_methods) {
    HTTPClient::_bind_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_0010640b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00106760) */
/* WARNING: Removing unreachable block (ram,0x00106890) */
/* WARNING: Removing unreachable block (ram,0x00106a08) */
/* WARNING: Removing unreachable block (ram,0x0010689c) */
/* WARNING: Removing unreachable block (ram,0x001068a6) */
/* WARNING: Removing unreachable block (ram,0x001069ea) */
/* WARNING: Removing unreachable block (ram,0x001068b2) */
/* WARNING: Removing unreachable block (ram,0x001068bc) */
/* WARNING: Removing unreachable block (ram,0x001069cc) */
/* WARNING: Removing unreachable block (ram,0x001068c8) */
/* WARNING: Removing unreachable block (ram,0x001068d2) */
/* WARNING: Removing unreachable block (ram,0x001069ae) */
/* WARNING: Removing unreachable block (ram,0x001068de) */
/* WARNING: Removing unreachable block (ram,0x001068e8) */
/* WARNING: Removing unreachable block (ram,0x00106990) */
/* WARNING: Removing unreachable block (ram,0x001068f4) */
/* WARNING: Removing unreachable block (ram,0x001068fe) */
/* WARNING: Removing unreachable block (ram,0x00106972) */
/* WARNING: Removing unreachable block (ram,0x00106906) */
/* WARNING: Removing unreachable block (ram,0x00106910) */
/* WARNING: Removing unreachable block (ram,0x00106957) */
/* WARNING: Removing unreachable block (ram,0x00106918) */
/* WARNING: Removing unreachable block (ram,0x0010692d) */
/* WARNING: Removing unreachable block (ram,0x00106939) */
/* String vformat<String, int, String>(String const&, String const, int const, String const) */

undefined8 *
vformat<String,int,String>
          (undefined8 *param_1,bool *param_2,String *param_3,int param_4,String *param_5)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_f8 [8];
  undefined8 local_f0 [9];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_a8,param_3);
  Variant::Variant(local_90,param_4);
  iVar2 = 0;
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar4 = (int)local_f8;
  Array::resize(iVar4);
  pVVar3 = local_a8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 3);
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
  pVVar3 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00106b80) */
/* WARNING: Removing unreachable block (ram,0x00106cb0) */
/* WARNING: Removing unreachable block (ram,0x00106e29) */
/* WARNING: Removing unreachable block (ram,0x00106cbc) */
/* WARNING: Removing unreachable block (ram,0x00106cc6) */
/* WARNING: Removing unreachable block (ram,0x00106e0b) */
/* WARNING: Removing unreachable block (ram,0x00106cd2) */
/* WARNING: Removing unreachable block (ram,0x00106cdc) */
/* WARNING: Removing unreachable block (ram,0x00106ded) */
/* WARNING: Removing unreachable block (ram,0x00106ce8) */
/* WARNING: Removing unreachable block (ram,0x00106cf2) */
/* WARNING: Removing unreachable block (ram,0x00106dcf) */
/* WARNING: Removing unreachable block (ram,0x00106cfe) */
/* WARNING: Removing unreachable block (ram,0x00106d08) */
/* WARNING: Removing unreachable block (ram,0x00106db1) */
/* WARNING: Removing unreachable block (ram,0x00106d14) */
/* WARNING: Removing unreachable block (ram,0x00106d1e) */
/* WARNING: Removing unreachable block (ram,0x00106d93) */
/* WARNING: Removing unreachable block (ram,0x00106d26) */
/* WARNING: Removing unreachable block (ram,0x00106d30) */
/* WARNING: Removing unreachable block (ram,0x00106d78) */
/* WARNING: Removing unreachable block (ram,0x00106d38) */
/* WARNING: Removing unreachable block (ram,0x00106d4e) */
/* WARNING: Removing unreachable block (ram,0x00106d5a) */
/* String vformat<String, int>(String const&, String const, int const) */

undefined8 * vformat<String,int>(undefined8 *param_1,bool *param_2,String *param_3,int param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar3 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* HTTPClientTCP::~HTTPClientTCP() */

void __thiscall HTTPClientTCP::~HTTPClientTCP(HTTPClientTCP *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00107b78;
  CowData<String>::_unref((CowData<String> *)(this + 600));
  if (*(long *)(this + 0x240) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x240);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x238) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x238);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x230) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x230);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x228) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x228);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x200) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x200) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x200);
      *(undefined8 *)(this + 0x200) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x1e8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1e8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1e8);
      *(undefined8 *)(this + 0x1e8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x1d8) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x1d8);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x1c8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1c8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1c8);
      *(undefined8 *)(this + 0x1c8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x1b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1b8);
      *(undefined8 *)(this + 0x1b8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x1a8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1a8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1a8);
      *(undefined8 *)(this + 0x1a8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x198) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x198) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x198);
      *(undefined8 *)(this + 0x198) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Array::~Array((Array *)(this + 0x188));
  *(undefined ***)this = &PTR__initialize_classv_00107a18;
  Object::~Object((Object *)this);
  return;
}



/* HTTPClientTCP::~HTTPClientTCP() */

void __thiscall HTTPClientTCP::~HTTPClientTCP(HTTPClientTCP *this)

{
  ~HTTPClientTCP(this);
  operator_delete(this,0x268);
  return;
}



/* CowData<String>::_realloc(long) */

undefined8 __thiscall CowData<String>::_realloc(CowData<String> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<String>::resize<false>(long) */

undefined8 __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
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
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)this + -8);
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
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00107610:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
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
  if (lVar10 == 0) goto LAB_00107610;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_001074e9:
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while( true ) {
        plVar2 = (long *)(lVar6 + uVar8 * 8);
        if (*plVar2 != 0) break;
        uVar8 = uVar8 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_001074e9;
      }
      LOCK();
      plVar1 = (long *)(*plVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *plVar2;
        *plVar2 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_00107666;
  }
  if (lVar10 == lVar7) {
LAB_0010758f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00107666:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010757a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010758f;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar6 = 0;
  }
  memset(puVar9 + lVar6,0,(param_1 - lVar6) * 8);
LAB_0010757a:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<unsigned char>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned char>::resize<false>(long) */

undefined8 __thiscall
CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar5 = *(long *)this;
  if (lVar5 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
LAB_001078ae:
    lVar9 = 0;
    lVar5 = 0;
  }
  else {
    lVar9 = *(long *)(lVar5 + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar2 = (long *)(lVar5 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar5 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    if (lVar9 == 0) goto LAB_001078ae;
    uVar4 = lVar9 - 1U | lVar9 - 1U >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    lVar5 = (uVar4 | uVar4 >> 0x20) + 1;
  }
  uVar4 = param_1 - 1U | param_1 - 1U >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar1 = uVar4 + 1;
  if (lVar9 < param_1) {
    if (lVar1 != lVar5) {
      if (lVar9 == 0) {
        puVar6 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar6 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar8 = puVar6 + 2;
        *puVar6 = 1;
        puVar6[1] = 0;
        *(undefined8 **)this = puVar8;
        goto LAB_001077ec;
      }
      uVar7 = _realloc(this,lVar1);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
    }
    puVar8 = *(undefined8 **)this;
    if (puVar8 != (undefined8 *)0x0) {
LAB_001077ec:
      puVar8[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar1 != lVar5) && (uVar7 = _realloc(this,lVar1), (int)uVar7 != 0)) {
      return uVar7;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* WARNING: Control flow encountered bad instruction data */
/* HTTPClientTCP::~HTTPClientTCP() */

void __thiscall HTTPClientTCP::~HTTPClientTCP(HTTPClientTCP *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
